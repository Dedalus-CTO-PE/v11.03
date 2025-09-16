//jsVersion  : V11.03.00
// Function : outweb0203021.js
//
// Modifications :
//
// V10.02.01 04.07.2011 J.Tan         CAR 239592
//           Added setRedirectXCom for Extra Compensable
// V10.02.00  17.06.2011 Ebon Clements      CAR 239534
//                       Created include
//------------------------------------------------------------ 
function ChkChkIn(){
if(!checkTimeMin(UpdateForm.outbb032,UpdateForm.outbb032.title)) {
   return; 
}
GetCurDateTime(UpdateForm.CurrDate,UpdateForm.CurrTime);
var cdatebig = ChkDateTime(UpdateForm.startdate,UpdateForm.outbb032,UpdateForm.CurrDate,UpdateForm.CurrTime);
if (!(isWhitespace(UpdateForm.outbb032.value))){
   if (!(cdatebig)){
      alert("Check in time cannot be in the future");
      UpdateForm.outbb032.value="";
   }
}
}
function SetDefaultField() {
  if (isWhitespace(UpdateForm.outbb032.value)) {
      SetCurrentDateTimeMin(null,UpdateForm.outbb032);  
      UpdateForm.outbb032.focus(); return;}
}
function UpdateRecords() {
  setRedirect();
  SubmitHidden(UpdateForm);
}
function GetCurDateTime(dateField,timeField) {
  if (timeField!=null) timeField.value="";
  var serverURL = "../cgi-bin/patweb80.pbl?reportno=1";
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValues=returnValue.return_value.split("|")
    if (dateField!=null) {
       dateField.value=ReturnValues[0];
       dateField.blur() }
    if (timeField!=null) {
      timeField.value=ReturnValues[1].substr(0,5);
      timeField.blur()
                        } }
}
function setRedirect() {
  if (document.UpdateForm.ptcnxcom != undefined) {
    if (document.UpdateForm.ptcnxcom.value == "1") {
      setRedirectXCom();
      return;
    }
  }

  strTemplate="" ;
  scrName="";
  if (document.UpdateForm.ptcnhdps.value!="1") {
    checkInd=document.UpdateForm.outbb002.value.substr(3,5)
    if(checkInd.search(/W/g) >= 0) {
      strTemplate="041";
      scrName="WC";}
    if(checkInd.search(/M/g) >= 0) {
      strTemplate="042";
      scrName="TAC";}
    if(checkInd.search(/V/g) >= 0) {
      strTemplate="043";
      scrName="VA";}
    if(checkInd.search(/D/g) >= 0) {
      strTemplate="081";
      scrName="DF";}

    checkInd=document.UpdateForm.outbb002.value.substr(8,1)
    if(checkInd.search(/C/g) >= 0) {
      strTemplate="048";
      scrName="CT";}

    if (strTemplate!="") {
      document.UpdateForm.nextpage.value="6"
      document.UpdateForm.redirect.value="patweb89.pbl?reportno=01" +
                 "&template=" + strTemplate +
                 "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
                 "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") 
    }
  }

  if(chkExtraTempl(document.UpdateForm,"B",document.UpdateForm.casekeys.value,
                PatientLinks.urnumber.value.replace(/ /g,"+"),scrName)) {
    document.UpdateForm.nextpage.value="6";
  }
  if(chkExtraTempl(document.UpdateForm,"B",document.UpdateForm.casekeys.value,
                PatientLinks.urnumber.value.replace(/ /g,"+"),scrName)) {
    document.UpdateForm.nextpage.value="6";
  }
}

function setRedirectXCom() {
  strTemplate="" ;
  scrName="";

  if (document.UpdateForm.ptcnhdps.value!="1") {
    checkComp=document.UpdateForm.outbb002.value.substr(3,1)
      if (checkComp=="D") {
       strTemplate="081";
       scrName="DF";}
      if (checkComp=="A") {
       strTemplate="240";
       scrName="AD"; }
     if (checkComp=="O") {
       strTemplate="241";
       scrName="OD"; }
     if (checkComp=="M") {
       strTemplate="242";
       scrName="MV"; }
     if (checkComp=="F") {
       strTemplate="243";
       scrName="FD"; }
     if (checkComp=="H") {
       strTemplate="244";
       scrName="PR"; }
     if (checkComp=="S") {
       strTemplate="245";
       scrName="SH"; }
     if (checkComp=="V") {
       strTemplate="246";
       scrName="WV"; }
     if (checkComp=="W") {
       strTemplate="247";
       scrName="WW"; }
     if (checkComp=="E") {
       strTemplate="248";
       scrName="OS"; }
     if (checkComp=="G") {
       strTemplate="249";
       scrName="OV"; }

    if (strTemplate!="") {
      document.UpdateForm.nextpage.value="6"
      document.UpdateForm.redirect.value="patweb89.pbl?reportno=01" +
                 "&template=" + strTemplate +
                 "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
                 "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") 
    }
  }

  if(chkExtraTempl(document.UpdateForm,"B",document.UpdateForm.casekeys.value,
                PatientLinks.urnumber.value.replace(/ /g,"+"),scrName)) {
    document.UpdateForm.nextpage.value="6";
  }
  if(chkExtraTempl(document.UpdateForm,"B",document.UpdateForm.casekeys.value,
                PatientLinks.urnumber.value.replace(/ /g,"+"),scrName)) {
    document.UpdateForm.nextpage.value="6";
  }

}

