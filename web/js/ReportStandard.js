//jsVersion  : V11.03.01
//========================================================================
// Program   : ReportStandard.js
//
// Written   : 19.07.2000 B.G.Ackland
//
// Function  : Standard Functions for UniCare Report Scheduling
//
//============================================================
// Standard Report Page Load Functions
//============================================================
function ReportLoad() {
  if (document.ReportForm.schdcopy.type != "hidden") {
    SetReportCopies(document.ReportForm.schdcopy,50) }
  if (document.ReportForm.schdrdat.type != "hidden") {
    SetScheduleType(document.ReportForm.schdrdat) }
  SetReportDates()
  SetReportName();  
}
function SetReportName() {
  var tableEl=ReportForm.schdprnt
  while (tableEl.tagName != "TABLE")
  {
    tableEl = tableEl.parentElement;
    if (tableEl == null) { return; }
  }
  var tableRow=tableEl.insertRow(0);
  var cell1=tableRow.insertCell(0);
  var cell2=tableRow.insertCell(1);
  cell1.innerHTML="Report Name";
  cell2.innerHTML="<input type=text value='"+document.ReportForm.schddesc.value+"' name=reportDescription size=50 maxlength=50" +
                  " onchange='document.ReportForm.schddesc.value=this.value;' title='Report Description'>"
}

function ProcessLoad() {
  SetReportCopies(ProcessForm.schdcop1,100)
  SetReportCopies(ProcessForm.schdcop2,100)
  SetReportCopies(ProcessForm.schdcop3,100)
}
function ProcessLoad2() {
  SetReportCopies(ProcessForm.schdcop2,100)
  SetReportCopies(ProcessForm.schdcop3,100)
}
// No of days in hospitalations function

function NoHospitalDays() {
 SetReportCopies(UpdateForm.ptmis031,100)
}

function ExpectedLengthofStay() {
 SetReportCopies(UpdateForm.ptmis030,100)                                      
}


