//jsVersion  : V11.03.00
//------------------------------------------------------------
// Function : TableSort1.js
//------------------------------------------------------------
var documentTitle2 ="";
var showTableFilterSearch1 = true;
var showTableFilter1 = true;     /* Show Filters Icon */
var showTablePrint1 = true;      /* Show Print Icon */
var showTableSearch1 = true;     /* Show Seach */
var sortTableHeading1 = ""       /* set Table Heading document.title if blank */
var scrollTableBody1 = true;     /* set option to scroll table body */
var filterClickMethod1 = false;
var printOrder1;
var printFormat1=false;
var printWidth1 = new Array();
var FilterColumn1 = new Array();
var FilterValue1 = new Array();
var SearchInputField1 = null;
var SearchTimeoutId1 = null;
var SearchColumn1 = new Array();
var SearchValue1 = new Array();
var filterToggle1=0;
var OrderColumn1;
var SearchAllValue1="";
var SearchAllFlag1=false;
var AscDsc1;
var filteredRows1=0;
var CompatibilityMode1 = false;  // Browser Compatibility Mode

function Table1(Border,Cellspacing,Cellpadding,Width,Align,HHeight,RHeight) {
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
   this.sortTable = _sortTable1;
   this.tableTotals = new Array();
   this.addTotal = _addTableTotal1;
   AscDsc1=1
}
function _addTableTotal1() {
  for(var i = 0; i < arguments.length; i++)
     this.tableTotals[i] = arguments[i];
}
function _sortTable1(Column,AscDsc1) {
  SortOrderBy = t1.columns[Column][3]
  if (AscDsc1 == 1) {
    switch(t1.columns[Column][1]) {
      case "Date"      :  t1.rows.sort(NumericSort); break;
      case "DateTime"  :  t1.rows.sort(StringSort); break;
      case "DateTimeImg": t1.rows.sort(StringSort); break;
      case "ImageText" :  t1.rows.sort(StringSort); break;
      case "Time"      :  t1.rows.sort(StringSort); break;
      case "Number"    :  t1.rows.sort(NumericSort); break;
      case "MaxLimit"  :  t1.rows.sort(NumericSort); break;
      case "MinLimit"  :  t1.rows.sort(NumericSort); break;
      case "Graph"     :  t1.rows.sort(NumericSort); break;
      case "Name"      :  t1.rows.sort(StringSort); break;
      case "NameAll"   :  t1.rows.sort(StringSort); break;
      case "Image"     :  t1.rows.sort(StringSort); break;
      case "IconLink"  :  t1.rows.sort(StringSort); break;
      case "String"    :  t1.rows.sort(StringSort); break;
      case "Patient"   :  t1.rows.sort(StringSort); break;
    }
  }
  else {
    switch(t1.columns[Column][1]) {
      case "Date"      :  t1.rows.sort(RevNumericSort); break;
      case "DateTime"  :  t1.rows.sort(RevStringSort); break;
      case "DateTimeImg": t1.rows.sort(RevStringSort); break;
      case "ImageText" :  t1.rows.sort(RevStringSort); break;
      case "Time"      :  t1.rows.sort(RevStringSort); break;
      case "Number"    :  t1.rows.sort(RevNumericSort); break;
      case "MaxLimit"  :  t1.rows.sort(RevNumericSort); break;
      case "MinLimit"  :  t1.rows.sort(RevNumericSort); break;
      case "Graph"     :  t1.rows.sort(RevNumericSort); break;
      case "Name"      :  t1.rows.sort(RevStringSort); break;
      case "NameAll"   :  t1.rows.sort(RevStringSort); break;
      case "Image"     :  t1.rows.sort(RevStringSort); break;
      case "IconLink"  :  t1.rows.sort(RevStringSort); break;
      case "String"    :  t1.rows.sort(RevStringSort); break;
      case "Patient"   :  t1.rows.sort(RevStringSort); break;
    }
  }
}
function TableBody1() {
 filteredRows1=0;
 RowClass="TableRowEven"
 for(var i = 0; i < t1.rows.length; i++) {
  if (TableFilter1(t1.rows[i])){
   filteredRows1++;
   if (RowClass=="TableRowEven") { RowClass="TableRowOdd" }
   else                          { RowClass="TableRowEven" }
   TableString1[TableString1.length] = "<tr id='row1_"+i+"' height=" + t1.RowHeight + " class=" + RowClass + ">" ;
   for(var j = 0; j < t1.columns.length; j++) {
     if (CompatibilityMode1) {
       TableString1[TableString1.length] = "<td align=" + t1.columns[j][4];
     } else {
       TableString1[TableString1.length] = "<td style='padding:0px 5px' align=" + t1.columns[j][4];
     }

     if(t1.columns[j][11]!=undefined) {
       if(!isWhitespace(t1.rows[i][t1.columns[j][11]])) {
         TableString1[TableString1.length] = " class=" +
                                           t1.rows[i][t1.columns[j][11]]  ;
       }
     }
     if(t1.columns[j][12]!=undefined) {
       if(!isWhitespace(t1.rows[i][t1.columns[j][12]])) {
         TableString1[TableString1.length] = " title=" +
                         t1.rows[i][t1.columns[j][12]].replace(/ /g,"&nbsp;");
       }
     }
     TableString1[TableString1.length] = " width=" + t1.columns[j][7] + ">" ;
     LinkColumn = t1.columns[j][6];
     LinkFlag = 0
     ImgString = t1.columns[j][5];
     onmouseind = t1.columns[j][10];
     if (LinkColumn != "") {
       LinkHref = t1.rows[i][t1.columns[j][6]];
       if (LinkHref != ""){
         TableString1[TableString1.length] = "<a href=\"" +
                                           LinkHref.replace(/\s*$/,"") + "\">"
         LinkFlag = 1 }
     }
     switch(t1.columns[j][1]) {
       case "MaxLimit" :
         FormatIcon1(i);
         ThisValue=t1.rows[i][t1.columns[j][2]];
         MaxValue=t1.columns[j][8];
         HighLightColor=t1.columns[j][9];
         if (ThisValue>MaxValue) {
            TableString1[TableString1.length] = "<font color="+HighLightColor+"><b>"
            TableString1[TableString1.length] = t1.rows[i][t1.columns[j][2]];
            TableString1[TableString1.length] = "</font><b>" }
         else {
            TableString1[TableString1.length] = t1.rows[i][t1.columns[j][2]]; }
         if ( LinkFlag ) { TableString1[TableString1.length] = "</a>"; }
         break;
       case "MinLimit" :
         FormatIcon1(i);
         ThisValue=t1.rows[i][t1.columns[j][2]];
         MaxValue=t1.columns[j][8];
         HighLightColor=t1.columns[j][9];
         if (ThisValue<MaxValue) {
            TableString1[TableString1.length] = "<font color=" +
                                              HighLightColor+"><b>"
            TableString1[TableString1.length] = t1.rows[i][t1.columns[j][2]];
            TableString1[TableString1.length] = "</font><b>" }
         else {
            TableString1[TableString1.length] = t1.rows[i][t1.columns[j][2]]; }
         if ( LinkFlag ) { TableString1[TableString1.length] = "</a>"; }
         break;
       case "Date" :
         FormatIcon1(i);
         TableString1[TableString1.length] = FormatDate(t1.rows[i][t1.columns[j][2]]);
         break;
       case "DateTime" :
         FormatIcon1(i);
         TableString1[TableString1.length] = FormatDateTime(t1.rows[i][t1.columns[j][2]]);
         break;
       case "DateTimeImg" :
         if (t1.columns[j][5] == "") {
           ImgString=t1.rows[i][t1.columns[j][8]];
         }
         else {
           ImgString=t1.columns[j][5] +
                       t1.rows[i][t1.columns[j][8]] + ".gif"
         }
         FormatIcon1(i);
         TableString1[TableString1.length] = FormatDateTime(t1.rows[i][t1.columns[j][2]]);
         break;
       case "Time" :
         FormatIcon1(i);
         TableString1[TableString1.length] = FormatTime(t1.rows[i][t1.columns[j][2]]);
         break;
       case "Name" :
         FormatIcon1(i);
         TableString1[TableString1.length] = FormatName(t1.rows[i][t1.columns[j][2]]);
         break;
       case "ImageText" :
         if (t1.columns[j][5] == "") {
           ImgString=t1.rows[i][t1.columns[j][8]];
         }
         else {
           ImgString=t1.columns[j][5] +
                       t1.rows[i][t1.columns[j][8]] + ".gif"
         }
         FormatIcon1(i);
         TableString1[TableString1.length] = (t1.rows[i][t1.columns[j][2]]);
         break;
       case "NameAll" :
         FormatIcon1(i);
         TableString1[TableString1.length] = FormatNameAll(t1.rows[i][t1.columns[j][2]]);
         break;
       case "Graph":
         TableString1[TableString1.length] = FormatGraph(t1.rows[i][t1.columns[j][2]],t1.columns[j][5]);
         break;
       case "IconLink":
         FormatIcon1(i);
         break;
       case "Image":
         if (t1.columns[j][5] == "") {
           ImageString=t1.rows[i][t1.columns[j][2]];
         }
         else {
           ImageString=t1.columns[j][5] + t1.rows[i][t1.columns[j][2]] + ".gif"
         }
         TableString1[TableString1.length] = FormatImage(ImageString);
         break;
       case "Patient":
         FormatPatientIcon(t1.rows[i][t1.columns[j][8]])
         TableString1[TableString1.length] = t1.rows[i][t1.columns[j][2]];
         if ( LinkFlag ) { TableString1[TableString1.length] = "</a>"; }
         break;
       default    :
         FormatIcon1(i);
         TableString1[TableString1.length] = t1.rows[i][t1.columns[j][2]];
         if ( LinkFlag ) { TableString1[TableString1.length] = "</a>"; }
         break;
     }
     if (isWhitespace(t1.rows[i][t1.columns[j][2]])) {
       TableString1[TableString1.length] = "&nbsp;" }
     TableString1[TableString1.length] = "</td>" ;
     }
   TableString1[TableString1.length] = "</tr>" ;
   }
  }
}
function FormatIcon1(i) {
  if (ImgString != "" ) {
    TableString1[TableString1.length] = "<img src=\"../images/" + ImgString +
                                        "\" border=0 hspace=4 align=absmiddle ";

    if (typeof onmouseind != "undefined" &&
        !isWhitespace(t1.rows[i][onmouseind])) {
      TableString1[TableString1.length] = " onMouseOver=" + t1.rows[i][onmouseind];
      TableString1[TableString1.length] = " onMouseOut=hide_HoverData();";
    }

    TableString1[TableString1.length] = ">";

    if (LinkFlag ) {
      LinkFlag = 0;
      TableString1[TableString1.length] = "</a>" ;
    }
  }
}
function TableHeading1(OrderColumn) {
  TableString1 = [];
  TableString1[TableString1.length] = '<div id=HeadingDivision1 >';
  TableString1[TableString1.length] = "<table style=\"table-layout:fixed\"" +
                 " border=" + t1.Border +
                 " cellspacing=" + t1.Cellspacing +
                 " cellpadding=" + t1.Cellpadding +
                 " width=" + t1.Width +
                 " align=" + t1.Align + " >";

  TableString1[TableString1.length] = "<tr>" +
             "<td class=HeadingCell align=left width=20% style='border-right:0px;height:30px'>" +
             "Selected : <span id=selectedCount1>" + t1.rows.length + "</span></td>" +

             "<td class=HeadingCell align=center style='border-left:0px;border-right:0px'>" +
             documentTitle2 + "</td>" +
             "<td class=HeadingCell align=right width=20% style='border-left:0px;'>"

  if (showTableFilterSearch1) {
    if (showTableSearch1) {
      TableString1[TableString1.length] = "<input type=text size=12 id=searchAll1 class='SearchAllTable' " +
             "onfocus='SearchFlag1=true;' onblur='SearchFlag1=false;' " +
             "onkeyup='onSearchAll1(event);' title='Search Table 2' value='"+SearchAllValue1+"' placeholder='Search'>";
    }
    if (showTableFilter1) {
      TableString1[TableString1.length] = "<input type=button class='ButtonIcon FilterPlusIcon' "+
             "onclick='ToggleFilter1();' title='Filter Table 2' value=''>";
    }
    if (showTablePrint1) {
      TableString1[TableString1.length] = "<input type=button class='ButtonIcon PrinterIcon' "+
             "onclick='SortTablePrint1();' title='Print Page 2' value=''>";
    }
    TableString1[TableString1.length] = "</td></tr></table>"
  }
  else {
    if (showTablePrint1) {
      TableString1[TableString1.length] = "<img src='../images/PrinterIcon.gif' class=ListIcon "+
             "onclick='SortTablePrint1();' alt='Print Page 2' align=right>";
    }
    TableString1[TableString1.length] = "</td></tr></table>"
  }

  TableString1[TableString1.length] = "<table style=\"table-layout:fixed\"" +
                " border=" + t1.Border +
                " cellspacing=" + t1.Cellspacing +
                " cellpadding=" + t1.Cellpadding +
                " width=" + t1.Width +
                " align=" + t1.Align + " >";
  TableString1[TableString1.length] = "<tr height=" + t1.HeadingHeight + ">";
  for(var i = 0; i < t1.columns.length; i++) {

    TableString1[TableString1.length] = "<td class=HeadingCell align=" + t1.columns[i][4] +
                   " width=" + t1.columns[i][7] + " >" ;
    if (t1.columns[i][3] == -1) {
      if (OrderColumn == i) { TableString1[TableString1.length] = "<b>" }
      TableString1[TableString1.length] = t1.columns[i][0] + "</td>"; }
    else {
      TableString1[TableString1.length] = "<a href='javascript:onClick=TableSort1(" + i + ")'>";
      if (OrderColumn == i) { TableString1[TableString1.length] = "<b>" }
      TableString1[TableString1.length] = t1.columns[i][0] + "</a></td>"; }
  }
  TableString1[TableString1.length] = "</tr>";
  TableString1[TableString1.length] = "</table>";
  TableString1[TableString1.length] = "</div>";
  TableString1[TableString1.length] = '<div id=BodyDivision1>'
  TableString1[TableString1.length] = "<table style=\"table-layout:fixed\" border=" + t1.Border +
                 " cellspacing=" + t1.Cellspacing +
                 " cellpadding=" + t1.Cellpadding +
                 " width=" + t1.Width +
                 " align=" + t1.Align + " >";
}

