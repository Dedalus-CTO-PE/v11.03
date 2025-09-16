//jsVersion  : V11.03.04
//========================================================================
// Program   : patweb89.js
//
// Function  : Standard Functions Used in patweb89 templates
//
//========================================================================
//
// Admission / Master Details
//
//------------------------------------------------------------
// Report 1 functions   
//------------------------------------------------------------
function SetPostCode01() {
 suburb   = document.UpdateForm.ptmas010;
 state    = document.UpdateForm.ptmas011;
 postcode = document.UpdateForm.ptmas012;
 if (document.UpdateForm.oseasflg!=undefined) {
    if (trim(postcode.value)=="8888") {
       document.UpdateForm.oseasflg.checked=true;
    } else {
       document.UpdateForm.oseasflg.checked=false;
    }
    setAddrLine4(UpdateForm)
 }
}
function setAddrLine4(theForm) {
  var savpcode="";
  if (theForm.oldpcode!=undefined) {
      if (trim(theForm.oldpcode.value)!="8888") {
          savpcode = theForm.oldpcode.value;
      }
  }
  if (theForm.oseasflg.checked==1) {
     AddressLine4H.innerHTML=OseasCountryH.innerHTML
     AddressLine4.innerHTML=OseasCountry.innerHTML
     if (trim(theForm.ptmas012.value)!="8888") {
         theForm.ptmas011.value="";
         theForm.ptmas012.value="8888";
         LookupSuburb("8888");
     }
     if(theForm.osc_name_js != undefined) {
       theForm.ptmas011.options.length=1;
       SetCategoryC_(theForm.ptmas011,"")
       for (var i=0; i < theForm.ptmas011.length; i++) {
         theForm.ptmas011.options[i].value=
         theForm.ptmas011.options[i].text;
       }
       for (var i=0; i < theForm.ptmas011.length; i++) {
         if (trim(theForm.ptmas011.options[i].text)==
             trim(theForm.osc_name_js.value)){
             theForm.ptmas011.selectedIndex=i;
             break;
         }
       }
     }
  } else {
     AddressLine4H.innerHTML=AustStateH.innerHTML
     AddressLine4.innerHTML=AustState.innerHTML
     if (trim(theForm.ptmas012.value)=="8888") {
         theForm.ptmas011.value="";
         theForm.ptmas012.value=savpcode;
         LookupPostCode(theForm.ptmas010.value); 
     }
  }
  state = theForm.ptmas011;
}
//-----------------------------------------------------------------------------
function validateDeath01() {
  if ( isWhitespace(document.UpdateForm.ptmas061.value) )
     { if ( document.UpdateForm.ptmas067 != undefined )
          { if ( document.UpdateForm.ptmas067.checked == true )
               { document.UpdateForm.ptmas029.value=1;
                 document.UpdateForm.ptmas067.value ="Y" }
            else
               { document.UpdateForm.ptmas029.value=0;
                 document.UpdateForm.ptmas067.value ="N" }
          }
       else
         { document.UpdateForm.ptmas029.value=0; }
     }
  else
     { document.UpdateForm.ptmas029.value=1; }

  document.UpdateForm.ptmas061.disabled=false;
  document.UpdateForm.pmpmi017.disabled=false;
  if ( document.UpdateForm.ptmas067 != undefined ) {
     document.UpdateForm.ptmas067.disabled=false;
     if ( document.UpdateForm.ptmas067.checked == true)
        { document.UpdateForm.ptmas067.value ="Y" }
     else
        { document.UpdateForm.ptmas067.value ="N" }
  }
  return true;
}
//-----------------------------------------------------------------------------
function confirmDeath(deathDate,title) {
  if ( !checkDate(deathDate,title) ) {
    document.UpdateForm.ptmas061.focus();
    return false;
  }

  window.setTimeout(checkDeath, 100);
}

function checkDeath() {
  var deceased = document.UpdateForm.ptmas029.value;
  if (isWhitespace(document.UpdateForm.ptmas061.value) && deceased == 1) {
     if (confirm("Do you want to Undecease the patient?\n"+
                 "Select 'Ok' to 'Undecease' the patient\n"+
                 "Select 'Cancel' to reset the current details")) {
        makeUndead();
        return;
     } else {
        document.UpdateForm.ptmas061.value =
                         document.UpdateForm.d_ptmas061.value;
        setDeathfields();
        return;
     }
  }
  if (!isWhitespace(document.UpdateForm.ptmas061.value)) {
      if (confirm("Do you want to update the patient as Deceased?\n"+
                  "Select 'Ok' to 'Decease' the patient\n"+
                  "Select 'Cancel' to retain the current details")) {
         setDateDeathfields();
         if(document.UpdateForm.username!=undefined){
           document.UpdateForm.username.disabled = false;
           document.UpdateForm.username.className = "Mandatory";
           document.UpdateForm.password.disabled = false;
           document.UpdateForm.password.className = "Mandatory";
         }
         document.UpdateForm.d_ptmas061.value =
                            document.UpdateForm.ptmas061.value;
     } else {
         document.UpdateForm.ptmas061.value =
                          document.UpdateForm.d_ptmas061.value;
         setDeathfields();
     }
  }
}
//-----------------------------------------------------------------------------
function confirmUnknownDeath() {
  var deceased = document.UpdateForm.ptmas029.value;
  if (document.UpdateForm.ptmas067.checked == false && deceased == 1) {
     if (confirm("Do you want to Undecease the Patient?\n"+
                 "Select 'Ok' to 'Undecease' the patient\n"+
                 "Select 'Cancel' to reset the current details")) {
        makeUndead();
        return;
     } else {
        document.UpdateForm.ptmas067.checked = true;
        setDeathfields();
        return;
     }
  }
  if (document.UpdateForm.ptmas067.checked == true) {
     if (confirm("Do you want to update the patient as Deceased?\n"+
                "Select 'Ok' to 'Decease' the patient\n"+
                "Select 'Cancel' to retain the current details")) {
        setUnknownDeathfields();
        if(document.UpdateForm.username!=undefined){
          document.UpdateForm.username.disabled = false;
          document.UpdateForm.username.className = "Mandatory";
          document.UpdateForm.password.disabled = false;
          document.UpdateForm.password.className = "Mandatory";
        }
        return;
     } else {
        document.UpdateForm.ptmas067.checked = false;
        setDeathfields();
     }
  }
}
//-----------------------------------------------------------------------------
function setDeathfields() {
  document.UpdateForm.ptmas029.value          = 0;
  if ( !isWhitespace(document.UpdateForm.ptmas061.value)) {
     setDateDeathfields();
     return; }
  if ( document.UpdateForm.ptmas067 != undefined ) {
     if ( document.UpdateForm.ptmas067.checked == true ) {
        setUnknownDeathfields();
        return; }
  }
}
//-----------------------------------------------------------------------------
function setDateDeathfields() {
  document.UpdateForm.ptmas061.className      = "Date Mandatory";
  document.UpdateForm.pmpmi017.className      = "Mandatory";
  document.UpdateForm.pmpmi017.disabled       = false;
  document.UpdateForm.ptmas029.value          = 1;
  if ( document.UpdateForm.ptmas067 != undefined ) {
     document.UpdateForm.ptmas067.disabled    = true;
     document.UpdateForm.ptmas067.checked     = false; }

}
//-----------------------------------------------------------------------------
function setUnknownDeathfields() {
  document.UpdateForm.ptmas061.value          = "";
  document.UpdateForm.d_ptmas061.value        = "";
  document.UpdateForm.ptmas061.classname      = "";
  document.UpdateForm.ptmas061.disabled       = true;
  document.UpdateForm.ptmas067.disabled       = false;
  document.UpdateForm.pmpmi017.disabled       = false;
  document.UpdateForm.pmpmi017.className      = "Mandatory";
  document.UpdateForm.ptmas029.value          = 1;
}
//-----------------------------------------------------------------------------
function makeUndead() {
  document.UpdateForm.ptmas061.value          = "";
  document.UpdateForm.d_ptmas061.value        = "";
  document.UpdateForm.ptmas061.className      = "Date";
  document.UpdateForm.ptmas061.disabled       = false;
  document.UpdateForm.pmpmi017.selectedIndex  = 0;
  document.UpdateForm.pmpmi017.className      = "";
  document.UpdateForm.pmpmi017.disabled       = true;
  if ( document.UpdateForm.ptmas085 != undefined ) {
    document.UpdateForm.ptmas085.value          = "";
  }

  if ( document.UpdateForm.ptmas067 != undefined ) {
     document.UpdateForm.ptmas067.disabled    = false;
     document.UpdateForm.ptmas067.checked     = false; }

  if(document.UpdateForm.username!=undefined){
    document.UpdateForm.username.disabled = false;
    document.UpdateForm.username.className = "Mandatory";
    document.UpdateForm.password.disabled = false;
    document.UpdateForm.password.className = "Mandatory";
  }

  document.UpdateForm.ptmas029.value          = 0;
}
//------------------------------------------------------------------------------
function checkLang01() {
  if (document.UpdateForm.pmpmi001.checked == true) {
    //document.UpdateForm.pmpmi002.className="Mandatory";
    AddClassName(document.UpdateForm.pmpmi002,"Mandatory");
    document.UpdateForm.pmpmi002.focus();
  } else {
    //document.UpdateForm.pmpmi002.className="";
    RemoveClassName(document.UpdateForm.pmpmi002,"Mandatory");
  }
}
// RCH
function checkLang02() {
  if (document.UpdateForm.pmpmi001.checked == true) {
    //document.UpdateForm.pmpmi002.className="Mandatory";
    AddClassName(document.UpdateForm.pmpmi002,"Mandatory");
    document.UpdateForm.pmpmi002.focus();
  } else {
    alert("Do not remove the interpreter Required indicator. " +
          "Please check with Silvio Proy on ext. 5026 before making " +
          "any changes to this field.");
    //document.UpdateForm.pmpmi002.className="";
    RemoveClassName(document.UpdateForm.pmpmi002,"Mandatory");
  }
}
//
function chkLangn01() {
  if (document.AddForm.pmpmi001.checked == true) {
    //document.AddForm.pmpmi002.className="Mandatory";
    AddClassName(document.AddForm.pmpmi002,"Mandatory");
    document.AddForm.pmpmi002.focus();
  } else {
    //document.AddForm.pmpmi002.className="";
    RemoveClassName(document.AddForm.pmpmi002,"Mandatory");
  }
}
//
function checkAlias01() {
  if (document.UpdateForm.aliasset.value==0) {
  document.UpdateForm.aliasset.value="1";
  }
}
function checkAlipr01() {
  if (isWhitespace(document.UpdateForm.pmpmi082.value)&&
      isWhitespace(document.UpdateForm.pmpmi083.value)) {
     document.UpdateForm.aliprset.value=0
  } else {
    if (document.UpdateForm.aliprset.value==0) {
      document.UpdateForm.aliprset.value="1";
    }
  }
}
function checkAlipr02() {
  if (isWhitespace(document.AddForm.pmpmi082.value)&&
      isWhitespace(document.AddForm.pmpmi083.value)) {
     document.AddForm.aliprset.value=0
  } else {
    if (document.AddForm.aliprset.value==0) {
      document.AddForm.aliprset.value="1";
    }
  }
}
function checkAdd01()  {
  if (document.UpdateForm.preaddset.value==0) {
    document.UpdateForm.preaddset.value=1;
    }
}
// Diag Lookup
function EmrDiagnosisSearch(ReturnCode,ReturnName)  {
  var PopUpFrameDoc = DFrameStart();
  linkURL="emrweb05.pbl?reportno=7&template=4";
  window.ReturnFunction="";
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  if (EmrDiagnosisSearch.arguments.length > 1) {
    window.ReturnFunction=EmrDiagnosisSearch.arguments[2]; }
  PopUpFrameDoc.location.href = linkURL;
  SearchFrameShow();
}

