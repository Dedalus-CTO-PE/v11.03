//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/allweb0202807.js
//
// Modification 
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.01 06.08.2013 B.G.Ackland CAR 289383
//                      New AJAXPostString2 to fix post encoding
// V10.01.00 12.12.2012 B.G.Ackland New 
//
function SaveAction() {
  if(UpdateForm.deptcode.value == "") {
    alertify.alert("Department can't be empty");
    return;
  }
  if(UpdateForm.admissno.value == "        ") {
    alertify.alert("Visit/Referral Number is blank");
    return;
  }
  UpdateForm.updatety.value="N"
  status=validateMandatory(document.UpdateForm);
  if (status=="true") {
    theURL=document.UpdateForm.action;
    var postStr=AJAXPostString2(document.UpdateForm)
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
function init() {
 if (RefBulkBill == "Yes") {
   document.UpdateForm.alref036.value=1;
 }
 if (RefSACS == "Yes") {
   document.UpdateForm.alref083.value=1;
 } else {
   document.UpdateForm.alref083.value=0;
 }
 if (RefStatus=="Rejected  "){
    resetButtons();
 } else {
   document.UpdateForm.alref011.value=CurrentDate;
   document.UpdateForm.alref012.value=CurrentTime;
   var actionBtn = parent.document.getElementById('actionButton');
   if(actionBtn) {
     actionBtn.className = actionBtn.className.replace(/SpanButton/g,"");
     actionBtn.className = actionBtn.className.replace(/Blue/g,"");
     actionBtn.className = actionBtn.className + " SpanButtonBlue";
     actionBtn.innerText = "Save";
     actionBtn.onclick = function() {
       SaveAction();
     }
   }
 }
}
