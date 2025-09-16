//jsVersion  : V11.03.00
function clrCon() {
  document.triage.emvis106.value="";
  document.triage.name_emvis106.value="";
}
function locationSearch(locName,locCode)  {
  window.locName=locName
  window.locCode=locCode
  myWin=open("emrweb01.pbl?reportno=1&template=6", "displayWindow",
  "width=750,height=400,left=10,top=50," +
  "scrollbars=yes,status=no,toolbar=no,menubar=no");
}
function ShowDoctor(linkurl,doctcode) {
    var doc=doctcode.value;
    if(doc=="") {return;}
    Doctor=open(linkurl + doc,"Doctor",
    "width=370,height=300,scrollbars=no,status=no,toolbar=no,menubar=no");
}
function PopAlert(linkurl) {
    Doctor=open(linkurl,"Doctor",
    "width=620,height=320,scrollbars=yes,status=no,toolbar=no,menubar=no");
}
function CheckCode(code,selectlist)  {
var found=0
//Nurse code is 6 chars in length
for (var i =0 ; i < selectlist.length; i++) {
  if (selectlist.options[i].value.substr(0,6)==code.value) {
         found=1
         selectlist.selectedIndex=i } }
if (found==0) { alert("Invalid Code Entered")
                code.focus() }
}
function UpdateCode(code,selectlist) {
  code.value=selectlist.value.substr(0,6);
}
function TimeLookup(Time) {
  window.TimeValue = Time;
  LookupTime=open("/lookups/test/TimeLookup.html", "TimeLookupWindow",
  "width=320,height=185,top=100,left=100,scrollbars=no," +
  "status=no,toolbar=no,menubar=no") ;
}