function LookEmrCode(validType,validName,validCode) {
  window.ValidateName=validName
  window.ValidateCode=validCode
  document.LookUpCode.valdtype.value=validType
  document.LookUpCode.valdcode.value=validCode.value
  document.LookUpCode.target="newWindow"
  newWindow=open("","newWindow",
  "width=1,height=1,top=1024,scrollbars=no,status=no,toolbar=no,menubar=no")
  document.LookUpCode.submit()
}
// Diag LookUp

function submitForm01(){

var vM = validateMandatory(UpdateForm);

 if(vM){
  CheckLeadingSpace(document.UpdateForm.ptmas005);
  if(ans==false){
     return;}
  CheckLeadingSpace(document.UpdateForm.ptmas006);
  if(ans==false){
     return;}
  if(document.UpdateForm.showflag!=undefined) {
   if (document.UpdateForm.showflag.value==1) {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=002"+
     "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")+
     "&showflag=1"
   }
  }
  if (document.UpdateForm.preaddset.value==1) {
    ans=confirm("Do you want to update the Previous Address details?");
    if (ans) {                                                
      document.UpdateForm.prevaddr.value="1";
    }
    document.UpdateForm.preaddset.value=1;
  }
  if (document.UpdateForm.preaddset.value==2) {
    ans=confirm("Do you want to update the Previous Address details?");
    if (ans) {
      document.UpdateForm.prevaddr.value="1";
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=031"+
     "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
       if(document.UpdateForm.showflag!=undefined) {
         if (document.UpdateForm.showflag.value==1) {
            document.UpdateForm.redirect.value+="&showflag=1"
         }
       }
    }
    document.UpdateForm.preaddset.value=1;
  }
 
  if (document.UpdateForm.aliasset.value==1) {
    ans=confirm("Save as an Alias ?");
    if (ans) {
      document.UpdateForm.savealia.value="1";
      if (document.UpdateForm.aliassts !=undefined) {
        document.UpdateForm.aliassts.value="S";
      }
    }
    else {
      if (document.UpdateForm.aliassts !=undefined) {
        document.UpdateForm.aliassts.value="N";
      }
    }
    document.UpdateForm.aliasset.value="1";
  }

  if (document.UpdateForm.aliprset!=undefined &&
      document.UpdateForm.savealpr!=undefined) {
    if (document.UpdateForm.aliprset.value==1) {
      ans=confirm("Save Preferred Name as an Alias ?");
      if (ans) {
        document.UpdateForm.savealpr.value="1";
      }     
      document.UpdateForm.aliprset.value="1";
    }  
  } 

  if(document.UpdateForm.praflag.value=="1"){
  if (!isWhitespace(document.UpdateForm.ptmas017.value)) {
    ans="true";
    checkPRFAUpdate(UsualPRFA);
      if (ans==false) {
          return; }
   }
  }
 ValMedicare01();
  if (vM)
  {
    if (ans==false)
    {
      return;
    }
    if (document.UpdateForm.ptmsx045.value==9)
    {
      ans=confirm("Warning: Medicare reference is 9");
      if (ans==false)
      {
          if (document.UpdateForm.mdrfflag!=undefined)
          {
            if (document.UpdateForm.mdrfflag.value==1)
            {
              document.UpdateForm.ptmsx045.value="";
              document.UpdateForm.ptmsx045.focus();
            }
          }

          return;
      }
    }

    //determine if the current health fund table active or not
    if (!isWhitespace(document.UpdateForm.ptmas036.value))
    {
      Hfund = document.UpdateForm.ptmas036;
      Hfunddesc = document.UpdateForm.funddesc;
      Htable = document.UpdateForm.ptmas037;
      Htabledesc = document.UpdateForm.tabldesc;
      saveHfndDsc = document.UpdateForm.funddesc.value;
      saveHtblDsc = document.UpdateForm.tabldesc.value;

      if  (!validateHftable(20,Hfund,Htable,Hfunddesc,Htabledesc))
      {
        ans=confirm("Select another active health fund table? ");
        if (ans==true)
        {
          document.UpdateForm.funddesc.value = saveHfndDsc;
          document.UpdateForm.tabldesc.value = saveHtblDsc;
          return;
        }
      }
    }
//
  if(document.PatientLinks.cpmiskey!=undefined) {   // OP Confirm PMI redirect
    if(!isWhitespace(document.PatientLinks.cpmiskey.value)) {
     if(document.PatientLinks.cpmiemgc!=undefined) { // emergency contacts
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=022"+
     "&cpmiskey=" + document.PatientLinks.cpmiskey.value.replace(/ /g,"+")+
     "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")+
     "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+")
     } else {
     document.UpdateForm.redirect.value="patweb07.pbl?reportno=06&template=004"+
     "&cpmiskey=" + document.PatientLinks.cpmiskey.value.replace(/ /g,"+")+
     "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")+
     "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+")
    }
    }
  }
//
    DFrameClear();
    document.UpdateForm.target = "PopUpFrame"; 
    document.UpdateForm.submit();
  }
 }
}

