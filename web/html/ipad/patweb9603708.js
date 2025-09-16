//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/patweb9603708.js
//
// Modification
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.01 06.08.2013 B.G.Ackland CAR 289383
//                      New AJAXPostString2 to fix post encoding
// V10.01.01 04.12.2012 B.G.Ackland New Medical Record View Refresh
// V10.01.00 13/04/2012 Version change
// V10.00.00 13/04/2012 Created for Mobility Suite
//

function ContType(type) {
  var ValidCodes = "12345 "
  if (ValidCodes.indexOf(type.value)==-1) {
  alert ("Invalid Contract Type");
  type.value="";
  type.focus();
  }
}

function ContRole(role) {
  var ValidCodes = "AB "
  if (ValidCodes.indexOf(role.value)==-1) {
  alert ("Invalid Contract Role");
  role.value="";
  role.focus();
  }
}
//------------------------------------------------------------
// Contract Type Alert
//------------------------------------------------------------
function ContTypeAlert() {
  alertify.alert("Valid Contract Type Number<br><br>" +
"1 - B    A (health authority/other external purchaser) contracts B (hospital) for admitted service<br>" +
"<br>" +
"2 - ABA  Patient admitted by Hospital A. Hospital A contracts Hospital B for admitted or non-admitted patient service.<br>" +
"Patient Returns to Hospital A on completion of service by Hospital B.<br>" +
"<br>" +
"3 - AB   Patient admitted by Hospital A. Hospital A contracts Hospital B for admitted or non-admitted patient service<br>" +
"Patient Does not return to Hospital A on conmpletion of service by Hospital B.<br>" +
"<br>" +
"4 - (A)B Patient not admitted by Hospital A. Hospital A contracts Hospital B for the whole admitted patient service<br>" +
"<br>" +
"5 - BA   Hospital A, which does not initially admit the patient, contracts Hospital B for an admitted patient service<br>" +
"following which the patient is transferred to and admitted by Hospital A." )
}
//
//------------------------------------------------------------
// Contract Role Alert
//------------------------------------------------------------
function ContRoleAlert() {
  alertify.alert("Valid Contract Role Character<br><br>" +
"A - The Contracting (purchasing) hospital is termed Hospital A.<br>" +
"<br>" +
"B - The contracted (service provider) hospital is termed Hospital B." )
}
function DisplayContract() {
  i=document.pat96olv.trnlvtyp.selectedIndex;
  ind=document.pat96olv.trnlvtyp.options[i].value.substring(14,15)
  if (ind=="C" || ind=="S" || ind=="H") {
    document.getElementById("cType").innerHTML=document.getElementById("contractType").innerHTML;
    document.getElementById("cType").style.display="";
    document.getElementById("cRole").innerHTML=document.getElementById("contractRole").innerHTML;
    document.getElementById("cRole").style.display="";
    document.getElementById("cID").innerHTML=document.getElementById("contractID").innerHTML;
    document.getElementById("cID").style.display="";
  } else {
    document.getElementById("cType").innerHTML="";
    document.getElementById("cType").style.display="none";
    document.getElementById("cRole").innerHTML="";
    document.getElementById("cRole").style.display="none";
    document.getElementById("cID").innerHTML="";
    document.getElementById("cID").style.display="none";
  }
  if (ind=="S"||ind=="H") {
     document.pat96olv.ptasf001.className="Readonly";
     document.pat96olv.ptasf002.className="Readonly";
     document.pat96olv.ptasf001.value="";
     document.pat96olv.ptasf002.value="";
   } else if (ind=="C"){
     document.pat96olv.ptasf001.className="Mandatory";
     document.pat96olv.ptasf002.className="Mandatory";
  }
}
function init(){
if (document.pat96olv.mehvisfl.value == "1"){
    document.pat96olv.trnsretn.className="Mandatory FutureDate";  //exp return
    document.pat96olv.trnlvtyp.selectedIndex="0";
  }
 setButtons()
}
function convertDate(datevalue) {
  cent = datevalue.substring(0,2)
  year = datevalue.substring(2,4)
  mon  = datevalue.substring(4,6)
  day  = datevalue.substring(6,8)

  monthName = GetMonthName(mon);

  document.pat96olv.trandate1.value = day + " " + monthName + " " + cent + year;
}
function DisplayTrnSrc() {
  var i=document.pat96olv.trnlvtyp.selectedIndex;
  var ind = document.pat96olv.trnlvtyp.options[i].value.substring(14,15);
  if(document.pat96olv.ptcnhdps.value!="3"){
    if (ind != "C") {
      document.getElementById("tDest").innerHTML="";
      document.getElementById("tDest").style.display="none";
      document.pat96olv.transrce.value=" ";
    } else {
      document.getElementById("tDest").innerHTML=document.getElementById("transferDestination").innerHTML;
      document.getElementById("tDest").style.display="";
    }
  }
}
function checkLegalStatus(){
if (document.pat96olv.mehvisfl.value == "0"){
    return;}
legstat=document.pat96olv.mehlegst.value.substr(3,1)
leavtyp=document.pat96olv.trnlvtyp.value.substr(3,1)
if (leavtyp=="H" && legstat!="I"){
    alertify.alert("Invalid legal status for type of leave.")
  }
if (leavtyp=="A"){
    document.pat96olv.trnsretn.className="FutureDate";
   }else{
    document.pat96olv.trnsretn.className="Mandatory FutureDate";}
}

