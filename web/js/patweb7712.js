//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb7712.js
//
// Written   : 22/11/2006
//
// Function  : Standard Functions Used in patweb7712 templates
//
// Version   : 
//
// V9.08.01 11/01/2007  Ebon Clements CAR 129231
//          Added setAddressA
// V9.08.00 22/11/2006  Ebon Clements CAR 119999
//          Created Include              
//========================================================================
// REPORT 12 - NZ Private Contract Funding
//========================================================================
function SetFocus() {
   document.SelectCode.nzcfn001.focus();
}
function SubmitForm() {
  if(validateMandatory(SelectCode)) {
    SelectCode.submit();
  }
}
function ShowLink(linkurl) {
   Left=(document.body.clientWidth-700)/2
   DFrameLink(linkurl,0,Left,700,550);
}
function AddContract(CurrNew) {
  linkurl="patweb77.pbl?reportno=12&template=2&fileflag=" + CurrNew
   Left=(document.body.clientWidth-700)/2
   DFrameLink(linkurl,0,Left,700,550);
}
function AddDoctor(CurrNew) {
  linkurl="patweb77.pbl?reportno=12&template=6&fileflag=" + CurrNew +
          "&nzcfn001=" +  SelectCode.nzcfn001.value.replace(/ /g,"+") +
          "&nzcfn002=" +  SelectCode.nzcfn002.value.replace(/ /g,"+") +
          "&nzcfn003=" +  SelectCode.nzcfn003.value.replace(/ /g,"+") +
          "&nzcfn004=" +  SelectCode.nzcfn004.value.replace(/ /g,"+") +
          "&nzcfn005=" +  SelectCode.nzcfn005.value.replace(/ /g,"+") +
          "&nzcfn006=" +  SelectCode.nzcfn006.value.replace(/ /g,"+")
   Left=(document.body.clientWidth-540)/2
   DFrameLink(linkurl,90,Left,540,370);
}
//
function ListContracts(CurrNew) {
  linkurl="patweb77.pbl?reportno=12&template=1&fileflag=" + CurrNew +
          "&nzcfn001=" +  SelectCode.nzcfn001.value.replace(/ /g,"+") +
          "&nzcfn002=" +  SelectCode.nzcfn002.value.replace(/ /g,"+") +
          "&nzcfn003=" +  SelectCode.nzcfn003.value.replace(/ /g,"+") +
          "&nzcfn004=" +  SelectCode.nzcfn004.value.replace(/ /g,"+")
  location.href=linkurl
}
//
function EditContract(CurrNew) {
  linkurl="patweb77.pbl?reportno=12&template=3&fileflag=" + CurrNew +
          "&nzcfn001=" +  SelectCode.nzcfn001.value.replace(/ /g,"+") +
          "&nzcfn002=" +  SelectCode.nzcfn002.value.replace(/ /g,"+") +
          "&nzcfn003=" +  SelectCode.nzcfn003.value.replace(/ /g,"+") +
          "&nzcfn004=" +  SelectCode.nzcfn004.value.replace(/ /g,"+") +
          "&nzcfn005=" +  SelectCode.nzcfn005.value.replace(/ /g,"+") +
          "&nzcfn006=" +  SelectCode.nzcfn006.value.replace(/ /g,"+")
   Left=(document.body.clientWidth-700)/2
   DFrameLink(linkurl,90,Left,700,550);
}
function SelectFile(CurrNew) {
 location.href="patweb77.pbl?reportno=12&template=001&fileflag=" + CurrNew +
               "&nzcfn001=" + document.SelectCode.nzcfn001.value +
               "&nzcfn002=" + document.SelectCode.nzcfn002.value +
               "&nzcfn003=" + document.SelectCode.nzcfn003.value +
               "&nzcfn004=" + document.SelectCode.nzcfn004.value +
               "&nzcfn005=" + document.SelectCode.nzcfn005.value +
               "&nzcfn006=" + document.SelectCode.nzcfn006.value 
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
function Layer() {
  if((UpdateForm.fileflag.value)!="N") {
    document.getElementById('layerdis').innerHTML=document.getElementById('current').innerHTML;
  }
  else {
    document.getElementById('layerdis').innerHTML=document.getElementById('newfile').innerHTML;
  }
}
function setAddress(formname) {
  if(formname.d_nzcfn008.checked==true) {
     formname.nzcfn009.readOnly=false;
     formname.nzcfn009.className="";
     formname.nzcfn010.readOnly=false;
     formname.nzcfn010.className="";
     formname.nzcfn011.readOnly=false;
     formname.nzcfn011.className="";
     formname.nzcfn012.readOnly=false;
     formname.nzcfn012.className="";
     formname.nzcfn013.readOnly=false;
     formname.nzcfn013.className="";
  } else {
     formname.nzcfn009.readOnly=true;
     formname.nzcfn009.className="Readonly";
     formname.nzcfn010.readOnly=true;
     formname.nzcfn010.className="Readonly";
     formname.nzcfn011.readOnly=true;
     formname.nzcfn011.className="Readonly";
     formname.nzcfn012.readOnly=true;
     formname.nzcfn012.className="Readonly";
     formname.nzcfn013.readOnly=true;
     formname.nzcfn013.className="Readonly";
  }
}
function setAddressA(formname) {
  if(formname.d_nzcfn008.checked==true) {
     formname.nzcfn009.readOnly=false;
     formname.nzcfn009.className="";
     formname.nzcfn010.readOnly=false;
     formname.nzcfn010.className="";
     formname.nzcfn011.readOnly=false;
     formname.nzcfn011.className="";
     formname.nzcfn012.readOnly=false;
     formname.nzcfn012.className="";
     formname.nzcfn013.readOnly=false;
     formname.nzcfn013.className="";
  } else {
     formname.nzcfn009.readOnly=true;
     formname.nzcfn009.value="";
     formname.nzcfn009.className="Readonly";
     formname.nzcfn010.readOnly=true;
     formname.nzcfn010.value="";
     formname.nzcfn010.className="Readonly";
     formname.nzcfn011.readOnly=true;
     formname.nzcfn011.value="";
     formname.nzcfn011.className="Readonly";
     formname.nzcfn012.readOnly=true;
     formname.nzcfn012.value="";
     formname.nzcfn012.className="Readonly";
     formname.nzcfn013.readOnly=true;
     formname.nzcfn013.value="";
     formname.nzcfn013.className="Readonly";
  }
}
