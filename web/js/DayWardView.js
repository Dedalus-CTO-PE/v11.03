//jsVersion  : V11.03.00
//========================================================================
// Program   : DayWardView.js
//
// Written   : 28.09.2011 B.G.Ackland
//
// Function  : New Oncology View functions
//
//============================================================
// Show Day View
//============================================================
var mapView;
var timeSlots=25;
var timeStartHH=7;
var timeStartMI=0;
var mapString;
var originalLocId = null ;
var whichEl = null;
var DropEl = null;
var DropFail = true;
var dragOn = false;
var chartColor = new Array();
var RegimeClassCode;
var ClassArray   = new Array();
var RegimeClassIDs   = new Array();
var RegimeClassNames = new Array();
//
function InitDisplay() {
 SelectColors(document.getElementById("cellColor"));
 mapView = new WardMap();
 slotID = new Array();
 loadBeds();
 loadEvents();
 loadRegimes();
 loadClosures();
 drawSlots();
 drawEvents();
 drawLegends();

 if (document.getElementById('wdbdsrch') != undefined) {
   if (document.getElementById('wdbdsrch').value == "1") {
     return;  // Ward/Bed Search mode so we don't allow drag & drop; read-only
   }
 }
 document.onmousedown = grabEl;
 document.onmousemove = moveEl;
 document.onmouseup   = dropEl;
 activeEl             = document.getElementById('OutputLocation');
}
//============================================================
// Draw the Day View
//============================================================
function drawLegends() {
 os = "<table border=0 cellpadding=2 cellspacing=1>"
 for (i=0 ; i< mapView.regimes.length ; i++) {
   os += "<tr><td onclick='SetStyle(\"evtRegime"+mapView.regimes[i][0]+"\");' "+
         "class=evtRegime"+mapView.regimes[i][0] +
         " style='text-align:center;width:50px;cursor:pointer'>" + 
         mapView.regimes[i][0] +
         "</td><td>"+mapView.regimes[i][2] +
         "</td></tr>"
 }
 os += "</table>";
 ot=document.getElementById("RegimeLegend");
 ot.innerHTML=os;

 os = "<table border=0 cellpadding=2 cellspacing=1>"
 
 for (i=0 ; i< mapView.regimes.length ; i++) {
   classIDa=mapView.regimes[i][0]
   classIDb=mapView.regimes[i][0]
   classDesc=mapView.regimes[i][2]

// Duplicates

   classIDa=mapView.regimes[i][0] + mapView.regimes[i][0];
   classDesc=mapView.regimes[i][2] + " and " + mapView.regimes[i][2];

   os += "<tr>"+
           "<td onclick='SetStyle(\"evtRegime"+classIDa+"\");' "+ "class=evtRegime"+classIDa +
           " style='width:40px;cursor:pointer'>"+classIDa+ "</td>"+
           "<td></td>" +
           "<td style='white-space:nowrap'>"+classDesc + "</td></tr>"

// EndDuplicates

   for (j=i+1 ; j < mapView.regimes.length ; j++) {
     classIDa=mapView.regimes[i][0]+mapView.regimes[j][0]
     classIDb=mapView.regimes[j][0]+mapView.regimes[i][0]
     classDesc=mapView.regimes[i][2]+" and "+mapView.regimes[j][2]
     os += "<tr>"+
           "<td onclick='SetStyle(\"evtRegime"+classIDa+"\");' "+ "class=evtRegime"+classIDa +
           " style='width:40px;cursor:pointer'>"+classIDa+ "</td>"+
           "<td onclick='SetStyle(\"evtRegime"+classIDb+"\");' "+ "class=evtRegime"+classIDb +
           " style='width:40px;cursor:pointer'>"+classIDb+ "</td>"+
           "<td style='white-space:nowrap'>"+classDesc + "</td></tr>"
   }
 }
 os += "</table>";
 ot=document.getElementById("RegimeCombo1");
 ot.innerHTML=os;



 os = "<table border=0 cellpadding=2 cellspacing=1>"
 for (var i=0 ; i< mapView.regimes.length ; i++) {

// Triplicates

   classID1=mapView.regimes[i][0]+mapView.regimes[i][0]+mapView.regimes[i][0]
   classDesc=mapView.regimes[i][2]+" and "+mapView.regimes[i][2]+" and "+mapView.regimes[i][2];

os += "<tr>"+
                     "<td onclick='SetStyle(\"evtRegime"+classID1+"\");' "+ "class=evtRegime"+classID1 +
                     " style='width:40px;cursor:pointer'>"+classID1+ "</td>"+
                     "<td></td>" +
                     "<td></td>" +
                     "<td></td>" +
                     "<td></td>" +
                     "<td></td>" +
                     "<td style='white-space:nowrap'>"+classDesc + "</td></tr>"

// EndTriplicates

   for (var j=0 ; j < mapView.regimes.length ; j++) {
     if (mapView.regimes[i][0]!=mapView.regimes[j][0]) {
       for (var k=0 ; k < mapView.regimes.length ; k++) {
         if (mapView.regimes[i][0]!=mapView.regimes[k][0]) {
           if (mapView.regimes[j][0]!=mapView.regimes[k][0]) {
             classID1=mapView.regimes[i][0]+mapView.regimes[j][0]+mapView.regimes[k][0]
             addRow=true;
             for (var a=0;a<ClassArray.length;a++) { if (classID1==ClassArray[a]) addRow=false; }
             if (addRow) {
               classID2=mapView.regimes[i][0]+mapView.regimes[k][0]+mapView.regimes[j][0]
               classID3=mapView.regimes[j][0]+mapView.regimes[i][0]+mapView.regimes[k][0]
               classID4=mapView.regimes[j][0]+mapView.regimes[k][0]+mapView.regimes[i][0]
               classID5=mapView.regimes[k][0]+mapView.regimes[j][0]+mapView.regimes[i][0]
               classID6=mapView.regimes[k][0]+mapView.regimes[i][0]+mapView.regimes[j][0]
               classDesc=mapView.regimes[i][2]+" and "+mapView.regimes[j][2]+" and "+mapView.regimes[k][2];
               os += "<tr>"+
                     "<td onclick='SetStyle(\"evtRegime"+classID1+"\");' "+ "class=evtRegime"+classID1 +
                     " style='width:40px;cursor:pointer'>"+classID1+ "</td>"+
                     "<td onclick='SetStyle(\"evtRegime"+classID2+"\");' "+ "class=evtRegime"+classID2 +
                     " style='width:40px;cursor:pointer'>"+classID2+ "</td>"+
                     "<td onclick='SetStyle(\"evtRegime"+classID3+"\");' "+ "class=evtRegime"+classID3 +
                     " style='width:40px;cursor:pointer'>"+classID3+ "</td>"+
                     "<td onclick='SetStyle(\"evtRegime"+classID4+"\");' "+ "class=evtRegime"+classID4 +
                     " style='width:40px;cursor:pointer'>"+classID4+ "</td>"+
                     "<td onclick='SetStyle(\"evtRegime"+classID5+"\");' "+ "class=evtRegime"+classID5 +
                     " style='width:40px;cursor:pointer'>"+classID5+ "</td>"+
                     "<td onclick='SetStyle(\"evtRegime"+classID6+"\");' "+ "class=evtRegime"+classID6 +
                     " style='width:40px;cursor:pointer'>"+classID6+ "</td>"+
                     "<td style='white-space:nowrap'>"+classDesc + "</td></tr>"
               ClassArray[ClassArray.length]=classID1
               ClassArray[ClassArray.length]=classID2
               ClassArray[ClassArray.length]=classID3
               ClassArray[ClassArray.length]=classID4
               ClassArray[ClassArray.length]=classID5
               ClassArray[ClassArray.length]=classID6
             }
           }
         }
       }
     }
   }
 }
 os += "</table>";
 ot=document.getElementById("RegimeCombo2");
 ot.innerHTML=os;
}
//============================================================
// Draw the Day View
//============================================================
function drawSlots() {
 os = "<table border=0 cellpadding=0 cellspacing=0"+
      " class=DiaryPage><tr><td class=TimeCell>Time</td>";
 timeHH=timeStartHH
 timeMI=timeStartMI
 for (i=0 ; i< timeSlots; i++) {
   HH=timeHH;
   if (timeHH<10) HH='0'+timeHH;
   MI=timeMI;
   if (timeMI<10) MI='0'+timeMI;
   os+="<td class=TimeCell>"+HH+":"+MI+"</td>";
   slotID[i]="T"+HH+MI
   if (timeMI==30){
     timeHH++;
     timeMI=0;
   }
   else {
     timeMI=30;
   }
 }
 os +="</tr>"
 for (i=0 ; i< mapView.beds.length ; i++) {
    bedCode=mapView.beds[i][1].replace(/ /g,"-");
    os+='<tr><td class=BedCell>'+mapView.beds[i][2]+'</td>'
    for (j=0 ; j< timeSlots; j++) {
      timeHH=slotID[j].replace(/.*T/,"").substr(0,2);
      timeMI=slotID[j].replace(/.*T/,"").substr(2,2);

      bedclosed = false;

      for (k=0 ; k< mapView.closures.length ; k++) {
        if (mapView.closures[k][1] == mapView.beds[i][1]) {
          if (document.SelectPeriod.lastdate.value >= mapView.closures[k][2] &&
              document.SelectPeriod.lastdate.value <= mapView.closures[k][4]) {

            if (mapView.closures[k][2] != mapView.closures[k][4]) {
              bedclosed = true;
              break;
            }

            timeStringStart = timeHH+":"+timeMI+":00";

            if (timeMI == "00") {
              timeStringEnd = timeHH+":29:00";
            }

            if (timeMI == "30") {
              timeStringEnd = timeHH+":59:00";
            }

            if (timeStringEnd >= mapView.closures[k][3] &&
                timeStringStart <= mapView.closures[k][5]) {
              bedclosed = true;
              break;
            }

//            if (timeStringStart <= mapView.closures[k][5]) {
//              bedclosed = true;
//              break;
//            }
          }
        }
      }

      if (bedclosed) {
        os+="<td class=ClosedCell><font color=white>CLOSED&nbsp;</font></td>";
      } else {
        os+="<td class=slotLocation rowsSet='' title='"+
            "Bed  : "+mapView.beds[i][1]+
            "\nTime : "+timeHH+":"+timeMI+
            "' id="+bedCode+slotID[j]+
            " onclick=\"BookSlot("+
            "'"+mapView.beds[i][0]+"',"+
            "'"+mapView.beds[i][1]+"',"+
            "'"+slotID[j]+"',"+
            "'"+mapView.beds[i][2]+"',"+
            "'"+mapView.beds[i][5]+"'"+
            ");\"" +
            ">&nbsp;</td>";
      }
    }
    os+='</tr>'
 }
 os+="</table>"
 ot=document.getElementById("OutputLocation");
 ot.innerHTML=os;
}
//============================================================
// Draw the Events
//============================================================
function drawEvents() {
 ot=document.getElementById("OutputLocation");
 os='';
 SortOrderBy=28;
 mapView.events.sort(StringSort)
 for (i=0 ; i< mapView.events.length ; i++) {
   patName=mapView.events[i][4].replace(/<b>/i,"").replace(/<\/b>/i,"") 
   patName=patName.replace(/\s+/g," ");
   patName=patName.replace(/'/g,"`");
   slotID=mapView.events[i][1].replace(/ /g,"-")+"T"+mapView.events[i][7].replace(/:/,"");

   slotID = roundOffSlotID(slotID);

   ts=document.getElementById(slotID);
   
   if (ts == undefined)
     continue;

   rowsSet=ts.getAttribute('rowsSet');
   if (rowsSet.indexOf("0")<0) {
     ts.setAttribute('rowsSet',rowsSet+"1");
     offsetRows=rowsSet.length;
   }
   else {
     ts.setAttribute('rowsSet',rowsSet.replace(/0/,'1'));
     offsetRows=rowsSet.indexOf("0");
   }
   eventTop=1+ts.offsetTop+ot.offsetTop+offsetRows*20;
   eventLeft=1+ts.offsetLeft;
   slotCount=Math.round(parseInt(mapView.events[i][8],10)/30);
   eventWidth=ts.offsetWidth
   firstRowsSet=rowsSet;
   timeHH=parseInt(mapView.events[i][7].substr(0,2),10);
   timeMI=mapView.events[i][7].substr(3,2);
   if (slotCount==1&&!isWhitespace(rowsSet)) {k=0;}else{k=1;}
   for (;k<slotCount;k++) {
     if (timeMI=="30"){ timeHH++;timeMI="00"; } else { timeMI="30"; }
     slotID=mapView.events[i][1].replace(/ /g,"-")+"T"+timeHH+timeMI
     if (timeHH<10) slotID=mapView.events[i][1].replace(/ /g,"-")+"T0"+timeHH+timeMI;
     el=document.getElementById(slotID);
     if (el==null) {
//       alert('Event at '+mapView.events[i][7]+' extends out of hours for - '+patName);
      }
     else {
       rowsSet=el.getAttribute('rowsSet');
       el.setAttribute('rowsSet',rowsSet+"1");
       if (rowsSet==firstRowsSet) { 
         if (rowsSet.indexOf("0")<0) {
           el.setAttribute('rowsSet',rowsSet+"1");
         }
         else {
           el.setAttribute('rowsSet',rowsSet.replace(/0/,'1'));
         }
       }
       else { 
         el.setAttribute('rowsSet',rowsSet+"01"); 
       }
       if (offsetRows>0) {
         maxHeight=((offsetRows+1)*21);
         if (maxHeight>ts.parentElement.offsetHeight) {
           ts.parentElement.style.height=maxHeight+"px";
         }
       }
     }
   }
   eventWidth=(eventWidth*slotCount)-slotCount;
   slotID=mapView.events[i][1].replace(/ /g,"-")+"T"+mapView.events[i][7].replace(/:/,"");
   eventClasses=' evtStatus' + mapView.events[i][11];
   if (!isWhitespace(mapView.events[i][13])) eventClasses+=' evtBedReq';
   eventClasses+=' evtRegime' 
   if (!isWhitespace(mapView.events[i][24])) eventClasses+=mapView.events[i][24];
   if (!isWhitespace(mapView.events[i][25])) {
     if (mapView.events[i][25]!=mapView.events[i][24]) {  /* Ignore if duplicated */
      eventClasses+=mapView.events[i][25];
     }
   }
   if (!isWhitespace(mapView.events[i][26])) {
     if (mapView.events[i][26]!=mapView.events[i][24]) {  /* Ignore if duplicated */
       if (mapView.events[i][26]!=mapView.events[i][25]) {  /* Ignore if duplicated */
         eventClasses+=mapView.events[i][26];
       }
     }
   }
   os += "<div id='Event-" + i + "'" +
         " slotID='"+slotID+"'" +
         " onclick=\"OpenPatient(this);\"' "+
         " urnumber='"+mapView.events[i][2]+"'" +
         " admissno='"+mapView.events[i][3]+"'" +
         " wardcode='"+mapView.events[i][0]+"'" +
         " beddcode='"+mapView.events[i][1]+"'" +
         " ptstatus='"+mapView.events[i][11]+"'" +
         " ptrgm001='"+mapView.events[i][29]+"'" +
         " ptrgm002='"+mapView.events[i][30]+"'" +
         " ptrgm003='"+mapView.events[i][31]+"'" +
         " bkrec033='"+mapView.events[i][9]+"'" +
         " class='eventBlock"+eventClasses+"'" +
         " style='" +
         "top:"+eventTop+"px;" +
         "left:"+eventLeft+"px;" +
         "width:"+eventWidth+"px;" +
         "cursor:pointer;'" +
         " title='" +
         "Name\t\t " + patName + "\t\t" +
         "\nTelephone\t " +trim(mapView.events[i][27]) +
         "\nMRN\t\t " +trim(mapView.events[i][2]) +
         "\nVisit\t\t " +trim(mapView.events[i][3]) +
         "\nAge/Gender\t " +trim(mapView.events[i][6] +
           " / "+mapView.events[i][5]) +
         "\nAdmission Date\t " +FormatDate(mapView.events[i][16]);
   if (!isWhitespace(mapView.events[i][18])) os+= "\nExp. Discharge\t " +FormatDateTime(mapView.events[i][18]);
   if (!isWhitespace(mapView.events[i][14])) os+= "\nDiagnosis\t " +trim(mapView.events[i][14]);
   if (!isWhitespace(mapView.events[i][19])) os+= "\nSpeciality\t " +trim(mapView.events[i][19]);
   if (!isWhitespace(mapView.events[i][20])) os+= "\nHealth Fund\t " +mapView.events[i][20].replace(/\s+/g," ");
   if (!isWhitespace(mapView.events[i][15])) os+= "\nDoctor\t\t " +trim(mapView.events[i][15]);
   if (!isWhitespace(mapView.events[i][21])) os+= "\nRegime 1\t " +trim(mapView.events[i][21]);
   if (!isWhitespace(mapView.events[i][22])) os+= "\nRegime 2\t " +trim(mapView.events[i][22]);
   if (!isWhitespace(mapView.events[i][23])) os+= "\nRegime 3\t " +trim(mapView.events[i][23]);
   if (!isWhitespace(mapView.events[i][32])) os+= "\nComments\t " +trim(mapView.events[i][32]);
   if (!isWhitespace(mapView.events[i][33])) os+= "\nDrug Orders\t " +trim(mapView.events[i][33]);
   os += "' " +
         "><span class=smallFolder></span>" + patName +"</div>"
 }
 ot=document.getElementById("EventLocation");
 ot.innerHTML=os;
}
function BookSlot(Ward,Bed,Slot) {
 status="";
 theDate=SelectPeriod.lastdate.options[SelectPeriod.lastdate.selectedIndex].value;
 theTime=Slot.replace(/T/,"")
 theTime=theTime.substr(0,2)+":"+theTime.substr(2,2)
 theURL="watweb01.pbl?reportno=02&template=023"+
        "&bookward="+Ward.replace(/ /g,"+")+
        "&bookebed="+Bed.replace(/ /g,"+")+
        "&bookdate="+theDate+
        "&booktime="+theTime
// location.href=theURL;
 DFrameLink(theURL,10,100,1000,600);
}
function OpenPatient(el) {
 if (dragOn) { return };
 theDate=SelectPeriod.lastdate.options[SelectPeriod.lastdate.selectedIndex].value;
 slottime=el.getAttribute("slotID").replace(/.*T/g,"")
 slottime=slottime.substr(0,2)+":"+slottime.substr(2,2);
 theURL="oprweb01.pbl?reportno=07&template=001"+
        "&urnumber="+el.getAttribute("urnumber").replace(/ /g,"+")+
        "&admissno="+el.getAttribute("admissno").replace(/ /g,"+")+
        "&wardcode="+el.getAttribute("wardcode").replace(/ /g,"+")+
        "&beddcode="+el.getAttribute("beddcode").replace(/ /g,"+")+
        "&slotdate="+theDate +
        "&slottime="+slottime
//alert(theURL);
 if (el.getAttribute("ptstatus")=="2") {
   theURL="patweb89.pbl?reportno=01&template=032"+
        "&urnumber="+el.getAttribute("urnumber").replace(/ /g,"+")+
        "&admissno="+el.getAttribute("admissno").replace(/ /g,"+")
 }

 if (el.getAttribute("ptstatus")=="3") {
   theURL="patweb89.pbl?reportno=01&template=030"+
        "&urnumber="+el.getAttribute("urnumber").replace(/ /g,"+")+
        "&admissno="+el.getAttribute("admissno").replace(/ /g,"+")
 }

 if (el.getAttribute("ptstatus")=="4") {
   theURL="patweb98.pbl?reportno=01&template=049"+
        "&urnumber="+el.getAttribute("urnumber").replace(/ /g,"+")+
        "&admissno="+el.getAttribute("admissno").replace(/ /g,"+")
 }

 location.href=theURL;
}
function WardMap() {
 this.beds = new Array();
 this.events = new Array();
 this.regimes = new Array();
 this.closures = new Array();
 this.addBed = _AddBed;
 this.addEvent = _AddEvent;
 this.addRegime = _AddRegime;
 this.addClosure = _AddClosure;
}
function  _AddClosure() {
  this.closures[this.closures.length] = new Array();
  var closures = this.closures[this.closures.length-1];
  for(var i = 0; i < arguments.length; i++)
     closures[closures.length] = arguments[i];
}
function  _AddBed() {
  this.beds[this.beds.length] = new Array();
  var beds = this.beds[this.beds.length-1];
  for(var i = 0; i < arguments.length; i++)
     beds[beds.length] = arguments[i];
}
function  _AddEvent() {
  this.events[this.events.length] = new Array();
  var events = this.events[this.events.length-1];
  for(var i = 0; i < arguments.length; i++)
     events[events.length] = arguments[i];
}
function  _AddRegime() {
  this.regimes[this.regimes.length] = new Array();
  var regimes = this.regimes[this.regimes.length-1];
  for(var i = 0; i < arguments.length; i++)
     regimes[regimes.length] = arguments[i];
}
function StringSort(a,b) {
  if (a[SortOrderBy] < b[SortOrderBy] ) { x = -1 }
  if (a[SortOrderBy] == b[SortOrderBy] ) { x = 0  }
  if (a[SortOrderBy] > b[SortOrderBy] ) { x = 1  }
  return x ;
}
function FormatDateTime(theDate) {
   if (isWhitespace(theDate)) return "";
   yyyy = theDate.substr(0,4);
   mm = theDate.substr(4,2);
   dd = theDate.substr(6,2);
   theTime = theDate.substr(8,5);
   mth3=mth3Name(mm);
   if (isWhitespace(theTime)) {
      return(dd + " " + mth3 + " " + yyyy); }
   else {
     return(dd + " " + mth3 + " " + yyyy + " at " + theTime); }
}

function FormatDate(theDate) {
   if (isWhitespace(theDate)) return "";
   yyyy = theDate.substr(0,4)
   mm = theDate.substr(4,2)
   dd = theDate.substr(6,2)
   mth3=mth3Name(mm);
   return(dd + " " + mth3 + " " + yyyy  );
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
function NewBooking() {
   theURL="watweb01.pbl?reportno=2&template=023";
   DFrameLink(theURL,10,100,1000,600);
//   location.href=theURL;
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
  e = e ? e : window.event;
  whichEl = e.srcElement;
  while (whichEl.id.indexOf("Event") == -1) 
  {
    whichEl = whichEl.parentElement;
    if (whichEl == null) { return; } 
  }
  if (whichEl != activeEl) 
  {
    whichEl.style.zIndex = activeEl.style.zIndex + 100;
    activeEl = whichEl;        
  }
  ot=document.getElementById("OutputLocation");
  originalLocId = null ;
  originalLocId= whichEl.getAttribute("slotID");
  originalLeft = whichEl.offsetLeft;
  originalTop  = whichEl.offsetTop;
  whichEl.style.left = whichEl.offsetLeft + "px";
  whichEl.style.top = whichEl.offsetTop + "px";
  currentX = (e.clientX + document.body.scrollLeft);
  currentY = (e.clientY + document.body.scrollTop);
  dragOn=false;
}
function moveEl(e) { 
  e = e ? e : window.event;
  if (whichEl == null) { return };
  window.scroll(0,0)
  newX = (e.clientX + document.body.scrollLeft);
  newY = (e.clientY + document.body.scrollTop);
  distanceX = (newX - currentX);
  distanceY = (newY - currentY);
  currentX = newX;
  currentY = newY;
  whichEl.style.left = whichEl.offsetLeft + distanceX + "px";
  whichEl.style.top = whichEl.offsetTop + distanceY + "px";
  e.returnValue = false;
  dragOn=true;
}
function dropEl() {        
  DropFail=true
  ot=document.getElementById("OutputLocation");
  if (whichEl == null) { return };
  if (originalLocId == null) { return };
  mapLocations = document.getElementsByTagName("TD")
  for(var i = 0; i < mapLocations.length; i++) {
   if (mapLocations[i].className=="slotLocation") {
     if ( (whichEl.offsetTop > (mapLocations[i].offsetTop + ot.offsetTop) &&
           whichEl.offsetTop < (mapLocations[i].offsetTop + ot.offsetTop + mapLocations[i].offsetHeight)) &&
          (whichEl.offsetLeft > mapLocations[i].offsetLeft &&
           whichEl.offsetLeft < (mapLocations[i].offsetLeft + mapLocations[i].offsetWidth)) ) {

       originalLocId = roundOffSlotID(originalLocId);

       if ( mapLocations[i].id != originalLocId ) {
         NewLocation=mapLocations[i].id;
         whichEl.style.top = mapLocations[i].offsetTop + ot.offsetTop + "px";
         whichEl.style.left = mapLocations[i].offsetLeft + "px";
         updateLocation(whichEl.id,NewLocation); 
         DropFail=false
         break; 
       }
     }
   }
  }
  if (DropFail) {
    whichEl.style.top = originalTop + "px";
    whichEl.style.left = originalLeft + "px";
  }
  DropEl = whichEl;
  whichEl = null;    
}    
//------------------------------------------------------------
// Update TIme Slot & bed
//------------------------------------------------------------
function updateLocation(eventID,slotID) {
  el=document.getElementById(eventID)
  sl=document.getElementById(slotID)
  pat_status=el.getAttribute("ptstatus");
  if(pat_status=="4"){
    alert("Patient is discharged, unable to move beds.");
    location.reload(); 
    return;
  }
//** booked and preadmitted patients, update via oprweb01 **//
  if(pat_status=="1" ||pat_status=="2"){
  theDate=SelectPeriod.lastdate.options[SelectPeriod.lastdate.selectedIndex].value;
  var serverURL   = "../cgi-bin/oprweb01.pbl?reportno=7" +
                    "&urnumber=" + el.getAttribute("urnumber").replace(/ /g,"+") +
                    "&admissno=" + el.getAttribute("admissno").replace(/ /g,"+") +
                    "&bkrec015=" + el.getAttribute("wardcode").replace(/ /g,"+") +
                    "&bkrec018=" + slotID.substr(0,3).replace(/-/g,"+") +
                    "&bokrx002=" +el.getAttribute("wardcode").replace(/ /g,"+")+
                    "&bokrx038=" + slotID.substr(0,3).replace(/-/g,"+") +
                    "&ptrgm001=" + el.getAttribute("ptrgm001").replace(/ /g,"+") +
                    "&ptrgm002=" + el.getAttribute("ptrgm002").replace(/ /g,"+") +
                    "&ptrgm003=" + el.getAttribute("ptrgm003").replace(/ /g,"+") +
                    "&bkrec033=" + el.getAttribute("bkrec033").replace(/ /g,"+") +
                    "&bkrec004=" + FormatDate(theDate).replace(/ /g,"+") +
                    "&bkrec005=" + slotID.substr(4,2) +":"+ slotID.substr(6,2) +":00"+
                    "&updttype=U"
    var returnValue = RSExecute(serverURL);
    location.reload();
  }
//** current admissions, update via bed transfer **//
  if(pat_status=="3"){
//  alert(originalLocId.substr(4,4) + slotID.substr(4,4));

    if (originalLocId.substr(4,4) != slotID.substr(4,4)) {
      alert("Patient is admitted, unable to move time slot. Only location change permitted.");
      location.reload();
      return;
    } 

    SetCookie("tranward",el.getAttribute("wardcode"));
    SetCookie("tranbed",slotID.substr(0,3).replace(/-/g,"+"));

    var linkurl   = "../cgi-bin/patweb96.pbl?reportno=3&template=020" +
        "&urnumber="+el.getAttribute("urnumber").replace(/ /g,"+")+
        "&admissno="+el.getAttribute("admissno").replace(/ /g,"+")+
        "&wardcode="+el.getAttribute("wardcode").replace(/ /g,"+")+
        "&trntowrd="+el.getAttribute("wardcode").replace(/ /g,"+")+
        "&trntobed="+slotID.substr(0,3).replace(/-/g,"+")+
        "&dayoncol=1"
    DFrameLink(linkurl,50,250,500,300)
  }
}
function roundOffSlotID(slotLocID) {
 
  if (parseInt(slotLocID.substring(6,8)) < 30) {
    slotLocID = slotLocID.substring(0,6) + "00" 
  } else {
    slotLocID = slotLocID.substring(0,6) + "30"
  }
 
//  alert(slotLocID);

  return slotLocID;
}
function SetStyle(el) {
  var sl=parseInt(document.getElementById("seclevel").value,10);
  if (sl<50) {
    alert("Security level inadequate to alter legend highlights.");
    return;
  }
  RegimeClassCode=el;
  var cellSample=document.getElementById("cellSample");
  cellSample.style.color='';
  cellSample.style.background='';
  cellSample.style.backgroundColor='';
  cellSample.style.border='';
  cellSample.className=el;
  var PageSet=document.getElementById("PageSettings");
  PageSet.style.position='absolute';
  PageSet.style.top='50px';
  PageSet.style.left='50px';
  PageSet.style.width='400px';
  PageSet.style.height='320px';
  PageSet.style.backgroundColor='white';
  PageSet.style.border='solid 3px #ccc';
  PageSet.style.display="inline-block";
  PageSet.style.zIndex=90000;
  PageSet.style.display='';
  var selectList=document.getElementById("borderColor");
  selectList.selectedIndex=GetCookieData('borderColor');
      selectList=document.getElementById("borderWidth");
  selectList.selectedIndex=GetCookieData('borderWidth');
      selectList=document.getElementById("textColor");
  selectList.selectedIndex=GetCookieData('textColor');
      selectList=document.getElementById("cellColor");
  selectList.selectedIndex=GetCookieData('cellColor');
      selectList=document.getElementById("Marker");
  selectList.selectedIndex=GetCookieData('Marker');
      selectList=document.getElementById("FontWeight");
  selectList.selectedIndex=GetCookieData('FontWeight');
  SetSample();
}
function SaveSettings() {
  var classString="";
  var el=document.getElementById("borderColor");
  var bc=el.options[el.selectedIndex].value;
  SetCookie('borderColor',el.selectedIndex);

  el=document.getElementById("borderWidth");
  var bw=el.options[el.selectedIndex].value;
  SetCookie('borderWidth',el.selectedIndex);

  el=document.getElementById("textColor");
  var fg=el.options[el.selectedIndex].value;
  SetCookie('textColor',el.selectedIndex);

  el=document.getElementById("cellColor");
  var bg=el.options[el.selectedIndex].value;
  SetCookie('cellColor',el.selectedIndex);

  el=document.getElementById("Marker");
  var bi=el.options[el.selectedIndex].value;
  SetCookie('Marker',el.selectedIndex);

  el=document.getElementById("FontWeight");
  var fw=el.options[el.selectedIndex].value;
  SetCookie('FontWeight',el.selectedIndex);

  el=document.getElementById("cellSample");
  el.style.color='';
  el.style.background='';
  el.style.backgroundColor='';
  el.style.border='';
  if (!isWhitespace(fw)){classString+="font-weight:"+fw+";"; }
  if (!isWhitespace(fg)){classString+="color:"+fg+";"; }
  if (!isWhitespace(bi)){
    classString+="background-image:url(\"../images/"+bi+"\");";
    classString+="background-repeat:no-repeat;";
    classString+="background-position:top right;";
  }
  if (!isWhitespace(bg)){classString+="background-color:"+bg+";"; }
  if (!isWhitespace(bc)){classString+="border:solid "+bw+" "+bc+";"; }
  UpdateStyle(RegimeClassCode,classString);
  location.reload();
}
function UpdateStyle(fieldName,fieldString) {
  el=document.getElementById("pageContext");
  var pk=el.options[el.selectedIndex].value;
  var theURL="StyleSheet.php?reportno=2"+
             "&pagekey="+pk+
             "&classkey="+fieldName+
             "&classval="+fieldString
  var xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.status == 200) {
    if (xmlHttp.responseText!="UPDATED") {
      alert(xmlHttp.responseText);
    }
  } else {
    alert("ERROR : Can't Save. StyleSheet.php is not available on your system.");
  }
}
function HideSettings() {
  var el=document.getElementById("PageSettings");
  el.style.display='none';
}
function SetSample() {
  var el=document.getElementById("borderColor");
  var bc=el.options[el.selectedIndex].value;
  el=document.getElementById("borderWidth");
  var bw=el.options[el.selectedIndex].value;
  el=document.getElementById("textColor");
  var fg=el.options[el.selectedIndex].value;
  el=document.getElementById("cellColor");
  var bg=el.options[el.selectedIndex].value;
  el=document.getElementById("Marker");
  var bi=el.options[el.selectedIndex].value;
  el=document.getElementById("FontWeight");
  var fw=el.options[el.selectedIndex].value;
  el=document.getElementById("cellSample");
  el.style.color='';
  el.style.background='';
  el.style.backgroundColor='';
  el.style.border='';
  if (!isWhitespace(fw)){el.style.fontWeight=fw; }
  if (!isWhitespace(fg)){el.style.color=fg; }
  if (!isWhitespace(bi)){el.style.background='  url("../images/'+bi+'") no-repeat right top'; }
  if (!isWhitespace(bg)){el.style.backgroundColor=bg; }
  if (!isWhitespace(bc)){el.style.border='solid '+bw+' '+bc; }
}
function SelectColors(selectElement) {
  selectElement.options[selectElement.options.length] = new Option("default","");
  addColorOption(selectElement,"AliceBlue");
  addColorOption(selectElement,"AntiqueWhite");
  addColorOption(selectElement,"Aqua");
  addColorOption(selectElement,"Aquamarine");
  addColorOption(selectElement,"Azure");
  addColorOption(selectElement,"Beige");
  addColorOption(selectElement,"Bisque");
  addColorOption(selectElement,"Black");
  addColorOption(selectElement,"BlanchedAlmond");
  addColorOption(selectElement,"Blue");
  addColorOption(selectElement,"BlueViolet");
  addColorOption(selectElement,"Brown");
  addColorOption(selectElement,"BurlyWood");
  addColorOption(selectElement,"CadetBlue");
  addColorOption(selectElement,"Chartreuse");
  addColorOption(selectElement,"Chocolate");
  addColorOption(selectElement,"Coral");
  addColorOption(selectElement,"CornflowerBlue");
  addColorOption(selectElement,"Cornsilk");
  addColorOption(selectElement,"Crimson");
  addColorOption(selectElement,"Cyan");
  addColorOption(selectElement,"DarkBlue");
  addColorOption(selectElement,"DarkCyan");
  addColorOption(selectElement,"DarkGoldenRod");
  addColorOption(selectElement,"DarkGray");
  addColorOption(selectElement,"DarkGreen");
  addColorOption(selectElement,"DarkKhaki");
  addColorOption(selectElement,"DarkMagenta");
  addColorOption(selectElement,"DarkOliveGreen");
  addColorOption(selectElement,"DarkOrange");
  addColorOption(selectElement,"DarkOrchid");
  addColorOption(selectElement,"DarkRed");
  addColorOption(selectElement,"DarkSalmon");
  addColorOption(selectElement,"DarkSeaGreen");
  addColorOption(selectElement,"DarkSlateBlue");
  addColorOption(selectElement,"DarkSlateGray");
  addColorOption(selectElement,"DarkTurquoise");
  addColorOption(selectElement,"DarkViolet");
  addColorOption(selectElement,"DeepPink");
  addColorOption(selectElement,"DeepSkyBlue");
  addColorOption(selectElement,"DimGray");
  addColorOption(selectElement,"DodgerBlue");
  addColorOption(selectElement,"FireBrick");
  addColorOption(selectElement,"FloralWhite");
  addColorOption(selectElement,"ForestGreen");
  addColorOption(selectElement,"Fuchsia");
  addColorOption(selectElement,"Gainsboro");
  addColorOption(selectElement,"GhostWhite");
  addColorOption(selectElement,"Gold");
  addColorOption(selectElement,"GoldenRod");
  addColorOption(selectElement,"Gray");
  addColorOption(selectElement,"Green");
  addColorOption(selectElement,"GreenYellow");
  addColorOption(selectElement,"HoneyDew");
  addColorOption(selectElement,"HotPink");
  addColorOption(selectElement,"IndianRed");
  addColorOption(selectElement,"Indigo");
  addColorOption(selectElement,"Ivory");
  addColorOption(selectElement,"Khaki");
  addColorOption(selectElement,"Lavender");
  addColorOption(selectElement,"LavenderBlush");
  addColorOption(selectElement,"LawnGreen");
  addColorOption(selectElement,"LemonChiffon");
  addColorOption(selectElement,"LightBlue");
  addColorOption(selectElement,"LightCoral");
  addColorOption(selectElement,"LightCyan");
  addColorOption(selectElement,"LightGoldenRodYellow");
  addColorOption(selectElement,"LightGray");
  addColorOption(selectElement,"LightGreen");
  addColorOption(selectElement,"LightPink");
  addColorOption(selectElement,"LightSalmon");
  addColorOption(selectElement,"LightSeaGreen");
  addColorOption(selectElement,"LightSkyBlue");
  addColorOption(selectElement,"LightSlateGray");
  addColorOption(selectElement,"LightSteelBlue");
  addColorOption(selectElement,"LightYellow");
  addColorOption(selectElement,"Lime");
  addColorOption(selectElement,"LimeGreen");
  addColorOption(selectElement,"Linen");
  addColorOption(selectElement,"Magenta");
  addColorOption(selectElement,"Maroon");
  addColorOption(selectElement,"MediumAquaMarine");
  addColorOption(selectElement,"MediumBlue");
  addColorOption(selectElement,"MediumOrchid");
  addColorOption(selectElement,"MediumPurple");
  addColorOption(selectElement,"MediumSeaGreen");
  addColorOption(selectElement,"MediumSlateBlue");
  addColorOption(selectElement,"MediumSpringGreen");
  addColorOption(selectElement,"MediumTurquoise");
  addColorOption(selectElement,"MediumVioletRed");
  addColorOption(selectElement,"MidnightBlue");
  addColorOption(selectElement,"MintCream");
  addColorOption(selectElement,"MistyRose");
  addColorOption(selectElement,"Moccasin");
  addColorOption(selectElement,"NavajoWhite");
  addColorOption(selectElement,"Navy");
  addColorOption(selectElement,"OldLace");
  addColorOption(selectElement,"Olive");
  addColorOption(selectElement,"OliveDrab");
  addColorOption(selectElement,"Orange");
  addColorOption(selectElement,"OrangeRed");
  addColorOption(selectElement,"Orchid");
  addColorOption(selectElement,"PaleGoldenRod");
  addColorOption(selectElement,"PaleGreen");
  addColorOption(selectElement,"PaleTurquoise");
  addColorOption(selectElement,"PaleVioletRed");
  addColorOption(selectElement,"PapayaWhip");
  addColorOption(selectElement,"PeachPuff");
  addColorOption(selectElement,"Peru");
  addColorOption(selectElement,"Pink");
  addColorOption(selectElement,"Plum");
  addColorOption(selectElement,"PowderBlue");
  addColorOption(selectElement,"Purple");
  addColorOption(selectElement,"Red");
  addColorOption(selectElement,"RosyBrown");
  addColorOption(selectElement,"RoyalBlue");
  addColorOption(selectElement,"SaddleBrown");
  addColorOption(selectElement,"Salmon");
  addColorOption(selectElement,"SandyBrown");
  addColorOption(selectElement,"SeaGreen");
  addColorOption(selectElement,"SeaShell");
  addColorOption(selectElement,"Sienna");
  addColorOption(selectElement,"Silver");
  addColorOption(selectElement,"SkyBlue");
  addColorOption(selectElement,"SlateBlue");
  addColorOption(selectElement,"SlateGray");
  addColorOption(selectElement,"Snow");
  addColorOption(selectElement,"SpringGreen");
  addColorOption(selectElement,"SteelBlue");
  addColorOption(selectElement,"Tan");
  addColorOption(selectElement,"Teal");
  addColorOption(selectElement,"Thistle");
  addColorOption(selectElement,"Tomato");
  addColorOption(selectElement,"Turquoise");
  addColorOption(selectElement,"Violet");
  addColorOption(selectElement,"Wheat");
  addColorOption(selectElement,"White");
  addColorOption(selectElement,"WhiteSmoke");
  addColorOption(selectElement,"Yellow");
  addColorOption(selectElement,"YellowGreen");
  addColorOption(selectElement,"Transparent");
}
function  addColorOption(selectElement,colorName) {
  selectElement.options[selectElement.options.length] = new Option(colorName,colorName);
  selectElement.options[selectElement.options.length-1].style.backgroundColor = colorName;
}
function ClearSettings() {
  var el=document.getElementById("borderColor");
  el.selectedIndex=0;
  el=document.getElementById("borderWidth");
  el.selectedIndex=0;
  el=document.getElementById("textColor");
  el.selectedIndex=0;
  el=document.getElementById("cellColor");
  el.selectedIndex=0;
  el=document.getElementById("Marker");
  el.selectedIndex=0;
  el=document.getElementById("FontWeight");
  el.selectedIndex=0;
}
