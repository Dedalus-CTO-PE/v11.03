//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/patweb9603712.js
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

function setButtons() {
 var actionBtn = parent.document.getElementById('actionButton');

  if(actionBtn) {

    actionBtn.className = actionBtn.className.replace(/SpanButton/g,"");
    actionBtn.className = actionBtn.className.replace(/Blue/g,"");
    actionBtn.className = actionBtn.className + " SpanButtonBlue";
    actionBtn.innerText = "Save";

     actionBtn.onclick = function() {
         SubmitCMBS(pat96cmb,'Onleave');
     }

  }
}
function DisplayContract() {
  i=document.pat96cmb.specialt.selectedIndex;
  ind=document.pat96cmb.specialt.options[i].value.substring(14,15)
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
     document.pat96cmb.ptasf001.className="Readonly"; 
     document.pat96cmb.ptasf002.className="Readonly"; 
     document.pat96cmb.ptasf001.value="";
     document.pat96cmb.ptasf002.value="";
   } else if (ind=="C"){
     document.pat96cmb.ptasf001.className="Mandatory";
     document.pat96cmb.ptasf002.className="Mandatory";
  }
}
function setTranAdm(){
  if (admitdate==pat96cmb.trandate.value){
    if (pat96cmb.ptcnchsd.value==1){
      confirmMsg="Do you want to change the Transfer Admission Record?";
      alertify.confirm(confirmMsg, function (e) {    
        if (e) {
          pat96cmb.ctadmvar.value="1"
          pat96cmb.trantime.value=admittime
        }
      });
    }
  }
}
function SubmitCMBS() {
if(admitdate==pat96cmb.trandate.value){
   if(admittime>pat96cmb.trantime.value){
    alertify.alert("Change time cannot be before admission time ("+admittime+")");
    return;
   }
 }
if(admitstat.substr(0,10)=="Discharged"){
if(disdate==pat96cmb.trandate.value){
   if(distime<=pat96cmb.trantime.value){
    alertify.alert("Change time cannot be after discharge time ("+distime+")");
    return;
   }
  }
if(disdate<pat96cmb.trandate.value){
    alertify.alert("Change date cannot be after discharge date");
    return;
   }

 }
  if (validateMandatory(pat96cmb)) {
    theURL=document.pat96cmb.action;
    var postStr=AJAXPostString2(document.pat96cmb)
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
