//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/patweb9603709.js
//
// Modification
//
// Version         Date          Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.01 06.08.2013 B.G.Ackland CAR 289383
//                      New AJAXPostString2 to fix post encoding
// V10.01.01 04.12.2012 B.G.Ackland New Medical Record View Refresh
// V10.01.00 13/04/2012 Version change
// V10.00.00 13/04/2012 Created for Mobility Suite
//

function SubmitTransfer() {
  if (validateMandatory(pat96ret)) {
    if (document.pat96ret.dispbfee.value==1) {
     document.pat96ret.redirect.value="patweb71.pbl?reportno=04&template=007"
       + "&urnumber=" + document.pat96ret.urnumber.value.replace(/ /g,"+")
       + "&admissno=" + document.pat96ret.admissno.value.replace(/ /g,"+");
    }
    else {
     if (document.pat96ret.dispbfee.value==2) {
       document.pat96ret.redirect.value="patweb71.pbl?reportno=04&template=009"
         + "&urnumber=" + document.pat96ret.urnumber.value.replace(/ /g,"+")
         + "&admissno=" + document.pat96ret.admissno.value.replace(/ /g,"+");
       }
    }

    theURL=document.pat96ret.action;
    var postStr=AJAXPostString2(document.pat96ret)
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
function CheckSTLeave() {
  leavtyp=document.pat96ret.trnlvtyp.value.substr(3,1)
  if (leavtyp!=" "){
    alertify.alert("This is not a short term leave code.")
    document.pat96ret.trnlvtyp.value="";
    return;
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
         checkBedStatus(trntowrd.value,trntobed.value,SubmitTransfer);
     }

  }
}
function diffDate(){
if (document.pat96ret.mehvisfl.value != "1"){
   return;}
if (document.pat96ret.leavtype.value != "H" && document.pat96ret.leavtype.value != "T"){
   return;}

  if(document.pat96ret.leavtype.value == "H"){
     mindays=document.pat96ret.mhminhol.value}
  else{
     mindays=document.pat96ret.mhmintri.value}
  Input=document.pat96ret.tranin.value
  day= Input.substring(0,2)
  year= Input.substring(7,11)
  monstr= Input.substring(3,6)
  if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon=00
  if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon=01
  if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon=02
  if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon=03
  if (monstr=="May" || monstr=="MAY" || monstr=="may") mon=04
  if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon=05
  if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon=06
  if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon=07
  if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon=08
  if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon=09
  if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon=10
  if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon=11

  Fday = new Date();
  Fday.setFullYear(year);
  Fday.setMonth(mon);
  Fday.setDate(day);
  Input=document.pat96ret.trandate.value
  day= Input.substr(6,2)
  year= Input.substr(0,4)
  monstr= Input.substr(4,2)
  if (monstr=="01") mon=00
  if (monstr=="02") mon=01
  if (monstr=="03") mon=02
  if (monstr=="04") mon=03
  if (monstr=="05") mon=04
  if (monstr=="06") mon=05
  if (monstr=="07") mon=06
  if (monstr=="08") mon=07
  if (monstr=="09") mon=08
  if (monstr=="10") mon=09
  if (monstr=="11") mon=10
  if (monstr=="12") mon=11
  Tday = new Date();
  Tday.setFullYear(year);
  Tday.setMonth(mon);
  Tday.setDate(day);
  difference = "0";

  if (Tday.getTime() >= Fday.getTime()) {
    difference = Tday.getTime() - Fday.getTime();
    difference = Math.floor(difference / (1000 * 60 * 60 * 24));
  }
  if (difference < mindays){
    document.getElementById("ShortTerm").innerHTML=document.getElementById("Displayshortterm").innerHTML;
    document.getElementById("ShortTerm").style.display="";
    if(document.pat96ret.leaveend.value=="1"){
    document.getElementById("LeaveEnd").innerHTML=document.getElementById("Displayendreason").innerHTML;
    document.getElementById("LeaveEnd").style.display="";}
  } else {
    document.getElementById("ShortTerm").innerHTML="";
    document.getElementById("ShortTerm").style.display="none";
    document.getElementById("LeaveEnd").innerHTML="";
    document.getElementById("LeaveEnd").style.display="none";
  }
}
