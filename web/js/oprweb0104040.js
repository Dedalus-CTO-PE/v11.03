//jsVersion  : V11.03.04
//========================================================================
//  Common functions used by oprweb0104040 
//==========================================================================
function ReLoadDivData() {
 A="0";
 if (ArrivalHeaderExpandIcon.className=="x-tool-left x-tool-collapse") {
   A="1";
 }
 N="0";
 if (AnaestheticHeaderExpandIcon.className=="x-tool-left x-tool-collapse") {
   N="1";
 }
 S="0";
 if (SurgeryHeaderExpandIcon.className=="x-tool-left x-tool-collapse") {
   S="1";
 }
 O="0";
 if (OtherHeaderExpandIcon.className=="x-tool-left x-tool-collapse") {
   O="1";
 }
 R="0";
 if (RecoveryHeaderExpandIcon.className=="x-tool-left x-tool-collapse") {
   R="1";
 }
 Expanded=A + N + S + O + R;
 location.href="oprweb01.pbl?reportno=04&template=040" +
               "&casekeys=" + PatientLinks.casekeys.value.replace(/ /g,"+") +
               "&teamnumb=" + PatientLinks.teamnumb.value.replace(/ /g,"+") +
               "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") +
               "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
               "&nodressg=" + PatientLinks.nodressg.value.replace(/ /g,"+") +
               "&superlev=" + PatientLinks.superlev.value.replace(/ /g,"+") +
               "&showview=" + Expanded
}
function DisplayDIVS() {
 ShowView=document.getElementById("showview").value;
 ExpandArr=ShowView.substr(0,1);
 ExpandAna=ShowView.substr(1,1);
 ExpandSrg=ShowView.substr(2,1);
 ExpandOth=ShowView.substr(3,1);
 ExpandRev=ShowView.substr(4,1);
 if(ExpandArr == "1") {
   ToggleArrival(ArrivalHeaderExpandIcon);
 }
 if(ExpandAna == "1") {
   ToggleAnaesthetic(AnaestheticHeaderExpandIcon);
 }
 if(ExpandSrg == "1") {
   ToggleSurgery(SurgeryHeaderExpandIcon);
 }
 if(ExpandOth == "1") {
   ToggleOther(OtherHeaderExpandIcon);
 }
 if(ExpandRev == "1") {
   ToggleRecovery(RecoveryHeaderExpandIcon);
 }
}
function ToggleArrival(xDiv) {
  if (xDiv.className=="x-tool-left x-tool-expand") {
    xDiv.className="x-tool-left x-tool-collapse";
    document.getElementById('ArrivalDetails').innerHTML=
    document.getElementById('ShowArrivalDetails').innerHTML
    document.getElementById('ArrivalDetails').style.display="";
  }
  else {
    xDiv.className="x-tool-left x-tool-expand";
    document.getElementById('ArrivalDetails').innerHTML="";
    document.getElementById('ArrivalDetails').style.display="none";
  }
}
function ToggleAnaesthetic(xDiv) {
  if (xDiv.className=="x-tool-left x-tool-expand") {
    xDiv.className="x-tool-left x-tool-collapse";
    document.getElementById('AnaestheticDetails').innerHTML=
    document.getElementById('ShowAnaestheticDetails').innerHTML
    document.getElementById('AnaestheticDetails').style.display="";
  }
  else {
    xDiv.className="x-tool-left x-tool-expand";
    document.getElementById('AnaestheticDetails').innerHTML="";
    document.getElementById('AnaestheticDetails').style.display="none";
  }
}
function ToggleSurgery(xDiv) {
  if (xDiv.className=="x-tool-left x-tool-expand") {
    xDiv.className="x-tool-left x-tool-collapse";
    document.getElementById('SurgeryDetails').innerHTML=
    document.getElementById('ShowSurgeryDetails').innerHTML
    document.getElementById('SurgeryDetails').style.display="";
  }
  else {
    xDiv.className="x-tool-left x-tool-expand";
    document.getElementById('SurgeryDetails').innerHTML="";
    document.getElementById('SurgeryDetails').style.display="none";
  }
}
function ToggleOther(xDiv) {
  if (xDiv.className=="x-tool-left x-tool-expand") {
    xDiv.className="x-tool-left x-tool-collapse";
    document.getElementById('OtherDetails').innerHTML=
    document.getElementById('ShowOtherDetails').innerHTML
    document.getElementById('OtherDetails').style.display="";
  }
  else {
    xDiv.className="x-tool-left x-tool-expand";
    document.getElementById('OtherDetails').innerHTML="";
    document.getElementById('OtherDetails').style.display="none";
  }
}
function ToggleRecovery(xDiv) {
  if (xDiv.className=="x-tool-left x-tool-expand") {
    xDiv.className="x-tool-left x-tool-collapse";
    document.getElementById('RecoveryDetails').innerHTML=
    document.getElementById('ShowRecoveryDetails').innerHTML
    document.getElementById('RecoveryDetails').style.display="";
  }
  else {
    xDiv.className="x-tool-left x-tool-expand";
    document.getElementById('RecoveryDetails').innerHTML="";
    document.getElementById('RecoveryDetails').style.display="none";
  }
}
function EnableRegForm() {
 if(document.getElementById("d_printreg").checked == true ) {
    document.getElementById("d_schdprnt").disabled=false;
    document.getElementById("d_schdprnt").className="SelectBig Mandatory";
    document.getElementById("prtButton").disabled=false;
 } else {
    document.getElementById("d_schdprnt").disabled=true;
    document.getElementById("d_schdprnt").className="SelectBig Readonly";
    document.getElementById("prtButton").disabled=true;
 }
}
function SubmitReport(theForm) {
  document.getElementById("schdprnt").value=
  document.getElementById("d_schdprnt").value;
  document.getElementById("redirect").value=location.href;
  theForm.submit();
}
function CalcTheatreMins() {
  var divThtrMins = document.getElementById('divThtrMins');
  var startTime, endTime = "";

  // Get 'Procedure Start Time'
  if (!isWhitespace(DisplayForm.anaestrt.value)) {
    startTime = DisplayForm.anaestrt.value;
  } else if (!isWhitespace(DisplayForm.surgstrt.value)) {
    startTime = DisplayForm.surgstrt.value;
  }
  else {  // no 'Procedure Start Time'
    divThtrMins.innerHTML = "";  // show blank theatre minutes
    return;
  }

  // Get 'Procedure End Time'
  if (!isWhitespace(DisplayForm.patdiedt.value)) {  // Patient Died Time
    endTime = DisplayForm.patdiedt.value;
  } else if (!isWhitespace(DisplayForm.d_opa071.value)) {  // Time into RR First
    endTime = DisplayForm.d_opa071.value;
  } else if (!isWhitespace(DisplayForm.d_opa077.value)) {  // Time into RR Third
    endTime = DisplayForm.d_opa077.value;
  } else if (!isWhitespace(DisplayForm.d_opa083.value)) {  // Time into ICU
    endTime = DisplayForm.d_opa083.value;
  } else if (!isWhitespace(DisplayForm.d_anaeft.value)) {  // Anaes. Finish Time
    endTime = DisplayForm.d_anaeft.value;
  } else if (!isWhitespace(DisplayForm.surgendt.value)) {  // Surgery End Time
    endTime = DisplayForm.surgendt.value;
  }
  else {  // no 'Procedure End Time'
    divThtrMins.innerHTML = "";  // show blank theatre minutes
    return;
  }

  //
  // Calculate theatre minutes ...
  //
  var theatreDate = DisplayForm.casekeys.value.substr(3,8);

  // Set 'From' date/time fields
  DisplayForm.surgfrdt.value = SetDateDDMMMYYYY(theatreDate);
  DisplayForm.surgfrtm.value = startTime;

  // Set 'To' date/time fields
  DisplayForm.surgtodt.value = SetDateDDMMMYYYY(theatreDate);
  if (DisplayForm.ovrnight.value == "Yes") {  // overnight indicator set
     //    // add 1 day to our date
     AddSubtractDate(DisplayForm.surgtodt,"1","A");

  }
  DisplayForm.surgtotm.value = endTime;

  // Calculate the duration
  CalculateDuration(DisplayForm.surgfrdt,DisplayForm.surgfrtm,DisplayForm.surgtodt,DisplayForm.surgtotm,DisplayForm.duration);

  // Display theatre minutes
  divThtrMins.innerHTML = DisplayForm.duration.value + " minutes";
}
function ChgSurgeon() {
  caseKeys=PatientLinks.casekeys.value.replace(/ /g,"+");
  teamNumb=PatientLinks.teamnumb.value;
  linkurl="oprweb06.pbl?reportno=12&template=005&casekeys="+caseKeys+
          "&teamnumb="+teamNumb;
  Left=(document.body.clientWidth-550)/2
  DFrameLink(linkurl,100,Left,550,200)
}
function ChgOpr() {
  linkurl="oprweb01.pbl?reportno=4&template=014&casekeys="
           +PatientLinks.casekeys.value;
  Left=(document.body.clientWidth-550)/2
  DFrameLink(linkurl,100,Left,550,200)
}
function TeamDetails() {
  PatientLinks.teamnumb.value = document.getElementById('thteamno').value;
  PatientLinkTo("oprweb01.pbl",04,40,0,0,0);
}
function DisableSectionButtons() {
 if(document.getElementById("suprlevl").value == "S") {
   return;
 }
 if(!isWhitespace(document.getElementById("AnaPrepCom").innerHTML) ||
    !isWhitespace(document.getElementById("AnaTimeO").innerHTML)) {
    document.getElementById("ArrivalButton").disabled=true;
 }
 if(!isWhitespace(document.getElementById("TimeItOR").innerHTML) ||
    !isWhitespace(document.getElementById("SurgStart").innerHTML)) {
    document.getElementById("AnaestheticButton").disabled=true;
 }
 if(!isWhitespace(document.getElementById("TimeRecovFirst").innerHTML) ||
    !isWhitespace(document.getElementById("RecovAnaHover").innerHTML) ||
    !isWhitespace(document.getElementById("TimeRecovSecond").innerHTML) ||
    !isWhitespace(document.getElementById("TimeRecovThird").innerHTML)) {
   document.getElementById("TeamSurgeryButton").disabled=true;
   document.getElementById("OtherSurgeryButton").disabled=true;
 }
}
function SummaryPage() {
  CaseList=GetContentCookie("CasePath");
  if (CaseList=="unknown") {
    location.href="oprweb01.pbl?reportno=03&template=003" +
                  "&sesskeys=" + PatientLinks.sesskeys.value;
  } else {
    location.href=CaseList;
  }
}
