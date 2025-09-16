//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/cliweb0801022.js
//
// Modification
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.01 08.08.2013 B.G.Ackland CAR 289383
//                      New Enhancement for Wound Care and other Diagnoistic Images
//
function SubmitForm() {
  if (validateMandatory(document.AddForm)) {
    ShowSaving("Uploading File .....");
    setTimeout(function () { AddForm.submit() },100);
  }
}
function ShowSaving(ActionName) {
  var SaveText=document.getElementById("SaveText");
  var SaveDiv=document.getElementById("DisplaySaving");
  SaveDiv.style.top="100px";
  SaveDiv.style.left=(document.body.scrollWidth/2-150)+"px";
  SaveText.innerHTML=ActionName;
  SaveDiv.style.display="inline-block"
}
function setButtons() {
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
