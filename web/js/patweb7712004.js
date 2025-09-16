//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb7712004.js
//
// Written   : 22/11/2006
//
// Function  : Standard Functions Used in patweb7712004 
//
// Version   : 
//
// V9.08.00  22/11/2006  Ebon Clements CAR 119999
//           Created Include
//========================================================================
// REPORT 12 - NZ Private Contract Funding
//========================================================================
function ShowSpans(showoption) {
  if (showoption.value=="E") {
      if(document.AddForm.ibcnmhos.value=="1") {
        ContractOptions.innerHTML=GlobalDeleteHosp.innerHTML;
      } else {
        ContractOptions.innerHTML=GlobalDelete.innerHTML;
      }
  } else if (showoption.value=="H") {
      if(document.AddForm.ibcnmhos.value=="1") {
        ContractOptions.innerHTML=HfDuplicationHosp.innerHTML;
      } else {
        ContractOptions.innerHTML=HfDuplication.innerHTML;
      }
  } else {
     ContractOptions.innerHTML="" }
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
      if(confirm("Perform deletion of new file records")) {
        DeleteRecords()
      }
    } 
    if(document.AddForm.updttype.value=="G") { // Update bed fee file with new
      if(confirm("Confirm copy of new data to the existing Contract Funding" +
                 " file")) {
          AddForm.submit();
      }
    } 
  }
}
function DeleteRecords() {
  if(document.AddForm.checkdup.checked==true) {
     AddForm.nzcfn003.disabled=false;
     AddForm.fundsrch.disabled=false;
     AddForm.funderas.disabled=false;
  }
  if(AddForm.casechk1.checked==true) {
     AddForm.nzcfn004.disabled=false;
     AddForm.nzcfn004.readOnly=false;
     AddForm.nzcfn004.className="";
     AddForm.contsrch.disabled=false;
     AddForm.conteras.disabled=false;
  }
  if(AddForm.edateall.checked==true) {
     AddForm.nzcfn006.disabled=false;
     AddForm.datesrch.disabled=false;
     AddForm.nzcfn006.value=" "
  }
  AddForm.submit();
}
//
function SetAllCas(set) {
  p=document.AddForm;
  if (set.selectedIndex==1) {
    p.cpcfn002.selectedIndex=1;
    p.cpcfn002.disabled=true;
  } else {
    p.cpcfn002.selectedIndex=0;
    p.cpcfn002.disabled=false;
  }
}
function Setstart(set) {
  p=document.AddForm;
  if (set.selectedIndex==1) {
    p.cpcfn005.selectedIndex=1;
    p.cpcfn005.disabled=true;
  } else {
    p.cpcfn005.selectedIndex=0;
    p.cpcfn005.disabled=false;
  }
}
function checkstype() {
  p=document.AddForm;
  if (p.nzcfn005.selectedIndex!=1 && p.cpcfn005.selectedIndex==1 ) {
    alert("Copy To - Start Type cannot be set to All, please change!");
    p.cpcfn005.selectedIndex=0
    return false;
  }
  return true;
}
function checkclaim() {
  p=document.AddForm;
  if (p.nzcfn002.selectedIndex!=1 && p.cpcfn002.selectedIndex==1 ) {
    alert("Copy To - Claim Type cannot be set to All, please change!");
    p.cpcfn002.selectedIndex=0
    return false;
  }
  return true;
}
function CheckAllHosp() {
  p=document.AddForm;
  if (p.nzcfn001.selectedIndex!=1 && p.cpcfn001.selectedIndex==1 ) {
    alert("Copy To - Hospital cannot be set to All, please change!");
    p.cpcfn001.selectedIndex=0
    return false;
  }
  return true;
}
function CheckDuplication() {
  p=AddForm
  if(p.nzcfn001.value==p.cpcfn001.value &&
     p.nzcfn002.value==p.cpcfn002.value &&
     p.nzcfn003.value==p.cpcfn003.value &&
     p.nzcfn004.value==p.cpcfn004.value &&
     p.nzcfn005.value==p.cpcfn005.value &&
     p.nzcfn006.value==p.cpcfn006.value ) {
     alert("The From and To sections can not be identical!");
     return;
  }
  if(document.AddForm.checkdup.checked==true) {
     AddForm.nzcfn003.disabled=false;
     AddForm.fundsrch.disabled=false;
     AddForm.funderas.disabled=false;
     AddForm.cpcfn003.disabled=false;
     AddForm.fundsrch.disabled=false;
     AddForm.funderas.disabled=false;
  }
  if(AddForm.casechk1.checked==true) {
     AddForm.cpcfn004.disabled=false;
     AddForm.c_cmixdesc.disabled=false;
     AddForm.contsrch.disabled=false;  // Search Icon
     AddForm.conteras.disabled=false;    // Eraser Icon
     AddForm.c_contsrch.disabled=false;   // Search Icon
     AddForm.c_conteras.disabled=false;     // Eraser Icon
  }
  AddForm.cpcfn005.disabled=false
  if(AddForm.edateall.checked==true) {
     AddForm.nzcfn006.disabled=false;
     AddForm.nzcfn006.className="";
     AddForm.datesrch.disabled=false;
     AddForm.cpcfn006.disabled=false;
     AddForm.cpcfn006.className="";
     AddForm.c_datesrch.disabled=false;
  }
  AddForm.submit();
}
//
function Create() {
  if(confirm("Are You Sure You Want to Overwrite the New File?")) {
    if(confirm("Do You Want to Start with a Copy of the Current Data?")) {
      AddForm.copyflag.value="Y";
      AddForm.submit();
    } else {
      if(confirm("You will lose All Current NZ Private Contract Funding " +
                 "details when you Update.  Are You Sure?")) {
        AddForm.copyflag.value="N";
        AddForm.submit();
      }
    }
  }
}
//
function CaseAllDup() {
  if(AddForm.casechk1.checked==true) {
     AddForm.nzcfn004.value="All";
     AddForm.nzcfn004.className="Readonly";
     AddForm.nzcfn004.readOnly=true;
     AddForm.cmixdesc.value="All";
     AddForm.cpcfn004.value="All";
     AddForm.c_cmixdesc.value="All";
     AddForm.cpcfn004.disabled=true;
     AddForm.c_cmixdesc.disabled=true;
     AddForm.contsrch.disabled=true;   // Search Icon
     AddForm.conteras.disabled=true;     // Eraser Icon
     AddForm.c_contsrch.disabled=true;   // Search Icon
     AddForm.c_conteras.disabled=true;     // Eraser Icon
   } else {
     AddForm.nzcfn004.value=""
     AddForm.nzcfn004.value=""
     AddForm.nzcfn004.className="Mandatory";
     AddForm.cmixdesc.value=""
     AddForm.cpcfn004.value="";
     AddForm.c_cmixdesc.value="";
     AddForm.cpcfn004.disabled=false;
     AddForm.c_cmixdesc.disabled=false;
     AddForm.contsrch.disabled=false;  // Search Icon 
     AddForm.conteras.disabled=false;    // Eraser Icon
     AddForm.c_contsrch.disabled=false;   // Search Icon
     AddForm.c_conteras.disabled=false;     // Eraser Icon
   }
}
function CaseAllDel() {
  if(AddForm.casechk1.checked==true) {
     AddForm.nzcfn004.value="All";
     AddForm.nzcfn004.className="Readonly";
     AddForm.nzcfn004.readOnly=true;
     AddForm.cmixdesc.value="All";
     AddForm.contsrch.disabled=true;   // Search Icon
     AddForm.conteras.disabled=true;     // Eraser Icon
   } else {
     AddForm.nzcfn004.value=""
     AddForm.nzcfn004.className="Mandatory";
     AddForm.nzcfn004.readOnly=false;
     AddForm.cmixdesc.value=""
     AddForm.contsrch.disabled=false;  // Search Icon 
     AddForm.conteras.disabled=false;    // Eraser Icon
   }
}
function HealthAllDup() {
  if(AddForm.checkdup.checked==true) {
     AddForm.nzcfn003.disabled=true;
     AddForm.fundsrch.disabled=true;
     AddForm.funderas.disabled=true;
     AddForm.nzcfn003.value="All"
     AddForm.funddesc.value="All"
     AddForm.cpcfn003.disabled=true;
     AddForm.c_fundsrch.disabled=true;
     AddForm.c_funderas.disabled=true;
     AddForm.cpcfn003.value="All"
     AddForm.c_funddesc.value="All"
   } else {
     AddForm.nzcfn003.disabled=false;
     AddForm.fundsrch.disabled=false;
     AddForm.funderas.disabled=false;
     AddForm.nzcfn003.value=""
     AddForm.funddesc.value=""
     AddForm.cpcfn003.disabled=false;
     AddForm.c_fundsrch.disabled=false;
     AddForm.c_funderas.disabled=false;
     AddForm.cpcfn003.value=""
     AddForm.c_funddesc.value=""
   }
}
function HealthAllDel() {
  if(AddForm.checkdup.checked==true) {
     AddForm.nzcfn003.disabled=true;
     AddForm.fundsrch.disabled=true;
     AddForm.funderas.disabled=true;
     AddForm.nzcfn003.value="All"
     AddForm.funddesc.value="All"
   } else {
     AddForm.nzcfn003.disabled=false;
     AddForm.fundsrch.disabled=false;
     AddForm.funderas.disabled=false;
     AddForm.nzcfn003.value=""
     AddForm.funddesc.value=""
   }
}
function valHfund(ReturnFund,FundName) {
  var p=document.AddForm;
  if (p.checkdup!=undefined) {
    if(p.checkdup.checked==true) {
      return;
    }
  }  
  if(!isWhitespace(ReturnFund.value)) {
     validateCode(16,ReturnFund,FundName)
  } else {
    ReturnFund.value="";
    FundName.value="";
  }
}
function HFundSearch(ReturnCode,ReturnName) {
  HFundSearchFrame(ReturnCode,ReturnName);
}
function validateCasemix(ReturnCode,ReturnDesc) {
  var p=document.AddForm;
  if(isWhitespace(ReturnCode.value)) { return; }
  if (p.casechk1!=undefined) {
    if(p.casechk1.checked==true) {
      return;
    }
  }
  validateCode(35,ReturnCode,ReturnDesc);
}
function CasemixSearch(ReturnCode,ReturnDesc) {
  var p=document.AddForm;
  if (p.casechk1!=undefined) {
    if(p.casechk1.checked==true) {
     ReturnCode.value=""
     ReturnCode.className="Mandatory";
     ReturnCode.readOnly=false;
     ReturnDesc.value=""
     p.casechk1.checked=false;
    }
  }  
  CmixSearchFrame(ReturnCode,ReturnDesc)
}
function SetAllHosp() {
  if (AddForm.nzcfn001.selectedIndex==1) {
    AddForm.cpcfn001.selectedIndex=1;
    AddForm.cpcfn001.disabled=true;
  } else {
    AddForm.cpcfn001.selectedIndex=0;
    AddForm.cpcfn001.disabled=false;
  }
}
function CheckHosp() {
if (AddForm.nzcfn001.selectedIndex!=1 && AddForm.cpcfn001.selectedIndex==1 ) {
    alert("Copy To - Hospital cannot be set to All");
    AddForm.cpcfn001.selectedIndex=0;
    return false;
  }
  return true;
}
function CopyDateAll() {
  if(AddForm.edateall.checked==true) {
     AddForm.nzcfn006.disabled=true;
     AddForm.nzcfn006.className="Readonly";
     AddForm.datesrch.disabled=true;
     AddForm.nzcfn006.value=""
     AddForm.cpcfn006.disabled=true;
     AddForm.cpcfn006.className="Readonly";
     AddForm.c_datesrch.disabled=true;
     AddForm.cpcfn006.value=""
   } else {
     AddForm.nzcfn006.disabled=false;
     AddForm.nzcfn006.className="Mandatory";
     AddForm.datesrch.disabled=false;
     AddForm.nzcfn006.value=""
     AddForm.cpcfn006.disabled=false;
     AddForm.cpcfn006.className="Mandatory";
     AddForm.c_datesrch.disabled=false;
     AddForm.cpcfn006.value=""
   }
}
function DateAll() {
  if(AddForm.edateall.checked==true) {
     AddForm.nzcfn006.value=""
     AddForm.nzcfn006.disabled=true;
     AddForm.nzcfn006.className="Readonly";
     AddForm.datesrch.disabled=true;
   } else {
     AddForm.nzcfn006.value=""
     AddForm.nzcfn006.disabled=false;
     AddForm.nzcfn006.className="Mandatory";
     AddForm.datesrch.disabled=false;
   }
}
