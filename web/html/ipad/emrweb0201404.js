//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/emrweb0201404.js
//
// Modification
//
// Version         Date          Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.01.01       04.12.2012    B.G.Ackland New Medical Record View Refresh
// V10.01.00       11.07.2012                   New
//
function init() {
  el=document.getElementById("NurseHandover")
  el.style.display="none";
  el=document.getElementById("DoctorHandover")
  el.style.display="none";
  if (!isWhitespace(PatientLinks.wbsedoc.value)) {
    if (DoctorForm.emcndoct.value==1) {
      var serverURL  = "emrweb08.pbl?reportno=11" +
                       "&valdcode=" + PatientLinks.wbsedoc.value.replace(/ /g,"+")
    }
    else {
      var serverURL  = "../cgi-bin/patweb80.pbl?reportno=3" +
                       "&valdcode=" + PatientLinks.wbsedoc.value.replace(/ /g,"+")
    }
    var returnValue = RSExecute(serverURL);
    if (returnValue.status==0) { 
      ReturnValue=returnValue.return_value.split("|");
      DoctorForm.emvis007.value=PatientLinks.wbsedoc.value;
      DoctorForm.doctnam.value=ReturnValue[0];
      el=document.getElementById("DoctorHandover")
      el.style.display="";
    }
  }
  if (!isWhitespace(PatientLinks.wbsenurs.value)) {
    var serverURL   = "patweb80.pbl?reportno=17" +
                      "&valdcode=" + PatientLinks.wbsenurs.value.replace(/ /g,"+")
    var returnValue = RSExecute(serverURL);
    if (returnValue.status==0) { 
      ReturnValue=returnValue.return_value.split("|");
      NurseForm.emvis007.value=PatientLinks.wbsenurs.value;
      NurseForm.nursnam.value=trim(ReturnValue[1]) + " " + trim(ReturnValue[0]);
      el=document.getElementById("NurseHandover")
      el.style.display="";
    }
  }
  var actionBtn = parent.document.getElementById('actionButton');
  if(actionBtn) {
    actionBtn.className = actionBtn.className.replace(/SpanButton/g,"");
    actionBtn.className = actionBtn.className.replace(/Blue/g,"");
    actionBtn.className = actionBtn.className + " SpanButtonBlue";
    actionBtn.innerText = "Save";
    actionBtn.onclick = function() { PostHandover() }
  }
  PatientURN=PatientLinks.urnumber.value;
  PatientVIS=PatientLinks.admissno.value;
}
function PostHandover() {
  if (!isWhitespace(DoctorForm.emvis007.value)) { 
    doctor=DoctorForm.emvis007.value;
    admissno=document.PatientLinks.admissno.value;
    user=document.PatientLinks.webuseid.value;
    var serverURL   = "emrweb08.pbl?reportno=3" +
                      "&admissno=" + admissno.replace(/ /g,"+") +
                      "&doctcode=" + doctor.replace(/ /g,"+") +
                      "&webuseid=" + user.replace(/ /g,"+") +
                      "&updttype=ALDOC" +
                      "&updateky=" + PatientLinks.updateky.value.replace(/ /g,"+")
    var returnValue = RSExecute(serverURL);
    if (returnValue.status!=0) { return }
  }

  if (!isWhitespace(NurseForm.emvis007.value)) { 
    nurse=NurseForm.emvis007.value;
    admissno=document.PatientLinks.admissno.value;
    user=document.PatientLinks.webuseid.value;
    var serverURL   = "emrweb08.pbl?reportno=4" +
                      "&admissno=" + admissno.replace(/ /g,"+") +
                      "&webuseid=" + user.replace(/ /g,"+") +    
                      "&updttype=ALNUR" +    
                      "&doctcode=" + nurse.replace(/ /g,"+") +
                      "&datevald=0"
    var returnValue = RSExecute(serverURL);
    if (returnValue.status!=0) { return }
  }
  parent.frames['PatFrame'].refreshScreen();
  parent.CloseDocument();

}
