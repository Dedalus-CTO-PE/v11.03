//jsVersion  : V11.03.00
//--------------------------------------------------------------------------
function Table(Name,Border,Cellspacing,Cellpadding,Width,Align,TableLocation) {
   this.name = Name;
   this.TableLocation = TableLocation;
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
function _sortTable(Table,Column,AscDsc) {
  SortOrderBy = Table.columns[Column][3]
  if (AscDsc == 1) {
    switch(Table.columns[Column][1]) {
      case "Date"      :  Table.rows.sort(NumericSort); break;
      case "DateTime"  :  Table.rows.sort(StringSort); break;
      case "Number"    :  Table.rows.sort(NumericSort); break;
      case "Graph"     :  Table.rows.sort(NumericSort); break;
      case "Name"      :  Table.rows.sort(StringSort); break;
      case "Image"     :  Table.rows.sort(StringSort); break;
      case "String"    :  Table.rows.sort(StringSort); break;
    }
  }
  else {
    switch(Table.columns[Column][1]) {
      case "Date"      :  Table.rows.sort(RevNumericSort); break;
      case "DateTime"  :  Table.rows.sort(RevStringSort); break;
      case "Number"    :  Table.rows.sort(RevNumericSort); break;
      case "Graph"     :  Table.rows.sort(RevNumericSort); break;
      case "Name"      :  Table.rows.sort(RevStringSort); break;
      case "Image"     :  Table.rows.sort(RevStringSort); break;
      case "String"    :  Table.rows.sort(RevStringSort); break;
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
function TableBody(Table) {
 for(var i = 0; i < Table.rows.length; i++) {
   RowClass="TableRowEven"
   if (i%2==1) { RowClass="TableRowOdd" }
   TableString[TableString.length] = "<tr class=" + RowClass + ">" ;
   for(var j = 0; j < Table.columns.length; j++) {
     TableString[TableString.length] = "<td align=" + Table.columns[j][4] + ">" ;
//////////////
if (typeof(Table.rows[i][14]) != "undefined" && Table.rows[i][14]=="ShowStrike"){
   TableString[TableString.length] = "<del>"
 }
/////////////
     LinkColumn = Table.columns[j][6];
     LinkFlag = 0
     ImgString = Table.columns[j][5];
     if (LinkColumn != "") {
       LinkHref = Table.rows[i][Table.columns[j][6]];
       if (LinkHref != ""){ 
         TableString[TableString.length] = "<a href=\"" + LinkHref + "\">" ; 
         LinkFlag = 1 }
     }
     switch(Table.columns[j][1]) {
       case "Date" :  
         FormatIcon();
         TableString[TableString.length] = FormatDate(Table.rows[i][Table.columns[j][2]]);
         break;
       case "DateTime" :  
         FormatIcon();
         TableString[TableString.length] = FormatDateTime(Table.rows[i][Table.columns[j][2]]);
         break;
       case "Name" :  
         FormatIcon();
         TableString[TableString.length] = FormatName(Table.rows[i][Table.columns[j][2]]);
         break;
       case "Graph":  
         TableString[TableString.length] = FormatGraph(Table.rows[i][Table.columns[j][2]],Table.columns[j][5]);
         break;
       case "Image":  
         if (Table.columns[j][5] == "") {
           ImageString=Table.rows[i][Table.columns[j][2]];
         }
         else {
           ImageString=Table.columns[j][5] +
                       Table.rows[i][Table.columns[j][2]] + ".gif"
         }
         TableString[TableString.length] = FormatImage(ImageString);
         break;
       default    :   
         FormatIcon();
         TableString[TableString.length] = Table.rows[i][Table.columns[j][2]] + "&nbsp;" ;
         if ( LinkFlag ) { TableString[TableString.length] = "</a>"; }
         break;
     }
     Table.rows[i][Table.columns[j][2]] 
////
if (typeof(Table.rows[i][14]) != "undefined" && Table.rows[i][14]=="ShowStrike"){
     TableString[TableString.length] = "</del>" ;
}
////
     TableString[TableString.length] = "</td>" ;
     }
   TableString[TableString.length] = "</tr>" ;
   }
}
function FormatIcon() {
 if (ImgString != "" ) {
   TableString[TableString.length] = "<img src=../images/" + ImgString ; 
   TableString[TableString.length] = " border=0 hspace=4 align=absmiddle>";
   if (LinkFlag ) { 
      LinkFlag = 0;
      TableString[TableString.length] = "</a>" ; }
 }
}
function FormatName(Name) {
 NameFields=Name.split(",");
 if (NameFields.length > 1) {
   Title=NameFields[2].substr(0,1) + NameFields[2].substr(1,5).toLowerCase()
   Given=NameFields[1].substr(0,1) + NameFields[1].substr(1,25).toLowerCase()
   Initial=NameFields[1].substr(0,1);
// Surname=NameFields[0].substr(0,1) + NameFields[0].substr(1,25).toLowerCase()
   Surname=NameFields[0].toUpperCase()
 }
 else {
   Title="";
   Surname=Name;
   Initials="";
 }
 EndLink="";
 if ( LinkFlag ) { EndLink += "</a>"; }
 return( "<b>" + Surname + "</b>, " + Title + " " + Given + EndLink );
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
function TableOutput(Table,OrderColumn,AscDsc) {
   Table.sortTable(Table,OrderColumn,AscDsc);
   TableHeading(Table,OrderColumn);
   TableBody(Table);
   if (Table.tableTotals.length != 0 ) { 
      TableTotals(Table);
   }
   TableEnding(Table);
}
function TableHeading(Table,OrderColumn) {
  TableString = [];
  TableString[TableString.length] = "<table border=" + Table.Border +
                " cellspacing=" + Table.Cellspacing +
                " cellpadding=" + Table.Cellpadding +
                " width=" + Table.Width +
                " align=" + Table.Align + " >";
  TableString[TableString.length] = "<tr>";
  for(var i = 0; i < Table.columns.length; i++) {
    TableString[TableString.length] = "<td class=HeadingCell align=" + Table.columns[i][4];

    if (Table.columns[i][7] != undefined) {
      TableString[TableString.length] = " width=" + Table.columns[i][7];
    }
  
    TableString[TableString.length] =  " >";

    if (Table.columns[i][3] == -1) {
      if (OrderColumn == i) { TableString[TableString.length] = "<b>" }
      TableString[TableString.length] = Table.columns[i][0] + "</td>";
    }
    else {
      TableString[TableString.length] = "<a href='javascript:onClick=TableSort(" +  
                     Table.name + "," + i + ")'>"; 
      if (OrderColumn == i) { TableString[TableString.length] = "<b>" }
      TableString[TableString.length] = Table.columns[i][0] + "</a></td>";
    }
  }
  TableString[TableString.length] = "</tr>";
}

function TableEnding(Table) { 
  TableString[TableString.length] = "</table>";

  if (TableString.join)
    Table.TableLocation.innerHTML = TableString.join("");
  else 
  {
    var TableStringX="";
    for (var i=0; i < TableString.length; i++) TableStringX += TableString[i];
    Table.TableLocation.innerHTML = TableStringX;
  }
}

function TableSort(Table,OrderColumn) {
 if ( lastOrderColumn == OrderColumn ) { 
   if (AscDsc==1) {AscDsc=2;} else {AscDsc=1;} }
 else { 
   AscDsc=1; }
 lastOrderColumn=OrderColumn;
 TableOutput(Table,OrderColumn,AscDsc);
}
function TableTotals(Table) {
   TableString[TableString.length] = "<tr class=TableRowTotal>" ;
   for(var j = 0; j < Table.columns.length; j++) {
     TableString[TableString.length] = "<td align=" + Table.columns[j][4] + "><b>" ;
     LinkColumn = Table.columns[j][6];
     LinkFlag = 0
     ImgString = Table.columns[j][5];
     if (LinkColumn != "") {
       LinkHref = Table.tableTotals[Table.columns[j][6]];
       if (LinkHref != ""){ 
         TableString[TableString.length] = "<a href=" + LinkHref + ">" ; 
         LinkFlag = 1 }
     }
     switch(Table.columns[j][1]) {
       case "Date" :  
         FormatIcon();
         TableString[TableString.length] = FormatDate(Table.tableTotals[Table.columns[j][2]]);
         break;
       case "DateTime" :  
         FormatIcon();
         TableString[TableString.length] = FormatDateTime(Table.tableTotals[Table.columns[j][2]]);
         break;
       case "Name" :  
         FormatIcon();
         TableString[TableString.length] = FormatName(Table.tableTotals[Table.columns[j][2]]);
         break;
       case "Graph":  
         TableString[TableString.length] = FormatGraph(Table.tableTotals[Table.columns[j][2]],Table.columns[j][5]);
         break;
       case "Image":  
         if (Table.columns[j][5] == "") {
           ImageString=Table.tableTotals[Table.columns[j][2]];
         }
         else {
           ImageString=Table.columns[j][5] +
                       Table.tableTotals[Table.columns[j][2]] + ".gif"
         }
         TableString[TableString.length] = FormatImage(ImageString);
         break;
       default    :   
         FormatIcon();
         TableString[TableString.length] = Table.tableTotals[Table.columns[j][2]];
         if ( LinkFlag == "1" ) { TableString[TableString.length] = "</a>"; }
         break;
     }
     Table.tableTotals[Table.columns[j][2]] 
     TableString[TableString.length] = "</td>" ;
     }
   TableString[TableString.length] = "</tr>" ;
}

// compare function used for our sort in getDiagnosis()
function compare(a,b) {
  if (a == '' || b == '')
    return -1;

  var arrA = a.split(",");
  var arrB = b.split(",");

  if (arrA[1] < arrB[1])
    return -1;

  if (arrA[1] > arrB[1])
    return 1;

  return 0;
}

function getDiagnosis(SearchField,ReturnSelect,DescField) {
  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=1" +
                    "&valdcode=" + SearchField.value.replace(/ /g,"+");

  var ReturnValue = null;

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status==0) {
      ReturnSelect.options.length=0
      if (DescField != undefined) {
        DescField.value="";
      }
      ReturnValue=returnValue.return_value.split("|");

      // sort our array of returned code/desc by ascending description order
      ReturnValue.sort(compare);

      // now we build our selection list
      for (var j=0; j < ReturnValue.length; j++) {
        if (!isWhitespace(ReturnValue[j])) {
          SelectValue=ReturnValue[j].split(",");
          ReturnSelect.options[ReturnSelect.options.length]=
            new Option(SelectValue[1],SelectValue[0] + " " + SelectValue[1]);
            if (ReturnSelect.options.length=="1") {
              if (DescField != undefined) {
                DescField.value=SelectValue[1];
              }
            }
        }
      }
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status==0) {
          ReturnSelect.options.length=0
          if (DescField != undefined) {
            DescField.value="";
          }
          ReturnValue=returnValue.return_value.split("|");

          // sort our array of returned code/desc by ascending description order
          ReturnValue.sort(compare);

          // now we build our selection list
          for (var j=0; j < ReturnValue.length; j++) {
            if (!isWhitespace(ReturnValue[j])) {
              SelectValue=ReturnValue[j].split(",");
              ReturnSelect.options[ReturnSelect.options.length]=
                new Option(SelectValue[1],SelectValue[0] + " " + SelectValue[1]);
                if (ReturnSelect.options.length=="1") {
                  if (DescField != undefined) {
                    DescField.value=SelectValue[1];
                  }
                }
            }
          }
        }
      }
    );
  }
}
