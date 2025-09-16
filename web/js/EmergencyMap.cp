//jsVersion  : V11.00.00
//======================================================================
// Emergency Department White Board / Map 
//======================================================================
var obj;
var globalLinkType = null ;
var globalLinkUrl = null ;
var originalLocId = null ;
var whichEl = null;
var DropEl = null;
var ReturnValue = new Object();
var LocationMap;
var PatientMap;
var dblClicked = false;
var alreadyClicked = false;
var alreadyClickedTimeout = null;
var PatientNoArray = null;
var cancelClickAction = false;
var winID;
var winWidth=1024;
var winHeight=768;
var refreshPage=true;
var mapImage="canvas1024x768.png";
var flagLocation;
var PatientContainer=1;
var PatientContainerLines=3;
var PatientCellHeight=75;
var PatientLineHeight=25;
var PatientCellWidth=220;
var PatientCellPaddingTop=1;
var PatientCellPaddingLeft=1;
var ReadOnlyView=false;
//var immediate = 0
//var emergency = 0
//var urgent = 20
//var semi = 50
//var non = 110
var setTop;
var setLeft;
var defaultTop=30;
var defaultLeft=260;
var defaultSpace=10;
var defaultRow=0;
var defaultCol=0;
var maxColumns=4;
var showNext=true;
var showNotices=true;
var showStatistics=true;
var showTriageStatistics=false;
var showWaitTimeStatistics=false;
var showDoctorStatistics=false;
var showNurseStatistics=false;
var showResultStatistics=false;
var ShowLocationAreas=true;
var ShowPatients=true;
var NextCellTop=30;
var NextCellLeft=1;
var NextCellWidth=250;
var NextCellHeight=25;
var NoticesCellTop=370;
var NoticesCellLeft=1;
var NoticesCellWidth=250;
var NoticesCellHeight=240;
var StatisticsCellTop=120;
var StatisticsCellLeft=1;
var StatisticsCellWidth=250;
var StatisticsCellHeight=240;
var TriageCellTop=620;
var TriageCellLeft=1;
var TriageCellWidth=200;
var TriageCellHeight=250;
var WaitTimeCellTop=620;
var WaitTimeCellLeft=205;
var WaitTimeCellWidth=200;
var WaitTimeCellHeight=250;
var DoctorCellTop=620;
var DoctorCellLeft=410;
var DoctorCellWidth=200;
var DoctorCellHeight=250;
var NurseCellTop=620;
var NurseCellLeft=615;
var NurseCellWidth=200;
var NurseCellHeight=250;
var ResultCellTop=620;
var ResultCellLeft=820;
var ResultCellWidth=200;
var ResultCellHeight=250;
var ResultNorecord=10;
var ResultAgehours=48;
var ResultMarked=0;
var resultsSet;
var StatisticsShow01=true;
var StatisticsShow02=true;
var StatisticsShow03=true;
var StatisticsShow04=true;
var StatisticsShow05=true;
var StatisticsShow06=true;
var StatisticsShow07=true;
var StatisticsShow08=true;
var StatisticsShow09=true;
var StatsArray = new Array();
var TriageCounts = new Array();
var WaitTimeCounts = new Array();
var DoctorCounts = new Array();
var NurseCounts = new Array();
var ResultCounts = new Array();
var ViewNames = [' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '];
var ViewCodes = ['1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','h','i','j','k'];
var dClickTemplate='100';
var sClickTemplate='004';
var triageTemplate='011';
var PatientWaitIndex=0;
/* Start of Code */
function DrawMap() {
 obj = new Map(mapImage);
 ServerLocations();
 obj.AddLocation("Patients in Other Departments","ZZZ",0,0,0,0,0,0,"O","999");  // Dummy Location
 SiteLocations(); 
 SiteViews(); 
 MapContainers();
 DefaultLocations();
 SetExpected(); 
 SetPatients();
 SetWaitPositions();
 SumLocations();
 SumTriage();
 SumWaitTime();
 SumDoctors();
 SumNurses();
 SumResults();
 ShowMap();
 StyleMap();
 StartMap();
}
function ReDrawMap() {
 obj = new Map(mapImage);
 ServerLocations();
 obj.AddLocation("Patients in Other Departments","ZZZ",0,0,0,0,0,0,"O","999");  // Dummy Location
 SiteLocations(); 
 SiteViews(); 
 MapContainers();
 DefaultLocations();
 SumLocations();
 SumTriage();
 SumWaitTime();
 SumDoctors();
 SumNurses();
 SumResults();
 ShowMap();
 StyleMap();
}
function SumTriage() {
  var el;
  var triageCount = document.getElementById('TriageCount');
  if (triageCount) {
    if (showTriageStatistics) {
      triageCount.style.left   = TriageCellLeft+"px";
      triageCount.style.top    = TriageCellTop+"px";
      triageCount.style.width  = TriageCellWidth+"px";
      triageCount.style.height = TriageCellHeight+"px";
      for (var i=0;i<6;i++) {
        TriageCounts[i] = new Array;
        TriageCounts[i][0]=(i+1).toString();
        TriageCounts[i][1]=0;
        TriageCounts[i][2]=0;
      }
      TriageCounts[6] = new Array;
      TriageCounts[6][0]=" ";
      TriageCounts[6][1]=0;
      TriageCounts[6][2]=0;
      for (var i=0;i<obj.patients.length;i++) {
        for (var j=0;j<TriageCounts.length;j++) {
          if (TriageCounts[j][0]==obj.patients[i][4]) {
            TriageCounts[j][1]++;
            if (isWhitespace(obj.patients[i][10])) TriageCounts[j][2]++;
          }
        }
      }
      for (var i=0;i<7;i++) {
        el = document.getElementById('TriageCat'+TriageCounts[i][0]);
        if (el)  el.innerHTML=TriageCounts[i][1];
        el = document.getElementById('uTriageCat'+TriageCounts[i][0]);
        if (el)  el.innerHTML=TriageCounts[i][2];
      }
      triageCount.style.display = "";
    }
  }
}
function SumDoctors() {
  var Matched;
  var el;
  var doctorCount = document.getElementById('DoctorCount');
  if (doctorCount) {
    if (showDoctorStatistics) {
      doctorCount.style.left   = DoctorCellLeft+"px";
      doctorCount.style.top    = DoctorCellTop+"px";
      doctorCount.style.width  = DoctorCellWidth+"px";
      doctorCount.style.height = DoctorCellHeight+"px";
      for (var i=0;i<obj.patients.length;i++) {
        Matched=false;
        for (var j=0;j<DoctorCounts.length;j++) {
          if (DoctorCounts[j][0]==obj.patients[i][10]) {
            Matched=true;
            DoctorCounts[j][2]++;
          }
        }
        if (!Matched) {
          DoctorCounts[DoctorCounts.length] = new Array;
          DoctorCounts[DoctorCounts.length-1][0]=obj.patients[i][10];
          DoctorCounts[DoctorCounts.length-1][1]=obj.patients[i][37];
          DoctorCounts[DoctorCounts.length-1][2]=1;
        }
      }
      DoctorCounts.sort(CountSort);
      for (var i=0;i<10;i++) {
        if (i<DoctorCounts.length) {
          el = document.getElementById('DoctorName'+i);
          if (isWhitespace(DoctorCounts[i][1])) DoctorCounts[i][1]="No Attending Doctor";
          if (el)  el.innerHTML=DoctorCounts[i][1];
          el = document.getElementById('DoctorCnt'+i);
          if (el)  el.innerHTML=DoctorCounts[i][2];
        }
      }
      doctorCount.style.display = "";
    }
  }
}
function CountSort(a,b) {
  return b[2] - a[2];
}
function SumNurses() {
  var Matched;
  var el;
  var nurseCount = document.getElementById('NurseCount');
  if (nurseCount) {
    if (showNurseStatistics) {
      nurseCount.style.left   = NurseCellLeft+"px";
      nurseCount.style.top    = NurseCellTop+"px";
      nurseCount.style.width  = NurseCellWidth+"px";
      nurseCount.style.height = NurseCellHeight+"px";
      for (var i=0;i<obj.patients.length;i++) {
        Matched=false;
        for (var j=0;j<NurseCounts.length;j++) {
          if (NurseCounts[j][0]==obj.patients[i][42]) {
            Matched=true;
            NurseCounts[j][2]++;
          }
        }
        if (!Matched) {
          NurseCounts[NurseCounts.length] = new Array;
          NurseCounts[NurseCounts.length-1][0]=obj.patients[i][42];
          NurseCounts[NurseCounts.length-1][1]=obj.patients[i][42];
          NurseCounts[NurseCounts.length-1][2]=1;
        }
      }
      NurseCounts.sort(CountSort);
      for (var i=0;i<10;i++) {
        if (i<NurseCounts.length) {
          el = document.getElementById('NurseName'+i);
          if (isWhitespace(NurseCounts[i][1])) NurseCounts[i][1]="No Attending Nurse";
          if (el)  el.innerHTML=NurseCounts[i][1];
          el = document.getElementById('NurseCnt'+i);
          if (el)  el.innerHTML=NurseCounts[i][2];
        }
      }
      nurseCount.style.display = "";
    }
  }
}
function SetWaitPositions() {
  if (obj.patients.length < 1) return;
  PatientWaitIndex=obj.patients[0].length;
  for (var i=0;i<obj.patients.length;i++) {
    obj.patients[i][PatientWaitIndex]='';
  }
  obj.patients.sort(StringSort);
  SetSiteWaitPosition();
  for (var i=0;i<obj.locations.length;i++) {
    if (obj.locations[i][15]) {
      if (obj.locations[i][15]!='') {
        SetStreamWaitPosition(obj.locations[i]);
      }
    }
  }
}
function SetStreamWaitPosition(LocationObject) {
  var WaitPosition=0;
  for (var i=0;i<obj.patients.length;i++) {
    if (obj.patients[i][12]!="000000000") {
      if (trim(obj.patients[i][50])==trim(LocationObject[15])) {
        if (WaitPosition==0) {
          obj.patients[i][PatientWaitIndex]=LocationObject[15]+'-Next';
          LocationObject[17]=i;
        } else {
          obj.patients[i][PatientWaitIndex]=LocationObject[15]+'-'+WaitPosition;
        }
        WaitPosition++; 
      }
    }
  }
}
function SetSiteWaitPosition() {
  var WaitPosition=0;
  for (var i=0;i<obj.patients.length;i++) {
    obj.patients[i][PatientWaitIndex]='';
    if (obj.patients[i][12]=="000000000")  continue;  // Ignore Patient that have been seen
    if (WaitPosition==0) {
      obj.patients[i][PatientWaitIndex]='Next';
    } else {
      obj.patients[i][PatientWaitIndex]='w-'+WaitPosition;
    }
    WaitPosition++; 
  }
}
function SumLocations() {
  obj.patients.sort(StringSort);
  StatsArray.length=0;
  for (var i=0;i<obj.locations.length;i++) {
    StatsArray[i] = new Array;
    StatsArray[i][0]=obj.locations[i][1];  //Code
    StatsArray[i][1]=obj.locations[i][0];  //Long Name
    StatsArray[i][2]=obj.locations[i][10]; //Short Name
    StatsArray[i][3]=obj.locations[i][8];  //Type
    StatsArray[i][4]=0;                    //Count Number of Patients
    StatsArray[i][5]=0;                    //Count Waiting Patients
    StatsArray[i][6]=0;                    //Next Patient to be Seen in Location
  }
  var WaitPosition=0;
  var OtherIndex=StatsArray.length-1
  for (var i=0;i<obj.patients.length;i++) {
    if (obj.patients[i][12]!="000000000") { WaitPosition++; }
    for (var j=0;j<StatsArray.length;j++) {
      if (StatsArray[j][0]==obj.patients[i][3]) {
        StatsArray[j][4]++;
        if (obj.locations[j][8]=='O') StatsArray[OtherIndex][4]++;
        if (obj.patients[i][12]!="000000000") {
          StatsArray[j][5]++;
          if (obj.locations[j][8]=='O') StatsArray[OtherIndex][5]++;
        }
        if (WaitPosition==1)  StatsArray[j][6]=1;
      }
    }
  }
}
function MapContainers() {
  var nextEmr = document.getElementById('NextEmergency');
  if (nextEmr) {
    nextEmr.style.display = "none";
    nextEmr.style.left = NextCellLeft+"px";
    nextEmr.style.top = NextCellTop+"px";
    nextEmr.style.width = NextCellWidth+"px";
    nextEmr.style.height = ((NextCellHeight*3)+5)+"px";
    document.getElementById('nextLine1').style.height=NextCellHeight+"px";
    document.getElementById('nextLine2').style.height=NextCellHeight+"px";
    document.getElementById('nextLine3').style.height=NextCellHeight+"px";
    if (showNext)  nextEmr.style.display = ""; 
  }
  var emrCount = document.getElementById('EmergencyCount');
  if (emrCount) {
    emrCount.style.left   = StatisticsCellLeft+"px";
    emrCount.style.top    = StatisticsCellTop+"px";
    emrCount.style.width  = StatisticsCellWidth+"px";
    emrCount.style.height = StatisticsCellHeight+"px";
    if (StatisticsShow01) document.getElementById("totalPatients").style.display = "";
    if (StatisticsShow02) document.getElementById("waitingPatients").style.display = "";
    if (StatisticsShow03) document.getElementById("expectedPatients").style.display = "";
    if (StatisticsShow04) document.getElementById("unseenPatients").style.display = "";
    if (StatisticsShow05) document.getElementById("doctorIncomplete").style.display = "";
    if (StatisticsShow06) document.getElementById("nurseIncomplete").style.display = "";
    if (StatisticsShow07) document.getElementById("clericalIncomplete").style.display = "";
    if (StatisticsShow08) document.getElementById("absentPatients").style.display = "";
    if (StatisticsShow09) document.getElementById("billingIncomplete").style.display = "";
    if (showStatistics) emrCount.style.display = "";
  }
  var sysComments = document.getElementById('SystemComments');
  if (sysComments) {
    sysComments.style.left =   NoticesCellLeft+"px";
    sysComments.style.top =    NoticesCellTop+"px";
    sysComments.style.width =  NoticesCellWidth+"px";
    sysComments.style.height = NoticesCellHeight+"px";
    if (showNotices) sysComments.style.display = "";
  }
}
//------------------------------------------------------------
// SupportInformationFS - Display Support Information Alert
//------------------------------------------------------------
function SupportInformationFS() {
  // first find the content frame
  var contentFrame = top.content.document;
  var popupFrame = top.search.document;
  var context      = contentFrame;

  // find the popup frame
  var isPopup = (popupFrame.location.href.indexOf("about:blank") == -1);
  if (isPopup) {
    context = popupFrame;
    if (context.location.href.match('/lookups/')) {
      alert("Search HTML     \t : " + context.location.pathname + "\n" )
      return;
    }
  }
  var ProgramID      = getMetaContents('ServerID',context);
  var ProgramName    = getMetaContents('ServerName',context);
  var ProgramVersion = getMetaContents('ServerVersion',context);
  var ProgramFile    = getMetaContents('TemplateFile',context);
  var TemplateVer    = getMetaContents('TemplateVersion',context);
  var TemplateHome   = getMetaContents('TemplateHome',context);
  alert("Server ID       \t : " + ProgramID + "\n" +
        "Server Name     \t : " + ProgramName + "\n" +
        "Server Version  \t : " + ProgramVersion + "\n" +
        "Template        \t : " + ProgramFile + "\n" +
        "Template Version\t : " + TemplateVer + "\n" +
        "Template Home   \t : " + TemplateHome + "\n" );
}
function ButtonLink(URL) {
 var s=document.createElement("select")
 var x=document.createElement("option")
 x.value=URL+"|content";
 s.appendChild(x)
 EMenuLinkTo(s);
}
function EMenuLinkTo(SelectItem) {
  if (top.CloseOverlayFrames) {
    top.CloseOverlayFrames();  // close all overlayed (opened) DFrames first
  }
  MenuLinkTo(SelectItem);
  ShowContent();
}
function TestWindowEMenuLinkTo(SelectItem) {
  SelectOption=SelectItem.options[SelectItem.selectedIndex].value.split("|") 
  var win=open(SelectOption[0],"popupWindow",
  "width="+winWidth+",height="+winHeight+",status=no,toolbar=no,titlebar=no,menubar=no,scrollbar=0");
  win.moveTo(-3,-3);
  win.focus();
}
function ShowContent() {
  var n=top.document.getElementById("navbar");
  var c=top.document.getElementById("content");

  n.style.display="";
  n.style.border="1px solid grey";
  n.style.top="5%";
  n.style.left="5%";
  n.style.width="90%";

  c.style.display="";
  c.style.left="5%";
  c.style.marginTop="21px";
  c.style.width="90%";
  c.style.top="5%";
  c.height="90%";
  c.style.position="absolute";
  c.style.border="1px solid grey";
}
function  Map(BackGroundImage) {
 this.image = BackGroundImage;
 this.locations = new Array();
 this.patients = new Array();
 this.AddLocation = _AddLocation;
 this.AddPatient = _AddPatient;
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
  for(var i = 0; i < arguments.length; i++) {
     location[location.length] = arguments[i];
  }
}
function  _AddPatient() {
  this.patients[this.patients.length] = new Array();
  var patient = this.patients[this.patients.length-1];
  for(var i = 0; i < arguments.length; i++)
     patient[patient.length] = arguments[i];
}
function  UpdLocation() {
  var f=false;
  for (var i=0;i<obj.locations.length;i++) {
    if (obj.locations[i][1]==arguments[1]) {
      f=true;
      if (arguments[13]=="false") {
        if (obj.locations[i][1] != "ZZZ") {
//        alert("ERROR: Emergency Location Does Not Exist - "+arguments[1]);
        }
      }
      for(var a = 0; a < arguments.length; a++) {
        if (arguments[a]!="") {
          obj.locations[i][a]=arguments[a]; 
        } 
      }
    }
  }
  if (!f) {
//    alert("ERROR: Emergency Location Does Not Exist - "+arguments[1]);
    obj.locations[obj.locations.length] = new Array();
    var location = obj.locations[obj.locations.length-1];
    for(var i = 0; i < arguments.length; i++) {
      location[location.length] = arguments[i];
    }
  }
}
function DefaultLocations() {
 setTop=defaultTop;
 setLeft=defaultLeft;
 defaultRow=0;
 defaultCol=0;
  for(var i = 0; i < obj.locations.length; i++) {
    if (parseInt(obj.locations[i][2])==0&&
        obj.locations[i][8]!="O"&&
        obj.locations[i][8]!="N"&&
        obj.locations[i][13]!="false") {
      obj.locations[i][2]=setLeft+((defaultSpace+PatientCellWidth)*defaultCol);
      obj.locations[i][3]=setTop+((defaultSpace+PatientCellHeight)*defaultRow);
      defaultCol=defaultCol+1;
      if (defaultCol==maxColumns) {
        defaultRow=defaultRow+1;
        defaultCol=0;
      }
    }
  }
  defaultRow=defaultRow+1;
  defaultCol=0;
  for(var i = 0; i < obj.locations.length; i++) {
    if (parseInt(obj.locations[i][2])==0&&
        (obj.locations[i][8]=="O"||obj.locations[i][8]=="N")) {
      if (obj.locations[i][13]=="true") {
        obj.locations[i][2]=setLeft+((defaultSpace+PatientCellWidth)*defaultCol);
        obj.locations[i][3]=setTop+((defaultSpace+PatientCellHeight)*defaultRow);
        defaultCol=defaultCol+1;
        if (defaultCol==maxColumns) {
          defaultRow=defaultRow+1;
          defaultCol=0;
        }
      }
    }
  }
}
function ShowMap() {
  obj.patients.sort(StringSort);
  Refresh = getMetaContents('RefreshTime') + '000';
  window.setInterval("PageRefresh();",Refresh);
  WaitPosition=0;
  LocationMap="";
  if (ShowLocationAreas) {
    getLocationMap()
  }
  PatientMap="";
  if (ShowPatients) {
    for(var i = 0; i < obj.patients.length; i++) {
      switch (PatientContainer) {
        case 1: PatientMap+=getPatientCell01(i); break;
        case 2: PatientMap+=getPatientCell02(i); break;
        case 3: PatientMap+=getPatientCell03(i); break;
        case 4: PatientMap+=getPatientCell04(i); break;
        case 5: PatientMap+=getPatientCell05(i); break;
        case 6: PatientMap+=getPatientCell06(i); break;
        case 7: PatientMap+=getPatientCell07(i); break;
        case 8: PatientMap+=getPatientCell08(i); break;
        case 9: PatientMap+=getPatientCell09(i); break;
        case 10: PatientMap+=getPatientCell10(i); break;
        default : PatientMap+=getPatientCell01(i); break;
      }
    }
  }
  if (parent.MenuList.style.display == 'none') {
    parent.MenuList.style.display = '';
  }
  parent.menu.EmergencyMenu.innerHTML = parent.MenuList.innerHTML;
  parent.menu.EmergencyMap.innerHTML = LocationMap+PatientMap;
  parent.MenuList.style.display = 'none';
  ShowMapViews();
}
function ShowMapViews() {
  var MapViewType=top.GetCookieData("EmergencyMapViewType");
  var MapView=document.getElementById("MenuViewType");
  var selectedView=0;
  for (i=0;i<20;i++) {
    if (!isWhitespace(ViewNames[i])) {
      MapView.options[MapView.options.length]=new Option(ViewNames[i],ViewCodes[i]);
      if (ViewCodes[i]==MapViewType) {
        MapView.selectedIndex=MapView.options.length-1;
      }
    }
  }
}
function getLocationAlias(code) {
  if (!code) return "";
  var alias = code;
  for(var i = 0; i < obj.locations.length; i++) {
    if (obj.locations[i][1] == code) {
      alias = obj.locations[i][10] + "";
    }
  }
  return alias;
}
function getLocationMap() {
  for (var i = 0; i < obj.locations.length; i++) {
    if (obj.locations[i][11]==undefined) obj.locations[i][10]=obj.locations[i][1];
    if (obj.locations[i][11]==undefined) obj.locations[i][11]=1;
    if (obj.locations[i][12]==undefined) obj.locations[i][12]=1;
    flagLocation=true;
    otherLocation=false;
    if (obj.locations[i][8]=="O"){
      showOtherDepartment(i);
      continue;
    }
    if (obj.locations[i][8]=="N"){
      showNextPatient(i);
      continue;
    }
    showOutOfDept(i);
    showExpected(i);
    if (flagLocation==true && otherLocation != true){
      LocationMap+="<div id=Location-"+i+
                   " longName='"+obj.locations[i][0]+"' "+
                   " shortName='"+obj.locations[i][10]+"' "+
                   " locationCode='"+obj.locations[i][1]+"' "+
                   " patientsWide='"+obj.locations[i][11]+"' "+
                   " patientsHigh='"+obj.locations[i][12]+"' "+
                   " class='LocationStyle styleLoc-"+obj.locations[i][1]+"'>"+
                   obj.locations[i][0]+"</div>"
    }
  }
}
function showNextPatient(locIndex) {
  var NextPatientName="";
  var NextPatientLocation="";
  var NextPatientUR="";
  var NextPatientVisit="";
  if (obj.locations[locIndex][17]) {
    var NextPatientIndex=obj.locations[locIndex][17];
    NextPatientUR=obj.patients[NextPatientIndex][0];
    NextPatientVisit=obj.patients[NextPatientIndex][1];
    NextPatientName=obj.patients[NextPatientIndex][2];
    NextPatientLocation=obj.patients[NextPatientIndex][40];
  }
  var PatientCellHeight=(obj.locations[locIndex][12]*4)+'px';
  var PatientLineHeight=obj.locations[locIndex][12];
  LocationMap+="<div id=Location-"+locIndex+
               " longName='"+obj.locations[locIndex][0]+"' "+
               " shortName='"+obj.locations[locIndex][1]+"' "+
               " locationCode='"+obj.locations[locIndex][1]+"' "+
               " patientsWide='"+obj.locations[locIndex][11]+"' "+
               " patientsHigh='"+obj.locations[locIndex][12]+"' "+
               " streamCode='"+obj.locations[locIndex][15]+"' "+
               " streamName='"+obj.locations[locIndex][16]+"' "+
               " class='LocationStyle styleLoc-"+obj.locations[locIndex][1]+"'>" +
               "<table class=nextPatientLocation " +
               " style='width:100%;height:" + PatientCellHeight + ";'" +
               " border=0 cellpadding=2 cellspacing=0>" +
               "<tr class='styleLoc-NextPatient-"+obj.locations[locIndex][1]+
               "' style='text-align:center;height:"+PatientLineHeight+"px;'>"+
               "<td colspan=2 style='font-weight:bold;'>"+ obj.locations[locIndex][0]+"</td>"+
               "</tr>" +
               "<tr style='height:"+PatientLineHeight+"px;' >" +
               "<td class=DataLabel>Patient</td>"+ 
               "<td class=DataField>"+NextPatientName+" ("+ NextPatientUR + ")</td>" +
               "</tr>"+
               "<tr style='height:"+PatientLineHeight+"px;'>"+
               "<td class=DataLabel>Location</td>"+
               "<td class=DataField>"+NextPatientLocation+"</td></tr>"+
               "<tr style='height:"+PatientLineHeight+"px;'>"+
               "<td class=DataLabel>Doctor</td>"+
               "<td class=DataField><input type=text size=6 maxlength=6 name=doctor" +
               " onkeydown='updDoctor(this,\""+NextPatientVisit+"\");'</td></tr>"+
               "</table></div>";
}
function showOtherDepartment(locIndex) {
  LocationMap+="<div id=Location-"+locIndex+
               " longName='"+obj.locations[locIndex][0]+"' "+
               " shortName='"+obj.locations[locIndex][1]+"' "+
               " locationCode='"+obj.locations[locIndex][1]+"' "+
               " patientsWide='"+obj.locations[locIndex][11]+"' "+
               " patientsHigh='"+obj.locations[locIndex][12]+"' "
  if (StatsArray[locIndex][6]==1) {
    var classString="background-image:url(\"../images/CellHighlightRightYellow.png\");";
    classString+="background-repeat:no-repeat;";
    classString+="background-position:top right;";
    LocationMap+=" style='"+classString+"' ";
  }
  LocationMap+=" class='OtherLocationStyle styleLoc-"+obj.locations[locIndex][1]+"'>" +
               "<table class=otherDepartment " +
               " width=" + PatientCellWidth +" height=" + PatientCellHeight +
               " border=0 cellpadding=0 cellspacing=0>" +
               "<tr style='height:"+PatientLineHeight+"px;'>"+
               "<td colspan=2 style='text-align:center;font-weight:bold;'>"+ 
                obj.locations[locIndex][0]+"</td>"+
               "</tr>" +
               "<tr style='height:"+PatientLineHeight+"px;text-align:center;'"+
               " onclick=\"OtherLocations('"+obj.locations[locIndex][1]+"');\">" +
               "<td>Patients: "+ StatsArray[locIndex][4]+ "</td>"
  if (StatsArray[locIndex][5]>0) {
    LocationMap+="<td>Unseen: "+ StatsArray[locIndex][5]+ "</td>"
  } else {
    LocationMap+="<td></td>"
  }
  LocationMap+="</tr>"+
               "<tr style='height:"+PatientLineHeight+"px;text-align:center;'>"+
               "<td colspan=2>"+
               "</td></tr>"+
               "</table></div>";
}
function showOutOfDept(locIndex) {
  if (!ShowPatients) return;
  for(var r = 0; r < obj.patients.length; r++) {
    if (obj.patients[r][16]==obj.locations[locIndex][1]&&obj.locations[locIndex][8]!="W"){
      LocationMap+="<div id=Location-"+locIndex+
                   " longName='"+obj.locations[locIndex][0]+"' "+
                   " shortName='"+obj.locations[locIndex][10]+"' "+
                   " locationCode='"+obj.locations[locIndex][1]+"' "+
                   " patientsWide='"+obj.locations[locIndex][11]+"' "+
                   " patientsHigh='"+obj.locations[locIndex][12]+"' "+
                   " class='LocationStyle styleLoc-"+obj.locations[locIndex][1]+"'>"+
         "<table class=OutOfDept " +
         " height=" + PatientCellHeight +
         " width=" + PatientCellWidth +" border=1 cellpadding=0 cellspacing=0>" +
         "<tr style='height:"+PatientLineHeight+"px;'>"+
         "<td style='overflow:hidden;white-space:nowrap;text-align:center;width:22px;'>"+
          obj.locations[locIndex][10]+"</td>"+
         "<td style='width:73px;padding-left:3px'><b>"+obj.patients[r][2] +"<b></td>";
      if (PatientContainerLines==1) {
         LocationMap+="<td style='width:95px;padding-left:3px'>"+ 
                       obj.patients[r][17].substr(0,5) + " to "+
                       obj.patients[r][40]+ "</td></tr>" 
      } else {
         LocationMap+="<td style='text-align:center;width:30px;'>"+ obj.patients[r][6] +"</td>"+
         "<td style='text-align:center;width:35px;'>"+ obj.patients[r][7] + "</td>"+
         "<td style='text-align:right;width:30px'>" +  obj.patients[r][5].substr(8,5) + "</td></tr>" 
      }
      if (PatientContainerLines==2) {
         LocationMap+="<tr style='height:"+PatientLineHeight+"px;'>"+
         "<td colspan=2 style='padding-left:3px'>Left At:"+obj.patients[r][17].substr(0,5)+
         "</td><td colspan=3>"+obj.patients[r][40]+"</td></tr>";
      }
      if (PatientContainerLines==3) {
         LocationMap+="<tr style='height:"+PatientLineHeight+"px;'>"+
         "<td colspan=2 style='padding-left:3px'>Time Left</td><td colspan=3>"+
         obj.patients[r][17].substr(0,5)+"</td></tr>"+
         "<tr style='height:"+PatientLineHeight+"px'>"+
         "<td colspan=2>Current Location</td><td colspan=3>"+obj.patients[r][40]+"&nbsp;</td></tr>";
      }
      if (PatientContainerLines==4) {
         LocationMap+="<tr style='height:"+PatientLineHeight+"px;'>"+
         "<td colspan=2>Time Left</td><td colspan=3>"+obj.patients[r][17].substr(0,5)+"</td></tr>"+
         "<tr style='height:"+PatientLineHeight+"px'>"+
         "<td colspan=2>Current Location</td><td colspan=3>"+obj.patients[r][40]+"&nbsp;</td></tr>"+
         "<tr style='height:"+PatientLineHeight+"px'>"+
         "<td colspan=5>&nbsp;</td></tr>";
      }
      LocationMap+="</table></div>";
      flagLocation=false;
      break;
    }
  }
}
function showExpected(locIndex) {
  if (!flagLocation) return;
  if (!ShowPatients) return;
  for(var e = 0; e < obj.expected.length; e++) {
    if (obj.expected[e][1]==obj.locations[locIndex][1] && obj.locations[locIndex][8]!="W" ){
      LocationMap+="<div id=Location-"+locIndex+
                   " longName='"+obj.locations[locIndex][0]+"' "+
                   " shortName='"+obj.locations[locIndex][10]+"' "+
                   " locationCode='"+obj.locations[locIndex][1]+"' "+
                   " patientsWide='"+obj.locations[locIndex][11]+"' "+
                   " patientsHigh='"+obj.locations[locIndex][12]+"' "+
                   " class='LocationStyle styleLoc-"+obj.locations[locIndex][1]+"'>"+
                   "<table class=expectedLocation " +
                   " width=" + PatientCellWidth +" height=" + PatientCellHeight +
                   " border=1 cellpadding=0 cellspacing=0>" +
                   "<tr style='height:"+PatientLineHeight+"px;'>"+
                   "<td style='white-space:nowrap;overflow:hidden;text-align:center;width:22px;'>"+
                    obj.locations[locIndex][10]+"</td>"+
                   "<td style='width:120px;padding-left:3px'>"+ obj.expected[e][0].substr(0,42)+"</td>";
      if (PatientContainerLines>1) {
         LocationMap+="<td style='text-align:center;width:48px'></td></tr>"+
                      "<tr style='height:"+PatientLineHeight+"px;'>"+
                      "<td style='padding-left:3px' colspan=3>Expected:"+ 
                      obj.expected[e][2]+"</td></tr>";
      } else {
         LocationMap+="<td style='text-align:center;width:48px'>"+ obj.expected[e][2]+"</td></tr>";
      }
      if (PatientContainerLines>2) {
         LocationMap+="<tr style='height:"+PatientLineHeight+"px;'>"+
                      "<td colspan=3>&nbsp;</td></tr>";
      }
      if (PatientContainerLines>3) {
         LocationMap+="<tr style='height:"+PatientLineHeight+"px;'>"+
                      "<td colspan=3>&nbsp;</td></tr>";
      }
      LocationMap+="</table></div>";
      flagLocation=false;
      break;
    } 
  }
}
function StyleLocation(locIndex) {
  var el=document.getElementById('Location-' + locIndex );
  var bedX=el.getAttribute("patientsWide");
  var bedY=el.getAttribute("patientsHigh");
  obj.locations[locIndex][6]=obj.locations[locIndex][2];
  obj.locations[locIndex][7]=obj.locations[locIndex][3];
  LocationWidth=bedX*(PatientCellWidth+2);
  LocationHeight=bedY*(PatientCellHeight+2);
  if (obj.locations[locIndex][8]=="N") {
    LocationWidth=bedX;
    LocationHeight=(bedY*4)+2;
  }
  obj.locations[locIndex][4]=obj.locations[locIndex][2]+LocationWidth;
  obj.locations[locIndex][5]=obj.locations[locIndex][3]+LocationHeight;
  el.style.left=obj.locations[locIndex][2];
  el.style.top=obj.locations[locIndex][3];
  el.style.width=LocationWidth+'px';
  el.style.height=LocationHeight+'px';
  if (obj.locations[locIndex][8]=="O") el.style.display='none';
  if (obj.locations[locIndex][13]=="false") el.style.display='none';
  if (obj.locations[locIndex][13]=="true")  el.style.display='';
}
function StyleArea(locIndex) {
  var el=document.getElementById('Location-' + locIndex );
  el.style.left=obj.locations[locIndex][6];
  el.style.top=obj.locations[locIndex][7];
  el.style.width=(obj.locations[locIndex][4]-obj.locations[locIndex][2])+'px';
  el.style.height=(obj.locations[locIndex][5]-obj.locations[locIndex][3])+'px';
}
function StyleMap() {
  var locationCell;
  var patientCell;
  var OtherIndex = obj.locations.length - 1
  if (ShowLocationAreas) {
    for (var i = 0; i < obj.locations.length; i++) {
      if (obj.locations[i][2]!=0) {
        StyleLocation(i);
      } else {
        var el=document.getElementById('Location-' + i );
        el.style.display="none";
      }
    }
  }
  //
  // Set patient block positions in their corresponding cells (rooms)...
  //
  for (var i = 0; i < obj.patients.length; i++) {
    patientCell=document.getElementById('Patient-' + i );
    FoundLocation=0
    LocationMatch=false;
    for(var j = 0; j < obj.locations.length; j++) {
      locationCell=document.getElementById('Location-' + j );
      if ( obj.patients[i][3] == obj.locations[j][1] ) {
        LocationMatch=true;
        if (obj.locations[j][7] == 10000) {
          locationCell.style.border = "1px red solid";
        } else {
          if ( obj.locations[j][8] != "O"&& obj.locations[j][13] != "false" ) {
            FoundLocation=1;
            var classCode=locationCell.className.replace(/.*LocationStyle /,"");
            var locStyle=getStyle(classCode);
            if (locStyle==undefined) locStyle=locationCell;
            tw=parseInt(locStyle.style.borderTopWidth.replace(/px/,"")); 
            tl=parseInt(locStyle.style.borderLeftWidth.replace(/px/,""));
            if (isNaN(tw)) tw=1;
            if (isNaN(tl)) tl=1;
            patientCell.style.top=obj.locations[j][7] + 1 + tw;
            patientCell.style.left=obj.locations[j][6] + 1 + tl; // +1 so doesn't overlap border
            // float patient blocks left-to-right, top-to-bottom within cell
            if ( (obj.locations[j][6] + PatientCellWidth + 2) <
                  obj.locations[j][4] ) {
              obj.locations[j][6] = obj.locations[j][6] + PatientCellWidth + 2;    // left
            } else {
              if ( (obj.locations[j][7] + PatientCellHeight + 2) < obj.locations[j][5] ) {
                // set left pos...
                if ( (obj.locations[j][6] + PatientCellWidth +  2) < obj.locations[j][4] ) {
                  obj.locations[j][6] = obj.locations[j][6] + PatientCellWidth + 2;
                } else {
                  obj.locations[j][6] = obj.locations[j][2];
                }
                obj.locations[j][7] = obj.locations[j][7] + PatientCellHeight +2;
              } else {
                obj.locations[j][7] = 10000;
              }
            }
          }
        }
      }
    }
    if (FoundLocation==0) {
      if (!LocationMatch) {
          patientCell.style.top=obj.locations[OtherIndex][7];
          patientCell.style.left=obj.locations[OtherIndex][6];
      } else {
        patientCell.style.top=5000;
        patientCell.style.left=5000;
      }
    }
  }
}
function StringSort(a,b) {
  return a[12] - b[12];
}
function TriageColor(triagecode) {
  switch (triagecode.replace(/ /g,"")) {
   case "1": return('Triage1'); break;
   case "2": return('Triage2'); break;
   case "3": return('Triage3'); break;
   case "4": return('Triage4'); break;
   case "5": return('Triage5'); break;
   case "6": return('Triage6'); break;
   default : return('Triage0'); break;
 }
}
function CurrentPatients() {
 var s=document.createElement("select")
 var x=document.createElement("option")
 x.value="../cgi-bin/emrweb01.pbl?reportno=1&template=32|content";
 s.appendChild(x)
 EMenuLinkTo(s);
}
function WaitingPatients() {
 var s=document.createElement("select")
 var x=document.createElement("option")
 x.value="../cgi-bin/emrweb01.pbl?reportno=1&template=10|content";
 s.appendChild(x)
 EMenuLinkTo(s);
}
function ExpectedPatients() {
 var s=document.createElement("select")
 var x=document.createElement("option")
 x.value="../cgi-bin/emrweb01.pbl?reportno=1&template=9|content";
 s.appendChild(x)
 EMenuLinkTo(s);
}
function UnseenPatients() {
 var s=document.createElement("select")
 var x=document.createElement("option")
 x.value="../cgi-bin/emrweb01.pbl?reportno=1&template=11|content";
 s.appendChild(x)
 EMenuLinkTo(s);
}
function EmergencyResults() {
 var s=document.createElement("select")
 var x=document.createElement("option")
 x.value="../cgi-bin/cliweb03.pbl?reportno=8&template=1|content";
 s.appendChild(x)
 EMenuLinkTo(s);
}
function Incomplete(opt) {
 var s=document.createElement("select")
 var x=document.createElement("option")
 if (opt==1) x.value="../cgi-bin/emrweb01.pbl?reportno=1&template=13|content";
 if (opt==2) x.value="../cgi-bin/emrweb01.pbl?reportno=1&template=14|content";
 if (opt==3) x.value="../cgi-bin/emrweb01.pbl?reportno=1&template=15|content";
 if (opt==4) x.value="../cgi-bin/emrweb01.pbl?reportno=1&template=42|content";
 s.appendChild(x)
 EMenuLinkTo(s);
}
function OtherLocations(code) {
 if(OtherLocations.arguments.length==0) {
   url = "../cgi-bin/emrweb01.pbl?reportno=01&template=012"  
 } else {
   if(code=='ZZZ') {
     url = "../cgi-bin/emrweb01.pbl?reportno=01&template=012"  
   } else {
     url = "../cgi-bin/emrweb01.pbl?reportno=01&template=012&filtlocn=" + code.replace(/ /g,"+")
   }
 }
 ShowContent();
 parent.content.location=url
}
function EMULocations() {
 url = "../cgi-bin/patweb93.pbl?reportno=01&template=011" 
 ShowContent();
 parent.content.location=url
}
function SelectPatient(admissno) {
 url = "../cgi-bin/emrweb02.pbl?reportno=01&template=100" +
       "&admissno=" + admissno.replace(/ /g,"+") 
 parent.menu.EmergencyMenu.innerHTML="";
 EmergencyFrameLink(url,1,1,1004,525)
}
function SelectDoctor(doctcode) {
  var url = "../cgi-bin/emrweb01.pbl?" +
            "reportno=1&template=16" +
            "&doctcode=" + doctcode.replace(/ /g,"+")
 parent.content.location=url
}
//============================================================
// Emergency Map Functions Drag & Drop etc
//============================================================
//------------------------------------------------------------
// Setup Drag & Drop Events Required
//------------------------------------------------------------
function StartMap() {
  if (!ReadOnlyView) {
    document.ondblclick  = dblclickEl;
    document.onclick     = clickEl;
    document.onmousedown = grabEl;
    document.onmousemove = moveEl;
    document.onmouseup   = dropEl;
    document.onkeydown   = OnKeyDown;
    activeEl             = document.getElementById('ImageLocation');
  } 
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
function grabEl(e) {        
  // get the event (cross browser method)
  e = e ? e : window.event;
  whichEl = e.srcElement;
  while (whichEl.id.indexOf("Patient") == -1) {
    whichEl = whichEl.parentElement;
    if (whichEl == null) { return; } 
  }
  if (whichEl != activeEl) {
    whichEl.style.zIndex = activeEl.style.zIndex + 100;
    activeEl = whichEl;        
  }
  originalLocId = null ;
  for(var i = 0; i < obj.locations.length; i++) {
    if ( obj.locations[i][8]!="N" &&
         obj.locations[i][13]=="true" &&
        (whichEl.offsetTop  >= obj.locations[i][3]  &&
         whichEl.offsetTop  <= obj.locations[i][5] )&&
        (whichEl.offsetLeft >= obj.locations[i][2]  &&
         whichEl.offsetLeft <= obj.locations[i][4])) {
       originalLocId = i ;
       break;
    }
  }
  originalLeft = whichEl.offsetLeft;
  originalTop  = whichEl.offsetTop ;
  whichEl.style.pixelLeft = whichEl.offsetLeft;
  whichEl.style.pixelTop = whichEl.offsetTop;
  currentX = (e.clientX + document.body.scrollLeft);
  currentY = (e.clientY + document.body.scrollTop);

  if (e.stopPropagation) {
    e.stopPropagation();
    e.preventDefault();
  } else {
    e.cancelBubble = true;
    e.returnValue = false;
  }
}
function moveEl(e) { 
  e = e ? e : window.event;
  if (whichEl == null) { return };
  window.scroll(0,0)
//  whichEl.style.pixelLeft=event.clientX + document.body.scrollLeft;
//  whichEl.style.pixelTop=event.clientY + document.body.scrollTop;
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
function dropEl(e) {        
  e = e ? e : window.event;
  var DropFail=true;
  if (whichEl == null) { return };
  if (originalLocId == null) { return };
  for(var i = 0; i < obj.locations.length; i++) {
    if ( obj.locations[i][8]!="N" &&
         obj.locations[i][13]=="true" &&
        (whichEl.style.pixelTop  > obj.locations[i][3] &&
         whichEl.style.pixelTop  < obj.locations[i][5] )&&
        (whichEl.style.pixelLeft > obj.locations[i][2] &&
         whichEl.style.pixelLeft < obj.locations[i][4])) {
      if  ( i != originalLocId ) {
        NewLocation=obj.locations[i][1];
        NewLocationName=obj.locations[i][0];
        LocationOk=true;
        if (obj.locations[i][8] == undefined) {
          LocationOk=CheckPatientLocation(NewLocation) 
        }
        if (LocationOk) {
          whichEl.style.pixelTop = obj.locations[i][7];
          whichEl.style.pixelLeft = obj.locations[i][6];
          PatientNoArray = whichEl.id.split("-");
          PatientNo = PatientNoArray[1];
          obj.patients[PatientNo][3]=NewLocation
          updateLocation(obj.patients[PatientNo][1],NewLocation,"0"); 
          DropFail=false;
          break;
        } 
      }
    }
  }
// we want to cancel click action since this is a drop cancellation
// (i.e. patient dropped back into original ward cell)
  if (whichEl.style.pixelTop != originalTop) {
    cancelClickAction = true;  
  }
  else {
    cancelClickAction = false;
  }

  if (DropFail) {
    whichEl.style.pixelTop = originalTop;
    whichEl.style.pixelLeft = originalLeft;
  }
  DropEl = whichEl;
  whichEl = null;    

  if (e.stopPropagation) {
    e.stopPropagation();
    e.preventDefault();
  }
  else {
    e.cancelBubble = true;
    e.returnValue = false;
  }
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
        obj.patients[PatientNo][3]=obj.locations[originalLocId][1]
        updateLocation(obj.patients[PatientNo][1],
                       obj.locations[originalLocId][1],"1")
      return SwapFlag }}}

