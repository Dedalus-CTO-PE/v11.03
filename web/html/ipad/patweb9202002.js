//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/patweb9202002.js
//
// Modification 
//
// Version         Date                         Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.01.00       28/06/2012                   New
//
function SetPeriod(el) {
  if (el.vyearmth) el.vyearmth.options[el.vyearmth.selectedIndex].value=' ';
  if (el.lastdate) el.lastdate.options[el.lastdate.selectedIndex].value=' ';
  el.submit();
}
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
// Reformat List for UR, Visit, Name in first 3 columnes
  for(var i = 0; i < PatientRecords.rows.length; i++) {
    strUrnumber=PatientRecords.rows[i][16].replace(/.*urnumber=/,"").substr(0,8).replace(/\+/g," ")
    strAdmissno=PatientRecords.rows[i][16].replace(/.*admissno=/,"").substr(0,8).replace(/\+/g," ")
    PatientRecords.rows[i][2]=PatientRecords.rows[i][0] 
    PatientRecords.rows[i][0]=strUrnumber
    PatientRecords.rows[i][1]=strAdmissno
  }
  SortOrderBy=2;
  PatientRecords.rows.sort(StringSort);
  CurrentDiv=document.getElementById("ListLocation");
  ShowPatientList();
  MaxRowNo=t.rows.length;
}
function ShowPatientList() {
 var OS = "<div class=sectionDiv>" +
          "<ul class=sectionList>";
 for(var i = 0; i < PatientRecords.rows.length; i++) {
   strFolder=FormatPatientIcon(PatientRecords.rows[i][23])
   discDateTime=PatientRecords.rows[i][4]+""+PatientRecords.rows[i][21]
   OS += "<li class=sectionItem onclick='LinkPatient(\""+i+"\");'>" + 
         strFolder + PatientRecords.rows[i][2] +
         "<br><span class=ntTimeframe>Admitted:"+FormatDate(PatientRecords.rows[i][3]) + "</span>" +
         "<span class=ntWhen>Doctor: "+PatientRecords.rows[i][7] + "</span>" +
         "<br><span class=ntTimeframe>Type:"+PatientRecords.rows[i][22] + "</span>" +
         "<span class=ntWhen>Unit: "+PatientRecords.rows[i][14] + "</span>" +
         "<br>"+
         "<span class=ntTimeframe>Discharged:"+FormatDateTime(discDateTime)+ "</span>" +
         "<span class=ntWhen>"+FormatCommentAge(discDateTime) + "</span>" +
         "</li>";
 }
 OS += "</ul><div>";
 CurrentDiv.innerHTML=OS;
}
function FormatPatientIcon(Indicators) {
  ImageStr="<span class=PatientFolder"+ Indicators.substr(0,3) + "></span>"
  return ImageStr;
}
