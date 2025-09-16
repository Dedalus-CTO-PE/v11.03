//jsVersion  : V11.03.00
//=============================================================================
// Program   : legweb01.js
//
// Function  : Functions Used by Patient Legacy Visits subsystem.
//
// Modifications :
//
// V9.03.00  13.05.2004  Sylvek Litewka  CAR 49209
//           Created js.
// 
//=============================================================================

//==========
// Report 1
//==========
function linkPatient(Urnumber,VisitNo,VisitType,SecOpt,Casekeys,Site,AAEFlag) {
if (VisitType=="3") {
   document.PatientLinks.action="legweb01.pbl"
   document.PatientLinks.reportno.value="2"
   document.PatientLinks.template.value="1"
   document.PatientLinks.legadmno.value=VisitNo
   document.PatientLinks.urnumber.value=Urnumber
//   document.PatientLinks.target="content"
   document.PatientLinks.submit()
}
if (VisitType=="2") {
   document.PatientLinks.action="legweb01.pbl"
   document.PatientLinks.reportno.value="3"
   document.PatientLinks.template.value="1"
   document.PatientLinks.legadmno.value=VisitNo
   document.PatientLinks.urnumber.value=Urnumber
   document.PatientLinks.submit()
}
if (VisitType=="1") {
     document.PatientLinks.action="legweb01.pbl"
     document.PatientLinks.reportno.value="4"
     document.PatientLinks.template.value="1"
     document.PatientLinks.legadmno.value=VisitNo
     document.PatientLinks.urnumber.value=Urnumber
     document.PatientLinks.submit()
  }
}

function ShowVisits() {
  document.UpdateForm.submit();
}

function ResetSearch01() {
    serverURL   = "../cgi-bin/legweb01.pbl?reportno=01&template=001" +
                  "&filtvtyp=" + UpdateForm.filtvtyp.value +
                  "&norecord=" + UpdateForm.norecord.value +
                  "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
                  "&urnumber=" + UpdateForm.urnumber.value.replace(/ /g,"+")
    location.href=serverURL
}

//==========
// Report 2
//==========
function VisitListLink() {
  var Urnumber = document.PatientLinks.urnumber.value.replace(/ /g,"+");
  var Legadmno = document.PatientLinks.legadmno.value.replace(/ /g,"+");
  location.href="legweb01.pbl?reportno=1&template=001&urnumber=" + Urnumber +
                "&legadmno=" + Legadmno;
}

function AdmissionEnqLink() {
  var Urnumber = document.PatientLinks.urnumber.value.replace(/ /g,"+");
  var Legadmno = document.PatientLinks.legadmno.value.replace(/ /g,"+");
  location.href="legweb01.pbl?reportno=2&template=001&urnumber=" + Urnumber +
                "&legadmno=" + Legadmno;
}

function linkInvoice(Invoice,Linkadmn,Visittyp,URNumber) {
  document.ShowInvoice.invoicen.value=Invoice;
  document.ShowInvoice.legadmno.value=Linkadmn;
  document.ShowInvoice.visittyp.value=Visittyp;
  document.ShowInvoice.urnumber.value=URNumber;
  document.ShowInvoice.submit();
}

function ResetSearch02() {
    serverURL   = "../cgi-bin/legweb01.pbl?reportno=02&template=006" +
                  "&norecord=" + ShowInvoice.norecord.value +
                  "&admissno=" + ShowInvoice.admissno.value.replace(/ /g,"+") +
                  "&legadmno=" + ShowInvoice.legadmno.value.replace(/ /g,"+") +
                  "&urnumber=" + ShowInvoice.urnumber.value.replace(/ /g,"+") 
    location.href=serverURL
}

//=============
// All Reports
//=============
function CompensableDetLink() {
  var compind = document.PatientLinks.comptype.value.substr(3,1);
  if (compind == "W")
    PatientLinkTo("legweb01.pbl",2,3,0,0,0)  // Workers Comp. Details
  else if (compind == "M")
    PatientLinkTo("legweb01.pbl",2,4,0,0,0)  // T.A.C Details
  else if (compind == "V")
    PatientLinkTo("legweb01.pbl",2,5,0,0,0)  // Veteran Affairs Details
  else
    alert("There are no Compensable Details for this visit.");
}

// Dummy function to disable the action taken when Patient Folder is clicked on.
function fnPatientLink() {
  return;
}
