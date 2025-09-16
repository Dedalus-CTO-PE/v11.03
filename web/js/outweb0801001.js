//jsVersion  : V11.03.00
//------------------------------------------------------------ 
// Function : outweb0801001.js
//------------------------------------------------------------ 
function SetLists() {
 SetClinicType(SearchForm.srchclty,SearchForm.defctype.value,SearchForm.usersite.value);
 SetClinicId(SearchForm.srchclid,SearchForm.deftclid.value,SearchForm.usersite.value);
}
function SetListsA() {
 SetClinicType(SearchForm.srchclty,SearchForm.defctype.value,SearchForm.usersite.value);
}
   
function DisplayFreqLoad(Type) {
  document.SearchForm.srchclty.className="SelectBig";
  document.SearchForm.srchclid.className="SelectBig";
  ShowDates.innerHTML="";
  if (Type=="1") {
    Frequency.innerHTML=DayFrequency.innerHTML;
    DayOptions.innerHTML=NoDay.innerHTML;
  } else if (Type=="2") {
    Frequency.innerHTML=WeekFrequency.innerHTML;
    DayOptions.innerHTML=ShowDay.innerHTML;
    setTimeout('SelectWeekDay()',100);
  } else if (Type=="3") {
    Frequency.innerHTML=MonthFrequency.innerHTML;
    DayOptions.innerHTML=NoDay.innerHTML;
    setTimeout('SelectDays()',100);
    setTimeout('SelectFrst()',100);
  } else if (Type=="4") {
    Frequency.innerHTML=YearFrequency.innerHTML;
    DayOptions.innerHTML=NoDay.innerHTML;
    setTimeout('SelectDays()',100);
    setTimeout('SelectFrst()',100);
  } else if (Type=="5") {
    Frequency.innerHTML=ShowTemplate.innerHTML;
    DayOptions.innerHTML=NoDay.innerHTML;
    document.SearchForm.srchclty.className="SelectBig Mandatory";
    document.SearchForm.srchclid.className="SelectBig Mandatory";
    setTimeout('SelectDays()',100);
    setTimeout('SelectFrst()',100);
  } else {
    Frequency.innerHTML=DayFrequency.innerHTML;
    DayOptions.innerHTML=NoDay.innerHTML;
  }
  setTimeout('SelectFreq()',100);
}
function DisplayFreq(Type) {
  ShowDates.innerHTML="";
  document.SearchForm.srchclty.className="SelectBig";
  document.SearchForm.srchclid.className="SelectBig";
  if (Type=="1") {
    Frequency.innerHTML=DayFrequency.innerHTML;
    DayOptions.innerHTML=NoDay.innerHTML;
  } else if (Type=="2") {
    Frequency.innerHTML=WeekFrequency.innerHTML;
    DayOptions.innerHTML=ShowDay.innerHTML;
  } else if (Type=="3") {
    Frequency.innerHTML=MonthFrequency.innerHTML;
    DayOptions.innerHTML=NoDay.innerHTML;
  } else if (Type=="4") {
    Frequency.innerHTML=YearFrequency.innerHTML;
    DayOptions.innerHTML=NoDay.innerHTML;
  } else if (Type=="5") {
    Frequency.innerHTML=ShowTemplate.innerHTML;
    DayOptions.innerHTML=NoDay.innerHTML;
    document.SearchForm.srchclty.className="SelectBig Mandatory";
    document.SearchForm.srchclid.className="SelectBig Mandatory";
  } else {
    Frequency.innerHTML=DayFrequency.innerHTML;
    DayOptions.innerHTML=NoDay.innerHTML;
  }
}
   
