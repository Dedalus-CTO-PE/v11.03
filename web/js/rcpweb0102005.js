//jsVersion  : V11.03.00
//========================================================================
//========================================================================
//   Report 2
//========================================================================
function SetGST() {
  p=document.AddForm;
  if (isWhitespace(p.ledgerno.value)) {
    alert("Cannot select a GST Code without an Income Account");
    p.regcp012.selectedIndex=0;
    return;
  }     
}

function ChkLedger() {
  p=document.AddForm;
  var ledg = trim(p.ledgerno.value);
  if (ledg == "") {
    alert("Default Ledger Must be entered first!");
    return;
  }
}

function ChkSundryDeb(sundry) {
  p=document.AddForm;
  if (((p.ibcnmhos.value)=="1") && (isWhitespace(p.regcp014.value))) {
    alert("Hospital ID Must be entered first!");
    p.regcp007.value="  ";
    return;
  }

  if (sundry.value!="89") {
    AddForm.regcp018.disabled=false;
  } else {
    AddForm.regcp018.value="";
    AddForm.regcp018.disabled=true;
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
  }
}

function SubmitReg() {
  p=document.AddForm;
  if (!checkSystem(p.regcp007)) {
    return;
  }
  p.regcp004.value=p.ledgerno.value + p.incomcod.value;
  p.regcp005.value=p.ledgerno.value + p.bankcode.value;
  p.regcp016.value=p.ledgerno.value + p.debtcode.value;
  p.regcp017.value=p.ledgerno.value + p.gstccode.value;
  SubmitForm()
}
function checkSystem(system) {
  p=document.AddForm;
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
      system.selectedIndex=0;
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
      system.selectedIndex=0;
      system.select();
      system.focus();
      return false;
    }
  }
  return true;
}
