//jsVersion  : V11.03.00
//========================================================================
// Program   : mrtweb05.js
//
// Written   : 24.11.2004 Lina Vo    
//
// Function  : Standard Functions Used in mrtweb05 templates
//
// Version   : 
//
// V9.04.01  25.11.2004  Lina Vo         34301
//           Changed checkMaxComm().
// V9.04.00  24.11.2004  Lina Vo         34301
//           Javascript created
//
//========================================================================
//
//========================================================================
//   Report 1
//========================================================================
function CheckChange(thisForm) {
  if (thisForm.chckchng.checked==true) {
    thisForm.mrauc006.className=""
    thisForm.mrauc007.className="Number"
    thisForm.mrauc004.className=""
    thisForm.mrauc005.className="Number"
    thisForm.mrauc009.className=""
    thisForm.mrauc011.className="";
    thisForm.mrauc012.value="Y";
  }
  else {
    thisForm.mrauc006.className="Mandatory"
    thisForm.mrauc007.className="Mandatory Number"
    thisForm.mrauc004.className="Mandatory"
    thisForm.mrauc005.className="Mandatory Number"
    thisForm.mrauc009.className="Mandatory"
    thisForm.mrauc011.className="Mandatory";
    thisForm.mrauc012.value="N";
  }
}
function checkMaxComm(thisField) {
  if (thisField.value.length > 100) {
    alert("Maximum length of comments is 100 characters."
          +"\nPlease remove extra rows to continue.");
    FocusDelay(thisField);
  }
}
function getDiff(newField,origField,diffField) {
  if (isWhitespace(newField.value)) {
    return;
  }
  else {
    if (newField.className.match(/Integer/)) {
      if (!checkInteger(newField,newField.title)) {
         return false 
      }
    }
    if (newField.className.match(/Number/)) {
      if (!checkNumber(newField)) {
         return false 
      }
    }
  }
  if (isWhitespace(origField.value)) {
    return;
  }
  else {
    if (origField.className.match(/Integer/)) {
      if (!checkInteger(origField,origField.title)) {
         return false 
      }
    }
    if (origField.className.match(/Number/)) {
      if (!checkNumber(origField)) {
         return false 
      }
    }
  }
  diffField.value=parseFloat(newField.value)-parseFloat(origField.value);
  RoundNumber(diffField,'4'); 
}
function getWIES(admissno,ReturnCode,ReturnDesc,wiestotl) {
  ReturnDesc.value="";
  if (isWhitespace(ReturnCode.value)) { 
    return; 
  }
  var serverURL   = "../cgi-bin/comweb80.pbl?reportno=8" +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&admissno=" + admissno.value.replace(/ /g,"+");

  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnDesc.value=ReturnValue[0];
    wiestotl.value=trim(ReturnValue[1]);
    return true;
  }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    ReturnCode.focus();
    return false;
  }
}
function checkBefAdm(AuditDate,AdmDate) {
  if (isWhitespace(AuditDate.value)||isWhitespace(AdmDate.value)) {
    return;
  }
  if (SetDateYYYYMMDD(AuditDate.value) < SetDateYYYYMMDD(AdmDate.value)) {
    alert("Audit Date cannot be before Admission Date");
    AuditDate.select();
    AuditDate.focus();
    return false }
  else {
    return true }
}
