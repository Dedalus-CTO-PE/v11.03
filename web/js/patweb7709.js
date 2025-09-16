//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb7709.js
//
// Written   : 30/10/2006
//
// Function  : Standard Functions Used in patweb7709 templates
//
// Version   : 
// V9.08.02  02/05/2007  J.Tan          CAR 137965
//           Extended the size of frame for revenue breakdown
// V9.08.01  27/12/2006  Jill Habasque  CAR 129247
//           Added div for maxfunder/patient co-payment
// V9.08.00  30/10/2006  Ebon Clements  CAR 120013
//           Created Include              
//========================================================================
// REPORT 9 -NZ Private Theatre Fee 
//========================================================================
function SubmitForm() {
  if(validateMandatory(SelectCode)) {
    SelectCode.submit();
  }
}
function ShowLink(linkurl) {
     location.href=linkurl;
//   Left=(document.body.clientWidth-600)/2
//   DFrameLink(linkurl,90,Left,600,550);
}
function AddFee(CurrNew) {
  linkurl="patweb77.pbl?reportno=9&template=2&fileflag=" + CurrNew 
  Left=(document.body.clientWidth-600)/2
  DFrameLink(linkurl,90,Left,600,550);
}
//
function SelectFile(CurrNew) {
  url="patweb77.pbl?reportno=09&template=001&fileflag=" + CurrNew +
      "&nzpfe001=" + document.SelectCode.nzpfe001.value.replace(/ /g,"+") +
      "&nzpfe002=" + document.SelectCode.nzpfe002.value.replace(/ /g,"+") +
      "&nzpfe003=" + document.SelectCode.nzpfe003.value.replace(/ /g,"+") +
      "&nzpfe004=" + document.SelectCode.nzpfe004.value.replace(/ /g,"+") +
      "&nzpfe005=" + document.SelectCode.nzpfe005.value.replace(/ /g,"+") +
      "&nzpfe006=" + document.SelectCode.nzpfe006.value.replace(/ /g,"+") 
   
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
function MaxFunder(formname) {
  if(formname.d_nzpfe007.checked==true) {
     formname.nzpfe012.selectedIndex=0;
     formname.nzpfe013.selectedIndex=0;
     formname.nzpfe012.disabled=true;
     formname.nzpfe013.disabled=true;
     formname.nzpfe008.value="";
     formname.nzpfe008.readOnly=true;
     formname.nzpfe008.className="Readonly";
     ContributionHeading.innerHTML=maxfunderhd.innerHTML;
  } else {
     formname.nzpfe012.disabled=false;
     formname.nzpfe013.disabled=false;
     formname.nzpfe008.readOnly=false;
     formname.nzpfe008.className="";
     ContributionHeading.innerHTML=copaymenthd.innerHTML;
  }
}
function UpdateRevBreakdown() {
   linkurl="patweb77.pbl?reportno=9&template=4&fileflag=" +
           document.UpdateForm.fileflag.value +
           "&nzpfe001=" + document.UpdateForm.nzpfe001.value +
           "&nzpfe002=" + document.UpdateForm.nzpfe002.value +
           "&nzpfe003=" + document.UpdateForm.nzpfe003.value +
           "&nzpfe004=" + document.UpdateForm.nzpfe004.value +
           "&nzpfe005=" + document.UpdateForm.nzpfe005.value +
           "&nzpfe006=" + document.UpdateForm.nzpfe006.value +
           "&brkdtype=R&updatefl=1"
   Left=(document.body.clientWidth-700)/2
   DFrameLink(linkurl,0,Left,700,700);
}
//
function UpdateRevBreakdown2() {
   linkurl="patweb77.pbl?reportno=9&template=4&fileflag=" +
           document.UpdateForm.fileflag.value +
           "&nzpfe001=" + document.UpdateForm.nzpfe001.value +
           "&nzpfe002=" + document.UpdateForm.nzpfe002.value +
           "&nzpfe003=" + document.UpdateForm.nzpfe003.value +
           "&nzpfe004=" + document.UpdateForm.nzpfe004.value +
           "&nzpfe005=" + document.UpdateForm.nzpfe005.value +
           "&nzpfe006=" + document.UpdateForm.nzpfe006.value +
           "&brkdtype=R"
   Left=(document.body.clientWidth-700)/2
   DFrameLink(linkurl,0,Left,700,700);
}
//
function UpdateInvBreakdown2() {
   linkurl="patweb77.pbl?reportno=9&template=4&fileflag=" +
           document.UpdateForm.fileflag.value +
           "&nzpfe001=" + document.UpdateForm.nzpfe001.value +
           "&nzpfe002=" + document.UpdateForm.nzpfe002.value +
           "&nzpfe003=" + document.UpdateForm.nzpfe003.value +
           "&nzpfe004=" + document.UpdateForm.nzpfe004.value +
           "&nzpfe005=" + document.UpdateForm.nzpfe005.value +
           "&nzpfe006=" + document.UpdateForm.nzpfe006.value +
           "&brkdtype=I"
   Left=(document.body.clientWidth-700)/2
   DFrameLink(linkurl,0,Left,700,700);
}
//
function UpdateInvBreakdown() {
   linkurl="patweb77.pbl?reportno=9&template=4&fileflag=" +
           document.UpdateForm.fileflag.value +
           "&nzpfe001=" + document.UpdateForm.nzpfe001.value +
           "&nzpfe002=" + document.UpdateForm.nzpfe002.value +
           "&nzpfe003=" + document.UpdateForm.nzpfe003.value +
           "&nzpfe004=" + document.UpdateForm.nzpfe004.value +
           "&nzpfe005=" + document.UpdateForm.nzpfe005.value +
           "&nzpfe006=" + document.UpdateForm.nzpfe006.value +
           "&brkdtype=I&updatefl=1"
   Left=(document.body.clientWidth-700)/2
   DFrameLink(linkurl,0,Left,700,700);
}
