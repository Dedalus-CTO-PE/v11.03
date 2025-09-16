//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb7708006.js
//
// Written   : 20/10/2006
//
// Function  : Standard Functions Used in patweb7708 templates
//
// Version   :
//
// V9.08.00  20/10/2006  Ebon Clements  CAR 120013
//           Created Include
//========================================================================
// REPORT 8 - NZ Private Theatre Fee
//========================================================================
function ShowSpans() {
  var showoption=document.AddForm.updttype.value;
  if (showoption=="E") {
    if(document.AddForm.ibcnmhos.value=="1") {
      NZTheatreFeeOptions.innerHTML=GlobalDeleteHosp.innerHTML;
    } else {
      NZTheatreFeeOptions.innerHTML=GlobalDelete.innerHTML;
    }
  } else if (showoption=="H") {
    if(document.AddForm.ibcnmhos.value=="1") {
      NZTheatreFeeOptions.innerHTML=HealthFundDupHosp.innerHTML;
    } else {
      NZTheatreFeeOptions.innerHTML=HealthFundDup.innerHTML;
    }
  } else {
    NZTheatreFeeOptions.innerHTML="";
  }
}
function ProcessReport() {
  if (validateMandatory(AddForm)) {
    if(document.AddForm.updttype.value=="C") { // Create the new file
      Create();
    }
    if(document.AddForm.updttype.value=="G") { // Update new to current
      if(confirm("Confirm copy of new data to the existing NZ Private Theatre" +
                 " Fee file")) {
          AddForm.submit();
      }
    }
    if(document.AddForm.updttype.value=="E") { // Global delete new file
      if(confirm("Perform deletion of new file records")) {
        DeleteRecords()
      }
    }
    if(document.AddForm.updttype.value=="H") { // Health fund duplication
      CheckDuplication();
    }
  }
}
function DeleteRecords() {
  if(document.AddForm.hfundall.checked==true) {
     AddForm.nztfe004.disabled=false;
     AddForm.fundsrch.disabled=false;
     AddForm.funderas.disabled=false;
  }
  if(AddForm.tableall.checked==true) {
     AddForm.nztfe005.disabled=false;
     AddForm.tablsrch.disabled=false;
     AddForm.tableras.disabled=false;
  }
  if(AddForm.edateall.checked==true) {
     AddForm.nztfe006.disabled=false;
     AddForm.nztfe006.className="Mandatory";
     AddForm.datesrch.disabled=false;
     AddForm.nztfe006.value=" "
  }
  AddForm.submit();
}
function Create() {
  if(confirm("Are You Sure You Want to Overwrite the New File?")) {
    if(confirm("Do You Want to Start with a Copy of the Current Data?")) {
      AddForm.copyflag.value="Y";
      AddForm.submit();
    } else {
      if(confirm("You will lose All Current NZ Private Theatre Fees " +
                 " when you Update.  Are You Sure?")) {
        AddForm.copyflag.value="N";
        AddForm.submit();
      }
    }
  }       
}         
// 
function HealthAll() {
  if(AddForm.hfundall.checked==true) {
     AddForm.nztfe004.disabled=true;
     AddForm.fundsrch.disabled=true;
     AddForm.funderas.disabled=true;
     AddForm.nztfe004.value="All"
     AddForm.funddesc.value="All"
   } else {
     AddForm.nztfe004.disabled=false;
     AddForm.fundsrch.disabled=false;
     AddForm.funderas.disabled=false;
     AddForm.nztfe004.value=""
     AddForm.funddesc.value=""
   }
}
function TableAll() {
  if(AddForm.tableall.checked==true) {
     AddForm.nztfe005.disabled=true;
     AddForm.tablsrch.disabled=true;
     AddForm.tableras.disabled=true;
     AddForm.nztfe005.value="All"
     AddForm.tabldesc.value="All"
   } else {
     AddForm.nztfe005.disabled=false;
     AddForm.tablsrch.disabled=false;
     AddForm.tableras.disabled=false;
     AddForm.nztfe005.value=""
     AddForm.tabldesc.value=""
   }
}
function DateAll() {
  if(AddForm.edateall.checked==true) {
     AddForm.nztfe006.disabled=true;
     AddForm.nztfe006.className="Readonly";
     AddForm.datesrch.disabled=true;
     AddForm.nztfe006.value=""
   } else {
     AddForm.nztfe006.disabled=false;
     AddForm.nztfe006.className="Mandatory";
     AddForm.datesrch.disabled=false;
     AddForm.nztfe006.value=""
   }
}
function SetAllHosp() {
  if (AddForm.nztfe001.selectedIndex==1) {
    AddForm.cptfe001.selectedIndex=1;
    AddForm.cptfe001.disabled=true;
  } else {
    AddForm.cptfe001.selectedIndex=0;
    AddForm.cptfe001.disabled=false;
  }
}
function CheckHosp() {
  if (AddForm.nztfe001.selectedIndex!=1 && AddForm.cptfe001.selectedIndex==1 ) {
    alert("Copy To - Hospital cannot be set to All");
    AddForm.cptfe001.selectedIndex=0;
    return false;
  }
  return true;
}
function SetAllSess() {
  if (AddForm.nztfe002.selectedIndex==1) {
    AddForm.cptfe002.selectedIndex=1;
    AddForm.cptfe002.disabled=true;
  } else {
    AddForm.cptfe002.selectedIndex=0;
    AddForm.cptfe002.disabled=false;
  }
}
function CheckSess() {
  if (AddForm.nztfe002.selectedIndex!=1 && AddForm.cptfe002.selectedIndex==1 ) {
    alert("Copy To - Session Type cannot be set to All");
    AddForm.cptfe002.selectedIndex=0;
    return false;
  }
  return true;
}
function SetAllClam() {
  if (AddForm.nztfe003.selectedIndex==1) {
    AddForm.cptfe003.selectedIndex=1;
    AddForm.cptfe003.disabled=true;
  } else {
    AddForm.cptfe003.selectedIndex=0;
    AddForm.cptfe003.disabled=false;
  }
}
function CheckClam(ccod) {
  if (AddForm.nztfe003.selectedIndex!=1 && AddForm.cptfe003.selectedIndex==1 ) {
    alert("Copy To - " + trim(ccod.title) + " Claim Code cannot be set to All");
    AddForm.cptfe003.selectedIndex=0;
    return false;
  }
  return true;
}
function CopyHealthAll() {
  if(AddForm.hfundall.checked==true) {
     AddForm.nztfe004.disabled=true;
     AddForm.fundsrch.disabled=true;
     AddForm.funderas.disabled=true;
     AddForm.nztfe004.value="All"
     AddForm.funddesc.value="All"
     AddForm.cptfe004.disabled=true;
     AddForm.c_fundsrch.disabled=true;
     AddForm.c_funderas.disabled=true;
     AddForm.cptfe004.value="All"
     AddForm.c_funddesc.value="All"
   } else {
     AddForm.nztfe004.disabled=false;
     AddForm.fundsrch.disabled=false;
     AddForm.funderas.disabled=false;
     AddForm.nztfe004.value=""
     AddForm.funddesc.value=""
     AddForm.cptfe004.disabled=false;
     AddForm.c_fundsrch.disabled=false;
     AddForm.c_funderas.disabled=false;
     AddForm.cptfe004.value=""
     AddForm.c_funddesc.value=""
   }
}
function CopyTableAll() {
  if(AddForm.tableall.checked==true) {
     AddForm.nztfe005.disabled=true;
     AddForm.tablsrch.disabled=true;
     AddForm.tableras.disabled=true;
     AddForm.nztfe005.value="All"
     AddForm.tabldesc.value="All"
     AddForm.cptfe005.disabled=true;
     AddForm.c_tablsrch.disabled=true;
     AddForm.c_tableras.disabled=true;
     AddForm.cptfe005.value="All"
     AddForm.c_tabldesc.value="All"
   } else {
     AddForm.nztfe005.disabled=false;
     AddForm.tablsrch.disabled=false;
     AddForm.tableras.disabled=false;
     AddForm.nztfe005.value=""
     AddForm.tabldesc.value=""
     AddForm.cptfe005.disabled=false;
     AddForm.c_tablsrch.disabled=false;
     AddForm.c_tableras.disabled=false;
     AddForm.cptfe005.value=""
     AddForm.c_tabldesc.value=""
   }
}
function CopyDateAll() {
  if(AddForm.edateall.checked==true) {
     AddForm.nztfe006.disabled=true;
     AddForm.nztfe006.className="Readonly";
     AddForm.datesrch.disabled=true;
     AddForm.nztfe006.value=""
     AddForm.cptfe006.disabled=true;
     AddForm.cptfe006.className="Readonly";
     AddForm.c_datesrch.disabled=true;
     AddForm.cptfe006.value=""
   } else {
     AddForm.nztfe006.disabled=false;
     AddForm.nztfe006.className="Mandatory";
     AddForm.datesrch.disabled=false;
     AddForm.nztfe006.value=""
     AddForm.cptfe006.disabled=false;
     AddForm.cptfe006.className="Mandatory";
     AddForm.c_datesrch.disabled=false;
     AddForm.cptfe006.value=""
   }
}
function CheckDuplication() {
  p=AddForm
  if(p.nztfe001.value==p.cptfe001.value &&
     p.nztfe002.value==p.cptfe002.value &&
     p.nztfe003.value==p.cptfe003.value &&
     p.nztfe004.value==p.cptfe004.value &&
     p.nztfe005.value==p.cptfe005.value &&
     p.nztfe006.value==p.cptfe006.value ) {
     alert("The From and To sections can not be identical!");
     return;   
  }
  if(document.AddForm.hfundall.checked==true) {
     AddForm.nztfe004.disabled=false;
     AddForm.fundsrch.disabled=false;
     AddForm.funderas.disabled=false;
     AddForm.cptfe004.disabled=false;
     AddForm.c_fundsrch.disabled=false;
     AddForm.c_funderas.disabled=false;
  }
  AddForm.cptfe001.disabled=false;
  AddForm.cptfe002.disabled=false;
  AddForm.cptfe003.disabled=false;
  AddForm.cptfe004.disabled=false;
  if(AddForm.tableall.checked==true) {
     AddForm.nztfe005.disabled=false;
     AddForm.tablsrch.disabled=false;
     AddForm.tableras.disabled=false;
     AddForm.cptfe005.disabled=false;
     AddForm.c_tablsrch.disabled=false;
     AddForm.c_tableras.disabled=false;
  }
  if(AddForm.edateall.checked==true) {
     AddForm.nztfe006.disabled=false;
     AddForm.nztfe006.className="Mandatory";
     AddForm.datesrch.disabled=false;
     AddForm.nztfe006.value=" "
     AddForm.cptfe006.disabled=false;
     AddForm.cptfe006.className="Mandatory";
     AddForm.c_datesrch.disabled=false;
     AddForm.cptfe006.value=" "
  }
  AddForm.submit();
}  
