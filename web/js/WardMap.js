//jsVersion  : V11.03.05
//========================================================================
// Program   : WardMap.js
//  
// Written   : 12.12.1997 B.G.Ackland
//
// Function  : Ward Department Map Display Script
//========================================================================
//
var presetCode = [];
var presetColor = [];
var ShowLocationAreas=true;
var ShowPatients=true;
var LocationCellSpacing=5;
var PatientCellFont='9pt';
var PatientCellHeight=145;
var PatientCellWidth=200;
var PatientCellPaddingTop=1;
var PatientCellPaddingLeft=1;
var PatientCellType=0;
var maxScreenHeight=500;
var maxScreenWidth=1024;
var startPositionTop=30;
var startPositionLeft=5;
var positionTop=30;
var positionLeft=5;
var layoutType=1;
var WardOnly;
var savePatientLocation = null;
var PaedAgeMax=16;

var obj;
var globalLinkType = null ;
var globalLinkUrl = null ;
var originalLocId = null ;
var whichEl = null;
var saveExpandTop;
var saveExpandLeft;
var expandHeight = 400;
var expandWidth = 300;
var expandBorder = 10;
var DropEl = null;
var DragDropFlag = false;
var ReturnValue = new Object();
var LocationMap;
var PatientMap;
// OffseType 0=Horizontal 1=Vertical
var OffsetType=1;
var lastCellHeight;
var lastCellWidth;
var debugStr;
var PatientCellHighlight=28; // Index color by Doctor Code
var PatientCellHighlightExp=16; // Index color by Doctor Code Expected Patients
var chartColor = new Array();
var patientClassCodes = new Array();
var patientClassColor;
var bedClassColor;
var lblWorkingDiagnosis1="";
var lblWorkingDiagnosis2="";
var lblWorkingDiagnosis3="";
var RefreshTime=5;
var UnmatchedCodeColor=0;

var RefreshFnId=0;  // setTimeout() function ID for window refresh call

//------------------------------------------------------------
// Set Cookie with 30 day expiry
//------------------------------------------------------------
function SetCookie(fieldName,fieldString) {
  var cookieexp = new Date();
  var cookiedata = fieldName + "=" + escape(fieldString) + ";";
  cookieexp.setTime(cookieexp.getTime() + ( 30 * 24 * 60 * 60 * 1000));
  cookiedata += " expires=" + cookieexp.toGMTString() + ";";
  document.cookie = cookiedata;
}
//------------------------------------------------------------
// Set Select Item based on Value
//------------------------------------------------------------
function setSelectValue(id,val) {
  var el=document.getElementById(id);
  for (i=0;i<el.options.length;i++) {
    if (el.options[i].value==val) {
      el.selectedIndex=i
    }
  }
}
//------------------------------------------------------------
// Cancel the delayed window refresh
//------------------------------------------------------------
function CancelMapRefresh() {
  clearTimeout(RefreshFnId);
}
//------------------------------------------------------------
// Set the window refresh (delayed call)
//------------------------------------------------------------
function SetMapRefresh() {
 var mapRefreshTime=GetCookieData("MapRefreshTime");
 if(mapRefreshTime=="unknown") {
   mapRefreshTime=RefreshTime;
   SetCookie("MapRefreshTime",mapRefreshTime);
 }
 RefreshTime=parseInt(mapRefreshTime,10);

 RefreshFnId = setTimeout(function() { window.location.reload(true); },(60000*mapRefreshTime));
}
//------------------------------------------------------------
// Draw Ward Whiteboard
//------------------------------------------------------------
function DrawMap() {
 UnmatchedCodeColor=GetCookieData("UnmatchedCodeColor");
 if(UnmatchedCodeColor=="unknown") {
   UnmatchedCodeColor=0;
   SetCookie("UnmatchedCodeColor",UnmatchedCodeColor);
 } 

 SetMapRefresh();

 var mapLayoutType=GetCookieData("MapLayoutType");
 if(mapLayoutType=="unknown") {
   mapLayoutType=layoutType;
   SetCookie("MapLayoutType",mapLayoutType);
 } 
 layoutType=parseInt(mapLayoutType,10);
 var cellHighlight=GetCookieData("PatientCellHighlight");
 if(cellHighlight=="unknown") {
   cellHighlight=PatientCellHighlight;
   SetCookie("PatientCellHighlight",PatientCellHighlight);
 } 
 PatientCellHighlight=parseInt(cellHighlight,10);
 var cellWidth=GetCookieData("PatientCellWidth");
 if(cellWidth=="unknown") {
   cellWidth=PatientCellWidth;
   SetCookie("PatientCellWidth",PatientCellWidth);
 } 
 PatientCellWidth=parseInt(cellWidth,10);
 var cellHeight=GetCookieData("PatientCellHeight");
 if(cellHeight=="unknown") {
   cellHeight=PatientCellHeight;
   SetCookie("PatientCellHeight",PatientCellHeight);
 } 
 PatientCellHeight=parseInt(cellHeight,10);
 var cellType=GetCookieData("PatientCellType");
 if(cellType=="unknown") {
   cellType=PatientCellType;
   SetCookie("PatientCellType",PatientCellType);
 } 
 PatientCellType=parseInt(cellType,10);

 var cellFont=GetCookieData("PatientCellFont");
 if(cellFont=="unknown") {
   cellFont=PatientCellFont;
   SetCookie("PatientCellFont",PatientCellFont);
 } 
 PatientCellFont=cellFont;

 setSelectValue("cellFont",PatientCellFont);
 setSelectValue("cellType",PatientCellType);
 setSelectValue("cellHeight",PatientCellHeight);
 setSelectValue("cellWidth",PatientCellWidth);
 setSelectValue("cellHighlight",PatientCellHighlight);
 setSelectValue("mapLayoutType",layoutType);
 setSelectValue("mapRefreshTime",RefreshTime);
 setSelectValue("unmatchedCodeColor",UnmatchedCodeColor);

 presetCode[0]=GetCookieData("presetCode00");
 presetCode[1]=GetCookieData("presetCode01");
 presetCode[2]=GetCookieData("presetCode02");
 presetCode[3]=GetCookieData("presetCode03");
 presetCode[4]=GetCookieData("presetCode04");
 presetCode[5]=GetCookieData("presetCode05");
 presetCode[6]=GetCookieData("presetCode06");
 presetCode[7]=GetCookieData("presetCode07");

 positionTop=30;
 positionLeft=5;
 t = new Map("blank.png");
 obj = t;
 maxScreenWidth=document.body.offsetWidth;
 maxScreenHeight=document.body.offsetHeight;
 ConfigureStyle();
 SetBeds();
 SetLocations();
 SetPatients();
 SetExpected();
 ShowMap();
 StyleMap();
 StartMap();
}
function ConfigureStyle() {
 w=PatientCellWidth+2
 h=PatientCellHeight+2
 document.styleSheets[document.styleSheets.length-1].addRule(".PatientStyle", "border:2px solid #ddd;");
 document.styleSheets[document.styleSheets.length-1].addRule(".PatientStyle", "font-size: "+PatientCellFont+";");
 document.styleSheets[document.styleSheets.length-1].addRule(".PatientStyle", "clip: rect(0px "+w+"px "+h+"px 0px);");
 document.styleSheets[document.styleSheets.length-1].addRule(".PatientStyle", "padding:0;");
 document.styleSheets[document.styleSheets.length-1].addRule(".PatientStyle", "margin:0;");
 w=PatientCellWidth-1
 h=PatientCellHeight-2
 document.styleSheets[document.styleSheets.length-1].addRule(".PatientStyle", "height:"+h+"px;");
 document.styleSheets[document.styleSheets.length-1].addRule(".PatientStyle", "width:"+w+"px;");
 document.styleSheets[document.styleSheets.length-1].addRule(".PatientStyle", "background-color: #fff; ");
 document.styleSheets[document.styleSheets.length-1].addRule(".PatientStyle", "overflow:hidden; ");
 w=PatientCellWidth
 h=PatientCellHeight
 document.styleSheets[document.styleSheets.length-1].addRule(".LocationStyle", "height:"+h+"px;");
 document.styleSheets[document.styleSheets.length-1].addRule(".LocationStyle", "width:"+w+"px;");
 document.styleSheets[document.styleSheets.length-1].addRule(".LocationStyle", "overflow:hidden; ");
}

