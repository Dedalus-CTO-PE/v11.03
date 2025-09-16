//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb1203.js
//
// Written   : 09/10/2008
//
// Function  : Standard Functions Used in patweb1203 templates
//========================================================================

var bbmousex = 0;
var bbmousey = 0;

function init()
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

function PostSearch() {
  if(isWhitespace(SearchForm.srchsnam.value) &&
     isWhitespace(SearchForm.srchgnam.value)) {
     alert("Surname is a required field.\nPlease enter it now.");
     SearchForm.srchsnam.focus();
     return;
  }
  document.SearchForm.submit();
}
function ResetSearch() {
  SearchForm.srchsnam.value="";
  SearchForm.srchgnam.value="";
  SearchForm.submit();
}
function ShowBedLegend() {
  LinkUrl="patweb12.pbl?reportno=3&template=2" 
  Left=(((document.body.clientWidth-550)/2)+ document.body.scrollLeft)
  DFrameLink(LinkUrl,0,Left,550,400)
}
function ViewBedHistory(ward,bed) {
  LinkUrl="patweb12.pbl?reportno=3&template=3" +
          "&wardcode=" + ward.replace(/ /g,"+") +
          "&beddcode=" + bed.replace(/ /g,"+")
  Left=(((document.body.clientWidth-500)/2)+ document.body.scrollLeft)
  DFrameLink(LinkUrl,0,Left,500,170)
}
//----------------------------------------------------------------------
// Function : Open a Dynamic Frame to a URL
//----------------------------------------------------------------------
function DFrameLink(LinkToUrl,FrameTop,FrameLeft,FrameWidth,FrameHeight)
{
  var PopUpFrameDoc = DFrameStart();
  var PopUpScreen = document.getElementById('PopUpScreen');

  PopUpFrameDoc.location.href = LinkToUrl;
  var MaxWidth  = getClientWidth() - FrameLeft;
  var MaxHeight = getClientHeight() - FrameTop;

  var w   = FrameWidth; 
  var h   = (MaxHeight > FrameHeight) ? FrameHeight : MaxHeight;
  var top = FrameTop + document.body.scrollTop;

  PopUpScreen.style.top     = top + 'px';
  PopUpScreen.style.left    = FrameLeft + 'px';
  PopUpScreen.style.width   = w + 'px';
  PopUpScreen.style.height  = h + 'px';
  PopUpScreen.style.display = "";
}
function ViewExpected(ward,bed,tomorrow) {
  LinkUrl="patweb12.pbl?reportno=3&template=7" +
          "&wardcode=" + ward.replace(/ /g,"+") +
          "&beddcode=" + bed.replace(/ /g,"+") +
          "&tomrflag=" + tomorrow.replace(/ /g,"+") 
  Left=(((document.body.clientWidth-450)/2)+ document.body.scrollLeft)
  DFrameLink(LinkUrl,0,Left,450,300)
}
function ViewBlocked(ward,bed,tomrflag) {
  LinkUrl="patweb12.pbl?reportno=3&template=4" +
          "&wardcode=" + ward.replace(/ /g,"+") +
          "&beddcode=" + bed.replace(/ /g,"+") +
          "&tomrflag=" + tomrflag.replace(/ /g,"+") 
  Left=(((document.body.clientWidth-400)/2)+ document.body.scrollLeft)
  DFrameLink(LinkUrl,0,Left,400,170)
}
function WardOccupancyLink(ward) {
  LinkUrl="patweb93.pbl?reportno=13&template=2" +
          "&wardcode=" + ward.replace(/ /g,"+") 
  location.href=LinkUrl;
}
function BedRequestLink(sjogflag) {
  LinkUrl="patweb10.pbl?reportno=9&template=1" +
          "&sjogflag=" + sjogflag 
  location.href=LinkUrl;
}
function BedAllocation(urnumber,admissno) {
  AJAXReset();
  linkurl="patweb96.pbl?reportno=3&template=005" +
          "&urnumber=" + urnumber + "&admissno=" + admissno
  Left=(((document.body.clientWidth-300)/2)+ document.body.scrollLeft)
  DFrameLink(linkurl,0,Left,300,120)
}
function UpdateExpected(urnumber,admissno) {
  AJAXReset();
  linkurl="patweb12.pbl?reportno=4&template=001" +
          "&urnumber=" + urnumber + "&admissno=" + admissno
  Left=(((document.body.clientWidth-450)/2)+ document.body.scrollLeft)
  DFrameLink(linkurl,0,Left,450,200)
}
function BBRefresh(timeOut) {
    if(timeOut==0){
      //default bed board minutes set to 5
      window.setInterval('AJAXRefresh()',5 * 60 * 1000);
    } else {
      window.setInterval('AJAXRefresh()',timeOut * 60 * 1000);
    }    
}
function show_it(x)
{
  var cw   = getClientWidth();
  var ch   = getClientHeight();
  var bbmousey_t = bbmousey - document.body.scrollTop;

  var offsetx = 22; 
  var offsety = 20;
  var top = (bbmousey_t > (ch - 300)) ? ch - 300: bbmousey + offsety;
  var left = (bbmousex > (cw - 400)) ? bbmousex - 400 - (offsetx + 10): bbmousex + offsetx;

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
function show_itE(x)
{
  var cw   = getClientWidth();
  var ch   = getClientHeight();
  var bbmousey_t = bbmousey - document.body.scrollTop
  var top = (bbmousey_t > (ch - 300)) ? ch - 300: bbmousey;
  var left = (bbmousex > (cw - 400)) ? bbmousex - 400: bbmousex + 60;
  var box2 = document.getElementById('box2');
             box2.style.top  = top  + 'px';
             box2.style.left = left + 'px';
             box2.style.width = '400px';
             box2.innerHTML  = x;
             box2.style.visibility = "visible";
}
function hide_itE(){
  var box2 = document.getElementById('box2');
             box2.style.visibility = "hidden";
}
function LinktoPatient(urnumber,admissno) {
  LinkUrl="patweb98.pbl?reportno=1&template=1" +
          "&urnumber=" + urnumber.replace(/ /g,"+") +
          "&admissno=" + admissno.replace(/ /g,"+")
  location.href=LinkUrl
}
function UpdateRequest(vis,dat,tim,ur) {
  linkurl="patweb10.pbl?reportno=08&template=003" +
          "&urnumber=" + ur.replace(/ /g,"+") +
          "&admissno=" + vis.replace(/ /g,"+") +
          "&pmbrq001=" + vis.replace(/ /g,"+") +
          "&pmbrq002=" + dat.replace(/ /g,"+") +
          "&pmbrq003=" + tim.replace(/ /g,"+")
  Left=(((document.body.clientWidth-750)/2)+ document.body.scrollLeft)
  DFrameLink(linkurl,50,Left,900,600)
}
//----------------------------------------------------------------------
// Function : Open a Dynamic Frame to a URL with no max FrameWidth test
//----------------------------------------------------------------------
function DFrameLink(LinkToUrl,FrameTop,FrameLeft,FrameWidth,FrameHeight)
{
  var PopUpFrameDoc = DFrameStart();
  var PopUpScreen = document.getElementById('PopUpScreen');

  PopUpFrameDoc.location.href = LinkToUrl;
  var MaxWidth  = getClientWidth() - FrameLeft;
  var MaxHeight = getClientHeight() - FrameTop;

  var w   = FrameWidth;
  var h   = (MaxHeight > FrameHeight) ? FrameHeight : MaxHeight;
  var top = FrameTop + document.body.scrollTop;

  PopUpScreen.style.top     = top + 'px';
  PopUpScreen.style.left    = FrameLeft + 'px';
  PopUpScreen.style.width   = w + 'px';
  PopUpScreen.style.height  = h + 'px';
  PopUpScreen.style.display = "";
}
function ModBeds(ward) {
  document.cookie = "WardListPath=" + escape(location.href) + ";";
  location.href="patweb95.pbl?reportno=5&template=001&wardcode=" +
                 ward.replace(/ /g,"+");
}
function AJAXReset() {
  SearchForm.srchsnam.value="";
  SearchForm.srchgnam.value="";
  PageSearchResults.style.visibility   = "hidden";
}
function findPos(obj) {
  var curleft = curtop = 0;
  if (obj.offsetParent) {
    do { curleft += obj.offsetLeft;
         curtop += obj.offsetTop;
       } while (obj = obj.offsetParent);
  }
  return [curleft,curtop];
}
function AJAXSearch() {
  UpCase(SearchForm.srchsnam)
  UpCase(SearchForm.srchgnam)
  if(isWhitespace(SearchForm.srchsnam.value) &&
     isWhitespace(SearchForm.srchgnam.value)) {
     alert("Surname is a required field.\nPlease enter it now.");
     SearchForm.srchsnam.focus();
     return;
   }
   startDate = new Date();
   startTime = startDate.getTime();
   ProgressBar.innerHTML='Loading Page ....';
   ProgressBar.style.backgroundImage='url(../images/ProgressBar.gif)';
   theURL = "patweb12.pbl?reportno=3&template=11"
   theURL += "&srchsnam="+SearchForm.srchsnam.value
   theURL += "&srchgnam="+SearchForm.srchgnam.value
   if(SearchForm.tomrflag!=undefined) {
     theURL += "&tomrflag="+SearchForm.tomrflag.value
   }
   xmlHttp = createHttpObject();
   theURL = theURL + '&httprand='+Math.random();
   xmlHttp.open("GET", theURL, true);
   xmlHttp.onreadystatechange=function() {
    if (xmlHttp.readyState==4) {
      if (xmlHttp.responseText!="") {
        PageSearchResults.innerHTML   = xmlHttp.responseText;
        PageSearchResults.style.visibility   = "visible";
        thePos=findPos(SearchForm.srchsnam);
        PageSearchResults.style.left  = thePos[0];
        PageSearchResults.style.top   = thePos[1]+SearchForm.srchsnam.offsetHeight;
        startDate = new Date();
        endTime = startDate.getTime();
        ProgressBar.style.backgroundImage='url()';
        ProgressBar.innerHTML='Load Time: '+((endTime-startTime)/1000)+' sec';
      }
    }
  }
  xmlHttp.send();
  return true;
}
function ViewOnLeave(ward,bed) {
  LinkUrl="patweb12.pbl?reportno=3&template=13" +
          "&wardcode=" + ward.replace(/ /g,"+") +
          "&beddcode=" + bed.replace(/ /g,"+")
  Left=(((document.body.clientWidth-400)/2)+ document.body.scrollLeft)
  DFrameLink(LinkUrl,0,Left,400,170)
}
