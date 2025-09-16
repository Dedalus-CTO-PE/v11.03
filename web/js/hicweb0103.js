//jsVersion  : V11.03.00
//========================================================================
// Program   : hicweb0103.js
//
// Function  : Standard Functions Used in allweb0202 templates 
//
// Version   : 
//            V10.03.01 15/12/2011  Mike Laming    CAR 257259
//                      Add "trim" to all tests for Postcode "8888"
//             V9.04.13 10/08/2005 Davin         CAR 68949
//                      Mods to ReadDoc2 - Zero fill provider number if less 
//                      than 8 characters
//             V9.04.12 08/07/2005 Davin         CAR 66638
//                      Fixed UpdateReferral to retain prac as well as usual gp
//             V9.04.11 06.07.2005 Ebon Clements CAR 66119
//                      Added MPDoctorSearch and validateSDoc
//             V9.04.10 24/06/2005 Davin         CAR 64455
//                      Changed UpdateReferral() to display warning for 
//                      unexpected claim code (if cat.CL,indicator 3 <> 'C')
//             V9.04.09 08/06/2005 Davin         CAR 62808
//                      Changed UpdateReferral() to return focus to 'valid to 
//                      date' when cancelling from blank medicare date warning
//             V9.04.08 30/05/2005 Davin         CAR 22680
//                      Added function ReadDoc2 - returns hcp code & practice
//                      details from provider number
//             V9.04.07 26.05.2005 Ebon Clements CAR 62018
//                      Added provider usage and mods to CMBS item keyin
//             V9.04.06 23/05/2005 Davin         CAR 22680
//                      Added check for 'whitespace' in clrFreeHCP(). 
//                      Changed ReadDoc function to return practice provider 
//                      number details.
//             V9.04.05 19/05/2005 Ebon Clements CAR 61912
//                      Fixed checkMBSSearch functions return functions
//             V9.04.04 10/05/2005 Ebon Clements CAR 61466
//                      In DisableForm exit if claim status is blank
//             V9.04.03 09/05/2005 J.Tan         CAR 61122
//                      Mods checking for medicare
//             V9.04.02 06/05/2005 Davin         CAR 22680
//                      Changed gp field to pmpmi059
//             V9.04.01 04/05/2005 Ebon Clements CAR 61122
//                      Change to use active all hcp search
//                      Added clrFreeHCP
//             V9.04.00 29/04/2005 Ebon Clements CAR 56697
//                      Created include
//
//========================================================================
//
function TypeDesc1() {
  var p=document.UpdateForm;
  if (p.otbit001.value==" 0") {
    p.otbit001.value="MBS";
  } else {
    p.otbit001.value="AMA";
  }
}

function TypeDesc2() {
  var p=document.UpdateForm;
  if (p.otbit004.value==" 0") {
    p.otbit004.value="MBS";
  } else {
    p.otbit004.value="AMA";
  }
}

function TypeDesc3() {
  var p=document.UpdateForm;
  if (p.otbit007.value==" 0") {
    p.otbit007.value="MBS";
  } else {
    p.otbit007.value="AMA";
  }
}

function TypeDesc4() {
  var p=document.UpdateForm;
  if (p.otbit010.value==" 0") {
    p.otbit010.value="MBS";
  } else {
    p.otbit010.value="AMA";
  }
}