// removed alert box
//  MoveFlag=confirm("New Location " + NewLocationName) 
// set to allways be YES now !!! 
  MoveFlag=1 
  return MoveFlag 
}
function otherLocation(admissno,locacode,username,password) {
  UpdateLocation.action='emrweb01.pbl'
  UpdateLocation.reportno.value='3'
  UpdateLocation.template.value='1'
  UpdateLocation.nextpage.value='1'
  UpdateLocation.admissno.value=admissno
  UpdateLocation.updateky.value=obj.patients[PatientNo][15]
  OtherLocation.style.display="";
}
//------------------------------------------------------------
// Set a flag for controlling fireing of javascript             
//------------------------------------------------------------
function waitTimeOut(sglClick) {
  defPatientLink.waiting.value=sglClick;
}

//----------------------------------------------------------------------
// Function : Refresh Page
//----------------------------------------------------------------------
function PageRefresh() {
   if (!refreshPage) return;
   el=top.document.getElementById("navbar")
   if (el.style.display=="none") {
     location.reload();
   }
}
//----------------------------------------------------------------------
// Function : Open a Dynamic Frame to a URL
//----------------------------------------------------------------------
function EmergencyFrameLink(LinkToUrl,FrameTop,FrameLeft,FrameWidth,FrameHeight){ 
  globalLinkType=1;
  globalLinkUrl=LinkToUrl;

  var n=top.document.getElementById("navbar");
  var s=top.document.getElementById("search");

  n.style.display="";
  n.style.border="1px solid grey";
  n.style.top="5%";
  n.style.left="5%";
  n.style.width="90%";
  n.style.margin="0px";

  s.src="../cgi-bin/"+LinkToUrl;
  s.style.display="";
  s.style.left="5%";
  s.style.marginTop="21px";
  s.style.width="90%";
  s.style.top="5%";
  s.height="90%";
  s.style.position="absolute";
  s.style.border="1px solid grey";
}
//------------------------------------------------------------
// Click on a Patient to Display Page in Content Frame
//------------------------------------------------------------
function clickEl(e) {
  e = e ? e : window.event;
  ClickEl = e.srcElement;
  while (ClickEl.id.indexOf("Patient") == -1) {
    ClickEl = ClickEl.parentElement;
    if (ClickEl == null) { return; } 
  }
  
  if(ClickEl.id.indexOf("Patient-") == -1) { return;}

  PatientNoArray = ClickEl.id.split("-");
  PatientNo = PatientNoArray[1];
  whichEl = null;

  dblClicked = false;
  alreadyClicked = true;
  alreadyClickedTimeout = setTimeout(function () {
    ClickAction();
  }, 300);
}
//------------------------------------------------------------
// Double Click on a Patient to Display Page in EmergencyFrame
//------------------------------------------------------------
function dblclickEl(e) {
  e = e ? e : window.event;
  dblClickEl = e.srcElement;
  while (dblClickEl.id.indexOf("Patient") == -1) {
    dblClickEl = dblClickEl.parentElement;
    if (dblClickEl == null) { return; } 
  }
  dblPatientNoArray = dblClickEl.id.split("-");
  dblPatientNo = dblPatientNoArray[1];
  whichEl = null;
  dblClicked = true;
  alreadyClicked = true;
}
function ClickAction() {
  if (alreadyClicked) {
    alreadyClicked = false;  // reset
    clearTimeout(alreadyClickedTimeout);
    PatientNo = PatientNoArray[1];
    if (!cancelClickAction) {
      sglClickPatient(PatientNo);  // single-click; not a patient move
      if (dblClicked) {
        dblClickPatient();
      }
    }
  } else {
    alreadyClicked = true;
  }
}
function dblClickPatient() {
  if (isWhitespace(dClickTemplate)) return;
  var url = "../cgi-bin/emrweb02.pbl?" +
            "reportno=1&template=" + dClickTemplate +
            "&urnumber=" + obj.patients[dblPatientNo][0].replace(/ /g,"+") +
            "&admissno=" + obj.patients[dblPatientNo][1].replace(/ /g,"+")
  EmergencyFrameLink(url,1,1,1008,744);
}
function sglClickPatient(PatientNo) {
  var template;
  if(!isWhitespace(obj.patients[PatientNo][4])) {
    template=sClickTemplate;  /* Triage Completed Show Single Click Page*/
  } else {
    template=triageTemplate;  /* Show Triage Page */
  }
  var url="../cgi-bin/emrweb02.pbl?reportno=1&template=" + template +
                 "&urnumber=" + obj.patients[PatientNo][0].replace(/ /g,"+") +
                 "&admissno=" + obj.patients[PatientNo][1].replace(/ /g,"+")
  globalLinkType=0;
  globalLinkUrl=url;
  ShowContent();
  top.content.location=url;
}
function ShowPatientDetails(PatientNo) {
  if(!isWhitespace(obj.patients[PatientNo][4])) {
    PageLocation="?reportno=1&template=" + triageTemplate +
                 "&urnumber=" + obj.patients[PatientNo][0].replace(/ /g,"+") +
                 "&admissno=" + obj.patients[PatientNo][1].replace(/ /g,"+")
  } else {
     PageLocation="?reportno=1&template=" + sClickTemplate
                  "&urnumber=" + obj.patients[PatientNo][0].replace(/ /g,"+") +
                  "&admissno=" + obj.patients[PatientNo][1].replace(/ /g,"+")
  }
  globalLinkType=0;
  globalLinkUrl="../cgi-bin/emrweb02.pbl" + PageLocation
  ShowContent();
  top.content.location="../cgi-bin/emrweb02.pbl" + PageLocation
}