function UpdateCondition(urnumber,admissno) {
  if (DragDropFlag) return;
  collapsePatient();
  linkurl="patweb93.pbl?reportno=5&template=001" +
          "&urnumber=" + urnumber + "&admissno=" + admissno
  left = (document.body.clientWidth-1000)/2;

  DFrameLink(linkurl,0,left,1000,600);
  CancelMapRefresh();
}
function UpdateMechVent(urnumber,adm,mvtype,strtdate,strttime) {
  Left=(document.body.clientWidth-500)/2
  linkurl="patweb78.pbl?reportno=05&template=003"
          + "&urnumber=" + urnumber.replace(/ /g,"+")
          + "&admissno=" + adm.replace(/ /g,"+")
          + "&ptven001=" + mvtype.replace(/ /g,"+")
          + "&startdat=" + strtdate.replace(/ /g,"+")
          + "&ptven003=" + strttime.replace(/ /g,"+");
  DFrameLink(linkurl,220,Left,500,280);
}
function UpdateDiet(urnumber,admissno) {
  if (DragDropFlag) return;
  collapsePatient();
  linkurl="patweb98.pbl?reportno=4&template=003" +
          "&urnumber=" + urnumber + "&admissno=" + admissno

  DFrameLink(linkurl,0,75,640,480);
  CancelMapRefresh();
}
function PatientOpen(urnumber,admissno) {
  if (DragDropFlag) return;
  collapsePatient();
  linkurl="patweb98.pbl?reportno=1&template=1" +
          "&urnumber=" + urnumber + "&admissno=" + admissno
  location.href=linkurl
}
function PatientAlerts(urnumber,admissno) {
  if (DragDropFlag) return;
  collapsePatient();
  linkurl="patweb98.pbl?reportno=1&template=003" +
          "&urnumber=" + urnumber + "&admissno=" + admissno
  location.href=linkurl
}
function DoctorView(doctcode) {
  if (DragDropFlag) return;
  collapsePatient();
  if (doctcode=="") return; 
  var LinkToUrl="patweb99.pbl?reportno=1&template=1&doctcode=" + doctcode;
  var PopUpFrameDoc = DFrameStart();
  PopUpFrameDoc.location.href=LinkToUrl;
  var PopUpScreen = document.getElementById('PopUpScreen');
  var PatientMenu = document.getElementById('PatientMenu');
  var t = 50;
  var h = 480;
  var w = 640;
  var l = (getClientWidth() - 640)/2;

  PopUpScreen.style.top     = t + "px";
  PopUpScreen.style.left    = l + "px";
  PopUpScreen.style.height  = h   + "px";
  PopUpScreen.style.width   = w   + "px";
  PopUpScreen.style.zindex  = 10000;
  PopUpScreen.style.display = "";

  CancelMapRefresh();
}
function PatientResults(urnumber,admissno) {
  if (DragDropFlag) return;
  collapsePatient();
  linkurl="cliweb03.pbl?reportno=1&template=001" +
          "&urnumber=" + urnumber + "&admissno=" + admissno
  location.href=linkurl
}
function PatientNotes(urnumber,admissno) {
  if (DragDropFlag) return;
  collapsePatient();
  linkurl="patweb98.pbl?reportno=1&template=005" +
          "&urnumber=" + urnumber + "&admissno=" + admissno
  location.href=linkurl
}
function PatientDocuments(urnumber,admissno) {
  if (DragDropFlag) return;
  collapsePatient();
  linkurl="cliweb08.pbl?reportno=1&template=030" +
          "&urnumber=" + urnumber + "&admissno=" + admissno
  location.href=linkurl
}
function addStandardBedLocations(orientation) {
  if (orientation=="Vertical") {
    checkScreenSpace(1);
    positionTop=startPositionTop;
    positionLeft=startPositionLeft;
    for(var i = 0; i < obj.beds.length; i++) {
      obj.AddLocation(obj.beds[i][2],obj.beds[i][1],positionLeft,positionTop,positionLeft+PatientCellWidth,positionTop+PatientCellHeight);
      positionTop+=PatientCellHeight+LocationCellSpacing;
      if ((positionTop+PatientCellHeight)>maxScreenHeight) {
        positionTop=startPositionTop;
        positionLeft+=PatientCellWidth+LocationCellSpacing;
      }
    }
  }
  else {
    checkScreenSpace(2);
    positionTop=startPositionTop;
    positionLeft=startPositionLeft;
    for(var i = 0; i < obj.beds.length; i++) {
      obj.AddLocation(obj.beds[i][2],obj.beds[i][1],positionLeft,positionTop,positionLeft+PatientCellWidth,positionTop+PatientCellHeight);
      positionLeft+=PatientCellWidth+LocationCellSpacing;
      if ((positionLeft+PatientCellWidth)>maxScreenWidth) {
        positionLeft=startPositionLeft;
        positionTop+=PatientCellHeight+LocationCellSpacing;
      }
    }
  }
}
function checkScreenSpace(orient) {
  if (orient==1) {
    totalBeds=obj.beds.length;
    totalColumns=Math.floor(maxScreenWidth/(PatientCellWidth+LocationCellSpacing))-1;
    totalRows=Math.floor(maxScreenHeight/(PatientCellHeight+LocationCellSpacing));
    totalCells=totalColumns*totalRows
    if (totalBeds > totalCells) {
      rr=Math.floor(totalBeds/(totalColumns-1));
      PatientCellHeight=Math.floor(maxScreenHeight/rr)
      ConfigureStyle();
    }
  }
  else {
    totalColumns=Math.floor((maxScreenWidth-startPositionLeft-12)/(PatientCellWidth+LocationCellSpacing));
    PatientCellWidth=Math.floor(((maxScreenWidth-startPositionLeft-12)/totalColumns)-LocationCellSpacing);
    ConfigureStyle();
  }
}
function  Map(BackGroundImage) {
 this.image = BackGroundImage;
 this.locations = new Array();
 this.beds = new Array();
 this.patients = new Array();
 this.AddLocation = _AddLocation;
 this.AddBed = _AddBed;
 this.AddPatient = _AddPatient;
 this.addRow = _AddPatient;
 this.expected = new Array();
 this.AddExpected = _AddExpected;
}
function  _AddExpected() {
  this.expected[this.expected.length] = new Array();
  var expectedpat = this.expected[this.expected.length-1];
  for(var i = 0; i < arguments.length; i++)
     expectedpat[expectedpat.length] = arguments[i];
}
function  _AddLocation() {
  this.locations[this.locations.length] = new Array();
  var location = this.locations[this.locations.length-1];
  for(var i = 0; i < arguments.length; i++)
     location[location.length] = arguments[i];
}
function  _AddBed() {
  this.beds[this.beds.length] = new Array();
  var bed = this.beds[this.beds.length-1];
  for(var i = 0; i < arguments.length; i++)
     bed[bed.length] = arguments[i];
}
function  _AddPatient() {
  this.patients[this.patients.length] = new Array();
  var patient = this.patients[this.patients.length-1];
  for(var i = 0; i < arguments.length; i++)
     patient[patient.length] = arguments[i];
}
function ShowMap() {
  obj.patients.sort(StringSort);
  WaitPosition=0;
  LocationMap="";
  if (ShowLocationAreas) {
    getLocationMap()
  }
  PatientMap="";
  WardOnly=document.SelectWard.winput.value;
  DisplayPatNamConfl=(document.SelectWard.dspconfl != undefined) ? document.SelectWard.dspconfl.value:'0';
  if (ShowPatients) {
    for(var i = 0; i < obj.patients.length; i++) {
     if (obj.patients[i][2]!="") {
       switch (PatientCellType) {
        case 0: PatientMap+=PatientCell(i);break;
        case 1: PatientMap+=smPatientCell(i);break;
        case 2: PatientMap+=PatientCellClinical(i);break;
       }
     }
    }
//
    for(var i = 0; i < obj.expected.length; i++) {
     if (obj.expected[i][0]!="") {
        PatientMap+=ExpectedPatientCell(i);
     }
    }
//
  }
  document.getElementById("WardMap").innerHTML=LocationMap+PatientMap;
}
function getBedClassColor(BedCode) {
  if (isWhitespace(BedCode)) return "";
  var BedCount=0;
  for(var i = 0; i < obj.patients.length; i++) {
   if (obj.patients[i][1]==BedCode) BedCount++
  }
  if (BedCount<2) return "";
  return "StandByBed ";
}
function smPatientCell(i) {
  patientClassColor=getPatientClassColor(i);
  bedClassColor=getBedClassColor(obj.patients[i][1]);
  OS= '<div id=Patient-' + i + ' class="PatientStyle" '  +
      ' onmouseover="expandPatient(this);" '+
      ' onmouseout="collapsePatient();" '+
      '>'  +
      '<div class="row1" style="cursor:pointer;background-color:'  + patientClassColor + '"' +
      ' title="View Patient Demographics"' +
      ' onclick=\'PatientOpen("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'>'+
      '<span class="'+bedClassColor+'cellLocation'+WardOnly+'">' + obj.patients[i][1] + '</span>' +
      '<span class="cellPatientName'+WardOnly+'">'  + obj.patients[i][4].replace(/ *$/,"") + '</span>' +
      '<span class="cellAge">' + obj.patients[i][6] + '</span>' +
      '<span class="cellSex Sex'+obj.patients[i][5]+'"></span></div>'   
   
      //Display preferred name and DOB
      if (WWPrefNameDOB == "Yes") {
        
        OS+= displayPrefNameDOB(i);

      }

      WWIDGenderPronoun = "Yes";

      //Display Gender pronoun
      if (WWIDGenderPronoun == "Yes") {

        OS += displayGenderID(i);

      }

      OS += '<div class=row2>' 
  if (obj.patients[i][25]=='1') {
    OS+='<span class=StandByIcon' + obj.patients[i][25] + '></span>' 
  }
  else {
    OS+='<span class="FolderIcon FolderIcon' + obj.patients[i][22] + '"></span>'
  }
  OS+='<span class=AlertIcon'+ obj.patients[i][27].substr(5,1) +
      ' title="Patient Alerts"' +
      ' onclick=\'PatientAlerts("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
      '<span class=ResultIcon'+ obj.patients[i][27].substr(1,1) +
      ' title="Clinical Results"' +
      ' onclick=\'PatientResults("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
      '<span class=LegalStatusIcon'+ obj.patients[i][95].substr(0,1) +
      ' title="Legal Status"' +
      ' onclick=\'MHLegStat("'+ obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
      '<span class=NoteIcon'+ obj.patients[i][27].substr(2,1) +
      ' title="Clinical Notes"' +
      ' onclick=\'PatientNotes("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
      '<span class=DocumentIcon'+ obj.patients[i][27].substr(3,1) +
      ' title="Clinical Documents"' +
      ' onclick=\'PatientDocuments("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
      '<span>'+obj.patients[i][21]+obj.patients[i][2] +'</span></div>'+
      '<//div>'+
      '<div class=row5 onclick=\'UpdateCondition("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'>' +
      '<span class=cell><span class=ConditionIcon'+obj.patients[i][18]+
      ' title="Update Condition"></span>'+
      obj.patients[i][17] + ShortDateTime(obj.patients[i][19]) + 
      obj.patients[i][94] +'</span></div>'+
      '<div class=row6 onclick=\'UpdateDiet("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\' title="Update Diet">' +
      '<span class=cell><span class=DietIcon></span>'+
      obj.patients[i][13] +'</span></div>' +
      '</div>'
  return OS;
}
function getPatientClassColor(i) {
  var matchIndex=-1;
  var presetIndex=-1;
  for (var a=0;a < presetCode.length;a++) {
    if (presetCode[a]==obj.patients[i][PatientCellHighlight]) {
      return presetColor[a];
    }
  }
  for (var a=0;a<patientClassCodes.length;a++) {
    if (patientClassCodes[a]==obj.patients[i][PatientCellHighlight]) {
      matchIndex=a;
    }
  }
  if (matchIndex==-1) {
    matchIndex=patientClassCodes.length;
    patientClassCodes[patientClassCodes.length]=obj.patients[i][PatientCellHighlight];
  } 
  if (matchIndex>=chartColor.length) {
    rand1 = Math.round(Math.random()*255);   
    rand2 = Math.round(Math.random()*255);   
    rand3 = Math.round(Math.random()*255);   
    chartColor[chartColor.length]= "rgb("+rand1+","+rand2+","+rand3+")";
  }
  if (UnmatchedCodeColor!="0") {
    return UnmatchedCodeColor;
  } 
  return chartColor[matchIndex];
}
function getExpPatientClassColor(i) {
  var matchIndex=-1;
  var presetIndex=-1;
  for (var a=0;a < presetCode.length;a++) {
    if (presetCode[a]==obj.expected[i][PatientCellHighlightExp]) {
      return presetColor[a];
    }
  }
  for (var a=0;a<patientClassCodes.length;a++) {
    if (patientClassCodes[a]==obj.expected[i][PatientCellHighlightExp]) {
      matchIndex=a;
    }
  }
  if (matchIndex==-1) {
    matchIndex=patientClassCodes.length;
    patientClassCodes[patientClassCodes.length]=obj.expected[i][PatientCellHighlightExp];
  }
  if (matchIndex>=chartColor.length) {
    rand1 = Math.round(Math.random()*255);
    rand2 = Math.round(Math.random()*255);
    rand3 = Math.round(Math.random()*255);
    chartColor[chartColor.length]= "rgb("+rand1+","+rand2+","+rand3+")";
  }
  if (UnmatchedCodeColor!="0") {
    return UnmatchedCodeColor;
  }
  return chartColor[matchIndex];
}

