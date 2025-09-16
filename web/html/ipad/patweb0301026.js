//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/patweb0301026.js
//
// Modification
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.01 06.08.2013 B.G.Ackland CAR 289383
//                      New AJAXPostString2 to fix post encoding
// V10.01.00 19.03.2013 B.G.Ackland New Problem Recording on iPad
//

function SubmitForm() {
  if (validateMandatory(UpdateForm)) {
    theURL=document.UpdateForm.action;
    var postStr=AJAXPostString2(document.UpdateForm)
    var xmlHttp = createHttpObject();
    xmlHttp.open("POST", theURL, false);
    xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
    xmlHttp.send(postStr);
    if (xmlHttp.status=="200") {
      if (xmlHttp.responseText.match(/reloadParentFrame/i)) {
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
function setButtons() {
//  if  (document.UpdateForm.c_pmnut041.value == "1") {
//    document.UpdateForm.pmnut041.checked="1";
//  }
  var actionBtn = parent.document.getElementById('actionButton');

  if(actionBtn) {

    actionBtn.className = actionBtn.className.replace(/SpanButton/g,"");
    actionBtn.className = actionBtn.className.replace(/Blue/g,"");
    actionBtn.className = actionBtn.className + " SpanButtonBlue";
    actionBtn.innerText = "Save";

     actionBtn.onclick = function() {
        SubmitForm();
     }

  }
}

