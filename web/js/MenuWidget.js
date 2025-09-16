//jsVersion  : V11.03.00
//------------------------------------------------------------
// Source Code  : MenuWidget.js
//
// Function     : 
//
// Modification :
//
// V10.00.00 28/06/2010 Jill Parkinson CAR 224339
//                      New Include
//------------------------------------------------------------
var WidgetState="";
var WidgetMaxIcon;
var OutlineWidget;
var ClickWidget;
var MinCount=0;
var MaxCount=0;
//
// Drag Widget Initialisation
//
function WidgetDragInit() {
  MinCount=0
  MaxCount=0
  var sl = document.getElementsByTagName("SPAN");
  for (i=0; i<sl.length; i++) {
    if (sl[i].className == "x-panel-title") {
      sl[i].onmousedown=function(){ mDW(this,event); };
    } 
  }
}
//============================================================
// Drag Widget
//============================================================
function mDW(ob,e) {
  window.status=ob.id
  if (ob.className!="x-panel-title") return;
  document.body.ondrag=function(){return false};
  document.body.ondragstart=function(){return false};
  document.body.onselectstart=function(){return false};
  document.onmousemove = mMDW;
  document.onmouseup = mUW;
  document.body.style.cursor="move";
  document.body.style.cursor="move";
  theWidget    = ob.parentElement
  OutlineWidget    = ob.document.getElementById('WidgetOutline');

  if (window.event) e=window.event;
 
  var dragX = parseInt(theWidget.clientLeft);
  var dragY = parseInt(theWidget.clientTop);
  OutlineWidget.style.position = "absolute";
  OutlineWidget.style.left     = theWidget.clientLeft
  OutlineWidget.style.top      = theWidget.clientTop
  OutlineWidget.style.width    = theWidget.clientWidth
  OutlineWidget.style.height   = theWidget.clientHeight
  OutlineWidget.style.border   = "1px solid blue";
  OutlineWidget.style.backgroundColor="#ccccff";
  OutlineWidget.style.filter="alpha(opacity=60)";
  OutlineWidget.style.opacity=".6";
  OutlineWidget.style.display="";
  var mouseX = e.clientX;
  var mouseY = e.clientY;

  clientX = mouseX - dragX;
  clientY = mouseY - dragY;

  isDragging = true;
  return false;
}