function PatientCell(i) {
  PaedFlag=0;
  if (obj.patients[i][6].match(/days/)||obj.patients[i][6].match(/wks/)||obj.patients[i][6].match(/mths/)) {
    PaedFlag=1;
  }
  else {
    age=parseInt(obj.patients[i][6].replace(/[^0-9]/g, ''),10); 
    if (age<PaedAgeMax) PaedFlag=1;
  }

  patientClassColor=getPatientClassColor(i);
  bedClassColor=getBedClassColor(obj.patients[i][1]);
  OS= '<div id=Patient-' + i + ' class="PatientStyle" '+
      ' onmouseover="expandPatient(this);" '+
      ' onmouseout="collapsePatient();" >'  +
      '<div class="row1" style="cursor:pointer;background-color:'+
       patientClassColor + '" title="View Patient Demographics"' +
      ' onclick=\'PatientOpen("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'>'+
      '<span class="'+bedClassColor+'cellLocation'+WardOnly+'">' + obj.patients[i][1] + '</span>' +
      '<span class="cellPatientName'+WardOnly+'">'  + obj.patients[i][4].replace(/ *$/,"") + '</span>' +
      '<span class="cellAge">' + obj.patients[i][6] + '</span>' +
      '<span class="cellSex Sex'+obj.patients[i][5]+'"></span></div>'   
      
      //Display preferred name and DOB
      if (WWPrefNameDOB == "Yes") {
      
        OS += displayPrefNameDOB(i);
  
      }
      
      //Display Gender pronoun
      if (WWIDGenderPronoun == "Yes") {

        OS += displayGenderID(i);

      }

      OS += '<div class=row2>' 

  if (obj.patients[i][25]=='1') {
    OS+='<span class=StandByIcon' + obj.patients[i][25] + '></span>' 
  }
  else {
    OS+='<span class="FolderIcon FolderIcon' + obj.patients[i][22] + '"></span>'
  }
  OS+='<span class=AlertIcon'+ obj.patients[i][27].substr(5,1) +
      ' title="Patient Alerts"' +
      ' onclick=\'PatientAlerts("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
      '<span class=ResultIcon'+ obj.patients[i][27].substr(1,1) +
      ' title="Clinical Results"' +
      ' onclick=\'PatientResults("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
      '<span class=LegalStatusIcon'+ obj.patients[i][95].substr(0,1) +
      ' title="Legal Status"' +
      ' onclick=\'MHLegStat("'+ obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
      '<span class=NoteIcon'+ obj.patients[i][27].substr(2,1) +
      ' title="Clinical Notes"' +
      ' onclick=\'PatientNotes("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
      '<span class=DocumentIcon'+ obj.patients[i][27].substr(3,1) +
      ' title="Clinical Documents"' +
      ' onclick=\'PatientDocuments("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
      '<span class=PaediatricIcon'+ PaedFlag + ' ></span>';

  // Display surname conflict icon ?
  if (DisplayPatNamConfl == '1') {
    OS+='<span class=SameSurnameIcon'+ obj.patients[i][82] + 
        ' title="Same Surname"></span>';
  }

  if(obj.patients[i][89] == "1") {
    OS+='<span class=TheatreToday' + obj.patients[i][89] + ' ></span>';
  }

  OS+='<span>'+obj.patients[i][21]+obj.patients[i][2] +'</span></div>'

  // Display MV icon ?
  if (obj.patients[i][90] == "1") {
    OS+='<div class=row3 onclick=\'UpdateMechVent("'+obj.patients[i][2]+
                                            '","'+obj.patients[i][3]+
                                            '","'+obj.patients[i][91]+
                                            '","'+obj.patients[i][92]+
                                            '","'+obj.patients[i][93]+'");\''+
        ' title="Ventilation Times">' +
        '<span class=MechVentIcon'+ obj.patients[i][90] + ' ></span></div>';
  }

  OS+='<div class=row3 onclick=\'UpdateCondition("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'>' +
      '<span class=cell><span class=ConditionIcon'+obj.patients[i][18]+
      ' title="Update Condition"></span>'+
      obj.patients[i][17] + ShortDateTime(obj.patients[i][19]) + 
      obj.patients[i][94] +'</span></div>'+

      '<div class=row4 onclick=\'UpdateDiet("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\' title="Update Diet">' +
      '<span class=cell><span class=DietIcon></span>'+
      obj.patients[i][13] +'</span></div>' +

      '<div class=row7>'+
      '<span class=cell50><span class=label>Adm:</span>'+
       FormatDate(obj.patients[i][9]) +'</span>' + 
      '<span class=cell50r><span class=label>'
  if (!isWhitespace(obj.patients[i][87])) {
    OS+='Ext:'
  }
  OS+='</span> '+
      '<span> '+ obj.patients[i][87]  +'</span>' +
      '</span></div>'+
      '<div class=row7 onclick=\'DoctorView("'+obj.patients[i][28]+
      '");\' style="cursor:pointer" title="View Doctor Information"><span class=cell50><span class=labelFx>Doctor:</span>'+
      trim(obj.patients[i][8])+'</span>' +
      '<span class=cell50r><span class=label>Edd:</span> '+
      '<span class="EDD '+obj.patients[i][23]+'"> '+ 
      FormatDate(obj.patients[i][15]) +
      '</span></span>' +
      '</div>'

  if (!isWhitespace(obj.patients[i][29])) {
    OS+='<div class=row7 onclick=\'DoctorView("'+obj.patients[i][29]+
        '");\' style="cursor:pointer" title="View Doctor Information"><span class=cell><span class=labelFx>Doctor:</span>'+
        trim(obj.patients[i][30])+'</span></div>'
  }

  if (!isWhitespace(obj.patients[i][88])) {
    OS+='<div class=row7><span class=cell><span class=labelFx>' +
        'Discharge Preparation Status:</span>'+
         obj.patients[i][88]+'</span></div>'
  }

  OS+=addWorkingDiagnosis(i);
  OS+='<div class=row7><span class=cell>'+
      '<span class=labelFx>Unit:</span>'+obj.patients[i][32]+'</span></div>'
  if (!isWhitespace(obj.patients[i][20])) {
    OS+='<div class=row7><span class=cell><span class=labelFx>Comment:</span>'+
        obj.patients[i][20]+'</span></div>'
  }
  if (!isWhitespace(obj.patients[i][46])) {
    OS+=addTheatreDetails(i);
  }
  if (!isWhitespace(obj.patients[i][31])) {
    OS+='<div class=row7><span class=cell><span class=labelFx>Leave Ret:</span>'+obj.patients[i][31]+'</span></div>'
  }
  OS+='</div>'   
  return OS;
}                
function ExpectedPatientCell(i) {
  patientClassColor=getExpPatientClassColor(i);
  bedClassColor=getBedClassColor(obj.expected[i][14]);
  OS= '<div id=PatientExp-' + i + ' class="PatientStyle" >'  +
      '<div class="row1" style="cursor:pointer;background-color:'  + patientClassColor + '"' +
      ' title="View Patient Demographics"' +
      ' onclick=\'PatientOpen("'+obj.expected[i][0]+'","'+obj.expected[i][1]+'");\'>'+
      '<span class="cellPatientName'+WardOnly+'">'  + obj.expected[i][2].replace(/ *$/,"") + '</span>' +
      '<span class="cellAge">' + obj.expected[i][4] + '</span>' +
      '<span class="cellSex Sex'+obj.expected[i][3]+'"></span></div>'   +
      '<div class=row2>' +
      '<span class="FolderIcon FolderIcon' + obj.expected[i][5] + '"></span>' +
      '<span class=AlertIcon'+ obj.expected[i][6].substr(5,1) +
      ' title="Patient Alerts"' +
      ' onclick=\'PatientAlerts("'+obj.expected[i][0]+'","'+obj.expected[i][1]+'");\'></span>'+
      '<span class=ResultIcon'+ obj.expected[i][6].substr(1,1) +
      ' title="Clinical Results"' +
      ' onclick=\'PatientResults("'+obj.expected[i][0]+'","'+obj.expected[i][1]+'");\'></span>'+
      '<span class=NoteIcon'+ obj.expected[i][6].substr(2,1) +
      ' title="Clinical Notes"' +
      ' onclick=\'PatientNotes("'+obj.expected[i][0]+'","'+obj.expected[i][1]+'");\'></span>'+
      '<span class=DocumentIcon'+ obj.expected[i][6].substr(3,1) +
      ' title="Clinical Documents"' +
      ' onclick=\'PatientDocuments("'+obj.expected[i][0]+'","'+obj.expected[i][1]+'");\'></span>'+
      '<span>'+obj.expected[i][7]+obj.expected[i][0] +'</span></div>'+
      '<//div>'+
      '<div class=row5 onclick=\'UpdateCondition("'+obj.expected[i][0]+'","'+obj.expected[i][1]+'");\'>' +
      '<span class=cell><span class=ConditionIcon'+obj.expected[i][8]+
      ' title="Update Condition"></span>'+
      obj.expected[i][9] + ShortDateTime(obj.expected[i][10]) + 
      obj.patients[i][94] +'</span></div>'+
      '<div class=row6 onclick=\'UpdateDiet("'+obj.expected[i][0]+'","'+obj.expected[i][1]+'");\' title="Update Diet">' +
      '<span class=cell><span class=DietIcon></span>'+
      obj.expected[i][11] +'</span></div>' 
  if(obj.expected[i][17]=="1") {
    OS+='<span ><br>Post Op :' + obj.expected[i][12] + '<span>'
  } else {
    OS+='<span class=cell><br>Bed Request :' + obj.expected[i][12] + '<span>'
  }
  OS+='</div>'
  return OS;
}
function addWorkingDiagnosis(i) {
  var return_string;
  return_string='';
  if (isWhitespace(lblWorkingDiagnosis1)) {
    if (!isWhitespace(obj.patients[i][34])) {
      return_string+='<div class=row7><span class=label>Working Diagnosis</span></div>'+
                    '<div class=row7><span class=cell>'+obj.patients[i][34]+'</span></div>'
      if (!isWhitespace(obj.patients[i][35])) {
        return_string+='<div class=row7><span class=cell>'+obj.patients[i][35]+'</span></div>'
      }
      if (!isWhitespace(obj.patients[i][36])) {
        return_string+='<div class=row7><span class=cell>'+obj.patients[i][36]+'</span></div>'
      }
    }
  } else {
    if (!isWhitespace(obj.patients[i][34])) {
      return_string+='<div class=row7 onclick=\'UpdateCondition("'+
          obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'>'+
          '<span class=cell>'+
          '<span class=labelFx>'+lblWorkingDiagnosis1+'</span>'+
          obj.patients[i][34]+'</span></div>'
    }
    if (!isWhitespace(obj.patients[i][35])) {
      return_string+='<div class=row7 onclick=\'UpdateCondition("'+
          obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'>'+
          '<span class=cell>'+
          '<span class=labelFx>'+lblWorkingDiagnosis2+'</span>'+
          obj.patients[i][35]+'</span></div>'
    }
    if (!isWhitespace(obj.patients[i][36])) {
      return_string+='<div class=row7 onclick=\'UpdateCondition("'+
          obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'>'+
          '<span class=cell>'+
          '<span class=labelFx>'+lblWorkingDiagnosis3+'</span>'+
          obj.patients[i][36]+'</span></div>'
    }
  }
  return return_string;
}
function ShortDateTime(date) {
   if (isWhitespace(date)) return "";
   yyyy = date.substr(0,4)
   mm = date.substr(4,2)
   dd = date.substr(6,2)
   time = date.substr(8,5)
   mth3=mth3Name(mm);
   return("("+dd + "/" + mm + " " + time +")"  );
}