//============================================================
// Load Functions for a standard Generate Option
//============================================================
function GenLoad() {
  SetCurrentDateTime(ReportForm.schddate,ReportForm.schdtime)
  SetReportDates()
}
//============================================================
// Standard Report Page Load Functions
//============================================================
function SetReportDates() {
 var spDays = document.getElementById('days');
 if (ReportForm.schdrdat.value=="") {
// ReportForm.schdrdat.parentElement.innerHTML =
//  ReportForm.schdrdat.parentElement.innerHTML.replace(/<SPAN id=days.*$/i,"")
   if (spDays != undefined) {
     ReportForm.schdrdat.parentElement.removeChild(spDays);
   }
 }
 else {
// ReportForm.schdrdat.parentElement.innerHTML =
//  ReportForm.schdrdat.parentElement.innerHTML.replace(/<SPAN id=days.*$/i,"")
   if ((ReportForm.schdrdat.value == "O1O0O0")) {
     Exclusions="&nbsp;&nbsp;&nbsp;<span id=days>" +
     "Exclude  " +
     "Pub Holidays<input type=checkbox value=1 name=exceptpb>" +
     "Exclude Mon-Sun<input type=checkbox value=1 name=exceptmo>" +
     "<input type=checkbox value=1 name=excepttu>" +
     "<input type=checkbox value=1 name=exceptwe>" +
     "<input type=checkbox value=1 name=exceptth>" +
     "<input type=checkbox value=1 name=exceptfr>" +
     "<input type=checkbox value=1 name=exceptsa>" +
     "<input type=checkbox value=1 name=exceptsu>" +
     "</span>" 
//   ReportForm.schdrdat.parentElement.innerHTML += Exclusions;
     if (spDays == undefined) {
       ReportForm.schdrdat.insertAdjacentHTML('AfterEnd',Exclusions);
     }
   }
   else if (spDays != undefined) {
     ReportForm.schdrdat.parentElement.removeChild(spDays);
   }
 }
 var DateRange = document.getElementById('DateRange');
 if (DateRange) {
   if (ReportForm.schdrdat.value=="") {
     ReportForm.schdrend.value=""
     DateRange.innerHTML=document.getElementById('SetDateRange').innerHTML }
   else {
     DateRange.innerHTML=document.getElementById('SetScheduleRange').innerHTML 
     if (ReportForm.datsch01 != undefined) {
       SetReportSchedule(ReportForm.datsch01);
       if (ReportForm.datsch01.onchange == null) {
         ReportForm.datsch01.onchange = ReportForm.datsch01.onblur;
       }
     }
   }
 }
 var DateRange2 = document.getElementById('DateRange2');
 if (DateRange2) {
   if (ReportForm.schdrdat.value=="") {
     ReportForm.schdrend.value=""
     DateRange2.innerHTML=document.getElementById('SetDateRange2').innerHTML }
   else {
     DateRange2.innerHTML=document.getElementById('SetScheduleRange2').innerHTML
     if (ReportForm.datsch02 != undefined) {
       SetReportSchedule(ReportForm.datsch02);
       if (ReportForm.datsch02.onchange == null) {
         ReportForm.datsch02.onchange = ReportForm.datsch02.onblur;
       }
     }
   }
 }
 var PeriodRange = document.getElementById('PeriodRange');
 if (PeriodRange) {
   if (ReportForm.schdrdat.value=="") {
     ReportForm.schdrend.value=""
     PeriodRange.innerHTML=document.getElementById('SetPeriodRange').innerHTML;
     SetCalendarMonths(ReportForm.perran01);
     SetCalendarYears(ReportForm.perran02);
     if (ReportForm.perran03!=undefined) {
       SetCalendarMonths(ReportForm.perran03) }
     if (ReportForm.perran04!=undefined) {
       SetCalendarYears(ReportForm.perran04) } }
   else {
     PeriodRange.innerHTML=document.getElementById('SetPeriodSchedule').innerHTML
     if (ReportForm.persch01 != undefined) {
       SetSchedulePeriods(ReportForm.persch01);
       if (ReportForm.persch01.onchange == null) {
         ReportForm.persch01.onchange = ReportForm.persch01.onblur;
       }
     }
   }
  }
//
 var FinanceRange = document.getElementById('FinanceRange');
 if (FinanceRange) {
   if (ReportForm.schdrdat.value=="") {
     FinanceRange.innerHTML=document.getElementById('SetFinanceRange').innerHTML;
   } else {
     FinanceRange.innerHTML=document.getElementById('SetFinanceSchedule').innerHTML
   }
 }
//
}
//============================================================
// Set Number of Copies <select>
//============================================================
function SetReportCopies(ListItem,MaxCopy) {
for (i=1;i<=MaxCopy;i++) {
ListItem.options[ListItem.options.length]=new Option(i,i);
 }
}
//========================================================================
// Set select options for Schedule Type
//========================================================================
function SetScheduleType(ListItem) {
ListItem.options[ListItem.options.length]=
  new Option("Daily","O1O0O0");
ListItem.options[ListItem.options.length]=
  new Option("Weekly","O7O0O0");
ListItem.options[ListItem.options.length]=
  new Option("Fortnightly","O14O0O0");
ListItem.options[ListItem.options.length]=
  new Option("Monthly","O0O1O0");
ListItem.options[ListItem.options.length]=
  new Option("Quarterly","O0O3O0");
//ListItem.options[ListItem.options.length]=
//  new Option("4 Weekly","O28O0O0");
ListItem.options[ListItem.options.length]=
  new Option("Start of Month","A1O1O0");
ListItem.options[ListItem.options.length]=
  new Option("End of Month","EO1O0");
ListItem.options[ListItem.options.length]=
  new Option("Start of Quarter","A1O3O0");
ListItem.options[ListItem.options.length]=
  new Option("End of Quarter","EO3O0");
ListItem.options[ListItem.options.length]=
  new Option("Start of Financial Period","F200");
ListItem.options[ListItem.options.length]=
  new Option("End of Financial Period","F210");
}
//========================================================================
// Set select options for Date Range 
//========================================================================
function SetReportSchedule(ListItem) {
ListItem.options[ListItem.options.length]=
  new Option("Today","01");
ListItem.options[ListItem.options.length]=
  new Option("Yesterday","02");
ListItem.options[ListItem.options.length]=
  new Option("Minus 2 Days","11");
ListItem.options[ListItem.options.length]=
  new Option("Minus 3 Days","27");
ListItem.options[ListItem.options.length]=
  new Option("Minus 4 Days","28");
ListItem.options[ListItem.options.length]=
  new Option("Minus 5 Days","29");
ListItem.options[ListItem.options.length]=
  new Option("Minus 6 Days","30");
ListItem.options[ListItem.options.length]=
  new Option("Previous Week(Including Current)","03");
ListItem.options[ListItem.options.length]=
  new Option("Previous Week(Excluding Current)","04");
ListItem.options[ListItem.options.length]=
  new Option("Previous Fortnight(Including Current)","05");
ListItem.options[ListItem.options.length]=
  new Option("Previous Fortnight(Excluding Current)","06");
ListItem.options[ListItem.options.length]=
  new Option("Previous 4 Weeks(Including Current)","07");
ListItem.options[ListItem.options.length]=
  new Option("Previous 4 Weeks(Excluding Current)","08");
ListItem.options[ListItem.options.length]=
  new Option("Current Calendar Month","09");
ListItem.options[ListItem.options.length]=
  new Option("Previous Calendar Month","10");
ListItem.options[ListItem.options.length]=
  new Option("Tomorrow","12");
ListItem.options[ListItem.options.length]=
  new Option("Plus 2 Days","22");
ListItem.options[ListItem.options.length]=
  new Option("Plus 3 Days","23");
ListItem.options[ListItem.options.length]=
  new Option("Plus 4 Days","24");
ListItem.options[ListItem.options.length]=
  new Option("Plus 5 Days","25");
ListItem.options[ListItem.options.length]=
  new Option("Plus 6 Days","26");
ListItem.options[ListItem.options.length]=
  new Option("Next Week","13");
ListItem.options[ListItem.options.length]=
  new Option("Next Fortnight","15");
ListItem.options[ListItem.options.length]=
  new Option("Next 4 Weeks","17");
ListItem.options[ListItem.options.length]=
  new Option("Next Calendar Month","20");
}
//========================================================================
// Update Keyin Strings and Sample Dates for selected Date Range
//========================================================================
function UpReportSchedule(SelectList,KeyFrom,KeyTo) {
  var ScheduleDate = new Date()
  DateValue=SetDateDDMMYYYY(ReportForm.schddate.value)
  ScheduleDate.setMonth(parseInt(DateValue.substr(2,2),10)-1)
  ScheduleDate.setDate(parseInt(DateValue.substr(0,2),10))
  ScheduleDate.setFullYear(parseInt(DateValue.substr(4,4)))
  switch (SelectList.value) {
  case "01":{ KeyFrom.value="{date}O0O0O0"
              KeyTo.value="{date}O0O0O0"
              ReportForm.SampleFrom.value=ReportForm.schddate.value
              ReportForm.SampleTo.value=ReportForm.schddate.value
              break ; }
  case "02":{ KeyFrom.value="{date}O-1O0O0"
              KeyTo.value="{date}O-1O0O0"
              ScheduleDate.setDate(parseInt(DateValue.substr(0,2),10)-1)
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleFrom.value="0" + FormatDate(ScheduleDate) 
              }
              else {
                ReportForm.SampleFrom.value=FormatDate(ScheduleDate)
              }
              ReportForm.SampleTo.value=ReportForm.SampleFrom.value
              break ; }
  case "12":{ KeyFrom.value="{date}O+1O0O0"
              KeyTo.value="{date}O+1O0O0"
              ScheduleDate.setDate(parseInt(DateValue.substr(0,2),10)+1)
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleFrom.value="0" + FormatDate(ScheduleDate)
              }
              else {
                ReportForm.SampleFrom.value=FormatDate(ScheduleDate)
              }
              ReportForm.SampleTo.value=ReportForm.SampleFrom.value
              break ; }
  case "03":{ KeyFrom.value="{date}O-6O0O0"
              KeyTo.value="{date}O0O0O0"
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleTo.value="0" + FormatDate(ScheduleDate) 
              }
              else {
                ReportForm.SampleTo.value=FormatDate(ScheduleDate)
              }
              ScheduleDate.setDate(parseInt(DateValue.substr(0,2),10)-6)
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleFrom.value="0" + FormatDate(ScheduleDate) 
              }
              else {
                ReportForm.SampleFrom.value=FormatDate(ScheduleDate)
              }
              break ; }
  case "13":{ KeyTo.value="{date}O+7O0O0"
              KeyFrom.value="{date}O0O0O0"
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleFrom.value="0" + FormatDate(ScheduleDate)
              }
              else {
                ReportForm.SampleFrom.value=FormatDate(ScheduleDate)
              }
              ScheduleDate.setDate(parseInt(DateValue.substr(0,2),10)+7)
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleTo.value="0" + FormatDate(ScheduleDate)
              }
              else {
                ReportForm.SampleTo.value=FormatDate(ScheduleDate)
              }
              break ; }
  case "04":{ KeyFrom.value="{date}O-7O0O0"
              KeyTo.value="{date}O-1O0O0"
              ScheduleDate.setDate(parseInt(DateValue.substr(0,2),10)-1)
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleTo.value="0" + FormatDate(ScheduleDate) 
              }
              else {
                ReportForm.SampleTo.value=FormatDate(ScheduleDate)
              }
              var ScheduleDate = new Date()
              DateValue=SetDateDDMMYYYY(ReportForm.schddate.value)
              ScheduleDate.setMonth(parseInt(DateValue.substr(2,2),10)-1)
              ScheduleDate.setFullYear(parseInt(DateValue.substr(4,4)))
              ScheduleDate.setDate(parseInt(DateValue.substr(0,2),10)-7)
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleFrom.value="0" + FormatDate(ScheduleDate) 
              }
              else {
                ReportForm.SampleFrom.value=FormatDate(ScheduleDate)
              }
              break ; }
  case "05":{ KeyFrom.value="{date}O-13O0O0"
              KeyTo.value="{date}O0O0O0"
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleTo.value="0" + FormatDate(ScheduleDate) 
              }
              else {
                ReportForm.SampleTo.value=FormatDate(ScheduleDate)
              }
              ScheduleDate.setDate(parseInt(DateValue.substr(0,2),10)-13)
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleFrom.value="0" + FormatDate(ScheduleDate) 
              }
              else {
                ReportForm.SampleFrom.value=FormatDate(ScheduleDate)
              }
              break ; }
  case "15":{ KeyTo.value="{date}O+14O0O0"
              KeyFrom.value="{date}O0O0O0"
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleFrom.value="0" + FormatDate(ScheduleDate)
              }
              else {
                ReportForm.SampleFrom.value=FormatDate(ScheduleDate)
              }
              ScheduleDate.setDate(parseInt(DateValue.substr(0,2),10)+14)
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleTo.value="0" + FormatDate(ScheduleDate)
              }
              else {
                ReportForm.SampleTo.value=FormatDate(ScheduleDate)
              }
              break ; }
  case "06":{ KeyFrom.value="{date}O-14O0O0"
              KeyTo.value="{date}O-1O0O0"
              ScheduleDate.setDate(parseInt(DateValue.substr(0,2),10)-1)
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleTo.value="0" + FormatDate(ScheduleDate) 
              }
              else {
                ReportForm.SampleTo.value=FormatDate(ScheduleDate)
              }
              var ScheduleDate = new Date()
              DateValue=SetDateDDMMYYYY(ReportForm.schddate.value)
              ScheduleDate.setMonth(parseInt(DateValue.substr(2,2),10)-1)
              ScheduleDate.setFullYear(parseInt(DateValue.substr(4,4)))
              ScheduleDate.setDate(parseInt(DateValue.substr(0,2),10)-14)
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleFrom.value="0" + FormatDate(ScheduleDate) 
              }
              else {
                ReportForm.SampleFrom.value=FormatDate(ScheduleDate)
              }
              break ; }
  case "07":{ KeyFrom.value="{date}O-27O0O0"
              KeyTo.value="{date}O0O0O0"
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleTo.value="0" + FormatDate(ScheduleDate) 
              }
              else {
                ReportForm.SampleTo.value=FormatDate(ScheduleDate)
              }
              ScheduleDate.setDate(parseInt(DateValue.substr(0,2),10)-27)
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleFrom.value="0" + FormatDate(ScheduleDate) 
              }
              else {
                ReportForm.SampleFrom.value=FormatDate(ScheduleDate)
              }
              break ; }
  case "17":{ KeyTo.value="{date}O+28O0O0"
              KeyFrom.value="{date}O0O0O0"
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleFrom.value="0" + FormatDate(ScheduleDate)
              }
              else {
                ReportForm.SampleFrom.value=FormatDate(ScheduleDate)
              }
              ScheduleDate.setDate(parseInt(DateValue.substr(0,2),10)+28)
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleTo.value="0" + FormatDate(ScheduleDate)
              }
              else {
                ReportForm.SampleTo.value=FormatDate(ScheduleDate)
              }
              break ; }
  case "08":{ KeyFrom.value="{date}O-28O0O0"
              KeyTo.value="{date}O-1O0O0"
              ScheduleDate.setDate(parseInt(DateValue.substr(0,2),10)-1)
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleTo.value="0" + FormatDate(ScheduleDate) 
              }
              else {
                ReportForm.SampleTo.value=FormatDate(ScheduleDate)
              }
              var ScheduleDate = new Date()
              DateValue=SetDateDDMMYYYY(ReportForm.schddate.value)
              ScheduleDate.setMonth(parseInt(DateValue.substr(2,2),10)-1)
              ScheduleDate.setFullYear(parseInt(DateValue.substr(4,4)))
              ScheduleDate.setDate(parseInt(DateValue.substr(0,2),10)-28)
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleFrom.value="0" + FormatDate(ScheduleDate) 
              }
              else {
                ReportForm.SampleFrom.value=FormatDate(ScheduleDate)
              }
              break ; }
  case "09":{ KeyFrom.value="{date}A1O0O0"
              KeyTo.value="{date}EO0O0"
              ScheduleDate.setDate(1)
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleFrom.value="0" + FormatDate(ScheduleDate) 
              }
              else {
                ReportForm.SampleFrom.value=FormatDate(ScheduleDate)
              }
              ScheduleDate.setMonth(parseInt(DateValue.substr(2,2),10))
              ScheduleDate.setDate(0)
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleTo.value="0" + FormatDate(ScheduleDate) 
              }
              else {
                ReportForm.SampleTo.value=FormatDate(ScheduleDate)
              }
              break ; }
  case "10":{ KeyFrom.value="{date}A1O-1O0"
              KeyTo.value="{date}EO-1O0"
              ScheduleDate.setMonth(parseInt(DateValue.substr(2,2),10)-2)
              ScheduleDate.setDate(1)
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleFrom.value="0" + FormatDate(ScheduleDate) 
              }
              else {
                ReportForm.SampleFrom.value=FormatDate(ScheduleDate)
              }
              ScheduleDate.setMonth(parseInt(DateValue.substr(2,2),10)-1)
              ScheduleDate.setDate(0)
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleTo.value="0" + FormatDate(ScheduleDate) 
              }
              else {
                ReportForm.SampleTo.value=FormatDate(ScheduleDate)
              }
              break ; }
  case "20":{ KeyFrom.value="{date}A1O+1O0"
              KeyTo.value="{date}EO+1O0"
              ScheduleDate.setMonth(parseInt(DateValue.substr(2,2),10)+1)
              ScheduleDate.setDate(0)
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleTo.value="0" + FormatDate(ScheduleDate)
              }
              else {
                ReportForm.SampleTo.value=FormatDate(ScheduleDate)
              }
              ScheduleDate.setDate(1)
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleFrom.value="0" + FormatDate(ScheduleDate)
              }
              else {
                ReportForm.SampleFrom.value=FormatDate(ScheduleDate)
              }
              break ; }
  case "11":{ KeyFrom.value="{date}O-2O0O0"
              KeyTo.value="{date}O-2O0O0"
              ScheduleDate.setDate(parseInt(DateValue.substr(0,2),10)-2)
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleFrom.value="0" + FormatDate(ScheduleDate) 
              }
              else {
                ReportForm.SampleFrom.value=FormatDate(ScheduleDate)
              }
              ReportForm.SampleTo.value=ReportForm.SampleFrom.value
              break ; }
  case "22":{ KeyFrom.value="{date}O+2O0O0"
              KeyTo.value="{date}O+2O0O0"
              ScheduleDate.setDate(parseInt(DateValue.substr(0,2),10)+2)
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleFrom.value="0" + FormatDate(ScheduleDate)
              }
              else {
                ReportForm.SampleFrom.value=FormatDate(ScheduleDate)
              }
              ReportForm.SampleTo.value=ReportForm.SampleFrom.value
              break ; }
  case "23":{ KeyFrom.value="{date}O+3O0O0"
              KeyTo.value="{date}O+3O0O0"
              ScheduleDate.setDate(parseInt(DateValue.substr(0,2),10)+3)
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleFrom.value="0" + FormatDate(ScheduleDate)
              }
              else {
                ReportForm.SampleFrom.value=FormatDate(ScheduleDate)
              }
              ReportForm.SampleTo.value=ReportForm.SampleFrom.value
              break ; }
  case "24":{ KeyFrom.value="{date}O+4O0O0"
              KeyTo.value="{date}O+4O0O0"
              ScheduleDate.setDate(parseInt(DateValue.substr(0,2),10)+4)
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleFrom.value="0" + FormatDate(ScheduleDate)
              }
              else {
                ReportForm.SampleFrom.value=FormatDate(ScheduleDate)
              }
              ReportForm.SampleTo.value=ReportForm.SampleFrom.value
              break ; }
  case "25":{ KeyFrom.value="{date}O+5O0O0"
              KeyTo.value="{date}O+5O0O0"
              ScheduleDate.setDate(parseInt(DateValue.substr(0,2),10)+5)
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleFrom.value="0" + FormatDate(ScheduleDate)
              }
              else {
                ReportForm.SampleFrom.value=FormatDate(ScheduleDate)
              }
              ReportForm.SampleTo.value=ReportForm.SampleFrom.value
              break ; }
  case "26":{ KeyFrom.value="{date}O+6O0O0"
              KeyTo.value="{date}O+6O0O0"
              ScheduleDate.setDate(parseInt(DateValue.substr(0,2),10)+6)
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleFrom.value="0" + FormatDate(ScheduleDate)
              }
              else {
                ReportForm.SampleFrom.value=FormatDate(ScheduleDate)
              }
              ReportForm.SampleTo.value=ReportForm.SampleFrom.value
              break ; }

  case "27":{ KeyFrom.value="{date}O-3O0O0"
              KeyTo.value="{date}O-3O0O0"
              ScheduleDate.setDate(parseInt(DateValue.substr(0,2),10)-3)
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleFrom.value="0" + FormatDate(ScheduleDate)
              }
              else {
                ReportForm.SampleFrom.value=FormatDate(ScheduleDate)
              }
              ReportForm.SampleTo.value=ReportForm.SampleFrom.value
              break ; }

  case "28":{ KeyFrom.value="{date}O-4O0O0"
              KeyTo.value="{date}O-4O0O0"
              ScheduleDate.setDate(parseInt(DateValue.substr(0,2),10)-4)
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleFrom.value="0" + FormatDate(ScheduleDate)
              }
              else {
                ReportForm.SampleFrom.value=FormatDate(ScheduleDate)
              }
              ReportForm.SampleTo.value=ReportForm.SampleFrom.value
              break ; }

  case "29":{ KeyFrom.value="{date}O-5O0O0"
              KeyTo.value="{date}O-5O0O0"
              ScheduleDate.setDate(parseInt(DateValue.substr(0,2),10)-5)
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleFrom.value="0" + FormatDate(ScheduleDate)
              }
              else {
                ReportForm.SampleFrom.value=FormatDate(ScheduleDate)
              }
              ReportForm.SampleTo.value=ReportForm.SampleFrom.value
              break ; }

  case "30":{ KeyFrom.value="{date}O-6O0O0"
              KeyTo.value="{date}O-6O0O0"
              ScheduleDate.setDate(parseInt(DateValue.substr(0,2),10)-6)
              if(FormatDate(ScheduleDate).length != "11"){
                ReportForm.SampleFrom.value="0" + FormatDate(ScheduleDate)
              }
              else {
                ReportForm.SampleFrom.value=FormatDate(ScheduleDate)
              }
              ReportForm.SampleTo.value=ReportForm.SampleFrom.value
              break ; }




   }
}
//============================================================
// Format Sample Dates for Page Display
//============================================================
function FormatDate(ScheduleDate) {
 var monthname = new Array(12)
 monthname[0]="Jan"
 monthname[1]="Feb"
 monthname[2]="Mar"
 monthname[3]="Apr"
 monthname[4]="May"
 monthname[5]="Jun"
 monthname[6]="Jul"
 monthname[7]="Aug"
 monthname[8]="Sep"
 monthname[9]="Oct"
 monthname[10]="Nov"
 monthname[11]="Dec"
 returnString = ScheduleDate.getDate() + " " +
                monthname[ScheduleDate.getMonth()] + " " + 
                ScheduleDate.getFullYear()
 return returnString;
}
//------------------------------------------------------------
// Standard Report Scheduler Form Submission
//------------------------------------------------------------
function SubmitReport(theForm) {
if (validateMandatory(theForm)) {
  for (i=0; i<theForm.elements.length; i++) {
    if (theForm.elements[i].title.match(/Date/)) {
      if (theForm.elements[i].name.match(/keystr/)) {
        theForm.elements[i].value=SetDateDDMMYYYY(theForm.elements[i].value);
      }
    }
  }
  theForm.submit() }
}
//========================================================================
// Format POST String for AJAX Form Post
//========================================================================
function AJAXPostString(el) {
  parameters="";
  for (i=0;i<el.length;i++) {
    switch (el[i].type) {
     case 'radio': {
       if (el[i].checked) {
         parameters+=el[i].name+"="+el[i].value+"&";
       }
       break; }
     case 'checkbox': {
       if (el[i].checked) {
         parameters+=el[i].name+"="+el[i].value+"&";
       }
       break; }
     case 'hidden': {
       if (el[i].title.match(/Date/)) {
         if (el[i].name.match(/keystr/)) {
           parameters+=el[i].name+"="+SetDateDDMMYYYY(el[i].value)+"&";
         }
         else {
           parameters+=el[i].name+"="+el[i].value+"&";
         }
       }
       else {
         parameters+=el[i].name+"="+el[i].value+"&";
       }
       break; }
     case 'select-one': {
       if (el[i].selectedIndex!=-1) {
         parameters+=el[i].name+"="+el[i].options[el[i].selectedIndex].value +"&";
       }
       break; }
     case 'text': {
       parameters+=el[i].name+"="+encodeURIComponent(el[i].value)+"&";
       break; }
     case 'textarea': {
       if (el[i].className=="setLinefeeds") {
         textareaValue=setLinefeeds(el[i].value,el[i].cols);
         parameters+=el[i].name+"="+textareaValue+"&";
       }
       else {
         parameters+=el[i].name+"="+el[i].value+"&";
       }
       break; }
    }
  }
  parameters+='1=1';
  return parameters;
}
/*
//------------------------------------------------------------
// Check Date Range Values
//------------------------------------------------------------
function CheckDateRange(FromInput,ToInput) {
  if (SetDateYYYYMMDD(FromInput.value) > SetDateYYYYMMDD(ToInput.value)) {     
    alert("Invalid Range Entered " + FromInput.title + " " + ToInput.title);
    return false }
  else {
    return true }
}
*/
//------------------------------------------------------------
// Check Range Values
//------------------------------------------------------------
function CheckRange(FromInput,ToInput) {
  if (FromInput.value > ToInput.value) {
    alert("Invalid Range Entered " + FromInput.title + " " + ToInput.title);
    return false }
  else {
    return true }
}
//------------------------------------------------------------
// Convert Date Field from DD MMM YYYY to DDMMYYYY
//------------------------------------------------------------
function SetDateDDMMYYYY(DateString) {
 if (DateString!="") {
 day=DateString.substr(0,2)
 mthnam=DateString.substr(3,3)
 yrr=DateString.substr(7,4)
 switch (mthnam) {
  case "Jan": mon="01";break;
  case "Feb": mon="02";break;
  case "Mar": mon="03";break;
  case "Apr": mon="04";break;
  case "May": mon="05";break;
  case "Jun": mon="06";break;
  case "Jul": mon="07";break;
  case "Aug": mon="08";break;
  case "Sep": mon="09";break;
  case "Oct": mon="10";break;
  case "Nov": mon="11";break;
  case "Dec": mon="12";break;
  }
 return day+mon+yrr
 }
 else {
 return ""
 }
}
//------------------------------------------------------------
// Convert Date Field from DD MMM YYYY to YYYYMMDD
//------------------------------------------------------------
function SetDateYYYYMMDD(DateString) {
 if (DateString!="") {
 day=DateString.substr(0,2)
 mthnam=DateString.substr(3,3)
 yrr=DateString.substr(7,4)
 switch (mthnam) {
  case "Jan": mon="01";break;
  case "Feb": mon="02";break;
  case "Mar": mon="03";break;
  case "Apr": mon="04";break;
  case "May": mon="05";break;
  case "Jun": mon="06";break;
  case "Jul": mon="07";break;
  case "Aug": mon="08";break;
  case "Sep": mon="09";break;
  case "Oct": mon="10";break;
  case "Nov": mon="11";break;
  case "Dec": mon="12";break;
  }
 ReturnString=yrr+mon+day
 ReturnString.replace(/ /g,"0")
 return ReturnString
 }
 else {
 return ""
 }
}
//========================================================================
// Set select options for Period Range 
//========================================================================
function SetSchedulePeriods(ListItem) {
ListItem.options[ListItem.options.length]=
  new Option("Current Period","01");
ListItem.options[ListItem.options.length]=
  new Option("Last Period","02");
}
//========================================================================
// Update select options for Period Range 
//========================================================================
function UpSchedulePeriod(SelectList,KeyFrom,KeyTo) {
  var ScheduleDate = new Date()
  DateValue=SetDateDDMMYYYY(ReportForm.schddate.value)
  ScheduleDate.setFullYear(parseInt(DateValue.substr(4,4)))
  ScheduleDate.setMonth(parseInt(DateValue.substr(2,2),10)-1)
  switch (SelectList.value) {
  case "01":{ KeyFrom.value="{period}O0O0"
              KeyTo.value="{period}O0O0"
              ReportForm.SampleFrom.value=ReportForm.schddate.value.substr(3,8)
              ReportForm.SampleTo.value=ReportForm.schddate.value.substr(3,8)
              break ; }
  case "02":{ KeyFrom.value="{period}O-1O0"
              KeyTo.value="{period}O-1O0"
              ScheduleDate.setMonth(parseInt(DateValue.substr(2,2),10)-2)
              ScheduleDate.setDate(1)
              ReportForm.SampleFrom.value=FormatDate(ScheduleDate).substr(2,8)
              ReportForm.SampleTo.value=ReportForm.SampleFrom.value
              break ; }
  }
}
//============================================================
// Set Calendar Periods
//============================================================
function SetCalendarMonths(ListItem) {
ListItem.options[ListItem.options.length]=new Option("January","01");
ListItem.options[ListItem.options.length]=new Option("February","02");
ListItem.options[ListItem.options.length]=new Option("March","03");
ListItem.options[ListItem.options.length]=new Option("April","04");
ListItem.options[ListItem.options.length]=new Option("May","05");
ListItem.options[ListItem.options.length]=new Option("June","06");
ListItem.options[ListItem.options.length]=new Option("July","07");
ListItem.options[ListItem.options.length]=new Option("August","08");
ListItem.options[ListItem.options.length]=new Option("September","09");
ListItem.options[ListItem.options.length]=new Option("October","10");
ListItem.options[ListItem.options.length]=new Option("November","11");
ListItem.options[ListItem.options.length]=new Option("December","12");
var ScheduleDate = new Date()
CurrentMonth=parseInt(ScheduleDate.getMonth())
ListItem.options[CurrentMonth].selected=true
}
//============================================================
// Set Calendar Years
//============================================================
function SetCalendarYears(ListItem) {
var ScheduleDate = new Date()
CurrentYear=parseInt(ScheduleDate.getFullYear())
Year=CurrentYear-9;
for (i=1;i<12;i++) {
  Current=ListItem.options.length
  ListItem.options[ListItem.options.length]=new Option(Year+i,Year+i);
  if (Year+i==CurrentYear) {
    ListItem.options[Current].selected=true }
 }
}
//============================================================
// Set Current Period
//============================================================
function SetCurrentPeriod() {
 var Today = new Date()
 ThisMonth=parseInt(Today.getMonth()) + 1;
 ThisYear=Today.getFullYear();
 if (ThisMonth < 10 ) { ThisPeriod="0" + ThisMonth + ThisYear   }
               else   { ThisPeriod= ThisMonth + ThisYear }
 ReportForm.CurrentPeriod.value=ThisPeriod
}
//============================================================
// Check Period Range
//============================================================
function CheckPeriodRange(strPeriod,endPeriod,checkType) {
 str=strPeriod.value.substr(2,4)+strPeriod.value.substr(0,2)
 end=endPeriod.value.substr(2,4)+endPeriod.value.substr(0,2)
 if (checkType==0) {
   if (str>end) {
     alert("Invalid Range Entered\n"+strPeriod.title+" > "+endPeriod.title);
     return false }
   else { return true }}
  else {
   if (str>=end) {
     alert("Invalid Range Entered\n"+strPeriod.title+" > "+endPeriod.title);
     return false }
   else { return true }}
}
//========================================================================
// Validate Range
//========================================================================
function ValidateRange(from,to,ReturnStatus) {
   if(ReturnStatus.value == 1) {
   if (from.type == 'select-one' && to.type == 'select-one') {
     //check if from is before to
     if (from.selectedIndex > to.selectedIndex && to.selectedIndex !=0) {
       alert("Invalid "+from.title+" Range")
       return false;
     }
   }
   if (from.type == 'text' && to.type == 'text') {
     if (from.value != " " && to.value != " " && (from.value > to.value)) {
       alert("Invalid "+from.title+" Range")
       return false;
     }
   }
 }
   if (ReturnStatus.value == 0) {
       ReturnStatus.value="1"
   }
   return true;
}
//-->

/**
 *  remove future dates from  SetReportSchedule
 *  @param  : id - id attribute of the select element
 *  @return : void
 **/
function removeFutureDates(id)
{
    if(typeof id != 'undefined')
    {
        var dateList = document.getElementById(id);
        var dateListSize = dateList.options.length;
        var i = dateListSize;

        //remove last 10 from list if items in collection
        //contains more then 10
        for(i; i > 10; i--)
        {
            dateList.remove(i);
        }
    }
}

