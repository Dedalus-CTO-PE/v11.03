//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb6306.js
//
// Written   : 31/10/2006
//
// Function  : Standard Functions Used in patweb6306 templates
//
// Version   : 
//
// V9.08.00 31/10/2006  J.Tan
//          Created Include              
//========================================================================
// REPORT 6 - Contract Procedure Matrix  
//========================================================================
function valHfund(ReturnFund,FundName) {
  if(!isWhitespace(ReturnFund.value)) {
     validateCode(16,ReturnFund,FundName)
  }
  if(isWhitespace(ReturnFund.value)) {
    ReturnFund.value="";
    FundName.value="";
  }
}
function SelectFile(CurrNew) {
 claim=document.SelectCode.nzcmt001.value
 hfund=document.SelectCode.nzcmt002.value
 rtype=document.SelectCode.nzcmt003.value
 proc=document.SelectCode.nzcmt004.value
 itype=document.SelectCode.nzcmt005.value

 location.href="patweb63.pbl?reportno=06&template=001&fileflag=" + CurrNew +
               "&nzcmt001=" + claim.replace(/ /g,"+") +
               "&nzcmt002=" + hfund.replace(/ /g,"+") +
               "&nzcmt003=" + rtype.replace(/ /g,"+") +
               "&nzcmt004=" + proc.replace(/ /g,"+") +
               "&nzcmt005=" + itype.replace(/ /g,"+") 
}
//
