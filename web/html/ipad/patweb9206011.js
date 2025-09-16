//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/patweb9206011.js
//
// Modification 
//
// Version         Date                         Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.00       28/06/2012                   New
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
}
function InitTable() {
  viewFlag=document.SelectPeriod.viewperd.value;
  for (var i =0 ; i < document.SelectPeriod.viewtype.length; i++) {
    if (document.SelectPeriod.viewtype.options[i].value==viewFlag) {
      document.SelectPeriod.viewtype.selectedIndex=i } };
  PatientRecords = new Table("patient-list","patient-item");
  t=PatientRecords;
  PatientList();
  for(var i = 0; i < PatientRecords.rows.length; i++) {
    strUrnumber=PatientRecords.rows[i][13]
    strAdmissno=PatientRecords.rows[i][12].replace(/.*admissno=/,"").substr(0,8).replace(/\+/g," ")
    PatientRecords.rows[i].unshift(strAdmissno);   //* Shift Admissno to Column 1
    PatientRecords.rows[i].unshift(strUrnumber);  //* Shift U/R to Column 0
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
   strFolder=FormatPatientIcon(PatientRecords.rows[i][33]);
   strDiagnosis=PatientRecords.rows[i][25].replace(/<nowrap>/,"").replace(/<br>/,"");
   OS += "<li class=sectionItem onclick='LinkPatient(\""+i+"\");'>" + 
         strFolder + PatientRecords.rows[i][2] +
         "<br><span class=ntTimeframe>Doctor : "+PatientRecords.rows[i][9] + "</span>" +
         "<span class=ntWhen>Unit : "+PatientRecords.rows[i][20] + "</span>" +
         "<br><span class=ntTimeframe>Adm Ward : "+PatientRecords.rows[i][51] + "</span>" +
         "<span class=ntWhen>Post Op : "+PatientRecords.rows[i][52] + "</span>" +
         "<br><span class=ntTimeframe>Diagnosis : "+ strDiagnosis + "</span>" +
         "<br><span class=ntTimeframe>Date : "+FormatDate(PatientRecords.rows[i][5]) + "</span>" +
         "<span class=ntWhen>Status: "+PatientRecords.rows[i][11] + "</span>" +
         "</li>";
 }
 if (PatientRecords.rows.length==0) {
   OS += "<li class=sectionItem style='text-align:center;'>" +
         "No bookings found in this period.</span>";
 }
 OS += "</ul><div>";
 CurrentDiv.innerHTML=OS;
}
function FormatPatientIcon(Indicators) {
  ImageStr="<span class=PatientFolder"+ Indicators.substr(0,3) + "></span>"
  return ImageStr;
}
