//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/oprweb0103010.js
//
// Modification 
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.02 06.08.2013 B.G.Ackland   CAR 289383
//                      Fixed to use createHttpObject() in place of XMLHttpRequest()
// V10.03.00 01.07.2013   B.G.Ackland 
//------------------------------------------------------------
// Function : Init Page
//------------------------------------------------------------
function init(){
 InitTable();
}
function GetList() {
  el=document.SelectPeriod
  sesskeys=document.SelectPeriod.sesskeys.value;
  theURL="oprweb01.pbl"+
        "?reportno=3" +
        "&template=011" +
        "&sesskeys="+sesskeys;
  var xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
    var h = document.getElementsByTagName("head")[0];
    var s = document.createElement("script");
    s.type="text/javascript";
    h.appendChild(s);
    s.text=xmlHttp.responseText;
//    alertify.alert(xmlHttp.responseText);
    AddRows();
  }
}
function SessionList() {
  var returnPage=getCookie("SessionListPage");
  location.href=returnPage;
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
 SortOrderBy=18;
 PatientRecords.rows.sort(StringSort);
 var sr=document.getElementById("ListLocation");
 var nr=document.getElementById("noResults");
 ShowPatientList();
}
function ShowPatientList() {
 RemovePatDiv();
 CurrentDiv=document.getElementById("ListContent");
 var OS = "<ul class=sectionList>";
 RowCount=0;
 MinRowNo=-1;
 for(var i = 0; i < PatientRecords.rows.length; i++) {
   RowCount++;
   MaxRowNo=i+1;
   if (MinRowNo==-1) MinRowNo=i;
   strFolder=FormatPatientIcon(PatientRecords.rows[i][2])
   OS += "<li class=sectionItem onclick='LinkPatient(\""+i+"\");'>" +
         strFolder + PatientRecords.rows[i][3] +
         "<br><span class=subscriptLeft>Session: " + PatientRecords.rows[i][13] +
         "  Date: "+FormatDate(PatientRecords.rows[i][4]) + 
         "  Time: "+PatientRecords.rows[i][5] + "</span>" +
         "<span class=subscriptRight>Case No:"+PatientRecords.rows[i][8] + "</span>" +
         "<br>"+
         "<span class=subscriptLeft>Ward/Bed: "+PatientRecords.rows[i][15] + '  ' +
                                                PatientRecords.rows[i][16] + "</span>" +
         "<span class=subscriptRight>Anaesthetist: "+PatientRecords.rows[i][14] + "</span>" +
         "<span class=subscriptLeft>Operation: "+
         PatientRecords.rows[i][9]+PatientRecords.rows[i][10]+ "</span>" +
         "<span class=subscriptRight>Anaesthetic: "+PatientRecords.rows[i][17] + "</span>" +
         "</li>";
 }
 if (RowCount==0) { 
    OS+="<li style='text-align:center;color:darkred;' class=sectionItem>"+
        "No Cases found for this Theatre Session"+
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
