//jsVersion  : V11.03.00
//------------------------------------------------------------ 
// Function : outweb0801002.js
//------------------------------------------------------------ 
function PostSearch() {
  if(!validateMandatory(SearchForm)) {
    return;
  }

  if(!CheckReferralDate(SearchForm.refrldat.value,SearchForm.srchdatf.value)) {
    return;
  }

  if(SearchForm.refrlexp != undefined) {
    if(!CheckReferralExpiryDate(SearchForm.refrlexp.value,SearchForm.srchdatf.value)) {
      return;
    }
  }

  document.SearchForm.srchcare.value="0";
  document.SearchForm.submit();
}

function CheckReferralDate(ref,effdate)
{
  if (isWhitespace(ref)) {
    return true;
  }

  if (ref > SetDateYYYYMMDD(effdate))
  {
    alert("Search Date cannot be before Referral Date (" + SetDateDDMMMYYYY(ref) + ")");
    return false;
  }

  return true;
}

function CheckReferralExpiryDate(refx,effdate)
{
  if (isWhitespace(refx)) {
    return true;
  }

  if (refx < SetDateYYYYMMDD(effdate))
  {
    alert("Search Date cannot be after the Referral Expiry Date (" + SetDateDDMMMYYYY(refx) + ")");
    return false;
  }

  return true;
}

