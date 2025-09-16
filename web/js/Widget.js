//jsVersion  : V11.03.00
//------------------------------------------------------------
// Source Code  : Widget.js
//
// Function     :
//
// Modification :
//
// V10.00.00 28/06/2010 Jill Parkinson CAR 224339
//                      New Include
//------------------------------------------------------------
var WidgetState="";
var WidgetLocationSaved=false;
var WidgetMaxIcon;
var OutlineWidget;
var ClickWidget;
var MinCount=0;
var MaxCount=0;
//============================================================
// Resize Widget to Full
//============================================================
function WidgetMax(WidgetIcon) {
  if (WidgetIcon.className==("x-tool x-tool-maximise")) {
    if (MaxCount==1) {
      RestoreLayout(WidgetMaxIcon);
    }
    SaveWidgetLocations()
    MaximiseWidget(WidgetIcon)
    WidgetMaxIcon=WidgetIcon;
    MaxCount=1;
  }
  else {
    if (WidgetIcon.className==("x-tool x-tool-tile")) {
      RestoreLayout(WidgetIcon)
      WidgetMaxIcon="";
      MaxCount=0;
    }
    else {
      RestoreLayout(WidgetMaxIcon);
      MaximiseWidget(WidgetIcon)
      WidgetMaxIcon=WidgetIcon;
      MaxCount=1;
    }
  }
  return false;
}
function SaveWidgetLocations() {
  if (!WidgetLocationSaved) {
    WidgetLocationSaved=true;
    var sl = document.getElementsByTagName("DIV");
    for (i=0; i<sl.length; i++) {
      if (sl[i].className == "Widget") {
        sl[i].setAttribute("Saveleft",sl[i].offsetLeft);
        sl[i].setAttribute("Savetop",sl[i].offsetTop);
        sl[i].setAttribute("Savewidth",sl[i].offsetWidth);
        sl[i].setAttribute("Saveheight",sl[i].offsetHeight);
      } 
    } 
  } 
} 
function MaximiseWidget(WidgetIcon) {
  WidgetState  = "Maximised";
  theWidget    = WidgetIcon.parentElement.parentElement
  toolbar      = WidgetIcon.parentElement
  WidgetIcon.className     = "x-tool x-tool-tile";
  toolbar.className        = "x-panel-title"
  theWidget.style.position = "absolute";
  theWidget.style.left     = "20px";
  theWidget.style.top      = PatientMenu.offsetTop+30
  theWidget.style.width    = document.body.offsetWidth-40;
  theWidget.style.height   = document.body.offsetHeight-190;
  theWidget.className      = "WidgetLarge";
  RefreshWidgetContent(theWidget,1);
  var sl = document.getElementsByTagName("DIV");
  for (i=0; i<sl.length; i++) {
    if (sl[i].className == "x-tool x-tool-maximise"&&sl[i].parentElement.id!=WidgetIcon.parentElement.id) {
      WidgetMinAll(sl[i])
    } 
  }
}
// --------------------------------------------------------
// Concept - Expand Widget and Add New Columns for Display
//  Layout 1=Max View
//         2=Min View
// ---------------------------------------------------------
function RefreshWidgetContent(theWidget,Layout) {
  var widgetLayout = getTop().menu.widgetLayout
  wno=parseInt(theWidget.id.replace(/Widget/,""))-1
  if (widgetLayout[wno].wescript!="") {
    var wtab=new Array();
    windex=0
    var dl = getTop().content.document.getElementsByTagName("div");
    for (i=0;i<dl.length;i++) {
      if (dl[i].id.match(/WidgetTable/)) {
        wtab[windex]=dl[i];windex+=1; }
    }
    TableLocation = wtab[wno]; 
    if (Layout==1) {
      eval(widgetLayout[wno].wescript); }
    else {
      eval(widgetLayout[wno].wscript); }
  }
}
function RestoreLayout(WidgetIcon) {
  WidgetState="";
  GraphScreen.style.display = "none";
  el=document.getElementById('PopUpScreen');
  el.style.display = "none";
  theWidget                = WidgetIcon.parentElement.parentElement
  WidgetIcon.className     ="x-tool x-tool-maximise";
  theWidget.style.position = "absolute";
  theWidget.style.left     = theWidget.getAttribute("Saveleft");
  theWidget.style.top      = theWidget.getAttribute("Savetop");
  theWidget.style.width    = theWidget.getAttribute("Savewidth");
  theWidget.style.height   = theWidget.getAttribute("Saveheight");
  theWidget.className      = "Widget";
  RefreshWidgetContent(theWidget,2);
  var sl = document.getElementsByTagName("DIV");
  for (i=0; i<sl.length; i++) {
    if (sl[i].className == "x-tool x-tool-max"&&sl[i].parentElement.id!=WidgetIcon.parentElement.id) {
      WidgetMinAll(sl[i])
    } 
  } 
}
function WidgetMinAll(WidgetIcon) {
  theWidget  = WidgetIcon.parentElement.parentElement
  toolbar    = WidgetIcon.parentElement
  if (WidgetIcon.className == ("x-tool x-tool-maximise")) {
    toolbar.className        = "x-panel-title x-panel-title-min "
    WidgetIcon.className     = "x-tool x-tool-max";
    theWidget.style.position     = "absolute";
    theWidget.style.left     = 20 + MinCount * 200;
    theWidget.style.top      = document.body.offsetHeight-80;
    theWidget.style.width    = "200px";
    theWidget.style.height   = "22px";
    theWidget.style.overflow = "hidden";
    MinCount+=1
  }
  else {
    WidgetIcon.className="x-tool x-tool-maximise";
    toolbar.className="x-panel-title"
    theWidget.style.position = "absolute";
    theWidget.style.left     = theWidget.getAttribute("Saveleft");
    theWidget.style.top      = theWidget.getAttribute("Savetop");
    theWidget.style.width    = theWidget.getAttribute("Savewidth");
    theWidget.style.height   = theWidget.getAttribute("Saveheight");
    theWidget.style.overflow = "hidden";
    MinCount-=1
  }
  return false;
}
//============================================================
// Resize Widget to Full
//============================================================
function WidgetLeftPanel(theWidget) {
   if (WidgetState == "LeftPanel") return false;
   WidgetState="LeftPanel";
   if (MaxCount==0) {
     SaveWidgetLocations();
   }
   theWidget.style.position = "absolute";
   theWidget.style.left   = "10px";
   theWidget.style.top    =   PatientMenu.offsetTop+28;
   theWidget.style.width  = "400px";
   theWidget.style.height = document.body.offsetHeight-190;
   theWidget.style.overflow = "auto";
   theWidget.className= "Widget";
   RefreshWidgetContent(theWidget,2);
   var sl = document.getElementsByTagName("DIV");
   for (i=0; i<sl.length; i++) {
     if (sl[i].className == "x-tool x-tool-maximise"&&sl[i].parentElement.parentElement.id!=theWidget.id) {
       WidgetMinAll(sl[i]);
     } 
     if (sl[i].className == "x-tool x-tool-maximise"&&sl[i].parentElement.parentElement.id==theWidget.id) {
      sl[i].className = "x-tool x-tool-tile"
      WidgetMaxIcon=sl[i]
     } 
   } 
  MaxCount=1;
  return false;
}
function WidgetLeftClose(theWidget) {
  WidgetState="";
  GraphScreen.style.display = "none";
  el=document.getElementById('PopUpScreen');
  el.style.display = "none";
  var sl = document.getElementsByTagName("DIV");
  for (i=0; i<sl.length; i++) {
    if (sl[i].className == "x-tool x-tool-max") {
      WidgetMinAll(sl[i])
    } 
    if (sl[i].className == "x-tool x-tool-tile") {
      WidgetMinAll(sl[i])
      sl[i].className = "x-tool x-tool-maximise"
    } 
  } 
}

