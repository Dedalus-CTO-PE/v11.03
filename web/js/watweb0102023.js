//jsVersion  : V11.03.00
//========================================================================
// Program   : watweb0102023.js
//
// Written   : 28.09.2011 B.G.Ackland
//
// Function  : new oncology view js
//
///////////////////////////////////////////////////////////////////////////

function checkMaxPat() {
  var serverURL="../cgi-bin/patweb96.pbl?reportno=12&remoteno=7" +
                "&wardcode="+AddForm.bokrx002.value.replace(/ /g,"+") +
                "&admisdte="+AddForm.bkrec004.value.replace(/ /g,"+");

  var returnValue=RSExecute(serverURL);
  if (returnValue.status==0) {
    if (returnValue.return_value==1) {
      alert("Warning: Maximum number of Patients exceeded.");
    }
  }

  return;
}
function defaultDate() {
    if (isWhitespace(document.AddForm.bkrec004.value)) {
      document.AddForm.bkrec004.value=document.AddForm.bookdate.value
    }
    if (isWhitespace(document.AddForm.bkrec005.value)) {
      document.AddForm.bkrec005.value=document.AddForm.booktime.value
    }
    bookwbed=document.AddForm.bkrec018.value
    bookward=document.AddForm.bkrec015.value
    if (!isWhitespace(bookward)) {
      document.AddForm.bokrx002.selectedIndex=0;
      for (var i =0 ; i < document.AddForm.bokrx002.length; i++) {
        if (document.AddForm.bokrx002.options[i].value==bookward) {
          document.AddForm.bokrx002.selectedIndex=i;
          selectOptions2('31',AddForm.bokrx002,AddForm.bokrx038);
        }
      }
      document.AddForm.bokrx038.selectedIndex=0;
      for (var i =0 ; i < document.AddForm.bokrx038.length; i++) {
        if (document.AddForm.bokrx038.options[i].value==bookwbed) {
          document.AddForm.bokrx038.selectedIndex=i;
        }
      }
    }
}
function defaultWard() {
    j=document.AddForm.bkrec008.value.substr(14,3);
    if (j.replace(/ /g,"") !="") {
      document.AddForm.bokrx002.selectedIndex=0;
      for (var i =0 ; i < document.AddForm.bokrx002.length; i++) {
        if (document.AddForm.bokrx002.options[i].value==
            document.AddForm.bkrec008.value.substr(14,3)) {
          document.AddForm.bokrx002.selectedIndex=i;
          selectOptions2('31',AddForm.bokrx002,AddForm.bokrx038);
        }
      }
    }
} // end defaultWard
function checkBedManagement() {
  admissno=PatientLinks.admissno.value.replace(/ /g,"+")
  prnxindi="0";

  if (isWhitespace(document.AddForm.bokrx002.value)) {
    document.AddForm.submit();
    return;
  }

  if (isWhitespace(document.AddForm.bokrx038.value)) {
    document.AddForm.submit();
    return;
  }

  if (AddForm.pswdindc.value==0) {
    var serverURL = "../cgi-bin/patweb96.pbl?reportno=12&remoteno=5" +
                    "&wardcode="+AddForm.bokrx002.value.replace(/ /g,"+") +
                    "&beddcode="+AddForm.bokrx038.value.replace(/ /g,"+") +
                    "&admissno="+admissno.replace(/ /g,"+") +
                    "&admisdte="+AddForm.bkrec004.value.replace(/ /g,"+") +
//                    "&staydays="+AddForm.bkrec033.value.replace(/ /g,"+") +
                    "&admistme="+AddForm.bkrec005.value.replace(/ /g,"+") +
                    "&ptrgm001="+AddForm.ptrgm001.value.replace(/ /g,"+") +
                    "&ptrgm002="+AddForm.ptrgm002.value.replace(/ /g,"+") +
                    "&ptrgm003="+AddForm.ptrgm003.value.replace(/ /g,"+") +
                    "&prnxindi="+prnxindi.replace(/ /g,"+")
    var returnValue = RSExecute(serverURL);
    if (returnValue.status==0) {
      if (returnValue.return_value==1) {
        if (!confirm("Warning: Pre-Adm/Admission will override a previous bed managment record.")) {
          return;
        }
      }
      prevretval=returnValue.return_value;
      prnxindi="1";
      var serverURL = "../cgi-bin/patweb96.pbl?reportno=12&remoteno=5" +
                      "&wardcode="+AddForm.bokrx002.value.replace(/ /g,"+") +
                      "&beddcode="+AddForm.bokrx038.value.replace(/ /g,"+") +
                      "&admissno="+admissno.replace(/ /g,"+") +
                      "&admisdte="+AddForm.bkrec004.value.replace(/ /g,"+") +
//                      "&staydays="+AddForm.bkrec033.value.replace(/ /g,"+") +
                      "&admistme="+AddForm.bkrec005.value.replace(/ /g,"+") +
                      "&ptrgm001="+AddForm.ptrgm001.value.replace(/ /g,"+") +
                      "&ptrgm002="+AddForm.ptrgm002.value.replace(/ /g,"+") +
                      "&ptrgm003="+AddForm.ptrgm003.value.replace(/ /g,"+") +
                      "&prnxindi="+prnxindi.replace(/ /g,"+")
      var returnValue = RSExecute(serverURL);
      if (returnValue.status==0) {
        if (returnValue.return_value==1) {
          if (!confirm("Warning: Pre-Adm/Adm will override a following bed managment record.")) {
            return;
          }
        }

        if (prevretval==1 || returnValue.return_value==1) {
          AddForm.pswdindc.value="1";
          PasswordHead.innerHTML=passwordhd.innerHTML;
          PasswordCode.innerHTML=passwordcd.innerHTML;
          UserNameHead.innerHTML=usernamehd.innerHTML;
          UserNameCode.innerHTML=usernamcd.innerHTML;
          return;
        }
        checkMaxPat();
        document.AddForm.submit();
        return;
      }
    }
  } else {
    checkMaxPat();
    document.AddForm.submit();
    return;
  }
}

