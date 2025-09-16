//jsVersion  : V11.03.03
//========================================================================
// Program   : rcpweb0303002.js
//
// Written   : 03.11.2005 Ebon Clements
//
// Function  : Standard Functions Used in rcpweb0303002 template
//
//========================================================================
//
function init() {
  if (parent.AddForm.systemcd.value!=0) {
    AddForm.rcpde004.value="";
    AddForm.systemcd.value=parseInt(parent.AddForm.systemcd.value,10);
  }
  else {
    AddForm.rcpde004.value=parent.AddForm.rcpde004.value;
    AddForm.systemcd.value=parseInt(AddForm.rcpde004.value.substr(3,2),10);
  }

  if ((AddForm.systemcd.value==1) ||     // Patient Billing
      (AddForm.systemcd.value==2)) {     // Private Practice
    AddForm.nomonies.disabled=false;
    AddForm.nomonies.value=0;
  } else {
    AddForm.nomonies.disabled=true;
    AddForm.nomonies.checked=false;
  }

  showAllocation(AddForm); 
  InitPostCodes();
//
// set up values for Search of Payment with No Register
//
  if (isWhitespace(AddForm.rcpde004.value)) {
    if  (!isWhitespace(parent.AddForm.rcpde007.value)) {
      if ((AddForm.systemcd.value==1) ||   // Patient Billing
          (AddForm.systemcd.value==2) ||   // Private Practice
          (AddForm.systemcd.value==5)) {   // Sundry Debtor
        AddForm.rcpde005.value=parent.AddForm.visitinv.value;
        AddForm.rcpde007.value=parent.AddForm.rcpde007.value;
        AddForm.patientn.value=parent.AddForm.patientn.value;
        SetRefA();
        parent.AddForm.visitinv.value="";
        parent.AddForm.rcpde007.value="";
        parent.AddForm.patientn.value="";
      }
      else if ((AddForm.systemcd.value==90) ||   // Emergency Deposits
               (AddForm.systemcd.value==91) ||   // Outpatient Deposits
               (AddForm.systemcd.value==97)) {   // Inpatient Deposits
        AddForm.rcpde006.value=parent.AddForm.visitinv.value;
        AddForm.rcpde007.value=parent.AddForm.rcpde007.value;
        AddForm.patientn.value=parent.AddForm.patientn.value;
        SetRefA();
        parent.AddForm.visitinv.value="";
        parent.AddForm.rcpde007.value="";
        parent.AddForm.patientn.value="";
      }
      else if (AddForm.systemcd.value==96) {     // Private Practice Deposits
        AddForm.rcpde007.value=parent.AddForm.rcpde007.value;
        AddForm.patientn.value=parent.AddForm.patientn.value;
        SetRefA();
        parent.AddForm.visitinv.value="";
        parent.AddForm.rcpde007.value="";
        parent.AddForm.patientn.value="";
      }
    }
    if (AddForm.systemcd.value==1) {        // Patient Billing
      RegisterOption.innerHTML=ShowRegister1.innerHTML;
      if (AddForm.register.length==2) {
        AddForm.register.selectedIndex=1;
        AddForm.rcpde004.value=AddForm.register.value;
      }
      AddForm.register.focus();
    }
    else if (AddForm.systemcd.value==2) {   // Private Practice
     if (!isWhitespace(AddForm.mpregist.value)) {
      RegisterOption.innerHTML=ShowRegister2a.innerHTML;
      AddForm.register.value=AddForm.mpregist.value;
     } else {
      RegisterOption.innerHTML=ShowRegister2.innerHTML;
      if (AddForm.register.length==2) {
        AddForm.register.selectedIndex=1;
      }
      AddForm.register.focus();
     }
    }
    else if (AddForm.systemcd.value==5) {   // Sundry Debtors
      RegisterOption.innerHTML=ShowRegister5.innerHTML;
      if (AddForm.register.length==2) {
        AddForm.register.selectedIndex=1;
      }
      AddForm.register.focus();
    }
    else if (AddForm.systemcd.value==90) {   // Emergency Deposits
      RegisterOption.innerHTML=ShowRegister90.innerHTML;
      if (AddForm.register.length==2) {
        AddForm.register.selectedIndex=1;
        AddForm.rcpde004.value=AddForm.register.value;
      }
      AddForm.register.focus();
    }
    else if (AddForm.systemcd.value==91) {   // Outpatient Deposits
      RegisterOption.innerHTML=ShowRegister91.innerHTML;
      if (AddForm.register.length==2) {
        AddForm.register.selectedIndex=1;
        AddForm.rcpde004.value=AddForm.register.value;
      }
      AddForm.register.focus();
    }
    else if (AddForm.systemcd.value==96) {   // Private Practice Deposits
      RegisterOption.innerHTML=ShowRegister96.innerHTML;
      if (AddForm.register.length==2) {
        AddForm.register.selectedIndex=1;
      }
      AddForm.register.focus();
    }
    else if (AddForm.systemcd.value==97) {   // Inpatient Deposits
      RegisterOption.innerHTML=ShowRegister97.innerHTML;
      if (AddForm.register.length==2) {
        AddForm.register.selectedIndex=1;
        AddForm.rcpde004.value=AddForm.register.value;
      }
      AddForm.register.focus();
    }
    else {
      RegisterOption.innerHTML="";
    }
  }
  else {
    RegisterOption.innerHTML="";
  }
  if (parent.AddForm.reportno.value==3) {  // Input Receipt
      ButtonsOption.innerHTML=ButtonOption1.innerHTML;
  }
  else {                                   // Suspense Allocation
      ButtonsOption.innerHTML=ButtonOption2.innerHTML;
  }

  if (AddForm.systemcd.value==1) {        // Patient Billing
    PrintOption.innerHTML=ButtonPrint.innerHTML;
  }
  else {
    PrintOption.innerHTML="";
  }
    
  if ((AddForm.systemcd.value==1) && (AddForm.ptcnplan.value==1)) {
      ActPlanOption.innerHTML=ActionPlanSpan.innerHTML;
  } else {
      ActPlanOption.innerHTML="";
  }

  if (AddForm.systemcd.value==1) {        // Patient Billing
    if (parent.AddForm.printinv.value==1) {
         document.AddForm.rcpde035.checked=1;
         document.AddForm.rcpde035.value="1";
         document.AddForm.rcpde035.disabled=true;
         document.AddForm.rcpde036.value=document.AddForm.printcod.value;
         document.AddForm.rcpde036.disabled=true;
    }
  }
}

