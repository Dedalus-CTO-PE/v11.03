//jsVersion  : V11.03.00
//========================================================================
//========================================================================
//   Report 2
//========================================================================
        
function SetGST() {
  p=document.UpdateForm;
  if (isWhitespace(p.ledgerno.value)) {
    alert("Cannot select a GST Code without an Income Account");
    p.regcp012.selectedIndex=0;
    return;
  }
}

function ChkLedger() {
  p=document.UpdateForm;
  var ledg = trim(p.ledgerno.value);
  if (ledg == "") {
    alert("Default Ledger Must be entered first!");
    return;
  } 
} 

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
  }
}

function SetSundryDeb() {
  p=document.UpdateForm;
  if (((p.ibcnmhos.value)=="1") && (isWhitespace(p.regcp014.value))) {
    alert("Hospital ID Must be entered first!");
    p.regcp007.value="  ";
    return;
  }

  if (p.regcp007.value!="89") {
    p.regcp018.disabled=false;
  } else {
    p.regcp018.value="";
    p.regcp018.disabled=true;
  }

  if (p.regcp007.value=="92") {
    p.regcp012.className="Mandatory";
  } else {
    p.regcp012.className="";
  }
  if (p.regcp007.value==" 5") {
    document.getElementById("SundryDebtorLedger").innerHTML=
    document.getElementById("SundryDebtor").innerHTML;
  } else {
    document.getElementById("SundryDebtorLedger").innerHTML=
    document.getElementById("Blank").innerHTML;
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
  p.regcp004.value=p.ledgerno.value + p.incomcod.value;
  p.regcp005.value=p.ledgerno.value + p.bankcode.value;
  p.regcp016.value=p.ledgerno.value + p.debtcode.value;
  p.regcp017.value=p.ledgerno.value + p.gstccode.value;
  setFormactn('U');
}
function checkSystem(system) {
  p=document.UpdateForm;
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