function checkUR() {
  p=AddForm;
  if (isWhitespace(p.urnumber.value)) {
    return;
  }
  justifyRight(p.urnumber);
  if(!validateCode(13,p.urnumber,p.patname,p.dummy,p.dummy,p.dummy,p.admissno)) {
    p.urnumber.focus();
    return;
  } 
  validateCode2(36,p.urnumber,p.wlflag,p.bookflag,p.preaflag);
  if(p.wlflag.value=="1"){
    alert("Warning: Patient has a Waiting List Procedure");
  }
  if(p.bookflag.value=="1"){
    alert("Warning: Patient has a Booking");
  }
  if(p.preaflag.value=="1"){
    alert("Warning: Patient has a Preadmission");
  }
  document.LinkForm.urnumber.value=p.urnumber.value;
  document.PatientLinks.urnumber.value=p.urnumber.value;
  document.PatientLinks.admissno.value=p.admissno.value;

  if (document.AddForm.onclnkin != undefined) {
    ChkInp();
  }
}
function assignOncology() {
  for(var i=0;i<document.AddForm.bkrec008.length;i++) {
//alert(document.AddForm.bkrec008[i].value);
    if(document.AddForm.bkrec008[i].value.substring(3,4)=="O") {
      document.AddForm.bkrec008.selectedIndex=i;
    }
  }
  if(!isWhitespace(document.AddForm.defturno.value)) {
    document.AddForm.urnumber.value=document.AddForm.defturno.value
    checkUR();
    document.AddForm.bkrec008.focus();
  }
}
function displayRegime() {
    x=document.AddForm.bkrec008.value.substring(3,4);
//alert(x);
    if(x=="O") {
      RegimeHead1.innerHTML=regimehd1.innerHTML;
      RegimeCode1.innerHTML=regimecod1.innerHTML;
      RegimeHead2.innerHTML=regimehd2.innerHTML;
      RegimeCode2.innerHTML=regimecod2.innerHTML;
      RegimeHead3.innerHTML=regimehd3.innerHTML;
      RegimeCode3.innerHTML=regimecod3.innerHTML;
    if (isWhitespace(AddForm.ptrgm001.value)) AddForm.ptrgm001.value="";
    if (isWhitespace(AddForm.ptrgm002.value)) AddForm.ptrgm002.value="";
    if (isWhitespace(AddForm.ptrgm003.value)) AddForm.ptrgm003.value="";
    } else {
      RegimeHead1.innerHTML="";
      RegimeCode1.innerHTML=regimeblank1.innerHTML;
      RegimeHead2.innerHTML="";
      RegimeCode2.innerHTML=regimeblank2.innerHTML;
      RegimeHead3.innerHTML="";
      RegimeCode3.innerHTML=regimeblank3.innerHTML;
    }
}
function CheckBooking() {
    if (AddForm.bkrec008.value.substr(14,3)=="THE") {
     if(isWhitespace(AddForm.urnumber.value)) {
       alert("U/R Number is a required field.\nPlease enter it now.");
       AddForm.bkrec008.selectedIndex=0;
       return;
     }
     DOCTCODE=AddForm.bkrec002.value;
     LinkUrl="oprweb01.pbl?reportno=2&template=3&doctcode="+DOCTCODE;
     DFrameLink(LinkUrl,0,0,740,390);
    } else {
      displayRegime();
      defaultWard();
    }
  }
