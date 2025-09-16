//jsVersion  : V11.03.00
//========================================================================
// Program   : PathologySelect.js
//
// Function  : Select pathology Result to Add to Document
//
// Modifications : 
//
// V10.04.01 02.07.2014 B.G.Ackland CAR 303287
//           Javascript for adding Pathology Results to Documents
// V10.03.01 02.04.2012 B.G.Ackland
//           New Copied from 10.01
//========================================================================
function Table(Border,Cellspacing,Cellpadding,Width,Align) {
   this.Border = Border;
   this.Cellspacing = Cellspacing;
   this.Cellpadding = Cellpadding;
   this.Width = Width;
   this.Align = Align;
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
   LinkHref = t.rows[i][0];
   TableString[TableString.length] = "<tr class=" + RowClass + " onclick='ResultLink(this,\""+LinkHref+"\");'>"
   for(var j = 0; j < t.columns.length; j++) {
     TableString[TableString.length] = "<td align=" + t.columns[j][4]  ;
     TableString[TableString.length] = " width=" + t.columns[j][7] + ">" ;
//     LinkColumn = t.columns[j][6];
     LinkFlag = 0
     ImgString = t.columns[j][5];
//     if (LinkColumn != "") {
//       LinkHref = t.rows[i][t.columns[j][6]];
//       if (LinkHref != ""){ 
//         TableString[TableString.length] = "<a href='javascript:ResultLink(this,\"" + LinkHref +
//                 "\",\"" + t.rows[i][6] + "\",\"" + t.rows[i][7] + "\")'>" ; 
//         LinkFlag = 1 }
//     }
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
//   ImgString="ResultIcon" + t.rows[i][6].substr(0,2) + ".gif"
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
   return(dd + " " + mth3 +  " at " + time + EndLink);
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
function TableOutput(OrderColumn,AscDsc,lastrow) {
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
  TableString[TableString.length] = "<table border=" + t.Border +
                " cellspacing=" + t.Cellspacing +
                " cellpadding=" + t.Cellpadding +
                " width=" + t.Width +
                " align=" + t.Align + " >";
  TableString[TableString.length] = "<tr>";
  if (isFinite(t.columns[0][7])) {
    TotalWidth=0;
    for(var i = 0; i < t.columns.length; i++) {
       TotalWidth+=parseInt(t.columns[i][7],10) }
    for(var i = 0; i < t.columns.length; i++) {
       t.columns[i][7]=(Math.round(1000*(parseInt(t.columns[i][7],10)/TotalWidth))/10)+'%' }
  }

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
  TableString[TableString.length] = "<table border=" + t.Border + 
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

  if (lastrow!=undefined)
  {
    if (lastrow=="0")
    {
       TableString[TableString.length] = "<tr bgcolor=red ><td colspan="
             + t.columns.length + " align=center><b>"
             + "No More Records to Display </b></td></tr>";
    }
  }
  TableString[TableString.length] = "</table></div>";
 
  if (TableString.join)
    TableLocation.innerHTML = TableString.join("");
  else 
  {
    TableStringX="";
    for (var i=0; i < TableString.length; i++) TableStringX+=TableString[i];
    TableLocation.innerHTML = TableStringX;
  }

  // these are defined in the code we just rendered
  var HeadingDivision = document.getElementById('HeadingDivision');
  var BodyDivision    = document.getElementById('BodyDivision');

  var HeightValue = TableLocation.parentElement.offsetHeight -
                    HeadingSection.clientHeight  -        
                    HeadingDivision.clientHeight;
 // TableLocation.style.height = HeightValue - HeadingDivision.clientHeight
  TableLocation.style.top   = HeadingSection.clientHeight + 'px';
  BodyDivision.style.height = HeightValue + 'px';
}

function TableSort(OrderColumn) {
 if ( lastOrderColumn == OrderColumn ) { 
   if (AscDsc==1) {AscDsc=2;} else {AscDsc=1;} }
 else { 
   AscDsc=1; }
 lastOrderColumn=OrderColumn;
 TableOutput(OrderColumn,AscDsc,lastrow);
}
function TableTotals() {
   TableString[TableString.length] = "<tr class=TableRowTotal>" ;
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
  if (top.content.BodyDivision==undefined) {
    alert("There are no details to print");
    return;
  }
  SaveHeight=BodyDivision.style.height
  BodyDivision.style.height="auto"
  BodyDivision.style.overflow="visible"
  print()
  BodyDivision.style.height=SaveHeight
  BodyDivision.style.overflow="auto"
}
