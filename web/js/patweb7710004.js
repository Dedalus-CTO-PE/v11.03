//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb7710004.js
//
// Written   : 17/11/2006
//
// Function  : Standard Functions Used in patweb89 templates
//
// Version   : 
//
//V11.00.01 02/02/2021  J.Tan         TSK 0902415
//          Fixed CheckDuplication()     
// V9.08.00 17/11/2006  Jill Habasque CAR 119985
//          Created Include              
//========================================================================
// REPORT 10 - NZ Private Bed Fees 
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
      if(confirm("Confirm copy of new data to the existing bed fee file")) {
          AddForm.cancflag.value=1;
          AddForm.submit();
      }
    } 
  }
}
function SetAllHosp() {
  if (AddForm.nzbfe001.selectedIndex==1) {
    AddForm.cpnzb001.selectedIndex=1;
    AddForm.cpnzb001.disabled=true;
  } else {
    AddForm.cpnzb001.selectedIndex=0;
    AddForm.cpnzb001.disabled=false;
  }
}
function CheckHosp() {
  if (AddForm.nzbfe001.selectedIndex!=1 && AddForm.cpnzb001.selectedIndex==1 ) {
    alert("Copy To - Hospital cannot be set to All");
    AddForm.cpnzb001.selectedIndex=0;
    return false;
  }
  return true;
}
//
function CheckDuplication() {
 // Claim Type
 if (isWhitespace(document.AddForm.nzbfe002.value)) {
   if (!isWhitespace(document.AddForm.cpnzb002.value)) {
     alert("Copy To Claim Type must be All.");
     document.AddForm.cpfee001.focus();
     return false;
   }
 }
 else {
   if (isWhitespace(document.AddForm.cpnzb002.value)) {
     alert("Copy To Claim Type cannot be All.");
     document.AddForm.cpnzb002.focus();
     return false;
   }
 }
 // Health Fund
 if (document.AddForm.nzbfe012.checked==true) {
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
 if (document.AddForm.nzbfe013.checked==true) {
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
 if( (document.AddForm.nzbfe001.value==document.AddForm.cpnzb001.value) &&
     (isWhitespace(document.AddForm.nzbfe002.value)) &&
     (document.AddForm.nzbfe013.checked==true) &&
     (isWhitespace(document.AddForm.nzbfe003.value)) &&
     (isWhitespace(document.AddForm.nzbfe006.value)) &&
     (isWhitespace(document.AddForm.cpnzb002.value)) &&
     (document.AddForm.toallhf.checked==true) &&
     (isWhitespace(document.AddForm.cpnzb005.value)) &&
     (isWhitespace(document.AddForm.cpnzb006.value)) ) {
     alert("At Least One of the Fields Must Not be ALL.");
     document.AddForm.nzbfe002.focus();
     return false;
 }
 // Indentical Fields - All Health Fund
 if((document.AddForm.nzbfe001.value==document.AddForm.cpnzb001.value) &&
    (document.AddForm.nzbfe012.checked==true)) {
   if((document.AddForm.nzbfe001.value==document.AddForm.cpnzb001.value) &&
      (document.AddForm.nzbfe002.value==document.AddForm.cpnzb002.value) &&
      (document.AddForm.nzbfe005.value==document.AddForm.cpnzb005.value) &&
      (document.AddForm.nzbfe006.value==document.AddForm.cpnzb006.value) ) {
     alert("The FROM and TO Sections Cannot be Identical.");
     document.AddForm.nzbfe002.focus();
     return false;
   }
 }
 else {
 // Indentical Fields - All Health Fund Table
 if((document.AddForm.nzbfe001.value==document.AddForm.cpnzb001.value) &&
      (document.AddForm.nzbfe003.checked==true)) {
     if((document.AddForm.nzbfe002.value==document.AddForm.cpnzb002.value) &&
        (document.AddForm.nzbfe003.value==document.AddForm.cpnzb003.value) &&
        (document.AddForm.nzbfe005.value==document.AddForm.cpnzb005.value) &&
        (document.AddForm.nzbfe006.value==document.AddForm.cpnzb006.value) ) {
       alert("The FROM and TO Sections Cannot be Identical.");
       document.AddForm.nzbfe002.focus();
       return false;
     }
   }
   else {
 // Indentical Fields - Single Health Fund & Table
 if((document.AddForm.nzbfe001.value==document.AddForm.cpnzb001.value) &&
        (document.AddForm.nzbfe002.value==document.AddForm.cpnzb002.value) &&
        (document.AddForm.nzbfe003.value==document.AddForm.cpnzb003.value) &&
        (document.AddForm.nzbfe004.value==document.AddForm.cpnzb004.value) &&
        (document.AddForm.nzbfe005.value==document.AddForm.cpnzb005.value) &&
        (document.AddForm.nzbfe006.value==document.AddForm.cpnzb006.value) ) {
       alert("The FROM and TO Sections Cannot be Identical.");
       document.AddForm.nzbfe002.focus();
       return false;
     }
   }
 }
 // Admission Type
 if (isWhitespace(document.AddForm.nzbfe005.value)) {
   if (!isWhitespace(document.AddForm.cpnzb005.value)) {
     alert("Copy To Admission Type must be All.");
     document.AddForm.cpnzb005.focus();
     return false;
   }
 }
 else {
   if (isWhitespace(document.AddForm.cpnzb005.value)) {
     alert("Copy To Admission Type cannot be All.");
     document.AddForm.cpnzb005.focus();
     return false;
   }
 }
 // Bed Type
 if (isWhitespace(document.AddForm.nzbfe006.value)) {
   if (!isWhitespace(document.AddForm.cpnzb006.value)) {
     alert("Copy To Bed Type must be All.");
     document.AddForm.cpnzb006.focus();
     return false;
   }
 }
 else {
   if (isWhitespace(document.AddForm.cpbfe006.value)) {
     alert("Copy To Bed Type cannot be All.");
     document.AddForm.cpbfe006.focus();
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
    if(document.AddForm.ibcnmhos.value=="1") {
      BedOptions.innerHTML=GlobalDeleteHosp.innerHTML;
    } else {
      BedOptions.innerHTML=GlobalDelete.innerHTML;}
  } else if (showoption.value=="H") {
    if(document.AddForm.ibcnmhos.value=="1") {
      BedOptions.innerHTML=HfDuplicationHosp.innerHTML;
    } else {
      BedOptions.innerHTML=HfDuplication.innerHTML;}
  } else if (showoption.value=="G") {
    if(document.AddForm.ibcnmhos.value=="1") {
     BedOptions.innerHTML=GlobalUpdateHosp.innerHTML;
    } else {
     BedOptions.innerHTML=GlobalUpdate.innerHTML;}
  } else if (showoption.value=="F") {
    if(document.AddForm.ibcnmhos.value=="1") {
//      BedOptions.innerHTML=UpdateFees.innerHTML;
    } else {
//     BedOptions.innerHTML=UpdateFees.innerHTML;
    }
  } else {
     BedOptions.innerHTML="" }
}
function DayAll() {
  if(AddForm.nzbfe014.checked==true) {
     AddForm.nzbfe007.value="All"
     AddForm.nzbfe007.disabled=true;
     AddForm.nzbfe007.className="Readonly";
   } else {
     AddForm.nzbfe007.value=""
     AddForm.nzbfe007.disabled=false;
     AddForm.nzbfe007.className="Integer";
   }
}
function SetCalculate() {
  if(AddForm.recalchg.checked==true) {
     AddForm.bfeedate.className="Mandatory";
     AddForm.bfeetime.className="Mandatory";
     AddForm.fromdate.className="Mandatory";
     AddForm.bfeedate.readOnly=false;
     AddForm.bfeetime.readOnly=false;
     AddForm.fromdate.readOnly=false;
  } else {
     AddForm.bfeedate.className="Readonly";
     AddForm.bfeetime.className="Readonly";
     AddForm.fromdate.className="Readonly";
     AddForm.bfeedate.readOnly=true;
     AddForm.bfeetime.readOnly=true;
     AddForm.fromdate.readOnly=true;
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
  if (document.AddForm.nzbfe012.checked==true){
    document.AddForm.nzbfe003.value="";
    document.AddForm.nzbfe004.value="";
    document.AddForm.nzbfe003.value="All";
    document.AddForm.nzbfe004.value="All";
    document.AddForm.funddesc.value="All";
    document.AddForm.tabldesc.value="All";
    document.AddForm.nzbfe003.disabled=true;
    document.AddForm.nzbfe004.disabled=true;
    document.AddForm.nzbfe003.className="readonly";
    document.AddForm.nzbfe004.className="readonly";
    document.AddForm.hftsearch.disabled=true;
    document.AddForm.hftclr.disabled=true;
    document.AddForm.nzbfe013.checked=false;
    document.AddForm.nzbfe013.disabled=true;
  }
  else {
    document.AddForm.hftsearch.disabled=false;
    document.AddForm.hftclr.disabled=false;
    document.AddForm.nzbfe003.disabled=false;
    document.AddForm.nzbfe004.disabled=false;
    document.AddForm.nzbfe003.className="";
    document.AddForm.nzbfe004.className="";
    document.AddForm.nzbfe003.value="";
    document.AddForm.nzbfe004.value="";
    document.AddForm.funddesc.value="";
    document.AddForm.tabldesc.value="";
    document.AddForm.nzbfe013.disabled=false;
  }
}
//
//  Set relevant fields for when All Health Fund checkbox is ticked or   
//  unticked in Copy To section.
//
function AllHFundTo() {
  if (document.AddForm.toallhf.checked==true){
    document.AddForm.cpnzb003.value="";
    document.AddForm.cpnzb004.value="";
    document.AddForm.cpnzb003.value="All";
    document.AddForm.cpnzb004.value="All";
    document.AddForm.cp_funddesc.value="All";
    document.AddForm.cp_tabldesc.value="All";
    document.AddForm.cpnzb003.disabled=true;
    document.AddForm.cpnzb004.disabled=true;
    document.AddForm.cpnzb003.className="readonly";
    document.AddForm.cpnzb004.className="readonly";
    document.AddForm.hftsearchto.disabled=true;
    document.AddForm.hftclrto.disabled=true;
    document.AddForm.toallhft.checked=false;
    document.AddForm.toallhft.disabled=true;
  }
  else {
    document.AddForm.hftsearchto.disabled=false;
    document.AddForm.hftclrto.disabled=false;
    document.AddForm.cpnzb003.disabled=false;
    document.AddForm.cpnzb004.disabled=false;
    document.AddForm.cpnzb003.className="";
    document.AddForm.cpnzb004.className="";
    document.AddForm.cpnzb003.value="";
    document.AddForm.cpnzb004.value="";
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
  if(isWhitespace(document.AddForm.nzbfe003.value)) {
     alert("Please enter Health Fund before clicking All table");
     document.AddForm.nzbfe013.checked=false;
     document.AddForm.nzbfe003.focus();
     return;
  }
  if (document.AddForm.nzbfe013.checked==true){
    document.AddForm.hftsearch.disabled=true;
    document.AddForm.hftclr.disabled=true;
    document.AddForm.nzbfe004.disabled=true;
    document.AddForm.nzbfe004.className="readonly";
    document.AddForm.nzbfe004.value="All";
    document.AddForm.tabldesc.value="All";
  }
  else {
    document.AddForm.hftsearch.disabled=false;
    document.AddForm.hftclr.disabled=false;
    document.AddForm.nzbfe004.disabled=false;
    document.AddForm.nzbfe004.className="Mandatory";
    document.AddForm.nzbfe004.value="";
    document.AddForm.tabldesc.value="";
  }
}
//
//   Validate and set relevant fields for when All Health Fund Table 
//   checkbox is ticked or unticked in Copy To section. 
//
function AllHFTableTo() {
  if(isWhitespace(document.AddForm.cpnzb003.value)) {
     alert("Please enter Health Fund before clicking All table");
     document.AddForm.toallhft.checked=false;
     document.AddForm.cpnzb003.focus();
     return;
  }
  if (document.AddForm.toallhft.checked==true){
    document.AddForm.hftsearchto.disabled=true;
    document.AddForm.hftclrto.disabled=true;
    document.AddForm.cpnzb004.disabled=true;
    document.AddForm.cpnzb004.className="readonly";
    document.AddForm.cpnzb004.value="All";
    document.AddForm.cp_tabldesc.value="All";
  }
  else {
    document.AddForm.hftsearchto.disabled=false;
    document.AddForm.hftclrto.disabled=false;
    document.AddForm.cpnzb004.disabled=false;
    document.AddForm.cpnzb004.className="Mandatory";
    document.AddForm.cpnzb004.value="";
    document.AddForm.cp_tabldesc.value="";
  }
}
