//----------------------------------------------------------------------
// Javascript    : PathologyAnalysis.js
//
// Usage         : Used with Patholgy Results
//
// Written       : 10.09.1999 B.G.Ackland
//
// Modifications : 
//
//----------------------------------------------------------------------
//  V10.03.01  13.09.2013 B.G.Ackland
//             Implement Grid View from 10.01
//  V9.09.01   30.07.2007 Ebon Clements CAR 143110
//             Added additional using IE7 test
//  V9.08.01   01.12.2006 Ebon Clements CAR 126021
//             Changed using IE6 test to using IE6 or IE7
//  V9.04.00   22.07.2005 Ebon Clements CAR 55997
//             PathologyAnalysis.js with arrays for TableString. 
//             PathologyAnalysisOLD.js is
//             the save copy of this before the array changes.
//----------------------------------------------------------------------
//   V9.03.01  29.06.2004  Jill Habasque       50762
//             Changed analyte to have the code and added ResultDesc
//   V9.02.04  04.04.2003  Sylvek Litewka  SRF 35082
//             Added 'GraphBase' variable to set codebase for graphs  
//             based on the IE version (relative path problem).
//   V9.02.03  18.10.2002 Jill Habasque
//             Fixed match for the same description
//   V9.02.02  18.11.1999 B.G.Ackland
//             Upgrade to a Pop Up Graph on Demand
//   V9.02.01  13.11.2001 B.G.Ackland
//             Added Classes for Odd & Even Row Highlighting
//
//----------------------------------------------------------------------
var GraphLayout=0;
var AnalyteA=0;
var AnalyteB=1;
function TableOutput(OrderAscDsc) {
   TableHeading(OrderAscDsc);
   TableBody(OrderAscDsc);
   TableEnding();
//   JavaLineGraph("0");
}
function Table(Border,Cellspacing,Cellpadding,Width,Align) {
   this.Border = Border;
   this.Cellspacing = Cellspacing;
   this.Cellpadding = Cellpadding;
   this.Width = Width;
   this.Align = Align;
   this.ResultDate = new Array();
   this.ResultAnalyte = new Array();
   this.ResultUnit = new Array();
   this.ResultDesc = new Array();
   this.ResultLink = new Array();
   this.ResultRefRan = new Array();
   this.ResultRows = new Array();
   this.ResultColor = new Array();
   this.rows = new Array();
   this.dataset = new Array();
   this.dataname = new Array();
   this.graphon = new Array();
   this.addRow = _addTableRow;
   this.columns = new Array();
   this.addColumn = _addTableColumn;
   this.sortTable = _SortTable;
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
  MatchResult=0
  for(var i = 0; i < this.ResultDate.length; i++) {
     if ( row[1] == this.ResultDate[i] ) {
       MatchResult=1
       DateIndex=i } }
  if (MatchResult==0) {
    this.ResultDate[this.ResultDate.length] = row[1] 
    DateIndex=this.ResultDate.length-1 }
  MatchResult=0
  for(var i = 0; i < this.ResultAnalyte.length; i++) {
     if ( row[0] == this.ResultAnalyte[i] ) {
       MatchResult=1
       AnalyteIndex=i } }
  if (MatchResult==0) {
    this.ResultAnalyte[this.ResultAnalyte.length] = row[0] 
    AnalyteIndex=this.ResultAnalyte.length-1 }
   this.ResultLink[DateIndex]=row[5]
   this.ResultRefRan[AnalyteIndex]=row[3]
   this.ResultUnit[AnalyteIndex]=row[4]
   this.ResultDesc[AnalyteIndex]=row[7]
   if ( AnalyteIndex >= this.ResultRows.length ) {
      this.ResultRows[AnalyteIndex] = new Array()
      this.ResultColor[AnalyteIndex] = new Array()
    }
   if (this.ResultRows[AnalyteIndex][DateIndex]==undefined) {
     this.ResultRows[AnalyteIndex][DateIndex]=row[2] }
   else {
     this.ResultRows[AnalyteIndex][DateIndex]+= "|" + row[2] }
   this.ResultColor[AnalyteIndex][DateIndex]=row[6]
}
//------------------------------------------------------------
// Show Result Details
//------------------------------------------------------------
function ShowResult(ResultKey) {
   document.ResultLink.resultky.value=ResultKey;
   document.ResultLink.submit();
}
//------------------------------------------------------------
// New Output Table Body
//------------------------------------------------------------
function TableBody(OrderAscDsc) {
 for(var i = 0; i < Results.ResultRows.length; i++) {
   RowClass="TableRowEven"
   if (i%2==1) { RowClass="TableRowOdd" }
   TableString[TableString.length] = "<tr class=" + RowClass + "><td>" +
                  "<a href='javascript:JavaLineGraph(" + i + ");'>"  +
                  "<img src=../images/PathologyGraph.gif hspace=4" +
                  " align=absmiddle border=0></a>" +
                  Results.ResultDesc[i] + "</td>"

   if (OrderAscDsc==0) {
      for(var j=0; j < Results.ResultDate.length; j++) { OutputCell(i,j) }}
   else {
      for(var j=Results.ResultDate.length-1; j>=0; j--) { OutputCell(i,j) }}
   TableString[TableString.length] = "<td>" + Results.ResultUnit[i] + "</td>"
   TableString[TableString.length] = "<td class=ResultRef>" + Results.ResultRefRan[i] + "</td></tr>"
 }
}
function OutputCell(i,j) {
 if (Results.ResultColor[i][j]=="       "||Results.ResultColor[i][j]==null) {
    TableString[TableString.length] = "<td class=ResultValue>" }
 else {
    TableString[TableString.length] = "<td class=ResultValue bgcolor=" +
    Results.ResultColor[i][j] + ">" }
 if (Results.ResultRows[i][j]==null) {
    TableString[TableString.length] = "&nbsp;</td>" }
 else {
    TableString[TableString.length] = Results.ResultRows[i][j] + "</td>" } 
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
   return(dd + " " + mth3 + " " + yyyy + " <br> " + time );
}
//------------------------------------------------------------
// Output Table Heading
//------------------------------------------------------------
function TableHeading(OrderAscDsc) {
  TableString = [];
  TableString[TableString.length] = "<table border=" + Results.Border +
                " cellspacing=" + Results.Cellspacing +
                " cellpadding=" + Results.Cellpadding +
                " width=" + Results.Width +
                " align=" + Results.Align + " >";
   TableString[TableString.length] = "<tr><td class=HeadingCell>" +
                  "<img src=../images/SortAscending.gif hspace=4 " +
                  "align=absmiddle onclick=TableOutput('0');>Date<br>" +
                  "<img src=../images/SortDecending.gif hspace=4 " +
                  "align=absmiddle onclick=TableOutput('1');>Time</td>"
   if (OrderAscDsc==0) {
      for(var i=0; i < Results.ResultDate.length; i++) { OutputDateCell(i) }}
   else {
      for(var i=Results.ResultDate.length-1; i >= 0; i--) { OutputDateCell(i) }}
   TableString[TableString.length] = "<td class=HeadingCell>Units</td>"
   TableString[TableString.length] = "<td class=HeadingCell align=center>Ref.Range</td></tr>"
//
}
//------------------------------------------------------------
// Output Heading Date Cells
//------------------------------------------------------------
function OutputDateCell(i) {
     TableString[TableString.length] = "<td align=right class=HeadingCell>" + 
                    "<a href='javascript:ShowResult(\"" + 
                    Results.ResultLink[i] + "\")'>" +
                     FormatDateTime(Results.ResultDate[i]) + "</a></td>" 
}
//------------------------------------------------------------
// Output Table Ending and Update Table Location
//------------------------------------------------------------
function TableEnding() 
{
  var TableLocation = document.getElementById('TableLocation');
  TableString[TableString.length] = "</table>";

  if (TableString.join) {
    TableLocation.innerHTML = TableString.join("");
  }
  else 
  {
    var TableStringX="";
    for (vari=0; i < TableString.length; i++) TableStringX+=TableString[i];
    TableLocation.innerHTML = TableStringX;
  }
}
//------------------------------------------------------------
// Set Layout for Graphs
//------------------------------------------------------------
function SetGraphLayout(Layout) {
 GraphLayout=Layout;
 JavaLineGraph(AnalyteA);
}
//------------------------------------------------------------
// Line Graph
//------------------------------------------------------------
function JavaLineGraph(Analyte) {
 AnalyteB=AnalyteA
 AnalyteA=Analyte
 GraphWidth=document.body.clientWidth-100
 GraphHeight=document.body.clientHeight
 GraphLocation.style.top=0
 GraphLocation.style.left=(document.body.clientWidth - GraphWidth)/2
 GraphLocation.style.width=GraphWidth+10
 GraphLocation.style.height=document.body.clientHeight - 
             PatientMenu.offsetTop - PatientMenu.offsetHeight
 GraphLocation.style.display="";
 GraphLocation.innerHTML='<link rel="stylesheet" ' +
  'href="../html/standard.css" type="text/css">' +
  '<script type="text/javascript" src="../js/Standard.js" ></script>' +
  '<span class=DFrameTitleBar>' +
  '<img src=../images/ExitIcon.gif align=right ' +
  'border=0 onclick=CloseJavaChart()>' +
  'Loading Document...' +
  '</span>' 
 if (GraphLayout==0) {
   GraphHeight=GraphHeight-30
   GraphLocation.innerHTML=GraphContent(AnalyteA) }
 else {
   GraphHeight=(GraphHeight/2)-27
   GraphLocation.innerHTML=GraphContent(AnalyteA) 
   GraphLocation.innerHTML+=GraphContent(AnalyteB) }
}
function GraphContent(Analyte) {
 Dataset0dateValue = ""
 Dataset1dateValue = ""
 Dataset2dateValue = ""
 Dataset0yValue = ""
 Dataset1yValue = ""
 Dataset2yValue = ""
 DelimiterField = ""
 ValueCounter = 0
 ReferenceRangeType=0
 for(var i = 0; i < Results.rows.length; i++) {
     if ( Results.ResultAnalyte[Analyte] == Results.rows[i][0] ) {
      ValueCounter++
      Dataset0dateValue += DelimiterField + DateTimeFormat(Results.rows[i][1])
      Dataset0yValue += DelimiterField + Results.rows[i][2]
      ReferenceRange = Results.rows[i][3].split(" - ")
      ReferenceRangeType=0
      if (ReferenceRange.length > 1) {
        Dataset1yValue += DelimiterField + ReferenceRange[1]
        Dataset2yValue += DelimiterField + ReferenceRange[0] }
      else {
         ReferenceRangeType=1
         ReferenceRange = Results.rows[i][3].split("<")
         if (ReferenceRange.length > 1) {
            Dataset1yValue += DelimiterField + ReferenceRange[1]
            Dataset2yValue += DelimiterField + "0" }
          else {
            ReferenceRangeType=2
            ReferenceRange = Results.rows[i][3].split(">")
            Dataset2yValue += DelimiterField + ReferenceRange[1]
            Dataset1yValue += DelimiterField + "0" }
        }
      DelimiterField = ","
     }
 }
 Dataset1dateValue = Dataset0dateValue 
 Dataset2dateValue = Dataset0dateValue 
 
 if (window.navigator.userAgent.indexOf("MSIE 6.0")>=1
     || window.navigator.userAgent.indexOf("MSIE 7.0")>=1)
  var GraphBase = 'codebase=../../ ';
 else
  var GraphBase = 'codebase=../ ';

 GraphString='<link rel="stylesheet" href="../html/standard.css" ' +
  'type="text/css">' +
  '<script type="text/javascript" src="../js/Standard.js" ></script>' +
  '<span class=DFrameTitleBar>' +
  '<img src=../images/TableViewIcon.gif align=left ' +
  'border=0 onclick=SetGraphLayout(0)>' +
  '<img src=../images/TableViewIcon.gif align=left ' +
  'border=0 onclick=SetGraphLayout(1)>' +
  '<img src=../images/ExitIcon.gif align=right ' +
  'border=0 onclick=CloseJavaChart()>' +
  Results.ResultDesc[Analyte] + '  ' + Results.ResultUnit[Analyte] + 
  '</span>'  +
  '<table cellspacing=0 cellpadding=0 border=1>' +
  '<tr><td>' +
  '<applet code="javachart.applet.dateLineApp.class" ' +
  GraphBase + 'width=' + GraphWidth +
  ' height=' + GraphHeight + '>' +
  '<param name=CopyrightNotification ' +
  'value="JavaChart is a copyrighted work, ' +
  'and subject to full legal protection">' +
  '<param name=xAxisLabelFont value="Arial,10,1">' +
  '<param name=legendOn value="True">' +
  '<param name=legendVertical value="True">' +
  '<param name=legendllX value=".81">' +
  '<param name=legendllY value=".10">' +
  '<param name=iconWidth value=".02">' +
  '<param name=dataset0Image value="images/GraphTickBlue.gif">'+
  '<param name=dataset0Name value="Observation">' +
  '<param name=dataset0dateValues value="' + Dataset0dateValue + '">' +
  '<param name=dataset0yValues value="' + Dataset0yValue + '">' 
  if (ReferenceRangeType<2) {
  GraphString += '<param name=dataset1Image value="images/GraphTickRed.gif">'+
  '<param name=dataset1Name value="R.R. Upper">' +
  '<param name=dataset1dateValues value="' + Dataset1dateValue + '">' +
  '<param name=dataset1yValues value="' + Dataset1yValue + '">' 
  }
  if (ReferenceRangeType != 1 ) {
  GraphString += '<param name=dataset2Image value="images/GraphTickGreen.gif">'+
  '<param name=dataset2Name value="R.R. Lower">' +
  '<param name=dataset2dateValues value="' + Dataset2dateValue + '">' +
  '<param name=dataset2yValues value="' + Dataset2yValue + '">' 
  }
 GraphString += '</applet></td></tr></table>';
 if (Results.rows.length == 0) {
 GraphString = "<h2 align=center>No Data Available for Graph</h2>" }
 return GraphString
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
function _SortTable() {
  this.rows.sort();
  this.ResultDate.sort();
  this.ResultLink = [];
  this.ResultRefRan = [];
  this.ResultUnit = [];
  this.ResultDesc = [];
  this.ResultRows = [];
  this.ResultColor = [];
  this.ResultAnalyte = [];
  for(var a = 0; a < this.rows.length; a++) {
  var row = this.rows[a];
  MatchResult=0
  for(var i = 0; i < this.ResultDate.length; i++) {
     if ( row[1] == this.ResultDate[i] ) {
       MatchResult=1
       DateIndex=i } }
  if (MatchResult==0) {
    this.ResultDate[this.ResultDate.length] = row[1] 
    DateIndex=this.ResultDate.length-1 }
  MatchResult=0
  for(var i = 0; i < this.ResultAnalyte.length; i++) {
     if ( row[0] == this.ResultAnalyte[i] ) {
       MatchResult=1
       AnalyteIndex=i } }
  if (MatchResult==0) {
    this.ResultAnalyte[this.ResultAnalyte.length] = row[0] 
    AnalyteIndex=this.ResultAnalyte.length-1 }
   this.ResultLink[DateIndex]=row[5]
   this.ResultRefRan[AnalyteIndex]=row[3]
   this.ResultUnit[AnalyteIndex]=row[4]
   this.ResultDesc[AnalyteIndex]=row[7]
   if ( AnalyteIndex >= this.ResultRows.length ) {
      this.ResultRows[AnalyteIndex] = new Array()
      this.ResultColor[AnalyteIndex] = new Array()
    }
   if (this.ResultRows[AnalyteIndex][DateIndex]==undefined) {
     this.ResultRows[AnalyteIndex][DateIndex]=row[2] }
   else {
     this.ResultRows[AnalyteIndex][DateIndex]+= "|" + row[2] }
   this.ResultColor[AnalyteIndex][DateIndex]=row[6]
   }
}
