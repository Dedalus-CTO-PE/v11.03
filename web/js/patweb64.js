//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb64.js
//========================================================================
//   Report 1
//========================================================================
var widthrep01 = 600;

function ShowDetail01(linkurl) {
  Left=(document.body.clientWidth-widthrep01)/2;
  DFrameLink(linkurl,0,Left,widthrep01,280);
}
function EditCode01() {
  SelectCode.template.value=3;
  SelectCode.ptcod001.value=SelectCode.startkey.value;
  SelectCode.ptcod002.value=SelectCode.startkey.value;

  Left=(document.body.clientWidth-widthrep01)/2;
  DFrameSubmit(SelectCode,0,Left,widthrep01,280);
}
function StartList01(StartKey) {
  location.href="patweb64.pbl?reportno=01&template=001&startkey="+StartKey;
}
function StartList04(StartKey) {
  location.href="patweb64.pbl?reportno=01&template=004&startkey="+StartKey;
}
var bbmousex = 0;
var bbmousey = 0;

function initMouse()
{
  document.onmousemove = getMouseXY;
}

function getMouseXY(e) // works on IE6,FF,Moz,Opera7
{
  if (!e) e = window.event; // works on IE only (others rely on browser passing us the event)

  if (e)
  {
    if (e.pageX || e.pageY)
    { // this doesn't work on IE6!! (works on FF,Moz,Opera7)
      bbmousex = e.pageX;
      bbmousey = e.pageY;
    }
    else if (e.clientX || e.clientY)
    { // works on IE6,FF,Moz,Opera7
      bbmousex = e.clientX + document.body.scrollLeft;
      bbmousey = e.clientY + document.body.scrollTop;
    }
  }
}

function show_it(x)
{
  var cw   = getClientWidth();
  var ch   = getClientHeight();
  var bbmousey_t = bbmousey - document.body.scrollTop
  var top = (bbmousey_t > (ch - 50)) ? ch - 50: bbmousey;
  var left = (bbmousex > (cw - 400)) ? bbmousex - 400: bbmousex + 60;
  var box1 = document.getElementById('box1');
             box1.style.top  = top  + 'px';
             box1.style.left = left + 'px';
             box1.style.width = '400px';
             box1.innerHTML  = x;
             box1.style.visibility = "visible";
}
function hide_it(){
  var box1 = document.getElementById('box1');
             box1.style.visibility = "hidden";
}

