//jsVersion  : V11.03.00
//======================================================================
// Emergency Department Map Display Script for WA health
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
// OffseType 0=Horizontal 1=Vertical
var OffsetType=1;
var ViewType="normal";
var dblClicked = false;
var alreadyClicked = false;
var alreadyClickedTimeout = null;
var PatientNoArray = null;
var cancelClickAction = false;
var winID;
var winWidth=1200;
var winHeight=700;

function DrawMap() {
 ViewType = (top.document.getElementById("menu").getAttribute("viewType"))
 if (ViewType=="readonly") {
   document.getElementById("NextEmergency").style.display='none';
   document.getElementById("EmergencyCount").style.display='none';
 }
 obj = new Map("canvas1024x768.png");
 SetLocations();
 SetExpected(); 
 SetPatients();
 ShowMap(immediate,emergency,urgent,semi,non);
 StyleMap();
 if (ViewType!="readonly") {
   StartMap();
 }
}

//------------------------------------------------------------
// SupportInformationFS - Display Support Information Alert
//------------------------------------------------------------
function SupportInformationFS()
{
  // first find the content frame
  var contentFrame = top.content.document;
  var popupFrame = top.search.document;
  var context      = contentFrame;

  // find the popup frame
  var isPopup = (popupFrame.location.href.indexOf("about:blank") == -1);

  if (isPopup)
  {
    context = popupFrame;

    if (context.location.href.match('/lookups/'))
    {
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
  var CrossBrowser   = getMetaContents('CrossBrowser',context);

  if (!IEBrowser) {
    GetCSSIncludeInfo(context);
    GetScriptIncludeInfo(context);

    ProcessIncludeInfo(ProgramID,ProgramName,ProgramVersion,ProgramFile,TemplateVer,TemplateHome,CrossBrowser);
  }
  else {
    ShowSupport(ProgramID,ProgramName,ProgramVersion,ProgramFile,TemplateVer,TemplateHome,CrossBrowser);
  }
}

function ShowPatientDetails(PatientNo) {
  if(!isWhitespace(obj.patients[PatientNo][4])) {
    PageLocation="?reportno=1&template=4" +
                 "&urnumber=" + obj.patients[PatientNo][0].replace(/ /g,"+") +
                 "&admissno=" + obj.patients[PatientNo][1].replace(/ /g,"+")
  } else {
     PageLocation="?reportno=1&template=11" +
                  "&urnumber=" + obj.patients[PatientNo][0].replace(/ /g,"+") +
                  "&admissno=" + obj.patients[PatientNo][1].replace(/ /g,"+")
  }
  globalLinkType=0;
  globalLinkUrl="../cgi-bin/emrweb02.pbl" + PageLocation
  ShowContent();
  top.content.location="../cgi-bin/emrweb02.pbl" + PageLocation
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
  c.style.marginTop="25px";
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
  for(var i = 0; i < arguments.length; i++)
     location[location.length] = arguments[i];
}
function  _AddPatient() {
  this.patients[this.patients.length] = new Array();
  var patient = this.patients[this.patients.length-1];
  for(var i = 0; i < arguments.length; i++)
     patient[patient.length] = arguments[i];
}
function ShowMap(immediate,emergency,urgent,semi,non) {
  EmrSiteCode=document.getElementById("emrsite").value;
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
     TableHeight=PatientCellHeight-5
     TableWidth=PatientCellWidth-2
     PatientMap+='<div id=Patient-' + i + ' class=PatientStyle ' +
                 ' title="\t\t\t\t\n'+
                 '\tRoom		:  '+obj.patients[i][3]+'\t\t\t\n' +
                 '\tTriage		: '+obj.patients[i][4]+'\n' +
                 '\tUR 		: '+obj.patients[i][0]+'\n' +
                 '\tPatient		: '+obj.patients[i][2]+'\t\n' +
                 '\tSex		: '+obj.patients[i][6]+'\n' +
                 '\tAge		: '+obj.patients[i][7]+'\n' +
                 '\tDoctor		: '+obj.patients[i][37]+'\n' +
                 obj.patients[i][46]+'\t\n' 
     if (!isWhitespace(obj.patients[i][31])) PatientMap+='\t'+obj.patients[i][31]+'\n' 
     if (!isWhitespace(obj.patients[i][32])) PatientMap+='\t'+obj.patients[i][32]+'\n' 
     if (!isWhitespace(obj.patients[i][33])) PatientMap+='\t'+obj.patients[i][33]+'\n' 
     if (!isWhitespace(obj.patients[i][34])) PatientMap+='\t'+obj.patients[i][34]+'\n' 
     if (!isWhitespace(obj.patients[i][35])) PatientMap+='\t'+obj.patients[i][35]+'\n' 
     if (!isWhitespace(obj.patients[i][36])) PatientMap+='\t'+obj.patients[i][36]+'\n' 

     if (EmrSiteCode=="BN1") {
       PatientMap+='\n">' +
                   '<table border=0 width=' + TableWidth +
                   ' height=' + TableHeight + ' cellpadding=0' +
                   ' style="table-layout:fixed;" cellspacing=0 >' +
                   '<tr height=21 class='+TriageColor(obj.patients[i][4]) + ' ' +
                   '><td align=center width=10 class=cellPatientLocName>' +
                   getLocationAlias(obj.patients[i][3]) + '</td>';

       if (obj.patients[i][15] == "1") {
         PatientMap+='<td width=45 style="background-color:white;overflow:hidden"><span class=cellPatientNameTr1>' +
                    obj.patients[i][2].replace(/ *$/,"").replace(/ /g,"_") + '</span></td>';
       }
       else {
         PatientMap+='<td width=45><span class=cellPatientName>' +
                    obj.patients[i][2].replace(/ *$/,"").replace(/ /g,"_") + '</span></td>';
       }

       if (obj.patients[i][14] == "1") {
         PatientMap+='<td width=25 align=center>' + obj.patients[i][6] +
                      obj.patients[i][7] + '&nbsp;</td>' +
                     '<td width=25><span class=EMSadFace></span></td>';
       } else if (obj.patients[i][14] == "2"){
         PatientMap+='<td width=30 align=center>' + obj.patients[i][6] +
                      obj.patients[i][7] + '&nbsp;</td>' +
                     '<td width=25><span class=EMSadFaceLos></span></td>';
       } else {
         PatientMap+='<td width=30 align=center>' + obj.patients[i][6] + '&nbsp;</td>' +
                     '<td width=25>' + obj.patients[i][7] + '&nbsp;</td>';
       }

       PatientMap+='<td width=30>' + obj.patients[i][5].substr(8,5) +
                   '&nbsp;</td></tr>' +
                   '<tr height=34 bgcolor=#cccccc><td colspan=2>' +
                   obj.patients[i][22].substr(0,23);
     } else {
       PatientMap+='\n">' +
                   '<table border=0 width=' + TableWidth +
                   ' height=' + TableHeight + ' cellpadding=0' +
                   ' style="table-layout:fixed;" cellspacing=0 >' +
                   '<tr height=21 class='+TriageColor(obj.patients[i][4]) + ' ' +
                   '><td align=center width=22 class=cellPatientLocName>' +
                   getLocationAlias(obj.patients[i][3]) + '</td>';

       if (obj.patients[i][15] == "1") {
         PatientMap+='<td width=73 style="background-color:white;overflow:hidden"><span class=cellPatientNameTr1>' + 
                    obj.patients[i][2].replace(/ *$/,"").replace(/ /g,"_") + '</span></td>';
       } 
       else {
         PatientMap+='<td width=73><span class=cellPatientName>' + 
                    obj.patients[i][2].replace(/ *$/,"").replace(/ /g,"_") + '</span></td>';
       }

       if (obj.patients[i][14] == "1") {
         PatientMap+='<td width=30 align=center>' + obj.patients[i][6] + 
                   obj.patients[i][7] + '&nbsp;</td>' +
                     '<td width=35><span class=EMSadFace></span></td>';
       } else if (obj.patients[i][14] == "2"){
        PatientMap+='<td width=30 align=center>' + obj.patients[i][6] +
                     obj.patients[i][7] + '&nbsp;</td>' +
                    '<td width=35><span class=EMSadFaceLos></span></td>';
       } else {
         PatientMap+='<td width=30 align=center>' + obj.patients[i][6] + '&nbsp;</td>' +
                     '<td width=35>' + obj.patients[i][7] + '&nbsp;</td>';
       }

       PatientMap+='<td width=30>' + obj.patients[i][5].substr(8,5) + 
                   '&nbsp;</td></tr>' +
                   '<tr height=34 bgcolor=#cccccc><td colspan=2>' +
                   obj.patients[i][22].substr(0,23);
     }

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
     }
     else {
       if (WaitPosition==0) {
          WaitPosition++;
          PatientMap+='<td bgcolor=#ff0000>Next</td>';
       }
       else {
          PatientMap+='<td bgcolor=#000000><font color=white>w-' + 
                    WaitPosition +'</font></td>';
          WaitPosition++; 
       }
     }

     PatientMap+='<td>' + obj.patients[i][42].replace(/\s/g,"") +
                 '&nbsp;</td></tr>' 


     PatientMap+='<tr bgcolor=#cccccc><td colspan=2>' 

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
                 '&nbsp;</td><td>&nbsp;</td>';
//
// cell 13 CAR 276442
//
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
//
     }
   }
