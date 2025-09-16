//jsVersion  : V11.03.00
//========================================================================
//
function TypeDesc1() {
  var p=document.UpdateForm;
  if (p.alrit001.value==" 0") {
    p.alrit001.value="MBS";
  } else {
    p.alrit001.value="AMA";
  }
}

function TypeDesc2() {
  var p=document.UpdateForm;
  if (p.alrit004.value==" 0") {
    p.alrit004.value="MBS";
  } else {
    p.alrit004.value="AMA";
  }
}

function TypeDesc3() {
  var p=document.UpdateForm;
  if (p.alrit007.value==" 0") {
    p.alrit007.value="MBS";
  } else {
    p.alrit007.value="AMA";
  }
}

function TypeDesc4() {
  var p=document.UpdateForm;
  if (p.alrit010.value==" 0") {
    p.alrit010.value="MBS";
  } else {
    p.alrit010.value="AMA";
  }
}

function TypeDesc5() {
  var p=document.UpdateForm;
  if (p.alrit013.value==" 0") {
    p.alrit013.value="MBS";
  } else {
    p.alrit013.value="AMA";
  }
}

function valPostCode(){
  if(isWhitespace(UpdateForm.ptmas010.value)){
   return;
  }
  var oldsuburb=trim("%ALLWEB02.03.014");
  if(document.UpdateForm.ptmas010.value==oldsuburb){
    return;
    }
    UpCase(UpdateForm.ptmas010);

    if(trim(UpdateForm.ptmas012.value)!="8888"){
      suburb   = UpdateForm.ptmas010;
      state    = UpdateForm.ptmas011;
      postcode = UpdateForm.ptmas012;
      LookupPostCode(UpdateForm.ptmas010.value);
      }
}

function valPostCodeF(){
  var oldsuburb=trim("%ALLWEB02.03.074");
  if(document.UpdateForm.alref111.value==oldsuburb){
    return;
    }
    UpCase(UpdateForm.alref111);

    if(trim(UpdateForm.alref113.value)!="8888"){
      suburb   = UpdateForm.alref111;
      state    = UpdateForm.alref112;
      postcode = UpdateForm.alref113;
      LookupPostCode(UpdateForm.alref111.value);
      }
}

function SetPostCodeF() {
 suburb   = UpdateForm.ptmas010;
 state    = UpdateForm.ptmas011;
 postcode = UpdateForm.ptmas012;
}

function UpdateGP(){
    if(isWhitespace(UpdateForm.alref022.value)) {
        alert("Referring HCP is a required field");
        UpdateForm.rusualgp.checked=false;
        return;
    }
    if(UpdateForm.rusualgp.checked==true) {
      if(!confirm("This will update the PMI Usual GP field?")) {
        UpdateForm.rusualgp.checked=false;
        return;
      }
    }
//    getGP();
}

function SetList() {
  p=UpdateForm
  var SetSite
  if(isWhitespace(p.alref119.value)) {
    SetSite=p.wbsesite.value;
  } else {
    SetSite=p.alref119.value;
  }
 for (var i =0 ; i < document.UpdateForm.alref119.length; i++) {
  if (document.UpdateForm.alref119.options[i].value==SetSite.substr(0,6)) {
       document.UpdateForm.alref119.selectedIndex=i } };
//
  p.alref106.options.length=1;
  SetClinicType(p.alref106,p.defctype.value,p.alref119.value);
//
  if(p.alref120.type=="select-one") {
    p.alref120.options.length=1;
    SetClinicId(p.alref120,p.deftclid.value,p.alref119.value);
  } else {
    UpCase(p.alref120);validateClinic(p.alref119,p.alref120,p.name_alref120)
  }
}

function getGP() {
   ReadDoc(18,4,UpdateForm.pmpmi059,UpdateForm.gpname,UpdateForm.gpsuburb,UpdateForm.dummy);
}

function getHCP() {
  ReadDoc(18,4,UpdateForm.alref022,UpdateForm.n_alref022,UpdateForm.dummy,
          UpdateForm.dummy,UpdateForm.dummy,UpdateForm.hcpprovno);
}

