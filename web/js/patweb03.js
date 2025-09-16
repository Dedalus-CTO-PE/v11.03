//jsVersion  : V11.03.00
//==============================================================================
// Program   : patweb03.js
//
// Written   : 18/06/2012 Patrick Adair
//
// Function  : Standard Functions Used in patweb03
//
//==============================================================================
// patweb0306005 functions
//==============================================================================
//.
//------------------------------------------------------------------------------
// Function : Display Program code and description
//------------------------------------------------------------------------------
 function findPrgmdesc() {
   Progcode=UpdateForm.pmapg007.value;
   for (var i =0 ; i < document.UpdateForm.prgmcode.length; i++) {
      if (trim(document.UpdateForm.prgmcode.options[i].value)==trim(Progcode.substr(0,8))) {
          document.UpdateForm.prgmcode.selectedIndex=i;
          return;
      }
     }
   alert("Invalid Program code");
   document.UpdateForm.pmapg007.value="";
   document.UpdateForm.prgmcode.selectedIndex=0;
   document.UpdateForm.pmapg007.focus();
 }
//------------------------------------------------------------------------------
// Function : Save the Selected Program Code 
//------------------------------------------------------------------------------
 function savePrgmcode() {
   UpdateForm.pmapg007.value=UpdateForm.prgmcode.value;
 }
//------------------------------------------------------------------------------
// Function : Navigate to Program Interruption 
//------------------------------------------------------------------------------
 function PgmInterrupted() {
  if(valPgmDetails()){
    setPgmDetails();
   document.UpdateForm.redirect.value="patweb03.pbl?reportno=08&template=001" +
       "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+") +
       "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+") +
       "&pmupg001=" + UpdateForm.pmupg001.value.replace(/ /g,"+") +
       "&pmupg002=" + UpdateForm.pmupg002.value.replace(/ /g,"+") +
       "&pmupg003=" + UpdateForm.pmupg003.value.replace(/ /g,"+") +
       "&pmupg004=" + UpdateForm.pmupg004.value.replace(/ /g,"+") +
       "&pmupg005=" + UpdateForm.pmupg005.value.replace(/ /g,"+") +
       "&pmupg006=" + UpdateForm.expirydt.value.replace(/ /g,"+") +
       "&showintr=1" +
       "&suprflag=" + UpdateForm.suprflag.value.replace(/ /g,"+");
    document.UpdateForm.nextpage.value="1";
    postPgmDetails();
   }
 }
//------------------------------------------------------------------------------
// Function : Navigate to Coding Details 
//------------------------------------------------------------------------------
 function PgmCoding() {
  if(valPgmDetails()){
    setPgmDetails();
    document.UpdateForm.redirect.value="patweb03.pbl?reportno=06&template=005" +
       "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+") +
       "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+") +
       "&pmupg001=" + UpdateForm.pmupg001.value.replace(/ /g,"+") +
       "&pmupg002=" + UpdateForm.pmupg002.value.replace(/ /g,"+") +
       "&pmupg003=" + UpdateForm.pmupg003.value.replace(/ /g,"+") +
       "&pmupg004=" + UpdateForm.pmupg004.value.replace(/ /g,"+") +
       "&pmupg005=" + UpdateForm.pmupg005.value.replace(/ /g,"+") +
       "&pmupg006=" + UpdateForm.pmupg006.value.replace(/ /g,"+") +
       "&showcodg=1" +
       "&suprflag=" + UpdateForm.suprflag.value.replace(/ /g,"+");
    postPgmDetails();
   }
 }
//------------------------------------------------------------------------------
// Function : Navigate to FIM Assessment Details
//------------------------------------------------------------------------------
 function FIMDetails(fvisno,furno,fatyp,fclam,ffund,ftabt,fedat) {
   var linkUrl="patweb03.pbl?reportno=09&template=001" +
       "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+") +
       "&admissno=" + fvisno.replace(/ /g,"+") +
       "&pmupg001=" + furno.replace(/ /g,"+") +
       "&pmupg002=" + fatyp.replace(/ /g,"+") +
       "&pmupg003=" + fclam.replace(/ /g,"+") +
       "&pmupg004=" + ffund.replace(/ /g,"+") +
       "&pmupg005=" + ftabt.replace(/ /g,"+") +
       "&pmupg006=" + fedat.replace(/ /g,"+");
       location.href=linkUrl;
 }
