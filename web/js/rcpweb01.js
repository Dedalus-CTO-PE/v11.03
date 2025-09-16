//jsVersion  : V11.03.00
//========================================================================
// JavaScript : rcpweb01.js
// Written    : 09 October 2003  Tracey Nguyen
// Function   : Standard Functions Used in rcpweb01 templates
//
// Version    :
//
// V9.03.01  04/02/2004 Lina Vo   CAR 44087                       
//           Added Report 7 routines.
// V9.03.00  Added ShowDetail01() and EditID01() for report 1
//           Created Script
//------------------------------------------------------------------------
// REPORT 1 - Cashier Maintenance
//------------------------------------------------------------------------
function ShowDetail01(linkurl) {
  Left=(document.body.clientWidth-500)/2
  DFrameLink(linkurl,40,Left,500,200)
}
function EditID01() {
  var dummy="";
  if (validateRCP(1,SelectCode.startkey,dummy)) {
      SelectCode.template.value=2
      SelectCode.rccsh001.value=SelectCode.startkey.value
      Left=(document.body.clientWidth-500)/2
      DFrameSubmit(SelectCode,40,Left,500,200)
  }
}
//------------------------------------------------------------------------
// REPORT 7 - Receipt Enquiry    
//------------------------------------------------------------------------
function justifyURDebtor() {
  if (isWhitespace(SelectCode.urnumber.value)) { 
    if (isWhitespace(SelectCode.invnumbr.value)) { 
      showCheque();
      SelectCode.depsonly.disabled=false;
    }
    return; 
  }
  else {
    if ((SelectCode.scanflag.value==1) ||
        (SelectCode.scanflag.value==2)) {
      justifyRight(SelectCode.urnumber);
    }
    else {
      justifyLeft(SelectCode.urnumber);
    }
    hideCheque();
    SelectCode.depsonly.checked=false;
    SelectCode.depsonly.disabled=true;
  }
}
function checkInvoice() {
  if (isWhitespace(SelectCode.invnumbr.value)) {
    showUR();
    if (isWhitespace(SelectCode.urnumber.value)) { 
      showCheque();
      SelectCode.depsonly.disabled=false;
    }
  }
  else {
    hideCheque();
    SelectCode.depsonly.checked=false;
    SelectCode.depsonly.disabled=true;
    hideUR();
  }
}
function checkCheque() {
  if (isWhitespace(SelectCode.chequeno.value)) {
    SelectCode.depsonly.disabled=false;
    if (SelectCode.depsonly.checked==false) {
      showUR();
      showInvoice();
    }
  }
  else {
    hideUR();
    hideInvoice();
    SelectCode.depsonly.checked=false;
    SelectCode.depsonly.disabled=true;
  }
}
function checkDeposit() {
  if (SelectCode.depsonly.checked==true) {
    hideCheque();
    hideUR();
    hideInvoice();
  }
  else {
    showCheque();
    if (isWhitespace(SelectCode.chequeno.value)) {
      showUR();
      showInvoice();
    }
  }
}
function showUR() {
  SelectCode.urnumber.disabled=false;
  SelectCode.urnumber.className="";
  SelectCode.srchurno.disabled=false;
}
function hideUR() {
  SelectCode.urnumber.value="";
  SelectCode.urnumber.className="Readonly";
  SelectCode.urnumber.disabled=true;
  SelectCode.srchurno.disabled=true;
}
function showInvoice() {
  SelectCode.invnumbr.disabled=false;
  SelectCode.invnumbr.className="";
  SelectCode.srchinvn.disabled=false;
}
function hideInvoice() {
  SelectCode.invnumbr.value="";
  SelectCode.invnumbr.className="Readonly";
  SelectCode.invnumbr.disabled=true;
  SelectCode.srchinvn.disabled=true;
}
function showCheque() {
  SelectCode.chequeno.disabled=false;
  SelectCode.chequeno.className="";
}
function hideCheque() {
  SelectCode.chequeno.disabled=true;
  SelectCode.chequeno.className="Readonly";
}
function PatientDebtorSearch(patflag,ReturnUR,ReturnName,ReturnVisit) {
  ReturnFunction="" ;
  for (var i=4; i < PatientDebtorSearch.arguments.length; i++) {
    if (typeof(PatientDebtorSearch.arguments[i]) == 'function') {
      ReturnFunction=PatientDebtorSearch.arguments[i] }
  }
  window.ReturnName=ReturnName ;
  window.ReturnUR=ReturnUR ;
  window.ReturnVisit=ReturnVisit ;
  DFrameStart()
  if (patflag.value==2) {       // private practice debtor
    linkurl="priweb01.pbl?reportno=4&template=2"
  }
  else if (patflag.value==0) {  // Acc Rec debtor
    linkurl="priweb01.pbl?reportno=4&template=5"
  }
  else {                               // PMI 
    linkurl="../lookups/PatientSearchFrame.html"
  }
  Left=(document.body.clientWidth-900)/2
  DFrameLink(linkurl,130,Left,900,440);
}
function PatientDebtorInvSearch(patflag,ReturnUR,ReturnName,ReturnInv) {
  ReturnFunction="" ;
  for (var i=4; i < PatientDebtorInvSearch.arguments.length; i++) {
    if (typeof(PatientDebtorInvSearch.arguments[i]) == 'function') {
      ReturnFunction=PatientDebtorInvSearch.arguments[i] }
  }
  window.ReturnName=ReturnName ;
  window.ReturnUR=ReturnUR ;
  window.ReturnCode=ReturnInv ;
  window.ReturnForm=SelectCode ;
  DFrameStart()
  if (patflag.value==2) {       // private practice debtor
    window.IBASystem=2 ;
    linkurl="priweb01.pbl?reportno=4&template=1"
  }
  else if (patflag.value==0) {  // Acc Rec debtor
    window.IBASystem=5 ;
    linkurl="priweb01.pbl?reportno=4&template=3"
  }
  else {                               // PMI 
    window.IBASystem=1 ;
    linkurl="patweb90.pbl?reportno=1&template=18"
  }
  Left=(document.body.clientWidth-900)/2
  DFrameLink(linkurl,130,Left,900,440);
}
//------------------------------------------------------------------------
// END OF JAVASCRIPT
//------------------------------------------------------------------------
