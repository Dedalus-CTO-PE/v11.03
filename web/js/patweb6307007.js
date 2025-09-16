//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb6307007.js
//
// Written   : 05/09/2007
//
// Function  : Standard Functions Used in patweb6307007 
//
// Version   : 
//
// V9.08.00  05/09/2007 J.Tan     CAR 146067
//           Created Include
//========================================================================
// REPORT 7 - Multiple procedures
//========================================================================
function ShowSpans(showoption) {
  if (showoption.value=="E") {
     ProcedureOptions.innerHTML=GlobalDelete.innerHTML;
  } else if (showoption.value=="H") {
     ProcedureOptions.innerHTML=HfDuplication.innerHTML;
  } else {
     ProcedureOptions.innerHTML="" }
}
function ProcessReport() {
  if (validateMandatory(AddForm)) {
    if(document.AddForm.updttype.value=="C") { // Create the new file
      Create();
    } 
    if(document.AddForm.updttype.value=="H") { // Health fund duplication
      CheckDuplication();
    } 
    if(document.AddForm.updttype.value=="E") { // Global delete new file
      if (validateMandatory(AddForm)) {
        if(confirm("Perform deletion of new file records")) {
          DeleteRecords()
        }
      }
    } 
   if(document.AddForm.updttype.value=="G") { // Update Multi.Proc.file with new
     if(confirm("Confirm copy of new data to the existing Multiple Procedures" +
                 " file")) {
          AddForm.submit();
      }
    } 
  }
}
//
function Create() {
  if(confirm("Are You Sure You Want to Overwrite the New File")) {
      AddForm.submit();
  }
}
function SetTable() {
  if(!isWhitespace(document.AddForm.pmmpr002.value)) {
    document.AddForm.pmmpr003.disabled=false;
  } else {
    document.AddForm.pmmpr003.disabled=true;
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
  } else {
     AddForm.pmmpr003.className="Mandatory";
     AddForm.pmmpr003.disabled=false; 
  }
}
function SetTable1() {
  if(!isWhitespace(document.AddForm.cpmpr002.value)) {
    document.AddForm.cpmpr003.disabled=false;
  } else {
    document.AddForm.cpmpr003.disabled=true;
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
  } else {
     AddForm.cpmpr003.className="Mandatory";
     AddForm.cpmpr003.disabled=false; 
  }
}   
function DeleteRecords() {
  if(document.AddForm.pmmpr001.value=="All") {
    i=document.AddForm.pmmpr001.selectedIndex
    document.AddForm.pmmpr001.options[i].value="     ";
  }
  if(document.AddForm.pmmpr003.value=="All") {
    i=document.AddForm.pmmpr003.selectedIndex
    document.AddForm.pmmpr003.options[i].value="     ";
  }
  if(document.AddForm.pmmpr004.value=="All") {
     document.AddForm.pmmpr004.value="          ";
  }
    AddForm.submit();
}
function HealthAllDel() {
  if(AddForm.checkdup.checked==true) {
     AddForm.pmmpr002.value="All"
     AddForm.funddesc.value="All"
     AddForm.pmmpr003.disabled=true;
     AddForm.pmmpr003.selectedIndex=0;
     AddForm.pmmpr003.className="";
   } else {
     AddForm.pmmpr002.value=""
     AddForm.funddesc.value=""
     AddForm.pmmpr003.disabled=false;
     AddForm.pmmpr003.className="";
   }
}
function CaseAllDel() {
  if(AddForm.casechk1.checked==true) {
     AddForm.pmmpr004.value="All";
   } else {
     AddForm.pmmpr004.value=""
   }
}
function SetAllCas(set) {
  p=document.AddForm;
  if (set.selectedIndex==1) {
    p.cpmpr001.selectedIndex=1;
    p.cpmpr001.disabled=true;
  } else {
    p.cpmpr001.selectedIndex=0;
    p.cpmpr001.disabled=false;
  }
}
function Uncheck(CheckBox) {
  CheckBox.checked=false;
}
function HealthAllDup() {
  if(AddForm.checkdup.checked==true) {
     AddForm.pmmpr002.value="All"
     AddForm.funddesc.value="All"
     AddForm.cpmpr002.value="All"
     AddForm.cp_funddesc.value="All"
     AddForm.cp_funddesc.disabled=true;
     AddForm.cpmpr002.disabled=true;
     AddForm.imageset.disabled=true;    // Search Icon
     AddForm.eraser.disabled=true;      // Eraser Icon
     AddForm.pmmpr003.disabled=true;
     AddForm.pmmpr003.selectedIndex=1;
     AddForm.cpmpr003.disabled=true;
     AddForm.cpmpr003.selectedIndex=1;
     AddForm.pmmpr003.className="";
   } else {
     AddForm.pmmpr002.value=""
     AddForm.funddesc.value=""
     AddForm.cpmpr002.value=""
     AddForm.cp_funddesc.value=""
     AddForm.cpmpr002.disabled=false;
     AddForm.cp_funddesc.disabled=false;
     AddForm.imageset.disabled=false;   // Search Icon
     AddForm.eraser.disabled=false;     // Eraser Icon
     AddForm.pmmpr003.disabled=false;
     AddForm.pmmpr003.selectedIndex=0;
     AddForm.cpmpr003.disabled=false;
     AddForm.cpmpr003.selectedIndex=0;
     AddForm.pmmpr003.className="";
   }
}
function SetAllType(set) {
  p=document.AddForm;
  if (set.selectedIndex==1) {
    p.cpmpr003.selectedIndex=1;
    p.cpmpr003.disabled=true;
  } else {
    p.cpmpr003.selectedIndex=0;
    p.cpmpr003.disabled=false;
  }
}
function CaseAllDup() {
  if(AddForm.casechk1.checked==true) {
     AddForm.pmmpr004.value="All";
     AddForm.cpmpr004.value="All";
     AddForm.cpmpr004.disabled=true;
   } else {
     AddForm.pmmpr004.value=""
     AddForm.cpmpr004.value="";
     AddForm.cpmpr004.disabled=false;
   }
}
function CheckDuplication() {
  p=document.AddForm;
  a=p.pmmpr001.selectedIndex;
  b=p.cpmpr001.selectedIndex;
  c=p.pmmpr003.selectedIndex;
  d=p.cpmpr003.selectedIndex;
  // Check copy from and copy to selections are not identical
  if(p.pmmpr001.options[a].value==p.cpmpr001.options[b].value &&
     p.pmmpr002.value==p.cpmpr002.value && p.pmmpr003.value==p.cpmpr003.value &&
     p.pmmpr003.options[c].value==p.cpmpr003.options[d].value ) {
          alert("The From and To sections can not be identical!");
          return;
   }
   if (!checkclaim()) { return }
//
  if(document.AddForm.pmmpr001.value=="All") {
    i=document.AddForm.pmmpr001.selectedIndex
    document.AddForm.pmmpr001.options[i].value="     ";
  }
  if(document.AddForm.cpmpr001.value=="All") {
    i=document.AddForm.cpmpr001.selectedIndex
    document.AddForm.cpmpr001.options[i].value="     ";
  }
  if(document.AddForm.pmmpr003.value=="All") {
    i=document.AddForm.pmmpr003.selectedIndex
    document.AddForm.pmmpr003.options[i].value="     ";
  }
  if(document.AddForm.cpmpr003.value=="All") {
    i=document.AddForm.cpmpr003.selectedIndex
    document.AddForm.cpmpr003.options[i].value="     ";
  }
//  if (document.AddForm.pmmpr004.value=="All") {
//    document.AddForm.pmmpr004.value="         ";  // Set Blank C/Mix code
//  }
//    
  AddForm.cpmpr002.disabled=false;               // Enable fields so they post
  AddForm.cpmpr003.disabled=false;
  AddForm.cpmpr004.disabled=false;
//
  AddForm.submit();
}
function checkclaim() {
  p=document.AddForm;
  if (p.pmmpr001.selectedIndex!=1 && p.cpmpr001.selectedIndex==1 ) {
    alert("Copy To - Claim Type cannot be set to All, please change!");
    return false;
  }
  return true;
}
