//jsVersion  : V11.03.04
//------------------------------------------------------------
// Function : TableSort.js
//------------------------------------------------------------
var showTableFilterSearch = true;
var showTableFilter = true;     /* Show Filters Icon */
var showTablePrint = true;      /* Show Print Icon */
var showTableSearch = true;     /* Show Seach */
var sortTableHeading = ""       /* set Table Heading document.title if blank */
var scrollTableBody = true;     /* set option to scroll table body */
var filterClickMethod = false;
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
var filteredRows=0;
var RemoveHTMLTags = /(<([^>]+)>)/ig;
var CompatibilityMode = false;  // Browser Compatibility Mode
var PatientColumnWrap = VariableNameExists('TableSortPatientColumnWrap') ? TableSortPatientColumnWrap : false;  // Allow 'Patient' column to wrap; remove nowrap
//
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
   printWidth = new Array();
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
      case "DateTimeImg":  t.rows.sort(StringSort); break;
      case "ImageText" :  t.rows.sort(StringSort); break;
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
      case "DateTimeImg":  t.rows.sort(RevStringSort); break;
      case "ImageText" :  t.rows.sort(RevStringSort); break;
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
function FormatIcon(i) {
  if (ImgString != "" ) {
    TableString[TableString.length] = "<img src=\"../images/" + ImgString + 
                                      "\" border=0 hspace=4 align=absmiddle "; 

    if (typeof onmouseind != "undefined" && 
        !isWhitespace(t.rows[i][onmouseind])) {
      TableString[TableString.length] = " onMouseOver=" + t.rows[i][onmouseind];
      TableString[TableString.length] = " onMouseOut=hide_HoverData();";
    }

    TableString[TableString.length] = ">";

    if (LinkFlag ) {
      LinkFlag = 0;
      TableString[TableString.length] = "</a>" ;
    }
  }
}
function FormatPatientIcon(Indicators) {
 if (Indicators.substr(4,1)==1) { ImgString="FolderNotes.gif" }
 if (Indicators.substr(3,1)==1) { ImgString="FolderResult.gif" }
 if (Indicators.substr(2,1)==1) { ImgString="FolderAlert.gif" }
 if (Indicators.substr(2,1)==2) { ImgString="FolderAlertBlack.gif" }
 if (Indicators.substr(2,1)==3) { ImgString="FolderAlertDelete.gif" }
 if (Indicators.substr(2,1)!=""&& Indicators.substr(2,1)!="0"&&
     Indicators.substr(2,1)!=" "&& Indicators.substr(2,1)!="1"&&
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
 if (NameFields.length > 2) {
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
 if (NameFields.length > 2) {
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
   day = "";
   content = "";
   blank = "&nbsp;"

   if (datetime.length > 13) {
     day = datetime.substr(13,3);
   }
   
   if (datetime.length > 16) {
     content = datetime.substr(16);
   }

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
     if (time!=""){
       if (content!="") {
         return(dd + " " + mth3 + " " + yyyy + " at " +
              time + day + content + EndLink); } 
       else { 
         return(dd + " " + mth3 + " " + yyyy + " at " + time + day + EndLink); }
     } else {
       return(dd + " " + mth3 + " " + yyyy +  " " + day + EndLink); }
   }
   else {
     return(blank + EndLink); }
   
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

  lastOrderColumn=OrderColumn;

  if (t.rows.length != 0) {
    t.sortTable(OrderColumn,AscDsc);
    TableHeading(OrderColumn);
    TableBody();
    if (t.tableTotals.length != 0) {
      TableTotals();
    }
    TableEnding();
  }
  else {
    TableHeading(OrderColumn);
    TableEnding();
  }
}
function TableHeading(OrderColumn) {
  if (sortTableHeading=="") sortTableHeading=document.title;
  printOrder=OrderColumn;
  TableString = [];
  TableString[TableString.length] = "<div id=HeadingDivision style='overflow-x:hidden'>";
  TableString[TableString.length] = "<table style=\"table-layout:fixed\"" +
                 " border=" + t.Border +
                 " cellspacing=" + t.Cellspacing +
                 " cellpadding=" + t.Cellpadding +
                 " width=" + t.Width +
                 " align=" + t.Align + " >";
  TableString[TableString.length] = "<tr>" + 
             "<td class=HeadingCell align=left width=20% style='border-right:0px;height:30px'>" +  
             "Selected : <span id=selectedCount>" + t.rows.length + "</span></td>" +                       
             "<td class=HeadingCell align=center style='border-left:0px;border-right:0px'>" +
             sortTableHeading+ "</td>" +
             "<td class=HeadingCell align=right width=20% style='border-left:0px;'>" 
  if (showTableFilterSearch) {
    if (showTableSearch) {
      TableString[TableString.length] = "<input type=text size=12 id=searchAll class='SearchAllTable' " +
             "onfocus='SearchFlag=true;' onblur='SearchFlag=false;' " +
             "onkeyup='onSearchAll(event);' title='Search Table' value='"+SearchAllValue+"' placeholder='Search'>";
    }
    if (showTableFilter) {
      TableString[TableString.length] = "<input type=button class='ButtonIcon FilterPlusIcon' "+
             "onclick='ToggleFilter();' title='Filter Table' value=''>";
    }
    if (showTablePrint) {
      TableString[TableString.length] = "<input type=button class='ButtonIcon PrinterIcon' "+
             "onclick='SortTablePrint();' title='Print Page' value=''>";
    }
    TableString[TableString.length] = "</td></tr></table>"
  }
  else {
    if (showTablePrint) {
      TableString[TableString.length] = "<img src='../images/PrinterIcon.gif' class=ListIcon "+
             "onclick='SortTablePrint();' alt='Print Page' align=right>";
    }
    TableString[TableString.length] = "</td></tr></table>"
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

  for (var i = 0; i < t.columns.length; i++) {
    if (printFormat) t.columns[i][7]=printWidth[i];

    TableString[TableString.length] = "<td class=HeadingCell ";

    if (!isWhitespace(t.columns[i][4])) {  // Align
      var alignStr = t.columns[i][4];

      if (t.columns[i][0] == "Patient") {
        if (PatientColumnWrap) {
          TableString[TableString.length] = " align=" + alignStr.replace(/nowrap/gi, "");
        }
        else { TableString[TableString.length] = " align=" + alignStr; }
      }
      else { TableString[TableString.length] = " align=" + alignStr; }
    }

    TableString[TableString.length] = " width=" + t.columns[i][7] + " >";

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
  TableString[TableString.length] = "<div id=BodyDivision style='overflow-x:hidden'>";
  TableString[TableString.length] = "<table style=\"table-layout:fixed\" border=" + t.Border +
                 " cellspacing=" + t.Cellspacing +
                 " cellpadding=" + t.Cellpadding +
                 " width=" + t.Width +
                 " align=" + t.Align + " >";
}
function TableBody() {
 filteredRows=0;
 RowClass="TableRowEven";

 for (var i = 0; i < t.rows.length; i++) {
  if (TableFilter(t.rows[i])) {
   filteredRows++;
   if (RowClass=="TableRowEven") { RowClass="TableRowOdd" }
   else                          { RowClass="TableRowEven" }

   TableString[TableString.length] = "<tr id='row_"+i+"' height=" + t.RowHeight + " class=" + RowClass + ">";

   for (var j = 0; j < t.columns.length; j++) {
     TableString[TableString.length] = "<td ";

     if (!isWhitespace(t.columns[j][4])) {  // Align
       var alignStr = t.columns[j][4];

       if (t.columns[j][0] == "Patient") {
         if (PatientColumnWrap) {
           TableString[TableString.length] = " align=" + alignStr.replace(/nowrap/gi, "");
         }
         else { TableString[TableString.length] = " align=" + alignStr; }
       }
       else { TableString[TableString.length] = " align=" + alignStr; }
     }

     TableString[TableString.length] = " style='overflow:hidden;text-overflow:ellipsis;";

     if (!CompatibilityMode) {
       TableString[TableString.length] = "padding:0px 5px;";
     }

     TableString[TableString.length] = "'";

     if(t.columns[j][11]!=undefined) {
       if(!isWhitespace(t.rows[i][t.columns[j][11]])) {
         TableString[TableString.length] = " class=" + 
                                           t.rows[i][t.columns[j][11]]  ;
       }
     }
     if(t.columns[j][12]!=undefined) {
       if(!isWhitespace(t.rows[i][t.columns[j][12]])) {
         TableString[TableString.length] = " title=" +
                         t.rows[i][t.columns[j][12]].replace(/ /g,"&nbsp;");
       }
     }
     TableString[TableString.length] = " width=" + t.columns[j][7] + ">" ;
     LinkColumn = t.columns[j][6];
     LinkFlag = 0
     ImgString = t.columns[j][5];
     onmouseind = t.columns[j][10];
     if (LinkColumn != "") {
       LinkHref = t.rows[i][t.columns[j][6]];
       if (LinkHref != ""){ 
         TableString[TableString.length] = "<a href=\"" +
                                           LinkHref.replace(/\s*$/,"") + "\">"
         LinkFlag = 1 }
     }
     switch(t.columns[j][1]) {
       case "MaxLimit" :  
         FormatIcon(i);
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
         FormatIcon(i);
         ThisValue=t.rows[i][t.columns[j][2]];
         MaxValue=t.columns[j][8];
         HighLightColor=t.columns[j][9];
         if (ThisValue<MaxValue) {
            TableString[TableString.length] = "<font color=" +
                                              HighLightColor+"><b>"
            TableString[TableString.length] = t.rows[i][t.columns[j][2]];
            TableString[TableString.length] = "</font></b>" }
         else {
            TableString[TableString.length] = t.rows[i][t.columns[j][2]]; }
         if ( LinkFlag ) { TableString[TableString.length] = "</a>"; }
         break;
       case "Date" :  
         FormatIcon(i);
         TableString[TableString.length] = FormatDate(t.rows[i][t.columns[j][2]]);
         break;
       case "DateTime" :  
         FormatIcon(i);
         TableString[TableString.length] = FormatDateTime(t.rows[i][t.columns[j][2]]);
         break;
       case "DateTimeImg" :
         if (t.columns[j][5] == "") {
           ImgString=t.rows[i][t.columns[j][8]];
         }
         else {
           ImgString=t.columns[j][5] +
                       t.rows[i][t.columns[j][8]] + ".gif"
         }
         FormatIcon(i);
         TableString[TableString.length] = FormatDateTime(t.rows[i][t.columns[j][2]]);
         break;
       case "Time" :  
         FormatIcon(i);
         TableString[TableString.length] = FormatTime(t.rows[i][t.columns[j][2]]);
         break;
       case "Name" :  
         FormatIcon(i);
         TableString[TableString.length] = FormatName(t.rows[i][t.columns[j][2]]);
         break;
       case "ImageText" :
         if (t.columns[j][5] == "") {
           ImgString=t.rows[i][t.columns[j][8]];
         }
         else {
           ImgString=t.columns[j][5] +
                       t.rows[i][t.columns[j][8]] + ".gif"
         }
         FormatIcon(i);
         TableString[TableString.length] = (t.rows[i][t.columns[j][2]]);
         break;
       case "NameAll" :  
         FormatIcon(i);
         TableString[TableString.length] = FormatNameAll(t.rows[i][t.columns[j][2]]);
         break;
       case "Graph":  
         TableString[TableString.length] = FormatGraph(t.rows[i][t.columns[j][2]],t.columns[j][5]);
         break;
       case "IconLink":  
         FormatIcon(i);
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
       default :   
         FormatIcon(i);
         TableString[TableString.length] = t.rows[i][t.columns[j][2]];
         if ( LinkFlag ) { TableString[TableString.length] = "</a>"; }
         break;
     }
     if (isWhitespace(t.rows[i][t.columns[j][2]])) {
       TableString[TableString.length] = "&nbsp;" }
     TableString[TableString.length] = "</td>" ;
     }
   TableString[TableString.length] = "</tr>" ;
   }
  }
}
function TableEnding() {
  TableString[TableString.length] = "</table></div>";

  // The following are defined in the html
  var HeadingSection = document.getElementById('HeadingSection');
  var TableLocation = document.getElementById('TableLocation');

  // unload the array into continuous html render
  if (TableString.join) // if join method is available; 
  {
    TableLocation.innerHTML = TableString.join("");
  }
  else 
  {
    var TableStringX="";
    for (i=0;i < TableString.length; i++) 
    {
       TableStringX+=TableString[i];
    }
    TableLocation.innerHTML = TableStringX;
  }

  // The following are defined in the code we just rendered
  document.getElementById('selectedCount').innerHTML=filteredRows;

  var HeadingDivision = document.getElementById('HeadingDivision');
  var BodyDivision    = document.getElementById('BodyDivision');

  if (!scrollTableBody) {
     HeadingDivision.style.overflow="auto";
     BodyDivision.style.overflow="visible";
     BodyDivision.style.height="";
     return; 
  }

  var height = document.body.clientHeight;

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
    TableLocation.style.top = '0px';
  }

  //
  // Set the height of the table rows section (i.e. <div id=BodyDivision>)
  //
  if (TableLocation.offsetTop > 0) {  // TableLocation is not at the top
    _setListHeight();
  }
  else {
    BodyDivision.style.height = height - secHeight - HeadingDivision.clientHeight - 1 + "px";
  }

  _setVerticalScrollbar();
}
function _setListHeight() {
  var TableLocation = document.getElementById('TableLocation');
  var HeadingDivision = document.getElementById('HeadingDivision');
  var BodyDivision = document.getElementById('BodyDivision');

  var sBorderStyle = TableLocation.style.border;  // save current border style

  // We need to do the following to force Chrome to render; before we can set
  // the height values (for more accuracy)
  TableLocation.style.border = "1px solid transparent";

  var height = document.body.clientHeight;

  var listHeight = height - TableLocation.offsetTop - HeadingDivision.offsetHeight - 1;

  TableLocation.style.border = sBorderStyle;  // restore the border style

  if (listHeight > 0) {
    BodyDivision.style.height = listHeight + "px";
  }
  else if (listHeight < 0) {
    BodyDivision.style.height = -1 * listHeight + "px";
  }
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
  if (lastOrderColumn == OrderColumn) {
    if (AscDsc == 1) {AscDsc=2;} else {AscDsc=1;}
  }
  else {
    AscDsc=1;
  }
  TableOutput(OrderColumn,AscDsc);
  if (document.getElementById("tscookie") != null)
  {
    SortCookie(OrderColumn);
  }
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
       case "DateTimeImg" :
         if (t.columns[j][5] == "") {
           ImgString=t.rows[i][t.columns[j][8]];
         }
         else {
           ImgString=t.columns[j][5] +
                       t.rows[i][t.columns[j][8]] + ".gif"
         }
         if ( LinkFlag ) { TableString[TableString.length] = "</a>"; }
         FormatIcon();
         TableString[TableString.length] = FormatDateTime(t.rows[i][t.columns[j][2]]);
         break;
       case "ImageText" :
         if (t.columns[j][5] == "") {
           ImgString=t.tableTotals[t.columns[j][8]];
         }
         else {
           ImgString=t.columns[j][5] +
                       t.tableTotals[t.columns[j][8]] + ".gif"
         }
         if ( LinkFlag ) { TableString[TableString.length] = "</a>"; }
         FormatIcon();
         TableString[TableString.length] = (t.tableTotals[t.columns[j][2]]);
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
//function SortTablePrint() {
// print();
//}
//=============================================================
// Custom Sort Table Print Preview
//=============================================================
function SortTablePrint() {
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
   else {
     print();
   }
//
 }
 else { 
   printFormat=true;
   HeadingDivision.style.overflow="hidden";
   BodyDivision.style.height="auto";
   TableRefresh();
   print();
   printFormat=false;
   TableRefresh();
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
    if (t.tableTotals.length != 0 ) { TableTotals(); }
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
// =============================================================
// Retain Sort order 
// =============================================================
function SortCookie(column) {
//
  var CookieName=escape(document.getElementById("tscookie").value);
//
  var SortOrderString=GetCookieData(CookieName);
//
  if(SortOrderString=="unknown") {
    SortOrderString=" |";
  }
  SortOrderString+=column + "|";
//
  SetCookie(CookieName,SortOrderString);
//  alert(CookieName+" "+SortOrderString);
}

function TableSortCookie(OrderColumn) {
  if (lastOrderColumn == OrderColumn) {
    if (AscDsc == 1) {AscDsc=2;} else {AscDsc=1;}
  }
  else {
    AscDsc=1;
  }
  TableOutput(OrderColumn,AscDsc);
}
function LoadSortCookie() {
//
 if(document.getElementById("tscookie")!="null")
 {

    var CookieName=escape(document.getElementById("tscookie").value);
//
    var SortOrderString=GetCookieData(CookieName);
//
    if(SortOrderString=="unknown") {
      return;
    }
//////
    var SortOrder=SortOrderString.split("|");
//////
    for(var i=1;i< SortOrder.length;i++) {
      if (!isWhitespace(SortOrder[i])) {
//        alert("Tablesort: "+SortOrder[i]);
        TableSortCookie(SortOrder[i]);
      }
    }
  }
//////
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
        if (el[FilterColumn[f]].match(/\<input.*checkbox/gi)) {
          if (el[FilterColumn[f]].match(/\<input.*checked/gi)) {
            colStr="Checked";
          } else {
            colStr="Unchecked";
          }
          if (FilterValue[f]!=colStr) return false;
        } else {
          if (FilterValue[f]!=
              el[FilterColumn[f]].replace(RemoveHTMLTags,"")
                                 .replace(/&nbsp;/gi,"")) {
            return false;
          }
        }
      } else {
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
  TableString[TableString.length] = "<div id=HeadingDivision style='overflow-x:hidden'>" +
             "<table style=\"table-layout:fixed\"" +
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
             "onkeyup='onSearchAll(event);' title='Search Table' value='"+SearchAllValue+"' placeholder='Search'>";
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
    TableString[TableString.length] = "<td class=HeadingCell ";

    if(!isWhitespace(t.columns[i][4])) {

      TableString[TableString.length] = "align=" + t.columns[i][4]  

    }

    TableString[TableString.length] = " width=" + t.columns[i][7] + " >" ;

    if (t.columns[i][3] == -1) {
      if (OrderColumn == i) { TableString[TableString.length] = "<b>" }
      TableString[TableString.length] = t.columns[i][0] + "</td>"; 
    }
    else {
      if (filterClickMethod) {
        TableString[TableString.length] = "<div class=FilterName id='FilterName"+i+"'"+
                     " onclick=\"openFilter('"+i+"');\">" + trim(t.columns[i][0]) + "</div>"+
                     "<select style='display:none' class=TableFilter id='Filter"+i+
                     "' onchange='onFilterList(this,\"" + t.columns[i][2] + "\");'>" + 
                     "<option value=''>All "+selectName+"</option></select></td>"
      } else {
        TableString[TableString.length] = "<select class=TableFilter id='Filter"+i+
                     "' onchange='onFilterList(this,\"" + t.columns[i][2] + "\");'>" + 
                     "<option value=''>All "+selectName+"</option></select></td>"
      }
    }
  }
  TableString[TableString.length] = "</tr></table></div>" +
    "<div id=BodyDivision style='overflow-x:hidden'>" +
    "<table style=\"table-layout:fixed\" border=" + t.Border +
    " cellspacing=" + t.Cellspacing + " cellpadding=" + t.Cellpadding +
    " width=" + t.Width + " align=" + t.Align + " >";
}
function openFilter(filterID) {
  el=document.getElementById("FilterName"+filterID)
  el.style.display="none";
  el=document.getElementById("Filter"+filterID)
  el.style.display="inline";
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
   if (isWhitespace(t.rows[i][ColumnNo].replace(RemoveHTMLTags,"").replace(/&nbsp;/gi,""))) {
     if (t.rows[i][ColumnNo].match(/\<input.*checkbox/gi)) {
       if (t.rows[i][ColumnNo].match(/\<input.*checked/gi)) {
         filterString="Checked";
       } else {
         filterString="Unchecked";
       }
       addItem=true;
       for(var j = 0; j < FilterList.length; j++) {
         if (filterString==FilterList[j]) addItem=false;
       }
       if (addItem) FilterList[FilterList.length]=filterString;
     } else {
       BlankColumns=true;
     }
   } else {
     addItem=true;

     filterString = t.rows[i][ColumnNo].
                     replace(RemoveHTMLTags,"").
                     replace(/&nbsp;/gi,"")

     for(var j = 0; j < FilterList.length; j++) {
       if (filterString==FilterList[j]) addItem=false;
     }
     if (addItem) FilterList[FilterList.length]=filterString;
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
       nameVal= FilterList[j].replace(RemoveHTMLTags,"").replace(/&nbsp;/gi,"");
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