function TypeDesc5() {
  var p=document.UpdateForm;
  if (p.otbit013.value==" 0") {
    p.otbit013.value="MBS";
  } else {
    p.otbit013.value="AMA";
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
//
    DisableForm();
}

function getGP() {
   ReadDoc(18,4,UpdateForm.pmpmi059,UpdateForm.gpname,UpdateForm.gpsuburb,UpdateForm.dummy);
}

function getHCP() {
  ReadDoc(18,4,UpdateForm.alref022,UpdateForm.n_alref022,UpdateForm.dummy,UpdateForm.hcpprovno);
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
    ReturnProv.value=ReturnValue[4]; }
 else {
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
    UpdateForm.alref022.className="Mandatory";
  }
}
function DisplayXCmbs(hcp) {
  if (document.UpdateForm.showextr.checked==true &&
      document.UpdateForm.ibcnumci.value=="1") {
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

function DisableForm() {
  if(document.UpdateForm.clamstat.value == " 0") {
    return;
  }
  if(document.UpdateForm.clamstat.value == "  ") {
    document.UpdateForm.upmionly.value="2";
    return;
  }
  document.UpdateForm.upmionly.value="1";
//
  for (var e = 0; e < UpdateForm.elements.length; e++) {
    var el=UpdateForm.elements[e] ;
    if (el.name.match(/otbit/) || el.name.match(/alref/) || 
        el.name.match(/hcpprovno/)) {
      switch(el.type) {
       case "text":
           el.className="ReadOnly";
           el.readOnly = true; break;
       case "select-one":
           el.disabled = true; break;
       case "hidden":
           break;
      }
    }
  }
//
}
//------------------------------------------------------------
// Clear hcp check
//------------------------------------------------------------
function CheckHCPClear() {
  if(UpdateForm.alref022.readOnly==true) {
   alert(UpdateForm.alref022.title + " is a readonly field");
   return;
  }
  clrFields(UpdateForm.alref022,UpdateForm.n_alref022,UpdateForm.hcpprovno);
}
function CheckHCPSearch() {
  if(UpdateForm.alref022.readOnly==true) {
   alert(UpdateForm.alref022.title + " is a readonly field");
   return;
  }
 GPHCPSearchFrame(UpdateForm.alref022,UpdateForm.n_alref022,UpdateForm.hcpprovno,UpdateForm.alref023,UpdateForm.n_alref023,UpdateForm.alref024,0);
}
function CheckHCGClear() {
  if(UpdateForm.alref022.readOnly==true) {
   alert(UpdateForm.alref023.title + " is a readonly field");
   return;
  }
  clrFields(UpdateForm.alref023,UpdateForm.n_alref023,UpdateForm.alref024,UpdateForm.hcpprovno);
}
function CheckHCGSearch() {
  if(UpdateForm.alref022.readOnly==true) {
   alert(UpdateForm.alref023.title + " is a readonly field");
   return;
  }
  GPHCGSearchFrame(UpdateForm.alref022,UpdateForm.n_alref022,UpdateForm.hcpprovno,UpdateForm.alref023,UpdateForm.n_alref023,UpdateForm.alref024);
}
function CheckDisplayXCmbs() {
  DisplayXCmbs();
  DisableForm()
}
//------------------------------------------------------------
// Clear Items Check for readonly 
//------------------------------------------------------------
function clrFieldsItem1() {
  if(UpdateForm.otbit001.readOnly==true) {
    alert(UpdateForm.otbit001.title + " is a readonly field");
    return ;
  }
  a=UpdateForm
  clrFields(a.otbit002,a.otbit003,a.mbsdesc1);
}
//
function checkMBSSearch1() {
  if(UpdateForm.otbit001.readOnly==true) {
    alert(UpdateForm.otbit001.title + " is a readonly field");
    return ;
  }
  a=UpdateForm
  PriMbsSearchFrame(a.otbit001,a.otbit002,a.otbit003,a.dumdate,a.mbsdesc1,a.dumInput,TypeDesc1);
}
//
function clrFieldsItem2() {
  if(UpdateForm.otbit004.readOnly==true) {
    alert(UpdateForm.otbit004.title + " is a readonly field");
    return ;
  }
  a=UpdateForm
  clrFields(a.otbit005,a.otbit006,a.mbsdesc2);
}
//
function checkMBSSearch2() {
  if(UpdateForm.otbit004.readOnly==true) {
    alert(UpdateForm.otbit004.title + " is a readonly field");
    return ;
  }
  a=UpdateForm
  PriMbsSearchFrame(a.otbit004,a.otbit005,a.otbit006,a.dumdate,a.mbsdesc2,a.dumInput,TypeDesc2);
}
//
function clrFieldsItem3() {
  if(UpdateForm.otbit007.readOnly==true) {
    alert(UpdateForm.otbit007.title + " is a readonly field");
    return ;
  }
  a=UpdateForm
  clrFields(a.otbit008,a.otbit009,a.mbsdesc3);
}
//
function checkMBSSearch3() {
  if(UpdateForm.otbit007.readOnly==true) {
    alert(UpdateForm.otbit007.title + " is a readonly field");
    return ;
  }
  a=UpdateForm
  PriMbsSearchFrame(a.otbit007,a.otbit008,a.otbit009,a.dumdate,a.mbsdesc3,a.dumInput,TypeDesc3)
}
//
function clrFieldsItem4() {
  if(UpdateForm.otbit010.readOnly==true) {
    alert(UpdateForm.otbit010.title + " is a readonly field");
    return ;
  }
  a=UpdateForm
  clrFields(a.otbit011,a.otbit012,a.mbsdesc4);
}
//
function checkMBSSearch4() {
  if(UpdateForm.otbit010.readOnly==true) {
    alert(UpdateForm.otbit010.title + " is a readonly field");
    return ;
  }
  a=UpdateForm
  PriMbsSearchFrame(a.otbit010,a.otbit011,a.otbit012,a.dumdate,a.mbsdesc4,a.dumInput,TypeDesc4)
}
//
function clrFieldsItem5() {
  if(UpdateForm.otbit013.readOnly==true) {
    alert(UpdateForm.otbit013.title + " is a readonly field");
    return ;
  }
  a=UpdateForm
  clrFields(a.otbit014,a.otbit015,a.mbsdesc5);
}
//
function checkMBSSearch5() {
  if(UpdateForm.otbit013.readOnly==true) {
    alert(UpdateForm.otbit013.title + " is a readonly field");
    return ;
  }
  a=UpdateForm
  PriMbsSearchFrame(a.otbit013,a.otbit014,a.otbit015,a.dumdate,a.mbsdesc5,a.dumInput,TypeDesc5)
}
//
function clrFreeHCP() {
  if(UpdateForm.alref108.readOnly==true) {
    alert(UpdateForm.alref108.title + " is a readonly field");
    return ;
  }
  p=UpdateForm
if (!isWhitespace(p.alref108.value)) {
  clrFields(p.alref108,p.alref109,p.alref110,p.alref111);
  clrFields(p.alref112,p.alref113,p.alref114,p.alref115);
  DisplayHCP(p.alref108)
  }
}
//
function validateSDoc(MediPrac,ReturnCode,ReturnDesc) {
  if (isWhitespace(ReturnCode.value)) {
    ReturnDesc.value="";       // Clear description (Doctor's name)
    return;
  }

  if (isWhitespace(MediPrac.value)) {
     alert("No Medical Practice set up for this clinic.");
     MediPrac.focus();
     return;;  }

  for (var i=3; i < validateSDoc.arguments.length; i++) {
    if (typeof(validateSDoc.arguments[i]) == 'function') {
      ReturnFunction=validateSDoc.arguments[i] }
    else {
      validateSDoc.arguments[i].value=""; }  }

  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=63" +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&mediprac=" + MediPrac.value

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnDesc.value=ReturnValue[0];
    if (ReturnValue[1]==1)  {
       alert("Doctor is Inactive.");
       ReturnCode.select();
       ReturnCode.focus();
       return false; }
    }
  else {
    ReturnDesc.value="";       // Clear description (Doctor's name)
    ReturnCode.select();
    ReturnCode.focus();
    return false;
     }
}
//
function MPDoctorSearch(MediPrac,ReturnCode,ReturnName) {
  var PopUpFrameDoc = DFrameStart();
  if (isWhitespace(MediPrac.value)) {
     alert("No Medical Practice set up for this clinic.");
     MediPrac.focus();
     return;;  }

  window.MediPrac=MediPrac;
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../cgi-bin/" +
                              "priweb01.pbl?reportno=2&template=7&pridc001="+
                               MediPrac.value + "&norecord=20";
  SearchFrameShow();
 }