function FormatDateTime(date) {
   if (isWhitespace(date)) return "";
   yyyy = date.substr(0,4)
   mm = date.substr(4,2)
   dd = date.substr(6,2)
   mth3=mth3Name(mm);
   time = date.substr(8,5)
   return(dd + " " + mth3 + " " + yyyy + " at " + time  );
}
function FormatDate(date) {
   if (isWhitespace(date)) return "";
   yyyy = date.substr(0,4)
   mm = date.substr(4,2)
   dd = date.substr(6,2)
   mth3=mth3Name(mm);
   return(dd + " " + mth3 + " " + yyyy  );
}

function mth3Name(mm) {
   switch(mm) {
     case "01": mth3="Jan"; break;
     case "02": mth3="Feb"; break;
     case "03": mth3="Mar"; break;
     case "04": mth3="Apr"; break;
     case "05": mth3="May"; break;
     case "06": mth3="Jun"; break;
     case "07": mth3="Jul"; break;
     case "08": mth3="Aug"; break;
     case "09": mth3="Sep"; break;
     case "10": mth3="Oct"; break;
     case "11": mth3="Nov"; break;
     case "12": mth3="Dec"; break;
   }
  return mth3;
}
function getLocationMap() {
  for(var i = 0; i < obj.locations.length; i++) {
    flagLocation=true;
    if (flagLocation==true){
      LocationMap+='<div id=Location-'+i
      BedExt='';
      BedNo=0;
      BedFlag=false;
      for(var j = 0; j < obj.beds.length; j++) {
        if (obj.locations[i][1]==obj.beds[j][1]) {
          BedExt=obj.beds[j][3];
          BedFlag=true;
          BedNo=j;
//          LocationMap+=' title="'
//          for(var k = 0; k < obj.beds[j].length; k++) {
//            LocationMap+=k+'='+obj.beds[j][k]+"\n"
//          }
//          LocationMap+='"'
        }
      }
      if (BedFlag) {
        LocationMap+=' class="LocationStyle BedStatus'+obj.beds[BedNo][16]+'">'
        LocationMap+='<span class=cell50>'+obj.locations[i][0]
        if (obj.beds[BedNo][16]==1)  LocationMap+='(Closed)'
        LocationMap+='</span>'
        if (!isWhitespace(obj.beds[BedNo][3]))  LocationMap+='<span class=cell50r>Ext:'+obj.beds[BedNo][3]+'</span>'
        if (!isWhitespace(obj.beds[BedNo][6])) LocationMap+='<br>'+obj.beds[BedNo][6]
        if (!isWhitespace(obj.beds[BedNo][17])) LocationMap+='<br>'+obj.beds[BedNo][17]
        if (!isWhitespace(obj.beds[BedNo][18])) LocationMap+='<br>'+obj.beds[BedNo][18]
        if (!isWhitespace(obj.beds[BedNo][20])) LocationMap+='<br>'+obj.beds[BedNo][20]
        if (obj.beds[BedNo][19]=='1') LocationMap+='<br>Patient On Leave</span>'
        LocationMap+='<span class="BedSex Sex'+obj.beds[BedNo][12]+'"></span>'
        LocationMap+='</div>'
      }
      else {
        LocationMap+=' class="LocationStyle">'+obj.locations[i][0]+'</div>'
      }
    }
  }
}
function StyleMap() {
  var OtherIndex = obj.locations.length - 1
  if (ShowLocationAreas) {
    for(var i = 0; i < obj.locations.length; i++) {
      obj.locations[i][6]=obj.locations[i][2];
      obj.locations[i][7]=obj.locations[i][3];
      el=document.getElementById('Location-' + i );
      el.style.top=obj.locations[i][7];
      el.style.left=obj.locations[i][6];
      LocationWidth= obj.locations[i][4]-obj.locations[i][2]
      LocationHeight= obj.locations[i][5]-obj.locations[i][3]
      el.style.width=LocationWidth+'px';
      el.style.height=LocationHeight+'px';
      } }
  for(var i = 0; i < obj.patients.length; i++) {
    el=document.getElementById('Patient-' + i );
    FoundLocation=0
    for(var j = 0; j < obj.locations.length; j++) {
       if ( obj.patients[i][1] == obj.locations[j][1] && 
            obj.patients[i][2]!="" &&
            obj.patients[i][25]=='0' && 
//            isWhitespace(obj.patients[i][31])) {
          obj.patients[i][33]!='3') {
          FoundLocation=1
          el.style.top=obj.locations[j][7]+1;
          el.style.left=obj.locations[j][6];
          if (obj.locations[j][7] + PatientCellHeight < obj.locations[j][5]){
            obj.locations[j][7] = obj.locations[j][7] + PatientCellHeight }
          else {
            if (obj.locations[j][6] + PatientCellWidth < obj.locations[j][4]){
              obj.locations[j][7] = obj.locations[j][3]
              obj.locations[j][6] = obj.locations[j][6] + PatientCellWidth }
            else {
              obj.locations[j][7] = 10000 } }
       }
    }
    if (FoundLocation==0&&obj.patients[i][2]!="") {
          el.style.top=obj.locations[OtherIndex][7]+1;
          el.style.left=obj.locations[OtherIndex][6];
          if (obj.locations[OtherIndex][7] + 2*PatientCellHeight + 5 < obj.locations[OtherIndex][5]){
            obj.locations[OtherIndex][7] = obj.locations[OtherIndex][7] + PatientCellHeight +5 }
          else { 
            if (obj.locations[OtherIndex][6] + PatientCellWidth +5 < obj.locations[OtherIndex][4]){
              obj.locations[OtherIndex][7] = obj.locations[OtherIndex][3]
              obj.locations[OtherIndex][6] = obj.locations[OtherIndex][6] + PatientCellWidth + 5 }
            else {
              obj.locations[OtherIndex][7] = 10000 } }
    }
  }       
 for(var i = 0; i < obj.expected.length; i++) {
   el=document.getElementById('PatientExp-' + i );
   if (obj.expected[i][0]!="") {
 el.style.top=obj.locations[OtherIndex][7]+1;
          el.style.left=obj.locations[OtherIndex][6];
          if (obj.locations[OtherIndex][7] + 2*PatientCellHeight + 5 < obj.locations[OtherIndex][5]){
            obj.locations[OtherIndex][7] = obj.locations[OtherIndex][7] + PatientCellHeight +5 }
          else {
            if (obj.locations[OtherIndex][6] + PatientCellWidth +5 < obj.locations[OtherIndex][4]){
              obj.locations[OtherIndex][7] = obj.locations[OtherIndex][3]
              obj.locations[OtherIndex][6] = obj.locations[OtherIndex][6] + PatientCellWidth + 5 }
            else {
              obj.locations[OtherIndex][7] = 10000 } }
   }
 }
}
function StringSort(a,b) {
  return a[12] - b[12];
}
//------------------------------------------------------------
// Setup Drag & Drop Events Required
//------------------------------------------------------------
function StartMap() {
//    document.ondblclick  = dblclickEl;
    document.onmousedown = grabEl;
    document.onmousemove = moveEl;
    document.onmouseup   = dropEl;
    document.onkeydown   = OnKeyDown;
    activeEl             = document.getElementById('ImageLocation');
}
//============================================================
// OnKeyDown Event
//============================================================
function OnKeyDown(e) {
  // get the event (cross browser method)
  e = e ? e : window.event;
  if (e.keyCode == 13) {
    return false;}
}
//============================================================
// Grab when MouseDown Event
//============================================================
function expandPatient(el) {        
  if (savePatientLocation != null) return; 
  if (whichEl != null) { return; } 
  savePatientLocation=el;
  var pos=el;
  var posX = pos.offsetLeft;var posY = pos.offsetTop;
  while(pos.offsetParent) {
   if(pos==document.getElementsByTagName('body')[0]){
     break;
   }
   else {
     posX=posX+pos.offsetParent.offsetLeft;
     posY=posY+pos.offsetParent.offsetTop;
     pos=pos.offsetParent;
   }
  }
  saveExpandTop=posY;
  saveExpandLeft=posX;
  expandLeft=parseInt(el.style.left.replace(/px/,""),10);
  expandTop=parseInt(el.style.top.replace(/px/,""),10);
  if ((expandTop+expandHeight)>maxScreenHeight) el.style.top=(maxScreenHeight-expandHeight-12)+"px";
  if ((expandLeft+expandWidth)>maxScreenWidth) el.style.left=(maxScreenWidth-expandWidth-12)+"px";
  el.style.height=expandHeight+'px';
  el.style.width=expandWidth+'px';
  el.style.zIndex=10;
  el.style.borderWidth=expandBorder+'px';
  h=expandHeight+20;
  w=expandWidth+20;
  el.style.clip='rect(0px '+w+'px '+h+'px 0px)';
}
function collapsePatient() {        
  if (savePatientLocation == null) return;
  savePatientLocation.style.zIndex=1;
  savePatientLocation.style.top = saveExpandTop
  savePatientLocation.style.left = saveExpandLeft
  savePatientLocation.style.height=PatientCellHeight+'px';
  savePatientLocation.style.width=PatientCellWidth+'px';
  savePatientLocation.style.borderWidth='2px';
  h=PatientCellHeight+4;
  w=PatientCellWidth+4;
  savePatientLocation.style.clip='rect(0px '+w+'px '+h+'px 0px)';
  savePatientLocation = null;
}
//============================================================
// Grab when MouseDown Event
//============================================================
function grabEl(e) 
{        
  // get the event (cross browser method)
  DragDropFlag = false;
  e = e ? e : window.event;
  whichEl = e.srcElement;
  while (whichEl.id.indexOf("Patient") == -1) 
  {
    whichEl = whichEl.parentElement;
    if (whichEl == null) { return; } 
  }
  if (whichEl != activeEl) 
  {
    whichEl.style.zIndex = activeEl.style.zIndex + 100;
    activeEl = whichEl;        
  }
  originalLocId = null ;
  locTop=saveExpandTop;
  locLeft=saveExpandLeft;
  for(var i = 0; i < obj.locations.length; i++) 
  {
    if ((locTop  >= obj.locations[i][3] &&
         locTop  <= obj.locations[i][5] )&&
        (locLeft >= obj.locations[i][2] &&
         locLeft <= obj.locations[i][4])) 
    {
       originalLocId = i ;
       break;
    }
  }
  originalLeft = locLeft;
  originalTop  = locTop;
  whichEl.style.pixelLeft = whichEl.offsetLeft;
  whichEl.style.pixelTop = whichEl.offsetTop;
  currentX = (e.clientX + document.body.scrollLeft);
  currentY = (e.clientY + document.body.scrollTop);
}
function moveEl(e) { 
  e = e ? e : window.event;
  if (whichEl == null) { return };
  collapsePatient();
  window.scroll(0,0)
  newX = (e.clientX + document.body.scrollLeft);
  newY = (e.clientY + document.body.scrollTop);
  distanceX = (newX - currentX);
  distanceY = (newY - currentY);
  currentX = newX;
  currentY = newY;
  whichEl.style.pixelLeft += distanceX;
  whichEl.style.pixelTop += distanceY;
  e.returnValue = false;
}
function dropEl() {        
  DropFail=true
  if (whichEl == null) { return };
  if (originalLocId == null) { whichEl=null; return };
  collapsePatient();
  for(var i = 0; i < obj.locations.length; i++) {
   if ((whichEl.style.pixelTop  > obj.locations[i][3] &&
        whichEl.style.pixelTop  < obj.locations[i][5] )&&
       (whichEl.style.pixelLeft > obj.locations[i][2] &&
        whichEl.style.pixelLeft < obj.locations[i][4])) {
     if  ( i != originalLocId ) {
       NewLocation=obj.locations[i][1];
       NewLocationName=obj.locations[i][0];
       LocationOk=true
       DragDropFlag = true;
       if (obj.locations[i][8] == undefined) {
          LocationOk=CheckPatientLocation(NewLocation) }
       if (LocationOk) {
         whichEl.style.pixelTop = obj.locations[i][7];
         whichEl.style.pixelLeft = obj.locations[i][6];
         PatientNoArray = whichEl.id.split("-");
         PatientNo = PatientNoArray[1];
         updateLocation(obj.patients[PatientNo][2],obj.patients[PatientNo][3],NewLocation,"0"); 
         DropFail=false
         break; }
       else {
         whichEl.style.pixelTop = originalTop;
         whichEl.style.pixelLeft = originalLeft;
         break;}
       }}}
  if (DropFail) {
    DragDropFlag = false;
    whichEl.style.pixelTop = originalTop;
    whichEl.style.pixelLeft = originalLeft; }
  DropEl = whichEl;
  whichEl = null;    
}    
function CheckPatientLocation(Location) {
  for(var j = 0; j < obj.patients.length; j++) {
    if ( Location==obj.patients[j][3] ) { 
      SwapPatient=j;
      PatientDivisions = document.getElementsByTagName("DIV");
      for (i=0; i<PatientDivisions.length; i++) {
         PatientDiv=PatientDivisions[i].id.split("-")
         if (PatientDiv[0]=="Patient" && PatientDiv[1]==SwapPatient) {
            SwapEl=PatientDivisions[i] }}
      SwapFlag=confirm('Swap Patient Locations ? ')
      if (SwapFlag == false ) { return SwapFlag } 
      if (SwapFlag) { 
        SwapEl.style.pixelTop=obj.locations[originalLocId][7]
        SwapEl.style.pixelLeft=obj.locations[originalLocId][6] 
        PatientNoArray = SwapEl.id.split("-");
        PatientNo = PatientNoArray[1];
        updateLocation(obj.patients[PatientNo][2],obj.patients[PatientNo][3],NewLocation,"1"); 
      return SwapFlag }}}
  MoveFlag=1 
  return MoveFlag 
}
//------------------------------------------------------------
// Set a flag for controlling fireing of javascript             
//------------------------------------------------------------
function waitTimeOut(sglClick) {
  defPatientLink.waiting.value=sglClick;
}
//------------------------------------------------------------
// Function : Refresh Page
//----------------------------------------------------------------------
function PageRefresh() {
//   location.reload();
}
//------------------------------------------------------------
// Update Location - To Be Changed to use Remote scripting
//------------------------------------------------------------
function updateLocation(urnumber,admissno,bedcode,swap) {
  el=document.SelectWard.wardcode
  wardcode=el.options[el.selectedIndex].value.substr(0,3);
  SetCookie("tranward",wardcode)
  SetCookie("tranbed",bedcode)
  SetCookie("transwap",swap)
  var linkurl   = "../cgi-bin/patweb96.pbl?reportno=3&template=020" +
                    "&urnumber=" + urnumber.replace(/ /g,"+") +
                    "&admissno=" + admissno.replace(/ /g,"+") +
                    "&wardcode=" + wardcode.replace(/ /g,"+") +
                    "&trntowrd=" + wardcode.replace(/ /g,"+") +
                    "&trntobed=" + bedcode.replace(/ /g,"+") 

  DFrameLink(linkurl,50,250,950,300);
  CancelMapRefresh();
}
function PatientCellClinical(i) {
  patientClassColor=getPatientClassColor(i);
  bedClassColor=getBedClassColor(obj.patients[i][1]);
  OS= '<div id=Patient-' + i + ' class="PatientStyle" '+
      ' onmouseover="expandPatient(this);" '+
      ' onmouseout="collapsePatient();" '+
      '>'  +
      '<div class="row1" style="cursor:pointer;background-color:' + 
      patientClassColor + '"' +
      ' title="View Patient Demographics"' +
      ' onclick=\'PatientOpen("'+obj.patients[i][2]+'","' +
      obj.patients[i][3]+'");\'>'+
      '<span class="'+bedClassColor+'cellLocation'+WardOnly+'">' + 
      obj.patients[i][1] + '</span>' +
      '<span class="cellPatientName'+WardOnly+'">'  + 
      obj.patients[i][4].replace(/ *$/,"") + '</span>' +
      '<span class="cellAge">' + obj.patients[i][6] + '</span>' +
      '<span class="cellSex Sex'+obj.patients[i][5]+'"></span></div>';  

      //Display preferred name and DOB
      if (WWPrefNameDOB == "Yes") {
        
        OS += displayPrefNameDOB(i);

      }

      //Display Gender pronoun
      if (WWIDGenderPronoun == "Yes") {

        OS += displayGenderID(i);

      }

      OS += '<div class=row2>'  

  if (obj.patients[i][25]=='1') {
    OS+='<span class=StandByIcon' + obj.patients[i][25] + '></span>' 
  }
  else {
    OS+='<span class="FolderIcon FolderIcon' + obj.patients[i][22] + '"></span>'
  }
  OS+='<span class=AlertIcon'+ obj.patients[i][27].substr(5,1) +
      ' title="Patient Alerts"' +
      ' onclick=\'PatientAlerts("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
      '<span class=ResultIcon'+ obj.patients[i][27].substr(1,1) +
      ' title="Clinical Results"' +
      ' onclick=\'PatientResults("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
      '<span class=NoteIcon'+ obj.patients[i][27].substr(2,1) +
      ' title="Clinical Notes"' +
      ' onclick=\'PatientNotes("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
      '<span class=DocumentIcon'+ obj.patients[i][27].substr(3,1) +
      ' title="Clinical Documents"' +
      ' onclick=\'PatientDocuments("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
      '<span>'+obj.patients[i][21]+obj.patients[i][2] +'</span></div>'+
      '<div class=row3 onclick=\'UpdateCondition("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'>' +
      '<span class=cell><span class=ConditionIcon'+obj.patients[i][18]+
      ' title="Update Condition"></span>'+
      obj.patients[i][17] + ShortDateTime(obj.patients[i][19]) + 
      obj.patients[i][94] +'</span></div>' +
      '<div class=row4 onclick=\'UpdateDiet("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\' title="Update Diet">' +
      '<span class=cell><span class=DietIcon></span>'+
      obj.patients[i][13] +'</span></div>' +
      '<div class=row7>'+
      '<span class=cell30><span class=labelSx>Temp:</span> '+obj.patients[i][39] +'</span>'+
      '<span class=cell30><span class=labelSx>HR:</span> '+obj.patients[i][38] + '</span>' +
      '<span class=cell40><span class=labelSx>BP:</span> '+obj.patients[i][41]+'/'+ obj.patients[i][42] +'</span></div>'+
      '<div class=row7>'+
      '<span class=cell30><span class=labelSx>Resp:</span> '+obj.patients[i][40]+'</span>'
      if (trim(obj.patients[i][43])=="0") OS+='<span class=cell30><span class=labelSx>o2:</span></span>' 
      else OS+='<span class=cell30><span class=labelSx>o2:</span> '+obj.patients[i][43] + '%</span>' 
  OS+='<span class=cell40><span class=labelSx>Time:</span> '+obj.patients[i][37].substr(8,5) +'</span></div>'+
      '<div class=row7>'+
      '<span class=cell50><span class=labelSx>Adm:</span>'+
       FormatDate(obj.patients[i][9]) +'</span>' +
      '<span class=cell50r><span class=labelSx>Edd:</span> '+
      '<span class="EDD '+obj.patients[i][23]+'"> '+ FormatDate(obj.patients[i][15]) +'</span></span></div>'+
      '<div class=row7 onclick=\'DoctorView("'+obj.patients[i][28]+
      '");\' style="cursor:pointer" title="View Doctor Information"><span class=cell><span class=labelFx>Doctor:</span>'+
      trim(obj.patients[i][8])+'</span></div>'
  if (!isWhitespace(obj.patients[i][29])) {
    OS+='<div class=row7 onclick=\'DoctorView("'+obj.patients[i][29]+
        '");\' style="cursor:pointer" title="View Doctor Information"><span class=cell><span class=labelFx>Doctor:</span>'+
        trim(obj.patients[i][30])+'</span></div>'
  }
  OS+=addWorkingDiagnosis(i);
  OS+='<div class=row7><span class=cell>' +
      '<span class=labelFx>Unit:</span>'+obj.patients[i][32]+'</span></div>'
  if (!isWhitespace(obj.patients[i][20])) OS+='<div class=row7><span class=cell><span class=labelFx>Comment:</span>'+
                                          obj.patients[i][20]+'</span></div>'
  if (!isWhitespace(obj.patients[i][46])) {
    OS+=addTheatreDetails(i);
  }
  if (!isWhitespace(obj.patients[i][31])) {
    OS+='<div class=row7><span class=cell><span class=labelFx>Leave Ret:</span>'+obj.patients[i][31]+'</span></div>'
  }
  OS+='</div>'
  return OS;
}                
function addTheatreDetails(i) {
  var return_string;
  return_string='';
  return_string+='<div class=row7><span class=cell><span class=labelFx>Op Date:</span>'+
                 FormatDateTime(obj.patients[i][45])+' ('+ obj.patients[i][46]+'min)</span></div>'
  if (!isWhitespace(obj.patients[i][47])) {
    return_string+='<div class=row7 # onclick=\'DoctorView("'+obj.patients[i][47]+'");\' style="cursor:pointer" title="View Doctor Information">'+
                   '<span class=cell><span class=labelFx>Anaes:</span>'+
                   trim(obj.patients[i][48])+'</a></span></div>'
  }
  if (!isWhitespace(obj.patients[i][49])) {
    return_string+='<div class=row7><span class=cell><span class=labelFx>Theatre:</span>'+
                   trim(obj.patients[i][49])+'</span></div>'
  }
  if (!isWhitespace(obj.patients[i][50])) {
    return_string+='<div class=row7><span class=cell><span class=labelFx>Anae:</span>'+
                   trim(obj.patients[i][50])+'</span></div>'
  }
  if (!isWhitespace(obj.patients[i][51])) {
    return_string+='<div class=row7><span class=cell><span class=labelFx>Type:</span>'+
                   trim(obj.patients[i][51])+'</span></div>'
  }
  if (!isWhitespace(obj.patients[i][52])) {
    return_string+='<div class=row7><span class=cell><span class=labelFx>Tran:</span>'+
                   trim(obj.patients[i][52])+'</span></div>'
  }
  if (!isWhitespace(obj.patients[i][53])){
    return_string+='<div class=row7><span class=label>Procedures</span></div>'+
                   '<div class=row7><span class=cell>'+ trim(obj.patients[i][53])+'</span></div>'
    if (!isWhitespace(obj.patients[i][54])) {
      return_string+='<div class=row7><span class=cell>'+
                     trim(obj.patients[i][54])+'</span></div>'
    }
    if (!isWhitespace(obj.patients[i][55])) {
      return_string+='<div class=row7><span class=cell>'+
                     trim(obj.patients[i][55])+'</span></div>'
    }
  }
  if (!isWhitespace(obj.patients[i][56])) {
    return_string+='<div class=row7><span class=cell><span class=labelFx>Post Op:</span>'+
                   obj.patients[i][56]+'/'+obj.patients[i][57]+'</span></div>'
  }
  if (!isWhitespace(obj.patients[i][86])) {
    return_string+='<div class=row7><span class=cell><span class=labelFx>Status:</span>'+
                   trim(obj.patients[i][86])+'</span></div>'
  }
  return return_string;
}
function addWaitingAreaVertical() {
 if (obj.beds.length>0) {
   if (positionTop>startPositionTop) {
     positionLeft+=PatientCellWidth+LocationCellSpacing;
   }
   if (positionLeft+20+PatientCellWidth<maxScreenWidth) {
      positionLeft=maxScreenWidth-20-PatientCellWidth;
   }
   positionHeight=(maxScreenHeight-(startPositionTop*2)-12);
   obj.AddLocation("<div class=LocationHeading>Unallocated, On Leave, Standby and Expected</div>","NA",
                        positionLeft,
                        startPositionTop,
                        positionLeft+PatientCellWidth,
                        positionTop+20);
   obj.AddLocation("                 ","TBA",
                        positionLeft,
                        startPositionTop+20,
                        positionLeft+PatientCellWidth,
                        positionHeight,0,0,"OTHER"); 
  }
 else {
   if (positionTop>startPositionTop) {
     positionLeft+=PatientCellWidth+LocationCellSpacing;
   }
   if (positionLeft+20+PatientCellWidth<maxScreenWidth) {
      positionLeft=maxScreenWidth-20-PatientCellWidth;
   }
   positionWidth=(maxScreenWidth-(startPositionLeft*2)-12);
   positionHeight=(maxScreenHeight-(startPositionTop));
   obj.AddLocation("                 ","TBA",
                        startPositionLeft,
                        startPositionTop,
                        positionWidth,
                        positionHeight,0,0,"OTHER"); 
 }
}
function addWaitingAreaHorizontal() {
 if (obj.beds.length>0) {
   if (positionLeft>startPositionLeft) {
     positionTop+=PatientCellHeight+LocationCellSpacing;
   }
   if (positionTop+30+PatientCellHeight<maxScreenHeight) {
      positionTop=maxScreenHeight-30-PatientCellHeight;
   }
   positionWidth=(maxScreenWidth-(startPositionLeft*2)-10);
   obj.AddLocation("<div class=LocationHeading>On Leave, Standby and Expected</div>","NA",
                        startPositionLeft,
                        positionTop,
                        positionWidth,
                        positionTop+20);
   obj.AddLocation("                 ","TBA",
                        startPositionLeft,
                        positionTop+23,
                        positionWidth,
                        positionTop+23+PatientCellHeight,0,0,"OTHER");

 }
 else {
   if (positionTop>startPositionTop) {
     positionLeft+=PatientCellWidth+LocationCellSpacing;
   }
   if (positionLeft+20+PatientCellWidth<maxScreenWidth) {
      positionLeft=maxScreenWidth-20-PatientCellWidth;
   }
   positionWidth=(maxScreenWidth-(startPositionLeft*2)-12);
   positionHeight=(maxScreenHeight-(startPositionTop));
   obj.AddLocation("                 ","TBA",
                        startPositionLeft,
                        startPositionTop,
                        positionWidth,
                        positionHeight,0,0,"OTHER"); 
 }
}

