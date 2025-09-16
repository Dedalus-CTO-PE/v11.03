// Source Code:  ./iphone/EmergencyTable.js
//
// Modification 
//
// Version         Date                         Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.00       13/04/2012                   Version change
// V10.01.00       13/04/2012                   Version change
// V10.00.00       13/04/2012                   Created for Mobility Suite
//

//---------------------------------------------------------------------- 
// Modifications : 
//----------------------------------------------------------------------
// V9.09.01  30.07.2007 Ebon Clements CAR 143110
//           Added additional using IE7 test
// V9.08.01  01.12.2006 Ebon Clements CAR 126021
//           Changed using IE6 test to using IE6 or IE7
// V9.04.01  01.07.2005 Ebon Clements 55997
//           Added using IE6 test as array .join is not available in IE5
// V9.04.00  Ebon Clements 55997
//           EmergencyTable.js with arrays for TableString. EmergencyTableOld.js
//           is the save copy of this before the array changes.
//----------------------------------------------------------------------
// V9.03.01  11.02.2004 Guomin Fu  CAR 38653
//           Modified function SortTablePrint() to correct
//           printing on Internet Explorer version 6.
// V9.02.12  20/03/2003 Tracey Nguyen 
//           Added ImageText option
// V9.02.11  11.12.2002 Jill Habasque
//           Added triag patient
// V9.02.10  23.04.2002 Bronko Sosic
//           Mods for StV golive
// V9.02.09  07.03.2002 Bronko Sosic
//           To integrate the inpatient module into the
//           Emergency discharge screen
// V9.02.08  28.02.2002 Bronko Sosic
//           Intergration of the inpatient module with EMR
// V9.02.07  24.02.2002 Bronko Sosic
//           Intergration of the inpatient module with EMR
// V9.02.04  10.01.2002 Bronko Sosic
//           New functionality of Doctor & Nurse handover
// V9.02.03  20.12.2001 Bronko Sosic
//           changes for St.V. with emr
// V9.02.02  15.12.2001 Bronko Sosic
//           Refreshing Emergency map
//           The map is not refreshing and updating at the same time.
// V9.02.01  13.11.2001 B.G.Ackland
//           Added Classes for Odd & Even Row Highlighting
// 
//---------------------------------------------------------------------- 
function Table(Border,Cellspacing,Cellpadding,Width,Align) {
   this.Border = Border;
   this.Cellspacing = Cellspacing;
   this.Cellpadding = Cellpadding;
   this.Width = Width;
   this.Align = Align;
   this.rows = new Array();
   this.addRow = _addTableRow;
   this.AddPatient = _addTableRow;
   this.columns = new Array();
   this.addColumn = _addTableColumn;
   this.sortTable = _sortTable;
   this.tableTotals = new Array();
   this.addTotal = _addTableTotal;
}
function _addTableTotal() {
  for (var i = 0; i < arguments.length; i++) 
     this.tableTotals[i] = arguments[i];
}
function _sortTable(Column,AscDsc) {
  SortOrderBy = obj.columns[Column][3]
  if (AscDsc == 1) {
    switch(obj.columns[Column][1]) {
      case "Date"      :  obj.rows.sort(NumericSort); break;
      case "DateTime"  :  obj.rows.sort(StringSort); break;
      case "Time"      :  obj.rows.sort(StringSort); break;
      case "Number"    :  obj.rows.sort(NumericSort); break;
      case "Graph"     :  obj.rows.sort(NumericSort); break;
      case "Name"      :  obj.rows.sort(StringSort); break;
      case "Image"     :  obj.rows.sort(StringSort); break;
      case "String"    :  obj.rows.sort(StringSort); break;
      case "ImageText" :  obj.rows.sort(StringSort); break;
    }
  }
  else {
    switch(obj.columns[Column][1]) {
      case "Date"      :  obj.rows.sort(RevNumericSort); break;
      case "DateTime"  :  obj.rows.sort(RevStringSort); break;
      case "Time"      :  obj.rows.sort(RevStringSort); break;
      case "Number"    :  obj.rows.sort(RevNumericSort); break;
      case "Graph"     :  obj.rows.sort(RevNumericSort); break;
      case "Name"      :  obj.rows.sort(RevStringSort); break;
      case "Image"     :  obj.rows.sort(RevStringSort); break;
      case "String"    :  obj.rows.sort(RevStringSort); break;
      case "ImageText" :  obj.rows.sort(RevStringSort); break;
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
  for (var i = 0; i < arguments.length; i++) 
     column[column.length] = arguments[i];
}
function _addTableRow() {
  this.rows[this.rows.length] = new Array();
  var row = this.rows[this.rows.length-1];
  for (var i = 0; i < arguments.length; i++) 
     row[row.length] = arguments[i];
}
function TableBody(immediate,emergency,urgent,semi,non) {
 for (var i = 0; i < obj.rows.length; i++) {
   RowClass="TableRowEven"
   if (i%2==1) { RowClass="TableRowOdd" }
   TableString[TableString.length] = "<tr class=" + RowClass + ">" ;
   for (var j = 0; j < obj.columns.length; j++) {
     TableString[TableString.length] = "<td align=" + obj.columns[j][4]  ;
     TableString[TableString.length] = " width=" + obj.columns[j][7] + ">" ;
     LinkColumn = obj.columns[j][6];
     LinkFlag = 0
     ImgString = obj.columns[j][5];
     if (LinkColumn != "") {
       LinkHref = obj.columns[j][6];
       if (LinkHref != ""){ 
           if(LinkHref=="1") {
             TableString[TableString.length] = "<a href='javascript:SelectPatient(\"" +
                            obj.rows[i][3] + "\",\"" +
                            obj.rows[i][4] +
                            "\");'>" ; }
           else if(LinkHref=="2") { 
             TableString[TableString.length] = "<a href='javascript:OpenLocation(\"" +
                            obj.rows[i][3] + "\",\"" +
                            obj.rows[i][4] +
                            "\");'>" ; }
           else if(LinkHref=="3") {
             TableString[TableString.length] = "<a href='javascript:TriagePatient(\"" +
                            obj.rows[i][3] + "\",\"" +
                            obj.rows[i][4] + "\",\"" +
                            obj.rows[i][5] +
                            "\");'>" ; }
          LinkFlag = 1 }
     }
     switch(obj.columns[j][1]) {
       case "Date" :  
         FormatIcon(obj.rows[i][4]);
         TableString[TableString.length] = FormatDate(obj.rows[i][obj.columns[j][2]]);
         break;
       case "DateTime" :  
         FormatIcon(obj.rows[i][4]);
         TableString[TableString.length] = FormatDateTime(obj.rows[i][obj.columns[j][2]]);
         break;
       case "Time" :  
         FormatIcon(obj.rows[i][4]);
         TableString[TableString.length] = FormatTime(obj.rows[i][obj.columns[j][2]]);
         break;
       case "Name" :  
         FormatIcon(obj.rows[i][4]);
         TableString[TableString.length] = FormatName(obj.rows[i][obj.columns[j][2]]);
         break;
       case "Graph":  
         TableString[TableString.length] = FormatGraph(obj.rows[i][obj.columns[j][2]],obj.columns[j][5]);
         break;
       case "Image":  
         ImageString= TriageTime(obj.rows[i][obj.columns[j][2]],obj.rows[i][12],obj.rows[i][7],immediate,emergency,urgent,semi,non,obj.rows[i][25],obj.rows[i][26]) + ".gif";
         TableString[TableString.length] = FormatImage(ImageString);
         break;
       case "ImageText":
         if (obj.columns[j][5]=="") {
           ImgString=obj.rows[i][obj.column[j][8]]; 
         }
         else {
           ImgString=obj.columns[j][5] +
                       obj.rows[i][obj.columns[j][8]] + ".gif";
         }
         FormatIcon(obj.rows[i][4]);
         TableString[TableString.length] = (obj.rows[i][obj.columns[j][2]]);
         break; 
       default    :   
         FormatIcon(obj.rows[i][4]);
         TableString[TableString.length] = obj.rows[i][obj.columns[j][2]];
         TableString[TableString.length] = "&nbsp;"; 
         if ( LinkFlag ) { TableString[TableString.length] = "</a>"; }
         break;
     }
     obj.rows[i][obj.columns[j][2]] 
     TableString[TableString.length] = "&nbsp</td>" ;
     }
   TableString[TableString.length] = "</tr>" ;
   }
}
function FormatIcon(admissno) {
 if (ImgString != "" ) {
   TableString[TableString.length] = "<img src=../images/" + ImgString ; 
   TableString[TableString.length] = " border=0 hspace=4 align=absmiddle alt=\"" ; 
   TableString[TableString.length] = admissno ;
   TableString[TableString.length] = "\">" ;
   if (LinkFlag ) { 
      LinkFlag = 0;
      TableString[TableString.length] = "</a>" ; }
 }
}
function FormatName(Name) {
 EndLink="";
 if ( LinkFlag ) { EndLink += "</a>"; }
 NameFields=Name.split(",");
 if (NameFields.length > 1) {
   Title=NameFields[2].substr(0,1) + NameFields[2].substr(1,5).toLowerCase()
   Given=NameFields[1]
   GivenFields=Given.split(" ");
   var GivenString = "";
   for (var i = 0; i < GivenFields.length; i++) {
     GivenString+=GivenFields[i].substr(0,1)
     GivenString+=GivenFields[i].substr(1,35).toLowerCase()
     GivenString+=" "
   } 
//   Initial=NameFields[1].substr(0,1);
   TitleGiven=Title + " " + GivenString
   Surname=NameFields[0].toUpperCase()
   return( "<b>" + Surname + "</b>, " + TitleGiven + EndLink ) 
//   if (TitleGiven.match(/^\s+/)) {
//     return( "<b>" + Surname + "</b>, " + Given + EndLink ) }
//   else {
//     return( "<b>" + Surname + "</b>, " + TitleGiven + EndLink ) }
 }
 else {
   Given="";
   Title="";
   Surname=Name;
   Initials="";
   return( "<b>" + Surname + "</b>" + EndLink );
 }
}
function FormatGraph(Value,Image) {
     return("<img src=../images/" + Image + " height=10 " +
             "width=" + Value + " align=absbottom>");
}
function FormatImage(Value) {
     return("<img src=../images/" + Value + " border=0>");
}
function FormatTime(datetime) {
   time = datetime.substr(8,5);
   EndLink="";
   if ( LinkFlag ) { EndLink += "</a>"; }
   if (time.match(/^\s+/)) {
   return( "Invalid" +  EndLink) } 
   else {
   return( time + EndLink) }
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
   if (time.match(/^\s+/)) {
   return(dd + " " + mth3 + " " + yyyy +  EndLink) } 
   else {
   return(dd + " " + mth3 + " " + yyyy + " at " + time + EndLink) }
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
function TableOutput(OrderColumn,AscDsc,immediate,emergency,urgent,semi,non) {
   obj.sortTable(OrderColumn,AscDsc);
   TableHeading(OrderColumn,AscDsc,immediate,emergency,urgent,semi,non);
   TableBody(immediate,emergency,urgent,semi,non);
   if (obj.tableTotals.length != 0 ) { 
      TableTotals();
   }
   TableEnding();
}
function TableHeading(OrderColumn,AscDsc,immediate,emergency,urgent,semi,non) {
  TableString = [];
  TableString[TableString.length] = '<div id=HeadingDivision>'

  TableString[TableString.length] = "<table style=\"table-layout:fixed\" border=" + obj.Border +
                 " cellspacing=" + obj.Cellspacing +
                 " cellpadding=" +  obj.Cellpadding 
  if (obj.Width!=0) {
         TableString[TableString.length] = " width=" + obj.Width  
  }
  TableString[TableString.length]= " >";

  TableString[TableString.length] = "<tr>" +
             "<td class=HeadingCell align=left width=90>" +
             "Selected : " + obj.rows.length + "</td>" +
             "<td class=HeadingCell align=center>" +
             document.title + "</td>" +
             "<td class=HeadingCell align=right width=25>" +
             "<a href='javascript:SortTablePrint()'>" +
             "<img src='../images/PrinterIcon.gif' border=0 align=absmiddle"+
             " alt='Print Page'>"+
             "</a>" +
             "</td></tr></table>"

  TableString[TableString.length] = "<table style=\"table-layout:fixed\" border=" + obj.Border +
                 " cellspacing=" + obj.Cellspacing +
                 " cellpadding=" +  obj.Cellpadding +
                 " align=" + obj.Align 
  if (obj.Width!=0) {
         TableString[TableString.length] = " width=" + obj.Width  
  }
  TableString[TableString.length] = " >";
  TableString[TableString.length] = "<tr>";
  for (var i = 0; i < obj.columns.length; i++) {
    TableString[TableString.length] = "<td class=HeadingCell align=" + obj.columns[i][4] +
                   " width=" + obj.columns[i][7] + " >" ;
    if (obj.columns[i][3] == -1) {
      if (OrderColumn == i) { TableString[TableString.length] = "<b>" }
      TableString[TableString.length] = obj.columns[i][0] + "</td>"; }
    else {
      TableString[TableString.length] = "<a href='javascript:onClick=TableSort(" + i + "," + AscDsc + "," + immediate + "," + emergency + "," + urgent + "," + semi + "," + non + ")'>";
      if (OrderColumn == i) { TableString[TableString.length] = "<b>" }
      TableString[TableString.length] = obj.columns[i][0] + "</a></td>"; }
  }
  TableString[TableString.length] = "</tr>";
  TableString[TableString.length] = "</table>";
  TableString[TableString.length] = "</div>";
  TableString[TableString.length] = '<div id=BodyDivision>'
  TableString[TableString.length] = "<table style=\"table-layout:fixed\" border=" + obj.Border +
                " cellspacing=" + obj.Cellspacing +
                " cellpadding=" + obj.Cellpadding +
                " align=" + obj.Align 
  if (obj.Width!=0) {
         TableString[TableString.length] = " width=" + obj.Width  
  }
  TableString[TableString.length] = " >";
}

function TableEnding() 
{
  var TableLocation   = document.getElementById('TableLocation'); 
  var HeadingSection  = document.getElementById('HeadingSection');
 
  TableLocation.innerHTML = "";

  TableString[TableString.length] = "</table>";
  TableString[TableString.length] = "</div>";
  if (TableString.join) // if join method is available 
  {
    TableLocation.innerHTML = TableString.join("");
  }
  else 
  {
    for(i=0 ; i < TableString.length ; i++) 
       TableLocation.innerHTML += TableString[i];
  }

  // these are defined in the code we just rendered
  var HeadingDivision = document.getElementById('HeadingDivision');
  var BodyDivision    = document.getElementById('BodyDivision');

  var th = getClientHeight(); // view frame height
 
  if (HeadingSection) 
  {
    th -= HeadingSection.offsetHeight;
    TableLocation.style.top = HeadingSection.offsetHeight + 'px';
  }
  else
    TableLocation.style.top = '0px';

  th -= HeadingDivision.offsetHeight;
  BodyDivision.style.height = th + 'px';

}

function TableSort(OrderColumn,AscDsc,immediate,emergency,urgent,semi,non) {
 if ( lastOrderColumn == OrderColumn ) { 
   if (AscDsc==1) {AscDsc=2;} else {AscDsc=1;} }
 else { 
   AscDsc=1; }
 lastOrderColumn=OrderColumn;
 TableOutput(OrderColumn,AscDsc,immediate,emergency,urgent,semi,non);
}
function TableTotals() {
   TableString[TableString.length] = "<tr class=TableRowTotal>" ;
   for (var j = 0; j < obj.columns.length; j++) {
     TableString[TableString.length] = "<td align=" + obj.columns[j][4]  ;
     TableString[TableString.length] = " width=" + obj.columns[j][7] + "><b>" ;
     LinkColumn = obj.columns[j][6];
     LinkFlag = 0
     ImgString = obj.columns[j][5];
     if (LinkColumn != "") {
       LinkHref = obj.tableTotals[obj.columns[j][6]];
       if (LinkHref != ""){ 
         TableString[TableString.length] = "<a href=" + LinkHref + ">" ; 
         LinkFlag = 1 }
     }
     switch(obj.columns[j][1]) {
       case "Date" :  
         FormatIcon(obj.rows[i][4]);
         TableString[TableString.length] = FormatDate(obj.tableTotals[obj.columns[j][2]]);
         break;
       case "DateTime" :  
         FormatIcon(obj.rows[i][4]);
         TableString[TableString.length] = FormatDateTime(obj.tableTotals[obj.columns[j][2]]);
         break;
       case "Name" :  
         FormatIcon(obj.rows[i][4]);
         TableString[TableString.length] = FormatName(obj.tableTotals[obj.columns[j][2]]);
         break;
       case "Graph":  
         TableString[TableString.length] = FormatGraph(obj.tableTotals[obj.columns[j][2]],obj.columns[j][5]);
         break;
       case "Image":  
         ImageString=obj.tableTotals[obj.columns[j][2]];
         TableString[TableString.length] = FormatImage(ImageString);
         break;
       case "ImageText":
         if (obj.tableTotals[obj.columns[j][5]]=="") {
           ImgString=obj.tableTotals[obj.rows[i][obj.column[j][8]]];
         }
         else {
           ImgString=obj.tableTotals[obj.columns[j][5]] +
                     obj.tableTotals[obj.rows[i][obj.columns[j][8]]] + ".gif";
         }
         if ( LinkFlag ) { TableString[TableString.length] = "</a>"; }
         FormatIcon(obj.rows[i][4]);
         TableString[TableString.length] = (obj.tableTotals[obj.rows[i][obj.columns[j][2]]]);
         break;
       default    :   
         FormatIcon(obj.rows[i][4]);
         TableString[TableString.length] = obj.tableTotals[obj.columns[j][2]];
         if ( LinkFlag == "1" ) { TableString[TableString.length] = "</a>"; }
         break;
     }
     obj.tableTotals[obj.columns[j][2]] 
     TableString[TableString.length] = "</td>" ;
     }
   TableString[TableString.length] = "</tr>" ;
}
function CalcTime(datetime) {
   today = new Date();
   yyyy = datetime.substr(0,4)
   mm = datetime.substr(4,2)
   mm = mm - 1
   dd = datetime.substr(6,2)
   hh = datetime.substr(8,2)
   mi = datetime.substr(11,2)
   ss = datetime.substr(14,2)
   cdate = new Date(yyyy,mm,dd,hh,mi,ss);
   difference = today.getTime() - cdate.getTime();
   difference = Math.floor(difference / (1000 * 60));
   return(difference);
}
//
function TriageTime(triagecode,doctdttm,arrvdttm,immediate,emergency,urgent,semi,non,status,dest) {
   if(status=="2  ") {
     if(dest=="2") {
       theimage = "AdmitIcon";
     } else {
     theimage = "HomeIcon"; }
     return(theimage);
   }
   tcode= new String(triagecode)
   if ((doctdttm == "                ")||(doctdttm == "")) { 
      datetime = arrvdttm;
      CalcTime(datetime);
      if ((triagecode == 1) & (difference >= immediate)) {
           theimage = "triage1f";
      }
      else { if ((triagecode == 2) & (difference >= emergency)) {
             theimage = "triage2f";
           }
           else { if ((triagecode == 3) & (difference >= urgent)) {
                  theimage = "triage3f";
                }
                else { if ((triagecode == 4) & (difference >= semi)) {
                       theimage = "triage4f";
                     }
                     else { if ((triagecode == 5) & (difference >= non)) {
                            theimage = "triage5f";
                          }
                          else { if (triagecode == 6) {
                                 theimage = "triage6";
                               }
                               else {
                                 theimage = "triage" + tcode.substr(0,1);
                                    }
                               }
                          }
                     }
                }  
           }
   }
   else {
      theimage = "triage" + tcode.substr(0,1);
   }
   return(theimage);
}
//------------------------------------------------------------
// Print Table from Window
//------------------------------------------------------------
function SortTablePrint() {
  if (window.navigator.userAgent.indexOf("MSIE 6.0")>=1
      || window.navigator.userAgent.indexOf("MSIE 7.0")>=1) {
    // Printing on Internet Explorer version 6 and above
    HeadingSection.style.position="relative"
    HeadingDivision.style.overflow="hidden"
    BodyDivision.style.overflow="hidden"
    BodyDivision.style.height="auto"
    print()
    HeadingSection.style.position="absolute"
  }
  else {
  SaveHeight=BodyDivision.style.height
  BodyDivision.style.height="auto"
  print()
  BodyDivision.style.height=SaveHeight
 }
}
