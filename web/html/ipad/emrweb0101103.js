//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/emrweb0102103.js
//
// Modification 
//
// Version         Date                         Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.00       13/04/2012                   Version change
// V10.00.00       13/04/2012                   Created for Mobility Suite
//
function SortPatients(el) {
 SortOrderBy=el.options[el.selectedIndex].value;
 PatientRecords.rows.sort(StringSort);
 CurrentDiv=document.getElementById("ListLocation");
 ShowPatientList();
 RemovePatDiv();
}
function InitTable() {
 if (document.SelectPeriod.viewtype!=undefined) {
 for (var i =0 ; i < document.SelectPeriod.viewtype.length; i++) {
  if (document.SelectPeriod.viewtype.options[i].value==document.SelectPeriod.view.value) {
     document.SelectPeriod.viewtype.selectedIndex=i } };
 }
 PatientRecords = new Table("patient-list","patient-item");
 obj=PatientRecords;
 t=PatientRecords;
 PatientList();
 SortOrderBy=33;
 PatientRecords.rows.sort(StringSort);
 CurrentDiv=document.getElementById("ListLocation");
 ShowPatientList(1);
 MaxRowNo=t.rows.length;
}
function FilterList(el,ColumnNo) {
  for(var f = 0; f < FilterColumn.length; f++) {
    if (FilterColumn[f]==ColumnNo) {
       FilterValue[f]=el.options[el.selectedIndex].value;
    }
  }
 CurrentDiv=document.getElementById("ListLocation");
 ShowPatientList();
 RemovePatDiv();
}
function ShowPatientList() {
 var OS = "<div class=sectionDiv>" +
          "<ul class=sectionList>";
 for(var i = 0; i < PatientRecords.rows.length; i++) {
   OS += "<li class=sectionItem onclick=\""+PatientRecords.rows[i][0].replace(/javascript:/i,"")+"\">" + 
         PatientRecords.rows[i][2]+ 
         "<br><span class=subscriptLeft>Problem: "+PatientRecords.rows[i][4] + "</span>" +
         "<span class=subscriptRight>Notified: "+
          FormatCommentAge(PatientRecords.rows[i][12]+PatientRecords.rows[i][13]) + 
         " ("+FormatDateTime(PatientRecords.rows[i][12]+PatientRecords.rows[i][13]) + ")" +"</span>" +
         "<br><span class=subscriptLeft>Amb Case: "+PatientRecords.rows[i][30] + "</span>" +
         "<span class=subscriptRight>Expected Room: "+PatientRecords.rows[i][31] + "</span>" +
         "<br><span class=ntTimeframe>Expected: "+FormatCommentAge(PatientRecords.rows[i][33]) + "</span>"+
         "<span class=ntWhen>"+FormatDateTime(PatientRecords.rows[i][33]) + "</span>" +
         "</span></li>";
 }
 OS += "</ul><div>";
 CurrentDiv.innerHTML=OS;
}
function SelectPatient(ExpectID) {
//  linkurl=CGIPath+"emrweb02.pbl?reportno=2&template=104&formactn=SP&emexp001="+ExpectID.replace(/ /g,"+");
//  linktitle="Emergency Triage";
//  openDocument(linkurl,linktitle);
}