//============================================================
// Resize DFrame as Minumum
//============================================================
function WidgetRightPanel(LinkToURL) {
   lt   = "425";
   tp   = PatientMenu.offsetTop+30;
   wt   = document.body.offsetWidth-440;;
   ht   = document.body.offsetHeight-190;
   DFrameLink("../cgi-bin/"+LinkToURL,tp,lt,wt,ht)
}

//============================================================
// Resize DFrame as Minumum
//============================================================
function WidgetRightPanelOpen() {
   lt   = "425";
   tp   = PatientMenu.offsetTop+30;
   wt   = document.body.offsetWidth-440;;
   ht   = document.body.offsetHeight-190;
   DFrameStart();
   document.PatientLinks.target = "PopUpFrame";
   PopUpScreen.style.top     = tp + 'px';
   PopUpScreen.style.left    = lt + 'px';
   PopUpScreen.style.width   = wt + 'px';
   PopUpScreen.style.height  = ht + 'px';
   PopUpScreen.style.display = "";
   return PopUpScreen;
}
//============================================================
// Resize DFrame as Minumum
//============================================================
function WidgetRightPanelGraph() {
   lt   = "425";
   tp   = PatientMenu.offsetTop+30;
   wt   = document.body.offsetWidth-440;;
   ht   = document.body.offsetHeight-190;
   GraphScreen.style.top     = tp + 'px';
   GraphScreen.style.left    = lt + 'px';
   GraphScreen.style.width   = wt + 'px';
   GraphScreen.style.height  = ht + 'px';
   GraphScreen.style.display = "";
   return GraphScreen;
}
//============================================================
// JP - Added from Custom.js
//============================================================
function ManageHomeWidget() {
  alert('Home Page Configuration Options Unavailable at this time.\nSelect a Patient to managage the Patient Summary View.')
}

