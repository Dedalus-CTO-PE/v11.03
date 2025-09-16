//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb6303015.js
//
// Written   : 14/04/2004
//
// Function  : Standard Functions Used in patweb6302003 
//
// Version   : 
//
// V10.00.01 24.05.2010  J.Tan         220995
//           Mods for Contract ID generation
// V9.03.00  31/03/2004 Ebon Clements  CAR 36569     
//           Created Include
//========================================================================
// REPORT 2 - Global Overnight fee file
//========================================================================
function ShowSpans(showoption) {
  if (showoption.value=="E") {
     CasemixOptions.innerHTML=GlobalDelete.innerHTML;
    p=document.AddForm
    p.overn007.options.length=0;
    p.overn007.options[p.overn007.options.length]=new Option(" "," ");
    NewContractID(p.overn007,p.d_overn007.value)
  } else if (showoption.value=="H") {
     CasemixOptions.innerHTML=HfDuplication.innerHTML;
     p=document.AddForm
     p.overn007.options.length=0;
     p.overn007.options[p.overn007.options.length]=new Option(" "," ");
     NewContractID(p.overn007,p.d_overn007.value)
  } else if (showoption.value=="R") {
     CasemixOptions.innerHTML=CopyOvernight.innerHTML;
     p=document.AddForm
     p.overn007.options.length=0;
     p.overn007.options[p.overn007.options.length]=new Option(" "," ");
     NewContractID(p.overn007,p.d_overn007.value)
  } else {
     CasemixOptions.innerHTML="" }
}
//
function SetBedType(showbed) {
  if (showbed.value=="4" || showbed.value=="5") {
     document.AddForm.overn006.className="Mandatory";
     document.AddForm.overn006.disabled=false;
  } else {
     document.AddForm.overn006.className="";
     document.AddForm.overn006.selectedIndex="0";
     document.AddForm.overn006.disabled=true;
  }
}
function ProcessReport() {
  if (validateMandatory(AddForm)) {
    if(document.AddForm.updttype.value=="C") { // Create the new file
      Create();
    } 
//
    if(document.AddForm.updttype.value=="G") { // Copy new file to current file
      if(confirm("Are you sure you want to copy the new overnight fees " + 
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
    if(document.AddForm.updttype.value=="R") { // Copy overnight to sameday
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
  if(!isWhitespace(document.AddForm.overn003.value)) {
    document.AddForm.overn004.disabled=false;
  } else {
    document.AddForm.overn004.disabled=true;
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
  if(!isWhitespace(document.AddForm.cpovr003.value)) {
    document.AddForm.cpovr004.disabled=false;
  } else {
    document.AddForm.cpovr004.disabled=true;
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
     AddForm.overn003.value="All"
     AddForm.funddesc.value="All"
     AddForm.overn004.disabled=true;
     AddForm.overn004.selectedIndex=1;
     AddForm.overn004.className="";
  } else {
     AddForm.overn003.value=""
     AddForm.funddesc.value=""
     AddForm.overn004.disabled=true;
     AddForm.overn004.selectedIndex=0;
     AddForm.overn004.className="";
  }
}
//
function valCasMix() {
  validateCode(35,AddForm.overn005,AddForm.cmixdesc);
}
function valCasMix1() {
  validateCode(35,AddForm.overn005,AddForm.cp_cmixdesc);
}
//
function CaseAllDel() {
  if(AddForm.casechk1.checked==true) {
     AddForm.overn005.value="All";
     AddForm.cmixdesc.value="All";
  } else {
     AddForm.overn005.value=""
     AddForm.cmixdesc.value=""
  }
}
//
function DeleteRecords() {
  if(document.AddForm.overn002.value=="All") {          // Claim Code
    i=document.AddForm.overn002.selectedIndex
    document.AddForm.overn002.options[i].value="     ";
  }
  if (isWhitespace(document.AddForm.overn003.value)) {
    document.AddForm.overn003.value="BLANK";           // Set Blank Fund Code
  }
  if (document.AddForm.overn003.value=="All") {
    document.AddForm.overn003.value="         ";       // Set Blank Fund Code
  }
  if(document.AddForm.overn004.disabled=false){
    if(document.AddForm.overn004.value=="All") {          // Set Fund Table
      i=document.AddForm.overn004.selectedIndex
      document.AddForm.overn004.options[i].value="     ";
    }
  }
  if (document.AddForm.overn005.value=="All") {
    document.AddForm.overn005.value="         ";       // Set Blank casemix Code
  }
  if(document.AddForm.overn006.value=="All") {          // Set Bed Type
    i=document.AddForm.overn006.selectedIndex
    document.AddForm.overn006.options[i].value="     ";
  }
  AddForm.submit();
}
//
function CheckDuplication() {
  p=document.AddForm;
  a=p.overn002.selectedIndex;
  b=p.cpovr002.selectedIndex;
  c=p.overn004.selectedIndex;
  d=p.cpovr004.selectedIndex;
  e=p.overn006.selectedIndex;
  f=p.cpovr006.selectedIndex;
  // Check copy from and copy to selections are not identical
  if(p.overn002.options[a].value==p.cpovr002.options[b].value &&
     p.overn003.value==p.cpovr003.value && p.overn005.value==p.cpovr005.value &&
     p.overn004.options[c].value==p.cpovr004.options[d].value  &&
     p.overn006.options[e].value==p.cpovr006.options[f].value) {
          alert("The From and To sections can not be identical!");
          return;
   }
//
  if(document.AddForm.overn002.value=="All") {         // Claim Code
    i=document.AddForm.overn002.selectedIndex
    document.AddForm.overn002.options[i].value="     ";
  }
  if (isWhitespace(document.AddForm.overn003.value)) {
    document.AddForm.overn003.value="BLANK";           // Set Blank Fund Code
  }
  if (document.AddForm.overn003.value=="All") {
    document.AddForm.overn003.value="         ";       // Set Blank Fund Code
  }
  if(document.AddForm.overn004.disabled=false){
    if(document.AddForm.overn004.value=="All") {       // Set Fund Table
      i=document.AddForm.overn004.selectedIndex
      document.AddForm.overn004.options[i].value="     ";
    }
  }
  if (document.AddForm.overn005.value=="All") {
    document.AddForm.overn005.value="         ";       // Set Blank casemix Code
  }
  if(document.AddForm.overn006.value=="All") {         // Set Bed Type
    i=document.AddForm.overn006.selectedIndex
    document.AddForm.overn006.options[i].value="     ";
  }
//
  if(document.AddForm.cpovr002.value=="All") {         // Copy Claim Code
    i=document.AddForm.cpovr002.selectedIndex
    document.AddForm.cpovr002.options[i].value="     ";
  }
  if (isWhitespace(document.AddForm.cpovr003.value)) {
    document.AddForm.cpovr003.value="BLANK";           // Copy Fund Code
  }
  if (document.AddForm.cpovr003.value=="All") {
    document.AddForm.cpovr003.value="         ";       // Copy Fund Code
  }
  if(document.AddForm.cpovr004.disabled=false){
    if(document.AddForm.cpovr004.value=="All") {       // Copy Fund Table
      i=document.AddForm.cpovr004.selectedIndex
      document.AddForm.cpovr004.options[i].value="     ";
    }
  }
  if (document.AddForm.cpovr005.value=="All") {
    document.AddForm.cpovr005.value="         ";       // Copy casemix Code
  }
  if(document.AddForm.cpovr006.value=="All") {         // Copy Bed Type
    i=document.AddForm.cpovr006.selectedIndex
    document.AddForm.cpovr006.options[i].value="     ";
  }
//
  document.AddForm.overn004.disabled=false;
  document.AddForm.cpovr004.disabled=false;
  AddForm.submit();
}
//
function SetBedTypeDup(showbed) {
  if (showbed.value=="4" || showbed.value=="5") {
     document.AddForm.overn006.className="Mandatory";
     document.AddForm.overn006.disabled=false;
     document.AddForm.cpovr006.className="Mandatory";
     document.AddForm.cpovr006.disabled=false;
  } else {
     document.AddForm.overn006.className="";
     document.AddForm.overn006.selectedIndex="0";
     document.AddForm.cpovr006.disabled=true;
     document.AddForm.cpovr006.className="";
     document.AddForm.cpovr006.selectedIndex="0";
     document.AddForm.overn006.disabled=true;
  }
}
//
function SetAllClaim(set) {
  p=document.AddForm;
  if (set.selectedIndex==1) {
    p.cpovr002.selectedIndex=1;
    p.cpovr002.disabled=true;
  } else {
    p.cpovr002.selectedIndex=0;
    p.cpovr002.disabled=false;
  }
}
//
function HealthAllDup() {
  if(AddForm.checkdup.checked==true) {
     AddForm.overn003.value="All"
     AddForm.funddesc.value="All"
     AddForm.cpovr003.value="All"
     AddForm.cp_funddesc.value="All"
     AddForm.cp_funddesc.disabled=true;
     AddForm.cpovr003.disabled=true;
     AddForm.imageset.disabled=true;    // Search Icon
     AddForm.eraser.disabled=true;      // Eraser Icon
     AddForm.overn004.disabled=true;
     AddForm.overn004.selectedIndex=1;
     AddForm.cpovr004.disabled=true;
     AddForm.cpovr004.selectedIndex=1;
   } else {
     AddForm.overn003.value=""
     AddForm.funddesc.value=""
     AddForm.cpovr003.value=""
     AddForm.cp_funddesc.value=""
     AddForm.cpovr003.disabled=false;
     AddForm.cp_funddesc.disabled=false;
     AddForm.imageset.disabled=false;   // Search Icon
     AddForm.eraser.disabled=false;     // Eraser Icon
     AddForm.overn004.disabled=false;
     AddForm.overn004.selectedIndex=0;
     AddForm.cpovr004.disabled=false;
     AddForm.cpovr004.selectedIndex=0;
   }
}
function CaseAllDup() {
  if(AddForm.casechk1.checked==true) {
     AddForm.overn005.value="All";
     AddForm.cmixdesc.value="All";
     AddForm.cpovr005.value="All";
     AddForm.cp_cmixdesc.value="All";
     AddForm.cpovr005.disabled=true;
     AddForm.cp_cmixdesc.disabled=true;
     AddForm.imageset1.disabled=true;   // Search Icon
     AddForm.eraser1.disabled=true;     // Eraser Icon
   } else {
     AddForm.overn005.value=""
     AddForm.cmixdesc.value=""
     AddForm.cpovr005.value="";
     AddForm.cp_cmixdesc.value="";
     AddForm.cpovr005.disabled=false;
     AddForm.cp_cmixdesc.disabled=false;
     AddForm.imageset1.disabled=false;  // Search Icon 
     AddForm.eraser1.disabled=false;    // Eraser Icon
   }
}
//
function SetAllBed(set) {
  p=document.AddForm;
  if (set.selectedIndex==1) {
    p.cpovr006.selectedIndex=1;
    p.cpovr006.disabled=true;
  } else {
    p.cpovr006.selectedIndex=0;
    p.cpovr006.disabled=false;
  }
}
//
function CheckCopy() {
  if(confirm("Are You Sure You Want to Copy overnight Rates " +
             "to Sameday Rates")) {
      AddForm.submit();
  }
}
//
