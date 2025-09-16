//jsVersion  : V11.03.01
//---------------------------------------------------------------------------
// Check if outpatient visit is cancelled
function CheckOutpatientCancel(AdmNo) {
  var serverURL = "../cgi-bin/comweb81.pbl?reportno=59" +
                  "&valdcode=" + AdmNo.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status == 0) {
    ReturnValue = returnValue.return_value.split("|")
    if (ReturnValue.length > 1) {
      urno = trim(ReturnValue[7]);
      alert('Cancelled Outpatient Visit for UR ' + urno);
      return false;
    }
  }
  return true;
}
function setNextTemplate(AdmNo) {
  Patient.action=parent.TemplateFile.content.substr(0,8) + ".pbl";
  Patient.reportno.value=parent.TemplateFile.content.substr(8,2);
  Patient.template.value=parent.TemplateFile.content.substr(10,3);

  if (parent.TemplateFile.content.substr(0,13)=="mrtweb0203001" ||
      parent.TemplateFile.content.substr(0,13)=="mrtweb0201001") {
    Patient.action="mrtweb02.pbl";
    Patient.reportno.value="06";
    Patient.template.value="000";
    return;
  }
  if (parent.PatientLinks!=undefined &&
      parent.PatientLinks.casekeys!=undefined &&
      parent.TemplateFile.content.substr(0,8)!="patweb98") {
    if (parent.TemplateFile.content.substr(0,3)=="opr") {
      Patient.action="oprweb06.pbl";
      Patient.reportno.value="11";
      Patient.template.value="001";
      return;
    }
    else {
      if (parent.TemplateFile.content.substr(0,3)=="wat") {
        Patient.action="watweb01.pbl";
        Patient.reportno.value="02";
        Patient.template.value="010";
        return;
      }
      else {
        Patient.action="patweb98.pbl";
        Patient.reportno.value="01";
        Patient.template.value="001";
        CheckSwitchOutpatientReferral(AdmNo);
        return;
      }
    }
  }

  if (parent.TemplateFile.content.substr(0,13)=="patweb9801001"  ||
      parent.TemplateFile.content.substr(0,13)=="outweb0203020"  ||
      parent.TemplateFile.content.substr(0,13)=="outweb0203001"  ||
      parent.TemplateFile.content.substr(0,13)=="allweb0202014"  ||
      parent.TemplateFile.content.substr(0,13)=="allweb0202002") {
    Patient.action="patweb98.pbl";
    Patient.reportno.value="01";
    Patient.template.value="001";
    CheckSwitchOutpatientReferral(AdmNo);
  }
}
function CheckSwitchOutpatientReferral(AdmNo) {
  p = document.Patient;

//outpatient vsist
  var serverURL = "../cgi-bin/comweb81.pbl?reportno=62" +
                  "&valdcode=" + p.admissno.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status == 0) {
    ReturnValue = returnValue.return_value.split("|")
    if (ReturnValue.length != 1) {
     if (p.ptcnvsro.value == '1') {
        p.action="outweb02.pbl";
        p.reportno.value="03";
        p.template.value="020";
      }
      else {
        if (p.ptcnvsro.value == '2') {
          p.action="outweb02.pbl";
          p.reportno.value="03";
          p.template.value="001";
        }
      }
      return true;
    }
  }

  var serverURL = "../cgi-bin/comweb81.pbl?reportno=53" +
                  "&valdcode=" + AdmNo.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status == 0) {
    ReturnValue = returnValue.return_value.split("|")
    if (ReturnValue.length == 1) {
      return true;
    }

    var ptvitype = ReturnValue[11];
    // Referral Visit
    if (ptvitype == '10') {
      if (p.ptcnvsrr.value == '1') {
        p.action="allweb02.pbl";
        p.reportno.value="02";
        p.template.value="014";
      }
      else {
        if (p.ptcnvsrr.value == '2') {
          p.action="allweb02.pbl";
          p.reportno.value="02";
          p.template.value="002";
        }
      }
    }
  }
  return true;
}