function NoCash() {
  if(document.AddForm.nomonies.checked == true) {
     document.AddForm.nomonies.value="1";
     document.AddForm.rcpde018.value="0";
     document.AddForm.rcpde018.disabled=true;
     document.AddForm.rcpde018.className="Readonly";
     document.AddForm.rcpde019.disabled=true;
     document.AddForm.rcpde019.className="Readonly";
     document.AddForm.rcpde015.disabled=true;
     document.AddForm.rcpde015.className="Readonly";
  } else {
     document.AddForm.nomonies.value="0";
     document.AddForm.rcpde018.value="0";
     document.AddForm.rcpde018.disabled=false;
     document.AddForm.rcpde018.className="Mandatory";
     document.AddForm.rcpde019.disabled=false;
     document.AddForm.rcpde019.className="Readonly";
     document.AddForm.rcpde015.disabled=false;
     document.AddForm.rcpde015.className="Readonly";
  }
}

function PrintMandatory() {
  if(document.AddForm.rcpde035.checked == true) {
     document.AddForm.rcpde035.value="1";
     document.AddForm.rcpde036.className="Mandatory";
  } else {
     document.AddForm.rcpde035.value="0";
     document.AddForm.rcpde036.className="";
  }
}

function SetFields(){
  suburb = AddForm.rcpde011;
  state = AddForm.rcpde012;
  postcode = AddForm.rcpde013;
}
function ClearFields(suburb,state,postcode) {
  suburb.value="";
  state.value="";
  postcode.value="";
}
function chkARAmount() {
  AddForm.checkfnd.value=0;
  AddForm.invtotal.value=0;

  // search for invoice item payment amount
  for (var i=0; i<AddForm.length; i++) {
    if (AddForm.elements[i].name.match(/invamt/)) {
      var amtsuffx=AddForm.elements[i].name.substr(6,2);
      var itemamnt=parseFloat(AddForm.elements[i].value);

      // search for invoice item payment flag
      for (var j=i; j<AddForm.length; j++) {
        if (AddForm.elements[j].name.match(/invpay/)) {
          var paysuffx=AddForm.elements[j].name.substr(6,2);

          // If amount & flag pair found and payment flag check,
          // Add amount to payment total
          if ((amtsuffx==paysuffx) && (AddForm.elements[j].checked==true)){
            AddForm.invtotal.value=parseFloat(AddForm.invtotal.value)
                                    + itemamnt;
            AddForm.checkfnd.value=1;
          }
        }
      }
    }
  }
  RoundNumber(AddForm.invtotal,2)
}
function checkPayFlg(invflag,invamt) {
  if (invflag.checked==true) {
    invamt.className="";
    invamt.readOnly=false;
  }
  else {
    invamt.className="readonly";
    invamt.readOnly=true;
  }
  chkARAmount();
}

