//jsVersion  : V11.03.00
//
function InitTable() {
 WardRecords = new Table("patient-list","patient-item");
 t=WardRecords;
 WardList();
 SortOrderBy=1;
 WardRecords.rows.sort(StringSort);
 CurrentDiv=document.getElementById("ListLocation");
 ShowWardList();
 MaxRowNo=t.rows.length;
}
function Table() {
   this.rows      = new Array();
   this.tableTotals = new Array();
   this.addRow    = _addTableRow;
   this.addTotal  = _addTableTotal;
}
function _addTableTotal() {
  for(var i = 0; i < arguments.length; i++)
     this.tableTotals[i] = arguments[i];
}
function LinkTo(URL) {
  parent.homePageTitle="Ward Patient List";
  parent.homePageURL  =URL;
  parent.ShowPage();
}
function ShowWardList() {
 var OS = "<table class=CumulativeResults><tr>"+
            "<td class=HeadingCell>Ward</td>"+
            "<td class='cellCenter HeadingCell'>Extn</td>"+
            "<td class='cellRight HeadingCell'>Expects</td>"+
            "<td class='cellRight HeadingCell'>Beds</td>"+
            "<td class='cellRight HeadingCell'>Open</td>"+
            "<td class='cellRight HeadingCell'>Patients</td>"+
            "<td class='cellRight HeadingCell'>Empty</td>"+
            "<td class='cellRight HeadingCell'>% Full</td>"+
            "<td  style='width:150px'class='HeadingCell'>Status</td></tr>";
 var styleRow="TableRowEven";
 for(var i = 0; i < WardRecords.rows.length; i++) {
   if (styleRow=="TableRowEven") styleRow="TableRowEven"; else styleRow="TableRowOdd";
   percentageVal = ""
   widthVal = "0"
   if (parseInt(WardRecords.rows[i][8],10)>0){
     percentageVal = WardRecords.rows[i][8] +"%"
     widthVal = parseInt(WardRecords.rows[i][9].replace(/ /g,''),10)*1.5
   }
   OS += "<tr class="+styleRow+" onclick=\"LinkTo('"+WardRecords.rows[i][0]+"');\">" +
         "<td>" + WardRecords.rows[i][1] + "</td>" +
         "<td class=cellCenter>" + WardRecords.rows[i][2] + "</td>" +
         "<td class=cellRight>" + WardRecords.rows[i][10] + "</td>" +
         "<td class=cellRight>" + WardRecords.rows[i][5] + "</td>" +
         "<td class=cellRight>" + WardRecords.rows[i][11] + "</td>" +
         "<td class=cellRight>" + WardRecords.rows[i][6] + "</td>" +
         "<td class=cellRight>" + WardRecords.rows[i][7] + "</td>" +
         "<td class=cellRight>" + percentageVal + "</td>" +
         "<td class=graphCell style='width:150px'><span class=graphBar  style='"+
         "width:" + widthVal + "px'>"+
         "</span></td></tr>";
 }
 OS += "<tr class=TableRowTotal>" +
       "<td style='font-weight:bold'>" + WardRecords.tableTotals[1] + "</td>" +
       "<td>" + WardRecords.tableTotals[2] + "</td>" +
       "<td class=cellRight style='font-weight:bold'>" + WardRecords.tableTotals[10] + "</td>" +
       "<td class=cellRight style='font-weight:bold'>" + WardRecords.tableTotals[5] + "</td>" +
       "<td class=cellRight style='font-weight:bold'>" + WardRecords.tableTotals[11] + "</td>" +
       "<td class=cellRight style='font-weight:bold'>" + WardRecords.tableTotals[6] + "</td>" +
       "<td class=cellRight style='font-weight:bold'>" + WardRecords.tableTotals[7] + "</td>" +
       "<td class=cellRight style='font-weight:bold'>" + WardRecords.tableTotals[8] + "% </td>" +
         "<td class=graphCell style='width:150px'><span class=graphBar  style='"+
         "width:" + parseInt(WardRecords.tableTotals[9].replace(/ /g,''),10)*1.5 + "px'>"+
         "</span></td></tr>";
 OS += "</table>";
 CurrentDiv.innerHTML=OS;
}
function SortWards(el) {
 SortOrderBy=el.options[el.selectedIndex].value;
 WardRecords.rows.sort(StringSort);
 CurrentDiv=document.getElementById("ListLocation");
 ShowWardList();
}