function ReadDoc(OptionNumber,OptionType,ReturnCode,ReturnName,ReturnPrac,ReturnPnam,ReturnPcnt,ReturnProv) {
  ReturnName.value="";
  ReturnPrac.value="";
  ReturnPnam.value="";
  ReturnPcnt.value="";
  ReturnProv.value="";
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL  = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
               "&returnfm=2" + "&valdtype=" + OptionType +
               "&valdcode=" + ReturnCode.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=trim(ReturnValue[0]);
    ReturnPrac.value=ReturnValue[1];
    ReturnPnam.value=ReturnValue[2];
    ReturnPcnt.value=ReturnValue[3];
    ReturnProv.value=ReturnValue[4]; 
    if(ReturnValue[5] == "1" &&  ReturnPnam.type != "hidden") {
      alert("WARNING: HCP is linked to more than 1 practice.\n" +
            "Please enter practice separately.");
      ReturnPrac.value="";
      ReturnPnam.value="";
      ReturnPcnt.value="";
      ReturnProv.value="";
    }
  } else {
    ReturnCode.value="";
    ReturnCode.select(); 
    return false; }
}

function ReadDoc2(OptionNumber,OptionType,ReturnCode,ReturnName,ReturnPrac,ReturnPnam,ReturnPcnt,ReturnProv) {
// Zero fill provider number if less than 8 characters
  if(ReturnProv.value!="") {
    LenPROV=ReturnProv.value.length
    if (LenPROV < 8) {
      Count= 8 - LenPROV ;
      Zero=""
      for (i=0; i < Count;i++) { Zero+="0";}
      ReturnProv.value=Zero + ReturnProv.value;
    }
  }
  ReturnName.value="";
  ReturnPrac.value="";
  ReturnPnam.value="";
  ReturnPcnt.value="";
  ReturnCode.value="";
  if (isWhitespace(ReturnProv.value)) return;;
  var serverURL  = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
               "&returnfm=3" + "&valdtype=" + OptionType +
               "&valdcode=" + ReturnProv.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=trim(ReturnValue[0]);
    ReturnPrac.value=ReturnValue[1];
    ReturnPnam.value=ReturnValue[2];
    ReturnPcnt.value=ReturnValue[3];
    ReturnCode.value=ReturnValue[4]; }
 else {
    ReturnProv.value="";
    ReturnProv.select();
    return false; }
}

function AddReferral(theForm) {
  window.PageUpdateForm=theForm
  theForm.target="PopUpFrame1";
  if (validateMandatory(theForm)) {
    theForm.submit(); }
}

