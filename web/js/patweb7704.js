//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb7704.js
//
// Written   : 02/09/2003
//
// Function  : Standard Functions Used in patweb7704 templates
//
//========================================================================
// REPORT 4 - Miscellaneous Charges
//========================================================================
function SetFocus() {
   document.SelectCode.mschg001.focus();
}
function SubmitForm(theForm) {
  if(validateMandatory(theForm)) {
    theForm.submit();
  }
}
function ShowLink(linkurl) {
   Left=(document.body.clientWidth-740)/2
   DFrameLink(linkurl,30,Left,740,590);
}
function AddMiscCharge(CurrNew) {
  linkurl="patweb77.pbl?reportno=4&template=2&fileflag=" + CurrNew
   Left=(document.body.clientWidth-740)/2
   DFrameLink(linkurl,80,Left,740,570);
}
//
// function valHfund(ReturnFund,ReturnTable,FundName,TableName) {
//  if (isWhitespace(ReturnFund.value)) {
//    ReturnFund.value="";
//    FundName.value="";
//    ReturnTable.value="";
//    TableName.value="";
//    ReturnTable.className="";
//    return;
//  }
//  ReturnFunction="" ;
//  for (var i=5; i < valHfund.arguments.length; i++) {
//    if (typeof(valHfund.arguments[i]) == 'function') {
//      ReturnFunction=valHfund.arguments[i] }
//    else {
//      valHfund.arguments[i].value=""; }  }
////
//  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=16" +
//                    "&valdcode=" + ReturnFund.value.replace(/ /g,"+")
////
//  var returnValue = RSExecute(serverURL);
//  if (returnValue.status==0) {
//    ReturnValue=returnValue.return_value.split("|")
//    FundName.value=trim(ReturnValue[0])
//    ReturnTable.className="Mandatory";
//  }
//  else {
//    ReturnFund.value="";
//    FundName.value="";
//    ReturnTable.value="";
//    TableName.value="";
//    ReturnTable.className="";
//    ReturnFund.focus();
//    return;
//  }
//
//  if (typeof(ReturnFunction) == 'function') {
//     ReturnFunction() }
//}
function valHfund(ReturnFund,FundName,TableType) {
  if(!isWhitespace(ReturnFund.value)) {
     validateCode(16,ReturnFund,FundName)
     TableType.className="Mandatory";
//     TableType.value="";
  }
  if(isWhitespace(ReturnFund.value)) {
    ReturnFund.value="";
    FundName.value="";
    TableType.className="";
    TableType.value="";
  }
// init();
}

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
function checkGST(theForm) {
  i=theForm.mschg012.selectedIndex;
  GSTApplic=theForm.mschg012.options[i].value;
// GST Free
  if (GSTApplic==0){
    theForm.mschg013.selectedIndex=0;
    theForm.mschg013.className="Readonly";
    theForm.mschg013.disabled=true;
  }
  else {
//   GST Payable
    if (GSTApplic==1){
      theForm.mschg013.className="Mandatory";
      theForm.mschg013.disabled=false;
    }
//   Either
    else {
      theForm.mschg013.className="Readonly";
      theForm.mschg013.disabled=false;
    }
  } 
}
function checkTAC(theForm) {
  i=theForm.mschg018.selectedIndex;
  TACType=theForm.mschg018.options[i].value;
// Paramedical Item
  if (TACType=="P"){
    theForm.mschg019.className="Mandatory";
    theForm.mschg019.disabled=false;
  }
// Other Items
  else {
    theForm.mschg019.value="";
    theForm.mschg019.className="Readonly";
    theForm.mschg019.disabled=true;
  }
} 
