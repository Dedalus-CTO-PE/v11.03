//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb7705.js
//
// Written   : 02/06/2003
//
// Function  : Standard Functions Used in patweb7705 templates
//
// Version   : 
//
// V11.00.01 22/10/2020  Darren Zhang   Task 0892294
//           Cross Browser compatibility changes increased dframe
// V10.01.01 15/02/2011 Ebon Clements  233048
//           Increased dframe size in AddCasemix()
// V9.11.01  16/03/2009 Peter mcMullen 188102
//           Remove redundant 'Layers' function 
// V9.03.03  08/01/2004  Pat Dirito    46543
//           Fixed various issues
// V9.03.02  13/10/2003  Pat Dirito    36492
//           Standard Functions Used in patweb7705 templates
// V9.03.01  03/06/2003  Pat Dirito    
//           Created Include              
//========================================================================
// REPORT 1 - Casemix Funding 
//========================================================================
function SetFocus() {
   document.SelectCode.casth001.focus();
}
function SubmitForm() {
  if(validateMandatory(SelectCode)) {
    setCase();
    SelectCode.submit();
  }
}
function ShowLink(linkurl) {
   Left=(document.body.clientWidth-720)/2
   DFrameLink(linkurl,90,Left,720,470);
}
function AddCasemix() {
  var radioGrp=document.SelectCode.casetype;
  for (var i=0; i < radioGrp.length; i++) {
    if (document.SelectCode.casetype[i].checked==true) {
    var checkcase=document.SelectCode.casetype[i].value;
      break;
    }
  }
  linkurl="patweb77.pbl?reportno=5&template=2" +
          "&casetype=" + checkcase
  Left=(document.body.clientWidth-800)/2
  DFrameLink(linkurl,90,Left,800,560);
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
// Totals to two numbers.
//
function AddTotal(total,fee1,fee2) {
total.value=0;
  if(!isWhitespace(fee1.value)) {
    if (checkNumber(fee1)) {
      RoundNumber(fee1,2);
      total.value=parseFloat(total.value) +
                  parseFloat(fee1.value)
    }
    else {
      fee1.value="";
      fee1.focus();
      return;
    }
  }
  if(!isWhitespace(fee2.value)) {
    if (checkNumber(fee2)) {
      total.value=parseFloat(total.value) +
                  parseFloat(fee2.value)
    }
    else {
      fee2.value="";
      fee2.focus();
      return;
    }
  }
  RoundNumber(total,2);
}
