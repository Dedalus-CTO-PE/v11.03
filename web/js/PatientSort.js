//jsVersion  : V11.03.01
//------------------------------------------------------------
// Patient Sort Table
//------------------------------------------------------------
var CompatibilityMode = false;  // Browser Compatibility Mode
var showTableFilterSearch = true;
var showTableFilter = true;
var showTableSearch = true;
var printOrder;
var printFormat=false;
var printWidth = new Array();
var FilterColumn = new Array();
var FilterValue = new Array();
var SearchInputField = null;
var SearchTimeoutId = null;
var SearchColumn = new Array();
var SearchValue = new Array();
var filterToggle=0;
var OrderColumn;
var SearchAllValue="";
var SearchAllFlag=false;
var AscDsc;
var filteredRows;
var RemoveHTMLTags = /(<([^>]+)>)/ig;

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
   this.links = new Array();
   this.addColumn = _addTableColumn;
   this.addLink = _addTableLink;
   this.sortTable = _sortTable;
   AscDsc=1
}
function _addTableLink() {
  this.links[this.links.length] = new Array();
  var links = this.links[this.links.length-1];
  for(var i = 0; i < arguments.length; i++) 
     links[links.length] = arguments[i];
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
  if (column[1] != "Image"  && column[5] != "") {
    var ImageBuffer = new Image();
    ImageBuffer.src = "../images/" + column[5]
  }
}
function _addTableRow() {
  this.rows[this.rows.length] = new Array();
  var row = this.rows[this.rows.length-1];
  for(var i = 0; i < arguments.length; i++) 
     row[row.length] = arguments[i];
}
function FormatIcon() {
 if (ImageString != "" ) {

   TableString[TableString.length] = "<img src=\"../images/" + ImageString +
                  "\" border=0 hspace=4 align=absmiddle>";
   TableString[TableString.length] = "</a>"; 
 }
}
function InsertLinks(Column,Row) {
  Links=Column[6]
  if (Links=="") { return(0) }
  if (Links.substr(0,1)=="C") { 
    columnNo=Links.substr(1,Links.length)
     imgString = Column[5]
     if (imgString=="PatientFolder.gif") {
        imgString=FormatPatientIcon(Row[2]) }
    TableString[TableString.length] = '<img src="../images/' + imgString +
                    '" class=ListIcon onclick="' + Row[columnNo] + '">'
    }
  else {
    for(var l = 0; l < Links.length; l++) {
     LinkIndex=Links.substr(l,1)
     imgString = t.links[LinkIndex][3]
     if (imgString=="PatientFolder.gif") {
        imgString=FormatPatientIcon(Row[2]) }
     TableString[TableString.length] = '<img src="../images/' + imgString + '"' +
                    ' class=ListIcon onclick=\'PatientTableLink("' +
                     Row[0]  + '","' +
                     Row[1]  + '","' +
                     t.links[LinkIndex][0] + '","' +
                     t.links[LinkIndex][1] + '","' +
                     t.links[LinkIndex][2] + '","' +
                     t.links[LinkIndex][4] + '")\'>'
    }
  }
}
function PatientTableLink(Urnumber,Admissno,Server,Option,Template,Frame) {
  linkUrl = Server + "?reportno="  + Option +
                     "&template="  + Template +
                     "&urnumber="  + Urnumber.replace(/ /g,"+") +
                     "&admissno="  + Admissno.replace(/ /g,"+") 
  if (Frame=="undefined") {
    location.href=linkUrl 
}
  else {
    FrameSize=Frame.split(",")
    Top=document.body.scrollTop
    Left=(document.body.clientWidth-FrameSize[0])/2
    DFrameLink(linkUrl,Top,Left,FrameSize[0],FrameSize[1]) }
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
 return( "<b>" + Surname + "</b> " + Title + " " + Initial  );
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
   return(dd + " " + mth3 + " " + yyyy + " at " + time  );
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
   return(dd + " " + mth3 + " " + yyyy  );
}
function TableOutput(OrderColumn,AscDsc) {
  var sAgentString = window.navigator.userAgent;

  if ((sAgentString.indexOf("MSIE 6.0") >= 1 ||
       sAgentString.indexOf("MSIE 7.0") >= 1)
      && sAgentString.indexOf("compatible") < 0)
  {
    showTableFilterSearch=false;
  }

  if ( (sAgentString.indexOf("MSIE 6.0") >= 1 ||
        sAgentString.indexOf("MSIE 7.0") >= 1)
       && sAgentString.indexOf("compatible") >= 1 )
  {
    CompatibilityMode = true;
  }

  if ((window.navigator.userAgent.indexOf("MSIE 6.0")>=1
      || window.navigator.userAgent.indexOf("MSIE 7.0")>=1)
      && window.navigator.userAgent.indexOf("compatible")<0) { 
    showTableFilterSearch=false;
  }

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
             "<td class=HeadingCell align=left width=20% style='border-right:0px;'>" +
             "Selected : <span id=selectedCount>" + t.rows.length + "</span></td>" +
             "<td class=HeadingCell align=center style='border-left:0px;border-right:0px'>" +
             document.title + "</td>" +
             "<td class=HeadingCell align=right width=20% style='border-left:0px;'>"
  if (showTableFilterSearch) {
    if (showTableSearch) {
      TableString[TableString.length] = "<input type=text size=12 id=searchAll class='SearchAllTable' " +
             "onfocus='SearchFlag=true;' onblur='SearchFlag=false;' " +
             "onkeyup='onSearchAll(event);' title='Search Table' value='"+SearchAllValue+"' placeholder='Search'>"
    }
    if (showTableFilter) {
      TableString[TableString.length] = "<input type=button class='ButtonIcon FilterPlusIcon' "+
             "onclick='ToggleFilter();' title='Filter Table' value=''>"
    } 
    TableString[TableString.length] = "<input type=button class='ButtonIcon PrinterIcon' "+
             "onclick='SortTablePrint();' title='Print Page' value=''>"+
             "</td></tr></table>"
  }
  else {
    TableString[TableString.length] = "<img src='../images/PrinterIcon.gif' class=ListIcon "+
             "onclick='SortTablePrint();' alt='Print Page' align=right>"+
             "</td></tr></table>"
  }
  TableString[TableString.length] = "<table style=\"table-layout:fixed\"" +
                " border=" + t.Border +
                " cellspacing=" + t.Cellspacing +
                " cellpadding=" + t.Cellpadding +
                " width=" + t.Width +
                " align=" + t.Align + " >";
  TableString[TableString.length] = "<tr height=" + t.HeadingHeight + ">";
  if (printWidth.length==0) {  // Save the widths on the first pass for printing
    for(var i = 0; i < t.columns.length; i++) {
       printWidth[i]=t.columns[i][7] }
  }   
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
  TableString[TableString.length] = "<div id=\"BodyDivision\">";
  TableString[TableString.length] = "<table style=\"table-layout:fixed\" border=" + t.Border +
                 " cellspacing=" + t.Cellspacing +
                 " cellpadding=" + t.Cellpadding +
                 " width=" + t.Width +
                 " align=" + t.Align + " >";
}
function TableBody() {
 RowClass="TableRowEven"
 for(var i = 0; i < t.rows.length; i++) {
  if (TableFilter(t.rows[i])){
   filteredRows++;
   if (RowClass=="TableRowEven") { RowClass="TableRowOdd" }
   else                          { RowClass="TableRowEven" }
   TableString[TableString.length] = "<tr height=" + t.RowHeight + " class=" + RowClass + ">" ;
   for(var j = 0; j < t.columns.length; j++) {

     if (CompatibilityMode) {
       TableString[TableString.length] = "<td align=" + t.columns[j][4];
     } else {
       TableString[TableString.length] = "<td style='padding:0px 5px' align=" +
         t.columns[j][4];
     }

     TableString[TableString.length] = " width=" + t.columns[j][7] + ">" ;
     InsertLinks(t.columns[j],t.rows[i])
     switch(t.columns[j][1]) {
       case "Null" :  
         break;
       case "Date" :  
         TableString[TableString.length] = FormatDate(t.rows[i][t.columns[j][2]]);
         break;
       case "DateTime" :  
         TableString[TableString.length] = FormatDateTime(t.rows[i][t.columns[j][2]]);
         break;
       case "Name" :  
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
       case "ImageText":
         if (t.columns[j][5] == "") {
           ImageString=t.rows[i][t.columns[j][8]];
         }
         else {
           ImageString=t.columns[j][5] +
                       t.rows[i][t.columns[j][8]] + ".gif"
         }

         LinkColumn = t.columns[j][9];
         if (LinkColumn != "") {
           LinkHref = t.rows[i][t.columns[j][9]];
           if (LinkHref != ""){
             TableString[TableString.length] = "<a href=\"" + LinkHref.replace(/\s*$/,"") + "\">"
           }
         }

         FormatIcon();
         TableString[TableString.length] = " "+(t.rows[i][t.columns[j][2]]);
         break;
       default    :   
         TableString[TableString.length] = t.rows[i][t.columns[j][2]];
         break;
     }
     t.rows[i][t.columns[j][2]] 
     TableString[TableString.length] = " &nbsp</td>" ;
     }
   TableString[TableString.length] = "</tr>" ;
   }
  }
}
function TableEnding() {
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

  _setListHeight();

  _setVerticalScrollbar();
}
function _setListHeight() {
  var HeadingSection = document.getElementById('HeadingSection');
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

  if (HeadingSection) {
    var secHeight = HeadingSection.clientHeight || HeadingSection.offsetHeight;
    height -= secHeight;
  }
  else {
    TableLocation.style.top = '0px';
  }

  height -= HeadingDivision.clientHeight;

  // Set the height of the table rows section (<div id=BodyDivision>)
  BodyDivision.style.height = height - 1 + 'px';
}
function _setVerticalScrollbar() {
  var HeadingDivision = document.getElementById('HeadingDivision');
  var BodyDivision    = document.getElementById('BodyDivision');

  // Show the vertical scrollbar accordingly

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

function TableSort(OrderColumn) {
 if ( lastOrderColumn == OrderColumn ) { 
   if (AscDsc==1) {AscDsc=2;} else {AscDsc=1;} }
 else { 
   AscDsc=1; }
 lastOrderColumn=OrderColumn;
 TableOutput(OrderColumn,AscDsc);
}
function FormatPatientIcon(Indicators) {
 ImgString="PatientFolder.gif"
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
 if (Indicators.substr(6,1)==1) { ImgString="PatientFolderPrivate.gif" }
 return ImgString;
 }
//------------------------------------------------------------
// Print Table from Window
//------------------------------------------------------------
function SortTablePrint() {
  printFormat=true;
  SaveHeight=BodyDivision.style.height
  BodyDivision.style.height="auto"
  HeadingDivision.style.overflow = 'hidden';
  BodyDivision.style.overflowY = 'hidden';
  print();
  printFormat=false;
  TableRefresh();
  BodyDivision.style.height=SaveHeight
}
//------------------------------------------------------------
// Dynamic Table Filter Processing
// Called on each row before output.
// Checks Search Name Filter and Column Select Filters
// colFORMATNM = Column Number in the table to search
//------------------------------------------------------------
function TableFilter(el) { 
  if (!isWhitespace(SearchAllValue)) {
    matchValue=false;
    for(var f = 0; f < el.length; f++) {
      // only try to search data table value if it's NOT a link URL
      if (!el[f].match(/pbl?/ig)) {
        if(el[f].toUpperCase().search(SearchAllValue.toUpperCase())>-1) {
          matchValue=true;
        }
      }
    }
    if (!matchValue) return false;
  }
  for(var f = 0; f < SearchValue.length; f++) {
    if (SearchValue[f]!='') {
      if(el[SearchColumn[f]].toUpperCase().search(SearchValue[f])==-1) {
        return false;
      }
    }
  }
  for(var f = 0; f < FilterValue.length; f++) {
    if (FilterValue[f]!='') {
      if (FilterValue[f]!='null') {
        if (FilterValue[f]!=el[FilterColumn[f]]) {
          return false;
        }
      }
      else {
        if (!isWhitespace(el[FilterColumn[f]])) {
          return false;
        }
      }
    }
  }
  return true;
}
//------------------------------------------------------------
// Dynamic Filter Select List onChange Function Call
// Example:
// In Table Initialisation 
// ShowFilter("unitFilter","32");
// In Page HTML
// <select onchange="FilterList(this,'32');" title="Unit" id="unitFilter">
// <option value=''>All Units</option>
// </select>
//------------------------------------------------------------
function onFilterList(el,ColumnNo) {
  for(var f = 0; f < FilterColumn.length; f++) {
    if (FilterColumn[f]==ColumnNo) {
       FilterValue[f]=el.options[el.selectedIndex].value;
    }
  }
  TableRefresh();
}
function onSearchList(e) {
  var delayTime = 150; //delay 0.15 seconds
  if(!e){e = window.event;}
  if (e.srcElement)
    SearchInputField = e.srcElement;
  else if (e.target)
    SearchInputField = e.target;
  else { return; }
  clearTimeout(SearchTimeoutId);
  if (e.keyCode==9) { return; }
  addSearchFilter(SearchInputField);
  if(e.keyCode== 13 || SearchInputField.value.length == 0 ) {
    SearchTimeoutId = setTimeout( function() { TableRefresh(); },delayTime);
    return;
  }
  if(SearchInputField.value.length > 2) {
    if(e.keyCode == 8 || e.keyCode == 46) {
      SearchTimeoutId = setTimeout( function() { TableRefresh(); },delayTime);
      return;
    }
    if(e.keyCode < 32 || (e.keyCode >= 33 && e.keyCode <= 47)||(e.keyCode >= 112 && e.keyCode <= 123)) {
      return;
    }
    SearchTimeoutId = setTimeout( function() { TableRefresh(); },delayTime);
  }
}
function addSearchFilter(el) {
  ColumnNo=el.getAttribute("SearchColumn")
  if (isWhitespace(ColumnNo)) {
    alert("Search Column Attribute Not Valid.");
    return;
  }
  filterAdd=true;
  for(var f = 0; f < SearchColumn.length; f++) {
    if (SearchColumn[f]==ColumnNo) {
      filterAdd=false;
      SearchValue[f]=el.value.toUpperCase();
    }
  }
  if (filterAdd) {
    SearchColumn[SearchColumn.length]=ColumnNo;
    SearchValue[SearchValue.length]=el.value.toUpperCase();
  }
}
function onStatusFilter(el,ColumnNo,MatchValue) {
  addStatusFilter(el,ColumnNo,MatchValue);
  TableOutput(OrderColumn,AscDsc);
}
function addStatusFilter(el,ColumnNo,MatchValue) {
  filterAdd=true;
  for(var f = 0; f < FilterColumn.length; f++) {
    if (FilterColumn[f]==ColumnNo) {
      filterAdd=false;
      if (el.checked) {
        FilterValue[f]=MatchValue;
      }
      else {
        FilterValue[f]="";
      }
    }
  }
  if (filterAdd) {
    FilterColumn[FilterColumn.length]=ColumnNo;
    FilterValue[FilterValue.length]=MatchValue;
  }
}
function FilterHeading() {
  TableString = [];
  TableString[TableString.length] = "<div id=HeadingDivision style='overflow-x:hidden'>"+
             "<table style=\"table-layout:\"" +
             " border=" + t.Border +
             " cellspacing=" + t.Cellspacing +
             " cellpadding=" + t.Cellpadding +
             " width=" + t.Width +
             " align=" + t.Align + " >"+
             "<tr><td class=HeadingCell align=left width=20% style='border-right:0px;'>" +                  
             "Selected : <span id=selectedCount>" + t.rows.length + "</span></td>" +                       
             "<td class=HeadingCell align=center style='border-left:0px;border-right:0px'>" +
             document.title + "</td>" +
             "<td class=HeadingCell align=right width=20% style='border-left:0px;'>" 
  if (showTableFilterSearch) {
    if (showTableSearch) {
      TableString[TableString.length] = "<input type=text size=12 id=searchAll class='SearchAllTable' " +
             "onfocus='SearchFlag=true;' onblur='SearchFlag=false;' " +
             "onkeyup='onSearchAll(event);' title='Search Table' value='"+SearchAllValue+"' placeholder='Search'>"
    }
    if (showTableFilter) {
      TableString[TableString.length] = "<input type=button class='ButtonIcon FilterMinusIcon' "+
             "onclick='ToggleFilter();' title='Sort Table' value=''>"
    }
    TableString[TableString.length] = "<input type=button class='ButtonIcon PrinterIcon' "+
             "onclick='SortTablePrint();' title='Print Page' value=''>"+
             "</td></tr></table>"
  }
  else {
    TableString[TableString.length] = "<img src='../images/PrinterIcon.gif' class=ListIcon "+
             "onclick='SortTablePrint();' alt='Print Page' align=right>"+
             "</td></tr></table>"
  }
  TableString[TableString.length] = "<table style=\"table-layout:fixed\"" +
                " border=" + t.Border +
                " cellspacing=" + t.Cellspacing +
                " cellpadding=" + t.Cellpadding +
                " width=" + t.Width +
                " align=" + t.Align + " >"+
                "<tr height=" + t.HeadingHeight + ">";

  if (printWidth.length==0) {  // Save the widths on the first pass for printing
    for(var i = 0; i < t.columns.length; i++) {
       printWidth[i]=t.columns[i][7] }
  }
  if (isFinite(t.columns[0][7])) {
    TotalWidth=0;
    for(var i = 0; i < t.columns.length; i++) {
       TotalWidth+=parseInt(t.columns[i][7],10) }
    for(var i = 0; i < t.columns.length; i++) {
       t.columns[i][7]=(Math.round(1000*(parseInt(t.columns[i][7],10)/TotalWidth))/10)+'%' }
  }

  for(var i = 0; i < t.columns.length; i++) {
    var selectName=trim(t.columns[i][0]);
    if (selectName.substr(selectName.length-1,1)!='s') selectName+='s';
    if (printFormat) t.columns[i][7]=printWidth[i];
    TableString[TableString.length] = "<td class=HeadingCell align=" + t.columns[i][4] + 
                   " width=" + t.columns[i][7] + " >" ;
    if (t.columns[i][3] == -1) {
      if (OrderColumn == i) { TableString[TableString.length] = "<b>" }
      TableString[TableString.length] = t.columns[i][0] + "</td>"; 
    }
    else {
      TableString[TableString.length] = "<select class=TableFilter id='Filter"+i+
                   "' onchange='onFilterList(this,\"" + t.columns[i][2] + "\");'>" + 
                   "<option value=''>All "+selectName+"</option></select></td>"
    }
  }
  TableString[TableString.length] = "</tr></table></div>" +
    "<div id=BodyDivision style='overflow-x:hidden'>" +
    "<table style=\"table-layout:fixed\" border=" + t.Border +
    " cellspacing=" + t.Cellspacing + " cellpadding=" + t.Cellpadding +
    " width=" + t.Width + " align=" + t.Align + " >";
}
function FilterEnding() {
  for(var i = 0; i < t.columns.length; i++) {
    if (t.columns[i][3] != -1) {
     ShowFilter('Filter'+i,t.columns[i][2]);
    }
  }
}
function ToggleFilter() {
  if (filterToggle==0) { filterToggle=1; }
  else { 
   filterToggle=0; 
   for(var i = 0; i < FilterValue.length; i++) {
     FilterValue[i]='';
   }
  }
  TableRefresh();
}
//------------------------------------------------------------
// Dynamic Filter Select List based on Unique Column Values
//------------------------------------------------------------
function ShowFilter(FilterName,ColumnNo) {
 var FilterList = new Array();
 FilterIndex=FilterColumn.length;
 for(var i = 0; i < FilterColumn.length; i++) {
   if (FilterColumn[i]==ColumnNo) FilterIndex=i;
 }
 FilterColumn[FilterIndex]=ColumnNo;
 if (FilterColumn.length>FilterValue.length) FilterValue[FilterValue.length]='';
 BlankColumns=false;
 for(var i = 0; i < t.rows.length; i++) {
   if (!isWhitespace(t.rows[i][ColumnNo].replace(RemoveHTMLTags,"").replace(/&nbsp;/gi,""))) {
     addItem=true;
     for(var j = 0; j < FilterList.length; j++) {
       if (t.rows[i][ColumnNo]==FilterList[j]) addItem=false;
     }
     if (addItem) FilterList[FilterList.length]=t.rows[i][ColumnNo];
   }
  else {
    BlankColumns=true;
  }
 }
 FilterList.sort();
 el=document.getElementById(FilterName)
 selectIndex=0;
 columnType="";
 for(var i = 0; i < t.columns.length; i++) {
   if (t.columns[i][2]==ColumnNo) columnType=t.columns[i][1]
 }
 if (el.options.length>1) el.options.length=1;
 for(var j = 0; j < FilterList.length; j++) {
   if (FilterList[j]==FilterValue[FilterIndex]) selectIndex=el.options.length;
   switch(columnType) {
     case "DateTime" :  
       nameVal= FormatDateTime(FilterList[j]);break;
     case "Date":
       nameVal= FormatDate(FilterList[j]);break;
     case "DateTimeImg" :
       nameVal= FormatDateTime(FilterList[j]);break;
     case "Time" :  
       nameVal= FormatTime(FilterList[j]);break;
     default:
       nameVal= FilterList[j].replace(RemoveHTMLTags,"").replace(/&nbsp;/gi,"")
   }
   el.options[el.options.length] = new Option(nameVal,FilterList[j]);
 }
 if (BlankColumns) {
   if (FilterValue[FilterIndex]=="null") selectIndex=el.options.length;
   el.options[el.options.length] = new Option("<blank>","null")
 }
 el.selectedIndex=selectIndex;
}
function onSearchAll(e) {
  var delayTime = 250; //delay 0.15 seconds
  SearchAllFlag=true;
  if(!e){e = window.event;}
  if (e.srcElement)
    SearchInputField = e.srcElement;
  else if (e.target)
    SearchInputField = e.target;
  else { return; }
  clearTimeout(SearchTimeoutId);
  if (e.keyCode==9) { return; }
  SearchAllValue=SearchInputField.value;
  if(e.keyCode== 13 || SearchInputField.value.length == 0 ) {
    SearchTimeoutId = setTimeout( function() { TableRefresh(); },delayTime);
    return;
  }
  if(SearchInputField.value.length > 2) {
    if(e.keyCode == 8 || e.keyCode == 46) {
      SearchTimeoutId = setTimeout( function() { TableRefresh(); },delayTime);
      return;
    }
    if(e.keyCode < 32 || (e.keyCode >= 33 && e.keyCode <= 47)||(e.keyCode >= 112 && e.keyCode <= 123)) {
      return;
    }
    SearchTimeoutId = setTimeout( function() { TableRefresh(); },delayTime);
  }
}
function TableRefresh() {
  if (t.rows.length != 0 ) {
    if (filterToggle==0) {
      TableHeading(printOrder);
    }
    else {
      FilterHeading();
    }
    TableBody();
    TableEnding();
    if (filterToggle==1) { FilterEnding(); }
  }
  else {
    TableHeading(printOrder);
    TableEnding();
  }

  if (SearchAllFlag) {
    // set focus on search field
    window.setTimeout(function() {
      var el = document.getElementById("searchAll");
      if (el) {
        el.focus();
        el.value = el.value;
        SetCaretPosition("searchAll", -1);  // set cursor at end of input value
      }
    }, 1000);
  }
}

