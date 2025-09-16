//jsVersion  : V11.03.00
//========================================================================
// Program   : allweb0202002.js
//========================================================================
//
function OpenDocument(LinkUrl) {
  NewWindow=window.open(LinkUrl,"NewWindow",
  "top=10,left=10,width=640,height=400,location=no,toolbar=yes,scrollbars=yes")
}
function AddEnc(ur,ad,dp,status,triage,tstatus) {
  if(trim(status)=="Cancelled") {
    alert("Encounter Cannot be added to a Cancelled Referral");
    return;
  }
  if(triage!=undefined){
    if(!isWhitespace(triage)) {
      alert("Referral Priority Code = " + triage +
            "\nPlease change priority before adding contacts");
      return;
    }
  }
  if(tstatus!=undefined){
    if(!isWhitespace(tstatus)) {
      alert("Referral Triage Status Code = " + tstatus +
           "\nPlease change triage status before adding contacts");
      return;
    }
  }
  linkUrl="allweb03.pbl?reportno=01&template=002" +
          "&urnumber=" + ur.replace(/ /g,"+") +
          "&admissno=" + ad.replace(/ /g,"+") +
          "&deptcode=" + dp.replace(/ /g,"+");
  Left=(document.body.clientWidth-900)/2
  DFrameLink(linkUrl,50,Left,900,520)
}
function getUpdate(ur,ad,dp) {
  linkUrl="allweb02.pbl?reportno=2&template=3" +
          "&urnumber=" + ur.replace(/ /g,"+") +
          "&admissno=" + ad.replace(/ /g,"+") +
          "&deptcode=" + dp.replace(/ /g,"+");
  Left=(document.body.clientWidth-1000)/2
  DFrameLink(linkUrl,10,Left,1000,900)
}

function getReject(ur,ad,dp) {
  linkUrl="allweb02.pbl?reportno=2&template=10" +
          "&urnumber=" + ur.replace(/ /g,"+") +
          "&admissno=" + ad.replace(/ /g,"+") +
          "&deptcode=" + dp.replace(/ /g,"+");
  Left=(document.body.clientWidth-1000)/2
  DFrameLink(linkUrl,10,Left,1000,400)
}

