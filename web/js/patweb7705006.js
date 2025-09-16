//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb7705006.js
//
// Written   : 25/09/2003
//
// Function  : Standard Functions Used in patweb77 templates
//
// Version   : 
//
// V10.00.01 24.05.2010  J.Tan         220995
//           Mods for Contract ID generation
// V9.03.02  13/10/2003  Pat Dirito    36492
//           Standard Functions Used in patweb7705006 template
// V9.03.01  25/09/2003  Pat Dirito
//           Created Include
//========================================================================
// REPORT 5 - Casmix Funding
//========================================================================
function ShowSpans() {
  var showoption=document.AddForm.updttype.value;
  if (showoption=="E") {
    CasemixOptions1.innerHTML=GlobalDelete.innerHTML;
    CasemixOptions2.innerHTML=drgcode.innerHTML;
    CasemixOptions3.innerHTML="";
    CasemixOptions4.innerHTML="";
    document.AddForm.casetype[0].checked=1; 
     p=document.AddForm
     p.casth012.options.length=0;
     p.casth012.options[p.casth012.options.length]=new Option(" "," ");
     NewContractID(p.casth012,p.d_casth012.value)
  } else if (showoption=="H") {
    CasemixOptions1.innerHTML=HfDuplication.innerHTML;
    CasemixOptions2.innerHTML=CopyFromDrg.innerHTML;
    CasemixOptions3.innerHTML=HfDuplication1.innerHTML;
    CasemixOptions4.innerHTML=CopyToDrg.innerHTML;
    document.AddForm.casetype[0].checked=1; 
    document.AddForm.casth003.disabled=1;
    document.AddForm.cpyth003.disabled=1;
    p=document.AddForm
    p.casth012.options.length=0;
    p.casth012.options[p.casth012.options.length]=new Option(" "," ");
    NewContractID(p.casth012,p.d_casth012.value)
  } else if (showoption=="P") {
    CasemixOptions1.innerHTML=PatientCopy.innerHTML;
    CasemixOptions2.innerHTML=MBSOption.innerHTML;
    CasemixOptions3.innerHTML=PatientCopy1.innerHTML;
    CasemixOptions4.innerHTML=CopyToDrg.innerHTML;
    document.AddForm.casetype[0].checked=1; 
    p=document.AddForm
    p.casth012.options.length=0;
    p.casth012.options[p.casth012.options.length]=new Option(" "," ");
    NewContractID(p.casth012,p.d_casth012.value)
//    document.AddForm.casth003.disabled=1;
//    document.AddForm.cpyth003.disabled=1;
  } else {
     CasemixOptions1.innerHTML="";  
     CasemixOptions2.innerHTML=""; 
     CasemixOptions3.innerHTML="";
     CasemixOptions4.innerHTML=""; }
}
function ProcessReport() {
  if (validateMandatory(AddForm)) {
    if(document.AddForm.updttype.value=="C") { // Create the new file
      Create();
    } 
    if(document.AddForm.updttype.value=="H") { // Health fund duplication
      CheckDuplication();
    } 
    if(document.AddForm.updttype.value=="E") { // Global delete new file
      if(confirm("Perform deletion of new file records")) {
        DeleteRecords()
      }
    } 
    if(document.AddForm.updttype.value=="P") { // Copy from Patient Theatre Fee
      CheckPatientCopy();
    } 
    if(document.AddForm.updttype.value=="G") { // Update bed fee file with new
      if(confirm("Confirm copy of new data to the existing Casemix Theatre" +
                 " Fee file")) {
          AddForm.submit();
      }
    } 
  }
}
function DeleteRecords() {
  if (isWhitespace(document.AddForm.casth002.value)) {
    document.AddForm.casth002.value="BLANK";  // Set Blank Fund Code
    document.AddForm.casth003.value="BLANK";  // Set Blank Fund Code
  }
  document.AddForm.casth002.disabled=0; // Take "All" value back to server
  if (document.AddForm.casth004!=undefined) {
    document.AddForm.casth004.disabled=0; // Take "All" value back to server
  }
  AddForm.submit();
}
function TableTyp() {
  if (!isWhitespace(document.AddForm.casth002.value)) {
     AddForm.casth003.className="Mandatory";
     AddForm.casth003.disabled=false;
  } else {
     AddForm.casth003.className="";
     AddForm.casth003.selectedIndex=0;
     AddForm.casth003.disabled=true;
  }
}
function TableTyp2() {
  if (!isWhitespace(document.AddForm.cpyth002.value)) {
     AddForm.cpyth003.className="Mandatory";
     AddForm.cpyth003.disabled=false;
  } else {
     AddForm.cpyth003.className="";
     AddForm.cpyth003.selectedIndex=0;
     AddForm.cpyth003.disabled=true;
  }
}
function setCpyClaim() {
  p=document.AddForm;
  p.cpyth001.selectedIndex=p.casth001.selectedIndex;
}
//
function SetAllCas(set) {
  p=document.AddForm;
  if (set.selectedIndex==1) {
    p.cpyth001.selectedIndex=1;
    p.cpyth001.disabled=true;
  } else {
    p.cpyth001.selectedIndex=0;
    p.cpyth001.disabled=false;
  }
}
function checkclaim() {
  p=document.AddForm;
  if (p.casth001.selectedIndex!=1 && p.cpyth001.selectedIndex==1 ) {
    alert("Copy To - Claim Type cannot be set to All!");
    p.cpyth001.selectedIndex=0;
    return false;
  }
  return true;
}
function CheckDayCase() {
  p=document.AddForm;
  if (p.updttype.value=="P") { 
    if (p.cpyth006.selectedIndex==1 ) {
      alert("Copy To - Day Case cannot be set to All!");
      p.cpyth006.selectedIndex=0;
    }
    return; 
  }
  if (p.casth006.selectedIndex!=1 && p.cpyth006.selectedIndex==1 ) {
    alert("Copy To - Day Case cannot be set to All!");
    p.cpyth006.selectedIndex=0;
    return false;
  }
  return true;
}
function CheckMbs() {
  p=document.AddForm;
  if (p.updttype.value=="P") { 
    if (p.cpyth005.selectedIndex==1 ) {
      alert("Copy To - Mbs Banding cannot be set to All!");
      p.cpyth005.selectedIndex=0;
    }
    return; 
  }
  if (p.casth005.selectedIndex!=1 && p.cpyth005.selectedIndex==1 ) {
    alert("Copy To - Mbs Banding cannot be set to All!");
    p.cpyth005.selectedIndex=0;
    return false;
  }
  return true;
}
function CheckFundDelete() {
  if (isWhitespace(document.AddForm.casth002.value)) {
    alert("Fund Table must be set before setting Table Type!");
    document.AddForm.casth003.selectedIndex=0;
  }
}
function CheckFund() {
  if (isWhitespace(document.AddForm.casth002.value)) {
    alert("Fund Table must be set before setting Table Type!");
    document.AddForm.casth003.selectedIndex=0;
    return;
  }
  if (AddForm.casth003.selectedIndex==1) {
    AddForm.cpyth003.selectedIndex=1;
    AddForm.cpyth003.disabled=1;
  } else {
    AddForm.cpyth003.disabled=0;
    AddForm.cpyth003.selectedIndex=0;
  }
}
function CheckTableTyp() {
  p=document.AddForm;
  if (isWhitespace(p.cpyth002.value)) {
    alert("Copy To - Fund Table must be set before setting Table Type!");
    p.cpyth003.selectedIndex=0;
    return;
  }
  if (p.casth003.selectedIndex!=1 && p.cpyth003.selectedIndex==1 ) {
    alert("Copy To - Table Type cannot be set to All!");
    p.cpyth003.selectedIndex=0;
    return false;
  }
  return true;
}
function CheckDuplication() {
  p=document.AddForm;
  a=p.casth001.selectedIndex;
  b=p.cpyth001.selectedIndex;
  c=p.casth003.selectedIndex;
  d=p.cpyth003.selectedIndex;
  if (document.AddForm.casth005!=undefined) {
    e=p.casth005.selectedIndex;
    f=p.cpyth005.selectedIndex;
  }
  g=p.casth006.selectedIndex;
  h=p.cpyth006.selectedIndex;

  // Check copy from and copy to selections are not identical

  if (document.AddForm.casth004!=undefined) {
    if(p.casth001.options[a].value==p.cpyth001.options[b].value &&
       p.casth002.value==p.cpyth002.value && 
       p.casth003.options[c].value==p.cpyth003.options[d].value &&
       p.casth004.value==p.cpyth004.value &&
       p.casth006.options[g].value==p.cpyth006.options[h].value ) {
       alert("The From and To sections can not be identical!");
       return;
     }
   } else {
    if(p.casth001.options[a].value==p.cpyth001.options[b].value &&
       p.casth002.value==p.cpyth002.value && 
       p.casth003.options[c].value==p.cpyth003.options[d].value &&
       p.casth005.options[e].value==p.cpyth005.options[f].value && 
       p.casth006.options[g].value==p.cpyth006.options[h].value ) {
       alert("The From and To sections can not be identical!");
       return;
     }
   }

  if (document.AddForm.casetype[1].checked==1) { // MBS Checked?
    p=document.AddForm;
    a=p.casth001.selectedIndex;
    b=p.cpyth001.selectedIndex;
    var serverURL = "../cgi-bin/patweb77.pbl?reportno=6&valdtype=1" +
                 "&casth001=" + p.casth001.options[a].value.replace(/ /g,"+") +
                 "&casth002=" + p.casth002.value.replace(/ /g,"+") +
                 "&cpyth001=" + p.cpyth001.options[b].value.replace(/ /g,"+") +
                 "&cpyth002=" + p.cpyth002.value.replace(/ /g,"+") 
    var returnValue = RSExecute(serverURL);
    if (returnValue.status==0) {
      var dummy=dummy+1;
    } else {
      return;         
    }
  }
  if (isWhitespace(document.AddForm.casth002.value)) {
    document.AddForm.casth002.value="BLANK";  // Set Blank Fund Code
    document.AddForm.casth003.value="BLANK";  // Set Blank Table Type
    document.AddForm.cpyth002.value="BLANK";  // Set Blank Fund Code
    document.AddForm.cpyth003.value="BLANK";  // Set Blank Table Type
  }
  document.AddForm.casth002.disabled=0; // Take "All" value back to server
  document.AddForm.cpyth002.disabled=0; // Take "All" value back to server
  if (document.AddForm.casth004!=undefined) {
    document.AddForm.casth004.disabled=0; // Take "All" value back to server
    document.AddForm.cpyth004.disabled=0; // Take "All" value back to server
  }
  AddForm.submit();
}
//
function Create() {
  if(confirm("Are You Sure You Want to Overwrite the New File")) {
    AddForm.copyflag.value="Y";
    AddForm.submit();
  }
}
function HealthAllDup() {
  if(AddForm.checkdup.checked==true) {
     AddForm.casth002.value="All"
     AddForm.funddesc.value="All"
     AddForm.cpyth002.value="All"
     AddForm.cp_funddesc.value="All"
     AddForm.funddesc.disabled=true;
     AddForm.cp_funddesc.disabled=true;
     AddForm.cpyth002.disabled=true;
     AddForm.imageset.disabled=true;    // Search Icon
     AddForm.eraser.disabled=true;      // Eraser Icon
     
     AddForm.casth002.disabled=true;
     AddForm.casth003.disabled=true;
     AddForm.casth003.selectedIndex=1;
     AddForm.cpyth002.disabled=true;
     AddForm.cpyth003.disabled=true;
     AddForm.cpyth003.selectedIndex=1;

   } else {
     AddForm.casth002.value=""
     AddForm.funddesc.value=""
     AddForm.cpyth002.value=""
     AddForm.cp_funddesc.value=""

     AddForm.cpyth002.disabled=false;
     AddForm.funddesc.disabled=false;
     AddForm.cp_funddesc.disabled=false;

     AddForm.imageset.disabled=false;   // Search Icon
     AddForm.eraser.disabled=false;     // Eraser Icon

     AddForm.casth002.disabled=false;
     AddForm.casth003.disabled=false;
     AddForm.casth003.selectedIndex=0;
     AddForm.cpyth002.disabled=false;
     AddForm.cpyth003.disabled=false;
     AddForm.cpyth003.selectedIndex=0;
   }
}
function HealthAllDel() {
  if(AddForm.checkdup.checked==true) {
     AddForm.casth002.value="All"
     AddForm.funddesc.value="All"
     document.AddForm.casth002.disabled=1;

     document.AddForm.casth003.selectedIndex=1;
     document.AddForm.casth003.disabled=1;

   } else {
     AddForm.casth002.value=""
     AddForm.funddesc.value=""
     document.AddForm.casth002.disabled=0;
     document.AddForm.casth003.selectedIndex=0;
     document.AddForm.casth003.disabled=0;
   }
}
function HealthAllDrg() {
  if(AddForm.checkdrg.checked==true) {
     AddForm.casth004.value="All"
     AddForm.cmixdesc.value="All"
     document.AddForm.casth004.disabled=1;
   } else {
     document.AddForm.casth004.disabled=0;
     AddForm.casth004.value=""
     AddForm.cmixdesc.value=""
   }
}
function ToDrg() {
  if(AddForm.checkdrg.checked==true) {
     AddForm.casth004.value="All"
     AddForm.cmixdesc.value="All"
     document.AddForm.casth004.disabled=1;
     document.AddForm.cmixdesc.disabled=1;
     AddForm.cpyth004.value="All"
     AddForm.cp_cmixdesc.value="All"
     document.AddForm.cpyth004.disabled=1;
     document.AddForm.cp_cmixdesc.disabled=1;
   } else {
     document.AddForm.casth004.disabled=0;
     AddForm.casth004.value=""
     AddForm.cmixdesc.value=""
     document.AddForm.cpyth004.disabled=0;
     AddForm.cpyth004.value=""
     AddForm.cp_cmixdesc.value=""
   }
}
function DayAll() {
  if (AddForm.casth006.selectedIndex==1) {
    AddForm.cpyth006.selectedIndex=1;
    AddForm.cpyth006.disabled=1;
  } else {
    AddForm.cpyth006.disabled=0;
    AddForm.cpyth006.selectedIndex=0;
  }
}
function MbsAll() {
  if (AddForm.casth005.selectedIndex==1) {
    AddForm.cpyth005.selectedIndex=1;
    AddForm.cpyth005.disabled=1;
  } else {
    AddForm.cpyth005.disabled=0;
    AddForm.cpyth005.selectedIndex=0;
  }
}
function HealthFundSearchFrameA(ReturnCode,ReturnName,ReturnTCode,ReturnTName,Returnhfband,ReturnTtype) {

  var PopUpFrameDoc = DFrameStart();
  window.ReturnFunction="";
  window.ReturnCode=ReturnCode;
  window.ReturnName=ReturnName;
  window.ReturnTCode=ReturnTCode;
  window.ReturnTName=ReturnTName;
  window.Returnhfband=Returnhfband;
  window.ReturnTtype=ReturnTtype;
  if (HealthFundSearchFrameA.arguments.length > 5) {
    window.ReturnFunction=HealthFundSearchFrameA.arguments[6] }
  PopUpFrameDoc.location.href = "../lookups/HealthFundSearchFrame1.html";
  SearchFrameShow();
}
//
// Validates Health Fund and returns fund name and banding
//
function valHfundPat(ReturnFund,ReturnTable,FundName,TableName,Hfband) {

  if (isWhitespace(ReturnFund.value)) {
    ReturnFund.value="";
    FundName.value="";
    ReturnTable.value="";
    TableName.value="";
    ReturnTable.className="";
    return;
  }
  ReturnFunction="" ;
  for (var i=5; i < valHfundPat.arguments.length; i++) {
    if (typeof(valHfundPat.arguments[i]) == 'function') {
      ReturnFunction=valHfundPat.arguments[i] 
    } else {
      valHfundPat.arguments[i].value=""; }  }
//
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=16" +
                    "&valdcode=" + ReturnFund.value.replace(/ /g,"+") 
//
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    FundName.value=trim(ReturnValue[0])
    Hfband.value=trim(ReturnValue[1])
    ReturnTable.className="Mandatory";
  }
  else {
    ReturnFund.value="";
    FundName.value="";
    ReturnTable.value="";
    TableName.value="";
    ReturnTable.className="";
    Hfband.value="";
    ReturnFund.focus();
    return;
  }
  if (typeof(ReturnFunction) == 'function') {
     ReturnFunction() }
}
//
function valHFundTabCopy(ReturnFund,ReturnTable,FundName,TableName,Hfband,Tabltype) {
  if (ReturnTable.value.substr(0,1)==" ") {
      ReturnFund.value="";
      FundName.value="";
      ReturnTable.value="";
      TableName.value="";
      ReturnTable.className="";
  }
  if (isWhitespace(ReturnTable.value)) return;;
  ReturnFunction="" ;
  for (var i=6; i < valHFundTabCopy.arguments.length; i++) {
    if (typeof(valHFundTabCopy.arguments[i]) == 'function') {
      ReturnFunction=valHFundTabCopy.arguments[i] }
    else {
      valHFundTabCopy.arguments[i].value=""; }  }
//
  if (isWhitespace(ReturnFund.value) && !isWhitespace(ReturnTable.value)) {
      alert("Please enter a health fund before entering the table");
      ReturnTable.value="";
      TableName.value="";
      ReturnFund.select();
      return;
  }

  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=20" +
                    "&valdfund=" + ReturnFund.value.replace(/ /g,"+") +
                    "&valdtabl=" + ReturnTable.value.replace(/ /g,"+")
//
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    FundName.value=trim(ReturnValue[0])
    TableName.value=trim(ReturnValue[1])
    Hfband.value=trim(ReturnValue[2])
    Tabltype.value=ReturnValue[3];
    j=0
    for (var i=6; i < valHFundTabCopy.arguments.length; i++) {
       if (typeof(valHFundTabCopy.arguments[i]) != 'function') {
         j++
         valHFundTabCopy.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    TableName.value="";
    ReturnTable.select();
    return false;
  }
}
function showFeeClass() {
 thcflg="0";
 if (!isWhitespace(document.AddForm.casth001.value.substr(22,6))) {
   thcflg=trim(document.AddForm.casth001.value.substr(22,6));
 }
 if (!isWhitespace(document.AddForm.casth002.value)) {
   if (!isWhitespace(document.AddForm.hfband.value)) {
     thcflg=trim(document.AddForm.hfband.value);
   }
 }
 if (thcflg==document.AddForm.oldband.value) { return; }
 if ((thcflg)==0) {
   document.getElementById('CasemixOptions2').innerHTML=document.getElementById('MBSOption').innerHTML;
 }
 else {
   document.getElementById('CasemixOptions2').innerHTML=document.getElementById('TheatreClass').innerHTML;
   document.AddForm.theaclass.value=thcflg
 }
 document.AddForm.oldband.value=thcflg;
}
function SetTableType() {
  document.AddForm.cpyth002.value=document.AddForm.casth002.value;
  document.AddForm.cp_funddesc.value=document.AddForm.funddesc.value;

  for (var i=0; i < document.AddForm.cpyth003.length; i++) {
    pp=document.AddForm.cpyth003.options[i].value.substr(0,3);
    if (pp==document.AddForm.Tabltype.value) {
      document.AddForm.cpyth003.options[i].selected=true;
      break;
    } else { document.AddForm.cpyth003.options[0].selected=true; }
  }
}

function CheckPatientCopy() {
  if (document.AddForm.casetype[1].checked==1) { // MBS Checked?
    p=document.AddForm;
    b=p.cpyth001.selectedIndex;
    var serverURL = "../cgi-bin/patweb77.pbl?reportno=6&valdtype=2" +
                 "&cpyth001=" + p.cpyth001.options[b].value.replace(/ /g,"+") +
                 "&cpyth002=" + p.cpyth002.value.replace(/ /g,"+") 
    var returnValue = RSExecute(serverURL);
    if (returnValue.status==0) {
      var dummy=dummy+1;
    } else {
      return;         
    }
  }
  if (isWhitespace(document.AddForm.casth002.value)) {
    document.AddForm.casth002.value="BLANK";  // Set Blank Fund Code
    document.AddForm.casth011.value="BLANK";  // Set Blank Table Type
    document.AddForm.cpyth002.value="BLANK";  // Set Blank Fund Code
    document.AddForm.cpyth003.value="BLANK";  // Set Blank Table Type
  }
  document.AddForm.cpyth001.disabled=0; 
  document.AddForm.cpyth002.disabled=0; 
  document.AddForm.cpyth003.disabled=0; 
  document.AddForm.casetype[0].disabled=0;
  document.AddForm.casetype[1].disabled=0;
  if (document.AddForm.casth005!=undefined) {
    document.AddForm.cpyth005.disabled=0; 
  }
  AddForm.submit();
}
