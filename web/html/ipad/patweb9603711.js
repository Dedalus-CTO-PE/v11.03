//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/patweb9603711.js
//
// Modification
//
// Version         Date          Responsible/Changes Made
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
        SubmitInsurance(document.getElementById("pat96ins"));
     }

  }
}
function SubmitInsurance() {
  if (!validateMandatory(pat96ins)) {
     return;
  }
  if (!isWhitespace(pat96ins.tranfund.value)) {
     if (!validateHFT(20,pat96ins.tranfund,pat96ins.trantabl,
                         pat96ins.funddesc,pat96ins.tabldesc)) {
        confirmMsg="Select another active health fund table? ";
        alertify.confirm(confirmMsg, function (e) {    
          if (e){
            return;
          }
        });
     }
  }
  theURL=document.pat96ins.action;
  var postStr=AJAXPostString2(document.pat96ins)
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
