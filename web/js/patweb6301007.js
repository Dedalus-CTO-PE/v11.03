//========================================================================
// Program   : patweb6301007.js
//
// Written   : 19/11/2003
//
// Function  : Standard Functions Used in patweb6301004 
//
// Version   : 
//
// V10.03.01 15/03/2012 J.Tan          CAR 261869
//           Added Contract id to Matrix Claim/HF duplication
// V9.10.01  29/04/2008 Ebon Clements  CAR 163698
//           Added blank health fund to DeleteRecords()
// V9.03.00  19/11/2003 Ebon Clements  CAR 36491
//           Created Include
//========================================================================
// REPORT 1 - Casmix Matrix  
//========================================================================
function ShowSpans(showoption) {
  if (showoption.value=="H") {
     CasemixOptions.innerHTML=HfDuplication.innerHTML;
  } else {
     CasemixOptions.innerHTML="" }
}
function ProcessReport() {
  if (validateMandatory(AddForm)) {
    if(document.AddForm.updttype.value=="H") { // Health fund duplication
      CheckDuplication();
    } 
  }
}
//
function valHfund(ReturnFund,FundName) {
  if(!isWhitespace(ReturnFund.value)) {
     validateCode(16,ReturnFund,FundName)
  }
  if(isWhitespace(ReturnFund.value)) {
    ReturnFund.value="";
    FundName.value="";
  }
}
function valCasMix() {
  validateCode(35,AddForm.pmcmt004,AddForm.cmixdesc);
}
function SetAllCas(set) {
  p=document.AddForm;
  if (set.selectedIndex==1) {
    p.cpcmt001.selectedIndex=1;
    p.cpcmt001.disabled=true;
  } else {
    p.cpcmt001.selectedIndex=0;
    p.cpcmt001.disabled=false;
  }
}
function Uncheck(CheckBox) {
  CheckBox.checked=false;
}
function HealthAllDup() {
  if(AddForm.checkdup.checked==true) {
     AddForm.pmcmt002.value="All"
     AddForm.funddesc.value="All"
     AddForm.cpcmt002.value="All"
     AddForm.cp_funddesc.value="All"
     AddForm.cp_funddesc.disabled=true;
     AddForm.cpcmt002.disabled=true;
     AddForm.imageset.disabled=true;    // Search Icon
     AddForm.eraser.disabled=true;      // Eraser Icon
   } else {
     AddForm.pmcmt002.value=""
     AddForm.funddesc.value=""
     AddForm.cpcmt002.value=""
     AddForm.cp_funddesc.value=""
     AddForm.cpcmt002.disabled=false;
     AddForm.cp_funddesc.disabled=false;
     AddForm.imageset.disabled=false;   // Search Icon
     AddForm.eraser.disabled=false;     // Eraser Icon
   }
}
function CaseAllDup() {
  if(AddForm.casechk1.checked==true) {
     AddForm.pmcmt004.value="All";
     AddForm.cmixdesc.value="All";
     AddForm.cpcmt004.value="All";
     AddForm.cp_cmixdesc.value="All";
     AddForm.cpcmt004.disabled=true;
     AddForm.cp_cmixdesc.disabled=true;
     AddForm.imageset1.disabled=true;   // Search Icon
     AddForm.eraser1.disabled=true;     // Eraser Icon
   } else {
     AddForm.pmcmt004.value=""
     AddForm.cmixdesc.value=""
     AddForm.cpcmt004.value="";
     AddForm.cp_cmixdesc.value="";
     AddForm.cpcmt004.disabled=false;
     AddForm.cp_cmixdesc.disabled=false;
     AddForm.imageset1.disabled=false;  // Search Icon 
     AddForm.eraser1.disabled=false;    // Eraser Icon
   }
}
function CheckDuplication() {
  p=document.AddForm;
  a=p.pmcmt001.selectedIndex;
  b=p.cpcmt001.selectedIndex;
  // Check copy from and copy to selections are not identical
  if(p.pmcmt001.options[a].value==p.cpcmt001.options[b].value &&
     p.pmcmt002.value==p.cpcmt002.value  && p.pmcmt064.value==p.cpcmt064.value)
   {
          alert("The From and To sections can not be identical!");
          return;
   }
   if (!checkclaim()) { return }
//
  if(document.AddForm.pmcmt001.value=="All") {
    i=document.AddForm.pmcmt001.selectedIndex
    document.AddForm.pmcmt001.options[i].value="     ";
  }
  if (isWhitespace(document.AddForm.pmcmt002.value)) {
    document.AddForm.pmcmt002.value="BLANK";  // Set Blank Fund Code
  }
  if (document.AddForm.pmcmt002.value=="All") {
    document.AddForm.pmcmt002.value="         ";  // Set Blank Fund Code
  }
  if(document.AddForm.cpcmt001.value=="All") {
    i=document.AddForm.cpcmt001.selectedIndex
    document.AddForm.cpcmt001.options[i].value="     ";
  }
//
  AddForm.cpcmt002.disabled=false;               // Enable fields so they post
//
  AddForm.submit();
}
function checkclaim() {
  p=document.AddForm;
  if (p.pmcmt001.selectedIndex!=1 && p.cpcmt001.selectedIndex==1 ) {
    alert("Copy To - Claim Type cannot be set to All, please change!");
    return false;
  }
  return true;
}