function DateLookup(Date) {
  window.dateField = Date;
  LookupDate=open("/lookups/test/DateLookup.html", "DateLookupWindow",
  "width=190,height=210,top=100,left=190,scrollbars=no," +
  "status=no,toolbar=no,menubar=no") ; 
}
function DocSearch(linkUrl,docName,docCode) {
  window.docCode=docCode;
  window.docName=docName;
  Lookup=open(linkUrl,"LookupWindow",
  "width=600,height=370,top=50,left=100,scrollbars=yes,status=no," +
  "toolbar=no,menubar=no");
}
function WardBedScan(toWard,toWardName,toBed,bedStat)  {
  window.toward=toWard
  window.towardname=toWardName
  window.tobed=toBed
  window.bedstat=bedStat
  WardBed=open("patweb95.pbl?reportno=1&template=001","WardBed",
    "width=640,height=400,scrollbars=yes,status=no,toolbar=no,menubar=yes");
}
function openPWD(username,password) {
 myWin=open("/lookups/test/PasswordEntry.html","PasswordEntry",
       "height=110,width=300,top=250,left=230")
 var count=0;
 do {
    count++
    } while (!myWin.closed);
 if (document.triage.username.value!="") {
    setFormactn();
    }
}
function setImage(triagecode) {
  var undefined;
  if (triagecode === undefined) {
    return (document.write("<img src='../images/triage0.gif'>"));
  }
  else { 
    return (document.write("<img src='../images/triage",triagecode,".gif'>"));
  }
}
function deleteEvent() {
  url="emrweb02.pbl?reportno=1&template=103" +
      "&urnumber=" + document.triage.urnumber.value +
      "&admissno=" + document.triage.admissno.value;
//
  DeleteWin=open(url,"Delete",
                 "width=400,height=250,left=50,top=50," + 
                 "titlebar=no,scrollbars=no,status=no,toolbar=no,menubar=no");
}
function Cancel() {
  if (window.name == "content") {
     history.go(-1);
   }     
  else {
     window.close();
   }
}
function checkZero() {
  urnumber=document.triage.urnumber.value;
  if ((urnumber == "        ") || (urnumber == "       0")) {
     url="emrweb02.pbl?reportno=6&template=1&admissno=" + 
         document.triage.admissno.value +
         "&urnumber=" + 
         document.triage.urnumber.value;
   }
  else {
     url="emrweb02.pbl?reportno=1&template=102&admissno=" + 
         document.triage.admissno.value +
         "&urnumber=" + 
         document.triage.urnumber.value;
   }
   location.href=url;
}
function ShowHistory(linkurl) {
  History=open(linkurl,"ShowHistory",
    "width=700,height=330,top=50,left=50," +
    "titlebar=no,scrollbars=yes,status=no,toolbar=no,menubar=no");
}
function InjuryData(linkurl) {
  InjuryWin=open(linkurl,"InjuryData",
    "width=770,height=315,top=50,left=05," +
    "titlebar=no,scrollbars=no,status=yes,toolbar=no,menubar=no");
}
function ShowCoding(linkurl) {
  CodingWin=open(linkurl,"showCoding",
    "width=700,height=330,top=50,left=50," +
    "titlebar=no,scrollbars=yes,status=no,toolbar=no,menubar=no");
}
function InvScreen(linkurl) {
  CodingWin=open(linkurl,"showCoding",
    "width=700,height=330,top=50,left=50," +
    "titlebar=no,scrollbars=yes,status=no,toolbar=no,menubar=no");
}
function PrintScreen(linkurl) {
  PrintWindow=open(linkurl,"PrintScreen",
    "width=400,height=150,top=50,left=50," + 
    "titlebar=no,scrollbars=yes,status=no,toolbar=no,menubar=no");
}
function SearchPage(returnCode,returnName,LookupPage) {
  window.Code=returnCode ;
  window.Name=returnName ;
  Lookup=open(LookupPage, "LookupWindow",
  "width=300,height=550,top=0,left=490,scrollbars=yes," + 
  "status=no,toolbar=no,menubar=no") ;
}
function setFormactn() {
//  var cont = workMandatory(triage);
  var cont = true;
  if(cont != true) {
     return;
     }
  else {
    document.triage.nextpage.value="1"
    document.triage.formactn.value="C1"
    document.triage.updttype.value="TRIAG"
    UpdateWin=window.open("","HideUpdateWindow",
    "width=10,height=10,top=1024,directories=no,location=no" +
    ",scrollbars=no,status=no,toolbar=no,menubar=no,resizeable=no")
    document.triage.target="HideUpdateWindow";
    document.triage.submit()
    }
}
function setDischarge() {
  var cont = workMandatory(triage);
  if(cont != true) {
     return;
     }
  else {
    document.triage.formactn.value="D "
    document.triage.updttype.value="DISCH"
    document.triage.submit()
    }
}
function doctDate() {
  var Today = new Date();
  if ( document.triage.emvis030.value != "           " ) { return }
  hour = Today.getHours();
  if (hour<10) hour = "0" + hour
  mins = Today.getMinutes();
  if (mins<10) mins = "0" + mins
  secs = Today.getSeconds();
  if (secs<10) secs = "0" + secs
  date = Today.getDate();
  if (date<10) date = "0" + date
  mon = Today.getMonth();
  mon = mon + 1
  if (mon<10) mon = "0" + mon
  ccyy = Today.getFullYear();
  if (ccyy<10) ccyy = "0" + ccyy
  var theDate = date + mon + ccyy;
  document.triage.emvis030.value=theDate
  checkDate(document.triage.elements["emvis030"],'Doctor Seen Date')
  var theTime = hour + mins + secs;
  document.triage.emvis031.value=theTime
  checkTime(document.triage.elements["emvis031"],'Doctor Seen Time')
  document.triage.emvis030.focus()
}
//C-0825792 - Check parameter to Use pmshcpaf/oprnuraf for ED Nurse
function chkHcpEDNurse(){
  if (document.getElementById('emcnurse')) {
      if (document.getElementById('emcnurse').value == "1") {
        return true;
      }
      else {
        return false;
      }
  }
  else {
      return false;
  }
}
//C-0825792 - Search Nurse from pmshcpaf/oprnuraf for ED Nurse
function SearchEDNurse(NurseId,ReturnNurseName) {
  var hcpnurse = chkHcpEDNurse();
  if (hcpnurse==true){
     HCPSearchFrame(NurseId,ReturnNurseName,20);
  }
  else {
     NurseSearchFrame(NurseId,ReturnNurseName);
  }
}