function submitForm01Super()  {
 if (validateMandatory(UpdateForm)) {
  CheckLeadingSpace(document.UpdateForm.ptmas005);
  if(ans==false){
     return;}
  CheckLeadingSpace(document.UpdateForm.ptmas006);
  if(ans==false){
     return;}
  if(document.UpdateForm.showflag!=undefined) {
   if (document.UpdateForm.showflag.value==1) {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=083"+
     "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")+
     "&showflag=1"
   }
  }
  if (document.UpdateForm.preaddset.value==1) {
    ans=confirm("Do you want to update the Previous Address details?");
    if (ans) {
      document.UpdateForm.prevaddr.value="1";
    }
    document.UpdateForm.preaddset.value=1;
  }
  if (document.UpdateForm.preaddset.value==2) {
    ans=confirm("Do you want to update the Previous Address details?");
    if (ans) {
      document.UpdateForm.prevaddr.value="1";
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=031"+
     "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
       if(document.UpdateForm.showflag!=undefined) {
         if (document.UpdateForm.showflag.value==1) {
            document.UpdateForm.redirect.value+="&showflag=1"
         }
       }
    }
    document.UpdateForm.preaddset.value=1;
  }

  if (document.UpdateForm.aliasset.value==1) {
    ans=confirm("Save as an Alias ?");
    if (ans) {
      document.UpdateForm.savealia.value="1";
      if (document.UpdateForm.aliassts !=undefined) {
        document.UpdateForm.aliassts.value="S";
      }
    }
    else {
      if (document.UpdateForm.aliassts !=undefined) {
        document.UpdateForm.aliassts.value="N";
      }
    }
    document.UpdateForm.aliasset.value="1";
  }

  if (document.UpdateForm.aliprset!=undefined &&
      document.UpdateForm.savealpr!=undefined) {
    if (document.UpdateForm.aliprset.value==1) {
      ans=confirm("Save Preferred Name as an Alias ?");
      if (ans) {
        document.UpdateForm.savealpr.value="1";
      }
      document.UpdateForm.aliprset.value="1";
    }
  }

  if(document.UpdateForm.praflag.value=="1"){
  if (!isWhitespace(document.UpdateForm.ptmas017.value)) {
    ans="true";
    checkPRFAUpdate(UsualPRFA);
      if (ans==false) {
          return; }
   }
  }
 ValMedicare01();
  if (validateMandatory(UpdateForm))
  {
    if (ans==false)
    {
      return;
    }
    if (document.UpdateForm.ptmsx045.value==9)
    {
      ans=confirm("Warning: Medicare reference is 9");
      if (ans==false)
      {
          if (document.UpdateForm.mdrfflag!=undefined)
          {
            if (document.UpdateForm.mdrfflag.value==1)
            {
              document.UpdateForm.ptmsx045.value="";
              document.UpdateForm.ptmsx045.focus();
            }
          }

          return;
      }
    }

    //determine if the current health fund table active or not
    if (!isWhitespace(document.UpdateForm.ptmas036.value))
    {
      Hfund = document.UpdateForm.ptmas036;
      Hfunddesc = document.UpdateForm.funddesc;
      Htable = document.UpdateForm.ptmas037;
      Htabledesc = document.UpdateForm.tabldesc;
      saveHfndDsc = document.UpdateForm.funddesc.value;
      saveHtblDsc = document.UpdateForm.tabldesc.value;

      if  (!validateHftable(20,Hfund,Htable,Hfunddesc,Htabledesc))
      {
        ans=confirm("Select another active health fund table? ");
        if (ans==true)
        {
          document.UpdateForm.funddesc.value = saveHfndDsc;
          document.UpdateForm.tabldesc.value = saveHtblDsc;
          return;
        }
      }
    }
    SubmitHidden(UpdateForm);
  }
}

}

