//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/emrweb0201403.js
//
// Modification
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.06.01 01.07.2015 B.G.Ackland CAR 318878
//                      Enable Update of Location and Disable Triage Date, Time and Category
// V10.03.01 06.08.2013 B.G.Ackland CAR 289383
//                      New AJAXPostString2 to fix post encoding
// V10.01.01 04.12.2012 B.G.Ackland New Medical Record View Refresh
// V10.01.00 13/04/2012 Version change
// V10.00.00 13/04/2012 Created for Mobility Suite
//
//========================================================================
// Program   : emrweb0201403.js
//
// Written   : 14.08.2012 B.G.Ackland
//
// Function  : Triage Functions Used in emrweb0201403.html
//
// Version   : 
//
//========================================================================
function init(){
  var actionBtn = parent.document.getElementById('actionButton');
  if(actionBtn) {
    actionBtn.className = actionBtn.className.replace(/SpanButton/g,"");
    actionBtn.className = actionBtn.className.replace(/Blue/g,"");
    actionBtn.className = actionBtn.className + " SpanButtonBlue";
    actionBtn.innerText = "Save";
    actionBtn.onclick = function() { onUpdate() }
  }

  if (UpdateForm.emvis003.selectedIndex>0) {
    UpdateForm.emvis129.disabled=true;
    UpdateForm.emvis128.disabled=true;
    UpdateForm.emvis003.disabled=true;
    alertify.alert("Patient Triage has been completed.<br>Supervisor Error Corrections must be used to change any triage category, date and time.");
//    parent.frames['PatFrame'].refreshScreen();
//    parent.CloseDocument();
  } else {
    if (UpdateForm.emvis128.selectedIndex<1) UpdateForm.emvis128.selectedIndex=1;
    if (isWhitespace(UpdateForm.emvis129.value)) UpdateForm.emvis129.value=UpdateForm.currtime.value;
  }

  var strg1= trim(HiddenFields.Pres01.value)
      if(!isWhitespace(strg1)) { strg1+="\n"}
  var strg2= trim(HiddenFields.Pres02.value)
      if(!isWhitespace(strg2)) { strg2+="\n"}
  var strg3= trim(HiddenFields.Pres03.value)
      if(!isWhitespace(strg3)) { strg3+="\n"}
  var strg4= trim(HiddenFields.Pres04.value)
      if(!isWhitespace(strg4)) { strg4+="\n"}
  var strg5= trim(HiddenFields.Pres05.value)
      if(!isWhitespace(strg5)) { strg5+="\n"}
  var strg6= trim(HiddenFields.Pres06.value)

  UpdateForm.prcom001.value=strg1+strg2+strg3+strg4+strg5+strg6
  UpdateForm.savdesc1.value=strg1+strg2+strg3+strg4+strg5+strg6

}
//
// Show Additional Injury Data Entry Fields
//
function checkInjury(el) {
 var inj = document.getElementById('InjuryData');
 inj.style.display='none';
 if (el.options[el.selectedIndex].value.substr(13,1)=='I') inj.style.display='';
}
function Validateprecom001() {
  var formatedtext=formateText(UpdateForm.prcom001,'50')
  if ((formatedtext.split(/[\r\n]/).length>6) ||
     (UpdateForm.prcom001.value.length > 300)) {
     alertify.alert("Presenting Complaint comments - Max 6 lines."
          + "<br>Please remove extra lines to continue.");
     document.UpdateForm.prcom001.focus();
     return;
  }
}
function onUpdate(){
 var actionBtn = parent.document.getElementById('actionButton');
 actionBtn.disabled=true; 
  if (UpdateForm.emvis003.selectedIndex<1) {
    alertify.alert("Triage Category has not been selected !");
    actionBtn.disabled=false; 
    return
  }
  if (UpdateForm.emvis006.selectedIndex<1) {
    alertify.alert("Location has not been selected !");
    actionBtn.disabled=false; 
    return
  }
  document.PatientLinks.checksub.value=1;
  if (validateMandatory(UpdateForm)) {
    document.UpdateForm.updttype.value="UPDAT"
    document.UpdateForm.redirect.value="AJAXPOST"
    theURL=document.UpdateForm.action;
    var postStr=AJAXPostString2(document.UpdateForm)
    var xmlHttp = createHttpObject();
    xmlHttp.open("POST", theURL, false);
    xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
    xmlHttp.send(postStr);
    if (xmlHttp.status=="200") {
      if (xmlHttp.responseText.match(/AJAXPOST/i)) {
        top.frames['iphone-frame'].document.location.reload();
        parent.frames['PatFrame'].document.location.reload();
        parent.CloseDocument(0);
      }
      else {
        alertify.alert(xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,""));
      }
    }
    else {
      alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
    }
  }
  actionBtn.disabled=false; 
}
