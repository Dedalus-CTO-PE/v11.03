//jsVersion  : V11.03.01

//========================================================================
// Program   : patweb7601040.js
//  
// Written   : 15.02.2008 J.Tan
//  
// Function  : Standard Functions for patweb7601040.html
//      
//========================================================================

function init() {
  InitPostCodes();
  document.getElementById('repoption').innerHTML=document.getElementById('URSpan').innerHTML;
}

function SubmitForm1() {
  // disable button to avoid double clicking
  DisButton();

  if (validateMandatory(UpdateForm))
  {
   document.UpdateForm.nextpage.value="1"
  if (UpdateForm.reptoptn.value==1){
   document.UpdateForm.redirect.value="patweb76.pbl?reportno=01&template=35" +
       "&urnumber=" +document.UpdateForm.urnumber.value.replace(/ /g,"+")
//       "&admissno=" +document.UpdateForm.admissno.value.replace(/ /g,"+")
  } else {
   document.UpdateForm.redirect.value="patweb76.pbl?reportno=01&template=41" +
       "&urnumber=" +document.UpdateForm.urnumber.value.replace(/ /g,"+")
//       "&admissno=" +document.UpdateForm.admissno.value.replace(/ /g,"+")
  }

  if(document.UpdateForm.d_pmsfd029!=undefined) {
    if(document.UpdateForm.d_pmsfd029.checked==true) {
       document.UpdateForm.pmsfd029.value="1";
    } else {
       document.UpdateForm.pmsfd029.value="0";
    }
  }

  if (document.UpdateForm.d_pmsfd030!=undefined) {
   if(document.UpdateForm.d_pmsfd030.checked==true) {
      document.UpdateForm.pmsfd030.value="1";
   } else {
      document.UpdateForm.pmsfd030.value="0";
   }
  }

  if (document.UpdateForm.pmsfd003!=undefined) {
     document.UpdateForm.expcdlos.value=document.UpdateForm.pmsfd003.value;
  }

     document.UpdateForm.gstapl01.disabled=false;
     document.UpdateForm.gstapl02.disabled=false;
     document.UpdateForm.gstapl03.disabled=false;
     document.UpdateForm.gstapl04.disabled=false;
     document.UpdateForm.gstapl05.disabled=false;
     document.UpdateForm.gstapl06.disabled=false;

     document.UpdateForm.gstcod01.disabled=false;
     document.UpdateForm.gstcod02.disabled=false;
     document.UpdateForm.gstcod03.disabled=false;
     document.UpdateForm.gstcod04.disabled=false;
     document.UpdateForm.gstcod05.disabled=false;
     document.UpdateForm.gstcod06.disabled=false;

     document.UpdateForm.gstapm01.disabled=false;
     document.UpdateForm.gstapm02.disabled=false;
     document.UpdateForm.gstapm03.disabled=false;
     document.UpdateForm.gstapm04.disabled=false;
     document.UpdateForm.gstapm05.disabled=false;
     document.UpdateForm.gstapm06.disabled=false;

     document.UpdateForm.gstcom01.disabled=false;
     document.UpdateForm.gstcom02.disabled=false;
     document.UpdateForm.gstcom03.disabled=false;
     document.UpdateForm.gstcom04.disabled=false;
     document.UpdateForm.gstcom05.disabled=false;
     document.UpdateForm.gstcom06.disabled=false;
   document.UpdateForm.submit(); 
  }
}

function DisButton() {
  document.UpdateForm.feesestm.disabled=true;
  setInterval('document.UpdateForm.feesestm.disabled=false',6000);
}

function SetPostCode01() {
 suburb   = UpdateForm.address2;
 state    = UpdateForm.address3;
 postcode = UpdateForm.postcode;
}
function valSuburb(){
  if (isWhitespace(UpdateForm.address2.value)) {
    return;
  }
  UpCase(UpdateForm.address2);
  if(trim(UpdateForm.postcode.value)!="8888"){
    LookupPostCode(UpdateForm.address2.value);
  }
}
function valPostCode(){
  if (isWhitespace(UpdateForm.postcode.value)) {
    return;
  }
  LookupSuburb(UpdateForm.postcode.value)
}

function checkOpt() {
  if (UpdateForm.reptoptn.value==1){
    document.getElementById('repoption').innerHTML=document.getElementById('URSpan').innerHTML;
  }
  else {
    document.getElementById('repoption').innerHTML=document.getElementById('NameSpan').innerHTML;
    SetPostCode01();
  }
}

function checkUR() {
   p=UpdateForm;
   if (isWhitespace(p.urnumber.value)) {
     return;
   }
   justifyRight(p.urnumber);
   if (!validateCode(13,p.urnumber,p.patname,UpdateUR,p.dummy,
        p.dummy,p.dummy,p.ur,p.admissno,p.dummy,p.dummy,p.dummy,
        p.dummy,p.dummy,p.dummy,p.dummy,p.dummy,p.dummy,p.merge)) {
     p.urnumber.focus();
     return;
   } else {
     if (p.merge.value=="1") {
     alert("Warning : This U/R Number is merged with " + p.urnumber.value); }
   }
}

function UpdateUR() {
 document.UpdateForm.urnumber.value=document.UpdateForm.ur.value
}
