//------------------------------------------------------------
// Source Code  : cliweb0201006.js
//
// Function     : Grid View of Observations
//
// Modification :
//
// V10.00.02 14.02.2014 B.G.Ackland CAR 279466
//                      Square Root BSA number returned from server for display
// V10.00.01 21.03.2013 B.G.Ackland CAR 279466
//                      Pad Grid to 10 Columns
// V10.00.00 05.03.2013 B.G.Ackland CAR 279466
//                      NSW Between the Flags Alert Icons for MUH
//------------------------------------------------------------
var OS;
var startRow;
var endRow;
var GraphLocation;
var GraphString;
var GraphBase;
var GraphHeight=400;
var GraphWidth=800;
function init() {
  var TableLocation=document.getElementById("TableLocation");
  GraphLocation=document.getElementById("GraphLocation");
  t = new Table();
  if(typeof AddObservationRows != 'undefined') {
    AddObservationRows();
  }
  else {
    TableLocation.innerHTML = "<ul class=ListRes>" +
                              "<li class=ItemRes style='text-align:center;'>" +
                              "No Observations Recorded for this Patient</li>"+
                              "<li class=ItemRes></li></ul>"
    return;;
  }
  SortOrderBy=1;
  t.rows.sort(StringSort);
  startRow=t.rows.length-10;
  if (startRow<0) startRow=0
  DisplayTable(startRow);
}
function ShowOlder() {
  if (startRow==0) {
    alert("No More Observations to View"); 
    return;
  }
  startRow=startRow-5;
  if (startRow<0) startRow=0;
  DisplayTable(startRow);
}
function ShowNewer() {
  if (startRow==t.rows.length-10) {
    alert("No More Observations to View"); 
    return;
  }
  startRow=startRow+5;
  if (startRow+10>t.rows.length) {
     startRow=t.rows.length-10 
  }
  DisplayTable(startRow);
}
function DisplayTable(sr) {
  OS='';
  startRow=sr;
  endRow=parseInt(startRow,10)+10;
  if (endRow>t.rows.length) endRow=t.rows.length;
  OS+='<table class="CumulativeResults">'+
     '<tr><td class=headingCell>'+
     '<input type=button style="width:25px;" value="<" onclick=ShowOlder()>'+
     '&nbsp;Date' +
     '<br>'+
     '<input type=button style="width:25px;" value=">" onclick=ShowNewer()>'+
     '&nbsp;Time</td>';
  var colCount=0;
  for(var i = startRow; i < endRow; i++) {
      colCount++;
      OS+="<td align=right class=HeadingCell>"+FormatDateTime(t.rows[i][1])+"</td>"
  }
  for(var i = colCount; i < 10 ; i++) {
    OS+="<td class=HeadingCell>&nbsp;</td>";
  }
  OS+="</tr>"
  TableOutputRow(0,'Basic','TableRowHeading','TableCellRight','Blank')
  TableOutputRow(4,'Pulse','TableRowEven','TableCellRight','Pulse')
  TableOutputRow(5,'Temperature','TableRowOdd','TableCellRight','Temp')
  TableOutputRow(6,'Respiration','TableRowEven','TableCellRight','Resp')
  TableOutputRow(7,'Blood Pressure','TableRowOdd','TableCellRight','BP')
  TableOutputRow(8,'Oxygen Sats. ','TableRowEven','TableCellRight','OxySat')
  TableOutputRow(9,'Oxygen Flow. ','TableRowOdd','TableCellRight','OxyFlow')
  TableOutputRow(28,'Blood Sugar ','TableRowEven','TableCellRight','BSL')
  TableOutputRow(36,'Pain Level ','TableRowOdd','TableCellRight','Pain')
  TableOutputRow(29,'Level of Con. ','TableRowEven','TableCellRight','Neuro')
  TableOutputRow(19,'Cardiac Rhythm','TableRowOdd','TableCellRight','')
  TableOutputRow(27,'Bowel Action','TableRowOdd','TableCellRight','')
  TableOutputRow(0,'Height/Weight','TableRowHeading','TableCellRight','Blank')
  TableOutputRow(40,'Weight ','TableRowOdd','TableCellRight','HW')
  TableOutputRow(41,'Height ','TableRowEven','TableCellRight','HW')
  TableOutputRow(38,'BMI ','TableRowOdd','TableCellRight','HW')
  TableOutputRow(39,'BSA ','TableRowEven','TableCellRight','BSA')
  TableOutputRow(0,'Neurological','TableRowHeading','TableCellRight','Blank')
  TableOutputRow(15,'Eyes ','TableRowOdd','TableCellRight','GCS')
  TableOutputRow(16,'Verbal ','TableRowEven','TableCellRight','GCS')
  TableOutputRow(17,'Motor ','TableRowOdd','TableCellRight','GCS')
  TableOutputRow(18,'GCS ','TableRowEven','TableCellRight','GCS')
  TableOutputRow(23,'Entered By','TableRowEven','TableCellCenter','Initials')
  TableOutputRow(20,'Comment','TableRowOdd','TableCellRight','')
  OS+="</table>"
  TableLocation.innerHTML=OS;
}
function ViewChart(el) {
  opt=el.options[el.selectedIndex].value;
  el.selectedIndex=0;
  switch (opt) {
    case "B":
     GraphAll();
     break;
    case "O":
     GraphO2SaO2() 
     break;
    case "P":
     GraphColumn("Pain",36);
     break;
    case "S":
     GraphColumn("Blood Sugar",28);
     break;
    case "N":
     GraphNeuro();
     break;
    case "H":
     GraphAllHW();
     break;
  }
}
function graphDateTime() {
  return;
}
function graphInitials() {
  return;
}
function graphPulse() {
  GraphBasic("Pulse",4);
  return;
}
function graphTemp() {
  GraphBasic("Temperature",5);
  return;
}
function graphResp() {
  GraphBasic("Repiration",6);
  return;
}
function graphBP() {
  GraphBP()
  return;
}
function graphHW() {
  GraphHW()
  return;
}
function graphGCS() {
  GraphNeuro();
  return;
}
function graphBSL() {
  GraphColumn("Blood Sugar",28);
  return;
}
function graphOxySat() {
  GraphO2SaO2() 
  return;
}
function graph() {
  return;
}
function TableOutputRow(columnNo,rowTitle,tableRowClass,tableCellClass,rowFormat) {
  OS+='<tr class='+tableRowClass+'><td>'+rowTitle+'</td>';
  var colCount=0;
  for(var i = startRow; i < endRow ; i++) {
    colCount++;
    switch(rowFormat) {
     case "Blank": 
       OS+="<td class="+tableCellClass+">&nbsp;</td>";
       break;
     case "DateTime": 
       OS+="<td class="+tableCellClass+">"+FormatDateTime(t.rows[i][columnNo])+"</td>";
       break;
     case "Initials": 
       OS+="<td class="+tableCellClass+">"+FormatInitials(t.rows[i][columnNo])+"</td>";
       break;
     case "Pulse": 
       alertClass=CheckPulse(t.rows[i][columnNo]);
       OS+="<td class='"+alertClass+" "+tableCellClass+"'>"+t.rows[i][columnNo]+"</td>";
       break;
     case "Resp": 
       alertClass=CheckResp(t.rows[i][columnNo]);
       OS+="<td class='"+alertClass+" "+tableCellClass+"'>"+t.rows[i][columnNo]+"</td>";
       break;
     case "Temp": 
       alertClass=CheckTemp(t.rows[i][columnNo]);
       OS+="<td class='"+alertClass+" "+tableCellClass+"'>"+t.rows[i][columnNo]+"</td>";
       break;
     case "BSA": 
       bsa=Math.round(100*(Math.sqrt(t.rows[i][columnNo],10)))/100;
       OS+="<td class="+tableCellClass+">"+bsa +"</td>";
       break;
     case "BP": 
       alertClass=CheckBP(t.rows[i][columnNo]);
       OS+="<td class='"+alertClass+" "+tableCellClass+"'>"+t.rows[i][columnNo]+"</td>";
       break;
     case "Neuro": 
       alertClass=CheckNeuro(t.rows[i][columnNo]);
       NeuroName="";
       switch (parseInt(t.rows[i][columnNo],10)) {
         case 1: NeuroName="Unresponsive";break;
         case 2: NeuroName="Pain";break;
         case 3: NeuroName="Agitated/Confused";break;
         case 4: NeuroName="Voice";break;
         case 5: NeuroName="Alert";break;
       }
       OS+="<td class='"+alertClass+" "+tableCellClass+"'>"+NeuroName+"</td>";
       break;
     case "BSL": 
       if (t.rows[i][columnNo]>0) {
         alertClass=CheckBSL(t.rows[i][columnNo]);
         OS+="<td class='"+alertClass+" "+tableCellClass+"'>"+t.rows[i][columnNo]+"</td>";
       } else {
         OS+="<td class="+tableCellClass+">&nbsp;</td>";
       }
       break;
     case "OxySat": 
       alertClass=CheckOxySat(t.rows[i][columnNo]);
       OS+="<td class='"+alertClass+" "+tableCellClass+"'>"+t.rows[i][columnNo]+"</td>";
       break;
     default:
       OS+="<td class="+tableCellClass+">"+t.rows[i][columnNo]+"</td>";
    }
  }
  for(var i = colCount; i < 10 ; i++) {
    OS+="<td class="+tableCellClass+">&nbsp;</td>";
  }
  OS+="</tr>"
}
function FormatInitials(Name) {
 NameFields=Name.split(" ");
 Initials=""
 for (i=0;i<NameFields.length;i++) {
   Initials+=NameFields[i].substr(0,1)
 }
 return( "<p title=\""+Name+"\">" + Initials + "</p>");
}
//------------------------------------------------------------
// iPhone List (Derived from Original Table Sort JS)
//------------------------------------------------------------
function Table(PatientID) {
   this.PatientID = PatientID;
   this.rows      = new Array();
   this.addRow    = _addTableRow;
   this.AddPatient= _addTableRow;
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

function _addTableRow() {
  this.rows[this.rows.length] = new Array();
  var row = this.rows[this.rows.length-1];
  for(var i = 0; i < arguments.length; i++) 
     row[row.length] = arguments[i];
}
function FD(ccyymmdd) {
  yrr=ccyymmdd.substring(0,4);
  mth=mth3Name(ccyymmdd.substring(4,6));
  day=ccyymmdd.substring(6,8);
  ret = day+ " "+ mth+ " "+ yrr;
  return ret
}

function FormatCommentAge(datetime) {
 yyyy = datetime.substr(0,4);
 mm = datetime.substr(4,2);
 dd = datetime.substr(6,2);
 hh = datetime.substr(8,2);
 mi = datetime.substr(11,2);
 if (isWhitespace(hh)) hh="00"
 if (isWhitespace(mi)) hh="01"
 var thisDate= new Date(yyyy,parseInt(mm,10)-1,dd,hh,mi);
 var today= new Date();
 if (isWhitespace(clientOffsetTime)) { setServerDateTime(); }
 today.setTime(today.getTime() + parseInt(trim(clientOffsetTime),10));
 var one_min=1000*60
 var one_hour=1000*60*60
 var one_day=1000*60*60*24
 var one_week=1000*60*60*24*7
 var one_month=1000*60*60*24*30
 var one_year=1000*60*60*24*365
 mid=Math.ceil((today.getTime()-thisDate.getTime())/(one_min))
 hrd=Math.ceil((today.getTime()-thisDate.getTime())/(one_hour))
 dyd=Math.ceil((today.getTime()-thisDate.getTime())/(one_day))
 wkd=Math.ceil((today.getTime()-thisDate.getTime())/(one_week))
 mtd=Math.ceil((today.getTime()-thisDate.getTime())/(one_month))
 ytd=Math.ceil((today.getTime()-thisDate.getTime())/(one_year))
 if (ytd>2) return ytd+' years ago';
 if (mtd>2) return mtd+' months ago';
 if (wkd>2) return wkd+' weeks ago';
 if (dyd>2) return dyd+' days ago';
 if (hrd>2) return hrd+' hours ago';
 if (mid<0) return ' ';
 return mid+' minutes ago';
}
function ButtonDateTime(datetime) {
   yyyy = datetime.substr(0,4);
   mm = datetime.substr(4,2);
   dd = datetime.substr(6,2);
   time = datetime.substr(8,5);
   mth3=mth3Name(mm);
   if (isWhitespace(time)) {
      return(dd + " " + mth3 + " " + yyyy); }
   else {
     return(dd + " " + mth3 + " at " + time); }
}
function FormatDateTime(datetime) {
   yyyy = datetime.substr(0,4);
   mm = datetime.substr(4,2);
   dd = datetime.substr(6,2);
   time = datetime.substr(8,5);
   mth3=mth3Name(mm);
   if (isWhitespace(time)) {
      return(dd + " " + mth3 + " " + yyyy); }
   else {
     return(dd + " " + mth3 + " <br> " + time); }
}

function FormatDate(date) {
   yyyy = date.substr(0,4)
   mm = date.substr(4,2)
   dd = date.substr(6,2)
   mth3=mth3Name(mm);
   return(dd + " " + mth3 + " " + yyyy  );
}
function mth3Name(mm) {
   mth3="";
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
  return mth3;
}

function Mth3Num(mmm) {
   switch(mmm) {
     case "Jan": mth3="01"; break;
     case "Feb": mth3="02"; break;
     case "Mar": mth3="03"; break;
     case "Apr": mth3="04"; break;
     case "May": mth3="05"; break;
     case "Jun": mth3="06"; break;
     case "Jul": mth3="07"; break;
     case "Aug": mth3="08"; break;
     case "Sep": mth3="09"; break;
     case "Oct": mth3="10"; break;
     case "Nov": mth3="11"; break;
     case "Dec": mth3="12"; break;
   }
  return mth3;
}
function CheckNeuro(thisValue) {
  if (!isWhitespace(thisValue)) {
    if (parseInt(thisValue)==1) {
       return "AlertLevel2";
    }
    if (parseInt(thisValue)==2) {
       return "AlertLevel1";
    }
  }
  return "";
}
function CheckPulse(thisValue) {
  if (!isWhitespace(thisValue)) {
    if (parseInt(thisValue,10)<40) {
       return "AlertLevel2";
    }
    if (parseInt(thisValue,10)>140) {
       return "AlertLevel2";
    }
    if (parseInt(thisValue,10)<50) {
       return "AlertLevel1";
    }
    if (parseInt(thisValue,10)>120) {
       return "AlertLevel1";
    }
  }
  return "";
}
function CheckResp(thisValue) {
  if (!isWhitespace(thisValue)) {
    if (parseInt(thisValue,10)<5) {
       return "AlertLevel2";
    }
    if (parseInt(thisValue,10)>30) {
       return "AlertLevel2";
    }
    if (parseInt(thisValue,10)<10) {
       return "AlertLevel1";
    }
    if (parseInt(thisValue,10)>25) {
       return "AlertLevel1";
    }
  }
  return "";
}
function CheckTemp(thisValue) {
  if (!isWhitespace(thisValue)) {
    if (thisValue<35.5) {
      return "AlertLevel1";
    }
    if (thisValue>38.5) {
      return "AlertLevel1";
    }
  }
  return "";
}

function CheckBSL(thisValue) {
  if (!isWhitespace(thisValue)) {
    if (thisValue<1) {
       return "AlertLevel2";
    }
    if (thisValue<4) {
       return "AlertLevel1";
    }
  }
  return "";
}
function CheckBP(thisValue) {
  if (!isWhitespace(thisValue.replace(/\/.*/,""))) { /* BP */
    if (parseInt(thisValue.replace(/\/.*/,""),10)<90) {
       return "AlertLevel2";
    }
    if (parseInt(thisValue.replace(/\/.*/,""),10)>200) {
       return "AlertLevel2";
    }
    if (parseInt(thisValue.replace(/\/.*/,""),10)<100) {
       return "AlertLevel1";
    }
    if (parseInt(thisValue.replace(/\/.*/,""),10)>180) {
       return "AlertLevel1";
    }
  }
  return "";
}
function CheckOxySat(thisValue) {
  if (!isWhitespace(thisValue)) { /* Pulse */
    if (parseInt(thisValue,10)<90) {
       return "AlertLevel2";
    }
    if (parseInt(thisValue,10)<95) {
       return "AlertLevel1";
    }
  }
  return "";
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
 GraphLocation.style.background="white";
 GraphLocation.style.border="1px #ccc solid";
 GraphLocation.style.top=80
 GraphLocation.style.left=200
 GraphLocation.style.width=GraphWidth+2
 GraphLocation.style.height=400
 GraphLocation.style.display="";
 GraphLocation.innerHTML='<span class=DFrameTitleBar  onclick="CloseJavaChart();">' +
                         'Loading Graph Data Please Wait...</span>' 
 GraphLocation.style.display="";
 GraphBase = 'codebase=../ ';
 if (window.navigator.userAgent.indexOf("MSIE 6.0")>=1
     || window.navigator.userAgent.indexOf("MSIE 7.0")>=1) {
   if(top.location.pathname.match(/EmergencyMap/g)) {
     GraphBase = 'codebase=../ ';
   }
   else {
     GraphBase = 'codebase="../../" ';
   }
 }
 GraphString='<span class=DFrameTitleBar onclick="CloseJavaChart();">' +
  '<div class="x-tool x-tool-close"></div>'+
  'Chart Observations' +
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
        '<param name=yAxisLabelCount value="10">' +
        '<param name=yAxisTickCount value="10">' +
        '<param name=yAxisGridCount value="10">' +
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
        '<param name=yAxisLabelCount value="10">' +
        '<param name=yAxisTickCount value="10">' +
        '<param name=yAxisGridCount value="10">' +
        '<param name=yAxisStart value="10">' +
        '<param name=yAxisEnd value="40">' +
        '<param name=titleString value="' + GraphTitle + '">' +
        '<param name=dataset0Image value="images/GraphTickBlue.gif">'+
	'<param name=dataset0Name value="' + GraphTitle + '">' +
	'<param name=dataset1Name value="Normal Min">' +
	'<param name=dataset2Name value="Normal Max">' +
        '<param name=dataset0dateValues value="' + Dataset0dateValue + '">' +
        '<param name=dataset0yValues value="' + Dataset0yValue + '">' +
        '<param name=dataset1dateValues value="' + Dataset1dateValue + '">' +
       '<param name=dataset1Color value="darkred">' +
        '<param name=dataset1yValues value="' + Dataset1yValue + '">' +
        '<param name=dataset2dateValues value="' + Dataset2dateValue + '">' +
       '<param name=dataset2Color value="darkred">' +
        '<param name=dataset2yValues value="' + Dataset2yValue + '">' 
 EndHW()
}
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
        '<param name=yAxisLabelCount value="10">' +
        '<param name=yAxisTickCount value="10">' +
        '<param name=yAxisGridCount value="10">' +
        '<param name=yAxisStart value="0">' +
        '<param name=yAxisEnd value="200">' 
 }
 if (GraphTitle=="Height") {
   GraphString += '<param name=yAxisOptions value="gridOn tickOn noAutoScale">'+
        '<param name=yAxisLabelCount value="10">' +
        '<param name=yAxisTickCount value="10">' +
        '<param name=yAxisGridCount value="10">' +
        '<param name=yAxisStart value="0">' +
        '<param name=yAxisEnd value="250">' 
 }
 if (GraphTitle=="BSA") {
   GraphString += '<param name=yAxisOptions value="gridOn tickOn noAutoScale">'+
        '<param name=yAxisLabelCount value="10">' +
        '<param name=yAxisTickCount value="10">' +
        '<param name=yAxisGridCount value="10">' +
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