//
// function to validate the health fund table
//
function validateHftable(OptionNumber,FundCode,TableCode,FundName,TableName)
{
  ReturnFunction="" ;
  FundName.value="";
  TableName.value="";
  for (var i=5; i < validateHftable.arguments.length; i++)
  {
    if (typeof(validateHftable.arguments[i]) == 'function')
    {
      ReturnFunction=validateHftable.arguments[i]
    }
    else
    {
      validateHftable.arguments[i].value="";
    }
  }

  if (isWhitespace(FundCode.value)) return;;

  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
                    "&valdfund=" + FundCode.value.replace(/ /g,"+") +
                    "&valdtabl=" + TableCode.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0)
  {
    ReturnValue=returnValue.return_value.split("|")
    FundName.value=trim(ReturnValue[0])
    TableName.value=trim(ReturnValue[1])
    j=0

    for (var i=5; i < validateHftable.arguments.length; i++)
    {
      if (typeof(validateHftable.arguments[i]) != 'function')
      {
         j++
         validateHftable.arguments[i].value=ReturnValue[j]
      }
    }

    if (typeof(ReturnFunction) == 'function')
    {
      ReturnFunction()
    }
    return true;
  }

  else
  {
    if(FundCode.type != "hidden") { // check if hidden field
      FundCode.select();
    }
    return false;
  }
}
//
function checkTable() {
  if (!isWhitespace(document.UpdateForm.ptmas036.value)) {
    //document.UpdateForm.ptmas037.className="Mandatory";
    AddClassName(document.UpdateForm.ptmas037,"Mandatory");
  } else {
    document.UpdateForm.ptmas037.value="";
    //document.UpdateForm.ptmas037.className="";
    RemoveClassName(document.UpdateForm.ptmas037,"Mandatory");
    document.UpdateForm.tabldesc.value="";
  }
}
//
function checkTable05() {
  if (!isWhitespace(document.AddForm.ptmas036.value)) {
    //document.AddForm.ptmas037.className="Mandatory";
    AddClassName(document.AddForm.ptmas037,"Mandatory");
  } else {
    document.AddForm.ptmas037.value="";
    //document.AddForm.ptmas037.className="";
    RemoveClassName(document.AddForm.ptmas037,"Mandatory");
    document.AddForm.tabldesc.value="";
  }
}
//
function checkTableadm() {
  if (!isWhitespace(document.UpdateForm.ptmis013.value)) {
    //document.UpdateForm.ptmis014.className="Mandatory";
    AddClassName(document.UpdateForm.ptmis014,"Mandatory");
  } else {
    document.UpdateForm.ptmis014.value="";
    //document.UpdateForm.ptmis014.className="";
    RemoveClassName(document.UpdateForm.ptmis014,"Mandatory");
    document.UpdateForm.tabldesc.value="";
  }
}
//
//------------------------------------------------------------
// Report 5 functions   
//------------------------------------------------------------
function SetPostCode05() {
 suburb   = AddForm.ptmas010;
 state    = AddForm.ptmas011;
 postcode = AddForm.ptmas012;
 if (document.AddForm.oseasflg!=undefined) {
    if (trim(postcode.value)=="8888") {
       document.AddForm.oseasflg.checked=true;
    } else {
       document.AddForm.oseasflg.checked=false;
    }
    setAddrLine4(AddForm)
 }
}
//
function confirmDeath05(deathDate,title) {
  var agentStr = window.navigator.userAgent;
  var bIsChrome = (agentStr.indexOf("Chrome") != -1) ? true : false;

  if (checkDate(deathDate,title)) {
    if (bIsChrome) { // Chrome
      if (!isWhitespace(deathDate.value)) 
      {
        window.setTimeout(checkDeath05, 100);
      }
      else {
        checkDeath05();
      }
    }
    else {
      checkDeath05();  // other browsers don't need the slight delay
    }
  }
}
//
function checkDeath05() {
  if (!confirm("Confirm Deceased Status?")) {
    document.AddForm.ptmas061.value="";
    document.AddForm.ptmas061.disabled=false;

    document.AddForm.ptmas067.checked=false
    document.AddForm.ptmas067.disabled=false;  // disable unknown death date

    if (document.AddForm.pmpmi017 != undefined) {
      document.AddForm.pmpmi017.className="";
    }
  }

  if (document.AddForm.ptmas067.checked == true) {
    // 'Unknown Date of Death' checkbox ticked
    if (document.AddForm.pmpmi017 != undefined) {
      //document.AddForm.pmpmi017.className="Mandatory";  // Death Type dropdown
      AddClassName(document.AddForm.pmpmi017,"Mandatory");
      document.AddForm.pmpmi017.disabled=false;
    }
    document.AddForm.ptmas061.value="";        // clear Date of Death value
    document.AddForm.ptmas061.disabled=true;   // disable date field
  } 
  else {
    // 'Unknown Date of Death' checkbox unticked
    if (document.AddForm.pmpmi017 != undefined) {
      //document.AddForm.pmpmi017.className="";    // Death Type dropdown
      RemoveClassName(document.AddForm.pmpmi017,"Mandatory");
      document.AddForm.pmpmi017.selectedIndex=0;
    }
    document.AddForm.ptmas061.disabled=false;  // Date of Death field
  }

  if (!isWhitespace(document.AddForm.ptmas061.value)) {
    document.AddForm.ptmas067.disabled=true;  // disable unknown death date
  }
  else {
    document.AddForm.ptmas067.disabled=false;  // enable unknown death date
  }

  if (document.AddForm.username!=undefined) {
    if ((document.AddForm.ptmas067.checked == true) ||
      (!isWhitespace(document.AddForm.ptmas061.value))) {
        document.AddForm.username.disabled = false;
        //document.AddForm.username.className = "Mandatory";
        AddClassName(document.AddForm.username,"Mandatory");
        document.AddForm.password.disabled = false;
        //document.AddForm.password.className = "Mandatory";
        AddClassName(document.AddForm.password,"Mandatory");
    } else {
        document.AddForm.username.value="";
        document.AddForm.username.disabled = true;
        //document.AddForm.username.className = "";
        RemoveClassName(document.AddForm.username,"Mandatory");
        document.AddForm.password.value="";
        document.AddForm.password.disabled = true;
        //document.AddForm.password.className = "";
        RemoveClassName(document.AddForm.password,"Mandatory");
    }
  }
}
function checkLang05() {
  if (document.AddForm.ptmas045.checked == true) {
    //document.AddForm.ptmas040.className="Mandatory";
    AddClassName(document.AddForm.ptmas040,"Mandatory");
    document.AddForm.ptmas040.focus();
  } else {
    //document.AddForm.ptmas040.className="";
    RemoveClassName(document.AddForm.ptmas040,"Mandatory");
  }
}
function SubmitHidden05(theForm) {
//  AddForm.RegisterButton.disabled=true;
//  setInterval('AddForm.RegisterButton.disabled=false',6000);
  CheckLeadingSpace(document.AddForm.ptmas005);
  if(ans==false){return;}

  if(document.AddForm.ptmas006!=undefined){ //wa template
     CheckLeadingSpace(document.AddForm.ptmas006);
     if(ans==false){
        return;
     }
  }
  if(document.AddForm.pmpmi084!=undefined){ //non-wa template
     CheckLeadingSpace(document.AddForm.pmpmi084);
     if(ans==false){
        return;
     }
  }
  if (!isWhitespace(document.AddForm.ptmas017.value)) {
    ValMedicare05();
    if (ans==false){return;}
    if (document.AddForm.ptmsx045.value==9)
    {
      ans=confirm("Warning: Medicare reference is 9");
      if (ans==false){return;}
    }
  }
  var dA = document.AddForm;
  if(!isWhitespace(dA.ptmas017)){
     checkAge(dA.ptmas017.value,dA.maxage.value);
  }
  if(document.AddForm.praflag.value=="1"){
  if(!isWhitespace(document.AddForm.ptmas017.value)){
     ans="true";
     checkPRFA(UsualPRFA);
     if(ans==false){
        return; 
     }
   }
  }
  if(top.content.location.search.substring(1,24)=="reportno=2&template=020"||
     top.content.location.search.substring(1,24)=="reportno=2&template=010"){
     document.AddForm.redirect.value="patweb89.pbl?reportno=1&template=014"
     if(document.AddForm.ptcnnewc!=undefined) {
        if(document.AddForm.ptcnnewc.value=="1") {
          document.AddForm.redirect.value="patweb07.pbl?reportno=6&template=004"
        }
     }
  }
  if (document.AddForm.aliprset!=undefined &&
      document.AddForm.savealpr!=undefined) {
    if (document.AddForm.aliprset.value==1) {
      ans=confirm("Save Preferred Name as an Alias ?");
      if (ans) {
        document.AddForm.savealpr.value="1";
      }
      document.AddForm.aliprset.value="1";
    }
  }
  if(document.AddForm.d_ptmas045!=undefined){
    if(document.AddForm.d_ptmas045.checked==true){
       document.AddForm.ptmas045.value="1"}
    else {
       document.AddForm.ptmas045.value="0"}
  }

  if(document.AddForm.theaflag!=undefined){
    if(document.AddForm.theaflag.value=="3") {
      var serverURL = "../cgi-bin/comweb80.pbl?reportno=89" +
                  "&valddate="+AddForm.ptmas017.value.replace(/ /g,"+") +
                  "&valdcod2="+AddForm.ptmas016.value.replace(/ /g,"+");
      var returnValue = RSExecute(serverURL);
      if (returnValue.status!=0) {
        return;
      }

    }
  }

  if (validateMandatory(theForm)) {
    theForm.target="PopUpFrame"
    theForm.submit();
  }
}
function validate05(theForm){
  CheckLeadingSpace(document.AddForm.ptmas005);
  if(ans==false){
     return;}
  CheckLeadingSpace(document.AddForm.ptmas006);
  if(ans==false){
     return;}
  if (!isWhitespace(document.AddForm.ptmas017.value)) {
    ValMedicare05();
    if (ans==false) {
          return; }
    if (document.AddForm.ptmsx045.value==9)
    {
      ans=confirm("Warning: Medicare reference is 9");
      if (ans==false)
      {
          return;
      }
    }
  }
  if (!isWhitespace(document.AddForm.ptmas017.value)) {
    ans="true";
    checkPRFA(UsualPRFA);
    if (ans==false) {
          return; }
  }
  if(top.content.location.search.substring(1,24)=="reportno=2&template=020"||
     top.content.location.search.substring(1,24)=="reportno=2&template=010"){
     document.AddForm.redirect.value="patweb89.pbl?reportno=1&template=014"}

  if (document.AddForm.aliprset!=undefined &&
      document.AddForm.savealpr!=undefined) {
    if (document.AddForm.aliprset.value==1) {
      ans=confirm("Save Preferred Name as an Alias ?");
      if (ans) {
        document.AddForm.savealpr.value="1";
      }
      document.AddForm.aliprset.value="1";
    }
  }
  if(document.AddForm.d_ptmas045!=undefined){
    if(document.AddForm.d_ptmas045.checked==true){
       document.AddForm.ptmas045.value="1"}
    else {
       document.AddForm.ptmas045.value="0"}
  }

  if(validateMandatory(theForm)){
     theForm.target="PopUpFrame"
     return true;
  }
}
//
//
//------------------------------------------------------------
// Common to Report 1 and Reoprt 5 
//------------------------------------------------------------
function checkAge(Input,maxage) {
  var mon;
  if (isWhitespace(Input)) {
     return;
  }
  day= Input.substring(0,2)
  year= Input.substring(6,11)
  monstr= Input.substring(3,6)
  if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon=0
  if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon=1
  if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon=2
  if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon=3
  if (monstr=="May" || monstr=="MAY" || monstr=="may") mon=4
  if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon=5
  if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon=6
  if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon=7
  if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon=8
  if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon=9
  if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon=10
  if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon=11

  var Today = new Date();
  var Bday = new Date();
  Bday.setFullYear(year);
  Bday.setMonth(mon);
  Bday.setDate(day);
  var difference = "0";

  if (Today.getTime() > Bday.getTime()) 
  {
    difference = Today.getTime() - Bday.getTime();
    difference = Math.floor(difference / (1000 * 60 * 60 * 24 * 365));
  }
  if (difference > maxage ) 
  {
   alert("Warning: Invalid permissible age");
  }
}
//
function checkAgePRFA(maxage) {
  if(document.AddForm.ptcnnewc!=undefined) {
    if(document.AddForm.ptcnnewc.value=="1") {
      return;
    }
  }
  var mon;
  var Input=document.AddForm.ptmas017.value;
  if (isWhitespace(Input)) {
     return;
  }
  var day= Input.substring(0,2);
  var year= Input.substring(6,11);
  var monstr= Input.substring(3,6);
  if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon=0;
  if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon=1;
  if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon=2;
  if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon=3;
  if (monstr=="May" || monstr=="MAY" || monstr=="may") mon=4;
  if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon=5;
  if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon=6;
  if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon=7;
  if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon=8;
  if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon=9;
  if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon=10;
  if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon=11;

  var Today = new Date();
  var Bday = new Date();
  Bday.setFullYear(year);
  Bday.setMonth(mon);
  Bday.setDate(day);
  var difference = "0";

  if (Today.getTime() > Bday.getTime()) 
  {
    difference = Today.getTime() - Bday.getTime();
    difference = Math.floor(difference / (1000 * 60 * 60 * 24 * 365));
  }

  if (difference > maxage) 
    document.AddForm.pmpmi076.selectedIndex=1;
  else
    document.AddForm.pmpmi076.selectedIndex=3;
}
//
function checkPRFA(maxage) {
  if(document.AddForm.ptcnnewc!=undefined) {
    if(document.AddForm.ptcnnewc.value=="1") {
      return;
    }
  }
  var mon;
  Input=document.AddForm.ptmas017.value;
  if (isWhitespace(Input)) {
     return;
  }
  day= Input.substring(0,2)
  year= Input.substring(6,11)
  monstr= Input.substring(3,6)
  if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon=0
  if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon=1
  if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon=2
  if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon=3
  if (monstr=="May" || monstr=="MAY" || monstr=="may") mon=4
  if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon=5
  if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon=6
  if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon=7
  if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon=8
  if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon=9
  if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon=10
  if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon=11

  Today = new Date();
  Bday = new Date();
  Bday.setFullYear(year);
  Bday.setMonth(mon);
  Bday.setDate(day);
  difference = "0";

  if (Today.getTime() > Bday.getTime()) {
    difference = Today.getTime() - Bday.getTime();
    difference = Math.floor(difference / (1000 * 60 * 60 * 24 * 365));
  }
  if (difference < maxage){
    if (document.AddForm.pmpmi076.value=="0"){
    ans=confirm("Warning : Note Age of Patient - Are they the"+
                " Usual Person Responsible for Accounts?");
      if (ans==false) {
          return; }
    }
  }
}
//
//
function checkPRFAUpdate(maxage) {
  if(document.UpdateForm.ptcnnewc!=undefined) {
    if(document.UpdateForm.ptcnnewc.value=="1") {
      return;
    }
  }
  var mon;
  Input=document.UpdateForm.ptmas017.value;
  if (isWhitespace(Input)) {
     return;
  }
  day= Input.substring(0,2)
  year= Input.substring(6,11)
  monstr= Input.substring(3,6)
  if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon=0
  if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon=1
  if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon=2
  if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon=3
  if (monstr=="May" || monstr=="MAY" || monstr=="may") mon=4
  if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon=5
  if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon=6
  if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon=7
  if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon=8
  if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon=9
  if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon=10
  if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon=11

  Today = new Date();
  Bday = new Date();
  Bday.setFullYear(year);
  Bday.setMonth(mon);
  Bday.setDate(day);
  difference = "0";

  if (Today.getTime() > Bday.getTime()) {
    difference = Today.getTime() - Bday.getTime();
    difference = Math.floor(difference / (1000 * 60 * 60 * 24 * 365));
  }
  if (difference < maxage){
    if (document.UpdateForm.pmpmi076.value=="0"){
    ans=confirm("Warning : Note Age of Patient - Are they the "+
                "Usual Person Responsible for Accounts?");
    }
  }
}
function ValMedicare01() {
  var mon;
  ans="True"
  Input=document.UpdateForm.ptmas017.value
  day= Input.substring(0,2)
  year= Input.substring(6,11)
  monstr= Input.substring(3,6)
  if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon=0
  if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon=1
  if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon=2
  if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon=3
  if (monstr=="May" || monstr=="MAY" || monstr=="may") mon=4
  if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon=5
  if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon=6
  if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon=7
  if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon=8
  if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon=9
  if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon=10
  if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon=11

  Today = new Date();
  Bday = new Date();
  Bday.setFullYear(year);
  Bday.setMonth(mon);
  Bday.setDate(day);
  difference = "0";

  if (Today.getTime() > Bday.getTime()) {
    difference = Today.getTime() - Bday.getTime();
    difference = Math.floor(difference / (1000 * 60 * 60 * 24));
  }

  i=document.UpdateForm.ptmas021.selectedIndex
  ind=document.UpdateForm.ptmas021.options[i].value.substring(3,4)

  if (difference > "180") {
    if (!isWhitespace(document.UpdateForm.ptmas023.value)) {
      if (document.UpdateForm.ptmsx045.value=="0" ||
          document.UpdateForm.ptmsx045.value==" 0") {
      ans=confirm("Warning : patient greater than 6 months, zero medicare reference");
      if (ans==false) {
          document.UpdateForm.ptmsx045.value="";
          document.UpdateForm.ptmsx045.focus();
          return; }
        }
      }
   }
      if (!isWhitespace(document.UpdateForm.ptmas023.value)) {
        if (isWhitespace(document.UpdateForm.ptmsx045.value)) {
          ans=confirm("Warning : no medicare reference number entered");
          if (ans==false) {
          document.UpdateForm.ptmsx045.focus();
          return;
          } else {
            if (document.UpdateForm.ptcnhdps!=undefined) {
              if (document.UpdateForm.ptcnhdps.value=="4") {
                document.UpdateForm.ptmsx045.value=0
              } else {
                if (DefaultMedicareReferenceto9=="1") {
                  document.UpdateForm.ptmsx045.value=" "
                } else {
                  document.UpdateForm.ptmsx045.value=9
                }
              }
            }
            defaultMedicareIRN(document.UpdateForm.ptmsx045);
          }
        }
       }
// Residents only
  if (ind=="1") {
// Less than 180 days old
    if (difference <= "180") {
      if (isWhitespace(document.UpdateForm.ptmas023.value)) {
        if (isWhitespace(document.UpdateForm.ptmsx045.value)) {
          ans=confirm("Warning : Resident with no medicare details");
          if (ans==false) {
             return;
           }
        } else {
          ans=confirm("Warning : Resident with no medicare number");
          if (ans==false) {
             return;
          }
        }
      }
//      if (!isWhitespace(document.UpdateForm.ptmas023.value)) {
//        if (isWhitespace(document.UpdateForm.ptmsx045.value)) {
//          ans=confirm("Warning : Resident with no medicare reference number");
//          if (ans==false) {
//             return;
//          } else {
//          document.UpdateForm.ptmsx045.value=0
//          }
//        }
//      }
    }
// Older than 180 days
    if (difference > "180") {
      if (isWhitespace(document.UpdateForm.ptmas023.value)) {
        if (isWhitespace(document.UpdateForm.ptmsx045.value)) {
          ans=confirm("Warning : Resident with no medicare details");
          if (ans==false) {
             return;
          }
        } else {
          ans=confirm("Warning : Resident with no medicare number");
          if (ans==false) {
             return;
          }
        }
      }
//      if (!isWhitespace(document.UpdateForm.ptmas023.value)) {
//        if (isWhitespace(document.UpdateForm.ptmsx045.value)) {
//          ans=confirm("Warning : Resident with no medicare reference number");
//          if (ans==false) {
//             return;
//          }
//        } else {
//          if (document.UpdateForm.ptmsx045.value==0) {
//            ans=confirm("Warning : Resident must have a medicare reference number greater than zero");
//            if (ans==false) {
//               return;
//            }
//          } 
//        }
//      }
    }
  }
}
//
function ValMedicare05() {
  var mon;
  Input=document.AddForm.ptmas017.value
  day= Input.substring(0,2)
  year= Input.substring(6,11)
  monstr= Input.substring(3,6)
  if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon=0
  if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon=1
  if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon=2
  if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon=3
  if (monstr=="May" || monstr=="MAY" || monstr=="may") mon=4
  if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon=5
  if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon=6
  if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon=7
  if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon=8
  if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon=9
  if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon=10
  if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon=11

  ans = "true";
  Today = new Date();
  Bday = new Date();
  Bday.setFullYear(year);
  Bday.setMonth(mon);
  Bday.setDate(day);
  difference = "0";

  if (Today.getTime() > Bday.getTime()) {
    difference = Today.getTime() - Bday.getTime();
    difference = Math.floor(difference / (1000 * 60 * 60 * 24));
    ageyears = (difference/365);
  }
  i=document.AddForm.ptmas021.selectedIndex
  ind=document.AddForm.ptmas021.options[i].value.substring(3,4)
  if (difference > "180") {
    if (!isWhitespace(document.AddForm.ptmas023.value)) {
      if (document.AddForm.ptmsx045.value=="0" ||
          document.AddForm.ptmsx045.value==" 0") {
      ans=confirm("Warning : patient greater than 6 months, zero medicare reference");
      if (ans==false) {
          document.AddForm.ptmsx045.value=="";
          document.AddForm.ptmsx045.focus();
          return; }
          }
        }
     }
   if (!isWhitespace(document.AddForm.ptmas023.value)) {
      if (isWhitespace(document.AddForm.ptmsx045.value)) {
         ans=confirm("Warning : no medicare reference number entered");
         if (ans==false) {
         document.AddForm.ptmsx045.focus();
         return;
         } else {
           if (DefaultMedicareReferenceto9=="1") {
             document.AddForm.ptmsx045.value=" "
           } else {
             document.AddForm.ptmsx045.value=9
           }
           defaultMedicareIRN(document.AddForm.ptmsx045);
         }
       }
     }
// Residents only
  if (ind=="1") {
// Less than 180 days old
    if (difference <= "180") {
      if (isWhitespace(document.AddForm.ptmas023.value)) {
        if (isWhitespace(document.AddForm.ptmsx045.value)) {
          alert("Warning : Resident with no medicare details");
        } else {
          alert("Warning : Resident with no medicare number");
        }
      }
      if (!isWhitespace(document.AddForm.ptmas023.value)) {
        if (isWhitespace(document.AddForm.ptmsx045.value)) {
          alert("Warning : Resident with no medicare reference number");
          if (DefaultMedicareReferenceto9=="1") {
            document.AddForm.ptmsx045.value=" "
          } else {
            document.AddForm.ptmsx045.value=9
          }
          defaultMedicareIRN(document.AddForm.ptmsx045);
        }
      }
    }
// Older than 180 days
    if (difference > "180") {
      if (isWhitespace(document.AddForm.ptmas023.value)) {
        if (isWhitespace(document.AddForm.ptmsx045.value)) {
          alert("Warning : Resident with no medicare details");
        } else {
          alert("Warning : Resident with no medicare number");
        }
      }
//    if (!isWhitespace(document.AddForm.ptmas023.value)) {
//      if (isWhitespace(document.AddForm.ptmsx045.value)) {
//        alert("Warning : Resident with no medicare reference number");
//      } else {
//        if (document.AddForm.ptmsx045.value==0) {
//          ans=confirm("Warning : Resident must have a medicare reference number greater than zero");
//        } 
//        if (document.AddForm.ptmsx045.value==9) {
//          ans=confirm("Warning : Resident must has medicare reference 9");
//        }
//      }
//    }
    }
  }
}
//
function updateNHI01(supervisor) {
  urno = trim(PatientLinks.urnumber.value)
  comfirmPMI="";
  if(document.UpdateForm.cpmiskey!=undefined) {
    if(!isWhitespace(document.UpdateForm.cpmiskey.value)) {
      comfirmPMI="&cpmiskey=" +
                  document.UpdateForm.cpmiskey.value.replace(/ /g,"+");
    }
  }
  if (urno.substr(0,2) != "T-") {
    document.UpdateForm.redirect.value="nhiweb99.pbl?reportno=01&template=002" +
    "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")  +
    "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+")  +
    "&superlev=" + supervisor +
    comfirmPMI;
    updatePatDetails();
  }
}
//
//------------------------------------------------------------
// Check for a zero admission time
//------------------------------------------------------------
function checkZeroTime(){
  time=document.UpdateForm.ptmis002.value.substr(0,5)
  if(time=="00:00"){
     alert("Invalid Time.")
     document.UpdateForm.ptmis002.focus();
    }
}
function CheckLeadingSpace(t){
  ans=true;
  if(t.value.substr(0,1)==" "){
    alert("Invalid "+ t.title +", remove leading spaces."); 
    if(t.type != "hidden") // check if hidden field
          t.focus();
    ans=false;
  }
}