//------------------------------------------------------------------------------
// Function : Perform Validation and Submit the Update Form if ok
//------------------------------------------------------------------------------
 function UpdatePgmDetails() {
  if(valPgmDetails()){
    setPgmDetails();
    postPgmDetails();
  }
}
function valPgmDetails() {
  if (!validateMandatory(UpdateForm)) {
   return false;
  }
  if (!isWhitespace(UpdateForm.pmupg015.value)) {
    var ChkDate1=SetDateYYYYMMDD(PatientDOB);
    var ChkDate2=SetDateYYYYMMDD(UpdateForm.pmupg015.value);
    if (ChkDate2<=ChkDate1) {
        alert('Therapy Start Date must be greater than patient\'s ' +
              'Date of birth');
        UpdateForm.pmupg015.select();
        UpdateForm.pmupg015.focus();
        return false;
    }
    if (ChkDate2>UpdateForm.d_currdte.value) {
        alert('Therapy Start Date must be less than or equal to the ' +
              'current date');
        UpdateForm.pmupg015.select();
        UpdateForm.pmupg015.focus();
        return false;
    }
  }
  if (!isWhitespace(UpdateForm.pmupg019.value)) {
    var ChkDate1=SetDateYYYYMMDD(UpdateForm.pmupg015.value);
    var ChkDate2=SetDateYYYYMMDD(UpdateForm.pmupg019.value);
    if (ChkDate2<ChkDate1) {
        alert('Therapy End Date must be greater or equal to Therapy ' +
              'Start Date');
        UpdateForm.pmupg019.select();
        UpdateForm.pmupg019.focus();
        return false;
    }
  }
  if (!isWhitespace(UpdateForm.pmupg022.value)) {
    var ChkDate1=SetDateYYYYMMDD(UpdateForm.pmupg015.value);
    var ChkDate2=SetDateYYYYMMDD(UpdateForm.pmupg022.value);
    if (ChkDate2<ChkDate1) {
        alert('Date of Rehab. Plan must be greater or equal to ' +
              'Therapy Start Date');
        UpdateForm.pmupg022.select();
        UpdateForm.pmupg022.focus();
        return false;
    }
    if (ChkDate2>UpdateForm.d_currdte.value) {
        alert('Date of Rehab. Plan must be less than or equal ' +
              'to the current date');
        UpdateForm.pmupg022.select();
        UpdateForm.pmupg022.focus();
        return false;
    }
  }
  if (!isWhitespace(UpdateForm.pmupg023.value)) {
    var ChkDate1=SetDateYYYYMMDD(UpdateForm.pmupg015.value);
    var ChkDate2=SetDateYYYYMMDD(UpdateForm.pmupg023.value);
    if (ChkDate2<ChkDate1) {
        alert('Date of Discharge Rehab. Plan must be greater than ' +
              'or equal to Therapy Start Date');
        UpdateForm.pmupg023.select();
        UpdateForm.pmupg023.focus();
        return false;
    }
    if (ChkDate2>UpdateForm.d_currdte.value) {
        alert('Date of Discharge Rehab. Plan must be less than ' +
              'or equal to the current date');
        UpdateForm.pmupg023.select();
        UpdateForm.pmupg023.focus();
        return false;
    }
  }
  if (!isWhitespace(UpdateForm.pmapg032.value)) {
     var errfound=0;
     if (!isWhitespace(UpdateForm.pmapg015.value)) {  
        var ChkDate1=SetDateYYYYMMDD(UpdateForm.pmapg032.value);
        var ChkDate2=SetDateYYYYMMDD(UpdateForm.pmapg015.value);
        if (ChkDate1<ChkDate2) {
           errfound=1; }
     }
     if (!isWhitespace(UpdateForm.pmapg043.value)) {  
        var ChkDate1=SetDateYYYYMMDD(UpdateForm.pmapg032.value);
        var ChkDate2=SetDateYYYYMMDD(UpdateForm.pmapg043.value);
        if (ChkDate1<ChkDate2) {
           errfound=1; }
     }
     if (errfound==1) {
        alert('Referral Date must be after the acute episode and ' +
              'injury onset date');
        UpdateForm.pmapg032.select();
        UpdateForm.pmapg032.focus();
        return false;
     }
  }
  if (!isWhitespace(UpdateForm.pmapg078.value)) {
     var errfound=0;
     if (!isWhitespace(UpdateForm.pmapg032.value)) {  
        var ChkDate1=SetDateYYYYMMDD(UpdateForm.pmapg078.value);
        var ChkDate2=SetDateYYYYMMDD(UpdateForm.pmapg032.value);
        if (ChkDate1<ChkDate2) {
           errfound=1; }
     }
     if (!isWhitespace(UpdateForm.pmapg015.value)) {  
        var ChkDate1=SetDateYYYYMMDD(UpdateForm.pmapg078.value);
        var ChkDate2=SetDateYYYYMMDD(UpdateForm.pmapg015.value);
        if (ChkDate1<ChkDate2) {
           errfound=1; }
     }
     if (!isWhitespace(UpdateForm.pmapg033.value)) {  
        var ChkDate1=SetDateYYYYMMDD(UpdateForm.pmapg078.value);
        var ChkDate2=SetDateYYYYMMDD(UpdateForm.pmapg033.value);
        if (ChkDate1<ChkDate2) {
           errfound=1; }
     }
     if (!isWhitespace(UpdateForm.pmapg043.value)) {  
        var ChkDate1=SetDateYYYYMMDD(UpdateForm.pmapg078.value);
        var ChkDate2=SetDateYYYYMMDD(UpdateForm.pmapg043.value);
        if (ChkDate1<ChkDate2) {
           errfound=1; }
     }
     if (errfound==1) {
        alert('Date clinically ready for rehabilitation must be  ' +
              'after the referral date, assessment date, acute episode ' +
              'date and injury onset date');
        UpdateForm.pmapg078.select();
        UpdateForm.pmapg078.focus();
        return false;
     }
  }
  return true;
}
function setPgmDetails(){
   if (document.UpdateForm.d_pmapg034.checked==true) {
       document.UpdateForm.pmapg034.value="1"; }
   else { document.UpdateForm.pmapg034.value="0"; }
   if (document.UpdateForm.d_pmapg035.checked==true) {
       document.UpdateForm.pmapg035.value="1"; }
   else { document.UpdateForm.pmapg035.value="0"; }
   if (document.UpdateForm.d_pmapg036.checked==true) {
       document.UpdateForm.pmapg036.value="1"; }
   else { document.UpdateForm.pmapg036.value="0"; }
   if (document.UpdateForm.d_pmapg037.checked==true) {
       document.UpdateForm.pmapg037.value="1"; }
   else { document.UpdateForm.pmapg037.value="0"; }
   if (document.UpdateForm.d_pmapg038.checked==true) {
       document.UpdateForm.pmapg038.value="1"; }
   else { document.UpdateForm.pmapg038.value="0"; }
   if (document.UpdateForm.d_pmapg039.checked==true) {
       document.UpdateForm.pmapg039.value="1"; }
   else { document.UpdateForm.pmapg039.value="0"; }
   if (document.UpdateForm.d_pmapg040.checked==true) {
       document.UpdateForm.pmapg040.value="1"; }
   else { document.UpdateForm.pmapg040.value="0"; }
   if (document.UpdateForm.d_pmapg041.checked==true) {
       document.UpdateForm.pmapg041.value="1"; }
   else { document.UpdateForm.pmapg041.value="0"; }
   if (document.UpdateForm.d_pmapg042.checked==true) {
       document.UpdateForm.pmapg042.value="1"; }
   else { document.UpdateForm.pmapg042.value="0"; }
   if (document.UpdateForm.d_pmapg046.checked==true) {
       document.UpdateForm.pmapg046.value="1"; }
   else { document.UpdateForm.pmapg046.value="0"; }
   if (document.UpdateForm.d_pmapg047.checked==true) {
       document.UpdateForm.pmapg047.value="1"; }
   else { document.UpdateForm.pmapg047.value="0"; }
   if (document.UpdateForm.d_pmapg048.checked==true) {
       document.UpdateForm.pmapg048.value="1"; }
   else { document.UpdateForm.pmapg048.value="0"; }
   if (document.UpdateForm.d_pmapg049.checked==true) {
       document.UpdateForm.pmapg049.value="1"; }
   else { document.UpdateForm.pmapg049.value="0"; }
   if (document.UpdateForm.d_pmapg050.checked==true) {
       document.UpdateForm.pmapg050.value="1"; }
   else { document.UpdateForm.pmapg050.value="0"; }
   if (document.UpdateForm.d_pmapg051.checked==true) {
       document.UpdateForm.pmapg051.value="1"; }
   else { document.UpdateForm.pmapg051.value="0"; }
   if (document.UpdateForm.d_pmapg052.checked==true) {
       document.UpdateForm.pmapg052.value="1"; }
   else { document.UpdateForm.pmapg052.value="0"; }
   if (document.UpdateForm.d_pmapg053.checked==true) {
       document.UpdateForm.pmapg053.value="1"; }
   else { document.UpdateForm.pmapg053.value="0"; }
   if (document.UpdateForm.d_pmapg054.checked==true) {
       document.UpdateForm.pmapg054.value="1"; }
   else { document.UpdateForm.pmapg054.value="0"; }

// Conditional Fields - Traumatic Brain Injury
    document.UpdateForm.pmapg055.value="";
    document.UpdateForm.pmapg056.value="";
    if ( document.UpdateForm.d_pmapg055 != undefined ) {
         document.UpdateForm.pmapg055.value=document.UpdateForm.d_pmapg055.value }
    if ( document.UpdateForm.d_pmapg056 != undefined ) {
         document.UpdateForm.pmapg056.value=document.UpdateForm.d_pmapg056.value }

// Conditional Fields - Spinal Cord Injury
    document.UpdateForm.pmapg057.value="";
    document.UpdateForm.pmapg058.value="";
    document.UpdateForm.pmapg059.value="";
    document.UpdateForm.pmapg060.value="";
    document.UpdateForm.pmapg061.value="";
    if ( document.UpdateForm.d_pmapg057 != undefined ) {
         document.UpdateForm.pmapg057.value=document.UpdateForm.d_pmapg057.value }
    if ( document.UpdateForm.d_pmapg058 != undefined ) {
         document.UpdateForm.pmapg058.value=document.UpdateForm.d_pmapg058.value }
    if ( document.UpdateForm.d_pmapg059 != undefined ) {
         document.UpdateForm.pmapg059.value=document.UpdateForm.d_pmapg059.value }
    if ( document.UpdateForm.d_pmapg060 != undefined ) {
         document.UpdateForm.pmapg060.value=document.UpdateForm.d_pmapg060.value }
    if ( document.UpdateForm.d_pmapg061 != undefined ) {
         document.UpdateForm.pmapg061.value=document.UpdateForm.d_pmapg061.value }

// Conditional Fields - Amputee
    document.UpdateForm.pmapg062.value="";
    document.UpdateForm.pmapg063.value="";
    document.UpdateForm.pmapg064.value="0";
    document.UpdateForm.pmapg065.value="0";
    document.UpdateForm.pmapg066.value="0";
    document.UpdateForm.pmapg067.value="";
    document.UpdateForm.pmapg068.value="";
    document.UpdateForm.pmapg069.value="";
    document.UpdateForm.pmapg070.value="";
    document.UpdateForm.pmapg071.value="";
    document.UpdateForm.pmapg072.value="";
    document.UpdateForm.pmapg073.value="";
    document.UpdateForm.pmapg074.value="";
    if ( document.UpdateForm.d_pmapg062 != undefined ) {
         document.UpdateForm.pmapg062.value=document.UpdateForm.d_pmapg062.value }
    if ( document.UpdateForm.d_pmapg063 != undefined ) {
         document.UpdateForm.pmapg063.value=document.UpdateForm.d_pmapg063.value }
    if ( document.UpdateForm.d_pmapg064 != undefined ) {
       if (document.UpdateForm.d_pmapg064.checked==true) {
           document.UpdateForm.pmapg064.value="1"; }
       }
    if ( document.UpdateForm.d_pmapg065 != undefined ) {
       if (document.UpdateForm.d_pmapg065.checked==true) {
           document.UpdateForm.pmapg065.value="1"; }
       }
    if ( document.UpdateForm.d_pmapg066 != undefined ) {
       if (document.UpdateForm.d_pmapg066.checked==true) {
           document.UpdateForm.pmapg066.value="1"; }
       }
    if ( document.UpdateForm.d_pmapg067 != undefined ) {
         document.UpdateForm.pmapg067.value=document.UpdateForm.d_pmapg067.value }
    if ( document.UpdateForm.d_pmapg068 != undefined ) {
         document.UpdateForm.pmapg068.value=document.UpdateForm.d_pmapg068.value }
    if ( document.UpdateForm.d_pmapg069 != undefined ) {
         document.UpdateForm.pmapg069.value=document.UpdateForm.d_pmapg069.value }
    if ( document.UpdateForm.d_pmapg070 != undefined ) {
         document.UpdateForm.pmapg070.value=document.UpdateForm.d_pmapg070.value }
    if ( document.UpdateForm.d_pmapg071 != undefined ) {
         document.UpdateForm.pmapg071.value=document.UpdateForm.d_pmapg071.value }
    if ( document.UpdateForm.d_pmapg072 != undefined ) {
         document.UpdateForm.pmapg072.value=document.UpdateForm.d_pmapg072.value }
    if ( document.UpdateForm.d_pmapg073 != undefined ) {
         document.UpdateForm.pmapg073.value=document.UpdateForm.d_pmapg073.value } 
    if ( document.UpdateForm.d_pmapg074 != undefined ) {
         document.UpdateForm.pmapg074.value=document.UpdateForm.d_pmapg074.value }

// Conditional Fields - Reconditional Impairment Codes
    document.UpdateForm.pmapg074.value="";
    document.UpdateForm.pmapg075.value="";
    document.UpdateForm.pmapg076.value="";
    document.UpdateForm.pmapg077.value="";
    if ( document.UpdateForm.d_pmapg074 != undefined ) {
         document.UpdateForm.pmapg074.value=document.UpdateForm.d_pmapg074.value }
    if ( document.UpdateForm.d_pmapg075 != undefined ) {
         document.UpdateForm.pmapg075.value=document.UpdateForm.d_pmapg075.value }
    if ( document.UpdateForm.d_pmapg076 != undefined ) {
         document.UpdateForm.pmapg076.value=document.UpdateForm.d_pmapg076.value }
    if ( document.UpdateForm.d_pmapg077 != undefined ) {
         document.UpdateForm.pmapg077.value=document.UpdateForm.d_pmapg077.value }

// this will redirect the page to itself on an update
   redirectURL="patweb03.pbl?reportno=06&template=005" +
       "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+") +
       "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+") +
       "&pmupg001=" + UpdateForm.pmupg001.value.replace(/ /g,"+") 
