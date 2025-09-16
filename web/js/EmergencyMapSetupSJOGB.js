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

function displaySystemComments(SystemComments,Heading,Content,EmrSiteCode) {
  if (EmrSiteCode=="GL ") {
    SystemComments.innerHTML =
    "<table width=100% height=100% border=1 cellspacing=0 cellpadding=3>" +
    "<tr height=20><td class=HeadingCell align=center>"+Heading+"</td></tr>" +
    "<tr valign=top><td>" + Content + "</td></tr>" +
    "</table>";
  }
  else {
    SystemComments.innerHTML =
    "<table width=100% border=1 cellspacing=0 cellpadding=3>" +
    "<tr><td class=HeadingCell align=center>" + Heading + "</td></tr>" +
    "<tr valign=top height=157><td>" + Content + "</td></tr>" +
    "</table>";
  }
}

function addLoc(obj,EmrSiteCode) {
  //
  //  Add Location cells...
  //
  //  Description, Code, left, top, right, bottom, Start Position Left, Top
  //
  if (EmrSiteCode=="GL ") {
    //
    // SJOGHC Geelong 
    //
    obj.AddLocation("Waiting Room  ","WR ",0  ,0  ,602 ,166,0  ,0  ,"WAIT");
    obj.AddLocation("Resus         ","R01",0  ,171,200 ,227,0  ,171);
    obj.AddLocation("Cubicle 4     ","C04",0  ,228,200 ,284,0  ,228);
    obj.AddLocation("Cubicle 5     ","C05",0  ,285,200 ,341,0  ,285);
    obj.AddLocation("Cubicle 6     ","C06",0  ,342,200 ,398,0  ,342);
    obj.AddLocation("Cubicle 7     ","C07",0  ,399,200 ,455,0  ,399);

    obj.AddLocation("Cubicle 3     ","C03",201,171,401 ,227,201,171);
    obj.AddLocation("Radiology     ","RAD",201,228,602 ,394,201,228,"OTHER");
    obj.AddLocation("Cubicle 8     ","C08",201,399,401 ,455,201,399);
    
    obj.AddLocation("Cubicle 2     ","C02",402,171,602 ,227,402,171);
    obj.AddLocation("Cubicle 9     ","C09",402,399,602 ,455,402,399);

    obj.AddLocation("Plaster Room  ","PLA",603,0  ,803 ,56 ,603,0);
    obj.AddLocation("Treatment Room","TRE",603,57 ,803 ,113,603,57);
    obj.AddLocation("Eye Room      ","EYE",603,114,803 ,170,603,114);
    obj.AddLocation("Cubicle 1     ","C01",603,171,803 ,227,603,171);
    obj.AddLocation("Cubicle 10    ","C10",603,399,803 ,455,603,399);

    obj.AddLocation("Triage        ","TRI",804,0  ,1004,56 ,804,0);
    obj.AddLocation("Cubicle 12    ","C12",804,342,1004,398,804,342);
    obj.AddLocation("Cubicle 11    ","C11",804,399,1004,455,804,399);
  }
  else {
    //
    // Other SJOG Vic sites
    //
    obj.AddLocation("Corridor 2    ","CR2",807,450,1006,495,807,450);
    obj.AddLocation("Corridor 1    ","CR1",807,405,1006,450,807,405);
    obj.AddLocation("Cubicle 7     ","CU7",807,360,1006,405,807,360);
    obj.AddLocation("Cubicle 6     ","CU6",807,315,1006,360,807,315);
    obj.AddLocation("Cubicle 5     ","CU5",807,270,1006,315,807,270);
    obj.AddLocation("Cubicle 4     ","CU4",807,180,1006,225,807,180);
    obj.AddLocation("Plaster       ","PL1",807,90,1006,135,807,90);
    obj.AddLocation("XRY           ","XRY",807,0,1006,45,807,0,"HIDE");

    obj.AddLocation("Cubicle 3     ","CU3",605,180,806,225,605,180);
    obj.AddLocation("Consultant 2  ","CO2",605,90,806,135,605,90);
    obj.AddLocation("CT Scan       ","CTS",605,0,806,45,605,0,"HIDE");

    obj.AddLocation("Cubicle 2     ","CU2",404,180,604,225,404,180);
    obj.AddLocation("Consultant 1  ","CO1",404,90,604,135,404,90);
    obj.AddLocation("Ultrasound    ","ULT",404,0,604,45,404,0,"HIDE");

    obj.AddLocation("Resus 1A      ","R1A",203,450,403,495,203,450);
    obj.AddLocation("Cubicle 1     ","CU1",203,180,403,225,203,180);
    obj.AddLocation("Proc Room 1   ","PR1",203,90,403,135,203,90);
    obj.AddLocation("Assessment 1  ","AR1",203,45,403,90,203,45);
    obj.AddLocation("Nuclear Med   ","NUC",203,0,403,45,203,0,"HIDE");

    obj.AddLocation("Resus 1       ","R01",2,450,202,495,2,450);
    obj.AddLocation("Waiting Room  ","WR ",2,0,202,450,2,0,"WAIT");

    obj.AddLocation("Other         ","OTT",1024,1024,1024,1024,1024,1024);
  }
}