function SelectFreq () {
 if(isWhitespace(document.SearchForm.defcycle.value)) {
  return;
 }
 SelectCycl=trim(document.SearchForm.defcycle.value);
 for (var i =0 ; i < document.SearchForm.srchcycl.length; i++) {
  if (document.SearchForm.srchcycl.options[i].value==SelectCycl) {
       document.SearchForm.srchcycl.selectedIndex=i } };
}
function SelectFrst () {
 if(isWhitespace(document.SearchForm.deftfrst.value)) {
  return;
 }
 SelectF=trim(document.SearchForm.deftfrst.value);
 for (var i =0 ; i < document.SearchForm.srchfrst.length; i++) {
  if (document.SearchForm.srchfrst.options[i].value==SelectF) {
       document.SearchForm.srchfrst.selectedIndex=i } };
}
function SelectDays () {
 if(isWhitespace(document.SearchForm.deftdays.value)) {
  return;
 }
 SelectD=trim(document.SearchForm.deftdays.value);
 for (var i =0 ; i < document.SearchForm.srchdays.length; i++) {
  if (document.SearchForm.srchdays.options[i].value==SelectD) {
       document.SearchForm.srchdays.selectedIndex=i } };
}
function SelectWeekDay() {
//
 if(document.SearchForm.deftmond.value=="1") {
   document.SearchForm.srchmond.checked=1;
 }
 if(document.SearchForm.defttues.value=="1") {
   document.SearchForm.srchtues.checked=1;
 }
 if(document.SearchForm.deftwedn.value=="1") {
   document.SearchForm.srchwedn.checked=1;
 }
 if(document.SearchForm.deftthur.value=="1") {
   document.SearchForm.srchthur.checked=1;
 }
 if(document.SearchForm.deftfrid.value=="1") {
   document.SearchForm.srchfrid.checked=1;
 }
 if(document.SearchForm.deftsatu.value=="1") {
   document.SearchForm.srchsatu.checked=1;
 }
 if(document.SearchForm.deftsund.value=="1") {
   document.SearchForm.srchsund.checked=1;
 }
}
function initA() {
  SetLists();
  DisplayFreqLoad(SearchForm.defdaywe.value);
  StoreCookie();
}
function initB() {
  SetListsA();
  DisplayFreqLoad(SearchForm.defdaywe.value);
}

function PostSearch() {
  if(document.SearchForm.srchftyp[4].checked==true ){
    document.SearchForm.srchclid.className="Mandatory";
    document.SearchForm.srchclty.className="Mandatory";
  }
  if(!validateMandatory(SearchForm)) {
    return;
  }

  if(!CheckReferralDate(SearchForm.refrldat.value,SearchForm.srchdatf.value,SearchForm.srchdatt.value)) {
    return;
  }
  if(SearchForm.refrlexp != undefined) {
    if(!CheckReferralExpiryDate(SearchForm.refrlexp.value,SearchForm.srchdatt.value)) {
      return;
    }
  }

  document.SearchForm.srchcare.value="0";
  if(!CheckDateRange(SearchForm.srchdatf,SearchForm.srchdatt)) {
     return;
  } 
  if(document.SearchForm.srchftyp[4].checked==true ){
    linkurl="outweb08.pbl?reportno=02&template=002" +
    "&srchftyp=5" +
    "&srchdays=" + SearchForm.srchdays.value +
    "&srchdatf=" + SearchForm.srchdatf.value +
    "&srchdatt=" + SearchForm.srchdatt.value 
    Left=(document.body.clientWidth-750)/2
    DFrameLink(linkurl,0,Left,750,380)
  } else {
    if(isWhitespace(SearchForm.srchclid.value)) {
      if(isWhitespace(SearchForm.srchclty.value)) {
        alert("Please select a Clinic Type or Id before searching");
        return;
      }
    }
    document.SearchForm.submit();
  }
}

function CheckReferralDate(ref,fromdate,todate)
{
  if (isWhitespace(ref)) {
    return true;
  }

  if (ref > SetDateYYYYMMDD(fromdate))
  {
    alert("Duration Effective Date must not be before Referral Date (" + SetDateDDMMMYYYY(ref) + ")");
    return false;
  }

  if (ref > SetDateYYYYMMDD(todate))
  {
    alert("Duration Until Date must not be before Referral Date (" + SetDateDDMMMYYYY(ref) + ")");
    return false;
  }

  return true;
}

function CheckReferralExpiryDate(refx,todate)
{
  if (isWhitespace(refx)) {
    return true;
  }

  if (refx < SetDateYYYYMMDD(todate))
  {
    alert("Duration Until Date cannot be after the Referral Expiry Date (" +
           SetDateDDMMMYYYY(refx) + ")");
    return false;
  }
  return true;
}