//
    if(document.UpdateForm.admntype!=undefined) {
      redirectURL+="&pmupg002=" + UpdateForm.admntype.value.replace(/ /g,"+") 
    } else {
      redirectURL+="&pmupg002=" + UpdateForm.pmupg002.value.replace(/ /g,"+") 
    }
//
    redirectURL+="&pmupg003=" + UpdateForm.pmupg003.value.replace(/ /g,"+") +
                 "&pmupg004=" + UpdateForm.pmupg004.value.replace(/ /g,"+") +
                 "&pmupg005=" + UpdateForm.pmupg005.value.replace(/ /g,"+") +
                 "&pmupg006=" + UpdateForm.expirydt.value.replace(/ /g,"+") +
                 "&suprflag=" + UpdateForm.suprflag.value.replace(/ /g,"+");

   document.UpdateForm.redirect.value=redirectURL;
   document.UpdateForm.nextpage.value="1";
}
function postPgmDetails(){
   setFormactn('U');
}
//------------------------------------------------------------------------------
// Function : Set fields to mandatory if Therapy End Date exists
//------------------------------------------------------------------------------
 function chkFutureField() {
   if (!isWhitespace(UpdateForm.pmupg019.value)) {
      UpdateForm.pmapg008.className="Mandatory";
      UpdateForm.pmapg011.className="Mandatory";
      UpdateForm.pmapg012.className="Mandatory";
      UpdateForm.pmapg013.className="Mandatory";
      UpdateForm.pmapg014.className="Mandatory";
      UpdateForm.pmapg031.className="Mandatory";
      UpdateForm.pmapg027.className="Mandatory";
      UpdateForm.pmapg045.className="Mandatory Date";
      UpdateForm.pmapg078.className="Mandatory Date";
      UpdateForm.pmupg015.className="Mandatory Date";
      chkPTAField();
      chkCarePrMandatory();
      chkApeaMandatory();
      chkIDestMandatory();
      chkLspdMandatory();
      chkEsPostMandatory();
   } else {
      UpdateForm.pmapg008.className="FutureField";
      UpdateForm.pmapg011.className="FutureField";
      UpdateForm.pmapg012.className="FutureField";
      UpdateForm.pmapg013.className="FutureField";
      UpdateForm.pmapg014.className="FutureField";
      UpdateForm.pmapg015.className="FutureField Date";
      UpdateForm.pmapg027.className="FutureField";
      UpdateForm.pmapg031.className="FutureField";
      UpdateForm.pmapg032.className="FutureField Date";
      UpdateForm.pmapg045.className="FutureField Date";
      UpdateForm.pmapg078.className="FutureField Date";
      UpdateForm.pmupg015.className="FutureField Date";
      UpdateForm.pmupg022.className="FutureField Date";
      UpdateForm.pmupg023.className="FutureField Date";
      chkPTAField();
      chkCarePrMandatory();
      chkApeaMandatory();
      chkIDestMandatory();
      chkLspdMandatory();
      chkEsPostMandatory();
     }
 }
//------------------------------------------------------------------------------
// Function : Set PTA fields dependant on values entered
//------------------------------------------------------------------------------
 function chkPTAField() {
   if ( document.UpdateForm.d_pmapg055 == undefined ) {
     return;
   }
   if (!isWhitespace(UpdateForm.d_pmapg055.value)) {
      UpdateForm.d_pmapg056.readOnly=true;
      UpdateForm.d_pmapg056.className="ReadOnly";
      UpdateForm.d_pmapg056.disabled=true;
   } else {
      UpdateForm.d_pmapg056.disabled=false;
      if (!isWhitespace(UpdateForm.pmupg019.value)) {
         UpdateForm.d_pmapg056.className="Mandatory";
      } else {
         UpdateForm.d_pmapg056.className="FutureField";
      }
   }
   if (!isWhitespace(UpdateForm.d_pmapg056.value)) {
      UpdateForm.d_pmapg055.readOnly=true;
      UpdateForm.d_pmapg055.className="ReadOnly";
   } else {
      UpdateForm.d_pmapg055.readOnly=false;
      if (!isWhitespace(UpdateForm.pmupg019.value)) {
         UpdateForm.d_pmapg055.className="Mandatory Date";
      } else {
         UpdateForm.d_pmapg055.className="FutureField Date";
      }
   }
 }
//------------------------------------------------------------------------------
// Function : Set Carer Status Prior to mandatory if Accom Prior Indic1 is 1
//------------------------------------------------------------------------------
 function chkCarePrMandatory() {
   UpdateForm.pmapg029.className="";
   if ( (!isWhitespace(UpdateForm.pmapg027.value)) &&
        (!isWhitespace(UpdateForm.pmupg019.value)) ) {
      var i=UpdateForm.pmapg027.selectedIndex
      if  (UpdateForm.pmapg027.options[i].value.substr(3,1)=="1") {
          UpdateForm.pmapg029.className="Mandatory";
      }
   }
 }
//------------------------------------------------------------------------------
// Function : Set Final Destination to Mandatory based on Mode of Episode End
//------------------------------------------------------------------------------
 function chkApeaMandatory() {
   UpdateForm.pmapg028.className="";
   UpdateForm.pmapg079.className="";
   if ( (!isWhitespace(UpdateForm.pmapg012.value)) &&
        (!isWhitespace(UpdateForm.pmupg019.value)) ) {
      if  (UpdateForm.pmapg012.value.substr(3,1)=="1") {
          UpdateForm.pmapg028.className="Mandatory";
          UpdateForm.pmapg079.className="";
      }
      if  (UpdateForm.pmapg012.value.substr(3,1)=="2") {
          UpdateForm.pmapg079.className="Mandatory";
          UpdateForm.pmapg028.className="Mandatory";
      }
   }
 }
//------------------------------------------------------------------------------
// Function : Set Interim Destination to Mandatory based on Mode of Episode End
//------------------------------------------------------------------------------
 function chkIDestMandatory() {
   UpdateForm.pmapg079.className="";
   if ( (!isWhitespace(UpdateForm.pmapg012.value)) &&
        (!isWhitespace(UpdateForm.pmupg019.value)) ) {
      if  (UpdateForm.pmapg012.value.substr(3,1)=="2") {
          UpdateForm.pmapg079.className="Mandatory";
      }
   }
 }
//------------------------------------------------------------------------------
// Function : Set Carer Status Post Discharge based on Interim/Final Destination
//------------------------------------------------------------------------------
 function chkLspdMandatory() {
   UpdateForm.pmapg030.className="";
   if ( (!isWhitespace(UpdateForm.pmapg028.value)) &&
        (!isWhitespace(UpdateForm.pmupg019.value)) ) {
      if  ((UpdateForm.pmapg028.value.substr(3,1)=="1" || 
           UpdateForm.pmapg028.value.substr(3,1)=="2")) {
          UpdateForm.pmapg030.className="Mandatory";
      }
   }
 }
//------------------------------------------------------------------------------
// Function : Set Employment Status Post to Mandatory based on Emp Status Prior
//------------------------------------------------------------------------------
 function chkEsPostMandatory() {
   UpdateForm.pmapg044.className="";
   if ( (!isWhitespace(UpdateForm.pmapg031.value)) &&
        (!isWhitespace(UpdateForm.pmupg019.value)) ) {
      if  (UpdateForm.pmapg031.value.substr(3,1)=="1") {
          UpdateForm.pmapg044.className="Mandatory";
      }
   }
 }   
