//========================================================================
//
// Modifications :
//----------------------------------------------------------------------
// V10.03.03 16.01.2013 B.G.Ackland CAR 279466
//           NSW Between the Flags Alerting MUH Quote
//           Harmonise Changes for V10.00 MUH
// V10.03.02 27.02.2013 Peter McMullen  - 277555
//           remove redundance checkPassAdd, checkPassUpd
// V10.00.01 16.01.2013 B.G.Ackland CAR 279466
//           NSW Between the Flags Alerting MUH Quote
// V10.00.00 07.09.2011 B.G.Ackland
//           New for Observations by MRN incorporating Height & Weight
//
//========================================================================
// cliweb0201003 - View Observations by MRN
//========================================================================
function EditType(linkurl) {
  Left=(document.body.clientWidth-390)/2
  DFrameLink(linkurl,0,Left,390,225)
}
function EditLookup02() {
    SelectCode.template.value=2
    SelectCode.obstyp01.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-390)/2
    DFrameSubmit(SelectCode,0,Left,390,225)
}

//========================================================================
// cliweb0201001 - Observation Summary Filter by Type
//========================================================================
function Filter(SelectItem) {
  for (var i = 0; i < SelectItem.length; i++) {
    if (SelectItem.options[i].selected == true) {
        SelectOption=SelectItem.options[i].value }   }
  PatientLinks.action="cliweb02.pbl"
  PatientLinks.reportno.value="1"
  PatientLinks.template.value="1"
  PatientLinks.obsvtype.value=SelectOption
  PatientLinks.submit()
}
//========================================================================
// cliweb0201001 - Observation Summary Insert by Type
//========================================================================
function Insert(SelectItem) {
  for (var i = 0; i < SelectItem.length; i++) {
    if (SelectItem.options[i].selected == true) {
        SelectOption=SelectItem.options[i].value }   }
  SelectItem.options[0].selected = true
  if (!isWhitespace(SelectOption)) {
    PatientLinks.action="cliweb02.pbl"
    PatientLinks.reportno.value="2"
    PatientLinks.template.value=SelectOption.substr(3,3)
    DFrameSubmit(PatientLinks,25,25,750,420)
  }
}
//========================================================================
// cliweb0201001 - Observation Summary Update/View Observation
//========================================================================
function UpdateObs(linkURL) {
  DFrameLink(linkURL,25,25,750,420)
}
//function Observation(linkURL) {
//DFrameLink(linkURL,25,25,750,400)
//}
//========================================================================
// cliweb0201001 - Table Formating by Type 
//========================================================================
// Columns 
// 0. HTML Link        1. Date & Time       2. Type
// 3. Abnormal Flag    4. Pulse             5. Temp
// 6. Resp             7. BP                8. Pulse/Ox
// 9. F1O2            10. Peak Flow        11. Fluids Out Type
//12. Fluids Output   13. Fluid Input Type 14. Fluids Input
//15. Eyes            16. Verbal           17. Motor           
//18. Total Neuro     19. Action/Comment   20. Comment
//
function InitTable() {
for (var i = 0; i < document.Observation.obsvtype.length; i++) {
  if (document.Observation.obsvtype.options[i].selected == true) {
      SelectOption=document.Observation.obsvtype.options[i].value }   }
  switch (SelectOption.substr(0,3)) {
    case "F  ": {
     document.title="Fluid Observations"
     t = new Table(1,0,1,"100%","center",30);
     t.addColumn("Date","DateTime",1,1,"left","EditIcon.gif","0",140)
     t.addColumn("Input Type","String",13,13,"left","","",100)
     t.addColumn("Input","Number",14,-2,"right","","",60)
     t.addColumn("Output Type","String",11,11,"left","","",100)
     t.addColumn("Output","Number",12,-2,"right","","",60)
     t.addColumn("Comment","String",20,20,"left","","",120)
     t.addColumn("User","String",23,23,"left","","",60)
     AddTableRows()
     t.addTotal("1")
     TableOutput(0,2)
     break;
     }
    case "N  ": {
     document.title="Neurological Observations"
     t = new Table(1,0,1,"100%","center",30);
     t.addColumn("Date","DateTime",1,1,"left","EditIcon.gif","0",140)
     t.addColumn("Eyes","Number",15,-2,"right","","",60)
     t.addColumn("Verbal","Number",16,-2,"right","","",60)
     t.addColumn("Motor","Number",17,-2,"right","","",60)
     t.addColumn("Total","Number",18,-4,"right","","",60)
     t.addColumn("Pupil Details","String",21,21,"left","","",50)
     t.addColumn("Limb Details","String",22,22,"left","","",50)
     t.addColumn("Comment","String",20,20,"left","","",80)
     t.addColumn("Status","Image",3,3,"center","ResultStatus","",30)
     t.addColumn("User","String",23,23,"left","","",50)
     AddTableRows()
     TableOutput(0,2)
     break;
     }
    default: {
     document.title="Basic Observations"
     t = new Table(1,0,1,"100%","center",30);
     t.addColumn("Type","String",2,2,"left","","",40)
     t.addColumn("Date","DateTime",1,1,"left","EditIcon.gif","0",125)
     t.addColumn("F1O2","Number",9,-6,"right","","",55)
     t.addColumn("SaO2%","Number",8,-6,"right","","",55)
     t.addColumn("Pulse","Number",4,-5,"right","","",55)
     t.addColumn("Temp.","Number",5,-5,"right","","",55)
     t.addColumn("Resp.","Number",6,-5,"right","","",55)
     t.addColumn("BP","String",7,-3,"right","","",55)
     t.addColumn("Height","String",41,-7,"right","","",55)
     t.addColumn("Weight","String",40,-7,"right","","",55)
     t.addColumn("BMI","String",38,-7,"right","","",55)
     t.addColumn("BSA","String",39,-7,"right","","",55)
     t.addColumn("Comment","String",20,20,"left","","",65)
     t.addColumn("Status","WarningIcon",24,24,"center","ResultStatus","",40,3)
     t.addColumn("User","String",23,23,"left","","",50)
     AddTableRows()
//
//  Square Root BSA Numbers.
//===========================
     for(var i = 0; i < t.rows.length; i++) {
       if (trim(t.rows[i][39])!="") {
       t.rows[i][39]=" "+trim(Math.round(Math.sqrt(trim(t.rows[i][39]))*100)/100);
       }
     }
     TableOutput(1,2)
     break;
    }
  }
}
//========================================================================
// cliweb0201001 - Display Observation Tables & Graphs
//========================================================================
function Table(Border,Cellspacing,Cellpadding,Width,Align,HHeight,RHeight) {
   this.Border = Border;
   this.Cellspacing = Cellspacing;
   this.Cellpadding = Cellpadding;
   this.Width = Width;
   this.Align = Align;
   this.HeadingHeight = HHeight;
   this.RowHeight = RHeight;
   this.rows = new Array();
   this.totals = new Array();
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
      case "ImageText" :  t.rows.sort(StringSort); break;
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
      case "ImageText" :  t.rows.sort(RevStringSort); break;
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
 for(var j = 0; j < t.columns.length; j++) { t.totals[j] = 0; }
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
       case "WarningIcon":
         FormatWarningIcon(t,i);
         break;
       case "ImageText" :
         if (t.columns[j][5] == "") {
           ImgString=t.rows[i][t.columns[j][8]];
         }
         else {
           ImgString=t.columns[j][5] +
                       t.rows[i][t.columns[j][8]] + ".gif"
         }
         FormatIcon();
         TableString[TableString.length] = (t.rows[i][t.columns[j][2]]);
         break;
       case "Number"    :   
         FormatIcon();
         if (!isWhitespace(t.rows[i][t.columns[j][2]])) {
           t.totals[j] += parseInt(t.rows[i][t.columns[j][2]],10); }
         TableString[TableString.length] = t.rows[i][t.columns[j][2]];
         if ( LinkFlag ) { TableString[TableString.length] = "</a>" }
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

  if (isFinite(t.columns[0][7])) {
    TotalWidth=0;
    for(var i = 0; i < t.columns.length; i++) {
       TotalWidth+=parseInt(t.columns[i][7],10) }
    for(var i = 0; i < t.columns.length; i++) {
       t.columns[i][7]=(Math.round(1000*(parseInt(t.columns[i][7],10)/TotalWidth))/10)+'%' }
  }

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
         TableString[TableString.length] = "<a href='javascript:GraphColumn(\"" + 
                         t.columns[i][0] + "\"," +
                         t.columns[i][2] + ")'>"; 
         TableString[TableString.length] = "<img src=\"../images/GraphIcon.gif\" border=0 " +
                        " hspace=4 align=absmiddle></a>";
         TableString[TableString.length] = t.columns[i][0] + "</td>"; 
         break; 
      case -3 :
         TableString[TableString.length] = "<a href='javascript:GraphBP()'>"; 
         TableString[TableString.length] = "<img src=\"../images/GraphIcon.gif\" border=0 " +
                        " hspace=4 align=absmiddle></a>";
         TableString[TableString.length] = t.columns[i][0] + "</td>"; 
         break; 
      case -4 :
         TableString[TableString.length] = "<a href='javascript:GraphNeuro()'>"; 
         TableString[TableString.length] = "<img src=\"../images/GraphIcon.gif\" border=0 " +
                        " hspace=4 align=absmiddle></a>";
         TableString[TableString.length] = t.columns[i][0] + "</td>"; 
         break; 
      case -5 :
         TableString[TableString.length] = "<a href='javascript:GraphBasic(\"" + 
                         t.columns[i][0] + "\"," +
                         t.columns[i][2] + ")'>"; 
         TableString[TableString.length] = "<img src=\"../images/GraphIcon.gif\" border=0 " +
                        " hspace=4 align=absmiddle></a>";
         TableString[TableString.length] = t.columns[i][0] + "</td>"; 
         break; 
      case -6 :
         TableString[TableString.length] = "<a href='javascript:GraphSaO2(\"" +
                         t.columns[i][0] + "\"," +
                         t.columns[i][2] + ")'>";
         TableString[TableString.length] = "<img src=\"../images/GraphIcon.gif\" border=0 " +
                        " hspace=4 align=absmiddle></a>";
         TableString[TableString.length] = t.columns[i][0] + "</td>";
         break;
      case -7 :
         TableString[TableString.length] = "<a href='javascript:GraphHW(\"" +
                         t.columns[i][0] + "\"," +
                         t.columns[i][2] + ")'>";
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
     switch(t.columns[j][1]) {
       case "Number" :  
         TableString[TableString.length] = t.totals[j];
         break;
       default    :   
         TableString[TableString.length] = "&nbsp;"
         break;
     }
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
function GraphNeuro() {
 GraphHead()
 Dataset0dateValue = ""
 Dataset0yValue = ""
 Dataset1dateValue = ""
 Dataset1yValue = ""
 Dataset2dateValue = ""
 Dataset2yValue = ""
 Dataset3dateValue = ""
 Dataset3yValue = ""
 DelimiterField = ""
 ReferenceRangeType=0
 for(var i = 0; i < t.rows.length; i++) {
   if (!isWhitespace(t.rows[i][18])){
     Dataset0dateValue += DelimiterField + DateTimeFormat(t.rows[i][1])
     Dataset1dateValue += DelimiterField + DateTimeFormat(t.rows[i][1])
     Dataset2dateValue += DelimiterField + DateTimeFormat(t.rows[i][1])
     Dataset3dateValue += DelimiterField + DateTimeFormat(t.rows[i][1])
     Dataset0yValue += DelimiterField + t.rows[i][18]
     if (isWhitespace(t.rows[i][15])){
       Dataset1yValue += DelimiterField + "0.0" }
     else {
       Dataset1yValue += DelimiterField + t.rows[i][15] }
     if (isWhitespace(t.rows[i][16])){
       Dataset2yValue += DelimiterField + "0.0" }
     else {
       Dataset2yValue += DelimiterField + t.rows[i][16] }
     if (isWhitespace(t.rows[i][17])){
       Dataset3yValue += DelimiterField + "0.0" }
     else {
       Dataset3yValue += DelimiterField + t.rows[i][17] }
     DelimiterField = ","
   }
 }
 GraphString += '<param name=titleString value="Neurological Observations">' +
        '<param name=dataset0name value="Total">' +
        '<param name=dataset1name value="Eyes">' +
        '<param name=dataset2name value="Verbal">' +
        '<param name=dataset3name value="Motor">' +
        '<param name=dataset0Image value="images/GraphTickBlue.gif">' +
        '<param name=dataset1Image value="images/GraphTickRed.gif">' +
        '<param name=dataset2Image value="images/GraphTickGreen.gif">' +
        '<param name=dataset3Image value="images/GraphTickCyan.gif">' +
        '<param name=dataset0dateValues value="' + Dataset0dateValue + '">' +
        '<param name=dataset0yValues value="' + Dataset0yValue + '">' +
        '<param name=dataset1dateValues value="' + Dataset1dateValue + '">' +
        '<param name=dataset1yValues value="' + Dataset1yValue + '">' +
        '<param name=dataset2dateValues value="' + Dataset2dateValue + '">' +
        '<param name=dataset2yValues value="' + Dataset2yValue + '">'  +
        '<param name=dataset3dateValues value="' + Dataset3dateValue + '">' +
        '<param name=dataset3yValues value="' + Dataset3yValue + '">' 
 GraphEnd()
}
//------------------------------------------------------------
// Single Line Graph
//------------------------------------------------------------
function GraphO2SaO2() {
 GraphHead()
 Dataset0dateValue = ""
 Dataset0yValue = ""
 Dataset1dateValue = ""
 Dataset1yValue = ""
 DelimiterField0 = ""
 DelimiterField1 = ""
 ReferenceRangeType=0
 for(var i = 0; i < t.rows.length; i++) {
   if (!isWhitespace(t.rows[i][8])){
     Dataset0dateValue += DelimiterField0 + DateTimeFormat(t.rows[i][1])
     Dataset0yValue += DelimiterField0 + t.rows[i][8]
     DelimiterField0 = "," }
   if (!isWhitespace(t.rows[i][9])){
     Dataset1dateValue += DelimiterField1 + DateTimeFormat(t.rows[i][1])
     Dataset1yValue += DelimiterField1 + t.rows[i][9]
     DelimiterField1 = "," }
 }
 GraphString += '<param name=titleString value="F1O2 and SaO2%">' +
        '<param name=dataset0name value="SaO2%">' +
        '<param name=dataset1name value="F1O2">' +
        '<param name=dataset0Image value="images/GraphTickBlue.gif">' +
        '<param name=dataset1Image value="images/GraphTickRed.gif">' +
        '<param name=dataset0dateValues value="' + Dataset0dateValue + '">' +
        '<param name=dataset0yValues value="' + Dataset0yValue + '">' +
        '<param name=dataset1dateValues value="' + Dataset1dateValue + '">' +
        '<param name=dataset1yValues value="' + Dataset1yValue + '">' 
 EndSaO2()
}
//------------------------------------------------------------
// Single Line Graph
//------------------------------------------------------------
function GraphBP() {
 GraphHead()
 Dataset0dateValue = ""
 Dataset0yValue = ""
 Dataset1dateValue = ""
 Dataset1yValue = ""
 Dataset2dateValue = ""
 Dataset2yValue = ""
 DelimiterField0 = ""
 DelimiterField1 = ""
 DelimiterField2 = ""
 ReferenceRangeType=0
 for(var i = 0; i < t.rows.length; i++) {
   if (!isWhitespace(t.rows[i][4])){
     Dataset0dateValue += DelimiterField0 + DateTimeFormat(t.rows[i][1])
     Dataset0yValue += DelimiterField0 + t.rows[i][4]
     DelimiterField0 = "," }
   if (!isWhitespace(t.rows[i][7])){
     Dataset1dateValue += DelimiterField1 + DateTimeFormat(t.rows[i][1])
     Dataset2dateValue += DelimiterField1 + DateTimeFormat(t.rows[i][1])
     bp=t.rows[i][7].split("/")
     Dataset1yValue += DelimiterField1 + bp[0]
     Dataset2yValue += DelimiterField1 + bp[1]
     DelimiterField1 = "," }
 }
 GraphString += '<param name=titleString value="Blood Pressure">' +
        '<param name=dataset0name value="Pulse">' +
        '<param name=dataset1name value="Systolic">' +
        '<param name=dataset2name value="Diastolic">' +
        '<param name=dataset0Image value="images/GraphTickBlue.gif">' +
        '<param name=dataset1Image value="images/GraphTickRed.gif">' +
        '<param name=dataset2Image value="images/GraphTickGreen.gif">' +
        '<param name=dataset0dateValues value="' + Dataset0dateValue + '">' +
        '<param name=dataset0yValues value="' + Dataset0yValue + '">' +
        '<param name=dataset1dateValues value="' + Dataset1dateValue + '">' +
        '<param name=dataset1yValues value="' + Dataset1yValue + '">' +
        '<param name=dataset2dateValues value="' + Dataset2dateValue + '">' +
        '<param name=dataset2yValues value="' + Dataset2yValue + '">' 
 EndBasic()
}
function EndBasic() {
 GraphString += '</applet></td></tr>' +
        '<tr><td bgcolor=#cccccc align=center>' +
        '<table width=100% border=0>' +
        '<tr><td width=20%>' +
        '<img src=../images/GraphIcon.gif onclick=GraphAll() ' +
        ' hspace=4 align=absmiddle> All' +'</td>' +
        '<td width=20%>' +
        '<img src=../images/GraphIcon.gif onclick=GraphBP() ' +
        ' hspace=4 align=absmiddle> Blood Pressure' +'</td>' +
        '<td width=20%>' +
       '<img src=../images/GraphIcon.gif onclick=GraphBasic("Pulse",4)'+
        ' hspace=4 align=absmiddle> Pulse' + '</td>' +
        '<td width=20%>' +
       '<img src=../images/GraphIcon.gif onclick=GraphBasic("Temperature",5)'+
        ' hspace=4 align=absmiddle> Temperature' + '</td>' +
        '<td width=20%>' +
       '<img src=../images/GraphIcon.gif onclick=GraphBasic("Respiration",6)'+
        ' hspace=4 align=absmiddle> Respiration' +
        '</td></tr></table>';
        '</td></tr></table>';
 GraphLocation.innerHTML = GraphString;
 GraphLocation.style.display="";
}
function EndSaO2() {
 GraphString += '</applet></td></tr>' +
        '<tr><td bgcolor=#cccccc align=center>' +
        '<table width=100% border=0>' +
        '<tr><td width=20%>' +
        '<img src=../images/GraphIcon.gif onclick=GraphO2SaO2() ' +
        ' hspace=4 align=absmiddle> Both' +'</td>' +
        '<td width=20%>' +
        '<img src=../images/GraphIcon.gif onclick=GraphSaO2("O2_Flow",9) ' +
        ' hspace=4 align=absmiddle> F1O2' +'</td>' +
        '<td width=20%>' +
       '<img src=../images/GraphIcon.gif onclick=GraphSaO2("SaO2%",8)'+
        ' hspace=4 align=absmiddle> SaO2%' + '</td>' +
        '</td></tr></table>';
        '</td></tr></table>';
 GraphLocation.innerHTML = GraphString;
 GraphLocation.style.display="";
}
//------------------------------------------------------------
// Single Line Graph
//------------------------------------------------------------
function GraphSaO2(GraphTitle,ColumnNo) {
 GraphHead()
 Dataset0dateValue = ""
 Dataset0yValue = ""
 DelimiterField = ""
 ReferenceRangeType=0
 if (GraphTitle=="O2_Flow") {
   GraphTitle="F1O2";
 }
 for(var i = 0; i < t.rows.length; i++) {
   if (!isWhitespace(t.rows[i][ColumnNo])){
     Dataset0dateValue += DelimiterField + DateTimeFormat(t.rows[i][1])
     Dataset0yValue += DelimiterField + t.rows[i][ColumnNo]
     DelimiterField = ","
   }
 }
 GraphString += '<param name=titleString value="' + GraphTitle + '">' +
        '<param name=dataset0Image value="images/GraphTickBlue.gif">'+
        '<param name=dataset0Name value="' + GraphTitle + '">' +
        '<param name=dataset0dateValues value="' + Dataset0dateValue + '">' +
        '<param name=dataset0yValues value="' + Dataset0yValue + '">'
 EndSaO2()
}
//------------------------------------------------------------
// Single Line Graph
//------------------------------------------------------------
function GraphBasic(GraphTitle,ColumnNo) {
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
 GraphString += '<param name=titleString value="' + GraphTitle + '">' +
        '<param name=dataset0Image value="images/GraphTickBlue.gif">'+
	'<param name=dataset0Name value="' + GraphTitle + '">' +
        '<param name=dataset0dateValues value="' + Dataset0dateValue + '">' +
        '<param name=dataset0yValues value="' + Dataset0yValue + '">' 
 EndBasic()
}
//------------------------------------------------------------
// Single Line Graph
//------------------------------------------------------------
function GraphBasic(GraphTitle,ColumnNo) {
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
 GraphString += '<param name=titleString value="' + GraphTitle + '">' +
        '<param name=dataset0Image value="images/GraphTickBlue.gif">'+
	'<param name=dataset0Name value="' + GraphTitle + '">' +
        '<param name=dataset0dateValues value="' + Dataset0dateValue + '">' +
        '<param name=dataset0yValues value="' + Dataset0yValue + '">' 
 EndBasic()
}
//------------------------------------------------------------
// Single Line Graph
//------------------------------------------------------------
function GraphColumn(GraphTitle,ColumnNo) {
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
 GraphString += '<param name=titleString value="' + GraphTitle + '">' +
        '<param name=dataset0Image value="images/GraphTickBlue.gif">'+
	'<param name=dataset0Name value="' + GraphTitle + '">' +
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
 if (window.navigator.userAgent.indexOf("MSIE 6.0")>=1
     || window.navigator.userAgent.indexOf("MSIE 7.0")>=1
     || window.navigator.userAgent.indexOf("MSIE 8.0")>=1) {
   if(top.location.pathname.match(/EmergencyMap/g)) {
     var GraphBase = 'codebase=../ ';
   }
   else {
     var GraphBase = 'codebase=../../ ';
   }
 }
 else
  var GraphBase = 'codebase=../ ';
 GraphLocation.style.top=25
 GraphLocation.style.left=100
 GraphLocation.style.width=GraphWidth+10
 GraphLocation.style.height=250
 GraphLocation.style.display="";
 GraphLocation.innerHTML='<link rel="stylesheet" ' +
  'href="../html/standard.css" type="text/css">' +
  '<script type="text/javascript" src="../js/Standard.js" ></script>' +
  '<span class=DFrameTitleBar>' +
  '<img border=0 align=right src=../images/ExitIcon.gif onclick=DFrameExit()>' +
  'Loading Document...' +
  '</span>' +
  '<applet ' + GraphBase + ' width=' + GraphWidth +
  ' height=' + GraphHeight + '></applet>';
 GraphLocation.style.display="";
 GraphString='<link rel="stylesheet" href="../html/standard.css" ' +
  'type="text/css">' +
  '<script type="text/javascript" src="../js/Standard.js" ></script>' +
  '<span class=DFrameTitleBar>' +
  '<img src=../images/ExitIcon.gif align=right ' +
  'border=0 onclick=CloseJavaChart()>' +
  'Observations' +
  '</span>'  +
  '<table cellspacing=0 cellpadding=0 border=1>' +
  '<tr><td>' +
  '<applet code=javachart.applet.dateLineApp.class ' +
  GraphBase + ' width=' + GraphWidth +
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
//------------------------------------------------------------
// Single Line Graph
//------------------------------------------------------------
function GraphAll() {
 GraphHead()
 Dataset0dateValue = ""
 Dataset0yValue = ""
 Dataset1dateValue = ""
 Dataset1yValue = ""
 Dataset2dateValue = ""
 Dataset2yValue = ""
 Dataset3dateValue = ""
 Dataset3yValue = ""
 Dataset4dateValue = ""
 Dataset4yValue = ""
 DelimiterField0 = ""
 DelimiterField1 = ""
 DelimiterField2 = ""
 DelimiterField3 = ""
 ReferenceRangeType=0
 for(var i = 0; i < t.rows.length; i++) {
   if (!isWhitespace(t.rows[i][4])){
     Dataset0dateValue += DelimiterField0 + DateTimeFormat(t.rows[i][1])
     Dataset0yValue += DelimiterField0 + t.rows[i][4]
     DelimiterField0 = "," }
   if (!isWhitespace(t.rows[i][5])){
     Dataset1dateValue += DelimiterField1 + DateTimeFormat(t.rows[i][1])
     Dataset1yValue += DelimiterField1 + t.rows[i][5]
     DelimiterField1 = "," }
   if (!isWhitespace(t.rows[i][6])){
     Dataset2dateValue += DelimiterField2 + DateTimeFormat(t.rows[i][1])
     Dataset2yValue += DelimiterField2 + t.rows[i][6]
     DelimiterField2 = "," }
   if (!isWhitespace(t.rows[i][7])){
     Dataset3dateValue += DelimiterField3 + DateTimeFormat(t.rows[i][1])
     Dataset4dateValue += DelimiterField3 + DateTimeFormat(t.rows[i][1])
     bp=t.rows[i][7].split("/")
     Dataset3yValue += DelimiterField3 + bp[0]
     Dataset4yValue += DelimiterField3 + bp[1]
     DelimiterField3 = ","
   }
 }
 GraphString += '<param name=titleString value="All Basic Observations">' +
        '<param name=dataset0name value="Pulse">' +
        '<param name=dataset1name value="Temperature">' +
        '<param name=dataset2name value="Respiration">' +
        '<param name=dataset3name value="Systolic">' +
        '<param name=dataset4name value="Diastolic">' +
        '<param name=dataset0Image value="images/GraphTickBlue.gif">' +
        '<param name=dataset1Image value="images/GraphTickRed.gif">' +
        '<param name=dataset2Image value="images/GraphTickGreen.gif">' +
        '<param name=dataset3Image value="images/GraphTickCyan.gif">' +
        '<param name=dataset4Image value="images/GraphTickYellow.gif">' +
        '<param name=dataset0dateValues value="' + Dataset0dateValue + '">' +
        '<param name=dataset0yValues value="' + Dataset0yValue + '">' +
        '<param name=dataset1dateValues value="' + Dataset1dateValue + '">' +
        '<param name=dataset1yValues value="' + Dataset1yValue + '">' +
        '<param name=dataset2dateValues value="' + Dataset2dateValue + '">' +
        '<param name=dataset2yValues value="' + Dataset2yValue + '">' +
        '<param name=dataset3dateValues value="' + Dataset3dateValue + '">' +
        '<param name=dataset3yValues value="' + Dataset3yValue + '">' +
        '<param name=dataset4dateValues value="' + Dataset4dateValue + '">' +
        '<param name=dataset4yValues value="' + Dataset4yValue + '">' 
 EndBasic()
}
//========================================================================
// cliweb0202101 & cliweb0202201 - basic observation functions
//========================================================================
function checkMinMax(numField,minNumb,maxNumb) {
  if (numField.value!=0) {
    if (numField.className.match(/Integer/)) {
      if (!checkInteger(numField,numField.title)) return;;
      thisNumber=parseInt(numField.value,10);
      minNumber=parseInt(minNumb,10);
      maxNumber=parseInt(maxNumb,10);
    }
    if (numField.className.match(/Number/)) {
      if (!checkNumber(numField,numField.title)) return;;
      thisNumber=parseFloat(numField.value);
      minNumber=parseFloat(minNumb);
      maxNumber=parseFloat(maxNumb);
    }
    if ((thisNumber < minNumber) ||
        (thisNumber > maxNumber)) {
      alert(numField.title + " must be between " + minNumb + " and " + maxNumb);
      numField.select();
      return;
    }
  }
}
function checkRoomAir(type,flow) {
  if (type.value.substr(3,1)=="O") {
    flow.className="Integer";
    flow.readOnly=false;
  }
  else {
    flow.value="";
    flow.className="Readonly";
    flow.readOnly=true;
  }
}
function checkBSL(high,level) {
  if (high.checked==true) {
    level.value="";
    level.className="Readonly";
    level.readOnly=true;
  }
  else {
    level.className="Number";
    level.readOnly=false;
  }
}
function EndHW() {
 GraphString += '</applet></td></tr>' +
        '<tr><td bgcolor=#cccccc align=center>' +
        '<table width=100% border=0>' +
        '<tr><td width=20%>' +
        '<img src=../images/GraphIcon.gif onclick=GraphAllHW() ' +
        ' hspace=4 align=absmiddle> All' +'</td>' +
        '<td width=20%>' +
        '<img src=../images/GraphIcon.gif onclick=GraphHW("Height",41) ' +
        ' hspace=4 align=absmiddle> Height' +'</td>' +
        '<td width=20%>' +
       '<img src=../images/GraphIcon.gif onclick=GraphHW("Weight",40)'+
        ' hspace=4 align=absmiddle> Weight' + '</td>' +
        '<td width=20%>' +
       '<img src=../images/GraphIcon.gif onclick=GraphHW("BMI",38)'+
        ' hspace=4 align=absmiddle> BMI' + '</td>' +
        '<td width=20%>' +
       '<img src=../images/GraphIcon.gif onclick=GraphHW("BSA",39)'+
        ' hspace=4 align=absmiddle> BSA' +
        '</td></tr></table>';
 GraphLocation.innerHTML = GraphString;
 GraphLocation.style.display="";
}
//------------------------------------------------------------
// Single Line Graph
//------------------------------------------------------------
function GraphBMI(GraphTitle,ColumnNo) {
 GraphHead()
 Dataset0dateValue = ""
 Dataset1dateValue = ""
 Dataset2dateValue = ""
 Dataset3dateValue = ""
 Dataset4dateValue = ""
 Dataset5dateValue = ""
 Dataset0yValue = ""
 Dataset1yValue = ""
 Dataset2yValue = ""
 DelimiterField = ""
 ReferenceRangeType=0
 for(var i = 0; i < t.rows.length; i++) {
   if (!isWhitespace(t.rows[i][ColumnNo])){
     Dataset0dateValue += DelimiterField + DateTimeFormat(t.rows[i][1])
     Dataset1dateValue += DelimiterField + DateTimeFormat(t.rows[i][1])
     Dataset2dateValue += DelimiterField + DateTimeFormat(t.rows[i][1])
     Dataset0yValue += DelimiterField + t.rows[i][ColumnNo]
     Dataset1yValue += DelimiterField + "18"
     Dataset2yValue += DelimiterField + "25"
     DelimiterField = ","
   }
 }
 GraphString += '<param name=yAxisOptions value="gridOn tickOn noAutoScale">'+
        '<param name=yAxisLabelCount value="5">' +
        '<param name=yAxisTickCount value="5">' +
        '<param name=yAxisGridCount value="5">' +
        '<param name=yAxisStart value="10">' +
        '<param name=yAxisEnd value="40">' 
 GraphString += '<param name=titleString value="' + GraphTitle + '">' +
        '<param name=dataset0Image value="images/GraphTickBlue.gif">'+
	'<param name=dataset0Name value="' + GraphTitle + '">' +
	'<param name=dataset1Name value="Normal Min">' +
	'<param name=dataset2Name value="Normal Max">' +
        '<param name=dataset0dateValues value="' + Dataset0dateValue + '">' +
        '<param name=dataset0yValues value="' + Dataset0yValue + '">' +
        '<param name=dataset1dateValues value="' + Dataset1dateValue + '">' +
        '<param name=dataset1Color value="red">' +
        '<param name=dataset1yValues value="' + Dataset1yValue + '">' +
        '<param name=dataset2dateValues value="' + Dataset2dateValue + '">' +
        '<param name=dataset2Color value="red">' +
        '<param name=dataset2yValues value="' + Dataset2yValue + '">' 
 EndHW()
}
//------------------------------------------------------------
// Single Line Graph
//------------------------------------------------------------
function GraphHW(GraphTitle,ColumnNo) {
 if (GraphTitle=="BMI") { GraphBMI(GraphTitle,ColumnNo);return; }
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
 if (GraphTitle=="Weight") {
   GraphString += '<param name=yAxisOptions value="gridOn tickOn noAutoScale">'+
        '<param name=yAxisLabelCount value="5">' +
        '<param name=yAxisTickCount value="5">' +
        '<param name=yAxisGridCount value="5">' +
        '<param name=yAxisStart value="0">' +
        '<param name=yAxisEnd value="200">' 
 }
 if (GraphTitle=="Height") {
   GraphString += '<param name=yAxisOptions value="gridOn tickOn noAutoScale">'+
        '<param name=yAxisLabelCount value="5">' +
        '<param name=yAxisTickCount value="5">' +
        '<param name=yAxisGridCount value="5">' +
        '<param name=yAxisStart value="0">' +
        '<param name=yAxisEnd value="250">' 
 }
 if (GraphTitle=="BSA") {
   GraphString += '<param name=yAxisOptions value="gridOn tickOn noAutoScale">'+
        '<param name=yAxisLabelCount value="5">' +
        '<param name=yAxisTickCount value="5">' +
        '<param name=yAxisGridCount value="5">' +
        '<param name=yAxisStart value="0">' +
        '<param name=yAxisEnd value="5">' 
 }
 GraphString += '<param name=titleString value="' + GraphTitle + '">' +
        '<param name=dataset0Image value="images/GraphTickBlue.gif">'+
	'<param name=dataset0Name value="' + GraphTitle + '">' +
        '<param name=dataset0dateValues value="' + Dataset0dateValue + '">' +
        '<param name=dataset0yValues value="' + Dataset0yValue + '">' 
 EndHW()
}
//------------------------------------------------------------
// Single Line Graph
//------------------------------------------------------------
function GraphAllHW() {
 GraphHead()
 Dataset0dateValue = ""
 Dataset0yValue = ""
 Dataset1dateValue = ""
 Dataset1yValue = ""
 Dataset2dateValue = ""
 Dataset2yValue = ""
 Dataset3dateValue = ""
 Dataset3yValue = ""
 DelimiterField0 = ""
 DelimiterField1 = ""
 DelimiterField2 = ""
 DelimiterField3 = ""
 ReferenceRangeType=0
 for(var i = 0; i < t.rows.length; i++) {
   if (!isWhitespace(t.rows[i][41])){
     Dataset0dateValue += DelimiterField0 + DateTimeFormat(t.rows[i][1])
     Dataset0yValue += DelimiterField0 + t.rows[i][41]
     DelimiterField0 = "," }
   if (!isWhitespace(t.rows[i][40])){
     Dataset1dateValue += DelimiterField1 + DateTimeFormat(t.rows[i][1])
     Dataset1yValue += DelimiterField1 + t.rows[i][40]
     DelimiterField1 = "," }
   if (!isWhitespace(t.rows[i][38])){
     Dataset2dateValue += DelimiterField2 + DateTimeFormat(t.rows[i][1])
     Dataset2yValue += DelimiterField2 + t.rows[i][38]
     DelimiterField2 = "," }
   if (!isWhitespace(t.rows[i][39])){
     Dataset3dateValue += DelimiterField3 + DateTimeFormat(t.rows[i][1])
     Dataset3yValue += DelimiterField3 + t.rows[i][39]
     DelimiterField3 = "," }
 }
 GraphString += '<param name=titleString value="Height and Weight Observations">' +
        '<param name=yAxisOptions value="gridOn tickOn noAutoScale">'+
        '<param name=yAxisLabelCount value="5">' +
        '<param name=yAxisTickCount value="5">' +
        '<param name=yAxisGridCount value="5">' +
        '<param name=yAxisStart value="0.0">' +
        '<param name=yAxisEnd value="250.0">' +
        '<param name=dataset0name value="Weight">' +
        '<param name=dataset1name value="Height">' +
        '<param name=dataset2name value="BMI">' +
        '<param name=dataset3name value="BSA">' +
        '<param name=dataset0Image value="images/GraphTickBlue.gif">' +
        '<param name=dataset1Image value="images/GraphTickRed.gif">' +
        '<param name=dataset2Image value="images/GraphTickGreen.gif">' +
        '<param name=dataset3Image value="images/GraphTickCyan.gif">' +
        '<param name=dataset0dateValues value="' + Dataset0dateValue + '">' +
        '<param name=dataset0yValues value="' + Dataset0yValue + '">' +
        '<param name=dataset1dateValues value="' + Dataset1dateValue + '">' +
        '<param name=dataset1yValues value="' + Dataset1yValue + '">' +
        '<param name=dataset2dateValues value="' + Dataset2dateValue + '">' +
        '<param name=dataset2yValues value="' + Dataset2yValue + '">' +
        '<param name=dataset3dateValues value="' + Dataset3dateValue + '">' +
        '<param name=dataset3yValues value="' + Dataset3yValue + '">' 
 EndHW()
}
function FormatWarningIcon(t,i) {
  var IconType="0";
  var IconTitle="";
  if (!isWhitespace(t.rows[i][5])) { /* Temperature */
    if (t.rows[i][5]<35.5) {
       IconType="1";IconTitle="Temperature Low - Clinical Review Required"
    }
    if (t.rows[i][5]>38.5) {
       IconType="1";IconTitle="Temperature High - Clinical Review Required"
    }
  }
  if (!isWhitespace(t.rows[i][6])) { /* Resps */
    if (parseInt(t.rows[i][6],10)<10) {
       IconType="1";IconTitle="Respiration Low - Clinical Review Required"
    }
    if (parseInt(t.rows[i][6],10)>25) {
       IconType="1";IconTitle="Respiration High - Clinical Review Required"
    }
  }
  if (!isWhitespace(t.rows[i][8])) { /* O2 Sats */
    if (parseInt(t.rows[i][8],10)<95) {
       IconType="1";IconTitle="Oxygen Sats Low - Clinical Review Required"
    }
  }
  if (!isWhitespace(t.rows[i][4])) { /* Pulse */
    if (parseInt(t.rows[i][4],10)<50) {
       IconType="1";IconTitle="Heart Rate Low - Clinical Review Required"
    }
    if (parseInt(t.rows[i][4],10)>120) {
       IconType="1";IconTitle="Heart Rate High - Clinical Review Required"
    }
  }
  if (!isWhitespace(t.rows[i][7].replace(/\/.*/,""))) { /* BP */
    if (parseInt(t.rows[i][7].replace(/\/.*/,""),10)<100) {
       IconType="1";IconTitle="BP Low - Clinical Review Required"
    }
    if (parseInt(t.rows[i][7].replace(/\/.*/,""),10)>180) {
       IconType="1";IconTitle="BP High - Clinical Review Required"
    }
  }
  if (t.rows[i][28]>0) {              /* BSL */
    if (t.rows[i][28]<4) {
       IconType="1";IconTitle="Blood Sugar Low - Clinical Review Required"
    }
  }
  if (!isWhitespace(t.rows[i][29])) { /* Neuro Status Code */
    if (parseInt(t.rows[i][29])==2) {
       IconType="1";IconTitle="Neurological Status Pain - Clinical Review Required"
    }
  }
  if (!isWhitespace(t.rows[i][6])) { /* Resps */
    if (parseInt(t.rows[i][6],10)<5)  {
       IconType="2";IconTitle="Respiration Very Low - Rapid Response Required"
    }
    if (parseInt(t.rows[i][6],10)>30) {
       IconType="2";IconTitle="Respiration Very High - Rapid Response Required"
    }
  }
  if (!isWhitespace(t.rows[i][8])) { /* O2 Sats */
    if (parseInt(t.rows[i][8],10)<90) {
       IconType="2";IconTitle="Oxygen Sats Very Low - Rapid Response Required"
    }
  }
  if (!isWhitespace(t.rows[i][9])) { /* O2 Flow */
    if (!isWhitespace(t.rows[i+1][9])) { /* Previous O2 Flow */
      if (parseFloat(t.rows[i][9])>parseFloat(t.rows[i+1][9])) {
       IconType="2";IconTitle="Increased Oxygen Flow - Rapid Response Required"
      }
    }
  }
  if (!isWhitespace(t.rows[i][4])) { /* Pulse */
    if (parseInt(t.rows[i][4],10)<40) {
       IconType="2";IconTitle="Heart Rate Very Low - Rapid Response Required"
    }
    if (parseInt(t.rows[i][4],10)>140) {
       IconType="2";IconTitle="Heart Rate Very High - Rapid Response Required"
    }
  }
  if (!isWhitespace(t.rows[i][7].replace(/\/.*/,""))) { /* BP */
    if (parseInt(t.rows[i][7].replace(/\/.*/,""),10)<90) {
       IconType="2";IconTitle="BP Very Low - Rapid Response Required"
    }
    if (parseInt(t.rows[i][7].replace(/\/.*/,""),10)>200) {
       IconType="2";IconTitle="BP Very High - Rapid Response Required"
    }
  }
  if (t.rows[i][28]>0) { /* BSL */
    if (t.rows[i][28]<1) {
       IconType="2";IconTitle="Blood Sugar Very Low - Rapid Response Required"
    }
  }
  if (!isWhitespace(t.rows[i][29])) { /* Neuro Status Code */
    if (parseInt(t.rows[i][29])==1) {
       IconType="2";IconTitle="Neurological Status Unresponsive - Rapid Response Required"
    }
  }
  //ImageString="StatusIcon" + IconType + ".png"
  //TableString[TableString.length] = FormatImage(ImageString);
  TableString[TableString.length] = "<span title='"+IconTitle+"' class=StatusIcon"+IconType+"></span>";
}