function TableSort1(OrderColumn) {
 if ( lastOrderColumn == OrderColumn ) { 
   if (AscDsc1==1) {AscDsc1=2;} else {AscDsc1=1;} }
 else { 
   AscDsc1=1; }
 TableOutput1(OrderColumn,AscDsc1);
}
function TableOutput1(OrderColumn,AscDsc1) {
  var sAgentString = window.navigator.userAgent;

  if ((sAgentString.indexOf("MSIE 6.0") >= 1 ||
       sAgentString.indexOf("MSIE 7.0") >= 1)
      && sAgentString.indexOf("compatible") < 0)
  {
    showTableFilter1Search=false;
  }

  if ( (sAgentString.indexOf("MSIE 6.0") >= 1 ||
        sAgentString.indexOf("MSIE 7.0") >= 1)
       && sAgentString.indexOf("compatible") >= 1 )
  {
    CompatibilityMode1 = true;
  }

  lastOrderColumn=OrderColumn;
  if (t1.rows.length != 0 ) {
    t1.sortTable(OrderColumn,AscDsc1);
    TableHeading1(OrderColumn);
    TableBody1();
    if (t1.tableTotals.length != 0 ) {
      TableTotals1(); 
    }
    TableEnding1();
  }
  else {
   TableHeading1(OrderColumn);
   TableEnding1();
  }
}
function TableEnding1()
{
  TableString1[TableString1.length] = "</table></div>";

  // The following are defined in the html
  var HeadingSection = document.getElementById('HeadingSection');
  var TableLocation1 = document.getElementById('TableLocation1');


  // unload the array into continuous html render
  if (TableString1.join) // if join method is available;
  {
    TableLocation1.innerHTML = TableString1.join("");
  }
  else
  {
    var TableStringX1="";
    for (i=0;i < TableString1.length; i++)
    {
       TableStringX1+=TableString1[i];
    }
    TableLocation1.innerHTML = TableStringX1;
  }

  // The following are defined in the code we just rendered
  var HeadingDivision1 = document.getElementById('HeadingDivision1');
  var BodyDivision1    = document.getElementById('BodyDivision1');

  if (!scrollTableBody1) {
     HeadingDivision1.style.overflow="auto";
     BodyDivision1.style.overflow="visible";
     BodyDivision1.style.height="";
     return;
  }

  // calculate the available table height based on the view frame height
  var height = document.body.clientHeight;  // view frame height

  if (window.navigator.userAgent.indexOf("MSIE") >= 1) {
    // Since clientHeight in IE8 returns space available excluding
    // the DFrame title bar (<span>), we need to take that into account.
    if (document.getElementById('DFrameTitleBar') != undefined) {
      height -= document.getElementById('DFrameTitleBar').clientHeight;
    }
  }

  var secHeight = 0;

  if (HeadingSection) {
    secHeight = HeadingSection.clientHeight || HeadingSection.offsetHeight;
  }
  else {
    TableLocation1.style.top = '0px';
  }

  //
  // Set the height of the table rows section (i.e. <div id=BodyDivision>)
  //
  if (TableLocation1.offsetTop > 0) {  // TableLocation1 is not at the top
    // We need a slight delay here to allow time for the browser to render
    // the contents above 'TableLocation1' before we can resize 'BodyDivision'
    // accurately.
    window.setTimeout(SetListHeight1, 500);
  }
  else {
    BodyDivision1.style.height = height - secHeight - HeadingDivision1.clientHeight - 2 + 'px';

    SetVerticalScrollbar1();
  }
}
function SetListHeight1() {
  var TableLocation1 = document.getElementById('TableLocation1');
  var HeadingDivision1 = document.getElementById('HeadingDivision1');
  var BodyDivision1 = document.getElementById('BodyDivision1');

  var height = document.body.clientHeight;
  var listHeight = height - TableLocation1.offsetTop - HeadingDivision1.offsetHeight - 2;

  if (listHeight > 0) {
    BodyDivision1.style.height = listHeight + "px";
  }

  SetVerticalScrollbar1();
}
function SetVerticalScrollbar1() {
  var HeadingDivision1 = document.getElementById('HeadingDivision1');
  var BodyDivision1    = document.getElementById('BodyDivision1');

  // Show the vertical scrollbar accordingly
  if (BodyDivision1.scrollHeight > BodyDivision1.clientHeight) {
    // List overflows (i.e. vertical scrollbar visible)
    HeadingDivision1.style.overflowY = 'scroll';  // force vertical scrollbar
                                                 // on list heading section
  }
  else {
    // List does NOT overflow (i.e. no vertical scrollbar in BodyDivision)
    if (window.navigator.userAgent.indexOf("MSIE 7.0") >= 1) {
      // Since IE 8 will always show the vertical scrollbar for the BodyDivision
      // (even when scrolling is not needed) we need to also show the
      // vertical scrollbar for HeadingDivision so columns line up.
      HeadingDivision1.style.overflowY = 'scroll';
    }
    else {
      HeadingDivision1.style.overflowY = 'hidden';
    }
  }
}
function TableTotals1() {
TableString1[TableString1.length] = "<tr height=" + t1.RowHeight + " class=TableRowTotal>" ;
   for(var j = 0; j < t1.columns.length; j++) {
     TableString1[TableString1.length] = "<td align=" + t1.columns[j][4] ;
     TableString1[TableString1.length] = " width=" + t1.columns[j][7] + "><b>" ;
     LinkType = t1.columns[j][8];
     LinkColumn = t1.columns[j][6];
     LinkFlag = 0
     ImgString = t1.columns[j][5];
     if (LinkColumn != "") {
      LinkHref = t1.tableTotals[t1.columns[j][6]];
      if (LinkHref != ""){
       if (LinkType == "1") {
        TableString1[TableString1.length] = "<a href='javascript:PopUpWin(\"" + LinkHref + "\")'>"  }
       else {
        TableString1[TableString1.length] = "<a href=" + LinkHref.replace(/\s*$/,"") + ">"  }
       LinkFlag = 1 }
     }
     switch(t1.columns[j][1]) {
       case "Date" :
         FormatIcon1();
         TableString1[TableString1.length] = FormatDate(t1.tableTotals[t1.columns[j][2]]);
         break;
       case "DateTime" :
         FormatIcon1();
         TableString1[TableString1.length] = FormatDateTime(t1.tableTotals[t1.columns[j][2]]);
         break;
       case "DateTimeImg" :
         if (t1.columns[j][5] == "") {
           ImgString=t1.rows[i][t1.columns[j][8]];
         }
         else {
           ImgString=t1.columns[j][5] +
                       t1.rows[i][t1.columns[j][8]] + ".gif"
         }
         if ( LinkFlag ) { TableString1[TableString1.length] = "</a>"; }
         FormatIcon1();
         TableString1[TableString1.length] = FormatDateTime(t1.rows[i][t1.columns[j][2]]);
         break;
       case "ImageText" :
         if (t1.columns[j][5] == "") {
           ImgString=t1.rows[i][t1.columns[j][8]];
         }
         else {
           ImgString=t1.columns[j][5] +
                       t1.rows[i][t1.columns[j][8]] + ".gif"
         }
         if ( LinkFlag ) { TableString1[TableString1.length] = "</a>"; }
         FormatIcon1();
         TableString1[TableString1.length] = (t1.rows[i][t1.columns[j][2]]);
         break;
       case "Time" :
         FormatIcon1();
         TableString1[TableString1.length] = FormatTime(t1.tableTotals[t1.columns[j][2]]);
         break;
       case "Name" :
         FormatIcon1();
         TableString1[TableString1.length] = FormatName(t1.tableTotals[t1.columns[j][2]]);
         break;
       case "NameAll" :
         FormatIcon1();
         TableString1[TableString1.length] = FormatNameAll(t1.tableTotals[t1.columns[j][2]]);
         break;
       case "Graph":
         TableString1[TableString1.length] = FormatGraph(t1.tableTotals[t1.columns[j][2]],t1.columns[j][5]);
         break;
       case "Image":
         if (t1.columns[j][5] == "") {
           ImageString=t1.tableTotals[t1.columns[j][2]];
         }
         else {
           ImageString=t1.columns[j][5] +
                       t1.tableTotals[t1.columns[j][2]] + ".gif"
         }
         TableString1[TableString1.length] = FormatImage(ImageString);
         break;
       default    :
         FormatIcon1();
         TableString1[TableString1.length] = t1.tableTotals[t1.columns[j][2]];
         if ( LinkFlag == "1" ) { TableString1[TableString1.length] = "</a>"; }
         break;
     }
     t1.tableTotals[t1.columns[j][2]]
     TableString1[TableString1.length] = "</td>" ;
     }
   TableString1[TableString1.length] = "</tr>" ;
}
function TableRefresh1() {
  if (t1.rows.length != 0 ) {
    if (filterToggle1==0) {
      TableHeading1(printOrder1);
    }
    else {
      FilterHeading1();
    }
    TableBody1();
    if (t1.tableTotals.length != 0 ) { TableTotals1(); }
    TableEnding1();
    if (filterToggle1==1) { FilterEnding1(); }
  }
  else {
    TableHeading1(printOrder1);
    TableEnding1();
  }

  if (SearchAllFlag1) {
    // set focus on search field
    window.setTimeout(function() {
      var el = document.getElementById("searchAll1");
      if (el) {
        el.focus();
        el.value = el.value;
        SetCaretPosition("searchAll1", -1);  // set cursor at end of input value
      }
    }, 1000);
  }
//  if (t1.rows.length != 0 ) {
//    TableHeading1(printOrder);
//    TableBody1();
//    if (t1.tableTotals.length != 0 ) { TableTotals1(); }
//    TableEnding1();
//  }
//  else {
//    TableHeading1(printOrder);
//    TableEnding1();
//  }
}
//=============================================================
// Custom Sort Table Print Preview
//=============================================================
function SortTablePrint1() {
 if (TableSortPrintPreview) {
//
   var OLECMDID = 7;
   if (navigator.appName == "Microsoft Internet Explorer") {
     var PROMPT = 1;
     var WebBrowser = '<OBJECT ID="WebBrowser1" WIDTH=0 HEIGHT=0 CLASSID="CLSID:8856F961-340A-11D0-A96B-00C04FD705A2"></OBJECT>';
     document.body.insertAdjacentHTML('beforeEnd', WebBrowser);
     WebBrowser1.ExecWB(OLECMDID, PROMPT);
     WebBrowser1.outerHTML = "";
   }
   else { print();
   }
//
 }
 else {
   printFormat=true;
   TableRefresh();
   TableRefresh1();
   var HeadingDivision1 = document.getElementById('HeadingDivision1');
   HeadingDivision1.style.overflow = 'hidden';
   HeadingDivision1.style.overflowY = 'hidden';
   print();
   printFormat=false;
   TableRefresh();
   TableRefresh1();
 }
}
//------------------------------------------------------------
// Dynamic Table Filter Processing
// Called on each row before output.
// Checks Search Name Filter and Column Select Filters
// colFORMATNM = Column Number in the table to search
//------------------------------------------------------------
function TableFilter1(el) {
  if (!isWhitespace(SearchAllValue1)) {
    matchValue=false;
    for(var f = 0; f < el.length; f++) {
      // only try to search data table value if it's NOT a link URL
      if (!el[f].match(/pbl?/ig)) {
        if(el[f].toUpperCase().search(SearchAllValue1.toUpperCase())>-1) {
          matchValue=true;
        }
      }
    }
    if (!matchValue) return false;
  }
  for(var f = 0; f < SearchValue1.length; f++) {
    if (SearchValue1[f]!='') {
      if(el[SearchColumn1[f]].toUpperCase().search(SearchValue1[f])==-1) {
        return false;
      }
    }
  }
  for(var f = 0; f < FilterValue1.length; f++) {
    if (FilterValue1[f]!='') {
      if (FilterValue1[f]!='null') {
        if (el[FilterColumn1[f]].match(/\<input.*checkbox/gi)) {
          if (el[FilterColumn1[f]].match(/\<input.*checked/gi)) {
            colStr="Checked";
          } else {
            colStr="Unchecked";
          }
          if (FilterValue1[f]!=colStr) return false;
        } else {
          if (FilterValue1[f]!=
              el[FilterColumn1[f]].replace(RemoveHTMLTags,"")
                                 .replace(/&nbsp;/gi,"")) {
            return false;
          }
        }
      } else {
        if (!isWhitespace(el[FilterColumn1[f]])) {
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
// ShowFilter1("unitFilter","32");
// In Page HTML
// <select onchange="FilterList(this,'32');" title="Unit" id="unitFilter">
// <option value=''>All Units</option>
// </select>
//------------------------------------------------------------
function onFilterList1(el,ColumnNo) {
  for(var f = 0; f < FilterColumn1.length; f++) {
    if (FilterColumn1[f]==ColumnNo) {
       FilterValue1[f]=el.options[el.selectedIndex].value;
    }
  }
  TableRefresh1();
}
function onSearchList1(e) {
  var delayTime = 150; //delay 0.15 seconds
  if(!e){e = window.event;}
  if (e.srcElement)
    SearchInputField1 = e.srcElement;
  else if (e.target)
    SearchInputField1 = e.target;
  else { return; }
  clearTimeout(SearchTimeoutId1);
  if (e.keyCode==9) { return; }
  addSearchFilter1(SearchInputField1);
  if(e.keyCode== 13 || SearchInputField1.value.length == 0 ) {
    SearchTimeoutId1 = setTimeout( function() { TableRefresh1(); },delayTime);
    return;
  }
  if(SearchInputField1.value.length > 2) {
    if(e.keyCode == 8 || e.keyCode == 46) {
      SearchTimeoutId1 = setTimeout( function() { TableRefresh1(); },delayTime);
      return;
    }
    if(e.keyCode < 32 || (e.keyCode >= 33 && e.keyCode <= 47)||(e.keyCode >= 112 && e.keyCode <= 123)) {
      return;
    }
    SearchTimeoutId1 = setTimeout( function() { TableRefresh1(); },delayTime);
  }
}
function addSearchFilter1(el) {
  ColumnNo=el.getAttribute("SearchColumn1")
  if (isWhitespace(ColumnNo)) {
    alert("Search Column Attribute Not Valid.");
    return;
  }
  filterAdd=true;
  for(var f = 0; f < SearchColumn1.length; f++) {
    if (SearchColumn1[f]==ColumnNo) {
      filterAdd=false;
      SearchValue1[f]=el.value.toUpperCase();
    }
  }
  if (filterAdd1) {
    SearchColumn1[SearchColumn1.length]=ColumnNo;
    SearchValue1[SearchValue1.length]=el.value.toUpperCase();
  }
}
function FilterHeading1() {
  TableString1 = [];
  TableString1[TableString1.length] = '<div id=HeadingDivision1>'+
             "<table style=\"table-layout:fixed\"" +
             " border=" + t1.Border +
             " cellspacing=" + t1.Cellspacing +
             " cellpadding=" + t1.Cellpadding +
             " width=" + t1.Width +
             " align=" + t1.Align + " >"+
             "<tr><td class=HeadingCell align=left width=20% style='border-right:0px;height:30px'>" +
             "Selected : <span id=selectedCount1>" + t1.rows.length + "</span></td>" +
             "<td class=HeadingCell align=center style='border-left:0px;border-right:0px'>" +
             documentTitle2 + "</td>" +
             "<td class=HeadingCell align=right width=20% style='border-left:0px;'>"
  if (showTableFilterSearch1) {
    if (showTableSearch1) {
      TableString1[TableString1.length] = "<input type=text size=12 id=searchAll1 class='SearchAllTable' " +
             "onfocus='SearchFlag1=true;' onblur='SearchFlag1=false;' " +
             "onkeyup='onSearchAll1(event);' title='Search Table 2' value='"+SearchAllValue1+"' placeholder='Search'>";
    }
    if (showTableFilter1) {
      TableString1[TableString1.length] = "<input type=button class='ButtonIcon FilterMinusIcon' "+
             "onclick='ToggleFilter1();' title='Sort Table 2' value=''>"
    }
    TableString1[TableString1.length] = "<input type=button class='ButtonIcon PrinterIcon' "+
             "onclick='SortTablePrint1();' title='Print Page 2' value=''>"+
             "</td></tr></table>"
  }
  else {
    TableString1[TableString1.length] = "<img src='../images/PrinterIcon.gif' class=ListIcon "+
             "onclick='SortTablePrint1();' alt='Print Page 2' align=right>"+
             "</td></tr></table>"
  }
  TableString1[TableString1.length] = "<table style=\"table-layout:fixed\"" +
                " border=" + t1.Border +
                " cellspacing=" + t.Cellspacing +
                " cellpadding=" + t.Cellpadding +
                " width=" + t1.Width +
                " align=" + t1.Align + " >"+
                "<tr height=" + t1.HeadingHeight + ">";

  if (printWidth1.length==0) {  // Save the widths on the first pass for printing
    for(var i = 0; i < t1.columns.length; i++) {
       printWidth1[i]=t1.columns[i][7] }
  }
  if (isFinite(t1.columns[0][7])) {
    TotalWidth1=0;
    for(var i = 0; i < t1.columns.length; i++) {
       TotalWidth1+=parseInt(t1.columns[i][7],10) }
    for(var i = 0; i < t1.columns.length; i++) {
       t1.columns[i][7]=(Math.round(1000*(parseInt(t1.columns[i][7],10)/TotalWidth1))/10)+'%' }
  }

  for(var i = 0; i < t1.columns.length; i++) {
    var selectName1=trim(t1.columns[i][0]);
    if (selectName1.substr(selectName1.length-1,1)!='s') selectName1+='s';
    if (printFormat1) t1.columns[i][7]=printWidth1[i];
    TableString1[TableString1.length] = "<td class=HeadingCell align=" + t1.columns[i][4] +
                   " width=" + t1.columns[i][7] + " >" ;
    if (t1.columns[i][3] == -1) {
      if (OrderColumn1 == i) { TableString1[TableString1.length] = "<b>" }
      TableString1[TableString1.length] = t1.columns[i][0] + "</td>";
    }
    else {
      if (filterClickMethod1) {
        TableString1[TableString1.length] = "<div class=FilterName id='FilterName1"+i+"'"+
                     " onclick=\"openFilter1('"+i+"');\">" + trim(t1.columns[i][0]) + "</div>"+
                     "<select style='display:none' class=TableFilter id='Filter1"+i+
                     "' onchange='onFilterList1(this,\"" + t1.columns[i][2] + "\");'>" +
                     "<option value=''>All "+selectName1+"</option></select></td>"
      } else {
        TableString1[TableString1.length] = "<select class=TableFilter id='Filter1"+i+
                     "' onchange='onFilterList1(this,\"" + t1.columns[i][2] + "\");'>" +
                     "<option value=''>All "+selectName1+"</option></select></td>"
      }
    }
  }
  TableString1[TableString1.length] = "</tr></table></div><div id=BodyDivision1>"+
                 "<table style=\"table-layout:fixed\" border=" + t1.Border +
                 " cellspacing=" + t1.Cellspacing + " cellpadding=" + t1.Cellpadding +
                 " width=" + t1.Width + " align=" + t1.Align + " >";
}
function openFilter1(filterID) {
  el=document.getElementById("FilterName1"+filterID)
  el.style.display="none";
  el=document.getElementById("Filter1"+filterID)
  el.style.display="inline";
}
function FilterEnding1() {
  for(var i = 0; i < t1.columns.length; i++) {
    if (t1.columns[i][3] != -1) {
     ShowFilter1('Filter1'+i,t1.columns[i][2]);
    }
  }
}
function ToggleFilter1() {
  if (filterToggle1==0) { filterToggle1=1; }
  else {
   filterToggle1=0;
   for(var i = 0; i < FilterValue1.length; i++) {
     FilterValue1[i]='';
   }
  }
  TableRefresh1();
}
//------------------------------------------------------------
// Dynamic Filter Select List based on Unique Column Values
//------------------------------------------------------------
function ShowFilter1(FilterName,ColumnNo) {
 var FilterList1 = new Array();
 FilterIndex1=FilterColumn1.length;
 for(var i = 0; i < FilterColumn1.length; i++) {
   if (FilterColumn1[i]==ColumnNo) FilterIndex1=i;
 }
 FilterColumn1[FilterIndex1]=ColumnNo;
 if (FilterColumn1.length>FilterValue1.length) FilterValue1[FilterValue1.length]='';
 BlankColumns=false;
 for(var i = 0; i < t1.rows.length; i++) {
   if (isWhitespace(t1.rows[i][ColumnNo].replace(RemoveHTMLTags,"").replace(/&nbsp;/gi,""))) {
     if (t1.rows[i][ColumnNo].match(/\<input.*checkbox/gi)) {
       if (t1.rows[i][ColumnNo].match(/\<input.*checked/gi)) {
         filterString1="Checked";
       } else {
         filterString1="Unchecked";
       }
       addItem1=true;
       for(var j = 0; j < FilterList1.length; j++) {
         if (filterString1==FilterList1[j]) addItem1=false;
       }
       if (addItem1) FilterList1[FilterList1.length]=filterString1;
     } else {
       BlankColumns=true;
     }
   } else {
     addItem1=true;

     filterString1 = t1.rows[i][ColumnNo].
                     replace(RemoveHTMLTags,"").
                     replace(/&nbsp;/gi,"")

     for(var j = 0; j < FilterList1.length; j++) {
       if (filterString1==FilterList1[j]) addItem1=false;
     }
     if (addItem1) FilterList1[FilterList1.length]=filterString1;
   }
 }
 FilterList1.sort();
 el=document.getElementById(FilterName)
 selectIndex1=0;
 columnType="";
 for(var i = 0; i < t1.columns.length; i++) {
   if (t1.columns[i][2]==ColumnNo) columnType=t1.columns[i][1]
 }
 if (el.options.length>1) el.options.length=1;
 for(var j = 0; j < FilterList1.length; j++) {
   if (FilterList1[j]==FilterValue1[FilterIndex1]) selectIndex1=el.options.length;
   switch(columnType) {
     case "DateTime" :
       nameVal= FormatDateTime(FilterList1[j]);break;
     case "Date":
       nameVal= FormatDate(FilterList1[j]);break;
     case "DateTimeImg" :
       nameVal= FormatDateTime(FilterList1[j]);break;
     case "Time" :
       nameVal= FormatTime(FilterList1[j]);break;
     default:
       nameVal= FilterList1[j].replace(RemoveHTMLTags,"").replace(/&nbsp;/gi,"");
   }
   el.options[el.options.length] = new Option(nameVal,FilterList1[j]);
 }
 if (BlankColumns) {
   if (FilterValue1[FilterIndex1]=="null") selectIndex1=el.options.length;
   el.options[el.options.length] = new Option("<blank>","null")
 }
 el.selectedIndex=selectIndex1;
}
function onSearchAll1(e) {
  var delayTime = 250; //delay 0.15 seconds
  SearchAllFlag1=true;
  if(!e){e = window.event;}
  if (e.srcElement)
    SearchInputField1 = e.srcElement;
  else if (e.target)
    SearchInputField1 = e.target;
  else { return; }
  clearTimeout(SearchTimeoutId1);
  if (e.keyCode==9) { return; }
  SearchAllValue1=SearchInputField1.value;
  if(e.keyCode== 13 || SearchInputField1.value.length == 0 ) {
    SearchTimeoutId1 = setTimeout( function() { TableRefresh1(); },delayTime);
    return;
  }
  if(SearchInputField1.value.length > 2) {
    if(e.keyCode == 8 || e.keyCode == 46) {
      SearchTimeoutId1 = setTimeout( function() { TableRefresh1(); },delayTime);
      return;
    }
    if(e.keyCode < 32 || (e.keyCode >= 33 && e.keyCode <= 47)||(e.keyCode >= 112 && e.keyCode <= 123)) {
      return;
    }
    SearchTimeoutId1 = setTimeout( function() { TableRefresh1(); },delayTime);
  }
}


