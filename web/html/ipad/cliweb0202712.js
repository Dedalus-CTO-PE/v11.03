//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/cliweb0202712.js
//
// Modification
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.06.01 01.07.2015 B.G.Ackland CAR 312436 
//                      Fix Eye and Pupile Image Location
// V10.03.01 06.08.2013 B.G.Ackland CAR 289383
//                      New AJAXPostString2 to fix post encoding
// V10.01.01 04.12.2012 B.G.Ackland New Medical Record View Refresh
// V10.01.00 13/04/2012 Version change
// V10.00.00 13/04/2012 Created for Mobility Suite
//
var pupilSizeSlider = null;
var pupilSizeSlider2 = null;
var eye_canve = null;
var eye_ctx = null;
var pupilLabel = null;
var eyeLeft = new Image();
var eyeRight = new Image();
var pupil = new Image();
eyeLeft.src =  "../images/left_eye.jpg";
eyeRight.src = "../images/right_eye.jpg";
pupil.src =    "../images/pupil.png";


function GCS() {
  var vl1=0;
  var vl2=0;
  var vl3=0;
  var el1=document.UpdateForm.obdet016
  if (el1.selectedIndex>0) vl1=parseInt(el1.options[el1.selectedIndex].value) 
  var el2=document.UpdateForm.obdet017
  if (el2.selectedIndex>0) vl2=parseInt(el2.options[el2.selectedIndex].value) 
  var el3=document.UpdateForm.obdet018
  if (el3.selectedIndex>0) vl3=parseInt(el3.options[el3.selectedIndex].value) 
  var gcsTotal = vl1 + vl2 + vl3;
  document.UpdateForm.score.value = gcsTotal;
  document.UpdateForm.level.value = "";
  if (gcsTotal < 15) document.UpdateForm.level.value = "Minor";
  if (gcsTotal <= 12) document.UpdateForm.level.value = "Moderate";
  if (gcsTotal <= 8) document.UpdateForm.level.value = "Severe";
   
}
function setPupilSize() {
  var pupilSizeDiv = document.getElementById("pupilSizeDiv");
  var pupilLabel = document.getElementById("pupilLabel");
  var pupilLabel2 = document.getElementById("pupilLabel2");

  pupilSizeSlider = new Slider({"parentDiv":pupilSizeDiv,
				"markerOn":true,
				"max":8,
                                "min":1,
                                "step":1,
                                "decimal":0,
                                "resultLabel":pupilLabel,
                                "id":"pupilSizeRight"
                               });

 pupilSizeSlider2 = new Slider({"parentDiv":pupilSizeDiv,
                                "markerOn":true,
                                "max":8,
                                "min":1,
                                "step":1,
                                "decimal":0,
                                "resultLabel":pupilLabel2,
                                "id":"pupilSizeLeft"
                               });


  pupilSizeSlider.setSliderValues(8,1,1,0);
  pupilSizeSlider.drawGraph("Pupil Right Size");
  pupilSizeSlider.setMarkerValue({"markValue1":pupilLabel.value});
  pupilSizeSlider.redrawMarker();
  pupilSizeSlider.bindTo(pupilLabel);

  pupilSizeSlider2.setSliderValues(8,1,1,0);
  pupilSizeSlider2.drawGraph("Pupil Left Size");
  pupilSizeSlider2.setMarkerValue({"markValue1":pupilLabel2.value});
  pupilSizeSlider2.redrawMarker();
  pupilSizeSlider2.bindTo(pupilLabel2);
  
  pupilSizeSlider.setOnEnd(function () {
	redrawPupil();
  }); 
 
  pupilSizeSlider2.setOnEnd(function () {
        redrawPupil();
  });

  drawEyeCanvas();
 
}
window.onresize = function () {
   render(pupilSizeSlider,"pupilLabel");
   render(pupilSizeSlider2,"pupilLabel2");
}
function render(obj,label) {
 var l = document.getElementById(label);
 obj.bindTo(l);
}
function drawEyeCanvas() {
  eye_canvas = document.getElementById("canvas_eye");
  eye_ctx = eye_canvas.getContext("2d");
  pupilLabel =  document.getElementById("pupilLabel"); 
  pupilLabel2 =  document.getElementById("pupilLabel2");

  drawPupilAndEyes(eye_ctx,eyeLeft,pupil,pupilLabel,true); 
  drawPupilAndEyes(eye_ctx,eyeRight,pupil,pupilLabel2,false);
}

function redrawPupil() {
  eye_ctx.clearRect(0,0,eye_canvas.width,eye_canvas.height);
  drawPupilAndEyes(eye_ctx,eyeLeft,pupil,pupilLabel,true);
  drawPupilAndEyes(eye_ctx,eyeRight,pupil,pupilLabel2,false);
}

function drawPupilAndEyes(ctx,eye,pupil,pupil_size,bool) {
	
	var pupil_width = pupil_size.value * 10;
	var positionX = pupil_size.value * 7;
	var positionY = pupil_size.value * 3;

	ctx.beginPath();

        if(bool == false) {

	  ctx.drawImage(eyeLeft, 0.5,20.5,eyeLeft.width, eyeLeft.height);
          if(typeof pupil_size != "undefined")
             ctx.drawImage(pupil,(eye.width/1.66 - positionX),(eye.height/1.5 - positionY),pupil_width, pupil_width);
	  else
	     ctx.drawImage(pupil,20.5,20.5,10,10);

        }else {
	  ctx.drawImage(eyeRight, 230.5,20.5,eyeRight.width, eyeRight.height);
          if(typeof pupil_size != "undefined")
             ctx.drawImage(pupil,((2.57*eye.width)/1.5 - positionX),(eye.height/1.5 - positionY),pupil_width, pupil_width);
          else
             ctx.drawImage(pupil,20.5,20.5,10,10);

        }

	ctx.closePath();
}

function submitObservation() {
  prepare();
  var status = validateMandatory(UpdateForm);

  if (status == true) {
    var theURL = UpdateForm.action;
    var postStr = AJAXPostString2(UpdateForm);
    var xmlHttp = createHttpObject();
    xmlHttp.open("POST", theURL, false);
    xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
    xmlHttp.send(postStr);
    if (xmlHttp.status == "200") {
      if ( xmlHttp.responseText.match(/location.href/i) ){
        parent.frames['PatFrame'].refreshScreen();
        parent.CloseDocument();
      }else{
        alertify.alert( xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,"") );
      }
    }else{
      alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
    }
  }
}

function prepare() {
  var pupil1 = document.getElementById("pupilLabel");
  var pupil2 = document.getElementById("pupilLabel2");

  var obdet019 = document.getElementById("obdet019");
  var obdet020 = document.getElementById("obdet020");

  obdet019.value = pupil1.value;
  obdet020.value = pupil2.value;

}

function init() {
  var actionButton = parent.document.getElementById('actionButton');

  if(actionButton) {
     //format the action button
     actionButton.className = actionButton.className.replace(/SpanButton/g,"");
     actionButton.className = actionButton.className.replace(/Blue/g,"");
     actionButton.className = actionButton.className + " SpanButtonBlue";
     actionButton.innerText = "Update";

     actionButton.onclick = function () {
                               submitObservation();
                            };
  }
}
