//jsVersion  : V11.03.03
//========================================================================
// Program   : WardWhiteboard.js
//========================================================================
var expandedEl="";
var filterNurseStation="";
var PrivacyTimeOut=0;
var togglePatientId="";
var presetCode = [];
var presetColor = [];
var ShowLocationAreas=true;
var ShowPatients=true;
var LocationCellSpacing=4;
var PatientCellFont='9pt';
var PatientCellHeight=145;
var PatientCellWidth=200;
var PatientCellHeightExpanded=345;
var PatientCellWidthExpanded=200;
var PatientCellPaddingTop=1;
var PatientCellPaddingLeft=1;
var PatientCellType=1;
var PatientNameType=0;
var PatientNameFormat=0;
var maxScreenHeight=500;
var maxScreenWidth=1024;
var startPositionTop=32;
var startPositionLeft=2;
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
var expandColor = "lightblue";
var expandBorder = 3;
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
// Statistics
var standByCount=0;
var onLeaveCount=0;
var patientBedCount=0;
var noBedCount=0;
var StandbyIndex;
var NoBedIndex;
var DietIconClass='DietIcon';
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
// Set the window refresh (delayed call)
//------------------------------------------------------------
function SetMapRefresh() {

 if (RefreshTime==0) {return;}

 RefreshFnId = setTimeout(function() {
     if (PrivacyTimeOut>0) SetCookie("PrivacyDisplay","1");
     window.location.reload(true);
   },(60000*RefreshTime));
}
//------------------------------------------------------------
// Cancel the delayed window refresh
//------------------------------------------------------------
function CancelMapRefresh() {
  clearTimeout(RefreshFnId);
}
//------------------------------------------------------------
// Draw Ward Whiteboard
//------------------------------------------------------------
function DrawMap() {
 setupConditionalSite();
 setupConditionalWard();
 SetMapRefresh();
 positionTop=30;
 positionLeft=5;
 t = new Map("blank.png");
 obj = t;
 maxScreenWidth=document.body.offsetWidth;
 maxScreenHeight=document.body.offsetHeight;
 SetBeds();
 SetPatients();
 SetExpected();
 CalculateStatistics();
 AddNSFilter();
 SetLocations();
 ShowMap();
 StyleMap();
 StartMap();
 maxScreenHeight=document.body.scrollHeight;
}
function AddNSFilter() {
  var ns = new Array();
  var addNS=true;
  var optionText="";
  var NurseStationViewCode=top.menu.GetCookieData("NurseStationViewCode");
  if (NurseStationViewCode=="unknown") NurseStationViewCode=""
  for(var i = 0; i < obj.beds.length; i++) {
    addNS=true;
    for(var j = 0; j < ns.length; j++) {
      if (ns[j]==obj.beds[i][13]) addNS=false;
    }
    if (addNS) ns[ns.length]=obj.beds[i][13];
  }
  if (ns.length>1) {
    var NSFilter=document.getElementById("NSFilter");
    NSFilter.style.display="";
    for(var i = 0; i < ns.length; i++) {
      optionText="Station - "+ns[i];
      if (isWhitespace(ns[i])) optionText="Unallocated";
      NSFilter.options[NSFilter.options.length] = new Option(optionText,ns[i]);
      if (ns[i]==NurseStationViewCode) {
        NSFilter.selectedIndex=i+1;
        filterNurseStation=NurseStationViewCode;
      }
    }
  }
}
function ConfigureStyle() {
 w=PatientCellWidth+2
 h=PatientCellHeight+2
 StyleString="font-size:"+PatientCellFont+";clip: rect(0px "+w+"px "+h+"px 0px);";
 w=PatientCellWidth-2
 h=PatientCellHeight-2
 StyleString+="height:"+h+"px;width:"+w+"px;overflow:hidden;overflow:hidden;"
 StyleString+="background-color:#fff;margin:0;padding:0;border:2px solid #ddd;";
 document.styleSheets[document.styleSheets.length-1].addRule(".PatientStyle", StyleString);
 StyleString="font-size:"+PatientCellFont+";";
 document.styleSheets[document.styleSheets.length-1].addRule("td", StyleString);
 w=PatientCellWidth
 h=PatientCellHeight
 StyleString="height:"+h+"px;width:"+w+"px;overflow:hidden;"
 document.styleSheets[document.styleSheets.length-1].addRule(".LocationStyle", StyleString);
}

//Toggles whether private info is displayed
function PrivacyOn() {

  //Retrieves all elements marked as private 
  if (typeof document.getElementsByClassName == 'function') {
    var privateElements=document.getElementsByClassName("Privacy");
  } else {
    var privateElements=getElementsByClassName(document.getElementById("WardMap"),"Privacy");
  }

  var btn=document.getElementById("btnPrivacy");

  //Cycles through all the elements and either hides or reveals them
  //Changes the text on the button to reflect.
  for (var i=0;i<privateElements.length;i++) {
    if (privateElements[i].style.color=="transparent") {
      privateElements[i].style.color="";
      
      if (privateElements[i].id == "privateImage") {
        privateElements[i].style.display = "";
      }

      btn.value="Privacy On";
      SetCookie("PrivacyDisplay","")
    } else {
      privateElements[i].style.color="transparent";

      if (privateElements[i].id == "privateImage") {
        privateElements[i].style.display = "none";
      }

      btn.value="Privacy Off";
      SetCookie("PrivacyDisplay","1");
    }
  }
}

