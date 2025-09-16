//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/emrweb0201406.js
//
// Modification
//
// Version         Date          Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.08.00       24/10/2016    Created js
//
function init() {
  if (document.AdmittingDrForm.d_emvis091.value == "Yes") {
    document.AdmittingDrForm.emvis091.selectedIndex=1;
  }
  var actionBtn = parent.document.getElementById('actionButton');
  if(actionBtn) {
    actionBtn.className = actionBtn.className.replace(/SpanButton/g,"");
    actionBtn.className = actionBtn.className.replace(/Blue/g,"");
    actionBtn.className = actionBtn.className + " SpanButtonBlue";
    actionBtn.innerText = "Save";
    actionBtn.onclick = function() { PostAdmittingDoc() }
  }
  PatientURN=PatientLinks.urnumber.value;
  PatientVIS=PatientLinks.admissno.value;
}
function PostAdmittingDoc() {
  if(isWhitespace(AdmittingDrForm.n_emvis106.value)) {
    AdmittingDrForm.emvis106.value="";
  }
  UpdateFieldEMR(document.AdmittingDrForm.admissno,1,AdmittingDrForm.emvis106);
  UpdatePreAdmReq(document.AdmittingDrForm.admissno);
  UpdateFieldEMR(document.AdmittingDrForm.admissno,3,document.AdmittingDrForm.emvis091);
  parent.frames['PatFrame'].refreshScreen();
  parent.CloseDocument();
}
function UpdateFieldEMR(Visit,OptionType,ReturnCode) {
  ReturnFunction="" ;
  for (var i=3; i < UpdateFieldEMR.arguments.length; i++) {
    if (typeof(UpdateFieldEMR.arguments[i]) == 'function') {
      ReturnFunction=UpdateFieldEMR.arguments[i] }
    else {
      UpdateFieldEMR.arguments[i].value=""; }  }
  var serverURL  = "../cgi-bin/emrweb08.pbl?reportno=20" +
               "&admissno=" + Visit.value.replace(/ /g,"+") +
               "&valdtype=" + OptionType +
               "&valdcode=" + ReturnCode.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.select();
    return false; }
}
function UpdatePreAdmReq(adm) {
  ReturnFunction="" ;
  for (var i=1; i < UpdatePreAdmReq.arguments.length; i++) {
   if (typeof(UpdatePreAdmReq.arguments[i]) == 'function') {
     ReturnFunction=UpdatePreAdmReq.arguments[i] } }

  var serverURL = "../cgi-bin/emrweb08.pbl?reportno=22" +
                  "&admissno="+adm.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
}
