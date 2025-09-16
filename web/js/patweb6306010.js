//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb6310010.js
//
// Written   : 20/11/2006
//
// Function  : Standard Functions Used in patweb6310010 
//
// Version   : 
//
// V9.08.01  23/02/2007 Davin    CAR 120000
//           Changed Create() function to ask "Do You Want to Start with a Copy
//           of the Current Data?"
// V9.08.00  20/11/2006 J.Tan    CAR 120000
//           Created Include
//========================================================================
// REPORT 11 - Contract Procedure Matrix  
//========================================================================
function ShowSpans(showoption) {
  if (showoption.value=="E") {
     ProcMatrixOptions.innerHTML=GlobalDelete.innerHTML;
  } else if (showoption.value=="H") {
     ProcMatrixOptions.innerHTML=MatrixDuplication.innerHTML;
  } else {
     ProcMatrixOptions.innerHTML="" }
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
    if(document.AddForm.updttype.value=="G") { // Update Matrix file with new
      if(confirm("Confirm copy of new data to the existing Contract" +
                 " Procedure Matrix file")) {
          AddForm.submit();
      }
    } 
  }
}
//
function Create() {
  if(confirm("Are You Sure You Want to Overwrite the New File?")) {
    if(confirm("Do You Want to Start with a Copy of the Current Data?")) {
      AddForm.copyflag.value="Y";
      AddForm.submit();
    } else {
      if(confirm("You will lose All Current NZ Private Procedure Matrix " +
                 "details when you Update.  Are You Sure?")) {
        AddForm.copyflag.value="N";
        AddForm.submit();
      }
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
function DeleteRecords() {
  if(document.AddForm.nzcmt001.value=="All") {
    i=document.AddForm.nzcmt001.selectedIndex
    document.AddForm.nzcmt001.options[i].value="     ";
  }
  if(document.AddForm.nzcmt002.value=="All") {
     document.AddForm.nzcmt002.value="          ";
  }
  if(document.AddForm.nzcmt004.value=="All") {
     document.AddForm.nzcmt004.value="          ";
  }
  if(document.AddForm.nzcmt003.value=="All") {
    i=document.AddForm.nzcmt003.selectedIndex
    document.AddForm.nzcmt003.options[i].value="     ";
  }
    AddForm.submit();
}
function HealthAllDel() {
  if(AddForm.checkdup.checked==true) {
     AddForm.nzcmt002.value="All"
     AddForm.funddesc.value="All"
   } else {
     AddForm.nzcmt002.value=""
     AddForm.funddesc.value=""
   }
}
function CaseAllDel() {
  if(AddForm.casechk1.checked==true) {
     AddForm.nzcmt004.value="All";
     AddForm.cprcdesc.value="All";
     AddForm.nzcmt003.disabled=true;
     AddForm.nzcmt003.className="";
   } else {
     AddForm.nzcmt004.value=""
     AddForm.cprcdesc.value=""
     AddForm.nzcmt003.disabled=false;
     AddForm.nzcmt003.className="Mandatory";
   }
}
function SetAllCas(set) {
  p=document.AddForm;
  if (set.selectedIndex==1) {
    p.cncmt001.selectedIndex=1;
    p.cncmt001.disabled=true;
  } else {
    p.cncmt001.selectedIndex=0;
    p.cncmt001.disabled=false;
  }
}
function Uncheck(CheckBox) {
  CheckBox.checked=false;
}
function HealthAllDup() {
  if(AddForm.checkdup.checked==true) {
     AddForm.nzcmt002.value="All"
     AddForm.funddesc.value="All"
     AddForm.cncmt002.value="All"
     AddForm.cp_funddesc.value="All"
     AddForm.cp_funddesc.disabled=true;
     AddForm.cncmt002.disabled=true;
     AddForm.imageset.disabled=true;    // Search Icon
     AddForm.eraser.disabled=true;      // Eraser Icon
   } else {
     AddForm.nzcmt002.value=""
     AddForm.funddesc.value=""
     AddForm.cncmt002.value=""
     AddForm.cp_funddesc.value=""
     AddForm.cncmt002.disabled=false;
     AddForm.cp_funddesc.disabled=false;
     AddForm.imageset.disabled=false;   // Search Icon
     AddForm.eraser.disabled=false;     // Eraser Icon
   }
}
function CaseAllDup() {
  if(AddForm.casechk1.checked==true) {
     AddForm.nzcmt004.value="All";
     AddForm.cprcdesc.value="All";
     AddForm.cncmt004.value="All";
     AddForm.cp_cprcdesc.value="All";
     AddForm.cncmt004.disabled=true;
     AddForm.cp_cprcdesc.disabled=true;
     AddForm.imageset1.disabled=true;   // Search Icon
     AddForm.eraser1.disabled=true;     // Eraser Icon
   } else {
     AddForm.nzcmt004.value=""
     AddForm.cprcdesc.value=""
     AddForm.cncmt004.value="";
     AddForm.cp_cprcdesc.value="";
     AddForm.cncmt004.disabled=false;
     AddForm.cp_cprcdesc.disabled=false;
     AddForm.imageset1.disabled=false;  // Search Icon 
     AddForm.eraser1.disabled=false;    // Eraser Icon
   }
}
function CheckDuplication() {
  p=document.AddForm;
  a=p.nzcmt001.selectedIndex;
  b=p.cncmt001.selectedIndex;
  // Check copy from and copy to selections are not identical
  if(p.nzcmt001.options[a].value==p.cncmt001.options[b].value &&
     p.nzcmt002.value==p.cncmt002.value ) {
          alert("The From and To sections can not be identical!");
          return;
   }
   if (!checkclaim()) { return }
//
  if(document.AddForm.nzcmt001.value=="All") {
    i=document.AddForm.nzcmt001.selectedIndex
    document.AddForm.nzcmt001.options[i].value="     ";
  }
  if (isWhitespace(document.AddForm.nzcmt002.value)) {
    document.AddForm.nzcmt002.value="BLANK";  // Set Blank Fund Code
  }
  if (document.AddForm.nzcmt002.value=="All") {
    document.AddForm.nzcmt002.value="         ";  // Set Blank Fund Code
  }
  if(document.AddForm.cncmt001.value=="All") {
    i=document.AddForm.cncmt001.selectedIndex
    document.AddForm.cncmt001.options[i].value="     ";
  }
  if (document.AddForm.nzcmt004.value=="All") {
    document.AddForm.nzcmt004.value="         ";  // Set Blank C/Mix code
  }
  if(document.AddForm.nzcmt003.value=="All") {
    i=document.AddForm.nzcmt003.selectedIndex
    document.AddForm.nzcmt003.options[i].value="     ";
  }
//    
  AddForm.cncmt002.disabled=false;               // Enable fields so they post
  AddForm.cncmt004.disabled=false;
//
  AddForm.submit();
}
function checkclaim() {
  p=document.AddForm;
  if (p.nzcmt001.selectedIndex!=1 && p.cncmt001.selectedIndex==1 ) {
    alert("Copy To - Claim Type cannot be set to All, please change!");
    return false;
  }
  return true;
}
