//jsVersion  : V11.03.00
//========================================================================
//========================================================================
//   Report 2
//========================================================================
function checkFMS(ReturnCode)  {

  p=document.AddForm;
  if (isWhitespace(p.regcp014.value)) {
    return;
  }
  var serverURL = "../cgi-bin/patweb80.pbl?reportno=69" +
        "&valdcode=" + p.regcp014.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    p.HSYS1.value=ReturnValue[1];
    DisFields();
  }
}

function DisFields() {
  if (document.AddForm.HSYS1.value=="1") {
    document.getElementById("IBAFinanceFields").innerHTML=
    document.getElementById("FinanceMan").innerHTML;
    document.getElementById("IBAFinanceDisFields").innerHTML=
    document.getElementById("FinanceManDisplay").innerHTML;
  } else {
    document.getElementById("IBAFinanceFields").innerHTML=
    document.getElementById("ChequeAccount").innerHTML;
    document.getElementById("IBAFinanceDisFields").innerHTML=
    document.getElementById("Blank").innerHTML;
  }

  if (!isWhitespace(document.AddForm.regcp007.value)) {
    if (document.AddForm.regcp007.value!="89") {
      document.AddForm.regcp018.disabled=false;
      return;
    }
  }
  document.AddForm.regcp018.disabled=true;
}
function validateAccount() {
  p=document.AddForm;
  if (isWhitespace(p.accntcod.value)) { return; }
  if (!isWhitespace(p.ledgerno.value)) {
  ValAcc(p.accntcod,p.accntnam,p.bankld01,p.bankld02,p.chqacc01,p.chqacc02,p.dbaccn01,p.dbaccn02,p.gstdum01,p.gstdum02)
  } else {
     alert("Default Ledger must be entered."); }
}
function ValAcc(ReturnCode,ReturnName,BankLed,BankLedDsc,ChqAcc,ChqAccDsc,DebAcc,DebAccDsc,Gst,GstDsc) {
  p=document.AddForm;
  a=p.ledgerno.selectedIndex;
  acctcode=p.ledgerno.options[a].value + p.accntcod.value;
  var serverURL="../cgi-bin/rcpweb01.pbl?reportno=4" +
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
    ReturnCode.select();
    ReturnCode.focus();
  }
}
function ChkLedgerCr() {
  p=document.AddForm;
  if (!isWhitespace(p.ledgerno.value)) {
  Income(p.ledgerno,p.accntcod,p.accntnam,p.bankld01,p.bankld02,p.chqacc01,p.chqacc02,p.dbaccn01,p.dbaccn02,p.gstdum01,p.gstdum02)
  } else {
     alert("Default Ledger must be entered."); }
}
function SetGST() {
  if (document.AddForm.HSYS1.value!="1") { return; }
  p=document.AddForm;
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
function SetSundryDeb(sundry) {
  p=document.AddForm;
  if (p.regcp007.value!="89") {
    p.regcp018.disabled=false;
  } else {
    p.regcp018.disabled=true;
  }
  if (!checkSystem(sundry)) {
    return;
  }
//  alert(sundry.value);
  if (sundry.value==" 5") {
    document.getElementById("SundryDebtorLedger").innerHTML=
    document.getElementById("SundryDebtor").innerHTML;
  } else {
    document.getElementById("SundryDebtorLedger").innerHTML=
    document.getElementById("Blank").innerHTML;
  }
  if (sundry.value=="92") {
    AddForm.regcp012.className="Mandatory";
  } else {
    AddForm.regcp012.className="";
  }
}
function SubmitReg() {
  p=document.AddForm;
  if (!checkSystem(p.regcp007)) {
    return;
  }
  if (document.AddForm.HSYS1.value=="1") {
    a=p.ledgerno.selectedIndex;
    p.regcp004.value=p.ledgerno.options[a].value + p.accntcod.value;
  }
  SubmitForm()
}
function setClear() {
  p=document.AddForm;
  clrFields(p.accntcod,p.accntnam,p.bankld01,p.bankld02,p.chqacc01,p.chqacc02,
            p.dbaccn01,p.dbaccn02,p.gstcon01,p.gstcon02)
}
function checkSystem(system) {
  p=document.AddForm;
//
// General Ledger System
//
  if (p.HSYS1.value==0) {
    if ((system.value=="92") ||
        (system.value=="95")) {
      alert("General Ledger is not Available. " +
            "Please select another System Code");
      system.selectedIndex=0;
      FocusDelay(system);
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
      system.selectedIndex=0;
      system.select();
      FocusDelay(system);
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
      system.selectedIndex=0;
      system.select();
      FocusDelay(system);
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
      system.selectedIndex=0;
      system.select();
      system.focus();
      return false;
    }
  }
  return true;
}
