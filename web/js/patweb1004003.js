//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb1004003.js
//
// Written   : 11.04.2006 Ebon Clements
//
// Function  : Standard Functions Used in patweb10 report 6 template 3
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
//           Added SamePick() to UpdateTransport()
//           Added series booking test and update and delete
// V9.12.02  10.12.2009 Ebon Clements  CAR 210390
//           Added trim to PickSelf(), PickAlt(), ReturnSelf() and ReturnAlt()
// V9.12.01  24.09.2009 Ebon Clements  CAR 202769
//           Added MandContractor(), PickAlt() and ReturnAlt()
// V9.08.01  17.04.2007 Peter Vela     CAR 138042
//           Commented out className=Mandatory @ CheckM40()
// V9.05.00  11.04.2006 Ebon Clemnet   CAR 89302
//           New Javascript
//========================================================================
function UpdateTransport() {
  if(document.UpdateForm.d_pmtsp026.checked==true) {
    document.UpdateForm.pmtsp026.value="1";
  } else {
    document.UpdateForm.pmtsp026.value="0";
  }
  if(document.UpdateForm.d_pmtsp040.checked==true) {
    document.UpdateForm.pmtsp040.value="1";
  } else {
    document.UpdateForm.pmtsp040.value="0";
  }
  if(document.UpdateForm.d_pmtsp056!=undefined) {
    if(document.UpdateForm.d_pmtsp056.checked==true) {
      document.UpdateForm.pmtsp056.value="1";
    } else {
      document.UpdateForm.pmtsp056.value="0";
    }
  }
  if(document.UpdateForm.d_pmtsp046!=undefined) {
    if(document.UpdateForm.d_pmtsp046.checked==true) {
      document.UpdateForm.pmtsp046.value="1";
    } else {
      document.UpdateForm.pmtsp046.value="0";
    }
  }
  if(document.UpdateForm.d_pmtsp048!=undefined) {
    if(document.UpdateForm.d_pmtsp048.checked==true) {
      document.UpdateForm.pmtsp048.value="1";
    } else {
      document.UpdateForm.pmtsp048.value="0";
    }
  }
  SamePick();
  if(document.UpdateForm.isseries.value=="2") {
    if(!confirm("Warning - This is a master series booking.\n" +
                "Click OK to update transport for the entire series.\n" +
                "CANCEL to update this appointment only")) {
      setFormactn('U');
    } else {
      if(validateMandatory(UpdateForm)){
         document.UpdateForm.updttype.value="T";
         document.UpdateForm.submit();
      }
    }
  } else if(document.UpdateForm.isseries.value=="1") {
    if(!confirm("Warning - This is a series booking.\n" +
              "Click OK to update transport for future bookings the series.\n" +
              "CANCEL to update this appointment only")) {
      setFormactn('U');
    } else {
      if(validateMandatory(UpdateForm)){
         document.UpdateForm.updttype.value="F";
         document.UpdateForm.submit();
      }
    }
  } else {
    setFormactn('U');
  }
}
function DeleteTransport() {
  if(document.UpdateForm.isseries.value=="2") {
    if(!confirm("Warning - This is a master series booking.\n" +
                "Click OK to delete transport for the entire series.\n" +
                "CANCEL to delete this appointment only")) {
      setFormactn('D');
    } else {
      if(validateMandatory(UpdateForm)){
         document.UpdateForm.updttype.value="E";
         document.UpdateForm.submit();
      }
    }
  } else if(document.UpdateForm.isseries.value=="1") {
    if(!confirm("Warning - This is a series booking.\n" +
              "Click OK to delete transport for future bookings the series.\n" +
              "CANCEL to delete this appointment only")) {
      setFormactn('D');
    } else {
      if(validateMandatory(UpdateForm)){
         document.UpdateForm.updttype.value="B";
         document.UpdateForm.submit();
      }
    }
  } else {
    setFormactn('D');
  }
}
function CheckAmb() {
  if(document.UpdateForm.d_pmtsp046.checked==true) {
    document.UpdateForm.pmtsp047.className="Mandatory";
    document.UpdateForm.pmtsp047.readOnly=false;
  } else {
    document.UpdateForm.pmtsp047.className="Readonly";
    document.UpdateForm.pmtsp047.readOnly=true;
    document.UpdateForm.pmtsp047.value="";
  }
}
function CheckM40() {
  if(document.UpdateForm.d_pmtsp048.checked==true) {
    document.UpdateForm.pmtsp049.className="";
    document.UpdateForm.pmtsp049.readOnly=false;
  } else {
    document.UpdateForm.pmtsp049.className="Readonly";
    document.UpdateForm.pmtsp049.readOnly=true;
    document.UpdateForm.pmtsp049.value="";
  }
}
function SamePick() {
  if(document.UpdateForm.d_pmtsp026.checked==true) {
     document.UpdateForm.pmtsp016.value=document.UpdateForm.pmtsp006.value
     document.UpdateForm.pmtsp016.className="ReadOnly";
     document.UpdateForm.pmtsp016.readOnly=true;
     document.UpdateForm.pmtsp017.value=document.UpdateForm.pmtsp007.value
     document.UpdateForm.pmtsp017.className="ReadOnly";
     document.UpdateForm.pmtsp017.readOnly=true;
     document.UpdateForm.pmtsp018.value=document.UpdateForm.pmtsp008.value
     document.UpdateForm.pmtsp018.className="ReadOnly";
     document.UpdateForm.pmtsp018.readOnly=true;
     document.UpdateForm.pmtsp019.value=document.UpdateForm.pmtsp009.value
     document.UpdateForm.pmtsp019.className="ReadOnly";
     document.UpdateForm.pmtsp019.readOnly=true;
     document.UpdateForm.pmtsp020.value=document.UpdateForm.pmtsp010.value
     document.UpdateForm.pmtsp020.className="ReadOnly";
     document.UpdateForm.pmtsp020.readOnly=true;
     document.UpdateForm.pmtsp021.value=document.UpdateForm.pmtsp011.value
     document.UpdateForm.pmtsp021.className="ReadOnly";
     document.UpdateForm.pmtsp021.readOnly=true;
     document.UpdateForm.pmtsp022.value=document.UpdateForm.pmtsp012.value
     document.UpdateForm.pmtsp022.className="ReadOnly";
     document.UpdateForm.pmtsp022.readOnly=true;
     document.UpdateForm.pmtsp023.value=document.UpdateForm.pmtsp013.value
     document.UpdateForm.pmtsp023.className="ReadOnly";
     document.UpdateForm.pmtsp023.readOnly=true;
     if(document.UpdateForm.pmtsp025!=undefined) {
       document.UpdateForm.pmtsp025.value=document.UpdateForm.pmtsp015.value
       document.UpdateForm.pmtsp025.className="ReadOnly";
       document.UpdateForm.pmtsp025.readOnly=true;
     }
     document.UpdateForm.returnbut.disabled=true;
     document.UpdateForm.returndef.disabled=true;
     if(document.UpdateForm.returnalt!=undefined) {
       document.UpdateForm.returnalt.disabled=true;
     }
  } else {
     document.UpdateForm.pmtsp016.className="";
     document.UpdateForm.pmtsp016.readOnly=false;
     document.UpdateForm.pmtsp017.className="";
     document.UpdateForm.pmtsp017.readOnly=false;
     document.UpdateForm.pmtsp018.className="";
     document.UpdateForm.pmtsp018.readOnly=false;
     document.UpdateForm.pmtsp019.className="";
     document.UpdateForm.pmtsp019.readOnly=false;
     document.UpdateForm.pmtsp020.className="";
     document.UpdateForm.pmtsp020.readOnly=false;
     document.UpdateForm.pmtsp021.className="";
     document.UpdateForm.pmtsp021.readOnly=false;
     document.UpdateForm.pmtsp022.className="";
     document.UpdateForm.pmtsp022.readOnly=false;
     document.UpdateForm.pmtsp023.className="";
     document.UpdateForm.pmtsp023.readOnly=false;
     if(document.UpdateForm.pmtsp025!=undefined) {
       document.UpdateForm.pmtsp025.className="";
       document.UpdateForm.pmtsp025.readOnly=false;
     }
     document.UpdateForm.returnbut.disabled=false;
     document.UpdateForm.returndef.disabled=false;
     if(document.UpdateForm.returnalt!=undefined) {
       document.UpdateForm.returnalt.disabled=false;
     }
  }
}
function PickClear() {
  document.UpdateForm.pmtsp006.value="";
  document.UpdateForm.pmtsp007.value="";
  document.UpdateForm.pmtsp008.value="";
  document.UpdateForm.pmtsp009.value="";
  document.UpdateForm.pmtsp010.value="";
  document.UpdateForm.pmtsp011.value="";
  document.UpdateForm.pmtsp012.value="";
  document.UpdateForm.pmtsp013.value="";
  if(document.UpdateForm.pmtsp015!=undefined) {
    document.UpdateForm.pmtsp015.value="";
  }
}
function PickSelf() {
  document.UpdateForm.pmtsp006.value=trim(document.hiddenvalues.padd1.value);
  document.UpdateForm.pmtsp007.value=trim(document.hiddenvalues.padd2.value);
  document.UpdateForm.pmtsp008.value=trim(document.hiddenvalues.padd3.value);
  document.UpdateForm.pmtsp009.value=trim(document.hiddenvalues.padd4.value);
  document.UpdateForm.pmtsp010.value=trim(document.hiddenvalues.ppost.value);
  document.UpdateForm.pmtsp011.value=trim(document.hiddenvalues.ptelep.value);
  document.UpdateForm.pmtsp012.value=trim(document.hiddenvalues.pteleb.value);
  document.UpdateForm.pmtsp013.value=trim(document.hiddenvalues.ptelem.value);
  if(document.UpdateForm.pmtsp015!=undefined) {
    document.UpdateForm.pmtsp015.value="";
  }
}
function PickAlt() {
  document.UpdateForm.pmtsp006.value=trim(document.hiddenvalues.altpadd1.value);
  document.UpdateForm.pmtsp007.value=trim(document.hiddenvalues.altpadd2.value);
  document.UpdateForm.pmtsp008.value=trim(document.hiddenvalues.altpadd3.value);
  document.UpdateForm.pmtsp009.value=trim(document.hiddenvalues.altpadd4.value);
  document.UpdateForm.pmtsp010.value=trim(document.hiddenvalues.altppost.value);
  document.UpdateForm.pmtsp011.value=trim(document.hiddenvalues.ptelep.value);
  document.UpdateForm.pmtsp012.value=trim(document.hiddenvalues.pteleb.value);
  document.UpdateForm.pmtsp013.value=trim(document.hiddenvalues.ptelem.value);
  if(document.UpdateForm.pmtsp015!=undefined) {
    document.UpdateForm.pmtsp015.value="";
  }
  MandContractor()
}
function ReturnClear() {
  document.UpdateForm.pmtsp016.value="";
  document.UpdateForm.pmtsp017.value="";
  document.UpdateForm.pmtsp018.value="";
  document.UpdateForm.pmtsp019.value="";
  document.UpdateForm.pmtsp020.value="";
  document.UpdateForm.pmtsp021.value="";
  document.UpdateForm.pmtsp022.value="";
  document.UpdateForm.pmtsp023.value="";
  if(document.UpdateForm.pmtsp025!=undefined) {
    document.UpdateForm.pmtsp025.value="";
  }
}
function MandContractor() {
  if(!isWhitespace(document.UpdateForm.pmtsp006.value) ||
     !isWhitespace(document.UpdateForm.pmtsp007.value) ||
     !isWhitespace(document.UpdateForm.pmtsp008.value) ||
     !isWhitespace(document.UpdateForm.pmtsp009.value) ||
     !isWhitespace(document.UpdateForm.pmtsp010.value)) {
    document.UpdateForm.pmtsp038.className="Mandatory";
  } else {
    document.UpdateForm.pmtsp038.className="";
  }
  if(!isWhitespace(document.UpdateForm.pmtsp016.value) ||
     !isWhitespace(document.UpdateForm.pmtsp017.value) ||
     !isWhitespace(document.UpdateForm.pmtsp018.value) ||
     !isWhitespace(document.UpdateForm.pmtsp019.value) ||
     !isWhitespace(document.UpdateForm.pmtsp020.value)) {
    document.UpdateForm.pmtsp053.className="Mandatory";
  } else {
    document.UpdateForm.pmtsp053.className="";
  }
}
function ReturnSelf() {
  document.UpdateForm.pmtsp016.value=trim(document.hiddenvalues.padd1.value);
  document.UpdateForm.pmtsp017.value=trim(document.hiddenvalues.padd2.value);
  document.UpdateForm.pmtsp018.value=trim(document.hiddenvalues.padd3.value);
  document.UpdateForm.pmtsp019.value=trim(document.hiddenvalues.padd4.value);
  document.UpdateForm.pmtsp020.value=trim(document.hiddenvalues.ppost.value);
  document.UpdateForm.pmtsp021.value=trim(document.hiddenvalues.ptelep.value);
  document.UpdateForm.pmtsp022.value=trim(document.hiddenvalues.pteleb.value);
  document.UpdateForm.pmtsp023.value=trim(document.hiddenvalues.ptelem.value);
  if(document.UpdateForm.pmtsp025!=undefined) {
    document.UpdateForm.pmtsp025.value="";
  }
}
function ReturnAlt() {
  document.UpdateForm.pmtsp016.value=trim(document.hiddenvalues.altpadd1.value);
  document.UpdateForm.pmtsp017.value=trim(document.hiddenvalues.altpadd2.value);
  document.UpdateForm.pmtsp018.value=trim(document.hiddenvalues.altpadd3.value);
  document.UpdateForm.pmtsp019.value=trim(document.hiddenvalues.altpadd4.value);
  document.UpdateForm.pmtsp020.value=trim(document.hiddenvalues.altppost.value);
  document.UpdateForm.pmtsp021.value=trim(document.hiddenvalues.ptelep.value);
  document.UpdateForm.pmtsp022.value=trim(document.hiddenvalues.pteleb.value);
  document.UpdateForm.pmtsp023.value=trim(document.hiddenvalues.ptelem.value);
  document.UpdateForm.pmtsp025.value="";
  MandContractor()
}
function SetFields1() {
  if(isWhitespace(UpdateForm.pmtsp008.value)){
   return;
  }
  var OldSuburb=trim(UpdateForm.d_pmtsp008.value)
  if(trim(UpdateForm.pmtsp008.value)!=OldSuburb){
    suburb = UpdateForm.pmtsp008;
    state = UpdateForm.pmtsp009;
    postcode = UpdateForm.pmtsp010;
    LookupPostCode(UpdateForm.pmtsp008.value);
  }
}
function SetFields2() {
  if(isWhitespace(UpdateForm.pmtsp018.value)){
   return;
  }
  var OldSuburb=trim(UpdateForm.d_pmtsp018.value)
  if(trim(UpdateForm.pmtsp018.value)!=OldSuburb){
    suburb = UpdateForm.pmtsp018;
    state = UpdateForm.pmtsp019;
    postcode = UpdateForm.pmtsp020;
    LookupPostCode(UpdateForm.pmtsp018.value);
  }
}
function SetFields3() {
  if(isWhitespace(UpdateForm.pmtsp029.value)){
   return;
  }
  var OldSuburb=trim(UpdateForm.d_pmtsp018.value)
  if(trim(UpdateForm.pmtsp018.value)!=OldSuburb){
    suburb = UpdateForm.pmtsp029;
    state = UpdateForm.pmtsp030;
    postcode = UpdateForm.pmtsp031;
    LookupPostCode(UpdateForm.pmtsp029.value);
  }
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
  ind=document.UpdateForm.d_outbb002.value.substring(3,4)
  if (ind=="P") {
    FundingHeading.innerHTML=fundinghd.innerHTML;
    FundingId.innerHTML=fundingidshown.innerHTML;
  }
}
function CheckAppDate() {
 if(isWhitespace(document.UpdateForm.dummy1.value)) {
   return;
 }
 if (SetDateYYYYMMDD(document.UpdateForm.dummy1.value) <
     SetDateYYYYMMDD(document.UpdateForm.currdate.value)){
     alert("Warning this appointments is in the past.");
 }
}
