//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb6105.js
//
// Written   : 13/10/2003
//
// Function  : Functions Used in patweb6105XXX.html 
//
//========================================================================
// REPORT 5 - G/L Interface Maintenance                  
//========================================================================
//
function ShowSpans(showoption) {
  if (showoption.value=="1") {                       
     InterfaceOptions1.innerHTML=AccommodationSpan.innerHTML;
  } else if (showoption.value=="2") {                        
     InterfaceOptions1.innerHTML=TheatreSpan.innerHTML;
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
  if (theForm.glint001.value==1)  {
    if (theForm.subsectn.value==1) {
      Url="patweb61.pbl?reportno=5&template=6&glint001=1&subsectn=1" + 
            "&glint015="+theForm.hospcode.value.replace(/ /g,"+")
      ViewInterface(Url);
      return;
    }
// Accommodation - Non-casemix List
    if (theForm.subsectn.value==2) {
      theForm.glint002.value="A";
      theForm.glint015.value=theForm.hospcode.value;
      theForm.submit();
      return;
    }
// Accommodation - Casemix lumpsum List
    if (theForm.subsectn.value==3) {
      theForm.glint002.value="C";
      theForm.glint015.value=theForm.hospcode.value;
      theForm.submit();
      return;
    }
// Accommodation - Casemix daily charge List
    if (theForm.subsectn.value==4) {
      theForm.glint002.value="D";
      theForm.glint015.value=theForm.hospcode.value;
      theForm.submit();
      return;
    }
// Accommodation - Govt Subsidy Dframe          
    if (theForm.subsectn.value==5) {
      Url="patweb61.pbl?reportno=5&template=6&glint001=1&glint002=G&subsectn=5"
            + "&glint015="+theForm.hospcode.value.replace(/ /g,"+")
      ViewInterface(Url);
      return;
    }
  }

// Default Theatre Dframe
  if (theForm.glint001.value==2)  {
    if (theForm.subsectn.value==1) {
      Url="patweb61.pbl?reportno=5&template=6&glint001=2&subsectn=1" +
            "&glint015="+theForm.hospcode.value.replace(/ /g,"+")
      ViewInterface(Url);
      return;
    }
    if (theForm.subsectn.value==2) {
      theForm.glint002.value="F";
      theForm.glint015.value=theForm.hospcode.value;
      theForm.submit();
      return;
    }
  }

// Default Misc Items Dframe
  if (theForm.glint001.value==3)  {
    if (theForm.subsectn.value==1) {
      Url="patweb61.pbl?reportno=5&template=6&glint001=3&subsectn=1" +
            "&glint015="+theForm.hospcode.value.replace(/ /g,"+")
      ViewInterface(Url);
      return;
    }
// Misc Item - Group codes List
    if (theForm.subsectn.value==2) {
      theForm.glint002.value="M";
      theForm.glint015.value=theForm.hospcode.value;
      theForm.submit();
      return;
    }
// Misc Item - Item/Claim code List
    if (theForm.subsectn.value==3) {
      theForm.glint002.value="M";
      theForm.glint015.value=theForm.hospcode.value;
      theForm.submit();
      return;
    }
// Misc Item - Casemix Group codes List
    if (theForm.subsectn.value==4) {
      theForm.glint002.value="T";
      theForm.glint015.value=theForm.hospcode.value;
      theForm.submit();
      return;
    }
// Misc Item - Casemix Item/Claim codes List
    if (theForm.subsectn.value==5) {
      theForm.glint002.value="T";
      theForm.glint015.value=theForm.hospcode.value;
      theForm.submit();
      return;
    }
  }
// Default Journal Dframe
  if (theForm.glint001.value==5)  {
    if (theForm.subsectn.value==1) {
        Url="patweb61.pbl?reportno=5&template=6&glint001=5&subsectn=1" +
            "&glint015="+theForm.hospcode.value.replace(/ /g,"+")
      ViewInterface(Url);
      return;
    }
// Journal Codes List                          
    if (theForm.subsectn.value==2) {
      theForm.glint002.value="";
      theForm.glint015.value=theForm.hospcode.value;
      theForm.submit();
      return;
    }
  }
 }
}
function ProcessForm(theForm) {
 if (validateMandatory(theForm)) {
// Default Accommodation Dframe

  if (theForm.glint001.value==1)  {
    if (theForm.subsectn.value==1) {
      if (theForm.ptcnufms.value==1) {
        Url="patweb61.pbl?reportno=5&template=2&glint001=1&subsectn=1" +
            "&glint015="+theForm.hospcode.value.replace(/ /g,"+")
      }
      else {
        Url="patweb61.pbl?reportno=5&template=3&glint001=1&subsectn=1" +
            "&glint015="+theForm.hospcode.value.replace(/ /g,"+")
      }
      ViewInterface(Url);
      return;
    }
// Accommodation - Non-casemix List
    if (theForm.subsectn.value==2) {
      theForm.glint002.value="A";
      theForm.glint015.value=theForm.hospcode.value;
      theForm.submit();
      return;
    }
// Accommodation - Casemix lumpsum List
    if (theForm.subsectn.value==3) {
      theForm.glint002.value="C";
      theForm.glint015.value=theForm.hospcode.value;
      theForm.submit();
      return;
    }
// Accommodation - Casemix daily charge List
    if (theForm.subsectn.value==4) {
      theForm.glint002.value="D";
      theForm.glint015.value=theForm.hospcode.value;
      theForm.submit();
      return;
    }
// Accommodation - Govt Subsidy Dframe          
    if (theForm.subsectn.value==5) {
      if (theForm.ptcnufms.value==1) {
     Url="patweb61.pbl?reportno=5&template=2&glint001=1&glint002=G&subsectn=5"
             + "&glint015="+theForm.hospcode.value.replace(/ /g,"+")
      }
      else {
       Url="patweb61.pbl?reportno=5&template=3&glint001=1&glint002=G&subsectn=5"
             + "&glint015="+theForm.hospcode.value.replace(/ /g,"+")
      }
      ViewInterface(Url);
      return;
    }
  }
// Default Misc Items Dframe
  if (theForm.glint001.value==3)  {
    if (theForm.subsectn.value==1) {
      if (theForm.ptcnufms.value==1) {
        Url="patweb61.pbl?reportno=5&template=2&glint001=3&subsectn=1" +
            "&glint015="+theForm.hospcode.value.replace(/ /g,"+")
      }
      else {
        Url="patweb61.pbl?reportno=5&template=3&glint001=3&subsectn=1" +
            "&glint015="+theForm.hospcode.value.replace(/ /g,"+")
      }
      ViewInterface(Url);
      return;
    }

// Misc Item - Group codes List
    if (theForm.subsectn.value==2) {
      theForm.glint002.value="M";
      theForm.glint015.value=theForm.hospcode.value;
      theForm.submit();
      return;
    }
// Misc Item - Item/Claim code List
    if (theForm.subsectn.value==3) {
      theForm.glint002.value="M";
      theForm.glint015.value=theForm.hospcode.value;
      theForm.submit();
      return;
    }
// Misc Item - Casemix Group codes List
    if (theForm.subsectn.value==4) {
      theForm.glint002.value="T";
      theForm.glint015.value=theForm.hospcode.value;
      theForm.submit();
      return;
    }
// Misc Item - Casemix Item/Claim codes List
    if (theForm.subsectn.value==5) {
      theForm.glint002.value="T";
      theForm.glint015.value=theForm.hospcode.value;
      theForm.submit();
      return;
    }
  }
// Default Journal Dframe
  if (theForm.glint001.value==5)  {
    if (theForm.subsectn.value==1) {
      if (theForm.ptcnufms.value==1) {
        Url="patweb61.pbl?reportno=5&template=2&glint001=5&subsectn=1" +
            "&glint015="+theForm.hospcode.value.replace(/ /g,"+")
      }
      else {
        Url="patweb61.pbl?reportno=5&template=3&glint001=5&subsectn=1" +
            "&glint015="+theForm.hospcode.value.replace(/ /g,"+")
      }
      ViewInterface(Url);
      return;
    }
// Journal Codes List                          
    if (theForm.subsectn.value==2) {
      theForm.glint002.value="";
      theForm.glint015.value=theForm.hospcode.value;
      theForm.submit();
      return;
    }
  }
 }
}
function ViewInterface(url) {
  Left=(document.body.clientWidth-660)/2
  DFrameLink(url,50,Left,660,500);
}
function AddInterfaceNoFMS(section,subsectn,letter,hospcode) {
  Url="patweb61.pbl?reportno=5&template=6&newrecrd=1" + 
      "&glint001=" + section + "&subsectn=" + subsectn + 
      "&glint002=" + letter +
      "&glint015="+ hospcode;
  ViewInterface(Url);
  return;
}
function AddInterface(section,subsectn,letter,hospcode) {
  if (ListForm.ptcnufms.value==1) {
    Url="patweb61.pbl?reportno=5&template=2&newrecrd=1" + 
        "&glint001=" + section + "&subsectn=" + subsectn + 
        "&glint002=" + letter +
        "&glint015="+ hospcode;
  }
  else {
    Url="patweb61.pbl?reportno=5&template=3&newrecrd=1" + 
        "&glint001=" + section + "&subsectn=" + subsectn + 
        "&glint002=" + letter +
        "&glint015="+ hospcode;
  }
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
  if ((theform.glint001.value==1) && (theform.subsectn.value==2)) {
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

  if ((theform.caccfee.value==4) && (theform.glint001.value==3)) {
    if ((theform.subsectn.value==3) || (theform.subsectn.value==5)) {
      if( (isWhitespace(theform.groupcod.value)) && 
          (isWhitespace(theform.claimcod.value)) ) {
        alert("Group Code & Claim code cannot all be blank."+
              "\nPlease select at least one.");
        return false;
      }
    }
  }

  if (theform.caccfee.value==4) {
    if ((theform.glint001.value==1) && (theform.subsectn.value==3)) {
      if( (isWhitespace(theform.admisstp.value)) && 
          (isWhitespace(theform.claimcod.value)) ) {
        alert("Admission Type & Claim code cannot all be blank."+
              "\nPlease select at least one.");
        return false;
      }
    }

    if ((theform.glint001.value==1) && (theform.subsectn.value==4)) {
      if( (isWhitespace(theform.accmward.value)) && 
          (isWhitespace(theform.claimcod.value)) ) {
        alert("Ward & Claim code cannot all be blank."+
              "\nPlease select at least one.");
        return false;
      }
    }
  }
  return true;
}
//
// Determine fields to be used - not using FMS files (patweb6105006.html)
//
function ShowGLInterfaceNoFMS(theform) {
// Accommodation
  if (theform.glint001.value=="1") {                  
    GLFields1.innerHTML=GSTAccountsSpan.innerHTML;
    GLFields2.innerHTML=AccommItems.innerHTML;
    showAccommodation(theform);
    return;
  }
// Theatre 
  if (theform.glint001.value=="2") {           
    GLFields1.innerHTML=GSTAccountsSpan.innerHTML;
    GLFields2.innerHTML=AccommItems.innerHTML;
    showTheatre(theform);
    return;
  }
// Misc Items
  if (theform.glint001.value=="3") {            
    GLFields1.innerHTML=GSTAccountsSpan.innerHTML;
    GLFields2.innerHTML=AccommItems.innerHTML;
    showMiscItems(theform);
    return;
  }
// Journals  
  if (theform.glint001.value=="5") {            
    GLFields1.innerHTML="";
    GLFields2.innerHTML="";
    showJournals(theform);
    return;
  }
}
//
// Determine fields to be used for relevant sections
// (patweb6105002.html & patweb6105003.html)
//
function ShowGLInterface(theform) {
// Accommodation
  if (theform.glint001.value=="1") {                  
    if (theform.ibcnugst.value==2) {                  // Using Aust GST
      GLFields1.innerHTML=GSTAccountsSpan.innerHTML;
      if (theform.ibcnubas.value==1){                 // Using BAS
        GLFields2.innerHTML=BASSpan.innerHTML;
        GLFields3.innerHTML=AccommItems.innerHTML;
      } 
      else {
        GLFields2.innerHTML=AccommItems.innerHTML;
        GLFields3.innerHTML="";
      }
    }
    else {
      GLFields1.innerHTML=DebitCreditFields.innerHTML;
      GLFields2.innerHTML=AccommItems.innerHTML;
      GLFields3.innerHTML="";
    }
    showAccommodation(theform);
    return;
  }
// Misc Items
  if (theform.glint001.value=="3") {            
    if (theform.ibcnugst.value==2) {                  // Using Aust GST
      GLFields1.innerHTML=GSTAccountsSpan.innerHTML;
      if (theform.ibcnubas.value==1){                 // Using BAS
        GLFields2.innerHTML=BASSpan.innerHTML;
        GLFields3.innerHTML=AccommItems.innerHTML;
      } 
      else {
        GLFields2.innerHTML=AccommItems.innerHTML;
        GLFields3.innerHTML="";
      }
    }
    else {
      GLFields1.innerHTML=DebitCreditFields.innerHTML;
      GLFields2.innerHTML=AccommItems.innerHTML;
      GLFields3.innerHTML="";
    }
    showMiscItems(theform);
    return;
  }
// Journals  
  if (theform.glint001.value=="5") {            
    if ((theform.ibcnugst.value==2) && (theform.gstjrnl.value==1)) {
      GLFields1.innerHTML=GSTJournalsFields.innerHTML;
      GLFields2.innerHTML="";
      GLFields3.innerHTML="";
    }
    else {
      GLFields1.innerHTML=DebitCreditFields.innerHTML;
      GLFields2.innerHTML="";
      GLFields3.innerHTML="";
    } 
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
        if (theform.caccfee.value=="4") {      // Adm.type & Claim type
          SubSectionCode2.innerHTML=DispLumpsumAdmission.innerHTML;
        } else {
          SubSectionCode2.innerHTML=DispAdmission.innerHTML;
        }
      }
      episode=theform.glint002.value.substr(1,1);
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

    if (theform.caccfee.value=="4") {      // Ward/AdmType/Claim type
      if (theform.newrecrd.value==0) {               // Record found
        SubSectionCode3.innerHTML=DispLumpsumClmCode.innerHTML;
      } else {
        SubSectionCode3.innerHTML=ClaimCode.innerHTML;
      }
    } else {
      SubSectionCode3.innerHTML="";
    }
    return;
  }
// Casemix daily charge
  if (theform.subsectn.value==4) { 

    if (theform.caccfee.value=="4") {      // Ward/Adm.type/Claim type
      if (theform.newrecrd.value==0) {               // Record found
        SubSectionCode1.innerHTML=DispDailyWard.innerHTML;
        SubSectionCode2.innerHTML=DispDailyClmCode.innerHTML;
      } else {
//      SubSectionCode1.innerHTML=WardMandatory.innerHTML;
        SubSectionCode1.innerHTML=Ward.innerHTML;
        SubSectionCode2.innerHTML=ClaimCode.innerHTML;
      }
      SubSectionCode3.innerHTML="";
      return;
    }

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
        SubSectionCode1.innerHTML=DispWard.innerHTML;
        SubSectionCode2.innerHTML=DispClaimCode.innerHTML;
        SubSectionCode3.innerHTML=DispAdmission.innerHTML;
      }
      else {
        SubSectionCode1.innerHTML=Ward.innerHTML;
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

    if (theform.caccfee.value=="5") {      //Claim type
      if (theform.newrecrd.value==0) {               // Record found
        SubSectionCode1.innerHTML=DispClaimCode.innerHTML;
        SubSectionCode2.innerHTML="";
        SubSectionCode3.innerHTML="";
      }
      else {
        SubSectionCode1.innerHTML=ClaimCodeMandatory.innerHTML;
        SubSectionCode2.innerHTML="";
        SubSectionCode3.innerHTML="";
      }
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
        if (isWhitespace(theform.glint002.value.substr(4,3))) {
          theform.grpcdesc.value="All"
        }
        SubSectionCode3.innerHTML="";
        return;
      }
      else {
        if (theform.caccfee.value=="4") {      // Ward/Adm type/Claim
          SubSectionCode1.innerHTML=ClaimCode.innerHTML;
        } else {
          SubSectionCode1.innerHTML=ClaimCodeMandatory.innerHTML;
        }
        SubSectionCode2.innerHTML=ItemGroupCode.innerHTML;
        SubSectionCode3.innerHTML="";
        return;
      }
    }
    else {
      if (theform.newrecrd.value==0) {               // Record found
        SubSectionCode1.innerHTML=DispItemCode.innerHTML;
        theform.itemcode.value=theform.glint002.value.substr(4,9);
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
      episode=theform.glint002.value.substr(1,1);
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
      episode=theform.glint002.value.substr(1,1);
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
        if (isWhitespace(theform.glint002.value.substr(4,3))) {
          theform.grpcdesc.value="All"
        }
        return;
      }
      else {
        if (theform.caccfee.value=="4") {      // Ward/Adm type/Claim
          SubSectionCode2.innerHTML=ClaimCode.innerHTML;
        } else {
          SubSectionCode2.innerHTML=ClaimCodeMandatory.innerHTML;
        }
        SubSectionCode3.innerHTML=ItemGroupCode.innerHTML;
        return;
      }
    }
    else {
      if (theform.newrecrd.value==0) {               // Record found
        SubSectionCode2.innerHTML=DispItemCode.innerHTML;
        theform.itemcode.value=theform.glint002.value.substr(5,9);
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
function showTheatre(theform) {
// Default Theatre
  if (theform.subsectn.value==1) {
    SubSectionCode1.innerHTML=DefaultTheatre.innerHTML;
    SubSectionCode2.innerHTML="";
    SubSectionCode3.innerHTML="";
    return;
  }
// Session Type
  if (theform.subsectn.value==2) {
    if (theform.newrecrd.value==0) {               // Record found
      SubSectionCode1.innerHTML=DispSessionType.innerHTML;
    }
    else {
      SubSectionCode1.innerHTML=SessionType.innerHTML;
    }
    SubSectionCode2.innerHTML="";
    return;
  }
}
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
        if (theform.caccfee.value=="4") {      // Ward/Adm type/Claim
          SubSectionCode1.innerHTML=ClaimCode.innerHTML;     
        } else {
          SubSectionCode1.innerHTML=ClaimCodeMandatory.innerHTML;     
        }
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
function blkLedgerInv() {
  if (isWhitespace(UpdateForm.glint005.value)) {
    UpdateForm.glint006.value="";
    UpdateForm.glint007.value="";
    if (UpdateForm.glint001.value==5) {
      UpdateForm.creddesc.value="";
      UpdateForm.debidesc.value="";
    }
    else {
      UpdateForm.incmdesc.value="";
      UpdateForm.debtdesc.value="";
      UpdateForm.glint008.value="";
      UpdateForm.gstcdesc.value="";
    }
    UpdateForm.glint006.select();
    UpdateForm.glint006.focus();
  }
  else {
    if (UpdateForm.glint001.value!=5) {
      getGSTAccount(UpdateForm.glint005,UpdateForm.glint006,
                    UpdateForm.glint007,UpdateForm.debtdesc,
                    UpdateForm.glint008,UpdateForm.gstcdesc)
    }
  }
}
function blkLedgerToBeInv() {
  if (isWhitespace(UpdateForm.glint012.value)) {
    UpdateForm.glint013.value="";
    UpdateForm.glint014.value="";
    UpdateForm.creddesc.value="";
    UpdateForm.debidesc.value="";
    UpdateForm.glint013.select();
    UpdateForm.glint013.focus();
  }
}
function ChkLedger(ledger,account,desc) {
   if (!isWhitespace(ledger.value)) {
      AccountSearchFrame(ledger,account,desc)
   } 
   else {
      alert(ledger.title + " field is empty. Please select Ledger first"); 
      ledger.focus();
   }
}
function clrAcc(code,desc) {
  code.value="";
  desc.value="";
}
function validateAccount(ledger,account,desc) {
  desc.value="";
  if (isWhitespace(account.value)) return;
  if (isWhitespace(ledger.value)) {
    alert(ledger.title + " field is empty. Please select Ledger first"); 
    ledger.focus();
  }
  else {
    acctcode=ledger.value.substr(0,2) + account.value.substr(0,12);
    var serverURL   = "../cgi-bin/patweb80.pbl?reportno=52" +
                    "&valdcode=" + acctcode.replace(/ /g,"+")
    var returnValue = RSExecute(serverURL);
    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|")
      desc.value=trim(ReturnValue[0])
    }
    else {
      account.value="";
      desc.value="";
      account.select();
      account.focus();
    }
  }
}
function getGSTAccount(ledger,account,debtor,debtdesc,gstcontrl,gstdesc) {
  if (UpdateForm.ibcnugst.value!=2) { return; }   // Only Aust GST
  debtor.value="";
  debtdesc.value="";
  gstcontrl.value="";
  gstdesc.value="";
  if (isWhitespace(ledger.value)) {
    alert(ledger.title + " field is empty. Please select Ledger first"); 
    ledger.focus();
  }
  else {
    acctcode=ledger.value.substr(0,2) + account.value.substr(0,12);
    var serverURL   = "../cgi-bin/patweb80.pbl?reportno=53" +
                    "&valdcode=" + acctcode.replace(/ /g,"+")
    var returnValue = RSExecute(serverURL);
    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|")
      debtor.value=trim(ReturnValue[0])
      debtdesc.value=trim(ReturnValue[1])
      gstcontrl.value=trim(ReturnValue[2])
      gstdesc.value=trim(ReturnValue[3])
      //alert("ledger="+ledger.value+"\naccount="+account.value+
      //  "\ndebtor="+debtor.value+"\ndebtdesc="+debtdesc.value+
      //  "\ngstcontrl="+gstcontrl.value+"\ngstdesc="+gstdesc.value);
    }
    else {
      ledger.select();
      ledger.focus();
    }
  }
}
function chgAccounts() {
  validateAccount(UpdateForm.glint005,UpdateForm.glint006,UpdateForm.incmdesc);
  if (isWhitespace(UpdateForm.glint006.value)) { return; }
  getGSTAccount(UpdateForm.glint005,UpdateForm.glint006,
                UpdateForm.glint007,UpdateForm.debtdesc,
                UpdateForm.glint008,UpdateForm.gstcdesc);
}

function DisplayHosp() {
  if (document.ListForm.ibcnmhos.value!="1") {
    document.getElementById("HospCode").innerHTML=
             document.getElementById("transferblank").innerHTML;
    document.getElementById("HospHeading").innerHTML="";
  } else {
    document.getElementById("HospHeading").innerHTML=
             document.getElementById("hosphd").innerHTML;
    document.getElementById("HospCode").innerHTML=
             document.getElementById("hospital").innerHTML;

  if (!isWhitespace(ListForm.glint015.value)) {
  for (var i=0; i < ListForm.hospcode.length; i++) {
  if (ListForm.hospcode.options[i].value==ListForm.glint015.value.substr(0,3)) {
       ListForm.hospcode.selectedIndex=i; }
   }
  } else {

  if (document.getElementById('hospcode') != undefined ){
  for (var i=0; i < ListForm.hospcode.length; i++) {
  if (ListForm.hospcode.options[i].value==ListForm.defhosp.value.substr(0,3)) {
        ListForm.hospcode.selectedIndex=i; }
   }
  }

  }
 }
}

