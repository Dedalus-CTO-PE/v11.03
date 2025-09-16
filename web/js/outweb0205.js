//jsVersion  : V11.03.00
//------------------------------------------------------------ 
// Function : outweb0205.js 
//------------------------------------------------------------ 
//========================================================================
// Functions for adding CMBS items
//========================================================================
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
function DisplayXCmbs() {
  pf = document.AddForm;
  i = pf.outbb002.selectedIndex;
  if (i < 0) {
    ind1 = " ";
  }
  else {
    ind1 = pf.outbb002.options[i].value.substring(3,4);
  }

  if (pf.ptcnuebb.value == "1" &&
      pf.clinindc.value == "P" &&
      pf.otmaumci.value == "1" &&
      ind1 == "P") {
    ShowXCmbs.innerHTML = extracmbs.innerHTML;
    DefaultCMBSItem(AddForm.outbb047,AddForm.nslotkey,AddForm.refrlvis);
  }
  else {
    if (pf.clinindc.value == "P" &&
        pf.ibcnumci.value == "1" &&
        pf.otmaumci.value == "1") {
      ShowXCmbs.innerHTML = extracmbs.innerHTML;
      DefaultCMBSItem(AddForm.outbb047,AddForm.nslotkey,AddForm.refrlvis);
    }
    else {
      ShowXCmbs.innerHTML = "";
    }
  }
  DisplayCarer();
  SendLetter(AddForm);
  MandatoryLinkedRef();
}
function MandatoryLinkedRef() {
 if(!document.getElementById("linkahrf")) {
    return;
 }
 if(document.AddForm.othemref==undefined) {
    return;
 }
 if(document.AddForm.othemref.value!="1") {
   document.getElementById("linkahrf").className="";
 } else {
   document.getElementById("linkahrf").className="Mandatory";
 }
}
function TemplateCmbs() {
  if (document.AddForm.cmbsload.checked==true) {
    OutputCMBSTemp(AddForm.cmbstemp,AddForm.dateclin);
  }
}
//------------------------------------------------------------------
//  Validate an MBS item from the private practice item file
//------------------------------------------------------------------
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
//
//------------------------------------------------------------
// Function : Appointment Search Frame
//          : Optional Parameters
//            4 = Default Clinic Type
//            5 = Default Clinic ID
//            6 = Default Visit Type
//            7 = Allow override of defaluts 1 = No
//------------------------------------------------------------
function AppointmentSearchFrame(ReturnCode,ReturnName,ReturnDate) {
 DFrameStart()
 window.ReturnCode=ReturnCode ;
 window.ReturnName=ReturnName ;
 window.ReturnDate=ReturnDate ;
 CriteriaLink="../cgi-bin/outweb01.pbl?reportno=2&template=2"
 switch (AppointmentSearchFrame.arguments.length) {
  case 4: {
     CriteriaLink+="&clinicty=" +
                   AppointmentSearchFrame.arguments[3].value.replace(/ /g,"+")
     break; }
  case 5: {
     CriteriaLink+="&clinicty=" +
                   AppointmentSearchFrame.arguments[3].value.replace(/ /g,"+")
     CriteriaLink+="&clinicid=" +
                   AppointmentSearchFrame.arguments[4].value.replace(/ /g,"+")
     break; }
  case 6: {
     CriteriaLink+="&clinicty=" +
                   AppointmentSearchFrame.arguments[3].value.replace(/ /g,"+")
     CriteriaLink+="&clinicid=" +
                   AppointmentSearchFrame.arguments[4].value.replace(/ /g,"+")
     CriteriaLink+="&visittyp=" +
                   AppointmentSearchFrame.arguments[5].value.replace(/ /g,"+")
     CriteriaLink+="&srchvtyp=" +
                   AppointmentSearchFrame.arguments[5].value.replace(/ /g,"+")
     break; }
  case 7: {
     CriteriaLink+="&clinicty=" +
                   AppointmentSearchFrame.arguments[3].value.replace(/ /g,"+")
     CriteriaLink+="&clinicid=" +
                   AppointmentSearchFrame.arguments[4].value.replace(/ /g,"+")
     CriteriaLink+="&visittyp=" +
                   AppointmentSearchFrame.arguments[5].value.replace(/ /g,"+")
     CriteriaLink+="&srchvtyp=" +
                   AppointmentSearchFrame.arguments[5].value.replace(/ /g,"+")
     CriteriaLink+="&deftovrd=" +
                   AppointmentSearchFrame.arguments[6].value.replace(/ /g,"+")
     break; }
  case 8: {
     CriteriaLink+="&clinicty=" +
                   AppointmentSearchFrame.arguments[3].value.replace(/ /g,"+")
     CriteriaLink+="&clinicid=" +
                   AppointmentSearchFrame.arguments[4].value.replace(/ /g,"+")
     CriteriaLink+="&visittyp=" +
                   AppointmentSearchFrame.arguments[5].value.replace(/ /g,"+")
     CriteriaLink+="&srchvtyp=" +
                   AppointmentSearchFrame.arguments[5].value.replace(/ /g,"+")
     CriteriaLink+="&deftovrd=" +
                   AppointmentSearchFrame.arguments[6].value.replace(/ /g,"+")
     CriteriaLink+="&srchrefn=" +
                   AppointmentSearchFrame.arguments[7].value.replace(/ /g,"+")
     break; }

  }
 PopUpFrame.document.write("<frameset name=SearchSet rows=\"100,*\"> " +
  "<frame name=SearchOptions src=\"" + CriteriaLink + "\" " + " scrolling=no>" +
  "</frame>" +
  "<frame name=SearchResults src=../lookups/blank.html>" +
  "</frame></frameset>")
 PopUpFrame.document.close()
 SearchFrameShow()
}
//------------------------------------------------------------
// Function : Clinic Search Frame
//          : Optional Parameters
//            4 = Default Clinic Type
//            5 = Default Clinic ID
//            6 = Default Visit Type
//------------------------------------------------------------
function ClinicSearchFrame(ReturnCode,ReturnName,ReturnDate) {
 var PopUpFrameDoc = DFrameStart();
 window.ReturnCode=ReturnCode ;
 window.ReturnName=ReturnName ;
 window.ReturnDate=ReturnDate ;
 CriteriaLink="../cgi-bin/outweb02.pbl?reportno=1&template=2&viewtype=0"
 switch (ClinicSearchFrame.arguments.length) {
  case 4: {
     CriteriaLink+="&srchclty=" +
                   ClinicSearchFrame.arguments[3].value.replace(/ /g,"+")
     break; }
  case 5: {
     CriteriaLink+="&srchclty=" +
                   ClinicSearchFrame.arguments[3].value.replace(/ /g,"+")
     CriteriaLink+="&srchclid=" +
                   ClinicSearchFrame.arguments[4].value.replace(/ /g,"+")
     break; }
  case 6: {
     CriteriaLink+="&srchclty=" +
                   ClinicSearchFrame.arguments[3].value.replace(/ /g,"+")
     CriteriaLink+="&srchclid=" +
                   ClinicSearchFrame.arguments[4].value.replace(/ /g,"+")
     CriteriaLink+="&visittyp=" +
                   ClinicSearchFrame.arguments[5].value.replace(/ /g,"+")
     CriteriaLink+="&srchvtyp=" +
                   ClinicSearchFrame.arguments[5].value.replace(/ /g,"+")
     break; }
  case 7: {
     CriteriaLink+="&srchclty=" +
                   ClinicSearchFrame.arguments[3].value.replace(/ /g,"+")
     CriteriaLink+="&srchclid=" +
                   ClinicSearchFrame.arguments[4].value.replace(/ /g,"+")
     CriteriaLink+="&visittyp=" +
                   ClinicSearchFrame.arguments[5].value.replace(/ /g,"+")
     CriteriaLink+="&srchvtyp=" +
                   ClinicSearchFrame.arguments[5].value.replace(/ /g,"+")
     CriteriaLink+="&deftovrd=" +
                   ClinicSearchFrame.arguments[6].value.replace(/ /g,"+")
     break; }
  case 8: {
     CriteriaLink+="&srchclty=" +
                   ClinicSearchFrame.arguments[3].value.replace(/ /g,"+")
     CriteriaLink+="&srchclid=" +
                   ClinicSearchFrame.arguments[4].value.replace(/ /g,"+")
     CriteriaLink+="&visittyp=" +
                   ClinicSearchFrame.arguments[5].value.replace(/ /g,"+")
     CriteriaLink+="&srchvtyp=" +
                   ClinicSearchFrame.arguments[5].value.replace(/ /g,"+")
     CriteriaLink+="&deftovrd=" +
                   ClinicSearchFrame.arguments[6].value.replace(/ /g,"+")
     CriteriaLink+="&srchrefn=" +
                   ClinicSearchFrame.arguments[7].value.replace(/ /g,"+")
     break; }

  }
 PopUpFrameDoc.location.href=CriteriaLink;
 SearchFrameShow();
}
//------------------------------------------------------------
// Check Date Range Values
//------------------------------------------------------------
function CheckDateRange(FromInput,ToInput) {
  if (SetDateYYYYMMDD(FromInput.value) > SetDateYYYYMMDD(ToInput.value)) {
    return false }
  else {
    return true }
}
function DisplayCarer() {
  if(document.AddForm.otheccar != undefined) {
    if (document.AddForm.otheccar.value=="1"){
      ShowCarer.innerHTML=sendcarer.innerHTML;
    } else {
      ShowCarer.innerHTML="";
    }
  }
}
function DisplayIntrp() {
  if (document.AddForm.intrpreq.value=="1") {
    ShowIntrp.innerHTML=dispintrp.innerHTML;
  } else {
    ShowIntrp.innerHTML="";
  }
}
function MandProgram() {
  if(document.AddForm.addnewpg.checked==true) {
    document.AddForm.outbb003.className="SelectBig Mandatory";
  } else {
    document.AddForm.outbb003.className="SelectBig";
  }
}
//-----------------------------------------------------------------
// Function to check for outstanding appointment requests
//-----------------------------------------------------------------
function CheckAppRequest(urnumber,newslotk,unit,linkref,requestk) {
  if (isWhitespace(urnumber.value)) return true;
  if (isWhitespace(newslotk.value)) return true;
  ReturnFunction="" ;
  for (var i=1; i < CheckAppRequest.arguments.length; i++) {
   if (typeof(CheckAppRequest.arguments[i]) == 'function') {
     ReturnFunction=CheckAppRequest.arguments[i] } }
  var serverURL = "../cgi-bin/outweb02.pbl?reportno=9&updatety=9" +
                  "&urnumber="+urnumber.value.replace(/ /g,"+") +
                  "&newslotk="+newslotk.value.replace(/ /g,"+") +
                  "&outbb022="+unit.value.substr(0,3).replace(/ /g,"+") +
                  "&refrlvis="+linkref.value.replace(/ /g,"+") +
                  "&requestk="+requestk.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|");
  if (returnValue.status==0) {

    if (ReturnValue[0] == 1) {    // Unbooked request exists

      // Construct warning message
      if (isWhitespace(ReturnValue[1]))
        { ReturnValue[1] = "Unknown Date"; }
      if (isWhitespace(ReturnValue[2]))
        { ReturnValue[2] = "Unknown"; }
      if (isWhitespace(ReturnValue[3]))
        { ReturnValue[3] = "Unknown"; }
      var message = "Warning : Requested Appointment exists for : " + 
                    ReturnValue[1] +
                    "\n Clinic Type : " + ReturnValue[2] +
                    "\n Clinic Id : " + ReturnValue[3] + 
                    "\n Department : " + ReturnValue[4] + 
                    "\n Preferred Hospital : " + ReturnValue[5] + 
                    "\n Linked Referral Number : " + ReturnValue[6] + 
                    "\nClick OK to continue " +
                    "without selecting the request, Cancel to select request.";
      ans=confirm(message)
      if (!ans) {
         PatientLinks.admissno.value= ReturnValue[6];
         PatientLinkTo("outweb08.pbl",8,001,0,0,0);
         return false;
      }
    }
    if (typeof(ReturnFunction) == 'function') { ReturnFunction() }
  }
  return true;
}
//
function SendLetter(theForm) {
if(theForm.outbb067 != undefined) {
  if(theForm.outbb047.value.substr(10,1) == "C" || 
    (SetDateYYYYMMDD(theForm.clindate.value.substr(4,11)) < 
     SetDateYYYYMMDD(theForm.currdate.value))) {   // Ind 8 - Chart Only or
    theForm.outbb067.selectedIndex=3;              // new booking less than 
    theForm.outbb067.className="Readonly";         // today set send letter
    theForm.outbb067.disabled=true;                // N/A
    theForm.outbb036.checked=false;
    theForm.outbb036.disabled=true;
  } else {
    ResetLetter(AddForm);
    if(theForm.outbb067.disabled==true) {          // Default send letter to
       theForm.outbb067.selectedIndex=0;           // Blank when re enabled
    }
    theForm.outbb067.className="";
    theForm.outbb067.disabled=false;
    theForm.outbb067.className="";
    theForm.outbb036.disabled=false;
  }
  SendLetterDate(theForm);
}
}
//
function ResetLetter(theForm) {
    theForm.outbb067.selectedIndex=0;
    theForm.outbb066.value="";
    theForm.outbb066.readOnly=false;
    theForm.outbb066.className="Date";
}
//
function SendLetterDate(theForm) {
  if(theForm.outbb067.value=="1") {                // Yes Send Letter
    theForm.outbb066.className="Mandatory FutureDate";
    theForm.outbb066.readOnly=false;
    if(isWhitespace(theForm.outbb066.value)) {     // Calculate Letter Date
      CalculateLetterDate(theForm)
    }
  } else {
    theForm.outbb066.className="Readonly Date";
    theForm.outbb066.value="";
    theForm.outbb066.readOnly=true;
  }
}
function CheckLetterDate(theForm) {
if(theForm.outbb067.value=="1") {                // Yes Send Letter
  if(SetDateYYYYMMDD(theForm.clindate.value.substr(4,11)) <
     SetDateYYYYMMDD(theForm.outbb066.value)) {
         alert("Date cannot be greater than appointment date.")
         theForm.outbb066.select()
         theForm.outbb066.value="";
         return false }
  }
}
//
function EnableLetterFields(theForm) {
  theForm.outbb036.disabled=false;
  theForm.outbb067.disabled=false;
}
//
function CalculateLetterDate(theForm) {
  theForm.outbb066.value=theForm.clindate.value.substr(4,11);
  if(isWhitespace(theForm.clindate.value.substr(4,11))) {
    return;
  }
  AddSubtractDate(theForm.outbb066,theForm.othendps.value,"S");
  if(SetDateYYYYMMDD(theForm.outbb066.value) <=
     SetDateYYYYMMDD(theForm.currdate.value)) {
     theForm.outbb066.value=theForm.currdate.value;
//    AddSubtractDate(theForm.outbb066,"1","A");
  }
}
//
//
function showFundingSource(theForm) {
    i=theForm.outbb002.selectedIndex;
    ind=theForm.outbb002.options[i].value.substring(3,4)
    if (ind=="A") {
      FundingHeading.innerHTML=offdutyhd.innerHTML;
      FundingId.innerHTML=offdutyid.innerHTML;
    } else {
      if (ind=="P") {
        FundingHeading.innerHTML=fundinghd.innerHTML;
        FundingId.innerHTML=fundingid.innerHTML;
        theForm.pmsvx141.className="Mandatory";
      } else {
        FundingHeading.innerHTML=blanklabel.innerHTML;
        FundingId.innerHTML=blanklabel.innerHTML;
      }
    }
}

