//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb7709006.js
//
// Written   : 17/11/2006
//
// Function  : Standard Functions Used in patweb7711 templates
//
// Version   :
//
// V9.08.00  17/11/2006  Ebon Clements  CAR 120013
//           Created Include
//========================================================================
// REPORT 9 - NZ Private Contract Procedure Fee
//========================================================================
function ShowSpans() {
  var showoption=document.AddForm.updttype.value;
    if (showoption=="E") {
      if(document.AddForm.ibcnmhos.value=="1") {
        NZPrivContProcFeeOptions.innerHTML=GlobalDeleteHosp.innerHTML;
      } else {
        NZPrivContProcFeeOptions.innerHTML=GlobalDelete.innerHTML;
      }
    } else if (showoption=="H") {
      if(document.AddForm.ibcnmhos.value=="1") {
        NZPrivContProcFeeOptions.innerHTML=ProcFeeDupHosp.innerHTML;
      } else {
        NZPrivContProcFeeOptions.innerHTML=ProcFeeDup.innerHTML;
      }
    } else {
      NZPrivContProcFeeOptions.innerHTML="";
    }
}
function ProcessReport() {
  if (validateMandatory(AddForm)) {
    if(document.AddForm.updttype.value=="C") { // Create the new file
      Create();
    }
  if(document.AddForm.updttype.value=="G") { // Update new to current
    if(confirm("Confirm copy of new data to the existing NZ Private " +
               " Contract Procedure Fee file")) {
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
     AddForm.nzpfe003.disabled=false;
     AddForm.fundsrch.disabled=false;
     AddForm.funderas.disabled=false;
  }
  if(AddForm.tableall.checked==true) {
     AddForm.nzpfe004.disabled=false;
     AddForm.tablsrch.disabled=false;
     AddForm.tableras.disabled=false;
  }
  if(AddForm.proceall.checked==true) {
     AddForm.nzpfe005.disabled=false;
     AddForm.procsrch.disabled=false;
     AddForm.proceras.disabled=false;
  }
  if(AddForm.edateall.checked==true) {
     AddForm.nzpfe006.disabled=false;
     AddForm.nzpfe006.className="Mandatory";
     AddForm.datesrch.disabled=false;
     AddForm.nzpfe006.value=" "
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
     AddForm.nzpfe003.disabled=true;
     AddForm.fundsrch.disabled=true;
     AddForm.funderas.disabled=true;
     AddForm.nzpfe003.value="All"
     AddForm.funddesc.value="All"
   } else {
     AddForm.nzpfe003.disabled=false;
     AddForm.fundsrch.disabled=false;
     AddForm.funderas.disabled=false;
     AddForm.nzpfe003.value=""
     AddForm.funddesc.value=""
   }
}
function TableAll() {
  if(AddForm.tableall.checked==true) {
     AddForm.nzpfe004.disabled=true;
     AddForm.tablsrch.disabled=true;
     AddForm.tableras.disabled=true;
     AddForm.nzpfe004.value="All"
     AddForm.tabldesc.value="All"
   } else {
     AddForm.nzpfe004.disabled=false;
     AddForm.tablsrch.disabled=false;
     AddForm.tableras.disabled=false;
     AddForm.nzpfe004.value=""
     AddForm.tabldesc.value=""
   }
}
function ProcAll() {
  if(AddForm.proceall.checked==true) {
     AddForm.nzpfe005.disabled=true; 
     AddForm.procsrch.disabled=true;
     AddForm.proceras.disabled=true;
     AddForm.nzpfe005.value="All"
     AddForm.cmixdesc.value="All"
   } else {
     AddForm.nzpfe005.disabled=false;
     AddForm.procsrch.disabled=false;
     AddForm.proceras.disabled=false;
     AddForm.nzpfe005.value=""
     AddForm.cmixdesc.value=""
   }
}
function DateAll() {
  if(AddForm.edateall.checked==true) {
     AddForm.nzpfe006.disabled=true;
     AddForm.nzpfe006.className="Readonly";
     AddForm.datesrch.disabled=true;
     AddForm.nzpfe006.value=""
   } else {
     AddForm.nzpfe006.disabled=false;
     AddForm.nzpfe006.className="Mandatory";
     AddForm.datesrch.disabled=false;
     AddForm.nzpfe006.value=""
   }
}
function SetAllHosp() {
  if (AddForm.nzpfe001.selectedIndex==1) {
    AddForm.cppfe001.selectedIndex=1;
    AddForm.cppfe001.disabled=true;
  } else {
    AddForm.cppfe001.selectedIndex=0;
    AddForm.cppfe001.disabled=false;
  }
}
function CheckHosp() {
if (AddForm.nzpfe001.selectedIndex!=1 && AddForm.cppfe001.selectedIndex==1 ) {
    alert("Copy To - Hospital cannot be set to All");
    AddForm.cppfe001.selectedIndex=0;
    return false;
  }
  return true;
}
function SetAllClam() {
  if (AddForm.nzpfe002.selectedIndex==1) {
    AddForm.cppfe002.selectedIndex=1;
    AddForm.cppfe002.disabled=true;
  } else {
    AddForm.cppfe002.selectedIndex=0;
    AddForm.cppfe002.disabled=false;
  }
}
function CheckClam(ccod) {
if (AddForm.nzpfe002.selectedIndex!=1 && AddForm.cppfe002.selectedIndex==1 ) {
  alert("Copy To - " + trim(ccod.title) + " Claim Code cannot be set to All");
    AddForm.nzpfe002.selectedIndex=0;
    return false;
  }
  return true;
}
function CopyHealthAll() {
  if(AddForm.hfundall.checked==true) {
     AddForm.nzpfe003.disabled=true;
     AddForm.fundsrch.disabled=true;
     AddForm.funderas.disabled=true;
     AddForm.nzpfe003.value="All"
     AddForm.funddesc.value="All"
     AddForm.cppfe003.disabled=true;
     AddForm.c_fundsrch.disabled=true;
     AddForm.c_funderas.disabled=true;
     AddForm.cppfe003.value="All"
     AddForm.c_funddesc.value="All"
   } else {
     AddForm.nzpfe003.disabled=false;
     AddForm.fundsrch.disabled=false;
     AddForm.funderas.disabled=false;
     AddForm.nzpfe003.value=""
     AddForm.funddesc.value=""
     AddForm.cppfe003.disabled=false;
     AddForm.c_fundsrch.disabled=false;
     AddForm.c_funderas.disabled=false;
     AddForm.cppfe003.value=""
     AddForm.c_funddesc.value=""
   }
}
function CopyTableAll() {
  if(AddForm.tableall.checked==true) {
     AddForm.nzpfe004.disabled=true;
     AddForm.tablsrch.disabled=true;
     AddForm.tableras.disabled=true;
     AddForm.nzpfe004.value="All"
     AddForm.tabldesc.value="All"
     AddForm.cppfe004.disabled=true;
     AddForm.c_tablsrch.disabled=true;
     AddForm.c_tableras.disabled=true;
     AddForm.cppfe004.value="All"
     AddForm.c_tabldesc.value="All"
   } else {
     AddForm.nzpfe004.disabled=false;
     AddForm.tablsrch.disabled=false;
     AddForm.tableras.disabled=false;
     AddForm.nzpfe004.value=""
     AddForm.tabldesc.value=""
     AddForm.cppfe004.disabled=false;
     AddForm.c_tablsrch.disabled=false;
     AddForm.c_tableras.disabled=false;
     AddForm.cppfe004.value=""
     AddForm.c_tabldesc.value=""
   }
}
function CopyProcAll() {
  if(AddForm.proceall.checked==true) {
     AddForm.nzpfe005.disabled=true;
     AddForm.procsrch.disabled=true;
     AddForm.proceras.disabled=true;
     AddForm.nzpfe005.value="All"
     AddForm.cmixdesc.value="All"
     AddForm.cppfe005.disabled=true;
     AddForm.c_procsrch.disabled=true;
     AddForm.c_proceras.disabled=true;
     AddForm.cppfe005.value="All"
     AddForm.c_cmixdesc.value="All"
   } else {
     AddForm.nzpfe005.disabled=false;
     AddForm.procsrch.disabled=false;
     AddForm.proceras.disabled=false;
     AddForm.nzpfe005.value=""
     AddForm.cmixdesc.value=""
     AddForm.cppfe005.disabled=false;
     AddForm.c_procsrch.disabled=false;
     AddForm.c_proceras.disabled=false;
     AddForm.cppfe005.value=""
     AddForm.c_cmixdesc.value=""
   }
}
function CopyDateAll() {
  if(AddForm.edateall.checked==true) {
     AddForm.nzpfe006.disabled=true;
     AddForm.nzpfe006.className="Readonly";
     AddForm.datesrch.disabled=true;
     AddForm.nzpfe006.value=""
     AddForm.cppfe006.disabled=true;
     AddForm.cppfe006.className="Readonly";
     AddForm.c_datesrch.disabled=true;
     AddForm.cppfe006.value=""
   } else {
     AddForm.nzpfe006.disabled=false;
     AddForm.nzpfe006.className="Mandatory";
     AddForm.datesrch.disabled=false;
     AddForm.nzpfe006.value=""
     AddForm.cppfe006.disabled=false;
     AddForm.cppfe006.className="Mandatory";
     AddForm.c_datesrch.disabled=false;
     AddForm.cppfe006.value=""
   }
}
function CheckDuplication() {
  p=AddForm
  if(p.nzpfe001.value==p.cppfe001.value &&
     p.nzpfe002.value==p.cppfe002.value &&
     p.nzpfe003.value==p.cppfe003.value &&
     p.nzpfe004.value==p.cppfe004.value &&
     p.nzpfe005.value==p.cppfe005.value &&
     p.nzpfe006.value==p.cppfe006.value ) {
     alert("The From and To sections can not be identical!");
     return;   
  }
  if(document.AddForm.hfundall.checked==true) {
     AddForm.nzpfe003.disabled=false;
     AddForm.fundsrch.disabled=false;
     AddForm.funderas.disabled=false;
     AddForm.cppfe003.disabled=false;
     AddForm.c_fundsrch.disabled=false;
     AddForm.c_funderas.disabled=false;
  }
  AddForm.cppfe001.disabled=false;
  AddForm.cppfe002.disabled=false;
  if(AddForm.tableall.checked==true) {
     AddForm.nzpfe004.disabled=false;
     AddForm.tablsrch.disabled=false;
     AddForm.tableras.disabled=false;
     AddForm.cppfe004.disabled=false;
     AddForm.c_tablsrch.disabled=false;
     AddForm.c_tableras.disabled=false;
  }
  if(document.AddForm.proceall.checked==true) {
     AddForm.nzpfe005.disabled=false;
     AddForm.procsrch.disabled=false;
     AddForm.proceras.disabled=false;
     AddForm.cppfe005.disabled=false;
     AddForm.c_procsrch.disabled=false;
     AddForm.c_proceras.disabled=false;
  }
  if(AddForm.edateall.checked==true) {
     AddForm.nzpfe006.disabled=false;
     AddForm.nzpfe006.className="Mandatory";
     AddForm.datesrch.disabled=false;
     AddForm.nzpfe006.value=" "
     AddForm.cppfe006.disabled=false;
     AddForm.cppfe006.className="Mandatory";
     AddForm.c_datesrch.disabled=false;
     AddForm.cppfe006.value=" "
  }
  AddForm.submit();
}  
