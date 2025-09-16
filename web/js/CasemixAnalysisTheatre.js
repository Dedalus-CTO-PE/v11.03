//jsVersion  : V11.03.00
//------------------------------------------------------------
// Casemix Analysis Graphs
//
// Modifications :
//----------------------------------------------------------------------
// V9.09.01  30.07.2007 Ebon Clements CAR 143110
//           Added additional using IE7 test
// V9.08.01  01.12.2006 Ebon Clements CAR 126021
//           Changed using IE6 test to using IE6 or IE7
// V9.04.00  22.07.2005 Ebon Clements CAR 55997
//           CasemixAnalysisTheatre.js with arrays for TableString.
//           CasemixAnalysisTheatreOLD.js is
//           the save copy of this before the array changes.
//----------------------------------------------------------------------
//                 V9.02.03 08.04.2003 Sylvek Litewka  SRF 35082
//                          Added 'GraphBase' variable to set codebase for 
//                          graphs based on the IE version (relative path 
//                          problem).
//                 V9.02.02 13.11.2001 B.G.Ackland
//                          Added Classes for Odd & Even Row Highlighting
//------------------------------------------------------------
function TableOutput(OrderColumn,AscDsc) {
   t.sortTable(OrderColumn,AscDsc);
   TableHeading(OrderColumn);
   TableBody();
   TableEnding();
   TableGraph(SortOrderBy);
}
function TableGraph(GraphValue) {
   if (window.navigator.userAgent.indexOf("MSIE 6.0")>=1
       || window.navigator.userAgent.indexOf("MSIE 7.0")>=1)
     var GraphBase = 'codebase=../../ ';
   else
     var GraphBase = 'codebase=../ ';

   for (var i =0 ; i < SelectExtract.SetValue1.length; i++) {
     if (SelectExtract.SetValue1.options[i].value == GraphValue) {
         SelectExtract.SetValue1.selectedIndex=i } };
   switch(SelectExtract.GraphType.value) {
     case "0":  
       CasemixGraph.innerHTML = " ";
       break;
     case "1":  
       JavaBarGraph(GraphBase)
       break;
     case "2":  
       JavaPieGraph(GraphBase)
       break;
     case "3":  
       JavaColumn1Graph(GraphBase)
       break;
     case "4":  
       JavaColumn2Graph(GraphBase)
       break;
      }
}
function Table(Border,Cellspacing,Cellpadding,Width,Align,TitleString) {
   this.Border = Border;
   this.Cellspacing = Cellspacing;
   this.Cellpadding = Cellpadding;
   this.Width = Width;
   this.Align = Align;
   this.TitleString = TitleString;
   this.rows = new Array();
   this.addRow = _addTableRow;
   this.columns = new Array();
   this.addColumn = _addTableColumn;
   this.sortTable = _sortTable;
   this.totals = new Array();
   this.colors = new Array();
   this.colors[0] = "0000CC"
   this.colors[1] = "CC00CC"
   this.colors[2] = "CC0000"
   this.colors[3] = "00CCCC"
   this.colors[4] = "00CC00"
   this.colors[5] = "CCCC00"
   this.colors[6] = "000000"
   this.colors[7] = "CCCCCC"

   this.colors[8] = "0000FF"
   this.colors[9] = "FF00FF"
   this.colors[10] = "FF0000"
   this.colors[11] = "00FFFF"
   this.colors[12] = "00FF00"
   this.colors[13] = "FFFF00"
   this.colors[14] = "336699"
   this.colors[15] = "FFFFFF"

   this.colors[16] = "000033"
   this.colors[17] = "330033"
   this.colors[18] = "330000"
   this.colors[19] = "003333"
   this.colors[20] = "003300"
   this.colors[21] = "333300"
   this.colors[22] = "6699CC"
   this.colors[23] = "333333"

   this.colors[24] = "000066"
   this.colors[25] = "660066"
   this.colors[26] = "660000"
   this.colors[27] = "006666"
   this.colors[28] = "006600"
   this.colors[29] = "666600"
   this.colors[30] = "99CCFF"
   this.colors[31] = "666666"

   this.colors[32] = "000099"
   this.colors[33] = "990099"
   this.colors[34] = "990000"
   this.colors[35] = "009999"
   this.colors[36] = "009900"
   this.colors[37] = "999900"
   this.colors[38] = "FFCC99"
   this.colors[39] = "999999"

}
function _sortTable(Column,AscDsc) {
  SortOrderBy = t.columns[Column][3]
  if (AscDsc == 1) {
    switch(t.columns[Column][1]) {
      case "Date"  :  t.rows.sort(NumericSort); break;
      case "Number":  t.rows.sort(NumericSort); break;
      case "Graph" :  t.rows.sort(NumericSort); break;
      case "Average" :  t.rows.sort(NumericSort); break;
      case "Name"  :  t.rows.sort(StringSort); break;
      case "String":  t.rows.sort(StringSort); break;
    }
  }
  else {
    switch(t.columns[Column][1]) {
      case "Date"  :  t.rows.sort(RevNumericSort); break;
      case "Number":  t.rows.sort(RevNumericSort); break;
      case "Graph" :  t.rows.sort(RevNumericSort); break;
      case "Average" :  t.rows.sort(RevNumericSort); break;
      case "Name"  :  t.rows.sort(RevStringSort); break;
      case "String":  t.rows.sort(RevStringSort); break;
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
 for(var j = 0; j < t.columns.length; j++) { t.totals[j] = 0; }
 for(var i = 0; i < t.rows.length; i++) {
   RowClass="TableRowEven"
   if (i%2==1) { RowClass="TableRowOdd" }
   TableString[TableString.length] = "<tr class=" + RowClass + ">" ;
   for(var j = 0; j < t.columns.length; j++) {
     TableString[TableString.length] = "<td align=" + t.columns[j][4] + ">" ;
     LinkColumn = t.columns[j][6];
     ImgString = t.columns[j][5];
     if (LinkColumn != "") {
       LinkHref = 'javascript:ShowExtract("' + t.rows[i][1] +  '","' +
                    t.rows[i][7] + '");';
       TableString[TableString.length] = "<a href='" + LinkHref + "'>" ;
     }
     switch(t.columns[j][1]) {
       case "CalcDiv" :  
         FormatIcon();
         x = parseInt(t.rows[i][t.columns[j][2]],10);
         y = parseInt(t.rows[i][t.columns[j][3]],10);
         TableString[TableString.length] = (parseInt(10*(x/y),10))/10;
         break;
       case "Date" :  
         FormatIcon();
         TableString[TableString.length] = FormatDate(t.rows[i][t.columns[j][2]]);
         break;
       case "Name" :  
         FormatIcon();
         TableString[TableString.length] = FormatName(t.rows[i][t.columns[j][2]]);
         break;
       case "Graph":  
         TableString[TableString.length] = FormatGraph(t.rows[i][t.columns[j][2]],t.columns[j][5]);
         break;
       case "Image":  
         TableString[TableString.length] = FormatImage(t.rows[i][t.columns[j][2]]);
         break;
       case "Number":  
         t.totals[j] += parseInt(t.rows[i][t.columns[j][2]],10);
         FormatIcon();
         TableString[TableString.length] = FormatNumber(t.rows[i][t.columns[j][2]]);
         if ( LinkColumn != "" ) { TableString[TableString.length] = "</a>"; }
         break;
       default    :   
         FormatIcon();
         TableString[TableString.length] = t.rows[i][t.columns[j][2]];
         if ( LinkColumn != "" ) { TableString[TableString.length] = "</a>"; }
         break;
     }
     t.rows[i][t.columns[j][2]] 
     TableString[TableString.length] = "</td>" ;
     }
   TableString[TableString.length] = "</tr>" ;
   }
   TableTotals()
}
function TableTotals() {
   TableString[TableString.length] = "<tr class=TableRowTotal>" ;
   for(var j = 0; j < t.columns.length; j++) {
     TableString[TableString.length] = "<td align=" + t.columns[j][4] + "><b>" ;
     switch(t.columns[j][1]) {
       case "Number" :  
         TableString[TableString.length] = FormatNumber(t.totals[j]) ;
         break;
       case "Average" :  
         avg = 100 * (t.totals[t.columns[j][7]] / t.totals[t.columns[j][8]]) ;
         avg = (Math.round(avg))/100
         TableString[TableString.length] = FormatNumber(avg);
         break;
       default    :   
         if (j==0){ TableString[TableString.length] = "Total" ; }
         TableString[TableString.length] = "&nbsp;" ;
         break;
     }
     t.rows[1][t.columns[j][2]] 
     TableString[TableString.length] = "</td>" ;
     }
   TableString[TableString.length] = "</tr>" ;
}
function FormatNumber(numStr) {
outStr=parseFloat(numStr).toString().split(".")
len=outStr[0].length
switch(len) {
 case 4: ResultString= outStr[0].substring(0,1) + ","  +
                         outStr[0].substring(1,4); break;
 case 5: ResultString= outStr[0].substring(0,2) + ","  +
                         outStr[0].substring(2,5); break;
 case 6: ResultString= outStr[0].substring(0,3) + ","  +
                         outStr[0].substring(3,6); break;
 case 7: ResultString= outStr[0].substring(0,1) + ","  +
                         outStr[0].substring(1,4) + "," +
                         outStr[0].substring(4,7); break;
 case 8: ResultString= outStr[0].substring(0,2) + ","  +
                         outStr[0].substring(2,5) + "," +
                         outStr[0].substring(5,8); break;
 case 9: ResultString= outStr[0].substring(0,3) + ","  +
                         outStr[0].substring(3,6) + "," +
                         outStr[0].substring(6,9); break;
 case 10: ResultString= outStr[0].substring(0,1) + ","  +
                         outStr[0].substring(1,4) + "," +
                         outStr[0].substring(4,7) + "," +
                         outStr[0].substring(7,10); break;
 default : ResultString=outStr[0]
           break;
}
if ( outStr[1] ) { ResultString += "." + outStr[1] }
return(ResultString)
}
function FormatIcon() {
 if (ImgString != "" ) {
   TableString[TableString.length] = "<img src=../images/" + ImgString ; 
   TableString[TableString.length] = " border=0 hspace=4 align=absmiddle>";
   if (LinkColumn != "") { 
      LinkColumn = "";
      TableString[TableString.length] = "</a>" ; }
 }
}
function FormatName(Name) {
 NameFields=Name.split(",");
 Title=NameFields[2].substr(0,1) + NameFields[2].substr(1,5).toLowerCase()
 Initial=NameFields[1].substr(0,1);
 Surname=NameFields[0].substr(0,1) + NameFields[0].substr(1,25).toLowerCase()
 EndLink="";
 if ( LinkColumn != "" ) { EndLink += "</a>"; }
 return( Title + " " + Initial + " " + Surname + EndLink );
}
function FormatGraph(Value,Image) {
     return("<img src=../images/" + Image + " height=10 " +
             "width=" + Value + " align=absbottom>");
}
function FormatImage(Value) {
     return("<img src=../images/" + Value + ">");
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
   if ( LinkColumn != "" ) { EndLink += "</a>"; }
   return(dd + " " + mth3 + " " + yyyy + EndLink);
}
function TableHeading(OrderColumn) {
  TableString = [];
  TableString[TableString.length] = "<table border=" + t.Border +
                " cellspacing=" + t.Cellspacing +
                " cellpadding=" + t.Cellpadding +
                " width=" + t.Width +
                " align=" + t.Align + " >";
  TableString[TableString.length] = "<tr>";
  for(var i = 0; i < t.columns.length; i++) {
    TableString[TableString.length] = "<td class=HeadingCell align=" + t.columns[i][4] + ">" ;
    if (t.columns[i][3] == -1) {
      if (OrderColumn == i) { TableString[TableString.length] = "<b>" }
      TableString[TableString.length] = t.columns[i][0] + "</td>"; }
    else {
      TableString[TableString.length] = "<a href='javascript:onClick=TableSort(" + i + ")'>"; 
      if (OrderColumn == i) { TableString[TableString.length] = "<b>" }
      TableString[TableString.length] = t.columns[i][0] + "</a></td>"; }
  }
  TableString[TableString.length] = "</tr>";
}

function TableEnding() 
{
  var CasemixTable = document.getElementById('CasemixTable');
  TableString[TableString.length] = "</table>";
  if (TableString.join)
    CasemixTable.innerHTML = TableString.join("");
  else
  {
    var TableStringX="";
    for (var i=0; i < TableString.length; i++)
    {
       TableStringX+=TableString[i];
    }
    CasemixTable.innerHTML = TableStringX;
  }
}

function TableSort(OrderColumn) {
 if ( lastOrderColumn == OrderColumn ) { 
   if (AscDsc==1) {AscDsc=2;} else {AscDsc=1;} }
 else { 
   AscDsc=1; }
 lastOrderColumn=OrderColumn;
 TableOutput(OrderColumn,AscDsc);
}
function JavaBarGraph(GraphBase) {
 i=SelectExtract.SetColor.selectedIndex;
 GraphColor=SelectExtract.SetColor.options[i].value;
 MakeDataset(SelectExtract.GraphValue1.value,0)
 GraphString = '<applet code=javachart.applet.hyperBar.class ' +
        GraphBase + 'width=750 height=350>' +
        '<param name=CopyrightNotification ' +
        'value="JavaChart is a copyrighted work, ' +
        'and subject to full legal protection">' 
 if (SelectExtract.Graph3D.checked) {
 GraphString += '<param name=3D value="' + SelectExtract.Graph3D.checked + '">' 
 }
 GraphString += '<param name=plotAreaColor value="lightGray">' +
        '<param name=backgroundColor value="lightGray">' +
        '<param name=dataset0Color value="' + GraphColor + '">' +
        '<param name=legendColor value="lightGray">' +
        '<param name=titleString value="' + t.TitleString + '">' +
        '<param name=xAxisLabelFont value="Arial,10,1">' +
        '<param name=yAxisOptions value="gridOn, tickOff">' +
        '<param name=yAxisGridColor value="blue">' +
        '<param name=xAxisOptions value="tickOn">' +
        '<param name=titleFont value="TimesRoman,14,1">' +
	'<param name=yAxisOptions value="gridOn, tickOff">' +
	'<param name=yAxisGridColor value="blue">' +
	'<param name=xAxisOptions value="tickOff">' +
	Dataset0yValues + Dataset0Labels + Dataset0Links +
        '<param name=yAxisLabelFormat value="1">' +
        '</applet>';
  CasemixGraph.innerHTML = GraphString;
}
function MakeDataset(GraphValue,DataSet) {
  if (GraphValue==0){ GraphValue=2; }
  Dataset0Links = '<param name=dataset'+DataSet+'Links value="';
  Dataset0Colors = '<param name=dataset'+DataSet+'Colors value="';
  Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
  Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
  otherStart = 16
  otherEnd = t.rows.length
  startRow = 0
  lastRow = t.rows.length
  if (t.rows.length>16) { 
    if (AscDsc=1) { lastRow=16 }
    else { startRow = t.rows.length - 15
           lastRow = t.rows.length + 1 
           otherStart = 0
           otherEnd = startRow }
  }
  for(var i = startRow; i < lastRow ; i++) {
   AddDataSet(i,GraphValue)
  }
  if (t.rows.length>16) { 
    OtherValue = 0
    for(var i = otherStart; i < otherEnd ; i++) {
     OtherValue += parseInt(t.rows[i][GraphValue],10);
    }
    AddDataSum(OtherValue)
  }
  Dataset0Colors += '">'
  Dataset0Links += '">'
  Dataset0Labels += '">'
  Dataset0yValues += '">'
}
function AddDataSet(RowNo,GraphValue) {
 if (RowNo != 0) {
   Dataset0Links += ",";
   Dataset0Colors += ",";
   Dataset0Labels += ",";
   Dataset0yValues += ","; }
 Dataset0Colors += t.colors[RowNo];
 Dataset0Labels += t.rows[RowNo][0].substr(0,1)+
                   t.rows[RowNo][0].substr(1,9).toLowerCase(); 
 Value = parseInt(t.rows[RowNo][GraphValue],10);
 Dataset0Links += 'javascript:ShowExtract(\'' + t.rows[RowNo][1] +  '\');'
 Dataset0yValues += Value;
}
function AddDataSum(Value) {
 Dataset0Links += ",";
 Dataset0Colors += ",";
 Dataset0Labels += ",";
 Dataset0yValues += ","; 
 Dataset0Colors += t.colors[16];
 Dataset0Labels += "Other"
 Dataset0Links += 'javascript:ShowExtract(\' \');'
 Dataset0yValues += Value;
}
function JavaPieGraph(GraphBase) {
 MakeDataset(SelectExtract.GraphValue1.value,0)
 GraphString = '<applet code=javachart.applet.pieApp.class ' +
        GraphBase + 'width=750 height=350>' +
        '<param name=CopyrightNotification ' +
        'value="JavaChart is a copyrighted work, ' +
        'and subject to full legal protection">' +
        '<param name=plotAreaColor value="lightGray">' +
        '<param name=backgroundColor value="lightGray">' 
 if (SelectExtract.Graph3D.checked) {
  GraphString += '<param name=3D value="' + 
                 SelectExtract.Graph3D.checked + '">' +
                 '<param name=pieHeight value=".6">' 
 }
 GraphString += '<param name=legendColor value="lightGray">' +
        '<param name=legendOn value="anything">' +
        '<param name=legendVertical value="true">' +
        '<param name=LegendLabelFont value="Arial,10,1">' +
        '<param name=legendllX value="0.0">' +
        '<param name=legendllY value="0.0">' +
        '<param name=iconWidth value="0.015">' +
        '<param name=iconHeight value="0.03">' +
        '<param name=xLoc value="0.6">' +
        '<param name=titleString value="' + t.TitleString + '">' +
        '<param name=titleFont value="TimesRoman,14,1">' +
	Dataset0Colors + Dataset0yValues + Dataset0Labels +
        '</applet>';
  CasemixGraph.innerHTML = GraphString;
}
function JavaColumn1Graph(GraphBase) {
 GraphString = '<applet code=javachart.applet.columnApp.class ' +
        GraphBase + 'width=750 height=350>' +
        '<param name=CopyrightNotification ' +
        'value="JavaChart is a copyrighted work, ' +
        'and subject to full legal protection">' +
        '<param name=plotAreaColor value="lightGray">' +
        '<param name=backgroundColor value="lightGray">' 
 if (SelectExtract.Graph3D.checked) {
  GraphString += '<param name=3D value="' + 
                 SelectExtract.Graph3D.checked + '">' +
                 '<param name=pieHeight value=".6">' 
 }
 GraphString += '<param name=legendColor value="lightGray">' +
        '<param name=iconWidth value="0.015">' +
        '<param name=iconHeight value="0.03">' +
        '<param name=xAxisLabelAngle value="90">' +
        '<param name=xLoc value="0.6">' +
        '<param name=titleString value="' + t.TitleString + '">' +
        '<param name=titleFont value="TimesRoman,14,1">' 
  MakeDataset(SelectExtract.GraphValue1.value,0)
  GraphString += Dataset0Colors + Dataset0yValues + Dataset0Labels 
  GraphString += '</applet>';
  CasemixGraph.innerHTML = GraphString;
}
function JavaColumn2Graph(GraphBase) {
 GraphString = '<applet code=javachart.applet.columnApp.class ' +
        GraphBase + 'width=750 height=350>' +
        '<param name=CopyrightNotification ' +
        'value="JavaChart is a copyrighted work, ' +
        'and subject to full legal protection">' +
        '<param name=plotAreaColor value="lightGray">' +
        '<param name=backgroundColor value="lightGray">' 
 if (SelectExtract.Graph3D.checked) {
  GraphString += '<param name=3D value="' + 
                 SelectExtract.Graph3D.checked + '">' +
                 '<param name=pieHeight value=".6">' 
 }
  switch (SelectExtract.GraphValue1.value) {
  case "2": dataset0Name="Patients";break;
  case "3": dataset0Name="Theatre Min";break;
  case "4": dataset0Name="Avg Min";break;
  case "5": dataset0Name="Bed Days";break;
  case "6": dataset0Name="Avg LOS";break;
  }
  switch (SelectExtract.GraphValue2.value) {
  case "2": dataset1Name="Patients";break;
  case "3": dataset1Name="Theatre Min";break;
  case "4": dataset1Name="Avg Min";break;
  case "5": dataset1Name="Bed Days";break;
  case "6": dataset1Name="Avg LOS";break;
  }

 GraphString += '<param name=legendColor value="lightGray">' +
        '<param name=legendOn value="anything">' +
        '<param name=legendVertical value="true">' +
        '<param name=LegendLabelFont value="Arial,10,1">' +
        '<param name=legendllX value="0.0">' +
        '<param name=legendllY value="0.0">' +
        '<param name=dataset0Name value="' + dataset0Name + '">' +
        '<param name=dataset1Name value="' + dataset1Name + '">' +
        '<param name=iconWidth value="0.015">' +
        '<param name=iconHeight value="0.03">' +
        '<param name=xAxisLabelAngle value="90">' +
        '<param name=xLoc value="0.6">' +
        '<param name=titleString value="' + t.TitleString + '">' +
        '<param name=titleFont value="TimesRoman,14,1">' 
  MakeDataset(SelectExtract.GraphValue1.value,0)
  GraphString += Dataset0Colors + Dataset0yValues + Dataset0Labels 
  MakeDataset(SelectExtract.GraphValue2.value,1)
  GraphString += Dataset0Colors + Dataset0yValues + Dataset0Labels 
  GraphString += '</applet>';
  CasemixGraph.innerHTML = GraphString;
}
