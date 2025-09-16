//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/patweb0202007.js
//
// Modification 
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.01 06.08.2013 B.G.Ackland   CAR 289383
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
 el=document.getElementById("webpd002")
 if (el.options.length==0) {
   EditList();
   return;
 }
 listcode=el.options[el.selectedIndex].value;
 theURL="patweb02.pbl"+
        "?reportno=2" +
        "&template=6" +
        "&webpd002="+listcode
 var xmlHttp = createHttpObject();
 xmlHttp.open("GET", theURL, false);
 xmlHttp.send();
 if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
    h = document.getElementsByTagName("head")[0];
    s = document.createElement("script");
    s.type="text/javascript";
    h.appendChild(s);
    s.text=xmlHttp.responseText;
    AddPatients();
 }
 SortOrderBy=3;
 PatientRecords.rows.sort(StringSort);
 CurrentDiv=document.getElementById("ListLocation");
 ShowPatients('0');
 MaxRowNo=t.rows.length;
}
function SortPatients(el) {
 SortOrderBy=el.options[el.selectedIndex].value;
 PatientRecords.rows.sort(StringSort);
 CurrentDiv=document.getElementById("ListLocation");
 RemovePatDiv();
 ShowPatients('0');
}
function ShowPatients(EditFlag) {
 var OS = "<div class=sectionDiv>" +
          "<ul class=sectionList>";
 for(var i = 0; i < PatientRecords.rows.length; i++) {
   if (isWhitespace(PatientRecords.rows[i][8])) {
      ReviewDate="&nbsp;";
   }
   else {
      ReviewDate="Review : "+FormatDate(PatientRecords.rows[i][8]);
   }
   if (isWhitespace(PatientRecords.rows[i][4])) {
      BedStr="&nbsp;";
   }
   else {
      BedStr="Location : "+PatientRecords.rows[i][4];
   }
   LinkTo="LinkPatient(\""+i+"\");"
   if (EditFlag=='1') {
      LinkTo="EditPatientDetail(\"" + PatientRecords.rows[i][0] + "\");";
      BedStr="<input type=button value=Edit name=Edit class=green "+
             "style='width:90px;height:28px;font-size:14px;' >"
   }
   if (isWhitespace(PatientRecords.rows[i][6])) {
      StatusStr="&nbsp;";
   }
   else {
      StatusStr="Status : "+PatientRecords.rows[i][6];
   }
   OS += "<li class=sectionItem onclick='"+LinkTo+"'>" +
         "<span style='display:inline-block;width:70%;'>" +
         "<span class=PatientFolder000></span>" + PatientRecords.rows[i][3]+
         " ("+ PatientRecords.rows[i][11]+
         ","  + PatientRecords.rows[i][10].substr(0,1) + ", " +
         ","  + PatientRecords.rows[i][0]+ ")" +
         "</span>"+
         "<span class=subscriptRight style='width:29%;font-weight:bold;'>" + BedStr +
         "</span>" +
         "<br><span class=subscriptLeft>Note : " +PatientRecords.rows[i][7] + "</span>" +
         "<span class=subscriptRight>"+ReviewDate + "</span>" +
         "</li>";
 }
 if (PatientRecords.rows.length==0) {
    OS+="<li style='text-align:center;color:darkred;' class=sectionItem>"+
        "No Patients Currently in this Favourites List."+
        "</li>";
 }
 OS += "</ul><div>";
 CurrentDiv.innerHTML=OS;
}
function EditList() {
  openDocumentNonZoomable(CGIPath+"patweb02.pbl?reportno=2&template=8","Edit Favourites Lists")
}
function AddPatient() {
  el=document.getElementById("webpd002");
  listcode=el.options[el.selectedIndex].value;
  LinkUrl="patweb02.pbl?reportno=2&template=10&webpd002="+listcode
  openDocumentNonZoomable(CGIPath+LinkUrl,"Add Patient to Lists")
}
function EditPatientDetail(urnumber) {
  el=document.getElementById("webpd002");
  listcode=el.options[el.selectedIndex].value;
  LinkUrl="patweb02.pbl?reportno=2&template=9&webpd002="+listcode+"&webpt003="+urnumber
  openDocumentNonZoomable(CGIPath+LinkUrl,"Edit Favourite Patients List");
}
function EditPatient() {
 CurrentDiv=document.getElementById("ListLocation");
 RemovePatDiv();
 ShowPatients('1');
}