//============================================================
// Resize Widget to Full
//============================================================
function WidgetMax(WidgetIcon) {
  if (WidgetIcon.className==("x-tool x-tool-maximise")) {
    if (MaxCount==1) {
      RestoreLayout(WidgetMaxIcon);
    }
    MaximiseWidget(WidgetIcon)
    WidgetMaxIcon=WidgetIcon;
    MaxCount=1;
  }
  else {
    RestoreLayout(WidgetIcon)
    WidgetMaxIcon="";
    MaxCount=0;
  }
  return false;
}
function MaximiseWidget(WidgetIcon) {
  WidgetState="Maximised";
  theWidget    = WidgetIcon.parentElement.parentElement
  toolbar      = WidgetIcon.parentElement
  WidgetIcon.className     = "x-tool x-tool-tile";
  toolbar.className        = "x-panel-title"
  theWidget.Saveleft       = theWidget.clientLeft;
  theWidget.Savetop        = theWidget.clientTop
  theWidget.Savewidth      = theWidget.clientWidth;
  theWidget.Saveheight     = theWidget.clientHeight;
  theWidget.style.left     = "20px";
  theWidget.style.top      = "0px";
  theWidget.style.width    = document.body.clientWidth-40;
  theWidget.style.height   = document.body.clientHeight-100;
  theWidget.style.overflow = "auto";
  thisWidgetID=theWidget.id
  IconWidgetID=WidgetIcon.id
  var sl = document.getElementsByTagName("DIV");
  for (i=0; i<sl.length; i++) {
    if (sl[i].className == "x-tool x-tool-maximise"&&sl[i].id!=IconWidgetID) {
      WidgetMinAll(sl[i])
    } 
  }
}
function RestoreLayout(WidgetIcon) {
  WidgetState="";
  theWidget                = WidgetIcon.parentElement.parentElement
  WidgetIcon.className     ="x-tool x-tool-maximise";
  theWidget.style.left     = theWidget.Saveleft;
  theWidget.style.top      = theWidget.Savetop;
  theWidget.style.width    = theWidget.Savewidth;
  theWidget.style.height   = theWidget.Saveheight;
  theWidget.style.overflow = "hidden";
  IconWidgetID=WidgetIcon.id
  var sl = document.getElementsByTagName("DIV");
  for (i=0; i<sl.length; i++) {
    if (sl[i].className == "x-tool x-tool-maximise"&&sl[i].id!=IconWidgetID) {
      WidgetMinAll(sl[i])
    } 
  } 
}
//============================================================
// Resize DFrame as Minumum
//============================================================
function WidgetMin(WidgetIcon) {
  if (MaxCount==1) {
    RestoreLayout(WidgetMaxIcon);
    WidgetMaxIcon="";
    MaxCount=0;
  }
  else {
    WidgetMinAll(WidgetIcon);
  }
}
function WidgetMinAll(WidgetIcon) {
  theWidget  = WidgetIcon.parentElement.parentElement
  toolbar    = WidgetIcon.parentElement
  if (toolbar.className       == "x-panel-title x-panel-title-min") {
    toolbar.className        = "x-panel-title"
    theWidget.style.left     = theWidget.Saveleft;
    theWidget.style.top      = theWidget.Savetop;
    theWidget.style.width    = theWidget.Savewidth;
    theWidget.style.height   = theWidget.Saveheight;
    theWidget.style.position      = '';
    theWidget.style.overflow = "hidden";
    MinCount-=1
  }
  else {
    toolbar.className        = "x-panel-title x-panel-title-min"
    theWidget.Saveleft       = theWidget.clientLeft;
    theWidget.Savetop        = theWidget.clientTop
    theWidget.Savewidth      = theWidget.clientWidth;
    theWidget.Saveheight     = theWidget.clientHeight;
    theWidget.style.left     = 20 + MinCount * 200;
    theWidget.style.top      = document.body.clientHeight-80;
    theWidget.style.position      = 'absolute';
    theWidget.style.width    = "200px";
    theWidget.style.height   = "25px";
    theWidget.style.overflow = "hidden";
    MinCount+=1
  }
  return false;
}
//============================================================
// Resize DFrame
//============================================================
function mRW(ob,e) {
  if (ob.id!="DragResize") return;
  var win = window.parent;
  var doc = win.document;
  while (ibaGetElement('PopUpScreen',doc)==null) {
    var win = win.parent;
    var doc = win.document;
  }
  document.body.ondrag=function(){return false};
  document.body.ondragstart=function(){return false};
  document.body.onselectstart=function(){return false};
  document.onmousemove = mMR;
  document.onmouseup = mU;
  doc.onmouseup = mU;
  document.body.style.cursor="se-resize";
  document.body.style.cursor="se-resize";
  theWidget     = ob.parentElement
  OutlineWidget    = ibaGetElement('WidgetOutline');

  if (window.event) e=window.event;

  var dragX = parseInt(theWidget.style.width);
  var dragY = parseInt(theWidget.style.height);
  OutlineWidget.style.left=theWidget.style.left;
  OutlineWidget.style.top=theWidget.style.top;
  OutlineWidget.style.width=theWidget.style.width;
  OutlineWidget.style.height=theWidget.style.height;
  OutlineWidget.style.display="";
  var mouseX = e.clientX;
  var mouseY = e.clientY;

  clientX = mouseX - dragX;
  clientY = mouseY - dragY;

  isResize = true;

  return false;
}
//
// Mouse Move Drag
//
function mMDW(e) {
  if (!isDragging) return;
  if (window.event) e=window.event;
  var newX = e.clientX - clientX;
  var newY = e.clientY - clientY;
  OutlineWidget.style.left = newX + "px";
  if (newY>0) { OutlineWidget.style.top = newY + "px";}
  return false;
}
//
// Mouse Move Resize
//
function mMRW(e) {
  if (!isResize) return;
  if (window.event) e=window.event;
  var newX = e.clientX - clientX;
  var newY = e.clientY - clientY;
  if (newX>200) { OutlineWidget.style.width = newX + "px";}
  if (newY>200) { OutlineWidget.style.height = newY + "px";}
  window.scrollTo(0,0);
  return false;
}
//
// Mouse Up
//
function mUW() {
  if (!(isResize||isDragging)) return;
  window.status='';
  isDragging = false;
  isResize = false;
  if (window.event) e=window.event;
  theWidget.style.left = OutlineWidget.style.left;
  theWidget.style.top = OutlineWidget.style.top;
  theWidget.style.width = OutlineWidget.style.width;
  theWidget.style.height = OutlineWidget.style.height;
  theWidget.style.visibility="";
  OutlineWidget.style.display="none";
  window.scrollTo(0,0);
  document.body.style.cursor="pointer";
  document.body.style.cursor="pointer";
  document.body.ondrag=function(){return true};
  document.body.ondragstart=function(){return true};
  document.body.onselectstart=function(){return true};
  document.onmousemove = null;
  document.onmouseup = null;
  document.onmouseup = null;
  return false;
}

