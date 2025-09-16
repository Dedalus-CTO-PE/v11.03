//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb8801005.js
//
// Written   : 24/06/2003
//
// Function  : Functions Used in patweb8801005.js   
//
//========================================================================
// REPORT 1 - Global MBS Item 
//========================================================================
function ProcessReport() {
  if (validateMandatory(AddForm)) {
    if (document.AddForm.updttype.value=="R") { // Regenerate MBS Keyword Indx
      AddForm.cancflag.value=1;
      AddForm.submit();
    }
    if (document.AddForm.updttype.value=="L") { // Load MBS from ASCII file
      AddForm.cancflag.value=1;
      AddForm.submit();
    }
    if (document.AddForm.updttype.value=="E") { // Load MBS from XML file
      AddForm.cancflag.value=1;
      AddForm.submit();
    }
  }
}
//
function ShowSpans(showoption) {
  if (showoption.value=="R") {              // Regenerate keyword index
     FileOptions.innerHTML=GlobalFile.innerHTML;
     MBSOptions.innerHTML="";
  } else if (showoption.value=="L") {              // Load ascii file
     if (AddForm.ptcnmbsc.value=="1") {
       FileOptions.innerHTML="";
       MBSOptions.innerHTML=GlobalLoad.innerHTML;
     }
     else {
       alert("Load Items From Ascii file is disabled.");
       showoption.selectedIndex=0;
       FileOptions.innerHTML="";                     
       MBSOptions.innerHTML=""; 
       return;
     }
  } else if (showoption.value=="E") {              // Load XML file
       FileOptions.innerHTML="";
       MBSOptions.innerHTML=GlobalLoad.innerHTML;
  } else {
     FileOptions.innerHTML="";                     
     MBSOptions.innerHTML="" }
}
//
// this function validates both patitemn and newitemn according to fileflag
//
