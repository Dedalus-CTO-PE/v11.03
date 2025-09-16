//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb7708.js
//
// Written   : 02/06/2003
//
// Function  : Standard Functions Used in patweb7708 templates
//
// Version   : 
// V9.08.01  15/03/2006  Neelkamal Pyla CAR 134507
//                       Changed the parameters for DFrameLink in ShowLink 
//                       method to increase the frame size
// V9.08.00  06/10/2006  Ebon Clements  CAR 120013
//           Created Include              
//========================================================================
// REPORT 8 -NZ Private Theatre Fee 
//========================================================================
function SubmitForm() {
  if(validateMandatory(SelectCode)) {
    SelectCode.submit();
  }
}

function ShowLink(linkurl) {
   Left=(document.body.clientWidth-550)/2
   DFrameLink(linkurl,0,Left,550,520);
}

function AddFee(CurrNew) {
  linkurl="patweb77.pbl?reportno=8&template=2&fileflag=" + CurrNew 
  Left=(document.body.clientWidth-500)/2
  DFrameLink(linkurl,90,Left,500,350);
}
//
function SelectFile(CurrNew) {
  url="patweb77.pbl?reportno=08&template=001&fileflag=" + CurrNew +
      "&nztfe001=" + document.SelectCode.nztfe001.value.replace(/ /g,"+") +
      "&nztfe002=" + document.SelectCode.nztfe002.value.replace(/ /g,"+") +
      "&nztfe003=" + document.SelectCode.nztfe003.value.replace(/ /g,"+") +
      "&nztfe004=" + document.SelectCode.nztfe004.value.replace(/ /g,"+") +
      "&nztfe005=" + document.SelectCode.nztfe005.value.replace(/ /g,"+") +
      "&nztfe006=" + document.SelectCode.nztfe006.value.replace(/ /g,"+") +
      "&nztfe007=" + document.SelectCode.nztfe007.value.replace(/ /g,"+") 
   
  location.href=url;
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
function Layer() {
  if((UpdateForm.fileflag.value)!="N") {
    document.getElementById('layerdis').innerHTML=document.getElementById('current').innerHTML;
  }
  else {
    document.getElementById('layerdis').innerHTML=document.getElementById('newfile').innerHTML;
  }
}
