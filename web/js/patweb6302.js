//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb6302.js
//
// Written   : 18/08/2003
//
// Function  : Standard Functions Used in patweb6301 templates
//
// Version   : 
//
// V10.02.01 31/03/2011  J.Tan   CAR 233055
//          Mods to redirect to casepayment revenue breakdown for daycase
// V10.01.01 27/01/2011  Davin   CAR 233055
//          Removed fileflag
// V10.00.01 21/05/2010  J.Tan   CAR 220995
//          Mods for Contract ID generation
// V9.12.01 10/10/2009  J.Tan   CAR 205303
//          Added Casemix Contract ID
// V9.03.00 18/08/2003  Jill Habasque 
//          Created Include              
//========================================================================
// REPORT 2 - Sameday fees  
//========================================================================
function ShowSameday(contrid,claim,hfund,table,casemix) {
  location.href="patweb63.pbl?reportno=2&template=7" +
               "&ptlsd012=" + contrid +
               "&ptlsd001=" + claim +
               "&ptlsd002=" + hfund +
               "&ptlsd003=" + table +
               "&ptlsd004=" + casemix 
}
//
function DeleteInvoice(bdcode) {
   document.AddForm.updttype.value="D";
   document.AddForm.brkdcode.value=bdcode;
   document.AddForm.redirect.value="patweb63.pbl?reportno=02&template=007"+
           "&ptlsd012=" + document.AddForm.ptlsd012.value +
           "&ptlsd001=" + document.AddForm.ptlsd001.value +
           "&ptlsd002=" + document.AddForm.ptlsd002.value +
           "&ptlsd003=" + document.AddForm.ptlsd003.value +
           "&ptlsd004=" + document.AddForm.ptlsd004.value 
document.AddForm.redirec1.value="&brkdtype=" + document.AddForm.brkdtype.value +
           "&showrevn=" + document.AddForm.showrevn.value
   AddForm.submit();
}
//
function UpdateRevBreakdown() {
   linkurl="patweb63.pbl?reportno=2&template=8" +
           "&ptlsd012=" + document.UpdateForm.ptlsd012.value +
           "&ptlsd001=" + document.UpdateForm.ptlsd001.value +
           "&ptlsd002=" + document.UpdateForm.ptlsd002.value +
           "&ptlsd003=" + document.UpdateForm.ptlsd003.value +
           "&ptlsd004=" + document.UpdateForm.ptlsd004.value +
           "&brkdtype=R&updatefl=1"
   Left=(document.body.clientWidth-600)/2
   DFrameLink(linkurl,0,Left,700,400);
}
//
function AddRevBreakdown() {
   linkurl="patweb63.pbl?reportno=2&template=8" +
           "&ptlsd012=" + document.AddForm.ptlsd012.value +
           "&ptlsd001=" + document.AddForm.ptlsd001.value +
           "&ptlsd002=" + document.AddForm.ptlsd002.value +
           "&ptlsd003=" + document.AddForm.ptlsd003.value +
           "&ptlsd004=" + document.AddForm.ptlsd004.value +
           "&brkdtype=R"
   Left=(document.body.clientWidth-600)/2
   DFrameLink(linkurl,0,Left,700,400);
} 
//
function UpdateRevBreakdown2() {
   linkurl="patweb63.pbl?reportno=2&template=8" +
           "&ptlsd012=" + document.UpdateForm.ptlsd012.value +
           "&ptlsd001=" + document.UpdateForm.ptlsd001.value +
           "&ptlsd002=" + document.UpdateForm.ptlsd002.value +
           "&ptlsd003=" + document.UpdateForm.ptlsd003.value +
           "&ptlsd004=" + document.UpdateForm.ptlsd004.value +
           "&brkdtype=R"
   Left=(document.body.clientWidth-600)/2
   DFrameLink(linkurl,0,Left,700,400);
}
//
function UpdateInvBreakdown2() {
   linkurl="patweb63.pbl?reportno=2&template=8" +
           "&ptlsd012=" + document.UpdateForm.ptlsd012.value +
           "&ptlsd001=" + document.UpdateForm.ptlsd001.value +
           "&ptlsd002=" + document.UpdateForm.ptlsd002.value +
           "&ptlsd003=" + document.UpdateForm.ptlsd003.value +
           "&ptlsd004=" + document.UpdateForm.ptlsd004.value +
           "&brkdtype=I"
   Left=(document.body.clientWidth-600)/2
   DFrameLink(linkurl,0,Left,700,400);
}
//
function UpdateInvBreakdown() {
   linkurl="patweb63.pbl?reportno=2&template=8" +
           "&ptlsd012=" + document.UpdateForm.ptlsd012.value +
           "&ptlsd001=" + document.UpdateForm.ptlsd001.value +
           "&ptlsd002=" + document.UpdateForm.ptlsd002.value +
           "&ptlsd003=" + document.UpdateForm.ptlsd003.value +
           "&ptlsd004=" + document.UpdateForm.ptlsd004.value +
           "&brkdtype=I&updatefl=1"
   Left=(document.body.clientWidth-600)/2
   DFrameLink(linkurl,0,Left,700,400);
}
//
function AddSameday() {
   linkurl="patweb63.pbl?reportno=2&template=4"
   Left=(document.body.clientWidth-800)/2
   DFrameLink(linkurl,0,Left,800,400);
}
//
function ShowLink(linkurl) {
   Left=(document.body.clientWidth-600)/2
   DFrameLink(linkurl,0,Left,600,400);
}
//
function AddAdditional() {
   linkurl="patweb63.pbl?reportno=2&template=5" +
           "&ptlsd012=" + document.UpdateForm.ptlsd012.value +
           "&ptlsd001=" + document.UpdateForm.ptlsd001.value +
           "&ptlsd002=" + document.UpdateForm.ptlsd002.value +
           "&ptlsd003=" + document.UpdateForm.ptlsd003.value +
           "&ptlsd004=" + document.UpdateForm.ptlsd004.value
   Left=(document.body.clientWidth-600)/2
   DFrameLink(linkurl,0,Left,600,400);
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
     AddForm.ptlsd003.className="Mandatory";
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
  document.UpdateForm.redirect.value="patweb63.pbl?reportno=02&template=002"+
           "&ptlsd012=" + document.UpdateForm.ptlsd012.value +
           "&ptlsd001=" + document.UpdateForm.ptlsd001.value +
           "&ptlsd002=" + document.UpdateForm.ptlsd002.value +
           "&ptlsd003=" + document.UpdateForm.ptlsd003.value +
           "&ptlsd004=" + document.UpdateForm.ptlsd004.value

  if(validateMandatory(UpdateForm)) {
    UpdateForm.submit();
  }
}
//
