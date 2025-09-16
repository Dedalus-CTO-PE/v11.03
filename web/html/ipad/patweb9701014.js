//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/patweb9701014.js
//
// Modification
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.02 06.08.2013 B.G.Ackland   CAR 289383
//                      Fixed to use createHttpObject() in place of XMLHttpRequest()
// V10.03.02 21.07.2013 B.G.Ackland   CAR
//                      Fix Switched Javascript from 014/013
// V10.03.01 19/06/2013 Saroeun Soeur CAR 287020
//                      InitTable() - added call to phpweb02.php
// V10.03.00 13/04/2012 Version change
// V10.01.00 13/04/2012 Version change
// V10.00.00 13/04/2012 Created for Mobility Suite
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
 theURL="patweb02.php?reportno=1&webpd002=999"
 var xmlHttp = createHttpObject();
 xmlHttp.open("GET", theURL, false);
 xmlHttp.send();
 if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
    h = document.getElementsByTagName("head")[0];
    s = document.createElement("script");
    s.type="text/javascript";
    s.text=xmlHttp.responseText;
    if(s.text.match(/function/g) != null) {
      h.appendChild(s);
      AddRows();
    }
 }
 PatientRecords.rows.sort(StringSort);
 CurrentDiv=document.getElementById("ListLocation");
 ShowPatientList(1);
 MaxRowNo=t.rows.length;
}
function ShowPatientList() {
 var OS = "<div class=sectionDiv>" +
          "<ul class=sectionList>";
 for(var i = 0; i < PatientRecords.rows.length; i++) {
   strWard=PatientRecords.rows[i][4].split("/")[0]
   if (!strWard.match(/On Leave/i)) {
     strWard="Ward: "+strWard;
   }
   strBed=PatientRecords.rows[i][4].split("/")[1]
   if (strBed == undefined) {
     strBed="";
   }
   else {
     if (!isWhitespace(strBed)) {
       strBed="Bed: "+strBed;
     }
   }
   strFolder=FormatPatientIcon(PatientRecords.rows[i][14])
   OS += "<li class=sectionItem onclick='LinkPatient(\""+i+"\");'>" + strFolder +
         PatientRecords.rows[i][3] +
         "<br><span class=subscriptLeft>Admitted:"+FormatDate(PatientRecords.rows[i][5]) + "</span>" +
         "<span class=subscriptRight>Exp. Discharge:"+PatientRecords.rows[i][10] + "</span>" +
         "<br>"+
         "<span class=subscriptLeft>"+strWard+"&nbsp;"+strBed + "</span>" +
         "<span class=subscriptRight>Unit: "+PatientRecords.rows[i][9] + "</span>" +
         "<br><span class=subscriptLeft>Diagnosis : "+PatientRecords.rows[i][8] + "</span>" +
         "<span class=subscriptRight>Consultant:"+PatientRecords.rows[i][17] + "</span>" +
         "</li>";
 }
 OS += "</ul><div>";
 CurrentDiv.innerHTML=OS;
}
function FormatPatientIcon(Indicators) {
  ImageStr="<span class=PatientFolder"+ Indicators.substr(0,3) + "></span>"
  return ImageStr;
}
