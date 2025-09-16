//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/cliweb0601702.js
//
// Modification
//
// Version    Date      Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.09.02 07.12.2016 Ebon Clements  TSK 0305048
//                      Added editButton to init()
// V10.09.01 02.12.2016 Ebon Clements  TSK 0305048
//                      Added checkEnquiry()
// V10.03.05 23.10.2013 B.G.Ackland CAR 289383
//                      Add Missing Bracket in Confirm on Delete
// V10.03.04 06.08.2013 B.G.Ackland CAR 289383
//                      New AJAXPostString2 to fix post encoding
// V10.03.03 02.07.2013 B.G.Ackland Align tran and Work Scripts
// V10.03.02 01.05.2013 B.G.Ackland Don't Hide Button CAR 284710
// V10.01.01 04.12.2012 B.G.Ackland New Medical Record View Refresh
// V10.01.00 13/04/2012 Version change
// V10.00.00 13/04/2012 Created for Mobility Suite
//
function init() {
  var readBy=document.UpdateNote.readby.value.replace(/\s/g,'');
  var inputBy=document.UpdateNote.inputby.value.replace(/\s/g,'');
  var actionBtn = parent.document.getElementById('actionButton');
  var allowDelete=checkEnquiry();
  if (actionBtn) {
    if (inputBy == readBy && allowDelete == true) {
      actionBtn.className = actionBtn.className.replace(/SpanButton/g,"");
      actionBtn.className = actionBtn.className.replace(/Blue/g,"");
      actionBtn.className += " SpanButtonRed";
      actionBtn.style.display="";
      actionBtn.innerText = "Delete";
      actionBtn.onclick = function() { 
        SubmitDelete();
      }
    }
    else {
      actionBtn.className = actionBtn.className.replace(/Blue/g,"");
      actionBtn.className = actionBtn.className.replace(/Red/g,"");
      actionBtn.innerText = "Done";
      actionBtn.onclick = function() {
        parent.CloseDocument();
      }
    }
  }
  var editBtn=document.getElementById('editButton');
  if(editBtn && allowDelete == false) {
     editBtn.style.display="none";
  }
}
function checkEnquiry(){
  if(document.getElementById("d_seclevel")== null){ return true; };
  if(document.getElementById("d_notelevl")== null){ return true; };
  if(isWhitespace(document.getElementById("d_seclevel").value)) {
     document.getElementById("d_seclevel").value="0";
  }
  if(isWhitespace(document.getElementById("d_notelevl").value)) {
     document.getElementById("d_notelevl").value="0";
  }
  var seclev=trim(parseInt(document.getElementById("d_seclevel").value,10));
      seclev=seclev - 0;
  var notelev=trim(parseInt(document.getElementById("d_notelevl").value,10));
      notelev=notelev - 0;
  if (seclev>=notelev) { return true; }
  return false;
}
/******************************************************************************
 * EditNote - request to the server to edit note 
 ******************************************************************************/
function EditNote(Template) {
  var form = document.getElementById("UpdateNote");
  form.formactn.value="";
  form.template.value=Template;
  form.method="GET";
  form.submit();
} 
/******************************************************************************
 * Delete Note - request to the server to add delete note
 ******************************************************************************/
function SubmitDelete() {
  confirmMsg="Click Ok to Delete Note.";
  alertify.confirm(confirmMsg, function (e) {    
    if (e) { 
      form=document.UpdateNote
      var theURL = form.action;
      var postStr = AJAXPostString2(form);
      var xmlHttp = createHttpObject();
      xmlHttp.open("POST", theURL, false);
      xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
      xmlHttp.send(postStr);
      if (xmlHttp.status == "200") {
        if ( xmlHttp.responseText.match(/location.href/i) ){
          parent.frames['PatFrame'].refreshScreen();
          parent.CloseDocument();
        } else {
          alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
        }
      } else {
        alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
      }
    }
  });
}