//------------------------------------------------------------------------------
// Function : Display/Hide Conditional Fields
//------------------------------------------------------------------------------
 function ConditionalFields() {
// Clear Traumatic Brain Injury Fields
    dateEmPTAHead.innerHTML=blanklabel.innerHTML;
    dateEmPTACode.innerHTML="";
    duratnPTAHead.innerHTML=blanklabel.innerHTML;
    duratnPTACode.innerHTML="";

// Clear Spinal Cord Injury Fields
    eStartASIAHead.innerHTML=blanklabel.innerHTML;
    eStartASIACode.innerHTML="";
    eStartSCIHead.innerHTML=blanklabel.innerHTML;
    eStartSCICode.innerHTML="";
    ventEEndHead.innerHTML=blanklabel.innerHTML;
    ventEEndCode.innerHTML="";
    eEndASIAHead.innerHTML=blanklabel.innerHTML;
    eEndASIACode.innerHTML="";
    eEndSCIHead.innerHTML=blanklabel.innerHTML;
    eEndSCICode.innerHTML="";

// Clear Amputee Fields
    dateCastingHead.innerHTML=blanklabel.innerHTML;
    dateCastingCode.innerHTML="";
    pCarestartHead.innerHTML=blanklabel.innerHTML;
    pCarestartCode.innerHTML="";
    pAmputeeCareHead.innerHTML=blanklabel.innerHTML;
    pAmputeeCareCode.innerHTML="";
    pCareEndHead.innerHTML=blanklabel.innerHTML;
    pcareEndCode.innerHTML="";
    prostheticHead.innerHTML=blanklabel.innerHTML;
    prostheticCode.innerHTML="";
    dateProstheticHead.innerHTML=blanklabel.innerHTML;
    dateProstheticCode.innerHTML="";
    reasonDelayHead.innerHTML=blanklabel.innerHTML;
    reasonDelayCode.innerHTML="";
    timedGetUpHead.innerHTML=blanklabel.innerHTML;
    timedGetUpCode.innerHTML="";
    d6minWalkHead.innerHTML=blanklabel.innerHTML;
    d6minWalkCode.innerHTML="";
    d10MtrWalkHead.innerHTML=blanklabel.innerHTML;
    d10MtrWalkCode.innerHTML="";

// Clear Reconditioning Impairment Codes Injury Fields
    fraility1Head.innerHTML=blanklabel.innerHTML;
    fraility1Code.innerHTML="";
    fraility2Head.innerHTML=blanklabel.innerHTML;
    fraility2Code.innerHTML="";
    partInTherapyHead.innerHTML=blanklabel.innerHTML;
    partInTherapyCode.innerHTML="";
    fallenHead.innerHTML=blanklabel.innerHTML;
    fallenCode.innerHTML="";
    weightLossHead.innerHTML=blanklabel.innerHTML;
    weightLossCode.innerHTML="";

// Display Traumatic Brain Injury Fields
 if ( document.UpdateForm.pmapg008.value.substr(0,5) == "02.22" ||
      document.UpdateForm.pmapg008.value.substr(0,5) == "02.21" ||
      document.UpdateForm.pmapg008.value.substr(0,5) == "14.1"  ||
      document.UpdateForm.pmapg008.value.substr(0,5) == "14.2") {
    dateEmPTAHead.innerHTML=dateEmPTAhd.innerHTML;
    dateEmPTACode.innerHTML=dateEmPTAcd.innerHTML;
    duratnPTAHead.innerHTML=duratnPTAhd.innerHTML;
    duratnPTACode.innerHTML=duratnPTAcd.innerHTML;
    for (var i =0 ; i < document.UpdateForm.d_pmapg056.length; i++) {
      if (document.UpdateForm.d_pmapg056.options[i].value ==
                                document.UpdateForm.pmapg056.value) {
          document.UpdateForm.d_pmapg056.selectedIndex=i } };
 }

// Display Spinal Cord Injury Fields
 if ( document.UpdateForm.pmapg008.value.substr(0,2) == "04" ||
      document.UpdateForm.pmapg008.value.substr(0,5) == "14.1" ||
      document.UpdateForm.pmapg008.value.substr(0,5) == "14.3") {
    eStartASIAHead.innerHTML=eStartASIAhd.innerHTML;
    eStartASIACode.innerHTML=eStartASIAcd.innerHTML;
    eStartSCIHead.innerHTML=eStartSCIhd.innerHTML;
    eStartSCICode.innerHTML=eStartSCIcd.innerHTML;
    ventEEndHead.innerHTML=ventEEndhd.innerHTML;
    ventEEndCode.innerHTML=ventEEndcd.innerHTML;
    eEndASIAHead.innerHTML=eEndASIAhd.innerHTML;
    eEndASIACode.innerHTML=eEndASIAcd.innerHTML;
    eEndSCIHead.innerHTML=eEndSCIhd.innerHTML;
    eEndSCICode.innerHTML=eEndSCIcd.innerHTML;
    for (var i =0 ; i < document.UpdateForm.d_pmapg060.length; i++) {
      if (document.UpdateForm.d_pmapg060.options[i].value ==
                                document.UpdateForm.pmapg060.value) {
          document.UpdateForm.d_pmapg060.selectedIndex=i } };
 }

// Display Amputee Fields
 if ( document.UpdateForm.pmapg008.value.substr(0,2) == "05" ) {
    dateCastingHead.innerHTML=dateCastinghd.innerHTML;
    dateCastingCode.innerHTML=dateCastingcd.innerHTML;
    pCarestartHead.innerHTML=pCarestarthd.innerHTML;
    pCarestartCode.innerHTML=pCarestartcd.innerHTML;
    pAmputeeCareHead.innerHTML=pAmputeeCarehd.innerHTML;
    pAmputeeCareCode.innerHTML=pAmputeeCarecd.innerHTML;
    pCareEndHead.innerHTML=pCareEndhd.innerHTML;
    pcareEndCode.innerHTML=pCareEndcd.innerHTML;
    prostheticHead.innerHTML=prosthetichd.innerHTML;
    prostheticCode.innerHTML=prostheticcd.innerHTML;
    dateProstheticHead.innerHTML=dateProsthetichd.innerHTML;
    dateProstheticCode.innerHTML=dateProstheticcd.innerHTML;
    reasonDelayHead.innerHTML=reasonDelayhd.innerHTML;
    reasonDelayCode.innerHTML=reasonDelaycd.innerHTML;
    if ( document.UpdateForm.pmapg071.value != "" ) {
      timedGetUpHead.innerHTML=timedGetUphd.innerHTML;
      timedGetUpCode.innerHTML=timedGetUpcd.innerHTML;
    }
    timedGetUpHeadNew.innerHTML=timedGetUphdNew.innerHTML;
    timedGetUpCodeNew.innerHTML=timedGetUpcdNew.innerHTML;
    d6minWalkHead.innerHTML=d6minWalkhd.innerHTML;
    d6minWalkCode.innerHTML=d6minWalkcd.innerHTML;
    if ( document.UpdateForm.pmapg073.value != "" ) {
      d10MtrWalkHead.innerHTML=d10MtrWalkhd.innerHTML;
      d10MtrWalkCode.innerHTML=d10MtrWalkcd.innerHTML;
    }
    d10MtrWalkHeadNew.innerHTML=d10MtrWalkhdNew.innerHTML;
    d10MtrWalkCodeNew.innerHTML=d10MtrWalkcdNew.innerHTML;
    fraility1Head.innerHTML=frailityhd.innerHTML;
    fraility1Code.innerHTML=frailitycd.innerHTML;
    if ( document.UpdateForm.pmapg064.value == "1" ) {
       document.UpdateForm.d_pmapg064.checked="1";  }
    if ( document.UpdateForm.pmapg065.value == "1" ) {
       document.UpdateForm.d_pmapg065.checked="1";  }
    if ( document.UpdateForm.pmapg066.value == "1" ) {
       document.UpdateForm.d_pmapg066.checked="1";  }
    for (var i =0 ; i < document.UpdateForm.d_pmapg068.length; i++) {
      if (document.UpdateForm.d_pmapg068.options[i].value ==
                                document.UpdateForm.pmapg068.value) {
          document.UpdateForm.d_pmapg068.selectedIndex=i } };
 }

// Display Reconditioning Impairment Codes Fields
 if ( document.UpdateForm.pmapg008.value.substr(0,2) == "16" ) {
    fraility2Head.innerHTML=frailityhd.innerHTML;
    fraility2Code.innerHTML=frailitycd.innerHTML;
    partInTherapyHead.innerHTML=partInTherapyhd.innerHTML;
    partInTherapyCode.innerHTML=partInTherapycd.innerHTML;
    fallenHead.innerHTML=fallenhd.innerHTML;
    fallenCode.innerHTML=fallencd.innerHTML;
    weightLossHead.innerHTML=weightLosshd.innerHTML;
    weightLossCode.innerHTML=weightLosscd.innerHTML;
    for (var i =0 ; i < document.UpdateForm.d_pmapg075.length; i++) {
      if (document.UpdateForm.d_pmapg075.options[i].value ==
                                document.UpdateForm.pmapg075.value) {
          document.UpdateForm.d_pmapg075.selectedIndex=i } };
    for (var i =0 ; i < document.UpdateForm.d_pmapg076.length; i++) {
      if (document.UpdateForm.d_pmapg076.options[i].value ==
                                document.UpdateForm.pmapg076.value) {
          document.UpdateForm.d_pmapg076.selectedIndex=i } };
    for (var i =0 ; i < document.UpdateForm.d_pmapg077.length; i++) {
      if (document.UpdateForm.d_pmapg077.options[i].value ==
                                document.UpdateForm.pmapg077.value) {
          document.UpdateForm.d_pmapg077.selectedIndex=i } };
 }
} 
//------------------------------------------------------------------------------
// Function : checkSeconds
//------------------------------------------------------------------------------
function checkSeconds(theField) {
   if  (isWhitespace(theField.value)) {
       return;
   }
  if ( (theField.value.match(/\./g)) || (theField.value.match(/\+/g)) ) {
     alert( theField.title + " Must be in Seconds")
     theField.focus()
     return false }
  if (isFinite(theField.value)) {
    return;
  } else {
    alert( theField.title + " Must be in Seconds")
 }
}

