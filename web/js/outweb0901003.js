//jsVersion  : V11.03.00
//========================================================================
// Program   : outweb0901003.js     
//
// Function  : Standard Functions Used in outweb0901003 templates 
//
// Version   :
//             V10.03.03 08/03/2013  Patrick Adair CAR 282356
//                       Added CheckValPostCode() and associated calls
//             V10.03.02 11/01/2012  Ebon Clements  CAR 253762
//                       Fixed js error from trim postcode
//             V10.03.01 15/12/2011  Mike Laming    CAR 257259
//                       Add "trim" to all tests for Postcode "8888"
//             V10.02.02 06/10/2011 Ebon Clements  CAR 251849
//                       Added otdem048 to MandatoryNOK()
//             V10.02.01 03/20/2011 Ebon Clements  CAR 251845
//                       Added MandatoryPostal and MandatoryNOK
//             V10.02.00 29/08/2011 Ebon Clements  CAR 242014
//                       Created js
//========================================================================
//
function confirmDeath01(deathDate,title) {
  if(isWhitespace(document.UpdateForm.otdem026.value)) {
      document.UpdateForm.otdem026.value="";
      document.UpdateForm.otdem027.className="Readonly";
      document.UpdateForm.otdem027.selectedIndex=0;
      document.UpdateForm.otdem027.disabled=true;
      document.UpdateForm.d_otdem028.checked=false;
      document.UpdateForm.d_otdem028.disabled=false;
      return;
  }
  if (checkDate(deathDate,title)) {
    if (!confirm("Deceased Patient?")) {
      document.UpdateForm.otdem026.value="";
      document.UpdateForm.otdem027.className="Readonly";
      document.UpdateForm.otdem027.selectedIndex=0;
      document.UpdateForm.otdem027.disabled=true;
      document.UpdateForm.d_otdem028.checked=false;
      document.UpdateForm.d_otdem028.disabled=false;
    }else {
     document.UpdateForm.otdem027.disabled=false;
     document.UpdateForm.otdem027.className="Mandatory";
     document.UpdateForm.d_otdem028.checked=false;
     document.UpdateForm.d_otdem028.disabled=true;
   }
  }
}
function confirmDeath02 (){
  if(!confirm("Deceased Patient?")) {
     document.UpdateForm.otdem026.value="";
     document.UpdateForm.otdem027.className="Readonly";
     document.UpdateForm.otdem027.selectedIndex=0;
     document.UpdateForm.otdem027.disabled=true;
     document.UpdateForm.d_otdem028.checked=false;
     document.UpdateForm.d_otdem028.disabled=false;
  }else {
     document.UpdateForm.otdem026.value="";
     document.UpdateForm.otdem027.disabled=false;
     document.UpdateForm.otdem027.className="Mandatory";
     document.UpdateForm.d_otdem028.disabled=false;
  }
}
function setDeath() {
  if(!isWhitespace(document.UpdateForm.otdem026.value)) {
     document.UpdateForm.otdem027.disabled=false;
     document.UpdateForm.otdem027.className="Mandatory";
     document.UpdateForm.d_otdem028.checked=false;
     document.UpdateForm.d_otdem028.disabled=true;
  }
  if(document.UpdateForm.d_otdem028.checked==true) {
     document.UpdateForm.otdem027.disabled=false;
     document.UpdateForm.otdem027.className="Mandatory";
     document.UpdateForm.d_otdem028.disabled=false;
  }
}
function SetPostVars() {
 suburb   = document.UpdateForm.otdem019;
 state    = document.UpdateForm.otdem020;
 postcode = document.UpdateForm.otdem021;
}
function SetPostVarsP() {
 suburb   = document.UpdateForm.otdem036;
 state    = document.UpdateForm.otdem037;
 postcode = document.UpdateForm.otdem038;
}
function SetPostVarsN() {
 suburb   = document.UpdateForm.otdem051;
 state    = document.UpdateForm.otdem052;
 postcode = document.UpdateForm.otdem053;
}
function ReadOnlyPost() {
 if(isWhitespace(document.UpdateForm.otdem029.value)) {
   document.UpdateForm.oseaspos.disabled=true;
   document.UpdateForm.otdem034.className="Readonly";
   document.UpdateForm.otdem034.readOnly=true;
   document.UpdateForm.otdem035.className="Readonly";
   document.UpdateForm.otdem035.readOnly=true;
   document.UpdateForm.otdem036.className="Readonly";
   document.UpdateForm.otdem036.readOnly=true;
   if(document.UpdateForm.otdem037!=undefined) {
     document.UpdateForm.otdem037.className="Readonly";
     document.UpdateForm.otdem037.readOnly=true;
     document.UpdateForm.otdem037.disabled=true;
   }
   document.UpdateForm.otdem038.className="Readonly";
   document.UpdateForm.otdem038.readOnly=true;
 }
}
function ReadOnlyNOK() {
 if(isWhitespace(document.UpdateForm.otdem044.value)) {
   document.UpdateForm.oseasnok.disabled=true;
   document.UpdateForm.otdem044.className="Readonly";
   document.UpdateForm.otdem044.readOnly=true;
   document.UpdateForm.otdem045.className="Readonly";
   document.UpdateForm.otdem045.readOnly=true;
   document.UpdateForm.otdem046.className="Readonly";
   document.UpdateForm.otdem046.readOnly=true;
   document.UpdateForm.otdem047.className="Readonly";
   document.UpdateForm.otdem047.readOnly=true;
   document.UpdateForm.otdem048.className="Readonly";
   document.UpdateForm.otdem048.readOnly=true;
   document.UpdateForm.otdem049.className="Readonly";
   document.UpdateForm.otdem049.readOnly=true;
   document.UpdateForm.otdem050.className="Readonly";
   document.UpdateForm.otdem050.readOnly=true;
   document.UpdateForm.otdem051.className="Readonly";
   document.UpdateForm.otdem051.readOnly=true;
   if(document.UpdateForm.otdem052!=undefined) {
     document.UpdateForm.otdem052.className="Readonly";
     document.UpdateForm.otdem052.readOnly=true;
     document.UpdateForm.otdem052.disabled=true;
   }
   document.UpdateForm.otdem053.className="Readonly";
   document.UpdateForm.otdem053.readOnly=true;
   document.UpdateForm.otdem054.className="Readonly";
   document.UpdateForm.otdem054.readOnly=true;
   document.UpdateForm.otdem055.className="Readonly";
   document.UpdateForm.otdem055.readOnly=true;
   document.UpdateForm.otdem056.className="Readonly";
   document.UpdateForm.otdem056.readOnly=true;
   document.UpdateForm.otdem057.className="Readonly";
   document.UpdateForm.otdem057.readOnly=true;
   document.UpdateForm.otdem058.className="Readonly";
   document.UpdateForm.otdem058.readOnly=true;
 }
}
function checkOverseas() {
  if (trim(document.UpdateForm.otdem021.value)=="8888") {
    document.UpdateForm.oseasflg.checked=true;
  } else {
    document.UpdateForm.oseasflg.checked=false;
  }
  setAddrLine4(UpdateForm);
}
function checkOverseasP() {
  if (trim(document.UpdateForm.otdem038.value)=="8888") {
    document.UpdateForm.oseaspos.checked=true;
  } else {
    document.UpdateForm.oseaspos.checked=false;
  }
  setAddrLine4P(UpdateForm);
}
function checkOverseasN() {
  if (trim(document.UpdateForm.otdem053.value)=="8888") {
    document.UpdateForm.oseasnok.checked=true;
  } else {
    document.UpdateForm.oseasnok.checked=false;
  }
  setAddrLine4N(UpdateForm);
}
function SetPostCode01() {
 SetPostVars();
 if (document.UpdateForm.oseasflg!=undefined) {
    if (trim(postcode.value)=="8888") {
       document.UpdateForm.oseasflg.checked=true;
    } else {
       document.UpdateForm.oseasflg.checked=false;
    }
    setAddrLine4(UpdateForm)
 }
}
function SetPostCode01P() {
 SetPostVarsP();
 if (document.UpdateForm.oseaspos!=undefined) {
    if (trim(postcode.value)=="8888") {
       document.UpdateForm.oseaspos.checked=true;
    } else {
       document.UpdateForm.oseaspos.checked=false;
    }
    setAddrLine4P(UpdateForm)
 }
 ReadOnlyPost()
}
function SetPostCode01N() {
 SetPostVarsN();
 if (document.UpdateForm.oseasnok!=undefined) {
    if (trim(postcode.value)=="8888") {
       document.UpdateForm.oseasnok.checked=true;
    } else {
       document.UpdateForm.oseasnok.checked=false;
    }
    setAddrLine4N(UpdateForm)
 }
 ReadOnlyNOK()
}
function setAddrLine4(theForm) {
  if (theForm.oseasflg.checked==1) {
     AddressLine4H.innerHTML=OseasCountryH.innerHTML
     AddressLine4.innerHTML=OseasCountry.innerHTML
     SetCategoryC_(theForm.otdem020,theForm.d_otdem020.value.substr(0,3))
     if (trim(theForm.otdem021.value)!="8888") {
         theForm.otdem020.value="";
         theForm.otdem021.value="8888";
     }
  } else {
     AddressLine4H.innerHTML=AustStateH.innerHTML
     AddressLine4.innerHTML=AustState.innerHTML
     if (trim(theForm.otdem021.value)=="8888") {
         theForm.otdem020.value="";
         theForm.otdem021.value="";
     }
  }
  state = theForm.otdem020;
}
function setAddrLine4P(theForm) {
  if (theForm.oseaspos.checked==1) {
     AddressLine4HP.innerHTML=OseasCountryHP.innerHTML
     AddressLine4P.innerHTML=OseasCountryP.innerHTML
     SetCategoryC_(theForm.otdem037,theForm.d_otdem037.value.substr(0,3))
     if (trim(theForm.otdem038.value)!="8888") {
         theForm.otdem037.value="";
         theForm.otdem038.value="8888";
     }
  } else {
     AddressLine4HP.innerHTML=AustStateHP.innerHTML
     AddressLine4P.innerHTML=AustStateP.innerHTML
     if (trim(theForm.otdem038.value)=="8888") {
         theForm.otdem037.value="";
         theForm.otdem038.value="";
     }
  }
  state = theForm.otdem037;
}
function setAddrLine4N(theForm) {
  if (theForm.oseasnok.checked==1) {
     AddressLine4HN.innerHTML=OseasCountryHN.innerHTML
     AddressLine4N.innerHTML=OseasCountryN.innerHTML
     SetCategoryC_(theForm.otdem052,theForm.d_otdem052.value.substr(0,3))
     if (trim(theForm.otdem053.value)!="8888") {
         theForm.otdem052.value="";
         theForm.otdem053.value="8888";
     }
  } else {
     AddressLine4HN.innerHTML=AustStateHN.innerHTML
     AddressLine4N.innerHTML=AustStateN.innerHTML
     if (trim(theForm.otdem053.value)=="8888") {
         theForm.otdem052.value="";
         theForm.otdem053.value="";
     }
  }
  state = theForm.otdem052;
}
function ClickUpdButton() {
  SetPostVars();
  if (!CheckValPostCode())
     { alert("Invalid Home Suburb/Post Code Combination");
       return; }
  SetPostVarsP();
  if (!CheckValPostCode())
     { alert("Invalid Postal Suburb/Post Code Combination");
       return; }
  SetPostVarsN();
  if (!CheckValPostCode())
     { alert("Invalid Next Of Kin Suburb/Post Code Combination");
       return; }

  if(!validateMandatory(document.UpdateForm)) {
    return;
  }
  if(!checkMedicare(UpdateForm.otdem011)) {
    return;
  }
//
  CheckLeadingSpace(document.UpdateForm.otdem005);
  if(ans==false){
     return;}
  CheckLeadingSpace(document.UpdateForm.otdem006);
  if(ans==false){
     return;}
  CheckLeadingSpace(document.UpdateForm.otdem007);
  if(ans==false){
     return;}
   ValMedicare01();
  if (document.UpdateForm.otdem012.value==9) {
      if(!confirm("Warning: medicare reference is 9")) {
      return;
      }
  }
//
  if(document.UpdateForm.d_otdem028.checked==true) {
    document.UpdateForm.otdem028.value="1";
  } else {
    document.UpdateForm.otdem028.value="0";
  }
  document.UpdateForm.otdem027.disabled=false;
  document.UpdateForm.updttype.value="U";
  SubmitHidden(UpdateForm);
}
function ClickDeleteButton() {
  if(confirm("Are you sure you want to delete this request?")) {
     document.UpdateForm.updttype.value="D";
     document.UpdateForm.submit();
  }
}
function checkAge(Input,maxage) {
  var mon;
  if (isWhitespace(Input)) {
     return;
  }
  day= Input.substring(0,2)
  year= Input.substring(6,11)
  monstr= Input.substring(3,6)
  if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon=00
  if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon=01
  if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon=02
  if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon=03
  if (monstr=="May" || monstr=="MAY" || monstr=="may") mon=04
  if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon=05
  if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon=06
  if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon=07
  if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon=08
  if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon=09
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
function ValMedicare01() {
  var mon;
  ans="True"
  Input=document.UpdateForm.otdem009.value
  day= Input.substring(0,2)
  year= Input.substring(6,11)
  monstr= Input.substring(3,6)
  if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon=00
  if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon=01
  if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon=02
  if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon=03
  if (monstr=="May" || monstr=="MAY" || monstr=="may") mon=04
  if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon=05
  if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon=06
  if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon=07
  if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon=08
  if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon=09
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
  if (difference > "180") {
    if (!isWhitespace(document.UpdateForm.otdem011.value)) {
      if (document.UpdateForm.otdem012.value=="0" ||
          document.UpdateForm.otdem012.value==" 0") {
      ans=confirm("Warning : patient greater than 6 months, zero medicare reference");
      if (ans==false) {
          document.UpdateForm.otdem012.value="";
          document.UpdateForm.otdem012.focus();
          return; }
        }
      }
   }
   if (!isWhitespace(document.UpdateForm.otdem011.value)) {
     if (isWhitespace(document.UpdateForm.otdem012.value)) {
       ans=confirm("Warning : no medicare reference number entered");
       if (ans==false) {
       document.UpdateForm.otdem012.focus();
       return;
       } 
     }
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
function ReadOnlyDVA() {
 if(isWhitespace(document.UpdateForm.otdem082.value)) {
   document.UpdateForm.otdem014.value="";
   document.UpdateForm.otdem014.className="Readonly";
   document.UpdateForm.otdem014.disabled=true;
   document.UpdateForm.otdem015.value="";
   document.UpdateForm.otdem015.className="Readonly";
   document.UpdateForm.otdem015.disabled=true;
   document.UpdateForm.otdem016.value="";
   document.UpdateForm.otdem016.className="Readonly";
   document.UpdateForm.otdem016.disabled=true;
 } else {
   MandatoryDVA()
 }
}
function MandatoryDVA() {
  if(isWhitespace(document.UpdateForm.otdem014.value) &&
     isWhitespace(document.UpdateForm.otdem015.value) &&
     isWhitespace(document.UpdateForm.otdem016.value)) {
     document.UpdateForm.otdem014.className="";
     document.UpdateForm.otdem014.disabled=false;
     document.UpdateForm.otdem015.className="";
     document.UpdateForm.otdem015.disabled=false;
     document.UpdateForm.otdem016.className="";
     document.UpdateForm.otdem016.disabled=false;
     return;
  }
  document.UpdateForm.otdem014.className="Mandatory";
  document.UpdateForm.otdem014.disabled=false;
  document.UpdateForm.otdem015.className="Mandatory";
  document.UpdateForm.otdem015.disabled=false;
  document.UpdateForm.otdem016.className="Mandatory";
  document.UpdateForm.otdem016.disabled=false;
}
function ReadOnlySafety() {
 if(isWhitespace(document.UpdateForm.otdem081.value)) {
   document.UpdateForm.otdem079.value="";
   document.UpdateForm.otdem079.className="Readonly";
   document.UpdateForm.otdem079.disabled=true;
   document.UpdateForm.otdem080.value="";
   document.UpdateForm.otdem080.className="Readonly";
   document.UpdateForm.otdem080.disabled=true;
 } else {
   MandatorySafety();
 }
}
function MandatorySafety() {
  if(isWhitespace(document.UpdateForm.otdem079.value) &&
     isWhitespace(document.UpdateForm.otdem080.value)) {
     document.UpdateForm.otdem079.className="";
     document.UpdateForm.otdem079.disabled=false;
     document.UpdateForm.otdem080.className="";
     document.UpdateForm.otdem080.disabled=false;
     return;
  }
  document.UpdateForm.otdem079.className="Mandatory";
  document.UpdateForm.otdem079.disabled=false;
  document.UpdateForm.otdem080.className="Mandatory";
  document.UpdateForm.otdem080.disabled=false;
}
function ClickCancel() {
  if(document.UpdateForm.returnfl.value=="1") {
    PatientLinkTo("outweb09.pbl",3,1,0,0);
  } else {
    PatientLinkTo("outweb09.pbl",1,1,0,0);
  }
}
function MandatoryPostal() {
  if(!isWhitespace(document.UpdateForm.otdem034.value) ||
     !isWhitespace(document.UpdateForm.otdem035.value) ||
     !isWhitespace(document.UpdateForm.otdem036.value) ||
     !isWhitespace(document.UpdateForm.otdem037.value) ||
     !isWhitespace(document.UpdateForm.otdem038.value)) {
    document.UpdateForm.otdem034.className="Mandatory";
    document.UpdateForm.otdem036.className="Mandatory";
    document.UpdateForm.otdem038.className="Mandatory";
  } else {
    document.UpdateForm.otdem034.className="";
    document.UpdateForm.otdem036.className="";
    document.UpdateForm.otdem038.className="";
  }
}
function MandatoryNOK() {
  if(!isWhitespace(document.UpdateForm.otdem045.value) ||
     !isWhitespace(document.UpdateForm.otdem046.value) ||
     !isWhitespace(document.UpdateForm.otdem047.value) ||
     !isWhitespace(document.UpdateForm.otdem048.value) ||
     !isWhitespace(document.UpdateForm.otdem049.value) ||
     !isWhitespace(document.UpdateForm.otdem050.value) ||
     !isWhitespace(document.UpdateForm.otdem051.value) ||
     !isWhitespace(document.UpdateForm.otdem052.value) ||
     !isWhitespace(document.UpdateForm.otdem053.value) ||
     !isWhitespace(document.UpdateForm.otdem054.value) ||
     !isWhitespace(document.UpdateForm.otdem055.value) ||
     !isWhitespace(document.UpdateForm.otdem056.value) ||
     !isWhitespace(document.UpdateForm.otdem057.value) ||
     !isWhitespace(document.UpdateForm.otdem058.value) ||
     document.UpdateForm.oseasnok.checked==true) {
    document.UpdateForm.otdem045.className="Mandatory";
    document.UpdateForm.otdem046.className="Mandatory";
    document.UpdateForm.otdem047.className="Mandatory";
    document.UpdateForm.otdem057.className="Mandatory";
  } else {
    document.UpdateForm.otdem045.className="";
    document.UpdateForm.otdem046.className="";
    document.UpdateForm.otdem047.className="";
    document.UpdateForm.otdem057.className="";
  }
}
  function CheckValPostCode() {
    if ((isWhitespace(suburb.value)) &&
        (isWhitespace(postcode.value)))
       { return true; }
    if (trim(postcode.value)=="8888") {
       if (confirm("Click OK to confirm an Overseas Address")) {
          return true; }
       }
    var fulladdress = trim(postcode.value) + "," +
                      trim(suburb.value) + "," +
                      trim(state.value);
    tmp1 = fulladdress.replace(/[-[\]{}()*+?.,\\^$|#\s]/g, " ");
    for (var i =0; i<PC.length ; i++) {
      tmp2 = PC[i].replace(/[-[\]{}()*+?.,\\^$|#\s]/g, " ");
      if  (tmp2.match(tmp1)) {
          SelectPC[SelectPC.length] = PC[i]
          return true;
      }
    }
    return false;
  }
