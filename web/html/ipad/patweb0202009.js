//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/patweb0202009.js
//
// Modification 
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.02 06.08.2013 B.G.Ackland CAR 289383
//                      New AJAXPostString2 to fix post encoding
// V10.03.01 02.07.2013 B.G.Ackland Align tran and Work Scripts
// V10.01.00 13/04/2012 Version change
// V10.00.00 13/04/2012 Created for Mobility Suite
//

function init() {
 InitialiseForms();
 setButtons();
}
function setButtons() {
 var actionBtn = parent.document.getElementById('actionButton');
  if(actionBtn) {
    actionBtn.className = actionBtn.className.replace(/SpanButton/g,"");
    actionBtn.className = actionBtn.className.replace(/Blue/g,"");
    actionBtn.className = actionBtn.className + " SpanButtonBlue";
    actionBtn.innerText = "Save";
    actionBtn.onclick = function() {
         UpdatePatient();
         parent.frames['iphone-frame'].frames['content'].location.reload();
         parent.CloseDocument();
     }
  }
}
function DeletePatient() {
  document.UpdateForm.updttype.value='D';
  theURL=document.UpdateForm.action;
  var postStr=AJAXPostString2(document.UpdateForm)
  var xmlHttp = createHttpObject();
  xmlHttp.open("POST", theURL, false);
  xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
  xmlHttp.send(postStr);
  if (xmlHttp.status=="200") {
    if (xmlHttp.responseText.match(/location.href/i)) {
      parent.frames['iphone-frame'].frames['content'].location.reload();
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
function UpdatePatient() {
  document.UpdateForm.updttype.value='U';
  theURL=document.UpdateForm.action;
  var postStr=AJAXPostString2(document.UpdateForm)
  var xmlHttp = createHttpObject();
  xmlHttp.open("POST", theURL, false);
  xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
  xmlHttp.send(postStr);
  if (xmlHttp.status=="200") {
    if (xmlHttp.responseText.match(/location.href/i)) {
      parent.frames['iphone-frame'].frames['content'].location.reload();
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
