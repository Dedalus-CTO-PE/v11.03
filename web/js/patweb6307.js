//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb6307.js
//
// Written   : 15/08/2007
//
// Function  : Standard Functions Used in patweb6307 templates
//
//========================================================================
// REPORT 7 - Multiple Procedures Code
//========================================================================
function ShowMProc(contid,claim,hfund,table,mproc,counter) {
  location.href="patweb63.pbl?reportno=7&template=3" + 
               "&pmmpr009=" + contid +
               "&pmmpr001=" + claim +
               "&pmmpr002=" + hfund +
               "&pmmpr003=" + table +
               "&pmmpr004=" + mproc +
               "&pmmpr005= 0"
}
function UpdateMProc(contid,claim,hfund,table,mproc,count) {
  linkurl="patweb63.pbl?reportno=7&template=5" +
               "&pmmpr009=" + contid +
               "&pmmpr001=" + claim +
               "&pmmpr002=" + hfund +
               "&pmmpr003=" + table +
               "&pmmpr004=" + mproc +
               "&pmmpr005=" + count
   Left=(document.body.clientWidth-760)/2
   DFrameLink(linkurl,150,Left,760,350)
}
//
function SelectFile(CurrNew) {
 location.href="patweb63.pbl?reportno=07&template=001=" +
               "&pmmpr009=" + document.SelectCode.pmmpr009.value +
               "&pmmpr001=" + document.SelectCode.pmmpr001.value +
               "&pmmpr002=" + document.SelectCode.pmmpr002.value +
               "&pmmpr003=" + document.SelectCode.pmmpr003.value 
}
//
function UpdateAmount() {
  linkurl="patweb63.pbl?reportno=7&template=6" +
          "&pmmpr009="+document.SelectCode.pmmpr009.value +
          "&pmmpr001="+document.SelectCode.pmmpr001.value +
          "&pmmpr002="+document.SelectCode.pmmpr002.value +
          "&pmmpr003="+document.SelectCode.pmmpr003.value +
          "&pmmpr004="+document.SelectCode.pmmpr004.value +
          "&pmmpr005= 0"
   Left=(document.body.clientWidth-800)/2
   DFrameLink(linkurl,0,Left,550,350);
}
//
function valHfund(ReturnFund,FundName) {
  if(!isWhitespace(ReturnFund.value)) {
     validateCode(16,ReturnFund,FundName)
  }
  if(isWhitespace(ReturnFund.value)) {
    ReturnFund.value="";
    FundName.value="";
  }
}
//
function valHfundtable(ReturnFund,FundName) {
  if(!isWhitespace(ReturnFund.value)) {
     validateCode(16,ReturnFund,FundName)
     AddForm.pmmpr003.className="Mandatory";
  }
  if(isWhitespace(ReturnFund.value)) {
    ReturnFund.value="";
    FundName.value="";
  }
}
//
function validateMBSCode(OptionNumber,ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=4; i < validateMBSCode.arguments.length; i++) {
    if (typeof(validateMBSCode.arguments[i]) == 'function') {
      ReturnFunction=validateMBSCode.arguments[i] }
    else {
      validateMBSCode.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/oprweb01.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=4; i < validateMBSCode.arguments.length; i++) {
       if (typeof(validateMBSCode.arguments[i]) != 'function') {
         j++
         validateCode.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.select();
    return false;
     }
}