//Displays the UR/PrefName/DOB line on the patient cells
function displayPrefNameDOB(i) {

  //UR Number
  var returnVal = '<div class="row1" style="cursor:pointer; background-color: '+
      patientClassColor + '" title="View Patient Demographics">' +
      '<span>' + obj.patients[i][2]+"</span>"

  //Display Prefered Names
  if ((preDisplay == "0") || (preDisplay == "2")) {
    obj.patients[i][96] = "";
  }

  if ((preDisplay == "0") || (preDisplay == "1")) {
    obj.patients[i][97] = "";
  }

  returnVal += displayPrefSurnam(i);
  returnVal += displayPrefFirstname(i);
  
  //Display Date of Birth
  returnVal += '<span class=label> DOB </span>'+
  '<span>'+FormatDate(obj.patients[i][100])+'</span></div>'

  return returnVal;
}

//Checks if Pref Surname to be displayed and present
//Closes brackets if Pref First name not present
function displayPrefSurnam(i) {

  var returnVal = ""; 

  if (prefSName == "1" && obj.patients[i][97].trim().length > 0) {
    returnVal += '<span> ['+obj.patients[i][97].trim()+'</span>';

    if (prefFName == "0" || obj.patients[i][96].trim().length == 0 ) {
       returnVal += '<span>] </span>'
    } else {
       returnVal += ', ';
    }
  }
  return returnVal;

}

//Checks if First Pref Name to be displayed and present
//Opens brackets if Pref surname not present
function displayPrefFirstname(i) {

  var returnVal = "";

  if (prefFName == "1" && obj.patients[i][96].trim().length > 0) {
    if (prefSName == "0" || obj.patients[i][97].trim().length == 0 ) {
       returnVal += '<span> [</span>';
    }
    returnVal += '<span>'+obj.patients[i][96].trim()+'] </span>';
  }

  return returnVal;
}

//Displays Gender ID and Pronoun
function displayGenderID(i) {

  returnVal = '<div class=row2 style="margin-bottom: 8px">'+
  '<span class=label>ID Gender </span>'+
  '<span>'+obj.patients[i][98]+' </span>'+
  '<span class=label>Pronoun </span>'+
  '<span>'+obj.patients[i][99]+'</span>'+
  '</div>';

  return returnVal;
}
