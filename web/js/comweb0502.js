//jsVersion  : V11.03.00
//========================================================================
// Program   : comweb0502.js
//
// Written   : 08.07.2004 Pat Dirito
//
// Function  : Standard Functions Used in comweb0502  
//
// Version   :
//
// V10.14.01 : 08/02/2019  Don Nguyen  TSK 0833548
//             Fixed data field length validation with page width.
//             Added GetVarLen().
//             Modified EvalLength() to also check Column value.
// V9.12.01  : 19.10.2009  Peter Vela  CAR 199757
//             Added Next Stationery Template Code functionality
// V9.11.01  : 03.03.2009  Jill Habasque CAR 134681
//            Changed call to CheckColLength to use ibtmd005 instead of vrlength
// V9.04.01  : 28.09.2005  Peter Vela  CAR 75775
//             Fixed infinite loop between Field No. and length validation
// V9.03.01  : 23.07.2004  Pat Dirito  CAR 50842
//             Added ReturnFunction to StationeryVar search and added
//             CheckSize() to AddItem()
// V9.03.00  : 08.07.2004  Pat Dirito  CAR 50842
//             Created Include   
//========================================================================
//------------------------------------------------------------
// Function : Stationery Type Var Search
//------------------------------------------------------------
function StationeryTypeVarSearch(ReturnCode,ReturnName) {
  var p=document.UpdateForm;
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode;
  window.ReturnName=ReturnName;
  if (StationeryTypeVarSearch.arguments.length > 1) {
    window.ReturnFunction=StationeryTypeVarSearch.arguments[2]; }
  PopUpFrameDoc.location.href = "../cgi-bin/" +
                           "comweb05.pbl?reportno=4&template=005&norecord=18" +
                           "&ibvar001="  + p.statntyp.value.replace(/ /g,"+");
  SearchFrameShow();
}
//------------------------------------------------------------
// Validate a Stationery Type Variable Number
//------------------------------------------------------------
function GetVarChck() {
  var p=document.UpdateForm;
  GetVar(p.statntyp,p.ibtmd008,p.ibtmd007,p.ibtmd005);
}
//------------------------------------------------------------
// Validate a Stationery Type Variable Number
//------------------------------------------------------------
function GetVar(stattype,statvar,vardesc,varlength) {
  var p=document.UpdateForm;
  if (isWhitespace(statvar.value)) return;
  var serverURL   = "../cgi-bin/comweb05.pbl?reportno=05&valdtype=1" +
                    "&stattype=" + stattype.value.replace(/ /g,"+") +
                    "&statnvar=" + statvar.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValues=returnValue.return_value.split("|")
    if ("!@#$"==ReturnValues[0].substring(0,4)) {
      vardesc.className="Mandatory";
      vardesc.readOnly=false;
      varlength.value=ReturnValues[1];
      p.vrlength.value=ReturnValues[1];
      justifyLeft(varlength);  // Do here as is in a span
      var ans=CheckLength(ReturnValues[1]);
      if (!ans) { return; }
      vardesc.select();
    } else {
      vardesc.value=ReturnValues[0];
      vardesc.readOnly=true;
      vardesc.className="ReadOnly";
      varlength.value=ReturnValues[1];
      p.vrlength.value=ReturnValues[1];
      justifyLeft(varlength);  // Do here as is in a span
      var ans=CheckLength(ReturnValues[1]);
      if (!ans) { return; }
//      varlength.select(); 
    }
  } else {
    statvar.select();  
  }
}
//------------------------------------------------------------
// Validate a Stationery Type Variable Number
//------------------------------------------------------------
function validateTemType(stattype,vardesc,ibtmd001) {
  if (vardesc.readOnly==true) {return;}
  var p=document.UpdateForm;
  if (isWhitespace(vardesc.value)) return;
  var serverURL   = "../cgi-bin/comweb05.pbl?reportno=05&valdtype=2" +
                    "&stattype=" + stattype.value.replace(/ /g,"+") +
                    "&statdesc=" + vardesc.value.replace(/ /g,"+") +
                    "&ibtmd001=" + ibtmd001.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
//alert(returnValue.status);
  if (returnValue.status==0) {
  } else {
    vardesc.select();
  }
}
//
//  Validate the length of the returned Data Item
//
function CheckLength(varlen) {
  var p=document.UpdateForm;
  varlen=varlen - 0;               // Convert to integer
  var col=p.ibtmd003.value - 0;  // Convert to integer
  var total=varlen + col - 1;
  if (total > p.pagwidth.value) {
    alert("Total length will take you over the page width!\n" +
          "Please adjust either Column width or change variable.");
    return false;
  }
  return true;
}
//
//  Validate the Column length combined with Data Item Length
//
function CheckColLength(varlen) {
  var p=document.UpdateForm;
  varlen=varlen - 0;               // Convert to integer
  var col=p.ibtmd003.value - 0;    // Convert to integer
  var total=varlen + col - 1;
  if (total > p.pagwidth.value) {
    alert("Total length will take you over the page width!\n" +
          "Please adjust either Column width or change variable.");
    return false;
  }
  return true;
}
//
//  Count and validate the length of the entered Text Field
//
function CountLen() {
  var p=document.UpdateForm;
  if (isWhitespace(p.ibtmd007.value)) return;
  var varlen=p.ibtmd007.value.length;   
  var col=p.ibtmd003.value - 0;         // Convert to integer
  var total=varlen + col - 1;
  if (total > p.pagwidth.value) {
    p.ibtmd005.value=varlen;
    alert("Total length will take you over the page width!\n" +
          "Please adjust either Column or Text width!");
    return false;
  }
  p.ibtmd005.value=varlen;
  return true;
}
//
// Check Column Length & count and validate the length of the entered Text Field
//
function CountColLen() {
  var p=document.UpdateForm;
  var varlen=p.ibtmd007.value.length;   // Convert to integer
  var col=p.ibtmd003.value - 0;         // Convert to integer
  var total=varlen + col - 1;
  if (total > p.pagwidth.value) {
    p.ibtmd005.value=varlen;
    alert("Total length will take you over the page width!\n" +
          "Please adjust either Column or Text width!");
    return false;
  }
  p.ibtmd005.value=varlen;
  return true;
}
//
//  Validate the size of Length
//
function EvalLength(varlen) {
  var p=document.UpdateForm;
  var inputvar=varlen.value-0;
  var vartotlen=p.vrlength.value-0;
  if (varlen.value!=0) {
    if ((inputvar > vartotlen)||(varlen.value < 1)) {
      alert("Length entered must be greater than 0 and less than" + 
            " or equal to " + p.vrlength.value);
      justifyLeft(varlen);  // Do here as is in a span
      varlen.select(); 
      return false;
    }
  }

  var col=p.ibtmd003.value - 0;
  var total=inputvar + col - 1;

  if (total > p.pagwidth.value) {
    alert("Total length will take you over the page width!\n" +
          "Please adjust either Column width or change variable.");
    return false;
  }

}
//
//  Check the size of text or field if Column width is re-entered
//
function CheckSize() {       // Check the size if var or text already entered!
  var p=document.UpdateForm;
  if (isWhitespace(p.ibtmd003.value)) return;
  checkNumber(p.ibtmd003);   // Do here as once onblur added it stopped working
  var radioGrp=p.ibtmd004;
  for (var i=0; i < radioGrp.length; i++) {
    if (p.ibtmd004[i].checked==true) {
      var checktype=p.ibtmd004[i].value;
      break;
    }
  }
  if (checktype=="1") {
    var ans=CountColLen();
    if (!ans) { 
      p.ibtmd003.select();
      return false;
    }
  } else {
    var ans=CheckColLength(p.ibtmd005.value);
    if (!ans) { 
      p.ibtmd003.select();
      return false;
    }
  }
  return true;
}
function AddItem() {
  if (validateMandatory(UpdateForm)) {
    if (document.UpdateForm.ibtmd005.value==0) {
      alert("Length entered must be greater than 0");
      document.UpdateForm.ibtmd005.select();
      return;
    }
    var ans=CheckSize();
    if (!ans) { return; }    
    UpdateForm.target="PopUpFrame"
    UpdateForm.submit();
  }
}
function ShowDetail(linkurl) {
  Left=(document.body.clientWidth-520)/2
  DFrameLink(linkurl,0,Left,520,320)
}

//------------------------------------------------------------
// Get Stationery Type Variable length
//------------------------------------------------------------
function GetVarLen(stattype,statvar,varlength) {
  if (isWhitespace(statvar.value)) return;
  var serverURL   = "../cgi-bin/comweb05.pbl?reportno=05&valdtype=1" +
                    "&stattype=" + stattype.value.replace(/ /g,"+") +
                    "&statnvar=" + statvar.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValues=returnValue.return_value.split("|")
    varlength.value=ReturnValues[1];
    justifyLeft(varlength);  // Do here as is in a span
  }
}
