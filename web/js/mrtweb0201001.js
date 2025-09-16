//jsVersion  : V11.03.00
//========================================================================
// Program   : mrtweb0201001.js
//
// Written   : 08.11.2006  Davin (created from mrtweb02.js)
//
// Function  : Standard Functions Used in mrtweb0201001
//
// Version   : 
//
// V9.08.01 08/11/2006 Davin           CAR 123200
//     ***  Created from mrtweb02.js for JH Singapore (allow icd-9) ***
//
function Icd10DisNext(DischDte) {
  for (var i=0; i < document.UpdateForm.length; i++) {
    if (document.UpdateForm.elements[i].name.match(/mricd/)) { 
      if (isWhitespace(document.UpdateForm.elements[i].value)) {
        ThisCode=document.UpdateForm.elements[i];
        break; }}}
  if (isWhitespace(document.UpdateForm.elements[i-1].value)) {
    alert('Prefix is Required'); 
    document.UpdateForm.elements[i-1].focus() }
  else {
    Icd10DisSrchMedRec9(ThisCode,DischDte); } // Custom Medical Record search
}
function Icd10ProNext(DischDte) {
  for (var i=0; i < document.UpdateForm.length; i++) {
    if (document.UpdateForm.elements[i].name.match(/mricd/)) { 
      if (isWhitespace(document.UpdateForm.elements[i].value)) {
        ThisCode=document.UpdateForm.elements[i];
        break; }}}
  ThisCode=document.UpdateForm.elements[i];
  document.UpdateForm.elements[i-1].value = "O"; // Prefix set to O-Operation Code
  Icd10ProSrchMedRec9(ThisCode,DischDte);  // Custom Medical Record search 
}
//
// Validate Entered Procedure/Diagnosis Code
//
function CheckKey(ReturnCode,ReturnName,ReturnPrefix,ReturnDate,ReturnTime,ReturnEnd,ReturnBlock) {
  for (var i=0; i < document.UpdateForm.length; i++) {
    if (document.UpdateForm.elements[i].name.match(/mride/)) { 
      if (isWhitespace(document.UpdateForm.elements[i].value)) {
        setpos=i; // If editing already entered codes need to set position.
        break; }}}
  pripre = document.UpdateForm.pripre.value;   
  morpre = document.UpdateForm.morpre.value;   
  stateflg = document.UpdateForm.stateflg.value;   
  if (((isWhitespace(ReturnCode.value))&&(isWhitespace(ReturnName.value))) ||
     ((!isWhitespace(ReturnCode.value))&&(!isWhitespace(ReturnName.value)))) {
     return; }
  ReturnCode.value=ReturnCode.value.toUpperCase()
  ReturnCode.value=ReturnCode.value.replace(/ /g,"") 
//setfo=ReturnCode.value.search('[A-Z]')  
//if (setfo == "0") {
  setfo=ReturnPrefix.value;
  if (setfo !== "O") {
    Codes=true;
    if (ReturnPrefix.value == "") {
      alert("You must enter in a valid prefix.") 
      ReturnPrefix.focus(); 
      return; }
    if (ReturnPrefix.value == "O") {     // Disease Codes cannot have O Prefix
      alert("Must use a Disease prefix!") 
      ReturnPrefix.focus(); 
      return; }
    pcount++                    // Increment Disease Prefix counter
    if (pcount=="1") {
      namecod=ReturnPrefix;     // Set prefix object
      if (ReturnPrefix.value != pripre) {
        if (stateflg=="3") {
          alert("Error 1st Disease code does not have a '" + pripre +
                "' prefix! Please change.");
          document.UpdateForm[namecod.name].focus();
          return;
        } else {
          alert("Warning 1st Disease code does not have a '" + pripre + 
                "' prefix!") } }
    }
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
    ReturnFunction1=AddAccs; }
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
    ReturnFunction1=AddOps;
    ReturnPrefix.value="O"; }   
  ReturnName.value="";
  if (isWhitespace(ReturnCode.value)) return;;

  sexasscd=0;
  for (var i=0; i < document.UpdateForm.length; i++) {
    if (document.UpdateForm.elements[i].name.match(/mricd/)) {
      if (document.UpdateForm.elements[i].value.match(/E25.0/)) {
        sexasscd=1;
        break}
      if (document.UpdateForm.elements[i].value.match(/E25.8/)) {
        sexasscd=1;
        break}
      if (document.UpdateForm.elements[i].value.match(/E29.1/)) {
        sexasscd=1;
        break}
      if (document.UpdateForm.elements[i].value.match(/E34.5/)) {
        sexasscd=1;
        break}
      if (document.UpdateForm.elements[i].value.match(/F64.0/)) {
        sexasscd=1;
        break}
      if (document.UpdateForm.elements[i].value.match(/Q56.0/)) {
        sexasscd=1;
        break}
      if (document.UpdateForm.elements[i].value.match(/Q56.1/)) {
        sexasscd=1;
        break}
      if (document.UpdateForm.elements[i].value.match(/Q56.2/)) {
        sexasscd=1;
        break}
      if (document.UpdateForm.elements[i].value.match(/Q56.3/)) {
        sexasscd=1;
        break}
      if (document.UpdateForm.elements[i].value.match(/Q56.4/)) {
        sexasscd=1;
        break}
      if (document.UpdateForm.elements[i].value.match(/Q99.0/)) {
        sexasscd=1;
        break}
      if (document.UpdateForm.elements[i].value.match(/Q99.1/)) {
        sexasscd=1;
        break}
    }
  }

  var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=2" +
                  "&urnumber=" + UpdateForm.urnumber.value.replace(/ /g,"+") +
                  "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
                  "&valdtype=" + ValidateType + 
                  "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                  "&dsprefix=" + ReturnPrefix.value + 
                  "&discodno=" + ReturnCode.name.substr(5,3) +
                  "&sexasscd=" + sexasscd;
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnFunction=AddItem;
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0]);
    if (ValidateType=="1") { 
      additreq=ReturnValue[1]; 
      discount++;  // Increment the Disease Code Counter
      document.UpdateForm.countcod.value=discount + oprcount;
      if (!isWhitespace(ReturnValue[2])) {  // Diagnosis Warning Message?
        alert(ReturnValue[2]) }             // Diagnosis Warning Message Found!
    } else {    // Procedure Code 
      oprcount++;  // Increment the Operation Code Counter
      document.UpdateForm.countcod.value=discount + oprcount;
      if (!isWhitespace(ReturnValue[6])) {  // Procedure Code Warning?
        alert(ReturnValue[6]) }             // Procedure Warning Message Found!
      if (flag==1) {              //  if flag set then used saved variables
        ReturnDate.value=savdate;
        ReturnTime.value=savtime;
        ReturnEnd.value=savendt }
      else {
        ReturnDate.value=ReturnValue[1]
        ReturnTime.value=ReturnValue[2]
        ReturnEnd.value=ReturnValue[3] 
        if (isWhitespace(ReturnDate.value)) {  //Check if date is Empty cannot
          ReturnDate.value="";                 //be space filled  
          ReturnTime.value="";
          ReturnEnd.value=""; }
      }
      ReturnBlock.value=ReturnValue[5] 
    }
    if (typeof(ReturnFunction) == 'function') {
//      alert("setpos " + setpos);
//      alert("codcount " + codcount);
      if (setpos < codcount) {
        FindBlank() //Re-entering an already entered code, so set focus.
        if (ValidateType=="2") { 
         document.UpdateForm.elements[setpos+2].value=ReturnBlock.value;
        }
      } else {
        ReturnFunction1()
        ReturnFunction()
      }
    }
  }
  else {
    ReturnCode.select(); }
}
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
