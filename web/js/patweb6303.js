//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb6303.js
//
// Written   : 18/08/2003
//
// Function  : Standard Functions Used in patweb6303 templates
//
// Version   : 
//
// V10.01.02 27/01/2011  Davin   CAR 233055
//          Removed fileflag
// V10.01.01 10/12/2010  Ebon Clements  CAR 233149
//          Increased DFrame size
// V10.00.01 21/05/2010  J.Tan   CAR 220995
//          Mods for Contract ID generation
// V9.12.01 20/09/2004  J.Tan  CAR 205303
//          Added Contract ID
// V9.03.01 11/06/2004  J.Tan  CAR 49644
//          Added function for adding recrods to overnight breakdown rev.file
// V9.03.00 18/08/2003  Jill Habasque 
//          Created Include              
//========================================================================
// REPORT 3 - Overnight fees  
//========================================================================
function ShowOvernight(contrid,claim,hfund,table,casemix,file) {
  location.href="patweb63.pbl?reportno=3&template=1" +
               "&pthlf013=" + contrid +
               "&pthlf001=" + claim +
               "&pthlf002=" + hfund +
               "&pthlf003=" + table +
               "&pthlf004=" + casemix 
}
//
function DeleteInvoice(bdcode) {
   document.AddForm.updttype.value="D";
   document.AddForm.brkdcode.value=bdcode;
   document.AddForm.redirect.value="patweb63.pbl?reportno=03&template=007"+
           "&pthlf013=" + document.AddForm.pthlf013.value +
           "&pthlf001=" + document.AddForm.pthlf001.value +
           "&pthlf002=" + document.AddForm.pthlf002.value +
           "&pthlf003=" + document.AddForm.pthlf003.value +
           "&pthlf004=" + document.AddForm.pthlf004.value 
document.AddForm.redirec1.value="&brkdtype=" + document.AddForm.brkdtype.value +
           "&showrevn=" + document.AddForm.showrevn.value
   AddForm.submit();
}
//
function UpdateRevBreakdown() {
   linkurl="patweb63.pbl?reportno=3&template=8" +
           "&pthlf013=" + document.UpdateForm.pthlf013.value +
           "&pthlf001=" + document.UpdateForm.pthlf001.value +
           "&pthlf002=" + document.UpdateForm.pthlf002.value +
           "&pthlf003=" + document.UpdateForm.pthlf003.value +
           "&pthlf004=" + document.UpdateForm.pthlf004.value +
           "&brkdtype=R&updatefl=1"
   Left=(document.body.clientWidth-600)/2
   DFrameLink(linkurl,0,Left,700,500);
}
//
function UpdateRevBreakdown2() {
   linkurl="patweb63.pbl?reportno=3&template=8" +
           "&pthlf013=" + document.UpdateForm.pthlf013.value +
           "&pthlf001=" + document.UpdateForm.pthlf001.value +
           "&pthlf002=" + document.UpdateForm.pthlf002.value +
           "&pthlf003=" + document.UpdateForm.pthlf003.value +
           "&pthlf004=" + document.UpdateForm.pthlf004.value +
           "&brkdtype=R"
   Left=(document.body.clientWidth-600)/2
   DFrameLink(linkurl,0,Left,700,500);
}
//
function UpdateInvBreakdown2() {
   linkurl="patweb63.pbl?reportno=3&template=8" +
           "&pthlf013=" + document.UpdateForm.pthlf013.value +
           "&pthlf001=" + document.UpdateForm.pthlf001.value +
           "&pthlf002=" + document.UpdateForm.pthlf002.value +
           "&pthlf003=" + document.UpdateForm.pthlf003.value +
           "&pthlf004=" + document.UpdateForm.pthlf004.value +
           "&brkdtype=I"
   Left=(document.body.clientWidth-600)/2
   DFrameLink(linkurl,0,Left,700,500);
}
//
function UpdateInvBreakdown() {
   linkurl="patweb63.pbl?reportno=3&template=8" +
           "&pthlf013=" + document.UpdateForm.pthlf013.value +
           "&pthlf001=" + document.UpdateForm.pthlf001.value +
           "&pthlf002=" + document.UpdateForm.pthlf002.value +
           "&pthlf003=" + document.UpdateForm.pthlf003.value +
           "&pthlf004=" + document.UpdateForm.pthlf004.value +
           "&brkdtype=I&updatefl=1"
   Left=(document.body.clientWidth-600)/2
   DFrameLink(linkurl,0,Left,700,500);
}
//
function AddOvernight() {
   linkurl="patweb63.pbl?reportno=3&template=4"
   Left=(document.body.clientWidth-800)/2
   DFrameLink(linkurl,0,Left,800,500);
}
//
function ShowLink(linkurl) {
   Left=(document.body.clientWidth-600)/2
   DFrameLink(linkurl,0,Left,600,500);
}
//
function AddAdditional() {
   linkurl="patweb63.pbl?reportno=3&template=5" +
           "&pthlf013=" + document.UpdateForm.pthlf013.value +
           "&pthlf001=" + document.UpdateForm.pthlf001.value +
           "&pthlf002=" + document.UpdateForm.pthlf002.value +
           "&pthlf003=" + document.UpdateForm.pthlf003.value +
           "&pthlf004=" + document.UpdateForm.pthlf004.value
   Left=(document.body.clientWidth-600)/2
   DFrameLink(linkurl,0,Left,600,500);
}
//
function AddLowOutlier() {
   linkurl="patweb63.pbl?reportno=3&template=12" +
           "&pthlf013=" + document.UpdateForm.pthlf013.value +
           "&pthlf001=" + document.UpdateForm.pthlf001.value +
           "&pthlf002=" + document.UpdateForm.pthlf002.value +
           "&pthlf003=" + document.UpdateForm.pthlf003.value +
           "&pthlf004=" + document.UpdateForm.pthlf004.value
   Left=(document.body.clientWidth-600)/2
   DFrameLink(linkurl,0,Left,600,500);
}
//
function AddInlier() {
   linkurl="patweb63.pbl?reportno=3&template=14" +
           "&pthlf013=" + document.UpdateForm.pthlf013.value +
           "&pthlf001=" + document.UpdateForm.pthlf001.value +
           "&pthlf002=" + document.UpdateForm.pthlf002.value +
           "&pthlf003=" + document.UpdateForm.pthlf003.value +
           "&pthlf004=" + document.UpdateForm.pthlf004.value
   Left=(document.body.clientWidth-600)/2
   DFrameLink(linkurl,0,Left,600,500);
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
     AddForm.pthlf003.className="Mandatory";
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
function DeleteRec() {
  UpdateForm.nextpage.value="1"
  UpdateForm.updttype.value="D"
  document.UpdateForm.redirect.value="patweb63.pbl?reportno=03&template=002"+
           "&pthlf001=" + document.UpdateForm.pthlf001.value +
           "&pthlf002=" + document.UpdateForm.pthlf002.value +
           "&pthlf003=" + document.UpdateForm.pthlf003.value +
           "&pthlf004=" + document.UpdateForm.pthlf004.value
  if(validateMandatory(UpdateForm)) {
    UpdateForm.submit();
  }
}
//