//------------------------------------------------------------------------------
// Function : Validate Discharge Timed Get Up And Go
//------------------------------------------------------------------------------
 function GetUpValidation(d_pmapg071) {
   if  (!isWhitespace(d_pmapg071.value)) {
       if  (d_pmapg071.value == "  .0") {
           return; }
       else {
           var matchArr = 
               d_pmapg071.value.match(/^(\s\d)|(\d{1,2}).?\d$/);
           var numDots = d_pmapg071.value.split('.').length - 1;
           if  (matchArr == null || numDots == 0) {
               alert('Invalid Discharge Timed Up and Go Value.\n' +
                     'Must be 3 digits in the form NN.N ');
               document.UpdateForm.d_pmapg071.select();
               document.UpdateForm.d_pmapg071.focus();
           }
       }
   }
 }
//------------------------------------------------------------------------------
// Function : Validate Discharge 06 Minute Walk Test
//------------------------------------------------------------------------------
 function SixMinValidation(d_pmapg072) {
   if  (!isWhitespace(d_pmapg072.value)) {
        if  (d_pmapg072.value == "   .0") {
            return; }
        else {
             var matchArr =
        d_pmapg072.value.match(/^((\s{1,2}\d)|((\s\d{2,3})|\d{1,3})).?\d$/);
             var numDots = d_pmapg072.value.split('.').length - 1;
             if  (matchArr == null || numDots == 0) {
                  alert('Invalid Discharge 06 Minute Walk Test Value.\n' +
                        'Must be 4 digits in the form NNN.N ');
                  UpdateForm.d_pmapg072.select();
                  UpdateForm.d_pmapg072.focus();
                 }
             }

       }
 }
//------------------------------------------------------------------------------
// Function : Validate Discharge 10 metre Walk Test
//------------------------------------------------------------------------------
 function TenMetreValidation(d_pmapg073) {
   if  (!isWhitespace(d_pmapg073.value)) {
        if  (d_pmapg073.value == "  .0") {
            return; }
        else {
            var matchArr = 
                d_pmapg073.value.match(/^(\s\d)|(\d{1,2}).?\d$/);
            var numDots = d_pmapg073.value.split('.').length - 1;
            if  (matchArr == null || numDots == 0) {
                 alert('Invalid Discharge 10 metre Walk Test Value.\n' +
                       'Must be 3 digits in the form NN.N ');
                 document.UpdateForm.d_pmapg073.select();
                 document.UpdateForm.d_pmapg073.focus();
                }
            }
       }
 }
//------------------------------------------------------------------------------
// Function : Delete Program - Deletes pmsupgaf, pmsupoaf, pmsapgaf and pmspiaf
//                             records (if no visits exist for the program)
//                             and redirects back to patient demographics
//------------------------------------------------------------------------------
 function prgrmDelete(theForm) {

   theForm.redirect.value="patweb98.pbl?reportno=01&template=001" +
     "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+") +
     "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+");
   theForm.nextpage.value="1";

   theForm.updttype.value="D";
   theForm.submit();
 }
//------------------------------------------------------------------------------
// Function : Check Program - If pmsupgaf record has been selected for this U/R
//                            and  visit then alert and redirect back to the
//                            patient program screen
//------------------------------------------------------------------------------
 function noPrgrm(theForm) {
   if  (theForm.pmupg001.value == "        ") {
       alert('No program details selected for this U/R and Admission Number');

       var linkUrl="patweb03.pbl?reportno=06&template=001" +
       "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+") +
       "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+") +
       "&suprflag=" + UpdateForm.suprflag.value.replace(/ /g,"+");

       location.href=linkUrl; }
 }
//------------------------------------------------------------------------------
// Check Program Interruption Dates do not extend later than Program End Date
//------------------------------------------------------------------------------
 function checkPgmEndDate(theForm) {
   if (isWhitespace(theForm.pmupg019.value)) {
       return true; }

   if (isWhitespace(theForm.pmpitdat.value)) {
       return true; }

   if (theForm.pmpitdat.value == "99999999" ) {
       var ChkDate1=theForm.pmpitdat.value; }
   else {
       var ChkDate1=SetDateYYYYMMDD(theForm.pmpitdat.value); }
       
   var ChkDate2=SetDateYYYYMMDD(theForm.pmupg019.value);

   if (ChkDate1>ChkDate2) {
       alert('Patient Interruption Dates extend later than Program End Date');
       theForm.pmupg019.select();
       theForm.pmupg019.focus();
       return false; }

  return true;
 }
//------------------------------------------------------------------------------
// Check if AN-SNAP Auto Classification is valid for this Program
//------------------------------------------------------------------------------
function getDefaultFields(urno,atyp,clam,fund,tabl,edat,icde,asso,sdat) {  
  if (isWhitespace(icde.value)) {
      return; }
  var serverURL= "../cgi-bin/patweb03.pbl?reportno=07&updttype=3" +
        "&valdurno=" + urno.value.substr(0,8).replace(/ /g,"+") +
        "&valdatyp=" + atyp.value.substr(0,3).replace(/ /g,"+") +
        "&valdclam=" + clam.value.substr(0,3).replace(/ /g,"+") +
        "&valdfund=" + fund.value.substr(0,6).replace(/ /g,"+") +
        "&valdtabt=" + tabl.value.substr(0,3).replace(/ /g,"+") +
        "&valdedat=" + edat.value.substr(0,11).replace(/ /g,"+") +
        "&valdicde=" + icde.value.substr(0,7).replace(/ /g,"+") +
        "&valdasso=" + asso.value.substr(0,1).replace(/ /g,"+") +
        "&valdsdat=" + sdat.value.substr(0,11).replace(/ /g,"+");
  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {
      return; }

  ReturnValue=returnValue.return_value.split("|");
  var clss = ReturnValue[0];
  var vers = ReturnValue[1];

  if (isWhitespace(clss)) {
      return; } 

  var r=confirm("AN SNAP Auto Classification\n\n" +
                "AN SNAP Class " + clss + " Version " + vers +
                " has been found\n" + 
                "Select OK to use, Cancel to ignore this match");
  if (r==true) {
      document.UpdateForm.pmapg010.value = clss;
      document.UpdateForm.pmapg009.value = vers;
      valANSNAPClassCode(document.UpdateForm.pmapg010,
                         document.UpdateForm.pmapg009,
                         document.UpdateForm.d_pmapg010);
      return; }
}
//------------------------------------------------------------------------------
// Check if AN-SNAP Auto Classification is valid for this Program on page load
//------------------------------------------------------------------------------
function checkClassVers() {
   if (!isWhitespace(document.UpdateForm.pmapg010.value)) {
       return; }
   if (UpdateForm.showcodg.value=='1') {
       return;  }
   if (UpdateForm.showcomm.value=='1') {
       return;  }
   getDefaultFields(document.UpdateForm.pmupg001,document.UpdateForm.pmupg002,
                    document.UpdateForm.pmupg003,document.UpdateForm.pmupg004,
                    document.UpdateForm.pmupg005,document.UpdateForm.pmupg006,
                    document.UpdateForm.pmapg008,document.UpdateForm.pmapg026,
                    document.UpdateForm.pmupg015);
}
//------------------------------------------------------------------------------
// Display Program Maintenance Comments
//------------------------------------------------------------------------------
function showCommentsPage() {
  if (UpdateForm.showcomm.value=='1') {
      var linkUrl="patweb03.pbl?reportno=11&template=001" +
          "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+") +
          "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+") +
          "&pmupg001=" + UpdateForm.pmupg001.value.replace(/ /g,"+") +
          "&pmupg002=" + UpdateForm.pmupg002.value.replace(/ /g,"+") +
          "&pmupg003=" + UpdateForm.pmupg003.value.replace(/ /g,"+") +
          "&pmupg004=" + UpdateForm.pmupg004.value.replace(/ /g,"+") +
          "&pmupg005=" + UpdateForm.pmupg005.value.replace(/ /g,"+") +
          "&pmupg006=" + UpdateForm.pmupg006.value.replace(/ /g,"+") +
          "&suprflag=" + UpdateForm.suprflag.value.replace(/ /g,"+");
  var Left=(document.body.clientWidth-1000)/2;
  DFrameLink(linkUrl,50,Left,1000,450);
 }
}
//.
//==============================================================================
// patweb0308 functions
//==============================================================================
//.
 function addPgmInterrupt() {
   var linkUrl="patweb03.pbl?reportno=08&template=002" +
       "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+") +
       "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+") +
       "&pmupg001=" + SelectCode.pmupg001.value.replace(/ /g,"+") +
       "&pmupg002=" + SelectCode.pmupg002.value.replace(/ /g,"+") +
       "&pmupg003=" + SelectCode.pmupg003.value.replace(/ /g,"+") +
       "&pmupg004=" + SelectCode.pmupg004.value.replace(/ /g,"+") +
       "&pmupg005=" + SelectCode.pmupg005.value.replace(/ /g,"+") +
       "&pmupg006=" + SelectCode.pmupg006.value.replace(/ /g,"+");
  var Left=(document.body.clientWidth-800)/2;
  DFrameLink(linkUrl,200,Left,800,350);
 }
 function updatePGMInterrupt(urno,atyp,clam,fund,tabt,edat,cntr) {
   var linkUrl="patweb03.pbl?reportno=08&template=003" +
       "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+") +
       "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+") +
       "&pmupg001=" + urno.replace(/ /g,"+") +
       "&pmupg002=" + atyp.replace(/ /g,"+") +
       "&pmupg003=" + clam.replace(/ /g,"+") +
       "&pmupg004=" + fund.replace(/ /g,"+") +
       "&pmupg005=" + tabt.replace(/ /g,"+") +
       "&pmupg006=" + edat.replace(/ /g,"+") +
       "&pmpit001=" + urno.replace(/ /g,"+") +
       "&pmpit002=" + atyp.replace(/ /g,"+") +
       "&pmpit003=" + clam.replace(/ /g,"+") +
       "&pmpit004=" + fund.replace(/ /g,"+") +
       "&pmpit005=" + tabt.replace(/ /g,"+") +
       "&pmpit006=" + edat.replace(/ /g,"+") +
       "&pmpit007=" + cntr.replace(/ /g,"+");
  var Left=(document.body.clientWidth-800)/2;
  DFrameLink(linkUrl,200,Left,800,350);
 }
