//jsVersion  : V11.03.01
//------------------------------------------------------------
// Function : outweb0203.js
// Modifications : 
//----------------------------------------------------------------------
function SubmitReschedule() {
if (validateMandatory(UpdateForm)) {
  if (parent.location.href.match("outweb02.pbl.reportno.3","g")) {
    setRedirect() }
  UpdateForm.submit() }
}
function setRedirect() {
  UpdateForm.nextpage.value="6"
  UpdateForm.redirect.value="patweb98.pbl?reportno=1&template=36" +
               "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
               "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+")
}
function SubmitFinal() {
if (validateMandatory(UpdateForm)) {
   if(UpdateForm.outbb071!=undefined) {
      UpdateForm.outbb071.disabled=false;
   }
   if(typeof(ReEnableFields)== 'function') {
     ReEnableFields();
   }
  UpdateForm.submit() }
}
function AppFrameExit() {
   if (!isWhitespace(UpdateForm.newslotk.value)) {
     cancelSlot(UpdateForm.newslotk.value,DFrameExit); }
   else {
     DFrameExit(); }
}
function ClinicSearch() {
   if (!isWhitespace(UpdateForm.newslotk.value)) {
     cancelSlot(UpdateForm.newslotk.value,ClinicSearchLink); }
   else {
     ClinicSearchLink(); }
}
function ClinicSearchLink() {
  if(UpdateForm.deftovrd==undefined || UpdateForm.alrevisn==undefined) {
    ClinicSearchFrame(UpdateForm.newslotk,UpdateForm.clindesc,
                      UpdateForm.clindate,UpdateForm.defclnty,
                      UpdateForm.defclnid,UpdateForm.defvisty)
  } else {
    ClinicSearchFrame(UpdateForm.newslotk,UpdateForm.clindesc,
                      UpdateForm.clindate,UpdateForm.defclnty,
                      UpdateForm.defclnid,UpdateForm.defvisty,
                      UpdateForm.deftovrd,UpdateForm.alrevisn)
  }
}
function AppointSearch() {
  if (!isWhitespace(UpdateForm.newslotk.value)) {
    cancelSlot(UpdateForm.newslotk.value,AppointSearchLink) }
  else {
    AppointSearchLink();}
}
function AppointSearchLink() {
 ReturnFunction="";
 if(UpdateForm.deftovrd==undefined || UpdateForm.alrevisn==undefined) {
    AppointmentSearchFrame(UpdateForm.newslotk,UpdateForm.clindesc,
                           UpdateForm.clindate,UpdateForm.defclnty,
                           UpdateForm.defclnid,UpdateForm.defvisty);
 } else {
    AppointmentSearchFrame(UpdateForm.newslotk,UpdateForm.clindesc,
                           UpdateForm.clindate,UpdateForm.defclnty,
                           UpdateForm.defclnid,UpdateForm.defvisty,
                           UpdateForm.deftovrd,UpdateForm.alrevisn)
 }
}
//------------------------------------------------------------
// Table Display Functions
//------------------------------------------------------------
function Table(Border,Cellspacing,Cellpadding,Width,Align,HHeight,RHeight) {
   this.Border = Border;
   this.Cellspacing = Cellspacing;
   this.Cellpadding = Cellpadding;
   this.Width = Width;
   this.Align = Align;
   this.HeadingHeight = HHeight;
   this.RowHeight = RHeight;
   this.rows = new Array();
   this.addRow = _addTableRow;
   this.columns = new Array();
   this.addColumn = _addTableColumn;
   this.sortTable = _sortTable;
   this.tableTotals = new Array();
   this.addTotal = _addTableTotal;
   AscDsc=1
}
function _addTableTotal() {
  for(var i = 0; i < arguments.length; i++) 
     this.tableTotals[i] = arguments[i];
}
function _sortTable(Column,AscDsc) {
  SortOrderBy = t.columns[Column][3]
  if (AscDsc == 1) {
    switch(t.columns[Column][1]) {
      case "Date"      :  t.rows.sort(NumericSort); break;
      case "DateTime"  :  t.rows.sort(StringSort); break;
      case "Time"      :  t.rows.sort(StringSort); break;
      case "Number"    :  t.rows.sort(NumericSort); break;
      case "Image"     :  t.rows.sort(StringSort); break;
      case "ButtonLink":  t.rows.sort(StringSort); break;
      case "String"    :  t.rows.sort(StringSort); break;
      case "StringPatient"    :  t.rows.sort(StringSort); break;
    }
  }
  else {
    switch(t.columns[Column][1]) {
      case "Date"      :  t.rows.sort(RevNumericSort); break;
      case "DateTime"  :  t.rows.sort(RevStringSort); break;
      case "Time"      :  t.rows.sort(RevStringSort); break;
      case "Number"    :  t.rows.sort(RevNumericSort); break;
      case "Image"     :  t.rows.sort(RevStringSort); break;
      case "ButtonLink":  t.rows.sort(RevStringSort); break;
      case "String"    :  t.rows.sort(RevStringSort); break;
      case "StringPatient"    :  t.rows.sort(RevStringSort); break;
    }
  }
}
function NumericSort(a,b) {
  return a[SortOrderBy] - b[SortOrderBy];
}
function StringSort(a,b) {
  if (a[SortOrderBy] < b[SortOrderBy] ) { x = -1 }
  if (a[SortOrderBy] == b[SortOrderBy] ) { x = 0  }
  if (a[SortOrderBy] > b[SortOrderBy] ) { x = 1  }
  return x ;
}
function RevNumericSort(a,b) {
  return b[SortOrderBy] - a[SortOrderBy];
}
function RevStringSort(a,b) {
  if (a[SortOrderBy] < b[SortOrderBy] ) { x = 1 }
  if (a[SortOrderBy] == b[SortOrderBy] ) { x = 0  }
  if (a[SortOrderBy] > b[SortOrderBy] ) { x = -1  }
  return x ;
}
function _addTableColumn() {
  this.columns[this.columns.length] = new Array();
  var column = this.columns[this.columns.length-1];
  for(var i = 0; i < arguments.length; i++) 
     column[column.length] = arguments[i];
  if (column[1] != "Image"  && column[5] != "") {
    var ImageBuffer = new Image();
    ImageBuffer.src = "../images/" + column[5];
  }
}
function _addTableRow() {
  this.rows[this.rows.length] = new Array();
  var row = this.rows[this.rows.length-1];
  for(var i = 0; i < arguments.length; i++) 
     row[row.length] = arguments[i].replace(/\s*$/,"");
}
function TableBody() {
 for(var i = 0; i < t.rows.length; i++) {
   RowClass="TableRowEven"
   if (i%2==1) { RowClass="TableRowOdd" }
   TableString[TableString.length] = "<tr height=" + t.RowHeight + " class=" + RowClass + ">" ;
   for(var j = 0; j < t.columns.length; j++) {
     TableString[TableString.length] = "<td align=" + t.columns[j][4]  ;
     TableString[TableString.length] = " width=" + t.columns[j][7] + ">" ;
     ImgString = t.columns[j][5];
     switch(t.columns[j][1]) {
       case "Date" :  
         FormatIcon(i,j);
         TableString[TableString.length] = FormatDate(t.rows[i][t.columns[j][2]]);
         break;
       case "DateTime" :  
         FormatIcon(i,j);
         TableString[TableString.length] = FormatDateTime(t.rows[i][t.columns[j][2]]);
         break;
       case "Time" :  
         FormatIcon(i,j);
         TableString[TableString.length] = FormatTime(t.rows[i][t.columns[j][2]]);
         break;
       case "ButtonLink":  
         FormatButton(i,j);
         break;
       case "Image":  
         if (t.columns[j][5] == "") {
           ImageString=t.rows[i][t.columns[j][2]];
         }
         else {
           ImageString=t.columns[j][5] + t.rows[i][t.columns[j][2]] + ".gif"
         }
         TableString[TableString.length] = FormatImage(ImageString);
         break;
       default    :   
         FormatIcon(i,j);
         TableString[TableString.length] = t.rows[i][t.columns[j][2]];
         break;
     }
     if (isWhitespace(t.rows[i][t.columns[j][2]])) {
       TableString[TableString.length] = "&nbsp;" }
     TableString[TableString.length] = "</td>" ;
     }
   TableString[TableString.length] = "</tr>" ;
   }
}
function FormatIcon(i,j) {
 if (ImgString != "" ) {
   TableString[TableString.length] = "<img src=\"../images/" + ImgString + "\" class=ListIcon" +
         " onclick=\"PatientTableLink(" + i + "," + j + ");\">"; 
 }
}
function PatientTableLink(RowNo,ColNo) {
 PatientLinks.urnumber.value=t.rows[RowNo][0]
 PatientLinks.admissno.value=t.rows[RowNo][1]
 PatientLinks.casekeys.value=t.rows[RowNo][2]
 switch (t.columns[ColNo][6]) {
    case "SlotLink" : SlotLink(RowNo); break;
    case "TimeSeen" : TimeSeen(RowNo); break;
    case "CheckIn"  : CheckIn(RowNo); break;
    case "Departure": Departure(RowNo); break;
    case "FollowUp" : FollowUp(RowNo); break;
    default : alert("Link Invalid"); 
  }
}
//
function SlotLink(RowNo) {
   PatientLinks.urnumber.value=t.rows[RowNo][0]
   PatientLinks.admissno.value=t.rows[RowNo][1]
   PatientLinks.casekeys.value=t.rows[RowNo][2]
   PatientLinks.action="outweb02.pbl";
   PatientLinks.reportno.value="3";
   PatientLinks.template.value="1";
   PatientLinks.submit();
}
function TimeSeen(RowNo) {
  var serverURL   = "../cgi-bin/outweb02.pbl?reportno=9" +
                  "&urnumber=" + t.rows[RowNo][0].replace(/ /g,"+") +
                  "&admissno=" + t.rows[RowNo][1].replace(/ /g,"+") +
                  "&casekeys=" + t.rows[RowNo][2].replace(/ /g,"+") +
                  "&updatety=" + "3" +
                  "&updttime=" + "4"
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
     if (t.rows.length == 1) {
         text2.value=returnValue.return_value;
     }
     else {
         text2[RowNo].value=returnValue.return_value;
     }
  }
}
//
function CheckIn(RowNo) {
  var serverURL   = "../cgi-bin/outweb02.pbl?reportno=9" +
                  "&urnumber=" + t.rows[RowNo][0].replace(/ /g,"+") +
                  "&admissno=" + t.rows[RowNo][1].replace(/ /g,"+") +
                  "&casekeys=" + t.rows[RowNo][2].replace(/ /g,"+") +
                  "&updatety=" + "3" +
                  "&updttime=" + "3"
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
     if (t.rows.length == 1) {
         text1.value=returnValue.return_value;
     }
     else {
         text1[RowNo].value=returnValue.return_value;
     }
  } 
}
//
function Departure(RowNo) {
   PatientLinks.urnumber.value=t.rows[RowNo][0]
   PatientLinks.admissno.value=t.rows[RowNo][1]
   PatientLinks.casekeys.value=t.rows[RowNo][2]
   PatientLinks.action="outweb02.pbl";
   PatientLinks.reportno.value="3";
   PatientLinks.template.value="3";
   DFrameSubmit(PatientLinks,0,20,800,400)
}
//
function FollowUp(RowNo) {
   PatientLinks.urnumber.value=t.rows[RowNo][0]
   PatientLinks.admissno.value=t.rows[RowNo][1]
   PatientLinks.casekeys.value=t.rows[RowNo][2]
   PatientLinks.action="outweb02.pbl";
   PatientLinks.reportno.value="3";
   PatientLinks.template.value="4";
   DFrameSubmit(PatientLinks,0,20,700,400)
}
//
function FormatButton(i,j) {
    TableString[TableString.length] = "<input type=button class=CheckButton " + 
                   " onclick=\"PatientTableLink(" + i + "," + j + ");\">  "; 
    //TableString[TableString.length] = t.rows[i][t.columns[j][2]]; 
    if(j==2){
         TableString[TableString.length] = "<input type=text size=5 name=text1 Readonly"+
            " style=\"border:0;background:paper.gif;\""+
            " value="+t.rows[i][t.columns[j][2]]+">";
    }
    if(j==3){
         TableString[TableString.length] = "<input type=text size=5 name=text2 Readonly"+
            " style=\"border:0;background:paper.gif;\""+
            " value="+t.rows[i][t.columns[j][2]]+">";
    }
    if(j==4){
         TableString[TableString.length] = "<input type=text size=5 name=text3 Readonly"+
            " style=\"border:0;background:paper.gif;\""+
            " value="+t.rows[i][t.columns[j][2]]+">";
    }
    if(j==5){
         TableString[TableString.length] = "<input type=text size=5 name=text4 Readonly"+
            " style=\"border:0;background:paper.gif;\""+
            " value="+t.rows[i][t.columns[j][2]]+">";
    }
}
function FormatImage(Value) {
     return("<img border=0 src='../images/" + Value + "'>");
}
function FormatTime(datetime) {
   time = datetime.substr(8,5);
   return(time);
}
function FormatDateTime(datetime) {
   yyyy = datetime.substr(0,4);
   mm = datetime.substr(4,2);
   dd = datetime.substr(6,2);
   time = datetime.substr(8,5);
   mth3=mm;
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
   if (yyyy!="    ") {
     return(dd + " " + mth3 + " " + yyyy + " at " + time); }
   else {
     return(""); }
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
function TableOutput(OrderColumn,AscDsc) {
 lastOrderColumn=OrderColumn;
 if (t.rows.length != 0 ) {
   t.sortTable(OrderColumn,AscDsc);
   TableHeading(OrderColumn);
   TableBody();
   TableEnding();
 }
}
function TableHeading(OrderColumn) {
  TableString = [];
  TableString[TableString.length] = "<div id=HeadingDivision style='overflow-x:hidden'>";
  TableString[TableString.length] = "<table style=\"table-layout:fixed\"" +
                 " border=" + t.Border +
                 " cellspacing=" + t.Cellspacing +
                 " cellpadding=" + t.Cellpadding +
                 " width=" + t.Width +
                 " align=" + t.Align + " >";

  TableString[TableString.length] = "<tr>" + 
             "<td class=HeadingCell align=left width=80>" +                  
             "Selected : " + t.rows.length + "</td>" +                       
             "<td class=HeadingCell align=center>" +
             document.title + "</td>" +
             "<td class=HeadingCell align=right width=30>" +
             "<a href='javascript:SortTablePrint()'>" +
             "<img src='../images/PrinterIcon.gif' border=0 align=absmiddle"+
             " alt='Print Page'>"+
             "</a>" +
             "</td></tr></table>"

  TableString[TableString.length] = "<table style=\"table-layout:fixed\"" +
                " border=" + t.Border +
                " cellspacing=" + t.Cellspacing +
                " cellpadding=" + t.Cellpadding +
                " width=" + t.Width +
                " align=" + t.Align + " >";
  TableString[TableString.length] = "<tr height=" + t.HeadingHeight + ">";
  for(var i = 0; i < t.columns.length; i++) {
    TableString[TableString.length] = "<td class=HeadingCell align=" + t.columns[i][4] + 
                   " width=" + t.columns[i][7] + " >" ;
    if (t.columns[i][3] == -1) {
      if (OrderColumn == i) { TableString[TableString.length] = "<b>" }
      TableString[TableString.length] = t.columns[i][0] + "</td>"; }
    else {
      TableString[TableString.length] = "<a href='javascript:onClick=TableSort(" + i + ")'>"; 
      if (OrderColumn == i) { TableString[TableString.length] = "<b>" }
      TableString[TableString.length] = t.columns[i][0] + "</a></td>"; }
  }
  TableString[TableString.length] = "</tr>";
  TableString[TableString.length] = "</table>";
  TableString[TableString.length] = "</div>";
  TableString[TableString.length] = "<div id=BodyDivision style='overflow-x:hidden'>";
  TableString[TableString.length] = "<table style=\"table-layout:fixed\" border=" + t.Border +
                 " cellspacing=" + t.Cellspacing +
                 " cellpadding=" + t.Cellpadding +
                 " width=" + t.Width +
                 " align=" + t.Align + " >";
}

function TableEnding() 
{
  TableString[TableString.length] = "</table></div>";

  if (TableString.join)
    TableLocation.innerHTML = TableString.join("");
  else 
  {
    var TableStringX="";
    for (var i=0; i < TableString.length; i++) TableStringX+=TableString[i];
    TableLocation.innerHTML = TableStringX;
  }

  // these are defined in the code we just rendered
  var HeadingDivision = document.getElementById('HeadingDivision');
  var BodyDivision    = document.getElementById('BodyDivision');

  var HeightValue     = TableLocation.parentElement.offsetHeight - 
                        HeadingSection.clientHeight -
                        HeadingDivision.clientHeight;
  //TableLocation.style.height = HeightValue - HeadingDivision.clientHeight
  TableLocation.style.top   = HeadingSection.clientHeight + 'px';
  BodyDivision.style.height = HeightValue + 'px';
}

function TableSort(OrderColumn) {
 if ( lastOrderColumn == OrderColumn ) { 
   if (AscDsc==1) {AscDsc=2;} else {AscDsc=1;} }
 else { 
   AscDsc=1; }
 TableOutput(OrderColumn,AscDsc);
}
//------------------------------------------------------------
// Print Table from Window
//------------------------------------------------------------
function SortTablePrint() {
  SaveHeight=BodyDivision.style.height
  BodyDivision.style.height="auto"
  print()
  BodyDivision.style.height=SaveHeight
}
//------------------------------------------------------------
// Display link referral checkbox
//------------------------------------------------------------
function DisplayReferral() {
  if (!isWhitespace(document.UpdateForm.refrdate.value)) {
    ShowLinkRef.innerHTML=linkreferral.innerHTML;
  } else {
    ShowLinkRef.innerHTML="";
  }
}
//------------------------------------------------------------
// Display check referal warning messages
//------------------------------------------------------------
function CheckRefLetter() {
  if(UpdateForm.linkrefr == undefined) {
    return true;
  }
  if(UpdateForm.linkrefr.checked == false) {
    return true;
  }
  if(!isWhitespace(UpdateForm.refrexpr.value)) {
    if(!isWhitespace(UpdateForm.refrwarn.value)) {
      if(UpdateForm.newslotk.value.substr(12,8) >= UpdateForm.refrwarn.value &&
        UpdateForm.newslotk.value.substr(12,8) <= UpdateForm.refrexpr.value) {
        alert("Referral expiry is imminent");
      }
    }
    if(UpdateForm.newslotk.value.substr(12,8) > UpdateForm.refrexpr.value) {
       if(!confirm("Invalid referral date range for this booking.")) {
          return false;
       }
    }
  }
  if(!isWhitespace(UpdateForm.refrdate.value)) {
    if(UpdateForm.newslotk.value.substr(12,8) < UpdateForm.refrdate.value) {
       if(!confirm("Invalid referral date range for this booking.")) {
          return false;
       }
    }
  }
  return true;
}
//
function SendLetter03(theForm) {
  if(theForm.outbb047.value.substr(10,1) == "C" ||
    (SetDateYYYYMMDD(theForm.clindate.value.substr(4,11)) <
     SetDateYYYYMMDD(theForm.currdate.value))) {   // Ind 8 - Chart Only or
    theForm.outbb067.selectedIndex=3;              // new booking less than
    theForm.outbb067.className="Readonly";         // today set send letter
    theForm.outbb067.disabled=true;                // N/A
  } else {
    if(theForm.outbb067.disabled==true) {          // Defalut send letter to
       theForm.outbb067.selectedIndex=0;           // Blank when re enabled
    }
    theForm.outbb067.className="";
    theForm.outbb067.disabled=false;
  }
  SendLetterDate03(theForm);
}
//
function SendLetterDate03(theForm) {
  if(theForm.outbb067.value=="1") {                // Yes Send Letter
    theForm.outbb066.className="Mandatory FutureDate";
    theForm.outbb066.readOnly=false;
    if(isWhitespace(theForm.outbb066.value)) {     // Calculate Letter Date
      CalculateLetterDate03(theForm)
    }
  } else {
    theForm.outbb066.className="Readonly Date";
    theForm.outbb066.value="";
    theForm.outbb066.readOnly=true;
  }
}
//
function CheckLetterDate03(theForm) {
if(theForm.outbb067.value=="1") {                // Yes Send Letter
  if(SetDateYYYYMMDD(theForm.clindate.value.substr(4,11)) <
     SetDateYYYYMMDD(theForm.outbb066.value)) {
         alert("Date cannot be greater than appointment date.")
         theForm.outbb066.select()
         theForm.outbb066.value="";
         return false }
  }
}
//
function EnableLetterFields(theForm) {
  theForm.outbb067.disabled=false;
}
//
function CalculateLetterDate03(theForm) {
  theForm.outbb066.value=theForm.clindate.value.substr(4,11);
  if(isWhitespace(theForm.clindate.value.substr(4,11))) {
    return;
  }
  AddSubtractDate(theForm.outbb066,theForm.othendps.value,"S");
  if(SetDateYYYYMMDD(theForm.outbb066.value) <=
     SetDateYYYYMMDD(theForm.currdate.value)) {
     theForm.outbb066.value=theForm.currdate.value;
//    AddSubtractDate(theForm.outbb066,"1","A");
  }
}
//
function ResetLetter(theForm) {
    theForm.outbb067.selectedIndex=0;
    theForm.outbb066.value="";
    theForm.outbb066.readOnly=false;
    theForm.outbb066.className="Date";
}
//
function showFundingSource(theForm) {
    i=theForm.outbb002.selectedIndex;
    ind=theForm.outbb002.options[i].value.substring(3,4)
    if (ind=="A") {
      FundingHeading.innerHTML=offdutyhd.innerHTML;
      FundingId.innerHTML=offdutyid.innerHTML;
    } else {
      if (ind=="P") {
        FundingHeading.innerHTML=fundinghd.innerHTML;
        FundingId.innerHTML=fundingid.innerHTML;
        theForm.pmsvx141.className="Mandatory";
      } else {
        FundingHeading.innerHTML=blanklabel.innerHTML;
        FundingId.innerHTML=blanklabel.innerHTML;
      }
    }
}
function addContactRedirect() {
  if((document.PatientLinks.othecenc.value != "1" &&
     document.PatientLinks.othecenc.value != "2") ||
   isWhitespace(document.PatientLinks.alrevisn.value)) {
   return;
  }

  if(isWhitespace(PatientLinks.alenenct.value)) {
     var linkUrl="allweb03.pbl?reportno=13&template=001" +
                 "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
                 "&admissno=" + PatientLinks.alrevisn.value.replace(/ /g,"+") +
                 "&deptcode=" + PatientLinks.alredept.value.replace(/ /g,"+") +
                 "&bulkenck=" + PatientLinks.alrevisn.value.replace(/ /g,"+") +
                                PatientLinks.admissno.value.replace(/ /g,"+")
     document.UpdateForm.redirect.value=linkUrl
     document.UpdateForm.nextpage.value="1";
  } else {
    if(confirm("Linked contacts exist for this appointment.\n" +
               "OK to enter additional contacts, Cancel to attend")) {
       var linkUrl="allweb03.pbl?reportno=1&template=009" +
                 "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
                 "&admissno=" + PatientLinks.alrevisn.value.replace(/ /g,"+") +
                 "&deptcode=" + PatientLinks.alredept.value.replace(/ /g,"+") +
                 "&bulkenck=" + PatientLinks.alrevisn.value.replace(/ /g,"+") +
                                PatientLinks.admissno.value.replace(/ /g,"+")
       document.UpdateForm.redirect.value=linkUrl
       document.UpdateForm.nextpage.value="1";
     }
  }
}