function getElementsByClassName(node, classname) {
  var a = [];
  var re = new RegExp('(^| )'+classname+'( |$)');
  var els = node.getElementsByTagName("*");
  for(var i=0,j=els.length; i<j; i++) {
    if(re.test(els[i].className)) a.push(els[i]);
  }
  return a;
}
function UpdateCondition(urnumber,admissno) {
  if (DragDropFlag) return;
  collapsePatient();
  linkurl="patweb93.pbl?reportno=5&template=002" +
          "&urnumber=" + urnumber + "&admissno=" + admissno
  w = document.body.clientWidth*0.6;
  h = document.body.clientHeight*0.95;
  left = (document.body.clientWidth-w)/2;

  DFrameLink(linkurl,0,left,w,h);
  CancelMapRefresh();
}
function UpdateDiet(urnumber,admissno) {
  if (DragDropFlag) return;
  collapsePatient();
  SetCookie("SortWardCookie",'1');
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
function PatientBoarder(urnumber,admissno) {
  if (DragDropFlag) return;
  collapsePatient();
  linkurl="patweb83.pbl?reportno=5&template=001" +
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
      if (filterNurseStation==""||filterNurseStation==obj.beds[i][13]) {
        obj.AddLocation(obj.beds[i][2],obj.beds[i][1],
                        positionLeft,positionTop,
                        positionLeft+PatientCellWidth,
                        positionTop+PatientCellHeight);
        positionTop+=PatientCellHeight+LocationCellSpacing;
        if ((positionTop+PatientCellHeight)>maxScreenHeight) {
          positionTop=startPositionTop;
          positionLeft+=PatientCellWidth+LocationCellSpacing;
        }
      }
    }
    return
  }
  if (orientation=="List") {
    checkScreenSpace(3);
    positionTop=startPositionTop;
    positionLeft=startPositionLeft;
    for(var i = 0; i < obj.beds.length; i++) {
      if (filterNurseStation==""||filterNurseStation==obj.beds[i][13]) {
        obj.AddLocation(obj.beds[i][2],obj.beds[i][1],
                        positionLeft,positionTop,
                        positionLeft+PatientCellWidth,
                        positionTop+PatientCellHeight);
        positionTop+=PatientCellHeight+LocationCellSpacing;
      }
    }
    return;
  }
  checkScreenSpace(2);
  positionTop=startPositionTop;
  positionLeft=startPositionLeft;
  for(var i = 0; i < obj.beds.length; i++) {
    if (filterNurseStation==""||filterNurseStation==obj.beds[i][13]) {
      obj.AddLocation(obj.beds[i][2],obj.beds[i][1],
                      positionLeft,positionTop,
                      positionLeft+PatientCellWidth,
                      positionTop+PatientCellHeight);
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
    } else {
      totalColumns=Math.floor((maxScreenWidth-startPositionLeft-12)/(PatientCellWidth+LocationCellSpacing));
      PatientCellWidth=Math.floor(((maxScreenWidth-startPositionLeft-12)/totalColumns)-LocationCellSpacing);
      ConfigureStyle();
    }
    return;
  }
  if (orient==2) {
    totalColumns=Math.floor((maxScreenWidth-startPositionLeft-12)/(PatientCellWidth+LocationCellSpacing));
    PatientCellWidth=Math.floor(((maxScreenWidth-startPositionLeft-12)/totalColumns)-LocationCellSpacing);
    ConfigureStyle();
    return;
  }
  if (orient==3) {
    totalColumns=1;
    var SBL=0; //Standby / Onleave Width fixed to 250px
    if (obj.beds.length>0) SBL=260;
    PatientCellWidth=Math.floor(((maxScreenWidth-startPositionLeft-12-SBL)/totalColumns)-LocationCellSpacing);
    ConfigureStyle();
    return;
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
        case 1: PatientMap+=PatientTable01(i);break;
        case 2: PatientMap+=PatientTable02(i);break;
        case 3: PatientMap+=PatientTable03(i);break;
        case 4: PatientMap+=PatientTable04(i);break;
        case 5: PatientMap+=smPatientCell(i);break;
        case 6: PatientMap+=PatientCellClinical(i);break;
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
      '<div class="row1" style="background-color:'  + patientClassColor + '"' +
      ' onclick=\'PatientOpen("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'>'+
      '<span class="'+bedClassColor+'cellLocation'+WardOnly+'">' + obj.patients[i][1] + '</span>' +
      '<span class="Privacy cellPatientName'+WardOnly+'">'  + getPatientName(i) + '</span>' +
      '<span class="Privacy cellAge">' + obj.patients[i][6] + '</span>' +
      '<span class="Privacy cellSex Sex'+obj.patients[i][5]+'"></span></div>';  

      //Display Preferred Name and DOB
      if (WWPrefNameDOB == "Yes") {
        OS += PatientTable0101WWPrefNamDOB(i);
      }

      //Display Gender Pronoun
      if (WWIDGenderPronoun == "Yes") {
        OS += PatientTable0101WWIDGender(i);
      }

      OS += '<div class=row2>' 
  if (obj.patients[i][25]=='1') {
    OS+='<span class=StandByIcon' + obj.patients[i][25] + '></span>' 
  }
  else {
    OS+='<span class="FolderIcon FolderIcon' + obj.patients[i][22] + '"'+
        ' onclick=\'PatientOpen("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'
  }
  OS+='<span class=AlertIcon'+ obj.patients[i][27].substr(0,1) +
      ' onclick=\'PatientAlerts("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
      '<span class=BoarderIcon'+ obj.patients[i][80]+
      ' onclick=\'PatientBoarders("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
      '<span class=ResultIcon'+ obj.patients[i][27].substr(1,1) +
      ' onclick=\'PatientResults("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
      '<span class=NoteIcon'+ obj.patients[i][27].substr(2,1) +
      ' onclick=\'PatientNotes("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
      '<span class=DocumentIcon'+ obj.patients[i][27].substr(3,1) +
      ' onclick=\'PatientDocuments("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
      '<span>'+obj.patients[i][21]+obj.patients[i][2] +'</span></div>'+
      '<//div>'+
      '<div class=row5 onclick=\'UpdateCondition("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'>' +
      '<span class=cell><span class=ConditionIcon'+obj.patients[i][18] +'></span>'+
      obj.patients[i][17] + ShortDateTime(obj.patients[i][19]) +
      obj.patients[i][94] +'</span></div>'+
      '<div class=row6 onclick=\'UpdateDiet("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'>' +
      '<span class=cell><span class='+DietIconClass+'></span>'+
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
function PatientTable01(i) {
  DietIconClass=getDietIconClass(i);
  PaedFlag=getPaediatricInd(i);
  patientClassColor=getPatientClassColor(i);
  bedClassColor=getBedClassColor(obj.patients[i][1]);
  OS= '<div id=Patient-' + i + ' class="PatientStyle" '+
      ' onmouseover="expandPatient(this);" '+
      ' onmouseout="collapsePatient();" >'  +
      '<div class="row1" style="background-color:'  + patientClassColor + '"' +
      ' onclick=\'PatientOpen("'+obj.patients[i][2]+'","'+
      obj.patients[i][3]+'");\'>'+
      '<span class="'+bedClassColor+'cellLocation'+WardOnly+'">' + 
      obj.patients[i][1] + '</span>' +
      '<span class="Privacy cellPatientName'+WardOnly+'">'  +  
      getPatientName(i) + 
      obj.patients[i][21]+obj.patients[i][2] +'</span>'+
      '<span class="Privacy cellAge">' + obj.patients[i][6] + '</span>' +
      '<span class="Privacy cellSex Sex'+obj.patients[i][5]+'"></span></div>';
      
      //Display preferred name and DOB
      if (WWPrefNameDOB == "Yes") {
        OS += PatientTable0101WWPrefNamDOB(i);
      }

      //Display Gender Pronoun
      if (WWIDGenderPronoun == "Yes") {
         OS += PatientTable0101WWIDGender(i)
      }
     
  OS+=PatientTable0102(i);
  OS+=PatientTable0103(i);
  OS+=PatientTable0104(i);
  OS+=PatientTable0105(i);
  OS+=PatientTable0106(i);
  OS+=PatientTable0107(i);
  OS+=PatientTable0108(i);
  OS+=PatientTable0109(i);
  OS+=PatientTable0110(i);
  OS+=PatientTable0111(i);
  if (!isWhitespace(obj.patients[i][46])) {
    OS+=addTheatreDetails(i);
  }
  OS+=PatientTable0112(i);  /* Leave Return */
  OS+='</div>'   
  return OS;
}                

function PatientTable0101WWPrefNamDOB(i) {
 
  var returnVal = '<div class="row1" style="cursor:pointer; background-color:'+
      patientClassColor+'" title="View Patient  Demographics">'+
      '<span class="Privacy">' + obj.patients[i][2]+'</span>';

  returnVal += displayPrefSurname(i);
  returnVal += displayPrefFirstname(i);

  returnVal += '<span class="Privacy label"> DOB </span>'+
  '<span class="Privacy">'+FormatDate(obj.patients[i][100])+
  '</span></div>';

  return returnVal;
}

//Display Prefered Names
function setPrefNames(i) {

  if ((preDisplay == "0") || (preDisplay == "2")) {
    obj.patients[i][96] = "";
  }

  if ((preDisplay == "0") || (preDisplay == "1")) {
    obj.patients[i][97] = "";
  }
}

function displayPrefSurname(i) {

  var returnVal = "";
  setPrefNames(i);

  if (prefSName == "1" && obj.patients[i][97].trim().length > 0) {
    returnVal += '<span class="Privacy"> ['+obj.patients[i][97].trim()+'</span>';
    if (prefFName == "0" || obj.patients[i][96].trim().length == 0 ) {
      returnVal += '<span class="Privacy">] </span>'
    } else {
      returnVal += ', ';
    }
  }
  return returnVal;
}

function displayPrefFirstname(i) {

  var returnVal = "";

  setPrefNames(i);

  //Checks if First Pref Name to be displayed and present
  //Opens brackets if Pref surname not present
  if (prefFName == "1" && obj.patients[i][96].trim().length > 0) {
    if (prefSName == "0" || obj.patients[i][97].trim().length == 0 ) {
      returnVal += '<span class="Privacy"> [</span>';
    }
    returnVal += '<span class="Privacy">'+obj.patients[i][96].trim()+'] </span>';
  }

  return returnVal;
}

function PatientTable0101WWIDGender(i) {

  var returnVal = '<div class="row2" style="margin-bottom:10px">'+
      '<span class="label">ID Gender </span>'+
      '<span>'+obj.patients[i][98]+'</span>'+
      '<span class="label"> Pronoun </span>'+
      '<span>'+obj.patients[i][99]+'</span>'+
      '</div>';

  return returnVal;

}

function PatientTable0102(i) {
  var returnVal='<div class=row2>' 
  if (obj.patients[i][25]=='1') {
    returnVal+='<span class=StandByIcon' + obj.patients[i][25] + '></span>' 
  }
  else {
    returnVal+='<span class="FolderIcon FolderIcon' + obj.patients[i][22] + '"'+
        ' onclick=\'PatientOpen("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'
  }
  returnVal+='<span class=AlertIcon'+ obj.patients[i][27].substr(0,1) +
      ' onclick=\'PatientAlerts("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
      '<span class=BoarderIcon'+ obj.patients[i][80]+
      ' onclick=\'PatientBoarders("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
      '<span class=ResultIcon'+ obj.patients[i][27].substr(1,1) +
      ' onclick=\'PatientResults("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
      '<span class=NoteIcon'+ obj.patients[i][27].substr(2,1) +
      ' onclick=\'PatientNotes("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
      '<span class=DocumentIcon'+ obj.patients[i][27].substr(3,1) +
      ' onclick=\'PatientDocuments("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
      '<span class=PaediatricIcon'+ PaedFlag + ' ></span>';

  // Display surname conflict icon ?
  if (DisplayPatNamConfl == '1') {
    returnVal+='<span class=SameSurnameIcon'+ obj.patients[i][82] + ' ></span>';
  }

  if(obj.patients[i][89] == "1") {
    returnVal+='<span class=TheatreToday' + obj.patients[i][89] + ' ></span>';
  }

  var btnLab=[btnLab0,btnLab1,btnLab2,btnLab3,btnLab4,
              btnLab5,btnLab6,btnLab7,btnLab8,btnLab9];
  var indFld=obj.patients[i][76];
  for (var x=0;x<10;x++) {
    if (indFld.substr(x,1)==1) {
      returnVal+='<span title="'+btnLab[x]+'" class="buttonInd'+x+'"></span>';
    }
  }
  returnVal+='</div>'
  return returnVal;
}
function PatientTable0103(i) {
  var returnVal='<div class=row3 onclick=\'UpdateCondition("'+
                obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'>' +
               '<span class=cell><span class=ConditionIcon'+obj.patients[i][18] +'></span>'+
               obj.patients[i][17] + ShortDateTime(obj.patients[i][19]) +
               obj.patients[i][94] +'</span></div>'
  return returnVal;
}
function PatientTable0104(i) {
  var returnVal='<div class=row4 onclick=\'UpdateDiet("'+
                 obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'>' +
                '<span class=cell><span class='+DietIconClass+'></span>'+
                obj.patients[i][13] +'</span></div>' 
  return returnVal;
}
function PatientTable0105(i) {
  var returnVal='<div class=row7>'+
      '<span class=cell50><span class=label>Adm:</span>'+
       FormatDate(obj.patients[i][9]) +'</span>' + 
      '<span class=cell50r><span class=label>Edd:</span> '+
      '<span class="EDD '+obj.patients[i][23]+'"> '+ FormatDate(obj.patients[i][15]) +'</span></span></div>';
  return returnVal;
}
function PatientTable0106(i) {
  var ActLOS=CalculateDays(FormatDate(obj.patients[i][9]));
  var ST="";
  if (parseInt(ActLOS,10) > parseInt(obj.patients[i][83],10)) ST="class=PastDischDate";
  var return_string='<div class=row7>'+
      '<span class=cell50><span class=labelSx>Planned LOS:</span>'+ obj.patients[i][83] +'</span>' +
      '<span class=cell50r><span class=labelSx>Actual LOS:</span>'+ 
      '<span '+ST+'>'+ActLOS + '</span></span></div>';
  return return_string;
}
function PatientTable0107(i) {
  var returnVal='<div class=row7 onclick=\'DoctorView("'+obj.patients[i][28]+
      '");\'><span class=cell50><span class=labelSx>Doctor:</span>'+
      trim(obj.patients[i][8])+'</span>' +
      '<span class=cell50r><span class=labelSx>';
      if (!isWhitespace(obj.patients[i][87])) {
       returnVal+='Ext:'
      }
      returnVal+='</span>'+
      '<span>'+ obj.patients[i][87] + '</span></span>'+
      '</div>'
  if (!isWhitespace(obj.patients[i][29])) {
    returnVal+='<div class=row7  onclick=\'DoctorView("'+obj.patients[i][29]+
        '");\'><span class=cell><span class=labelFx>Doctor:</span>'+
        trim(obj.patients[i][30])+'</span></div>'
  }
  return returnVal;
}
function PatientTable0108(i) {
  var returnVal='<div class=row7><span class=label>Diagnosis</span>';

  if (document.getElementById("shwphoto").value == "1") {
    returnVal += displayImage(i);
  }

  returnVal += "</div>";

  if (!isWhitespace(obj.patients[i][34])) {
    returnVal+='<div class=row7><span class=cell>'+obj.patients[i][34]+'</span></div>';
  }
  if (!isWhitespace(obj.patients[i][35])) {
    returnVal+='<div class=row7><span class=cell>'+obj.patients[i][35]+'</span></div>';
  }
  if (!isWhitespace(obj.patients[i][36])) {
    returnVal+='<div class=row7><span class=cell>'+obj.patients[i][36]+'</span></div>';
  } 
 
  return returnVal;
} 
function PatientTable0109(i) {
  var return_string='<div class=row7><span class=labelFx>Claim Type : </span>'+
                    obj.patients[i][84]+" / "+ obj.patients[i][85]+'</span>' +
                    '</div>';
  if (!isWhitespace(obj.patients[i][88])) {
      return_string+='<div class=row7><span class=label>' +
                    'Discharge Preparation Status:</span>'+
                    obj.patients[i][88]+'</span>' +
                    '</div>';
  }
  return return_string;
}
function PatientTable0110(i) {
  var returnVal='';
  if (freeTxtFld1==1) { returnVal+='<div class=row7><span class=label>'+
                        freeTxtLab1+'</span>'+obj.patients[i][67]+'</div>'; }
  if (freeTxtFld2==1) { returnVal+='<div class=row7><span class=label>'+
                        freeTxtLab2+'</span>'+obj.patients[i][68]+'</div>'; }
  if (freeTxtFld3==1) { returnVal+='<div class=row7><span class=label>'+
                        freeTxtLab3+'</span>'+obj.patients[i][69]+'</div>'; }
  if (freeTxtFld4==1) { returnVal+='<div class=row7><span class=label>'+
                        freeTxtLab4+'</span>'+obj.patients[i][70]+'</div>'; }
  if (freeTxtFld5==1) { returnVal+='<div class=row7><span class=label>'+
                        freeTxtLab5+'</span>'+obj.patients[i][71]+'</div>'; }
  if (freeTxtFld6==1) { returnVal+='<div class=row7><span class=label>'+
                        freeTxtLab6+'</span>'+obj.patients[i][72]+'</div>'; }
  if (freeTxtFld7==1) { returnVal+='<div class=row7><span class=label>'+
                        freeTxtLab7+'</span>'+obj.patients[i][73]+'</div>'; }
  if (freeTxtFld8==1) { returnVal+='<div class=row7><span class=label>'+
                        freeTxtLab8+'</span>'+obj.patients[i][74]+'</div>'; }
  if (codedFld1==1) {returnVal+='<div class=row7><span class=label>'+
                     codedTitle1+'</span>'+ obj.patients[i][59]+'</div>';}
  if (codedFld2==1) {returnVal+='<div class=row7><span class=label>'+
                     codedTitle2+'</span>'+ obj.patients[i][60]+'</div>';}
  if (codedFld3==1) {returnVal+='<div class=row7><span class=label>'+
                     codedTitle3+'</span>'+ obj.patients[i][61]+'</div>';}
  if (codedFld4==1) {returnVal+='<div class=row7><span class=label>'+
                     codedTitle4+'</span>'+ obj.patients[i][62]+'</div>';}
  if (codedFld5==1) {returnVal+='<div class=row7><span class=label>'+
                     codedTitle5+'</span>'+ obj.patients[i][63]+'</div>';}
  if (codedFld6==1) {returnVal+='<div class=row7><span class=label>'+
                     codedTitle6+'</span>'+ obj.patients[i][64]+'</div>';}
  if (codedFld7==1) {returnVal+='<div class=row7><span class=label>'+
                     codedTitle7+'</span>'+ obj.patients[i][65]+'</div>';}
  if (codedFld8==1) {returnVal+='<div class=row7><span class=label>'+
                     codedTitle8+'</span>'+ obj.patients[i][66]+'</div>';}
  return returnVal;
}
function PatientTable0111(i) {
  var returnVal='<div class=row7><span class=cell>'+
                '<span class=labelFx>Unit:</span>'+obj.patients[i][32]+'</span></div>'
  if (!isWhitespace(obj.patients[i][20])) {
    returnVal+='<div class=row7><span class=cell><span class=labelFx>Comment:</span>'+
                obj.patients[i][20]+'</span></div>'
  }
  return returnVal;
}
/*
   Leave Return Date/Time
*/
function PatientTable0112(i) {
  var returnVal='';
  if (!isWhitespace(obj.patients[i][31])) {
    returnVal='<div class=row7><span class=cell><span class=labelFx>Leave:</span>'+
         obj.patients[i][31]+'</span></div>';
  }
  return returnVal;
}
function ExpectedPatientCell(i) {
  patientClassColor=getExpPatientClassColor(i);
  bedClassColor=getBedClassColor(obj.expected[i][14]);
  OS= '<div id=PatientExp-' + i + ' class="PatientStyle" >'  +
      '<div class="row1" style="background-color:'  + patientClassColor + '"' +
      ' onclick=\'PatientOpen("'+obj.expected[i][0]+'","'+obj.expected[i][1]+'");\'>'+
      '<span class="cellPatientName'+WardOnly+'">'  + obj.expected[i][2].replace(/ *$/,"") + '</span>' +
      '<span class="cellAge">' + obj.expected[i][4] + '</span>' +
      '<span class="cellSex Sex'+obj.expected[i][3]+'"></span></div>'   +
      '<div class=row2>' +
      '<span class="FolderIcon FolderIcon' + obj.expected[i][5] + '"></span>' +
      '<span class=AlertIcon'+ obj.expected[i][6].substr(0,1) +
      ' onclick=\'PatientAlerts("'+obj.expected[i][0]+'","'+obj.expected[i][1]+'");\'></span>'+
      '<span class=ResultIcon'+ obj.expected[i][6].substr(1,1) +
      ' onclick=\'PatientResults("'+obj.expected[i][0]+'","'+obj.expected[i][1]+'");\'></span>'+
      '<span class=NoteIcon'+ obj.expected[i][6].substr(2,1) +
      ' onclick=\'PatientNotes("'+obj.expected[i][0]+'","'+obj.expected[i][1]+'");\'></span>'+
      '<span class=DocumentIcon'+ obj.expected[i][6].substr(3,1) +
      ' onclick=\'PatientDocuments("'+obj.expected[i][0]+'","'+obj.expected[i][1]+'");\'></span>'+
      '<span>'+obj.expected[i][7]+obj.expected[i][0] +'</span></div>'+
      '<//div>'+
      '<div class=row5 onclick=\'UpdateCondition("'+obj.expected[i][0]+'","'+obj.expected[i][1]+'");\'>' +
      '<span class=cell><span class=ConditionIcon'+obj.expected[i][8] +'></span>'+
      obj.expected[i][9] + ShortDateTime(obj.expected[i][10]) +
      obj.patients[i][94] +'</span></div>'+
      '<div class=row6 onclick=\'UpdateDiet("'+obj.expected[i][0]+'","'+obj.expected[i][1]+'");\'>' +
      '<span class=cell><span class=DietIcon></span>'+
      obj.expected[i][11] +'</span></div>'
  if(obj.expected[i][17]=="1") {
    OS+='<span ><br>Post Op :' + obj.expected[i][14] + '<span>'
  } else {
    OS+='<span class=cell><br>Bed Request :' + obj.expected[i][14] + '<span>'
  }
  OS+='</div>'
  return OS;
}
function addWorkingDiagnosis(i) {
  var return_string;
  return_string='';
  if (isWhitespace(lblWorkingDiagnosis1)) {
    if (!isWhitespace(obj.patients[i][34])) {
      return_string+='<div class=row7><span class=label>Diagnosis</span></div>'+
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

function FormatTime(date) {
   if (isWhitespace(date)) return "";
   yyyy = date.substr(0,4)
   mm = date.substr(4,2)
   dd = date.substr(6,2)
   mth3=mth3Name(mm);
   time = date.substr(8,5)
   return time;
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
function FormatShortDateTime(date) {
   if (isWhitespace(date)) return "";
   yyyy = date.substr(0,4)
   mm = date.substr(4,2)
   dd = date.substr(6,2)
   mth3=mth3Name(mm);
   time = date.substr(8,5)
   return(dd + " " + mth3 + " at " + time  );
}
function FormatDate(date) {
   if (isWhitespace(date)) return "";
   yyyy = date.substr(0,4)
   mm = date.substr(4,2)
   dd = date.substr(6,2)
   mth3=mth3Name(mm);
   return(dd + " " + mth3 + " " + yyyy  );
}
function FormatShortDate(date) {
   if (isWhitespace(date)) return "";
   yyyy = date.substr(0,4)
   mm = date.substr(4,2)
   dd = date.substr(6,2)
   mth3=mth3Name(mm);
   return(dd + " " + mth3);
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
  if (GetCookieData("PrivacyDisplay")==1) PrivacyOn();
  if (ShowLocationAreas) {
    for(var i = 0; i < obj.locations.length; i++) {
      obj.locations[i][6]=obj.locations[i][2];
      obj.locations[i][7]=obj.locations[i][3];
      el=document.getElementById('Location-' + i );
      el.style.top=obj.locations[i][7];
      el.style.left=obj.locations[i][6];
      LocationWidth=obj.locations[i][4]-obj.locations[i][2];
      LocationHeight=obj.locations[i][5]-obj.locations[i][3];
if (LocationHeight>0) {
      el.style.height=LocationHeight+'px';
      el.style.width=LocationWidth+'px';
} else {
  alert(i+' = '+LocationHeight+'--'+obj.locations[i][5]+'--'+obj.locations[i][3]);
}
    } 
  }
  for(var i = 0; i < obj.patients.length; i++) {
    el=document.getElementById('Patient-' + i );
    FoundLocation=0
    for(var j = 0; j < obj.locations.length; j++) {
      if (obj.patients[i][1] == obj.locations[j][1] && 
          obj.patients[i][2]!="" &&
          obj.patients[i][25]=='0' && 
//          isWhitespace(obj.patients[i][31])) {
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
              obj.locations[j][7] = 10000 
            } 
         }
       }
    }

    FoundNoBed = 0;
    if (isWhitespace(filterNurseStation) &&
        document.
        getElementById('NSFilter')[document.getElementById('NSFilter').
        selectedIndex].text != 'Unallocated') {
      FoundNoBed = 1;
    } else {
      for(var x = 0; x < obj.beds.length; x++) {
        if (obj.beds[x][1] == obj.patients[i][1]) {
          if (filterNurseStation == obj.beds[x][13]) {
            FoundNoBed = 1;
          }
        }
      }
    }

    if (FoundLocation==0&&obj.patients[i][2]!=""&&FoundNoBed==1) {
      indexLocation=NoBedIndex;
//      if (obj.patients[i][25]=='1'||!isWhitespace(obj.patients[i][31])) {
      if (obj.patients[i][25]=='1'||obj.patients[i][33]=='3') {
        indexLocation=StandByIndex;
      }  
      el.style.top=obj.locations[indexLocation][7]+1;
      el.style.left=obj.locations[indexLocation][6];
      if (obj.locations[indexLocation][7] + 2*PatientCellHeight + 5 < obj.locations[indexLocation][5]){
        obj.locations[indexLocation][7] = obj.locations[indexLocation][7] + PatientCellHeight +5 
      } else { 
        if (obj.locations[indexLocation][6] + PatientCellWidth +5 < obj.locations[indexLocation][4]){
          obj.locations[indexLocation][7] = obj.locations[indexLocation][3]
          obj.locations[indexLocation][6] = obj.locations[indexLocation][6] + PatientCellWidth + 5 
        } else {
          obj.locations[indexLocation][7] = 10000 
        } 
      }
    }
    if (parseInt(el.style.top.replace(/px/,""),10)>9000) el.style.display="none";
    if (isNaN(parseInt(el.style.top.replace(/px/,""),10))) el.style.display="none";
  }       
 for(var i = 0; i < obj.expected.length; i++) {
    indexLocation=StandByIndex;
   el=document.getElementById('PatientExp-' + i );
   if (obj.expected[i][0]!="") {
 el.style.top=obj.locations[indexLocation][7]+1;
          el.style.left=obj.locations[indexLocation][6];
          if (obj.locations[indexLocation][7] + 2*PatientCellHeight + 5 < obj.locations[indexLocation][5]){
            obj.locations[indexLocation][7] = obj.locations[indexLocation][7] + PatientCellHeight +5 }
          else {
            if (obj.locations[indexLocation][6] + PatientCellWidth +5 < obj.locations[indexLocation][4]){
              obj.locations[indexLocation][7] = obj.locations[indexLocation][3]
              obj.locations[indexLocation][6] = obj.locations[indexLocation][6] + PatientCellWidth + 5 }
            else {
              obj.locations[indexLocation][7] = 10000 } }
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
//    document.onmousedown = grabEl;
//    document.onmousemove = moveEl;
//    document.onmouseup   = dropEl;
//    document.onkeydown   = OnKeyDown;
//    activeEl             = document.getElementById('ImageLocation');
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
   } else {
     posX=posX+pos.offsetParent.offsetLeft;
     posY=posY+pos.offsetParent.offsetTop;
     pos=pos.offsetParent;
   }
  }
  saveExpandTop=posY;
  saveExpandLeft=posX;
  expandLeft=parseInt(el.style.left.replace(/px/,""),10);
  expandTop=parseInt(el.style.top.replace(/px/,""),10);
  if ((expandTop+PatientCellHeightExpanded)>maxScreenHeight) {
     el.style.top=(maxScreenHeight-PatientCellHeightExpanded+12)+"px";
  }
  if ((expandLeft+PatientCellWidthExpanded)>maxScreenWidth) {
    el.style.left=(maxScreenWidth-PatientCellWidthExpanded+12)+"px";
  }
  if (PatientCellHeight>PatientCellHeightExpanded) {
    el.style.height=PatientCellHeight+'px';
    h=PatientCellHeight+20;
  } else {
    el.style.height=PatientCellHeightExpanded+'px';
    h=PatientCellHeightExpanded+20;
  }
  if (PatientCellWidth>PatientCellWidthExpanded) {
    el.style.width=PatientCellWidth+'px';
    w=PatientCellWidth+20;
  } else {
    el.style.width=PatientCellWidthExpanded+'px';
    w=PatientCellWidthExpanded+20;
  }
  el.style.zIndex=10;
  el.style.borderColor=expandColor;
  el.style.borderWidth=expandBorder+'px';
  el.style.clip='rect(0px '+w+'px '+h+'px 0px)';
}
function collapsePatient() {        
  var el=savePatientLocation;
  savePatientLocation = null;
  if (el == null) return;
  el.style.zIndex=1;
  el.style.top = saveExpandTop
  el.style.left = saveExpandLeft
  el.style.height=(PatientCellHeight-2)+'px';
  el.style.width=(PatientCellWidth-2)+'px';
  el.style.borderWidth='2px';
  el.style.borderColor='#ccc';
  h=PatientCellHeight+2;
  w=PatientCellWidth+2;
  el.style.clip='rect(0px '+w+'px '+h+'px 0px)';
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
    if (whichEl==savePatientLocation) {
      whichEl.style.pixelTop = originalTop;
      whichEl.style.pixelLeft = originalLeft; 
    } 
  }
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

  DFrameLink(linkurl,50,250,500,300);
  CancelMapRefresh();
}
function PatientCellClinical(i) {
  patientClassColor=getPatientClassColor(i);
  bedClassColor=getBedClassColor(obj.patients[i][1]);
  OS= '<div id=Patient-' + i + ' class="PatientStyle" '+
      ' onmouseover="expandPatient(this);" '+
      ' onmouseout="collapsePatient();" '+
      '>'  +
      '<div class="row1" style="background-color:'  + patientClassColor + '"' +
      ' onclick=\'PatientOpen("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'>'+
      '<span class="'+bedClassColor+'cellLocation'+WardOnly+'">'  + obj.patients[i][1] + '</span>' +
      '<span class="Privacy cellPatientName'+WardOnly+'">'  +  getPatientName(i) + '</span>' +
      '<span class="Privacy cellAge">' + obj.patients[i][6] + '</span>' +
      '<span class="Privacy cellSex Sex'+obj.patients[i][5]+'"></span></div>';

      //Display Preferred Name and DOB
      if (WWPrefNameDOB == "Yes") {
        OS += PatientTable0101WWPrefNamDOB(i);
      }

      //Display Gender Pronoun
      if (WWIDGenderPronoun == "Yes") {
        OS += PatientTable0101WWIDGender(i);
      }

      OS += '<div class=row2>'  
  if (obj.patients[i][25]=='1') {
    OS+='<span class=StandByIcon' + obj.patients[i][25] + '></span>' 
  }
  else {
    OS+='<span class="FolderIcon FolderIcon' + obj.patients[i][22] + '"'+
        ' onclick=\'PatientOpen("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'
  }
  OS+='<span class=AlertIcon'+ obj.patients[i][27].substr(0,1) +
      ' onclick=\'PatientAlerts("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
      '<span class=BoarderIcon'+ obj.patients[i][80]+
      ' onclick=\'PatientBoarders("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
      '<span class=ResultIcon'+ obj.patients[i][27].substr(1,1) +
      ' onclick=\'PatientResults("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
      '<span class=NoteIcon'+ obj.patients[i][27].substr(2,1) +
      ' onclick=\'PatientNotes("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
      '<span class=DocumentIcon'+ obj.patients[i][27].substr(3,1) +
      ' onclick=\'PatientDocuments("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
      '<span>'+obj.patients[i][21]+obj.patients[i][2] +'</span></div>'+
      '<div class=row3 onclick=\'UpdateCondition("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'>' +
      '<span class=cell><span class=ConditionIcon'+obj.patients[i][18] +'></span>'+
      obj.patients[i][17] + ShortDateTime(obj.patients[i][19]) +
      obj.patients[i][94] +'</span></div>' +
      '<div class=row4 onclick=\'UpdateDiet("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'>' +
      '<span class=cell><span class='+DietIconClass+'></span>'+
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
       FormatShortDate(obj.patients[i][9]) +'</span>' +
      '<span class=cell50r><span class=labelSx>Edd:</span> '+
      '<span class="EDD '+obj.patients[i][23]+'"> '+ FormatShortDate(obj.patients[i][15]) +
      '</span></span></div>';
  OS+='<div class=row7 onclick=\'DoctorView("'+obj.patients[i][28]+
      '");\'><span class=cell><span class=labelFx>Doctor:</span>'+
      trim(obj.patients[i][8])+'</span>'; 

  if (document.getElementById("shwphoto").value == "1") {
    OS += displayImage(i);
  }

  OS += '</div>';

  if (!isWhitespace(obj.patients[i][29])) {
    OS+='<div class=row7  onclick=\'DoctorView("'+obj.patients[i][29]+
        '");\'><span class=cell><span class=labelFx>Doctor:</span>'+
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
    OS+='<div class=row7><span class=cell><span class=labelFx>Leave:</span>'+obj.patients[i][31]+'</span></div>'
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
    return_string+='<div class=row7 # onclick=\'DoctorView("'+obj.patients[i][47]+'");\'>'+
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
 var opl=positionLeft+PatientCellWidth+LocationCellSpacing;
 if (obj.beds.length>0) {
   if (positionTop>startPositionTop) {
     positionLeft+=PatientCellWidth+LocationCellSpacing;
   }
   if (positionLeft+20+PatientCellWidth<maxScreenWidth) {
      positionLeft=maxScreenWidth-20-PatientCellWidth;
   }
   var maxHigh=Math.floor(positionTop/PatientCellHeight);
   var setWide=Math.floor(1+(noBedCount/maxHigh));
   var setHigh=maxHigh;
   if (noBedCount<maxHigh) {
     setHigh=noBedCount;
   }
   if (setHigh==0) setHigh=1;
   positionHeight=(maxScreenHeight-(startPositionTop));
   obj.AddLocation("<div class=LocationHeading>On Leave, Standby and Expected</div>","NA",
                        positionLeft,
                        startPositionTop,
                        positionLeft+PatientCellWidth,
                        startPositionTop+20);
   NoBedIndex=obj.locations.length;
   obj.AddLocation("No Bed Allocated ","TBA1",
                        opl,
                        startPositionTop,
                        opl+(PatientCellWidth)*setWide,
                        startPositionTop+((PatientCellHeight)*setHigh),0,0,"OTHER1");
   StandByIndex=obj.locations.length;
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
   NoBedIndex=obj.locations.length;
   StandByIndex=obj.locations.length;
   obj.AddLocation("                 ","TBA",
                        startPositionLeft,
                        startPositionTop,
                        positionWidth,
                        positionHeight,0,0,"OTHER"); 
 }
}
function addWaitingAreaHorizontal() {
 var opt=positionTop+PatientCellHeight+LocationCellSpacing;
 if (obj.beds.length>0) {
   if (positionLeft>startPositionLeft) {
     positionTop+=PatientCellHeight+LocationCellSpacing;
   }
   if (positionTop+30+PatientCellHeight<maxScreenHeight) {
      positionTop=maxScreenHeight-30-PatientCellHeight;
   }
   positionWidth=(maxScreenWidth-(startPositionLeft*2)-10);
   var maxWide=Math.floor(positionWidth/PatientCellWidth);
   var setHigh=Math.floor(1+(noBedCount/maxWide));
   var setWide=maxWide;
   if (noBedCount<maxWide) {
     setWide=noBedCount;
   }
   if (setWide==0) setWide=1;
   obj.AddLocation("<div class=LocationHeading>On Leave, Standby and Expected Patients</div>","NA",
                        startPositionLeft,
                        positionTop,
                        positionWidth,
                        positionTop+20);
   NoBedIndex=obj.locations.length;
   obj.AddLocation("No Bed Allocated ","TBA1",
                        startPositionLeft,
                        opt,
                        (PatientCellWidth+LocationCellSpacing)*setWide,
                        opt+((PatientCellHeight)*setHigh),0,0,"OTHER1");
   StandByIndex=obj.locations.length;
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
   NoBedIndex=obj.locations.length;
   StandByIndex=obj.locations.length;
   obj.AddLocation("                 ","TBA",
                        startPositionLeft,
                        startPositionTop,
                        positionWidth,
                        positionHeight,0,0,"OTHER"); 
 }
}
//------------------------------------------------------------
//  Ward Map Location - Standard Layouts
//  layoutType=0 - Vertial Bed Allocation
//  layoutType=1 - Horizontal Bed Allocation
//------------------------------------------------------------
function hsvToRgb(h, s, v) {  
 var r, g, b;   
 var i = Math.floor(h * 6);  
 var f = h * 6 - i;  
 var p = v * (1 - s);  
 var q = v * (1 - f * s);  
 var t = v * (1 - (1 - f) * s);   
 switch (i % 6) {    
  case 0: r = v, g = t, b = p; break;    
  case 1: r = q, g = v, b = p; break;    
  case 2: r = p, g = v, b = t; break;    
  case 3: r = p, g = q, b = v; break;    
  case 4: r = t, g = p, b = v; break;    
  case 5: r = v, g = p, b = q; break;  
 }   
 return [ Math.round(r * 255), Math.round(g * 255), Math.round(b * 255) ];
}
var chart_sat=.25;
var chart_val=1;
var preset_sat=.5;
var preset_val=1;
function setUpColors() {
  var maxColors = 24;
  var i = 360 / (maxColors - 1); // distribute the colors evenly on the hue range
  for (var x=0; x<maxColors; x++) {
     var chart_hue = (i*x)/100;
     var preset_hue = (i*(maxColors-x))/100;
     chartColor[x]='rgb(' + hsvToRgb(chart_hue,chart_sat,chart_val) + ')';
     presetColor[x]='rgb(' + hsvToRgb(preset_hue,preset_sat,preset_val) + ')';
  }
  document.getElementById("presetCode00").style.backgroundColor=presetColor[0];
  document.getElementById("presetCode01").style.backgroundColor=presetColor[1];
  document.getElementById("presetCode02").style.backgroundColor=presetColor[2];
  document.getElementById("presetCode03").style.backgroundColor=presetColor[3];
  document.getElementById("presetCode04").style.backgroundColor=presetColor[4];
  document.getElementById("presetCode05").style.backgroundColor=presetColor[5];
  document.getElementById("presetCode06").style.backgroundColor=presetColor[6];
  document.getElementById("presetCode07").style.backgroundColor=presetColor[7];
}
function SetLocations() {
  setUpColors();
  switch (layoutType) {
  case 1:
    addStandardBedLocations("Horizontal");
    addWaitingAreaHorizontal();
    break;
  case 2:
    addStandardBedLocations("List");
    addWaitingAreaList();
    break;
  default:
    addStandardBedLocations("Vertical");
    addWaitingAreaVertical();
    break;
  }
}
function CalculateStatistics() {
  standByCount=0;
  onLeaveCount=0;
  noBedCount=0;
  for (var i=0;i<obj.patients.length;i++) {
   if (obj.patients[i][25]=='1') {
      standByCount++
      continue;
    }
//    if (!isWhitespace(obj.patients[i][31])) {
   if (obj.patients[i][33]=='3') {
      onLeaveCount++
      continue;
    } 
    if (isWhitespace(obj.patients[i][1])) {
      noBedCount++
      continue;
    }
    patientBedCount++
  }
  var el;
  el=document.getElementById("totalPatients");
  el.innerText='Patients : '+(patientBedCount+noBedCount);
  el=document.getElementById("onLeave");
  el.innerText='On Leave : '+onLeaveCount;
  el=document.getElementById("onStandby");
  el.innerText='Stand By : '+standByCount;
}
function addWaitingAreaList() {
 var waitWidth=250;
 var opl=positionLeft;
 if (obj.beds.length>0) {
   if (positionTop>startPositionTop) {
     positionLeft+=waitWidth+LocationCellSpacing;
   }
   if (positionLeft+20+waitWidth<maxScreenWidth) {
      positionLeft=maxScreenWidth-20-waitWidth;
   }
   positionHeight=(maxScreenHeight-(startPositionTop*2)-12);
   var maxHigh=Math.floor(positionTop/PatientCellHeight);
   var setWide=Math.floor(1+(noBedCount/maxHigh));
   var setHigh=maxHigh;
   if (noBedCount<maxHigh) {
     setHigh=noBedCount;
   }
  if (setHigh==0) setHigh=1;
   obj.AddLocation("<div class=LocationHeading>On Leave, Standby and Expected</div>","NA",
                        positionLeft,
                        startPositionTop,
                        positionLeft+waitWidth,startPositionTop+20,0,0,"Heading");
   NoBedIndex=obj.locations.length;
   obj.AddLocation("No Bed Allocated ","TBA1",
                        opl,
                        positionTop,
                        startPositionLeft+PatientCellWidth,
                        positionTop+(PatientCellHeight*setHigh),0,0,"OTHER1"); 
   StandByIndex=obj.locations.length;
   obj.AddLocation(".                 ","TBA",
                        positionLeft,
                        startPositionTop+20,
                        positionLeft+waitWidth,
                        maxScreenHeight-startPositionTop,0,0,"OTHER"); 
  } else {
   if (positionTop>startPositionTop) {
     positionLeft+=waitWidth+LocationCellSpacing;
   }
   if (positionLeft+20+waitWidth<maxScreenWidth) {
      positionLeft=maxScreenWidth-20-PatientCellWidth;
   }
   positionWidth=(maxScreenWidth-(startPositionLeft*2)-12);
   positionHeight=(maxScreenHeight-(startPositionTop));
   NoBedIndex=obj.locations.length;
   StandByIndex=obj.locations.length;
   obj.AddLocation("                 ","TBA",
                        startPositionLeft,
                        startPositionTop,
                        positionWidth,
                        positionHeight,0,0,"OTHER"); 
 }
}
function getPaediatricInd(i) {
  var rtnFlag=0;
  if (obj.patients[i][6].match(/days/)||
      obj.patients[i][6].match(/wks/)||
      obj.patients[i][6].match(/mths/)) {
    rtnFlag=1;
  } else {
    age=parseInt(obj.patients[i][6].replace(/[^0-9]/g, ''),10); 
    if (age<PaedAgeMax) rtnFlag=1;
  }
  return rtnFlag;
}
function togglePatient(PatientId) {
  if (DragDropFlag) return;
  if (togglePatientId==PatientId) {
     collapsePatient(); 
     togglePatientId=""
     return;
  }
  if (!isWhitespace(togglePatientId)) collapsePatient(); 
  PatientContainer=document.getElementById(PatientId);
  expandPatient(PatientContainer);
  togglePatientId=PatientId;
}
//------------------------------------------------------------------------
//  Wide Screen 4 column Layout
//------------------------------------------------------------------------
function PatientTable04(i) {
  DietIconClass=getDietIconClass(i);
  PaedFlag=getPaediatricInd(i);
  patientClassColor=getPatientClassColor(i);
  bedClassColor=getBedClassColor(obj.patients[i][1]);
  var udfCnt=codedFld1+codedFld2+codedFld3+codedFld4+
             codedFld5+codedFld6+codedFld7+codedFld8
  OS= '<div id=Patient-' + i + ' class="PatientStyle" '+
      ' onclick="togglePatient(\'Patient-'+ i +'\');" >'  +
      '<table class="patientTable">' +
      '<tr class=patientRow><td>'+ PatientTable0401(i) + '</td></tr>' 

  if (WWPrefNameDOB == "Yes") {
    OS+='<tr class=patientRow><td>'+ PatientTable0201a(i) + '</td></tr>' 
  }

  if (WWIDGenderPronoun == "Yes") {
    OS+='<tr class=patientRow><td>'+ PatientTable0201b(i) + '</td></tr>' 
  }

  OS+='<tr class=patientRow><td>'+ PatientTable0402(i) + '</td></tr>' +
      '<tr class=patientRow><td>'+ PatientTable0403(i) + '</td></tr>' 
  if (udfCnt>0) {
    OS+='<tr class=patientRow><td>'+ PatientTable0404(i) + '</td></tr>' 
  }
  if (!isWhitespace(obj.patients[i][46])) {
    OS+='<tr class=patientRow><td>'+ PatientTable0405(i) + '</td></tr>' 
  }
  OS+='<tr class=patientRow><td>'+ PatientTable0406(i) + '</td></tr>' 
  OS+='</table></div>'
  return OS;
}
function PatientTable0401(i) {
  var returnVal='<table class=patientRowTable '+
       'style="background-color:'  + patientClassColor + ';" </tr>'+
      '<td class="cell05c '+bedClassColor+'">' + 
       obj.patients[i][1] + '</td>'+
      '<td class="cell50l" ' +
      ' onclick=\'PatientOpen("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'>';
  if (obj.patients[i][25]=='1') {
    returnVal+='<span class=StandByIcon' + obj.patients[i][25] + '></span>' 
  }
  else {
    returnVal+='<span class="FolderIcon FolderIcon' + obj.patients[i][22] + '"'+
        ' onclick=\'PatientOpen("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'
  }
  returnVal+=  '<span class="Privacy">' +getPatientName(i) + 
        ' ('+obj.patients[i][2] +', ' + obj.patients[i][5] + ', ' + obj.patients[i][6] +') '+
        '</span><span class=AlertIcon'+ obj.patients[i][27].substr(0,1) +
        ' onclick=\'PatientAlerts("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
      '<span class=BoarderIcon'+ obj.patients[i][80]+
      ' onclick=\'PatientBoarders("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
        '<span class=ResultIcon'+ obj.patients[i][27].substr(1,1) +
        ' onclick=\'PatientResults("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
        '<span class=NoteIcon'+ obj.patients[i][27].substr(2,1) +
        ' onclick=\'PatientNotes("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
        '<span class=DocumentIcon'+ obj.patients[i][27].substr(3,1) +
        ' onclick=\'PatientDocuments("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
        '<span class=PaediatricIcon'+ PaedFlag + ' ></span></td>'
   var todayCCYYMMDD=document.getElementById("currdate").value;
   if (todayCCYYMMDD==FormatDate(obj.patients[i][45])) {
     returnVal+='<td class="cell30c TheatreToday">Surgery in '+obj.patients[i][49]+' at '+ 
                FormatTime(obj.patients[i][45])+' '+ obj.patients[i][57]+'</td>'+
               '</table>';
     return returnVal;
   }
   if (!isWhitespace(obj.patients[i][31])) {
     returnVal+='<td class=cell30c>Leave:'+ obj.patients[i][31]+'</td></tr>'+
               '</table>';
     return returnVal;
   } 
   returnVal+='<td class="cell15c">'+ FormatShortDate(obj.patients[i][9]) +
              ' ('+ CalculateDays(FormatDate(obj.patients[i][9])) +')</td>' + 
              '<td class="cell15c cellEdd '+obj.patients[i][23]+'">'+ 
             FormatShortDate(obj.patients[i][15])+obj.patients[i][57]+'</td></tr>' +
             '</table>';
   return returnVal;
}
function CalculateDays(aDate) {
   var tDate=document.getElementById("currdate").value;
   return days_between(aDate,tDate);
}
function PatientTable0402(i) {
  var returnVal='<table class=patientRowTable><tr>'+
      '<td class=cell20l onclick=\'UpdateCondition("'+
      obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'>' +
      '<span class=ConditionIcon'+obj.patients[i][18] +'></span>'+
      obj.patients[i][17] +obj.patients[i][21]+ ShortDateTime(obj.patients[i][19]) +
      obj.patients[i][94] +'</td>'  +
      '<td class="cell20l" onclick=\'UpdateDiet("'+
      obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'>' +
      '<span class='+DietIconClass+'></span>'+ obj.patients[i][13] + '</td>'+
      '<td class="cell30l">Attending : <span onclick=\'DoctorView("'+
      obj.patients[i][28]+ '");\'>' +
       trim(obj.patients[i][8])+'</span>'
  if (!isWhitespace(obj.patients[i][29])) {
    returnVal+='  / <span onclick=\'DoctorView("'+obj.patients[i][29]+
        '");\'>'+ trim(obj.patients[i][30])+'</span>'
  }
  returnVal+='</td><td class="cell30l">Comment:'+ obj.patients[i][20]+'</td>'+
            '</tr></table>';
  return returnVal;
}
function PatientTable0403(i) {
  var returnVal='<table class=patientRowTable><tr style="vertical-align:top;">';
  returnVal+='<td  class="cell25l">';
  if (freeTxtFld1==1) { returnVal+='<p title="'+freeTxtLab1+'">'+obj.patients[i][67]+'</p>'; }
  if (freeTxtFld4==1) { returnVal+='<p title="'+freeTxtLab4+'">'+obj.patients[i][70]+'</p>'; }
  if (freeTxtFld7==1) { returnVal+='<p title="'+freeTxtLab7+'">'+obj.patients[i][73]+'</p>'; }
  returnVal+='</td>';
  returnVal+='<td class="cell25l">';
  if (freeTxtFld2==1) { returnVal+='<p title="'+freeTxtLab2+'">'+obj.patients[i][68]+'</p>'; }
  if (freeTxtFld5==1) { returnVal+='<p title="'+freeTxtLab5+'">'+obj.patients[i][71]+'</p>'; }
  if (freeTxtFld8==1) { returnVal+='<p title="'+freeTxtLab8+'">'+obj.patients[i][74]+'</p>'; }
  returnVal+='</td>';
  returnVal+='<td class="cell25l">';
  if (freeTxtFld3==1) { returnVal+='<p title="'+freeTxtLab3+'">'+obj.patients[i][69]+'</p>'; }
  if (freeTxtFld6==1) { returnVal+='<p title="'+freeTxtLab6+'">'+obj.patients[i][72]+'</p>'; }
  returnVal+='</td>';
  returnVal+='<td class="cell25r">';
  var btnLab=[btnLab0,btnLab1,btnLab2,btnLab3,btnLab4,
              btnLab5,btnLab6,btnLab7,btnLab8,btnLab9];
  var indFld=obj.patients[i][76];
  for (var x=0;x<10;x++) {
    if (indFld.substr(x,1)==1) {
      returnVal+='<span title="'+btnLab[x]+'" class="buttonInd'+x+'"></span>';
    }
  }
  returnVal+='</td></tr></table>';


  return returnVal;
}
function PatientTable0404(i) {
  var fldCnt=0;
  var returnVal='<table class=patientRowTable><tr style="vertical-align:top;">';
  returnVal+='<td class="cell25l">';
  if (codedFld1==1) {returnVal+='<p title="'+codedTitle1+'">'+ obj.patients[i][59]+'</p>';}
  if (codedFld5==1) {returnVal+='<p title="'+codedTitle5+'">'+ obj.patients[i][63]+'</p>';}
  returnVal+='</td>';
  returnVal+='<td class="cell25l">';
  if (codedFld2==1) {returnVal+='<p title="'+codedTitle2+'">'+ obj.patients[i][60]+'</p>';}
  if (codedFld6==1) {returnVal+='<p title="'+codedTitle6+'">'+ obj.patients[i][64]+'</p>';}
  returnVal+='</td>';
  returnVal+='<td class="cell25l">';
  if (codedFld3==1) {returnVal+='<p title="'+codedTitle3+'">'+ obj.patients[i][61]+'</p>';}
  if (codedFld7==1) {returnVal+='<p title="'+codedTitle7+'">'+ obj.patients[i][65]+'</p>';}
  returnVal+='</td>';
  returnVal+='<td class="cell25l">';
  if (codedFld4==1) {returnVal+='<p title="'+codedTitle4+'">'+ obj.patients[i][62]+'</p>';}
  if (codedFld8==1) {returnVal+='<p title="'+codedTitle8+'">'+ obj.patients[i][66]+'</p>';}
  returnVal+='</td>';
  returnVal+='</tr></table>';
  return returnVal;
}
function PatientTable0405(i) {
  var returnVal='<table class=patientRowTable><tr style="vertical-align:top;">'+
      '<td class=cell25l><p>Surgery</p><p>'+ FormatDateTime(obj.patients[i][45])+
      ' ('+ obj.patients[i][46]+'min)</p><p>'+ 
             obj.patients[i][49]+'</td>'+
      '<td class=cell25l><p onclick=\'DoctorView("'+obj.patients[i][47]+'");\'>'+
      'Anaes:'+ trim(obj.patients[i][48])+'</p><p>'+ obj.patients[i][50]+'</p></td>'+
      '<td class=cell50l>'+ obj.patients[i][53]
  if (!isWhitespace(obj.patients[i][54])) {
    returnVal+='<p>'+ trim(obj.patients[i][54])+'</p>';
  }
  if (!isWhitespace(obj.patients[i][55])) {
    returnVal+='<p>'+ trim(obj.patients[i][55])+'</p>';
  }
  returnVal+='</td></tr></table>';  
  return returnVal;
} 
function PatientTable0406(i) {
  var returnVal='<table class=patientRowTable><tr style="vertical-align:top;">';
  returnVal+='<td class=cell25l>Diagnosis</td>';
  returnVal+='<td class=cell75l colspan=3>'
  if (!isWhitespace(obj.patients[i][34])) {
    returnVal+='<p>'+ obj.patients[i][34]+'</p>';
  }
  if (!isWhitespace(obj.patients[i][35])) {
    returnVal+='<p>'+ obj.patients[i][35]+'</p>';
  }
  if (!isWhitespace(obj.patients[i][36])) {
    returnVal+='<p>'+ obj.patients[i][36]+'</p>';
  }
  returnVal+='</td>';
  returnVal+='</tr></table>';
  return returnVal;
}

//------------------------------------------------------------------------
//  Wide Screen 3 column Layout
//------------------------------------------------------------------------
function PatientTable03(i) {
  DietIconClass=getDietIconClass(i);
  PaedFlag=getPaediatricInd(i);
  patientClassColor=getPatientClassColor(i);
  bedClassColor=getBedClassColor(obj.patients[i][1]);
  var udfCnt=codedFld1+codedFld2+codedFld3+codedFld4+
             codedFld5+codedFld6+codedFld7+codedFld8
  OS= '<div id=Patient-' + i + ' class="PatientStyle" '+
      ' onclick="togglePatient(\'Patient-'+ i +'\');" >'  +
      '<table class="patientTable">' +
      '<tr class=patientRow><td>'+ PatientTable0301(i) + '</td></tr>' 

  if (WWPrefNameDOB == "Yes") {
    OS+='<tr class=patientRow><td>'+ PatientTable0201a(i) + '</td></tr>' 
  }

  if (WWIDGenderPronoun == "Yes") {
    OS+='<tr class=patientRow><td>'+ PatientTable0201b(i) + '</td></tr>' 
  }

  OS+='<tr class=patientRow><td>'+ PatientTable0302(i) + '</td></tr>' +
      '<tr class=patientRow><td>'+ PatientTable0303(i) + '</td></tr>' +
      '<tr class=patientRow><td>'+ PatientTable0304(i) + '</td></tr>' 
  if (udfCnt>0) {
    OS+='<tr class=patientRow><td>'+ PatientTable0305(i) + '</td></tr>' 
  }
  if (!isWhitespace(obj.patients[i][46])) {
    OS+='<tr class=patientRow><td>'+ PatientTable0306(i) + '</td></tr>' 
  }
  OS+='<tr class=patientRow><td>'+ PatientTable0307(i) + '</td></tr>' 
  OS+='</table></div>'
  return OS;
}
function PatientTable0301(i) {
  var returnVal='<table class=patientRowTable '+
       'style="background-color:'  + patientClassColor + ';"><tr>'+
      '<td class="cell10c '+bedClassColor+' cellLocation'+WardOnly+'">' + 
       obj.patients[i][1] + '</td>'+
      '<td class="cell60l" ' +
      ' onclick=\'PatientOpen("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'>'
  if (obj.patients[i][25]=='1') {
    returnVal+='<span class=StandByIcon' + obj.patients[i][25] + '></span>' 
  }
  else {
    returnVal+='<span class="FolderIcon FolderIcon' + obj.patients[i][22] + '"'+
        ' onclick=\'PatientOpen("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'
  }
  returnVal+=  '<span class="Privacy">' +getPatientName(i) + 
        ' ('+obj.patients[i][2] +', ' + obj.patients[i][5] + ', ' + obj.patients[i][6] +') '+
        '</span><span class=AlertIcon'+ obj.patients[i][27].substr(0,1) +
        ' onclick=\'PatientAlerts("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
        '<span class=BoarderIcon'+ obj.patients[i][80]+
        ' onclick=\'PatientBoarders("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
        '<span class=ResultIcon'+ obj.patients[i][27].substr(1,1) +
        ' onclick=\'PatientResults("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
        '<span class=NoteIcon'+ obj.patients[i][27].substr(2,1) +
        ' onclick=\'PatientNotes("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
        '<span class=DocumentIcon'+ obj.patients[i][27].substr(3,1) +
        ' onclick=\'PatientDocuments("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
        '<span class=PaediatricIcon'+ PaedFlag + ' ></span></td>'

   var todayCCYYMMDD=document.getElementById("currdate").value;
   if (todayCCYYMMDD==FormatDate(obj.patients[i][45])) {
     returnVal+='<td class="cell30c TheatreToday">Surgery '+obj.patients[i][49]+' at '+ 
                FormatTime(obj.patients[i][45])+' '+ obj.patients[i][57]+'</td>'+
               '</table>';
     return returnVal;
   }
   if (!isWhitespace(obj.patients[i][31])) {
     returnVal+='<td class=cell30c>Leave:'+ obj.patients[i][31]+'</td></tr>'+
               '</table>';
     return returnVal;
   } 
   returnVal+='<td class="cell30c">'+ FormatShortDate(obj.patients[i][9]) +
              ' ('+ CalculateDays(FormatDate(obj.patients[i][9])) +')</td>';
   returnVal+='</tr></table>';
   return returnVal;
}
function PatientTable0302(i) {
  var returnVal='<table class=patientRowTable><tr>'+
      '<td class=cell35l onclick=\'UpdateCondition("'+
      obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'>' +
      '<span class=ConditionIcon'+obj.patients[i][18] +'></span>'+
      obj.patients[i][17] +obj.patients[i][21]+ ShortDateTime(obj.patients[i][19]) +
      obj.patients[i][94] +'</td>'  +
      '<td class="cell35l" onclick=\'UpdateDiet("'+
      obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'>' +
      '<span class='+DietIconClass+'></span>'+ obj.patients[i][13] + '</td>'+
      '<td class="cell30c cellEdd '+obj.patients[i][23]+'">'+ 
      FormatShortDate(obj.patients[i][15])+obj.patients[i][57]+'</td>';
  returnVal+='</tr></table>';
  return returnVal;
}
function PatientTable0303(i) {
  var returnVal='<table class=patientRowTable><tr style="vertical-align:top;">';
  returnVal+='<td class="cell35l"><span onclick=\'DoctorView("'+
              obj.patients[i][28]+ '");\'>' + trim(obj.patients[i][8])+'</span>';
  if (!isWhitespace(obj.patients[i][29])) {
    returnVal+='  / <span onclick=\'DoctorView("'+obj.patients[i][29]+
        '");\'>'+ trim(obj.patients[i][30])+'</span>';
  }
  returnVal+='</td>';
  returnVal+='<td class="cell35l">Comment:'+ obj.patients[i][20]+'</td>';
  returnVal+='<td class="cell30r">';
  var btnLab=[btnLab0,btnLab1,btnLab2,btnLab3,btnLab4,
              btnLab5,btnLab6,btnLab7,btnLab8,btnLab9];
  var indFld=obj.patients[i][76];
  for (var x=0;x<10;x++) {
    if (indFld.substr(x,1)==1) {
      returnVal+='<span title="'+btnLab[x]+'" class="buttonInd'+x+'"></span>';
    }
  }
  returnVal+='</td></tr></table>';
  return returnVal;
}
function PatientTable0304(i) {
  var returnVal='<table class=patientRowTable><tr style="vertical-align:top;">';
  returnVal+='<td  class="cell35l">';
  if (freeTxtFld1==1) { returnVal+='<p title="'+freeTxtLab1+'">'+obj.patients[i][67]+'</p>'; }
  if (freeTxtFld4==1) { returnVal+='<p title="'+freeTxtLab4+'">'+obj.patients[i][70]+'</p>'; }
  if (freeTxtFld7==1) { returnVal+='<p title="'+freeTxtLab7+'">'+obj.patients[i][73]+'</p>'; }
  returnVal+='</td>';
  returnVal+='<td class="cell35l">';
  if (freeTxtFld2==1) { returnVal+='<p title="'+freeTxtLab2+'">'+obj.patients[i][68]+'</p>'; }
  if (freeTxtFld5==1) { returnVal+='<p title="'+freeTxtLab5+'">'+obj.patients[i][71]+'</p>'; }
  if (freeTxtFld8==1) { returnVal+='<p title="'+freeTxtLab8+'">'+obj.patients[i][74]+'</p>'; }
  returnVal+='</td>';
  returnVal+='<td class="cell30l">';
  if (freeTxtFld3==1) { returnVal+='<p title="'+freeTxtLab3+'">'+obj.patients[i][69]+'</p>'; }
  if (freeTxtFld6==1) { returnVal+='<p title="'+freeTxtLab6+'">'+obj.patients[i][72]+'</p>'; }
  returnVal+='</td>';
  returnVal+='</tr></table>';
  return returnVal;
}
function PatientTable0305(i) {
  var fldCnt=0;
  var returnVal='<table class=patientRowTable><tr style="vertical-align:top;">';
  returnVal+='<td class="cell35l">';
  if (codedFld1==1) {returnVal+='<p title="'+codedTitle1+'">'+ obj.patients[i][59]+'</p>';}
  if (codedFld4==1) {returnVal+='<p title="'+codedTitle4+'">'+ obj.patients[i][62]+'</p>';}
  if (codedFld7==1) {returnVal+='<p title="'+codedTitle7+'">'+ obj.patients[i][65]+'</p>';}
  returnVal+='</td>';
  returnVal+='<td class="cell35l">';
  if (codedFld2==1) {returnVal+='<p title="'+codedTitle2+'">'+ obj.patients[i][60]+'</p>';}
  if (codedFld5==1) {returnVal+='<p title="'+codedTitle5+'">'+ obj.patients[i][63]+'</p>';}
  if (codedFld8==1) {returnVal+='<p title="'+codedTitle8+'">'+ obj.patients[i][66]+'</p>';}
  returnVal+='</td>';
  returnVal+='<td class="cell30l">';
  if (codedFld3==1) {returnVal+='<p title="'+codedTitle3+'">'+ obj.patients[i][61]+'</p>';}
  if (codedFld6==1) {returnVal+='<p title="'+codedTitle6+'">'+ obj.patients[i][64]+'</p>';}
  returnVal+='</td>';
  returnVal+='</tr></table>';
  return returnVal;
}
function PatientTable0306(i) {
  var returnVal='<table class=patientRowTable><tr style="vertical-align:top;">';
  returnVal+='<td class=cell35l>'+ obj.patients[i][53];
  if (!isWhitespace(obj.patients[i][54])) {
    returnVal+='<br>'+ trim(obj.patients[i][54]);
  }
  if (!isWhitespace(obj.patients[i][55])) {
    returnVal+='<br>'+ trim(obj.patients[i][55]);
  }
  returnVal+='</td>';
  returnVal+='<td class=cell35l><p onclick=\'DoctorView("'+obj.patients[i][47]+'");\'>'+
      'Anaes:'+ trim(obj.patients[i][48])+'</p><p>'+ obj.patients[i][50]+'</p></td>';
  returnVal+='<td class=cell30l>Theatre:'+ 
      FormatShortDateTime(obj.patients[i][45])+' ('+ obj.patients[i][46]+'min)<br>'+ 
             obj.patients[i][49]+'</td>';
  returnVal+='</tr></table>';  
  return returnVal;
} 
function PatientTable0307(i) {
  var returnVal='<table class=patientRowTable><tr style="vertical-align:top;">';
  returnVal+='<td class=cell35l>Diagnosis</td>';
  returnVal+='<td class=cell65l colspan=2>';
  if (!isWhitespace(obj.patients[i][34])) {
    returnVal+='<p>'+ obj.patients[i][34]+'</p>';
  }
  if (!isWhitespace(obj.patients[i][35])) {
    returnVal+='<p>'+ obj.patients[i][35]+'</p>';
  }
  if (!isWhitespace(obj.patients[i][36])) {
    returnVal+='<p>'+ obj.patients[i][36]+'</p>';
  }
  returnVal+='</td>';
  returnVal+='</tr></table>';
  return returnVal;
}

//------------------------------------------------------------------------
//  Wide Screen 2 column Layout
//------------------------------------------------------------------------
function PatientTable02(i) {
  DietIconClass=getDietIconClass(i);
  PaedFlag=getPaediatricInd(i);
  patientClassColor=getPatientClassColor(i);
  bedClassColor=getBedClassColor(obj.patients[i][1]);
  var udfCnt=codedFld1+codedFld2+codedFld3+codedFld4+
             codedFld5+codedFld6+codedFld7+codedFld8
  OS= '<div id=Patient-' + i + ' class="PatientStyle" '+
      ' onclick="togglePatient(\'Patient-'+ i +'\');" >'  +
      '<table class="patientTable">' +
      '<tr class=patientRow><td>'+ PatientTable0201(i) + '</td></tr>' 

  if (WWPrefNameDOB == "Yes") {
    OS+='<tr class=patientRow><td>'+ PatientTable0201a(i) + '</td></tr>' 
  }

  if (WWIDGenderPronoun == "Yes") {
    OS+='<tr class=patientRow><td>'+ PatientTable0201b(i) + '</td></tr>' 
  }

  OS+='<tr class=patientRow><td>'+ PatientTable0202(i) + '</td></tr>' +
      '<tr class=patientRow><td>'+ PatientTable0203(i) + '</td></tr>' +
      '<tr class=patientRow><td>'+ PatientTable0204(i) + '</td></tr>' +
      '<tr class=patientRow><td>'+ PatientTable0205(i) + '</td></tr>' +
      '<tr class=patientRow><td>'+ PatientTable0206(i) + '</td></tr>' 
  if (udfCnt>0) {
    OS+='<tr class=patientRow><td>'+ PatientTable0207(i) + '</td></tr>' 
  }
  if (!isWhitespace(obj.patients[i][46])) {
    OS+='<tr class=patientRow><td>'+ PatientTable0208(i) + '</td></tr>' 
  }
  OS+='<tr class=patientRow><td>'+ PatientTable0209(i) + '</td></tr>' 
  OS+='</table></div>'
  return OS;
}
function PatientTable0201(i) {
  var returnVal='<table class=patientRowTable '+
       'style="background-color:'  + patientClassColor + ';"><tr>'+
      '<td class="cell10c '+bedClassColor+' cellLocation'+WardOnly+'">' + 
       obj.patients[i][1] + '</td>'+
      '<td class="cell90l" '   +
      ' onclick=\'PatientOpen("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'>'
  if (obj.patients[i][25]=='1') {
    returnVal+='<span class=StandByIcon' + obj.patients[i][25] + '></span>' 
  }
  else {
    returnVal+='<span class="FolderIcon FolderIcon' + obj.patients[i][22] + '"'+
        ' onclick=\'PatientOpen("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'
  }
  returnVal+=  '<span class="Privacy">' +getPatientName(i) + 
        ' ('+obj.patients[i][2] +', ' + obj.patients[i][5] + ', ' + obj.patients[i][6] +') '+
        '</span><span class=AlertIcon'+ obj.patients[i][27].substr(0,1) +
        ' onclick=\'PatientAlerts("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
        '<span class=BoarderIcon'+ obj.patients[i][80]+
        ' onclick=\'PatientBoarders("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
        '<span class=ResultIcon'+ obj.patients[i][27].substr(1,1) +
        ' onclick=\'PatientResults("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
        '<span class=NoteIcon'+ obj.patients[i][27].substr(2,1) +
        ' onclick=\'PatientNotes("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
        '<span class=DocumentIcon'+ obj.patients[i][27].substr(3,1) +
        ' onclick=\'PatientDocuments("'+obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'></span>'+
        '<span class=PaediatricIcon'+ PaedFlag + ' ></span></td>'
   returnVal+='</tr></table>';
   return returnVal;
}

//Row 2 UR - Preferred Name - DOB
function PatientTable0201a(i) {

  var returnVal='<table class=patientRowTable '+
  'style="background-color:'  + patientClassColor + ';"><tr>'+
  '<td><span class="Privacy">'+obj.patients[i][2]+'</span>';

  returnVal += displayPrefSurname(i);
  returnVal += displayPrefFirstname(i);

  returnVal += '<span class="Privacy label"> DOB </span>'+
  '<span class="Privacy">'+FormatDate(obj.patients[i][100])+
  '</span></td></tr></table>';

  return returnVal;
}

//Row 3 UR  - Gender ID
function PatientTable0201b(i) {

  var returnVal = '<table class=patientRowTable>'+
      '<tr><td><span class=label>ID Gender </span>'+
      '<span>'+obj.patients[i][98]+'</span>'+
      '<span class=label>Pronoun </span>'+
      '<span>'+obj.patients[i][99]+'</span>'+
      '</td></tr></table>';

  return returnVal;

}

function PatientTable0202(i) {
  var returnVal='<table class=patientRowTable><tr>';
   var todayCCYYMMDD=document.getElementById("currdate").value;
   if (todayCCYYMMDD==FormatDate(obj.patients[i][45])) {
     returnVal+='<td class="cell50c TheatreToday">Surgery '+obj.patients[i][49]+' at '+ 
                FormatTime(obj.patients[i][45])+' '+ obj.patients[i][57]+'</td>';
   } else {
     if (!isWhitespace(obj.patients[i][31])) {
       returnVal+='<td class=cell50c>Leave:'+ obj.patients[i][31]+'</td>';
     } else {
       returnVal+='<td class="cell50c">'+ FormatShortDate(obj.patients[i][9]) +
                 ' ('+ CalculateDays(FormatDate(obj.patients[i][9])) +')</td>';
     }
  }
  returnVal+='<td class="cell50c cellEdd '+obj.patients[i][23]+'">'+ 
      FormatShortDate(obj.patients[i][15])+obj.patients[i][57]+'</td>';
  returnVal+='</tr></table>';
  return returnVal;
}
function PatientTable0203(i) {
  var returnVal='<table class=patientRowTable><tr>'+
      '<td class=cell50l onclick=\'UpdateCondition("'+
      obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'>' +
      '<span class=ConditionIcon'+obj.patients[i][18] +'></span>'+
      obj.patients[i][17] +obj.patients[i][21]+ ShortDateTime(obj.patients[i][19]) +
      obj.patients[i][94] +'</td>'  +
      '<td class="cell50l" onclick=\'UpdateDiet("'+
      obj.patients[i][2]+'","'+obj.patients[i][3]+'");\'>' +
      '<span class='+DietIconClass+'></span>'+ obj.patients[i][13] + '</td>';
  returnVal+='</tr></table>';
  return returnVal;
}
function PatientTable0204(i) {
  var returnVal='<table class=patientRowTable><tr style="vertical-align:top;">';
  returnVal+='<td class="cell50l"><span onclick=\'DoctorView("'+
              obj.patients[i][28]+ '");\'>' + trim(obj.patients[i][8])+'</span>';
  if (!isWhitespace(obj.patients[i][29])) {
    returnVal+='  / <span onclick=\'DoctorView("'+obj.patients[i][29]+
        '");\'>'+ trim(obj.patients[i][30])+'</span>';
  }
  returnVal+='</td>';
  returnVal+='<td class="cell50r">';
  var btnLab=[btnLab0,btnLab1,btnLab2,btnLab3,btnLab4,
              btnLab5,btnLab6,btnLab7,btnLab8,btnLab9];
  var indFld=obj.patients[i][76];
  for (var x=0;x<10;x++) {
    if (indFld.substr(x,1)==1) {
      returnVal+='<span title="'+btnLab[x]+'" class="buttonInd'+x+'"></span>';
    }
  }
  returnVal+='</td></tr></table>';
  return returnVal;
}
function PatientTable0205(i) {
  var returnVal='<table class=patientRowTable><tr style="vertical-align:top;">';
  returnVal+='<td class="cell60l">Comment:'+ obj.patients[i][20]+'</td>';
  returnVal+='</tr></table>';
  return returnVal;
}
function PatientTable0206(i) {
  var returnVal='<table class=patientRowTable><tr style="vertical-align:top;">';
  returnVal+='<td  class="cell50l">';
  if (freeTxtFld1==1) { returnVal+='<p title="'+freeTxtLab1+'">'+obj.patients[i][67]+'</p>'; }
  if (freeTxtFld3==1) { returnVal+='<p title="'+freeTxtLab3+'">'+obj.patients[i][69]+'</p>'; }
  if (freeTxtFld5==1) { returnVal+='<p title="'+freeTxtLab5+'">'+obj.patients[i][71]+'</p>'; }
  if (freeTxtFld7==1) { returnVal+='<p title="'+freeTxtLab7+'">'+obj.patients[i][73]+'</p>'; }
  returnVal+='</td>';
  returnVal+='<td class="cell50l">';
  if (freeTxtFld2==1) { returnVal+='<p title="'+freeTxtLab2+'">'+obj.patients[i][68]+'</p>'; }
  if (freeTxtFld4==1) { returnVal+='<p title="'+freeTxtLab4+'">'+obj.patients[i][70]+'</p>'; }
  if (freeTxtFld6==1) { returnVal+='<p title="'+freeTxtLab6+'">'+obj.patients[i][72]+'</p>'; }
  if (freeTxtFld8==1) { returnVal+='<p title="'+freeTxtLab8+'">'+obj.patients[i][74]+'</p>'; }
  returnVal+='</td>';
  returnVal+='</tr></table>';
  return returnVal;
}
function PatientTable0207(i) {
  var fldCnt=0;
  var returnVal='<table class=patientRowTable><tr style="vertical-align:top;">';
  returnVal+='<td class="cell50l">';
  if (codedFld1==1) {returnVal+='<p title="'+codedTitle1+'">'+ obj.patients[i][59]+'</p>';}
  if (codedFld3==1) {returnVal+='<p title="'+codedTitle3+'">'+ obj.patients[i][61]+'</p>';}
  if (codedFld5==1) {returnVal+='<p title="'+codedTitle5+'">'+ obj.patients[i][63]+'</p>';}
  if (codedFld7==1) {returnVal+='<p title="'+codedTitle7+'">'+ obj.patients[i][65]+'</p>';}
  returnVal+='</td>';
  returnVal+='<td class="cell50l">';
  if (codedFld2==1) {returnVal+='<p title="'+codedTitle2+'">'+ obj.patients[i][60]+'</p>';}
  if (codedFld4==1) {returnVal+='<p title="'+codedTitle4+'">'+ obj.patients[i][62]+'</p>';}
  if (codedFld6==1) {returnVal+='<p title="'+codedTitle6+'">'+ obj.patients[i][64]+'</p>';}
  if (codedFld8==1) {returnVal+='<p title="'+codedTitle8+'">'+ obj.patients[i][66]+'</p>';}
  returnVal+='</td>';
  returnVal+='</tr></table>';
  return returnVal;
}
function PatientTable0208(i) {
  var returnVal='<table class=patientRowTable><tr style="vertical-align:top;">';
  returnVal+='<td class=cell50l><p>Theatre:'+ 
             FormatShortDateTime(obj.patients[i][45])+' ('+ obj.patients[i][46]+'min)</p><p>'+ 
             obj.patients[i][49]+
             '<p onclick=\'DoctorView("'+obj.patients[i][47]+'");\'>'+
             'Anaes:'+ trim(obj.patients[i][48])+'</p><p>'+ obj.patients[i][50]+'</p></td>';
  returnVal+='<td class=cell50l><p>'+ obj.patients[i][53]+'</p>';
  if (!isWhitespace(obj.patients[i][54])) {
    returnVal+='<p>'+ trim(obj.patients[i][54])+'</p>';
  }
  if (!isWhitespace(obj.patients[i][55])) {
    returnVal+='<p>'+ trim(obj.patients[i][55])+'</p>';
  }
  returnVal+='</td>';
  returnVal+='</tr></table>';  
  return returnVal;
} 
function PatientTable0209(i) {
  var returnVal='<table class=patientRowTable><tr style="vertical-align:top;">';
  returnVal+='<td class=cell50l>Diagnosis</td>';
  returnVal+='<td class=cell50l>';
  if (!isWhitespace(obj.patients[i][34])) {
    returnVal+='<p>'+ obj.patients[i][34]+'</p>';
  }
  if (!isWhitespace(obj.patients[i][35])) {
    returnVal+='<p>'+ obj.patients[i][35]+'</p>';
  }
  if (!isWhitespace(obj.patients[i][36])) {
    returnVal+='<p>'+ obj.patients[i][36]+'</p>';
  }
  returnVal+='</td>';
  returnVal+='</tr></table>';  
  return returnVal;
}

function getPatientName(i) {
  var patientName="";
  var pTitle=toTitleCase(obj.patients[i][77]);
  var pGiven=toTitleCase(obj.patients[i][78]);
  var pSurname=toTitleCase(obj.patients[i][79]);
  if (PatientNameFormat==1) {
    pTitle=obj.patients[i][77];
    pGiven=obj.patients[i][78];
    pSurname=obj.patients[i][79];
  }
  var gInitial=pGiven.substr(0,1);
  var sInitial=pSurname.substr(0,1);
  switch (PatientNameType) {
    case 0: patientName=pSurname+', '+pTitle+' '+pGiven;break;
    case 1: patientName=pSurname+', '+pTitle+' '+gInitial;break;
    case 2: patientName=pSurname+', '+gInitial;break;
    case 3: patientName=pSurname;break;
    case 4: patientName=pGiven+'.'+sInitial;break;
    case 5: patientName=pGiven;break;
    case 6: patientName=gInitial+sInitial+' ';break;
  }
  return patientName;
}
function toTitleCase(s) {
  return s.charAt(0).toUpperCase() + s.substr(1).toLowerCase();
}
function getDietIconClass(i) {
  if (obj.patients[i][81]=="1") {
    return "DietIconFast";
  } else {
    return "DietIcon";
  }
}

//Add patient Image to cell
function displayImage(i) {

  ImageFile = PatientImageURL(obj.patients[i][2],obj.patients[i][5]);
  
  var returnVal = "<span class='Privacy' id='privateImage'>"+ 
                  "<img name='patimage' height='50' src='"+ ImageFile +
                  "' alt='Patient U/R "+ obj.patients[i][2] +
                  " title='Patient U/R "+ obj.patients[i][2] +
                  " style='float:right; border-style:solid; z-index:-5;" + 
                  " display:none' onload='showImage(this);'></span>";
   
  return returnVal; 

}
