//jsVersion  : V11.03.00
//========================================================================
function StdPageRefreshOut() {
  if (PopUpScreen.style.display=="none") {

    // IE browser?...
    if (window.navigator.userAgent.match(/MSIE [\d.]+/)) {
      var ver = parseInt(window.navigator.userAgent.match(/MSIE ([\d.]+)/)[1]);
      if (ver < 9) {
        // for versions before 9.0
        if (!document.hasFocus())
          return;  // browser window doesn't have focus; so don't refresh
      }
    }
    var refreshURL="outweb02.pbl?reportno=2&template=22&sesskeys=" +
                     document.UpdateStatus.sesskeys.value.replace(/ /g,"+") +
                    "&tablview=" +
                     document.SelectPeriod.viewlink.value.replace(/ /g,"+")
    if(document.SelectPeriod.contview!=undefined) {
        refreshURL+="&contview=" +
                     document.SelectPeriod.contview.value.replace(/ /g,"+")
    }
    if(document.SelectPeriod.wacpmich!=undefined) {
        refreshURL+="&wacpmich=" +
                     document.SelectPeriod.wacpmich.value.replace(/ /g,"+")
    }
    location.href=refreshURL;
  }
}
function ProcessBulkCheckIn() {
  if(!checkFutureCheckInTime()){ return; }
  RemoveAppointments(CheckInForm);
//  if(!GetAppointments(CheckInForm)) {
//    return;
//  }
  if(!GetConfPmiw(CheckInForm)) {
    return;
  }
  if(isWhitespace(CheckInForm.outbb032.value)) {
    alert(CheckInForm.outbb032.title + " is a required field" +
          ".\nPlease enter it now." )
    CheckInForm.outbb032.focus();
    return;
  }
  if (validateMandatory(CheckInForm)) {
    CheckInForm.redirect.value="outweb02.pbl?reportno=2&template=22" +
    "&sesskeys=" + CheckInForm.sesskeys.value.replace(/ /g,"+") +
    "&redirflg=" + CheckInForm.redirflg.value.replace(/ /g,"+") +
    "&wacpmich=" + CheckInForm.wacpmich.value.replace(/ /g,"+");
    CheckInForm.submit();
  }
}
function checkFutureCheckInTime() {
  p=document.CheckInForm;
  if(isWhitespace(p.d_sessdate.value) || isWhitespace(p.outbb032.value)) {
     return true;
  }
  SetCurrentDateTimeNoFocus(p.currdate,p.currtime);// UNIX time
  if(SetDateYYYYMMDD(p.d_sessdate.value)>SetDateYYYYMMDD(p.currdate.value)) {
    alert("Check in date should not be in future");
    return false;
  }
  if (SetDateYYYYMMDD(p.d_sessdate.value)==SetDateYYYYMMDD(p.currdate.value)) {
    var newttime=trim(p.outbb032.value.replace(/:/g,"")) - 0
    var currentt=trim(p.currtime.value.replace(/:/g,"")) - 0
    if(newttime>currentt){
      alert("Check in time should not be in future");
      return false;
    }
  }
  return true;
}
function ProcessBulkTimeSeen() {
  if(isWhitespace(TimeSeenForm.outbb033.value)) {
    LoadBulkTimeSeen();
    return;
  }
  if(!checkFutureTimeSeenTime()){ return; }
  RemoveAppointments(TimeSeenForm);
//  if(!GetAppointments(TimeSeenForm)) {
//    return;
//  }
  if(!GetConfPmiw(TimeSeenForm)) {
    return;
  }
  if(isWhitespace(TimeSeenForm.outbb033.value)) {
    alert(TimeSeenForm.outbb033.title + " is a required field" +
          ".\nPlease enter it now." )
    TimeSeenForm.outbb033.focus();
    return;
  }
  if (validateMandatory(TimeSeenForm)) {
    TimeSeenForm.redirect.value="outweb02.pbl?reportno=2&template=22" +
    "&sesskeys=" + TimeSeenForm.sesskeys.value.replace(/ /g,"+") +
    "&redirflg=" + TimeSeenForm.redirflg.value.replace(/ /g,"+") +
    "&wacpmich=" + TimeSeenForm.wacpmich.value.replace(/ /g,"+");
    TimeSeenForm.submit();
  }
}
function checkFutureTimeSeenTime() {
  p=document.TimeSeenForm;
  if(isWhitespace(p.d_sessdate.value) || isWhitespace(p.outbb033.value)) {
     return true;
  }
  SetCurrentDateTimeNoFocus(p.currdate,p.currtime);// UNIX time
  if(SetDateYYYYMMDD(p.d_sessdate.value)>SetDateYYYYMMDD(p.currdate.value)) {
    alert("Time seen date should not be in future");
    return false;
  }
  if (SetDateYYYYMMDD(p.d_sessdate.value)==SetDateYYYYMMDD(p.currdate.value)) {
    var newttime=trim(p.outbb033.value.replace(/:/g,"")) - 0
    var currentt=trim(p.currtime.value.replace(/:/g,"")) - 0
    if(newttime>currentt){
      alert("Time seen should not be in future");
      return false;
    }
  }
  return true;
}
function RemoveAppointments(theForm) {
  var appts = document.getElementsByTagName("input");
  for (i=0; i<appts.length; i++) {
    if(appts[i].type=="hidden" &&
       appts[i].id.substr(0,16)=="selectedslotkeys"){
       theForm.removeChild(appts[i]);
       
    }
  }
}
function GetAppointments(theForm) {
  var appts = document.getElementsByTagName("input");
  var y=0;
  for (i=0; i<appts.length; i++) {
    if(appts[i].type=="checkbox" && 
       appts[i].checked==true && 
       appts[i].name=="slotkeys") {
       y++; 
  var newid="selectedslotkeys" + y;
  var the_field = document.createElement('INPUT');
      the_field.setAttribute('value',appts[i].value.substr(0,3));
      the_field.setAttribute('name','slotkeys');
      the_field.setAttribute('id',newid);
      the_field.setAttribute('type','hidden');
      theForm.appendChild(the_field);
    }
  }
  if(y==0) {
   alert("Please select at least one valid patient") 
   return false;
  } else {
   return true;
  }
  
}
function ProcessBulkDepart() {
  if(isWhitespace(DepartureForm.outbb034.value)) {
    LoadBulkDeparture();
    return;
  }
  RemoveAppointments(DepartureForm);
//  if(!GetAppointments(DepartureForm)) {
//    return;
//  }
  if(!GetConfPmiw(DepartureForm)) {
    return;
  }
  if(isWhitespace(DepartureForm.outbb034.value)) {
    alert(DepartureForm.outbb034.title + " is a required field" +
          ".\nPlease enter it now." )
    DepartureForm.outbb034.focus();
    return;
  }
  if (validateMandatory(DepartureForm)) {
    DepartureForm.redirect.value="outweb02.pbl?reportno=2&template=22" +
    "&sesskeys=" + DepartureForm.sesskeys.value.replace(/ /g,"+") +
    "&redirflg=" + DepartureForm.redirflg.value.replace(/ /g,"+") +
    "&wacpmich=" + DepartureForm.wacpmich.value.replace(/ /g,"+");
    DepartureForm.submit();
  }
}
function setPrinter(CheckBox,SelectList) {
  if (CheckBox.checked) {
    SelectList.className="SelectBig Mandatory"; }
  else {
    SelectList.className="SelectBig"; }
}
//
function SendLetter(theForm) {
  if(theForm.outbb047.value.substr(10,1) == "C" ||
    (SetDateYYYYMMDD(theForm.clindate.value.substr(4,11)) <
     SetDateYYYYMMDD(theForm.currdate.value))) {   // Ind 8 - Chart Only or
    theForm.outbb067.selectedIndex=3;              // new booking less than
    theForm.outbb067.className="Readonly";         // today set send letter
    theForm.outbb067.disabled=true;                // N/A
  } else {
    if(theForm.outbb067.disabled==true) {          // Default send letter to
       theForm.outbb067.selectedIndex=0;           // Blank when re enabled
    }
    theForm.outbb067.className="";
    theForm.outbb067.disabled=false;
  }
  SendLetterDate(theForm);
}
//
function SendLetterDate(theForm) {
  if(theForm.outbb067.value=="1") {                // Yes Send Letter
    theForm.outbb066.className="Mandatory FutureDate";
    theForm.outbb066.readOnly=false;
    if(isWhitespace(theForm.outbb066.value)) {     // Calculate Letter Date
      CalculateLetterDate(theForm)
    }
  } else {
    theForm.outbb066.className="Readonly Date";
    theForm.outbb066.value="";
    theForm.outbb066.readOnly=true;
  }
}
//
function CalculateLetterDate(theForm) {
  theForm.outbb066.value=theForm.clindate.value.substr(4,11);
  if(isWhitespace(theForm.clindate.value.substr(4,11))) {
    return;
  }
  AddSubtractDate(theForm.outbb066,theForm.othendps.value,"S");
  if(SetDateYYYYMMDD(theForm.outbb066.value) <=
     SetDateYYYYMMDD(theForm.currdate.value)) {
     theForm.outbb066.value=theForm.currdate.value;
  }
}
//
function ResetLetter(theForm) {
    theForm.outbb067.selectedIndex=0;
    theForm.outbb066.value="";
    theForm.outbb066.readOnly=false;
    theForm.outbb066.className="Date";
}
//
function submitFoll() {
  RemoveAppointments(FollowUpForm);
  if(!GetAppointments(FollowUpForm)) {
    return;
  }
  if (validateMandatory(FollowUpForm)) {
    FollowUpForm.redirect.value="outweb02.pbl?reportno=2&template=22" +
    "&sesskeys=" + FollowUpForm.sesskeys.value.replace(/ /g,"+") +
    "&redirflg=" + FollowUpForm.redirflg.value.replace(/ /g,"+") +
    "&wacpmich=" + FollowUpForm.wacpmich.value.replace(/ /g,"+");
    FollowUpForm.submit();
  }
}
function cancelFoll() {
  location.href="../cgi-bin/outweb02.pbl?reportno=2&template=4&sesskeys="+
                FollowUpForm.sesskeys.value.replace(/ /g,"+");
}
function ProcessBulkEncounter() {
  var appts = document.getElementsByTagName("input");
  for (i=0; i<appts.length; i++) {
    if(appts[i].type=="checkbox" &&
       appts[i].id.substr(0,8)=="referral"){
       UpdateForm.removeChild(appts[i]);
    }
  }
  var appts = document.getElementsByTagName("input");
  var y=0;
  for (i=0; i<appts.length; i++) {
    if(appts[i].type=="checkbox" && appts[i].checked==true &&
       appts[i].name=="slotkeys") {
       if(isWhitespace(appts[i].value.substr(3,8))){ 
         alert(appts[i].value.substr(47,8) + " has no linked referral.");
         appts[i].checked=false;
       } else {
         y++;
         var newid="referral" + y;
         var the_field = document.createElement('INPUT');
             the_field.setAttribute('name','referral');
             the_field.setAttribute('id',newid);
             the_field.setAttribute('type','checkbox');
             the_field.setAttribute('checked','checked');
             UpdateForm.appendChild(the_field);
             document.getElementById(newid).checked=true;
             document.getElementById(newid).style.display="none";
             document.getElementById(newid).value=appts[i].value.substr(3,16);
      }
    } 
  }
  if(y==0) {
    alert("Please select at least one patient with a linked referral");
    return;
  }
  if(isWhitespace(UpdateForm.otheadep.value)) {
    alert("Referral Management Department not setup for this clinic");
    return;
  }
  ExpireCookiePath("CheckInTimeCookie");
  ExpireCookiePath("TimeSeenOnlyCookie");
  ExpireCookiePath("DeprtRedCookie");
  ExpireCookiePath("DepartureTimeCookie");
  SetCookie("SlotTimeAllocCookie",UpdateForm.othedurn.value);
  linkurl="allweb03.pbl?reportno=13&template=001" +
          "&deptcode=" + UpdateForm.otheadep.value.replace(/ /g,"+")
  Left=(document.body.clientWidth-900)/2
  DFrameLink(linkurl,0,Left,900,550)
}
function ShowBulkContact(){
  if(document.UpdateStatus.othecenc.value=="1") {
    InsertTimeSeenButton.style.display="none";
    InsertContactButton.style.display="";
  }
}
function ListContacts(Ur,RefNo,RefDep,OpVis) {
  linkUrl="allweb03.pbl?reportno=1&template=009" +
          "&urnumber=" + Ur.replace(/ /g,"+") +
          "&admissno=" + RefNo.replace(/ /g,"+") +
          "&deptcode=" + RefDep.replace(/ /g,"+") +
          "&bulkenck=" + RefNo.replace(/ /g,"+") +
                         OpVis.replace(/ /g,"+")
          Left=(document.body.clientWidth-900)/2
  DFrameLink(linkUrl,0,Left,930,550)
}
function SeriesLink(urno,series,admis) {
    linkurl="outweb08.pbl?reportno=05&template=002" +
            "&urnumber=" + urno.replace(/ /g,"+") +
            "&admissno=" + admis.replace(/ /g,"+") +
            "&seriesno=" + series.replace(/ /g,"+") ;
    Left=(document.body.clientWidth-800)/2
    DFrameLink(linkurl,0,Left,800,380)
}
function LoadBulkDeparture() {
  var appts = document.getElementsByTagName("input");
  var y=0;
  for (i=0; i<appts.length; i++) {
    if(appts[i].type=="checkbox" &&
       appts[i].checked==true &&
       appts[i].name=="slotkeys") {

      if (appts[i+1].type=="hidden" &&
          appts[i+1].name=="confpmiw") {

        alert("Function not available\n" +
              "Confirm PMI date less than clinic date for\n" +
              "Outpatient: " + appts[i+1].value)

      } else {
        y++;
      }
    }
  }
  if(y==0) {
   alert("Please select at least one valid patient")
   return;
  }
  linkurl="outweb02.pbl?reportno=02&template=023" +
          "&sesskeys=" +
          document.DepartureForm.sesskeys.value.replace(/ /g,"+") +
          "&wacpmich=" + DepartureForm.wacpmich.value.replace(/ /g,"+");
  Left=(document.body.clientWidth-750)/2
  DFrameLink(linkurl,0,Left,750,200)
}
function LoadBulkTimeSeen() {
  var appts = document.getElementsByTagName("input");
  var y=0;
  for (i=0; i<appts.length; i++) {
    if(appts[i].type=="checkbox" &&
       appts[i].checked==true &&
       appts[i].name=="slotkeys") {
       y++;
    }
  }
  if(y==0) {
   alert("Please select at least one valid patient")
   return;
  }
  linkurl="outweb02.pbl?reportno=02&template=024" +
          "&sesskeys=" +
          document.DepartureForm.sesskeys.value.replace(/ /g,"+")
  Left=(document.body.clientWidth-750)/2
  DFrameLink(linkurl,0,Left,750,200)
}
function AhAutoCheckIn(time) {
  if(isWhitespace(time) || (time.indexOf(":") == -1)) { return; }
  var appts = document.getElementsByTagName("input");
  for (i=0; i<appts.length; i++) {
    if(appts[i].type=="checkbox" && appts[i].checked==true &&
       appts[i].name=="slotkeys" && 
       appts[i].value.substr(55,1) == "1" &&
       !isWhitespace(appts[i].value.substr(3,8))) {
       var serverURL = "../cgi-bin/outweb02.pbl?reportno=9&updatety=3" +
                       "&urnumber=" + appts[i].value.substr(47,8) +
                       "&admissno=" + appts[i].value.substr(11,8) +
                       "&casekeys=" + appts[i].value.substr(19,28) +
                       "&updttime=3" +
                       "&outbb032=" + time
       serverURL=serverURL.replace(/ /g,"+")
       var returnValue = RSExecute(serverURL)
    }
  }
}
function AhAutoTimeSeen(time) {
  if(isWhitespace(time) || (time.indexOf(":") == -1)) { return; }
  var appts = document.getElementsByTagName("input");
  for (i=0; i<appts.length; i++) {
    if(appts[i].type=="checkbox" && appts[i].checked==true &&
       appts[i].name=="slotkeys" &&
       appts[i].value.substr(55,1) == "4" &&
       !isWhitespace(appts[i].value.substr(3,8))) {
       var serverURL = "../cgi-bin/outweb02.pbl?reportno=9&updatety=3" +
                       "&urnumber=" + appts[i].value.substr(47,8) +
                       "&admissno=" + appts[i].value.substr(11,8) +
                       "&casekeys=" + appts[i].value.substr(19,28) +
                       "&updttime=4&ahautots=1" +
                       "&outbb033=" + time
       serverURL=serverURL.replace(/ /g,"+")
       var returnValue = RSExecute(serverURL)
    }
  }
}
function CpmiError(cbox) {
 alert("Function not available\n" +
               "Confirm PMI date less than clinic date.");
  cbox.checked=false;
} 
function ProcessBulkDNA() {
ans=confirm('This will update all patients that have not attended \n Continue?')
  if (ans) {
    var currLocation = "outweb02.pbl?reportno=02&template=022";
    var key =BulkDNA .sesskeys.value.replace(/ /g,"+");
    BulkDNA.redirect.value=currLocation + "&sesskeys=" + key +
       "&wacpmich=" + BulkDNA.wacpmich.value.replace(/ /g,"+");
    BulkDNA.submit() }
}
function GetConfPmiw(theForm) {
  var appts = document.getElementsByTagName("input");
  var y=0;
  for (i=0; i<appts.length; i++) {
    if(appts[i].type=="checkbox" &&
       appts[i].checked==true &&
       appts[i].name=="slotkeys") {

      if (appts[i+1].type=="hidden" &&
          appts[i+1].name=="confpmiw") {

        alert("Function not available\n" +
              "Confirm PMI date less than clinic date for\n" +
              "Outpatient: " + appts[i+1].value);

      } else {

        y++;
        var newid="selectedslotkeys" + y;
        var the_field = document.createElement('INPUT');
        the_field.setAttribute('value',appts[i].value.substr(0,3));
        the_field.setAttribute('name','slotkeys');
        the_field.setAttribute('id',newid);
        the_field.setAttribute('type','hidden');
        theForm.appendChild(the_field);
      }
    }
  }
  if(y==0) {
   alert("Please select at least one valid patient")
   return false;
  } else {
   return true;
  }

}
