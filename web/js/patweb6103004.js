//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb6103004.js
//
// Written   : 21/09/2006
//
// Function  : Standard Functions Used in patweb6103004 templates
//
// Version   : 
//
// V9.07.00 21/09/2006  J.Tan
//          Created Include              
//========================================================================

function ProcessReport() {
 if (document.AddForm.ptsgc001.value=="All") {
    if (document.AddForm.ptsgc002.valu=="All") {
       if (document.AddForm.ptsgc003.value=="All") {
           alert("At Least of the Fields Must Not be ALL.");
           document.AddForm.cpsgc003.focus();
           return false;
      }
   }
 }

  if (validateMandatory(AddForm)) {
    if(document.AddForm.updttype.value=="F") { // Global copy
       CheckDuplication()
    }
  }
}

function CheckDuplication() {

  if ((isWhitespace(document.AddForm.ptsgc002.value)) || 
     (isWhitespace(document.AddForm.cpsgc002.value))) {
     alert("Fields for MBS Item must not be blank.")
     return;
  }
     
// Confirm Copy
  if(confirm("Are you sure you want to copy the Claim/Health Fund Details?")) {
     AddForm.submit();
  }
}

function ShowSpans(showoption) {
  if (showoption.value=="F") {
    SgcOptions.innerHTML=GlobalCopy.innerHTML;
  }
  else {
    SgcOptions.innerHTML="";
  }
}

function AllClaimFrom() {
  if (document.AddForm.ptsgc005.checked==true){
    document.AddForm.ptsgc003.value="";
    document.AddForm.ptsgc003.value="All";
// alert(document.AddForm.ptsgc003.value);

    document.AddForm.ptsgc003.disabled=true;
    document.AddForm.ptsgc003.className="readonly";

    document.AddForm.cpsgc003.value="";
    document.AddForm.cpsgc003.value="All";
    document.AddForm.cpsgc003.disabled=true;
    document.AddForm.cpsgc003.className="readonly";
    document.AddForm.toallclaim.checked=true;
    document.AddForm.toallclaim.disabled=true;
  } else {
    document.AddForm.ptsgc003.value="";
    document.AddForm.ptsgc003.disabled=false;
    document.AddForm.ptsgc003.className="";
    document.AddForm.ptsgc005.disabled=false;

    document.AddForm.cpsgc003.value="";
    document.AddForm.cpsgc003.disabled=false;
    document.AddForm.cpsgc003.className="";
    document.AddForm.toallclaim.checked=false;
    document.AddForm.toallclaim.disabled=false;
  }
}

function AllClaimTo() {
  if (document.AddForm.toallclaim.checked==true){
    document.AddForm.cpsgc003.value="";
    document.AddForm.cpsgc003.value="All";
    document.AddForm.cpsgc003.disabled=true;
    document.AddForm.cpsgc003.className="readonly";

    document.AddForm.ptsgc003.value="";
    document.AddForm.ptsgc003.value="All";
    document.AddForm.ptsgc003.disabled=true;
    document.AddForm.ptsgc003.className="readonly";
    document.AddForm.ptsgc005.checked=true;
    document.AddForm.ptsgc005.disabled=true;
  } else {
    document.AddForm.cpsgc003.value="";
    document.AddForm.cpsgc003.disabled=false;
    document.AddForm.cpsgc003.className="";
    document.AddForm.toallclaim.disabled=false;

    document.AddForm.ptsgc003.value="";
    document.AddForm.ptsgc003.disabled=false;
    document.AddForm.ptsgc003.className="";
    document.AddForm.ptsgc005.checked=false;
    document.AddForm.ptsgc005.disabled=false;
  }
}

function AllHFundFrom() {
  if (document.AddForm.ptsgc006.checked==true){
    document.AddForm.ptsgc001.value="";
    document.AddForm.ptsgc001.value="All";
    document.AddForm.ptsgc001.disabled=true;
    document.AddForm.ptsgc001.className="readonly";
    document.AddForm.fromfunddesc.value="All";
    document.AddForm.hfsearchfrom.disabled=true;
    document.AddForm.hfclearfrom.disabled=true;

    document.AddForm.cpsgc001.value="";
    document.AddForm.cpsgc001.value="All";
    document.AddForm.cpsgc001.disabled=true;
    document.AddForm.cpsgc001.className="readonly";
    document.AddForm.tofunddesc.value="All";
    document.AddForm.hfsearchto.disabled=true;
    document.AddForm.hfclearto.disabled=true;
    document.AddForm.toallhf.checked=true;
    document.AddForm.toallhf.disabled=true;
  }
  else {
    document.AddForm.ptsgc001.value="";
    document.AddForm.ptsgc001.disabled=false;
    document.AddForm.ptsgc001.className="";
    document.AddForm.fromfunddesc.value="";
    document.AddForm.hfsearchfrom.disabled=false;
    document.AddForm.hfclearfrom.disabled=false;
    document.AddForm.ptsgc006.disabled=false;

    document.AddForm.cpsgc001.value="";
    document.AddForm.cpsgc001.disabled=false;
    document.AddForm.cpsgc001.className="";
    document.AddForm.tofunddesc.value="";
    document.AddForm.hfsearchto.disabled=false;
    document.AddForm.hfclearto.disabled=false;
    document.AddForm.toallhf.checked=false;
    document.AddForm.toallhf.disabled=false;
  }
}

