//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/emrweb0101110.js
//
// Modification 
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.06.01 30.03.2015 Ebon Clements CAR 313723
//           Fixed alloction of visit number in ShowPatientList()
// V10.05.00 13.11.2014 B.G.Ackland   CAR 308064
//
//
function InitTable() {
 PatientRecords = new Table("patient-list","patient-item");
 obj=PatientRecords;
 t=PatientRecords;
 PatientList();
 SortOrderBy=3;
 PatientRecords.rows.sort(StringSort);
 ShowPatientList(1);
 MaxRowNo=t.rows.length;
}
function ShowPatientList() {
 var OS = "<div class=sectionDiv style='top:0px'>" +
          "<ul class=sectionList>";
 for(var i = 0; i < PatientRecords.rows.length; i++) {
   PatientRecords.rows[i][0]= PatientRecords.rows[i][2].replace(/ /g,"+");
   PatientRecords.rows[i][1]= PatientRecords.rows[i][1].replace(/ /g,"+");
   OS += "<li class=sectionItem onclick='LinkPatient(\""+i+"\");'>" + 
         "<span class='triage triage"+PatientRecords.rows[i][6].substring(0,1).replace(/ /,"0")+"'>"+
         PatientRecords.rows[i][6].substring(0,1).replace(/ /,"?")+ "</span>" +
         PatientRecords.rows[i][3] +
         "<br><span class=subscriptLeft>Problem: "+PatientRecords.rows[i][11] + "</span>" +
         "<br><span class=ntTimeframe>Location: "+ PatientRecords.rows[i][19] + "</span>" +
         "<span class=ntWhen>Arrival: "+ PatientRecords.rows[i][5] + "</span>" +
         "</li>";
 }
 OS += "</ul><div>";
 var el=document.getElementById("ListLocation");
 el.innerHTML=OS;
}
