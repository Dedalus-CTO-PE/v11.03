//jsVersion  : V11.03.00
//========================================================================
// Program   : outweb0808.js
//========================================================================
function BookPatient(reqkey,triage) {
//
  if(triage!=undefined){
    if(!isWhitespace(triage)) {
      alert("Referral Priority Code = " + triage +
            "\nPlease change priority before creating/linking appointment");
      return;
    }
  }
//
  linkurl="../cgi-bin/patweb98.pbl?reportno=01&template=001" +
          "&requestk=" + reqkey.replace(/ /g,"+") +
          "&urnumber=" + reqkey.substr(0,8).replace(/ /g,"+") +
          "&admissno=" + reqkey.substr(8,8).replace(/ /g,"+") +
          "&bookflag=3"
  parent.location.href=linkurl;
}
//
function BookPatientHosp(reqkey,triage) {
//
  if (document.getElementById('wahclsrf')!=null) {
    if (!isWhitespace(reqkey.substr(8,8))) {
      if (!getClosedReferral(reqkey.substr(8,8))) {return;}
    }
  }
//
  if(triage!=undefined){
    if(!isWhitespace(triage)) {
      alert("Referral Priority Code = " + triage +
            "\nPlease change priority before creating/linking appointment");
      return;
    }
  }
//
  linkurl="../cgi-bin/patweb98.pbl?reportno=01&template=001" +
          "&requestk=" + reqkey.replace(/ /g,"+") +
          "&urnumber=" + reqkey.substr(0,8).replace(/ /g,"+") +
          "&admissno=" + reqkey.substr(8,8).replace(/ /g,"+") +
          "&bookflag=3"
  location.href=linkurl;
}
//
function GoActionList() {
  ActionList=GetContentCookie("ActionList");
  if (ActionList=="unknown") {
    getTop().content.location.href="../cgi-bin/outweb08.pbl?reportno=8" +
                                   "&template=4"
 } else {
    getTop().content.location.href=ActionList }
}
//
function GoAppointment() {
  AppointmentLink=GetContentCookie("AppointmentLink");
  if (AppointmentLink=="unknown") {
    getTop().content.location.href="../cgi-bin/patweb98.pbl?reportno=1" +
                                   "&template=36" +
          "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
          "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") 
 } else {
    getTop().content.location.href=AppointmentLink }
}
function LinkPatient(ur,vis) {
  linkurl="../cgi-bin/patweb98.pbl?reportno=01&template=001" +
          "&urnumber=" + ur.replace(/ /g,"+") +
          "&admissno=" + vis.replace(/ /g,"+")
  location.href=linkurl;
}
function UpdateRequest(ur,ref,date,time) {
  linkurl="../cgi-bin/outweb08.pbl?reportno=08&template=003" +
          "&urnumber=" + ur.replace(/ /g,"+") +
          "&admissno=" + ref.replace(/ /g,"+") +
          "&otart001=" + ur.replace(/ /g,"+") +
          "&otart002=" + ref.replace(/ /g,"+") +
          "&otart003=" + date.replace(/ /g,"+") +
          "&otart004=" + time.replace(/ /g,"+")
  Left=(document.body.clientWidth-850)/2
  DFrameLink(linkurl,50,Left,850,550)
}

function UpdateRequest2(ur,ref,date,time) {

  SetCookiePath("actionreqlistpathcookie");

  linkurl="../cgi-bin/outweb08.pbl?reportno=08&template=003" +
          "&urnumber=" + ur.replace(/ /g,"+") +
          "&admissno=" + ref.replace(/ /g,"+") +
          "&otart001=" + ur.replace(/ /g,"+") +
          "&otart002=" + ref.replace(/ /g,"+") +
          "&otart003=" + date.replace(/ /g,"+") +
          "&otart004=" + time.replace(/ /g,"+")
  Left=(document.body.clientWidth-850)/2
  DFrameLink(linkurl,50,Left,850,550)
}


function LinkReferral(ur,vis,dept) {
  linkurl="../cgi-bin/outweb08.pbl?reportno=08&template=001" +
          "&urnumber=" + ur.replace(/ /g,"+") +
          "&admissno=" + vis.replace(/ /g,"+") 
  location.href=linkurl;
}
function RescheduleAppt(ur,vis,casek) {
  linkurl="../cgi-bin/outweb02.pbl?reportno=03&template=005" +
          "&urnumber=" + ur.replace(/ /g,"+") +
          "&admissno=" + vis.replace(/ /g,"+") +
          "&casekeys=" + casek.replace(/ /g,"+") 
  Left=(document.body.clientWidth-750)/2
  DFrameLink(linkurl,50,Left,750,475)
}
//
function DeptClinicType(ReturnDept,ReturnPSite,ReturnClinicType,DeftClinicType){

  if (isWhitespace(ReturnDept.value)) return;;
  if (isWhitespace(ReturnPSite.value)) return;;

  var serverURL   = "../cgi-bin/allweb02.pbl?reportno=6&updatety=5" +
                    "&deptcode=" + ReturnDept.value.replace(/ /g,"+") +
                    "&valdpsit=" + ReturnPSite.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnClinicType.options.length=0
    ReturnClinicType.options[ReturnClinicType.options.length]=new Option("","");
    ReturnValue=returnValue.return_value.split("|");
    for (var j=0; j < ReturnValue.length; j++) {
       if (!isWhitespace(ReturnValue[j])) {
         SelectValue=ReturnValue[j].split(",");
         ReturnClinicType.options[ReturnClinicType.options.length]=
          new Option(SelectValue[1],SelectValue[0]); } }
////
 for (var i =0 ; i < ReturnClinicType.length; i++) {
  if (ReturnClinicType.options[i].value==DeftClinicType.value.substr(0,6)) {
       ReturnClinicType.selectedIndex=i } };


////
  } else {
    ReturnPSite.select();  }
}
function getClosedReferral(referralnumber) {
  if (isWhitespace(referralnumber)) {return;}

  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=46" +
                    "&valdcode=" +
                    referralnumber.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    if (!isWhitespace(returnValue.return_value)) {
      if(!confirm('Warning this referral was closed on ' +
       returnValue.return_value + '. Click OK to continue, Cancel to abort.')) {
        return false;
      }
    }
  }
  return true;
}
function DeptClinicType2(ReturnDept,ReturnPSite,ReturnClinicType,
                         DeftClinicType,DeptIndc){

  if (DeptIndc.value != "1") {
    if (isWhitespace(ReturnDept.value)) return;;
  }
  if (isWhitespace(ReturnPSite.value)) return;;

  var serverURL   = "../cgi-bin/allweb02.pbl?reportno=6&updatety=5" +
                    "&deptcode=" + ReturnDept.value.replace(/ /g,"+") +
                    "&valdpsit=" + ReturnPSite.value.replace(/ /g,"+") +
                    "&deptindc=" + DeptIndc.value.replace(/ /g,"+");

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnClinicType.options.length=0
    ReturnClinicType.options[ReturnClinicType.options.length]=new Option("","");
    ReturnValue=returnValue.return_value.split("|");
    for (var j=0; j < ReturnValue.length; j++) {
       if (!isWhitespace(ReturnValue[j])) {
         SelectValue=ReturnValue[j].split(",");
         ReturnClinicType.options[ReturnClinicType.options.length]=
          new Option(SelectValue[1],SelectValue[0]); } }
////
 for (var i =0 ; i < ReturnClinicType.length; i++) {
  if (ReturnClinicType.options[i].value==DeftClinicType.value.substr(0,6)) {
       ReturnClinicType.selectedIndex=i } };


////
  } else {
    ReturnPSite.select();  }
}
