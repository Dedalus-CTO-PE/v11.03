//jsVersion  : V11.03.01
//
//============================================================
// V11.03.01 25/01/2023 Don Nguyen     TSK 0893674
//                      Added processing code for new menu option (117)
//                       - 'MedChart Clinical Reviews'
// V10.10.01 07.03.2017 B.G.Ackland CAR 
//                      Fix Spelling
// V10.07.03 20.02.2016 B.G.Ackland CAR 
//                      Fix Housekeeping List to Day View Only
// V10.07.02 19.02.2016 B.G.Ackland CAR 
//                      New Housekeeping List for Mobility
// V10.07.01 17.12.2015 B.G.Ackland CAR 
//                      New Waiting Referrals List for Mobility
// V10.05.01 13.11.2014 B.G.Ackland CAR 308064
//                      Change link unseen Emergency patient List
// V10.03.04 31.01.2014 B.G.Ackland CAR 288223
//                      Security Measure to ensure menus cannot be used without login page
// V10.03.03 24.07.2013 B.G.Ackland CAR 288223
//                      Open Subscription as Form not as List
// V10.03.02 18.07.2013 B.G.Ackland CAR 288718
//                      Add option 27 for Expected Dicharge List
// V10.03.01 01.07.2013 B.G.Ackland 
//                      Add logoutURL for custom logout at Healthscope
//                      Add option 41 for Hospital Theatre Session View
//============================================================
var RefreshNotificationSeconds=300;
var NotificationAlert=false;
function ShowForm() {
  openDocumentNonZoomable(CGIPath+homePageURL,homePageTitle);
}
function ShowPage() {
 if (typeof getHospitalName == "function") {
    homePageTitle=getHospitalName() + " - " + homePageTitle;
 }
 ProcessKey=top.getCookie("ProcessKey");
 if (!homePageURL.match(/websec01/)) {
  top.setCookie("homePageTitle"+ProcessKey,homePageTitle,30);
  top.setCookie("homePageURL"+ProcessKey,CGIPath+homePageURL,30);
 }
 top.setLoginTimeout();
 el=document.getElementById("content")
 el.style.display='';
 el=document.getElementById("ListScreen")
 el.style.display='none';
 el=document.getElementById("SearchText")
 el.value="";
 el=document.getElementById("PageTitle")
 el.innerText=homePageTitle
 el=document.getElementById("content")
 el.src=CGIPath+homePageURL + '&httprand='+Math.random();
 setNotification();
}
function GotoPage() {
 el=document.getElementById("PageTitle")
 el.innerText=homePageTitle
 el=document.getElementById("content")
 el.src=CGIPath+homePageURL + '&httprand='+Math.random();
 setNotification();
}
function init() {
 if (top.document.location.href==document.location.href) {
   alertify.alert("Invalid Access Method",function(e) {
   top.document.location.href='login.html';});
 }
 setNotification();
 ProcessKey=top.getCookie("ProcessKey");
 homePageTitle= top.getCookie("homePageTitle"+ProcessKey);
 homePageURL  = top.getCookie("homePageURL"+ProcessKey);
 if (isWhitespace(homePageTitle)) {
   homePageTitle="Patients";
   homePageURL  =CGIPath+"patweb97.pbl?reportno=1&template=13";
   top.setCookie("homePageTitle"+ProcessKey,homePageTitle,30);
   top.setCookie("homePageURL"+ProcessKey,homePageURL,30);
 }

 el=document.getElementById("PageTitle")
 el.innerText=homePageTitle
 el=document.getElementById("content")
 el.src=homePageURL
 top.setLoginTimeout();
}
function setHist() {
 loc=window.frames["content"].location ;
 if (loc.href.replace(/.*\//,"").match(/blank/)) return;
 if (!loc.href.match(/websec01/)) {
   top.setCookie("homePageURL"+ProcessKey,loc.href,30);
   el=document.getElementById("PageTitle")
   top.setCookie("homePageTitle"+ProcessKey,el.innerHTML,30);
 }
 top.setLoginTimeout();
}
function setNotification() {
  getNotification();
//  setTimeout(function () { setNotification() },1000*RefreshNotificationSeconds);
}
function ShowMyNotifications() {
 el=document.getElementById("PageTitle")
 el.innerText="Notifications";
 el=document.getElementById("content")
 el.src="../../forms/ipad/MyNotifications.php";
}
function ShowMyDraftForms() {
 el=document.getElementById("PageTitle")
 el.innerText="My Draft Forms";
 el=document.getElementById("content")
 el.src="../../forms/ipad/MyDraftForms.php";
}
function getNotification() {
  el=document.getElementById("Notifications")
  if (el) {
    returnValue=RSExecute("../../forms/RemoteServices.php?action=NotificationCount") ;
    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|");
      ReturnCount= ReturnValue[0];
      if (parseInt(ReturnCount) > 0 ) {
        el.style.display="inline-block";
        if (NotificationAlert) {
          alertify.alert("You have "+ReturnCount+" Notifications Pending");
          NotificationAlert=false;
        }
        el.innerHTML=ReturnCount;
      } else {
        el.style.display="none";
        }
    } else {
      alertify.alert("Notification Service Not Available");
    }
  }

  el=document.getElementById("Drafts")
  if (el) {
    returnValue=RSExecute("../../forms/RemoteServices.php?action=DraftCount") ;
    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|");
      ReturnCount= ReturnValue[0];
      if (parseInt(ReturnCount) > 0 ) {
        el.style.display="inline-block";
        el.innerHTML=ReturnCount;
      } else {
        el.style.display="none";
      }
    } else {
      alertify.alert("Draft Service Not Available");
    }
  }
}
//------------------------------------------------------------
// Application Menu Options
//------------------------------------------------------------
function Menu(el) {
  if (top.document.location.href==document.location.href) {
   alertify.alert("Invalid Access Method",function(e) {
   top.document.location.href='login.html';});
  }
  itemNo=el.options[el.selectedIndex].value;
  el.selectedIndex=0;
  if (itemNo.substr(0,1)=="C") {
    if (typeof CustomMenuOption == "function") {
      itemNo=itemNo.replace(/C/,"");
      CustomMenuOption(itemNo);
    } else {
      alertify.alert("Custom Menu Option Not Available:"+itemNo);
    }
    return;
  }
  switch (parseInt(itemNo)) {
   case 1:
      homePageTitle="Patients";
      homePageURL  ="patweb97.pbl?reportno=1&template=13";
      ShowPage();
      break;
   case 10:
      homePageTitle="My Patients";
      homePageURL  ="patweb97.pbl?reportno=1&template=14";
      ShowPage();
      break;
   case 11:
      homePageTitle="Shared Patients";
      homePageURL  ="patweb97.pbl?reportno=1&template=14";
      ShowPage();
      break;
   case 12:
      homePageTitle="Anaesthetist Patients";
      homePageURL  ="patweb97.pbl?reportno=1&template=15";
      ShowPage();
      break;
   case 14:
      homePageTitle="Favourite Patients";
      homePageURL  ="patweb02.pbl?reportno=2&template=7";
      ShowPage();
      break;
   case 15:
      homePageTitle="Consultant Patients";
      homePageURL  ="patweb97.pbl?reportno=1&template=16";
      ShowPage();
      break;
   case 16:
      homePageTitle="Unit Patients";
      homePageURL  ="patweb92.pbl?reportno=1&template=318";
      ShowPage();
      break;
   case 17:
      homePageTitle="Expected Patients";
      homePageURL  ="oprweb01.pbl?reportno=2&template=9";
      ShowPage();
      break;
   case 18:
      homePageTitle="Active Referrals";
      homePageURL  ="allweb02.pbl?reportno=1&template=25";
      ShowPage();
      break;
   case 19:
      homePageTitle="All Referrals";
      homePageURL  ="allweb02.pbl?reportno=1&template=30";
      ShowPage();
      break;
   case 2:
      homePageTitle="My Unread Results";
      homePageURL  ="cliweb03.pbl?reportno=3&template=010";
      ShowPage();
      break;
   case 20:
      homePageTitle="My Patient Results";
      homePageURL  ="cliweb03.pbl?reportno=3&template=011";
      ShowPage();
      break;
   case 21:
      homePageTitle="Ward Results";
      homePageURL  ="cliweb03.pbl?reportno=4&template=010&viewtype=1";
      ShowPage();
      break;
   case 22:
      homePageTitle="Bed Request List";
      homePageURL  ="patweb10.pbl?reportno=9&template=003&viewtype=1&filtstat=1&showflag=1";
      ShowPage();
      break;
   case 23:
      homePageTitle="Ward Bed Search";
      homePageURL  ="patweb95.pbl?reportno=1&template=5&norecord=99&filtward=X&emptonly=1&bedsonly=1";
      ShowPage();
      break;
   case 24:
      homePageTitle="Patient Discharge List";
      homePageURL  ="patweb92.pbl?reportno=2&template=002&viewtype=0";
      ShowPage();
      break;
   case 25:
      homePageTitle="Hospital Summary View";
      homePageURL  ="patweb95.pbl?reportno=2&template=009";
      ShowPage();
      break;
   case 26:
      homePageTitle="Unallocated Bookings List";
      homePageURL  ="patweb12.pbl?reportno=5&template=004&viewtype=0";
      ShowPage();
      break;
   case 27:
      homePageTitle="Expected Discharge List";
      homePageURL  ="patweb93.pbl?reportno=11&template=003&viewtype=0";
      ShowPage();
      break;
   case 28:
      homePageTitle="Discharged Patients";
      homePageURL  ="patweb97.pbl?reportno=02&template=003&viewtype=0";
      ShowPage();
      break;
   case 29:
      homePageTitle="Booking List";
      homePageURL  ="patweb92.pbl?reportno=06&template=011&viewtype=0";
      ShowPage();
      break;
   case 3:
      homePageTitle="Ward Patient List";
      homePageURL  ="patweb93.pbl?reportno=1&template=17";
      ShowPage();
      break;
   case 31:
      homePageTitle="Ward View";
      homePageURL  ="patweb93.pbl?reportno=1&template=18";
      ShowPage();
      break;
   case 32:
      homePageTitle="Ward Clinical Orders";
      homePageURL  ="patweb93.pbl?reportno=1&template=19";
      ShowPage();
      break;
   case 33:
      homePageTitle="Ward Community View";
      homePageURL  ="patweb93.pbl?reportno=1&template=20";
      ShowPage();
      break;
   case 4:
      homePageTitle="Theatre";
      homePageURL  ="oprweb01.pbl?reportno=2&template=6&viewtype=0";
      ShowPage();
      break;
   case 41:
      homePageTitle="Theatre Sessions";
      homePageURL  ="oprweb03.pbl?reportno=1&template=6&viewtype=0";
      ShowPage();
      break;
   case 49:
      homePageTitle="Health Care Professionals";
      homePageURL  ="patweb99.pbl?reportno=06&template=022";
      ShowPage();
      break;
   case 50:
      homePageTitle="Doctor";
      homePageURL  ="patweb99.pbl?reportno=2&template=701";
      ShowPage();
      break;
   case 5:
      homePageTitle="Calendar Subscription";
      homePageURL  ="oprweb01.pbl?reportno=2&template=7";
      ShowForm();
      break;
   case 51:
      homePageTitle="My Draft Forms";
      homePageURL  ="../forms/ipad/MyDraftForms.php?1=1";
      ShowPage();
      break;
   case 52:
      homePageTitle="Team Draft Forms";
      homePageURL  ="../forms/ipad/TeamDraftForms.php?1=1";
      ShowPage();
      break;
   case 53:
      homePageTitle="My Forms";
      homePageURL  ="../forms/ipad/MyFormsList.php?1=1";
      ShowPage();
      break;
   case 54:
      homePageTitle="My Notifications";
      homePageURL  ="../forms/ipad/MyNotifications.php?1=1";
      ShowPage();
      break;
   case 55:
      homePageTitle="All Forms";
      homePageURL  ="../forms/ipad/ListForms.php?1=1";
      ShowPage();
      break;
   case 56:
      homePageTitle="Referral Forms";
      homePageURL  ="../forms/ipad/ListFormsByType.php?FormTypeID=4";
      ShowPage();
      break;
   case 57:
      homePageTitle="Physiotherapy Referrals";
      homePageURL  ="../forms/ipad/ListFormsByClass.php?FormClassID=2";
      ShowPage();
      break;
   case 6:
      homePageTitle="Change Password";
      homePageURL  ="websec01.pbl?reportno=2&template=4";
      ShowPage();
      break;
   case 60:
      homePageTitle="Available Theatre Sessions";
      homePageURL  ="TheatreEventList.php?EventTypeID=1000&EventStatusID=1000";
      ShowPage();
      break;
   case 61:
      homePageTitle="Change Home Page ";
      homePageURL  ="websec01.pbl?reportno=5&template=13";
      ShowPage();
      break;
   case 7:
      homePageTitle="Change Hospital/Ward";
      homePageURL  ="websec01.pbl?reportno=5&template=9";
      ShowPage();
      break;
   case 70:
      homePageTitle="Change Hospital/Ward";
      homePageURL  ="websec01.pbl?reportno=5&template=12";
      ShowPage();
      break;
   case 71:
      homePageTitle="Medical Record Preferences";
      homePageURL  ="../html/ipad/Preferences.html?1=1";
      ShowPage();
      break;
   case 72:
      homePageTitle="Medical Record Preferences";
      homePageURL  ="../html/ipad/PreferencesNoColor.html?1=1";
      ShowPage();
      break;
   case 8:
      homePageTitle="Emergency";
      homePageURL  ="emrweb01.pbl?reportno=1&template=101";
      ShowPage();
      break;
   case 80:
      homePageTitle="Emergency";
      homePageURL  ="emrweb01.pbl?reportno=1&template=104";
      ShowPage();
      break;
   case 81:
      homePageTitle="Emergency Results";
      homePageURL  ="cliweb03.pbl?reportno=8&template=10";
      ShowPage();
      break;
   case 82:
      homePageTitle="Emergency Attendance";
      homePageURL  ="emrweb01.pbl?reportno=2&template=101";
      ShowPage();
      break;
   case 83:
      homePageTitle="Emergency Triage";
      homePageURL  ="emrweb02.pbl?reportno=2&template=103";
      ShowForm();
      break;
   case 84:
      homePageTitle="Expected ";
      homePageURL  ="emrweb01.pbl?reportno=1&template=103";
      ShowPage();
      break;
   case 85:
      homePageTitle="Unseen Patients ";
      homePageURL  ="emrweb01.pbl?reportno=1&template=110";
      ShowPage();
      break;
   case 110:
      homePageTitle="Outpatient Clinic List";
      homePageURL  ="outweb02.pbl?reportno=1&template=019";
      ShowPage();
      break;
   case 111:
      homePageTitle="My Clinic Appointments";
      homePageURL  ="outweb02.pbl?reportno=1&template=020&viewtype=0";
      ShowPage();
      break;
   case 112:
      homePageTitle="Ward Bed View";
      homePageURL  ="patweb93.pbl?reportno=1&template=23";
      ShowPage();
      break;
   case 114:
      homePageTitle="My Home Care Patients";
      homePageURL  ="patweb02.pbl?reportno=2&template=13";
      ShowPage();
      break;
   case 115:
      homePageTitle="Waiting Referrals"
      homePageURL  ="allweb02.pbl?reportno=1&template=29";
      ShowPage();
      break;
   case 116:
      homePageTitle="Housekeeping List"
      homePageURL  ="patweb12.pbl?reportno=5&template=5&viewtype=0";
      ShowPage();
      break;
   case 117:
      homePageTitle="MedChart Clinical Reviews";
      homePageURL  ="patweb95.pbl?reportno=2&template=201";
      ShowPage();
      break;
   case 999:
      if (!isWhitespace(logoutURL)) {
        top.location.href=logoutURL;
      } else {
        if((navigator.userAgent.match(/playbook/i))||(navigator.userAgent.match(/blackberry/i))) {
         top.FlushCredentials();
        } else {
          location.href="LoginPage.html";
        }
      }
      break;
   case 99:
      setTimeout(Resize(),10)
      break;
  }
}
