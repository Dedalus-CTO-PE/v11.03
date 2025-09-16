//jsVersion  : V11.03.00
//========================================================================
// Program   : outweb04.js
//========================================================================
//  Report 1
//========================================================================
function ShowDetail01(linkurl) {
  Left=(document.body.clientWidth-650)/2
  DFrameLink(linkurl,0,Left,650,455)
}
function EditLookup01() {
  SelectCode.template.value=3
  SelectCode.otsit001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-650)/2
  DFrameSubmit(SelectCode,0,Left,650,455)
}
//========================================================================
//  Report 2
//========================================================================
function ShowDetail02(linkurl) {
  Left=(document.body.clientWidth-500)/2
  DFrameLink(linkurl,0,Left,500,300)
}
function AddPub02(lookyear) {
  SelectCode.template.value=2
  SelectCode.otpho001.value=lookyear
  Left=(document.body.clientWidth-500)/2
  DFrameSubmit(SelectCode,0,Left,500,300)
}
//========================================================================
// Report 4
//========================================================================
function AddFormactn04() {
  pagelength = parseInt(AddForm.otlet005.value,10);
  bottommargin = parseInt(AddForm.otlet003.value,10);
  topmargin = parseInt(AddForm.otlet004.value,10);

  if (pagelength < bottommargin) {
     alert("Bottom Margin must be less than Page Length");
     AddForm.otlet003.focus();
     return;
  }

  if (pagelength < topmargin) {
     alert("Top Margin must be less than Page Length");
     AddForm.otlet004.focus();
     return;
  }
  if (pagelength < (topmargin+bottommargin)) {
     if  (topmargin > bottommargin) {
         alert("Top Margin is too big");
         AddForm.otlet004.focus();
     }
     else {
         alert("Bottom Margin is too big");
         AddForm.otlet003.focus();
     }
     return;
  }
  if (pagelength == (topmargin+bottommargin)) {
     alert("Invalid Top and Bottom Margin combination");
     if  (topmargin > bottommargin) {
         AddForm.otlet004.focus();
     }
     else {
         AddForm.otlet003.focus();
     }
     return;
  }
  if(document.AddForm.d_otlet009.checked==true) {
    document.AddForm.otlet009.value="0";
  } else {
    document.AddForm.otlet009.value="1";
  }
  if(document.AddForm.ptcnsmsn.value == "1") {
    if(document.AddForm.d_otlet010.checked==true) {
      document.AddForm.otlet010.value="1";
    } else {
      document.AddForm.otlet010.value="0";
    }
  }
  if (validateMandatory(AddForm)) {
    if (document.AddForm.otlet005.value == "0" ||
        document.AddForm.otlet004.value == "0" ||
        document.AddForm.otlet003.value == "0" ||
        document.AddForm.otlet006.value == "0") {
//      alert("Paper size and margins cannot be 0.");
      if (document.AddForm.otlet005.value == "0") {
        alert("Page Length must be > 0");
        document.AddForm.otlet005.value="";
        document.AddForm.otlet005.focus();
        return;
      }
      if (document.AddForm.otlet004.value == "0") {
        alert("Top Margin must be > 0");
        document.AddForm.otlet004.value="";
        document.AddForm.otlet004.focus();
        return;
      }
      if (document.AddForm.otlet003.value == "0") {
        alert("Bottom Margin must be > 0");
        document.AddForm.otlet003.value="";
        document.AddForm.otlet003.focus();
        return;
      }
      if (document.AddForm.otlet006.value == "0") {
        alert("Left Margin must be > 0");
        document.AddForm.otlet006.value="";
        document.AddForm.otlet006.focus();
        return;
      }
    }
    AddForm.submit();
  }
}