//--------------------------------------------------------------
// Clear Healt Fund fileds
//--------------------------------------------------------------
function clrHealthFund(code1,name1,code2,name2) {
  code1.value="";
  name1.value="";
  code2.value="";
  name2.value="";
}
function checkMedRefN() {
  if (isWhitespace(document.UpdateForm.ptmas023.value)) {
    if (!isWhitespace(document.UpdateForm.ptmsx045.value)) {
      if(confirm("Warning: Medicare No. is blank, Medicare Ref. No. is not blank.")==1) {
        return 1;
      } else {
        return 0;
      }
    }
  }
  return 1;
}
function checkMedRefNKids() {
  if (isWhitespace(document.UpdateForm.ptmas023.value)) {
    if (!isWhitespace(document.UpdateForm.ptmsx045.value)) {
      document.UpdateForm.ptmsx045.value="";
      document.UpdateForm.pmpmi016.value="";
    }
  }
  return 1;
}
function removeSpaces(string) {
	var tstring = "";
	string = '' + string;
	splitstring = string.split(" ");
	for(i = 0; i < splitstring.length; i++)
	tstring += splitstring[i];
	return string;
}
function setDefaultAddress(type,add1,add2,add3,add4,post,phone) {
  if (isWhitespace(type.value)) return;;
  ReturnFunction="" ;
  for (var i=1; i < setDefaultAddress.arguments.length; i++) {
   if (typeof(setDefaultAddress.arguments[i]) == 'function') {
     ReturnFunction=setDefaultAddress.arguments[i] } }
  altidtyp=type.value.substr(0,3);
  var serverURL = "../cgi-bin/patweb07.pbl?reportno=3&remoteno=1" +
                  "&altidtyp="+ altidtyp.replace(/ /g,"+") +
                  "&updttype=R"
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    add1.value=trim(ReturnValue[0]).toUpperCase();
    add2.value=trim(ReturnValue[1]).toUpperCase();
    add3.value=trim(ReturnValue[2]).toUpperCase();
    add4.value=trim(ReturnValue[3]).toUpperCase();
    post.value=trim(ReturnValue[4])
    phone.value=trim(ReturnValue[5])
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
}
//-----------------------------------------------------------------
// Check for duplicate registration
//-----------------------------------------------------------------
function checkDuplicates(surname,given1,given2,dob) {
  ReturnFunction="" ;
  for (var i=3; i < checkDuplicates.arguments.length; i++) {
   if (typeof(checkDuplicates.arguments[i]) == 'function') {
     ReturnFunction=checkDuplicates.arguments[i] } }

  var serverURL = "../cgi-bin/comweb80.pbl?reportno=5" +
                  "&valdsurn="+surname.replace(/ /g,"+") +
                  "&valdgiv1="+given1.replace(/ /g,"+") +
                  "&valdgiv2="+given2.replace(/ /g,"+") +
                  "&valddobe="+dob.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
}
function CheckLocalGP() {
  ValidateHCPShow(18,0,UpdateForm.pmpmi059,UpdateForm.genpname,UpdateForm.shwlocgp)
  ShowLocalGP();
}
function ShowLocalGP() {
  if(UpdateForm.shwlocgp.value=="1") {
    LocGPHeading.innerHTML=localgphead.innerHTML;
    LocGPName.innerHTML=localgp.innerHTML;
  } else {
    LocGPHeading.innerHTML="";
    LocGPName.innerHTML=localgpblank.innerHTML;
  }
}
function CheckLocalGPAdd() {
  ValidateHCPShow(18,0,AddForm.pmpmi059,AddForm.genpname,AddForm.shwlocgp)
  ShowLocalGPAdd();
}
function ShowLocalGPAdd() {
  if(AddForm.shwlocgp.value=="1") {
    LocGPHeading.innerHTML=localgphead.innerHTML;
    LocGPName.innerHTML=localgp.innerHTML;
  } else {
    LocGPHeading.innerHTML="";
    LocGPName.innerHTML=localgpblank.innerHTML;
  }
}
function SetGivenName(theForm) {
  var firstname = trim(theForm.pmpmi084.value);
  var secondname = trim(theForm.pmpmi085.value);
  theForm.ptmas006.value = firstname + " " + secondname
  theForm.ptmas006.value = theForm.ptmas006.value.substr(0,25);
}
function ShowFundAlias(theForm) {
  if(theForm.fndalias.checked==true) {
    document.getElementById('HealthFundAlias').style.display="";
  } else {
    document.getElementById('HealthFundAlias').style.display="none";
    theForm.pmpmi086.value="";
    theForm.pmpmi087.value="";
    theForm.pmpmi088.value="";
  }
}
function ShowFundAlias2(theForm) {
  if (theForm.fndalias.checked==true) {
    document.getElementById('HealthFundAlias').style.display="";
    document.getElementById('HealthFundAlias1').style.display="";
    document.getElementById('HealthFundAlias2').style.display="";
    document.getElementById('HealthFundAlias3').style.display="";
    document.getElementById('HealthFundAlias4').style.display="";
    document.getElementById('HealthFundAlias5').style.display="";
    //theForm.pmpmi086.className="Mandatory";
    AddClassName(theForm.pmpmi086,"Mandatory");
    //theForm.pmpmi087.className="Mandatory";
    AddClassName(theForm.pmpmi087,"Mandatory");
  } else {
    document.getElementById('HealthFundAlias').style.display="none";
    document.getElementById('HealthFundAlias1').style.display="none";
    document.getElementById('HealthFundAlias2').style.display="none";
    document.getElementById('HealthFundAlias3').style.display="none";
    document.getElementById('HealthFundAlias4').style.display="none";
    document.getElementById('HealthFundAlias5').style.display="none";
    theForm.pmpmi086.value="";
    //theForm.pmpmi086.className="";
    RemoveClassName(theForm.pmpmi086,"Mandatory");
    theForm.pmpmi087.value="";
    //theForm.pmpmi087.className="";
    RemoveClassName(theForm.pmpmi087,"Mandatory");
    theForm.pmpmi088.value="";
  }
}
function CancelButtonRedirect() {
  if(document.PatientLinks.cpmiskey!=undefined) {   // OP Confirm PMI redirect
    if(!isWhitespace(document.PatientLinks.cpmiskey.value)) {
////
      OutpatientList=GetContentCookie("OutpatientList");
      if (OutpatientList!="unknown") {
          getTop().content.location.href=OutpatientList 
      } else {
        linkUrl="outweb02.pbl?reportno=2&template=004" +
                "&sesskeys=" + 
                document.PatientLinks.cpmiskey.value.replace(/ /,"+");
        location.href=linkUrl;
      }
      return;
    }
  }
  PatientLinkTo("patweb98.pbl",1,1,0,0);
}
function setContactNames() {
  el=document.getElementById("ContactNames")
  if (el == undefined) return;

  for (i=el.options.length-1;i>0;i--) {
    if (el.options[i].value=="1") el.remove(i);
    if (el.options[i].value=="2") el.remove(i);
    if (el.options[i].value=="3") el.options[i].text=ContactName1
    if (el.options[i].value=="4") el.options[i].text=ContactName2
    if (el.options[i].value=="5") el.options[i].text=ContactName3
    if (el.options[i].value=="6") el.options[i].text=ContactName4
  }
}
function GenericPass() {
  var serverURL  = "../cgi-bin/patweb80.pbl?reportno=11" +
              "&secureid=" + document.AddForm.username.value +
              "&securepw=" + document.AddForm.password.value +
              "&valdtype=1";

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    return true;
  }
  else {
    return false;
  }
}
//
// This function toggles the 'Foundation' Yes/No dropdown (FieldID) display 
// style (disabled/Readonly) based on the checkbox ('Do Not Contact') value.
//
function ToggleDNC(ChkBox, FieldID) {
  if ((ChkBox == undefined) || (FieldID == undefined))
    return;

  var oFld = document.getElementById(FieldID);  // 'Foundation' field
  if (oFld == undefined)
    return;

  if (ChkBox.checked) {
    oFld.value = 1;  // default selection to 'No'
    oFld.disabled = true;
    //oFld.className = oFld.className + " Readonly";
    AddClassName(oFld,"Readonly");
  }
  else {
    oFld.disabled = false;
    //oFld.className = oFld.className.replace("Readonly","");
    RemoveClassName(oFld,"Readonly");
  }
}
function ShowOptOutSMS() {
  if(document.getElementById("ptcnsmsn").value == "1") {
    document.getElementById('DisplaySMS').style.display="";
    if(document.getElementById('ptmsx050').value=="1") {
      document.getElementById('d_ptmsx050').checked=true;
    }
  }
}
function SetOptOutSMS() {
  if(document.getElementById("ptcnsmsn").value == "1") {
    if(document.getElementById('d_ptmsx050').checked==true) {
      document.getElementById('ptmsx050').value="1";
    } else {
      document.getElementById('ptmsx050').value="0";
    }
  }
}
function LookupEmrCode(validType,validName,validCode) {
  if (isWhitespace(validCode.value)) {
    validName.value = "";
    return;
  }

  var serverURL = "../cgi-bin/emrweb05.pbl?reportno=12" +
                  "&valdtype=" + validType +
                  "&valdcode=" + validCode.value.replace(/ /g,"+");

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue = returnValue.return_value.split("|");
    validName.value = trim(ReturnValue[0]);
    validCode.value = trim(ReturnValue[1]);
    return true;
  }
  else {
    validName.value = "";
    validCode.value = "";
    validCode.select();
    return false;
  }
}