//------------------------------------------------------------------------------
// Function : Validate Entered Dates
//------------------------------------------------------------------------------
 function valFromDateToDate(theForm) {

   var ChkDate1=SetDateYYYYMMDD(theForm.prgmsdat.value);
   if (!isWhitespace(theForm.prgmdcrc.value)) {
      var ChkDate3=SetDateYYYYMMDD(theForm.prgmdcrc.value);
      if  (ChkDate3<ChkDate1) {
           ChkDate1=ChkDate3; } 
   } 
   var ChkDate2=SetDateYYYYMMDD(theForm.pmpit009.value);
   if (ChkDate2<ChkDate1) {
      if (!isWhitespace(theForm.prgmdcrc.value)) {
         alert('Interrupted From Date must be greater than or equal to ' +
               'the Date Clinically Ready for Rehab');
      } else {
         alert('Interrupted From Date must be greater than or equal to ' +
               'the Program Start Date'); }
       theForm.pmpit009.select();
       theForm.pmpit009.focus();
       return false;
   }

   if (!isWhitespace(theForm.prgmendd.value)) {
      var ChkDate1=SetDateYYYYMMDD(theForm.prgmendd.value);
      var ChkDate2=SetDateYYYYMMDD(theForm.pmpit009.value);
      if (ChkDate2>ChkDate1) {
         alert('Interrupted From Date must be less than or equal to ' +
               'the Program End Date');
         theForm.pmpit009.select();
         theForm.pmpit009.focus();
         return false;
      }
   }
   
   if  ( (!isWhitespace(theForm.prgmendd.value)) &&
         (isWhitespace(theForm.pmpit010.value)) ) {
         alert('Interrupted To Date must be less than or equal to ' +
               'the Program End Date');
         theForm.pmpit010.select();
         theForm.pmpit010.focus();
         return false;
   }
   
   if (!isWhitespace(theForm.pmpit010.value)) {
      var ChkDate1=SetDateYYYYMMDD(theForm.pmpit009.value);
      var ChkDate2=SetDateYYYYMMDD(theForm.pmpit010.value);
      if (ChkDate2<ChkDate1) {
         alert('Interrupted To Date must be greater than or equal to ' +
               'the Interrupted From Date');
         theForm.pmpit010.select();
         theForm.pmpit010.focus();
         return false;
      }
      if (!isWhitespace(theForm.prgmendd.value)) {
         var ChkDate1=SetDateYYYYMMDD(theForm.prgmendd.value);
         var ChkDate2=SetDateYYYYMMDD(theForm.pmpit010.value);
         if (ChkDate2>ChkDate1) {
            alert('Interrupted To Date must be less than or equal to ' +
                  'the Program End Date');
            theForm.pmpit010.select();
            theForm.pmpit010.focus();
            return false;
         }
      }
   }

   return true;
 }
//.
//==============================================================================
// patweb0309 functions
//==============================================================================
//.
//----------------------------------------------------------------------------
// Add New FIM scores
//----------------------------------------------------------------------------
 function AddFIMScores(type) {
    if  ((SelectForm.admexist.value == "1") &&
         (type.value == "A")) {
          alert ('Admission FIM Scores already exist.');
          return; }

    if  ((SelectForm.admexist.value != "1") &&
         ((type.value == "P") || (type.value == "D"))) {
          alert ('Admission FIM Scores do not exist.');
          return; }

    if  ((SelectForm.dscexist.value == "1") &&
         ((type.value == "P") || (type.value == "D"))) {
          alert ('Discharge FIM Scores already exist.');
          return; }

    var linkUrl="patweb03.pbl?reportno=09&template=002" +
        "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+") +
        "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+") +
        "&pmupg001=" + SelectForm.pmupg001.value.replace(/ /g,"+") +
        "&pmupg002=" + SelectForm.pmupg002.value.replace(/ /g,"+") +
        "&pmupg003=" + SelectForm.pmupg003.value.replace(/ /g,"+") +
        "&pmupg004=" + SelectForm.pmupg004.value.replace(/ /g,"+") +
        "&pmupg005=" + SelectForm.pmupg005.value.replace(/ /g,"+") +
        "&pmupg006=" + SelectForm.pmupg006.value.replace(/ /g,"+") +
        "&ptfim004=" + type.value.replace(/ /g,"+");

    var Left=(document.body.clientWidth-800)/2;
    DFrameLink(linkUrl,75,Left,800,650);
 }
//----------------------------------------------------------------------------
// update FIM scores
//----------------------------------------------------------------------------
 function updateFIMScores(fimvisit,fimdate,fimtime,fimtype) {
    var linkUrl="patweb03.pbl?reportno=09&template=002" +
        "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+") +
        "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+") +
        "&pmupg001=" + SelectForm.pmupg001.value.replace(/ /g,"+") +
        "&pmupg002=" + SelectForm.pmupg002.value.replace(/ /g,"+") +
        "&pmupg003=" + SelectForm.pmupg003.value.replace(/ /g,"+") +
        "&pmupg004=" + SelectForm.pmupg004.value.replace(/ /g,"+") +
        "&pmupg005=" + SelectForm.pmupg005.value.replace(/ /g,"+") +
        "&pmupg006=" + SelectForm.pmupg006.value.replace(/ /g,"+") +
        "&ptfim001=" + fimvisit.replace(/ /g,"+") +
        "&ptfim002=" + fimdate.replace(/ /g,"+") +
        "&ptfim003=" + fimtime.replace(/ /g,"+") +
        "&ptfim004=" + fimtype.replace(/ /g,"+");

    var Left=(document.body.clientWidth-800)/2;
    DFrameLink(linkUrl,75,Left,800,650);
 }
//------------------------------------------------------------------------------
// Function : Show FIM Score Notes Page in a Content Pop up Page
//------------------------------------------------------------------------------
 function DispNotes(DispNotes) {

   var PopUpFrameDoc=ibaGetIframeDoc('PopUpFrame');
       PopUpFrame.location.href="../lookups/" + DispNotes + ".html";

   var PopUpScreen = document.getElementById('PopUpScreen');
   var PatientMenu = document.getElementById('PatientMenu');
   var h;
   var left = document.body.clientWidth - 370 ;

   if (PatientMenu)
      { h = document.body.clientHeight - 25 -
           PatientMenu.offsetTop - PatientMenu.offsetHeight; }
   else
      { h = document.body.clientHeight - 25; }

   PopUpScreen.style.top     = document.body.scrollTop + 'px';
   PopUpScreen.style.left    = left + 'px';
   PopUpScreen.style.height  = h + 'px';
   PopUpScreen.style.width   = '350px';
   PopUpScreen.style.display = "";
 }
//------------------------------------------------------------------------------
// Function : Calculate FIM Total Scores
//------------------------------------------------------------------------------
 function calcFIMScores(theForm) {

   theForm.MSTotal.value =
       (theForm.ptfim005.value -0) + (theForm.ptfim008.value -0) +
       (theForm.ptfim011.value -0) + (theForm.ptfim014.value -0) +
       (theForm.ptfim017.value -0) + (theForm.ptfim020.value -0) +
       (theForm.ptfim023.value -0) + (theForm.ptfim026.value -0) +
       (theForm.ptfim029.value -0) + (theForm.ptfim032.value -0) +
       (theForm.ptfim035.value -0) + (theForm.ptfim039.value -0) +
       (theForm.ptfim042.value -0);

   theForm.CSTotal.value =
       (theForm.ptfim046.value -0) + (theForm.ptfim050.value -0) +
       (theForm.ptfim053.value -0) + (theForm.ptfim056.value -0) +
       (theForm.ptfim059.value -0);

   theForm.FIMTotal.value =
       (theForm.MSTotal.value -0) + (theForm.CSTotal.value -0);
 }
//------------------------------------------------------------------------------
// Function : Validate field and recalculate FIM Total Scores
//            To get around known onblur looping issue, whitespace is allowed
//            and further validation is done on submit
//------------------------------------------------------------------------------
 function valFIMScores(theForm,field) {

   if (isWhitespace(field.value))
      { return; }

   var matchArr = field.value.match(/^([1-7])$/);

   if (matchArr == null) {
       alert(field.title + ' Score must be in the range 1 to 7');
       field.select();
       field.focus();
       return; }

   calcFIMScores(theForm);
 }
//------------------------------------------------------------------------------
// Function : Set focus on first input field after readonly fields
//------------------------------------------------------------------------------
 function chkBlur(theForm) {

   if (theForm.updttype.value!="A") {
      theForm.ptfim005.select();
      theForm.ptfim005.focus();}
 }
