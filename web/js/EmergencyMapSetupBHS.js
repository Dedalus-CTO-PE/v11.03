//jsVersion  : V11.03.00
//======================================================================
// Emergency Department Map Display Script
//======================================================================
var ShowLocationAreas=true;
var LocationBackground="#ffffee";
var ShowPatients=true;
var PatientCellHeight=45;
var PatientCellWidth=200;
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
  obj.patients.sort(StringSort);
  var d = window.document;
  Refresh = getMetaContents('RefreshTime') + '000';
  window.setInterval("PageRefresh();",Refresh);
  var OtherIndex = obj.locations.length - 1
  d.writeln('<STYLE TYPE="text/css">');
  d.writeln('#NextEmergency {');
  d.writeln('position: absolute;');
  d.writeln('top: 2px;left:2px;width:200px;height:88px;');
  d.writeln('background-color:#cccccc;');
  d.writeln('clip: rect(0px,200px,88px,0px)');
  d.writeln('}');
  d.writeln('#EmergencyCount {');
  d.writeln('position: absolute;');
  d.writeln('top: 137px;left:406px;width:197px;height:41px;');
  d.writeln('background-color:#ffff00;');
  d.writeln('}');

  d.writeln('#BlackHole {');
  d.writeln('position: absolute;');
  d.writeln('top:2px;left:806px;width:198px;height:43px;');
  d.writeln('background-color:#000000;');
  d.writeln('position: absolute;');
  d.writeln('}');

  d.writeln('#BlackHole1 {');
  d.writeln('position: absolute;');
  d.writeln('top:136px;left:606px;width:198px;height:43px;');
  d.writeln('background-color:#000000;');
  d.writeln('position: absolute;');
  d.writeln('}');

  d.writeln('#BlackHole2 {');
  d.writeln('position: absolute;');
  d.writeln('top:316px;left:606px;width:198px;height:43px;');
  d.writeln('background-color:#000000;');
  d.writeln('position: absolute;');
  d.writeln('}');

  d.writeln('#EmergencyMenu {');
  d.writeln('position: absolute;');
  d.writeln('width: 1024px;');
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
  d.writeln('#SmallTableLocation {');
  d.writeln('position: absolute;');
  d.writeln('overflow: auto;');
  d.writeln('top: 48px;left:406px;width:399px;height:87px;');
  d.writeln('background-color:#cccccc;');
  d.writeln('}');
  d.writeln('#SystemComments {');
  d.writeln('position: absolute;');
  d.writeln('overflow: auto;');
  d.writeln('top: 48px;left:406px;width:399px;height:25px;');
  d.writeln('background-color:#cccccc;');
  d.writeln('}');
  d.writeln('#ImageLocation {');
  d.writeln('background-image: url(../images/' + obj.image + ');');
