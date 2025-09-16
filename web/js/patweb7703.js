//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb7703.js
//
// Written   : 02/06/2003
//
// Function  : Standard Functions Used in patweb7703 templates
//
// Version   : 
//
// V10.01.01 25/01/2011 Ebon Clements     CAR 233050
//          Removed old/new file functionality
// V9.03.03 13/10/2003  Pat Dirito        36492
//          Standard Functions Used in patweb7703 templates
// V9.03.02 06/10/2003  Tracey Nguyen CAR 43880
//          Changed DFrame to position under parent window
//          selection headings.
// V9.03.01 03/06/2003  Pat Dirito    
//          Created Include              
//========================================================================
// REPORT 1 - Casemix Funding 
//========================================================================
function SetFocus() {
   document.SelectCode.casmx001.focus();
}
function SubmitForm() {
  if(validateMandatory(SelectCode)) {
    SelectCode.submit();
  }
}
function ShowLink(linkurl) {
   Left=(document.body.clientWidth-500)/2
   DFrameLink(linkurl,90,Left,600,400);
}
function AddCasemix() {
  linkurl="patweb77.pbl?reportno=3&template=2" 
   Left=(document.body.clientWidth-600)/2
   DFrameLink(linkurl,90,Left,600,400);
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
