//jsVersion  : V11.03.00
//========================================================================
// Program   : priweb05.js
//
// Written   : 05.01.2004 Pat Dirito   
//
// Function  : Standard Functions Used in priweb05
//
//========================================================================
function validatePMBS(ReturnCode,ReturnName,ReturnType,ReturnScod) {
  ReturnFunction="" ;
  ReturnName.value="";
  if ((ReturnCode.value=="Start")||(ReturnCode.value=="Finish")) return;;
  if (isWhitespace(ReturnCode.value)) return;;
  if (isWhitespace(ReturnType.value)) return;;

  for (var i=1; i < validatePMBS.arguments.length; i++) {
    if (typeof(validatePMBS.arguments[i]) == 'function') {
     ReturnFunction=validatePMBS.arguments[i] } }  

  if ((ReturnType.value==" 0")||(ReturnType.value=="M")) {
    var ItemType="MBS";
  } else {
    var ItemType="AMA";
  }
  var serverURL ="../cgi-bin/allweb01.pbl?reportno=9" +
                 "&valdtype=" + ItemType.replace(/ /g,"+") +
                 "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                 "&valdscod=" + ReturnScod.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() 
    }
  } else {
    if (ItemType=="AMA") {
      ReturnCode.focus();
      ReturnCode.value="";
    } else {
      ReturnCode.focus();
      ReturnCode.value="";
      ReturnScod.value="";
    }
    return false;
  }
  return true;
}
function checkGST(theForm) {
  i=theForm.pritm021.selectedIndex;
  GSTApplic=theForm.pritm021.options[i].value;
  if (GSTApplic==0) { //  GST Free
    theForm.pritm022.selectedIndex=0;
    theForm.pritm022.className="Readonly";
    theForm.pritm022.disabled=true;
  }
  else {
    if (GSTApplic==1) { //  GST Payable
      theForm.pritm022.className="Mandatory";
      theForm.pritm022.disabled=false;
    }
    else {    //  Either
      theForm.pritm022.className="";
      theForm.pritm022.disabled=false;
    }
  }
}
function SetPathol(theForm) {
  if (isWhitespace(theForm.pritm015.value) || 
      theForm.pritm015.value=="0") {
    theForm.pritm016.className="Number";
    theForm.pritm016.readOnly=false;
    theForm.pritm016.disabled=false;
    if (isWhitespace(theForm.pritm016.value)) {
      theForm.pritm017.value="";
      theForm.pritm017.className="Readonly";
      theForm.pritm017.readOnly=true;
      theForm.pritm017.disabled=true;
      theForm.pritm018.value="";
      theForm.pritm018.className="Readonly";
      theForm.pritm018.readOnly=true;
      theForm.pritm018.disabled=true;
      theForm.pritm019.value="";
      theForm.pritm019.className="Readonly";
      theForm.pritm019.readOnly=true;
      theForm.pritm019.disabled=true;
      theForm.stepicon.disabled=true;
      theForm.descript.value="";
    }
  } else {
    theForm.pritm016.value="";
    theForm.pritm016.className="Readonly";
    theForm.pritm016.readOnly=true;
    theForm.pritm016.disabled=true;
    theForm.pritm017.value="";
    theForm.pritm017.className="Readonly";
    theForm.pritm017.readOnly=true;
    theForm.pritm017.disabled=true;
    theForm.pritm018.value="";
    theForm.pritm018.className="Readonly";
    theForm.pritm018.readOnly=true;
    theForm.pritm018.disabled=true;
    theForm.pritm019.value="";
    theForm.pritm019.className="Readonly";
    theForm.pritm019.readOnly=true;
    theForm.pritm019.disabled=true;
    theForm.stepicon.disabled=true;
    theForm.descript.value="";
  }
}
function SetPStep(max,theForm) {
  if (isWhitespace(max.value)) {
    theForm.pritm017.value="";
    theForm.pritm017.className="Readonly";
    theForm.pritm017.readOnly=true;
    theForm.pritm017.disabled=true;
    theForm.pritm018.value="";
    theForm.pritm018.className="Readonly";
    theForm.pritm018.readOnly=true;
    theForm.pritm018.disabled=true;
    theForm.pritm019.value="";
    theForm.pritm019.className="Readonly";
    theForm.pritm019.readOnly=true;
    theForm.pritm019.disabled=true;
    theForm.stepicon.disabled=true;
    theForm.descript.value="";
    return;
  }
  if (max.value > 0) {
    theForm.pritm017.className="Number";
    theForm.pritm017.readOnly=false;
    theForm.pritm017.disabled=false;
    theForm.pritm018.className="";
    theForm.pritm018.readOnly=false;
    theForm.pritm018.disabled=false;
    theForm.pritm019.className="";
    theForm.pritm019.readOnly=false;
    theForm.pritm019.disabled=false;
    theForm.stepicon.disabled=false;
    theForm.pritm017.blur()
    theForm.pritm017.focus()
  } else {
    alert("Max No. of Tests must be > 0");
    max.blur();
    max.select();
  }
}
function ShowSpans(showoption) {
  if (showoption.value=="P") {
     FeeOptions.innerHTML=FeeIncrease.innerHTML;
  } else if (showoption.value=="F") {
     FeeOptions.innerHTML=FeeUpdate.innerHTML;
  } else if (showoption.value=="C") {
     FeeOptions.innerHTML=FeeCopy.innerHTML;
  } else {
     FeeOptions.innerHTML="" }
}
function ProcessReport() {
  if (validateMandatory(AddForm)) {
    if(document.AddForm.updttype.value=="P") { // % Increase         
      if ((document.AddForm.prigl003.value!="Start")&&
          (document.AddForm.prigl003.value!="Finish")) {
        if (document.AddForm.prigl003.value > document.AddForm.prigl004.value) {
          alert("Invalid Range Of Item Numbers.");
          return; 
        }
      }
    }
    AddForm.submit();
  }
}
function validatePMBSFrm() {
  p=document.AddForm;
  validatePMBS(p.prigl003,p.frmdummy,p.prigl001,p.dumsub01);
}
function validatePMBSToo() {
  p=document.AddForm;
  validatePMBS(p.prigl004,p.toodummy,p.prigl001,p.dumsub02);
}
function ShowDetail(linkurl) {
  Left=(document.body.clientWidth-600)/2
  DFrameLink(linkurl,0,Left,600,580)
}
function AddDetail(linkurl) {
  p=document.SelectCode;
  link=linkurl + "&pritm001=" + p.pritm001.value + 
                 "&pritm002=" + p.pritm002.value +
                 "&pritm003=" + p.pritm003.value +
                 "&pritm005=" + p.pritm005.value;
  Left=(document.body.clientWidth-520)/2
  DFrameLink(link,0,Left,600,580)
}