//  d.writeln('background-repeat: no-repeat;');
  d.writeln('position: absolute;');
  d.writeln('}');
  if (ShowLocationAreas) {
    for(var i = 0; i < obj.locations.length; i++) {
      if (obj.locations[i][2]!=obj.locations[i][6] ||
          obj.locations[i][3]!=obj.locations[i][7]){
        alert(obj.locations[i][0] + ' - Location Invalid')}
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

    // For overflowing (long) text in cells display with ellipsis
    d.writeln('#Patient-' + i + ' td {');
    d.writeln('white-space: nowrap;');
    d.writeln('overflow: hidden;');
//  d.writeln('text-overflow: ellipsis;');
    d.writeln('}');
  }
  d.writeln('</style>');

  d.writeln('<body id=ImageLocation>');

  if (ShowLocationAreas) {
    for(var i = 0; i < obj.locations.length; i++) {
       d.writeln('<div id=Location-' + i + '>');
       d.writeln(obj.locations[i][1]);

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

       d.writeln('</div>'); }}

  if (ShowPatients) {
    for(var i = 0; i < obj.patients.length; i++) {
     TableHeight=PatientCellHeight-5
     TableWidth=PatientCellWidth-2
     d.writeln('<div id=Patient-' + i + '>');
     d.writeln('<table border=1 width=' + TableWidth +
               ' height=' + TableHeight + ' cellpadding=1' +
               ' style="table-layout:fixed;" cellspacing=0 >')
     d.writeln('<tr height=20 class='+TriageColor(obj.patients[i][4]) + ' ' +
               '><td align=center width=20>')
     d.writeln(obj.patients[i][3] + '</td>');

     // Patient Name (add tooltip text in case overflowing)
     d.writeln('<td width=75 title="' + obj.patients[i][2] + '"');
     if (obj.patients[i][15] == "1") {
       d.writeln(' bgcolor=white><b><font color=red>' + 
                  obj.patients[i][2].replace(/ /g,"_") + 
                 '</font></b></td>');
     } else {
       d.writeln(' ><b>' + obj.patients[i][2].replace(/ /g,"_") + 
                 '</b></td>');
     }

     // Face icon
     if (obj.patients[i][14] == "1") {
       d.writeln('<td width=30 align=center>' + obj.patients[i][6] + 
                 obj.patients[i][7] + '</td>');
       d.writeln('<td width=30><img src=../images/sadface.gif class=TinyIcon>'
                 + '</td>');
     } else if (obj.patients[i][14] == "2"){
      d.writeln('<td width=30 align=center>' + obj.patients[i][6] +
                obj.patients[i][7] + '</td>');
      d.writeln('<td width=30><img src=../images/sadfacelos.gif class=TinyIcon>'
                 + '</td>');
     } else {
       d.writeln('<td width=30 align=center>' + obj.patients[i][6] + 
                 '</td>');
       d.writeln('<td width=30>' + obj.patients[i][7] + '</td>');
     }

     // Time
     d.writeln('<td width=30 title="' + obj.patients[i][5].substr(8,5) + '">' +
               obj.patients[i][5].substr(8,5) + '</td>');
     d.writeln('</tr>') ;
     d.writeln('<tr bgcolor=#cccccc>');

     // Presenting Complaint (add tooltip text in case overflowing)
     d.writeln('<td colspan=2 title="' + obj.patients[i][8] + '">');
     d.writeln(obj.patients[i][8].substr(0,10));


     // Alert Icons
     var disAlrtInd = (obj.patients[i][49] != undefined)? obj.patients[i][49].substr(0,1) : '';

     if (disAlrtInd == '0' || disAlrtInd == '2') {
       // Medical, Micro & Risk alert icons...
       var PatientIND = obj.patients[i][39];

       if (PatientIND.substr(1,1)=="1") {
         // Med Alerts
         d.writeln('<img src=../images/AlertIconSmM.gif class=TinyIcon>');
       }
       if (PatientIND.substr(2,1)=="1") {
         // Micro Alerts
         d.writeln('<img src=../images/AlertIconSmB.gif class=TinyIcon>');
       }
       if (PatientIND.substr(3,1)=="1") {
         // Risk Alerts
         d.writeln('<img src=../images/AlertIconSmR.gif class=TinyIcon>');
       }

       var AlertInd = obj.patients[i][13].substr(0,1);
       if (AlertInd == '1') {
         // Alerts present
         d.writeln('<img src=../images/AlertIconSm.gif class=TinyIcon>');
       }
       else if (AlertInd == '2') {
         // Security Alerts
         d.writeln('<img src=../images/AlertIconSmBlack.gif class=TinyIcon>');
       }
       else if (AlertInd == '3') {
         // Deleted Alerts
         d.writeln('<img src=../images/AlertIconSmDelete.gif class=TinyIcon>');
       }
       else if (AlertInd != ' ') {
         // other Alert icons (PTMXSIN1)
         d.writeln('<img src=../images/AlertIconSm' +
           obj.patients[i][13].substr(0,1) + '.gif class=TinyIcon>');
       }
     }

     // Disability Alert icons...
     if (disAlrtInd == '1' || disAlrtInd == '2') {
       d.writeln('<img src=../images/AlertIconDIS.gif class=TinyIcon> ');
     }


     if (obj.patients[i][13].substr(1,1)=='1') {
       d.writeln('<img src=../images/ResultIconSm.gif class=TinyIcon>');
     }

     d.writeln('&nbsp;</td>');

     /* Cell 7 */
     /*
     if (obj.patients[i][9].substr(0,1)=="*") {
      d.writeln('<td><font color=red><b>' + 
                 obj.patients[i][9].replace(/\s/g,"") +
                '</b></td>');
     }
     else {
      d.writeln('<td>' + obj.patients[i][9].replace(/\s/g,"") +'&nbsp;</td>');
     }
     */

     if (obj.patients[i][25].substr(0,1)=="B") {
       d.writeln('<td><font color=black>' +
                 obj.patients[i][25].substr(1,3).replace(/\s/g,"") +
                '</td>');
     } else if (obj.patients[i][25].substr(0,1)=="R") {
       d.writeln('<td><font color=red>' +
                 obj.patients[i][25].substr(1,3).replace(/\s/g,"") +
                '</td>');
     } else if (obj.patients[i][25].substr(0,1)=="G") {
       d.writeln('<td><font color=green>' +
                 obj.patients[i][25].substr(1,3).replace(/\s/g,"") +
                '</td>');
     } else {
       // output 'Ready for Admission' code (Category 'et') 
       d.writeln('<td>' + obj.patients[i][24].replace(/\s/g,"") + 
        '&nbsp;</td>');
     }

     /* Cell 8 */
     if  (obj.patients[i][12]=="000000000") {
        d.writeln('<td>' + obj.patients[i][10].replace(/\s/g,"") +'</td>');
     }
     else {
       if (WaitPosition==0) {
          WaitPosition++;
          d.writeln('<td bgcolor=#ff0000>Next</font></td>');
       }
       else {
          d.writeln('<td bgcolor=#000000><font color=white>w-' + 
                    WaitPosition +'</font></td>');
          WaitPosition++; 
       }
     }

     /* Cell 9 */
   /*d.writeln('<td>' + obj.patients[i][11].replace(/\s/g,"") +'&nbsp;</td>');*/

      if (obj.patients[i][24]=="AP ")
      {
                d.writeln('<td><img src=../images/ExpiryIcon7.gif   class=TinyIcon></td>');
      }else if (obj.patients[i][24]=="AC "){
                d.writeln('<td><img src=../images/ExpiryIcon1.gif  class=TinyIcon></td>');
      }else if (obj.patients[i][24]=="TP "){
                d.writeln('<td><img src=../images/ExpiryIcon6.gif class=TinyIcon></td');
      }else if (obj.patients[i][9] != "    "){
                d.writeln('<td><img src=../images/ExpiryIcon0.gif class=TinyIcon></td');
      }else{
                d.writeln('<td>' + obj.patients[i][11].replace(/\s/g,"") +'&nbsp;</td>');
      }

     d.writeln('</tr></table>') ;
     d.writeln('</div>');
     }}
  d.writeln('<div id=SystemComments></div>');
  d.writeln('<div id=SmallTableLocation></div>');
  d.writeln('<div id=NextEmergency></div>');
  d.writeln('<div id=EmergencyCount></div>');
  d.writeln('<div id=BlackHole></div>');
  d.writeln('<div id=BlackHole1></div>');
  d.writeln('<div id=BlackHole2></div>');
  d.writeln('<div id=EmergencyMenu></div>');
  d.writeln('<script type="text/javascript" ');
  d.writeln('src="../js/EmergencyMapFunctions.js">');
  d.writeln('</script>');
  d.writeln('<div name=EmergencyScreen id=EmergencyScreen'+
           ' style="display:none;width:100%;padding:0px;margin-top:-1px;margin-left:-1px;'+
            ' margin-right:4px;background-color:#cecece;z-index:10000;position:absolute;">'+
            '<iframe scrolling=yes width=100% style="margin-right:4px;margin-bottom:4px;" height=98% name=EmergencyFrame id=EmergencyFrame>'+
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
  d.writeln("</body>");
  d.writeln("</html>");
  d.close()
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
