//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/allweb0201029.js
//
// Modification
//
// Version   Date                         Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.07.00 17.12.2015 B.G.Ackland   CAR
//                      New Waiting Referrals List
//
function SortPatients(el) {
 SortOrderBy=el.options[el.selectedIndex].value;
 PatientRecords.rows.sort(StringSort);
 CurrentDiv=document.getElementById("ListLocation");
 ShowPatientList();
 RemovePatDiv();
}
function InitTable() {
 GetSelectLists()
 PatientRecords = new Table("patient-list","patient-item");
 t=PatientRecords;
 GetList();
 SortOrderBy=1;
 PatientRecords.rows.sort(StringSort);
 CurrentDiv=document.getElementById("ListLocation");
 ShowPatientList(1);
 MaxRowNo=t.rows.length;
}
function GetSelectLists() {
  el=document.SelectPeriod
  deptcode=el.deptcode.options[el.deptcode.selectedIndex].value;
  theURL="AutoSelect.php?reportno=1&deptcode="+ deptcode 
  var xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.responseText=="AutoSelect.php") {
    alertify.alert("AutoSelect.php Not Available. Doctor/Team Filter Disabled");
    return;
  }
  if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
    PopulateSelect(el.doctcode,el.selectedDoct.value,xmlHttp.responseText);
  }
  theURL="AutoSelect.php?reportno=2&deptcode="+ deptcode 
  var xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
    PopulateSelect(el.filtteam,el.selectedTeam.value,xmlHttp.responseText);
  }
}
function PopulateSelect(ReturnSelect,DefaultCode,ReturnValue) {
  var myObj = eval("("+ReturnValue+")");
  for (var i = 0; i < myObj.length; i++) {
    if (myObj[i]["code"]) {
      if (trim(myObj[i]["code"])==trim(DefaultCode)) {
        ReturnSelect.options[ReturnSelect.options.length]= new Option(myObj[i]["value"],myObj[i]["code"],0,1); 
      }
      else {
        ReturnSelect.options[ReturnSelect.options.length]= new Option(myObj[i]["value"],myObj[i]["code"]); 
      } 
    }
  }
}
function GetList() {
  el=document.SelectPeriod
  deptcode=el.deptcode.options[el.deptcode.selectedIndex].value;
  theURL="allweb02.pbl"+
        "?reportno=1" +
        "&template=28" +
        "&doctcode="+ el.selectedDoct.value +
        "&filtteam="+ el.selectedTeam.value +
        "&deptcode="+ deptcode +
        "&filtclid=" + "&filtctyp=" 
  var xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
    var h = document.getElementsByTagName("head")[0];
    var s = document.createElement("script");
    s.type="text/javascript";
    h.appendChild(s);
    s.text = xmlHttp.responseText;
    PatientList();
  }
}
function UpdateReferral(urnumber,admissno,deptcode) {
  var elFrame=window.top.document.getElementById("iphone-frame")
  if(elFrame.contentDocument.getElementById("PatientTabMenu")!= null) {
     PatientURN=urnumber;
     PatientVIS=admissno;
     theURL = CGIPath+ "patweb98.pbl?reportno=1&template=187" +
                       "&urnumber="+PatientURN.replace(/ /g,"+") +
                       "&admissno="+PatientVIS.replace(/ /g,"+");
     openMedicalRecord(theURL)
     return;
 }
 alertify.alert("Invalid Menu Configuration.");
}
function ShowPatientList() {
 var OS = "<div class=sectionDiv>" +
          "<ul class=sectionList>";
 for(var i = 0; i < PatientRecords.rows.length; i++) {
   strFolder=FormatPatientIcon()
   OS += "<li class=sectionItem onclick=\""+PatientRecords.rows[i][0].replace(/javascript:/i,"")+"\">" + 
         strFolder + PatientRecords.rows[i][1] +
         "<br><span class=subscriptLeft>Referral Date:"+FormatDate(PatientRecords.rows[i][5]) + "</span>" +
         "<span class=subscriptRight>List Days:"+PatientRecords.rows[i][9] + "</span>" +
         "<br>"+
         "<span class=subscriptLeft>Healthcare Professional: "+ PatientRecords.rows[i][6] + "</span>" +
         "<span class=subscriptRight>Priority: "+PatientRecords.rows[i][8] + "</span>" +
         "<br>"+
         "<span class=subscriptLeft>Problem: "+ PatientRecords.rows[i][7] + "</span>" +
         "</li>";
 }
 if (PatientRecords.rows.length==0) {
   OS += "<li class=sectionItem style='text-align:center;'>" +
         "No Records for the Selected Criteria."+
         "</li>";
 }
 OS += "</ul><div>";
 CurrentDiv.innerHTML=OS;
}
function FormatPatientIcon(Indicators) {
  ImageStr="<span class=PatientFolder000></span>"
  return ImageStr;
}