//============================================================
// Resize Widget to Full
//============================================================
function WidgetLeftPanel(theWidget) {
   if (WidgetState == "LeftPanel") return false;
   WidgetState="LeftPanel";
   if (MaxCount==0) {
     theWidget.Saveleft  =theWidget.clientLeft;
     theWidget.Savetop   =theWidget.clientTop
     theWidget.Savewidth =theWidget.clientWidth;
     theWidget.Saveheight=theWidget.clientHeight;
   }
   theWidget.style.left   = "20px";
   theWidget.style.top    =  "0px";
   theWidget.style.width  = "400px";
   theWidget.style.height = document.body.clientHeight-190;
   theWidget.style.overflow = "auto";
   var sl = document.getElementsByTagName("DIV");
   for (i=0; i<sl.length; i++) {
     if (sl[i].className == "x-tool x-tool-min"&&sl[i].parentElement.parentElement.id!=theWidget.id) {
       WidgetMinAll(sl[i]);
     } 
     if (sl[i].className == "x-tool x-tool-maximise"&&sl[i].parentElement.parentElement.id==theWidget.id) {
       WidgetMaxIcon=sl[i];
       sl[i].className    = "x-tool x-tool-tile";
     } 
   } 
  MaxCount=1;
  return false;
}
//============================================================
// Resize DFrame as Minumum
//============================================================
function WidgetRightPanel(LinkToURL) {
   lt   = "425";
   tp   = "0px";
   wt   = document.body.clientWidth-440;;
   ht   = document.body.clientHeight-190;
   DFrameLink("../cgi-bin/"+LinkToURL,tp,lt,wt,ht)
   document.getElementById('fadeout').style.display = "none";
}

//============================================================
// Resize DFrame as Minumum
//============================================================
function WidgetRightPanelOpen() {
   lt   = "425";
   tp   = "0px";
   wt   = document.body.clientWidth-440;;
   ht   = document.body.clientHeight-190;
   DFrameStart();
   document.getElementById('fadeout').style.display = "none";
   document.PatientLinks.target = "PopUpFrame";
   PopUpScreen.style.top     = tp + 'px';
   PopUpScreen.style.left    = lt + 'px';
   PopUpScreen.style.width   = wt + 'px';
   PopUpScreen.style.height  = ht + 'px';
   PopUpScreen.style.display = "";
}