function valClaimCode() {
  if (AddForm.bkrec023.value=="") {
  validateCode(41,LinkForm.urnumber,AddForm.claimc);
  for (var i =0 ; i < document.AddForm.bkrec023.length; i++) {
    if (document.AddForm.claimc.value==
        trim(document.AddForm.bkrec023.options[i].value.substr(0,3))){
          document.AddForm.bkrec023.selectedIndex=i;
    }
  } }
}
function submitForm(){
    if (!validateMandatory(document.AddForm)) {
      return;
    }
    p=document.AddForm
    AddForm.bkrec015.value=AddForm.bokrx002.value
    AddForm.bkrec018.value=AddForm.bokrx038.value
    validateSuspension(p.urnumber,p.bkrec004,p.datefrom,p.dateto);
    if(p.datefrom.value!='0'){
         ans=confirm("Warning : Patient has a Suspension record for period \n" +
               "\t" + p.datefrom.value  + " - " + p.dateto.value);
         if (ans!=true) {
            return;
            }
         } 

    var serverURL = "../cgi-bin/patweb96.pbl?reportno=12&remoteno=6" +
                    "&wardcode="+AddForm.bokrx002.value.replace(/ /g,"+") +
                    "&beddcode="+AddForm.bokrx038.value.replace(/ /g,"+") +
                    "&admisdte="+AddForm.bkrec004.value.replace(/ /g,"+") +
                    "&admistme="+AddForm.bkrec005.value.replace(/ /g,"+")
                    
    var returnValue = RSExecute(serverURL);
    if (returnValue.status==0) {
      if (returnValue.return_value==1) {
        alert("Selected Bed is closed during this date/time.");
        return;
      } 
    } 
    if(document.AddForm.seriesbk.checked==true) {
      SetPageCookies(AddForm,"DayOncSeries");
      if(document.AddForm.adcommnt){
         sessionStorage.setItem('SBComments', document.AddForm.adcommnt.value);
      }
    } else {
      ExpireCookiePath("DayOncSeries")
      if(document.AddForm.adcommnt){
         sessionStorage.removeItem('SBComments');
      }
    }
    checkBedManagement();
//    document.AddForm.submit();
}
function SetRedirect() {
    document.AddForm.nextpage.value='1';
    if(document.AddForm.seriesbk.checked==true) {
      document.AddForm.redirect.value+="&serbflag=1";
    } else {
      document.AddForm.redirect.value=document.AddForm.redirect.defaultValue;
    }
}
function valDoctorUnit() {
  validateCode(31,AddForm.bkrec002,AddForm.n_bkrec002);
  selectOptions("30",AddForm.bkrec002,AddForm.bkrec021);
//AddForm.bkrec021.selectedIndex=1;
}

function SeriesBooking() {
  if(document.AddForm.serbflag.value!="1") {
    return;
  }
  LoadPageCookies(AddForm,"DayOncSeries")
   if(document.AddForm.adcommnt){
      document.AddForm.adcommnt.value = sessionStorage.getItem('SBComments'); 
   }
  document.AddForm.seriesbk.checked=true;
  SetRedirect();
  document.AddForm.bkrec004.value="";
  document.AddForm.bkrec004.focus();
  document.AddForm.bkrec005.value="";
}
function setBedCookieSB() {
  if(document.AddForm.seriesbk.checked==false) {
    return;
  }

  SetCookie("BedCookieSB",document.AddForm.bokrx038.value); 

//alert(GetCookieData("BedCookieSB"));

}
function getBedCookieSB() {
  if(document.AddForm.serbflag.value!="1") {
    return;
  }

  selectOptions2('31',document.AddForm.bokrx002,document.AddForm.bokrx038);

//alert(GetCookieData("BedCookieSB"));

  for (var i =0 ; i < document.AddForm.bokrx038.length; i++) {
    if (document.AddForm.bokrx038.options[i].value==
        GetCookieData("BedCookieSB")) {
      document.AddForm.bokrx038.selectedIndex=i;
      break;
    }
  }

  ExpireCookiePath("BedCookieSB");
  
}
// This function will load back in values after going through a new registrtion
// process (defturno has a value passed in to the page
function loadBookingCookies(){
  if(!isWhitespace(document.AddForm.defturno.value)) {
   LoadPageCookies(AddForm,"DayOncCookie");
   if(document.AddForm.adcommnt){
      document.AddForm.adcommnt.value = sessionStorage.getItem('SBComments');
   }

   selectOptions2('31',document.AddForm.bokrx002,document.AddForm.bokrx038);
   for (var i =0 ; i < document.AddForm.bokrx038.length; i++) {
    if (document.AddForm.bokrx038.options[i].value==
        GetCookieData("BedCookieSB")) {
      document.AddForm.bokrx038.selectedIndex=i;
      break;
    }
   }
   ExpireCookiePath("BedCookieSB");
   ExpireCookiePath("DayOncCookie")
   if(document.AddForm.adcommnt){
      sessionStorage.removeItem('SBComments');
   }
  }
}
function setBookingCookies(){
      SetPageCookies(AddForm,"DayOncCookie");
      SetCookie("BedCookieSB",document.AddForm.bokrx038.value);
      if(document.AddForm.adcommnt){
        sessionStorage.setItem('SBComments', document.AddForm.adcommnt.value);
      }
}
function validateNextPage() { 
  if (self.name!="PopUpFrame") {
    document.AddForm.nextpage.value="1";
  } else {
    document.Registration.theaflag.value="3";
    document.NewRegistration.theaflag.value="3";
  }
}
