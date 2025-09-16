//jsVersion  : V11.03.00
//======================================================================
// Emergency Department Map Display Script - Healthe Care
//======================================================================
var ShowLocationAreas=true;
var LocationBackground="#ffffee";
var ShowPatients=true;
var PatientCellHeight=55;
var PatientCellWidth=250;
var PatientCellPaddingTop=1;
var PatientCellPaddingLeft=1;
var PatientCellLine3=false
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
function ShowMap(immediate,emergency,urgent,semi,non,EmrSiteCode,InvalidEMRCode) {
  obj.patients.sort(StringSort);
  var d = window.document;
  Refresh = getMetaContents('RefreshTime') + '000';
  window.setInterval("PageRefresh();",Refresh);
  var OtherIndex = obj.locations.length - 1
  d.writeln('<STYLE TYPE="text/css">');

// ****** Healthecare TVP *************************************************

  if (EmrSiteCode=="TVP") {

    InvalidEMRCode = "1";

    d.writeln('#SystemComments {');
    d.writeln('position: absolute;');
    d.writeln('overflow: auto;');
    d.writeln('top: 110;left:251;width:500;height:164;');
    d.writeln('background-color:#cccccc;');
    d.writeln('}');

    d.writeln('#BlackHole {');
    d.writeln('position: absolute;');
    d.writeln('top:275;left:251;width:250px;height:55px;');
    d.writeln('background-color:#000000;');
    d.writeln('position: absolute;');
    d.writeln('}');

    d.writeln('#BlackHole1 {');
    d.writeln('position: absolute;');
    d.writeln('top:275;left:502;width:250px;height:55px;');
    d.writeln('background-color:#000000;');
    d.writeln('position: absolute;');
    d.writeln('}');

    d.writeln('#EmergencyCount {');
    d.writeln('position: absolute;');
    d.writeln('top: 56;left:251;width:500px;height:54px;');
    d.writeln('background-color:#ffff00;');
    d.writeln('}');

  }

// ****** INVALID EMR SITE CODE ************************************************

  if (InvalidEMRCode=="0") {
    d.writeln('#InvalidEMRCode {');
    d.writeln('position: absolute;');
    d.writeln('top: 200;left:40;width:950;height:159;');
    d.writeln('background-color:#000000;');
    d.writeln('}');
  }

// ****************************************************************************

  d.writeln('#EmergencyMenu {');
  d.writeln('position: absolute;');
  d.writeln('width: 1024px;');
  d.writeln('top: 497px;');
  d.writeln('left: 0px;');
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
    d.writeln('text-overflow: ellipsis;');
    d.writeln('}');
  }       
  d.writeln('</style>');

  d.writeln('<body id=ImageLocation>');

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
            if(PatientCellLine3==true) {      // Print patient cell line 3
              if(obj.patients[r][18].substr(0,1)=="1") {
                d.writeln('<span id="clinic01" class="Black">XRY</span>');
              } else if(obj.patients[r][18].substr(0,1)=="2") {
                d.writeln('<span id="clinic01" class="Green">XRY</span>');
              }
              if(obj.patients[r][18].substr(1,1)=="1") {
                d.writeln('<span id="clinic01" class="Black">CT</span>');
              } else if(obj.patients[r][18].substr(1,1)=="2") {
                d.writeln('<span id="clinic01" class="Green">CT</span>');
              }
              if(obj.patients[r][18].substr(2,1)=="1") {
                d.writeln('<span id="clinic01" class="Black">US</span>');
              } else if(obj.patients[r][18].substr(2,1)=="2") {
                d.writeln('<span id="clinic01" class="Green">US</span>');
              }
              if(obj.patients[r][18].substr(3,1)=="1") {
                d.writeln('<span id="clinic01" class="Black">MRI</span>');
              } else if(obj.patients[r][18].substr(3,1)=="2") {
                d.writeln('<span id="clinic01" class="Green">MRI</span>');
              }
              if(obj.patients[r][18].substr(4,1)=="1") {
                d.writeln('<span id="clinic01" class="Black">NM</span>');
              } else if(obj.patients[r][18].substr(4,1)=="2") {
                d.writeln('<span id="clinic01" class="Green">NM</span>');
              }
              d.writeln("<br>&nbsp;&nbsp;&nbsp;&nbsp",obj.patients[r][19]);
              d.writeln(obj.patients[r][21]);
              d.writeln(obj.patients[r][20].substr(0,5));
            }
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
     if(PatientCellLine3==true) {      // Print patient cell line 3
       d.writeln('<table border=1 width=' + TableWidth +
                 ' height=' + TableHeight + ' cellpadding=0' +
                 ' style="table-layout:fixed;" cellspacing=0 >')
     } else {
       d.writeln('<table border=1 width=' + TableWidth +
                 ' height=' + TableHeight + ' cellpadding=1' +
                 ' style="table-layout:fixed;" cellspacing=0 >')
     }
     d.writeln('<tr height=20 class=' + TriageColor(obj.patients[i][4]) + '>');
     d.writeln('<td align=center width=20>' + obj.patients[i][3] + '</td>');

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

     d.writeln('<td width=30 align=center>' + obj.patients[i][6] +
               ',' + obj.patients[i][7] + '</td>');

     if (isWhitespace(obj.patients[i][24])) {
       if (obj.patients[i][14] == "1") {
         d.writeln('<td width=35><img src=../images/sadface.gif class=TinyIcon>'
                   + '&nbsp;</td>');
       } else if (obj.patients[i][14] == "2"){
      d.writeln('<td width=35><img src=../images/sadfacelos.gif class=TinyIcon>'
                   + '&nbsp;</td>');

       } else {
         d.writeln('<td width=35>' + obj.patients[i][24] + '&nbsp;</td>');
       }
     } else {
       d.writeln('<td width=35>' + obj.patients[i][24] + '&nbsp;</td>');
     }

     d.writeln('<td width=30>' + obj.patients[i][5].substr(8,5) + '&nbsp;</td>');
     d.writeln('</tr>') ;
     d.writeln('<tr bgcolor=#cccccc>');

     // Presenting Complaint (tooltip text)
     d.writeln('<td valign=top colspan=2 nowrap title="');
     if (obj.patients[i][22].substr(0,3)=="<b>") {
       d.writeln(obj.patients[i][22].substr(3,19));
     } else {
       d.writeln(obj.patients[i][22]);
     }
     d.writeln('">');


     // Alert Icons
     var disAlrtInd = (obj.patients[i][49] != undefined)? obj.patients[i][49].substr(0,1) : '';

     if (disAlrtInd == '0' || disAlrtInd == '2') {
       // Medical, Micro & Risk alert icons...
       var PatientIND = obj.patients[i][39];

       if (PatientIND.substr(1,1)=="1") {
         // Med Alerts
         d.writeln('<img src=../images/AlertIconM.gif class=TinyIcon>');
       }
       if (PatientIND.substr(2,1)=="1") {
         // Micro Alerts
         d.writeln('<img src=../images/AlertIconB.gif class=TinyIcon>');
       }
       if (PatientIND.substr(3,1)=="1") {
         // Risk Alerts
         d.writeln('<img src=../images/AlertIconR.gif class=TinyIcon>');
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
         d.writeln('<img src=../images/AlertIcon' +
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

     // Presenting Complaint
     if (obj.patients[i][22].substr(0,3)=="<b>") {
       d.writeln(obj.patients[i][22].substr(0,21));
     } else {
       d.writeln(obj.patients[i][22].substr(0,18));
     }

     d.writeln('</td>');

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
       d.writeln('<td>&nbsp;</td>');}

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
     d.writeln('</tr>') ;
     if(PatientCellLine3==true) {      // Print patient cell line 3
       d.writeln('<tr bgcolor=#cccccc valign=top><td colspan=2>');
       if(obj.patients[i][18].substr(0,1)=="1") {
         d.writeln('<span id="clinic01" class="Black">XRY</span>');
       } else if(obj.patients[i][18].substr(0,1)=="2") {
         d.writeln('<span id="clinic01" class="Green">XRY</span>');
       }
       if(obj.patients[i][18].substr(1,1)=="1") {
         d.writeln('<span id="clinic01" class="Black">CT</span>');
       } else if(obj.patients[i][18].substr(1,1)=="2") {
         d.writeln('<span id="clinic01" class="Green">CT</span>');
       }
       if(obj.patients[i][18].substr(2,1)=="1") {
         d.writeln('<span id="clinic01" class="Black">US</span>');
       } else if(obj.patients[i][18].substr(2,1)=="2") {
         d.writeln('<span id="clinic01" class="Green">US</span>');
       }
       if(obj.patients[i][18].substr(3,1)=="1") {
         d.writeln('<span id="clinic01" class="Black">MRI</span>');
       } else if(obj.patients[i][18].substr(3,1)=="2") {
         d.writeln('<span id="clinic01" class="Green">MRI</span>');
       }
       if(obj.patients[i][18].substr(4,1)=="1") {
         d.writeln('<span id="clinic01" class="Black">NM</span>');
       } else if(obj.patients[i][18].substr(4,1)=="2") {
         d.writeln('<span id="clinic01" class="Green">NM</span>');
       }
       d.writeln('</td>');
       d.writeln('<td>' + obj.patients[i][19] + '</td>');
       d.writeln('<td>' + obj.patients[i][21] + '</td>');
       d.writeln('<td>' + obj.patients[i][20].substr(0,5) + '</td>');
       d.writeln('</tr>') ;
     }
     d.writeln('</table>') ;
     d.writeln('</div>');
     }}
  d.writeln('<div id=SystemComments></div>');
  d.writeln('<div id=SmallTableLocation></div>');
  d.writeln('<div id=NextEmergency></div>');
  d.writeln('<div id=EmergencyCount></div>');
  d.writeln('<div id=BlackHole></div>');
  d.writeln('<div id=BlackHole1></div>');
  d.writeln('<div id=BlackHole2></div>');
  d.writeln('<div id=BlackHole3></div>');
  d.writeln('<div id=BlackHole4></div>');
  d.writeln('<div id=BlackHole5></div>');
  d.writeln('<div id=BlackHole6></div>');
  d.writeln('<div id=BlackHole7></div>');
  d.writeln('<div id=BlackHole8></div>');
  d.writeln('<div id=InvalidEMRCd></div>');
  d.writeln('<div id=EmergencyMenu></div>');
  d.writeln('<script type="text/javascript" ');
  d.writeln('src="../js/EmergencyMapFunctions.js">');
  d.writeln('</script>');
  d.writeln('<div name=EmergencyScreen id=EmergencyScreen'+
           ' style="display:none;width:100%;padding:0px;margin-top:-1px;margin-left:-1px;'+
            ' margin-right:4px;background-color:#cecece;z-index:10000;position:absolute;">'+
            '<iframe scrolling=yes width=100% style="margin-right:4px;margin-bottom:4px;" height=100% name=EmergencyFrame id=EmergencyFrame>'+
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
   case "9": return('Triage9'); break;
   default : return('Triage0'); break;
 }
}
function addLoc(obj,EmrSiteCode) {

// ****** Healthecare TVP*************************************************

  if (EmrSiteCode=="TVP") {

    obj.AddLocation("TR4           ","TR4",753,440,1003,495,753,440);
    obj.AddLocation("ME4           ","ME4",753,385,1003,440,753,385);
    obj.AddLocation("GC4           ","GC4",753,330,1003,385,753,330);
    obj.AddLocation("C9            ","C9 ",753,275,1003,330,753,275);
    obj.AddLocation("C8            ","C8 ",753,220,1003,275,753,220);
    obj.AddLocation("C7            ","C7 ",753,165,1003,220,753,165);
    obj.AddLocation("C6            ","C6 ",753,110,1003,165,753,110);
    obj.AddLocation("C5            ","C5 ",753,55 ,1003,110,753,55);

    obj.AddLocation("TR3           ","TR3",502,440,753,495,502,440);
    obj.AddLocation("ME3           ","ME3",502,385,753,440,502,385);
    obj.AddLocation("GC3           ","GC3",502,330,753,385,502,330);
    obj.AddLocation("ECG           ","ECG",502,275,753,330,502,275,"HIDE");

    obj.AddLocation("TR2           ","TR2",251,440,502,495,251,440);
    obj.AddLocation("ME2           ","ME2",251,385,502,440,251,385);
    obj.AddLocation("GC2           ","GC2",251,330,502,385,251,330);
    obj.AddLocation("XRY           ","XRY",251,275,502,330,251,275,"HIDE");

    obj.AddLocation("TR1           ","TR1",0,440,251,495,0,440);
    obj.AddLocation("ME1           ","ME1",0,385,251,440,0,385);
    obj.AddLocation("GC1           ","GC1",0,330,251,385,0,330);
    obj.AddLocation("C4            ","C4 ",0,220,251,275,0,220);
    obj.AddLocation("C3            ","C3 ",0,165,251,220,0,165);
    obj.AddLocation("R2            ","R2 ",0,110,251,165,0,110);
    obj.AddLocation("R1            ","R1 ",0,55,251,110,0,55);
    obj.AddLocation("WR            ","WR ",0,0,1003,55,0,0,"WAIT");
  }
  obj.AddLocation("Other         ","OTR",1024,1024,1024,1024,1024,1024);
}
function displaySystemComments(SystemComments,title,heading,content) {

  SystemComments.innerHTML=
  "<table width=100% border=1 cellspacing=0 cellpadding=3>" +
  "<tr><td class=HeadingCell align=center>"+title+"</td></tr>"+
  "<tr><td bgcolor=white align=center>"+heading+"</td></tr>"+
  "<tr valign=top height=115><td>"+content+"</td></tr></table>";

}
function displayEmergencyCount(EmergencyCount,total,waiting,unseen,expected) {

  EmergencyCount.innerHTML=
  "<table border=0 cellspacing=0 cellpadding=1 width=100%>" +
  "<tr height=20><td>Total :</td><td><b>"+total+"</td>" +
  "    <td>Waiting</td><td><b>"+waiting+"</td>" +
  "    <td>Unseen</td><td><b>"+unseen+"</td>" +
  "</tr>" +
  "<tr height=20 valign=bottom><td>Expected :</td><td><b>"+expected+"</td>" +
  "    <td>&nbsp;</td><td>&nbsp;</td>" +
  "    <td>&nbsp;</td><td>&nbsp;</td>" +
  "</tr>" +
  "</table>"

}
function displayBlackHole(BlackHole,iconch,onclickfunction,title,noofpat) {

  if (iconch=="O") {

    BlackHole.innerHTML=
    "<table border=0 cellspacing=2 cellpadding=4 width=100%>" +
    "<tr height=40 valign=middle><td align=center>" +
    "<img src=../images/next1.gif class=Icon onclick=" + onclickfunction +
    "></td>" +
    "<td><font color=white size=2>"+title+"</td>" +
    "<td><font color=white size=2>"+noofpat+"</td>" +
    "</tr></table>"

  } else {

    BlackHole.innerHTML=
    "<table border=0 cellspacing=2 cellpadding=4 width=100%>" +
    "<tr height=40 valign=middle><td align=center>" +
    "<img src=../images/TrekIcon.gif class=Icon onclick=" + onclickfunction +
    "></td>" +
    "<td><font color=white size=2>"+title+"</td>" +
    "<td><font color=white size=2>"+noofpat+"</td>" +
    "</tr></table>"

  }

}
function SSWWardList() {
 if(top.content.location.search.substring(1,23)=="reportno=2&template=3"){
 if (IsDirtyTriage(top.content.UpdateForm)==true) { return; }}
 url = "../cgi-bin/patweb93.pbl?reportno=01&template=011" +
       "&wardcode=SSW"
 top.menu.EmergencyFrameLink(url,0,0,1022,521)
}
function OtherLocations(code) {
 if(top.content.location.search.substring(1,23)=="reportno=2&template=3"){
 if (IsDirtyTriage(top.content.UpdateForm)==true) { return; }}
 url = "../cgi-bin/emrweb01.pbl?reportno=01&template=012&filtlocn="+code
 parent.content.location=url
}
function displayInvalidEMRCode() {
    
    InvalidEMRCd.innerHTML=
    "<table border=0 cellspacing=2 cellpadding=4 width=100%>" +
    "<tr height=40 valign=middle>" +
    "<td align=middle><font color=red size=10>Invalid EMR Site Code</td>" +
    "</tr></table>"

}
