//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb7718.js
//
// Written   : 14/04/2003
//
// Function  : Standard Functions Used in patweb770 t2emplates
//
// Version   : 
//
// V10.01.02 09.02.2011  Peter Vela       CAR 233048
//                      New JHS js. Cloned from patweb7702.js
// V10.01.01 31.01.2011  Peter Vela       CAR 233048
//                      Changed DFrame size
// V9.03.03 06.10.2003  Tracey Nguyen    CAR 43880
//                      Changed DFrame to position under parent window
//                      selection headings.
// V9.03.02 29.07.2003  Lina Vo          36528
//                      Removed SelectFile() function.
//                      Amended valHfund() to blank invalid fund codes and
//                      output hfband from remote script.
//                      Put hfund.select() in clrHfund().
//                      Added AddTotal() function.
// V9.03.01 06.06.2003  Ebon Clements    39898
//                      New javascript for bed fee maintenance screens
// V9.02.01 14.04.2003  Ebon Clements 
//                      Created Include              
//========================================================================
// REPORT 2 -Theatre Fees
//========================================================================
function SetFocus() {
   document.SelectCode.opchg001.focus();
}
function ShowLink(linkurl) {
   Left=(document.body.clientWidth-600)/2;
   DFrameLink(linkurl,90,Left,600,400);
}
function AddTheatreFee(CurrNew) {
  linkurl="patweb77.pbl?reportno=18&template=2&fileflag=" + CurrNew
   Left=(document.body.clientWidth-600)/2;
   DFrameLink(linkurl,90,Left,600,450);
}
//
function clrHfund(hfund,hfdesc,hftable,hftdesc) {
  hfund.value="";
  hfund.className="";
  hfdesc.value="";
  hftable.value="";
  hftable.className="";
  hftdesc.value="";
  hfund.focus();
}
//
function SubmitForm(thisForm) {
  if(validateMandatory(thisForm)) {
  thisForm.submit();
  }
}
//
// Validates Health Fund and returns fund name and banding
//
function valHfund(ReturnFund,ReturnTable,FundName,TableName,Hfband) {
//
  if (isWhitespace(ReturnFund.value)) {
    ReturnFund.value="";
    FundName.value="";
    ReturnTable.value="";
    TableName.value="";
    ReturnTable.className="";
    Hfband.value="";
    return;
  }
  ReturnFunction="" ;
  for (var i=5; i < valHfund.arguments.length; i++) {
    if (typeof(valHfund.arguments[i]) == 'function') {
      ReturnFunction=valHfund.arguments[i] }
    else {
      valHfund.arguments[i].value=""; }  }
//
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=16" +
                    "&valdcode=" + ReturnFund.value.replace(/ /g,"+") 
//
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    FundName.value=trim(ReturnValue[0])
    Hfband.value=trim(ReturnValue[1])
    ReturnTable.className="Mandatory";
  }
  else {
    ReturnFund.value="";
    FundName.value="";
    ReturnTable.value="";
    TableName.value="";
    ReturnTable.className="";
    Hfband.value="";
    ReturnFund.focus();
    return;
  }
  if (typeof(ReturnFunction) == 'function') {
     ReturnFunction() }
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
      ReturnFund.select();
      return;
  }

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
    TableName.value="";
    ReturnTable.select();
    return false;
     }
}
//
// Health Fund Table Search Frame that also returns hfband
//
function HealthFundSearchFrameA(ReturnCode,ReturnName,ReturnTCode,ReturnTName,Returnhfband){
  var PopUpFrameDoc = DFrameStart();
  window.ReturnFunction="";
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.ReturnTCode=ReturnTCode ;
  window.ReturnTName=ReturnTName ;
  window.Returnhfband=Returnhfband ;
  if (HealthFundSearchFrameA.arguments.length > 4) {
    window.ReturnFunction=HealthFundSearchFrameA.arguments[5] }
  PopUpFrameDoc.location.href = "../lookups/HealthFundSearchFrame0.html";
  SearchFrameShow();
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
