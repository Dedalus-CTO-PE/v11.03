//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/patweb9701016.js
//
// Modification 
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.03 22.01.2014 B.G.Ackland   CAR 296546
//                      New Feature to Allow a Consultants Patient List to
//                      be Added to My Inpatients
// V10.03.02 06.08.2013 B.G.Ackland   CAR 289383
//                      Fixed to use createHttpObject() in place of XMLHttpRequest()
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
//------------------------------------------------------------
function selectList(selectEl) {
   this.selectEl = selectEl;
   this.addRow   = _addSelectOption;
}
function _addSelectOption() {
  this.selectEl[this.selectEl.length]=new Option(arguments[1],arguments[0]);
}
function InitTable() {
  theURL="oprweb01.php?reportno=4" 
  var xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
    h = document.getElementsByTagName("head")[0];
    s = document.createElement("script");
    s.type="text/javascript";
    h.appendChild(s);
    s.text=xmlHttp.responseText;
    t = new selectList(document.getElementById("consultantSelect"));
    consultantList();
    SelectConsultant(document.getElementById("consultantSelect"));
  }
}
function SelectConsultant(el) {
 theURL="patweb97.pbl?reportno=1&template=17&doctcode="+el.options[el.selectedIndex].value
 var xmlHttp = createHttpObject();
 xmlHttp.open("GET", theURL, false);
 xmlHttp.send();
 if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
    h = document.getElementsByTagName("head")[0];
    s = document.createElement("script");
    s.type="text/javascript";
    h.appendChild(s);
    s.text=xmlHttp.responseText;
    PatientRecords = new Table("patient-list","patient-item");
    t=PatientRecords;
    PatientList();
    SortOrderBy=4;
    PatientRecords.rows.sort(StringSort);
    CurrentDiv=document.getElementById("ListLocation");
    ShowPatientList(1);
    MaxRowNo=t.rows.length;
 }
}
function ShowPatientList() {
 var OS = "<div class=sectionDiv>" +
          "<ul class=sectionList>";
 for(var i = 0; i < PatientRecords.rows.length; i++) {
   strWard=PatientRecords.rows[i][4].split("/")[0]
   strBed=PatientRecords.rows[i][4].split("/")[1]
   strFolder=FormatPatientIcon(PatientRecords.rows[i][14])
   OS += "<li class=sectionItem onclick='LinkPatient(\""+i+"\");'>" + 
         strFolder + PatientRecords.rows[i][3] +
         "<br><span class=subscriptLeft>Admitted:"+FormatDate(PatientRecords.rows[i][5]) + "</span>" +
         "<span class=subscriptRight>Exp. Discharge:"+PatientRecords.rows[i][10] + "</span>" +
         "<br>"+
         "<span class=subscriptLeft>Ward: "+strWard+"&nbsp;Bed: "+strBed + "</span>" +
         "<span class=subscriptRight>Unit: "+PatientRecords.rows[i][9] + "</span>" +
         "</li>";
 }
 OS += "</ul><div>";
 CurrentDiv.innerHTML=OS;
}
function FormatPatientIcon(Indicators) {
  ImageStr="<span class=PatientFolder"+ Indicators.substr(0,3) + "></span>"
  return ImageStr;
}
function AddAll() {
  alertify.confirm("Click OK to add this consultants patients to your inpatient list.", function(e) {
   if (e) {
     for(var i = 0; i < PatientRecords.rows.length; i++) {
       AddInpatient(PatientRecords.rows[i][0],PatientRecords.rows[i][1]);
     }
   }
  });
}
function AddInpatient(urnumber,admissno) {
// Create Inpatient Favorites List 999 if Not Available Ignore error if already available
  theURL=CGIPath+"patweb02.pbl";
  var postStr="reportno=1&template=005&updttype=A&nextpage=1"+
              "&redirect=&webpd002=999&webpd003=Inpatients"
  var xmlHttp = createHttpObject();
  xmlHttp.open("POST", theURL, false);
  xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
  xmlHttp.send(postStr);
  if (xmlHttp.status!="200") {
    alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
  }
// Add Patient to Inpatient Favorites List 999
  theURL=CGIPath+"patweb02.pbl";
  var postStr="reportno=2&template=002&updttype=A&nextpage=1&redirect=&webpt002=999&webpt003="+
              encodeURIComponent(urnumber);
  var xmlHttp = createHttpObject();
  xmlHttp.open("POST", theURL, false);
  xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
  xmlHttp.send(postStr);
  if (xmlHttp.status=="200") {
    if (xmlHttp.responseText.match(/location.href/i)) {
       alertify.log("Patient: "+urnumber+" Added to List", "success",3000);
    } else {
      alertify.alert(xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,""));
    }
  } else {
    alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
  }
}
