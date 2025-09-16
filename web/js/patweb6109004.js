//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb6109004.js
//
// Written   : 18/03/2009
//
// Function  : Standard Functions Used in patweb6103004 templates
//
// Version   : 
//
// V9.11.00 18/03/2009  J.Tan   CAR 188110 196042
//          Created Include              
//========================================================================

function ProcessReport() {
 if (document.AddForm.pmsgc002.value=="All") {
    if (document.AddForm.pmsgc004.valu=="All") {
       if (document.AddForm.pmsgc001.value=="All") {
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

  if (isWhitespace(document.AddForm.pmsgc001.value)) {
    if (!isWhitespace(document.AddForm.cpsgc003.value)) {
      alert("Copy To Claim Type must be All.");
      document.AddForm.cpsgc003.focus();
      return false;
    }
  }
     
  if ((isWhitespace(document.AddForm.pmsgc004.value)) || 
     (isWhitespace(document.AddForm.cpsgc002.value))) {
     alert("Fields for ICD10 Code must not be blank.")
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
  if (document.AddForm.pmsgc007.checked==true){
    document.AddForm.pmsgc001.value="";
    document.AddForm.pmsgc001.value="All";
// alert(document.AddForm.pmsgc001.value);

    document.AddForm.pmsgc001.disabled=true;
    document.AddForm.pmsgc001.className="readonly";

    document.AddForm.cpsgc003.value="";
    document.AddForm.cpsgc003.value="All";
    document.AddForm.cpsgc003.disabled=true;
    document.AddForm.cpsgc003.className="readonly";
    document.AddForm.toallclaim.checked=true;
    document.AddForm.toallclaim.disabled=true;
  } else {
    document.AddForm.pmsgc001.value="";
    document.AddForm.pmsgc001.disabled=false;
    document.AddForm.pmsgc001.className="";
    document.AddForm.pmsgc007.disabled=false;

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

    document.AddForm.pmsgc001.value="";
    document.AddForm.pmsgc001.value="All";
    document.AddForm.pmsgc001.disabled=true;
    document.AddForm.pmsgc001.className="readonly";
    document.AddForm.pmsgc007.checked=true;
    document.AddForm.pmsgc007.disabled=true;
  } else {
    document.AddForm.cpsgc003.value="";
    document.AddForm.cpsgc003.disabled=false;
    document.AddForm.cpsgc003.className="";
    document.AddForm.toallclaim.disabled=false;

    document.AddForm.pmsgc001.value="";
    document.AddForm.pmsgc001.disabled=false;
    document.AddForm.pmsgc001.className="";
    document.AddForm.pmsgc007.checked=false;
    document.AddForm.pmsgc007.disabled=false;
  }
}

function AllHFundFrom() {
  if (document.AddForm.pmsgc008.checked==true){
    document.AddForm.pmsgc002.value="";
    document.AddForm.pmsgc002.value="All";
    document.AddForm.pmsgc002.disabled=true;
    document.AddForm.pmsgc002.className="readonly";
    document.AddForm.fromfunddesc.value="All";
    document.AddForm.hfsearchfrom.disabled=true;
    document.AddForm.hfclearfrom.disabled=true;
    document.AddForm.pmsgc003.value="";
    document.AddForm.pmsgc003.disabled=true;
    document.AddForm.pmsgc003.className="readonly";

    document.AddForm.cpsgc001.value="";
    document.AddForm.cpsgc001.value="All";
    document.AddForm.cpsgc001.disabled=true;
    document.AddForm.cpsgc001.className="readonly";
    document.AddForm.tofunddesc.value="All";
    document.AddForm.hfsearchto.disabled=true;
    document.AddForm.hfclearto.disabled=true;
    document.AddForm.toallhf.checked=true;
    document.AddForm.toallhf.disabled=true;
    document.AddForm.cpsgc004.value="";
    document.AddForm.cpsgc004.disabled=true;
    document.AddForm.cpsgc004.className="readonly";
  }
  else {
    document.AddForm.pmsgc002.value="";
    document.AddForm.pmsgc002.disabled=false;
    document.AddForm.pmsgc002.className="";
    document.AddForm.fromfunddesc.value="";
    document.AddForm.hfsearchfrom.disabled=false;
    document.AddForm.hfclearfrom.disabled=false;
    document.AddForm.pmsgc008.disabled=false;
    document.AddForm.pmsgc003.value="";
    document.AddForm.pmsgc003.disabled=false;
    document.AddForm.pmsgc003.className="";
    document.AddForm.totabdesc.value="";

    document.AddForm.cpsgc001.value="";
    document.AddForm.cpsgc001.disabled=false;
    document.AddForm.cpsgc001.className="";
    document.AddForm.tofunddesc.value="";
    document.AddForm.hfsearchto.disabled=false;
    document.AddForm.hfclearto.disabled=false;
    document.AddForm.toallhf.checked=false;
    document.AddForm.toallhf.disabled=false;
    document.AddForm.cpsgc004.value="";
    document.AddForm.cpsgc004.disabled=false;
    document.AddForm.cpsgc004.className="";
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

    document.AddForm.cpsgc004.value="";
    document.AddForm.cpsgc004.disabled=true;
    document.AddForm.cpsgc004.className="readonly";
    document.AddForm.totabdesc.value="";

    document.AddForm.pmsgc002.value="";
    document.AddForm.pmsgc002.value="All";
    document.AddForm.pmsgc002.disabled=true;
    document.AddForm.pmsgc002.className="readonly";
    document.AddForm.fromfunddesc.value="All";
    document.AddForm.hfsearchfrom.disabled=true;
    document.AddForm.hfclearfrom.disabled=true;
    document.AddForm.pmsgc008.checked=true;
    document.AddForm.pmsgc008.disabled=true;

    document.AddForm.pmsgc003.value="";
    document.AddForm.pmsgc003.disabled=true;
    document.AddForm.pmsgc003.className="readonly";
    document.AddForm.fromtabdesc.value="";
  }
  else {
    document.AddForm.cpsgc001.value="";
    document.AddForm.cpsgc001.disabled=false;
    document.AddForm.cpsgc001.className="";
    document.AddForm.tofunddesc.value="";
    document.AddForm.hfsearchto.disabled=false;
    document.AddForm.hfclearto.disabled=false;
    document.AddForm.toallhf.disabled=false;
    document.AddForm.totabdesc.value="";

    document.AddForm.cpsgc004.value="";
    document.AddForm.cpsgc004.className="";

    document.AddForm.pmsgc002.value="";
    document.AddForm.pmsgc002.disabled=false;
    document.AddForm.pmsgc002.className="";
    document.AddForm.fromfunddesc.value="";
    document.AddForm.hfsearchfrom.disabled=false;
    document.AddForm.hfclearfrom.disabled=false;
    document.AddForm.pmsgc008.checked=false;
    document.AddForm.pmsgc008.disabled=false;
    document.AddForm.pmsgc003.value="";
    document.AddForm.pmsgc003.className="";
  }
}

function AllICDFrom() {
  if (document.AddForm.pmsgc009.checked==true){
    document.AddForm.pmsgc004.value="";
    document.AddForm.pmsgc004.value="All";
    document.AddForm.pmsgc004.disabled=true;
    document.AddForm.pmsgc004.className="readonly";
    document.AddForm.ficddesc.value="All";
    document.AddForm.ficdsearch.disabled=true;
    document.AddForm.ficdclear.disabled=true;

    document.AddForm.cpsgc002.value="";
    document.AddForm.cpsgc002.value="All";
    document.AddForm.cpsgc002.disabled=true;
    document.AddForm.cpsgc002.className="readonly";
    document.AddForm.ticddesc.value="All";
    document.AddForm.ticdsearch.disabled=true;
    document.AddForm.ticdclear.disabled=true;
    document.AddForm.toallicd.checked=true;
    document.AddForm.toallicd.disabled=true;
  }
  else {
    document.AddForm.pmsgc004.value="";
    document.AddForm.pmsgc004.disabled=false;
    document.AddForm.pmsgc004.className="";
    document.AddForm.ficddesc.value="";
    document.AddForm.ficdsearch.disabled=false;
    document.AddForm.ficdclear.disabled=false;
    document.AddForm.pmsgc009.disabled=false;

    document.AddForm.cpsgc002.value="";
    document.AddForm.cpsgc002.disabled=false;
    document.AddForm.cpsgc002.className="";
    document.AddForm.ticddesc.value="";
    document.AddForm.ticdsearch.disabled=false;
    document.AddForm.ticdclear.disabled=false;
    document.AddForm.toallicd.checked=false;
    document.AddForm.toallicd.disabled=false;
  }
}

function AllICDTo() {
  if (document.AddForm.toallicd.checked==true){
    document.AddForm.cpsgc002.value="";
    document.AddForm.cpsgc002.value="All";
    document.AddForm.cpsgc002.disabled=true;
    document.AddForm.cpsgc002.className="readonly";
    document.AddForm.ticddesc.value="All";
    document.AddForm.ticdsearch.disabled=true;
    document.AddForm.ticdclear.disabled=true;

    document.AddForm.pmsgc004.value="";
    document.AddForm.pmsgc004.value="All";
    document.AddForm.pmsgc004.disabled=true;
    document.AddForm.pmsgc004.className="readonly";
    document.AddForm.ficddesc.value="All";
    document.AddForm.ficdsearch.disabled=true;
    document.AddForm.ficdclear.disabled=true;
    document.AddForm.pmsgc009.checked=true;
    document.AddForm.pmsgc009.disabled=true;
  }
  else {
    document.AddForm.cpsgc002.value="";
    document.AddForm.cpsgc002.disabled=false;
    document.AddForm.cpsgc002.className="";
    document.AddForm.ticddesc.value="";
    document.AddForm.ticdsearch.disabled=false;
    document.AddForm.ticdclear.disabled=false;
    document.AddForm.toallicd.disabled=false;

    document.AddForm.pmsgc004.value="";
    document.AddForm.pmsgc004.disabled=false;
    document.AddForm.pmsgc004.className="";
    document.AddForm.ficddesc.value="";
    document.AddForm.ficdsearch.disabled=false;
    document.AddForm.ficdclear.disabled=false;
    document.AddForm.pmsgc009.disabled=false;
    document.AddForm.pmsgc009.checked=false;
  }
}
