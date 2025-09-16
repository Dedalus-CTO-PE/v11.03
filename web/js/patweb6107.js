//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb6107.js
//
// Written   : 06/11/2006
//
// Function  : Functions Used in patweb6107XXX.html 
//
// Version   : 
//
// V10.15.01 20/02/2020  J.Tan        TSK 0887341
//           Mod for Claim breakdown
// V9.07.00  06/11/2006  J.Tan        CAR 123584
//           Created Include
//========================================================================
// REPORT 7 - System based G/L Interface Maintenance                  
//========================================================================
//
function ShowSpans(showoption) {
  if (showoption.value=="1") {                       
     InterfaceOptions1.innerHTML=AccommodationSpan.innerHTML;
  } else if (showoption.value=="3") {                        
     InterfaceOptions1.innerHTML=MiscItemSpan.innerHTML;
  } else if (showoption.value=="5") {                    
     InterfaceOptions1.innerHTML=JournalSpan.innerHTML;
  } else {
     InterfaceOptions1.innerHTML="";
  }
}
//
function ProcessFormNoFMS(theForm) {
 if (validateMandatory(theForm)) {
// Default Accommodation Dframe
  if (theForm.sysgl001.value==1)  {
    if (theForm.subsectn.value==1) {
      Url="patweb61.pbl?reportno=7&template=2&sysgl001=1&subsectn=1" + 
            "&sysgl015="+theForm.hospcode.value.replace(/ /g,"+")
      ViewInterface(Url);
      return;
    }
// Accommodation - Non-casemix List
    if (theForm.subsectn.value==2) {
      theForm.sysgl002.value="A";
      theForm.sysgl015.value=theForm.hospcode.value;
      theForm.submit();
      return;
    }
// Accommodation - Casemix lumpsum List
    if (theForm.subsectn.value==3) {
      theForm.sysgl002.value="C";
      theForm.sysgl015.value=theForm.hospcode.value;
      theForm.submit();
      return;
    }
// Accommodation - Casemix daily charge List
    if (theForm.subsectn.value==4) {
      theForm.sysgl002.value="D";
      theForm.sysgl015.value=theForm.hospcode.value;
      theForm.submit();
      return;
    }
// Accommodation - Govt Subsidy Dframe          
    if (theForm.subsectn.value==5) {
      Url="patweb61.pbl?reportno=7&template=2&sysgl001=1&sysgl002=G&subsectn=5"
            + "&sysgl015="+theForm.hospcode.value.replace(/ /g,"+")
      ViewInterface(Url);
      return;
    }
  }
// Default Misc Items Dframe
  if (theForm.sysgl001.value==3)  {
    if (theForm.subsectn.value==1) {
      Url="patweb61.pbl?reportno=7&template=2&sysgl001=3&subsectn=1" +
            "&sysgl015="+theForm.hospcode.value.replace(/ /g,"+")
      ViewInterface(Url);
      return;
    }
// Misc Item - Group codes List
    if (theForm.subsectn.value==2) {
      theForm.sysgl002.value="M";
      theForm.sysgl015.value=theForm.hospcode.value;
      theForm.submit();
      return;
    }
// Misc Item - Item/Claim code List
    if (theForm.subsectn.value==3) {
      theForm.sysgl002.value="M";
      theForm.sysgl015.value=theForm.hospcode.value;
      theForm.submit();
      return;
    }
// Misc Item - Casemix Group codes List
    if (theForm.subsectn.value==4) {
      theForm.sysgl002.value="T";
      theForm.sysgl015.value=theForm.hospcode.value;
      theForm.submit();
      return;
    }
// Misc Item - Casemix Item/Claim codes List
    if (theForm.subsectn.value==5) {
      theForm.sysgl002.value="T";
      theForm.sysgl015.value=theForm.hospcode.value;
      theForm.submit();
      return;
    }
  }
// Default Journal Dframe
  if (theForm.sysgl001.value==5)  {
    if (theForm.subsectn.value==1) {
        Url="patweb61.pbl?reportno=7&template=2&sysgl001=5&subsectn=1" +
            "&sysgl015="+theForm.hospcode.value.replace(/ /g,"+")
      ViewInterface(Url);
      return;
    }
// Journal Codes List                          
    if (theForm.subsectn.value==2) {
      theForm.sysgl002.value="";
      theForm.sysgl015.value=theForm.hospcode.value;
      theForm.submit();
      return;
    }
  }
 }
}
function ViewInterface(url) {
  Left=(document.body.clientWidth-950)/2
  DFrameLink(url,50,Left,950,500);
}
function AddInterfaceNoFMS(section,subsectn,letter,hospcode) {
  Url="patweb61.pbl?reportno=7&template=2&newrecrd=1" + 
      "&sysgl001=" + section + "&subsectn=" + subsectn + 
      "&sysgl002=" + letter +
      "&sysgl015="+ hospcode;
  ViewInterface(Url);
  return;
}
function submitForm(theForm) {
    if (validateMandatory(theForm)) {
      theForm.submit();
    }
}
function FormSubmit(type) {
  document.UpdateForm.updttype.value=type;
  if (type=="A") {
    if ((validateMandatory(UpdateForm))&&(validateFields(UpdateForm))) {
       document.UpdateForm.submit(); 
    } 
  }
  else if (type=="U") {
    if (validateMandatory(UpdateForm)) {
       document.UpdateForm.submit(); 
    } 
  }
  else if (type=="D") {
      ans=confirm("Are you sure you want to Delete ?")
      if (ans) { document.UpdateForm.submit(); } 
  }
}
function validateFields(theform) {
  if ((theform.sysgl001.value==1) && (theform.subsectn.value==2)) {
    if (theform.caccfee.value==1) {
      if( (isWhitespace(theform.accmward.value)) &&
          (isWhitespace(theform.claimcod.value)) ) {
        alert("Ward & Claim code cannot both be blank."+
              "\nPlease select at least one.");
        return false;
      }
    }

    if (theform.caccfee.value==2) {
      if( (isWhitespace(theform.accmward.value)) &&
          (isWhitespace(theform.admisstp.value)) ) {
        alert("Ward & Admission Type cannot both be blank."+
              "\nPlease select at least one.");
        return false;
      }
    }

    if ((theform.caccfee.value==3) || (theform.caccfee.value==4)){
      if( (isWhitespace(theform.accmward.value)) &&
          (isWhitespace(theform.admisstp.value)) &&
          (isWhitespace(theform.claimcod.value)) ) {
        alert("Ward, Admission Type & Claim code cannot all be blank."+
              "\nPlease select at least one.");
        return false;
      }
    }
  }
  return true;
}
//
// Determine fields to be used - not using FMS files (patweb6107002.html)
//
function ShowGLInterfaceNoFMS(theform) {
// Accommodation
  if (theform.sysgl001.value=="1") {                  
    GLFields1.innerHTML=GSTAccountsSpan.innerHTML;
    GLFields2.innerHTML=AccommItems.innerHTML;
    showAccommodation(theform);
    if (theform.sysgl001.value=="1") {
      theform.sysgl019.className="ReadOnly";
      theform.sysgl019.readOnly=true;
      theform.sysgl020.className="ReadOnly";
      theform.sysgl020.readOnly=true;
      theform.sysgl021.className="ReadOnly";
      theform.sysgl021.readOnly=true;
      theform.sysgl022.className="ReadOnly";
      theform.sysgl022.readOnly=true;
      theform.sysgl026.className="ReadOnly";
      theform.sysgl026.readOnly=true;
      theform.sysgl027.className="ReadOnly";
      theform.sysgl027.readOnly=true;
      theform.sysgl028.className="ReadOnly";
      theform.sysgl028.readOnly=true;

      theform.sysgl031.className="ReadOnly";
      theform.sysgl031.readOnly=true;
      theform.sysgl032.className="ReadOnly";
      theform.sysgl032.readOnly=true;
      theform.sysgl033.className="ReadOnly";
      theform.sysgl033.readOnly=true;
      theform.sysgl034.className="ReadOnly";
      theform.sysgl034.readOnly=true;
      theform.sysgl038.className="ReadOnly";
      theform.sysgl038.readOnly=true;
      theform.sysgl039.className="ReadOnly";
      theform.sysgl039.readOnly=true;
      theform.sysgl040.className="ReadOnly";
      theform.sysgl040.readOnly=true;

    }
    return;
  }
// Misc Items
  if (theform.sysgl001.value=="3") {            
    GLFields1.innerHTML=GSTAccountsSpan.innerHTML;
    GLFields2.innerHTML=AccommItems.innerHTML;
    showMiscItems(theform);
    return;
  }
// Journals  
  if (theform.sysgl001.value=="5") {            
    GLFields1.innerHTML="";
    GLFields2.innerHTML="";
    showJournals(theform);
    return;
  }
}
//
function showAccommodation(theform) {
// Default Accommodation
  if (theform.subsectn.value==1) { 
    SubSectionCode1.innerHTML=DefaultAccomm.innerHTML;
    SubSectionCode2.innerHTML="";
    SubSectionCode3.innerHTML="";
    return;
  }
// Govt Subsidy
  if (theform.subsectn.value==5) { 
    SubSectionCode1.innerHTML=DefaultGovt.innerHTML;
    SubSectionCode2.innerHTML="";
    SubSectionCode3.innerHTML="";
    return;
  }
// Casemix lumpsum
  if (theform.subsectn.value==3) { 
    if (theform.newrecrd.value==0) {               // Record found
      SubSectionCode1.innerHTML=DispEpisodeType.innerHTML;
      if (theform.caccfee.value=="5") {      // Claim type
        SubSectionCode2.innerHTML=DispLumpsumClmCode.innerHTML;
      } else {
        SubSectionCode2.innerHTML=DispAdmission.innerHTML;
      }
      episode=theform.sysgl002.value.substr(1,1);
      if (episode==0) {
        theform.epsddesc.value="MSO";
      }
      else if (episode==1) {
        theform.epsddesc.value="Daycase";
      }
      else {
        theform.epsddesc.value="Invalid (" + episode + ")";
      }
    }
    else {
     SubSectionCode1.innerHTML=EpisodeType.innerHTML;
     if (theform.caccfee.value=="5") {      // Claim type
       SubSectionCode2.innerHTML=ClaimCode.innerHTML;
      } else {
       SubSectionCode2.innerHTML=Admission.innerHTML;
      }
    }
    SubSectionCode3.innerHTML="";
    return;
  }
// Casemix daily charge
  if (theform.subsectn.value==4) { 
    if (theform.newrecrd.value==0) {               // Record found
      if (theform.caccfee.value=="5") {      // Claim type
        SubSectionCode1.innerHTML=DispDailyClmCode.innerHTML;
      } else {
        SubSectionCode1.innerHTML=DispWard.innerHTML;
      }
    }
    else {
     if (theform.caccfee.value=="5") {      // Claim type
       SubSectionCode1.innerHTML=ClaimCodeMandatory.innerHTML;
      } else {
       SubSectionCode1.innerHTML=WardMandatory.innerHTML;
      }
    }
    SubSectionCode2.innerHTML="";
    SubSectionCode3.innerHTML="";
    return;
  }
// Non-Casemix
  if (theform.subsectn.value==2) { 
    if (theform.caccfee.value=="0") {      // Admission type
      if (theform.newrecrd.value==0) {               // Record found
        SubSectionCode1.innerHTML=DispAdmission.innerHTML;
      }
      else {
        SubSectionCode1.innerHTML=AdmissMandatory.innerHTML;
      }
      SubSectionCode2.innerHTML="";
      SubSectionCode3.innerHTML="";
      return;
    } 
    if (theform.caccfee.value=="1") {      // Ward/Claim code
      if (theform.newrecrd.value==0) {               // Record found
        SubSectionCode1.innerHTML=DispWard.innerHTML;
        SubSectionCode2.innerHTML=DispClaimCode.innerHTML;
      }
      else {
        SubSectionCode1.innerHTML=Ward.innerHTML;
        SubSectionCode2.innerHTML=ClaimCode.innerHTML;
      }
      SubSectionCode3.innerHTML="";
      return;
    } 
    if (theform.caccfee.value=="2") {      // Ward/Admission type
      if (theform.newrecrd.value==0) {               // Record found
        SubSectionCode1.innerHTML=DispWard.innerHTML;
        SubSectionCode2.innerHTML=DispAdmission.innerHTML;
      }
      else {
        SubSectionCode1.innerHTML=Ward.innerHTML;
        SubSectionCode2.innerHTML=Admission.innerHTML;
      }
      SubSectionCode3.innerHTML="";
      return;
    }
    if (theform.caccfee.value=="3") {      // Ward/Claim/Admission type
      if (theform.newrecrd.value==0) {               // Record found
        SubSectionCode1.innerHTML=DispClaimCode.innerHTML;
        SubSectionCode2.innerHTML=DispClaimCode.innerHTML;
        SubSectionCode3.innerHTML=DispAdmission.innerHTML;
      }
      else {
        SubSectionCode1.innerHTML=ClaimCode.innerHTML;
        SubSectionCode2.innerHTML=ClaimCode.innerHTML;
        SubSectionCode3.innerHTML=Admission.innerHTML;
      }
      return;
    } 
    if (theform.caccfee.value=="4") {      // Ward/Adm type/Claim
      if (theform.newrecrd.value==0) {               // Record found
        SubSectionCode1.innerHTML=DispWard.innerHTML;
        SubSectionCode2.innerHTML=DispAdmission.innerHTML;
        SubSectionCode3.innerHTML=DispClaimCode.innerHTML;
      }
      else {
        SubSectionCode1.innerHTML=Ward.innerHTML;
        SubSectionCode2.innerHTML=Admission.innerHTML;
        SubSectionCode3.innerHTML=ClaimCode.innerHTML;
      }
      return;
    } 
    if (theform.caccfee.value=="5") {      // Claim
      if (theform.newrecrd.value==0) {               // Record found
        SubSectionCode1.innerHTML=DispClaimCode.innerHTML;
      }
      else {
        SubSectionCode1.innerHTML=ClaimCodeMandatory.innerHTML;
      }
      SubSectionCode2.innerHTML="";
      SubSectionCode3.innerHTML="";
      return;
    }
  }
}
//
function showMiscItems(theform) {
// Default Misc Items
  if (theform.subsectn.value==1) { 
    SubSectionCode1.innerHTML=DefaultItems.innerHTML;
    SubSectionCode2.innerHTML="";
    SubSectionCode3.innerHTML="";
    return;
  }
// Group Codes          
  if (theform.subsectn.value==2) { 
    if (theform.newrecrd.value==0) {               // Record found
      SubSectionCode1.innerHTML=DispGroupCode.innerHTML;
    }
    else {
      SubSectionCode1.innerHTML=GroupCode.innerHTML;
    }
    SubSectionCode2.innerHTML="";
    SubSectionCode3.innerHTML="";
    return;
  }
// Item/Claim Codes          
  if (theform.subsectn.value==3) { 
    if (theform.ptcnmfee.value==1) {
      if (theform.newrecrd.value==0) {               // Record found
        SubSectionCode1.innerHTML=DispClaimCode.innerHTML;
        SubSectionCode2.innerHTML=DispGroupCode.innerHTML;
        if (isWhitespace(theform.sysgl002.value.substr(4,3))) {
          theform.grpcdesc.value="All"
        }
        SubSectionCode3.innerHTML="";
        return;
      }
      else {
        SubSectionCode1.innerHTML=ClaimCodeMandatory.innerHTML;
        SubSectionCode2.innerHTML=ItemGroupCode.innerHTML;
        SubSectionCode3.innerHTML="";
        return;
      }
    }
    else {
      if (theform.newrecrd.value==0) {               // Record found
        SubSectionCode1.innerHTML=DispItemCode.innerHTML;
        theform.itemcode.value=theform.sysgl002.value.substr(4,9);
        if (isWhitespace(theform.itemcode.value)) {
          theform.itemcode.value="All"
        }
      }
      else {
        SubSectionCode1.innerHTML=ItemCode.innerHTML;
      }
    }
    SubSectionCode2.innerHTML="";
    SubSectionCode3.innerHTML="";
    return;
  }
// Casemix Group Codes          
  if (theform.subsectn.value==4) { 
    if (theform.newrecrd.value==0) {               // Record found
      SubSectionCode1.innerHTML=DispEpisodeType.innerHTML;
      episode=theform.sysgl002.value.substr(1,1);
      if (episode==0) {
        theform.epsddesc.value="MSO";
      }
      else if (episode==1) {
        theform.epsddesc.value="Daycase";
      }
      else {
        theform.epsddesc.value="Invalid (" + episode + ")";
      }
      SubSectionCode2.innerHTML=DispGroupCode.innerHTML;
    }
    else {
      SubSectionCode1.innerHTML=EpisodeType.innerHTML;
      SubSectionCode2.innerHTML=GroupCode.innerHTML;
    }
    SubSectionCode3.innerHTML="";
    return;
  }
// Casemix Item/Claim Codes          
  if (theform.subsectn.value==5) { 
    if (theform.newrecrd.value==0) {               // Record found
      SubSectionCode1.innerHTML=DispEpisodeType.innerHTML;
      episode=theform.sysgl002.value.substr(1,1);
      if (episode==0) {
        theform.epsddesc.value="MSO";
      }
      else if (episode==1) {
        theform.epsddesc.value="Daycase";
      }
      else {
        theform.epsddesc.value="Invalid (" + episode + ")";
      }
    }
    else {
      SubSectionCode1.innerHTML=EpisodeType.innerHTML;
    }
    if (theform.ptcnmfee.value==1) {
      if (theform.newrecrd.value==0) {               // Record found
        SubSectionCode2.innerHTML=DispClaimCode.innerHTML;
        SubSectionCode3.innerHTML=DispGroupCode.innerHTML;
        if (isWhitespace(theform.sysgl002.value.substr(4,3))) {
          theform.grpcdesc.value="All"
        }
        return;
      }
      else {
        SubSectionCode2.innerHTML=ClaimCodeMandatory.innerHTML;
        SubSectionCode3.innerHTML=ItemGroupCode.innerHTML;
        return;
      }
    }
    else {
      if (theform.newrecrd.value==0) {               // Record found
        SubSectionCode2.innerHTML=DispItemCode.innerHTML;
        theform.itemcode.value=theform.sysgl002.value.substr(5,9);
        if (isWhitespace(theform.itemcode.value)) {
          theform.itemcode.value="All"
        }
      }
      else {
        SubSectionCode2.innerHTML=ItemCode.innerHTML;
        theform.itemcode.className="";
      }
    }
    SubSectionCode3.innerHTML="";
    return;
  }
}
//
function showJournals(theform) {
// Default Journal
  if (theform.subsectn.value==1) { 
    SubSectionCode1.innerHTML=DefaultJournal.innerHTML;
    SubSectionCode2.innerHTML="";
    SubSectionCode3.innerHTML="";
    return;
  }
  if (theform.subsectn.value==2) { 
    if (theform.ptcnjfee.value=="1") {         // Claim/Journal code
      if (theform.newrecrd.value==0) {               // Record found
        SubSectionCode1.innerHTML=DispClaimCode.innerHTML;     
      } else {
        SubSectionCode1.innerHTML=ClaimCodeMandatory.innerHTML;     
      }
      SubSectionCode2.innerHTML="";
    } else {                                    // Other Journal
      SubSectionCode1.innerHTML="";
      SubSectionCode2.innerHTML="";
    }

// Journal Codes
    if (theform.newrecrd.value==0) {               // Record found
      SubSectionCode3.innerHTML=DispJournalCode.innerHTML;     
    }
    else {
      SubSectionCode3.innerHTML=JournalCode.innerHTML;     
    }
  }
}
//
function checkGSTJrnl(jnrlcode) {
  if ((UpdateForm.ibcnugst.value==2) && (!isWhitespace(jnrlcode.value))) {
    if (trim(jnrlcode.value.substr(14,4))=="G") {
      GLFields1.innerHTML=GSTJournalsFields.innerHTML;
      UpdateForm.gstjrnl.value=1;
    }
    else{
      GLFields1.innerHTML=DebitCreditFields.innerHTML;
      UpdateForm.gstjrnl.value=0;
    }
  }
  
}
function clrAcc(code,desc) {
  code.value="";
  desc.value="";
}

function DisplayHosp() {
  if (document.ListForm.ibcnmhos.value!="1") {
    HospCode.innerHTML=transferblank.innerHTML;
    HospHeading.innerHTML="";
  } else {
    HospHeading.innerHTML=hosphd.innerHTML;
    HospCode.innerHTML=hospital.innerHTML;

  if (!isWhitespace(ListForm.sysgl015.value)) {
  for (var i=0; i < ListForm.hospcode.length; i++) {
  if (ListForm.hospcode.options[i].value==ListForm.sysgl015.value.substr(0,3)) {
       ListForm.hospcode.selectedIndex=i; }
   }
  } else {
  for (var i=0; i < ListForm.hospcode.length; i++) {
  if (ListForm.hospcode.options[i].value==ListForm.defhosp.value.substr(0,3)) {
        ListForm.hospcode.selectedIndex=i; }
   }
  }
 }
}