function ShowMap(immediate,emergency,urgent,semi,non,EmrSiteCode){
  if (EmrSiteCode == "GL ") {
    PatientCellHeight=55;
    ShowMapGL(immediate,emergency,urgent,semi,non); 
  }
  else {
    ShowMapOth(immediate,emergency,urgent,semi,non);
  }
}

function ShowMapGL(immediate,emergency,urgent,semi,non) {
  obj.patients.sort(StringSort);
  var d = window.document;
  Refresh = getMetaContents('RefreshTime') + '000';
  window.setInterval("PageRefresh();",Refresh);
  var OtherIndex = obj.locations.length - 1;

  d.writeln('<STYLE TYPE="text/css">');

  d.writeln('#NextEmergency {');
  d.writeln('position: absolute;');
  d.writeln('top: 56px;left:804px;width:200px;height:110px;');
  d.writeln('background-color:#cccccc;');
  d.writeln('clip: rect(0px,200,110,0)');
  d.writeln('}');

  d.writeln('#SystemComments {');
  d.writeln('position: absolute;');
  d.writeln('overflow: auto;');
  d.writeln('top: 168px;left:804px;width:200px;height:172px;');
  d.writeln('background-color:#cccccc;');
  d.writeln('}');

  d.writeln('#EmergencyCount {');
  d.writeln('position: absolute;');
  d.writeln('top: 228px;left:604px;width:198px;height:169px;');
  d.writeln('background-color:#ffff00;');
  d.writeln('}');

  d.writeln('#EmergencyMenu {');
  d.writeln('position: absolute;');
  d.writeln('top: 497px;');
  d.writeln('left: 0px;');
  d.writeln('}');

  d.writeln('#ImageLocation {');
  d.writeln('background-image: url(../images/' + obj.image + ');');
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

        // float patient blocks left-to-right, top-to-bottom within cell
        if ( (obj.locations[j][6] + PatientCellWidth + 1) <
              obj.locations[j][4] )
        {
          // set left pos...
          obj.locations[j][6] = obj.locations[j][6] + PatientCellWidth + 1;
        }
        else
        {
          if ( (obj.locations[j][7] + PatientCellHeight + 1) <
               obj.locations[j][5] )
          {
            // set left pos...
            if ( (obj.locations[j][6] + PatientCellWidth + 1)
                 < obj.locations[j][4] )
            {
              obj.locations[j][6] = obj.locations[j][6] + PatientCellWidth + 1;
            }
            else {
              obj.locations[j][6] = obj.locations[j][2];
            }

            // set top pos (1 row down)
            obj.locations[j][7] = obj.locations[j][7] + PatientCellHeight;
          }
          else {
            obj.locations[j][7] = 20000;  // set top pos outside visible area
          }
        }
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

              if(obj.patients[r][18].substr(8,1)=="1") {
                d.writeln('<span id="clinic01" class="Black">PTH</span>');
              } else if(obj.patients[r][18].substr(8,1)=="3" ||
                       obj.patients[r][18].substr(8,1) == '2' ) {
                d.writeln('<span id="clinic01" class="Green">PTH</span>');
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

     if (obj.patients[i][14] == "1") {
       d.writeln('<td width=30 align=center>' + obj.patients[i][6] +
                 obj.patients[i][7] + '&nbsp;</td>');
       d.writeln('<td width=35><img src=../images/sadface.gif class=TinyIcon>'
                 + '&nbsp;</td>');
     } else if (obj.patients[i][14] == "2"){
      d.writeln('<td width=30 align=center>' + obj.patients[i][6] +
                obj.patients[i][7] + '&nbsp;</td>');
      d.writeln('<td width=35><img src=../images/sadfacelos.gif class=TinyIcon>'
                 + '&nbsp;</td>');

     } else {
       d.writeln('<td width=30 align=center>' + obj.patients[i][6] +
                 '&nbsp;</td>');
       d.writeln('<td width=35>' + obj.patients[i][7] + '&nbsp;</td>');
     }

     d.writeln('<td width=30>' + obj.patients[i][5].substr(8,5) + '&nbsp;</td>');
     d.writeln('</tr>') ;
     d.writeln('<tr bgcolor=#cccccc>');

     // Presenting Complaint (add tooltip text in case overflowing)
     d.writeln('<td colspan=2 title="');
     if (obj.patients[i][22].substr(0,3)=="<b>") {
       d.writeln(obj.patients[i][22].substr(3,20) + '">');
       d.writeln(obj.patients[i][22].substr(0,23));
     } else {
       d.writeln(obj.patients[i][8] + '">');
       d.writeln(obj.patients[i][8].substr(0,10));
     }


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
     d.writeln('</tr>');
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

       if(obj.patients[i][18].substr(8,1)=="1") {
         d.writeln('<span id="clinic01" class="Black">PTH</span>');
       } else if(obj.patients[i][18].substr(8,1)=="3" ||
                 obj.patients[i][18].substr(8,1)=='2' ) {
         d.writeln('<span id="clinic01" class="Green">PTH</span>');
       }

       d.writeln('</td>');
       d.writeln('<td>' + obj.patients[i][19] + '</td>');
       d.writeln('<td>' + obj.patients[i][21] + '</td>');
       d.writeln('<td>' + obj.patients[i][20].substr(0,5) + '</td>');
       d.writeln('</tr>') ;
     }
     d.writeln('</table>');
     d.writeln('</div>');
     }}
  d.writeln('<div id=SystemComments></div>');
  d.writeln('<div id=SmallTableLocation></div>');
  d.writeln('<div id=NextEmergency></div>');
  d.writeln('<div id=EmergencyCount></div>');
  d.writeln('<div id=BlackHole></div>');
  d.writeln('<div id=BlackHole1></div>');
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

