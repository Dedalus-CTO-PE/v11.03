//jsVersion  : V11.03.00
//
//--------------------------------------------------------------------------------
// FunctionsActions.js
// Links for Patient Level Tasks/Action Menu
// V10.08.01 21.10.2016 Ebon Clements  TSK 0320084
//                      New option 34 - admitting doctor
// V10.07.02 17.02.2016 Davin       CAR 0310749
//                      Added xdiet to open new diet screen in nutritionUpdate()
// V10.07.01 08.12.2015 Peter Vela  CAR 323149
//                      Changed title in nutritionUpdate()
// V10.05.01 10.02.2015 B.G.Ackland CAR 312604
//                      Add Concession Card Action 
// V10.03.03 06.07.2013 B.G.Ackland CAR 289383
//                      Add Alert for New Inpatient Favourite
// V10.03.02 21.07.2013 B.G.Ackland CAR 288223
//                      Add Alert for New Inpatient Favourite
// V10.03.01 02.07.2013 B.G.Ackland Align tran and Work Scripts
// V10.01.01 20.11.2012 B.G.Ackland
//           New Include to break up ipad.js into components for new menu structure
//--------------------------------------------------------------------------------
function PatientTask(el) {
  itemNo=el.options[el.selectedIndex].value;
  el.selectedIndex=0;
  switch (parseInt(itemNo)) {
   case 1:
      AddInpatientFavorites();
      break;
   case 2:
      DelInpatientFavorites();
      break;
   case 3:
      AddFavorites();
      break;
   case 20:
      dischargeInpatient();
      break;
   case 21:
      transferInpatient();
      break;
   case 22:
      conditionUpdate();
      break;
   case 23:
      dietUpdate();
      break;
   case 24:
      bedRequest();
      break;
   case 25:
      nutritionUpdate();
      break;
   case 26:
      bedAllocation();
      break;
   case 27:
      admissionRequest();
      break;
   case 28:
      leaveRequest();
      break;
   case 29:
      concessionCards();
      break;
   case 30:
      emergencyPrint();
      break;
   case 31:
      emergencyTriage();
      break;
   case 32:
      emergencyAllocation();
      break;
   case 33:
      emergencyDischarge();
      break;
   case 34:
      emergencyAdmittingDoctor();
      break;
//   case 40:
//      equipmentLoan();
//      break;
   case 110:
      appointmentUpdate();
      break;
   case 111:
      appointmentNew();
      break;
   case 112:
      appointmentReschedule();
      break;
   case 113:
      appointmentFollowUp();
      break;
   case 99:
      TestPage();
      break;
   case 999:
      ClosePatient();
      break;
  }
}
function TestPage() {
   var  url="patweb98.pbl?reportno=01&template=187"+
           '&urnumber='+PatientURN.replace(/ /g,"+") +
           '&admissno='+PatientVIS.replace(/ /g,"+");
   var title = 'Triage';
   openDocumentNonZoomable(CGIPath+url,title);
}
function concessionCards() {
   var  url="patweb07.pbl?reportno=04&template=007"+
           '&urnumber='+PatientURN.replace(/ /g,"+") +
           '&admissno='+PatientVIS.replace(/ /g,"+");
   var title = 'Concession Card Details';
   openDocumentNonZoomable(CGIPath+url,title);
}
function leaveRequest() {
   var  url="patweb98.pbl?reportno=01&template=112"+
           '&urnumber='+PatientURN.replace(/ /g,"+") +
           '&admissno='+PatientVIS.replace(/ /g,"+");
   var title = 'Leave Request';
   openDocumentNonZoomable(CGIPath+url,title);
}
function appointmentNew() {
   var  url="outweb02.pbl?reportno=05&template=032"+
           '&urnumber='+PatientURN.replace(/ /g,"+") +
           '&admissno='+PatientVIS.replace(/ /g,"+");
   var title = 'New Appointment';
   openDocumentNonZoomable(CGIPath+url,title);
}
function appointmentUpdate() {
   var  url="outweb02.pbl?reportno=03&template=033"+
           '&urnumber='+PatientURN.replace(/ /g,"+") +
           '&admissno='+PatientVIS.replace(/ /g,"+");
   var title = 'Update Appointment';
   openDocumentNonZoomable(CGIPath+url,title);
}
function appointmentFollowup() {
  var url = "outweb02.pbl?reportno=03&template=034"+
            "&urnumber="+document.PatientLinks.urnumber.value.replace(/ /g,"+") +
            "&admissno="+document.PatientLinks.admissno.value.replace(/ /g,"+") +
            "&casekeys="+document.PatientLinks.casekeys.value.replace(/ /g,"+");
  var title = 'Reschedule Appointment';
  openDocumentNonZoomable(CGIPath+url,title);
}
function appointmentReschedule() {
  var url = "outweb02.pbl?reportno=03&template=035"+
            "&urnumber="+document.PatientLinks.urnumber.value.replace(/ /g,"+") +
            "&admissno="+document.PatientLinks.admissno.value.replace(/ /g,"+") +
            "&casekeys="+document.PatientLinks.casekeys.value.replace(/ /g,"+");
  var title = 'Reschedule Appointment';
  openDocumentNonZoomable(CGIPath+url,title);
}
function AddFavorites() {
  theURL=CGIPath+"patweb02.pbl?reportno=2&template=5"
  var xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.status!="200") {
    alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
    return;
  }
  el=top.document.getElementById("patFrame").contentDocument.getElementById("patientOptions");
  el.innerHTML="";
  el.className="selectFavorite";
  el.innerHTML='<div class=boxHeader>' +
               '<span style="width:42px" class="LeftAlign SpanButtonRed" onclick="AddFavoritesCancel()">Exit</span>' +
               'Add to List' +
               '<span style="width:42px" class="RightAlign SpanButtonBlue" onclick="AddFavoritesList()">Save</span>' +
               '</div>' +
               '<div class=boxContent>' +
               '<ul class=sectionList>' +
               '<li class=sectionItem>' +
               '<select title="Favorite List" style="width:200px" id="FavoriteList" name="ListOptions">' +
               xmlHttp.responseText +
               '</select>' +
               '</li></ul>' +
               '</div>'
  el.style.top="8px";
  el.style.left="50%";
  el.style.display="";
}
function AddFavoritesCancel() {
  el=top.document.getElementById("patFrame").contentDocument.getElementById("patientOptions");
  el.className="";
  el.style.display="none";
  el.innerHTML=""
}
function AddFavoritesList() {
  el=top.document.getElementById("patFrame").contentDocument.getElementById("patientOptions");
  theURL=CGIPath+"patweb02.pbl";
  List=document.getElementById("FavoriteList");
  ListNumber=List.options[List.selectedIndex].value
  var postStr="reportno=2&template=002&updttype=A&nextpage=1&redirect=&webpt002="+
              encodeURIComponent(ListNumber)+"&webpt003="+
              encodeURIComponent(PatientURN);
  var xmlHttp = createHttpObject();
  xmlHttp.open("POST", theURL, false);
  xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
  xmlHttp.send(postStr);
  if (xmlHttp.status=="200") {
    el.className="";
    el.style.display='none';
    el.innerHTML=el.innerHTML;
  }
  else {
    alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
  }
}
function DelInpatientFavorites() {
// Delete Patient to Inpatient Favorites List 999
  theURL=CGIPath+"patweb02.pbl";
  var postStr="reportno=2&template=002&updttype=D&nextpage=1&redirect=&webpt002=999&webpt003="+
              encodeURIComponent(PatientURN);
  var xmlHttp = createHttpObject();
  xmlHttp.open("POST", theURL, false);
  xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
  xmlHttp.send(postStr);
  if (xmlHttp.status=="200") {
    if (xmlHttp.responseText.match(/location.href/i)) {
       alertify.alert("Done : Removed from Inpatient Favourites.");
    }
    else {
      alertify.alert(xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,""));
    }
  }
  else {
    alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
  }
}
function AddInpatientFavorites() {
// Create Inpatient Favorites List 999 if Not Available
// Ignore error if already available
  theURL=CGIPath+"patweb02.pbl";
  var postStr="reportno=1&template=005&updttype=A&nextpage=1&redirect=&webpd002=999&webpd003=Inpatients"
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
              encodeURIComponent(PatientURN);
  var xmlHttp = createHttpObject();
  xmlHttp.open("POST", theURL, false);
  xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
  xmlHttp.send(postStr);
  if (xmlHttp.status=="200") {
    if (xmlHttp.responseText.match(/location.href/i)) {
       alertify.alert("Done : Added to Inpatient Favourites.");
    }
    else {
      alertify.alert(xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,""));
    }
  }
  else {
    alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
  }
}
function dischargeInpatient() {
   var  url="patweb96.pbl?reportno=05&template=702"+
           '&urnumber='+PatientURN.replace(/ /g,"+") +
           '&admissno='+PatientVIS.replace(/ /g,"+");
   var title = 'Patient Discharge';
   openDocumentNonZoomable(CGIPath+url,title);
}
function transferInpatient() {
   var  url="patweb96.pbl?reportno=03&template=707"+
           '&urnumber='+PatientURN.replace(/ /g,"+") +
           '&admissno='+PatientVIS.replace(/ /g,"+");

   var title = 'Patient Transfer';
   openDocumentNonZoomable(CGIPath+url,title);
}
function conditionUpdate() {
   var  url="patweb93.pbl?reportno=05&template=011"+
           '&urnumber='+PatientURN.replace(/ /g,"+") +
           '&admissno='+PatientVIS.replace(/ /g,"+");
   var title = 'Patient Condition';
   openDocumentNonZoomable(CGIPath+url,title);
}
function dietUpdate() {
   var  url="patweb98.pbl?reportno=04&template=013"+
           '&urnumber='+PatientURN.replace(/ /g,"+") +
           '&admissno='+PatientVIS.replace(/ /g,"+");
   var title = 'Patient Diet';
   openDocumentNonZoomable(CGIPath+url,title);
}
function nutritionUpdate() {
   var title = 'Patient Nutrition';
   if (xdiet=="1") {
   var  url="patweb98.pbl?reportno=04&template=017"+
           '&urnumber='+PatientURN.replace(/ /g,"+") +
           '&admissno='+PatientVIS.replace(/ /g,"+");
   } else {
   var  url="patweb98.pbl?reportno=04&template=014"+
           '&urnumber='+PatientURN.replace(/ /g,"+") +
           '&admissno='+PatientVIS.replace(/ /g,"+");
   }
   openDocumentNonZoomable(CGIPath+url,title);
}
function bedRequest() {
   var  url="patweb10.pbl?reportno=08&template=012"+
           '&urnumber='+PatientURN.replace(/ /g,"+") +
           '&admissno='+PatientVIS.replace(/ /g,"+");
   var title = 'Bed Request';
   openDocumentNonZoomable(CGIPath+url,title);
}
function admissionRequest() {
   var  url="patweb15.pbl?reportno=01&template=012"+
           '&urnumber='+PatientURN.replace(/ /g,"+") +
           '&admissno='+PatientVIS.replace(/ /g,"+");
   var title = 'Admission Request';
   openDocumentNonZoomable(CGIPath+url,title);
}
function bedAllocation() {
   var  url="patweb12.pbl?reportno=04&template=002"+
           '&urnumber='+PatientURN.replace(/ /g,"+") +
           '&admissno='+PatientVIS.replace(/ /g,"+");
   var title = 'Expected Ward Bed Allocation';
   openDocumentNonZoomable(CGIPath+url,title);
}
function emergencyPrint() {
   var  url="emrweb02.pbl?reportno=01&template=405"+
           '&urnumber='+PatientURN.replace(/ /g,"+") +
           '&admissno='+PatientVIS.replace(/ /g,"+");
   var title = 'Emergency Labels and Forms';
   openDocumentNonZoomable(CGIPath+url,title);
}
function emergencyDischarge() {
   var  url="emrweb02.pbl?reportno=01&template=402"+
           '&urnumber='+PatientURN.replace(/ /g,"+") +
           '&admissno='+PatientVIS.replace(/ /g,"+");
   var title = 'Emergency Discharge';
   openDocumentNonZoomable(CGIPath+url,title);
}
function emergencyAllocation() {
   var  url="emrweb02.pbl?reportno=01&template=404"+
           '&urnumber='+PatientURN.replace(/ /g,"+") +
           '&admissno='+PatientVIS.replace(/ /g,"+");
   var title = 'Update Seen by Details';
   openDocumentNonZoomable(CGIPath+url,title);
}
function emergencyTriage() {
   var  url="emrweb02.pbl?reportno=01&template=403"+
           '&urnumber='+PatientURN.replace(/ /g,"+") +
           '&admissno='+PatientVIS.replace(/ /g,"+");
   var title = 'Triage';
   openDocumentNonZoomable(CGIPath+url,title);
}

function emergencyAdmittingDoctor() {
   var  url="emrweb02.pbl?reportno=01&template=406"+
           '&urnumber='+PatientURN.replace(/ /g,"+") +
           '&admissno='+PatientVIS.replace(/ /g,"+");
   var title = 'Maintain Admitting Doctor';
   openDocumentNonZoomable(CGIPath+url,title);
}
