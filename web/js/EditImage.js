//jsVersion  : V11.03.00
//
// Program  : ImageEdit.js 
//
// Function : Enable Drawing and Annotation to a Clinical Image 
//            using the HTML5 Canvas Element
//
// Modification :
//
// V10.04.01 B.G.Ackland CAR 303287
//           New Component for Clinical Drawings and Illustraions
//
var redoLog = new Array();
var redoCount = -1;
var isMarker=false;
var imarkerType="dot";
var isText=false;
function saveStep() {
    redoCount++;
    if (redoCount < redoLog.length) { redoLog.length = redoCount; }
    redoLog[redoCount]=document.getElementById('pictureThis').toDataURL();
}
function undoStep() {
  var canvas = document.getElementById('pictureThis');
  var context = canvas.getContext('2d');
  if (redoCount > 0) {
    redoCount--;
    var canvasPic = new Image();
    canvasPic.src = redoLog[redoCount];
    canvasPic.onload = function () { 
      var canvas = document.getElementById('pictureThis');
      var context = canvas.getContext('2d');
      context.drawImage(canvasPic, 0, 0); }
  }
}
function redoStep() {
  var canvas = document.getElementById('pictureThis');
  var context = canvas.getContext('2d');
    if (redoCount < redoLog.length-1) {
      redoCount++;
      var canvasPic = new Image();
      canvasPic.src = redoLog[redoCount];
      canvasPic.onload = function () { 
        var canvas = document.getElementById('pictureThis');
        var context = canvas.getContext('2d');
        context.drawImage(canvasPic, 0, 0); }
    }
}
// get the canvas element and its context
window.addEventListener('load',function(){
  var canvas = document.getElementById('pictureThis');
  var context = canvas.getContext('2d');
  var picture = document.getElementById("pictureBase");
  var width = picture.width;
  var height = picture.height;
  var isStart=true;
  var startX;
  var startY;
  picture.style.display='none';
  canvas.width=600;
  canvas.height=400;
  context.fillStyle = '#fff'; 
  context.strokeStyle = '#fff';
  context.fillRect(0, 0, 600, 400);
  saveStep();
  var x = canvas.width / 2;
  var y = canvas.height / 2;
  context.translate(x, y);
  if (picture.src!="") {
    context.drawImage(picture, -width / 2, -height / 2, width, height);
    context.translate(-x, -y);
    context.fillStyle = '#00f'; 
    context.strokeStyle = '#00f';
    context.lineWidth = 3;
    saveStep();
  }


// create a drawer which tracks touch movements
  var drawer = {
    isDrawing: false,
    touchstart: function(coors){
      el = document.getElementById('lineSize'); 
      context.lineWidth=el.options[el.selectedIndex].value;
      context.beginPath();
      startX=coors.x;
      startY=coors.y;
      context.moveTo(coors.x, coors.y);
      if (isMarker) { 
        showMarker(coors,context);
        return;
      }
      if (isText) { 
        context.lineWidth = 1;
        el = document.getElementById('fontSize'); 
        context.font=el.options[el.selectedIndex].value;
        context.fillText(document.getElementById("AddText").value,coors.x, coors.y);
        el = document.getElementById('AddText'); 
        el.value="";
        isText=false;
        el = document.getElementById('lineSize'); 
        context.lineWidth=el.options[el.selectedIndex].value;
        return;
      }
      this.isDrawing = true;
    },
    mousedown: function(coors){
      el = document.getElementById('lineSize'); 
      context.lineWidth=el.options[el.selectedIndex].value;
      context.beginPath();
      startX=coors.x;
      startY=coors.y;
      context.moveTo(coors.x, coors.y);
      if (isMarker) { 
        showMarker(coors,context);
        return;
      }
      if (isText) { 
        context.lineWidth = 1;
        el = document.getElementById('fontSize'); 
        context.font=el.options[el.selectedIndex].value;
        context.fillText(document.getElementById("AddText").value,coors.x, coors.y);
        el = document.getElementById('AddText'); 
        el.value="";
        isText=false;
        el = document.getElementById('lineSize'); 
        context.lineWidth=el.options[el.selectedIndex].value;
        saveStep();
        return;
      }
      this.isDrawing = true;
    },
    touchmove: function(coors){
      if (this.isDrawing) {
        context.lineTo(coors.x, coors.y);
        context.stroke();
      }
    },
    mousemove: function(coors){
      if (this.isDrawing) {
        context.lineTo(coors.x, coors.y);
        context.stroke();
      }
    },
    touchend: function(coors){
      if (this.isDrawing) {
        this.touchmove(coors);
        this.isDrawing = false;
        saveStep();
      }
    },
    touchcancel: function(coors){
      if (this.isDrawing) {
        this.touchmove(coors);
        this.isDrawing = false;
        saveStep();
      }
    },
    mouseup: function(coors){
      if (this.isDrawing) {
        this.mousemove(coors);
        this.isDrawing = false;
        saveStep();
      }
    }
  };
  function showMarker(coors,context) {
    if (markerType=="dot") {
      var dotSize=context.lineWidth;
      context.beginPath();
      context.arc(coors.x, coors.y, dotSize, 0, Math.PI * 2, true); 
      context.closePath();
      context.fill();
      saveStep();
      return
    }
    if (markerType=="circle") {
      var dotSize=context.lineWidth;
      context.lineWidth=3;
      context.beginPath();
      context.arc(coors.x, coors.y, dotSize, 0, Math.PI * 2, true); 
      context.closePath();
      context.stroke();
      saveStep();
      return
    }
    if (markerType=="cross") {
      var crossSize=context.lineWidth;
      context.lineWidth=crossSize/2;
      context.beginPath();
      context.moveTo(coors.x-crossSize, coors.y+crossSize); 
      context.lineTo(coors.x+crossSize, coors.y-crossSize); 
      context.stroke();
      context.beginPath();
      context.moveTo(coors.x-crossSize, coors.y-crossSize); 
      context.lineTo(coors.x+crossSize, coors.y+crossSize); 
      context.stroke();
      saveStep();
      return
    }
    if (markerType=="arrowUp") {
      var crossSize=context.lineWidth;
      context.lineWidth=crossSize/2;
      context.beginPath();
      context.lineJoin="round";
      context.moveTo(coors.x-crossSize, coors.y+crossSize); 
      context.lineTo(coors.x, coors.y); 
      context.lineTo(coors.x+crossSize, coors.y+crossSize); 
      context.stroke();
      context.moveTo(coors.x, coors.y); 
      context.lineTo(coors.x, coors.y+(crossSize*4)); 
      context.stroke();
      saveStep();
      return
    }
    if (markerType=="arrowDown") {
      var crossSize=context.lineWidth;
      context.lineWidth=crossSize/2;
      context.beginPath();
      context.lineJoin="round";
      context.moveTo(coors.x-crossSize, coors.y-crossSize); 
      context.lineTo(coors.x, coors.y); 
      context.lineTo(coors.x+crossSize, coors.y-crossSize); 
      context.stroke();
      context.moveTo(coors.x, coors.y); 
      context.lineTo(coors.x, coors.y-(crossSize*4)); 
      context.stroke();
      saveStep();
      return
    }
    if (markerType=="arrowRight") {
      var crossSize=context.lineWidth;
      context.lineWidth=crossSize/2;
      context.beginPath();
      context.lineJoin="round";
      context.moveTo(coors.x-crossSize, coors.y+crossSize); 
      context.lineTo(coors.x, coors.y); 
      context.lineTo(coors.x-crossSize, coors.y-crossSize); 
      context.stroke();
      context.moveTo(coors.x, coors.y); 
      context.lineTo(coors.x-(crossSize*4), coors.y); 
      context.stroke();
      saveStep();
      return
    }
    if (markerType=="arrowLeft") {
      var crossSize=context.lineWidth;
      context.lineWidth=crossSize/2;
      context.beginPath();
      context.lineJoin="round";
      context.moveTo(coors.x+crossSize, coors.y-crossSize); 
      context.lineTo(coors.x, coors.y); 
      context.lineTo(coors.x+crossSize, coors.y+crossSize); 
      context.stroke();
      context.moveTo(coors.x, coors.y); 
      context.lineTo(coors.x+(crossSize*4), coors.y); 
      context.stroke();
      saveStep();
      return
    }
    if (markerType=="plus") {
      var crossSize=context.lineWidth;
      context.lineWidth=crossSize/2;
      context.beginPath();
      context.moveTo(coors.x-crossSize, coors.y); 
      context.lineTo(coors.x+crossSize, coors.y); 
      context.stroke();
      context.beginPath();
      context.moveTo(coors.x, coors.y-crossSize); 
      context.lineTo(coors.x, coors.y+crossSize); 
      context.stroke();
      saveStep();
      return
    }
  }
// create a function to pass touch events and coordinates to drawer
  function touchDraw(event){
// get the touch coordinates
    var coors = { x: event.targetTouches[0].pageX,
                  y: event.targetTouches[0].pageY
                };
    var canvas = document.getElementById('pictureThis');
    if (coors.x < canvas.offsetTop) {
     alertify.alert(coors.x+" x "+canvas.offsetTop)
     return;
    }
    if (canvas.offsetParent) {
      do {
        coors.x -= canvas.offsetLeft;
        coors.y -= canvas.offsetTop;
      }
      while ((canvas = canvas.offsetParent) != null);
// pass the coordinates to the appropriate handler
    }
    drawer[event.type](coors);
  }

// attach the touchstart, touchmove, touchend event listeners.
  function mouseDraw(e){
// get the touch coordinates
    if (!e) var e = event; 
    var coors = { x: e.pageX,
                  y: e.pageY
                };
    var canvas = document.getElementById('pictureThis');
    if (canvas.offsetParent) {
      do {
        coors.x -= canvas.offsetLeft;
        coors.y -= canvas.offsetTop;
      }
      while ((canvas = canvas.offsetParent) != null);
// pass the coordinates to the appropriate handler
    }
    drawer[event.type](coors);
  }

// attach the touchstart, touchmove, touchend event listeners.
    canvas.addEventListener("mousedown", mouseDraw, false); 
    canvas.addEventListener("mousemove", mouseDraw, false); 
    canvas.addEventListener('touchstart',touchDraw, false);
    canvas.addEventListener('touchmove',touchDraw, false);
    canvas.addEventListener('touchend',touchDraw, false);
    canvas.addEventListener('touchcancel',touchDraw, false);
    document.body.addEventListener("mouseup", mouseDraw, false); 

// prevent elastic scrolling
    document.body.addEventListener('touchmove',function(event){
      event.preventDefault();
    },false);	// end body.onTouchMove
},false);	// end window.onLoad
function MarkPicture(el) {
  markerType=el;
  isMarker=true;
}
function DrawFreehand(e) {
  isMarker=false;
  isText=false;
}
function TextPicture() {
  el = document.getElementById('AddText');
  if (isWhitespace(el.value)) {
    isMarker=true;
    isText=false;
  } else {
    isMarker=false;
    isText=true;
  }
}
function setColor(colorValue) {
  var canvas = document.getElementById('pictureThis');
  var context = canvas.getContext('2d');
  context.fillStyle = "#"+colorValue;
  context.strokeStyle = "#"+colorValue;
  var CSSRules
  if (document.all) { CSSRules = 'rules' }
  else if (document.getElementById) { CSSRules = 'cssRules' }
  for (var i=0;i<document.styleSheets.length;i++) {
    for (var j=0;j<document.styleSheets[i][CSSRules].length;j++) {
      if (document.styleSheets[i][CSSRules][j].selectorText == '.drawTool') {
         document.styleSheets[i][CSSRules][j].style.color='#'+colorValue;
      }
    }
  }
}
function SetColor(colorValue) {
  var canvas = document.getElementById('pictureThis');
  var context = canvas.getContext('2d');
  context.fillStyle = colorValue.options[colorValue.selectedIndex].value;
  context.strokeStyle = colorValue.options[colorValue.selectedIndex].value;
}
function HideForm() {
  var el= document.getElementById('SaveFormData');
  el.style.display='';
  el.style.position='relative';
}
function ShowForm() {
  var el= document.getElementById('SaveFormData');
  el.style.position='absolute';
  el.style.top='100px';
  el.style.left='200px';
  el.style.width='400px';
  el.style.height='300px';
  el.style.display="inline-block";
}
function SavePicture() {
  var canvas = document.getElementById('pictureThis');
  var context = canvas.getContext('2d');
  var image_data = document.getElementById('image_data');
  image_data.value=canvas.toDataURL()
  document.uploadForm.submit();
}
function ClearPicture() {
  document.location.reload();
}
function LoadPicture() {
  self.close();
}
