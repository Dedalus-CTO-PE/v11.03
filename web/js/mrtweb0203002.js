//jsVersion  : V11.03.00
//========================================================================
// Program   : mrtweb0203002.js
//
// Written   : 09.11.2006  Davin
//
// Function  : Functions Used in mrtweb0203002.html (copied from mrtweb0203.js)
//
// V9.08.01  09/11/2006  Davin                CAR 123200
//      ***  Modified from mrtweb0203.js for JH Singapore (allow icd-9) ***
//
function Icd10DisNext(DischDte) {
  if (isWhitespace(document.AddForm.dsprefix.value)) {
    alert('Prefix is Required'); 
    document.AddForm.dsprefix.focus() }
  else {
    ThisCode=document.AddForm.diopc001
    Icd10DisSrchMedRec9(ThisCode,DischDte); } // Custom Medical Record search
}
function Icd10ProNext(DischDte) {
  ThisCode=document.AddForm.diopc001
  document.AddForm.dsprefix.value = "O"; // Prefix set to O-Operation Code
  Icd10ProSrchMedRec9(ThisCode,DischDte);  // Custom Medical Record search
}
function CheckKey(ReturnCode,ReturnName,ReturnPrefix,ReturnDate,ReturnTime,ReturnEnd,ReturnBlock,ReturnDTMan,ReturnDcod,ReturnDnam) {
  if (isWhitespace(ReturnCode.value)) return;;
  ReturnCode.value=ReturnCode.value.toUpperCase()
  ReturnCode.value=ReturnCode.value.replace(/ /g,"")
  setfo=ReturnPrefix.value;
  if (setfo !== "O") {
    if (ReturnPrefix.value == "") {
      alert("You must enter in a valid prefix.")
      ReturnPrefix.focus(); 
      return;
    }
    else {
    if (ReturnPrefix.value == "O") {     // Disease Codes cannot have O Prefix
      alert("Must use a Disease prefix!")
      ReturnPrefix.focus();
      return; }
    // Check for Morphology Code
    Codelen=ReturnCode.value.length;
    findot=ReturnCode.value.search('[.]')
    findslash=ReturnCode.value.search('[/]')
    if ((findot != "3") && (Codelen > "5")) {  // Check for Morphology Code
      if (ReturnPrefix.value == morpre) {
        // Check whether a "/" has been entered for this Procedure code
        // If code not in format M0000/0
        if (findslash != "5") {
          a=ReturnCode.value.substr(0,5);
          b=ReturnCode.value.substr(5,5);
          ReturnCode.value= a + "/" + b;     // Add slash to string
        }
      } else {
        alert("Error Disease code must have a '" + morpre +
              "' prefix! Please change.");
        ReturnPrefix.focus();
        return;
      }
    }
    else { 
      // Check whether a "." has been entered if not format with a "."
      // If code not in format A00.0 or Code is > 3 characters
      if ((findot != "3") && (Codelen != "3")) {
        a=ReturnCode.value.substr(0,3);    // Then must be in format A000
        b=ReturnCode.value.substr(3,3);
        ReturnCode.value= a + "." + b;     // Add full stop to string
      }
      if (ReturnPrefix.value == morpre) {
        alert("This code cannot have a  '" + morpre +
              "' prefix! Please change.");
        ReturnPrefix.focus();
        return;
      }
    }
    ValidateType="1";
    ReturnFunction=AddAccs; } }
  else {
    // Check whether a "-" has been entered for this Procedure code
    findash=ReturnCode.value.search('[-]')
    // If code not in format 00000-00
//  if (findash != "5") {
//    a=ReturnCode.value.substr(0,5);
//    b=ReturnCode.value.substr(5,5);
//    ReturnCode.value= a + "-" + b;     // Add dash to string
//  }
    ValidateType="2";
    ReturnFunction=AddOps;
    ReturnPrefix.value="O"; }
  ReturnName.value="";
  if (ValidateType=="1") {
//
//  Remote Scripting to find out if using the first Disease Code
//  else return Episode unique counter
//
    var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=4&valdtype=6" +
                "&urnumber=" + AddForm.urnumber.value.replace(/ /g,"+") +
                "&admissno=" + AddForm.admissno.value.replace(/ /g,"+") +
                "&epscd001=" + AddForm.epscd001.value.replace(/ /g,"+")
    var returnValue = RSExecute(serverURL);
    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|")
      unqcnt=ReturnValue[0];
      unqcnt=unqcnt-0; // Convert to Number first
      unqcnt=unqcnt+100; // Now format as 100 eg 3 chars
    }
  } else { unqcnt="1"; } // Just set to 1 for Procedure Codes.. Not needed!!
  var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=2" +
                  "&urnumber=" + AddForm.urnumber.value.replace(/ /g,"+") +
                  "&admissno=" + AddForm.admissno.value.replace(/ /g,"+") +
                  "&valdtype=" + ValidateType +
                  "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                  "&dsprefix=" + ReturnPrefix.value +
                  "&discodno=" + unqcnt 
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0]);
    if (ValidateType=="1") {
       additreq=ReturnValue[1];
      if (!isWhitespace(ReturnValue[2])) {  // Diagnosis Warning Message?
        alert(ReturnValue[2]) }             // Diagnosis Warning message Found!
    } else {    
      if (!isWhitespace(ReturnValue[9])) {  // Procedure Warning Message?
        alert(ReturnValue[9]) }             // Procedure Warning Message Found!
      ReturnDate.value=ReturnValue[1]
      ReturnTime.value=ReturnValue[2]
      ReturnEnd.value=ReturnValue[3] 
      ReturnFlag=ReturnValue[4]
      ReturnBlock.value=ReturnValue[5]
      ReturnDTMan.value=ReturnValue[6]
      ReturnDcod.value=ReturnValue[7]
      ReturnDnam.value=ReturnValue[8]
      if (ReturnFlag=="1") {
        ReturnDate.value="";
        ReturnTime.value="";
        ReturnEnd.value=""; 
      }
    }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction(ReturnCode.value) } }
  else {
    ReturnCode.select(); }
}
//
//-------------------------------------------------------------------
// Function : Custom ICD10 Disease Search Frame for Medical Records
//-------------------------------------------------------------------
function Icd10DisSrchMedRec9(ReturnCode,DischDte) {
  window.ReturnFunction="" ;
  if (Icd10DisSrchMedRec9.arguments.length > 2) {
    window.ReturnFunction=Icd10DisSrchMedRec9.arguments[2] }
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode;
  window.DischDte=DischDte;
  PopUpFrameDoc.location.href = "../lookups/Icd10DisSrchMedFrame9.html";
  SearchFrameShow();
}
//-------------------------------------------------------------------
// Function : Custom ICD10 Procedure Search Frame for Medical Records
//-------------------------------------------------------------------
function Icd10ProSrchMedRec9(ReturnCode,DischDte) {
  window.ReturnFunction="" ;
  if (Icd10ProSrchMedRec9.arguments.length > 2) {
    window.ReturnFunction=Icd10ProSrchMedRec9.arguments[2] }
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode;
  window.DischDte=DischDte;
  PopUpFrameDoc.location.href = "../lookups/Icd10ProSrchMedFrame9.html";
  SearchFrameShow();
}
