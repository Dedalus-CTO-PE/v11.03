//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb6109.js
//
// Written   : 17/03/2008
//
// Function  : Standard Functions Used in patweb6109 templates
//
// Version   :
//
// V9.11.00 17.03.2009  J.Tan         CAR 188110 196042
//                      Created include
//========================================================================
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
function clrHfund(hfund,hfdesc,hftable,hftdesc) {
  hfund.value="";
  hfund.className="";
  hfdesc.value="";
  hftable.value="";
  hftable.className="";
  hftdesc.value="";
  hfund.select();
}
