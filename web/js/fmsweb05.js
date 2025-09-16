//jsVersion  : V11.03.00
//========================================================================
// Program   : fmsweb05.js
//
// Function  : Standard Functions Used in fmsweb05xxxxx.html
//
// Version   :
//
// V9.03.00 31.10.2003 Lina Vo   43982
//          Created new.
//
//========================================================================
//
//========================================================================
//   Report 1
//========================================================================
function ShowDetail01(linkurl) {
  Left=(document.body.clientWidth-450)/2
  DFrameLink(linkurl,0,Left,450,450)
}
function EditAccount() {
  if (isWhitespace(SelectCode.startkey.value)) return;
  var dummy="";
  var account=SelectCode.startkey;
  if (validateAccount(account,dummy)) {
    SelectCode.template.value=3
    SelectCode.fmchq001.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-450)/2
    DFrameSubmit(SelectCode,0,Left,450,450)
  }
}
function validateAccount(ReturnCode,ReturnName) {
  ReturnFunction="";
  ReturnName.value="";
  for (var i=2; i < validateAccount.arguments.length; i++) {
    if (typeof(validateAccount.arguments[i]) == 'function') {
      ReturnFunction=validateAccount.arguments[i] }
    else {
      validateAccount.arguments[i].value=""; }
  }
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/fmsweb05.pbl?reportno=2" +
                    "&valdacct=" + ReturnCode.value.replace(/ /g,"+") 
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() }
    return true;
  }
  else {
    ReturnCode.select();
    return false;
  }
}
function checkBSB(bsbcode) {
  if (isWhitespace(bsbcode.value)) { 
    return; 
  }
  if (bsbcode.value.match(/-/)) {
    if ((bsbcode.value.length==7) && (bsbcode.value.substr(3,1)=="-")) {
        return true;
    }
  }
  else {
    if (bsbcode.value.length==6) {
      dim3a=bsbcode.value.substr(0,3);
      dim3b=bsbcode.value.substr(3,3);
      bsbcode.value=dim3a + "-" + dim3b;
      return true;
    }
  }
  alert("Invalid BSB Code. Correct BSB format 000-000.");
  bsbcode.select();
  return false;
}