//document.getElementById("EmergencyMenu").innerHTML=parent.MenuList.innerHTML;
//document.getElementById("EmergencyMap").innerHTML=LocationMap+PatientMap;
  if (parent.MenuList.style.display == 'none') {
    parent.MenuList.style.display = '';
  }
  parent.menu.EmergencyMenu.innerHTML = parent.MenuList.innerHTML;
  parent.menu.EmergencyMap.innerHTML = LocationMap+PatientMap;

  parent.MenuList.style.display = 'none';
}
function getLocationAlias(code) {
  if (!code) return "";

  var alias = code;
  for(var i = 0; i < obj.locations.length; i++) {
    if (obj.locations[i][1] == code) {
      alias = obj.locations[i][0] + "";
    }
  }
  return alias;
}

function getLocationMap() {
  var TableHeight = PatientCellHeight-5;
  EmrSiteCode=document.getElementById("emrsite").value;

  for (var i = 0; i < obj.locations.length; i++) {
    flagLocation=true;
    otherLocation=false;
    if (obj.locations[i][9]=="BLACKHOLE"){
      if (obj.locations[i][11] == "O") {
        // has a Next patient
        LocationMap+="<div id=Location-"+i+" class=OtherLocationStyle>"+
                   obj.locations[i][0]+
                   "<table border=0 cellspacing=0 cellpadding=4 width=100%>" +
                   "<tr height=21 valign=middle><td align=center>" +
                   "<img src=../images/next1.gif class=Icon " +
                   "onclick=OtherLocations('"+obj.locations[i][1]+"');"+
                   "></td>" +
                   "<td><font color=white size=2>"+obj.locations[i][0]+
                   "</td>" +
                   "<td><font color=white size=2>"+obj.locations[i][10]+"</td>"+
                   "</tr></table>"+"</div>";
      }
      else {
        LocationMap+="<div id=Location-"+i+" class=OtherLocationStyle>"+
                   obj.locations[i][0]+
                   "<table border=0 cellspacing=0 cellpadding=4 width=100%>" +
                   "<tr height=21 valign=middle><td align=center>" +
                   "<img src=../images/TrekIcon.gif class=Icon " +
                   "onclick=OtherLocations('"+obj.locations[i][1]+"');"+
                   "></td>" +
                   "<td><font color=white size=2>"+obj.locations[i][0]+
                   "</td>" +
                   "<td><font color=white size=2>"+obj.locations[i][10]+"</td>"+
                   "</tr></table>"+"</div>";
      }
      otherLocation=true;
    }
    if (EmrSiteCode=="BN1") {
      for(var r = 0; r < obj.patients.length; r++) {
        if (obj.patients[r][16]==obj.locations[i][1] &&
            obj.locations[i][8]!="WAIT" && obj.locations[i][9]!="BLACKHOLE"){
          LocationMap+="<div id=Location-"+i+" class=LocationStyle>"+
                       "<table class=OutOfDept " +
                       " style='table-layout:fixed;' height=" + TableHeight +
                       " width=160 border=0 cellpadding=1 cellspacing=0>" +
                       "<tr style='height:21px;'>"+
                           "<td style='width:10px;'>"+obj.locations[i][0]+"</td>"+
                           "<td style='width:60px'><b>"+obj.patients[r][2] +"<b></td>"+
                           "<td style='text-align:center;width:25px;'>"+ obj.patients[r][6] +"</td>"+
                           "<td style='text-align:center;width:25px;'>"+ obj.patients[r][7] + "</td>"+
                           "<td style='text-align:right;width:25px'>" +  obj.patients[r][5].substr(8,5) + "</td></tr>" +
                       "<tr style='height:21px;'>"+
                           "<td colspan=2>Time Left</td><td colspan=3>"+obj.patients[r][17].substr(0,5)+"</td></tr>"+
                       "<tr style='height:21px'>"+
                           "<td colspan=2>Current Location</td><td colspan=3>"+obj.patients[r][40]+"&nbsp;</td></tr>" +
                     "</table></div>";
          flagLocation=false;
          break;
        }
      }
    } else {
      for(var r = 0; r < obj.patients.length; r++) {
        if (obj.patients[r][16]==obj.locations[i][1] &&
            obj.locations[i][8]!="WAIT" && obj.locations[i][9]!="BLACKHOLE"){
          LocationMap+="<div id=Location-"+i+" class=LocationStyle>"+
                       "<table class=OutOfDept " +
                       " style='table-layout:fixed;' height=" + TableHeight +
                       " width=200 border=0 cellpadding=1 cellspacing=0>" +
                       "<tr style='height:21px;'>"+
                           "<td style='width:22px;'>"+obj.locations[i][0]+"</td>"+
                           "<td style='width:73px'><b>"+obj.patients[r][2] +"<b></td>"+
                           "<td style='text-align:center;width:30px;'>"+ obj.patients[r][6] +"</td>"+
                           "<td style='text-align:center;width:35px;'>"+ obj.patients[r][7] + "</td>"+
                           "<td style='text-align:right;width:30px'>" +  obj.patients[r][5].substr(8,5) + "</td></tr>" +
                       "<tr style='height:21px;'>"+
                           "<td colspan=2>Time Left</td><td colspan=3>"+obj.patients[r][17].substr(0,5)+"</td></tr>"+
                       "<tr style='height:21px'>"+
                           "<td colspan=2>Current Location</td><td colspan=3>"+obj.patients[r][40]+"&nbsp;</td></tr>" +
                       "</table></div>";
          flagLocation=false;
          break;
        }
      }
    }
    if(flagLocation==true) {
      // process Expected patients
      for(var e = 0; e < obj.expected.length; e++) {
        if (obj.expected[e][1]==obj.locations[i][1] &&
            obj.locations[i][8]!="WAIT" && obj.locations[i][9]!="BLACKHOLE"){
          LocationMap+="<div id=Location-"+i+" class=LocationStyle>"+
                       "<table class=expectedLocation " +
                       " style='table-layout:fixed;' height=" + TableHeight +
                       " border=0 cellpadding=1 cellspacing=0>" +
                       "<tr>"+
                       "<td style='width:200px;'>"+obj.locations[i][0]+
                       "</td></tr>"+
                       "<tr>"+
                       "<td style='width:200px;'>"+
                        obj.expected[e][0].substr(0,42)+"</td></tr>"+
                       "<tr>"+
                       "<td>Expected:"+obj.expected[e][2]+"</td></tr>"+
                       "</table></div>";
           flagLocation=false;
           break;
        }
        else if (obj.expected[e][1]==obj.locations[i][1] &&
                 obj.locations[i][8] == "WAIT" && obj.locations[i][9] != "") {
          // new section; allow addition styles on WR location DIV to be used
          LocationMap+="<div id=Location-"+i+" class=LocationStyle " +
                       " style='" + obj.locations[i][9] + "'>" +
                       "<table class=expectedLocation " +
                       " style='table-layout:fixed;' height=" + TableHeight +
                       " border=0 cellpadding=1 cellspacing=0>" +
                       "<tr>"+
                       "<td style='width:200px;'>"+obj.locations[i][0]+
                       "</td></tr>"+
                       "<tr>"+
                       "<td style='width:200px;'>"+
                        obj.expected[e][0].substr(0,42)+"</td></tr>"+
                       "<tr>"+
                       "<td>Expected:"+obj.expected[e][2]+"</td></tr>"+
                       "</table></div>";
           flagLocation=false;
           break;
        }
      }
    }
    if (flagLocation==true && otherLocation != true){
      LocationMap+='<div id=Location-'+i+' class=LocationStyle>'+obj.locations[i][0]+'</div>'
// should this be 0 or 1
    }
  }
}

