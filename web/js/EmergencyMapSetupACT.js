//jsVersion  : V11.03.00
//======================================================================
// Emergency Department Map Display Script
// 
// V10.03.02 25/06/2013 Don Nguyen      CAR 286663
//           Enabled scrolling for 'EmergencyFrame' <iframe> (scrolling=yes)
// V10.03.01 11/04/2012 Saroeun Soeur   CAR 262646
//           changed iframe size to liquid width 100%
// V9.11.01  04/05/2009 Ebon Clements   CAR 196042
//           V9.11 CD diffs - Changed to use getMetaContents('RefreshTime')
// V9.09.01  24/10/2007 Peter McMullen  CAR 151514
//           Add auto scrollbar to #SystemComments
// V9.04.03  22/07/2005 Ebon Clements    CAR 57316
//           Changed NextEmergency to zero size
// V9.04.02  19/04/2005 Ebon Clements    CAR 60815
//           Removed expected patient functions
// V9.04.01  15/03/2005 Ebon Clements    CAR 58443
//           Added Triage6 class
// V9.04.00  09/03/2005 Ebon Clements CAR 59018
//           Created new js for act site specific emrweb0101001.html
//======================================================================
var ShowLocationAreas=true;
var LocationBackground="#FFEFCE";
var ShowPatients=true;
//var PatientCellHeight=45;
//var PatientCellWidth=150;
var PatientCellHeight=25;
var PatientCellWidth=250;
var PatientCellPaddingTop=1;
var PatientCellPaddingLeft=1;
// OffseType 0=Horizontal 1=Vertical
var OffsetType=1;
function  Map(BackGroundImage) {
 this.image = BackGroundImage;
 this.locations = new Array();
 this.patients = new Array();
 this.AddLocation = _AddLocation;
 this.AddPatient = _AddPatient;
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

///DISPLAY THE MAP
function ShowMap(immediate,emergency,urgent,semi,non) {
  obj.patients.sort(StringSort);
  var d = window.document;
  Refresh = getMetaContents('RefreshTime') + '000';
  window.setInterval("PageRefresh();",Refresh);
  var OtherIndex = obj.locations.length - 1
  d.writeln('<STYLE TYPE="text/css">');

  d.writeln('#NextEmergency {');
  d.writeln('position: absolute;');
  d.writeln('top: 0px;left:0px;width:0px;height:0px;');
  d.writeln('background-color:#cccccc;');
  d.writeln('clip: rect(0px,0px,0px,0px)');
  d.writeln('}');

  d.writeln('#EmergencyCount {');
  d.writeln('position: absolute;');
  d.writeln('top: 1px;left:2px;width:248px;height:45px;');
  d.writeln('background-color:#ffff00;');
  d.writeln('}');

  d.writeln('#BlackHole {');
  d.writeln('position: absolute;');
  d.writeln('top:50px;left:2px;width:248px;height:48px;');
  d.writeln('background-color:#000000;');
  d.writeln('position: absolute;');
  d.writeln('}');

  d.writeln('#EmergencyMenu {');
  d.writeln('position: absolute;');
  d.writeln('top: 497px;');
  d.writeln('left: 0px;');
  d.writeln('}');

  d.writeln('#OtherLocation {');
  d.writeln('position: absolute;');
  d.writeln('border-style: outset;');
  d.writeln('background-color: #cccccc;');
  d.writeln('top: 150px;');
  d.writeln('left: 300px;');
  d.writeln('width: 200px;');
  d.writeln('height: 80px;');
  d.writeln('}');

  d.writeln('#SystemComments {');
  d.writeln('position: absolute;');
  d.writeln('overflow: auto;');
  d.writeln('top:430px;left:1px;width:1000px;height:40px;');
  d.writeln('background-color:#cccccc;');
  d.writeln('}');

  d.writeln('#SmallTableLocation {');
  d.writeln('position: absolute;');
  d.writeln('overflow: auto;');
  d.writeln('top: 280px;left:502px;width:250px;height:120px;');
  d.writeln('background-color:#cccccc;');
  d.writeln('}');

  d.writeln('#ImageLocation {');
  d.writeln('background-image: url(../images/' + obj.image + ');');
  d.writeln('position: absolute;');
  d.writeln('}');

/////////////////////////////////////////////////////
  if (ShowLocationAreas) {
    for(var i = 0; i < obj.locations.length; i++) {
      if (obj.locations[i][2]!=obj.locations[i][6] ||
          obj.locations[i][3]!=obj.locations[i][7]){
        alert(obj.locations[i][0] + ' - Location Invlaid')}
      d.writeln('#Location-' + i + '{');
      d.writeln('  font-size: 9pt;');
      d.writeln('  border: solid; ');
      d.writeln('  border-width: 1px; ');
      d.writeln('  background-color: ' + LocationBackground + '; ');
      d.writeln('  position: absolute; ');
      d.writeln('  top:' + obj.locations[i][7] +  ';' );
      d.writeln('  left:' + obj.locations[i][6] + ';');
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
          d.writeln('top:' + obj.locations[j][7] +  ';' );
          d.writeln('left:' + obj.locations[j][6] + ';');
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

  d.writeln('<body id=ImageLocation>');

  if (ShowLocationAreas) {
    for(var i = 0; i < obj.locations.length; i++) {
       d.writeln('<div id=Location-' + i + '>');
       d.writeln(obj.locations[i][1]);
       d.writeln('</div>'); }}


////////////////////// DISPLAY THE PATIENT OBJECT  ///////////////////////////

  if (ShowPatients) {
   for(var i = 0; i < obj.patients.length; i++) 
   {
   TableHeight=PatientCellHeight-5
   TableWidth=PatientCellWidth-2
   d.writeln('<div id=Patient-' + i + '>');
   d.writeln('<table border=1 width=' + TableWidth +' height=' + TableHeight + ' cellpadding=1' + ' style="table-layout:fixed;" cellspacing=0 >')
   d.writeln('<tr height=20 class='+TriageColor(obj.patients[i][4]) + ' ' +'>')

// DISPLAY BED/CUBICLE
   d.writeln('<td align=center width=25 bgcolor=#cccccc>' + obj.patients[i][3] + '</td>');

// DISPLAY NAME
   d.writeln('<td width=75><b>' + obj.patients[i][2].replace(/ /g,"_") + '</b></td>');

// DISPLAY ARRIVAL TIME
   d.writeln('<td width=30>' + obj.patients[i][5].substr(8,5) + '&nbsp;</td>');

// DISPLAY INJURY 
   d.writeln('<td width=65>'+ obj.patients[i][8].substr(0,10)); 

// DISPLAY THE DOCTOR
   d.writeln('<td width=45>' + obj.patients[i][10].replace(/\s/g,"") +'</td>'); 
   
//FINISH UP TABLE
  d.writeln('</tr></table>') ;
  d.writeln('</div>');
 }
}

  d.writeln('<div id=SystemComments></div>');
  d.writeln('<div id=SmallTableLocation></div>');
  d.writeln('<div id=NextEmergency></div>');
  d.writeln('<div id=EmergencyCount></div>');
  d.writeln('<div id=BlackHole></div>');
  d.writeln('<script type="text\/javascript" ');
  d.writeln('src="../js/EmergencyMapFunctions.js">');
  d.writeln('<\/script>');
  d.writeln('<div id=EmergencyMenu></div>');
  d.writeln('<div name=EmergencyScreen id=EmergencyScreen'+
           ' style="display:none;width:100%;padding:0px;margin-top:-1px;margin-left:-1px;'+
            ' margin-right:4px;background-color:#cecece;z-index:10000;position:absolute;">'+
            '<iframe scrolling=yes width=100%  style="margin-right:4px;margin-bottom:4px;" height=100% name=EmergencyFrame>'+
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
  d.close()
}
function StringSort(a,b) {
  return a[12] - b[12];
}
function TriageColor(triagecode) {
  //alert('>'+ triagecode.replace(/ /g,"")+'<');
  switch (triagecode.replace(/ /g,"")) {
   case "":  return('Triage0');break;
   case "1": return('Triage1'); break;
   case "2": return('Triage2'); break;
   case "3": return('Triage3'); break;
   case "4": return('Triage4'); break;
   case "5": return('Triage5'); break;
   case "6": return('Triage6'); break;
   default : return('Triage0'); break;
 }
}