function ShowMapOth(immediate,emergency,urgent,semi,non) {
  obj.patients.sort(StringSort);
  var d = window.document;
  Refresh = getMetaContents('RefreshTime') + '000';
  window.setInterval("PageRefresh();",Refresh);
  var OtherIndex = obj.locations.length - 1
  d.writeln('<STYLE TYPE="text/css">');

  d.writeln('#EmergencyCount {');
  d.writeln('position: absolute;');
  d.writeln('top: 450px;left:404;width:196px;height:45;');
  d.writeln('background-color:#ffff00;');
  d.writeln('}');

  d.writeln('#BlackHole {');
  d.writeln('position: absolute;');
  d.writeln('top:0;left:807px;width:200px;height:45px;');
  d.writeln('background-color:#000000;');
  d.writeln('position: absolute;');
  d.writeln('}');

  d.writeln('#BlackHole1 {');
  d.writeln('position: absolute;');
  d.writeln('top:0;left:605px;width:200px;height:45px;');
  d.writeln('background-color:#000000;');
  d.writeln('position: absolute;');
  d.writeln('}');

  d.writeln('#BlackHole2 {');
  d.writeln('position: absolute;');
  d.writeln('top:0;left:404px;width:200px;height:45px;');
  d.writeln('background-color:#000000;');
  d.writeln('position: absolute;');
  d.writeln('}');

  d.writeln('#BlackHole3 {');
  d.writeln('position: absolute;');
  d.writeln('top:0;left:203px;width:200px;height:45px;');
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

  d.writeln('#SystemComments {');
  d.writeln('position: absolute;');
  d.writeln('overflow: auto;');
  d.writeln('top: 270;left:305px;width:399px;height:180;');
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
    d.writeln('text-overflow: ellipsis;');
    d.writeln('}');
  }       
  d.writeln('</style>');

  d.writeln('<body id=ImageLocation>');

  if (ShowLocationAreas) {
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

     if (obj.patients[i][14] == "1") {
       d.writeln('<td width=30 align=center>' + obj.patients[i][6] + 
                 obj.patients[i][7] + '&nbsp;</td>');
       d.writeln('<td width=35><img src=../images/sadface.gif class=TinyIcon>'
                 + '&nbsp;</td>');
     } else if (obj.patients[i][14] == "2"){
      d.writeln('<td width=30 align=center>' + obj.patients[i][6] +
                obj.patients[i][7] + '&nbsp;</td>');
      d.writeln('<td width=35><img src=../images/sadfacelos.gif class=TinyIcon>'
                 + '&nbsp;</td>');
     } else {
       d.writeln('<td width=30 align=center>' + obj.patients[i][6] + 
                 '&nbsp;</td>');
       d.writeln('<td width=35>' + obj.patients[i][7] + '&nbsp;</td>');
     }

     d.writeln('<td width=30>' + obj.patients[i][5].substr(8,5) + '&nbsp;</td>');
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
  d.writeln('<div id=SmallTableLocation></div>');
  d.writeln('<div id=NextEmergency></div>');
  d.writeln('<div id=EmergencyCount></div>');
  d.writeln('<div id=BlackHole></div>');
  d.writeln('<div id=BlackHole1></div>');
  d.writeln('<div id=BlackHole2></div>');
  d.writeln('<div id=BlackHole3></div>');
  d.writeln('<div id=EmergencyMenu></div>');
  d.writeln('<script type="text\/javascript" ');
  d.writeln('src="../js/EmergencyMapFunctions.js">');
  d.writeln('<\/script>');
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
