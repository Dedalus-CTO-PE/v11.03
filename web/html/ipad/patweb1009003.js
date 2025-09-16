//jsVersion  : V11.03.00
//
//------------------------------------------------------------
//  List Bed Request
//  Version  : V10.03.00
//  V10.03.01 24.07.2013 B.G.Ackland CAR 288223 
//                       Removed Commented Code Segments 
//------------------------------------------------------------
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
function UpdateRequest(vis,dat,tim,ur) {
  linkurl="patweb10.pbl?reportno=08&template=013" +
          "&urnumber=" + ur.replace(/ /g,"+") +
          "&admissno=" + vis.replace(/ /g,"+") +
          "&pmbrq001=" + vis.replace(/ /g,"+") +
          "&pmbrq002=" + dat.replace(/ /g,"+") +
          "&pmbrq003=" + tim.replace(/ /g,"+")
  theURL = CGIPath+linkurl + '&httprand='+Math.random();
  openDocumentNonZoomable(theURL,"Update Bed Request ");
}
function ShowPatientList() {
 var OS = "<div class=sectionDiv>" +
          "<ul class=sectionList>";
 for(var i = 0; i < PatientRecords.rows.length; i++) {
   strWard=PatientRecords.rows[i][4].split("/")[0]
   strBed=PatientRecords.rows[i][4].split("/")[1]
   strFolder=FormatPatientIcon(PatientRecords.rows[i][20])
   linkTo=PatientRecords.rows[i][0].replace(/javascript:/,"");
   OS += "<li class=sectionItem onclick=\""+linkTo+"\");\">" + strFolder +
         PatientRecords.rows[i][21] +
         "<br><span class=subscriptLeft>Expected:"+PatientRecords.rows[i][11] + "</span>" +
         "<span class=subscriptRight>Status:"+PatientRecords.rows[i][7] + "</span>" +
         "<br>"+
         "<span class=subscriptLeft>Type: "+PatientRecords.rows[i][6]+ "</span>" +
         "<span class=subscriptRight>Dept: "+PatientRecords.rows[i][3] + "</span>" +
         "<br>"+
         "<span class=ntTimeframe>"+FormatCommentAge(PatientRecords.rows[i][1])+"</span>"  +
         "<span class=ntWhen>"+FormatDateTime(PatientRecords.rows[i][1])+"</span>"  +
         "</li>";
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
 viewFlag=document.SelectPeriod.viewstat.value.substr(0,1) 
 for (var i =0 ; i < document.SelectPeriod.filtstat.length; i++) {
  if (document.SelectPeriod.filtstat.options[i].value==viewFlag) {
       document.SelectPeriod.filtstat.selectedIndex=i } };

 viewFlag=document.SelectPeriod.viewperd.value;
 for (var i =0 ; i < document.SelectPeriod.viewtype.length; i++) {
  if (document.SelectPeriod.viewtype.options[i].value==viewFlag) {
     document.SelectPeriod.viewtype.selectedIndex=i } };

 if(document.SelectPeriod.ibcnmhos.value=="1") {
  document.getElementById('filthosp').style.display="";
 }

 InitTable();
}
function SetPeriod(el) {
  if (el.vyearmth) el.vyearmth.options[el.vyearmth.selectedIndex].value=' ';
  if (el.lastdate) el.lastdate.options[el.lastdate.selectedIndex].value=' ';
  el.submit();
}

