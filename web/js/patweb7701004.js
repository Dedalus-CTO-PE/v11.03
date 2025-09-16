//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb7701004.js
//
// Written   : 20/03/2003
//
// Function  : Standard Functions Used in patweb89 templates
//
// Version   : 
//
// V10.00.01 16/06/2010  Mike Laming   CAR 213282
//          Add class "NotFuturEdate" to bfeedate in SetCalculate()
// V9.09.01 25/06/2007 J.Tan  CAR 138887
//          Mods Update bed fee to remove Process date
// V9.03.04 27/04/2004 Lina Vo                
//          Mods to ProcessReport(), CheckDuplication() & Create() to set 
//          cancflag=1 before submitting form. This will stop display of 
//          locked warning message.
// V9.03.03 19/04/2004  Lina Vo         CAR 48824
//          Added function AllHFund() & AllHFTable().
//          Added extra validation to CheckDuplication().
//          Mods to function clrHlthFnd() & DayAll().
//          Removed HealthAll(), HealthAllDup() & HealthAllDup2().
// V9.03.02 07/01/2004  Sylvek Litewka  CAR 39867
//          Added function clrHlthFnd()
// V9.03.01 20/03/2003  Ebon Clements 
//          Created Include              
//========================================================================
// REPORT 1 - Bed Fees 
//========================================================================
function ProcessReport() {
  if (validateMandatory(AddForm)) {
    if(document.AddForm.updttype.value=="G") { // Global update of charges
      AddForm.cancflag.value=1;
      AddForm.submit();
    } 
    if(document.AddForm.updttype.value=="C") { // Create the new file
      Create();
    } 
    if(document.AddForm.updttype.value=="H") { // Health fund duplication
      CheckDuplication();
    } 
    if(document.AddForm.updttype.value=="E") { // Global delete new file
      if(confirm("Perform deletion of new file records")) {
        AddForm.cancflag.value=1;
        AddForm.submit();
      }
    } 
    if(document.AddForm.updttype.value=="F") { // Update bed fee file with new
      if(AddForm.newbfile.value=="0") {
        alert("The new bedfee file is empty - No bed fees updated")
        return;
      }
      if(confirm("Confirm copy of new data to the existing bed fee file")) {
          AddForm.cancflag.value=1;
          AddForm.submit();
      }
    } 
  }
}
//
function CheckDuplication() {
 // Claim Type
 if (isWhitespace(document.AddForm.bdfee001.value)) {
   if (!isWhitespace(document.AddForm.cpfee001.value)) {
     alert("Copy To Claim Type must be All.");
     document.AddForm.cpfee001.focus();
     return false;
   }
 }
 else {
   if (isWhitespace(document.AddForm.cpfee001.value)) {
     alert("Copy To Claim Type cannot be All.");
     document.AddForm.cpfee001.focus();
     return false;
   }
 }
 // Health Fund
 if (document.AddForm.bdfee011.checked==true) {
   if (document.AddForm.toallhf.checked==false) {
     alert("Copy To Health Fund must be All.");
     document.AddForm.toallhf.focus();
     return false;
   }
 }
 else {
   if (document.AddForm.toallhf.checked==true) {
     alert("Copy To Health Fund cannot be All.");
     document.AddForm.toallhf.focus();
     return false;
   }
 }
 // Health Fund Table
 if (document.AddForm.bdfee012.checked==true) {
   if (document.AddForm.toallhft.checked==false) {
     alert("Copy To Health Fund Table must be All.");
     document.AddForm.toallhft.focus();
     return false;
   }
 }
 else {
   if (document.AddForm.toallhft.checked==true) {
     alert("Copy To Health Fund Table cannot be All.");
     document.AddForm.toallhft.focus();
     return false;
   }
 }
 // All Fields
 if( (isWhitespace(document.AddForm.bdfee001.value)) &&
     (document.AddForm.bdfee011.checked==true) &&
     (isWhitespace(document.AddForm.bdfee004.value)) &&
     (isWhitespace(document.AddForm.bdfee005.value)) &&
     (isWhitespace(document.AddForm.cpfee001.value)) &&
     (document.AddForm.toallhf.checked==true) &&
     (isWhitespace(document.AddForm.cpfee004.value)) &&
     (isWhitespace(document.AddForm.cpfee005.value)) ) {
     alert("At Least One of the Fields Must Not be ALL.");
     document.AddForm.bdfee001.focus();
     return false;
 }
 // Indentical Fields - All Health Fund
 if (document.AddForm.bdfee011.checked==true) {
   if((document.AddForm.bdfee001.value==document.AddForm.cpfee001.value) &&
      (document.AddForm.bdfee004.value==document.AddForm.cpfee004.value) &&
      (document.AddForm.bdfee005.value==document.AddForm.cpfee005.value) ) {
     alert("The FROM and TO Sections Cannot be Identical.");
     document.AddForm.bdfee001.focus();
     return false;
   }
 }
 else {
 // Indentical Fields - All Health Fund Table
   if (document.AddForm.bdfee012.checked==true) {
     if((document.AddForm.bdfee001.value==document.AddForm.cpfee001.value) &&
        (document.AddForm.bdfee002.value==document.AddForm.cpfee002.value) &&
        (document.AddForm.bdfee004.value==document.AddForm.cpfee004.value) &&
        (document.AddForm.bdfee005.value==document.AddForm.cpfee005.value) ) {
       alert("The FROM and TO Sections Cannot be Identical.");
       document.AddForm.bdfee001.focus();
       return false;
     }
   }
   else {
 // Indentical Fields - Single Health Fund & Table
     if((document.AddForm.bdfee001.value==document.AddForm.cpfee001.value) &&
        (document.AddForm.bdfee002.value==document.AddForm.cpfee002.value) &&
        (document.AddForm.bdfee003.value==document.AddForm.cpfee003.value) &&
        (document.AddForm.bdfee004.value==document.AddForm.cpfee004.value) &&
        (document.AddForm.bdfee005.value==document.AddForm.cpfee005.value) ) {
       alert("The FROM and TO Sections Cannot be Identical.");
       document.AddForm.bdfee001.focus();
       return false;
     }
   }
 }
 // Admission Type
 if (isWhitespace(document.AddForm.bdfee004.value)) {
   if (!isWhitespace(document.AddForm.cpfee004.value)) {
     alert("Copy To Admission Type must be All.");
     document.AddForm.cpfee004.focus();
     return false;
   }
 }
 else {
   if (isWhitespace(document.AddForm.cpfee004.value)) {
     alert("Copy To Admission Type cannot be All.");
     document.AddForm.cpfee004.focus();
     return false;
   }
 }
 // Bed Type
 if (isWhitespace(document.AddForm.bdfee005.value)) {
   if (!isWhitespace(document.AddForm.cpfee005.value)) {
     alert("Copy To Bed Type must be All.");
     document.AddForm.cpfee005.focus();
     return false;
   }
 }
 else {
   if (isWhitespace(document.AddForm.cpfee005.value)) {
     alert("Copy To Bed Type cannot be All.");
     document.AddForm.cpfee005.focus();
     return false;
   }
 }
//
  AddForm.cancflag.value=1;
  AddForm.submit();
}
//
function Create() {
  if(confirm("Are You Sure You Want to Overwrite the New File")) {
    if(confirm("Do You Want to Start with a Copy of the Current Data")) {
      AddForm.copyflag.value="Y";
      AddForm.cancflag.value=1;
      AddForm.submit();
    } else {
      if(confirm("You Will Lose All Current Bed Fees When you Update" +
                 ".  Are You Sure")) {
        AddForm.copyflag.value="N";
        AddForm.cancflag.value=1;
        AddForm.submit();
      }
    }
  }
}
//
function ShowSpans(showoption) {
  if (showoption.value=="C") {
     BedOptions.innerHTML="";
  } else if (showoption.value=="E") {
     BedOptions.innerHTML=GlobalDelete.innerHTML;
  } else if (showoption.value=="H") {
     BedOptions.innerHTML=HfDuplication.innerHTML;
  } else if (showoption.value=="G") {
     BedOptions.innerHTML=GlobalUpdate.innerHTML;
  } else if (showoption.value=="F") {
     BedOptions.innerHTML=UpdateFees.innerHTML;
  } else {
     BedOptions.innerHTML="" }
}
function DayAll() {
  if(AddForm.bdfee013.checked==true) {
     AddForm.bdfee006.value="All"
     AddForm.bdfee006.disabled=true;
     AddForm.bdfee006.className="Readonly";
   } else {
     AddForm.bdfee006.value=""
     AddForm.bdfee006.disabled=false;
     AddForm.bdfee006.className="Integer";
   }
}
function SetCalculate() {
  if(AddForm.recalchg.checked==true) {
     AddForm.bfeedate.className="Mandatory NotFuturEdate";
     AddForm.bfeetime.className="Mandatory";
     AddForm.bfeedate.readOnly=false;
     AddForm.bfeetime.readOnly=false;
  } else {
     AddForm.bfeedate.className="Readonly";
     AddForm.bfeetime.className="Readonly";
     AddForm.bfeedate.readOnly=true;
     AddForm.bfeetime.readOnly=true;
  }
}

