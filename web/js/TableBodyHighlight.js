//jsVersion  : V11.03.00
//=============================================================================
// File      : TableBodyHighlight.js
//
// Written   : 01.07.2004  Sylvek Litewka
//
// Function  : To allow highlighting of table sort table fields.
//---------------------------------------------------------------------- 
// V10.11.01 12/10/2017 Don Nguyen        TSK 0842027
//           Fixed <td> padding issue for columns alignment
// V10.03.02 22.08.2013 Peter Vela        CAR 290544
//           Added filtered rows functionality
// V10.03.01 29.04.2013 Ebon Clements     CAR 257211
//           Added functionality to assign a class to a <td>
// V9.04.01  01.07.2005 Ebon Clements 55997
//           Added using IE6 test as array .join is not available in IE5
// V9.04.00  Ebon Clements CAR 55997
//           TableBodyHighlight.js with arrays for TableString. 
//           TableBodyHighlightOLD.js is the save copy of this before the 
//           array changes.
//----------------------------------------------------------------------
// Version   : V9.03.00  01.07.2004  Sylvek Litewka  CAR 50667
//                       Added function 'HighlightAdhocSessions()'. 
//
//=============================================================================

// This function is a copy of 'TableBody()' function from TableSort.js
// with modifications to highligh the Adhoc theatre sessions by changing
// the background color (class) of the required table cell.
//
// Parameters:
// indcolumn - the column number that contains the Session status value.
//             Status = 0 : Cancelled Session
//             Status = 1 : Active Session
//             Status = 2 : Active Extra Session (Adhoc Session)
function HighlightAdhocSessions(indcolumn) {
 filteredRows=0;
 for(var i = 0; i < t.rows.length; i++) {
  if (TableFilter(t.rows[i])){
   filteredRows++;
   RowClass="TableRowEven"
   if (i%2==1) { RowClass="TableRowOdd" }
   TableString[TableString.length] = "<tr height=" + t.RowHeight + " class=" + RowClass + ">" ;
   for(var j = 0; j < t.columns.length; j++) {
     TableString[TableString.length] = "<td style='padding:0px 5px' align=" + t.columns[j][4]  ;

     if (j == 0) {
       if (t.rows[i][indcolumn] == "2") {        
         TableString[TableString.length] = " class=AdhocTheatreSes ";  // Adhoc Session
       }
     } else  {
       if(t.columns[j][11]!=undefined) {
         if(!isWhitespace(t.rows[i][t.columns[j][11]])) {
           TableString[TableString.length] = " class=" +
                                             t.rows[i][t.columns[j][11]]  ;
         }
       }
     }

     TableString[TableString.length] = " width=" + t.columns[j][7] + ">" ;
     LinkColumn = t.columns[j][6];
     LinkFlag = 0
     ImgString = t.columns[j][5];
     if (LinkColumn != "") {
       LinkHref = t.rows[i][t.columns[j][6]];
       if (LinkHref != ""){
         TableString[TableString.length] = "<a href=\"" + LinkHref.replace(/\s*$/,"") + "\">"
         LinkFlag = 1 }
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
       case "DateTime" :
         FormatIcon();
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
       case "Patient":
         FormatPatientIcon(t.rows[i][t.columns[j][8]])
         TableString[TableString.length] = t.rows[i][t.columns[j][2]];
         if ( LinkFlag ) { TableString[TableString.length] = "</a>"; }
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
}