function PostSearchCare() {
  if(document.SearchForm.srchftyp[4].checked==true ){
    document.SearchForm.srchclid.className="";
    document.SearchForm.srchclty.className="";
  }
  if(!validateMandatory(SearchForm)) {
    return;
  }
  if(!CheckDateRange(SearchForm.srchdatf,SearchForm.srchdatt)) {
     return;
  } 
  if(!isWhitespace(document.SearchForm.srchclid.value) ||
     !isWhitespace(document.SearchForm.srchclty.value)) {
     alert("Clinic Type and Clinid Id must be blank to search by Care Team.");
     return;
  }
  if(!CheckReferralDate(SearchForm.refrldat.value,SearchForm.srchdatf.value,SearchForm.srchdatt.value)) {
    return;
  }
  if(SearchForm.refrlexp != undefined) {
    if(!CheckReferralExpiryDate(SearchForm.refrlexp.value,SearchForm.srchdatt.value)) {
      return;
    }
  }

  document.SearchForm.srchcare.value="1";
  if(document.SearchForm.srchftyp[4].checked==true ){
    linkurl="outweb08.pbl?reportno=02&template=002" +
    "&srchftyp=5" +
    "&srchdays=" + SearchForm.srchdays.value +
    "&srchdatf=" + SearchForm.srchdatf.value +
    "&srchdatt=" + SearchForm.srchdatt.value
    Left=(document.body.clientWidth-750)/2
    DFrameLink(linkurl,0,Left,750,380)
  } else {
    document.SearchForm.submit();
  }
}

function PostBookings() {
  GetFirstBook();
  if(SessCount==0) {
    alert("Please select at least one appointment");
    return;
  }
  linkurl="outweb08.pbl?reportno=3&template=001" +
          "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
          "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") +
          "&refrlvis=" + document.SearchForm.refrlvis.value.replace(/ /g,"+") +
          "&bookflag=" + document.SearchForm.bookflag.value.replace(/ /g,"+") +
          "&casekeys=" + document.SearchForm.deftcask.value.replace(/ /g,"+");
  Left=(document.body.clientWidth-850)/2
  DFrameLink(linkurl,0,Left,850,750)
}

function GetFirstBook() {
  for (var e = 0; e < AddForm.elements.length; e++) {
    var el=AddForm.elements[e] ;
    if(el.name.match(/seribkey/) && el.value!="") {
     document.SearchForm.deftcask.value=el.value
     return;
    }
  }
}
  
function SearchSes(Sesskey,ReturnCode,ReturnTime) {
  linkurl="outweb08.pbl?reportno=2&template=001&sesskeys="+Sesskey +
          "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+");

  window.ReturnCode=ReturnCode;
  window.ReturnTime=ReturnTime;

  Left=(document.body.clientWidth-260)
  DFrameLink(linkurl,0,Left,250,800)
}
function SearchNextSess() {
  for (var e = 0; e < AddForm.elements.length; e++) {
    var el=AddForm.elements[e] ; 
    if(el.name.match(/serisess/)) {
      var sesskey="serisess" + el.name.substr(8,2);
      var bookkey="seribkey" + el.name.substr(8,2);
      var booktim="seribtim" + el.name.substr(8,2);
      if(isWhitespace(document.AddForm[bookkey].value)) {
         SearchSes(AddForm[sesskey].value,AddForm[bookkey],AddForm[booktim]);
         return;
      }
    }

  }
}
function ClearSel() {
  document.SearchForm.srchcycl.selectIndex=0;
  if(document.SearchForm.srchdays.value!="undefined") {
    document.SearchForm.srchdays.selectIndex=0;
  }
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
function StoreCookie() {
  storesearch="dummyred=1";
  document.cookie = "MultipleHCP" + "=" + escape(storesearch) + ";"
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
             ans=confirm(message)
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
            ans=confirm(message)
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
            ans=confirm(message)
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
  linkUrl="outweb08.pbl?reportno=1&template=001" +
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
  Left=(document.body.clientWidth-800)/2;
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
