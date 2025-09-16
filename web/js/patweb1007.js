//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb1007.js
//
// Written   : 09/07/2009
//
// Function  : Standard Functions Used in patweb1007 templates
//
// Version   :
//
// V9.12.00  09/07/2009  Ebon Clements  CAR 187136
//           Created Include
//========================================================================
var bbmousex = 0;
var bbmousey = 0;

function show_it(x)
{
  var cw   = getClientWidth();
  var ch   = getClientHeight();
  var bbmousey_t = bbmousey - document.body.scrollTop
  var top = (bbmousey_t > (ch - 300)) ? ch - 300: bbmousey;
  var left = (bbmousex > (cw - 250)) ? bbmousex - 250: bbmousex + 60;
  var box1 = document.getElementById('box1');
             box1.style.top  = top  + 'px';
             box1.style.left = left + 'px';
             box1.style.width = '250';
             box1.innerHTML  = x;
             box1.style.visibility = "visible";
}

function hide_it(){
  var box1 = document.getElementById('box1');
             box1.style.visibility = "hidden";
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

//========================================================================
// Display Day Comment on page load
//========================================================================
function dispDayCmt(){
  if((document.getElementById('opcnscom') != undefined) &&
     (document.getElementById('opcnscom').value=="1")){
    if(document.getElementById('dispdayc').value=="1"){
       document.getElementById('dispdcmmt').style.display="";}
    else{
      if(document.getElementById('dispdayc').value=="2"){
         document.getElementById('dispdcmbt').style.display="";
         if(document.getElementById('daycmcnt').value > 1){
            document.getElementById('daycmtbutton').className="Red";}
      }
    }
  }
}

//========================================================================
// Redirect to Update Day Comments
//========================================================================
function DayCommentsUpd(currdate){
  linkurl="../cgi-bin/oprweb05.pbl?reportno=02&template=010" +
             "&opses001=" + currdate.value;
  Left=(document.body.clientWidth-510)/2;
  DFrameLink(linkurl,0,Left,630,500);
}

