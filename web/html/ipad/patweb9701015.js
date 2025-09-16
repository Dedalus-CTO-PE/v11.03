//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/patweb9701015.js
//
// Purpose : Anaethist Patient List
//
// Modification 
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.03 12.08.2013 B.G.Ackland   CAR 289943
//                      Added Information in List Diagnosis/Surgeon
// V10.03.02 06.08.2013 B.G.Ackland   CAR 289383
//                      Fixed to use createHttpObject() in place of XMLHttpRequest()
// V10.03.00 13/04/2012 Version change
// V10.01.00 13/04/2012 Version change
// V10.00.00 13/04/2012 Created for Mobility Suite
//

//------------------------------------------------------------
// Function : Init Page
//------------------------------------------------------------
function init(){
 InitTable();
}
function GetList() {
  theURL="oprweb01.php?reportno=2";
  var xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
    var h = document.getElementsByTagName("head")[0];
    var s = document.createElement("script");
    s.type="text/javascript";
    h.appendChild(s);
    s.text=xmlHttp.responseText;
    AddRows();
  }
}
function SortPatients(el) {
 SortOrderBy=el.options[el.selectedIndex].value;
 PatientRecords.rows.sort(StringSort);
 ShowPatientList();
}
function InitTable() {
 t = new Table();
 PatientRecords = t;
 GetList();
 SortOrderBy=7;
 PatientRecords.rows.sort(StringSort);
 ShowPatientList();
}
function ShowPatientList() {
 RemovePatDiv();
 CurrentDiv=document.getElementById("ListContent");
 var OS = "<ul class=sectionList>";
 RowCount=0;
 MinRowNo=-1;
 for(var i = 0; i < PatientRecords.rows.length; i++) {
   RowCount++
   strWard=PatientRecords.rows[i][7].split("/")[0]
   strBed=PatientRecords.rows[i][7].split("/")[1]
   strFolder=FormatPatientIcon(PatientRecords.rows[i][2])
   OS += "<li class=sectionItem onclick='LinkPatient(\""+i+"\");'>" +
         strFolder + PatientRecords.rows[i][3] +
         "<br><span class=subscriptLeft>Admitted:"+FormatDate(PatientRecords.rows[i][5])+"</span>" +
         "<span class=subscriptRight>Exp. Discharge:"+FormatDate(PatientRecords.rows[i][6])+"</span>" +
         "<br>"+
         "<span class=subscriptLeft>Diagnosis: "+PatientRecords.rows[i][4] + "</span>" +
         "<span class=subscriptRight>Unit: "+PatientRecords.rows[i][8] + "</span>" +
         "<br>"+
         "<span class=subscriptLeft>Surgeon: "+PatientRecords.rows[i][19] + "</span>" +
         "<span class=subscriptRight>Ward: "+strWard+"&nbsp;Bed: "+strBed + "</span>" +
         "</li>";
 }
 if (RowCount==0) {
    OS+="<li style='text-align:center;color:darkred;' class=sectionItem>"+
        "No Current Patient Admitted"+
        "</li>";
 }
 OS += "</ul>";
 CurrentDiv.innerHTML=OS;
 CurrentDiv.style.display="block";
}
function FormatPatientIcon(Indicators) {
  ImageStr="<span class=PatientFolder"+ Indicators.substr(0,3) + "></span>"
  return ImageStr;
}
