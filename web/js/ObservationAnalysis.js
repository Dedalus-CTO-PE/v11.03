//jsVersion  : V11.03.00
//----------------------------------------------------------------------
//
// Modifications :
//----------------------------------------------------------------------
// V9.08.01  01.12.2006 Ebon Clements CAR 126021
//           Changed using IE6 test to using IE6 or IE7
// V9.04.00  22.07.2005 Ebon Clements CAR 55997
//           ObservationAnalysis.js with arrays for TableString.
//           ObservationAnalysisOLD.js is
//           the save copy of this before the array changes.
//----------------------------------------------------------------------
//                 V9.02.01 13.11.2001 B.G.Ackland
//                          Added Classes for Odd & Even Row Highlighting
//
//----------------------------------------------------------------------
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
      case "IconLink"  :  t.rows.sort(StringSort); break;
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
      case "IconLink"  :  t.rows.sort(RevStringSort); break;
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
   for(var j = 0; j < t.columns.length; j++) {
     TableString[TableString.length] = "<td align=" + t.columns[j][4]  ;
     TableString[TableString.length] = " width=" + t.columns[j][7] + ">" ;
     LinkColumn = t.columns[j][6];
     LinkFlag = 0
     ImgString = t.columns[j][5];
     if (LinkColumn != "") {
       LinkHref = t.rows[i][t.columns[j][6]];
       if (LinkHref != ""){ 
         TableString[TableString.length] = "<a href=\"" + LinkHref + "\">"  
         LinkFlag = 1 }
     }
     switch(t.columns[j][1]) {
       case "Date" :  
         FormatIcon();
         TableString[TableString.length] = FormatDate(t.rows[i][t.columns[j][2]]);
         break;
       case "DateTime" :  
         FormatIcon();
         TableString[TableString.length] = FormatDateTime(t.rows[i][t.columns[j][2]]);
         break;
       case "Name" :  
         FormatIcon();
         TableString[TableString.length] = FormatName(t.rows[i][t.columns[j][2]]);
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
           ImageString=t.columns[j][5] +
                       t.rows[i][t.columns[j][2]] + ".gif"
         }
         TableString[TableString.length] = FormatImage(ImageString);
         break;
       default    :   
         FormatIcon();
         TableString[TableString.length] = t.rows[i][t.columns[j][2]];
         if ( LinkFlag ) { TableString[TableString.length] = "</a>" }
         break;
     }
     t.rows[i][t.columns[j][2]] 
     TableString[TableString.length] = " &nbsp</td>" ;
     }
   TableString[TableString.length] = "</tr>" ;
   }
}
function FormatIcon() {
 if (ImgString != "" ) {
   TableString[TableString.length] = "<img src=\"../images/" + ImgString ; 
   TableString[TableString.length] = "\" border=0 hspace=4 align=absmiddle>";
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
function FormatGraph(Value,Image) {
     return("<img src=\"../images/" + Image + "\" height=10 " +
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
   return(dd + " " + mth3 + " " + yyyy + " at " + time + EndLink);
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
             "<img src='../images/PrinterIcon.gif' onClick='SortTablePrint()'>"+
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
    switch (t.columns[i][3]) {
      case -1 :
         if (OrderColumn == i) { TableString[TableString.length] = "<b>" }
         TableString[TableString.length] = t.columns[i][0] + "</td>"; 
         break; 
      case -2 :
         TableString[TableString.length] = "<a href='javascript:GraphColumn(" + i + ")'>"; 
         TableString[TableString.length] = "<img src=\"../images/GraphIcon.gif\" border=0 " +
                        " hspace=4 align=absmiddle></a>";
         TableString[TableString.length] = t.columns[i][0] + "</td>"; 
         break; 
      case -3 :
         TableString[TableString.length] = "<a href='javascript:GraphBP(" + i + ")'>"; 
         TableString[TableString.length] = "<img src=\"../images/GraphIcon.gif\" border=0 " +
                        " hspace=4 align=absmiddle></a>";
         TableString[TableString.length] = t.columns[i][0] + "</td>"; 
         break; 
      default :
         TableString[TableString.length] = "<a href='javascript:TableSort(" + i + ")'>"; 
         if (OrderColumn == i) { TableString[TableString.length] = "<b>" }
         TableString[TableString.length] = t.columns[i][0] + "</a></td>"; 
         break;
    }
  }
  TableString[TableString.length] = "</tr>";
  TableString[TableString.length] = "</table>";
  TableString[TableString.length] = "<table style=\"table-layout:fixed\" border=" + t.Border +
                 " cellspacing=" + t.Cellspacing +
                 " cellpadding=" + t.Cellpadding +
                 " width=" + t.Width +
                 " align=" + t.Align + " >";
}

function TableEnding() 
{
  var TableLocation = document.getElementById('TableLocation');
  TableString[TableString.length] = "</table>";

  if (TableString.join)
    TableLocation.innerHTML = TableString.join("");
  else 
  {
    var TableStringX="";
    for (var i=0; i < TableString.length; i++) 
    {
      TableStringX+=TableString[i];
    }
    TableLocation.innerHTML = TableStringX;
  }
}

function TableSort(OrderColumn) {
 if ( lastOrderColumn == OrderColumn ) { 
   if (AscDsc==1) {AscDsc=2;} else {AscDsc=1;} }
 else { 
   AscDsc=1; }
 TableOutput(OrderColumn,AscDsc);
}
function TableTotals() {
   TableString[TableString.length] = "<tr height=" + t.RowHeight + " class=TableRowTotal>" ;
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
        TableString[TableString.length] = "<a href='javascript:PopUpWin(\"" + LinkHref + "\")'>"  }
       else {
        TableString[TableString.length] = "<a href=\"" + LinkHref + "\">"  }
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
       case "Name" :  
         FormatIcon();
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
         if ( LinkFlag == "1" ) { TableString[TableString.length] = "</a>"; }
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
//------------------------------------------------------------
// Single Line Graph
//------------------------------------------------------------
function GraphBP(ColumnNo) {
 GraphHead()
 Dataset0dateValue = ""
 Dataset0yValue = ""
 Dataset1dateValue = ""
 Dataset1yValue = ""
 Dataset2dateValue = ""
 Dataset2yValue = ""
 DelimiterField = ""
 ReferenceRangeType=0
 for(var i = 0; i < t.rows.length; i++) {
   if (!isWhitespace(t.rows[i][ColumnNo])){
     Dataset0dateValue += DelimiterField + DateTimeFormat(t.rows[i][1])
     Dataset1dateValue += DelimiterField + DateTimeFormat(t.rows[i][1])
     Dataset2dateValue += DelimiterField + DateTimeFormat(t.rows[i][1])
     bp=t.rows[i][ColumnNo].split("/")
     Dataset0yValue += DelimiterField + t.rows[i][4]
     Dataset1yValue += DelimiterField + bp[0]
     Dataset2yValue += DelimiterField + bp[1]
     DelimiterField = ","
   }
 }
 GraphString += '<param name=titleString value="' + 
                t.columns[ColumnNo][0] + '">' +
        '<param name=dataset0name value="Pulse">' +
        '<param name=dataset1name value="Systolic">' +
        '<param name=dataset2name value="Diastolic">' +
        '<param name=dataset0Image value="../images/GraphTickBlue.gif">' +
        '<param name=dataset1Image value="../images/GraphTickRed.gif">' +
        '<param name=dataset2Image value="../images/GraphTickGreen.gif">' +
        '<param name=dataset0dateValues value="' + Dataset0dateValue + '">' +
        '<param name=dataset0yValues value="' + Dataset0yValue + '">' +
        '<param name=dataset1dateValues value="' + Dataset1dateValue + '">' +
        '<param name=dataset1yValues value="' + Dataset1yValue + '">' +
        '<param name=dataset2dateValues value="' + Dataset2dateValue + '">' +
        '<param name=dataset2yValues value="' + Dataset2yValue + '">' 
 GraphEnd()
}
//------------------------------------------------------------
// Single Line Graph
//------------------------------------------------------------
function GraphColumn(ColumnNo) {
 GraphHead()
 Dataset0dateValue = ""
 Dataset0yValue = ""
 DelimiterField = ""
 ReferenceRangeType=0
 for(var i = 0; i < t.rows.length; i++) {
   if (!isWhitespace(t.rows[i][ColumnNo])){
     Dataset0dateValue += DelimiterField + DateTimeFormat(t.rows[i][1])
     Dataset0yValue += DelimiterField + t.rows[i][ColumnNo]
     DelimiterField = ","
   }
 }
 GraphString += '<param name=titleString value="' + 
                t.columns[ColumnNo][0] + '">' +
        '<param name=dataset0Image value="../images/GraphTickBlue.gif">'+
	'<param name=dataset0Name value="' + t.columns[ColumnNo][0] + '">' +
        '<param name=dataset0dateValues value="' + Dataset0dateValue + '">' +
        '<param name=dataset0yValues value="' + Dataset0yValue + '">' 
 GraphEnd()
}
function GraphEnd() {
 GraphString += '</applet></td></tr></table>';
 GraphLocation.innerHTML = GraphString;
 GraphLocation.style.display="";
}
function GraphHead() {
 GraphWidth=600
 GraphHeight=250
 GraphLocation.style.top=PatientMenu.offsetTop+PatientMenu.offsetHeight
 GraphLocation.style.left=(document.body.clientWidth - GraphWidth)/2

 GraphLocation.innerHTML='<link rel="stylesheet" ' +
  'href="../html/standard.css" type="text/css">' +
  '<script type="text/javascript" src="../js/Standard.js" ></script>' +
  '<span class=DFrameTitleBar>' +
  '<img border=0 align=right src=../images/ExitIcon.gif onclick=DFrameExit()>' +
  'Loading Document...' +
  '</span>' +
  '<applet codebase=../ width=' + GraphWidth +
  ' height=' + GraphHeight + '></applet>';
 GraphString = '<table cellspacing=0 cellpadding=0 border=1>' +
        '<tr><td bgcolor=#cccccc align=right>' +
        '<img src=../images/ExitIcon.gif border=0 onclick=CloseJavaChart()>' +
        '</td></tr>' +
        '<tr><td>' +
        '<applet code=javachart.applet.dateLineApp.class ' +
        'codebase=../ width=' + GraphWidth +
        ' height=' + GraphHeight + '>' +
        '<param name=CopyrightNotification ' +
        'value="JavaChart is a copyrighted work, ' +
        'and subject to full legal protection">' +
        '<param name=xAxisLabelFont value="Arial,10,1">' +
        '<param name=titleFont value="TimesRoman,14,1">' +
	'<param name=legendOn value="True">' +
	'<param name=legendVertical value="True">' +
	'<param name=legendllX value=".81">' +
	'<param name=legendllY value=".10">' +
	'<param name=iconWidth value=".02">' 
}
function CloseJavaChart() {
 GraphLocation.style.display="none";
}
function DateTimeFormat(datetime) {
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
   return(dd + " " + mth3 + " " + yyyy + " " + time );
}