function UpdHealthFund() {
  if ((document.UpdateForm.admissno==undefined)||
     isWhitespace(document.UpdateForm.admissno.value)){
    return;
  }
  updhf=document.UpdateForm.ptcnvshf.value;
  if (updhf=="1") {
     if((UpdateForm.ptmas036.value!=UpdateForm.admhfund.value) ||
       (UpdateForm.ptmas037.value!=UpdateForm.admhftab.value)) {
      if ((UpdateForm.admnstat.value.substr(0,1)=="3") &&
          (UpdateForm.admninvc.value.substr(2,1)=="0")) {
        if(!confirm("Do you want to Update the Visit Health Fund/Table ? \n  " +
                 "Click OK to Update or Cancel to Retain Visit Fund. "))
        {
           UpdateForm.updhfund.value="1";       // NOT to Update Visit HF
           return;
        }
      }
     }
  }
  UpdateForm.updhfund.value="0";         // default to Update Visit HF
}

function AddComment() {
  linkurl = "../cgi-bin/cliweb06.pbl?reportno=13&template=007" +
            "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") +
            "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+");
  Left=(document.body.clientWidth-750)/2;
  DFrameLink(linkurl,100,Left,750,300);
}
function AddURComment() {
  linkurl = "../cgi-bin/cliweb06.pbl?reportno=14&template=007" +
            "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") +
            "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+");
  Left=(document.body.clientWidth-750)/2;
  DFrameLink(linkurl,100,Left,750,300);
}
function MandLocalGPAdd() {
  if(isWhitespace(document.AddForm.genpname.value) &&
     isWhitespace(document.AddForm.genpprac.value)) {
     document.AddForm.genpname.className="Mandatory";
     document.AddForm.genpprac.className="Mandatory";
     return;
  }
  if(!isWhitespace(document.AddForm.genpname.value)) {
     document.AddForm.genpname.className="Mandatory";
     document.AddForm.genpprac.className="";
     return;
  }
  if(!isWhitespace(document.AddForm.genpprac.value)) {
     document.AddForm.genpprac.className="Mandatory";
     document.AddForm.genpname.className="";
     return;
  }
}
function MandLocalGPUpd() {
  if(isWhitespace(document.UpdateForm.genpname.value) &&
     isWhitespace(document.UpdateForm.genpprac.value)) {
     document.UpdateForm.genpname.className="Mandatory";
     document.UpdateForm.genpprac.className="Mandatory";
     return;
  } 
  if(!isWhitespace(document.UpdateForm.genpname.value)) {
     document.UpdateForm.genpname.className="Mandatory";
     document.UpdateForm.genpprac.className="";
     return;
  }
  if(!isWhitespace(document.UpdateForm.genpprac.value)) {
     document.UpdateForm.genpprac.className="Mandatory";
     document.UpdateForm.genpname.className="";
     return;
  }
}
function checkContactCorrespondenceHEA(theForm) {

//T0888175-start
//Removed check for email option since the email address field have
//been made mandatory on HEA Add/Update PMI screens for T0879283
//if (theForm.pmpmi095.value.substring(3,4)=='E') {
//   theForm.pmpmi005.className="Mandatory";
//} else {
//   theForm.pmpmi005.className="";
//}
//T0888175-end

  if (theForm.pmpmi095.value.substring(3,4)=='H') {
     //theForm.ptmas013.className="Mandatory";
     AddClassName(theForm.ptmas013,"Mandatory");
  } else {
     //theForm.ptmas013.className="";
     RemoveClassName(theForm.ptmas013,"Mandatory");
  }

  if (theForm.pmpmi095.value.substring(3,4)=='M') {
     //theForm.ptmsx039.className="Mandatory";
     AddClassName(theForm.ptmsx039,"Mandatory");
  } else {
     //theForm.ptmsx039.className="";
     RemoveClassName(theForm.ptmsx039,"Mandatory");
  }

  if (theForm.pmpmi095.value.substring(3,4)=='W') {
     //theForm.ptmas014.className="Mandatory";
     AddClassName(theForm.ptmas014,"Mandatory");
  } else {
     //theForm.ptmas014.className="";
     RemoveClassName(theForm.ptmas014,"Mandatory");
  }
}
function DisplayFieldsHEA() {
  if(document.getElementById("PMIDef1L")) {
    if(isWhitespace(document.getElementById("PMIDef1L").innerHTML)) {
      document.getElementById("PMIDef1L").innerHTML="";
      document.getElementById("PMIDef1F").innerHTML="";
    }
  }
  if(document.getElementById("PMIDef2L")) {
    if(isWhitespace(document.getElementById("PMIDef2L").innerHTML)) {
      document.getElementById("PMIDef2L").innerHTML="";
      document.getElementById("PMIDef2F").innerHTML="";
    }
  }
  if(document.getElementById("PMIDef3L")) {
    if(isWhitespace(document.getElementById("PMIDef3L").innerHTML)) {
      document.getElementById("PMIDef3L").innerHTML="";
      document.getElementById("PMIDef3F").innerHTML="";
    }
  }
  if(document.getElementById("PMIDef4L")) {
    if(isWhitespace(document.getElementById("PMIDef4L").innerHTML)) {
      document.getElementById("PMIDef4L").innerHTML="";
      document.getElementById("PMIDef4F").innerHTML="";
    }
  }
  if(document.getElementById("PMIDef5L")) {
    if(isWhitespace(document.getElementById("PMIDef5L").innerHTML)) {
      document.getElementById("PMIDef5L").innerHTML="";
      document.getElementById("PMIDef5F").innerHTML="";
    }
  }

  if(document.getElementById("PMIDef1L")) {
    if((document.getElementById("PMIDef1L").innerHTML=="") &&
       (document.getElementById("PMIDef2L").innerHTML=="") &&
       (document.getElementById("PMIDef3L").innerHTML=="") &&
       (document.getElementById("PMIDef4L").innerHTML=="") &&
       (document.getElementById("PMIDef5L").innerHTML=="")) 
      {
       document.getElementById("headerline").style.display="none";
      }
  }
}
//---------------------------------------------------------------------------
//T0879283-start - HEA functions for PMI templates
function DefPatFolderHEA(){
  catT  = document.getElementById('ptmas021');
  catFS = document.getElementById('pmpmi077');

  if ((catT == undefined) || (catFS == undefined)){
      return;}

  if (catT.selectedIndex < 1){
      return;}

  i = catT.selectedIndex;

  // If Resident Status - Cat T ind4=R then
  // default Patient Folder Colour - Cat FS to the first code where ind1=8
  if (catT.options[i].value.substr(6,1) == "R") {
      for (var j =0 ; j < catFS.length; j++) {
        if (catFS.options[j].value.substr(3,1) == "8") {
            catFS.selectedIndex = j;
            return;} }
  }

  // If Resident Status - Cat T ind1=2 then
  // default Patient Folder Colour - Cat FS to the first code where ind1=6
  if (catT.options[i].value.substr(3,1) == "2") {
      for (var j =0 ; j < catFS.length; j++) {
        if (catFS.options[j].value.substr(3,1) == "6") {
            catFS.selectedIndex = j;
            return;} }
  }
}