function getCopy(ur,ad,dp) {
  linkUrl="allweb02.pbl?reportno=3&template=3" +
          "&urnumber=" + ur.replace(/ /g,"+") +
          "&admissno=" + ad.replace(/ /g,"+") +
          "&deptcode=" + dp.replace(/ /g,"+")+
          "&copyflag=1";
  Left=(document.body.clientWidth-1000)/2
  DFrameLink(linkUrl,0,Left,1000,900);
}
function getCopyNZ(ur,ad,dp,primary) {

  linkUrl="allweb02.pbl?reportno=3&template=3" +
          "&urnumber=" + ur.replace(/ /g,"+") +
          "&admissno=" + ad.replace(/ /g,"+") +
          "&deptcode=" + dp.replace(/ /g,"+") +
          "&copyflag=1";
  if(primary=="Yes") {
    linkUrl+="&sacsvisn=" + ad.replace(/ /g,"+")
  }

  var serverURL = "../cgi-bin/allweb02.pbl?reportno=6&updatety=P" +
                  "&urnumber=" + ur.replace(/ /g,"+") +
                  "&deptcode=" + dp.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|");
  if (returnValue.status==0) {
    if (ReturnValue[0] == 1) {

      var message = "Patient has a Waiting or Active Primary Referral for " +
                    trim(document.getElementById("copselct").options[document.getElementById("copselct").selectedIndex].innerHTML) +
                    ". " +
                    "\nDo you want to add a non-Primary Referral?";
      if(confirm(message)) {
         linkUrl+="&saveprim=0"
         Left=(document.body.clientWidth-900)/2
         DFrameLink(linkUrl,0,Left,900,900);
       }
       else {
         return false;
       }
    } else {
         linkUrl+="&saveprim=1"
         Left=(document.body.clientWidth-900)/2
         DFrameLink(linkUrl,0,Left,900,900);
    }
  } else {
    return false;
  }
}
function MHReferrals() {
  PatientLinkTo("mehweb01.pbl",9,1,0,0,0);
}
function HONOSDetails() {
  PatientLinkTo("allweb06.pbl",4,1,0,0,0);
}
function HONOSSupervisor() {
  PatientLinkTo("allweb06.pbl",4,15,0,0,0);
}
function SuppConsumerRecord() {
  PatientLinkTo("mehweb02.pbl",3,1,0,0,0);
}
function BookPatient(reflsite,status,statdate,triage,tstatus) {
  if(reflsite != PatientLinks.wbsesite.value) {
    alert("Referral preferred outpatient site mismatch with user id.");
    return;
  }
  if(status!=undefined) {
    if(trim(status)=="Cancelled" || trim(status)=="Rejected" ||
       trim(status)=="Inactive" || trim(status)=="Closed") {
      alert("Bookings Cannot be made from an " +
            "Inactive/Cancelled/Rejected/Closed Referral");
      return;
    }
  }
//  if(status!=undefined && statdate!=undefined){
//    if(trim(status)=="Closed") {
//      if(!confirm("Warning this referral was closed on " + statdate + "\n" +
//                  "Click OK to continue, Cancel to Abort.")) {
//        return;
//      }
//    }
//  }
  if(triage!=undefined){
    if(!isWhitespace(triage)) {
      alert("Referral Priority Code = " + triage + 
            "\nPlease change priority before creating/linking appointment");
      return;
    }
  }
  if(tstatus!=undefined){
    if(!isWhitespace(tstatus)) {
      alert("Referral Triage Status Code = " + tstatus + 
           "\nPlease change triage status before creating/linking appointment");
      return;
    }
  }
  PatientLinks.bookflag.value="2";
  PatientLinkTo("patweb98.pbl",1,1,0,0,0);
}
function BookPatientS(reflsite,status,statdate,triage,tstatus) {
  if(reflsite != PatientLinks.wbsesite.value) { 
    alert("Referral preferred outpatient site mismatch with user id.");
    return;
  } 
  if(status!=undefined) {
    if(trim(status)=="Cancelled" || (trim(status)=="Rejected" ||
       trim(status)=="Inactive")) { 
      alert("Bookings Cannot be made from a " +
            "Inactive/Cancelled/Rejected Referral");
      return;
    } 
  } 
  if(status!=undefined && statdate!=undefined){
    if(trim(status)=="Closed") {
      if(!confirm("Warning this referral was closed on " + statdate + "\n" +
                  "Click OK to continue, Cancel to Abort.")) {
        return;   
      } 
    } 
  } 
  if(triage!=undefined){
    if(!isWhitespace(triage)) {
      alert("Referral Priority Code = " + triage +
            "\nPlease change priority before creating/linking appointment");
      return;
    }
  }
  if(tstatus!=undefined){
    if(!isWhitespace(tstatus)) {
      alert("Referral Triage Status Code = " + tstatus +
           "\nPlease change triage status before creating/linking appointment");
      return;
    }
  }
  PatientLinks.bookflag.value="2";
  PatientLinks.refrlvis.value=PatientLinks.admissno.value;
  PatientLinkTo("outweb08.pbl",1,1,0,0,0);
}
function BookPatientMHCPS(reflsite,status,statdate,triage,tstatus) {
  if(reflsite != PatientLinks.wbsesite.value) {
    alert("Referral preferred outpatient site mismatch with user id.");
    return;
  }
  if(status!=undefined) {
    if(trim(status)=="Cancelled" || (trim(status)=="Rejected" ||
       trim(status)=="Inactive")) {
      alert("Bookings Cannot be made from a " +
            "Inactive/Cancelled/Rejected Referral");
      return;
    }
  }
  if(status!=undefined && statdate!=undefined){
    if(trim(status)=="Closed") {
      if(!confirm("Warning this referral was closed on " + statdate + "\n" +
                  "Click OK to continue, Cancel to Abort.")) {
        return;
      }
    }
  }
  if(triage!=undefined){
    if(!isWhitespace(triage)) {
      alert("Referral Priority Code = " + triage +
            "\nPlease change priority before creating/linking appointment");
      return;
    }
  }
  if(tstatus!=undefined){
    if(!isWhitespace(tstatus)) {
      alert("Referral Triage Status Code = " + tstatus +
           "\nPlease change triage status before creating/linking appointment");
      return;
    }
  }
  PatientLinks.bookflag.value="2";
  PatientLinks.refrlvis.value=PatientLinks.admissno.value;
  PatientLinkTo("outweb08.pbl",1,2,0,0,0);
}
function LnkVis(ur,ad,dp,triage,tstatus) {
  if(triage!=undefined){
    if(!isWhitespace(triage)) {
      alert("Referral Priority Code = " + triage +
            "\nPlease change priority before creating/linking appointment");
      return;
    }
  }
  if(tstatus!=undefined){
    if(!isWhitespace(tstatus)) {
      alert("Referral Triage Status Code = " + tstatus +
           "\nPlease change triage status before creating/linking appointment");
      return;
    }
  }
  linkUrl="allweb02.pbl?reportno=4&template=1" +
          "&urnumber=" + ur.replace(/ /g,"+") +
          "&admissno=" + ad.replace(/ /g,"+") +
          "&deptcode=" + dp.replace(/ /g,"+");
  location.href=linkUrl;
}
function LnkRef(ur,ad,dp) {
  linkUrl="allweb02.pbl?reportno=7&template=1" +
          "&urnumber=" + ur.replace(/ /g,"+") +
          "&admissno=" + ad.replace(/ /g,"+") +
          "&deptcode=" + dp.replace(/ /g,"+");
  location.href=linkUrl;
}
function DisplayDIVS() {
  DisplayHIC();
  DisplaySACS();
}
function DisplayHIC() {
  if((document.PatientLinks.ibcnumci.value=="1" ||
     document.PatientLinks.d_alref083.value=="Yes" ||
     document.PatientLinks.d_aldep017.value=="1" ||
     !isWhitespace(document.PatientLinks.d_alref119.value)) &&
     document.PatientLinks.d_aldep020.value!="1") {
    var BookingMenuName="OutpatMenu";
    var CareLogistics=document.HiddenFields.deptindc.value.substr(63,2);
    if (CareLogistics=="UG") {  BookingMenuName="CareLogisticsMenu"; }
    var BookingMenu=document.getElementById(BookingMenuName);
    BookingMenu.style.display="";
  }
}
function DisplaySACS() {
  if (document.PatientLinks.d_alref083.value=="Yes") {
    InsertSACSButtons.style.display="";
    var x = ibaGetElement("d_allrf001");
    for (var i=0; i < x.length; i++) 
    {
         var V1=x.options[i].value;
         if ((V1.substr(0,3)) == document.HiddenFields.refrdept.value) {
              x.remove(i);
              i--;
         }
    }
    if(document.HiddenFields.refrstat.value.substr(0,9)=="Cancelled" ||
       document.HiddenFields.refrstat.value.substr(0,8)=="Rejected" ||
       document.HiddenFields.refrstat.value.substr(0,6)=="Closed") {
      document.getElementById("intbuttn").disabled=true;
      document.getElementById("intselct").disabled=true;
    }
  } else {
    InsertSACSButtons.style.display="none";
  }
  var c=ibaGetElement("c_allrf001");
  if(c!=null) { 
    c.selectedIndex=0;
  }
}
//
function DisplayDIVSNZ() {
  if (document.PatientLinks.d_alref083.value=="Yes") {
      InsertSACSButtons.style.display="";
  } else {
    if (DoNotCopyRef == "1") {
      copselct.style.display="none";
    }
  }

  if ((document.PatientLinks.d_alref083.value=="Yes") &&
      (document.PatientLinks.d_aldep020.value =="1")) {
        var BookingMenuName="OutpatMenuPrimary";
  } else {
        var BookingMenuName="OutpatMenu";
  }

  var CareLogistics=document.HiddenFields.deptindc.value.substr(63,2);
  if (CareLogistics=="UG") {  BookingMenuName="CareLogisticMenu"; }
  var BookingMenu=document.getElementById(BookingMenuName);
  BookingMenu.style.display="";

  ibaGetElement('d_allrf001').selectedIndex=0;

/* Show Wait List Menu */
  if(document.HiddenFields.deptindc.value.substr(57,1)=="W") {
   var WaitlistMenu=document.getElementById("WLMenu");
   WaitlistMenu.style.display="";
  }

/* Show Mental Health Menu */
  var mhreferr=document.HiddenFields.deptindc.value.substr(6,1);
  if(mhreferr=="M" && document.PatientLinks.d_alref083.value=="Yes"){
     var MentalHealthMenu=document.getElementById("MHMenu");
     MentalHealthMenu.style.display="";
  }
}
//
function AddNewReferral(dept) {
  document.AddReferral.allrf001.value=dept.value;

  var serverURL = "../cgi-bin/allweb02.pbl?reportno=6&updatety=P" +
                  "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
                  "&deptcode=" + dept.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|");
  if (returnValue.status==0) {
    if (ReturnValue[0] == 1) {

      var message = "Patient has a Waiting or Active Primary Referral for " +
                    trim(dept.options[dept.selectedIndex].innerHTML) +
                    ". " +
                    "\nDo you want to add a non-Primary Referral?";
      if(confirm(message)) {
         AddReferral.saveprim.value = 0;
         Left=(document.body.clientWidth-1000)/2
         DFrameSubmit(AddReferral,0,Left,1000,1000);
       }
       else {
         AddReferral.saveprim.value = 1;
         return false;
       }
    } else {
         AddReferral.saveprim.value = 1;
         Left=(document.body.clientWidth-1000)/2
         DFrameSubmit(AddReferral,0,Left,1000,1000);
    }
  } else {
    AddReferral.saveprim.value = 1;
    return false;
  }
}
function AddUserReferral() {
   document.PatientLinks.wbsedall.value=document.HiddenFields.wbsedall.value
   if(isWhitespace(document.PatientLinks.wbsedall.value)) {
     alert("User does not have a default department.");
     return;
   }
   document.AddReferral.allrf001.value=document.PatientLinks.wbsedall.value;
   if(document.HiddenFields.refrdept.value==
      document.AddReferral.allrf001.value) {
      alert("Internal referral department conflict - " +
            "Department must be different to that of the current referral");
     return;
   }
   Left=(document.body.clientWidth-900)/2
   DFrameSubmit(AddReferral,50,Left,900,900);
}
function ViewLink(OptionLink) {
  switch (OptionLink.value) {
    case "0": { Inactivate(); break; }
    case "1": { Reactivate(); break; }
    case "2": { Close(); break; }
    case "3": { Cancel(); break; }
    case "4": { Reject(); break; }
    case "5": { Reinstate(); break; }
    case "6": { waiting(); break; }
  }
  OptionLink.selectedIndex=0;
}
/*         
function ViewOutpatientLink(OptionLink) {
switch (OptionLink.value) {
case "0": { BookPatient('%ALLWEB02.02.182.1'); break; }
case "1": { BookPatientS('%ALLWEB02.02.182.1'); break; }
case "2": { BookPatientMHCPS('%ALLWEB02.02.182.1'); break; }
//case "3": { 
//  LnkVis('%ALLWEB02.02.003','%ALLWEB02.02.081','%ALLWEB02.02.125.1')";
//  break; }
}
OptionLink.selectedIndex=0;
}*/