function clrHlthFnd(code1,name1,code2,name2) {
  code1.value="";
  name1.value="";
  code2.value="";
  name2.value="";
  code2.className="";
}
//
//  Set relevant fields for when All Health Fund checkbox is ticked 
//  and unticked  
//
function AllHFund() {
  if (document.AddForm.bdfee011.checked==true){
    document.AddForm.bdfee002.value="";
    document.AddForm.bdfee003.value="";
    document.AddForm.bdfee002.value="All";
    document.AddForm.bdfee003.value="All";
    document.AddForm.funddesc.value="All";
    document.AddForm.tabldesc.value="All";
    document.AddForm.bdfee002.disabled=true;
    document.AddForm.bdfee003.disabled=true;
    document.AddForm.bdfee002.className="readonly";
    document.AddForm.bdfee003.className="readonly";
    document.AddForm.hftsearch.disabled=true;
    document.AddForm.hftclr.disabled=true;
    document.AddForm.bdfee012.checked=false;
    document.AddForm.bdfee012.disabled=true;
  }
  else {
    document.AddForm.hftsearch.disabled=false;
    document.AddForm.hftclr.disabled=false;
    document.AddForm.bdfee002.disabled=false;
    document.AddForm.bdfee003.disabled=false;
    document.AddForm.bdfee002.className="";
    document.AddForm.bdfee003.className="";
    document.AddForm.bdfee002.value="";
    document.AddForm.bdfee003.value="";
    document.AddForm.funddesc.value="";
    document.AddForm.tabldesc.value="";
    document.AddForm.bdfee012.disabled=false;
  }
}
//
//  Set relevant fields for when All Health Fund checkbox is ticked or   
//  unticked in Copy To section.
//
function AllHFundTo() {
  if (document.AddForm.toallhf.checked==true){
    document.AddForm.cpfee002.value="";
    document.AddForm.cpfee003.value="";
    document.AddForm.cpfee002.value="All";
    document.AddForm.cpfee003.value="All";
    document.AddForm.cp_funddesc.value="All";
    document.AddForm.cp_tabldesc.value="All";
    document.AddForm.cpfee002.disabled=true;
    document.AddForm.cpfee003.disabled=true;
    document.AddForm.cpfee002.className="readonly";
    document.AddForm.cpfee003.className="readonly";
    document.AddForm.hftsearchto.disabled=true;
    document.AddForm.hftclrto.disabled=true;
    document.AddForm.toallhft.checked=false;
    document.AddForm.toallhft.disabled=true;
  }
  else {
    document.AddForm.hftsearchto.disabled=false;
    document.AddForm.hftclrto.disabled=false;
    document.AddForm.cpfee002.disabled=false;
    document.AddForm.cpfee003.disabled=false;
    document.AddForm.cpfee002.className="";
    document.AddForm.cpfee003.className="";
    document.AddForm.cpfee002.value="";
    document.AddForm.cpfee003.value="";
    document.AddForm.cp_funddesc.value="";
    document.AddForm.cp_tabldesc.value="";
    document.AddForm.toallhft.disabled=false;
  }
}
//
//   Validate and set relevant fields for when All Health Fund Table 
//   checkbox is ticked or unticked. 
//
function AllHFTable() {
  if(isWhitespace(document.AddForm.bdfee002.value)) {
     alert("Please enter Health Fund before clicking All table");
     document.AddForm.bdfee012.checked=false;
     document.AddForm.bdfee002.focus();
     return;
  }
  if (document.AddForm.bdfee012.checked==true){
    document.AddForm.hftsearch.disabled=true;
    document.AddForm.hftclr.disabled=true;
    document.AddForm.bdfee003.disabled=true;
    document.AddForm.bdfee003.className="readonly";
    document.AddForm.bdfee003.value="All";
    document.AddForm.tabldesc.value="All";
  }
  else {
    document.AddForm.hftsearch.disabled=false;
    document.AddForm.hftclr.disabled=false;
    document.AddForm.bdfee003.disabled=false;
    document.AddForm.bdfee003.className="Mandatory";
    document.AddForm.bdfee003.value="";
    document.AddForm.tabldesc.value="";
  }
}
//
//   Validate and set relevant fields for when All Health Fund Table 
//   checkbox is ticked or unticked in Copy To section. 
//
function AllHFTableTo() {
  if(isWhitespace(document.AddForm.cpfee002.value)) {
     alert("Please enter Health Fund before clicking All table");
     document.AddForm.toallhft.checked=false;
     document.AddForm.cpfee002.focus();
     return;
  }
  if (document.AddForm.toallhft.checked==true){
    document.AddForm.hftsearchto.disabled=true;
    document.AddForm.hftclrto.disabled=true;
    document.AddForm.cpfee003.disabled=true;
    document.AddForm.cpfee003.className="readonly";
    document.AddForm.cpfee003.value="All";
    document.AddForm.cp_tabldesc.value="All";
  }
  else {
    document.AddForm.hftsearchto.disabled=false;
    document.AddForm.hftclrto.disabled=false;
    document.AddForm.cpfee003.disabled=false;
    document.AddForm.cpfee003.className="Mandatory";
    document.AddForm.cpfee003.value="";
    document.AddForm.cp_tabldesc.value="";
  }
}
