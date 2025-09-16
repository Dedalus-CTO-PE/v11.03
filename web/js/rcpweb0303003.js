//jsVersion  : V11.03.00
//========================================================================
// Program   : rcpweb0303003.js
//
// Written   : 03.11.2005 Ebon Clements
//
// Function  : Standard Functions Used in rcpweb0303003 template
//
// Version   : 
//
// V9.04.00  03.11.2005  Ebon Clements   CAR 80992
//           Created include and removed js from template                 
//========================================================================
//
function init() {
  showUpdateAllocation(UpdateForm); 
  if (UpdateForm.systemcd.value==1) {         // Patient Billing
    if (document.UpdateForm.d_rcpde035.value=="1") {
       document.UpdateForm.rcpde035.checked=true;
       document.UpdateForm.rcpde036.className="Mandatory";
     for (var i=0; i<document.UpdateForm.rcpde036.length; i++) {
       if ((document.UpdateForm.rcpde036.options[i].value)==(document.UpdateForm.d_printer.value)){
           document.UpdateForm.rcpde036.selectedIndex=i; }
     }
    }

    if (parent.AddForm.printinv.value==1) {
       document.UpdateForm.rcpde035.checked=1;
       document.UpdateForm.rcpde035.value="1";
       document.UpdateForm.rcpde035.disabled=true;
       document.UpdateForm.rcpde036.value=document.UpdateForm.printcod.value;
       document.UpdateForm.rcpde036.disabled=true;
    }
  }

  InitPostCodes();
  parent.AddForm.incmpflg.value=0;
}

function PrintMandatory() {
  if(document.UpdateForm.rcpde035.checked == true) {
     document.UpdateForm.rcpde035.value="1";
     document.UpdateForm.rcpde036.className="Mandatory";
  } else {
     document.UpdateForm.rcpde035.value="0";
     document.UpdateForm.rcpde036.className="";
  }    
}      

function SetFields(){
  suburb = UpdateForm.rcpde011;
  state = UpdateForm.rcpde012;
  postcode = UpdateForm.rcpde013;
}
function ClearFields(suburb,state,postcode) {
  suburb.value="";
  state.value="";
  postcode.value="";
}
function chkARAmount() {
  UpdateForm.checkfnd.value=0;
  UpdateForm.invtotal.value=0;

  // search for invoice item payment amount
  for (var i=0; i<UpdateForm.length; i++) {
    if (UpdateForm.elements[i].name.match(/invamt/)) {
      var amtsuffx=UpdateForm.elements[i].name.substr(6,2);
      var itemamnt=parseFloat(UpdateForm.elements[i].value);

      // search for invoice item payment flag
      for (var j=i; j<UpdateForm.length; j++) {
        if (UpdateForm.elements[j].name.match(/invpay/)) {
          var paysuffx=UpdateForm.elements[j].name.substr(6,2);

          // If amount & flag pair found and payment flag check,
          // Add amount to payment total
          if ((amtsuffx==paysuffx) && (UpdateForm.elements[j].checked==true)){
            UpdateForm.invtotal.value=parseFloat(UpdateForm.invtotal.value)
                                    + itemamnt;
            UpdateForm.checkfnd.value=1;
          }
        }
      }
    }
  }
  RoundNumber(UpdateForm.invtotal,2)
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
