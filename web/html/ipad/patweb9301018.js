//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/patweb9301018.js
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

var s;
var h;
function InitTable() {
 PatientRecords = new Table("patient-list","patient-item");
 t=PatientRecords;
 el=document.SelectWard
 wardcode=el.wardcode.options[el.wardcode.selectedIndex].value;
 theURL="patweb93.php"+
        "?reportno=1" +
        "&wardcode="+wardcode
 var xmlHttp = createHttpObject();
 xmlHttp.open("GET", theURL, false);
 xmlHttp.send();
 if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
    h = document.getElementsByTagName("head")[0];
    s = document.createElement("script");
    s.type="text/javascript";
    h.appendChild(s);
    s.text=xmlHttp.responseText;
    //alert(xmlHttp.responseText);
    AddRows();
 }
 SortOrderBy=15;
 PatientRecords.rows.sort(StringSort);
 CurrentDiv=document.getElementById("ListLocation");
 ShowWardList();
 MaxRowNo=t.rows.length;
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
 for(var i = 0; i < PatientRecords.rows.length; i++) {
   BedStr="";
   if (!isWhitespace(PatientRecords.rows[i][15])) {
       BedStr='Bed : '+PatientRecords.rows[i][15]  }
   strFolder=FormatPatientIcon(PatientRecords.rows[i][2])
   OS += "<li class=sectionItem onclick='LinkPatient(\""+i+"\");'>" + 
         "<span style='display:inline-block;width:70%;'>" + 
         strFolder + PatientRecords.rows[i][3]
   if (!isWhitespace(PatientRecords.rows[i][13])) OS +="<span class='showCondition_"+PatientRecords.rows[i][13]+"'></span>" 
   OS += "</span>"+
         "<span class=subscriptRight style='width:29%;font-weight:bold;'>" + BedStr +
         "</span>" +
         "<br><span class=subscriptLeft>Admitted :"   +FormatDate(PatientRecords.rows[i][5]) + "</span>" +
         "<span class=subscriptRight>Exp. Discharge :"+FormatDate(PatientRecords.rows[i][6]) + "</span>" +
         "<br>"+
         "<span class=subscriptLeft>Doctor : "+PatientRecords.rows[i][17] + "</span>" +
         "<span class=subscriptRight>Unit : "+PatientRecords.rows[i][16] + "</span>" +
         "<span class=subscriptLeft>Diet : "+PatientRecords.rows[i][14] + "</span>" +
         "<span class=subscriptRight>Condition : " +  PatientRecords.rows[i][12]   
   if (!isWhitespace(PatientRecords.rows[i][20])) OS += " ("+PatientRecords.rows[i][20].substr(6,2)+"/"+
                                                            PatientRecords.rows[i][20].substr(4,2)+" "+ PatientRecords.rows[i][21]+")"
   OS += "</span>" +
         "<span class=subscriptLeft>Diagnosis : "+PatientRecords.rows[i][4] + "</span>" +
         "</li>";
 }
 if (PatientRecords.rows.length==0) {
    OS+="<li style='text-align:center;color:darkred;' class=sectionItem>"+
        "No Patients Currently in this Ward."+
        "</li>";
 }
 OS += "</ul><div>";
 CurrentDiv.innerHTML=OS;
}
function FormatPatientIcon(Indicators) {
  ImageStr="<span class=PatientFolder"+ Indicators.substr(0,3) + "></span>"
  return ImageStr;
}
