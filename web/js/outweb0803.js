//jsVersion  : V11.03.00
//========================================================================
// Program   : outweb0803.js
//
// Function  : Standard Functions used in outweb0803 templates
//---------------------------------------------------------------
function validatePMBS(ReturnCode,ReturnName,ReturnType,ReturnScod,ReturnEfdt,ReturnAmnt) {
  ReturnFunction="" ;
  ReturnName.value="";
  ReturnAmnt.value="";
  for (var i=6; i < validatePMBS.arguments.length; i++) {
    if (typeof(validatePMBS.arguments[i]) == 'function') {
      ReturnFunction=validatePMBS.arguments[i] }
    else {
      validatePMBS.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) {
    if(!isWhitespace(ReturnScod.value)) {
      alert(ReturnCode.title + " is Mandatory for " + ReturnScod.title);
      ReturnScod.value="";
      ReturnScod.focus();
    }
   return;
  }
  if (isWhitespace(ReturnType.value)) return;;
  var serverURL   = "../cgi-bin/allweb01.pbl?reportno=14" +
                    "&valdtype=" + ReturnType.value.replace(/ /g,"+") +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&valdscod=" + ReturnScod.value.replace(/ /g,"+") +
                    "&valdefdt=" + ReturnEfdt.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    ReturnAmnt.value=(ReturnValue[1])
    j=0
    for (var i=6; i < validatePMBS.arguments.length; i++) {
       if (typeof(validatePMBS.arguments[i]) != 'function') {
         j++
         validatePMBS.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.value="";
    ReturnScod.value="";
    ReturnCode.select();
    ReturnCode.focus();
    return false;
     }
}
function TypeDesc1() {
  var p=document.AddForm;
  if (p.otbit001.value==" 0") {
    p.otbit001.value="MBS";
  } else {
    p.otbit001.value="AMA";
  }

  if (p.otbit002 != undefined && p.mbsdesc1 != undefined &&
      p.otbit001 != undefined && p.otbit003 != undefined &&
      p.dateclin != undefined && p.mbsamnt1 != undefined) {
    validatePMBS(p.otbit002,p.mbsdesc1,p.otbit001,
                 p.otbit003,p.dateclin,p.mbsamnt1);
  }
}
function TypeDesc2() {
  var p=document.AddForm;
  if (p.otbit004.value==" 0") {
    p.otbit004.value="MBS";
  } else {
    p.otbit004.value="AMA";
  }

  if (p.otbit005 != undefined && p.mbsdesc2 != undefined &&
      p.otbit004 != undefined && p.otbit006 != undefined &&
      p.dateclin != undefined && p.mbsamnt2 != undefined) {
    validatePMBS(p.otbit005,p.mbsdesc2,p.otbit004,
                 p.otbit006,p.dateclin,p.mbsamnt2);
  }
}
function TypeDesc3() {
  var p=document.AddForm;
  if (p.otbit007.value==" 0") {
    p.otbit007.value="MBS";
  } else {
    p.otbit007.value="AMA";
  }

  if (p.otbit008 != undefined && p.mbsdesc3 != undefined &&
      p.otbit007 != undefined && p.otbit009 != undefined &&
      p.dateclin != undefined && p.mbsamnt3 != undefined) {
    validatePMBS(p.otbit008,p.mbsdesc3,p.otbit007,
                 p.otbit009,p.dateclin,p.mbsamnt3);
  }
}
function TypeDesc4() {
  var p=document.AddForm;
  if (p.otbit010.value==" 0") {
    p.otbit010.value="MBS";
  } else {
    p.otbit010.value="AMA";
  }

  if (p.otbit011 != undefined && p.mbsdesc4 != undefined &&
      p.otbit010 != undefined && p.otbit012 != undefined &&
      p.dateclin != undefined && p.mbsamnt4 != undefined) {
    validatePMBS(p.otbit011,p.mbsdesc4,p.otbit010,
                 p.otbit012,p.dateclin,p.mbsamnt4);
  }
}
function TypeDesc5() {
  var p=document.AddForm;
  if (p.otbit013.value==" 0") {
    p.otbit013.value="MBS";
  } else {
    p.otbit013.value="AMA";
  }

  if (p.otbit014 != undefined && p.mbsdesc5 != undefined &&
      p.otbit013 != undefined && p.otbit015 != undefined &&
      p.dateclin != undefined && p.mbsamnt5 != undefined) {
    validatePMBS(p.otbit014,p.mbsdesc5,p.otbit013,
                 p.otbit015,p.dateclin,p.mbsamnt5);
  }
}
function FilterMentalHealth(TheForm) {
  if (TheForm == undefined || TheForm.menthflg == undefined)
    return;

  if (TheForm.menthflg.value == "1") {  // Mental Health Clinic Group
    // strip out Non Mental Health code
    filterCatCodeList(TheForm.outbb001,"13","G","1");  // Referral Source
  }
  else {
    // strip out Mental Health code
    filterCatCodeList(TheForm.outbb001,"13","M","1");  // Referral Source
  }
}
function DisplayXCmbs() {
  pf = document.AddForm;
  i = pf.outbb002.selectedIndex;
  ind1 = pf.outbb002.options[i].value.substring(3,4);
  if (pf.otmaumci != undefined &&
      (pf.ptcnuebb.value == "1" &&
      pf.clinindc.value == "P" &&
      pf.otmaumci.value == "1" &&
      ind1 == "P")) {
    ShowXCmbs.innerHTML = extracmbs.innerHTML;
    DefaultCMBSItem(AddForm.outbb047,AddForm.nslotkey,AddForm.refrlvis);
  } 
  else {
    ShowXCmbs.innerHTML = "";
  }
}
function TemplateCmbs() {
  if (document.AddForm.cmbsload.checked==true) {
    OutputCMBSTemp(AddForm.cmbstemp,AddForm.dateclin);
  }
}
//------------------------------------------------------------------
//  Output common CMBS item template (from private practice)
//------------------------------------------------------------------
function OutputCMBSTemp(ReturnCode,ReturnEfdt) {
  ReturnFunction="" ;
  for (var i=2; i < OutputCMBSTemp.arguments.length; i++) {
    if (typeof(OutputCMBSTemp.arguments[i]) == 'function') {
      ReturnFunction=OutputCMBSTemp.arguments[i] }
    else {
      OutputCMBSTemp.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL ="../cgi-bin/priweb05.pbl?reportno=8" +
                    "&valdtype=5" +
                    "&cmbstemp=" + ReturnCode.value.replace(/ /g,"+") +
                    "&valdefdt=" + ReturnEfdt.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    if (!isWhitespace(AddForm.otbit002.value)) {
    AddForm.otbit004.value=ReturnValue[0];
    AddForm.otbit005.value=ReturnValue[1];
    AddForm.otbit006.value=ReturnValue[2];
    AddForm.mbsdesc2.value=ReturnValue[3];
    AddForm.mbsamnt2.value=ReturnValue[4];
    AddForm.otbit007.value=ReturnValue[5];
    AddForm.otbit008.value=ReturnValue[6];
    AddForm.otbit009.value=ReturnValue[7];
    AddForm.mbsdesc3.value=ReturnValue[8];
    AddForm.mbsamnt3.value=ReturnValue[9];
    AddForm.otbit010.value=ReturnValue[10];
    AddForm.otbit011.value=ReturnValue[11];
    AddForm.otbit012.value=ReturnValue[12];
    AddForm.mbsdesc4.value=ReturnValue[13];
    AddForm.mbsamnt4.value=ReturnValue[14];
    AddForm.otbit013.value=ReturnValue[15];
    AddForm.otbit014.value=ReturnValue[16];
    AddForm.otbit015.value=ReturnValue[17];
    AddForm.mbsdesc5.value=ReturnValue[18];
    AddForm.mbsamnt5.value=ReturnValue[19];
    } else {
    AddForm.otbit001.value=ReturnValue[0];
    AddForm.otbit002.value=ReturnValue[1];
    AddForm.otbit003.value=ReturnValue[2];
    AddForm.mbsdesc1.value=ReturnValue[3];
    AddForm.mbsamnt1.value=ReturnValue[4];
    AddForm.otbit004.value=ReturnValue[5];
    AddForm.otbit005.value=ReturnValue[6];
    AddForm.otbit006.value=ReturnValue[7];
    AddForm.mbsdesc2.value=ReturnValue[8];
    AddForm.mbsamnt2.value=ReturnValue[9];
    AddForm.otbit007.value=ReturnValue[10];
    AddForm.otbit008.value=ReturnValue[11];
    AddForm.otbit009.value=ReturnValue[12];
    AddForm.mbsdesc3.value=ReturnValue[13];
    AddForm.mbsamnt3.value=ReturnValue[14];
    AddForm.otbit010.value=ReturnValue[15];
    AddForm.otbit011.value=ReturnValue[16];
    AddForm.otbit012.value=ReturnValue[17];
    AddForm.mbsdesc4.value=ReturnValue[18];
    AddForm.mbsamnt4.value=ReturnValue[19];
    AddForm.otbit013.value=ReturnValue[20];
    AddForm.otbit014.value=ReturnValue[21];
    AddForm.otbit015.value=ReturnValue[22];
    AddForm.mbsdesc5.value=ReturnValue[23];
    AddForm.mbsamnt5.value=ReturnValue[24];
    }
    j=0
    for (var i=2; i < OutputCMBSTemp.arguments.length; i++) {
       if (typeof(OutputCMBSTemp.arguments[i]) != 'function') {
         j++
         OutputCMBSTemp.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.select();
    return false }
}
//------------------------------------------------------------------
//  Get default CMBS item for slot (from default charges table)
//------------------------------------------------------------------
function DefaultCMBSItem(ReturnVist,ReturnSlot,ReturnRefr) {
  ReturnFunction="" ;
  for (var i=3; i < DefaultCMBSItem.arguments.length; i++) {
    if (typeof(DefaultCMBSItem.arguments[i]) == 'function') {
      ReturnFunction=DefaultCMBSItem.arguments[i] }
    else {
      DefaultCMBSItem.arguments[i].value=""; }  }
  if (isWhitespace(ReturnVist.value)) return;;
  if (isWhitespace(ReturnSlot.value)) return;;

  var serverURL ="../cgi-bin/allweb02.pbl?reportno=5" +
                    "&visittyp=" + ReturnVist.value.replace(/ /g,"+") +
                    "&nslotkey=" + ReturnSlot.value.replace(/ /g,"+") +
                    "&refrlvis=" + ReturnRefr.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    AddForm.otbit001.value=ReturnValue[0];
    AddForm.otbit002.value=ReturnValue[1];
    AddForm.otbit003.value=ReturnValue[2];
    AddForm.mbsdesc1.value=ReturnValue[3];
    AddForm.mbsamnt1.value=ReturnValue[4];
    AddForm.otbit016.value=ReturnValue[5];
//
    AddForm.otbit004.value=ReturnValue[6];
    AddForm.otbit005.value=ReturnValue[7];
    AddForm.otbit006.value=ReturnValue[8];
    AddForm.mbsdesc2.value=ReturnValue[9];
    AddForm.mbsamnt2.value=ReturnValue[10];
    AddForm.otbit017.value=ReturnValue[11];
//
    AddForm.otbit007.value=ReturnValue[12];
    AddForm.otbit008.value=ReturnValue[13];
    AddForm.otbit009.value=ReturnValue[14];
    AddForm.mbsdesc3.value=ReturnValue[15];
    AddForm.mbsamnt3.value=ReturnValue[16];
    AddForm.otbit018.value=ReturnValue[17];
//
    AddForm.otbit010.value=ReturnValue[18];
    AddForm.otbit011.value=ReturnValue[19];
    AddForm.otbit012.value=ReturnValue[20];
    AddForm.mbsdesc4.value=ReturnValue[21];
    AddForm.mbsamnt4.value=ReturnValue[22];
    AddForm.otbit019.value=ReturnValue[23];
//
    AddForm.otbit013.value=ReturnValue[24];
    AddForm.otbit014.value=ReturnValue[25];
    AddForm.otbit015.value=ReturnValue[26];
    AddForm.mbsdesc5.value=ReturnValue[27];
    AddForm.mbsamnt5.value=ReturnValue[28];
    AddForm.otbit020.value=ReturnValue[29];
//
 for (var i =0 ; i < document.AddForm.cmbstemp.length; i++) {
  if (document.AddForm.cmbstemp.options[i].value==ReturnValue[31]) {
       document.AddForm.cmbstemp.selectedIndex=i } };
//
    if(ReturnValue[30]=="1") {
      AddForm.cmbsload.checked=true;    // Auto apply cmbs template
      TemplateCmbs();
    } else {
      AddForm.cmbsload.checked=false;
    }
//
    j=0
    for (var i=3; i < DefaultCMBSItem.arguments.length; i++) {
       if (typeof(DefaultCMBSItem.arguments[i]) != 'function') {
         j++
         DefaultCMBSItem.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnVist.select();
    return false }
}

