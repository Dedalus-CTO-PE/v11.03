//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/patweb9301019.js
//
// Modification 
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.02 06.08.2013 B.G.Ackland   CAR 289383
//                      Fixed to use createHttpObject() in place of XMLHttpRequest()
// V10.03.00 13/04/2012 Version change
// V10.01.00 13/04/2012 Version change
// V10.00.00 13/04/2012 Created for Mobility Suite
//

function InitTable() {
 PatientRecords = new Table("patient-list","patient-item");
 t=PatientRecords;
 GetList();
 SortOrderBy=4;
 PatientRecords.rows.sort(StringSort);
 CurrentDiv=document.getElementById("ListLocation");
 ShowWardList();
 MaxRowNo=t.rows.length;
}
function GetList() {
  theURL="patweb93.php"+
        "?reportno=2" +
        "&wardcode="+document.SelectWard.wardcode.options[document.SelectWard.wardcode.selectedIndex].value
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
function SortPatients(el) {
 SortOrderBy=el.options[el.selectedIndex].value;
 PatientRecords.rows.sort(StringSort);
 CurrentDiv=document.getElementById("ListLocation");
 RemovePatDiv();
 ShowWardList();
}
function ShowWardList() {
 var OS = "<div class=sectionDiv>" +
          "<ul class=sectionList>";
//                 0        1      2      3        4       5        6      7     8
//      t.addRow(urnumber,admissno,"",PatientName,WardBed,AdmDate,DisDate,Unit,Doctor) }
 for(var i = 0; i < PatientRecords.rows.length; i++) {
   OrderCount = PatientRecords.rows[i][10]
   OrderFlag = "";
   strFolder=FormatPatientIcon(PatientRecords.rows[i][2])
   if (parseInt(OrderCount,10)>0) {
     strFolder = "<span class=OrderCount>"+OrderCount+"</span>";
   }
   BedStr = PatientRecords.rows[i][4]
   if (!isWhitespace(BedStr)) {
     if (!BedStr.match(/Bed/i)) {
       BedStr='Bed : '+BedStr } }
   OS += "<li class=sectionItem onclick='LinkPatient(\""+i+"\");'>" + 
         "<span style='display:inline-block;width:70%;'>" + 
         strFolder + PatientRecords.rows[i][3] + 
         "</span>"+
         "<span class=subscriptRight style='width:29%;font-weight:bold;'>" + BedStr +
         "</span>" +
         "<br><span class=subscriptLeft>Admitted :"   +FormatDate(PatientRecords.rows[i][5]) + "</span>" +
         "<span class=subscriptRight>Exp. Discharge :"+FormatDate(PatientRecords.rows[i][6]) + "</span>" +
         "<br>"+
         "<span class=subscriptLeft>Doctor : "+PatientRecords.rows[i][8] + "</span>" +
         "<span class=subscriptRight>Unit : "+PatientRecords.rows[i][7] + "</span>" +
         "</li>";
 }
 OS += "</ul><div>";
 CurrentDiv.innerHTML=OS;
}
function FormatPatientIcon(Indicators) {
  ImageStr="<span class=PatientFolder"+ Indicators.substr(0,3) + "></span>" 
  return ImageStr;
}