function updateFormactn04() {

  if (!validateMandatory(UpdateForm)) {return;}

  if (document.UpdateForm.otlet005.value == "0" ||
      document.UpdateForm.otlet004.value == "0" ||
      document.UpdateForm.otlet003.value == "0" ||
      document.UpdateForm.otlet006.value == "0") {
//    alert("Paper size and margins cannot be 0.");
    if (document.UpdateForm.otlet005.value == "0") {
      alert("Page Length must be > 0");
      document.UpdateForm.otlet005.value="";
      document.UpdateForm.otlet005.focus();
      return;
    }
    if (document.UpdateForm.otlet004.value == "0") {
      alert("Top Margin must be > 0");
      document.UpdateForm.otlet004.value="";
      document.UpdateForm.otlet004.focus();
      return;
    }
    if (document.UpdateForm.otlet003.value == "0") {
      alert("Bottom Margin must be > 0");
      document.UpdateForm.otlet003.value="";
      document.UpdateForm.otlet003.focus();
      return;
    }
    if (document.UpdateForm.otlet006.value == "0") {
      alert("Left Margin must be > 0");
      document.UpdateForm.otlet006.value="";
      document.UpdateForm.otlet006.focus();
      return;
    }
    return;
  }

  pagelength = parseInt(UpdateForm.otlet005.value,10);
  bottommargin = parseInt(UpdateForm.otlet003.value,10);
  topmargin = parseInt(UpdateForm.otlet004.value,10);

  if (pagelength < bottommargin) {
     alert("Bottom Margin must be less than Page Length");
     UpdateForm.otlet003.focus();
     return;
  }

  if (pagelength < topmargin) {
     alert("Top Margin must be less than Page Length");
     UpdateForm.otlet004.focus();
     return;
  }
  if (pagelength < (topmargin+bottommargin)) {
     if  (topmargin > bottommargin) {
         alert("Top Margin is too big");
         UpdateForm.otlet004.focus();
     }
     else {
         alert("Bottom Margin is too big");
         UpdateForm.otlet003.focus();
     }
     return;
  }
  if (pagelength == (topmargin+bottommargin)) {
     alert("Invalid Top and Bottom Margin combination");
     if  (topmargin > bottommargin) {
         UpdateForm.otlet004.focus();
     }
     else {
         UpdateForm.otlet003.focus();
     }
     return;
  }
  if(document.UpdateForm.d_otlet009.checked==true) {
    document.UpdateForm.otlet009.value="0";
  } else {
    document.UpdateForm.otlet009.value="1";
  }
  setFormactn('U');
}
function SetSMSPaper(theForm) {
  if (theForm.d_otlet010.checked==true) {              // SMS Message
    theForm.otlet003.className="Readonly Integer";    // Bottom Margin
    theForm.otlet003.value="1";
    theForm.otlet003.readonly=true;
    theForm.otlet004.className="Readonly Integer";    // Top Margin
    theForm.otlet004.value="1";
    theForm.otlet004.readonly=true;
    theForm.otlet005.className="Readonly Integer";    // Paper Length
    theForm.otlet005.value="10";
    theForm.otlet005.readonly=true;
    theForm.otlet006.className="Readonly Integer";    // Left Margin
    theForm.otlet006.value="1";
    theForm.otlet006.readonly=true;
  } else {
    theForm.otlet003.className="Mandatory Integer";   // Bottom Margin
    theForm.otlet003.readonly=false;
    theForm.otlet004.className="Mandatory Integer";   // Top Margin
    theForm.otlet004.readonly=false;
    theForm.otlet005.className="Mandatory Integer";   // Paper Length
    theForm.otlet005.readonly=false;
    theForm.otlet006.className="Mandatory Integer";   // Left Margin
    theForm.otlet006.readonly=false;
  }
}
//========================================================================
//  Report 5
//========================================================================
function ShowDetail05(linkurl) {
  Left=(document.body.clientWidth-400)/2
  DFrameLink(linkurl,0,Left,400,300)
}
//========================================================================
//  Report 6
//========================================================================
function ShowDetail06(linkurl) {
  Left=(document.body.clientWidth-700)/2
  DFrameLink(linkurl,0,Left,700,400)
}
function UpdateCharge06() {
  if(document.UpdateForm.d_otdch002.checked==true) {
    document.UpdateForm.otdch002.value="1";
  } else {
    document.UpdateForm.otdch002.value="0";
  }
  setFormactn('U');
}
function ChkCode(theForm) {
  if(theForm.otdch003.value == "M") {
     theForm.otdch003.value="MBS";
  }     
  if(theForm.otdch003.value == "A") {
     theForm.otdch003.value="AMA";
  }
  if ((isWhitespace(theForm.otdch003.value)) &&
     (isWhitespace(theForm.otdch005.value))) { return; }
  if(theForm.otdch003.value != "MBS") {
    if(theForm.otdch003.value != "AMA"){
        alert("Item Flag should be MBS or AMA");
        theForm.otdch003.value="";
        theForm.otdch003.focus();
    }
  }
  theForm.otdch004.value="";
  theForm.otdch005.value="";
  theForm.mbsdesc1.value="";
}
function ChkCodeUpd(theForm) {
  if(theForm.otdch003.value == "M") {
     theForm.otdch003.value="MBS";
  }     
  if(theForm.otdch003.value == "A") {
     theForm.otdch003.value="AMA";
  }
  if ((isWhitespace(theForm.otdch003.value)) &&
     (isWhitespace(theForm.otdch005.value))) { return; }
  if(theForm.otdch003.value != "MBS") {
    if(theForm.otdch003.value != "AMA"){
        alert("Item Flag should be MBS or AMA");
        theForm.otdch003.value="";
        theForm.otdch003.focus()
    }
  }
  theForm.otdch004.value="";
  theForm.otdch005.value="";
  theForm.mbsdesc1.value="";
}
//------------------------------------------------------------------
//  Validate an MBS item from the private practice item file
//------------------------------------------------------------------
function validatePMBS(ReturnCode,ReturnName,ReturnType,ReturnScod,ReturnEfdt,ReturnAmnt) {
  ReturnFunction="" ;
  ReturnName.value="";
  ReturnAmnt.value="";
  for (var i=6; i < validatePMBS.arguments.length; i++) {
    if (typeof(validatePMBS.arguments[i]) == 'function') {
      ReturnFunction=validatePMBS.arguments[i] }
    else {
      validatePMBS.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  if (isWhitespace(ReturnType.value)) return;;
  var serverURL   = "../cgi-bin/allweb01.pbl?reportno=14" +
                    "&valdtype=" + ReturnType.value.replace(/ /g,"+") +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&valdscod=" + ReturnScod.value.replace(/ /g,"+") +
                    "&valdefdt=" + ReturnEfdt.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    ReturnAmnt.value=(ReturnValue[1])
    j=0
    for (var i=6; i < validatePMBS.arguments.length; i++) {
       if (typeof(validatePMBS.arguments[i]) != 'function') {
         j++
         validatePMBS.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    return false;
     }
}
function TypeDescAdd() {
  var p=document.AddForm;
  if (p.otdch003.value==" 0") {
    p.otdch003.value="MBS";
  } else {
    p.otdch003.value="AMA";
  }
}
function TypeDescUpd() {
  var p=document.UpdateForm;
  if (p.otdch003.value==" 0") {
    p.otdch003.value="MBS";
  } else {
    p.otdch003.value="AMA";
  }
}
function AddCharge06() {
  if(document.AddForm.d_otdch002.checked==true) {
    document.AddForm.otdch002.value="1";
  } else {
    document.AddForm.otdch002.value="0";
  }
  if (validateMandatory(AddForm)) {
    SubmitHidden(AddForm);
  }
}
