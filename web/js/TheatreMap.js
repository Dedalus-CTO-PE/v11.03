//jsVersion  : V11.03.00
//======================================================================
// Theatre White Board / Map 
//======================================================================
var obj;
var globalLinkType = null ;
var globalLinkUrl = null ;
var globalLocationID = null ;
var originalLocId = null ;
var savePatientLocation = null;
var maxScreenHeight=500;
var maxScreenWidth=1024;
var expandColor = "lightblue";
var expandBorder = 3;
var DragDropFlag = false;
var whichEl = null;
var DropEl = null;
var currentX = null;
var currentY = null;
var togglePatientId = "";
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
var mapRefreshTime='5';
var flagLocation;
var PatientNameFormat=0;
var PatientNameType=0;
var PatientContainer=1;
var PatientContainerLines=3;
var PatientCellHeight=75;
var PatientLineHeight=25;
var PatientCellWidth=220;
var PatientCellPaddingTop=1;
var PatientCellPaddingLeft=1;
var ReadOnlyView=false;
var setTop;
var setLeft;
var defaultTop=35;
var defaultLeft=5;
var defaultSpace=10;
var defaultRow=0;
var defaultCol=0;
var maxColumns=4;
var showStatistics=true;
var ShowLocationAreas=true;
var ShowPatients=true;
var StatsArray = new Array();
var HiddenStatusCodes = new Array();
var LinkStatusCodes = new Array();
var FreeText="";
var ViewNames = [' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '];
var ViewCodes = ['1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','h','i','j','k'];
var sClickTemplate='oprweb01.pbl|04|025|1|640|480';
var dClickTemplate='oprweb06.pbl|10|001|0||';
/* Start of Code */
function DrawMap() {
 obj = new Map();
 ServerLocations();
 HospitalContext(); 
 ConditionalFields(); 
 ViewContext(); 
 DefaultLocations();
 SetPatients();
 ShowMap();
 Statistics();
 StyleMap();
 StartMap();
}
function ReDrawMap() {
 obj = new Map();
 ServerLocations();
 HospitalContext(); 
 ConditionalFields(); 
 ViewContext(); 
 DefaultLocations();
 ShowMap();
 Statistics();
 StyleMap();
}
function ServerLocations() {
  obj.AddLocation("Arrival","LOC-00000",5,35,0,0,0,0,"0","999","Arrival",2,3,true,false);
}
function Statistics() {
  for (var i=0;i<obj.locations.length;i++) {
    if (obj.locations[i][8]=='4') {
      SumPatients("Location-"+i,obj.locations[i][0],obj.locations[i][18],obj.locations[i][19]);
    }
  }
}
function SumPatients(LocationID,LocationName,SumByIndex,TableFormat) {
  var Matched;
  var el;
  var CodeIndex=SumByIndex.split('|')[0];
  var NameIndex=SumByIndex.split('|')[1];
  var PatientCounts = new Array();
  var patientCount = document.getElementById(LocationID);
  if (patientCount) {
    for (var i=0;i<obj.patients.length;i++) {
      Matched=false;
      for (var j=0;j<PatientCounts.length;j++) {
        if (PatientCounts[j][0]==obj.patients[i][CodeIndex]) {
          Matched=true;
          PatientCounts[j][2]++;
          if (CheckHidden(obj.patients[i][26])) {
            PatientCounts[j][3]++; 
          } else {
            PatientCounts[j][4]++; 
          }
        }
      }
      if (!Matched) {
        PatientCounts[PatientCounts.length] = new Array();
        PatientCounts[PatientCounts.length-1][0]=obj.patients[i][CodeIndex];
        PatientCounts[PatientCounts.length-1][1]=obj.patients[i][NameIndex];
        if (isWhitespace(PatientCounts[PatientCounts.length-1][1])) {
          PatientCounts[PatientCounts.length-1][1]="Not Allocated";
        }
        if (trim(PatientCounts[PatientCounts.length-1][1])=='&nbsp;') {
          PatientCounts[PatientCounts.length-1][1]="Not Allocated";
        }
        PatientCounts[PatientCounts.length-1][2]=1;
        PatientCounts[PatientCounts.length-1][3]=0;
        PatientCounts[PatientCounts.length-1][4]=0;
        if (CheckHidden(obj.patients[i][26])) {
          PatientCounts[PatientCounts.length-1][3]++;
        } else {
          PatientCounts[PatientCounts.length-1][4]++;
        }
      }
    }
    switch (TableFormat) {
      case "0":
        patientCount.innerHTML=StatsTable00(LocationID,LocationName,PatientCounts);
        break;
      case "1":
        patientCount.innerHTML=StatsTable01(LocationID,LocationName,PatientCounts);
        break;
      case "2":
        patientCount.innerHTML=StatsTable02(LocationID,LocationName,PatientCounts);
        break;
    }
  }
}
function CheckHidden(statusCode) {
  for (var i=0;i<HiddenStatusCodes.lenght;i++) {
    if (HiddenStatusCodes[i]==statusCode) return true;
  }
  return false;
}
function StatsTable00(LocationID,LocationName,PatientCounts) {
  var OS="<table class=statsTable  width=100% border=0 cellpadding=1 cellspacing=0>"+
         "<tr class='statsHeading styleLoc-Head"+LocationID+"'>"+
              "<td>"+LocationName+"</td>"+
              "<td align=center>Total</td></tr>";
  PatientCounts.sort(CountSort);
  for (var i=0;i<PatientCounts.length;i++) {
    OS+="<tr class='statsRow styleLoc-Row"+LocationID+"'>"+
        "<td nowrap>"+PatientCounts[i][1]+"</td>"+
        "<td align=center>"+PatientCounts[i][2]+"</td></tr>";
  }
  OS+="</table>";
  return OS;
}
function StatsTable01(LocationID,LocationName,PatientCounts) {
  var OS="<table class=statsTable  width=100% border=0 cellpadding=1 cellspacing=0>"+
         "<tr class='statsHeading styleLoc-Head"+LocationID+"'>"+
              "<td>"+LocationName+"</td>"+
              "<td align=center>Current</td></tr>";
  PatientCounts.sort(CountSort);
  for (var i=0;i<PatientCounts.length;i++) {
    OS+="<tr class='statsRow styleLoc-Row"+LocationID+"'>"+
        "<td nowrap>"+PatientCounts[i][1]+"</td>"+
        "<td align=center>"+PatientCounts[i][4]+"</td></tr>";
  }
  OS+="</table>";
  return OS;
}
function StatsTable02(LocationID,LocationName,PatientCounts) {
  var OS="<table class=statsTable  width=100% border=0 cellpadding=1 cellspacing=0>"+
         "<tr class='statsHeading styleLoc-Head"+LocationID+"'>"+
              "<td>"+LocationName+"</td>"+
              "<td align=center>Current</td>"+
              "<td align=center>Total</td></tr>";
  PatientCounts.sort(CountSort);
  for (var i=0;i<PatientCounts.length;i++) {
    OS+="<tr class='statsRow styleLoc-Row"+LocationID+"'>"+
        "<td nowrap>"+PatientCounts[i][1]+"</td>"+
        "<td align=center>"+PatientCounts[i][4]+"</td>"+
        "<td align=center>"+PatientCounts[i][2]+"</td></tr>";
  }
  OS+="</table>";
  return OS;
}
function CountSort(a,b) {
  return b[2] - a[2];
}
function  Map() {
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
      for(var a = 0; a < arguments.length; a++) {
        if (arguments[a]!="") {
          obj.locations[i][a]=arguments[a]; 
        } 
      }
    }
  }
  if (!f) alert("No Location :"+arguments[0]);
}
function DefaultLocations() {
 obj.locations.sort(LocationNameSort);
 setTop=defaultTop;
 setLeft=defaultLeft;
 defaultRow=0;
 defaultCol=0;
  for(var i = 0; i < obj.locations.length; i++) {
    if (parseInt(obj.locations[i][2])==0&&obj.locations[i][8]!="O"&&obj.locations[i][13]!="false") {
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
    if (parseInt(obj.locations[i][2])==0&&obj.locations[i][8]=="O") {
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
  var tm=GetCookieData("MapRefreshTime");
  if(tm=="unknown") {
    tm=mapRefreshTime
    SetCookie("MapRefreshTime",mapRefreshTime);
  } 
  mapRefreshTime=tm;
  var s=document.getElementById("mapRefreshTime");
  for (var i=0;i<s.options.length;i++) {
    if (s.options[i].value==mapRefreshTime) s.selectedIndex=i;
  }
  mapRefreshTime=parseInt(mapRefreshTime,10);
  window.setInterval("PageRefresh();",mapRefreshTime*60*1000);
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
//  if (parent.MenuList.style.display == 'none') {
//    parent.MenuList.style.display = '';
//  }
//  parent.menu.TheatreMenu.innerHTML = parent.MenuList.innerHTML;
//  parent.MenuList.style.display = 'none';
  document.getElementById("TheatreMap").innerHTML = LocationMap+PatientMap;
  ShowMapViews();
}
function ShowMapViews() {
  var MapViewType=document.getElementById("pageview").value;
  var MapView=document.getElementById("MenuViewType");
  var selectedView=0;
  for (i=0;i<20;i++) {
    if (ViewNames[i]!=' ') {
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
  if (code=='LOC-00000') alias='';
  return alias;
}
function getLocationMap() {
  for (var i = 0; i < obj.locations.length; i++) {
    if (obj.locations[i][11]==undefined) obj.locations[i][10]=obj.locations[i][1];
    if (obj.locations[i][11]==undefined) obj.locations[i][11]=1;
    if (obj.locations[i][12]==undefined) obj.locations[i][12]=1;
    if (obj.locations[i][13]==undefined) obj.locations[i][13]=1;
    if (obj.locations[i][14]==undefined) obj.locations[i][14]=1;
    if (obj.locations[i][15]==undefined) obj.locations[i][15]=100;
    if (obj.locations[i][16]==undefined) obj.locations[i][16]=100;
    if (obj.locations[i][17]==undefined) obj.locations[i][17]="";
    flagLocation=true;
    otherLocation=false;
    switch  (obj.locations[i][8]){
    case "1" :
      openLocationContainer(i);
      showFreeTextLocation(i);
      closeLocationContainer(i);
      break;
    case "2" :
      openLocationContainer(i);
      showLabelLocation(i);
      closeLocationContainer(i);
      break;
    case "3" :
      openLocationContainer(i);
      closeLocationContainer(i);
      break;
    case "4" :
      openLocationContainer(i);
      closeLocationContainer(i);
      break;
    default:
      openLocationContainer(i);
      showPatientLocation(i);
      closeLocationContainer(i);
    }
  }
}
function setStatus(LocationID) {
  globalLocationID = LocationID;
  var PageSet=document.getElementById("LocationState");
  var LocationDiv=document.getElementById(globalLocationID);
  PageSet.style.position='absolute';
  PageSet.style.top=LocationDiv.style.top;
  PageSet.style.left=LocationDiv.style.left;
  PageSet.style.width='180px';
  PageSet.style.height='40px';
  PageSet.style.backgroundColor='white';
  PageSet.style.border='solid 3px #ccc';
  PageSet.style.display="inline-block";
  PageSet.style.zIndex=90000;
  PageSet.style.display='';
}
function setStateStyle(el) {
  el.checked=false;
  var PageSet=document.getElementById("LocationState");
  var LocationDiv=document.getElementById(globalLocationID);
  PageSet.style.display="none";
  var locationCode=LocationDiv.getAttribute("locationCode");
  LocationDiv.style.border="";
  LocationDiv.style.color="";
  LocationDiv.style.backgroundColor="";
  var fieldString="";
  if (!isWhitespace(el.parentElement.style.backgroundColor)) {
    fieldString+="background-color:"+el.parentElement.style.backgroundColor+";";
    fieldString+="border:1px solid "+el.parentElement.style.backgroundColor+";";
    LocationDiv.style.backgroundColor=el.parentElement.style.backgroundColor;
    LocationDiv.style.border="1px solid "+el.parentElement.style.backgroundColor;
  }
  if (!isWhitespace(el.parentElement.style.color)) {
    fieldString+="color:"+el.parentElement.style.color+";";
    LocationDiv.style.color=el.parentElement.style.color;
  }
  var locStyle=getStyle("traffic-"+locationCode);
  if (locStyle!=undefined) {
    locStyle.style.color='';
    locStyle.style.backgroundColor='';
    locStyle.style.border='';
  }
  var pagekey=document.getElementById("hospitalViewContext").value;
  var theURL="StyleSheet.php?reportno=2"+
             "&pagekey="+pagekey+
             "&classkey=traffic-"+locationCode+
             "&classval="+fieldString
  var xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.status == 200) {
    if (xmlHttp.responseText!="UPDATED") {
      alert(xmlHttp.responseText);
    }
  } else {
    alert("ERROR : Can't Save Style");
  }
}
function openLocationContainer(locationIndex) {
  LocationMap+="<div id=Location-"+locationIndex+
               " longName='"+obj.locations[locationIndex][0]+"' "+
               " shortName='"+obj.locations[locationIndex][10]+"' "+
               " locationCode='"+obj.locations[locationIndex][1]+"' "+
               " maxPatients='"+obj.locations[locationIndex][9]+"' "+
               " containerType='"+obj.locations[locationIndex][8]+"' "+
               " containerAction='"+obj.locations[locationIndex][17]+"' "+
               " containerWidth='"+obj.locations[locationIndex][15]+"' "+
               " containerHeight='"+obj.locations[locationIndex][16]+"' "+
               " patientsWide='"+obj.locations[locationIndex][11]+"' "+
               " patientsHigh='"+obj.locations[locationIndex][12]+"' "+
               " class='LocationStyle "+
               " styleLoc-"+obj.locations[locationIndex][1]+
               " traffic-"+obj.locations[locationIndex][1]+"'>";
}
function closeLocationContainer(locationIndex) {
  LocationMap+="</div>";
}
function showPatientLocation(locationIndex) {
  LocationMap+="<div style='padding:3px'"+
               " onclick='setStatus(\"Location-"+locationIndex+"\");'"+
               ">"+obj.locations[locationIndex][0]+"</div>";
}
function showLabelLocation(locationIndex) {
  var marginTop=(obj.locations[locationIndex][16]/2)-10;
  if (marginTop<1) marginTop=3;
  LocationMap+="<div style='"+
               "text-align:center;border:0;"+
               "margin-top:"+marginTop+"px;"+
               "width:"+(obj.locations[locationIndex][15]-2)+"px;'"+
               " onclick='setStatus(\"Location-"+locationIndex+"\");'"+
               " class='LocationStyle styleLocA-"+obj.locations[locationIndex][1]+"'>"+
               obj.locations[locationIndex][0]+"</div>";
}
function showFreeTextLocation(locationIndex) {
  var el=document.getElementById("hospitalContext");
  var pk=el.value;
  LocationMap+= "<table width=100% cellspacing=0 cellpadding=0 border=0>" +
               "<tr class='statsHeading styleLoc-H"+obj.locations[locationIndex][1]+"'>"+
               "<td style='width:10%;text-align:left;'>&nbsp;</td>" +
               "<td style='text-align:center'>"+
               obj.locations[locationIndex][0]+"</td>"+
               "<td style='width:10%;text-align:right;'>"+
               "<span class=EditIcon "+
               "onclick='EditLocation(\""+obj.locations[locationIndex][1]+"\");'></span></td></tr>" +
               "<tr class='freeTextRow'>"+
               "<td colspan=3 id=FT-"+obj.locations[locationIndex][1]+
               " onclick='setStatus(\"Location-"+locationIndex+"\");'"+
               " class='freeTextBody'>"+
               GetPageNotes(pk,obj.locations[locationIndex][1])+
               "</td></tr>"+
               "</table>";
}
function EditLocation(LocationID) {
  if (!ReadOnlyView) {
    var el=document.getElementById("hospitalContext");
    var pk=el.value;
    globalLocationID=LocationID;
    var ed = tinyMCE.get('freeText');
    ed.setContent(GetPageNotes(pk,LocationID));
    var FreeTextEditor=document.getElementById("freeTextEditor")
    FreeTextEditor.style.display="";
    document.onkeydown   = '';
  }
}
function SaveFreeText() {
  var ed = tinyMCE.get('freeText');
  var NoteText=encodeURIComponent(ed.getContent());
  el=document.getElementById("hospitalContext");
  var pk=el.value;
  UpdatePageNotes(pk,globalLocationID,NoteText);
  location.reload();
}
function CancelFreeText() {
  var ed = tinyMCE.get('freeText');
  ed.setContent('');
  var FreeTextEditor=document.getElementById("freeTextEditor")
  FreeTextEditor.style.display="none";
  document.onkeydown   = OnKeyDown;
}
function StyleLocation(locIndex) {
  var el=document.getElementById('Location-' + locIndex );
  obj.locations[locIndex][6]=obj.locations[locIndex][2];
  obj.locations[locIndex][7]=obj.locations[locIndex][3];
  var ct=obj.locations[locIndex][8];
  if (ct==0) {
    var bedX=obj.locations[locIndex][11];
    var bedY=obj.locations[locIndex][12];
    LocationWidth=bedX*(PatientCellWidth+2);
    LocationHeight=bedY*(PatientCellHeight+2);
  } else {
if (!el) { alert(locIndex) }
    LocationWidth=el.getAttribute("containerWidth");
    LocationHeight=el.getAttribute("containerHeight");
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
  var LocationMatch;
  var ShowWarning;
  var locationCell;
  var patientLocation;
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
    patientLocation=trim(obj.patients[i][25].substr(0,10));
    if (isWhitespace(patientLocation)) patientLocation='LOC-00000';
    if (CheckHidden(obj.patients[i][26])) {
       obj.patients[i][25]='          '+obj.patients[i][25].substr(10);
       continue;
    }
    patientCell=document.getElementById('Patient-' + i );
    FoundLocation=0
    LocationMatch=false;
    ShowWarning=true;
    for(var j = 0; j < obj.locations.length; j++) {
      locationCell=document.getElementById('Location-' + j );
      if (patientLocation == obj.locations[j][1]) {
        LocationMatch=true;
        if (obj.locations[j][7] == 10000) {
          ShowWarning=false;
          locationCell.style.border = "1px red solid";
        } else {
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
          if ( (obj.locations[j][6] + PatientCellWidth + 2) < obj.locations[j][4] ) {
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
    if (FoundLocation==0) {
      if (!LocationMatch) {
          patientCell.style.top=obj.locations[OtherIndex][7];
          patientCell.style.left=obj.locations[OtherIndex][6];
      } else {
        patientCell.style.top=2000;
        patientCell.style.left=0;
        patientCell.style.display="none";
        if (ShowWarning) {
          alert("Warning : " + patientLocation + " not found")
        }
      }
    }
  }
}
function LocationCodeSort(a,b) {
  if(a[1] < b[1]) return -1;
  if(a[1] > b[1]) return 1;
  return 0;
}
function LocationNameSort(a,b) {
  if(a[0] < b[0]) return -1;
  if(a[0] > b[0]) return 1;
  return 0;
}
function StringSort(a,b) {
  return a[12] - b[12];
}
//============================================================
// Theatre Map Functions Drag & Drop etc
//============================================================
//------------------------------------------------------------
// Setup Drag & Drop Events Required
//------------------------------------------------------------
function StartMap() {
  if (!ReadOnlyView) {
//    document.ondblclick  = dblclickEl;
//    document.onclick     = clickEl;
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
  DragDropFlag = false;
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
    if ((obj.locations[i][8]==0&&
         whichEl.offsetTop  >= obj.locations[i][3] &&
         whichEl.offsetTop  <= obj.locations[i][5] )&&
        (whichEl.offsetLeft >= obj.locations[i][2] &&
         whichEl.offsetLeft <= obj.locations[i][4])) {
       originalLocId = i ;
       break;
    }
  }
  originalLeft = whichEl.offsetLeft;
  originalTop  = whichEl.offsetTop ;
  if (whichEl.style.pixelLeft) {
    whichEl.style.pixelLeft = whichEl.offsetLeft;
    whichEl.style.pixelTop = whichEl.offsetTop;
  } else {
    whichEl.style.left =whichEl.offsetLeft+'px';
    whichEl.style.top = whichEl.offsetTop+'px';
  }
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
  if (whichEl.style.pixelLeft) {
    whichEl.style.pixelLeft += distanceX;
    whichEl.style.pixelTop += distanceY;
  } else {
    whichEl.style.left =newX+'px';
    whichEl.style.top = newY+'px';
  }
  e.returnValue = false;
}
function dropEl(e) {        
  e = e ? e : window.event;
  var DropFail=true;
  if (whichEl == null) { return };
  if (originalLocId == null) { return };
  var elTop;
  var elLeft;
  if (whichEl.style.pixelTop) {
    elTop=whichEl.style.pixelTop;
    elLeft=whichEl.style.pixelLeft;
  } else {
    elTop=parseInt(whichEl.style.top.replace(/px/,''));
    elLeft=parseInt(whichEl.style.left.replace(/px/,''));
  }
  for(var i = 0; i < obj.locations.length; i++) {
    if ((obj.locations[i][8]==0&&
         elTop  > obj.locations[i][3] &&
         elTop  < obj.locations[i][5] )&&
       ( elLeft > obj.locations[i][2] &&
         elLeft < obj.locations[i][4])) {
      if  ( i != originalLocId ) {
        NewLocation=obj.locations[i][1];
        NewLocationName=obj.locations[i][0];
        DragDropFlag = true;
        LocationOk=true;
        LocationOk=CheckPatientLocation(i) 
        if (LocationOk) {
          if (whichEl.style.pixelTop) {
            whichEl.style.pixelTop = obj.locations[i][7];
            whichEl.style.pixelLeft = obj.locations[i][6];
          } else {
            whichEl.style.top = obj.locations[i][7]+'px';
            whichEl.style.left = obj.locations[i][6]+'px';
          }
          PatientNoArray = whichEl.id.split("-");
          var PatientNo = PatientNoArray[1];
          NewLocation=(NewLocation+"          ").slice(0,10);
          obj.patients[PatientNo][25]=NewLocation+obj.patients[PatientNo][25].substr(10);
          updateLocation(obj.patients[PatientNo][24],obj.patients[PatientNo][25],0); 
          DropFail=false;
          break;
        }
        else {
          if (whichEl.style.pixelTop) {
            whichEl.style.pixelTop = originalTop;
            whichEl.style.pixelLeft = originalLeft;
          } else {
            whichEl.style.top = originalTop+'px';
            whichEl.style.left = originalLeft+'px';
          }
          DropFail=true;
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
    DragDropFlag = false;
    if (whichEl.style.pixelTop) {
      whichEl.style.pixelTop = originalTop;
      whichEl.style.pixelLeft = originalLeft;
    } else {
      whichEl.style.top = originalTop+'px';
      whichEl.style.left = originalLeft+'px';
    }
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
function CheckPatientLocation(locIndex) {
  if (obj.locations[locIndex][9] == 999 ) return true;
  var patientLocation;
  var patientsInLocation=0;
  var Location=obj.locations[locIndex][1];
  for(var j = 0; j < obj.patients.length; j++) {
    patientLocation=trim(obj.patients[j][25].substr(0,10))
    if (Location==patientLocation) { 
      SwapPatient=j;
      patientsInLocation++ 
    }
  }
  if (obj.locations[locIndex][9]>1) {
    if (patientsInLocation >= obj.locations[locIndex][9] ) {
      alert("Location has the maximum number of patients.")
      return false;
    } else {
      return true;
    }
  }
  if (patientsInLocation==1) {
    var SwapFlag=confirm('Swap Patient Locations ? ')
    var SwapEl;
    if (SwapFlag == false ) { return SwapFlag } 
    if (SwapFlag) { 
      var PatientDivisions = document.getElementsByTagName("DIV");
      for (i=0; i<PatientDivisions.length; i++) {
        PatientDiv=PatientDivisions[i].id.split("-")
        if (PatientDiv[0]=="Patient" && PatientDiv[1]==SwapPatient) {
           SwapEl=PatientDivisions[i] 
        }
      }
      if (SwapEl.style.pixelTop) {
        SwapEl.style.pixelTop=obj.locations[originalLocId][7]
        SwapEl.style.pixelLeft=obj.locations[originalLocId][6] 
      } else {
        SwapEl.style.top=obj.locations[originalLocId][7] + 'px';
        SwapEl.style.top=obj.locations[originalLocId][6] + 'px';
      }
      var PatientNoArray = SwapEl.id.split("-");
      var PatientNo = PatientNoArray[1];
      var LocationCode=(obj.locations[originalLocId][1]+"          ").slice(0,10);
      obj.patients[PatientNo][25]= LocationCode + obj.patients[PatientNo][25].substr(10);
      updateLocation(obj.patients[PatientNo][24],obj.patients[PatientNo][25],1);
      return SwapFlag 
    }
  }
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
   location.reload();
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
// Double Click on a Patient to Display Page in TheatreFrame
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
      if (dblClicked) {
        dblClickPatient();
      } else {
        sglClickPatient(PatientNo);  // single-click; not a patient move
      }
    }
  } else {
    alreadyClicked = true;
  }
}
function dblClickPatient() {
  if (isWhitespace(dClickTemplate)) return;
  var s=dClickTemplate.split("|")[0]
  var r=dClickTemplate.split("|")[1]
  var t=dClickTemplate.split("|")[2]
  var LinkType=dClickTemplate.split("|")[3]
  var LinkWidth=dClickTemplate.split("|")[4]
  var LinkHeight=dClickTemplate.split("|")[5]
  var url="../cgi-bin/"+s+"?reportno="+r+"&template=" + t +
            "&casekeys=" + obj.patients[PatientNo][0].replace(/ /g,"+") +
            "&urnumber=" + obj.patients[PatientNo][27].replace(/ /g,"+") +
            "&admissno=" + obj.patients[PatientNo][28].replace(/ /g,"+") 
  if (LinkType==0) {
    location.href=url;
  } else {
    Left=(document.body.clientWidth-LinkWidth)/2;
    DFrameLink(url,0,Left,LinkWidth,LinkHeight);
  }
}
function sglClickPatient(PatientNo) {
  if (DragDropFlag) return;
  var s=sClickTemplate.split("|")[0]
  var r=sClickTemplate.split("|")[1]
  var t=sClickTemplate.split("|")[2]
  var LinkType=sClickTemplate.split("|")[3]
  var LinkWidth=sClickTemplate.split("|")[4]
  var LinkHeight=sClickTemplate.split("|")[5]
  for (var i=0;i<LinkStatusCodes.length;i++) {
    if (LinkStatusCodes[i].substr(0,2)==obj.patients[PatientNo][26]) {
      if (LinkStatusCodes[i].split("|")[1]=='Z') {
        alert('Patient Link Not Configured');
        return;
      }
      if (!isWhitespace(LinkStatusCodes[i].split("|")[1])) {
        s=LinkStatusCodes[i].split("|")[1]
        r=LinkStatusCodes[i].split("|")[2]
        t=LinkStatusCodes[i].split("|")[3]
        LinkType=LinkStatusCodes[i].split("|")[4]
        LinkWidth=LinkStatusCodes[i].split("|")[5]
        LinkHeight=LinkStatusCodes[i].split("|")[6]
      }
    }
  }
  var url="../cgi-bin/"+s+"?reportno="+r+"&template=" + t +
            "&casekeys=" + obj.patients[PatientNo][0].replace(/ /g,"+") +
            "&urnumber=" + obj.patients[PatientNo][27].replace(/ /g,"+") +
            "&admissno=" + obj.patients[PatientNo][28].replace(/ /g,"+") 
  if (LinkType=='0') {
    location.href=url;
  } else {
    Left=(document.body.clientWidth-LinkWidth)/2;
    DFrameLink(url,0,Left,LinkWidth,LinkHeight);
  }
}
//------------------------------------------------------------
// Update Location 
//------------------------------------------------------------
function updateLocation(tmapkey,tmapdata,swap) {
  var theURL   = "../cgi-bin/oprweb03.pbl?reportno=6" +
                    "&mdatakey=" + tmapkey.replace(/ /g,"+") +
                    "&mdataval=" + tmapdata.replace(/ /g,"+") +
                    "&updatety=1"
  var xmlHttp=new XMLHttpRequest(); // Firefox, Opera 8.0+, Safari
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (swap==0) {
    location.reload();
  }
}
//============================================================
// Get Style for Container
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
  SelectPeriod.pageview.value=ViewType;
  SelectPeriod.submit()
}
/*--------------------------------------------------------------------------------*/
/* Sample 1
/*--------------------------------------------------------------------------------*/
function getPatientCell01(i) {
  var PatientMap="";
// Row 1
  var patientLocation=trim(obj.patients[i][25].substr(0,10));
  PatientMap+='<div id=Patient-' + i + ' class="PatientStyle patientCellStatus'+obj.patients[i][26]+'"'+
              ' style="clip: rect(0px '+PatientCellWidth+'px '+PatientCellHeight+'px 0px);'+ 
              'width:'+PatientCellWidth+'px;height:'+PatientCellHeight+'px;" '+ 
              ' title="'+
              'MRN \t: '+obj.patients[i][27].replace(/ /g,"")+'\t\n' +
              'Patient\t: '+getPatientFullName(i)+'\t\n' +
              'Theatre\t:  '+obj.patients[i][1]+'\n' +
              'Surgeon\t: '+obj.patients[i][4]+'\n' +
              'Anaets\t: '+obj.patients[i][5]+'\n' +
              'Anaeth\t:  '+obj.patients[i][9]+'\n' +
              'Ward  \t:  '+obj.patients[i][16]+'\n' +
              'Procedure:\n'+obj.patients[i][8]+'\n' +
              'Clinical Review Required:\n'+obj.patients[i][65]+'\n' +
              'Clinical Review Date:\n'+obj.patients[i][64]+'\n' +
              'Bay:\n'+obj.patients[i][44]+'\n' +
              'Acuity:\n'+obj.patients[i][45]+'\n' +
              'Recovery Delay:\n'+obj.patients[i][63]+'\n' +
              '">' +
              '<table border=0 width=100% ' + /*PatientCellWidth +*/
              ' height=' + PatientCellHeight + ' cellpadding=0' +
              ' style="table-layout:fixed;background-color:white" cellspacing=0 cellpadding=0 >' +
              '<tr class="PatientTopRow patientStatus' + obj.patients[i][26] +
              '" style="height:'+PatientLineHeight+'px">'+
              '<td style="width:30px;text-align:center" '+
              ' onclick="togglePatient(\'Patient-'+i+'\');">' +
              getLocationAlias(patientLocation) +
              '</td>'+
              '<td style="width:'+(PatientCellWidth-32)+'px;" colspan=2 '+
              ' onclick="sglClickPatient(\''+i+'\');">' +
              '<span style="width:100%" class=cellPatientName>' + 
              getPatientName(i) + ' ('+
              obj.patients[i][27].replace(/ /g,"")+','+ obj.patients[i][32]+','+ 
              obj.patients[i][33]+')</span></td></tr>';
// Row 2
  PatientMap+='<tr class=PatientRow style="height:'+PatientLineHeight+'px;"><td colspan=3>' 
  if (obj.patients[i][23].substr(0,1)=='1') {
    PatientMap+='<span class=EMAlert></span>'; 
  }
  if (obj.patients[i][23].substr(0,1)=='2') {
    PatientMap+='<span class=EMAlertBlack></span>'; 
  }
  if (obj.patients[i][23].substr(0,1)=='3') {
    PatientMap+='<span class=EMAlertDelete></span>'; 
  }
  if (obj.patients[i][23].substr(1,1)=='1') {
    PatientMap+='<span class=EMAlertResult '+ 
      ' onclick=\'PatientResults("'+obj.patients[i][27]+'","'+obj.patients[i][28]+'");\'></span>';
  }
  PatientMap+='&nbsp;'+obj.patients[i][12]+'</td></tr>' 
// Row 3
  PatientMap+='<tr class=PatientRow style="height:'+PatientLineHeight+ 'px">' +
              '<td widt=50% colspan=2>'+obj.patients[i][20]+'&nbsp;</td>' +
              '<td style=\'text-align:right\'>' + MagneticButtons(obj.patients[i][58])+
              '&nbsp;</td>' 
// Row 4
  PatientMap+='<tr class=PatientRow style="height:'+PatientLineHeight+ 'px">' +
              '<td widt=50% colspan=2>'+obj.patients[i][1]+'&nbsp;</td>'+
              '<td>'+obj.patients[i][21]+'&nbsp;</td>' +
              '</tr></table></div>';
  return PatientMap;
}
/*--------------------------------------------------------------------------------*/
/* Sample 2
/*--------------------------------------------------------------------------------*/
function getPatientCell02(i) {
  var PatientMap=""; 
  PatientMap+='<div id=Patient-' + i + ' class=PatientStyle ' +
              ' style="clip: rect(0px '+PatientCellWidth+'px '+PatientCellHeight+'px 0px);'+ 
              'width:'+PatientCellWidth+'px;height:'+PatientCellHeight+'px;">' +
              '<span style="height:'+PatientCellHeight+'px;'+
              'width:'+PatientCellWidth+'px;'+
              'background-color:#ccc;text-align:center;vertical-align:middle;'+
              '">Patient Container 02<br>' + obj.patients[i][6] +'</span></div>';
  return PatientMap;
}
/*--------------------------------------------------------------------------------*/
/* Sample 3
/*--------------------------------------------------------------------------------*/
function getPatientCell03(i) {
  var PatientMap=""; 
  PatientMap+='<div id=Patient-' + i + ' class=PatientStyle ' +
              ' style="clip: rect(0px '+PatientCellWidth+'px '+PatientCellHeight+'px 0px);'+ 
              'width:'+PatientCellWidth+'px;height:'+PatientCellHeight+'px;">' +
              '<span style="height:'+PatientCellHeight+'px;'+
              'width:'+PatientCellWidth+'px;'+
              'background-color:#ccc;text-align:center;vertical-align:middle;'+
              '">Patient Container 03<br>' + obj.patients[i][6] +'</span></div>';
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
              '">Patient Container 04<br>' + obj.patients[i][6] +'</span></div>';
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
              '">Patient Container 05<br>' + obj.patients[i][6] +'</span></div>';
  return PatientMap;
}
function getPatientCell06(i) {
  var PatientMap=""; 
  PatientMap+='<div id=Patient-' + i + ' class=PatientStyle ' +
              ' style="clip: rect(0px '+PatientCellWidth+'px '+PatientCellHeight+'px 0px);'+ 
              'width:'+PatientCellWidth+'px;height:'+PatientCellHeight+'px;">' +
              '<span style="height:'+PatientCellHeight+'px;'+
              'width:'+PatientCellWidth+'px;'+
              'background-color:#ccc;text-align:center;vertical-align:middle;'+
              '">Patient Container 06<br>' + obj.patients[i][2] +'</span></div>';
  return PatientMap;
}
function getPatientCell07(i) {
  var PatientMap=""; 
  PatientMap+='<div id=Patient-' + i + ' class=PatientStyle ' +
              ' style="clip: rect(0px '+PatientCellWidth+'px '+PatientCellHeight+'px 0px);'+ 
              'width:'+PatientCellWidth+'px;height:'+PatientCellHeight+'px;">' +
              '<span style="height:'+PatientCellHeight+'px;'+
              'width:'+PatientCellWidth+'px;'+
              'background-color:#ccc;text-align:center;vertical-align:middle;'+
              '">Patient Container 07<br>' + obj.patients[i][6] +'</span></div>';
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
              '">Patient Container 08<br>' + obj.patients[i][6] +'</span></div>';
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
              '">Patient Container 09<br>' + obj.patients[i][6] +'</span></div>';
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
              '">Patient Container 10<br>' + obj.patients[i][6] +'</span></div>';
  return PatientMap;
}
function ButtonLink(URL) {
  alert(resultsSet[i].urnumber);
  alert(resultsSet[i].admissno);
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
function getPatientFullName(i) {
  var pTitle=toTitleCase(obj.patients[i][29]);
  var pGiven=toTitleCase(obj.patients[i][30]);
  var pSurname=toTitleCase(obj.patients[i][31]);
  return patientName=pSurname+', '+pTitle+' '+pGiven;
}
function getPatientName(i) {
  var patientName="";
  var pTitle=toTitleCase(obj.patients[i][29]);
  var pGiven=toTitleCase(obj.patients[i][30]);
  var pSurname=toTitleCase(obj.patients[i][31]);
  if (PatientNameFormat==1) {
    pTitle=obj.patients[i][29];
    pGiven=obj.patients[i][30];
    pSurname=obj.patients[i][31];
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
function UpdatePageNotes(pageKey,fieldName,fieldString) {
  var url="PageNotes.php";
  var qry="reportno=2"+
          "&pagekey="+pageKey+
          "&noteskey="+fieldName+
          "&notesval="+fieldString;
  var xmlHttp = createHttpObject();
  xmlHttp.open("POST",url,false);
  xmlHttp.setRequestHeader("Content-type","application/x-www-form-urlencoded");
  xmlHttp.send(qry);
  if (xmlHttp.status == 200) {
    if (xmlHttp.responseText!="UPDATED") {
      alert(xmlHttp.responseText);
      return;
    } 
  } else {
    alert("ERROR : A Problem Occurred Saving the Notes Try Again.");
    return;
  }
}
function GetPageNotes(pageKey,fieldName) {
  var theURL="PageNotes.php?reportno=1"+
             "&pagekey="+pageKey+
             "&noteskey="+fieldName;
  var xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.status == 200) {
    return xmlHttp.responseText.replace(/<p>&nbsp;<\/p>$/,"");
  } else {
    alert("ERROR : Can't Get Notes");
  }
  return;
}
function setRefreshTime() {
  var s=document.getElementById("mapRefreshTime");
  var t=s.options[s.selectedIndex].value;
  SetCookie("MapRefreshTime",t);
  location.reload();
}
//============================================================
// Grab when MouseDown Event
//============================================================
function expandPatient(el) {        
  var PatientCellHeightExpanded=PatientCellHeight+100;
  var PatientCellWidthExpanded=PatientCellWidth+200;
  maxScreenWidth=document.body.offsetWidth;
  maxScreenHeight=document.body.offsetHeight;
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
  el.style.backgroundColor="#ccc";
  el.style.borderStyle="solid";
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
  el.style.height=PatientCellHeight+'px';
  el.style.width=PatientCellWidth+'px';
  el.style.borderWidth='1px';
  el.style.borderColor='#ccc';
  h=PatientCellHeight+2;
  w=PatientCellWidth+2;
  el.style.clip='rect(0px '+PatientCellWidth+'px '+PatientCellHeight+'px 0px)';
}
function togglePatient(PatientId) {
//  if (DragDropFlag) return;
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
function PatientResults(urnumber,admissno) {
  if (DragDropFlag) return;
  collapsePatient();
  linkurl="cliweb03.pbl?reportno=1&template=001" +
          "&urnumber=" + urnumber + "&admissno=" + admissno
  location.href=linkurl
}
function MagneticButtons(indFld) {
  var btnLab=[btnLab0,btnLab1,btnLab2,btnLab3,btnLab4,
              btnLab5,btnLab6,btnLab7,btnLab8,btnLab9];
  var returnVal="";
  for (var x=0;x<10;x++) {
    if (indFld.substr(x,1)==1) {
      returnVal+='<span title="'+btnLab[x]+'" class="buttonInd'+x+'"></span>';
    }
  }
  return returnVal;
}