//------------------------------------------------------------------------------
// Function : validate the nurse code
//------------------------------------------------------------------------------
 function validateNurse(code,name) {

   if (isWhitespace(code.value)) {
      return; }

   validateCode('17',code,name);
   name.value= name.value.replace(/\s*$/g,"")
 }
//------------------------------------------------------------------------------
// Function : Validate if Delete is allowed for Admission FIM
//------------------------------------------------------------------------------
 function Delete(theForm) {

   if ((theForm.chkdelet.value=="1") && (theForm.ptfim004.value=="A")) {
       alert('Other FIM Details exist for this patient.\n\n' +
             'Please delete the other FIM Details before deleting this ' +
             'Admission FIM Detail.');
       return;
   }

   theForm.updttype.value="D";
   theForm.submit();
 }
//------------------------------------------------------------------------------
// Function : Allow copy of Discharge FIM if there is a rehabilitation visit
//            within 90 days of new Admission FIM
//------------------------------------------------------------------------------
 function copyDisch(theForm) {

   if (theForm.ptfim004.value!="A")
       { return; }

   if  (theForm.admexist.value == "1")
       { return; }

   if (theForm.copydisc.value.substr(0,1)!="1")
       { return; }

   var r=confirm("Use previous Discharge FIM Details for this Admission?");
   if (!r==true)
       { return; }

// Actual Scores and Codes
   theForm.ptfim005.value=theForm.copydisc.value.substr(2,1);
   theForm.ptfim008.value=theForm.copydisc.value.substr(4,1);
   theForm.ptfim011.value=theForm.copydisc.value.substr(6,1);
   theForm.ptfim014.value=theForm.copydisc.value.substr(8,1);
   theForm.ptfim017.value=theForm.copydisc.value.substr(10,1);
   theForm.ptfim020.value=theForm.copydisc.value.substr(12,1);
   theForm.ptfim023.value=theForm.copydisc.value.substr(14,1);
   theForm.ptfim026.value=theForm.copydisc.value.substr(16,1);
   theForm.ptfim029.value=theForm.copydisc.value.substr(18,1);
   theForm.ptfim032.value=theForm.copydisc.value.substr(20,1);
   theForm.ptfim035.value=theForm.copydisc.value.substr(22,1);
   theForm.ptfim038.value=theForm.copydisc.value.substr(23,3);
   theForm.ptfim039.value=theForm.copydisc.value.substr(27,1);
   theForm.ptfim042.value=theForm.copydisc.value.substr(29,1);
   theForm.ptfim045.value=theForm.copydisc.value.substr(30,3);
   theForm.ptfim046.value=theForm.copydisc.value.substr(34,1);
   theForm.ptfim049.value=theForm.copydisc.value.substr(35,3);
   theForm.ptfim050.value=theForm.copydisc.value.substr(39,1);
   theForm.ptfim053.value=theForm.copydisc.value.substr(41,1);
   theForm.ptfim056.value=theForm.copydisc.value.substr(43,1);
   theForm.ptfim059.value=theForm.copydisc.value.substr(45,1);

// Set code selection 
  for (var i =0 ; i < document.FIMForm.ptfim038.length; i++) {
    if (document.FIMForm.ptfim038.options[i].value.substr(0,3)==
                       document.FIMForm.copydisc.value.substr(23,3)) {
         document.FIMForm.ptfim038.selectedIndex=i } };
  for (var i =0 ; i < document.FIMForm.ptfim045.length; i++) {
    if (document.FIMForm.ptfim045.options[i].value.substr(0,3)==
                       document.FIMForm.copydisc.value.substr(30,3)) {
         document.FIMForm.ptfim045.selectedIndex=i } };
  for (var i =0 ; i < document.FIMForm.ptfim049.length; i++) {
    if (document.FIMForm.ptfim049.options[i].value.substr(0,3)==
                       document.FIMForm.copydisc.value.substr(35,3)) {
         document.FIMForm.ptfim049.selectedIndex=i } };

// Goal Scores
   theForm.ptfim006.value=theForm.copydisc.value.substr(47,1);
   theForm.ptfim009.value=theForm.copydisc.value.substr(49,1);
   theForm.ptfim012.value=theForm.copydisc.value.substr(51,1);
   theForm.ptfim015.value=theForm.copydisc.value.substr(53,1);
   theForm.ptfim018.value=theForm.copydisc.value.substr(55,1);
   theForm.ptfim021.value=theForm.copydisc.value.substr(57,1);
   theForm.ptfim024.value=theForm.copydisc.value.substr(59,1);
   theForm.ptfim027.value=theForm.copydisc.value.substr(61,1);
   theForm.ptfim030.value=theForm.copydisc.value.substr(63,1);
   theForm.ptfim033.value=theForm.copydisc.value.substr(65,1);
   theForm.ptfim036.value=theForm.copydisc.value.substr(67,1);
   theForm.ptfim040.value=theForm.copydisc.value.substr(69,1);
   theForm.ptfim043.value=theForm.copydisc.value.substr(71,1);
   theForm.ptfim047.value=theForm.copydisc.value.substr(73,1);
   theForm.ptfim051.value=theForm.copydisc.value.substr(74,1);
   theForm.ptfim054.value=theForm.copydisc.value.substr(75,1);
   theForm.ptfim057.value=theForm.copydisc.value.substr(79,1);
   theForm.ptfim060.value=theForm.copydisc.value.substr(81,1);
 }
//------------------------------------------------------------------------------
// Function : Copy details from Previous Record for Progress/Discharge
//------------------------------------------------------------------------------
 function copyPrev(theForm) {

   if (theForm.ptfim004.value=="A")
       { return; }

   if (theForm.copyprev.value.substr(0,1)!="1")
       { return; }

// Goal Scores
   theForm.ptfim006.value=theForm.copyprev.value.substr(47,1);
   theForm.ptfim009.value=theForm.copyprev.value.substr(49,1);
   theForm.ptfim012.value=theForm.copyprev.value.substr(51,1);
   theForm.ptfim015.value=theForm.copyprev.value.substr(53,1);
   theForm.ptfim018.value=theForm.copyprev.value.substr(55,1);
   theForm.ptfim021.value=theForm.copyprev.value.substr(57,1);
   theForm.ptfim024.value=theForm.copyprev.value.substr(59,1);
   theForm.ptfim027.value=theForm.copyprev.value.substr(61,1);
   theForm.ptfim030.value=theForm.copyprev.value.substr(63,1);
   theForm.ptfim033.value=theForm.copyprev.value.substr(65,1);
   theForm.ptfim036.value=theForm.copyprev.value.substr(67,1);
   theForm.ptfim040.value=theForm.copyprev.value.substr(69,1);
   theForm.ptfim043.value=theForm.copyprev.value.substr(71,1);
   theForm.ptfim047.value=theForm.copyprev.value.substr(73,1);
   theForm.ptfim051.value=theForm.copyprev.value.substr(75,1);
   theForm.ptfim054.value=theForm.copyprev.value.substr(77,1);
   theForm.ptfim057.value=theForm.copyprev.value.substr(79,1);
   theForm.ptfim060.value=theForm.copyprev.value.substr(81,1);

   if (theForm.updttype.value!="A")
       { return; }

// Actual Scores and Codes
   theForm.ptfim005.value=theForm.copyprev.value.substr(2,1);
   theForm.ptfim008.value=theForm.copyprev.value.substr(4,1);
   theForm.ptfim011.value=theForm.copyprev.value.substr(6,1);
   theForm.ptfim014.value=theForm.copyprev.value.substr(8,1);
   theForm.ptfim017.value=theForm.copyprev.value.substr(10,1);
   theForm.ptfim020.value=theForm.copyprev.value.substr(12,1);
   theForm.ptfim023.value=theForm.copyprev.value.substr(14,1);
   theForm.ptfim026.value=theForm.copyprev.value.substr(16,1);
   theForm.ptfim029.value=theForm.copyprev.value.substr(18,1);
   theForm.ptfim032.value=theForm.copyprev.value.substr(20,1);
   theForm.ptfim035.value=theForm.copyprev.value.substr(22,1);
   theForm.ptfim038.value=theForm.copyprev.value.substr(23,3);
   theForm.ptfim039.value=theForm.copyprev.value.substr(27,1);
   theForm.ptfim042.value=theForm.copyprev.value.substr(29,1);
   theForm.ptfim045.value=theForm.copyprev.value.substr(30,3);
   theForm.ptfim046.value=theForm.copyprev.value.substr(34,1);
   theForm.ptfim049.value=theForm.copyprev.value.substr(35,3);
   theForm.ptfim050.value=theForm.copyprev.value.substr(39,1);
   theForm.ptfim053.value=theForm.copyprev.value.substr(41,1);
   theForm.ptfim056.value=theForm.copyprev.value.substr(43,1);
   theForm.ptfim059.value=theForm.copyprev.value.substr(45,1);

// Set code selection 
  for (var i =0 ; i < document.FIMForm.ptfim038.length; i++) {
    if (document.FIMForm.ptfim038.options[i].value.substr(0,3)==
                       document.FIMForm.copyprev.value.substr(23,3)) {
         document.FIMForm.ptfim038.selectedIndex=i } };
  for (var i =0 ; i < document.FIMForm.ptfim045.length; i++) {
    if (document.FIMForm.ptfim045.options[i].value.substr(0,3)==
                       document.FIMForm.copyprev.value.substr(30,3)) {
         document.FIMForm.ptfim045.selectedIndex=i } };
  for (var i =0 ; i < document.FIMForm.ptfim049.length; i++) {
    if (document.FIMForm.ptfim049.options[i].value.substr(0,3)==
                       document.FIMForm.copyprev.value.substr(35,3)) {
         document.FIMForm.ptfim049.selectedIndex=i } };
 }
