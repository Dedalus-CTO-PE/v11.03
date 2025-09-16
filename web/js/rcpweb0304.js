//jsVersion  : V11.03.00
//========================================================================
// Program   : rcpweb0304.js
//
// Written   : 26.05.2004  Pat Dirito
//
// Function  : Standard Functions Used in rcpweb0304 templates
//
// Version   : 
//
// V11.02.01 17.06.2022  DA Sarkies      TSK 0920700
//           Added line to turn the text of the add button red when disabled
// V10.07.01 18/11/2015  J.Tan           CAR 303942
//           Mods to payment type
// V10.04.01 31/05/2014  J.Tan           CAR 301019
//           Mods date of Payment to be readonly
// V10.03.01 15/06/2012  J.Tan           CAR 246555
//           Mods Default register for Invoice practice
// V10.00.01 27.05.2010  Ebon Clements      222858
//           V10.00 CD diffs - CancelReceipt() link
// V9.11.01  17/10/2008  J.Tan           CAR 181087
//           Added disable button (DisButton) function
// V9.09.02  01.08.2007  J.Tan       CAR 145436
//           Mods redirect for SX Invoice
// V9.09.01  31.07.2007  Peter Vela      146466
//           Removed Gov Agency functionality
// V9.07.01  03.08.2006  J.Tan           103365
//           Mods to redirect to John hopkins invoice if cfeetype=9
// V9.04.01  01.12.2004  Lina Vo         55641
//           Changed tab order in init().
// V9.03.01  09.08.2004  Lina Vo         51719
//           Added validateMandatory to FinishReceipt()
// V9.03.00  26.05.2004  Pat Dirito      50194
//           Javascript created
//
//========================================================================
// Template 001 functions
//========================================================================
function init() {
  // 
  // Display correct register selection list for patient or priv pract.
  //
  if (AddForm.visittyp.value==4) {   // Priv Pract.
    if (!isWhitespace(AddForm.mpregist.value)) {
      AddForm.register.value=AddForm.mpregist.value;
      RegisterOption.innerHTML=ShowRegister2a.innerHTML;
    } else {
      RegisterOption.innerHTML=ShowRegister2.innerHTML;
      DispSelectedReg();
    }
  }
  else {                             // Patient Billing - Inp,Out,Emr
    RegisterOption.innerHTML=ShowRegister1.innerHTML;
    DispSelectedReg();
  }
  //
  // set invoice number
  //
  if (isWhitespace(AddForm.rcpde005.value)) {
    AddForm.rcpde005.value=AddForm.invoicen.value;
  }
  //
  // set visit number
  //
  if (isWhitespace(AddForm.rcpde006.value)) {
    AddForm.rcpde006.value=AddForm.admissno.value;
  }
  //
  // set UR number
  //
  if (isWhitespace(AddForm.rcpde007.value)) {
    AddForm.rcpde007.value=AddForm.urnumber.value;
  }
  //
  // Disable header if receipt already allocated.
  //
  if (!isWhitespace(AddForm.rcpbk001.value)) {   // Receipt Number Allocated
    if (AddForm.rcpbk007.value==1) {             // Received from Health Fund
      AddForm.patdebtr.checked=false;
      AddForm.hlthfund.value=AddForm.rcpbk008.value;
      AddForm.insrcode.value="";
//      AddForm.govtagnc.value="";
    }
    else if (AddForm.rcpbk007.value==2) {        // Received from Insurance  
      AddForm.patdebtr.checked=false;
      AddForm.hlthfund.value="";
      AddForm.insrcode.value=AddForm.rcpbk008.value;
//      AddForm.govtagnc.value="";
    }
    else if (AddForm.rcpbk007.value==3) {        // Received from Govt Agency
      AddForm.patdebtr.checked=false;
      AddForm.hlthfund.value="";
      AddForm.insrcode.value="";
//      AddForm.govtagnc.value=AddForm.rcpbk008.value;
    }
    else {                                       // Receiver from Patient
      AddForm.patdebtr.checked=true;
      AddForm.hlthfund.value="";
      AddForm.insrcode.value="";
    }
  // disable receipt header
    AddForm.finshbut.disabled=false;            // Allocate Button
    AddForm.finshbut.focus();  
    AddForm.rcpbk004.className="Readonly";      // Drawer
    AddForm.rcpbk004.disabled=true;
    GetCookieCashierPassword();
    AddForm.password.className="Readonly";      // Password
    AddForm.password.readOnly=true;
    AddForm.rcpbk014.className="Readonly";      // cheque account number
    AddForm.rcpbk014.readOnly=true;
    AddForm.rcpbk014.disabled=true;             
    AddForm.patdebtr.disabled=true;             // Received From Patient debtor
    AddForm.hlthfund.className="Readonly";      // Received From Health fund
    AddForm.hlthfund.readOnly=true;
    AddForm.hlthbutt.disabled=true;
    AddForm.clhfbutt.disabled=true;
    AddForm.insrcode.className="Readonly";      // Received From Insurance
    AddForm.insrcode.readOnly=true;
    AddForm.insrbutt.disabled=true;
    AddForm.clicbutt.disabled=true;
//    AddForm.govtagnc.className="Readonly";      // Received From Govt Agency
//    AddForm.govtagnc.readOnly=true;
//    AddForm.govtagnc.disabled=true;             
    AddForm.rcpbk002.className="Readonly";      // Payment Date
    AddForm.rcpbk002.readOnly=true;
//    AddForm.currbutt.disabled=true;
//    AddForm.cldtbutt.disabled=true;
    AddForm.finshbut.tabIndex=1;
    AddForm.rcpbt023.tabIndex=2;
    AddForm.rcpde004.tabIndex=3;
    AddForm.rcpde018.tabIndex=4;
    AddForm.printflg.tabIndex=5;
    AddForm.selprint.tabIndex=6;
    AddForm.nocopies.tabIndex=7;
    AddForm.cancelbt.tabIndex=8;
  }
  else {                                        // Receipt Not Allocated yet
    if (isWhitespace(AddForm.rcpbk014.value)) {
      for (var i=0; i < AddForm.rcpbk014.length; i++) {
        if (AddForm.rcpbk014.options[i].value==AddForm.defchqno.value){
        AddForm.rcpbk014.selectedIndex=i; }
      }
    }
    checkOtherFields();
    GetCookieCashierPassword();
    AddForm.rcpbk002.value=AddForm.currdate.value;
    AddForm.finshbut.disabled=true;
    document.getElementById("btnAdd").className = "button";
    AddForm.rcpbk004.tabIndex=1;
    AddForm.password.tabIndex=2;
    AddForm.patdebtr.tabIndex=3;
    AddForm.hlthfund.tabIndex=4;
    AddForm.insrcode.tabIndex=5;
    AddForm.rcpbk002.tabIndex=6;
    AddForm.rcpde004.tabIndex=7;
    AddForm.rcpde018.tabIndex=8;
    AddForm.printflg.tabIndex=9;
    AddForm.selprint.tabIndex=10;
    AddForm.nocopies.tabIndex=11;
    AddForm.rcpbt023.tabIndex=12;
    AddForm.cancelbt.tabIndex=13;
    if (AddForm.outstamt.value>0) {
      AddForm.rcpde018.value=AddForm.outstamt.value;
    }
  }
}
//------------------------------------------------------------
// Display previously selected register
//------------------------------------------------------------
function DispSelectedReg() {
  if (!isWhitespace(AddForm.register.value)) {
    for (var i=0; i < AddForm.rcpde004.length; i++) {
      if (AddForm.rcpde004.options[i].value.substr(0,3)==
          AddForm.register.value){
        AddForm.rcpde004.selectedIndex=i; }
    }
  }
  else {
    if (AddForm.rcpde004.length==2) {
      AddForm.rcpde004.selectedIndex=1;
    }
  }
}

  //
