//jsVersion  : V11.03.00
//------------------------------------------------------------
// Function : patweb9801036.js
//------------------------------------------------------------

function TableBody() {
 filteredRows=0;
 RowClass="TableRowEven"
 for(var i = 0; i < t.rows.length; i++) {
  if (TableFilter(t.rows[i])){
   filteredRows++;
   if (RowClass=="TableRowEven") { RowClass="TableRowOdd" }
   else                          { RowClass="TableRowEven" }
   
   if(t.rows[i][13]!=undefined && t.rows[i][13]=="1") {
      RowClass="TableRowChartReview"
   }

   TableString[TableString.length] = "<tr id='row_"+i+"' height=" + t.RowHeight + " class=" + RowClass + ">" ;
   for(var j = 0; j < t.columns.length; j++) {
     TableString[TableString.length] = "<td align=" + t.columns[j][4]  ;
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
            TableString[TableString.length] = "</font><b>" }
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
       default    :   
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
