//jsVersion  : V11.03.00
//========================================================================
// Program   : comweb0201.js
// 
// Written   : 24/11/2010  Mike Laming
//
// Function  : Standard Functions Used in comweb0201 Debt Alert templates
// 
//========================================================================
//  Common functions for Debt Alerts
//========================================================================
function validateInv() {
  p=document.UpdateForm
  p.ptdet001.min=1;
  p.ptdet001.max=99999999;

  if(isWhitespace(p.ptdet001.value)) {
     return;}
  if (!checkInteger(p.ptdet001,"Invoice Number")){
     return;}

//            this calls Patient Invoice List remote script
  var Url = "../cgi-bin/patweb80.pbl?reportno=51" +
            "&valdcode="+p.ptdet001.value.replace(/ /g,"+") +
            "&valdurno="+p.urnumber.value.replace(/ /g,"+") +
            "&valdtype=3&valdcrst=1";
  var returnValue = RSExecute(Url);
  var invnumb = "";
  var patadmn = "";
  var paturno = "";
  var debttype = "";
  var system = "";
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    system=ReturnValue[3];
    if (system==4) {
      invnumb=ReturnValue[0];
      justifyRight(invnumb);
      paturno=ReturnValue[2];
      debttype = ReturnValue[5];
      if (p.outstand != undefined) {
        p.outstand.value = ReturnValue[4];
      }
      if (p.visittyp != undefined) {
        p.visittyp.value=ReturnValue[3];
      }
    } else {
      invnumb=ReturnValue[0];
      justifyRight(invnumb);
      patadmn=ReturnValue[1];
      paturno=ReturnValue[2];
      debttype = ReturnValue[9];
      if (p.outstand != undefined) {
        p.outstand.value = ReturnValue[4];
      }
    }
  } else {
    p.ptdet001.value="";
    p.ptdet001.focus();
    return false;
  }

  if(paturno != p.urnumber.value) {
    alert("This Invoice does not belong to this Patient");
    p.ptdet001.value="";
    p.ptdet001.focus();
    return false;
  }
  if(debttype == "2") {
    alert("This Invoice is already on a Payment Plan");
    p.ptdet001.value="";
    p.ptdet001.focus();
    return false;
  }
  if(debttype == "3") {
    alert("This Invoice is with Debt Collection Agency");
    p.ptdet001.value="";
    p.ptdet001.focus();
    return false;
  }
}

function InvoiceList(ReturnUR,ReturnType,ReturnInv) {
  window.ReturnCode=ReturnInv ;
  window.ReturnType=ReturnType;
  var urnumber = ReturnUR.value
  linkurl="patweb76.pbl?reportno=1&template=052"+
          "&urnumber=" + urnumber.replace(/ /g,"+");
  Left=(document.body.clientWidth-800)/2
  DFrameLink(linkurl,150,Left,800,250);
}
