//jsVersion  : V11.03.00
//------------------------------------------------------------
// Function : AlliedSort.js
//
// Modifications : 
//----------------------------------------------------------------------
// V9.10.01  17.07.2008 Jill Habasque CAR 162660
//           Added FolderAlert[ptmxsin1]
// V9.08.01  01.12.2006 Ebon Clements CAR 126021
//           Changed using IE6 test to using IE6 or IE7
// V9.07.01 19.09.2006 Ebon Clements CAR 107243
//          Added FolderAlertDelete.gif
// V9.04.01 21.07.2005 Ebon Clements CAR 55997
//          AlliedSort.js with arrays for TableString. AlliedSortOLD.js is
//          the save copy of this before the array changes.
//----------------------------------------------------------------------
// V9.04.00 21.03.2005 Ebon Clements CAR 58443
//          Added FolderAlertBlack.gif
// V9.02.02 13.11.2001 B.G.Ackland
//          Added Classes for Odd & Even Row Highlighting
// 
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
      case "MaxLimit"  :  t.rows.sort(NumericSort); break;
      case "MinLimit"  :  t.rows.sort(NumericSort); break;
      case "Graph"     :  t.rows.sort(NumericSort); break;
      case "Name"      :  t.rows.sort(StringSort); break;
      case "NameAll"   :  t.rows.sort(StringSort); break;
      case "Image"     :  t.rows.sort(StringSort); break;
      case "IconLink"  :  t.rows.sort(StringSort); break;
      case "String"    :  t.rows.sort(StringSort); break;
      case "Patient"   :  t.rows.sort(StringSort); break;
    }
  }
  else {
    switch(t.columns[Column][1]) {
      case "Date"      :  t.rows.sort(RevNumericSort); break;
      case "DateTime"  :  t.rows.sort(RevStringSort); break;
      case "Time"      :  t.rows.sort(RevStringSort); break;
      case "Number"    :  t.rows.sort(RevNumericSort); break;
      case "MaxLimit"  :  t.rows.sort(RevNumericSort); break;
      case "MinLimit"  :  t.rows.sort(RevNumericSort); break;
      case "Graph"     :  t.rows.sort(RevNumericSort); break;
      case "Name"      :  t.rows.sort(RevStringSort); break;
      case "NameAll"   :  t.rows.sort(RevStringSort); break;
      case "Image"     :  t.rows.sort(RevStringSort); break;
      case "IconLink"  :  t.rows.sort(RevStringSort); break;
      case "String"    :  t.rows.sort(RevStringSort); break;
      case "Patient"   :  t.rows.sort(RevStringSort); break;
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
   Recordstat=t.rows[i][5];
   RowClass="TableRowEven"
   if (i%2==1) { RowClass="TableRowOdd" }
   TableString[TableString.length] = "<tr height=" + t.RowHeight + " class=" + RowClass + ">" ;
   for(var j = 0; j < t.columns.length; j++) {
     TableString[TableString.length] = "<td align=" + t.columns[j][4]  ;
     TableString[TableString.length] = " width=" + t.columns[j][7] + ">" ;
//--------------------------HPS CODE STARTS HERE-------------------------------
    if (Recordstat=="Cancel") {
     TableString[TableString.length] = "<strike>";}             
//--------------------------HPS CODE ENDS HERE--------------------------------
     LinkColumn = t.columns[j][6];
     LinkFlag = 0
     ImgString = t.columns[j][5];
     if (LinkColumn != "") {
       LinkHref = t.rows[i][t.columns[j][6]];
       if (LinkHref != ""){ 
         TableString[TableString.length] = "<a href=\"" + LinkHref.replace(/\s*$/,"") + "\">"  
         LinkFlag = 1 }
     }
     switch(t.columns[j][1]) {
       case "MaxLimit" :  
         FormatIcon();
         ThisValue=t.rows[i][t.columns[j][2]];
         MaxValue=t.columns[j][8];
         HighLightColor=t.columns[j][9];
         if (ThisValue>MaxValue) {
            TableString[TableString.length] = "<font color="+HighLightColor+"><b>"
            TableString[TableString.length] = t.rows[i][t.columns[j][2]];
            TableString[TableString.length] = "</font><b>" }
         else {
            TableString[TableString.length] = t.rows[i][t.columns[j][2]]; }
         if ( LinkFlag ) { TableString[TableString.length] = "</a>"; }
         break;
       case "MinLimit" :  
         FormatIcon();
         ThisValue=t.rows[i][t.columns[j][2]];
         MaxValue=t.columns[j][8];
         HighLightColor=t.columns[j][9];
         if (ThisValue<MaxValue) {
            TableString[TableString.length] = "<font color="+HighLightColor+"><b>"
            TableString[TableString.length] = t.rows[i][t.columns[j][2]];
            TableString[TableString.length] = "</font><b>" }
         else {
            TableString[TableString.length] = t.rows[i][t.columns[j][2]]; }
         if ( LinkFlag ) { TableString[TableString.length] = "</a>"; }
         break;
       case "Date" :  
         FormatIcon();
         TableString[TableString.length] = FormatDate(t.rows[i][t.columns[j][2]]);
         break;
       case "DateTime" :  
         FormatIcon();
         TableString[TableString.length] = FormatDateTime(t.rows[i][t.columns[j][2]]);
         break;
       case "Time" :  
         FormatIcon();
         TableString[TableString.length] = FormatTime(t.rows[i][t.columns[j][2]]);
         break;
       case "Name" :  
         FormatIcon();
         TableString[TableString.length] = FormatName(t.rows[i][t.columns[j][2]]);
         break;
       case "NameAll" :  
         FormatIcon();
         TableString[TableString.length] = FormatNameAll(t.rows[i][t.columns[j][2]]);
         break;
       case "Graph":  
         TableString[TableString.length] = FormatGraph(t.rows[i][t.columns[j][2]],t.columns[j][5]);
         break;
       case "IconLink":  
         FormatIcon();
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
       case "Patient":   
         FormatPatientIcon(t.rows[i][t.columns[j][8]])
         TableString[TableString.length] = t.rows[i][t.columns[j][2]];
         if ( LinkFlag ) { TableString[TableString.length] = "</a>"; }
         break;
       default    :   
         FormatIcon();
         TableString[TableString.length] = t.rows[i][t.columns[j][2]];
         if ( LinkFlag ) { TableString[TableString.length] = "</a>"; }
         break;
     }
     if (isWhitespace(t.rows[i][t.columns[j][2]])) {
       TableString[TableString.length] = "&nbsp;" }
//-----------------------------HPS CODE STARTE HERE---------------------------
    if (Recordstat=="Cancel") {
     TableString[TableString.length] = "</strike>"; } 
//------------------------------HPS CODE ENDS HERE----------------------------     TableString[TableString.length] = "</td>" ;
     }
   TableString[TableString.length] = "</tr>" ;
   }
}
function FormatIcon() {
 if (ImgString != "" ) {
   TableString[TableString.length] = "<img src=\"../images/" + ImgString + 
                  "\" border=0 hspace=4 align=absmiddle>"; 
   if (LinkFlag ) { 
      LinkFlag = 0;
      TableString[TableString.length] = "</a>" ; }
 }
}
function FormatPatientIcon(Indicators) {
 if (Indicators.substr(4,1)==1) { ImgString="FolderNotes.gif" }
 if (Indicators.substr(3,1)==1) { ImgString="FolderResult.gif" }
 if (Indicators.substr(2,1)==1) { ImgString="FolderAlert.gif" }
 if (Indicators.substr(2,1)==2) { ImgString="FolderAlertBlack.gif" }
 if (Indicators.substr(2,1)==3) { ImgString="FolderAlertDelete.gif" }
 if (Indicators.substr(2,1)!=" "&& Indicators.substr(2,1)!="0"&&
     Indicators.substr(2,1)!="" && Indicators.substr(2,1)!="1"&&
     Indicators.substr(2,1)!="2"&& Indicators.substr(2,1)!="3") {
       ImgString="FolderAlert" +
       Indicators.substr(2,1) + ".gif" }
 if (Indicators.substr(0,1)==1) { ImgString="FolderDeceased.gif" }
 if (ImgString != "" ) {
   TableString[TableString.length] = "<img src=../images/" + ImgString ; 
   TableString[TableString.length] = " border=0 hspace=4 align=absmiddle>"; 
   if (LinkFlag ) { 
      LinkFlag = 0;
      TableString[TableString.length] = "</a>" ; }
 }
}
function FormatName(Name) {
 Title="";
 Surname=""
 Given=""
 Initial=""
 NameFields=""
 NameFields=Name.split(",");
 if (NameFields.length > 1) {
   Title=","+NameFields[2].substr(0,1) + NameFields[2].substr(1,5).toLowerCase()
   Given=NameFields[1].substr(0,1) + NameFields[1].substr(1,25).toLowerCase()
   Initial=NameFields[1].substr(0,1);
   Surname=NameFields[0].toUpperCase()
 }
 else {
   Title="";
   Surname=Name;
   Initials="";
 }
 EndLink="";
 if ( LinkFlag ) { EndLink += "</a>"; }
 return( "<b>" + Surname + "</b> " + Title + " " + Initial + EndLink );
}
function FormatNameAll(Name) {
 Title="";
 Surname=""
 Given=""
 Initial=""
 NameFields=""
 NameFields=Name.split(",");
 if (NameFields.length > 1) {
   Title=","+NameFields[2].substr(0,1) + NameFields[2].substr(1,5).toLowerCase()
   Given=NameFields[1].substr(0,1) + NameFields[1].substr(1,25).toLowerCase()
   Initial=NameFields[1].substr(0,1);
   Surname=NameFields[0].toUpperCase()
 }
 else {
   Title="";
   Surname=Name;
   Initials="";
 }
 EndLink="";
 if ( LinkFlag ) { EndLink += "</a>"; }
 return( "<b>" + Surname + "</b> " + Title + " " + Initial + 
         " (" + NameFields[3] + ") " + 
         NameFields[5] + " " + NameFields[4] + EndLink );
}
function FormatGraph(Value,Image) {
     return("<img src='../images/" + Image + "' height=10 " +
             "width=" + Value + " align=absbottom>");
}
function FormatImage(Value) {
     return("<img border=0 src='../images/" + Value + "'>");
}
function FormatTime(datetime) {
   time = datetime.substr(8,5);
   EndLink="";
   if ( LinkFlag ) { EndLink += "</a>"; }
   return(time + EndLink);
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
   EndLink="";
   if ( LinkFlag ) { EndLink += "</a>"; }
   if (yyyy!="    ") {
     return(dd + " " + mth3 + " " + yyyy + " at " + time + EndLink); }
   else {
     return(EndLink); }
   
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
   EndLink="";
   if ( LinkFlag ) { EndLink += "</a>"; }
   return(dd + " " + mth3 + " " + yyyy + EndLink);
}
function TableOutput(OrderColumn,AscDsc) {
 lastOrderColumn=OrderColumn;
 if (t.rows.length != 0 ) {
   t.sortTable(OrderColumn,AscDsc);
   TableHeading(OrderColumn);
   TableBody();
   if (t.tableTotals.length != 0 ) { 
      TableTotals();
   }
   TableEnding();
 }
}
function TableHeading(OrderColumn) {
  TableString = [];
  TableString[TableString.length] = '<div id=HeadingDivision >';
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
             "<td class=HeadingCell align=right width=20>" +
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
  TableString[TableString.length] = '<div id=BodyDivision>'
  TableString[TableString.length] = "<table style=\"table-layout:fixed\" border=" + t.Border +
                 " cellspacing=" + t.Cellspacing +
                 " cellpadding=" + t.Cellpadding +
                 " width=" + t.Width +
                 " align=" + t.Align + " >";
}
function TableEnding() 
{
  TableString[TableString.length] = "</table></div>";

  // these are defined in the html
  var TableLocation = document.getElementById('TableLocation');
  var HeadingSection = document.getElementById('HeadingSection');

  // unload the array into continuous html render
  if (TableString.join) // if join method is available;
  {
    TableLocation.innerHTML = TableString.join("");
  }
  else
  {
    TableStringX="";
    for (i=0;i < TableString.length; i++)
    {
       TableStringX+=TableString[i];
    }
    TableLocation.innerHTML = TableStringX;
  }

  // these are defined in the code we just rendered
  var HeadingDivision = document.getElementById('HeadingDivision');
  var BodyDivision    = document.getElementById('BodyDivision');

  // calculate the available table height based on the view frame height
  var th = getClientHeight();  // view frame height

  if (HeadingSection)
  {
     th -= HeadingSection.clientHeight;
     TableLocation.style.top = HeadingSection.clientHeight + 'px';
  }
  else
     TableLocation.style.top = '0px';

  th -= HeadingDivision.clientHeight;
  BodyDivision.style.height = th + 'px';
}