//------------------------------------------------------------
// Update Location - To Be Changed to use Remote scripting
//------------------------------------------------------------
function updateLocation(admissno,locacode,swapemr) {
  var serverURL   = "../cgi-bin/emrweb02.pbl?reportno=3" +
                    "&admissno=" + admissno +
                    "&locacode=" + locacode +
                    "&regsflag=" + swapemr +
                    "&updttype=0"
  var returnValue = RSExecute(serverURL);
  top.location.reload();
}
//============================================================
// Grab when MouseDown Event
//============================================================
function getStyle(className) {
  className="."+className.toLowerCase();
  for (var i=document.styleSheets.length-1;i>0;i--) {
    var classes = document.styleSheets[i].rules || document.styleSheets[i].cssRules;
    for (var x = 0; x < classes.length; x++) {
        if (classes[x].selectorText) {
          if (classes[x].selectorText.toLowerCase() == className) {
              return classes[x];
          }
        }
    }
  }
}
//
// Change View Type
//
function SelectMapViewType(el) {
  var ViewType=el.options[el.selectedIndex].value;
  top.SetCookie("EmergencyMapViewType",ViewType);
  top.location.reload();
}
//
// West Australian Patient Cell Configuration
//
function getPatientCell01(i) {
  var PatientMap="";
  PatientMap+='<div id=Patient-' + i + ' class=PatientStyle ' +
              ' style="clip: rect(0px '+PatientCellWidth+'px '+PatientCellHeight+'px 0px);'+ 
              'width:'+PatientCellWidth+'px;height:'+PatientCellHeight+'px;" '+ 
              ' title="--------------------------------------------------\n'+
              'Patient\t: '+obj.patients[i][2]+'\t\n' +
              'Room\t:  '+obj.patients[i][3]+'\n' +
              'Triage\t: '+obj.patients[i][4]+'\n' +
              'UR\t: '+obj.patients[i][0]+'\n' +
              'Sex\t: '+obj.patients[i][6]+'\n' +
              'Age\t: '+obj.patients[i][7]+'\n' +
              'Doctor\t: '+obj.patients[i][37]+'\n' +
             obj.patients[i][46].replace(/\t/g,"")+'\n' 
  if (!isWhitespace(obj.patients[i][31])) PatientMap+=obj.patients[i][31]+'\n' 
  if (!isWhitespace(obj.patients[i][32])) PatientMap+=obj.patients[i][32]+'\n' 
  if (!isWhitespace(obj.patients[i][33])) PatientMap+=obj.patients[i][33]+'\n' 
  if (!isWhitespace(obj.patients[i][34])) PatientMap+=obj.patients[i][34]+'\n' 
  if (!isWhitespace(obj.patients[i][35])) PatientMap+=obj.patients[i][35]+'\n' 
  if (!isWhitespace(obj.patients[i][36])) PatientMap+=obj.patients[i][36]+'\n' 
  PatientMap+='\n--------------------------------------------------">' +
              '<table border=0 width=' + PatientCellWidth +
              ' height=' + PatientCellHeight + ' cellpadding=0' +
              ' style="table-layout:fixed;" cellspacing=0 >' +
              '<tr style="height:'+PatientLineHeight+'px" class='+
              TriageColor(obj.patients[i][4]) + ' ' +
              '><td style="text-align:center;width:22px" class=cellPatientLocName>' +
              getLocationAlias(obj.patients[i][3]) + '&nbsp;</td>';
  if (obj.patients[i][15] == "1") {
    PatientMap+='<td style="width:73px;background-color:white"><span class=cellPatientNameTr1>' + 
               obj.patients[i][2].replace(/ *$/,"").replace(/ /g,"_") + '</span></td>';
  } else {
    PatientMap+='<td style="width:73px;"><span class=cellPatientName>' + 
               obj.patients[i][2].replace(/ *$/,"").replace(/ /g,"_") + '</span></td>';
  }
  if (obj.patients[i][14] == "1") {
    PatientMap+='<td style="text-align:center;width:25px;">' + obj.patients[i][6] + 
              obj.patients[i][7] + '&nbsp;</td>' +
             '<td style="text-align:center;width:30px"><span class=EMSadFace></span></td>';
  } else if (obj.patients[i][14] == "2"){
   PatientMap+='<td style="text-align:center;width:25px;">' + obj.patients[i][6] +
             obj.patients[i][7] + '&nbsp;</td>' +
             '<td style="text-align:center;width:30px"><span class=EMSadFaceLos></span></td>';
  } else {
    PatientMap+='<td style="text-align:center;width:25px">' + obj.patients[i][6] + '&nbsp;</td>' +
                '<td style="text-align:center;width:30px;">' + obj.patients[i][7] + '&nbsp;</td>';
  }

  PatientMap+='<td style="text-align:center;width:25px;">' + obj.patients[i][5].substr(8,5) + 
              '&nbsp;</td></tr>' +
              '<tr style="height:'+PatientLineHeight+'px;background-color:#ccc"><td colspan=2>' 

  if (obj.patients[i][13].substr(0,1)=='1') {
    PatientMap+='<span class=EMAlert></span>'; 
  }
  if (obj.patients[i][13].substr(0,1)=='2') {
    PatientMap+='<span class=EMAlertBlack></span>'; 
  }
  if (obj.patients[i][13].substr(0,1)=='3') {
    PatientMap+='<span class=EMAlertDelete></span>'; 
  }
  if (obj.patients[i][13].substr(1,1)=='1') {
    PatientMap+='<span class=EMAlertResult></span>'; 
  }
  PatientMap+=obj.patients[i][22].substr(0,23)+'&nbsp;</td>';

  PatientMap+='<td>';
  if (obj.patients[i][45].substr(0,1)=="R") {
    PatientMap+='<span id="request01" class="Red">' +
                obj.patients[i][45].substr(1,3).replace(/\s/g,"") +
                '</span>'
  } else if (obj.patients[i][45].substr(0,1)=="G") {
    PatientMap+='<span id="request01" class="Green">' +
                obj.patients[i][45].substr(1,3).replace(/\s/g,"") +
                '</span>'
  }  
  PatientMap+='&nbsp;</td>';

  if  (obj.patients[i][12]=="000000000") {
    PatientMap+='<td>' + obj.patients[i][41].replace(/\s/g,"") +'&nbsp;</td>';
  } else {
    if (obj.patients[i][PatientWaitIndex].slice(-4)=='Next') {
      PatientMap+='<td class=NextPatientCell>' + obj.patients[i][PatientWaitIndex] +'</td>';
    } else {
      PatientMap+='<td class=WaitOrderCell>' + obj.patients[i][PatientWaitIndex] +'</td>';
    }
    WaitPosition++;
  }
  PatientMap+='<td>' + obj.patients[i][42].replace(/\s/g,"") +
              '&nbsp;</td></tr>' +
              '<tr  style="height:'+PatientLineHeight+
              'px" bgcolor=#cccccc><td colspan=2>' 
  if(obj.patients[i][18].substr(0,1)=="1") {
    PatientMap+='<span id="clinic01" class="Black">XRY</span>'
  } else if(obj.patients[i][18].substr(0,1)=="2") {
    PatientMap+='<span id="clinic01" class="Green">XRY</span>'
  }
  if(obj.patients[i][18].substr(1,1)=="1") {
    PatientMap+='<span id="clinic01" class="Black">CT</span>'
  } else if(obj.patients[i][18].substr(1,1)=="2") {
    PatientMap+='<span id="clinic01" class="Green">CT</span>'
  }
  if(obj.patients[i][18].substr(2,1)=="1") {
    PatientMap+='<span id="clinic01" class="Black">US</span>'
  } else if(obj.patients[i][18].substr(2,1)=="2") {
    PatientMap+='<span id="clinic01" class="Green">US</span>'
  }
  if(obj.patients[i][18].substr(3,1)=="1") {
    PatientMap+='<span id="clinic01" class="Black">MRI</span>'
  } else if(obj.patients[i][18].substr(3,1)=="2") {
    PatientMap+='<span id="clinic01" class="Green">MRI</span>'
  }
  if(obj.patients[i][18].substr(4,1)=="1") {
    PatientMap+='<span id="clinic01" class="Black">NM</span>'
  } else if(obj.patients[i][18].substr(4,1)=="2") {
    PatientMap+='<span id="clinic01" class="Green">NM</span>'
  }
  if(obj.patients[i][18].substr(8,1)=="1") {
    PatientMap+='<span id="clinic01" class="Black">PTH</span>'
  } else if(obj.patients[i][18].substr(8,1)=="3" ||
            obj.patients[i][18].substr(8,1)=='2' ) {
    PatientMap+='<span id="clinic01" class="Green">PTH</span>'
  }
  PatientMap+='&nbsp;</td>' 
  PatientMap+='<td>' + obj.patients[i][19].replace(/\s/g,"") + 
              '&nbsp;</td><td>' + obj.patients[i][21] + '&nbsp;</td>';
// discharge time emvidtim
  if(!isWhitespace(obj.patients[i][43])) {
    PatientMap+='<td>' + obj.patients[i][43].substr(0,5) + '&nbsp;</td>' 
// or exp discharge time emviut01
    } else if (!isWhitespace(obj.patients[i][20])) {
      PatientMap+='<td>' + obj.patients[i][20].substr(0,5) + '&nbsp;</td>' 
    } else {
// or duration in hours:mins from arrival
      PatientMap+='<td>' + obj.patients[i][44] + '&nbsp;</td>' 
    }
  PatientMap+='</tr></table></div>';
  return PatientMap;
}
//
// Bay of Plenty Patient Cell Configuration
//
function getPatientCell02(i) {
  var PatientMap="";
  PatientMap+='<div id=Patient-' + i + ' class=PatientStyle ' +
              ' style="clip: rect(0px '+PatientCellWidth+'px '+PatientCellHeight+'px 0px);'+ 
              'width:'+PatientCellWidth+'px;height:'+PatientCellHeight+'px;" '+ 
              ' title="--------------------------------------------------\n'+
              'Patient\t: '+obj.patients[i][2]+'\t\n' +
              'Room\t:  '+obj.patients[i][3]+'\n' +
              'Triage\t: '+obj.patients[i][4]+'\n' +
              'UR\t: '+obj.patients[i][0]+'\n' +
              'Sex\t: '+obj.patients[i][6]+'\n' +
              'Age\t: '+obj.patients[i][7]+'\n' +
              'Doctor\t: '+obj.patients[i][37]+'\n' +
              'Complaint: \n'+obj.patients[i][22]+'\n' 
  if (!isWhitespace(obj.patients[i][31])) PatientMap+=obj.patients[i][31]+'\n' 
  if (!isWhitespace(obj.patients[i][32])) PatientMap+=obj.patients[i][32]+'\n' 
  if (!isWhitespace(obj.patients[i][33])) PatientMap+=obj.patients[i][33]+'\n' 
  if (!isWhitespace(obj.patients[i][34])) PatientMap+=obj.patients[i][34]+'\n' 
  if (!isWhitespace(obj.patients[i][35])) PatientMap+=obj.patients[i][35]+'\n' 
  if (!isWhitespace(obj.patients[i][36])) PatientMap+=obj.patients[i][36]+'\n' 
  PatientMap+='\n--------------------------------------------------">' +
              '<table border=0 width=' + PatientCellWidth +
              ' height=' + PatientCellHeight + ' cellpadding=1' +
              ' style="table-layout:fixed;" cellspacing=0 >' +
              '<tr style="height:'+PatientLineHeight+'px" class='+
              TriageColor(obj.patients[i][4]) + ' ' +
              '><td style="text-align:center;width:22px" class=cellPatientLocName>' +
              getLocationAlias(obj.patients[i][3]) + '&nbsp;</td>';
  if (obj.patients[i][15] == "1") {
    PatientMap+='<td style="width:73px;background-color:white"><span class=cellPatientNameTr1>' + 
               obj.patients[i][2].replace(/ *$/,"").replace(/ /g,"_") + '</span></td>';
  } else {
    PatientMap+='<td style="width:73px;"><span class=cellPatientName>' + 
               obj.patients[i][2].replace(/ *$/,"").replace(/ /g,"_") + '</span></td>';
  }
  if (obj.patients[i][14] == "1") {
    PatientMap+='<td style="text-align:center;width:25px;">' + obj.patients[i][6] + 
              obj.patients[i][7] + '&nbsp;</td>' +
             '<td style="text-align:center;width:30px"><span class=EMSadFace></span></td>';
  } else if (obj.patients[i][14] == "2"){
    PatientMap+='<td style="text-align:center;width:25px;">' + obj.patients[i][6] +
             obj.patients[i][7] + '&nbsp;</td>' +
             '<td style="text-align:center;width:30px"><span class=EMSadFaceLos></span></td>';
  } else {
    PatientMap+='<td style="text-align:center;width:25px">' + obj.patients[i][6] + '&nbsp;</td>' +
                '<td style="text-align:center;width:30px;">' + obj.patients[i][7] + '&nbsp;</td>';
  }
  PatientMap+='<td style="text-align:center;width:25px;">' + obj.patients[i][5].substr(8,5) +
              '&nbsp;</td></tr>' +
              '<tr style="height:'+PatientLineHeight+'px;background-color=#ccc"><td colspan=2>'+
               obj.patients[i][8].substr(0,10);

  if (obj.patients[i][13].substr(0,1)=='1') {
    PatientMap+='<span class=EMAlert></span>';
  }
  if (obj.patients[i][13].substr(0,1)=='2') {
    PatientMap+='<span class=EMAlertBlack></span>';
  }
  if (obj.patients[i][13].substr(0,1)=='3') {
    PatientMap+='<span class=EMAlertDelete></span>';
  }
  if (obj.patients[i][13].substr(1,1)=='1') {
    PatientMap+='<span class=EMAlertResult></span>';
  }
  PatientMap+='&nbsp;</td>';
  if (obj.patients[i][9].substr(0,1)=="*") {
    PatientMap+='<td style="font-weight:bold;color:red">' + obj.patients[i][9].replace(/\s/g,"") +
                '</td>';
  } else {
    PatientMap+='<td>' + obj.patients[i][9].replace(/\s/g,"") +'&nbsp;</td>';
  }
  if  (obj.patients[i][12]=="000000000") {
    PatientMap+='<td>' + obj.patients[i][37].replace(/\s/g,"") +'</td>'; 
  } else {
    if (obj.patients[i][PatientWaitIndex].slice(-4)=='Next') {
      PatientMap+='<td style="background-color:#ff0000">'+
                   obj.patients[i][PatientWaitIndex]+'</td>';
    } else {
      PatientMap+='<td style="background-color=black;color:white;">w-' +
                    obj.patients[i][PatientWaitIndex] +'</font></td>';
    }
    WaitPosition++;  
  }
  PatientMap+='<td>' + obj.patients[i][11].replace(/\s/g,"") +'&nbsp;</td></tr>' +
              '<tr  style="background-color:#ccc;height:'+PatientLineHeight+
              'px" bgcolor=#cccccc><td colspan=2 class=emviclasInd'+obj.patients[i][30]+'>' +
                 obj.patients[i][29].replace(/\s/g,"") +'&nbsp;</td>'
  if (obj.patients[i][28]=='G') {
    PatientMap+='<td class=emvisrce>GP</td><td>&nbsp;</td>';
  } else {
    if (obj.patients[i][28]=='S') {
      PatientMap+='<td class=emvisrce>Self</td><td>&nbsp;</td>';
    } else {
      PatientMap+='<td class=emvisrce>&nbsp;</td><td>&nbsp;</td>';
    }
  }
  waitHours=obj.patients[i][44].replace(/:.*/,"").replace(/ /g,"");
  if (waitHours.length>1)waitHours='9';
  PatientMap+='<td class=emviwaitInd'+waitHours+'>'+obj.patients[i][44]+'</td>' +
              '</tr></table></div>';
  return PatientMap;
}
/*--------------------------------------------------------------------------------*/
/* Ballarat Health Services
/*--------------------------------------------------------------------------------*/
function getPatientCell03(i) {
  var PatientMap="";
  PatientMap+='<div id=Patient-' + i + ' class=PatientStyle ' +
              ' style="clip: rect(0px '+PatientCellWidth+'px '+PatientCellHeight+'px 0px);'+ 
              'width:'+PatientCellWidth+'px;height:'+PatientCellHeight+'px;" '+ 
              ' title="--------------------------------------------------\n'+
              'Patient\t: '+obj.patients[i][2]+'\t\n' +
              'Room\t:  '+obj.patients[i][3]+'\n' +
              'Triage\t: '+obj.patients[i][4]+'\n' +
              'UR\t: '+obj.patients[i][0]+'\n' +
              'Sex\t: '+obj.patients[i][6]+'\n' +
              'Age\t: '+obj.patients[i][7]+'\n' +
              'Doctor\t: '+obj.patients[i][37]+'\n' +
              'Complaint: \n'+obj.patients[i][22]+'\n' 
  if (!isWhitespace(obj.patients[i][31])) PatientMap+=obj.patients[i][31]+'\n' 
  if (!isWhitespace(obj.patients[i][32])) PatientMap+=obj.patients[i][32]+'\n' 
  if (!isWhitespace(obj.patients[i][33])) PatientMap+=obj.patients[i][33]+'\n' 
  if (!isWhitespace(obj.patients[i][34])) PatientMap+=obj.patients[i][34]+'\n' 
  if (!isWhitespace(obj.patients[i][35])) PatientMap+=obj.patients[i][35]+'\n' 
  if (!isWhitespace(obj.patients[i][36])) PatientMap+=obj.patients[i][36]+'\n' 
  PatientMap+='\n--------------------------------------------------">' +
              '<table border=0 width=' + PatientCellWidth +
              ' height=' + PatientCellHeight + ' cellpadding=1' +
              ' style="table-layout:fixed;background-color:white;" cellspacing=0 >' +
              '<tr style="height:'+PatientLineHeight+'px" class='+
              TriageColor(obj.patients[i][4]) + ' ' +
              '><td style="text-align:center;width:22px" class=cellPatientLocName>' +
              getLocationAlias(obj.patients[i][3]) + '&nbsp;</td>';
  if (obj.patients[i][15] == "1") {
    PatientMap+='<td style="width:75px;background-color:white;color:red">'+
                '<span class=cellPatientNameTr1>' + 
                obj.patients[i][2].replace(/ *$/,"").replace(/ /g,"_") + '</span></td>';
  } else {
    PatientMap+='<td style="width:75px;"><span class=cellPatientName>' + 
               obj.patients[i][2].replace(/ *$/,"").replace(/ /g,"_") + '</span></td>';
  }
  if (obj.patients[i][14] == "1") {
    PatientMap+='<td style="text-align:center;width:25px;">' + obj.patients[i][6] + 
              obj.patients[i][7] + '&nbsp;</td>' +
             '<td style="text-align:center;width:30px"><span class=EMSadFace></span></td>';
  } else if (obj.patients[i][14] == "2"){
    PatientMap+='<td style="text-align:center;width:25px;">' + obj.patients[i][6] +
             obj.patients[i][7] + '&nbsp;</td>' +
             '<td style="text-align:center;width:30px"><span class=EMSadFaceLos></span></td>';
  } else {
    PatientMap+='<td style="text-align:center;width:25px">' + obj.patients[i][6] + '&nbsp;</td>' +
                '<td style="text-align:center;width:30px;">' + obj.patients[i][7] + '&nbsp;</td>';
  }
  PatientMap+='<td style="text-align:center;width:25px;">' + obj.patients[i][5].substr(8,5) +
              '&nbsp;</td></tr>' +
              '<tr style="height:'+PatientLineHeight+'px;background-color=#ccc"><td colspan=2>'+
               obj.patients[i][8].substr(0,10);

  if (obj.patients[i][13].substr(0,1)=='1') {
    PatientMap+='<span class=EMAlert></span>';
  }
  if (obj.patients[i][13].substr(0,1)=='2') {
    PatientMap+='<span class=EMAlertBlack></span>';
  }
  if (obj.patients[i][13].substr(0,1)=='3') {
    PatientMap+='<span class=EMAlertDelete></span>';
  }
  if (obj.patients[i][13].substr(1,1)=='1') {
    PatientMap+='<span class=EMAlertResult></span>';
  }
  PatientMap+='&nbsp;</td>';

  if (obj.patients[i][25].substr(0,1)=="B") {
    PatientMap+='<td style="color:black;">' +
                 obj.patients[i][25].substr(1,3).replace(/\s/g,"") +
                '</td>';
  } else if (obj.patients[i][25].substr(0,1)=="R") {
    PatientMap+='<td style="color:red;">' +
                 obj.patients[i][25].substr(1,3).replace(/\s/g,"") +
                '</td>'
  } else if (obj.patients[i][25].substr(0,1)=="G") {
    PatientMap+='<td style="color:green;">' +
                 obj.patients[i][25].substr(1,3).replace(/\s/g,"") +
                '</td>'
  } else {
    PatientMap+='<td>' + obj.patients[i][24].replace(/\s/g,"") + '&nbsp;</td>'
  }
  if  (obj.patients[i][12]=="000000000") {
    PatientMap+='<td>' + obj.patients[i][37].replace(/\s/g,"") +'</td>'; 
  } else {
    if (obj.patients[i][PatientWaitIndex].slice(-4)=='Next') {
      PatientMap+='<td style="background-color:red;color:white">'+
                   obj.patients[i][PatientWaitIndex]+'</td>';
    } else {
      PatientMap+='<td style="background-color=black;color:white;">w-' +
                    obj.patients[i][PatientWaitIndex] +'</font></td>';
    }
    WaitPosition++;  
  }
  PatientMap+='<td>' + obj.patients[i][11].replace(/\s/g,"") +'&nbsp;</td></tr>' +
              '</tr></table></div>';
  return PatientMap;
}
function getPatientCell04(i) {
  var PatientMap=""; 
  PatientMap+='<div id=Patient-' + i + ' class=PatientStyle ' +
              ' style="clip: rect(0px '+PatientCellWidth+'px '+PatientCellHeight+'px 0px);'+ 
              'width:'+PatientCellWidth+'px;height:'+PatientCellHeight+'px;">' +
              '<span style="height:'+PatientCellHeight+'px;'+
              'width:'+PatientCellWidth+'px;'+
              'background-color:#ccc;text-align:center;vertical-align:middle;'+
              '">Patient Container 04<br>' + obj.patients[i][2] +'</span></div>';
  return PatientMap;
}
function getPatientCell05(i) {
  var PatientMap=""; 
  PatientMap+='<div id=Patient-' + i + ' class=PatientStyle ' +
              ' style="clip: rect(0px '+PatientCellWidth+'px '+PatientCellHeight+'px 0px);'+ 
              'width:'+PatientCellWidth+'px;height:'+PatientCellHeight+'px;">' +
              '<span style="height:'+PatientCellHeight+'px;'+
              'width:'+PatientCellWidth+'px;'+
              'background-color:#ccc;text-align:center;vertical-align:middle;'+
              '">Patient Container 05<br>' + obj.patients[i][2] +'</span></div>';
  return PatientMap;
}
/*---------------------------------------------------------------------------*/
/* Healthscope               
/*---------------------------------------------------------------------------*/
function getPatientCell06(i) {
  var PatientMap=""; 
  var PatientMap="";
  PatientMap+='<div id=Patient-' + i + ' class=PatientStyle ' +
              ' style="clip: rect(0px '+PatientCellWidth+'px ' +
              PatientCellHeight+'px 0px);'+
              'width:'+PatientCellWidth+'px;height:'+PatientCellHeight+'px;" '+
              ' title="--------------------------------------------------\n'+
              'Patient\t: '+obj.patients[i][2]+'\t\n' +
              'Room\t:  '+obj.patients[i][40]+'\n' +
              'Triage\t: '+obj.patients[i][4]+'\n' +
              'UR\t: '+obj.patients[i][0]+'\n' +
              'Sex\t: '+obj.patients[i][6]+'\n' +
              'Age\t: '+obj.patients[i][7]+'\n' +
              'Doctor\t: '+obj.patients[i][37]+'\n' +
              'Complaint: \n'+obj.patients[i][22]+'\n'
  if (!isWhitespace(obj.patients[i][31])) PatientMap+=obj.patients[i][31]+'\n'
  if (!isWhitespace(obj.patients[i][32])) PatientMap+=obj.patients[i][32]+'\n'
  if (!isWhitespace(obj.patients[i][33])) PatientMap+=obj.patients[i][33]+'\n'
  if (!isWhitespace(obj.patients[i][34])) PatientMap+=obj.patients[i][34]+'\n'
  if (!isWhitespace(obj.patients[i][35])) PatientMap+=obj.patients[i][35]+'\n'
  if (!isWhitespace(obj.patients[i][36])) PatientMap+=obj.patients[i][36]+'\n'
  PatientMap+='\n--------------------------------------------------">' +
              '<table border=0 width=' + PatientCellWidth +
              ' height=' + PatientCellHeight + ' cellpadding=1' +
              ' style="table-layout:fixed;background-color:white;"' +
              ' cellspacing=0 >';
//
// 1st patient container line
//
  PatientMap+='<tr style="height:'+PatientLineHeight+'px" class='+
              TriageColor(obj.patients[i][4]) + ' ' +
              '><td style="text-align:center;width:20px"'  +
              ' class=cellPatientLocName>' +
              getLocationAlias(obj.patients[i][3]) + '&nbsp;</td>';
  if (obj.patients[i][15] == "1") {
    PatientMap+='<td style="width:75px;background-color:white;color:red">'+
                '<span class=cellPatientNameTr1>' +
                obj.patients[i][2].replace(/ *$/,"").replace(/ /g,"_") +
                '</span></td>';
  } else {
    PatientMap+='<td style="width:75px;"><span class=cellPatientName>' +
                obj.patients[i][2].replace(/ *$/,"").replace(/ /g,"_") + 
                '</span></td>';
  }
  PatientMap+='<td width=30 align=center>' + obj.patients[i][6] +
              ',' + obj.patients[i][7] + '&nbsp;</td>' +
              '<td width=35>' + obj.patients[i][24].replace(/\s/g,"") + 
              '&nbsp;</td>' +
              '<td style="text-align:center;width:30px;">' +
              obj.patients[i][5].substr(8,5) +
              '&nbsp;</td></tr>';
//
// 2nd patient container line
//
  PatientMap+='<tr style="height:'+PatientLineHeight +
              'px;background-color=#ccc"><td colspan=2>';
  var disAlrtInd = (obj.patients[i][49] != undefined)? 
                    obj.patients[i][49].substr(0,1) : '';
  if (disAlrtInd == '0' || disAlrtInd == '2') {
    // Medical, Micro & Risk alert icons...
    var PatientIND = obj.patients[i][39];
    if (PatientIND.substr(1,1)=="1") {
      // Med Alerts
      PatientMap+='<img src=../images/AlertIconM.gif class=TinyIcon>';
    }
    if (PatientIND.substr(2,1)=="1") {
      // Micro Alerts
      PatientMap+='<img src=../images/AlertIconB.gif class=TinyIcon>';
    }
    if (PatientIND.substr(3,1)=="1") {
      // Risk Alerts
      PatientMap+='<img src=../images/AlertIconR.gif class=TinyIcon>';
    }
    var AlertInd = obj.patients[i][13].substr(0,1);
    if (AlertInd == '1') {
      // Alerts present
      PatientMap+='<img src=../images/AlertIconSm.gif class=TinyIcon>';
    }
    else if (AlertInd == '2') {
      // Security Alerts
      PatientMap+='<img src=../images/AlertIconSmBlack.gif class=TinyIcon>';
    }
    else if (AlertInd == '3') {
      // Deleted Alerts
      PatientMap+='<img src=../images/AlertIconSmDelete.gif class=TinyIcon>';
    }
    else if (AlertInd != ' ') {
      // other Alert icons (PTMXSIN1)
      PatientMap+='<img src=../images/AlertIcon' +
                  obj.patients[i][13].substr(0,1) + '.gif class=TinyIcon>';
    }
  }
  // Disability Alert icons...
  if (disAlrtInd == '1' || disAlrtInd == '2') {
    PatientMap+='<img src=../images/AlertIconDIS.gif class=TinyIcon>';
  }
  if (obj.patients[i][13].substr(1,1)=='1') {
    PatientMap+='<img src=../images/ResultIconSm.gif class=TinyIcon>';
  }
  if (obj.patients[i][22].substr(0,3)=="<b>") {
    PatientMap+=obj.patients[i][22].substr(0,21);
  } else {
    PatientMap+=obj.patients[i][22].substr(0,18);
  }
  PatientMap+='&nbsp;</td>';
  if (obj.patients[i][25].substr(0,1)=="B") {
    PatientMap+='<td><font color=black>' +
              obj.patients[i][25].substr(1,3).replace(/\s/g,"") +
             '</td>';
  } else if (obj.patients[i][25].substr(0,1)=="R") {
    PatientMap+='<td><font color=red>' +
              obj.patients[i][25].substr(1,3).replace(/\s/g,"") +
             '</td>';
  } else if (obj.patients[i][25].substr(0,1)=="G") {
    PatientMap+='<td><font color=green>' +
              obj.patients[i][25].substr(1,3).replace(/\s/g,"") +
             '</td>';
  } else {
    PatientMap+='<td>&nbsp;</td>';
  }
  if  (obj.patients[i][12]=="000000000") {
     PatientMap+='<td>' + obj.patients[i][10].replace(/\s/g,"") +'</td>'; }
  else {
    if (WaitPosition==0) {
       WaitPosition++;
       PatientMap+='<td bgcolor=#ff0000>Next</font></td>';
    } else {
       PatientMap+='<td bgcolor=#000000><font color=white>w-' +
                 WaitPosition +'</font></td>';
       WaitPosition++; } 
    }
  PatientMap+='<td>' + obj.patients[i][11].replace(/\s/g,"") +'&nbsp;</td>';
  PatientMap+='</tr>';
//
// 3rd patient container line
//
  PatientMap+='<tr  style="height:'+PatientLineHeight+
            'px" bgcolor=#cccccc><td colspan=2>';
  if(obj.patients[i][18].substr(0,1)=="1") {
    PatientMap+='<span id="clinic01" class="Black">XRY</span>';
  } else if(obj.patients[i][18].substr(0,1)=="2") {
    PatientMap+='<span id="clinic01" class="Green">XRY</span>';
  }
  if(obj.patients[i][18].substr(1,1)=="1") {
    PatientMap+='<span id="clinic01" class="Black">CT</span>';
  } else if(obj.patients[i][18].substr(1,1)=="2") {
    PatientMap+='<span id="clinic01" class="Green">CT</span>';
  }
  if(obj.patients[i][18].substr(2,1)=="1") {
    PatientMap+='<span id="clinic01" class="Black">US</span>';
  } else if(obj.patients[i][18].substr(2,1)=="2") {
    PatientMap+='<span id="clinic01" class="Green">US</span>';
  }
  if(obj.patients[i][18].substr(3,1)=="1") {
    PatientMap+='<span id="clinic01" class="Black">MRI</span>';
  } else if(obj.patients[i][18].substr(3,1)=="2") {
    PatientMap+='<span id="clinic01" class="Green">MRI</span>';
  }
  if(obj.patients[i][18].substr(4,1)=="1") {
    PatientMap+='<span id="clinic01" class="Black">NM</span>';
  } else if(obj.patients[i][18].substr(4,1)=="2") {
    PatientMap+='<span id="clinic01" class="Green">NM</span>';
  }
  if(obj.patients[i][18].substr(8,1)=="1") {
    PatientMap+='<span id="clinic01" class="Black">PTH</span>';
  } else if(obj.patients[i][18].substr(8,1)=="3" ||
            obj.patients[i][18].substr(8,1)=='2' ) {
    PatientMap+='<span id="clinic01" class="Green">PTH</span>';
  }
  PatientMap+='&nbsp;</td>';
  var tranCode = trim(obj.patients[i][38]);
  if (tranCode.length > 0) {
    var vals = obj.patients[i][38].split("|");
    var code = obj.patients[i][38];
    var hasAmbBookingTime = "";
    if (vals.length > 1) {
      code = vals[0];
      hasAmbBookingTime = trim(vals[1]);
      if (hasAmbBookingTime == "1") {
        code = "<font style='color:green'>" + code + "</font>";
      }
    }
    PatientMap+='<td>' + code + '</td>';
  } else {
    PatientMap+='<td>' + obj.patients[i][19] + '&nbsp;</td>';
  }
  PatientMap+='<td>' + obj.patients[i][21] + '&nbsp;</td>' +
              '<td>' + obj.patients[i][20].substr(0,5) + '&nbsp;</td>' +
              '</tr>';
  PatientMap+='</table></div>';
  return PatientMap;
}
//
// Cabrini Patient Cell Configuration
//
function getPatientCell07(i) {
  var bCustomHover = false;
  var PatientMap="";

  if (VariableNameExists('CABCustomHover') && (window['CABCustomHover']==true)){
    bCustomHover = true;
  }

  PatientMap+='<div id=ToolTip-' + i + ' style="display:none" ' +
              'class="ToolTip"> ' +
              '<ul class=ToolTipItems>'+
              '<li>&nbsp;</li>' +
              '<li><strong>Patient: </strong>'+obj.patients[i][2]+'</li>' +
              '<li><strong>Room: </strong>'+obj.patients[i][3]+'</li>'

  if (!bCustomHover) {
    PatientMap+='<li><strong>Triage: </strong>'+obj.patients[i][4]+'</li>' +
                '<li><strong>UR: </strong>'+obj.patients[i][0]+'</li>' +
                '<li><strong>Sex: </strong>'+obj.patients[i][6]+'</li>' +
                '<li><strong>Age: </strong>'+obj.patients[i][7]+'</li>' +
                '<li><strong>Doctor: </strong>'+obj.patients[i][37]+'</li>' 
  }
  if (!isWhitespace(obj.patients[i][24])) {
    PatientMap+='<li><strong>Ready for Admission: </strong>' + 
                obj.patients[i][24] + '</li>';
  }
  if (!isWhitespace(obj.patients[i][48])) {
     var sReadyDate = FormatShortDate(obj.patients[i][48].substr(0,8));
     var sReadyTime = obj.patients[i][48].substr(8,8);
     PatientMap+='<li><strong>Ward Bed Ready : </strong>' +
                       sReadyDate + ' at ' + sReadyTime + '</li>';
  }
  if (!bCustomHover) {
    PatientMap +='<li><strong>' +
                 obj.patients[i][46].substr(0,12).replace(/\t/g,"") +
                 '</strong>' +
                 obj.patients[i][46].substr(12).replace(/\t/g,"") +
                 '</li>';
  }
  if (bCustomHover) {
    // Management Notes
    PatientMap += '<li><strong>Management Notes:</strong></li>';
    if (!isWhitespace(obj.patients[i][55])) {
      PatientMap += '<li>' + trim(obj.patients[i][55]) + '</li>';

      if (!isWhitespace(obj.patients[i][51])) {
        PatientMap += '<li>' + trim(obj.patients[i][51]) + '</li>';
      }
      if (!isWhitespace(obj.patients[i][52])) {
        PatientMap += '<li>' + trim(obj.patients[i][52]) + '</li>';
      }
      if (!isWhitespace(obj.patients[i][53])) {
        PatientMap += '<li>' + trim(obj.patients[i][53]) + '</li>';
      }
      if (!isWhitespace(obj.patients[i][54])) {
        PatientMap += '<li>' + trim(obj.patients[i][54]) + '</li>';
      }
    }
  }
  // Triage Notes
  if (bCustomHover) {
    PatientMap += '<li><strong>Triage Notes:</strong></li>';
  }
  if (!isWhitespace(obj.patients[i][31]))
    PatientMap += '<li>' + trim(obj.patients[i][31]) + '</li>';
  if (!isWhitespace(obj.patients[i][32]))
    PatientMap += '<li>' + trim(obj.patients[i][32]) + '</li>';
  if (!isWhitespace(obj.patients[i][33]))
    PatientMap += '<li>' + trim(obj.patients[i][33]) + '</li>';
  if (!isWhitespace(obj.patients[i][34]))
    PatientMap += '<li>' + trim(obj.patients[i][34]) + '</li>';
  if (!isWhitespace(obj.patients[i][35]))
    PatientMap += '<li>' + trim(obj.patients[i][35]) + '</li>';
  if (!isWhitespace(obj.patients[i][36]))
    PatientMap += '<li>' + trim(obj.patients[i][36]) + '</li>';

  PatientMap+='</ul></div>' 

  PatientMap+='<div id=Patient-' + i + ' class=PatientStyle ' +
              ' style="clip: rect(0px '+PatientCellWidth + 
              'px ' + PatientCellHeight + 'px 0px);' + 
              'width:'+PatientCellWidth+'px;height:'+PatientCellHeight+'px;" '+ 
              ' onmouseover=\'ShowTip(event,"'+i+'")\' '+
              ' onmouseout=\'HideTip(event,"'+i+'")\' '+
              ' onmousedown=\'HideTip(event,"'+i+'")\' '+
              '><table border=0 width=' + PatientCellWidth +
              ' height=' + PatientCellHeight + ' cellpadding=0' +
              ' style="table-layout:fixed;" cellspacing=0 >' +
              '<tr style="height:'+PatientLineHeight+'px" class='+
              TriageColor(obj.patients[i][4]) + ' ' +
              '><td style="text-align:center;width:22px" class=cellPatientLocName>' +
              getLocationAlias(obj.patients[i][3]) + '&nbsp;</td>';
  if (obj.patients[i][15] == "1") {
    PatientMap+='<td style="width:73px;background-color:white"><span class=cellPatientNameTr1>' + 
               obj.patients[i][2].replace(/ *$/,"").replace(/ /g,"_") + '</span></td>';
  } else {
    PatientMap+='<td style="width:73px;"><span class=cellPatientName>' + 
               obj.patients[i][2].replace(/ *$/,"").replace(/ /g,"_") + '</span></td>';
  }
  if (obj.patients[i][14] == "1") {
    PatientMap+='<td style="text-align:center;width:25px;">' + obj.patients[i][6] + 
              obj.patients[i][7] + '&nbsp;</td>' +
             '<td style="text-align:center;width:30px"><span class=EMSadFace></span></td>';
  } else if (obj.patients[i][14] == "2"){
   PatientMap+='<td style="text-align:center;width:25px;">' + obj.patients[i][6] +
             obj.patients[i][7] + '&nbsp;</td>' +
             '<td style="text-align:center;width:30px"><span class=EMSadFaceLos></span></td>';
  } else {
    PatientMap+='<td style="text-align:center;width:25px">' + obj.patients[i][6] + '&nbsp;</td>' +
                '<td style="text-align:center;width:30px;">' + obj.patients[i][7] + '&nbsp;</td>';
  }

  PatientMap+='<td style="text-align:center;width:25px;">' + obj.patients[i][5].substr(8,5) + 
              '&nbsp;</td></tr>' +
              '<tr style="height:'+PatientLineHeight+'px;background-color:#ccc"><td colspan=2>' 

  if (obj.patients[i][13].substr(0,1)=='1') {
    PatientMap+='<span class=EMAlert></span>'; 
  }
  if (obj.patients[i][13].substr(0,1)=='2') {
    PatientMap+='<span class=EMAlertBlack></span>'; 
  }
  if (obj.patients[i][13].substr(0,1)=='3') {
    PatientMap+='<span class=EMAlertDelete></span>'; 
  }
  if (obj.patients[i][13].substr(1,1)=='1') {
    PatientMap+='<span class=EMAlertResult></span>'; 
  }
  PatientMap+=obj.patients[i][22].substr(0,23)+'&nbsp;</td>';

  if (obj.patients[i][9].substr(0,1)=="*") {
    PatientMap+='<td><font color=red><b>'+obj.patients[i][9].substr(1,3).replace(/\s/g,"")+'</b>';
  } else if (obj.patients[i][9].substr(0,1)=="R") {
      PatientMap+='<td bgcolor=red><b>'+obj.patients[i][9].substr(1,3).replace(/\s/g,"")+'</b>';
    } else if (obj.patients[i][9].substr(0,1)=="B") {
      LinkFlag = 0;
      PatientMap+='<td bgcolor=lightblue><b>'+obj.patients[i][9].substr(1,3).replace(/\s/g,"")+'</b>';
    } else if (obj.patients[i][9].substr(0,1)=="G") {
      LinkFlag = 0;
      PatientMap+='<td bgcolor=lightgreen ><b>'+obj.patients[i][9].substr(1,3).replace(/\s/g,"")+'</b>';
    } else {
      PatientMap+='<td>'+obj.patients[i][9].replace(/\s/g,"");}

  if (obj.patients[i][45].substr(0,1)=="R") {
    PatientMap+='<span id="request01" class="Red">' +
                obj.patients[i][45].substr(1,3).replace(/\s/g,"") +
                '</span>'
  } else if (obj.patients[i][45].substr(0,1)=="G") {
    PatientMap+='<span id="request01" class="Green">' +
                obj.patients[i][45].substr(1,3).replace(/\s/g,"") +
                '</span>'
  }  
  PatientMap+='&nbsp;</td>';

  if  (obj.patients[i][12]=="000000000") {
    PatientMap+='<td>' + obj.patients[i][41].replace(/\s/g,"") +'&nbsp;</td>';
  } else {
    if (obj.patients[i][PatientWaitIndex].slice(-4)=='Next') {
      PatientMap+='<td class=NextPatientCell>' + obj.patients[i][PatientWaitIndex] +'</td>';
    } else {
      PatientMap+='<td class=WaitOrderCell>' + obj.patients[i][PatientWaitIndex] +'</td>';
    }
    WaitPosition++;
  }
  PatientMap+='<td>' + obj.patients[i][42].replace(/\s/g,"") +
              '&nbsp;</td></tr>' +
              '<tr  style="height:'+PatientLineHeight+
              'px" bgcolor=#cccccc><td colspan=2>' 
  if(obj.patients[i][18].substr(0,1)=="1") {
    PatientMap+='<span id="clinic01" class="Black">XRY</span>'
  } else if(obj.patients[i][18].substr(0,1)=="2") {
    PatientMap+='<span id="clinic01" class="Green">XRY</span>'
  }
  if(obj.patients[i][18].substr(1,1)=="1") {
    PatientMap+='<span id="clinic01" class="Black">CT</span>'
  } else if(obj.patients[i][18].substr(1,1)=="2") {
    PatientMap+='<span id="clinic01" class="Green">CT</span>'
  }
  if(obj.patients[i][18].substr(2,1)=="1") {
    PatientMap+='<span id="clinic01" class="Black">US</span>'
  } else if(obj.patients[i][18].substr(2,1)=="2") {
    PatientMap+='<span id="clinic01" class="Green">US</span>'
  }
  if(obj.patients[i][18].substr(3,1)=="1") {
    PatientMap+='<span id="clinic01" class="Black">MRI</span>'
  } else if(obj.patients[i][18].substr(3,1)=="2") {
    PatientMap+='<span id="clinic01" class="Green">MRI</span>'
  }
  if(obj.patients[i][18].substr(4,1)=="1") {
    PatientMap+='<span id="clinic01" class="Black">NM</span>'
  } else if(obj.patients[i][18].substr(4,1)=="2") {
    PatientMap+='<span id="clinic01" class="Green">NM</span>'
  }
  if(obj.patients[i][18].substr(8,1)=="1") {
    PatientMap+='<span id="clinic01" class="Black">PTH</span>'
  } else if(obj.patients[i][18].substr(8,1)=="3" ||
            obj.patients[i][18].substr(8,1)=='2' ) {
    PatientMap+='<span id="clinic01" class="Green">PTH</span>'
  }
  PatientMap+='&nbsp;</td>' 
  PatientMap+='<td>' + obj.patients[i][19].replace(/\s/g,"") + 
              '&nbsp;</td><td>' + obj.patients[i][21] + '&nbsp;</td>';
// discharge time emvidtim
//  if(!isWhitespace(obj.patients[i][43])) {
//    PatientMap+='<td>' + obj.patients[i][43].substr(0,5) + '&nbsp;</td>' 
// or exp discharge time emviut01
//    } else if (!isWhitespace(obj.patients[i][20])) {
      PatientMap+='<td>' + obj.patients[i][20].substr(0,5) + '&nbsp;</td>' 
//    } else {
// or duration in hours:mins from arrival
//      PatientMap+='<td>' + obj.patients[i][44] + '&nbsp;</td>' 
//    }
  PatientMap+='</tr></table></div>';
  return PatientMap;
}
function getPatientCell08(i) {
  var PatientMap=""; 
  PatientMap+='<div id=Patient-' + i + ' class=PatientStyle ' +
              ' style="clip: rect(0px '+PatientCellWidth+'px '+PatientCellHeight+'px 0px);'+ 
              'width:'+PatientCellWidth+'px;height:'+PatientCellHeight+'px;">' +
              '<span style="height:'+PatientCellHeight+'px;'+
              'width:'+PatientCellWidth+'px;'+
              'background-color:#ccc;text-align:center;vertical-align:middle;'+
              '">Patient Container 08<br>' + obj.patients[i][2] +'</span></div>';
  return PatientMap;
}
function getPatientCell09(i) {
  var PatientMap=""; 
  PatientMap+='<div id=Patient-' + i + ' class=PatientStyle ' +
              ' style="clip: rect(0px '+PatientCellWidth+'px '+PatientCellHeight+'px 0px);'+ 
              'width:'+PatientCellWidth+'px;height:'+PatientCellHeight+'px;">' +
              '<span style="height:'+PatientCellHeight+'px;'+
              'width:'+PatientCellWidth+'px;'+
              'background-color:#ccc;text-align:center;vertical-align:middle;'+
              '">Patient Container 09<br>' + obj.patients[i][2] +'</span></div>';
  return PatientMap;
}
function getPatientCell10(i) {
  var PatientMap=""; 
  PatientMap+='<div id=Patient-' + i + ' class=PatientStyle ' +
              ' style="clip: rect(0px '+PatientCellWidth+'px '+PatientCellHeight+'px 0px);'+ 
              'width:'+PatientCellWidth+'px;height:'+PatientCellHeight+'px;">' +
              '<span style="height:'+PatientCellHeight+'px;'+
              'width:'+PatientCellWidth+'px;'+
              'background-color:#ccc;text-align:center;vertical-align:middle;'+
              '">Patient Container 10<br>' + obj.patients[i][2] +'</span></div>';
  return PatientMap;
}
function SumWaitTime() {
  var el;
  var waitIndex;
  var WaitTime;
  var waitTimeCount = document.getElementById('WaitTimeCount');
  if (waitTimeCount) {
    if (showWaitTimeStatistics) {
      waitTimeCount.style.left   = WaitTimeCellLeft+"px";
      waitTimeCount.style.top    = WaitTimeCellTop+"px";
      waitTimeCount.style.width  = WaitTimeCellWidth+"px";
      waitTimeCount.style.height = WaitTimeCellHeight+"px";
      for (var i=0;i<7;i++) {
        WaitTimeCounts[i] = new Array;
        WaitTimeCounts[i][0]=0;
        WaitTimeCounts[i][1]=0;
      }
      for (var i=0;i<obj.patients.length;i++) {
        WaitTime=parseInt(obj.patients[i][44].split(':')[0]*60,10) +
                 parseInt(obj.patients[i][44].split(':')[1],10);
        waitIndex=6;
        switch (true) {
          case (WaitTime<60):  waitIndex=0;break;
          case (WaitTime<120): waitIndex=1;break;
          case (WaitTime<180): waitIndex=2;break;
          case (WaitTime<210): waitIndex=3;break;
          case (WaitTime<225): waitIndex=4;break;
          case (WaitTime<240): waitIndex=5;break;
        }
        WaitTimeCounts[waitIndex][0]++;
        if (isWhitespace(obj.patients[i][10])) WaitTimeCounts[waitIndex][1]++;
      }
      for (var i=0;i<7;i++) {
        el = document.getElementById('WaitTimeCat'+i);
        if (el)  el.innerHTML=WaitTimeCounts[i][0];
        el = document.getElementById('uWaitTimeCat'+i);
        if (el)  el.innerHTML=WaitTimeCounts[i][1];
      }
      waitTimeCount.style.display = "";
    }
  }
}
function ResultLink(i) {
  var url="../cgi-bin/cliweb03.pbl?reportno=1&template=1" +
                "&urnumber=" + resultsSet[i].urnumber.replace(/ /g,"+") +
                "&admissno=" + resultsSet[i].admissno.replace(/ /g,"+")
  ShowContent();
  top.content.location=url;
}
function SumResults() {
  var Matched;
  var el;
  var resultCount = document.getElementById('ResultCount');
  var resultView = document.getElementById('ResultView');
  var emrsite = document.getElementById('emrsite');
  if (resultCount) {
    if (showResultStatistics) {
      resultCount.style.left   = ResultCellLeft+"px";
      resultCount.style.top    = ResultCellTop+"px";
      resultCount.style.width  = ResultCellWidth+"px";
      resultCount.style.height = ResultCellHeight+"px";
      resultCount.style.display = "";
      theURL="ResultsView.php"+
             "?reportno=2" +
             "&sitecode="+emrsite.value+
             "&agehours="+ResultAgehours+
             "&marked="+ResultMarked+
             "&norecord="+ResultNorecord+
             "&v="+Math.random();
      xmlHttp=new XMLHttpRequest(); // Firefox, Opera 8.0+, Safari
      xmlHttp.open("GET", theURL, false);
      xmlHttp.send();
      if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
        resultsSet = eval("("+xmlHttp.responseText+")");
        var OS="<table style='margin:0' width=100% border=0 cellpadding=1 cellspacing=0>";
          OS+="<tr class=styleLoc-ResultTabHead><td colspan=2>Date/Time</td>"+
                  "<td>Patient</td>"+
                  "<td colspan=2>Test</td></tr>";
        for (var i = 0; i < resultsSet.length; i++) {
          OS+="<tr class=styleLoc-ResultTabRow onclick='ResultLink("+i+");'>"+
              "<td><span class=showResultIcon"+resultsSet[i].code.substr(0,2)+"></span></td>"+
              "<td>"+FormatShortDate(resultsSet[i].date)+" "+resultsSet[i].time+"</td>"+
                  "<td>"+resultsSet[i].surname+", "+resultsSet[i].given+"</td>"+
                  "<td>"+resultsSet[i].test+"</td>"+
                  "<td><span class=showResultStatus"+resultsSet[i].normal+"></span></td></tr>";
        }
        OS+="</table>";
        resultView.innerHTML=OS;
      } else {
        alert('Error Connecting to Web Service');
      }
    }
  }
}
function FormatShortDate(val) {
   var yyyy = val.substr(0,4)
   var mm = val.substr(4,2)
   var dd = val.substr(6,2)
   var mth3=mm
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
   return(dd + " " + mth3);
}
function updDoctor(doctor,admissno) {
  var emcndoct=document.getElementById("emcndoct").value;
  if(event.keyCode != 13 && event.keyCode != 9) {   // Enter or tab key pressed
     return;
  }
  if(isWhitespace(doctor.value)){return;}
  doctor=doctor.value.toUpperCase()
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=3" +
                    "&valdcode=" + doctor.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {  return; }   
  if (emcndoct==1) {
    var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=11" +
                      "&valdcode=" + doctor.replace(/ /g,"+")
    var returnValue = RSExecute(serverURL);
    if (returnValue.status!=0) { return; }   
  }

  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=3" +
                    "&admissno=" + admissno +
                    "&doctcode=" + doctor +
                    "&updttype=ALDOC" +
                    "&updateky=1"
  var returnValue = RSExecute(serverURL);

  if(top.content.location.search.substring(1,22)=="reportno=1&template=4"){
    admissno=admissno - 0
    if (top.content.PatientLinks.admissno.value == admissno) {
        top.content.location.reload();
    }
  }
  location.reload();
}
var ttmousex = 0;
var ttmousey = 0;
function ShowTip(e, divId) {
  var evt = (e != undefined) ? e : window.event;
  var el=document.getElementById("ToolTip-"+divId);
  if (el == undefined)
    return;

  var divW = el.clientWidth;
  var divH = el.clientHeight;
  var cw   = getClientWidth();
  var ch   = getClientHeight();

  getMouseXY(evt);

  var ttmousey_t = ttmousey - document.body.scrollTop;
  var top = (ttmousey_t > (ch - divH)) ? ch - divH: ttmousey;
  var left = (ttmousex > (cw - divW)) ? ttmousex - divW : ttmousex;

  el.style.top  = top  + 'px';
  el.style.left = left + 'px';
  el.style.display="";
}
function getMouseXY(e) { // works on IE6,FF,Moz,Opera7
  if (!e) e = window.event; // works on IE only (others rely on browser passing us the event)

  if (e) {
    if (e.pageX || e.pageY) { // doesn't work on IE6!! (works on FF,Moz,Opera7)
      ttmousex = e.pageX;
      ttmousey = e.pageY;
    } else if (e.clientX || e.clientY) { // works on IE6,FF,Moz,Opera7
      ttmousex = e.clientX + document.body.scrollLeft;
      ttmousey = e.clientY + document.body.scrollTop;
    }
  }
}
function HideTip(e, divId) {
  var evt = (e != undefined) ? e : window.event;
  var el=document.getElementById("ToolTip-"+divId);

  el.style.display="none";
}