function Inactivate() {
   linkurl="allweb02.pbl?reportno=2&template=005" +
           "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+")
   DFrameLink(linkurl,50,50,700,300)
}
function Reactivate() {
   linkurl="allweb02.pbl?reportno=2&template=006" +
           "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+")
   DFrameLink(linkurl,50,50,700,300)
}
function Close() {
   ExpireCookiePath("OutpatientList");
   linkurl="allweb02.pbl?reportno=2&template=004" +
           "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") +
           "&deptcode=" + HiddenFields.refrdept.value.replace(/ /g,"+")
   DFrameLink(linkurl,50,50,1000,600)
}
function Cancel() {
   linkurl="allweb02.pbl?reportno=2&template=007" +
           "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+")
   DFrameLink(linkurl,50,50,700,300)
}
function Reject() {
   linkurl="allweb02.pbl?reportno=2&template=010" +
           "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+")
   DFrameLink(linkurl,50,50,700,300)
}
function Reinstate() {
   linkurl="allweb02.pbl?reportno=2&template=011" +
           "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+")
   DFrameLink(linkurl,50,50,700,300)
}
function EnctrLink(Location) {
  Left=(document.body.clientWidth-920)/2
  DFrameLink(Location,50,Left,920,600);
}

function waiting() {
   linkurl = "allweb02.pbl?reportno=2&updatety=K" +
             "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
             "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+");
   RSExecute(linkurl);
   location.reload(true);
}
function ShowCreateProgramRef() {
  if(document.PatientLinks.d_alref083.value == "Yes" ||
     document.PatientLinks.d_alrenvin.value == "Yes" ||
    (typeOfProgram!="O" && typeOfProgram!="S" && typeOfProgram!="T") ||
    (document.PatientLinks.d_alrestat.value!="0" && 
     document.PatientLinks.d_alrestat.value!="1") ||
    !isWhitespace(document.PatientLinks.d_mastrefn.value)) {
    return;
  }
  if(document.PatientLinks.alcndevp.value=="1" &&
     document.PatientLinks.d_alreevpr.value.substr(4,1)=="E") {
     return;
  }
  ProgramRef.style.display="";
}
function CreateProgramRef() {
  var dept="";
  var serverURL = "../cgi-bin/allweb02.pbl?reportno=6&updatety=9" +
              "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|");
  if (returnValue.status==0) {
    dept= ReturnValue[0];
  }  
  if(isWhitespace(dept)) {
    alert("Program referral department not setup");
    return;
  }
  linkurl="allweb02.pbl?reportno=3&template=001" +
          "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
          "&intrvisn=" + PatientLinks.admissno.value.replace(/ /g,"+") +
          "&allrf001=" + dept
  Left=(document.body.clientWidth-900)/2
  DFrameLink(linkurl,50,Left,900,550)
}
function ViewWLLink(OptionLink) {
  switch (OptionLink.value) {
  case "0": { ReferralAddWL(); break; }
  case "1": { ReferralLinkWL(); break; }
  }
  OptionLink.selectedIndex=0;
}
function ReferralAddWL() {
  linkurl="watweb01.pbl?reportno=2&template=002" +
          "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
          "&refrlvis=" + PatientLinks.admissno.value.replace(/ /g,"+")
  location.href=linkurl;
}
function ReferralLinkWL() {
  PatientLinkTo("allweb02.pbl",14,1,0,0,0);
}
//------------------------------------------------------------
// Link to UltraGenda from Referral Level Menu
//------------------------------------------------------------
function OpenCareLogisticsReferral(DepartmentCode, SlotType, ProblemCode, ReferringHCP, ResponsibleHCP) {
  var url = UGLaunchURL;
//
// Launch with AppointmentType and OrderSet as per Specification.
// Must have a SlotType or ProblemCode to pass to UG
//
//  var t = new Date().getTime();
//  var m = Math.round(t/60000);
//  if (isWhitespace(SlotType)&&isWhitespace(ProblemCode)) {
//    alert("Referral Must have either a Slot Type or Problem Code before an appointment can be created");
//    return;
//  }
//  url="UGLaunch.php?PatientId="+trim(PatientURN)+
//                  "&OrderDepartmentAbbreviation="+encodeURIComponent(DepartmentCode)+
//                  "&OrderNumber="+trim(PatientVIS)+"-"+m+
//                  "&OrderFunctionAbbreviation=BOOK"+
//                  "&OrderAppointmentTypeAbbreviation="+encodeURIComponent(SlotType)+
//                  "&OrderReferrerAbbrev="+encodeURIComponent(ReferringHCP)+
//                  "&OrderResourceAbbrev="+encodeURIComponent(ResponsibleHCP)+
//                  "&OrderOrderSetAbbrev="+encodeURIComponent(ProblemCode);
//
//  If External Code is to be used instead of the Abbreviation Use Following in Above
//                  "&OrderAppointmentTypeExternalCode="+encodeURIComponent(SlotType)+
//
// Launch with to Just View Patient No Order Parameters Just Patient and Department
//
  url="UGLaunch.php?ActivatePatient=true&PatientId="+trim(PatientURN) +
                  "&OrderDepartmentAbbreviation="+encodeURIComponent(DepartmentCode);
  top.UGWindow=window.open("../php/"+url,"UGWindow",
  "width=1024,height=768,location=no,toolbar=yes,scrollbars=yes");
  top.UGWindow.focus();
}
function Reinstate() {
   linkurl="allweb02.pbl?reportno=2&template=011" +
           "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+")
   DFrameLink(linkurl,50,50,700,300)
}
function referralActionAudit(linkprg,linkrep,linktem,allaudky) {
  if(PatientLinks.usrsvrsl == undefined) {
    alert("Invalid Security Level. Must be => 50");
    return;
  }

  if(PatientLinks.usrsvrsl.value < 50) {
    alert("Invalid Security Level. Must be => 50");
    return;
  }

  linkurl=linkprg + ".pbl?reportno=" + linkrep + "&template=" + linktem +
          "&allaudky=" + allaudky.replace(/ /g,"+")
  DFrameLink(linkurl,50,50,600,250)
}
