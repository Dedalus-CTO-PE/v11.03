//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb1004002.js
//
// Written   : 11.04.2006 Ebon Clements 
//
// Function  : Standard Functions Used in patweb10 report 6 template 2
//
// Version   :
//
// V11.01.01 10.05.2021  DA Sarkies       TSK 0905406
//           Changed ID tag to remove case sensitive elements
// V10.02.03 03.10.2011 Ebon Clements  CAR 251884
//           Added CheckAppDate()
// V10.02.02 03.08.2011 Ebon Clements  CAR 247287
//           Added showFundingSource()
// V10.02.01 21.06.2011 Ebon Clements  CAR 242062
//           Added undefined test to pmtsp025 - melway
// V9.12.03  12.02.2010 Ebon Clements  CAR 214121
//           Added returnalt to SamePick()
//           Added SamePick() to AddTransport()
// V9.12.02  10.12.2009 Ebon Clements  CAR 210390
//           Added trim to PickSelf(), PickAlt(), ReturnSelf() and ReturnAlt()
// V9.12.01  24.09.2009 Ebon Clements  CAR 202769
//           Added MandContractor(), PickAlt() and ReturnAlt()
// V9.08.01  17.04.2007 Peter Vela     CAR 138042
//           Commented out className=Mandatory @ CheckM40()
// V9.07.00  12.09.2006 Ebon Clemnet   CAR 110245
//           Fixed wording of error message in AddTransport
// V9.05.00  11.04.2006 Ebon Clements  CAR 89302
//           New Javascript
//========================================================================
function AddTransport() {
  if(isWhitespace(AddForm.pmtsp002.value)) {
    alert("Please select a visit before adding transport details.")
    return;
  }
  if(document.AddForm.d_pmtsp026.checked==true) {
    document.AddForm.pmtsp026.value="1";
  } else {
    document.AddForm.pmtsp026.value="0";
  }
  if(document.AddForm.d_pmtsp040.checked==true) {
    document.AddForm.pmtsp040.value="1";
  } else {
    document.AddForm.pmtsp040.value="0";
  }
  if(document.AddForm.d_pmtsp056!=undefined) {
    if(document.AddForm.d_pmtsp056.checked==true) {
      document.AddForm.pmtsp056.value="1";
    } else {
      document.AddForm.pmtsp056.value="0";
    }
  }
  if(document.AddForm.d_pmtsp046!=undefined) {
    if(document.AddForm.d_pmtsp046.checked==true) {
      document.AddForm.pmtsp046.value="1";
    } else {
      document.AddForm.pmtsp046.value="0";
    }
  }
  if(document.AddForm.d_pmtsp048!=undefined) {
    if(document.AddForm.d_pmtsp048.checked==true) {
      document.AddForm.pmtsp048.value="1";
    } else {
      document.AddForm.pmtsp048.value="0";
    }
  }
  SamePick();
  if(validateMandatory(AddForm)){
    document.AddForm.submit();
  }
}
function CheckAmb() {
  if(document.AddForm.d_pmtsp046.checked==true) {
    document.AddForm.pmtsp047.className="Mandatory";
    document.AddForm.pmtsp047.readOnly=false;
  } else {
    document.AddForm.pmtsp047.className="Readonly";
    document.AddForm.pmtsp047.readOnly=true;
    document.AddForm.pmtsp047.value="";
  }
}
function CheckM40() {
  if(document.AddForm.d_pmtsp048.checked==true) {
    document.AddForm.pmtsp049.className="";
    document.AddForm.pmtsp049.readOnly=false;
  } else {
    document.AddForm.pmtsp049.className="Readonly";
    document.AddForm.pmtsp049.readOnly=true;
    document.AddForm.pmtsp049.value="";
  }
}
function SamePick() {
  if(document.AddForm.d_pmtsp026.checked==true) {
     document.AddForm.pmtsp016.value=document.AddForm.pmtsp006.value
     document.AddForm.pmtsp016.className="ReadOnly";
     document.AddForm.pmtsp016.readOnly=true;
     document.AddForm.pmtsp017.value=document.AddForm.pmtsp007.value
     document.AddForm.pmtsp017.className="ReadOnly";
     document.AddForm.pmtsp017.readOnly=true;
     document.AddForm.pmtsp018.value=document.AddForm.pmtsp008.value
     document.AddForm.pmtsp018.className="ReadOnly";
     document.AddForm.pmtsp018.readOnly=true;
     document.AddForm.pmtsp019.value=document.AddForm.pmtsp009.value
     document.AddForm.pmtsp019.className="ReadOnly";
     document.AddForm.pmtsp019.readOnly=true;
     document.AddForm.pmtsp020.value=document.AddForm.pmtsp010.value
     document.AddForm.pmtsp020.className="ReadOnly";
     document.AddForm.pmtsp020.readOnly=true;
     document.AddForm.pmtsp021.value=document.AddForm.pmtsp011.value
     document.AddForm.pmtsp021.className="ReadOnly";
     document.AddForm.pmtsp021.readOnly=true;
     document.AddForm.pmtsp022.value=document.AddForm.pmtsp012.value
     document.AddForm.pmtsp022.className="ReadOnly";
     document.AddForm.pmtsp022.readOnly=true;
     document.AddForm.pmtsp023.value=document.AddForm.pmtsp013.value
     document.AddForm.pmtsp023.className="ReadOnly";
     document.AddForm.pmtsp023.readOnly=true;
     if(document.AddForm.pmtsp025!=undefined) {
       document.AddForm.pmtsp025.value=document.AddForm.pmtsp015.value
       document.AddForm.pmtsp025.className="ReadOnly";
       document.AddForm.pmtsp025.readOnly=true;
     }
     document.AddForm.returnbut.disabled=true;
     document.AddForm.returndef.disabled=true;
     if(document.AddForm.returnalt!=undefined) {
       document.AddForm.returnalt.disabled=true;
     }
  } else {
     document.AddForm.pmtsp016.className="";
     document.AddForm.pmtsp016.readOnly=false;
     document.AddForm.pmtsp017.className="";
     document.AddForm.pmtsp017.readOnly=false;
     document.AddForm.pmtsp018.className="";
     document.AddForm.pmtsp018.readOnly=false;
     document.AddForm.pmtsp019.className="";
     document.AddForm.pmtsp019.readOnly=false;
     document.AddForm.pmtsp020.className="";
     document.AddForm.pmtsp020.readOnly=false;
     document.AddForm.pmtsp021.className="";
     document.AddForm.pmtsp021.readOnly=false;
     document.AddForm.pmtsp022.className="";
     document.AddForm.pmtsp022.readOnly=false;
     document.AddForm.pmtsp023.className="";
     document.AddForm.pmtsp023.readOnly=false;
     if(document.AddForm.pmtsp025!=undefined) {
       document.AddForm.pmtsp025.className="";
       document.AddForm.pmtsp025.readOnly=false;
     }
     document.AddForm.returnbut.disabled=false;
     document.AddForm.returndef.disabled=false;
     if(document.AddForm.returnalt!=undefined) {
       document.AddForm.returnalt.disabled=false;
     }
  }
}
function PickClear() {
  document.AddForm.pmtsp006.value="";
  document.AddForm.pmtsp007.value="";
  document.AddForm.pmtsp008.value="";
  document.AddForm.pmtsp009.value="";
  document.AddForm.pmtsp010.value="";
  document.AddForm.pmtsp011.value="";
  document.AddForm.pmtsp012.value="";
  document.AddForm.pmtsp013.value="";
  if(document.AddForm.pmtsp015!=undefined) {
    document.AddForm.pmtsp015.value="";
  }
}
function PickSelf() {
  document.AddForm.pmtsp006.value=trim(document.hiddenvalues.padd1.value);
  document.AddForm.pmtsp007.value=trim(document.hiddenvalues.padd2.value);
  document.AddForm.pmtsp008.value=trim(document.hiddenvalues.padd3.value);
  document.AddForm.pmtsp009.value=trim(document.hiddenvalues.padd4.value);
  document.AddForm.pmtsp010.value=trim(document.hiddenvalues.ppost.value);
  document.AddForm.pmtsp011.value=trim(document.hiddenvalues.ptelep.value);
  document.AddForm.pmtsp012.value=trim(document.hiddenvalues.pteleb.value);
  document.AddForm.pmtsp013.value=trim(document.hiddenvalues.ptelem.value);
  if(document.AddForm.pmtsp015!=undefined) {
    document.AddForm.pmtsp015.value="";
  }
}
function PickAlt() {
  document.AddForm.pmtsp006.value=trim(document.hiddenvalues.altpadd1.value);
  document.AddForm.pmtsp007.value=trim(document.hiddenvalues.altpadd2.value);
  document.AddForm.pmtsp008.value=trim(document.hiddenvalues.altpadd3.value);
  document.AddForm.pmtsp009.value=trim(document.hiddenvalues.altpadd4.value);
  document.AddForm.pmtsp010.value=trim(document.hiddenvalues.altppost.value);
  document.AddForm.pmtsp011.value=trim(document.hiddenvalues.ptelep.value);
  document.AddForm.pmtsp012.value=trim(document.hiddenvalues.pteleb.value);
  document.AddForm.pmtsp013.value=trim(document.hiddenvalues.ptelem.value);
  if(document.AddForm.pmtsp015!=undefined) {
    document.AddForm.pmtsp015.value="";
  }
  MandContractor()
}
function ReturnClear() {
  document.AddForm.pmtsp016.value="";
  document.AddForm.pmtsp017.value="";
  document.AddForm.pmtsp018.value="";
  document.AddForm.pmtsp019.value="";
  document.AddForm.pmtsp020.value="";
  document.AddForm.pmtsp021.value="";
  document.AddForm.pmtsp022.value="";
  document.AddForm.pmtsp023.value="";
  if(document.AddForm.pmtsp025!=undefined) {
    document.AddForm.pmtsp025.value="";
  }
}
function MandContractor() {
  if(!isWhitespace(document.AddForm.pmtsp006.value) ||
     !isWhitespace(document.AddForm.pmtsp007.value) ||
     !isWhitespace(document.AddForm.pmtsp008.value) ||
     !isWhitespace(document.AddForm.pmtsp009.value) ||
     !isWhitespace(document.AddForm.pmtsp010.value)) {
    document.AddForm.pmtsp038.className="Mandatory";
  } else {
    document.AddForm.pmtsp038.className="";
  }
  if(!isWhitespace(document.AddForm.pmtsp016.value) ||
     !isWhitespace(document.AddForm.pmtsp017.value) ||
     !isWhitespace(document.AddForm.pmtsp018.value) ||
     !isWhitespace(document.AddForm.pmtsp019.value) ||
     !isWhitespace(document.AddForm.pmtsp020.value)) {
    document.AddForm.pmtsp053.className="Mandatory";
  } else {
    document.AddForm.pmtsp053.className="";
  }
}
function ReturnSelf() {
  document.AddForm.pmtsp016.value=trim(document.hiddenvalues.padd1.value);
  document.AddForm.pmtsp017.value=trim(document.hiddenvalues.padd2.value);
  document.AddForm.pmtsp018.value=trim(document.hiddenvalues.padd3.value);
  document.AddForm.pmtsp019.value=trim(document.hiddenvalues.padd4.value);
  document.AddForm.pmtsp020.value=trim(document.hiddenvalues.ppost.value);
  document.AddForm.pmtsp021.value=trim(document.hiddenvalues.ptelep.value);
  document.AddForm.pmtsp022.value=trim(document.hiddenvalues.pteleb.value);
  document.AddForm.pmtsp023.value=trim(document.hiddenvalues.ptelem.value);
  if(document.AddForm.pmtsp025!=undefined) {
    document.AddForm.pmtsp025.value="";
  }
}
function ReturnAlt() {
  document.AddForm.pmtsp016.value=trim(document.hiddenvalues.altpadd1.value);
  document.AddForm.pmtsp017.value=trim(document.hiddenvalues.altpadd2.value);
  document.AddForm.pmtsp018.value=trim(document.hiddenvalues.altpadd3.value);
  document.AddForm.pmtsp019.value=trim(document.hiddenvalues.altpadd4.value);
  document.AddForm.pmtsp020.value=trim(document.hiddenvalues.altppost.value);
  document.AddForm.pmtsp021.value=trim(document.hiddenvalues.ptelep.value);
  document.AddForm.pmtsp022.value=trim(document.hiddenvalues.pteleb.value);
  document.AddForm.pmtsp023.value=trim(document.hiddenvalues.ptelem.value);
  if(document.AddForm.pmtsp025!=undefined) {
    document.AddForm.pmtsp025.value="";
  }
  MandContractor()
}
function SetFields1() {
  if(isWhitespace(AddForm.pmtsp008.value)){
   return;
  }
  suburb = AddForm.pmtsp008;
  state = AddForm.pmtsp009;
  postcode = AddForm.pmtsp010;
  LookupPostCode(AddForm.pmtsp008.value);
}
function SetFields2() {
  if(isWhitespace(AddForm.pmtsp018.value)){
   return;
  }
  suburb = AddForm.pmtsp018;
  state = AddForm.pmtsp019;
  postcode = AddForm.pmtsp020;
  LookupPostCode(AddForm.pmtsp018.value);
}
function SetFields3() {
  if(isWhitespace(AddForm.pmtsp029.value)){
   return;
  }
  suburb = AddForm.pmtsp029;
  state = AddForm.pmtsp030;
  postcode = AddForm.pmtsp031;
  LookupPostCode(AddForm.pmtsp029.value);
}
function setDefaultAddress(facl,add1,add2,add3,add4,post) {
  if (isWhitespace(facl.value)) return;;
  ReturnFunction="" ;
  for (var i=1; i < setDefaultAddress.arguments.length; i++) {
   if (typeof(setDefaultAddress.arguments[i]) == 'function') {
     ReturnFunction=setDefaultAddress.arguments[i] } }
  valdcode=facl.value.substr(0,3);
  var serverURL = "../cgi-bin/patweb10.pbl?reportno=6&remoteno=1" +
                  "&valdcode="+ valdcode.replace(/ /g,"+") +
                  "&updttype=R"

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    add1.value=trim(ReturnValue[0])
    add2.value=trim(ReturnValue[1])
    add3.value=trim(ReturnValue[2])
    add4.value=trim(ReturnValue[3])
    post.value=trim(ReturnValue[4])
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
}
function showFundingSource() {
  ind=document.AddForm.d_outbb002.value.substring(3,4)
  if (ind=="P") {
    FundingHeading.innerHTML=fundinghd.innerHTML;
    FundingId.innerHTML=fundingidshown.innerHTML;
  }
}
function CheckAppDate() {
 if(isWhitespace(document.AddForm.dummy1.value)) {
   return;
 }
 if (SetDateYYYYMMDD(document.AddForm.dummy1.value) <
     SetDateYYYYMMDD(document.AddForm.currdate.value)){
     alert("Transport can't be booked for appointments in the past.");
    if(document.AddForm.trnsflag.value!="0") {
      location.href="outweb02.pbl?reportno=03&template=013" +
                    "&admissno=" + AddForm.pmtsp002.value.replace(/ /g,"+") +
                    "&waitflag=" + AddForm.waitflag.value.replace(/ /g,"+")
      parent.document.getElementById('PopUpScreen').style.width=700;
      parent.document.getElementById('PopUpScreen').style.height=400;
      Left=(parent.document.body.clientWidth-700)/2
      parent.document.getElementById('PopUpScreen').style.left=Left
    } else {
      DFrameExit();
    }
 }
}
