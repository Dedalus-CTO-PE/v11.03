//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb7711007.js
//
// Written   : 17/11/2006
//
// Function  : Standard Functions Used in patweb7711 templates
//
// Version   :
//
// V10.03.01 16/03/2012  J.Tan          CAR 259879
//           Added Effective todate
// V9.08.00  17/11/2006  Ebon Clements  CAR 120013
//           Created Include
//========================================================================
// REPORT 11 - NZ Private Misc Charges
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
        NZPrivContProcFeeOptions.innerHTML=MiscChargeDupHosp.innerHTML;
      } else {
        NZPrivContProcFeeOptions.innerHTML=MiscChargeDup.innerHTML;
      }
    } else if (showoption=="P") {
      if(document.AddForm.ibcnmhos.value=="1") {
        NZPrivContProcFeeOptions.innerHTML=MiscChargeUpdHosp.innerHTML;
      } else {
        NZPrivContProcFeeOptions.innerHTML=MiscChargeUpd.innerHTML;
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
    if(document.AddForm.updttype.value=="L") { // Update new to current
      if(confirm("Confirm copy of new data to the existing NZ private " +
                 "miscellaneous charges file")) {
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
    if(document.AddForm.updttype.value=="G") { // Generate Keywords       
      if(confirm("Confirm Generation of NZ private " +
                 "miscellaneous charges keyword file")) {
          AddForm.submit();
      }
    }
    if(document.AddForm.updttype.value=="P") { // Global Update
      UpdateRecords();
    }
  }
}
function DeleteRecords() {
  if(document.AddForm.hfundall.checked==true) {
     AddForm.nzmch003.disabled=false;
     AddForm.fundsrch.disabled=false;
     AddForm.funderas.disabled=false;
  }
  if(AddForm.tableall.checked==true) {
     AddForm.nzmch004.disabled=false;
     AddForm.tablsrch.disabled=false;
     AddForm.tableras.disabled=false;
  }
  if(AddForm.mischall.checked==true) {
     AddForm.nzmch005.disabled=false;
     AddForm.miscsrch.disabled=false;
     AddForm.misceras.disabled=false;
  }
  if(AddForm.edateall.checked==true) {
     AddForm.nzmch006.disabled=false;
     AddForm.nzmch006.className="Mandatory";
     AddForm.datesrch.disabled=false;
     AddForm.nzmch006.value=" "
  }
  if(AddForm.xdateall.checked==true) {
     AddForm.nzmch019.disabled=false;
     AddForm.nzmch019.className="Mandatory";
     AddForm.datesrch.disabled=false;
     AddForm.nzmch019.value=" "
  }
  AddForm.submit();
}
function UpdateRecords() {
  if(document.AddForm.hfundall.checked==true) {
     AddForm.nzmch003.disabled=false;
     AddForm.fundsrch.disabled=false;
     AddForm.funderas.disabled=false;
  }
  if(AddForm.tableall.checked==true) {
     AddForm.nzmch004.disabled=false;
     AddForm.tablsrch.disabled=false;
     AddForm.tableras.disabled=false;
  }
  if(AddForm.mischall.checked==true) {
     AddForm.nzmch005.disabled=false;
     AddForm.miscsrch.disabled=false;
     AddForm.misceras.disabled=false;
  }
  if(AddForm.edateall.checked==true) {
     AddForm.nzmch006.disabled=false;
     AddForm.nzmch006.className="Mandatory";
     AddForm.datesrch.disabled=false;
     AddForm.nzmch006.value=" "
  }
  AddForm.submit();
}
function Create() {
  if(confirm("Are You Sure You Want to Overwrite the New File?")) {
    if(confirm("Do You Want to Start with a Copy of the Current Data?")) {
      AddForm.copyflag.value="Y";
      AddForm.submit();
    } else {
      if(confirm("You will lose All Current NZ Private Misc Charges " +
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
     AddForm.nzmch003.disabled=true;
     AddForm.fundsrch.disabled=true;
     AddForm.funderas.disabled=true;
     AddForm.nzmch003.value="All"
     AddForm.funddesc.value="All"
   } else {
     AddForm.nzmch003.disabled=false;
     AddForm.fundsrch.disabled=false;
     AddForm.funderas.disabled=false;
     AddForm.nzmch003.value=""
     AddForm.funddesc.value=""
   }
}
function TableAll() {
  if(AddForm.tableall.checked==true) {
     AddForm.nzmch004.disabled=true;
     AddForm.tablsrch.disabled=true;
     AddForm.tableras.disabled=true;
     AddForm.nzmch004.value="All"
     AddForm.tabldesc.value="All"
   } else {
     AddForm.nzmch004.disabled=false;
     AddForm.tablsrch.disabled=false;
     AddForm.tableras.disabled=false;
     AddForm.nzmch004.value=""
     AddForm.tabldesc.value=""
   }
}
function MiscAll() {
  if(AddForm.mischall.checked==true) {
     AddForm.nzmch005.disabled=true; 
     AddForm.miscsrch.disabled=true;
     AddForm.misceras.disabled=true;
     AddForm.nzmch005.value="All"
     AddForm.d_nzmch005.value="All"
   } else {
     AddForm.nzmch005.disabled=false;
     AddForm.miscsrch.disabled=false;
     AddForm.misceras.disabled=false;
     AddForm.nzmch005.value=""
     AddForm.d_nzmch005.value=""
   }
}
function DateAll() {
  if(AddForm.edateall.checked==true) {
     AddForm.nzmch006.disabled=true;
     AddForm.nzmch006.className="Readonly";
     AddForm.datesrch.disabled=true;
     AddForm.nzmch006.value=""
   } else {
     AddForm.nzmch006.disabled=false;
     AddForm.nzmch006.className="Mandatory";
     AddForm.datesrch.disabled=false;
     AddForm.nzmch006.value=""
   }
}
function xDateAll() {
  if(AddForm.xdateall.checked==true) {
     AddForm.nzmch019.disabled=true;
     AddForm.nzmch019.className="Readonly";
     AddForm.xdatesrch.disabled=true;
     AddForm.nzmch019.value=""
   } else {
     AddForm.nzmch019.disabled=false;
     AddForm.nzmch019.className="";
     AddForm.xdatesrch.disabled=false;
     AddForm.nzmch019.value=""
   }
}
function SetAllHosp() {
  if (AddForm.nzmch001.selectedIndex==1) {
    AddForm.cpmch001.selectedIndex=1;
    AddForm.cpmch001.disabled=true;
  } else {
    AddForm.cpmch001.selectedIndex=0;
    AddForm.cpmch001.disabled=false;
  }
}
function CheckHosp() {
if (AddForm.nzmch001.selectedIndex!=1 && AddForm.cpmch001.selectedIndex==1 ) {
    alert("Copy To - Hospital cannot be set to All");
    AddForm.cpmch001.selectedIndex=0;
    return false;
  }
  return true;
}
function SetAllClam() {
  if (AddForm.nzmch002.selectedIndex==1) {
    AddForm.cpmch002.selectedIndex=1;
    AddForm.cpmch002.disabled=true;
  } else {
    AddForm.cpmch002.selectedIndex=0;
    AddForm.cpmch002.disabled=false;
  }
}
function CheckClam(ccod) {
if (AddForm.nzmch002.selectedIndex!=1 && AddForm.cpmch002.selectedIndex==1 ) {
  alert("Copy To - " + trim(ccod.title) + " Claim Code cannot be set to All");
    AddForm.nzmch002.selectedIndex=0;
    return false;
  }
  return true;
}
function CopyHealthAll() {
  if(AddForm.hfundall.checked==true) {
     AddForm.nzmch003.disabled=true;
     AddForm.fundsrch.disabled=true;
     AddForm.funderas.disabled=true;
     AddForm.nzmch003.value="All"
     AddForm.funddesc.value="All"
     AddForm.cpmch003.disabled=true;
     AddForm.c_fundsrch.disabled=true;
     AddForm.c_funderas.disabled=true;
     AddForm.cpmch003.value="All"
     AddForm.c_funddesc.value="All"
   } else {
     AddForm.nzmch003.disabled=false;
     AddForm.fundsrch.disabled=false;
     AddForm.funderas.disabled=false;
     AddForm.nzmch003.value=""
     AddForm.funddesc.value=""
     AddForm.cpmch003.disabled=false;
     AddForm.c_fundsrch.disabled=false;
     AddForm.c_funderas.disabled=false;
     AddForm.cpmch003.value=""
     AddForm.c_funddesc.value=""
   }
}
function CopyTableAll() {
  if(AddForm.tableall.checked==true) {
     AddForm.nzmch004.disabled=true;
     AddForm.tablsrch.disabled=true;
     AddForm.tableras.disabled=true;
     AddForm.nzmch004.value="All"
     AddForm.tabldesc.value="All"
     AddForm.cpmch004.disabled=true;
     AddForm.c_tablsrch.disabled=true;
     AddForm.c_tableras.disabled=true;
     AddForm.cpmch004.value="All"
     AddForm.c_tabldesc.value="All"
   } else {
     AddForm.nzmch004.disabled=false;
     AddForm.tablsrch.disabled=false;
     AddForm.tableras.disabled=false;
     AddForm.nzmch004.value=""
     AddForm.tabldesc.value=""
     AddForm.cpmch004.disabled=false;
     AddForm.c_tablsrch.disabled=false;
     AddForm.c_tableras.disabled=false;
     AddForm.cpmch004.value=""
     AddForm.c_tabldesc.value=""
   }
}
function CopyMiscAll() {
  if(AddForm.mischall.checked==true) {
     AddForm.nzmch005.disabled=true;
     AddForm.miscsrch.disabled=true;
     AddForm.misceras.disabled=true;
     AddForm.nzmch005.value="All"
     AddForm.d_nzmch005.value="All"
     AddForm.cpmch005.disabled=true;
     AddForm.c_miscsrch.disabled=true;
     AddForm.c_misceras.disabled=true;
     AddForm.cpmch005.value="All"
     AddForm.d_cpmch005.value="All"
   } else {
     AddForm.nzmch005.disabled=false;
     AddForm.miscsrch.disabled=false;
     AddForm.misceras.disabled=false;
     AddForm.nzmch005.value=""
     AddForm.d_nzmch005.value=""
     AddForm.cpmch005.disabled=false;
     AddForm.c_miscsrch.disabled=false;
     AddForm.c_misceras.disabled=false;
     AddForm.cpmch005.value=""
     AddForm.d_cpmch005.value=""
   }
}
function CopyDateAll() {
  if(AddForm.edateall.checked==true) {
     AddForm.nzmch006.disabled=true;
     AddForm.nzmch006.className="Readonly";
     AddForm.datesrch.disabled=true;
     AddForm.nzmch006.value=""
     AddForm.cpmch006.disabled=true;
     AddForm.cpmch006.className="Readonly";
     AddForm.c_datesrch.disabled=true;
     AddForm.cpmch006.value=""
   } else {
     AddForm.nzmch006.disabled=false;
     AddForm.nzmch006.className="Mandatory";
     AddForm.datesrch.disabled=false;
     AddForm.nzmch006.value=""
     AddForm.cpmch006.disabled=false;
     AddForm.cpmch006.className="Mandatory";
     AddForm.c_datesrch.disabled=false;
     AddForm.cpmch006.value=""
   }
}
function CheckDuplication() {
  p=AddForm
  if(p.nzmch001.value==p.cpmch001.value &&
     p.nzmch002.value==p.cpmch002.value &&
     p.nzmch003.value==p.cpmch003.value &&
     p.nzmch004.value==p.cpmch004.value &&
     p.nzmch005.value==p.cpmch005.value &&
     p.nzmch006.value==p.cpmch006.value ) {
     alert("The From and To sections can not be identical!");
     return;   
  }
  if(document.AddForm.hfundall.checked==true) {
     AddForm.nzmch003.disabled=false;
     AddForm.fundsrch.disabled=false;
     AddForm.funderas.disabled=false;
     AddForm.cpmch003.disabled=false;
     AddForm.c_fundsrch.disabled=false;
     AddForm.c_funderas.disabled=false;
  }
  AddForm.cpmch001.disabled=false;
  AddForm.cpmch002.disabled=false;
  if(AddForm.tableall.checked==true) {
     AddForm.nzmch004.disabled=false;
     AddForm.tablsrch.disabled=false;
     AddForm.tableras.disabled=false;
     AddForm.cpmch004.disabled=false;
     AddForm.c_tablsrch.disabled=false;
     AddForm.c_tableras.disabled=false;
  }
  if(document.AddForm.mischall.checked==true) {
     AddForm.nzmch005.disabled=false;
     AddForm.miscsrch.disabled=false;
     AddForm.misceras.disabled=false;
     AddForm.cpmch005.disabled=false;
     AddForm.c_miscsrch.disabled=false;
     AddForm.c_misceras.disabled=false;
  }
  if(AddForm.edateall.checked==true) {
     AddForm.nzmch006.disabled=false;
     AddForm.nzmch006.className="Mandatory";
     AddForm.datesrch.disabled=false;
     AddForm.nzmch006.value=" "
     AddForm.cpmch006.disabled=false;
     AddForm.cpmch006.className="Mandatory";
     AddForm.c_datesrch.disabled=false;
     AddForm.cpmch006.value=" "
  }
  AddForm.submit();
}  