function StyleMap() {
  var OtherIndex = obj.locations.length - 1
  if (ShowLocationAreas) {
    for (var i = 0; i < obj.locations.length; i++) {
      if (obj.locations[i][2]!=obj.locations[i][6] ||
          obj.locations[i][3]!=obj.locations[i][7]){
        alert(obj.locations[i][0] + ' - Location Invalid');
      }
      el=document.getElementById('Location-' + i );
      el.style.top=obj.locations[i][7];
      el.style.left=obj.locations[i][6];
      LocationWidth= obj.locations[i][4]-obj.locations[i][2]
      LocationHeight= obj.locations[i][5]-obj.locations[i][3]
      el.style.width=LocationWidth+'px';
      el.style.height=LocationHeight+'px';
    }
  }

  //
  // Set patient block positions in their corresponding cells (rooms)...
  //
  for (var i = 0; i < obj.patients.length; i++) {
    el=document.getElementById('Patient-' + i );
    FoundLocation=0
    LocationMatch=false;
    for(var j = 0; j < obj.locations.length; j++) {
      if ( obj.patients[i][3] == obj.locations[j][1] ) {
        LocationMatch=true;
      }
      if ( obj.patients[i][3] == obj.locations[j][1] &&
           obj.locations[j][7] != 10000 &&
           obj.locations[j][8] != "HIDE" )
      {
        FoundLocation=1;
        el.style.top=obj.locations[j][7] + 1;  // +1 so doesn't overlap border
        el.style.left=obj.locations[j][6] + 1; // +1 so doesn't overlap border

        // float patient blocks left-to-right, top-to-bottom within cell
        if ( (obj.locations[j][6] + PatientCellWidth + PatientCellSpace + 1) <
              obj.locations[j][4] )
        {
          obj.locations[j][6] = obj.locations[j][6] + PatientCellWidth +
                                PatientCellSpace + 1;    // left
        }
        else
        {
          if ( (obj.locations[j][7] + PatientCellHeight + 1) <
               obj.locations[j][5] )
          {
            // set left pos...
            if ( (obj.locations[j][6] + PatientCellWidth + PatientCellSpace + 1)
                 < obj.locations[j][4] )
            {
              obj.locations[j][6] = obj.locations[j][6] + PatientCellWidth +
                                    PatientCellSpace + 1;
            }
            else {
              obj.locations[j][6] = obj.locations[j][2];
            }

            // set top pos (1 row down)
            obj.locations[j][7] = obj.locations[j][7] + PatientCellHeight;
          }
          else {
            obj.locations[j][7] = 10000;
          }
        }
      }
    }
    if (FoundLocation==0) {
      if (!LocationMatch) {
          el.style.top=obj.locations[OtherIndex][7];
          el.style.left=obj.locations[OtherIndex][6];
      }
      else {
        el.style.top=5000;
        el.style.left=5000;
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
function ExpectedPatientsWAH() {
 var s=document.createElement("select")
 var x=document.createElement("option")
 x.value="../cgi-bin/emrweb01.pbl?reportno=1&template=49|content";
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
function Incomplete(opt) {
 var s=document.createElement("select")
 var x=document.createElement("option")
 if (opt==1) x.value="../cgi-bin/emrweb01.pbl?reportno=1&template=13|content";
 if (opt==2) x.value="../cgi-bin/emrweb01.pbl?reportno=1&template=14|content";
 if (opt==3) x.value="../cgi-bin/emrweb01.pbl?reportno=1&template=15|content";
 s.appendChild(x)
 EMenuLinkTo(s);
}
function OtherLocations(code) {
 if(top.content.location.search.substring(1,23)=="reportno=2&template=3"){
 if (IsDirtyTriage(top.content.UpdateForm)==true) { return; }} 
 if(OtherLocations.arguments.length==0) {
   url = "../cgi-bin/emrweb01.pbl?reportno=01&template=012"  
 } else {
   url = "../cgi-bin/emrweb01.pbl?reportno=01&template=012&filtlocn=" + 
          code.replace(/ /g,"+")
 }
 ShowContent();
 parent.content.location=url
}
function EMULocations() {
 if(top.content.location.search.substring(1,23)=="reportno=2&template=3"){
 if (IsDirtyTriage(top.content.UpdateForm)==true) { return; }} 
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
function updDoc(doctor,admissno,emcndoct) {
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
function SelectDoctor(doctcode) {
 if(top.content.location.search.substring(1,23)=="reportno=2&template=3"){
 if (IsDirtyTriage(top.content.UpdateForm)==true) { return; }} 
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
    document.ondblclick  = dblclickEl;
    document.onclick     = clickEl;
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
  e = e || window.event;

  if (e.keyCode == 13) {
    return false;}
}
//============================================================
// Grab when MouseDown Event
//============================================================
function grabEl(e) 
{        
  // get the event (cross browser method)
  e = e || window.event;

  if (top.content.IsDirty != null) 
  {
    if (top.content.IsDirty(top.content.document.UpdateForm)) 
    {
      if (confirm("Information has changed. Perform Update Now.")) 
      {
        top.content.SubmitForm();
      }
      return; 
    } 
  }
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
  for(var i = 0; i < obj.locations.length; i++) 
  {
    if ((whichEl.offsetTop  >= obj.locations[i][3] &&
         whichEl.offsetTop  <= obj.locations[i][5] )&&
        (whichEl.offsetLeft >= obj.locations[i][2] &&
         whichEl.offsetLeft <= obj.locations[i][4])) 
    {
       originalLocId = i ;
       break;
    }
  }
  originalLeft = whichEl.offsetLeft;
  originalTop  = whichEl.offsetTop ;
  whichEl.style.left = whichEl.offsetLeft + "px";
  whichEl.style.top = whichEl.offsetTop + "px";
  currentX = (e.clientX + document.body.scrollLeft);
  currentY = (e.clientY + document.body.scrollTop);

  if (e.stopPropagation) {
    e.stopPropagation();
    e.preventDefault();
  }
  else {
    e.cancelBubble = true;
    e.returnValue = false;
  }
}
function moveEl(e) {
  e = e || window.event;

  window.scroll(0,0)
  if (whichEl == null) { return };
  newX = (e.clientX + document.body.scrollLeft);
  newY = (e.clientY + document.body.scrollTop);
  distanceX = (newX - currentX);
  distanceY = (newY - currentY);
  currentX = newX;
  currentY = newY;
  whichEl.style.left = whichEl.offsetLeft + distanceX + "px";
  whichEl.style.top = whichEl.offsetTop + distanceY + "px";

  stopEvent(e);
}
function dropEl(e) {        
  e = e || window.event;

  var DropFail=true;

  if (whichEl == null) { return };
  if (originalLocId == null) { return };

  for(var i = 0; i < obj.locations.length; i++) {
    if ((whichEl.offsetTop  > obj.locations[i][3] &&
        whichEl.offsetTop  < obj.locations[i][5] )&&
       (whichEl.offsetLeft > obj.locations[i][2] &&
        whichEl.offsetLeft < obj.locations[i][4])) {
      if  ( i != originalLocId ) {
        NewLocation=obj.locations[i][1];
        NewLocationName=obj.locations[i][0];
        LocationOk=true;
        if (obj.locations[i][8] == undefined) {
          LocationOk=CheckPatientLocation(NewLocation) 
        }
        if (LocationOk) {
          whichEl.style.top = obj.locations[i][7] + "px";
          whichEl.style.left = obj.locations[i][6] + "px";
          PatientNoArray = whichEl.id.split("-");
          PatientNo = PatientNoArray[1];
          obj.patients[PatientNo][3]=NewLocation
          updateLocation(obj.patients[PatientNo][1],NewLocation,"0"); 
          DropFail=false;
          break;
        }
        else {
          whichEl.style.top = originalTop + "px";
          whichEl.style.left = originalLeft + "px";
          break;
        }
      }
    }
  }

  if (whichEl.offsetTop != originalTop) {
    // we want to cancel click action since this is a drop cancellation
    // (i.e. patient dropped back into original ward cell)
    cancelClickAction = true;  
  }
  else {
    cancelClickAction = false;
  }

  if (DropFail) {
    whichEl.style.top = originalTop + "px";
    whichEl.style.left = originalLeft + "px";
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
        SwapEl.style.top = obj.locations[originalLocId][7] + "px";
        SwapEl.style.left = obj.locations[originalLocId][6] + "px";
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
  s.style.marginTop="25px";
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
  e = e || window.event;

  ClickEl = e.srcElement;
  if (top.content.location.search.substring(1,23)=="reportno=2&template=3") {
    if (IsDirtyTriage(top.content.UpdateForm)==true) {
      alert("Please complete all Triage details !"); return; 
    }
  }
// 
  if (top.content.location.search.substring(1,24)=="reportno=2&template=020") {
  if (IsDirtyTriage(top.content.UpdateForm)==true) {
     alert("Please complete all Registration/Triage details !"); return; }
  }
//
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

  stopEvent(e);
}
//------------------------------------------------------------
// Double Click on a Patient to Display Page in EmergencyFrame
//------------------------------------------------------------
function dblclickEl(e) {
  e = e || window.event;

  dblClickEl = e.srcElement;
  if (top.content.location.search.substring(1,23)=="reportno=2&template=3") {
    if (IsDirtyTriage(top.content.UpdateForm)==true) { return; }
  } 
  
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
function EmergencyTopPage() {
  var url = "../cgi-bin/emrweb02.pbl?" +
            "reportno=1&template=100" +
            "&urnumber=" + obj.patients[dblPatientNo][0].replace(/ /g,"+") +
            "&admissno=" + obj.patients[dblPatientNo][1].replace(/ /g,"+")
  if (EmergencyFullScreens) {
    EmergencyFrameLink(url,1,1,1008,744);
  } else {
    EmergencyFrameLink(url,1,1,1008,520);
  }
}
function ClickAction() {
  if (alreadyClicked) {
    alreadyClicked = false;  // reset
    clearTimeout(alreadyClickedTimeout);

    PatientNo = PatientNoArray[1];
    if (!cancelClickAction) {
      ShowPatientDetails(PatientNo);  // single-click; not a patient move
    }

    if (dblClicked) {
      EmergencyTopPage();
    }
  }
  else {
    alreadyClicked = true;
  }
}

//------------------------------------------------------------
// IsDirty used to lock the triage screen                   
//------------------------------------------------------------
function IsDirtyTriage(eForm) {
  for (var i=0; i < eForm.length; i++) {
    var eElem = eForm.elements[i];
    if ("text" == eElem.type || "textarea" == eElem.tagName) {
      if (eElem.value != eElem.defaultValue) return true;
    }
    else if ("checkbox" == eElem.type || "radio" == eElem.type) {
      if (eElem.checked != eElem.defaultChecked) return true;
    }
  }
  return false;
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
//--------------------------------------------------------------
// Prevent the event from bubbling and stop mouse text selection
//--------------------------------------------------------------
function stopEvent(e) {
  e = e || window.event;

  if (e.preventDefault) {
    e.preventDefault();
    e.stopPropagation();
  }
  else {
    e.returnValue = false;
    e.cancelBubble = true;
  }

  return false;
}