function NoEmailOptOutHEA(){
  emailaddress = document.getElementById('pmpmi005');
  emailoptout = document.getElementById('d_ptmas045');

  if ((emailaddress == undefined) || (emailoptout == undefined )){
      return;}

  if (emailoptout.checked==true) {
    //emailaddress.className="";
    RemoveClassName(emailaddress,"Mandatory");
  }
  else {
    //emailaddress.className="Mandatory";
    AddClassName(emailaddress,"Mandatory");
  }
}

function SetNoEmailOptoutValHEA(){
  emailoptout = document.getElementById('d_ptmas045');
  emailoptoutField = document.getElementById('ptmas045');

  if ((emailoptout == undefined) || (emailoptoutField == undefined)){
      return;}

 //Set the value for patma1af.PUYN1
  if(emailoptout.checked==true){
     emailoptoutField.value="1"}
  else {
     emailoptoutField.value="0"}

}

function SetMedicardQHEA(deceased){
  catT  = document.getElementById('ptmas021');
  medicardQ = document.getElementById('medicard');

  if ((catT == undefined) || (medicardQ == undefined)){
      return;}

  // If patient is deceased then regardless of resident status then
  // do not prompt 'Does this patient have a Medicare Card?' question
  if (deceased=="Yes" || deceased=="true"){
      //medicardQ.className="";
      RemoveClassName(medicardQ,"Mandatory");
      return;
  }

  if (catT.selectedIndex < 1){
      //medicardQ.className="Mandatory";
      AddClassName(medicardQ,"Mandatory");
      return;
  }

  i = catT.selectedIndex;

  // If Resident Status - Cat T ind1=2 (Non-resident) then
  // do not prompt 'Does this patient have a Medicare Card?' question
  if (catT.options[i].value.substr(3,1) == "2") {
      //medicardQ.className="";
      RemoveClassName(medicardQ,"Mandatory");
  }
  else {
      //medicardQ.className="Mandatory";
      AddClassName(medicardQ,"Mandatory");
  }
}

function valPatTypeHEA(deceased){
  SetMedicardQHEA(deceased);
  DefPatFolderHEA();
}

//T0879283-end
//---------------------------------------------------------------------------

