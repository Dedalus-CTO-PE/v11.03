//jsVersion  : V11.03.00
//========================================================================
//========================================================================
//   Report 2
//========================================================================
function checkFMS()  {

  p=document.UpdateForm;
  if (isWhitespace(p.regcp014.value)) {
    return;
  }
  var serverURL = "../cgi-bin/patweb80.pbl?reportno=69" +
        "&valdcode=" + p.regcp014.value.replace(/ /g,"+");
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    p.HSYS1.value=ReturnValue[1];
    DisFields();
  }
}

function DisFields() {
  if (document.UpdateForm.HSYS1.value=="1") {
    IBAFinanceFields.innerHTML=FinanceMan.innerHTML;
    IBAFinanceDisFields.innerHTML=FinanceManDisplay.innerHTML;
  } else {
    IBAFinanceFields.innerHTML=ChequeAccount.innerHTML;
    IBAFinanceDisFields.innerHTML=Blank.innerHTML;
  }

  if (!isWhitespace(document.UpdateForm.regcp007.value)) {
    if (document.UpdateForm.regcp007.value!="89") {
      document.UpdateForm.regcp018.disabled=false;
      return;
    }
  }
  document.UpdateForm.regcp018.disabled=true;
}
function validateAccount() {
  p=document.UpdateForm;
  if (isWhitespace(p.accntcod.value)) { return; }
  if (!isWhitespace(p.ledgerno.value)) {
  ValAcc(p.accntcod,p.accntnam,p.bankld01,p.bankld02,p.chqacc01,p.chqacc02,p.dbaccn01,p.dbaccn02,p.gstdum01,p.gstdum02)
  } else {
     alert("Default Ledger must be entered."); }
}
function ValAcc(ReturnCode,ReturnName,BankLed,BankLedDsc,ChqAcc,ChqAccDsc,DebAcc,DebAccDsc,Gst,GstDsc) {
  p=document.UpdateForm;
  a=p.ledgerno.selectedIndex;
  acctcode=p.ledgerno.options[a].value + p.accntcod.value;
  var serverURL="../cgi-bin/rcpweb01.pbl?reportno=4&listtype=1" +
                "&valdcode=" + acctcode.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    BankLed.value=trim(ReturnValue[1])
    BankLedDsc.value=trim(ReturnValue[2])
    ChqAcc.value=trim(ReturnValue[3])
    ChqAccDsc.value=trim(ReturnValue[4])
    DebAcc.value=trim(ReturnValue[5])
    DebAccDsc.value=trim(ReturnValue[6])
    Gst.value=trim(ReturnValue[7])
    GstDsc.value=trim(ReturnValue[8])
    SetGST();
  }
  else {
    ReturnCode.value="";
    ReturnName.value="";
    ReturnCode.select();
    ReturnCode.focus();
  }
}
function AcCk() {  // Validation of Code for Account Search
  p=document.UpdateForm;
  a=p.ledgerno.selectedIndex;
  acctcode=p.ledgerno.options[a].value + p.accntcod.value;
  var serverURL="../cgi-bin/rcpweb01.pbl?reportno=4&listtype=1" +
                "&valdcode=" + acctcode.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ans=1;   // dummy 
  }
  else {
    ReturnCode.value="";
    ReturnName.value="";
    ReturnCode.select();
    ReturnCode.focus();
  }
}
function ChkLedgerCr() {
  p=document.UpdateForm;
  if (!isWhitespace(p.ledgerno.value)) {
  Income(p.ledgerno,p.accntcod,p.accntnam,p.bankld01,p.bankld02,p.chqacc01,p.chqacc02,p.dbaccn01,p.dbaccn02,p.gstdum01,p.gstdum02,"1",AcCk)
  } else {
     alert("Default Ledger must be entered."); }
}
function SetGST() {
  if (document.UpdateForm.HSYS1.value!="1") { return; }
  p=document.UpdateForm;
  if (isWhitespace(p.ledgerno.value)) {
    alert("Cannot select a GST Code without an Income Account");
    p.regcp012.selectedIndex=0;
    return;
  }
  if (!isWhitespace(p.regcp012.value)) {
    p.gstcon01.value=p.gstdum01.value;  
    p.gstcon02.value=p.gstdum02.value;  
  } else {
    p.gstcon01.value="";  
    p.gstcon02.value="";  
  }
}
function SetSundryDeb() {
  p=document.UpdateForm;
  if (p.regcp007.value=="92") {
    p.regcp012.className="Mandatory";
  } else {
    p.regcp012.className="";
  }
  if (p.regcp007.value==" 5") {
    SundryDebtorLedger.innerHTML=SundryDebtor.innerHTML;
  } else {
    SundryDebtorLedger.innerHTML=Blank.innerHTML;
  }
  if (p.regcp007.value!="89") {
    p.regcp018.disabled=false;
  } else {
    p.regcp018.disabled=true;
  }
  if (!checkSystem(p.regcp007)) {
    return;
  }
}
function SubmitReg() {
  p=document.UpdateForm;
  if (!checkSystem(p.regcp007)) {
    return;
  }
  if (document.UpdateForm.HSYS1.value=="1") {
    a=p.ledgerno.selectedIndex;
    p.regcp004.value=p.ledgerno.options[a].value + p.accntcod.value;
  }
  setFormactn('U');
}
function setClear() {
  p=document.UpdateForm;
  clrFields(p.accntcod,p.accntnam,p.bankld01,p.bankld02,p.chqacc01,p.chqacc02,
            p.dbaccn01,p.dbaccn02,p.gstcon01,p.gstcon02)
}
function checkSystem(system) {
  p=document.UpdateForm;
//
// General Ledger System
//
  if (p.HSYS1.value==0) {
    if ((system.value=="92") ||
        (system.value=="95")) {
      alert("General Ledger is not Available. " +
            "Please select another System Code");
//      system.selectedIndex=0;
//    system.select();
      system.focus();
      return false;
    }
  }
//
// Patient Billing System
//
  if (p.HSYS2.value==0) {
    if ((system.value==" 1") ||
        (system.value=="90") ||
        (system.value=="91") ||
        (system.value=="97")) {
      alert("Patient Billing is not Available. " +
            "Please select another System Code");
//      system.selectedIndex=0;
      system.select();
      system.focus();
      return false;
    }
  }
//
// Private Practice System
//
  if (p.HSYS3.value==0) {
    if ((system.value==" 2") ||
        (system.value=="96")) {
      alert("Private Practice is not Available. " +
            "Please select another System Code");
//      system.selectedIndex=0;
      system.select();
      system.focus();
      return false;
    }
  }
//
// Sundry Debtor System
//
  if (p.HSYS6.value==0) {
    if ((system.value==" 5") ||
        (system.value=="94")) {
      alert("Sundry Debtors is not Available. " +
            "Please select another System Code");
//      system.selectedIndex=0;
      system.select();
      system.focus();
      return false;
    }
  }
  return true;
}
