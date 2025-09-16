//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/emrweb0201402.js
//
// Modification 
//
// Version         Date                         Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.00       13/04/2012                   Version change
// V10.01.00       13/04/2012                   Version change
// V10.00.00       13/04/2012                   Created for Mobility Suite
//

function getDiagnosis(SearchField,ReturnSelect) {
  UpdateForm.emvcd001.value="";
  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=1" +
                    "&valdcode=" + SearchField.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  OS="";
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    for (var j=0; j < ReturnValue.length; j++) {
       if (!isWhitespace(ReturnValue[j])) {
         SelectValue=ReturnValue[j].split(",");
         OS+="<li class=sectionItem onclick=\"setDiagnosis('"+SelectValue[0]+"','"+
             SelectValue[1]+"');\">"+SelectValue[1]+"</li>"
         } } }
  el=document.getElementById("SearchResults")
  if (OS=="") {
    el.innerHTML="<li class=sectionItem>No Matching Diagnosis Found</li>"
  }
  else {
    el.innerHTML=OS;
  }
}
function setDiagnosis(diagCode,diagName) {
  UpdateForm.d_emvcd001.value=diagName;
  UpdateForm.emvcd001.value=diagCode;
}
function checkDiagnosis() {
  if (UpdateForm.emvcd001.value=="") {
    alertify.alert('Primary Diagnosis not selected');
  }
}
function init() {
  var actionBtn = parent.document.getElementById('actionButton');
  if(actionBtn) {
    actionBtn.className = actionBtn.className.replace(/SpanButton/g,"");
    actionBtn.className = actionBtn.className.replace(/Blue/g,"");
    actionBtn.className = actionBtn.className + " SpanButtonBlue";
    actionBtn.innerText = "Save";
    actionBtn.onclick = function() { PostDischargePRIV() }
  }
  PatientURN=PatientLinks.urnumber.value;
  PatientVIS=PatientLinks.admissno.value;
  if (!isWhitespace(document.HiddenFields.PrimaryDiagnosis.value)) {
     el=document.getElementById("PrimDiag");
     el.style.display="";
  } else {
     el=document.getElementById("SrchDiag");
     el.style.display="";
  }
  if (isWhitespace(document.HiddenFields.HospitalAdmission.value)) {
    if (!isWhitespace(document.HiddenFields.ExpectedUnit.value)) {
       if(document.UpdateForm.ptcnhdps.value=="3"){ // Victoria
         alertify.alert('Warning : Patient must be admitted before being Discharged.')
       } else {
         alertify.alert('Patient must be admitted before Discharge.')
         DisableForm(document.UpdateForm) 
       }
    }
  }
  if (trim(document.UpdateForm.attdtype.value.substr(14,4))=='10') {
     for(var i=0; i<document.UpdateForm.emvis026.length; i++) {
       ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
       if(ind=='8'){ document.UpdateForm.emvis026.selectedIndex=i; }
     }
     for(var i=0; i<document.UpdateForm.emvis049.length; i++) {
       ind=trim(document.UpdateForm.emvis049.options[i].value.substr(14,4));
       if(ind=='9'){ document.UpdateForm.emvis049.selectedIndex=i; }
     }
  }
  else {
    if (isWhitespace(document.UpdateForm.chkdot.value)) {
      alertify.alert("WARNING : Attending Doctor Not Entered")
      for(var i=0; i<document.UpdateForm.emvis026.length; i++) {
         ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
         if(ind==6){ document.UpdateForm.emvis026.selectedIndex=i; }
       }
    }
    else {
      setTimeout('defDeparturePRIV()',100);}
  }
  document.UpdateForm.brcom001.value=document.UpdateForm.dummy1.value + 
                                     document.UpdateForm.dummy2.value
}
function checkDateFunction() {
  if(isWhitespace(document.UpdateForm.emvis074.value)) {
    return;
  } else {
    checkDate(document.UpdateForm.emvis074,'Ward Allocated Date');
  }
}
function enableUnitReqDateTime() {
  if (document.UpdateForm.emvis134.value=="") {
    document.UpdateForm.emvis073.selectedIndex=0;
    document.UpdateForm.emvis073.className="ReadOnly";
    document.UpdateForm.emvis073.readOnly=true;
    document.UpdateForm.emvis073.disabled=true;
    document.UpdateForm.emvis083.value="";
    document.UpdateForm.emvis083.className="ReadOnly";
    document.UpdateForm.emvis083.readOnly=true;
  } else {
    document.UpdateForm.emvis073.readOnly=false;
    document.UpdateForm.emvis073.className="";
    document.UpdateForm.emvis073.disabled=false;
    document.UpdateForm.emvis083.readOnly=false;
    document.UpdateForm.emvis083.className="";
  }
}
