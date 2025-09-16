//jsVersion  : V11.03.00
//========================================================================
// Program   : allweb01.js
//
// Written   : 04.06.2001 HPS 
//
// Function  : Standard Functions Used in allweb01 templates 
//
// Version   :
//
// V9.03.00  07.10.2003 Ebon Clements    CAR  43988 & 43991
//           Created include
//========================================================================
//  Report 5
//========================================================================
function ValidateSupplier(ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=2; i < ValidateSupplier.arguments.length; i++) {
    if (typeof(ValidateSupplier.arguments[i]) == 'function') {
      ReturnFunction=ValidateSupplier.arguments[i] }
    else {
      ValidateSupplier.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/allweb01.pbl?reportno=11" +
                    "&valdsupl=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=2; i < ValidateSupplier.arguments.length; i++) {
       if (typeof(ValidateSupplier.arguments[i]) != 'function') {
         j++
         ValidateSupplier.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.select();
    return false;
     }
}
//------------------------------------------------------------------
//  Validate an MBS item from the private practice item file
//------------------------------------------------------------------
function validatePMBS(ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=2; i < validatePMBS.arguments.length; i++) {
    if (typeof(validatePMBS.arguments[i]) == 'function') {
      ReturnFunction=validatePMBS.arguments[i] }
    else {
      validatePMBS.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/allweb01.pbl?reportno=9" +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=2; i < validatePMBS.arguments.length; i++) {
       if (typeof(validatePMBS.arguments[i]) != 'function') {
         j++
         validatePMBS.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.select();
    return false;
     }
}
