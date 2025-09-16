//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb6302003.js
//
// Written   : 31/03/2004
//
// Function  : Standard Functions Used in patweb6302003 
//
// Version   : 
//
// V10.00.01 24.05.2010  J.Tan         220995
//           Mods for Contract ID generation
// V9.03.00  31/03/2004 Ebon Clements  CAR 36568       
//           Created Include
//========================================================================
// REPORT 2 - Global Sameday fee file
//========================================================================
function ShowSpans(showoption) {
  if (showoption.value=="E") {
     CasemixOptions.innerHTML=GlobalDelete.innerHTML;
     p=document.AddForm
     p.samed007.options.length=0;
     p.samed007.options[p.samed007.options.length]=new Option(" "," ");
     NewContractID(p.samed007,p.d_samed007.value)
  } else if (showoption.value=="H") {
     CasemixOptions.innerHTML=HfDuplication.innerHTML;
     p=document.AddForm
     p.samed007.options.length=0;
     p.samed007.options[p.samed007.options.length]=new Option(" "," ");
     NewContractID(p.samed007,p.d_samed007.value)
  } else if (showoption.value=="R") {
     CasemixOptions.innerHTML=CopyOvernight.innerHTML;
     p=document.AddForm
     p.samed007.options.length=0;
     p.samed007.options[p.samed007.options.length]=new Option(" "," ");
     NewContractID(p.samed007,p.d_samed007.value)
  } else {
     CasemixOptions.innerHTML="" }
}
//
function SetBedType(showbed) {
  if (showbed.value!="1") {
     document.AddForm.samed006.className="Mandatory";
     document.AddForm.samed006.disabled=false;
  } else {
     document.AddForm.samed006.className="";
     document.AddForm.samed006.selectedIndex="0";
     document.AddForm.samed006.disabled=true;
  }
}
function ProcessReport() {
  if (validateMandatory(AddForm)) {
    if(document.AddForm.updttype.value=="C") { // Create the new file
      Create();
    } 
//
    if(document.AddForm.updttype.value=="G") { // Copy new file to current file
      if(confirm("Are you sure you want to copy the new sameday fees " + 
                 "to the current file")) {
        AddForm.submit();
      }
    }
//
    if(document.AddForm.updttype.value=="E") { // Global delete new file
      if(confirm("Perform deletion of new file records")) {
        DeleteRecords()
      }
    }
//
    if(document.AddForm.updttype.value=="H") { // Health fund duplication
      CheckDuplication();
    }
//
    if(document.AddForm.updttype.value=="R") { // Copy sameday to overnight
      CheckCopy();
    }
//
  }
}
//
function Create() {
  if(confirm("Are You Sure You Want to Overwrite the New File")) {
      AddForm.submit();
  }
}
//
function SetTable() {
  if(!isWhitespace(document.AddForm.samed003.value)) {
    document.AddForm.samed004.disabled=false;
  } else {
    document.AddForm.samed004.disabled=true;
  }
}
//
function valHfund(ReturnFund,FundName) {
  if(!isWhitespace(ReturnFund.value)) {
     validateCode(16,ReturnFund,FundName,SetTable)
  }
  if(isWhitespace(ReturnFund.value)) {
    ReturnFund.value="";
    FundName.value="";
  }
}
//
function SetTable1() {
  if(!isWhitespace(document.AddForm.cpsam003.value)) {
    document.AddForm.cpsam004.disabled=false;
  } else {
    document.AddForm.cpsam004.disabled=true;
  }
}
//
function valHfund1(ReturnFund,FundName) {
  if(!isWhitespace(ReturnFund.value)) {
     validateCode(16,ReturnFund,FundName,SetTable1)
  }
  if(isWhitespace(ReturnFund.value)) {
    ReturnFund.value="";
    FundName.value="";
  }
}
//
function HealthAllDel() {
  if(AddForm.checkdup.checked==true) {
     AddForm.samed003.value="All"
     AddForm.funddesc.value="All"
     AddForm.samed004.disabled=true;
     AddForm.samed004.selectedIndex=1;
     AddForm.samed004.className="";
  } else {
     AddForm.samed003.value=""
     AddForm.funddesc.value=""
     AddForm.samed004.disabled=true;
     AddForm.samed004.selectedIndex=0;
     AddForm.samed004.className="";
  }
}
//
function valCasMix() {
  validateCode(35,AddForm.samed005,AddForm.cmixdesc);
}
function valCasMix1() {
  validateCode(35,AddForm.samed005,AddForm.cp_cmixdesc);
}
//
function CaseAllDel() {
  if(AddForm.casechk1.checked==true) {
     AddForm.samed005.value="All";
     AddForm.cmixdesc.value="All";
  } else {
     AddForm.samed005.value=""
     AddForm.cmixdesc.value=""
  }
}
//
function DeleteRecords() {
  if(document.AddForm.samed002.value=="All") {          // Claim Code
    i=document.AddForm.samed002.selectedIndex
    document.AddForm.samed002.options[i].value="     ";
  }
  if (isWhitespace(document.AddForm.samed003.value)) {
    document.AddForm.samed003.value="BLANK";           // Set Blank Fund Code
  }
  if (document.AddForm.samed003.value=="All") {
    document.AddForm.samed003.value="         ";       // Set Blank Fund Code
  }
  if(document.AddForm.samed004.disabled=false){
    if(document.AddForm.samed004.value=="All") {          // Set Fund Table
      i=document.AddForm.samed004.selectedIndex
      document.AddForm.samed004.options[i].value="     ";
    }
  }
  if (document.AddForm.samed005.value=="All") {
    document.AddForm.samed005.value="         ";       // Set Blank casemix Code
  }
  if(document.AddForm.samed006.value=="All") {          // Set Bed Type
    i=document.AddForm.samed006.selectedIndex
    document.AddForm.samed006.options[i].value="     ";
  }
  AddForm.submit();
}
//
function CheckDuplication() {
  p=document.AddForm;
  a=p.samed002.selectedIndex;
  b=p.cpsam002.selectedIndex;
  c=p.samed004.selectedIndex;
  d=p.cpsam004.selectedIndex;
  e=p.samed006.selectedIndex;
  f=p.cpsam006.selectedIndex;
  // Check copy from and copy to selections are not identical
  if(p.samed002.options[a].value==p.cpsam002.options[b].value &&
     p.samed003.value==p.cpsam003.value && p.samed005.value==p.cpsam005.value &&
     p.samed004.options[c].value==p.cpsam004.options[d].value  &&
     p.samed006.options[e].value==p.cpsam006.options[f].value) {
          alert("The From and To sections can not be identical!");
          return;
   }
//
  if(document.AddForm.samed002.value=="All") {         // Claim Code
    i=document.AddForm.samed002.selectedIndex
    document.AddForm.samed002.options[i].value="     ";
  }
  if (isWhitespace(document.AddForm.samed003.value)) {
    document.AddForm.samed003.value="BLANK";           // Set Blank Fund Code
  }
  if (document.AddForm.samed003.value=="All") {
    document.AddForm.samed003.value="         ";       // Set Blank Fund Code
  }
  if(document.AddForm.samed004.disabled=false){
    if(document.AddForm.samed004.value=="All") {       // Set Fund Table
      i=document.AddForm.samed004.selectedIndex
      document.AddForm.samed004.options[i].value="     ";
    }
  }
  if (document.AddForm.samed005.value=="All") {
    document.AddForm.samed005.value="         ";       // Set Blank casemix Code
  }
  if(document.AddForm.samed006.value=="All") {         // Set Bed Type
    i=document.AddForm.samed006.selectedIndex
    document.AddForm.samed006.options[i].value="     ";
  }
//
  if(document.AddForm.cpsam002.value=="All") {         // Copy Claim Code
    i=document.AddForm.cpsam002.selectedIndex
    document.AddForm.cpsam002.options[i].value="     ";
  }
  if (isWhitespace(document.AddForm.cpsam003.value)) {
    document.AddForm.cpsam003.value="BLANK";           // Copy Fund Code
  }
  if (document.AddForm.cpsam003.value=="All") {
    document.AddForm.cpsam003.value="         ";       // Copy Fund Code
  }
  if(document.AddForm.cpsam004.disabled=false){
    if(document.AddForm.cpsam004.value=="All") {       // Copy Fund Table
      i=document.AddForm.cpsam004.selectedIndex
      document.AddForm.cpsam004.options[i].value="     ";
    }
  }
  if (document.AddForm.cpsam005.value=="All") {
    document.AddForm.cpsam005.value="         ";       // Copy casemix Code
  }
  if(document.AddForm.cpsam006.value=="All") {         // Copy Bed Type
    i=document.AddForm.cpsam006.selectedIndex
    document.AddForm.cpsam006.options[i].value="     ";
  }
//
  document.AddForm.samed004.disabled=false;
  document.AddForm.cpsam004.disabled=false;
  AddForm.submit();
}
//
function SetBedTypeDup(showbed) {
  if (showbed.value!="1") {
     document.AddForm.samed006.className="Mandatory";
     document.AddForm.samed006.disabled=false;
     document.AddForm.cpsam006.className="Mandatory";
     document.AddForm.cpsam006.disabled=false;
  } else {
     document.AddForm.samed006.className="";
     document.AddForm.samed006.selectedIndex="0";
     document.AddForm.samed006.disabled=true;
     document.AddForm.cpsam006.disabled=true;
     document.AddForm.cpsam006.className="";
     document.AddForm.cpsam006.selectedIndex="0";
  }
}
//
function SetAllClaim(set) {
  p=document.AddForm;
  if (set.selectedIndex==1) {
    p.cpsam002.selectedIndex=1;
    p.cpsam002.disabled=true;
  } else {
    p.cpsam002.selectedIndex=0;
    p.cpsam002.disabled=false;
  }
}
//
function HealthAllDup() {
  if(AddForm.checkdup.checked==true) {
     AddForm.samed003.value="All"
     AddForm.funddesc.value="All"
     AddForm.cpsam003.value="All"
     AddForm.cp_funddesc.value="All"
     AddForm.cp_funddesc.disabled=true;
     AddForm.cpsam003.disabled=true;
     AddForm.imageset.disabled=true;    // Search Icon
     AddForm.eraser.disabled=true;      // Eraser Icon
     AddForm.samed004.disabled=true;
     AddForm.samed004.selectedIndex=1;
     AddForm.cpsam004.disabled=true;
     AddForm.cpsam004.selectedIndex=1;
   } else {
     AddForm.samed003.value=""
     AddForm.funddesc.value=""
     AddForm.cpsam003.value=""
     AddForm.cp_funddesc.value=""
     AddForm.cpsam003.disabled=false;
     AddForm.cp_funddesc.disabled=false;
     AddForm.imageset.disabled=false;   // Search Icon
     AddForm.eraser.disabled=false;     // Eraser Icon
     AddForm.samed004.disabled=false;
     AddForm.samed004.selectedIndex=0;
     AddForm.cpsam004.disabled=false;
     AddForm.cpsam004.selectedIndex=0;
   }
}
function CaseAllDup() {
  if(AddForm.casechk1.checked==true) {
     AddForm.samed005.value="All";
     AddForm.cmixdesc.value="All";
     AddForm.cpsam005.value="All";
     AddForm.cp_cmixdesc.value="All";
     AddForm.cpsam005.disabled=true;
     AddForm.cp_cmixdesc.disabled=true;
     AddForm.imageset1.disabled=true;   // Search Icon
     AddForm.eraser1.disabled=true;     // Eraser Icon
   } else {
     AddForm.samed005.value=""
     AddForm.cmixdesc.value=""
     AddForm.cpsam005.value="";
     AddForm.cp_cmixdesc.value="";
     AddForm.cpsam005.disabled=false;
     AddForm.cp_cmixdesc.disabled=false;
     AddForm.imageset1.disabled=false;  // Search Icon 
     AddForm.eraser1.disabled=false;    // Eraser Icon
   }
}
//
function SetAllBed(set) {
  p=document.AddForm;
  if (set.selectedIndex==1) {
    p.cpsam006.selectedIndex=1;
    p.cpsam006.disabled=true;
  } else {
    p.cpsam006.selectedIndex=0;
    p.cpsam006.disabled=false;
  }
}
//
function CheckCopy() {
  if(confirm("Are You Sure You Want to Copy Sameday Rates " +
             "to Overnight Rates")) {
      AddForm.submit();
  }
}
//
