//jsVersion  : V11.03.00
//----------------------------------------------------------------------
// Javascript    : DoctorAnalysis.js
//
// Usage         : Used with Doctors Information Server to Present Statistical
//                 Details for a doctor.
// Written       : 31.03.1999 B.G.Ackland
//
// Modifications :
//----------------------------------------------------------------------
// V9.09.01  30.07.2007 Ebon Clements CAR 143110
//           Added additional using IE7 test
// V9.08.01  01.12.2006 Ebon Clements CAR 126021
//           Changed using IE6 test to using IE6 or IE7
// V9.04.00  21.07.2005 Ebon Clements CAR 55997
//           DoctorAnalysis.js with arrays for TableString.
//           DoctorAnalysisOLD.js is
//           the save copy of this before the array changes.
//----------------------------------------------------------------------
//                 V9.02.02 08.04.2003 Sylvek Litewka  SRF 35082
//                          Added 'GraphBase' variable to set codebase for 
//                          graphs based on the IE version (relative path 
//                          problem).
//               : V9.02.01 13.11.2001 B.G.Ackland
//                          Added Classes for Odd & Even Row Highlighting
//
//----------------------------------------------------------------------
function TableOutput(OrderColumn,AscDsc,GraphType) {
   TableHeading(OrderColumn);
   TableBody();
   TableEnding();
   MakeDataLabels();
   TableGraph("0");
}
function TableGraph(GraphValue) {
 if (GraphValue >= "0") { 
    if (t.graphon[GraphValue]=="0") { 
      t.graphon[GraphValue]="1" }
    else { t.graphon[GraphValue]="0" }
 }

 if (window.navigator.userAgent.indexOf("MSIE 6.0")>=1
     || window.navigator.userAgent.indexOf("MSIE 7.0")>=1) 
  var GraphBase = 'codebase=../../ ';
 else 
  var GraphBase = 'codebase=../ ';

 GraphType=SelectChart.SetType.options[SelectChart.SetType.selectedIndex].value;
 switch(GraphType) {
 case "Column" :  
       JavaColumnGraph(GraphBase)
       break;
 case "Line" :  
       JavaLineGraph(GraphBase)
       break;
 case "Bar" :  
       JavaBarGraph(GraphBase);
       break;
      }
}
function Table(Border,Cellspacing,Cellpadding,Width,Align) {
   this.Border = Border;
   this.Cellspacing = Cellspacing;
   this.Cellpadding = Cellpadding;
   this.Width = Width;
   this.Align = Align;
   this.rows = new Array();
   this.dataset = new Array();
   this.dataname = new Array();
   this.graphon = new Array();
   this.addRow = _addTableRow;
   this.columns = new Array();
   this.addColumn = _addTableColumn;
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
//------------------------------------------------------------
// Output Table Body
//------------------------------------------------------------
function TableBody() {
 TotalDataSet    = "";
 TotalDataLabels = "";
 for(var i = 0; i < t.rows.length; i++) {
   t.graphon[i]="0";
   t.dataname[i]=t.rows[i][0]
   t.dataset[i]='';
   RowClass="TableRowEven"
   if (i%2==1) { RowClass="TableRowOdd" }
   TableString[TableString.length] = "<tr class=" + RowClass + ">" ;
   RowTotal=0
   for(var j = 0; j < t.columns.length; j++) {
     TableString[TableString.length] = "<td align=" + t.columns[j][4] + ">" ;
     ImgString = t.columns[j][5];
     if (j==0) { 
        TableString[TableString.length] = "<input type=checkbox " ;
        if (i==0) { TableString[TableString.length] = " checked " }
        TableString[TableString.length] = " onClick=javascript:ShowGraph(" + i + ")>" ;
        TableString[TableString.length] = t.rows[i][t.columns[j][2]]; }
     else {
        if (j!=1) { t.dataset[i] += "," }
        Value = parseInt(t.rows[i][j],10);
        t.dataset[i] += Value; 
        RowTotal += Value 
        TableString[TableString.length] = t.rows[i][t.columns[j][2]]; }
     t.rows[i][t.columns[j][2]] 
     TableString[TableString.length] = "</td>" ;
     }
   if ( i != 0 ) {
     TotalDataSet    += ',' ;
     TotalDataLabels += ',' ;
   }
   TotalDataSet    += RowTotal ;
   TotalDataLabels += t.rows[i][0] ;
   TableString[TableString.length] = "<td align=right><b>" + RowTotal + "</td>" ;
   TableString[TableString.length] = "</tr>" ;
   }
}
//------------------------------------------------------------
// Output Table Heading
//------------------------------------------------------------
function TableHeading(OrderColumn) {
  TableString = [];
  TableString[TableString.length] = "<table border=" + t.Border +
                " cellspacing=" + t.Cellspacing +
                " cellpadding=" + t.Cellpadding +
                " width=" + t.Width +
                " align=" + t.Align + " >";
  TableString[TableString.length] = "<tr>";
  for(var i = 0; i < t.columns.length; i++) {
    TableString[TableString.length] = "<td class=HeadingCell align=" + t.columns[i][4] + "><b>" ;
    TableString[TableString.length] = t.columns[i][0] + "</td>";
  }
    TableString[TableString.length] = "<td class=HeadingCell align=right><b>" ;
    TableString[TableString.length] = "Total</td>";
  TableString[TableString.length] = "</tr>";
}
//------------------------------------------------------------
// Output Table Ending and Update Table Location
//------------------------------------------------------------
function TableEnding() 
{
  TableString[TableString.length] = "</table>";
  var DoctorTableLocation = document.getElementById('DoctorTableLocation');

  if (TableString.join)
   DoctorTableLocation.innerHTML = TableString.join("");
  else 
  {
    var  TableStringX="";
    for (var i=0; i < TableString.length; i++) 
    {
      TableStringX+=TableString[i];
    }
    DoctorTableLocation.innerHTML = TableStringX;
  }
}
//------------------------------------------------------------
// Create DataLabel String
//------------------------------------------------------------
function MakeDataLabels() {
  Dataset0Labels = '<param name=dataset0Labels value="';
  for(var i = 1; i < t.columns.length; i++) {
      if (i != 1) { Dataset0Labels += ","; }
      Dataset0Labels += t.columns[i][0];
      }
  Dataset0Labels += '">'
}
//------------------------------------------------------------
// Column Graph
//------------------------------------------------------------
function JavaColumnGraph(GraphBase) {
 GraphString = '<applet code=javachart.applet.columnApp.class ' +
        GraphBase +
        'width=640 height=320>' +
        '<param name=CopyrightNotification ' +
        'value="JavaChart is a copyrighted work, ' +
        'and subject to full legal protection">' +
        '<param name=plotAreaColor value="lightGray">' +
        '<param name=backgroundColor value="lightGray">' +
        '<param name=xAxisLabelFont value="Arial,10,1">' +
        '<param name=yAxisOptions value="gridOn, tickOff">' +
        '<param name=yAxisGridColor value="blue">' +
        '<param name=xAxisOptions value="tickOn">' +
        '<param name=titleFont value="TimesRoman,14,1">' +
	'<param name=yAxisOptions value="gridOn, tickOff">' +
	'<param name=yAxisGridColor value="blue">' +
	'<param name=xAxisOptions value="tickOff">' +
        '<param name=iconWidth value="0.02">' +
        '<param name=iconWidth value="0.02">' +
        '<param name=legendllX value="0.00">' +
        '<param name=legendllY value="0.01">' +
        '<param name=legendLabelFont value="TimesRoman,12,1">' +
        '<param name=legendOn value="true">' +
        '<param name=yAxisLabelFormat value="1">'  +
        '<param name=legendColor value="lightGray">' + Dataset0Labels 
  SetNumber = 0
  for(var i = 0; i < t.rows.length; i++) {
  if (t.graphon[i]=="1") { 
     GraphString += '<param name=dataset' + SetNumber + 'yValues value="' +
                    t.dataset[i]  + '">' +
                    '<param name=dataset' + SetNumber + 'Name value="' +
                    t.dataname[i]  + '">' 
     SetNumber += 1
     }
  }
 if (SelectChart.Graph3D.checked) {
 GraphString += '<param name=3D value="' + SelectChart.Graph3D.checked + '">' 
 }
 GraphString += '</applet>';
  DoctorGraphLocation.innerHTML = GraphString;
}
//------------------------------------------------------------
// Line Graph
//------------------------------------------------------------
function JavaLineGraph(GraphBase) {
 GraphString = '<applet code=javachart.applet.labelLineApp.class ' +
        GraphBase +
        'width=640 height=320>' +
        '<param name=CopyrightNotification ' +
        'value="JavaChart is a copyrighted work, ' +
        'and subject to full legal protection">' +
        '<param name=plotAreaColor value="lightGray">' +
        '<param name=backgroundColor value="lightGray">' +
        '<param name=xAxisLabelFont value="Arial,10,1">' +
        '<param name=yAxisOptions value="gridOn, tickOff">' +
        '<param name=yAxisGridColor value="blue">' +
        '<param name=xAxisOptions value="tickOn">' +
        '<param name=titleFont value="TimesRoman,14,1">' +
	'<param name=yAxisOptions value="gridOn, tickOff">' +
	'<param name=yAxisGridColor value="blue">' +
	'<param name=xAxisOptions value="tickOff">' +
        '<param name=iconWidth value="0.02">' +
        '<param name=legendllX value="0.00">' +
        '<param name=legendllY value="0.01">' +
        '<param name=legendLabelFont value="TimesRoman,12,1">' +
        '<param name=legendOn value="true">' +
        '<param name=xAxisStart value="0.0">' +
        '<param name=legendColor value="lightGray">' +
	Dataset0Labels +
        '<param name=yAxisLabelFormat value="1">' 
  SetNumber = 0                                                             
  for(var i = 0; i < t.rows.length; i++) {
  if (t.graphon[i]=="1") {
     GraphString += '<param name=dataset' + SetNumber + 'yValues value="' +
                    t.dataset[i]  + '">' +                                  
                    '<param name=dataset' + SetNumber + 'Name value="' +
                    t.dataname[i]  + '">'
     SetNumber += 1
     }
  }
 if (SelectChart.Graph3D.checked) {
 GraphString += '<param name=3D value="' + SelectChart.Graph3D.checked + '">' 
 }
 GraphString += '</applet>';
  DoctorGraphLocation.innerHTML = GraphString;
}
//------------------------------------------------------------
// Bar Graph
//------------------------------------------------------------
function JavaBarGraph(GraphBase) {
 GraphString = '<applet code=javachart.applet.barApp.class ' +
        GraphBase +
        'width=640 height=320>' +
        '<param name=CopyrightNotification ' +
        'value="JavaChart is a copyrighted work, ' +
        'and subject to full legal protection">' +
        '<param name=plotAreaColor value="lightGray">' +
        '<param name=backgroundColor value="lightGray">' +
        '<param name=xAxisLabelFont value="Arial,10,1">' +
        '<param name=yAxisOptions value="gridOn, tickOff">' +
        '<param name=yAxisGridColor value="blue">' +
        '<param name=xAxisOptions value="tickOn">' +
        '<param name=titleFont value="TimesRoman,14,1">' +
	'<param name=yAxisOptions value="gridOn, tickOff">' +
	'<param name=yAxisGridColor value="blue">' +
	'<param name=xAxisOptions value="tickOff">' +
        '<param name=iconWidth value="0.02">' +
        '<param name=yAxisLabelFormat value="1">'  +
        '<param name=dataset0yValues value="' + TotalDataSet  + '">' + 
        '<param name=dataset0Labels value="' + TotalDataLabels  + '">'
 if (SelectChart.Graph3D.checked) {
 GraphString += '<param name=3D value="' + SelectChart.Graph3D.checked + '">' 
 }
 GraphString += '</applet>';
  DoctorGraphLocation.innerHTML = GraphString;
}