//------------------------------------------------------------
//  Function : When Patient/Debtor box is checked
//  Health Fund, Insr, and Gov't Agency are disabled
//------------------------------------------------------------
function checkOtherFields() {
  if (AddForm.patdebtr.checked==true) {
    AddForm.hlthfund.value="";
    AddForm.hlthfund.className="Readonly";      // Received From Health fund
    AddForm.hlthfund.readOnly=true;
    AddForm.hlthfund.tabIndex=-1;
    AddForm.hlthbutt.disabled=true;
    AddForm.clhfbutt.disabled=true;
    AddForm.insrcode.value="";
    AddForm.insrcode.className="Readonly";      // Received From Insurance
    AddForm.insrcode.readOnly=true;
    AddForm.insrcode.tabIndex=-1;
    AddForm.insrbutt.disabled=true;
    AddForm.clicbutt.disabled=true;
//    AddForm.govtagnc.selectedIndex=0;
//    AddForm.govtagnc.className="Readonly";      // Received From Govt Agency
//    AddForm.govtagnc.readOnly=true;
//    AddForm.govtagnc.disabled=true;
  }
  else {
    AddForm.hlthfund.className="";      // Received From Health fund
    AddForm.hlthfund.readOnly=false;
    AddForm.hlthfund.tabIndex=4;
    AddForm.hlthbutt.disabled=false;
    AddForm.clhfbutt.disabled=false;
    AddForm.insrcode.className="";      // Received From Insurance
    AddForm.insrcode.readOnly=false;
    AddForm.insrcode.tabIndex=5;
    AddForm.insrbutt.disabled=false;
    AddForm.clicbutt.disabled=false;
//    AddForm.govtagnc.className="";      // Received From Govt Agency
//    AddForm.govtagnc.readOnly=false;
//    AddForm.govtagnc.disabled=false;
  }
}
function AddReceipt() {
  if (isWhitespace(AddForm.rcpbt023.value)) {
    return;
  }
  if (ValidateReceipt()) {
     linkurl="rcpweb03.pbl?reportno=4&template=002" +
             "&paymtype=" + AddForm.rcpbt023.value.replace(/ /g,"+");

     ShowDetail(linkurl);
  }
}
function UpdateReceipt(receiptno,uniqueno,paycode) {
     linkurl="rcpweb03.pbl?reportno=4&template=003" +
             "&paymtype=" + paycode.replace(/ /g,"+") +
             "&rcpbk001=" + receiptno.replace(/ /g,"+") +
             "&rcpbt003=" + uniqueno.replace(/ /g,"+");
     ShowDetail(linkurl);
}
function CancelReceipt() {
  if (isWhitespace(AddForm.rcpbk001.value)) {
   if ((AddForm.cfeetype.value == '9') || (AddForm.cfeetype.value == '5')) {
     linkurl="patweb76.pbl?reportno=1&template=032" +
             "&invoicen=" + AddForm.invoicen.value.replace(/ /g,"+") +
             "&admissno=" + AddForm.admissno.value.replace(/ /g,"+") +
             "&urnumber=" + AddForm.urnumber.value.replace(/ /g,"+") +
             "&visittyp=" + AddForm.visittyp.value.replace(/ /g,"+") + 
             "&updatety=1";
     location.href=linkurl;
    } else {
     linkurl="patweb76.pbl?reportno=1&template=001" +
             "&invoicen=" + AddForm.invoicen.value.replace(/ /g,"+") +
             "&admissno=" + AddForm.admissno.value.replace(/ /g,"+") +
             "&urnumber=" + AddForm.urnumber.value.replace(/ /g,"+") +
             "&visittyp=" + AddForm.visittyp.value.replace(/ /g,"+") + 
             "&updatety=1";
     location.href=linkurl;
     }
  }
  else {
   if ((AddForm.cfeetype.value == '9') || (AddForm.cfeetype.value == '5')) {
    AddForm.redirect.value="patweb76.pbl?reportno=1&template=032&updatety=1";
   } else {
    AddForm.redirect.value="patweb76.pbl?reportno=1&template=001&updatety=1";
   }
    AddForm.updttype.value="C";
    AddForm.submit();
  }
}
function FinishReceipt() {
  // disable button to avoid double clicking
  DisButton();
  if (parseFloat(AddForm.rcpde018.value)!=
      parseFloat(AddForm.accmtotl.value)) {
    alert("Amount does not match Accumulative Amount.");
    return;
  }
  if (parseFloat(AddForm.rcpde018.value)==0) {
    alert("Amount cannot be zero.");
    AddForm.rcpde018.focus();
    return;
  }
  AddForm.rcpbt023.className="";
  if (validateMandatory(AddForm)) {
   if ((AddForm.cfeetype.value == '9') || (AddForm.cfeetype.value == '5')) {
    AddForm.redirect.value="patweb76.pbl?reportno=1&template=032&updatety=1";
   } else {
    AddForm.redirect.value="patweb76.pbl?reportno=1&template=001&updatety=1";
   }
    AddForm.updttype.value="F";
    AddForm.submit();
  }
}
function DisButton() {
  document.AddForm.finshbut.disabled=true;
  setInterval('document.AddForm.finshbut.disabled=false',6000);
}

