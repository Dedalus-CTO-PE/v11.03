//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb7711.js
//
// Written   : 13/11/2006
//
// Function  : Standard Functions Used in patweb7711 templates
//
// Version   : 
//
// V10.07.01 19.10.2015  J.Tan          CAR 314089
//           Added 'Show details on Invoice' field
// V9.09.01  20.01.2007  Jill Habasque  CAR 129178
//           Added check for nzmch010 in checkDetail()
// V9.08.02  03.01.2007  Jill Habasque  CAR 129178
//           Added checkDetail()
// V9.08.01  30.11.2006  Ebon Clements   119985
//           Changed so H/Fund table is not mandatory
// V9.08.00  13.11.2006  Ebon Clements   120007
//           Created include
//========================================================================
// REPORT 4 - Miscellaneous Charges
//========================================================================
function SubmitForm(theForm) {
  if(validateMandatory(theForm)) {
    theForm.submit();
  }
}
function ShowLink(linkurl) {
   Left=(document.body.clientWidth-740)/2
   DFrameLink(linkurl,90,Left,740,470);
}
function AddMiscCharge(CurrNew) {
  linkurl="patweb77.pbl?reportno=11&template=2&fileflag=" + CurrNew
   Left=(document.body.clientWidth-740)/2
   DFrameLink(linkurl,90,Left,740,470);
}
//
function AddExpItem(CurrNew) {
  linkurl="patweb77.pbl?reportno=11&template=5&fileflag=" + CurrNew +
          "&nzmch001=" +  SelectCode.nzmch001.value.replace(/ /g,"+") +
          "&nzmch002=" +  SelectCode.nzmch002.value.replace(/ /g,"+") +
          "&nzmch003=" +  SelectCode.nzmch003.value.replace(/ /g,"+") +
          "&nzmch004=" +  SelectCode.nzmch004.value.replace(/ /g,"+") +
          "&nzmch005=" +  SelectCode.nzmch005.value.replace(/ /g,"+") +
          "&nzmch006=" +  SelectCode.nzmch006.value.replace(/ /g,"+") 
   Left=(document.body.clientWidth-740)/2
   DFrameLink(linkurl,90,Left,740,470);
}
function EditMiscItem(CurrNew) {
  linkurl="patweb77.pbl?reportno=11&template=3&fileflag=" + CurrNew +
          "&nzmch001=" +  SelectCode.nzmch001.value.replace(/ /g,"+") +
          "&nzmch002=" +  SelectCode.nzmch002.value.replace(/ /g,"+") +
          "&nzmch003=" +  SelectCode.nzmch003.value.replace(/ /g,"+") +
          "&nzmch004=" +  SelectCode.nzmch004.value.replace(/ /g,"+") +
          "&nzmch005=" +  SelectCode.nzmch005.value.replace(/ /g,"+") +
          "&nzmch006=" +  SelectCode.nzmch006.value.replace(/ /g,"+")
   Left=(document.body.clientWidth-740)/2
   DFrameLink(linkurl,90,Left,740,470);
}
function ListMiscItem(CurrNew) {
  linkurl="patweb77.pbl?reportno=11&template=1&fileflag=" + CurrNew +
          "&nzmch001=" +  SelectCode.nzmch001.value.replace(/ /g,"+") +
          "&nzmch002=" +  SelectCode.nzmch002.value.replace(/ /g,"+") +
          "&nzmch003=" +  SelectCode.nzmch003.value.replace(/ /g,"+") +
          "&nzmch004=" +  SelectCode.nzmch004.value.replace(/ /g,"+") 
  location.href=linkurl
}
//
function valHfund(ReturnFund,ReturnTable,FundName,TableName) {
  if (isWhitespace(ReturnFund.value)) {
    ReturnFund.value="";
    FundName.value="";
    ReturnTable.value="";
    TableName.value="";
    ReturnTable.className="";
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
//  ReturnTable.className="Mandatory";
  }
  else {
    ReturnFund.value="";
    FundName.value="";
    ReturnTable.value="";
    TableName.value="";
    ReturnTable.className="";
    ReturnFund.focus();
    return;
  }
//
  if (typeof(ReturnFunction) == 'function') {
     ReturnFunction() }
}
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
  hfund.focus();
}
//
function checkGST(theForm) {
  i=theForm.nzmch013.selectedIndex;
  GSTApplic=theForm.nzmch013.options[i].value;
// GST Free
  if (GSTApplic==0){
    theForm.nzmch014.selectedIndex=0;
    theForm.nzmch014.className="Readonly";
    theForm.nzmch014.disabled=true;
  }
  else {
//   GST Payable
    if (GSTApplic==1){
      theForm.nzmch014.className="Mandatory";
      theForm.nzmch014.disabled=false;
    }
//   Either
    else {
      theForm.nzmch014.className="Readonly";
      theForm.nzmch014.disabled=false;
    }
  } 
}
function checkDetail(theForm){
 if (theForm.nzmch008.value!="1"){
   DetailonInv.innerHTML=NoDetail.innerHTML;
 } else {
   DetailonInv.innerHTML=ShowDetail.innerHTML;
 }
}
