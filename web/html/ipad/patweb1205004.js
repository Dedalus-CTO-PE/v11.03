//jsVersion  : V11.03.00
//
//------------------------------------------------------------
//  List Unallocated Expected Patients
//  Version  : V10.03.00
//------------------------------------------------------------
function SetPeriod(el) {
  if (el.vyearmth) el.vyearmth.options[el.vyearmth.selectedIndex].value=' ';
  if (el.lastdate) el.lastdate.options[el.lastdate.selectedIndex].value=' ';
  el.submit();
}
function InitTable() {
 PatientRecords = new Table("patient-list","patient-item");
 t=PatientRecords;
 PatientList();
 SortOrderBy=1;
 PatientRecords.rows.sort(StringSort);
 CurrentDiv=document.getElementById("ListLocation");
 ShowPatientList();
 MaxRowNo=t.rows.length;
}
function LinkTo(urnumber,admissno) {
  linkurl="patweb12.pbl?reportno=04&template=02" +
          "&urnumber=" + urnumber.replace(/ /g,"+") +
          "&admissno=" + admissno.replace(/ /g,"+") 
  theURL = CGIPath+linkurl + '&httprand='+Math.random();
  openDocumentNonZoomable(theURL,"Update Expected Ward/Bed ");
}
function ShowPatientList() {
 var OS = "<div class=sectionDiv>" +
          "<ul class=sectionList>";
 for(var i = 0; i < PatientRecords.rows.length; i++) {
   strFolder=FormatPatientIcon(PatientRecords.rows[i][3])
   linkTo="LinkTo('"+PatientRecords.rows[i][0]+"','"+PatientRecords.rows[i][1]+"');"
   OS += "<li class=sectionItem onclick=\""+linkTo+"\");\">" + strFolder +
         PatientRecords.rows[i][2] +
         "<br><span class=ntTimeframe>Admission:"+FormatDateTime(PatientRecords.rows[i][4])+"</span>"  +
         "<span class=ntWhen>Visit No:"+PatientRecords.rows[i][1]+"</span>"  +
         "<br>"+
         "<span class=subscriptCenter>Diagnosis:"+PatientRecords.rows[i][22] + "</span>" +
         "<span class=subscriptLeft>Doctor: "+PatientRecords.rows[i][15]+ "</span>" +
         "<span class=subscriptRight>Speciality: "+PatientRecords.rows[i][16] + "</span>" +
         "<br>"+
         "<span class=subscriptCenter>Health Fund:"+PatientRecords.rows[i][19]+ "</span>" +
         "</li>";
 }
 if (PatientRecords.rows.length==0) {
   OS += "<li class=sectionItem style='text-align:center;'>" +
         "No Patients found waiting Ward/Bed Allocation</li>";
 }
 OS += "</ul><div>";
 CurrentDiv.innerHTML=OS;
}
function FormatPatientIcon(Indicators) {
  ImageStr="<span class=PatientFolder"+ Indicators.substr(0,3) + "></span>"
  return ImageStr;
}
function SortPatients(el) {
 SortOrderBy=el.options[el.selectedIndex].value;
 PatientRecords.rows.sort(StringSort);
 CurrentDiv=document.getElementById("ListLocation");
 ShowPatientList();
}
function init() {
 viewFlag=document.SelectPeriod.viewperd.value;
 for (var i =0 ; i < document.SelectPeriod.viewtype.length; i++) {
  if (document.SelectPeriod.viewtype.options[i].value==viewFlag) {
     document.SelectPeriod.viewtype.selectedIndex=i } };
 InitTable();
}