function DisplayHCP(hcp) {
  if (!isWhitespace(hcp.value)) {
    HCPHDprov.innerHTML=hcphprov.innerHTML;
    HCPprov.innerHTML=hcpprov.innerHTML;
    HCPHDadd1.innerHTML=hcphadd1.innerHTML;
    HCPadd1.innerHTML=hcpadd1.innerHTML;

    HCPHaddr.innerHTML=hcpaddr.innerHTML;
    UpdateForm.alref116.focus();
    UpdateForm.alref108.className="Mandatory";
    UpdateForm.alref022.className="";
  } else {
    HCPHDprov.innerHTML=blanklabel.innerHTML;
    HCPprov.innerHTML="";
    HCPHDadd1.innerHTML=blanklabel.innerHTML;
    HCPadd1.innerHTML="";

    HCPHaddr.innerHTML=blanklabel.innerHTML;
    UpdateForm.alref108.value="";
    UpdateForm.alref108.className="";
//
    UpdateForm.alref022.className="Mandatory";
    if(UpdateForm.deptIndi!=undefined) {
      if(!isWhitespace(UpdateForm.deptIndi.value.substr(10,1))) {
         UpdateForm.alref022.className="";
      }
    }
//
    
  }
}
function DisplayXCmbs(hcp) {
  if (document.UpdateForm.showextr.checked==true) {
    ShowXCmbs.innerHTML=extracmbs.innerHTML;
  } else {
    ShowXCmbs.innerHTML="";
  }
}
//------------------------------------------------------------------
//  Validate an MBS item from the private practice item file
//------------------------------------------------------------------
function validatePMBS(ReturnCode,ReturnName,ReturnType,ReturnScod) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=4; i < validatePMBS.arguments.length; i++) {
    if (typeof(validatePMBS.arguments[i]) == 'function') {
      ReturnFunction=validatePMBS.arguments[i] }
    else {
      validatePMBS.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) {
    if(!isWhitespace(ReturnScod.value)) {
      alert(ReturnCode.title + " is Mandatory for " + ReturnScod.title); 
      ReturnScod.value="";
      ReturnScod.focus();
    }
   return;
  }
  if (isWhitespace(ReturnType.value)) return;;
  var serverURL   = "../cgi-bin/allweb01.pbl?reportno=9" +
                    "&valdtype=" + ReturnType.value.replace(/ /g,"+") +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&valdscod=" + ReturnScod.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=4; i < validatePMBS.arguments.length; i++) {
       if (typeof(validatePMBS.arguments[i]) != 'function') {
         j++
         validatePMBS.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.value="";
    ReturnScod.value="";
    ReturnCode.select();
    ReturnCode.focus();
    return false;
     }
}
//========================================================================
// Disable Screen
//========================================================================
function DisableScreen(theForm) {
  for (var e = 0; e < theForm.elements.length; e++) {
    var el=theForm.elements[e] ;
    switch(el.type) {
      case "text":
          if(el.title.match(/U\/R/)){
            break;
          }
          el.disabled = true; break;
      case "select-one":
          el.disabled = true; break;
      case "textarea":
          el.readOnly = true;
          el.style.color = "gray";
          break;
      case "button":
          if (el.value != "Print")
            el.disabled = true;
          break;
      case "hidden":
          break;
     }
  }
}
function LoadUR() {
 location.href="allweb02.pbl?reportno=03&template=002" +
         "&allrf001=" + document.UpdateForm.deptcode.value.replace(/ /g,"+") +
         "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
}
function ReLoadUR() {
 location.href="allweb02.pbl?reportno=03&template=002" +
         "&allrf001=" + document.UpdateForm.deptcode.value.replace(/ /g,"+") 
}
function GetName() {
  if(isWhitespace(UpdateForm.urnumber.value)) {
    DisableScreen(UpdateForm);
    return;
  }
  justifyRight(UpdateForm.urnumber);
  validateCode(8,UpdateForm.urnumber,UpdateForm.patname);
}
function UpdateReferral() {
 if(!isWhitespace(UpdateForm.alref022.value) && UpdateForm.rusualgp.checked==true) {
    UpdateForm.pmpmi059.value=UpdateForm.alref022.value;
    UpdateForm.pmpmi060.value=UpdateForm.alref023.value;
    UpdateForm.pmpmi061.value=UpdateForm.alref024.value;
 }
//
   if(checkMedRefN()) {
      if(checkMedicare(document.UpdateForm.ptmas023)) {
         if (isWhitespace(UpdateForm.pmpmi016.value)) {
           if(!confirm("Warning: Blank 'Medicare Valid to Date'")) {
              UpdateForm.pmpmi016.focus();
              return;
           }
         } else {
            if (!isWhitespace(UpdateForm.pmpmi016.value)) {
                  if(!CheckRefMedi(UpdateForm.alref019,UpdateForm.pmpmi016))
                     return;
            }
         }
      } else {
         return;
      }
   } else {
     return;
   }
//
// Check if claim code is 'medicare'
 if (UpdateForm.alref035.value.substr(5,1)!=='C') {
     if(!confirm("Warning: Unexpected Claim Code")) {
        UpdateForm.alref035.focus();
        return;
     }
 }
//
 if(validateMandatory(UpdateForm)) {
   document.UpdateForm.submit();
 }
}

function CheckRefMedi(FromInput,ToInput) {
  if (SetDateYYYYMMDD(FromInput.value) > SetDateYYYYMMDD(ToInput.value)) {
    if(!confirm("Warning: Mismatch between 'Referral Date' and 'Medicare Valid to Date'")) {
      return false; 
    }
  }
  return true;
}

function checkMedRefN() {
  if (isWhitespace(document.UpdateForm.ptmas023.value)) {
    if (!isWhitespace(document.UpdateForm.ptmsx045.value)) {
      if(!confirm("Warning: Medicare No. is blank, Medicare Ref. No. is not blank .")==1) {
        return false;
      }
    }

    if(!confirm('Warning: No Medicare details.')) {
        return false;
    }

  } else {
    if (isWhitespace(document.UpdateForm.ptmsx045.value)) {
       if(!confirm("Warning : No Medicare Reference number entered")) {
         return false; 
       }
       document.UpdateForm.ptmsx045.value=9
    }
  }
   if (document.UpdateForm.ptmsx045.value==9) {
     if(!confirm("Warning: Medicare Reference is 9")) {
       return false;
     }
   }
  return true;
}
function clrFreeHCP() {
  p=UpdateForm
if (!isWhitespace(p.alref108.value)) {
  clrFields(p.alref108,p.alref109,p.alref110,p.alref111);
  clrFields(p.alref112,p.alref113,p.alref114,p.alref115);
  DisplayHCP(p.alref108)
  }
}
