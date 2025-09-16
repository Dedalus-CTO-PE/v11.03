//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/patweb9201318.js
//
// Modification 
//
// Version         Date                         Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.00       13/04/2012                   Version change
// V10.01.00       13/04/2012                   Version change
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
  PatientRecords = new Table("patient-list","patient-item");
  t=PatientRecords;
  PatientList();
  SortOrderBy=4;
  PatientRecords.rows.sort(StringSort);
  CurrentDiv=document.getElementById("ListLocation");
  ShowPatientList(1);
  MaxRowNo=t.rows.length;
}
function ShowPatientList() {
 var OS = "<div class=sectionDiv>" +
          "<ul class=sectionList>";
 for(var i = 0; i < PatientRecords.rows.length; i++) {
   PatientRecords.rows[i][0]= PatientRecords.rows[i][1]
   PatientRecords.rows[i][1]= PatientRecords.rows[i][2]
   strWard=PatientRecords.rows[i][5].split("/")[0]
   strBed=PatientRecords.rows[i][5].split("/")[1]
   strFolder=FormatPatientIcon(PatientRecords.rows[i][25])
   OS += "<li class=sectionItem onclick='LinkPatient(\""+i+"\");'>" + 
         strFolder + PatientRecords.rows[i][3] +
         "<br><span class=subscriptLeft>Admitted:"+FormatDate(PatientRecords.rows[i][6]) + "</span>" +
         "<span class=subscriptRight>Exp. Discharge:"+PatientRecords.rows[i][16] + "</span>" +
         "<br>"+
         "<span class=subscriptLeft>Ward: "+strWard+"&nbsp;Bed: "+strBed + "</span>" +
         "<span class=subscriptRight>Doctor: "+PatientRecords.rows[i][9] + "</span>" +
         "</li>";
 }
 OS += "</ul><div>";
 CurrentDiv.innerHTML=OS;
}
function FormatPatientIcon(Indicators) {
  ImageStr="<span class=PatientFolder"+ Indicators.substr(0,3) + "></span>"
  return ImageStr;
}