function setCheckedValue() {
  if(AddForm.d_actionplan.checked == true) {

    if(isWhitespace(AddForm.rcpde005.value)) {
      alert("Invoice Number must be entered first."); 
      AddForm.d_actionplan.checked = false;
      return;}

    document.AddForm.actnplan.value="1";
    document.AddForm.actncode.className="Mandatory";
    document.AddForm.initdate.className="Mandatory";
    document.AddForm.actncode.disabled=false;
    document.AddForm.initdate.disabled=false;

  selectPlan(AddForm.rcpde005,AddForm.actncode);
  AddForm.actncode.selectedIndex=1

  }
  else {
    document.AddForm.actnplan.value="0";
    document.AddForm.actncode.className="";
    document.AddForm.initdate.className="";
    document.AddForm.actncode.disabled=true;
    document.AddForm.initdate.disabled=true;
  }
}

function selectPlan(ReturnCode,ReturnSelect) {
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/comweb80.pbl?reportno=35" +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnSelect.options.length=0
    ReturnSelect.options[ReturnSelect.options.length]=new Option("","");
    ReturnValue=returnValue.return_value.split("|");
    for (var j=0; j < ReturnValue.length; j++) {
       if (!isWhitespace(ReturnValue[j])) {
         SelectValue=ReturnValue[j].split(",");
         ReturnSelect.options[ReturnSelect.options.length]=
          new Option(SelectValue[1],SelectValue[0]); } } }
  else {
    ReturnCode.select();  }
}

function CheckActPlan() {

    // Check if Option to Activate Action plan is available

    justifyRight(AddForm.rcpde005);
    if (!AvailActPlan(AddForm.rcpde005)) {
      ActPlanOption.innerHTML="";
      return;
    }

  if ((AddForm.systemcd.value==1) && (AddForm.ptcnplan.value==1) &&
      (AddForm.balancea.value>0.00) &&
      (AddForm.nomonies.value!="1")) {
      ActPlanOption.innerHTML=ActionPlanSpan.innerHTML;
      document.AddForm.actnplan.value="0";
      document.AddForm.actncode.className="";
      document.AddForm.initdate.className="";
      document.AddForm.actncode.disabled=true;
      document.AddForm.initdate.disabled=true;
  } else {
      ActPlanOption.innerHTML="";
  }
}

function NoActPlan() {
  if((document.AddForm.nomonies.checked != true) && 
     (AddForm.systemcd.value==1) && (AddForm.ptcnplan.value==1) &&
      (AddForm.balancea.value>0.00)) {
      ActPlanOption.innerHTML=ActionPlanSpan.innerHTML;
      document.AddForm.actnplan.value="0";
      document.AddForm.actncode.className="";
      document.AddForm.initdate.className="";
      document.AddForm.actncode.disabled=true;
      document.AddForm.initdate.disabled=true;
      return; 
  }
  ActPlanOption.innerHTML="";
}

//------------------------------------------------------------
function AvailActPlan(invoicen) {
 var Url = "../cgi-bin/rcpweb02.pbl?reportno=5" +
           "&invoicen=" + invoicen.value.replace(/ /g,"+");
 var returnValue = RSExecute(Url);    //Remote Script To check avail.Act.Plan
 if (returnValue.status==0) {
   ReturnValue=returnValue.return_value.split("|");
   if (ReturnValue[0]==0) {
     return true; }
 }
 return false;
}

//------------------------------------------------------------
// Get Select List Options for all Medical Practice
//------------------------------------------------------------

function MedPracSel(ReturnSelect) {
  var serverURL   = "../cgi-bin/rcpweb03.pbl?reportno=9"

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnSelect.options.length=0
    ReturnSelect.options[ReturnSelect.options.length]=new Option("","");
    ReturnValue=returnValue.return_value.split("|");
    for (var j=0; j < ReturnValue.length; j++) {
       if (!isWhitespace(ReturnValue[j])) {
         SelectValue=ReturnValue[j].split(",");
         ReturnSelect.options[ReturnSelect.options.length]=
          new Option(SelectValue[1],SelectValue[0]); } }
  }
}

