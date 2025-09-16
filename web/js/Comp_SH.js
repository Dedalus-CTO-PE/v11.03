//jsVersion  : V11.03.00

//=============================================================================
// Program   : Comp_SH.js
//
// Written   : 05.07.2011
//
// Function  : Standard Functions Used for Shipping details
//
// Mods      :
//        V10.03.02 26/03/2012  J.Tan          CAR 249142
//                  Mods to validate postcode only if not blank
//        V10.03.01 15/12/2011  Mike Laming    CAR 257259
//                  Add "trim" to all tests for Postcode "8888"
//        V10.02.02 27.09.2011  Peter Vela         250493
//                  Added whitespace validation for Suburb field.
//        V10.02.01 16.09.2011  Sandra Barcham     248780
//                  Change Financial Election to Claim Type
//        V10.02.00 05.07.2011  Jeni Tan           239592
//                  Created js
//=============================================================================

function valPostCode(){
  if (isWhitespace(document.UpdateForm.pmext082.value)) {
    alert("Enter a Suburb");
    return;
  }
 if (!isWhitespace(UpdateForm.pmext082.value)) {
  UpCase(UpdateForm.pmext082);
  if(trim(UpdateForm.pmext084.value)!="8888"){
    suburb   = UpdateForm.pmext082;
    state    = UpdateForm.pmext083;
    postcode = UpdateForm.pmext084;
    LookupPostCode(UpdateForm.pmext082.value);
  }
 }
}  

function SetPrinter() {
  if(document.UpdateForm.prntform.checked==true) {
    if(isWhitespace(document.UpdateForm.statndes.value)) {
     alert('Claim Type Stationery Form is NOT setup.');
     document.UpdateForm.prntform.checked=false
     return;
    }
    document.UpdateForm.d_statncod.value=document.UpdateForm.statndes.value
    document.UpdateForm.schdprnt.className="Mandatory";
    document.UpdateForm.schdprnt.disabled=false;
  } else {
    document.UpdateForm.d_statncod.value=""
    document.UpdateForm.schdprnt.className="";
    document.UpdateForm.schdprnt.disabled=true;
  }
}

function init() {
  InitPostCodes();
}

