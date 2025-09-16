//jsVersion  : V11.03.00
//========================================================================
// Program   : ciaweb80.js
//  
// Written   : 22.12.2003 Ebon Clements
//
// Function  : Standard Functions To Use Throughout The CIAWEB80 Remote Scripts
//
// Version   :
//
// V9.04.00  17/11/2005 Ebon Clements        CAR 71910
//           Added CheckGeneration
// V9.03.03  15/03/2004 Ebon Clements        CAR 45489
//           Added ValidateExtract and ValidatePower
// V9.03.02  12/03/2004 Ebon Clements        CAR 45488
//           Added ValidateDownload
// V9.03.01  12/01/2004 Ebon Clements        CAR 45487
//           Added ValidateCType
// V9.03.00  22/12/2003 Ebon Clements        CAR 45473
//           Created include
//------------------------------------------------------------
// Validate CIAS Episode
//------------------------------------------------------------
function ValidateEpisode(ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=2; i < ValidateEpisode.arguments.length; i++) {
    if (typeof(ValidateEpisode.arguments[i]) == 'function') {
      ReturnFunction=ValidateEpisode.arguments[i] }
    else {
      ValidateEpisode.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL = "../cgi-bin/ciaweb80.pbl?reportno=1&valdcode=" +
                  ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=ReturnValue[0];
    j=0
    for (var i=2; i < ValidateEpisode.arguments.length; i++) {
       if (typeof(ValidateEpisode.arguments[i]) != 'function') {
         j++
         ValidateEpisode.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.select();  }
}
//------------------------------------------------------------
// Validate ASCII File Name
//------------------------------------------------------------
function ValidateAscii(ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=2; i < ValidateAscii.arguments.length; i++) {
    if (typeof(ValidateAscii.arguments[i]) == 'function') {
      ReturnFunction=ValidateAscii.arguments[i] }
    else {
      ValidateAscii.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL = "../cgi-bin/ciaweb80.pbl?reportno=2&valdcode=" +
                  ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=ReturnValue[0];
    j=0
    for (var i=2; i < ValidateAscii.arguments.length; i++) {
       if (typeof(ValidateAscii.arguments[i]) != 'function') {
         j++
         ValidateAscii.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.select();  }
}
//------------------------------------------------------------
// Validate Casemix Type
//------------------------------------------------------------
function ValidateCType(ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=2; i < ValidateCType.arguments.length; i++) {
    if (typeof(ValidateCType.arguments[i]) == 'function') {
      ReturnFunction=ValidateCType.arguments[i] }
    else {
      ValidateCType.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL = "../cgi-bin/ciaweb80.pbl?reportno=3&valdcode=" +
                  ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=ReturnValue[0];
    j=0
    for (var i=2; i < ValidateCType.arguments.length; i++) {
       if (typeof(ValidateCType.arguments[i]) != 'function') {
         j++
         ValidateCType.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.select();  }
}
//------------------------------------------------------------
// Validate Casemix Type and Code
//------------------------------------------------------------
function ValidateCCode(ReturnType,ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=3; i < ValidateCCode.arguments.length; i++) {
    if (typeof(ValidateCCode.arguments[i]) == 'function') {
      ReturnFunction=ValidateCCode.arguments[i] }
    else {
      ValidateCCode.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL = "../cgi-bin/ciaweb80.pbl?reportno=4" + 
                  "&valdtype=" + ReturnType.value.replace(/ /g,"+") +
                  "&valdcode=" + ReturnCode.value.replace(/ /g,"+") 
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=ReturnValue[0];
    j=0
    for (var i=3; i < ValidateCCode.arguments.length; i++) {
       if (typeof(ValidateCCode.arguments[i]) != 'function') {
         j++
         ValidateCCode.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.select();  }
}
//------------------------------------------------------------
// Check if a CIAS extract download file exists
//------------------------------------------------------------
function ValidateDownload(ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName="";
  for (var i=2; i < ValidateDownload.arguments.length; i++) {
    if (typeof(ValidateDownload.arguments[i]) == 'function') {
      ReturnFunction=ValidateDownload.arguments[i] }
    else {
      ValidateDownload.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL = "../cgi-bin/ciaweb80.pbl?reportno=5&valdcode=" +
                  ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=ReturnValue[0];
    j=0
    for (var i=2; i < ValidateDownload.arguments.length; i++) {
       if (typeof(ValidateDownload.arguments[i]) != 'function') {
         j++
         ValidateDownload.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.value="";
    ReturnCode.select();  }
}
//------------------------------------------------------------
// Validate Extract ID
//------------------------------------------------------------
function ValidateExtract(ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=2; i < ValidateExtract.arguments.length; i++) {
    if (typeof(ValidateExtract.arguments[i]) == 'function') {
      ReturnFunction=ValidateExtract.arguments[i] }
    else {
      ValidateExtract.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL = "../cgi-bin/ciaweb80.pbl?reportno=6&valdcode=" +
                  ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=ReturnValue[0];
    j=0
    for (var i=2; i < ValidateExtract.arguments.length; i++) {
       if (typeof(ValidateExtract.arguments[i]) != 'function') {
         j++
         ValidateExtract.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.select();  }
}
//------------------------------------------------------------
// Validate PowerPlay extract ID
//------------------------------------------------------------
function ValidatePower(ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=2; i < ValidatePower.arguments.length; i++) {
    if (typeof(ValidatePower.arguments[i]) == 'function') {
      ReturnFunction=ValidatePower.arguments[i] }
    else {
      ValidatePower.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL = "../cgi-bin/ciaweb80.pbl?reportno=7&valdcode=" +
                  ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=ReturnValue[0];
    j=0
    for (var i=2; i < ValidatePower.arguments.length; i++) {
       if (typeof(ValidatePower.arguments[i]) != 'function') {
         j++
         ValidatePower.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.select();  }
}
//------------------------------------------------------------
// Check extract generation status
//------------------------------------------------------------
function CheckGeneration(ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=2; i < CheckGeneration.arguments.length; i++) {
    if (typeof(CheckGeneration.arguments[i]) == 'function') {
      ReturnFunction=CheckGeneration.arguments[i] }
    else {
      CheckGeneration.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL = "../cgi-bin/ciaweb80.pbl?reportno=8&valdcode=" +
                  ReturnCode.value.replace(/ /g,"+")
 
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=ReturnValue[0];
    j=0
    for (var i=2; i < CheckGeneration.arguments.length; i++) {
       if (typeof(CheckGeneration.arguments[i]) != 'function') {
         j++
         CheckGeneration.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } 
  }
}
