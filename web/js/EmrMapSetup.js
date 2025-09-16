//jsVersion  : V11.03.00
//======================================================================
// 
// 
// 
//======================================================================
function  Map(back) {
 this.image = back;
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
function ShowMap(immediate,emergency,urgent,semi,non) {
  var d = window.document;
  var OtherIndex = obj.locations.length - 1
  d.writeln('<STYLE TYPE="text/css">');
  d.writeln('#EmrMenu {');
  d.writeln('position: absolute;');
  d.writeln('top: 478px;');
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
  d.writeln('#ShowDetails {');
  d.writeln('position: absolute;');
  d.writeln('top: 502px;');
  d.writeln('left: 0px;');
  d.writeln('}');
  d.writeln('#ImageLocation {');
  d.writeln('background-image: url(../images/' + obj.image + ');');
  d.writeln('background-repeat: no-repeat;');
  d.writeln('position: absolute;');
  d.writeln('}');
  for(var i = 0; i < obj.patients.length; i++) {
    d.writeln('#Patient-' + i + '{');
    d.writeln('z-index: 1;');
    d.writeln('font-size: 9pt;');
    d.writeln('position: absolute; ');
    FoundLocation=0
    for(var j = 0; j < obj.locations.length; j++) {
       if ( obj.patients[i][1] == obj.locations[j][1] ) {
          FoundLocation=1
          d.writeln('top:' + obj.locations[j][7] +  ';' );
          d.writeln('left:' + obj.locations[j][6] + ';');
          d.writeln('padding-left: 5px;');
          d.writeln('padding-top: 3px;');
          d.writeln('height: 50px;');
          d.writeln('clip: rect(0px 120px 50px 0px);');
          obj.locations[j][7] += 40;
       }
    }
    if (FoundLocation==0) {
       d.writeln('top:' + obj.locations[OtherIndex][7] + ';');
       d.writeln('left:' + obj.locations[OtherIndex][6] + ';');
       d.writeln('padding-left: 5px;');
       d.writeln('padding-top: 3px;');
       d.writeln('height: 50px;');
       d.writeln('clip: rect(0px 120px 50px 0px);');
       obj.locations[OtherIndex][7] += 40;
    }
    d.writeln('}');
  }       
  d.writeln('</STYLE>');
  d.writeln('<script language=javascript>');
  d.writeln('function updOtherLocation() {');
  d.writeln(' UpdateWin=window.open("","HideUpdateWindow",');
  d.writeln(' "width=10,height=10,top=1024,directories=no,location=no" +');
  d.writeln(' ",scrollbars=no,status=no,toolbar=no,menubar=no,resizeable=no")');
  d.writeln(' UpdateLocation.target="HideUpdateWindow";');
  d.writeln(' UpdateLocation.locacode.value=SelectLocation.value ;');
  d.writeln(' UpdateLocation.submit()');
  d.writeln(' OtherLocation.style.display=\'none\';');
//  d.writeln(' dummy=0 ');
//  d.writeln('  while (UpdateWin.closed==false) { dummy+=1 } ');
//  d.writeln(' test=confirm("Update Details Now") '); 
//  d.writeln(' if (test) { ');
//  d.writeln(' PatientNoArray = whichEl.id.split("-"); ');
//  d.writeln(' PatientNo = PatientNoArray[1]; ');
//  d.writeln(" updateLocation(obj.patients[PatientNo][4],NewLocation," +
//            "document.clock.username.value,document.clock.password.value); ");
  d.writeln('}');
  d.writeln('</script>');
  d.writeln('<body id=ImageLocation>');
  for(var i = 0; i < obj.patients.length; i++) {
     d.writeln('<div id=Patient-' + i + '>');
          d.writeln('<table border=1 width=100 cellspacing=1' +
                    ' bgcolor=#DDDDDD cellpadding=0>' ) ;
          d.writeln('<tr><td align=center width=30>' ) ;
          d.writeln('<img src=../images/' + TriageTime(obj.patients[i][5],obj.patients[i][12],obj.patients[i][7],immediate,emergency,urgent,semi,non,obj.patients[i][25],obj.patients[i][26]) + '.gif align=absmiddle alt=' + obj.patients[i][4] + '>');
          d.writeln('</td><td colspan=2>' ) ;
     d.writeln('<b>' + FormatName(obj.patients[i][0]) + "</b>");
          d.writeln('</td></tr>' ) ;
          d.writeln('<tr><td>' ) ;
     d.writeln(obj.patients[i][7].substr(8,5));
          d.writeln('</td><td>&nbsp' ) ;
     d.writeln(obj.patients[i][8]);
          d.writeln('</td><td>&nbsp' ) ;
     d.writeln(obj.patients[i][9]);
          d.writeln('</td</tr></table>' ) ;
     d.writeln('</div>');
     }
  d.writeln('<div id=ShowDetails>');
  d.writeln('</div>');
  d.writeln('<script language="javascript" ');
  d.writeln('src="../js/EmrMapFunctions.js">');
  d.writeln('<\/script>');
  d.writeln('<div id=EmrMenu>');
  d.writeln("<table border=1 cellpadding=0" +
            " cellspacing=0 bgcolor=#CCCCCC width=100%><tr>");

  d.writeln("<td>");
  d.writeln("<input type=button value=\"Close\" class=button");
  d.writeln(" onclick=opener.parent.history.go(0);self.close()>");
  d.writeln("<input type=button value=\"Registration\" class=button");
  d.writeln(" onclick=location.href=\"patweb90.pbl?reportno=1&template=4\">");
  d.writeln("<input type=button value=\"Triage (New)\" class=button");
  d.writeln(" onclick=location.href=\"emrweb02.pbl?reportno=2&template=1\">");
//  d.writeln("<input type=button value=\"Close\" class=button");
//  d.writeln(" onclick=self.close()>");
  d.writeln("</td>");
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
  d.writeln("<form name=clock>");
  d.writeln("<td align=center>");
  d.writeln("<i>Username <input size=10 type=text name=username value=\"\">");
  d.writeln("<i>Password <input size=10 type=password name=password value=\"\">");
  d.writeln("</td>");

  d.writeln("<td align=right>");
  d.writeln("<input type=button name=face value=\"\" class=SmallButton>");
  showtime();
  d.writeln("</td>");
  d.writeln("</tr>");
  d.writeln("</table>");
  d.writeln("</tr></td></table>");
  d.writeln("</form>");
  d.writeln('</div>');
  d.writeln('<div id=OtherLocation name=OtherLocation style="display: none;">');
  d.writeln('<span class=DFrameTitleBar>');
  d.writeln("<img border=0 align=right src=../images/ExitIcon.gif");
  d.writeln(" onclick='OtherLocation.style.display=\"none\";" +
   "DropEl.style.pixelTop=originalTop;DropEl.style.pixelLeft=originalLeft;'>");
  d.writeln('Select New Location');
  d.writeln('</span>');
  d.writeln('<table width=100%>');
  d.writeln('<tr><td>Location</td>');
  d.writeln('    <td><select name=SelectLocation onChange=updOtherLocation()>');
  d.writeln('         <option></option>');
////  d.writeln(LocationOptions.innerHTML)
  d.writeln('         <option value="XR ">XRAY</option>');
  d.writeln('         <option value="CT ">CT Scan</option>');
  d.writeln('         <option value="US ">Ultrasound</option>');
  d.writeln('        </select>');
  d.writeln('    </td>');
  d.writeln('</tr>');
  d.writeln('</table>');
  d.writeln('</div>');
  d.writeln('<\/BODY>');
  d.writeln('<\/HTML>');
}
function showtime () {
var monthName = new Array();
monthName[0] = "Jan";
monthName[1] = "Feb";
monthName[2] = "Mar";
monthName[3] = "Apr";
monthName[4] = "May";
monthName[5] = "Jun";
monthName[6] = "Jul";
monthName[7] = "Aug";
monthName[8] = "Sep";
monthName[9] = "Oct";
monthName[10] = "Nov";
monthName[11] = "Dec";
var now = new Date();
var dy = now.getDate();
var mt = monthName[now.getMonth()];
var yr = now.getFullYear();
var hours = now.getHours();
var minutes = now.getMinutes();
var seconds = now.getSeconds();
var timeValue = "" + dy + " " + mt + " " + yr + "  "
timeValue += ((hours >12) ? hours -12 :hours);
if (timeValue == "0") timeValue = 12;
timeValue += ((minutes < 10) ? ":0" : ":") + minutes
//timeValue +=  ":" + seconds
timeValue += (hours >= 12) ? " P.M." : " A.M."
document.clock.face.value = timeValue;
timerID = setTimeout("showtime()",60000);
timerRunning = true;
}
function FormatName(Name) {
 NameFields=Name.split(",");
 Title=NameFields[2].substr(0,1) + NameFields[2].substr(1,5).toLowerCase()
 Initial=NameFields[1].substr(0,1);
 Surname=NameFields[0].substr(0,1) + NameFields[0].substr(1,25).toLowerCase()
 return( Initial + "." + Surname );
}
function FullName(Name) {
 NameFields=Name.split(",");
 if (NameFields == " ") { 
     return(""); 
   }
 Title=NameFields[2].substr(0,1) + NameFields[2].substr(1,5).toLowerCase()
 Initial=NameFields[1].substr(0,1);
 Given=NameFields[1].substr(0,1) + NameFields[1].substr(1,25).toLowerCase()
 Surname=NameFields[0].substr(0,1) + NameFields[0].substr(1,25).toLowerCase()
 return( Title + " " + Given + " " + Surname );
}
function FormatDate(date) {
   yyyy = date.substr(0,4)
   mm = date.substr(4,2)
   dd = date.substr(6,2)
   mth3=mm
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
   return(dd + " " + mth3 + " " + yyyy );
}
function DateTime(datetime) {
   yyyy = datetime.substr(0,4)
   mm = datetime.substr(4,2)
   dd = datetime.substr(6,2)
   time = datetime.substr(8,8)
   mth3=mm
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
   return(dd + " " + mth3 + " " + yyyy + " at " + time );
}

function CalcTime(datetime) {
   today = new Date();
   yyyy = datetime.substr(0,4)
   mm = datetime.substr(4,2)
   mm = mm - 1
   dd = datetime.substr(6,2)
   hh = datetime.substr(8,2)
   mi = datetime.substr(11,2)
   ss = datetime.substr(14,2)
   cdate = new Date(yyyy,mm,dd,hh,mi,ss);
   difference = today.getTime() - cdate.getTime();
   difference = Math.floor(difference / (1000 * 60));
   return(difference);
}
//
function TriageTime(triagecode,doctdttm,arrvdttm,immediate,emergency,urgent,semi,non,status,dest) {
   if(status=="2  ") {
     if(dest=="2") {
       theimage = "AdmitIcon";
     } else {
     theimage = "HomeIcon"; }
     return(theimage);
   }
   tcode= new String(triagecode)
   if ((doctdttm == "                ")||(doctdttm == "")) {
      datetime = arrvdttm;
      CalcTime(datetime);
      if ((triagecode == 1) & (difference >= immediate)) {
           theimage = "triage1f";
      }
      else { if ((triagecode == 2) & (difference >= emergency)) {
             theimage = "triage2f";
           }
           else { if ((triagecode == 3) & (difference >= urgent)) {
                  theimage = "triage3f";
                }
                else { if ((triagecode == 4) & (difference >= semi)) {
                       theimage = "triage4f";
                     }
                     else { if ((triagecode == 5) & (difference >= non)) {
                            theimage = "triage5f";
                          }
                          else { if (triagecode == 6) {
                                 theimage = "triage6";
                               }
                               else {
                                 theimage = "triage" + tcode.substr(0,1);
                                    }
                               }
                          }
                     }
                }
           }
   }
   else {
      theimage = "triage" + tcode.substr(0,1);
   }
   return(theimage);
}

function getUR() {
  ur = prompt("Please enter the U/R number of the patient you wish to register: ", "");
  if ((ur == null) || (ur == "")) {
     url = "emrweb01.pbl?reportno=1&template=1";
   }
  else if (ur != null) {
     url = "emrweb02.pbl?reportno=2&template=2&urnumber=" + ur;
   }
  location.href=url;
}
