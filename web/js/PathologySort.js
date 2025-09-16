//jsVersion  : V11.03.00
//========================================================================
// Program   : PathologySort.js
//
// Function  : 
//
// Modifications :
//
// V11.00.01 12/02/2021 Don Nguyen    TSK 0902464
//           Added TableSize() and other cross-browser changes
//----------------------------------------------------------------------
// V9.08.01  01.12.2006 Ebon Clements CAR 126021
//           Changed using IE6 test to using IE6 or IE7
// V9.04.00  22.07.2005 Ebon Clements CAR 55997
//           PathologySort.js with arrays for TableString. PathologySortOLD.js
//           is the save copy of this before the array changes.
//----------------------------------------------------------------------
//                 V9.02.01 13.11.2001 B.G.Ackland
//                          Added Classes for Odd & Even Row Highlighting
//
// Version   : V5.08.01 16.10.2000 B.G.Ackland 
//                      Result Link Script Introduced
//========================================================================
var CompatibilityMode = false;  // Browser Compatibility Mode

function ResultLink(LinkUrl,DSS,Panel) {
LinkToUrl=LinkUrl
if ( DSS.substr(0,2) == "HM" ) {
  if ( Panel.substr(0,3) == "FRH" ) {
      LinkToUrl=LinkUrl.substr(0,22) + "01" +
		LinkUrl.substr(24,10) + "001" +
		LinkUrl.substr(37,27)
  } else {
      LinkToUrl=LinkUrl.substr(0,22) + "03" +
  	        LinkUrl.substr(24,10) + "001" +
	        LinkUrl.substr(37,27)
  }
}

if ( DSS.substr(0,2) == "CH" ) {
  if ( Panel.substr(0,3) == "FRB" ) {
      LinkToUrl=LinkUrl.substr(0,22) + "01" +
		LinkUrl.substr(24,10) + "001" +
		LinkUrl.substr(37,27)
  } else {
      LinkToUrl=LinkUrl.substr(0,22) + "03" +
                LinkUrl.substr(24,10) + "002" +
                LinkUrl.substr(37,27) 
  }
}
location.href=LinkToUrl
}
function Table(Border,Cellspacing,Cellpadding,Width,Align,HHeight,RHeight) {
   this.Border = Border;
   this.Cellspacing = Cellspacing;
   this.Cellpadding = Cellpadding;
   this.Width = Width;
   this.Align = Align;
   this.HeadingHeight = HHeight;
   this.Row = RHeight;
   this.rows = new Array();
   this.addRow = _addTableRow;
   this.columns = new Array();
   this.addColumn = _addTableColumn;
   this.sortTable = _sortTable;
   this.tableTotals = new Array();
   this.addTotal = _addTableTotal;
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
      case "Number"    :  t.rows.sort(NumericSort); break;
      case "Graph"     :  t.rows.sort(NumericSort); break;
      case "Name"      :  t.rows.sort(StringSort); break;
      case "Image"     :  t.rows.sort(StringSort); break;
      case "String"    :  t.rows.sort(StringSort); break;
    }
  }
  else {
    switch(t.columns[Column][1]) {
      case "Date"      :  t.rows.sort(RevNumericSort); break;
      case "DateTime"  :  t.rows.sort(RevStringSort); break;
      case "Number"    :  t.rows.sort(RevNumericSort); break;
      case "Graph"     :  t.rows.sort(RevNumericSort); break;
      case "Name"      :  t.rows.sort(RevStringSort); break;
      case "Image"     :  t.rows.sort(RevStringSort); break;
      case "String"    :  t.rows.sort(RevStringSort); break;
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
}
function _addTableRow() {
  this.rows[this.rows.length] = new Array();
  var row = this.rows[this.rows.length-1];
  for(var i = 0; i < arguments.length; i++) 
     row[row.length] = arguments[i];
}
function TableBody() {
 for(var i = 0; i < t.rows.length; i++) {
   RowClass="TableRowEven"
   if (i%2==1) { RowClass="TableRowOdd" }
   TableString[TableString.length] = "<tr height=" + t.RowHeight + " class=" + RowClass + ">" ;
   for (var j = 0; j < t.columns.length; j++) {
     if (CompatibilityMode) {
       TableString[TableString.length] = "<td align=" + t.columns[j][4];
     } else {
       TableString[TableString.length] = "<td style='padding:0px 5px' align=" +
         t.columns[j][4];
     }
     TableString[TableString.length] = " width=" + t.columns[j][7] + ">" ;
     LinkColumn = t.columns[j][6];
     LinkFlag = 0
     ImgString = t.columns[j][5];
     if (LinkColumn != "") {
       LinkHref = t.rows[i][t.columns[j][6]];
       if (LinkHref != ""){ 
         TableString[TableString.length] = "<a href='javascript:ResultLink(\"" + LinkHref +
                 "\",\"" + t.rows[i][8] + "\",\"" + t.rows[i][9] + "\")'>" ; 
         LinkFlag = 1 }
     }
     switch(t.columns[j][1]) {
       case "Date" :  
         FormatIcon(i);
         TableString[TableString.length] = FormatDate(t.rows[i][t.columns[j][2]]);
         break;
       case "DateTime" :  
         FormatIcon(i);
         TableString[TableString.length] = FormatDateTime(t.rows[i][t.columns[j][2]]);
         break;
       case "Name" :  
         FormatIcon(i);
         TableString[TableString.length] = FormatName(t.rows[i][t.columns[j][2]]);
         break;
       case "Graph":  
         TableString[TableString.length] = FormatGraph(t.rows[i][t.columns[j][2]],t.columns[j][5]);
         break;
       case "Image":  
         if (t.columns[j][5] == "") {
           ImageString=t.rows[i][t.columns[j][2]];
         }
         else {
           ImageString=t.columns[j][5] +
                       t.rows[i][t.columns[j][2]] + ".gif"
         }
         TableString[TableString.length] = FormatImage(ImageString);
         break;
       default    :   
         FormatIcon(i);
         TableString[TableString.length] = t.rows[i][t.columns[j][2]];
         if ( LinkFlag ) { TableString[TableString.length] = "</a>"; }
         break;
     }
     t.rows[i][t.columns[j][2]] 
     TableString[TableString.length] = " &nbsp</td>" ;
     }
   TableString[TableString.length] = "</tr>" ;
   }
}
function FormatIcon(i) {
 if (ImgString != "" ) {
   ImgString="ResultIcon" + t.rows[i][8].substr(0,2) + ".gif"
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
   UR=NameFields[3]
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
 return( "<b>" + Surname + "</b> " + Title + " " + Initial + UR + EndLink );
}
function FormatGraph(Value,Image) {
     return("<img src=../images/" + Image + " height=10 " +
             "width=" + Value + " align=absbottom>");
}
function FormatImage(Value) {
     return("<img src=../images/" + Value + ">");
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
   return(dd + " " + mth3 + " " + time + EndLink);
//   return(dd + " " + mth3 + " " + yyyy + " at " + time + EndLink);
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
  var sAgentString = window.navigator.userAgent;

  if ( (sAgentString.indexOf("MSIE 6.0") >= 1 ||
        sAgentString.indexOf("MSIE 7.0") >= 1)
       && sAgentString.indexOf("compatible") >= 1 )
  {
    CompatibilityMode = true;
  }

  t.sortTable(OrderColumn,AscDsc);
  TableHeading(OrderColumn);
  TableBody();
  if (t.tableTotals.length != 0 ) { 
    TableTotals();
  }
  TableEnding();
}
function TableHeading(OrderColumn) {
  TableString = [];
  TableString[TableString.length] = '<div id=HeadingDivision >';
//
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
                 document.title +
                 "<td class=HeadingCell align=right width=20>" +
                 "<img src=../images/PrinterIcon.gif onClick='SortTablePrint()'>"+
                 "</td></tr></table>"
//
  TableString[TableString.length] = "<table style=\"table-layout:fixed\" border=" + t.Border +
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
  // these are defined in the html
  var TableLocation = document.getElementById('TableLocation');
  var HeadingSection = document.getElementById('HeadingSection');

  TableString[TableString.length] = "</table>";

  if (MoreResults)  
  {
    TableString[TableString.length] = "<form>";
    TableString[TableString.length] = "<input type=\"button\" value=\"Next\" class=\"button\" "; 
    TableString[TableString.length] = " onClick=\"ShowMore('" + MoreStartKey + "')\"; >";
    TableString[TableString.length] = "</form>"
  }

  TableString[TableString.length] = "</div>";

  if (TableString.jopin)
    TableLocation.innerHTML = TableString.join("");
  else 
  {
    var TableStringX="";
    for(i=0 ; i < TableString.length ; i++) 
    {
       TableStringX+=TableString[i];
    }
    TableLocation.innerHTML = TableStringX;
  }

  TableSize();
}

function TableSize() {
  var HeadingSection = document.getElementById('HeadingSection');
  var TableLocation = document.getElementById('TableLocation');
  var HeadingDivision = document.getElementById('HeadingDivision');
  var BodyDivision    = document.getElementById('BodyDivision');

  var height = document.body.clientHeight;

  if (window.navigator.userAgent.indexOf("MSIE") >= 1) {
    // Since getClientHeight() in IE8 returns space available excluding
    // the DFrame title bar (<span>) we need to take that into account.
    if (document.getElementById('DFrameTitleBar') != undefined) {
      height -= document.getElementById('DFrameTitleBar').clientHeight;
    }
  }

  var secHeight = 0;
  if (HeadingSection) {
    secHeight = HeadingSection.clientHeight || HeadingSection.offsetHeight;
  }
  else {
    TableLocation.style.top = '0px';
  }


  //
  // Set the height of the table rows section (i.e. <div id=BodyDivision>)
  //
  if (TableLocation.offsetTop > 0) {  // TableLocation is not at the top
    // We need a slight delay here to allow time for the browser to render
    // the contents above 'TableLocation' before we can resize 'BodyDivision'
    // accurately.
    window.setTimeout(SetListHeight, 500);
  }
  else {
    BodyDivision.style.height = height - secHeight - HeadingDivision.clientHeight - 1 + 'px';
  }

  if (BodyDivision.scrollHeight >  BodyDivision.clientHeight) {
    // List overflows (i.e. vertical scrollbar visible)
    HeadingDivision.style.overflowY = 'scroll';  // force vertical scrollbar
                                                 // on list heading section
  }
  else {
    // List does NOT overflow (i.e. no vertical scrollbar in BodyDivision)
    if (window.navigator.userAgent.indexOf("MSIE 7.0") >= 1) {
      // Since IE 8 will always show the vertical scrollbar for the BodyDivision
      // (even when scrolling is not needed) we need to also show the
      // vertical scrollbar for HeadingDivision so columns line up.
      HeadingDivision.style.overflowY = 'scroll';
    }
    else {
      HeadingDivision.style.overflowY = 'hidden';
    }
  }
}

function SetListHeight() {
  var TableLocation = document.getElementById('TableLocation');
  var HeadingDivision = document.getElementById('HeadingDivision');
  var BodyDivision = document.getElementById('BodyDivision');

  var height = document.body.clientHeight;

  BodyDivision.style.height = height - TableLocation.offsetTop - HeadingDivision.offsetHeight - 2 + "px";
}

function TableSort(OrderColumn) {
 if ( lastOrderColumn == OrderColumn ) { 
   if (AscDsc==1) {AscDsc=2;} else {AscDsc=1;} }
 else { 
   AscDsc=1; }
 lastOrderColumn=OrderColumn;
 TableOutput(OrderColumn,AscDsc);
}

function TableTotals() {
   TableString[TableString.length] = "<tr height=" + t.RowHeight + " class=TableRowTotal>" ;
   for(var j = 0; j < t.columns.length; j++) {
     TableString[TableString.length] = "<td align=" + t.columns[j][4] ;
     TableString[TableString.length] = " width=" + t.columns[j][7] + "><b>" ;
     LinkColumn = t.columns[j][6];
     LinkFlag = 0
     ImgString = t.columns[j][5];
     if (LinkColumn != "") {
       LinkHref = t.tableTotals[t.columns[j][6]];
       if (LinkHref != ""){ 
         TableString[TableString.length] = "<a href=" + LinkHref + ">" ; 
         LinkFlag = 1 }
     }
     switch(t.columns[j][1]) {
       case "Date" :  
         FormatIcon(i);
         TableString[TableString.length] = FormatDate(t.tableTotals[t.columns[j][2]]);
         break;
       case "DateTime" :  
         FormatIcon(i);
         TableString[TableString.length] = FormatDateTime(t.tableTotals[t.columns[j][2]]);
         break;
       case "Name" :  
         FormatIcon(i);
         TableString[TableString.length] = FormatName(t.tableTotals[t.columns[j][2]]);
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
         FormatIcon(i);
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
