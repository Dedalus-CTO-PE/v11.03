//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/patweb9603710.js
//
// Modification
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.01 06.08.2013 B.G.Ackland CAR 289383
//                      New AJAXPostString2 to fix post encoding
// V10.01.01 04.12.2012 B.G.Ackland New Medical Record View Refresh
// V10.01.00 13/04/2012 Version change
// V10.00.00 13/04/2012 Created for Mobility Suite
//

function setButtons() {
 var actionBtn = parent.document.getElementById('actionButton');

  if(actionBtn) {

    actionBtn.className = actionBtn.className.replace(/SpanButton/g,"");
    actionBtn.className = actionBtn.className.replace(/Blue/g,"");
    actionBtn.className = actionBtn.className + " SpanButtonBlue";
    actionBtn.innerText = "Save";

     actionBtn.onclick = function() {
        SubmitDoctor(document.getElementById("UpdateDoctor"));
     }

  }
}
function setTranAdm(){
UpdateDoctor.ctadmvar.value="0"
if (admitdate==UpdateDoctor.trandate.value){
  if(UpdateDoctor.ptcnchsd.value==1){
     confirmMsg="Do you want to change the Transfer Admission Record?";
     alertify.confirm(confirmMsg, function (e) {    
       if (e){
         UpdateDoctor.ctadmvar.value="1"
         UpdateDoctor.trantime.value=admittime
       }
     });
   }
 }
}
function valDoctorUnit() {
  unitvalu=UpdateDoctor.chngunit.value.substr(0,3)
  validateCode(3,UpdateDoctor.thedoctr,UpdateDoctor.doctnam2);
  selectOptions("30",UpdateDoctor.thedoctr,UpdateDoctor.chngunit);
  for (var i =0 ; i < UpdateDoctor.chngunit.length; i++) {
    if (UpdateDoctor.chngunit.options[i].value.substr(0,3)==unitvalu) {
       UpdateDoctor.chngunit.selectedIndex=i } };

  if (isWhitespace(unitvalu)) {
    if (UpdateDoctor.chngunit.length==2) {
      UpdateDoctor.chngunit.selectedIndex=1;
    }
  }
}
//
function SubmitDoctor() {
if(admitdate==UpdateDoctor.trandate.value){
   if(admittime>UpdateDoctor.trantime.value){
    alertify.alert("Change time cannot be before admission time ("+admittime+")");
    return;
   }
 }
  if(admitstat.substr(0,10)=="Discharged"){
    if(disdate==UpdateDoctor.trandate.value){
     if(distime<UpdateDoctor.trantime.value){
      alertify.alert("Change time cannot be after discharge time ("+distime+")");
      return;
   }
  }
 }

  if (validateMandatory(UpdateDoctor)) {
    spec=UpdateDoctor.chngunit.value.substr(0,3)
    care=UpdateDoctor.trnacare.value.substr(0,3)
    doct=UpdateDoctor.thedoctr.value

    if (UpdateDoctor.trnacare.value != care) {
      UpdateDoctor.trnacare.value=care;
    } else { UpdateDoctor.trnacare.value="";}

    if (UpdateDoctor.trnadoct.value != doct) {
      UpdateDoctor.trnadoct.value=doct;
    } else { UpdateDoctor.trnadoct.value="";}

    theURL=document.UpdateDoctor.action;
    var postStr=AJAXPostString2(document.UpdateDoctor)
    var xmlHttp = createHttpObject();
    xmlHttp.open("POST", theURL, false);
    xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
    xmlHttp.send(postStr);
    if (xmlHttp.status=="200") {
      if (xmlHttp.responseText.match(/location.href/i)) {
        parent.frames['PatFrame'].refreshScreen();
        parent.CloseDocument();
      }
      else {
        alertify.alert(xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,""));
      }
    }
    else {
      alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
    }
  }
}
