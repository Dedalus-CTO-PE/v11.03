//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb7717.js
//
// Written   : 20/03/2003
//
// Function  : Standard Functions Used in patweb7717 templates
//
// Version   : 
//
// V10.01.01 19.01.2011  Peter Vela    CAR 233034
//                      Copied from patweb7701.js for Johns Hopkins Bed Fee
//                      Maintenance
// V9.03.04 06.10.2003  Tracey Nguyen CAR 43880
//                      Changed DFrame to position under the parent window 
//                      selection headings.     
// V9.03.03 29.07.2003  Lina Vo
//                      Put select() in clrHfund().
// V9.03.02 17.07.2003  Lina Vo            41537
//                      Changed valHfund() to clear Health Fund & Table fields
//                      when Health fund is invalid.
//                      Changed valHfundTab() to clear Health Table fields
//                      when Table is invalid and use focus() rather than 
//                      select().
// V9.03.01 06.06.2003  Ebon Clements   39898
//                      New javascript for bed fee maintenance screens
// V9.02.01 20.03.2003  Ebon Clements 
//                      Created Include              
//========================================================================
// REPORT 1 - Bed Fees 
//========================================================================
function SetFocus() {
   document.SelectCode.bdfee001.focus();
}
function SubmitForm() {
  if(validateMandatory(SelectCode)) {
    SelectCode.submit();
  }
}
function ShowLink(linkurl) {
   Left=(document.body.clientWidth-600)/2
   DFrameLink(linkurl,90,Left,600,400);
}
function AddBedFee(CurrNew) {
  linkurl="patweb77.pbl?reportno=17&template=2&fileflag=" + CurrNew
   Left=(document.body.clientWidth-600)/2
   DFrameLink(linkurl,90,Left,600,400);
}
//
function SelectFile(CurrNew) {
 location.href="patweb77.pbl?reportno=17&template=001&fileflag=" + CurrNew +
               "&bdfee001=" + document.SelectCode.bdfee001.value +
               "&bdfee002=" + document.SelectCode.bdfee002.value +
               "&bdfee015=" + document.SelectCode.bdfee015.value +
               "&bdfee004=" + document.SelectCode.bdfee004.value
}
//
function clrHfund(hfund,hfdesc,hftable,hftdesc) {
  hfund.value="";
  hfund.className="";
  hfdesc.value="";
  hftable.value="";
  hftable.className="";
  hftdesc.value="";
  hfund.select();
}
//
function valHfund(ReturnFund,ReturnTable,FundName,TableName) {
  if(!isWhitespace(ReturnFund.value)) {
       if (!validateCode(16,ReturnFund,FundName)) {
           ReturnTable.className="";
           ReturnFund.value="";
           FundName.value="";
           ReturnTable.value="";
           TableName.value="";
           ReturnFund.select();
           return;
       }
    ReturnTable.className="Mandatory";
  }
  if(isWhitespace(ReturnFund.value)) {
    ReturnFund.value="";
    FundName.value="";
    ReturnTable.value="";
    TableName.value="";
    ReturnTable.className="";
  }
}
//
function valHfundTab(ReturnFund,ReturnTable,FundName,TableName) {
  if (ReturnTable.value.substr(0,1)==" ") {
      ReturnFund.value="";
      FundName.value="";
      ReturnTable.value="";
      TableName.value="";
      ReturnTable.className="";
  }
  if (isWhitespace(ReturnTable.value)) return;;
  ReturnFunction="" ;
  for (var i=4; i < valHfundTab.arguments.length; i++) {
    if (typeof(valHfundTab.arguments[i]) == 'function') {
      ReturnFunction=valHfundTab.arguments[i] }
    else {
      valHfundTab.arguments[i].value=""; }  }
//
  if (isWhitespace(ReturnFund.value) && !isWhitespace(ReturnTable.value)) {
      alert("Please enter a health fund before entering the table");
      ReturnTable.value="";
      TableName.value="";
      ReturnFund.focus();
      return;
  }
//
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=20" +
                    "&valdfund=" + ReturnFund.value.replace(/ /g,"+") +
                    "&valdtabl=" + ReturnTable.value.replace(/ /g,"+")
//
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    FundName.value=trim(ReturnValue[0])
    TableName.value=trim(ReturnValue[1])
    j=0
    for (var i=5; i < valHfundTab.arguments.length; i++) {
       if (typeof(valHfundTab.arguments[i]) != 'function') {
         j++
         valHfundTab.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnTable.value="";
    TableName.value="";
    ReturnTable.focus();
    return;
     }
}
