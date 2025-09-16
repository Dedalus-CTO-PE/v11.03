//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/cliweb0202713.js
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

function init() {
  var actionButton = parent.document.getElementById('actionButton');
  if(actionButton) {
     //format the action button
     actionButton.className = actionButton.className.replace(/SpanButton/g,"");
     actionButton.className = actionButton.className.replace(/Blue/g,"");
     actionButton.className = actionButton.className + " SpanButtonBlue";
     actionButton.innerText = "Update";

     actionButton.onclick = function () {
                               submitObservation();
                            };
  }
}
function submitObservation() {
  var status = validateMandatory(UpdateForm);

  if (status == true) {
    var theURL = UpdateForm.action;
    var postStr = AJAXPostString2(UpdateForm);
    var xmlHttp = createHttpObject();
    xmlHttp.open("POST", theURL, false);
    xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
    xmlHttp.send(postStr);
    if (xmlHttp.status == "200") {
      if ( xmlHttp.responseText.match(/location.href/i) ){
        parent.frames['PatFrame'].refreshScreen();
        parent.CloseDocument();
      }else{
        alertify.alert( xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,"") );
      }
    }else{
      alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
    }
  }
}
