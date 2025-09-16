//jsVersion  : V11.03.00
//========================================================================
// Program   : outweb0901002.js     
//
// Function  : Standard Functions Used in outweb0901002 templates 
//
// Version   :
//             V10.03.02 08/03/2013  Patrick Adair CAR 282356
//                       Added CheckValPostCode() and associated calls
//             V10.03.01 15/12/2011  Mike Laming    CAR 257259
//                       Add "trim" to all tests for Postcode "8888"
//             V10.02.02 06/10/2011 Ebon Clements  CAR 251849
//                       Added otdem048 to MandatoryNOK()
//             V10.02.01 03/10/2011 Ebon Clements  CAR 251845
//                       Added MandatoryPostal and MandatoryNOK()
//             V10.02.00 29/08/2011 Ebon Clements  CAR 242014
//                       Created js
//========================================================================
//
function confirmDeath01(deathDate,title) {
  if(isWhitespace(document.AddForm.otdem026.value)) {
      document.AddForm.otdem026.value="";
      document.AddForm.otdem027.className="Readonly";
      document.AddForm.otdem027.selectedIndex=0;
      document.AddForm.otdem027.disabled=true;
      document.AddForm.d_otdem028.checked=false;
      document.AddForm.d_otdem028.disabled=false;
      return;
  }
  if (checkDate(deathDate,title)) {
    if (!confirm("Deceased Patient?")) {
      document.AddForm.otdem026.value="";
      document.AddForm.otdem027.className="Readonly";
      document.AddForm.otdem027.selectedIndex=0;
      document.AddForm.otdem027.disabled=true;
      document.AddForm.d_otdem028.checked=false;
      document.AddForm.d_otdem028.disabled=false;
    }else {
     document.AddForm.otdem027.disabled=false;
     document.AddForm.otdem027.className="Mandatory";
     document.AddForm.d_otdem028.checked=false;
     document.AddForm.d_otdem028.disabled=true;
   }
  }
}
function confirmDeath02 (){
  if(!confirm("Deceased Patient?")) {
     document.AddForm.otdem026.value="";
     document.AddForm.otdem027.className="Readonly";
     document.AddForm.otdem027.selectedIndex=0;
     document.AddForm.otdem027.disabled=true;
     document.AddForm.d_otdem028.checked=false;
     document.AddForm.d_otdem028.disabled=false;
  }else {
     document.AddForm.otdem026.value="";
     document.AddForm.otdem027.disabled=false;
     document.AddForm.otdem027.className="Mandatory";
     document.AddForm.d_otdem028.disabled=false;
  }
}
function setDeath() {
  if(!isWhitespace(document.AddForm.otdem026.value)) {
     document.AddForm.otdem027.disabled=false;
     document.AddForm.otdem027.className="Mandatory";
     document.AddForm.d_otdem028.checked=false;
     document.AddForm.d_otdem028.disabled=true;
  }
  if(document.AddForm.d_otdem028.checked==true) {
     document.AddForm.otdem027.disabled=false;
     document.AddForm.otdem027.className="Mandatory";
     document.AddForm.d_otdem028.disabled=false;
  }
}
function SetPostVars() {
 suburb   = document.AddForm.otdem019;
 state    = document.AddForm.otdem020;
 postcode = document.AddForm.otdem021;
}
function SetPostVarsP() {
 suburb   = document.AddForm.otdem036;
 state    = document.AddForm.otdem037;
 postcode = document.AddForm.otdem038;
}
function SetPostVarsN() {
 suburb   = document.AddForm.otdem051;
 state    = document.AddForm.otdem052;
 postcode = document.AddForm.otdem053;
}
function ReadOnlyPost() {
 if(isWhitespace(document.AddForm.otdem029.value)) {
   document.AddForm.oseaspos.disabled=true;
   document.AddForm.otdem034.className="Readonly";
   document.AddForm.otdem034.readOnly=true;
   document.AddForm.otdem035.className="Readonly";
   document.AddForm.otdem035.readOnly=true;
   document.AddForm.otdem036.className="Readonly";
   document.AddForm.otdem036.readOnly=true;
   if(document.AddForm.otdem037!=undefined) {
     document.AddForm.otdem037.className="Readonly";
     document.AddForm.otdem037.readOnly=true;
     document.AddForm.otdem037.disabled=true;
   }
   document.AddForm.otdem038.className="Readonly";
   document.AddForm.otdem038.readOnly=true;
 }
}
function ReadOnlyNOK() {
 if(isWhitespace(document.AddForm.otdem044.value)) {
   document.AddForm.oseasnok.disabled=true;
   document.AddForm.otdem044.className="Readonly";
   document.AddForm.otdem044.readOnly=true;
   document.AddForm.otdem045.className="Readonly";
   document.AddForm.otdem045.readOnly=true;
   document.AddForm.otdem046.className="Readonly";
   document.AddForm.otdem046.readOnly=true;
   document.AddForm.otdem047.className="Readonly";
   document.AddForm.otdem047.readOnly=true;
   document.AddForm.otdem048.className="Readonly";
   document.AddForm.otdem048.readOnly=true;
   document.AddForm.otdem049.className="Readonly";
   document.AddForm.otdem049.readOnly=true;
   document.AddForm.otdem050.className="Readonly";
   document.AddForm.otdem050.readOnly=true;
   document.AddForm.otdem051.className="Readonly";
   document.AddForm.otdem051.readOnly=true;
   if(document.AddForm.otdem052!=undefined) {
     document.AddForm.otdem052.className="Readonly";
     document.AddForm.otdem052.readOnly=true;
     document.AddForm.otdem052.disabled=true;
   }
   document.AddForm.otdem053.className="Readonly";
   document.AddForm.otdem053.readOnly=true;
   document.AddForm.otdem054.className="Readonly";
   document.AddForm.otdem054.readOnly=true;
   document.AddForm.otdem055.className="Readonly";
   document.AddForm.otdem055.readOnly=true;
   document.AddForm.otdem056.className="Readonly";
   document.AddForm.otdem056.readOnly=true;
   document.AddForm.otdem057.className="Readonly";
   document.AddForm.otdem057.readOnly=true;
   document.AddForm.otdem058.className="Readonly";
   document.AddForm.otdem058.readOnly=true;
 }
}
function checkOverseas() {
  if (trim(document.AddForm.otdem021.value)=="8888") {
    document.AddForm.oseasflg.checked=true;
  } else {
    document.AddForm.oseasflg.checked=false;
  }
  setAddrLine4(AddForm);
}
function checkOverseasP() {
  if (trim(document.AddForm.otdem038.value)=="8888") {
    document.AddForm.oseaspos.checked=true;
  } else {
    document.AddForm.oseaspos.checked=false;
  }
  setAddrLine4P(AddForm);
}
function checkOverseasN() {
  if (trim(document.AddForm.otdem053.value)=="8888") {
    document.AddForm.oseasnok.checked=true;
  } else {
    document.AddForm.oseasnok.checked=false;
  }
  setAddrLine4N(AddForm);
}
function SetPostCode01() {
 SetPostVars();
 if (document.AddForm.oseasflg!=undefined) {
    if (trim(postcode.value)=="8888") {
       document.AddForm.oseasflg.checked=true;
    } else {
       document.AddForm.oseasflg.checked=false;
    }
    setAddrLine4(AddForm)
 }
}
function SetPostCode01P() {
 SetPostVarsP();
 if (document.AddForm.oseaspos!=undefined) {
    if (trim(postcode.value)=="8888") {
       document.AddForm.oseaspos.checked=true;
    } else {
       document.AddForm.oseaspos.checked=false;
    }
    setAddrLine4P(AddForm)
 }
 ReadOnlyPost()
}
function SetPostCode01N() {
 SetPostVarsN();
 if (document.AddForm.oseasnok!=undefined) {
    if (trim(postcode.value)=="8888") {
       document.AddForm.oseasnok.checked=true;
    } else {
       document.AddForm.oseasnok.checked=false;
    }
    setAddrLine4N(AddForm)
 }
 ReadOnlyNOK()
}
function setAddrLine4(theForm) {
  if (theForm.oseasflg.checked==1) {
     AddressLine4H.innerHTML=OseasCountryH.innerHTML
     AddressLine4.innerHTML=OseasCountry.innerHTML
     SetCategoryC_(theForm.otdem020)

 for (var i =0 ; i < document.AddForm.otdem020.length; i++) {
  if (trim(document.AddForm.otdem020.options[i].innerHTML)==
      trim(document.AddForm.d_otdem020.value)) {
       document.AddForm.otdem020.selectedIndex=i } };
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
     SetCategoryC_(theForm.otdem037)
 for (var i =0 ; i < document.AddForm.otdem037.length; i++) {
  if (trim(document.AddForm.otdem037.options[i].innerHTML)==
      trim(document.AddForm.d_otdem037.value)) {
       document.AddForm.otdem037.selectedIndex=i } };

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
     SetCategoryC_(theForm.otdem052)
 for (var i =0 ; i < document.AddForm.otdem052.length; i++) {
  if (trim(document.AddForm.otdem052.options[i].innerHTML)==
      trim(document.AddForm.d_otdem052.value)) {
       document.AddForm.otdem052.selectedIndex=i } };

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
function ClickAddButton() {
  if(!validateMandatory(document.AddForm)) {
    return;
  }
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
  if(!checkMedicare(AddForm.otdem011)) {
    return;
  }
//
  CheckLeadingSpace(document.AddForm.otdem005);
  if(ans==false){
     return;}
  CheckLeadingSpace(document.AddForm.otdem006);
  if(ans==false){
     return;}
  CheckLeadingSpace(document.AddForm.otdem007);
  if(ans==false){
     return;}
   ValMedicare01();
  if (document.AddForm.otdem012.value==9) {
      if(!confirm("Warning: medicare reference is 9")) {
      return;
      }
  }
//
  if(document.AddForm.d_otdem028.checked==true) {
    document.AddForm.otdem028.value="1";
  } else {
    document.AddForm.otdem028.value="0";
  }
  document.AddForm.otdem027.disabled=false;
  document.AddForm.updttype.value="A";
  SubmitHidden(AddForm);
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
  Input=document.AddForm.otdem009.value
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
    if (!isWhitespace(document.AddForm.otdem011.value)) {
      if (document.AddForm.otdem012.value=="0" ||
          document.AddForm.otdem012.value==" 0") {
      ans=confirm("Warning : patient greater than 6 months, zero medicare reference");
      if (ans==false) {
          document.AddForm.otdem012.value="";
          document.AddForm.otdem012.focus();
          return; }
        }
      }
   }
   if (!isWhitespace(document.AddForm.otdem011.value)) {
     if (isWhitespace(document.AddForm.otdem012.value)) {
       ans=confirm("Warning : no medicare reference number entered");
       if (ans==false) {
       document.AddForm.otdem012.focus();
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
 if(isWhitespace(document.AddForm.otdem082.value)) {
   document.AddForm.otdem014.value="";
   document.AddForm.otdem014.className="Readonly";
   document.AddForm.otdem014.disabled=true;
   document.AddForm.otdem015.value="";
   document.AddForm.otdem015.className="Readonly";
   document.AddForm.otdem015.disabled=true;
   document.AddForm.otdem016.value="";
   document.AddForm.otdem016.className="Readonly";
   document.AddForm.otdem016.disabled=true;
 } else {
   MandatoryDVA()
 }
}
function MandatoryDVA() {
  if(isWhitespace(document.AddForm.otdem014.value) &&
     isWhitespace(document.AddForm.otdem015.value) &&
     isWhitespace(document.AddForm.otdem016.value)) {
     document.AddForm.otdem014.className="";
     document.AddForm.otdem014.disabled=false;
     document.AddForm.otdem015.className="";
     document.AddForm.otdem015.disabled=false;
     document.AddForm.otdem016.className="";
     document.AddForm.otdem016.disabled=false;
     return;
  }
  document.AddForm.otdem014.className="Mandatory";
  document.AddForm.otdem014.disabled=false;
  document.AddForm.otdem015.className="Mandatory";
  document.AddForm.otdem015.disabled=false;
  document.AddForm.otdem016.className="Mandatory";
  document.AddForm.otdem016.disabled=false;
}
function ReadOnlySafety() {
 if(isWhitespace(document.AddForm.otdem081.value)) {
   document.AddForm.otdem079.value="";
   document.AddForm.otdem079.className="Readonly";
   document.AddForm.otdem079.disabled=true;
   document.AddForm.otdem080.value="";
   document.AddForm.otdem080.className="Readonly";
   document.AddForm.otdem080.disabled=true;
 } else {
   MandatorySafety();
 }
}
function MandatorySafety() {
  if(isWhitespace(document.AddForm.otdem079.value) &&
     isWhitespace(document.AddForm.otdem080.value)) {
     document.AddForm.otdem079.className="";
     document.AddForm.otdem079.disabled=false;
     document.AddForm.otdem080.className="";
     document.AddForm.otdem080.disabled=false;
     return;
  }
  document.AddForm.otdem079.className="Mandatory";
  document.AddForm.otdem079.disabled=false;
  document.AddForm.otdem080.className="Mandatory";
  document.AddForm.otdem080.disabled=false;
}
function MandatoryPostal() {
  if(!isWhitespace(document.AddForm.otdem034.value) ||
     !isWhitespace(document.AddForm.otdem035.value) ||
     !isWhitespace(document.AddForm.otdem036.value) ||
     !isWhitespace(document.AddForm.otdem037.value) ||
     !isWhitespace(document.AddForm.otdem038.value)) {
    document.AddForm.otdem034.className="Mandatory";
    document.AddForm.otdem036.className="Mandatory";
    document.AddForm.otdem038.className="Mandatory";
  } else {
    document.AddForm.otdem034.className="";
    document.AddForm.otdem036.className="";
    document.AddForm.otdem038.className="";
  }
}
function MandatoryNOK() {
  if(!isWhitespace(document.AddForm.otdem045.value) ||
     !isWhitespace(document.AddForm.otdem046.value) ||
     !isWhitespace(document.AddForm.otdem047.value) ||
     !isWhitespace(document.AddForm.otdem048.value) ||
     !isWhitespace(document.AddForm.otdem049.value) ||
     !isWhitespace(document.AddForm.otdem050.value) ||
     !isWhitespace(document.AddForm.otdem051.value) ||
     !isWhitespace(document.AddForm.otdem052.value) ||
     !isWhitespace(document.AddForm.otdem053.value) ||
     !isWhitespace(document.AddForm.otdem054.value) ||
     !isWhitespace(document.AddForm.otdem055.value) ||
     !isWhitespace(document.AddForm.otdem056.value) ||
     !isWhitespace(document.AddForm.otdem057.value) ||
     !isWhitespace(document.AddForm.otdem058.value) ||
     document.AddForm.oseasnok.checked==true) {
    document.AddForm.otdem045.className="Mandatory";
    document.AddForm.otdem046.className="Mandatory";
    document.AddForm.otdem047.className="Mandatory";
    document.AddForm.otdem057.className="Mandatory";
  } else {
    document.AddForm.otdem045.className="";
    document.AddForm.otdem046.className="";
    document.AddForm.otdem047.className="";
    document.AddForm.otdem057.className="";
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