function UpdateContractCodes(clintcd,site){

if(document.AddForm.contcode==undefined){
   return;
}
   var dA = document.AddForm
   var oldVal = trim(dA.d_cc.value);
   var cc = document.getElementById("contcode");
   var ReturnSelect = document.AddForm.contcode;
   var serverURL = "../cgi-bin/outweb02.pbl?reportno=09&updatety=11&clintype="+clintcd+"&sitecode="+site;
   var returnValue = RSExecute(serverURL);

   if(returnValue.status==0){
      ReturnSelect.options.length=0
      ReturnSelect.options[ReturnSelect.options.length]=new Option("","");
      ReturnValue=returnValue.return_value.split("|");
      for(var j=0; j<ReturnValue.length; j++){
        if(!isWhitespace(ReturnValue[j])){
           SelectValue=ReturnValue[j].split(",");
           ReturnSelect.options[ReturnSelect.options.length]=
           new Option(SelectValue[1],SelectValue[0]);
        }
      }
   }

  dA.contcode.selectedIndex = 0;
  dA.d_cc.value = "";

  for(var i=0; i<cc.length; i++){
      if(oldVal == trim(cc.options[i].value.substr(0,3))){
         dA.contcode.selectedIndex=i;
         dA.d_cc.value = cc.options[i].value.substr(0,3);
         break;
      }
  }
}
function claimHF(theForm) {
  if(theForm.outbb002.value.substr(3,1) == "H") {
    theForm.outbb008.className="Mandatory";
  } else {
    theForm.outbb008.className="";
  }
  checkHFTable(theForm);
}
function checkHFTable(theForm) {
  if(!isWhitespace(theForm.outbb008.value)) {
    theForm.outbb009.className="Mandatory";
  } else {
    theForm.outbb009.value="";
    theForm.outbb009.className="";
    theForm.tabldesc.value="";
  }
}
function CheckReferral(ValdRef,ValdUr) {
  if (isWhitespace(ValdRef.value)) return;;
  var serverURL  = "../cgi-bin/allweb03.pbl?reportno=9" +
               "&valdcode=" + ValdRef.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    if(ValdUr.value!=ReturnValue[5]) {
      alert("Invalid referral for this U/R.");
      ValdRef.value="";
      return;
    }
    if(ReturnValue[4]!="0" && ReturnValue[4]!="1") {
      alert("Invalid referral status. Must be Waiting or Active.");
      ValdRef.value="";
      return;
    }
  } else {
    ValdRef.value="";
    return;
  }
}
function showReferralLink() {
 if(VariableNameExists('ReferralMandatoryWL')) {
   if(ReferralMandatoryWL && document.AddForm.waitflag.value=="1" &&
      !isWhitespace(document.AddForm.waitlkey.value)) {
     document.getElementById("reftitle").innerHTML=
     document.getElementById("showreftitle").innerHTML;
     document.getElementById("reffield").innerHTML=
     document.getElementById("showreffield").innerHTML;
     MandatoryLinkedRef();
   }
 }
}
function setReferralLink() {
  if(VariableNameExists('ReferralMandatoryWL')) {
    if(ReferralMandatoryWL && document.AddForm.waitflag.value=="1" &&
       !isWhitespace(document.AddForm.waitlkey.value)){
      document.AddForm.refrlvis.value=document.AddForm.linkahrf.value;
    }
  }
}
function setReferralLinkSearch() {
  if(VariableNameExists('ReferralMandatoryWL')) {
    if(ReferralMandatoryWL && document.AddForm.waitflag.value=="1" &&
       !isWhitespace(document.AddForm.waitlkey.value) &&
       isWhitespace(document.AddForm.linkahrf.value)){
      document.AddForm.refrlvis.value="99999999";
    }
  }
}
