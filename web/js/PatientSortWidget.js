//jsVersion  : V11.03.00
//------------------------------------------------------------
// Patient Sort Table (widget)
//------------------------------------------------------------
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
      case "Checkbox"  :  t.rows.sort(StringSort); break;
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
      case "Checkbox"  :  t.rows.sort(RevStringSort); break;
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
function TableBody() {
 for(var i = 0; i < t.rows.length; i++) {
   RowClass="TableRowEven"
   if (i%2==1) { RowClass="TableRowOdd" }
   TableString[TableString.length] = "<tr height=" + t.RowHeight + " class=" + RowClass + " >" ;
   for(var j = 0; j < t.columns.length; j++) {
     TableString[TableString.length] = "<td style='line-height:25px;vertical-align:top;overflow:hidden;text-overflow:ellipsis' align=" + t.columns[j][4]  ;
     TableString[TableString.length] = " width=" + t.columns[j][7] + ">" ;
     switch(t.columns[j][1]) {
       case "Null" :  
         InsertLinks(t.columns[j],t.rows[i])
         break;
       case "Date" :  
         InsertLinks(t.columns[j],t.rows[i])
         TableString[TableString.length] = FormatDate(t.rows[i][t.columns[j][2]]);
         break;
       case "DateTime" :  
         InsertLinks(t.columns[j],t.rows[i])
         TableString[TableString.length] = FormatDateTime(t.rows[i][t.columns[j][2]]);
         break;
       case "Name" :  
         InsertLinks(t.columns[j],t.rows[i])
         TableString[TableString.length] = FormatName(t.rows[i][t.columns[j][2]]);
         break;
       case "Graph":  
         InsertLinks(t.columns[j],t.rows[i])
         TableString[TableString.length] = FormatGraph(t.rows[i][t.columns[j][2]],t.columns[j][5]);
         break;
       case "Image":  
         InsertLinks(t.columns[j],t.rows[i])
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
         InsertLinks(t.columns[j],t.rows[i])
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
       case "Checkbox":
         TableString[TableString.length] = "<input type=checkbox style='text-align:top;' id=tblrow"+i+
                                           " urnumber='"+t.rows[i][0]+"' admissno='"+t.rows[i][1]+"'>" 
         InsertLinks(t.columns[j],t.rows[i])
         TableString[TableString.length] = t.rows[i][t.columns[j][2]];
         break;
       default    :   
         InsertLinks(t.columns[j],t.rows[i])
         TableString[TableString.length] = t.rows[i][t.columns[j][2]];
         break;
     }
     t.rows[i][t.columns[j][2]] 
     TableString[TableString.length] = " &nbsp</td>" ;
     }
   TableString[TableString.length] = "</tr>" ;
   }
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
    if (OrderColumn == i) { TableString[TableString.length] = "<b>" }
    TableString[TableString.length] = t.columns[i][0] + "</td>"; 
  }
  TableString[TableString.length] = "</tr>";
}
function TableEnding() 
{
  TableString[TableString.length] = "</table></div>";

  // these are defined in the html
//  var TableLocation = document.getElementById('TableLocation');
//  var HeadingSection = document.getElementById('HeadingSection');

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
  SaveHeight=BodyDivision.style.height
  BodyDivision.style.height="auto"
  print()
  BodyDivision.style.height=SaveHeight
}