function SubmitTransfer() {
if (validateMandatory(pat96olv)) {
  leavtyp=document.pat96olv.trnlvtyp.value.substr(3,1)
  legstat=document.pat96olv.mehlegst.value.substr(3,1)
  if (document.pat96olv.mehvisfl.value == "1"){
    if (leavtyp=="H"||leavtyp=="T") {
     document.pat96olv.redirect.value="mehweb01.pbl?reportno=05&template=001"
     + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.PatientLinks.admissno.value 
     + "&trandate=" + document.pat96olv.trandate.value
     + "&trantime=" + document.pat96olv.trantime.value
    }
    if (leavtyp=="H" && legstat!="I"){
       alertify.alert("Invalid legal status for type of leave.")
       return;
    }
    if (leavtyp=="T" && legstat!="S" && legstat!="X"){
       alertify.alert("Invalid legal status for type of leave.")
       return;
      }
    }else{
       if (leavtyp=="T" || leavtyp=="A" || leavtyp=="H"){
       alertify.alert("Invalid status for type of leave.")
       return;
      }
    }
    SetHousekeeping();
    theURL=document.pat96olv.action;
    var postStr=AJAXPostString2(document.pat96olv)
    var xmlHttp = createHttpObject();
    xmlHttp.open("POST", theURL, false);
    xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
    xmlHttp.send(postStr);
    if (xmlHttp.status=="200") {
      if (xmlHttp.responseText.match(/location.href/i)) {
        parent.frames['PatFrame'].refreshScreen();
        parent.CloseDocument();
      }
      else {
        alertify.alert(xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,""));
      }
    }
    else {
      alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
    }
  }
}
function TOLMand() {
  if (document.pat96olv.stateind.value=="3") {
     document.pat96olv.trnlvtyp.className="Mandatory";
  }
}
function ShowHouse() {
  if(document.pat96olv.ptcnchot.value=="1") {
    Housekeeping.outerHTML=Displayhousekeeping.innerHTML;
  }
}
function HouseMandatory() {
  if(document.pat96olv.notifyhs.value=="1") {
     document.pat96olv.pmhrd006.className="Mandatory"
     document.pat96olv.pmhrd006.disabled=false;
  } else {
     document.pat96olv.pmhrd006.selectedIndex=0;
     document.pat96olv.pmhrd006.className="Readonly"
     document.pat96olv.pmhrd006.disabled=true;
  }
}
function SetHousekeeping() {
  if(document.pat96olv.ptcnchot.value=="1" &&
    document.pat96olv.notifyhs.value=="1") {
    i=document.pat96olv.trandate.selectedIndex;
    document.pat96olv.pmhrd004.value=document.pat96olv.trandate.options[i].text;
    document.pat96olv.pmhrd005.value=document.pat96olv.trantime.value;
  }
}
function setButtons() {
 var actionBtn = parent.document.getElementById('actionButton');

  if(actionBtn) {

    actionBtn.className = actionBtn.className.replace(/SpanButton/g,"");
    actionBtn.className = actionBtn.className.replace(/Blue/g,"");
    actionBtn.className = actionBtn.className + " SpanButtonBlue";
    actionBtn.innerText = "Save";

     actionBtn.onclick = function() {
         SubmitTransfer(pat96olv,'Onleave');
     }

  }
}