function TableSort(OrderColumn) {
 if ( lastOrderColumn == OrderColumn ) { 
   if (AscDsc==1) {AscDsc=2;} else {AscDsc=1;} }
 else { 
   AscDsc=1; }
 TableOutput(OrderColumn,AscDsc);
}
function TableTotals() {
TableString[TableString.length] = "<tr height=" + t.RowHeight + ">" ;
   for(var j = 0; j < t.columns.length; j++) {
     TableString[TableString.length] = "<td align=" + t.columns[j][4] ;
     TableString[TableString.length] = " width=" + t.columns[j][7] + "><b>" ;
     LinkType = t.columns[j][8];
     LinkColumn = t.columns[j][6];
     LinkFlag = 0
     ImgString = t.columns[j][5];
     if (LinkColumn != "") {
      LinkHref = t.tableTotals[t.columns[j][6]];
      if (LinkHref != ""){ 
       if (LinkType == "1") { 
        TAbleString[TableString.length] = "<a href='javascript:PopUpWin(\"" + LinkHref + "\")'>"  }
       else {
        TableString[TableString.length] = "<a href=" + LinkHref.replace(/\s*$/,"") + ">"  }
       LinkFlag = 1 }
     }
     switch(t.columns[j][1]) {
       case "Date" :  
         FormatIcon();
         TableString[TableString.length] = FormatDate(t.tableTotals[t.columns[j][2]]);
         break;
       case "DateTime" :  
         FormatIcon();
         TableString[TableString.length] = FormatDateTime(t.tableTotals[t.columns[j][2]]);
         break;
       case "Time" :  
         FormatIcon();
         TableString[TableString.length] = FormatTime(t.tableTotals[t.columns[j][2]]);
         break;
       case "Name" :  
         FormatIcon();
         TableString[TableString.length] = FormatName(t.tableTotals[t.columns[j][2]]);
         break;
       case "NameAll" :  
         FormatIcon();
         TableString[TableString.length] = FormatNameAll(t.tableTotals[t.columns[j][2]]);
         break;
       case "Graph":  
         TableString[TableString.length] = FormatGraph(t.tableTotals[t.columns[j][2]],t.columns[j][5]);
         break;
       case "Image":  
         if (t.columns[j][5] == "") {
           ImageString=t.tableTotals[t.columns[j][2]];
         }
         else {
           ImageString=t.columns[j][5] +
                       t.tableTotals[t.columns[j][2]] + ".gif"
         }
         TableString[TableString.length] = FormatImage(ImageString);
         break;
       default    :   
         FormatIcon();
         TableString[TableString.length] = t.tableTotals[t.columns[j][2]];
         if ( LinkFlag == "1" ) { TableString[TableString.length] = "</a>"; }
         break;
     }
     t.tableTotals[t.columns[j][2]] 
     TableString[TableString.length] = "</td>" ;
     }
   TableString[TableString.length] = "</tr>" ;
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