function AllHFundTo() {
  if (document.AddForm.toallhf.checked==true){
    document.AddForm.cpsgc001.value="";
    document.AddForm.cpsgc001.value="All";
    document.AddForm.cpsgc001.disabled=true;
    document.AddForm.cpsgc001.className="readonly";
    document.AddForm.tofunddesc.value="All";
    document.AddForm.hfsearchto.disabled=true;
    document.AddForm.hfclearto.disabled=true;

    document.AddForm.ptsgc001.value="";
    document.AddForm.ptsgc001.value="All";
    document.AddForm.ptsgc001.disabled=true;
    document.AddForm.ptsgc001.className="readonly";
    document.AddForm.fromfunddesc.value="All";
    document.AddForm.hfsearchfrom.disabled=true;
    document.AddForm.hfclearfrom.disabled=true;
    document.AddForm.ptsgc006.checked=true;
    document.AddForm.ptsgc006.disabled=true;
  }
  else {
    document.AddForm.cpsgc001.value="";
    document.AddForm.cpsgc001.disabled=false;
    document.AddForm.cpsgc001.className="";
    document.AddForm.tofunddesc.value="";
    document.AddForm.hfsearchto.disabled=false;
    document.AddForm.hfclearto.disabled=false;
    document.AddForm.toallhf.disabled=false;

    document.AddForm.ptsgc001.value="";
    document.AddForm.ptsgc001.disabled=false;
    document.AddForm.ptsgc001.className="";
    document.AddForm.fromfunddesc.value="";
    document.AddForm.hfsearchfrom.disabled=false;
    document.AddForm.hfclearfrom.disabled=false;
    document.AddForm.ptsgc006.checked=false;
    document.AddForm.ptsgc006.disabled=false;
  }
}

function AllMbsFrom() {
  if (document.AddForm.ptsgc007.checked==true){
    document.AddForm.ptsgc002.value="";
    document.AddForm.ptsgc002.value="All";
    document.AddForm.ptsgc002.disabled=true;
    document.AddForm.ptsgc002.className="readonly";
    document.AddForm.fmbsdesc.value="All";
    document.AddForm.fmbssearch.disabled=true;
    document.AddForm.fmbsclear.disabled=true;

    document.AddForm.cpsgc002.value="";
    document.AddForm.cpsgc002.value="All";
    document.AddForm.cpsgc002.disabled=true;
    document.AddForm.cpsgc002.className="readonly";
    document.AddForm.tmbsdesc.value="All";
    document.AddForm.tmbssearch.disabled=true;
    document.AddForm.tmbsclear.disabled=true;
    document.AddForm.toallmbs.checked=true;
    document.AddForm.toallmbs.disabled=true;
  }
  else {
    document.AddForm.ptsgc002.value="";
    document.AddForm.ptsgc002.disabled=false;
    document.AddForm.ptsgc002.className="";
    document.AddForm.fmbsdesc.value="";
    document.AddForm.fmbssearch.disabled=false;
    document.AddForm.fmbsclear.disabled=false;
    document.AddForm.ptsgc007.disabled=false;

    document.AddForm.cpsgc002.value="";
    document.AddForm.cpsgc002.disabled=false;
    document.AddForm.cpsgc002.className="";
    document.AddForm.tmbsdesc.value="";
    document.AddForm.tmbssearch.disabled=false;
    document.AddForm.tmbsclear.disabled=false;
    document.AddForm.toallmbs.checked=false;
    document.AddForm.toallmbs.disabled=false;
  }
}

function AllMbsTo() {
  if (document.AddForm.toallmbs.checked==true){
    document.AddForm.cpsgc002.value="";
    document.AddForm.cpsgc002.value="All";
    document.AddForm.cpsgc002.disabled=true;
    document.AddForm.cpsgc002.className="readonly";
    document.AddForm.tmbsdesc.value="All";
    document.AddForm.tmbssearch.disabled=true;
    document.AddForm.tmbsclear.disabled=true;

    document.AddForm.ptsgc002.value="";
    document.AddForm.ptsgc002.value="All";
    document.AddForm.ptsgc002.disabled=true;
    document.AddForm.ptsgc002.className="readonly";
    document.AddForm.fmbsdesc.value="All";
    document.AddForm.fmbssearch.disabled=true;
    document.AddForm.fmbsclear.disabled=true;
    document.AddForm.ptsgc007.checked=true;
    document.AddForm.ptsgc007.disabled=true;
  }
  else {
    document.AddForm.cpsgc002.value="";
    document.AddForm.cpsgc002.disabled=false;
    document.AddForm.cpsgc002.className="";
    document.AddForm.tmbsdesc.value="";
    document.AddForm.tmbssearch.disabled=false;
    document.AddForm.tmbsclear.disabled=false;
    document.AddForm.toallmbs.disabled=false;

    document.AddForm.ptsgc002.value="";
    document.AddForm.ptsgc002.disabled=false;
    document.AddForm.ptsgc002.className="";
    document.AddForm.fmbsdesc.value="";
    document.AddForm.fmbssearch.disabled=false;
    document.AddForm.fmbsclear.disabled=false;
    document.AddForm.ptsgc007.disabled=false;
    document.AddForm.ptsgc007.checked=false;
  }
}
