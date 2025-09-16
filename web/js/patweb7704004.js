//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb7704004.js
//
// Written   : 04/09/2003
//
// Function  : Functions Used in patweb7704004.html 
//
// Version   : 
//
// V10.01.01 30/11/2010  Mike Laming   CAR 233046
//           Mods to use "Table Type" in AllHFTable() - (replaces "Health Fund
//           Table")
// V9.09.01  10/01/2008 J.Tan   CAR 159021
//           Added message to make sure the old file exists
// V9.07.01  04/07/2006 J.Tan          CAR 103365
//           Added Global update to Misc.charge
// V9.04.00  20/12/2004 Ebon Clements  CAR 55406
//           Added hospital to DefMiscChargeSearchFrame
// V9.03.02  24/06/2004 Ebon Clements  CAR 50746
//           Added cgis mschg027 and mschg028 for all misc charge codes
// V9.03.02  24/06/2004 Ebon Clements  CAR 50746
//           Added cgis mschg027 and mschg028 for all misc charge codes
// V9.03.01  27/04/2004 Lina Vo                
//           Mods to ProcessReport(), Delete() & Create() to set 
//           cancflag=1 before submitting form. This will stop display of 
//           locked warning message.
// V9.03.00  04/09/2003  Lina Vo      CAR 36486
//           Created Include
//========================================================================
// REPORT 4 - Global Miscellaneous Charges Maintenance
//========================================================================
function ProcessReport() {
  if (validateMandatory(AddForm)) {
    if(document.AddForm.updttype.value=="G")  { // Generate default misc.  
      AddForm.cancflag.value=1;
      AddForm.submit();
    } 
    if(document.AddForm.updttype.value=="E")  { // Global Deletion (New)   
      Delete();
    } 
    if(document.AddForm.updttype.value=="P")  { // Global Update (New)   
      if(checkMisc()) {
        AddForm.cancflag.value=1;
        if (AddForm.mschg027.checked==true) {
            AddForm.mschg004.value="";
        }
        AddForm.submit();
      }
    } 
    if(document.AddForm.updttype.value=="H"){   // HFT Duplication (New)   
      if(validateCopy()) {
        if(checkMisc()) {
          AddForm.cancflag.value=1;
          if (AddForm.mschg027.checked==true) {
             AddForm.mschg004.value="";
          }
          if (AddForm.mschg028.checked==true) {
             AddForm.mschg024.value="";
          }
          AddForm.submit(); 
        }
      }
    }
    if(document.AddForm.updttype.value=="C") { // Create Misc Charge new file
      Create();
    } 
    if(document.AddForm.updttype.value=="F") { // Update current file with new
      if(AddForm.oldmfile.value=="0") {
        alert("The Old Miscellaneous Charges file (oldmchgf) does not exist.\n"+
              "Please create file before continuing.")
        return;
      }
      if(AddForm.newmfile.value=="0") {
        alert("The new Misc Charges file is empty - No Misc Charge updated")
        return;
      }
      if(confirm("Are you sure you want to copy the new file over the " +
          "current Misc Charges file - Please make sure the old file exists")) {
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
function Delete() {
  if((isWhitespace(AddForm.mschg001.value))  &&
     (AddForm.mschg025.checked==true) && 
     (AddForm.mschg027.checked==true) ) {
    if(confirm("Warning: This Combination Will Remove ALL Records in the "+
               "New File !")) {
      AddForm.delallfg.value=1;
      AddForm.cancflag.value=1;
      AddForm.mschg004.value="";
      AddForm.submit();
    } 
  }
  else {
      AddForm.delallfg.value=0;
      if (checkMisc()) {
        AddForm.cancflag.value=1;
        if (AddForm.mschg027.checked==true) {
           AddForm.mschg004.value="";
        }
        AddForm.submit();
      }
  }
}
function checkMisc() {
  if((!isWhitespace(document.AddForm.mschg001.value)) &&
     (document.AddForm.mschg025.checked==false) &&
     (document.AddForm.mschg026.checked==false) &&
     (document.AddForm.mschg027.checked==false) &&
     (!isWhitespace(document.AddForm.mschg004.value)) ){
     if (validateMisc(document.AddForm.mschg001,document.AddForm.mschg002,
                      document.AddForm.mschg003,document.AddForm.mschg004,
                      document.AddForm.miscdesc)) {
         return true;
     }
     else { 
         document.AddForm.mschg004.focus();
         return false; 
     }
  }
  else { return true; }
}
function ShowSpans(showoption) {
  if ((showoption.value=="C") ||                   // Create New Item File
      (showoption.value=="F") ||                   // Update Curr with New File
      (showoption.value=="G")) {                   // Gen. Default Keyword File
     GlobalTFOptions1.innerHTML="";
     GlobalTFOptions2.innerHTML="";
  } else if (showoption.value=="H") {              // Duplic. HFT (New File) 
     GlobalTFOptions1.innerHTML=GlobMscNewHFTDuplFrom.innerHTML;
     GlobalTFOptions2.innerHTML=GlobMscNewHFTDuplTo.innerHTML;
  } else if (showoption.value=="E") {              // Delete (New File)      
     GlobalTFOptions1.innerHTML=GlobDelMscNewHeader.innerHTML;
     GlobalTFOptions2.innerHTML="";
  } else if (showoption.value=="P") {              // Global Update (New File)
     GlobalTFOptions1.innerHTML=GlobUpdMscNewHeader.innerHTML;
     GlobalTFOptions2.innerHTML="";
  } else {
     GlobalTFOptions1.innerHTML="";                     
     GlobalTFOptions2.innerHTML="";}
}
//
// Validate Global Copy (HF Duplication)
//
function validateCopy() {
 // Claim Code
 if (isWhitespace(document.AddForm.mschg001.value)) {
   if (!isWhitespace(document.AddForm.mschg021.value)) {
     alert("Copy To Claim Code must be All.");
     document.AddForm.mschg021.focus();
     return false;
   }
 }
 else {
   if (isWhitespace(document.AddForm.mschg021.value)) {
     alert("Copy To Claim Code cannot be All.");
     document.AddForm.mschg021.focus();
     return false;
   }
 }
 // Health Fund
 if (document.AddForm.mschg025.checked==true) {
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
 if (document.AddForm.mschg026.checked==true) {
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
 // Misc. Charge Code
 if (document.AddForm.mschg027.checked==true) {
   if (document.AddForm.mschg028.checked==false) {
     alert("Copy To Misc. Charge Code must be All.");
     document.AddForm.mschg028.focus();
     return false;
   }
 }
 else {
   if (document.AddForm.mschg028.checked==true) {
     alert("Copy To Misc. Charge Code cannot be All.");
     document.AddForm.mschg028.focus();
     return false;
   }
 }
 // All Fields
 if( (isWhitespace(document.AddForm.mschg001.value)) &&
     (document.AddForm.mschg025.checked==true) &&
     (document.AddForm.mschg027.checked==true) &&
     (isWhitespace(document.AddForm.mschg021.value)) &&
     (document.AddForm.toallhf.checked==true) &&
     (document.AddForm.mschg028.checked==true) ) {
     alert("At Least One of the Fields Must Not be ALL.");
     document.AddForm.mschg001.focus();
     return false;
 }
 // Indentical Fields - All Health Fund
 if (document.AddForm.mschg025.checked==true) {
   if((document.AddForm.mschg001.value==document.AddForm.mschg021.value) &&
      (document.AddForm.mschg004.value==document.AddForm.mschg024.value) ) {
     alert("The FROM and TO Sections Cannot be Identical.");
     document.AddForm.mschg001.focus();
     return false;
   }
 }
 else {
 // Indentical Fields - All Health Fund Table
   if (document.AddForm.mschg026.checked==true) {
     if((document.AddForm.mschg001.value==document.AddForm.mschg021.value) &&
        (document.AddForm.mschg002.value==document.AddForm.mschg022.value) &&
        (document.AddForm.mschg004.value==document.AddForm.mschg024.value) ) {
       alert("The FROM and TO Sections Cannot be Identical.");
       document.AddForm.mschg001.focus();
       return false;
     }
   }
   else {
 // Indentical Fields - Single Health Fund & Table
     if((document.AddForm.mschg001.value==document.AddForm.mschg021.value) &&
        (document.AddForm.mschg002.value==document.AddForm.mschg022.value) &&
        (document.AddForm.mschg003.value==document.AddForm.mschg023.value) &&
        (document.AddForm.mschg004.value==document.AddForm.mschg024.value) ) {
       alert("The FROM and TO Sections Cannot be Identical.");
       document.AddForm.mschg001.focus();
       return false;
     }
   }
 }
 return true;
}
//
//  Set relevant fields for when All Health Fund checkbox is ticked 
//  and unticked  
//
function AllHFund() {
  if (document.AddForm.mschg025.checked==true){
    document.AddForm.mschg002.value="All";
    document.AddForm.mschg003.value="All";
    document.AddForm.funddesc.value="All";
    document.AddForm.tabldesc.value="All";
    document.AddForm.mschg002.disabled=true;
    document.AddForm.mschg003.disabled=true;
    document.AddForm.mschg002.className="Readonly";
    document.AddForm.mschg003.className="Readonly";
    document.AddForm.hftsearch.disabled=true;
    document.AddForm.hftclr.disabled=true;
    document.AddForm.mschg026.checked=false;
    document.AddForm.mschg026.disabled=true;
  }
  else {
    document.AddForm.hftsearch.disabled=false;
    document.AddForm.hftclr.disabled=false;
    document.AddForm.mschg002.disabled=false;
    document.AddForm.mschg003.disabled=false;
    document.AddForm.mschg002.className="";
    document.AddForm.mschg003.className="";
    document.AddForm.mschg002.value="";
    document.AddForm.mschg003.value="";
    document.AddForm.funddesc.value="";
    document.AddForm.tabldesc.value="";
    document.AddForm.mschg026.disabled=false;
  }
}
//
//  Set relevant fields for when All Health Fund checkbox is ticked or   
//  unticked in Copy To section.
//
function AllHFundTo() {
  if (document.AddForm.toallhf.checked==true){
    document.AddForm.mschg022.value="All";
    document.AddForm.mschg023.value="All";
    document.AddForm.funddescto.value="All";
    document.AddForm.tabldescto.value="All";
    document.AddForm.mschg022.disabled=true;
    document.AddForm.mschg023.disabled=true;
    document.AddForm.mschg022.className="readonly";
    document.AddForm.mschg023.className="readonly";
    document.AddForm.hftsearchto.disabled=true;
    document.AddForm.hftclrto.disabled=true;
    document.AddForm.toallhft.checked=false;
    document.AddForm.toallhft.disabled=true;
  }
  else {
    document.AddForm.hftsearchto.disabled=false;
    document.AddForm.hftclrto.disabled=false;
    document.AddForm.mschg022.disabled=false;
    document.AddForm.mschg023.disabled=false;
    document.AddForm.mschg022.className="";
    document.AddForm.mschg023.className="";
    document.AddForm.mschg022.value="";
    document.AddForm.mschg023.value="";
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
  if(isWhitespace(document.AddForm.mschg002.value)) {
     alert("Please enter Health Fund before clicking All table");
     document.AddForm.mschg026.checked=false;
     document.AddForm.mschg002.focus();
     return;
  }
  if (document.AddForm.mschg026.checked==true){
    document.AddForm.hftsearch.disabled=true;
    document.AddForm.hftclr.disabled=true;
    document.AddForm.mschg034.disabled=true;
    document.AddForm.mschg034.className="Readonly";
    document.AddForm.mschg034.value="All";
    document.AddForm.tabldesc.value="All";
  }
  else {
    document.AddForm.hftsearch.disabled=false;
    document.AddForm.hftclr.disabled=false;
    document.AddForm.mschg034.disabled=false;
    document.AddForm.mschg034.className="Mandatory";
    document.AddForm.mschg034.value="";
    document.AddForm.tabldesc.value="";
  }
}
//
//   Validate and set relevant fields for when All Health Fund Table 
//   checkbox is ticked or unticked in Copy To section. 
//
function AllHFTableTo() {
  if(isWhitespace(document.AddForm.mschg022.value)) {
     alert("Please enter Health Fund before clicking All table");
     document.AddForm.toallhft.checked=false;
     document.AddForm.mschg022.focus();
     return;
  }
  if (document.AddForm.toallhft.checked==true){
    document.AddForm.hftsearchto.disabled=true;
    document.AddForm.hftclrto.disabled=true;
    document.AddForm.mschg023.disabled=true;
    document.AddForm.mschg023.className="Readonly";
    document.AddForm.mschg023.value="All";
    document.AddForm.tabldescto.value="All";
  }
  else {
    document.AddForm.hftsearchto.disabled=false;
    document.AddForm.hftclrto.disabled=false;
    document.AddForm.mschg023.disabled=false;
    document.AddForm.mschg023.className="Mandatory";
    document.AddForm.mschg023.value="";
    document.AddForm.tabldescto.value="";
  }
}
function validateMisc(clmcode,hfund,hftab,mcharge,ReturnName) {
//
  ReturnFunction="";
  ReturnName="";
  for (var i=5; i < validateMisc.arguments.length; i++) {
    if (typeof(validateMisc.arguments[i]) == 'function') {
      ReturnFunction=validateMisc.arguments[i] }
    else {
      validateMisc.arguments[i].value=""; }  }
//
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=49" +
                    "&mschg001=" + clmcode.value.replace(/ /g,"+") +
                    "&mschg002=" + hfund.value.replace(/ /g,"+") +
                    "&mschg003=" + hftab.value.replace(/ /g,"+") +
                    "&mschg004=" + mcharge.value.replace(/ /g,"+") 
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=5; i < validateMisc.arguments.length; i++) {
       if (typeof(validateMisc.arguments[i]) != 'function') {
         j++
         validateMisc.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() }
    return true;
    }
  else {
    return false;
   }
}
function MiscSearch() {
// Set default claim code
  for (var i =0 ; i < AddForm.mschg001.length; i++) {
    if (AddForm.mschg001.options[i].value.substr(0,3)==AddForm.ptcndclm.value) {
       AddForm.mschg001.selectedIndex=i } 
  }
// Set default health fund & table - Blank
  AddForm.mschg002.value="";
  AddForm.funddesc.value="";
  AddForm.mschg003.value="";
  AddForm.tabldesc.value="";
  if (AddForm.mschg025.checked==true) {
    AddForm.mschg025.checked=false;
    AllHFund();
  }
  if (AddForm.mschg026.checked==true) {
    AddForm.mschg026.checked=false;
    AllHFTable();
  }
// Set ReturnNoBlur variable so updateParent skips execution of onBlur().
// Cannont use onBlur on fields within a Span, because it does not recognise it
  window.ReturnNoBlur=" ";
  DefMiscChargeSearchFrame(AddForm.mschg004,AddForm.miscdesc,AddForm.multhosp);
}
//
function SetMandatory(CheckBox,MandField) {
  if(CheckBox.checked==true) {
    MandField.className="ReadOnly";
    MandField.readOnly=true;
    MandField.value="All";
  } else {
    MandField.className="Mandatory";
    MandField.readOnly=false;
    MandField.value="";
  }
}