function PostSearchCare() {
  if(!validateMandatory(SearchForm)) {
    return;
  }
  if(!CheckReferralDate(SearchForm.refrldat.value,SearchForm.srchdatf.value)) {
    return;
  }

  if(SearchForm.refrlexp != undefined) {
    if(!CheckReferralExpiryDate(SearchForm.refrlexp.value,SearchForm.srchdatf.value)) {
      return;
    }
  }
  document.SearchForm.srchcare.value="1";
  document.SearchForm.submit();
}
//
function CheckCount(Session) {
  if(Session.checked==true) {
    if(MaxSess==6) {
      alert("Only 6 sessions can be selected before a search");
      Session.checked=false;
      return
    }
    MaxSess=MaxSess + 1
  } else {
    MaxSess=MaxSess - 1
  }
}
function SelectMult() {
  if(MaxSess==0) {
    alert("Please select a session to search");
    return
  }

  linkurl="outweb08.pbl?reportno=1&template=003" +
  "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+") +
  "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+") +
  "&refrlvis=" + document.SearchForm.refrlvis.value.replace(/ /g,"+") +
  "&bookflag=" + document.SearchForm.bookflag.value.replace(/ /g,"+") 

  for (var e = 0; e < AddForm.elements.length; e++) {
    var el=AddForm.elements[e] ;
    if(el.name.match(/multsrch/) && el.checked==true) {
    linkurl+="&multsrch=" + el.value 
    }
  }
  location.href=linkurl
}
//-----------------------------------------------------------------
// Function To check Referral Letters
//-----------------------------------------------------------------
function checkRefLetter(urnumber) {
  if (isWhitespace(urnumber)) return;;
  ReturnFunction="" ;
  for (var i=1; i < checkRefLetter.arguments.length; i++) {
   if (typeof(checkRefLetter.arguments[i]) == 'function') {
     ReturnFunction=checkRefLetter.arguments[i] } }
  var serverURL = "../cgi-bin/outweb02.pbl?reportno=9&updatety=6" +
                  "&urnumber="+urnumber.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|");
  if (returnValue.status==0) {

    if (ReturnValue[0] == 1) {    // Unbooked referral exists

      // Construct warning message
      if (isWhitespace(ReturnValue[1]))
        { ReturnValue[1] = "Unknown Date"; }
      if (isWhitespace(ReturnValue[2]))
        { ReturnValue[2] = "Unknown"; }
      if (isWhitespace(ReturnValue[3]))
        { ReturnValue[3] = "Unknown"; }
      var message = "Warning : Referral Letter Exists for " + ReturnValue[1] +
                    "; Clinic Type " + ReturnValue[2] + "; Clinic Id " +
                    ReturnValue[3] + "\nClick OK to continue " +
                    "without selecting the letter, Cancel to select letter.";

      ans=confirm(message)
      if (!ans) {
        PatientLinkTo("allweb02.pbl",2,22,0,0,0);
      }
    }
    if (typeof(ReturnFunction) == 'function') { ReturnFunction() }
  }
}
//-----------------------------------------------------------------
// Function To check Referral Letters (multiple)
//-----------------------------------------------------------------
function checkRefLetter2(urnumber,admissno,chkaqflg) {
  if (isWhitespace(urnumber)) return;

  var apprqfnd = 0;
  if (chkaqflg == 1) {
    var serverURL = "../cgi-bin/outweb02.pbl?reportno=9&updatety=17" +
                    "&urnumber="+urnumber.replace(/ /g,"+") +
                    "&admissno="+admissno.replace(/ /g,"+")
    var returnValue = RSExecute(serverURL);
    ReturnValue=returnValue.return_value.split("|");
    if (returnValue.status==0) {
      apprqfnd = ReturnValue[0]     // Appointment request exist flag
    }
  }

  ReturnFunction="" ;
  for (var i=1; i < checkRefLetter2.arguments.length; i++) {
    if (typeof(checkRefLetter2.arguments[i]) == 'function') {
      ReturnFunction=checkRefLetter2.arguments[i] } }
  var serverURL = "../cgi-bin/outweb02.pbl?reportno=9&updatety=15" +
                  "&urnumber="+urnumber.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|");
  if (returnValue.status==0) {
    if (ReturnValue[0] == 1) {    // Unbooked referral exists
      // Construct warning message
      if (isWhitespace(ReturnValue[1]))
        { ReturnValue[1] = "Unknown Date"; }
      if (isWhitespace(ReturnValue[2]))
        { ReturnValue[2] = "Unknown"; }
      if (isWhitespace(ReturnValue[3]))
        { ReturnValue[3] = "Unknown"; }
      if(isWhitespace(ReturnValue[5])){
         ReturnValue[5] = "Unknown";
      }
      if (apprqfnd == 0) {
         if (ReturnValue[6] == "1") {
             alert("Warning : Referral Exists for " + ReturnValue[1] +
                   "; Clinic Type " + ReturnValue[2] + "; Clinic Id " +
                   ReturnValue[3] + "; Case Team " + ReturnValue[5] +
                   "\n\nAppointments are not allowed to be booked for " +
                   "this primary referral. Click Ok to continue without " +
                   "linking to referral.");
         } else {
             var message = "Warning : Referral Exists for " + ReturnValue[1] +
                           "; Clinic Type " + ReturnValue[2] + "; Clinic Id " +
                           ReturnValue[3] + "; Case Team " + ReturnValue[5] +
                           "\n\nClick OK to select the referral or CANCEL to " +
                           "continue without linking to a referral.";
             ans=confirm(message);
             if (ans) {
                 LinkToReferral(urnumber,ReturnValue[4]);
             }
         }
      }
      else {
        if (ReturnValue[6] == "1") {
           var message = "Warning : Referral Exists for " + ReturnValue[1] +
                        "; Clinic Type " + ReturnValue[2] + "; Clinic Id " +
                        ReturnValue[3] + "; Case Team " + ReturnValue[5] +
                        "\n\nThe patient also has outstanding Appointment " +
                        "Requests." +
                        "\n\nAppointments are not allowed to be booked for " +
                        "this primary referral. Click Ok to continue without " +
                        "linking to referral.";
            ans=confirm(message);
            if (!ans) {
               LinkApptToReferral(urnumber);
            }
        } else {
            var message = "Warning : Referral Exists for " + ReturnValue[1] +
                          "; Clinic Type " + ReturnValue[2] + "; Clinic Id " +
                          ReturnValue[3] + "; Case Team " + ReturnValue[5] +
                          "\n\nThe patient also has outstanding Appointment " +
                          "Requests." +
                          "\n\nClick OK to view Referral and Appointment " +
                          "Requests or CANCEL to continue without linking " +
                          "to a referral.";
            ans=confirm(message);
            if (ans) {
                LinkApptToReferral(urnumber);
            }
        }
      }
    }
    if (ReturnValue[0] == 2) {    // Multiple Unbooked referral exists
      if (apprqfnd == 0) {
        var message = "Warning : Multiple Referrals Exist for " +
                      "this patient." +
                      "\nDo you want to link this visit to a referral?" +
                      "\n\nClick OK to link to a referral or " +
                      "CANCEL to continue.";
      }
      else {
        var message = "Warning : Multiple Referrals / Appointment Requests " +
                      "Exist for this patient." +
                      "\n\nDo you want to link this visit to a referral?" +
                      "\n\nClick OK to link to a referral / Appointment " +
                      "Requests or CANCEL to continue.";

      }
      ans=confirm(message);
      if (ans) {
        LinkApptToReferral(urnumber);
      }
    }
    if (typeof(ReturnFunction) == 'function') { ReturnFunction() }
  }
}
function LinkToReferral(urnumber,refnumber){
  linkUrl="outweb08.pbl?reportno=1&template=002" +
          "&urnumber=" + urnumber.replace(/ /g,"+") +
          "&admissno=" + refnumber.replace(/ /g,"+") +
          "&refrlvis=" + refnumber.replace(/ /g,"+") +
          "&bookflag=2" +
          "&skipwarn=1";     //skip other warning since it has been shown
  location.href=linkUrl;
}
function LinkToAppointmentRequest(urnumber,requestkey){
  linkUrl="outweb08.pbl?reportno=8&template=001" +
          "&urnumber=" + urnumber.replace(/ /g,"+") +
          "&admissno=" + requestkey.substr(8,8).replace(/ /g,"+") +
          "&refrlvis=" + requestkey.substr(8,8).replace(/ /g,"+") +
          "&bookflag=3" +
          "&skipwarn=1";     //skip other warning since it has been shown
  location.href=linkUrl;
}
function LinkApptToReferral(urnumber){
  linkUrl="allweb02.pbl?reportno=2&template=25&filtstat=7" +
          "&urnumber=" + urnumber.replace(/ /g,"+")
  Left=(document.body.clientWidth-800)/2
  DFrameLink(linkUrl,50,Left,800,500);
}
//-----------------------------------------------------------------
// Function to check outstanding appointment request for a referral
//-----------------------------------------------------------------
function checkApptRequest(urnumber,admissno,ctcnckar,bookflag,skipwarn) {
  if (ctcnckar!="1") return;
  if (bookflag!="2") return;
  if (skipwarn=="1") return;
  if (isWhitespace(urnumber)) return;
  if (isWhitespace(admissno)) return;
  var serverURL = "../cgi-bin/outweb02.pbl?reportno=9&updatety=17" +
                  "&urnumber="+urnumber.replace(/ /g,"+") +
                  "&admissno="+admissno.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|");
  if (returnValue.status==0) {
    if (ReturnValue[0] == 1) {    // appointment request exists
      var message = "Warning : The patient has outstanding Appointment" +
                    " Requests." +
                    "\n\nClick OK to view Appointment Requests or CANCEL" +
                    " to continue."
      ans=confirm(message)
      if (ans) {
        ApptRequestList(urnumber,admissno);
      }
    }
  }
}
function ApptRequestList(urnumber,admissno){
  linkUrl="outweb08.pbl?reportno=8&template=001" +
          "&urnumber=" + urnumber.replace(/ /g,"+") +
          "&admissno=" + admissno.replace(/ /g,"+") +
          "&refrlvis=" + admissno.replace(/ /g,"+") +
          "&bookflag=2";
  location.href=linkUrl;
}
