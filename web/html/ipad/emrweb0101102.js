//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/emrweb0101102.js
//
// Modification 
//
// Version         Date                         Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.00       13/04/2012                   Version change
// V10.01.00       13/04/2012                   Version change
// V10.00.00       13/04/2012                   Created for Mobility Suite
//

//======================================================================
// Emergency Department Map Display Script
// V9.11.01  04/05/2009 Ebon Clements   CAR 196042
//           V9.11 CD diffs - Changed to use getMetaContents('RefreshTime')
// V9.10.01  08/07/2008 Jill Habasque   CAR 162660
//           Added alert indicator to AlertIcon  
// V9.09.03  16/11/2007 Ebon Clements   CAR 151894
//           Added ward/bed request functionality
// V9.09.02  01/11/2007 Ebon Clements   CAR 151800
//           Added retain previous cubicle display functionality
// V9.09.01  24/10/2007 Peter McMullen  CAR 151514
//           Add auto scrollbar to #SystemComments
// V9.07.01  18/09/2006 Ebon Clements    CAR 107243
//           Added AlertIconSmDelete
// V9.06.01  01/05/2006 Ebon Clements    CAR 103547
//           Fixed next patient test, it is now 9 characters
// V9.04.04  25/10/2005 Ebon Clements    CAR 80878
//           Changed to demo layout
// V9.04.03  28/09/2005 Ebon Clements    CAR 64055
//           Added sadfacelos
// V9.04.02  18/07/2005 Ebon Clements    CAR 56056
//           Removed expected patient display from the waiting room
// V9.04.01  15/03/2005 Ebon Clements    CAR 58443
//           Added Triage6 class and AlertIconSmBlack
// V9.04.00  Ebon Clements    CAR 56056
//           Added expected patient display on map and highlight for duplicate 
//           names
//======================================================================
var ShowLocationAreas=true;
var LocationBackground="transparent";
var ShowPatients=true;
var PatientCellHeight=45;
var PatientCellWidth=203;
var PatientCellPaddingTop=1;
var PatientCellPaddingLeft=0;
// OffseType 0=Horizontal 1=Vertical
var OffsetType=1;
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
function PatientLink(i) {
  PatientRecords = new Table();
  PatientRecords.rows=obj.patients;
  LinkPatient(i);
}
function PageRefresh() {
  if (document.getElementById('EmergencyScreen').style.display=="none") { location.reload(); }
}
function ShowMap(immediate,emergency,urgent,semi,non) {
  obj.patients.sort(StringSort);
  var d = window.document;
  Refresh = '180000';
  window.setInterval("PageRefresh();",Refresh);
  var OtherIndex = obj.locations.length - 1
  d.writeln('<STYLE TYPE="text/css">');
  if (ShowLocationAreas) {
    for(var i = 0; i < obj.locations.length; i++) {
      if (obj.locations[i][2]!=obj.locations[i][6] ||
          obj.locations[i][3]!=obj.locations[i][7]){
        alertify.alert(obj.locations[i][0] + ' - Location Invalid')}
      d.writeln('#Location-' + i + '{');
      d.writeln('  font-size: 9pt;');
      d.writeln('  border: 1px silver solid; ');
      d.writeln('  background-color: ' + LocationBackground + '; ');
      d.writeln('  position: absolute; ');
      d.writeln('  top:' + obj.locations[i][7] +  'px;' );
      d.writeln('  left:' + obj.locations[i][6] + 'px;');
      LocationWidth= obj.locations[i][4]-obj.locations[i][2]
      LocationHeight= obj.locations[i][5]-obj.locations[i][3]
      d.writeln('  width:' + LocationWidth +  'px;' );
      d.writeln('  height:' + LocationHeight + 'px;');
      d.writeln('}'); } }
  WaitPosition=0;
  for(var i = 0; i < obj.patients.length; i++) {
    d.writeln('#Patient-' + i + '{');
    d.writeln('cursor: move;');
    d.writeln('font-size: 9pt;');
    d.writeln('position: absolute; ');
    FoundLocation=0
    for(var j = 0; j < obj.locations.length; j++) {
       if ( obj.patients[i][3] == obj.locations[j][1] && 
            obj.locations[j][7] != 10000 &&
            obj.locations[j][8] != "HIDE") {
          FoundLocation=1
          d.writeln('top:' + obj.locations[j][7] +  'px;' );
          d.writeln('left:' + obj.locations[j][6] + 'px;');
          d.writeln('padding-left: ' + PatientCellPaddingLeft + 'px;');
          d.writeln('padding-top: ' + PatientCellPaddingTop + 'px;');
          d.writeln('height: ' + PatientCellHeight + 'px;');
          d.writeln('clip: rect(0px ' + PatientCellWidth + 'px ' +
                                        PatientCellHeight + 'px 0px);');
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
    if (FoundLocation==0) {
       d.writeln('top:' + obj.locations[OtherIndex][7] + ';');
       d.writeln('left:' + obj.locations[OtherIndex][6] + ';');
       d.writeln('padding-left: 0px;');
       d.writeln('padding-top: 0px;');
       d.writeln('height: ' + PatientCellHeight + 'px;');
       d.writeln('clip: rect(0px ' + PatientCellWidth + 'px ' +
                                     PatientCellHeight + 'px 0px);');
    }
    d.writeln('}');
  }       
  d.writeln('</style>');


  if (ShowLocationAreas) {
    var patientdisplay
    for(var i = 0; i < obj.locations.length; i++) {
       d.writeln('<div id=Location-' + i + '>');
       d.writeln(obj.locations[i][1]);
       
       patientdisplay=false;
       
       for(var r = 0; r < obj.patients.length; r++) {
           if (obj.patients[r][16]==obj.locations[i][1] &&
               obj.locations[i][1]!="WR "){
            d.writeln("<font color=DarkBlue>");
            d.writeln(obj.patients[r][2]);
            d.writeln(obj.patients[r][6]);
            d.writeln(obj.patients[r][7]);
            d.writeln("&nbsp;" + obj.patients[r][0]);
            d.writeln("<br>&nbsp;&nbsp;&nbsp;&nbsp",obj.patients[r][17]);
            d.writeln("(",obj.patients[r][3],")");
            d.writeln("</font>");
            patientdisplay=true;
            break;
          }
       }

      if(patientdisplay==false) {
        for(var e = 0; e < obj.expected.length; e++) {
          if (obj.expected[e][1]==obj.locations[i][1] &&
              obj.locations[i][1]!="WR "){
           d.writeln("<br>");
           d.writeln("&nbsp;&nbsp;&nbsp;<font color=red>");
           d.writeln(obj.expected[e][0] + obj.expected[e][2]);
           d.writeln("</font>");
           break;
          }
        }
       }

       d.writeln('</div>'); }}

  if (ShowPatients) {
    for(var i = 0; i < obj.patients.length; i++) {
     TableHeight=PatientCellHeight-5
     TableWidth=PatientCellWidth-2
     d.writeln('<div id=Patient-' + i + '>');
     d.writeln('<table border=0 style="border:1px solid silver" width=' + TableWidth +
               ' height=' + TableHeight + ' cellpadding=0' +
               ' style="table-layout:fixed;" cellspacing=0 onclick="PatientLink('+i+')">')
     d.writeln('<tr style="height:20px;" class='+TriageColor(obj.patients[i][4]) + ' ' +
               '><td align=center width=20>')
     d.writeln(obj.patients[i][3] + '</td>');
     if (obj.patients[i][15] == "1") {
       d.writeln('<td width=75 bgcolor=white><b><font color=red>' + 
                  obj.patients[i][2].replace(/ /g,"_") + 
                 '</font></b></td>');
     } else {
       d.writeln('<td width=75><b>' + obj.patients[i][2].replace(/ /g,"_") + 
                 '</b></td>');
     }
     if (obj.patients[i][14] == "1") {
       d.writeln('<td width=32 align=center>' + obj.patients[i][6] +
                 obj.patients[i][7] + '&nbsp;</td>');
       d.writeln('<td width=35><span class=EMSadFace></span></td>');
     } else if (obj.patients[i][14] == "2"){
      d.writeln('<td width=32 align=center>' + obj.patients[i][6] +
                obj.patients[i][7] + '&nbsp;</td>');
      d.writeln('<td width=35><span class=EMSadFaceLos></span></td>');

     } else {
       d.writeln('<td width=30 align=center>' + obj.patients[i][6] +
                 '&nbsp;</td>');
       d.writeln('<td width=35>' + obj.patients[i][7] + '&nbsp;</td>');
     }

     d.writeln('<td width=30>' + obj.patients[i][5].substr(8,5) + '&nbsp;</td>');
     d.writeln('</tr>') ;
     d.writeln('<tr style="height:22px;" bgcolor=#cccccc><td colspan=2>');
     d.writeln(obj.patients[i][8].substr(0,10));
     if (obj.patients[i][13].substr(0,1)=='1') {
       d.writeln('<span class=EMAlert></span>'); }
     if (obj.patients[i][13].substr(0,1)=='2') {
       d.writeln('<span class=EMAlertBlack></span>'); }
     if (obj.patients[i][13].substr(0,1)=='3') {
       d.writeln('<span class=EMAlertDelete></span>'); }
     if (obj.patients[i][13].substr(0,1)!=' '&&
         obj.patients[i][13].substr(0,1)!='' &&
         obj.patients[i][13].substr(0,1)!='1'&&
         obj.patients[i][13].substr(0,1)!='2'&&
         obj.patients[i][13].substr(0,1)!='3') {
         d.writeln('<span class=EMAlert'+ 
         obj.patients[i][13].substr(0,1) + '></span>>'); }
     if (obj.patients[i][13].substr(1,1)=='1') {
       d.writeln('<span class=EMResult></span>'); }
     d.writeln('&nbsp;</td>');

     if (obj.patients[i][9].substr(0,1)=="*") {
       d.writeln('<td><font color=red><b>' + 
                 obj.patients[i][9].substr(1,3).replace(/\s/g,"") +
                '</b></td>');
     } else if (obj.patients[i][9].substr(0,1)=="R") {
       d.writeln('<td bgcolor=red><b>' + 
                 obj.patients[i][9].substr(1,3).replace(/\s/g,"") +
                '</b></td>');
     } else if (obj.patients[i][9].substr(0,1)=="B") {
       d.writeln('<td bgcolor=lightblue><b>' + 
                 obj.patients[i][9].substr(1,3).replace(/\s/g,"") +
                '</b></td>');
     } else if (obj.patients[i][9].substr(0,1)=="G") {
       d.writeln('<td bgcolor=lightgreen><b>' + 
                 obj.patients[i][9].substr(1,3).replace(/\s/g,"") +
                '</b></td>');
     } else {
       d.writeln('<td>' + obj.patients[i][9].replace(/\s/g,"") +'&nbsp;</td>');}

     if  (obj.patients[i][12]=="000000000") {
        d.writeln('<td>' + obj.patients[i][10].replace(/\s/g,"") +'</td>'); }
     else {
       if (WaitPosition==0) {
          WaitPosition++;
          d.writeln('<td bgcolor=#ff0000>Next</font></td>');}
       else {
          d.writeln('<td bgcolor=#000000><font color=white>w-' + 
                    WaitPosition +'</font></td>');
          WaitPosition++; } }
     d.writeln('<td>' + obj.patients[i][11].replace(/\s/g,"") +'&nbsp;</td>');
     d.writeln('</tr></table>') ;
     d.writeln('</div>');
     }}
  d.writeln('<div id=SystemComments></div>');
//  d.writeln('<div id=SmallTableLocation></div>');
  d.writeln('<div id=NextEmergency></div>');
  d.writeln('<div id=EmergencyCount></div>');
  d.writeln('<div id=BlackHole></div>');
  d.writeln('<div id=EmergencyMenu></div>');
//  d.writeln('<script type="text\/javascript" ');
//  d.writeln('src="../js/EmergencyMapFunctions.js">');
//  d.writeln('<\/script>');
  d.writeln('<div name=EmergencyScreen id=EmergencyScreen'+
            ' style="display:none;z-index:10000;position:absolute;">'+
            '<iframe scrolling=no width=100% height=100% name=EmergencyFrame>'+
            '</iframe></div>')
  d.writeln("<form name=UpdateLocation action=emrweb01.pbl method=post>");
  d.writeln("<input type=hidden name=reportno value=3>");
  d.writeln("<input type=hidden name=template value=1>");
  d.writeln("<input type=hidden name=nextpage value=2>");
  d.writeln("<input type=hidden name=admissno value=''>");
  d.writeln("<input type=hidden name=updttype value='MOVEL'>");
  d.writeln("<input type=hidden name=username value=''>");
  d.writeln("<input type=hidden name=password value=''>");
  d.writeln("<input type=hidden name=updateky value=''>");
  d.writeln("<input type=hidden name=locacode value=''>");
  d.writeln("</form>");
  d.writeln('<\/body>');
  d.writeln('<\/html>');
  d.close();
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
