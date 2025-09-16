//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb7718004.js
//
// Written   : 22/08/2003
//
// Function  : Functions Used in patweb7718004.html 
//
// Version   : 
//
// V10.01.01  09/02/2011 Peter Vela CAR 233048
//           New js for JHS. Cloned from patweb7718004.js
// V9.09.01  10/01/2008 J.Tan   CAR 159021
//           Added message to make sure the old file exists
// V9.03.01  27/04/2004 Lina Vo                
//           Mods to ProcessReport() and Create() to set 
//           cancflag=1 before submitting form. This will stop display of 
//           locked warning message.
// V9.03.00  22/08/2003  Lina Vo      CAR36528
//           Created Include
//========================================================================
// REPORT 2 - Global Theatre Fee Maintenance
//========================================================================
function ProcessReport() {
  if (validateMandatory(AddForm)) {
    if( (document.AddForm.updttype.value=="G")||  // Global Update of chg (New)
        (document.AddForm.updttype.value=="E") ){ // Global Deletion (New)   
      AddForm.cancflag.value=1;
      AddForm.submit(); 
    } 
    if(document.AddForm.updttype.value=="H"){   // HFT Duplication (New)   
      if(validateCopy()) {
        AddForm.cancflag.value=1;
        AddForm.submit(); 
      }
    }
    if(document.AddForm.updttype.value=="C") { // Create Theatre Fee new file
      Create();
    } 
    if(document.AddForm.updttype.value=="F") { // Update current file with new
      if(AddForm.newtfile.value=="0") {
        alert("The new Theatre Fee file is empty - No Theatre Fee updated")
        return;
      }
      if(confirm("Are you sure you want to copy the new file over the " +
          "current Theatre Fee file - Please make sure the old file exists")) {
          AddForm.cancflag.value=1;
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
      AddForm.cancflag.value=1;
      AddForm.submit();
    } else {
      if(confirm("You will lose All Current Theatre Fee when you Update" +
                 ".  Are You Sure?")) {
        AddForm.copyflag.value="N";
        AddForm.cancflag.value=1;
        AddForm.submit();
      }
    }
  }
}
//
function ShowSpans(showoption) {
  if ((showoption.value=="C") ||                   // Create New Item File
      (showoption.value=="F")) {                   // Update Curr with New File
     GlobalTFOptions1.innerHTML="";
     GlobalTFOptions2.innerHTML="";
     GlobalTFOptions3.innerHTML="";
     GlobalTFOptions4.innerHTML="";
  } else if (showoption.value=="G") {              // Update Charges (New file)
     GlobalTFOptions1.innerHTML=GlobUpdThtNewHeader.innerHTML;
     GlobalTFOptions2.innerHTML=MBSFee.innerHTML;
     GlobalTFOptions3.innerHTML=GlobUpdThtNewIncrease.innerHTML;
     GlobalTFOptions4.innerHTML="";
  } else if (showoption.value=="H") {              // Duplic. HFT (New File) 
     GlobalTFOptions1.innerHTML=GlobThtNewHFTDuplFrom.innerHTML;
     GlobalTFOptions2.innerHTML=MBSFee.innerHTML;
     GlobalTFOptions3.innerHTML=GlobThtNewHFTDuplTo.innerHTML;
     GlobalTFOptions4.innerHTML=MBSFeeDuplTo.innerHTML;
     showFeeClass();
     showFeeClassDuplTo();
  } else if (showoption.value=="E") {              // Delete (New File)      
     GlobalTFOptions1.innerHTML=GlobUpdThtNewHeader.innerHTML;
     GlobalTFOptions2.innerHTML=MBSFee.innerHTML;
     GlobalTFOptions3.innerHTML="";
     GlobalTFOptions4.innerHTML="";
  } else {
     GlobalTFOptions1.innerHTML="";                     
     GlobalTFOptions2.innerHTML=""; 
     GlobalTFOptions3.innerHTML=""; 
     GlobalTFOptions4.innerHTML="";}
}
//
//  
//
function showFeeClass() {
 thcflg="0";
 if (!isWhitespace(document.AddForm.opchg001.value.substr(22,6))) {
   thcflg=trim(document.AddForm.opchg001.value.substr(22,6));
 }
 if (document.AddForm.opchg024.checked==false) {
   if ( (!isWhitespace(document.AddForm.opchg002.value)) &&
        (!isWhitespace(document.AddForm.hfband.value)) ) {
     thcflg=trim(document.AddForm.hfband.value);
   }
 }
 if (thcflg==document.AddForm.oldband.value) { return; }
 if (thcflg==0) {
   document.getElementById('GlobalTFOptions2').innerHTML=document.getElementById('MBSFee').innerHTML;
 }
 else {
   document.getElementById('GlobalTFOptions2').innerHTML=document.getElementById('TheatreClass').innerHTML;
   document.AddForm.theaclass.value=thcflg
 }
 document.AddForm.oldband.value=thcflg;
}
//
// Determine if MBS fee or Theatre class for Copy To
//
function showFeeClassDuplTo() {
 thcflg1="0";
 if (!isWhitespace(document.AddForm.opchg019.value.substr(22,6))) {
   thcflg1=trim(document.AddForm.opchg019.value.substr(22,6));
 }
 if (document.AddForm.toallhf.checked==false) {
   if ( (!isWhitespace(document.AddForm.opchg020.value)) &&
        (!isWhitespace(document.AddForm.hfbandto.value)) ) {
     thcflg1=trim(document.AddForm.hfbandto.value);
   }
 }
 if (thcflg1==document.AddForm.oldbandto.value) { return; }
 if (thcflg1==0) {
   document.getElementById('GlobalTFOptions4').innerHTML=document.getElementById('MBSFeeDuplTo').innerHTML;
 }
 else {
   document.getElementById('GlobalTFOptions4').innerHTML=
            document.getElementById('TheatreClassDuplTo').innerHTML;
   document.AddForm.theaclassto.value=thcflg1;
 }
 document.AddForm.oldbandto.value=thcflg1;
}
//
// Validate Global Copy (HF Duplication)
//
function validateCopy() {
 // Claim Code
 if (isWhitespace(document.AddForm.opchg001.value)) {
   if (!isWhitespace(document.AddForm.opchg019.value)) {
     alert("Copy To Claim Code must be All.");
     document.AddForm.opchg019.focus();
     return false;
   }
 }
 else {
   if (isWhitespace(document.AddForm.opchg019.value)) {
     alert("Copy To Claim Code cannot be All.");
     document.AddForm.opchg019.focus();
     return false;
   }
 }
 // Health Fund
 if (document.AddForm.opchg024.checked==true) {
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
 if (document.AddForm.opchg025.checked==true) {
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
 // MBS Fee/Theatre Classification
 if (isWhitespace(document.AddForm.opchg005.value)) {
   if (!isWhitespace(document.AddForm.opchg023.value)) {
     alert("Copy To MBS Fee/Theatre Class. must be All.");
     document.AddForm.opchg023.focus();
     return false;
   }
 }
 else {
   if (isWhitespace(document.AddForm.opchg023.value)) {
     alert("Copy To MBS Fee/Theatre Class cannot be All.");
     document.AddForm.opchg023.focus();
     return false;
   }
 }
 // All Fields
 if( (isWhitespace(document.AddForm.opchg001.value)) &&
     (document.AddForm.opchg024.checked==true) &&
     (isWhitespace(document.AddForm.opchg005.value)) &&
     (isWhitespace(document.AddForm.opchg019.value)) &&
     (document.AddForm.toallhf.checked==true) &&
     (isWhitespace(document.AddForm.opchg023.value)) ) {
     alert("At Least One of the Fields Must Not be ALL.");
     document.AddForm.opchg001.focus();
     return false;
 }
 // Indentical Fields - All Health Fund
 if (document.AddForm.opchg024.checked==true) {
   if((document.AddForm.opchg001.value==document.AddForm.opchg019.value) &&
      (document.AddForm.opchg004.value==document.AddForm.opchg022.value) &&
      (document.AddForm.opchg005.value==document.AddForm.opchg023.value) ) {
     alert("The FROM and TO Sections Cannot be Identical.");
     document.AddForm.opchg001.focus();
     return false;
   }
 }
 else {
 // Indentical Fields - All Health Fund Table
   if (document.AddForm.opchg025.checked==true) {
     if((document.AddForm.opchg001.value==document.AddForm.opchg019.value) &&
        (document.AddForm.opchg002.value==document.AddForm.opchg020.value) &&
        (document.AddForm.opchg004.value==document.AddForm.opchg022.value) &&
        (document.AddForm.opchg005.value==document.AddForm.opchg023.value) ) {
       alert("The FROM and TO Sections Cannot be Identical.");
       document.AddForm.opchg001.focus();
       return false;
     }
   }
   else {
 // Indentical Fields - Single Health Fund & Table
     if((document.AddForm.opchg001.value==document.AddForm.opchg019.value) &&
        (document.AddForm.opchg002.value==document.AddForm.opchg020.value) &&
        (document.AddForm.opchg027.value==document.AddForm.opchg021.value) &&
        (document.AddForm.opchg004.value==document.AddForm.opchg022.value) &&
        (document.AddForm.opchg005.value==document.AddForm.opchg023.value) ) {
       alert("The FROM and TO Sections Cannot be Identical.");
       document.AddForm.opchg001.focus();
       return false;
     }
   }
 }
 // Different Theatre Charging Fields
 thcflg="0";  // Copy From
 if (!isWhitespace(document.AddForm.opchg001.value.substr(22,6))) {
   thcflg=trim(document.AddForm.opchg001.value.substr(22,6));
 }
 thcflg1="0"; // Copy To
 if (!isWhitespace(document.AddForm.opchg019.value.substr(22,6))) {
   thcflg1=trim(document.AddForm.opchg019.value.substr(22,6));
 }
 if( (document.AddForm.opchg024.checked==false) &&
     (!isWhitespace(document.AddForm.opchg002.value)) ) {
   thcflg=document.AddForm.hfband.value;
   thcflg1=document.AddForm.hfbandto.value;
 }
 if (thcflg!=thcflg1) {
   alert("FROM and To must have the same Theatre Charging.");
   document.AddForm.opchg001.focus();
   return false;
 }
 return true;
}
//
//  Set relevant fields for when All Health Fund checkbox is ticked 
//  and unticked  
//
function AllHFund() {
  if (document.AddForm.opchg024.checked==true){
    document.AddForm.opchg002.value="";
    document.AddForm.opchg027.value="";
    showFeeClass();
    document.AddForm.opchg002.value="All";
    document.AddForm.opchg027.value="All";
    document.AddForm.funddesc.value="All";
    document.AddForm.tabldesc.value="All";
    document.AddForm.opchg002.disabled=true;
    document.AddForm.opchg027.disabled=true;
    document.AddForm.opchg002.className="readonly";
    document.AddForm.opchg027.className="readonly";
    document.AddForm.hftsearch.disabled=true;
    document.AddForm.hftclr.disabled=true;
    document.AddForm.opchg025.checked=false;
    document.AddForm.opchg025.disabled=true;
  }
  else {
    document.AddForm.hftsearch.disabled=false;
    document.AddForm.hftclr.disabled=false;
    document.AddForm.opchg002.disabled=false;
    document.AddForm.opchg027.disabled=false;
    document.AddForm.opchg002.className="";
    document.AddForm.opchg027.className="";
    document.AddForm.opchg002.value="";
    document.AddForm.opchg027.value="";
    document.AddForm.funddesc.value="";
    document.AddForm.tabldesc.value="";
    document.AddForm.opchg025.disabled=false;
  }
}
//
//  Set relevant fields for when All Health Fund checkbox is ticked or   
//  unticked in Copy To section.
//
function AllHFundTo() {
  if (document.AddForm.toallhf.checked==true){
    document.AddForm.opchg020.value="";
    document.AddForm.opchg021.value="";
    showFeeClassDuplTo();
    document.AddForm.opchg020.value="All";
    document.AddForm.opchg021.value="All";
    document.AddForm.funddescto.value="All";
    document.AddForm.tabldescto.value="All";
    document.AddForm.opchg020.disabled=true;
    document.AddForm.opchg021.disabled=true;
    document.AddForm.opchg020.className="readonly";
    document.AddForm.opchg021.className="readonly";
    document.AddForm.hftsearchto.disabled=true;
    document.AddForm.hftclrto.disabled=true;
    document.AddForm.toallhft.checked=false;
    document.AddForm.toallhft.disabled=true;
  }
  else {
    document.AddForm.hftsearchto.disabled=false;
    document.AddForm.hftclrto.disabled=false;
    document.AddForm.opchg020.disabled=false;
    document.AddForm.opchg021.disabled=false;
    document.AddForm.opchg020.className="";
    document.AddForm.opchg021.className="";
    document.AddForm.opchg020.value="";
    document.AddForm.opchg021.value="";
    document.AddForm.funddescto.value="";
    document.AddForm.tabldescto.value="";
    document.AddForm.toallhft.disabled=false;
  }
}
//
//   Validate and set relevant fields for when All Health Fund Table 
//   checkbox is ticked or unticked. 
//
function AllHFTable() {
  if(isWhitespace(document.AddForm.opchg002.value)) {
     alert("Please enter Health Fund before clicking All table");
     document.AddForm.opchg025.checked=false;
     document.AddForm.opchg002.focus();
     return;
  }
  if (document.AddForm.opchg025.checked==true){
    document.AddForm.hftsearch.disabled=true;
    document.AddForm.hftclr.disabled=true;
    document.AddForm.opchg027.disabled=true;
    document.AddForm.opchg027.className="readonly";
    document.AddForm.opchg027.value="All";
    document.AddForm.tabldesc.value="All";
  }
  else {
    document.AddForm.hftsearch.disabled=false;
    document.AddForm.hftclr.disabled=false;
    document.AddForm.opchg027.disabled=false;
    document.AddForm.opchg027.className="Mandatory";
    document.AddForm.opchg027.value="";
    document.AddForm.tabldesc.value="";
  }
}
//
//   Validate and set relevant fields for when All Health Fund Table 
//   checkbox is ticked or unticked in Copy To section. 
//
function AllHFTableTo() {
  if(isWhitespace(document.AddForm.opchg020.value)) {
     alert("Please enter Health Fund before clicking All table");
     document.AddForm.toallhft.checked=false;
     document.AddForm.opchg020.focus();
     return;
  }
  if (document.AddForm.toallhft.checked==true){
    document.AddForm.hftsearchto.disabled=true;
    document.AddForm.hftclrto.disabled=true;
    document.AddForm.opchg021.disabled=true;
    document.AddForm.opchg021.className="readonly";
    document.AddForm.opchg021.value="All";
    document.AddForm.tabldescto.value="All";
  }
  else {
    document.AddForm.hftsearchto.disabled=false;
    document.AddForm.hftclrto.disabled=false;
    document.AddForm.opchg021.disabled=false;
    document.AddForm.opchg021.className="Mandatory";
    document.AddForm.opchg021.value="";
    document.AddForm.tabldescto.value="";
  }
}