//========================================================================
// Validate NDIS number - must start with 43 and numbers
//========================================================================
function checkNdisNumber(theField) {
  if (isWhitespace(theField.value)) {
    return;}

  var agentStr = window.navigator.userAgent;

  tvalue = theField.value;
  first2 = tvalue.substr(0,2);
  if (first2!="43") {
    alert(theField.title + " - First two character must be 43.")
    // For Chrome use Focus Delay to prevent looping
    if (agentStr.indexOf("Chrome") != -1) {
      FocusDelay(theField);
    }
    else {
      theField.focus();
      CancelEvent();
    }
    return false;
  }

  if (!checkNumber(theField)) {
    // For Chrome use Focus Delay to prevent looping
    if (agentStr.indexOf("Chrome") != -1) {
      FocusDelay(theField);
    }
    else {
      theField.focus();
      CancelEvent();
    }
    return false;
  }

  return true;
}
//-----------------------------------------------------------------------------
//=============================================================================
// Setting up HTML based on Preferred Name Option
//=============================================================================
function setUpHTMLPreferredName(displayNameOption, htmlBlock) {
  var preGiven=document.getElementById("preferredGiven");
  var preSurname=document.getElementById("preferredSurname");
  var appendNormal=document.getElementById("pno");
  var appendType=''; 
  switch (displayNameOption) {
    case "0":
      appendType = appendNormal;
      break;
    case "1":
      preGiven.style.display = "";
      appendType = preGiven;
      break;
    case "2":
      preSurname.style.display = "";
      appendType = preSurname;
      break;
    case "3":
      preGiven.style.display = "";
      preSurname.style.display = "";
      appendType = preGiven;
      break;
    default:
      appendType = appendNormal;
      break;
  }
  for (var i = 0; i < htmlBlock.length; i++) {
    if (i % 2 == 0) {
      htmlBlock[i].classList = "DataLabel";
    }
    appendType.appendChild(htmlBlock[i]);
  } 
}
//==========================================================================
// Check Identifying Gender, Pronoun details and title
//==========================================================================
function ChkIdentifyGenderPronounTitle(f) {
  ind10 = f.ptmas015.value.substr(12,1);
  if (ind10 != 'N'){
    AddClassName('ptmas001',"Mandatory");
  }
  else {
    RemoveClassName('ptmas001',"Mandatory");
  }

  ChkIdentifyGenderPronoun(f); 
}
//==========================================================================
// Check Identifying Gender, Pronoun details and title
//==========================================================================
function ChkIdentifyGenderPronounTitle1(f) {
  ind10 = f.ptmas015.value.substr(12,1);
  if (ind10 != 'N'){
    AddClassName('ptmas001',"Mandatory");
  }
  else {
    RemoveClassName('ptmas001',"Mandatory");
  }

  ChkIdentifyGenderPronoun1(f);
}
//==========================================================================
// Check Identifying Gender and Pronoun details
//==========================================================================
function ChkIdentifyGenderPronoun(f) {
  acode = f.ptmas015.value.substr(0,3);
  ind11 = f.ptmas015.value.substr(13,1);
  ind12 = f.ptmas015.value.substr(28,1);
  ind14 = f.ptmas015.value.substr(30,1);
  ind15 = f.ptmas015.value.substr(31,1);

  if (ind11=="G" || ind12=="P") {
    document.getElementById('GenderExtra').style.display = "";
    ChkIdentifyGender(f,acode,ind11,ind14);
    ChkIdentifyPronoun(f,acode,ind12,ind15);
  }
  else {
    document.getElementById('GenderExtra').style.display = "none";
    IdenGenLbl.innerHTML = idenGenDetailBlank.innerHTML;
    IdenGenDetail.innerHTML = idenGenDetailBlank.innerHTML;
    f.pmpmi125.value = "";
    f.pmpmi126.value = "";
    IdenProLbl.innerHTML = idenProDetailBlank.innerHTML;
    IdenProDetail.innerHTML = idenProDetailBlank.innerHTML;
    f.pmpmi127.value = "";
    f.pmpmi128.value = "";
  }
}
//==========================================================================
// Check Identifying Gender and Pronoun details
//==========================================================================
function ChkIdentifyGenderPronoun1(f) {
  acode = f.ptmas015.value.substr(0,3);
  ind11 = f.ptmas015.value.substr(13,1);
  ind12 = f.ptmas015.value.substr(28,1);
  ind14 = f.ptmas015.value.substr(30,1);
  ind15 = f.ptmas015.value.substr(31,1);

  ChkIdentifyGender(f,acode,ind11,ind14);
  ChkIdentifyPronoun(f,acode,ind12,ind15);
}
//==========================================================================
// Check Identifying Gender
//==========================================================================
function ChkIdentifyGender(f,Acode,Ind11,Ind14) {
  if (Ind11=="G") {
    IdenGenLbl.innerHTML = idenGenLblShow.innerHTML;
    IdenGenDetail.innerHTML = idenGenDetailShow.innerHTML;
    if (Ind14=="X") {
      RemoveClassName('pmpmi125',"Mandatory");
    }
    else {
      AddClassName('pmpmi125',"Mandatory");
    }
    DefaultIdentifyGender(f,Acode);
    ind1 = f.pmpmi125.value.substr(3,1);
    if (ind1=="O") {
      document.getElementById('IdenGenFreeTxt').innerHTML =
        document.getElementById('idenGenFreeTxtShow').innerHTML;
    }
    else {
      document.getElementById('IdenGenFreeTxt').innerHTML =
        document.getElementById('idenGenFreeTxtBlank').innerHTML;
      f.pmpmi126.value = "";
    }
  }
  else {
    IdenGenLbl.innerHTML = idenGenDetailBlank.innerHTML;
    IdenGenDetail.innerHTML = idenGenDetailBlank.innerHTML;
    f.pmpmi125.value = "";
    f.pmpmi126.value = "";
  }
}
//--------------------------------------------------------------------------
//--------------------------------------------------------------------------
function DefaultIdentifyGender(f,Acode) {
  if (f.pmpmi125.selectedIndex != 0) {
    return;
  }

  acat = "G "
  serverURL = "../cgi-bin/comweb81.pbl?reportno=61" +
              "&valdctyp=" + acat.replace(/ /g,"+") +
              "&valdcode=" + Acode.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status == 0) {
    ReturnValue = returnValue.return_value.split("|")
    if (ReturnValue.length > 1) {
      assc11 = trim(ReturnValue[78]);
      if (!isWhitespace(assc11)) {
        foundflg = 0;
        for (var i = 0; i < f.pmpmi125.length; i++) {
          code3 = trim(f.pmpmi125.options[i].value.substr(0,3));
          if (code3 == assc11) {
            f.pmpmi125.selectedIndex = i;
            foundflg = 1;
          }
        }
        if (foundflg == 0) {
          alert("Default Catgory G Associate Field 11 - " + assc11 +
                " not found in catgory Gi.")
        }
      }
    }
  }
}
//==========================================================================
// Check Identifying Pronoun
//==========================================================================
function ChkIdentifyPronoun(f,Acode,Ind12,Ind15) {
  if (Ind12=="P") {
    IdenProLbl.innerHTML = idenProLblShow.innerHTML;
    IdenProDetail.innerHTML = idenProDetailShow.innerHTML;
    if (Ind15=="X") {
      RemoveClassName('pmpmi127',"Mandatory");
    }
    else {
      AddClassName('pmpmi127',"Mandatory");
    }
    DefaultIdentifyPronoun(f,Acode);
    ind1 = f.pmpmi127.value.substr(3,1);
    if (ind1=="O") {
      document.getElementById('IdenProFreeTxt').innerHTML =
        document.getElementById('idenProFreeTxtShow').innerHTML;
    }
    else {
      document.getElementById('IdenProFreeTxt').innerHTML =
        document.getElementById('idenProFreeTxtBlank').innerHTML;
      f.pmpmi128.value = "";
    }
  }
  else {
    IdenProLbl.innerHTML = idenProDetailBlank.innerHTML;
    IdenProDetail.innerHTML = idenProDetailBlank.innerHTML;
    f.pmpmi127.value = "";
    f.pmpmi128.value = "";
  }
}
function DefaultIdentifyPronoun(f,Acode) {
  if (f.pmpmi127.selectedIndex != 0) {
    return;
  }

  acat = "G "
  serverURL = "../cgi-bin/comweb81.pbl?reportno=61" +
              "&valdctyp=" + acat.replace(/ /g,"+") +
              "&valdcode=" + Acode.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status == 0) {
    ReturnValue = returnValue.return_value.split("|")
    if (ReturnValue.length > 1) {
      assc12 = trim(ReturnValue[79]);
      if (!isWhitespace(assc12)) {
        foundflg = 0;
        for (var i = 0; i < f.pmpmi127.length; i++) {
          code3 = trim(f.pmpmi127.options[i].value.substr(0,3));
          if (code3 == assc12) {
            f.pmpmi127.selectedIndex = i;
            foundflg = 1;
          }
        }
        if (foundflg == 0) {
          alert("Default Catgory G Associate Field 12 - " + assc12 +
                " not found in catgory Gp.")
        }
      }
    }
  }
}
//==========================================================================
// Identifying Gender changed
//==========================================================================
function IdenGenderChange(f) {
  ind1 = f.pmpmi125.value.substr(3,1);
  if (ind1=="O") {
    document.getElementById('IdenGenFreeTxt').innerHTML =
      document.getElementById('idenGenFreeTxtShow').innerHTML;
  }
  else {
    document.getElementById('IdenGenFreeTxt').innerHTML =
      document.getElementById('idenGenFreeTxtBlank').innerHTML;
    f.pmpmi126.value = "";
  }
}
//==========================================================================
// Identifying Pronoun changed
//==========================================================================
function IdenPronounChange(f) {
  ind1 = f.pmpmi127.value.substr(3,1);
  if (ind1=="O") {
    document.getElementById('IdenProFreeTxt').innerHTML =
      document.getElementById('idenProFreeTxtShow').innerHTML;
  }
  else {
    document.getElementById('IdenProFreeTxt').innerHTML =
      document.getElementById('idenProFreeTxtBlank').innerHTML;
    f.pmpmi128.value = "";
  }
}