//------------------------------------------------------------------------------
// Function : make Date and Time fields readonly is this is not an Add FIM
//                 Assessment
//            AND make Goal Fields readonly if this is not an Admission FIM
//                 Assessment
//------------------------------------------------------------------------------
 function chgReadOnly(theForm) {

   if (theForm.updttype.value!="A") {
       theForm.ptfim002.readOnly=true;
       theForm.ptfim003.readOnly=true;
       theForm.ptfim002.className="ReadOnly";
       theForm.ptfim003.className="ReadOnly";
       theForm.ptfim005.focus();
   }

   if (theForm.ptfim004.value=="A")
       { return; }

   theForm.ptfim006.readOnly=true;
   theForm.ptfim006.className="ReadOnly";
   theForm.ptfim009.readOnly=true;
   theForm.ptfim009.className="ReadOnly";
   theForm.ptfim012.readOnly=true;
   theForm.ptfim012.className="ReadOnly";
   theForm.ptfim015.readOnly=true;
   theForm.ptfim015.className="ReadOnly";
   theForm.ptfim018.readOnly=true;
   theForm.ptfim018.className="ReadOnly";
   theForm.ptfim021.readOnly=true;
   theForm.ptfim021.className="ReadOnly";
   theForm.ptfim024.readOnly=true;
   theForm.ptfim024.className="ReadOnly";
   theForm.ptfim027.readOnly=true;
   theForm.ptfim027.className="ReadOnly";
   theForm.ptfim030.readOnly=true;
   theForm.ptfim030.className="ReadOnly";
   theForm.ptfim033.readOnly=true;
   theForm.ptfim033.className="ReadOnly";
   theForm.ptfim036.readOnly=true;
   theForm.ptfim036.className="ReadOnly";
   theForm.ptfim040.readOnly=true;
   theForm.ptfim040.className="ReadOnly";
   theForm.ptfim043.readOnly=true;
   theForm.ptfim043.className="ReadOnly";
   theForm.ptfim047.readOnly=true;
   theForm.ptfim047.className="ReadOnly";
   theForm.ptfim051.readOnly=true;
   theForm.ptfim051.className="ReadOnly";
   theForm.ptfim054.readOnly=true;
   theForm.ptfim054.className="ReadOnly";
   theForm.ptfim057.readOnly=true;
   theForm.ptfim057.className="ReadOnly";
   theForm.ptfim060.readOnly=true;
   theForm.ptfim060.className="ReadOnly";
 }
//------------------------------------------------------------------------------
// Function : Perform Validation and Submit the Form if ok
//------------------------------------------------------------------------------
 function submitFIM(theForm) {

   if (validateMandatory(theForm)) {

      if (theForm.d_ptfim062.checked==true)
         { theForm.ptfim062.value="1"; }
      else
         { theForm.ptfim062.value="0"; }

      theForm.submit();
   }
 }
//------------------------------------------------------------------------------
// Function : Check if uid and pasword must be entered
//------------------------------------------------------------------------------
 function showPass(theForm) {

   if ((!isWhitespace(theForm.ptfim063.value)) ||
       (!isWhitespace(theForm.d_ptfim063.value)) ||
       (!isWhitespace(theForm.ptfim065.value)) ||
       (!isWhitespace(theForm.d_ptfim065.value)) ||
       (!isWhitespace(theForm.ptfim069.value)) ||
       (!isWhitespace(theForm.d_ptfim069.value)) ||
       (!isWhitespace(theForm.ptfim072.value)) ||
       (!isWhitespace(theForm.d_ptfim072.value))) {
        PasswordHead.innerHTML=passwordhd.innerHTML;
        PasswordCode.innerHTML=passwordcd.innerHTML;
        UserNameHead.innerHTML=usernamehd.innerHTML;
        UserNameCode.innerHTML=usernamcd.innerHTML; }

 }
//-----------------------------------------------------------------------------
//-- redirectTopPopUpFrame  . redirect the Content PopUpFrame frame
//----------------------------------------------------------------------------
function xxxredirectTopPopUpFrame(redirectURL)
{
  // calls to this routine are in the TBL code
  // find the 'content' frame, fom the top
  var ContentFrame = getTop().document.frames['content'];
  var context;

alert("a");
  if (top.search)
  {
    // new map layout (WA)
    if (top.search.document.getElementById('PopUpScreen')) {
      ContentFrame = top.document.frames['search'];
    }
  }

  if (ContentFrame.contentDocument)                // W3C standards compliant
  {
alert("b");
    context = ContentFrame.contentDocument;
  }
  else
  {
alert("c");
    context = ContentFrame.document;                         // IE only
  }

  // load URL in PopUpFrame
  ibaGetIframeDoc('PopUpFrame',context).location.href = redirectURL;
}

//------------------------------------------------------------------------
// Get addressability to PopUpFrame or PopUpFrame1
//------------------------------------------------------------------------
function xxxibaGetIframeDoc(iframe)
{

  alert("1");
  var context = null;   // parameter 2 (optonal) defaults to curent doc.

  // get the arguments
  if (arguments.length == 2) context  = arguments[1];
  if (context == null) context = document;  // default to current document

  var iFrameDoc = null;

  // find the PopUpFrame
  var PopUpFrame = ibaGetElement(iframe,context);
  if (PopUpFrame)
  {
  alert("2");
    if (PopUpFrame.contentDocument)                // W3C standards compliant
    {
  alert("3");
      iFrameDoc = PopUpFrame.contentDocument;
    }
    else
    {
  alert("4");
      iFrameDoc = PopUpFrame.contentWindow.document; // IE only
    }
  }
  return iFrameDoc;
}
//.
//==============================================================================
// patweb0311 functions
//==============================================================================
//.
//------------------------------------------------------------------------------
// Function : Navigate to Program Maintenance Comments List
//------------------------------------------------------------------------------
 function PgmComments() {
  if(valPgmDetails()){
    setPgmDetails();
   document.UpdateForm.redirect.value="patweb03.pbl?reportno=06&template=005" +
       "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+") +
       "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+") +
       "&pmupg001=" + UpdateForm.pmupg001.value.replace(/ /g,"+") +
       "&pmupg002=" + UpdateForm.pmupg002.value.replace(/ /g,"+") +
       "&pmupg003=" + UpdateForm.pmupg003.value.replace(/ /g,"+") +
       "&pmupg004=" + UpdateForm.pmupg004.value.replace(/ /g,"+") +
       "&pmupg005=" + UpdateForm.pmupg005.value.replace(/ /g,"+") +
       "&pmupg006=" + UpdateForm.expirydt.value.replace(/ /g,"+") +
       "&showcomm=1" +
       "&suprflag=" + UpdateForm.suprflag.value.replace(/ /g,"+");
    postPgmDetails();
   }
 }
//----------------------------------------------------------------------------
// update Program Maintenance Comments
//----------------------------------------------------------------------------
 function pgmComments(urno,atyp,ctyp,hfnd,htab,exdt,comt,nnum,exdt2) {
    var linkUrl="patweb03.pbl?reportno=11&template=003" +
        "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+") +
        "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+") +
        "&pmudt001=" + urno.replace(/ /g,"+") +
        "&pmudt002=" + atyp.replace(/ /g,"+") +
        "&pmudt003=" + ctyp.replace(/ /g,"+") +
        "&pmudt004=" + hfnd.replace(/ /g,"+") +
        "&pmudt005=" + htab.replace(/ /g,"+") +
        "&pmudt006=" + exdt.replace(/ /g,"+") +
        "&pmudt007=" + comt.replace(/ /g,"+") +
        "&pmudt008=" + nnum.replace(/ /g,"+") +
        "&pmupg001=" + urno.replace(/ /g,"+") +
        "&pmupg002=" + atyp.replace(/ /g,"+") +
        "&pmupg003=" + ctyp.replace(/ /g,"+") +
        "&pmupg004=" + hfnd.replace(/ /g,"+") +
        "&pmupg005=" + htab.replace(/ /g,"+") +
        "&pmupg006=" + exdt2.replace(/ /g,"+");
    var Left=(document.body.clientWidth-950)/2;
    DFrameLink(linkUrl,50,Left,950,350);
 }
//------------------------------------------------------------------------------
// Function : Display admission type update if allowed
//------------------------------------------------------------------------------
function AdmissionTypeUpdate() {
  if(document.UpdateForm.suprflag.value=="1" &&
     trim(document.UpdateForm.ipvcount.value)=="0") {
    document.getElementById("AdmissionType").innerHTML=
    document.getElementById("UpdateAdmissionType").innerHTML;
  } else {
    document.getElementById("AdmissionType").innerHTML=
    document.getElementById("ReadOnlyAdmissionType").innerHTML;
  }
}