function HomeLayoutSelect() {
  alert('Home Page Configuration Options Unavailable at this time.\nSelect a Patient to managage the Patient Summary View.')
}
function SelectHomeLayoutView() {
  alert('Home Page Configuration Options Unavailable at this time.\nSelect a Patient to managage the Patient Summary View.')
}
//------------------------------------------------------------
// Select Widget Content
//------------------------------------------------------------
function ManageWidget() {
 if (getTop().content.document.getElementById("DivSearchResult")==null) {
  getTop().content.document.body.insertAdjacentHTML('BeforeEnd',
        '<div id=DivSearchResult name=DivSearchResult class=DivSearchResult></div>')
  }
  theURL = "../html/IT/ManageLayoutWidgets.html?1=1";
  theURL = theURL + '&httprand='+Math.random();
  xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  dSearchResult=getTop().content.document.getElementById("DivSearchResult");
  dSearchResult.style.right = "0px";
  dSearchResult.style.width = "240px";
  dSearchResult.style.height = "240px";
  dSearchResult.style.top   = "0px";
  dSearchResult.innerHTML = xmlHttp.responseText
  el1=document.getElementsByName("WidgetSelect")
  el2=getTop().menu.widgetLayout
  for (i=0;i<el1.length;i++) {
     for (j=0;j<el1[i].options.length;j++) {
       if (el1[i].options[j].value==el2[i].wsel) {
         el1[i].selectedIndex=j;
       }
     }
  }
}
//------------------------------------------------------------
// Select Widget Layout
//------------------------------------------------------------
function SelectWidget(el) {
  widgetNo=el.widgetno;
  SetLayoutWidget(el.options[el.selectedIndex].value,el.widgetno);
}
function  SetLayoutWidget(widgetSelect,widgetNo) {
  widgetLayout=getTop().menu.widgetLayout
  switch (widgetSelect) {
   case "001" : {
      widgetLayout[widgetNo].wurl="patweb98.pbl?reportno=1&template=136";
      widgetLayout[widgetNo].wscript="AppointInitTable()";
      widgetLayout[widgetNo].wescript="";
      widgetLayout[widgetNo].wtitle="Appointments";
      widgetLayout[widgetNo].wtype="2";
      widgetLayout[widgetNo].wsel="001";
      break; }
   case "002" :
      alert("Not Available");
      break;
   case "003" : {
      widgetLayout[widgetNo].wurl="cliweb03.pbl?reportno=1&template=8&viewtype=1&reslnkyr=ally&norecord=50";
      widgetLayout[widgetNo].wscript="ResultsInitTable1()";
      widgetLayout[widgetNo].wescript="ResultsInitTable2()";
      widgetLayout[widgetNo].wtitle="Clinical Results";
      widgetLayout[widgetNo].wtype="2";
      widgetLayout[widgetNo].wsel="003";
      break; }
   case "004" : {
      widgetLayout[widgetNo].wurl="cliweb08.pbl?reportno=1&template=25&viewtype=1";
      widgetLayout[widgetNo].wscript="";
      widgetLayout[widgetNo].wescript="";
      widgetLayout[widgetNo].wtitle="Clinical Documents";
      widgetLayout[widgetNo].wtype="1";
      widgetLayout[widgetNo].wsel="004";
      break; }
   case "005" : {
      widgetLayout[widgetNo].wurl="patweb98.pbl?reportno=01&template=105";
      widgetLayout[widgetNo].wscript="";
      widgetLayout[widgetNo].wescript="";
      widgetLayout[widgetNo].wtitle="Clinical Notes";
      widgetLayout[widgetNo].wtype="1";
      widgetLayout[widgetNo].wsel="005";
      break; }
   case "006" :
      alert("Not Available");
      break;
   case "007" :
      alert("Not Available");
      break;
   case "008" :
      alert("Not Available");
      break;
   case "009" : {
      widgetLayout[widgetNo].wurl="patweb98.pbl?reportno=01&template=133";
      widgetLayout[widgetNo].wscript="MedRecInitTable1()";
      widgetLayout[widgetNo].wescript="MedRecInitTable2()";
      widgetLayout[widgetNo].wtitle="Medical Records";
      widgetLayout[widgetNo].wtype="2";
      widgetLayout[widgetNo].wsel="009";
      break; }
   case "010" : {
      widgetLayout[widgetNo].wurl="medchart1.pbl?reportno=1&template=1";
      widgetLayout[widgetNo].wscript="MedInitTable1()";
      widgetLayout[widgetNo].wescript="MedInitTable2()";
      widgetLayout[widgetNo].wtitle="Scheduled Medication";
      widgetLayout[widgetNo].wtype="2";
      widgetLayout[widgetNo].wsel="010";
      break; }
   case "011" : {
      widgetLayout[widgetNo].wurl="cliweb02.pbl?reportno=01&template=002&obsvtype=B";
      widgetLayout[widgetNo].wscript="ObsBasicInitTable()";
      widgetLayout[widgetNo].wescript="";
      widgetLayout[widgetNo].wtitle="Basic Observations";
      widgetLayout[widgetNo].wtype="2";
      widgetLayout[widgetNo].wsel="011";
      break; }
   case "012" : {
      widgetLayout[widgetNo].wurl="cliweb02.pbl?reportno=01&template=002&obsvtype=F";
      widgetLayout[widgetNo].wscript="ObsFluidInitTable()";
      widgetLayout[widgetNo].wescript="";
      widgetLayout[widgetNo].wtitle="Fluids Observations";
      widgetLayout[widgetNo].wtype="2";
      widgetLayout[widgetNo].wsel="012";
      break; }
   case "013" : {
      widgetLayout[widgetNo].wurl="cliweb02.pbl?reportno=01&template=002&obsvtype=N";
      widgetLayout[widgetNo].wscript="ObsNeuroInitTable()";
      widgetLayout[widgetNo].wescript="";
      widgetLayout[widgetNo].wtitle="Neurological Observations";
      widgetLayout[widgetNo].wtype="2";
      widgetLayout[widgetNo].wsel="013";
      break; }
   case "014" : {
      widgetLayout[widgetNo].wurl="patweb03.pbl?reportno=01&template=011";
      widgetLayout[widgetNo].wscript="ProblemInitTable1()";
      widgetLayout[widgetNo].wescript="ProblemInitTable2()";
      widgetLayout[widgetNo].wtitle="Problems ";
      widgetLayout[widgetNo].wtype="2";
      widgetLayout[widgetNo].wsel="014";
      break; }
   case "015" : {
      widgetLayout[widgetNo].wurl="allweb02.pbl?reportno=02&template=015";
      widgetLayout[widgetNo].wscript="ReferralInitTable1()";
      widgetLayout[widgetNo].wescript="ReferralInitTable2()";
      widgetLayout[widgetNo].wtitle="Referrals";
      widgetLayout[widgetNo].wtype="2";
      widgetLayout[widgetNo].wsel="015";
      break; }
   case "016" : {
      widgetLayout[widgetNo].wurl="oprweb06.pbl?reportno=11&template=011";
      widgetLayout[widgetNo].wscript="TheatreInitTable()";
      widgetLayout[widgetNo].wescript="";
      widgetLayout[widgetNo].wtitle="Theatre History";
      widgetLayout[widgetNo].wtype="2";
      widgetLayout[widgetNo].wsel="016";
      break; }
   case "017" : {
      widgetLayout[widgetNo].wurl="patweb98.pbl?reportno=01&template=400";
      widgetLayout[widgetNo].wscript="VisitInitTable1()";
      widgetLayout[widgetNo].wescript="VisitInitTable2()";
      widgetLayout[widgetNo].wtitle="Visits";
      widgetLayout[widgetNo].wtype="2";
      widgetLayout[widgetNo].wsel="017";
      break; }
  }
}
//------------------------------------------------------------
// Select Complete Layout
//------------------------------------------------------------
function SelectLayoutView(el) {
   LayoutView=el.options[el.selectedIndex].value;
   LV=LayoutView.split("|");
   LayoutTemplate=LV[0]
   for (i=1;i<LV.length;i++) {
     SetLayoutWidget(LV[i],i-1);
   }
   LayoutSelect(LayoutTemplate)
}
//------------------------------------------------------------
// Select Widget Layout
//------------------------------------------------------------
function LayoutSelect(LayoutTemplate) {
  serverid=getTop().menu.defPatientLink.serverid.value;
  reportno=getTop().menu.defPatientLink.reportno.value;
  getTop().menu.defPatientLink.template.value=LayoutTemplate;
  template=getTop().menu.defPatientLink.template.value;
  if (getTop().content.PatientLinks==undefined) { return }
  admissno=getTop().content.PatientLinks.admissno.value.replace(/ /g,"+");
  urnumber=getTop().content.PatientLinks.urnumber.value.replace(/ /g,"+");
  url=serverid + ".pbl?reportno=" + reportno +
                  "&template=" + template +
                  "&urnumber=" + urnumber +
                  "&admissno=" + admissno;
  getTop().content.location.href=url;
  RecentClose();
}


