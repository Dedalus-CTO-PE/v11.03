//------------------------------------------------------------
// Function : TableSortWidget.js
//
// Modifications : 
//
//----------------------------------------------------------------------
// V10.01.01  B.G.Ackland
//            Observation Status Icons for NSW Between the Flags
// V10.00.01  B.G.Ackland
//           Copy from TableSort.js for Widget Display
//------------------------------------------------------------
var TableLocation;
function Table(Border,Cellspacing,Cellpadding,Width,Align,HHeight,RHeight) {
   this.Border = Border;
   this.Cellspacing = Cellspacing;
   this.Cellpadding = Cellpadding;
   this.Width = Width;
   this.Align = Align;
   this.HeadingHeight = HHeight;
   this.RowHeight = RHeight;
   this.totals = new Array();
   this.rows = new Array();
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
      case "Date"      :  t.rows.sort(StringSort); break;
      case "Date2"      :  t.rows.sort(StringSort); break;
      case "DateTime"  :  t.rows.sort(StringSort); break;
      case "DateTime2"  :  t.rows.sort(StringSort); break;
      case "DateTime3"  :  t.rows.sort(StringSort); break;
      case "ResultDate"  :  t.rows.sort(StringSort); break;
      case "ResultDateTime":  t.rows.sort(StringSort); break;
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
      case "Notes"     :  t.rows.sort(StringSort); break;
      case "String"    :  t.rows.sort(StringSort); break;
      case "Patient"   :  t.rows.sort(StringSort); break;
    }
  }
  else {
    switch(t.columns[Column][1]) {
      case "Date"      :  t.rows.sort(RevStringSort); break;
      case "Date2"      :  t.rows.sort(RevStringSort); break;
      case "DateTime"  :  t.rows.sort(RevStringSort); break;
      case "DateTime2"  :  t.rows.sort(RevStringSort); break;
      case "DateTime3"  :  t.rows.sort(RevStringSort); break;
      case "ResultDate"  :  t.rows.sort(RevStringSort); break;
      case "ResultDateTime":  t.rows.sort(RevStringSort); break;
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
      case "Notes"     :  t.rows.sort(RevStringSort); break;
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
function TableBody() {
 for(var j = 0; j < t.columns.length; j++) { t.totals[j] = 0; }
 for(var i = 0; i < t.rows.length; i++) {
   RowClass="TableRowEven"
   if (i%2==1) { RowClass="TableRowOdd" }
   TableString[TableString.length] = "<tr height=" + t.RowHeight + " class=" + RowClass + ">" ;
   for(var j = 0; j < t.columns.length; j++) {
     TableString[TableString.length] = "<td align=" + t.columns[j][4]  ;
     if(t.columns[j][11]!=undefined) {
       if(!isWhitespace(t.rows[i][t.columns[j][11]])) {
         TableString[TableString.length] = " class=" + 
                                           t.rows[i][t.columns[j][11]]  ;
       }
     }
     TableString[TableString.length] = " width=" + t.columns[j][7] + ">" ;
     LinkColumn = t.columns[j][6];
     LinkFlag = 0
     ImgString = t.columns[j][5];
     jsFunction = ""
     if(t.columns[j][12]!=undefined) { jsFunction = t.columns[j][12]; }
     if (LinkColumn != "") {
       LinkHref = t.rows[i][t.columns[j][6]];
       if (LinkHref != ""){ 
         if (jsFunction == "ResultLink"){ 
             TableString[TableString.length] = "<a href='javascript:ResultLink(\"" + LinkHref +
                 "\",\"" + t.rows[i][6] + "\",\"" + t.rows[i][7] + "\",\""+TableLocation.id+"\")'>" ; 
             LinkFlag = 1 }
         else {
           if (jsFunction != ""){ 
             TableString[TableString.length] = "<a href='javascript:" + jsFunction + "(\"" +
                                                LinkHref.replace(/\s*$/,"") + "\");'>"  
             LinkFlag = 1 }
           else {
             TableString[TableString.length] = "<a href=\"" + LinkHref.replace(/\s*$/,"") + "\">"  
             LinkFlag = 1 }
         }
       }
     }
     switch(t.columns[j][1]) {
       case "MaxLimit" :  
         FormatIcon();
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
         FormatIcon();
         ThisValue=t.rows[i][t.columns[j][2]];
         MaxValue=t.columns[j][8];
         HighLightColor=t.columns[j][9];
         if (ThisValue<MaxValue) {
            TableString[TableString.length] = "<font color="+HighLightColor+"><b>"
            TableString[TableString.length] = t.rows[i][t.columns[j][2]];
            TableString[TableString.length] = "</font><b>" }
         else {
            TableString[TableString.length] = t.rows[i][t.columns[j][2]]; }
         if ( LinkFlag ) { TableString[TableString.length] = "</a>"; }
         break;
       case "Date" :  
         FormatIcon();
         TableString[TableString.length] = FormatDate(t.rows[i][t.columns[j][2]]);
         break;
       case "Date2" :  
         FormatIcon();
         TableString[TableString.length] = FormatShortDate(t.rows[i][t.columns[j][2]]);
         break;
       case "DateTime" :  
         FormatIcon();
         TableString[TableString.length] = FormatDateTime(t.rows[i][t.columns[j][2]]);
         break;
       case "DateTime2" :  
         FormatIcon();
         TableString[TableString.length] = FormatDate(t.rows[i][t.columns[j][2]]);
         break;
       case "DateTime3" :  
         FormatIcon();
         TableString[TableString.length] = FormatShortDateTime(t.rows[i][t.columns[j][2]]);
         break;
       case "ResultDate" :  
         FormatResultIcon(t.rows[i][6]);
         TableString[TableString.length] = FormatDate(t.rows[i][t.columns[j][2]]);
         break;
       case "ResultDateTime" :  
         FormatResultIcon(t.rows[i][6]);
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
         FormatIcon();
         TableString[TableString.length] = FormatDateTime(t.rows[i][t.columns[j][2]]);
         break;
       case "Time" :  
         FormatIcon();
         TableString[TableString.length] = FormatTime(t.rows[i][t.columns[j][2]]);
         break;
       case "Name" :  
         FormatIcon();
         TableString[TableString.length] = FormatName(t.rows[i][t.columns[j][2]]);
         break;
       case "Initials" :  
         FormatIcon();
         TableString[TableString.length] = FormatInitials(t.rows[i][t.columns[j][2]]);
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
       case "NameAll" :  
         FormatIcon();
         TableString[TableString.length] = FormatNameAll(t.rows[i][t.columns[j][2]]);
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
           ImageString=t.columns[j][5] + t.rows[i][t.columns[j][2]] + ".gif"
         }
         TableString[TableString.length] = FormatImage(ImageString);
         break;
       case "TitleIcon":  
         ImageString=t.columns[j][5] + ".gif"
         FormatTitleIcon(t.rows[i][t.columns[j][2]]);
         if ( LinkFlag ) { TableString[TableString.length] = "</a>"; }
         break;
       case "WarningIcon":  
         FormatWarningIcon(t,i);
         break;
       case "Patient":   
         FormatPatientIcon(t.rows[i][t.columns[j][8]])
         TableString[TableString.length] = t.rows[i][t.columns[j][2]];
         if ( LinkFlag ) { TableString[TableString.length] = "</a>"; }
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
function FormatTitleIcon(tTitle) {
   if (!isWhitespace(tTitle)) {
     TableString[TableString.length] = "<img src=\"../images/"+ImageString+"\"" +
                    " border=0 hspace=4 align=absmiddle title=\""+tTitle+"\">"; 
   }
}
function FormatIcon() {
 if (ImgString != "" ) {
   TableString[TableString.length] = "<img src=\"../images/" + ImgString + 
                  "\" border=0 hspace=4 align=absmiddle>"; 
   if (LinkFlag ) { 
      LinkFlag = 0;
      TableString[TableString.length] = "</a>" ; }
 }
}
function FormatResultIcon(ResCD) {
 if (ImgString != "" ) {
   ImgString="ResultIcon" + ResCD.substr(0,2) + ".gif"
   TableString[TableString.length] = "<img src=../images/" + ImgString ; 
   TableString[TableString.length] = " border=0 hspace=4 align=absmiddle>";
   if (LinkFlag ) { 
      LinkFlag = 0;
      TableString[TableString.length] = "</a>" ; }
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
function FormatInitials(Name) {
 NameFields=Name.split(" ");
 Initials=""
 for (i=0;i<NameFields.length;i++) { 
   Initials+=NameFields[i].substr(0,1) 
 }
 EndLink="";
 if ( LinkFlag ) { EndLink += "</a>"; }
 return( "<p title=\""+Name+"\">" + Initials + "</p>" + EndLink );
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
     return("<img src='../images/" + Image + "' height=15 " +
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
   blank = "&nbsp;"

   if (datetime.length > 13) {
     day = datetime.substr(13,3);
     switch (day) { 
       case "Mon":day="Mon";break;
       case "MON":day="Mon";break;
       case "Tue":day="Tue";break;
       case "TUE":day="Tue";break;
       case "Wed":day="Wed";break;
       case "WED":day="Wed";break;
       case "Thu":day="Thu";break;
       case "THU":day="Thu";break;
       case "Fri":day="Fri";break;
       case "FRI":day="Fri";break;
       case "Sat":day="Sat";break;
       case "SAT":day="Sat";break;
       case "Sun":day="Sun";break;
       case "SUN":day="Sun";break;
       default:day="";break;
     }
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
     return(dd + " " + mth3 + " " + yyyy + " at " + time + " " + day + EndLink); }
   else {
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
function FormatShortDate(date) {
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
   return(dd + " " + mth3 + EndLink);
}
function TableOutput(OrderColumn,AscDsc) {
lastOrderColumn=OrderColumn;
if (t.rows.length != 0 ) {
   t.sortTable(OrderColumn,AscDsc);
   TableHeading(OrderColumn);
   TableBody();
   if (t.tableTotals.length != 0 ) { 
      TableTotals(); }
   TableEnding(); }
else {
   TableHeading(OrderColumn);
   TableEnding(); }
}
function TableHeading(OrderColumn) {
  TableString = [];
//  TableString[TableString.length] = '<div id=HeadingDivision >';
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
    if (t.columns[i][3] == -1) {
      TableString[TableString.length] = t.columns[i][0] + "</td>"; }
    else {
      if (t.columns[i][13] == 1) {
         HeadIcon=t.columns[i][14].split("|");
         HeadJS=t.columns[i][15].split("|");
         HeadTitle=t.columns[i][16].split("|");
         for (k=0;k<HeadIcon.length;k++) { 
             TableString[TableString.length] = "<img src=\"../images/"+HeadIcon[k]+".gif\" " +
                          " title='"+HeadTitle[k]+"' class='DocumentAdd'  onclick="+HeadJS[k]+";>";
         }

         TableString[TableString.length] = t.columns[i][0] + "</td>";
      }
      else {
//        TableString[TableString.length] = "<a href='javascript:onClick=TableSort(" + i + ")'>"; 
//        TableString[TableString.length] = t.columns[i][0] + "</a></td>"; 
         TableString[TableString.length] = t.columns[i][0] + "</td>";
      }
    }
  }
  TableString[TableString.length] = "</tr></table>";
//  TableString[TableString.length] = "</div>";
//  TableString[TableString.length] = '<div id=BodyDivision>'
  TableString[TableString.length] = "<table style=\"table-layout:fixed\" border=" + t.Border +
                 " cellspacing=" + t.Cellspacing +
                 " cellpadding=" + t.Cellpadding +
                 " width=" + t.Width +
                 " align=" + t.Align + " >";
}
function TableEnding() 
{
//  TableString[TableString.length] = "</table></div>";
  TableString[TableString.length] = "</table>";

// these are defined in the html
//  var TableLocation = document.getElementById('TableLocation');
  var HeadingSection = document.getElementById('HeadingSection');

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

// these are defined in the code we just rendered
//  var HeadingDivision = document.getElementById('HeadingDivision');
//  var BodyDivision    = document.getElementById('BodyDivision');

// calculate the available table height based on the view frame height
//  var th = getClientHeight();  // view frame height

//  if (HeadingSection)
//  {
//     th -= HeadingSection.clientHeight;
//     TableLocation.style.top = HeadingSection.clientHeight + 'px';
//  }
//  else
     TableLocation.style.top = '0px';

//  th -= HeadingDivision.clientHeight;
// BodyDivision.style.height = th + 'px'; 

//if (BodyDivision.scrollHeight >  BodyDivision.clientHeight)
//  HeadingDivision.style.overflow = 'scroll';
//else 
//  HeadingDivision.style.overflow = 'hidden';

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
 print();
}
function FormatShortDateTime(datetime) {
   yyyy = datetime.substr(0,4);
   mm = datetime.substr(4,2);
   dd = datetime.substr(6,2);
   time = datetime.substr(8,5);
   day = "";
   blank = "&nbsp;"

   if (datetime.length > 13) {
     day = datetime.substr(13,3);
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
     return(dd + " " + mth3 + " at " + time +  EndLink); }
   else {
     return(dd + " " + mth3 + EndLink); }
     }
   else {
     return(blank + EndLink); }
   
}
