//jsVersion  : V11.03.00

//=============================================================================
// Program   : Comp_PR.js
//
// Written   : 05.07.2011
//
// Function  : Standard Functions Used for Private Patient details
//
// Mods      :
//        V10.02.01 16.09.2011  Sandra Barcham     248780
//                  Change Financial Election to Claim Type
//        V10.02.00 05.07.2011  Jeni Tan           239592
//                  Created js
//=============================================================================

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

