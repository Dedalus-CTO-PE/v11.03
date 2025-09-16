//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/allweb0301802.js
//
// Modification 
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.01 06.08.2013 B.G.Ackland CAR 289383
//                      New AJAXPostString2 to fix post encoding
// V10.01.00 12.12.2012 B.G.Ackland New 
//
function SaveAction() {
  if(document.UpdateForm.checkappt.value==0 && document.UpdateForm.checkbx2.checked==true) {
    CheckLinkedBookings(UpdateForm.admissno,UpdateForm.urnumber,UpdateForm.checkappt)
    if(document.UpdateForm.checkappt.value==0) {
      return;
    }
  }
  status=validateMandatory(document.UpdateForm);
  if (status=="true") {
    theURL=document.UpdateForm.action;
    var postStr=AJAXPostString2(document.UpdateForm)
    var xmlHttp = createHttpObject();
    xmlHttp.open("POST", theURL, false);
    xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
    xmlHttp.send(postStr);
    if (xmlHttp.status=="200") {
      if (xmlHttp.responseText.match(/PROCESSING:OK/i)) {
         parent.frames['PatFrame'].refreshScreen();
         parent.CloseDocument();
         return;
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
function init() {
 ShowVACS();
 ShowHideWaitingList(WaitingListStatus);
 var actionBtn = parent.document.getElementById('actionButton');
 if (actionBtn) {
   actionBtn.className = actionBtn.className.replace(/SpanButton/g,"");
   actionBtn.className = actionBtn.className.replace(/Blue/g,"");
   actionBtn.className = actionBtn.className + " SpanButtonBlue";
   actionBtn.innerText = "Save";
   actionBtn.onclick = function() {
     SaveAction();
   }
 }
}
function ToggleCombo(){
 if(UpdateForm.checkbx2.checked==false){
    UpdateForm.checkbx1.disabled=false;
    UpdateForm.alref006.className=" ";
 } else{
   UpdateForm.checkbx1.disabled=true; // disable Waiting List
   UpdateForm.checkbx1.checked=false;
   UpdateForm.alref006.className="Mandatory SelectBig";
 }
}
function ShowHideBill(){
  SetRedirect();
  CompensationCode=UpdateForm.alenc115.value.substr(13,1);
  PatientType=UpdateForm.alenc009.value.substr(4,1);
  isBillable=UpdateForm.billablef.value;
  if(isBillable==1&&(PatientType==1 || PatientType==2) &&
     (CompensationCode=="C" || CompensationCode=="E")){
    document.getElementById("DisplayBillable01").style.display="";
    document.getElementById("DisplayBillable02").style.display="";
    document.getElementById("DisplayBillable03").style.display="";
  } else{
    document.getElementById("DisplayBillable01").style.display="none";
    document.getElementById("DisplayBillable02").style.display="none";
    document.getElementById("DisplayBillable03").style.display="none";
  }
  if(CompensationCode=="E") {
    UpdateForm.itemn001.className="Mandatory"; }
  else {
    UpdateForm.itemn001.className="";  }
}
function SetRedirect() {
  UpdateForm.nextpage.value="1";
  UpdateForm.redirect.value="PROCESSING:OK"
//
//  Redirect to TAC/WC/VET Screen Not Yet Available
//  TO BE DEVELOPED WHEN AND IF REQUIRED (MAYBE For STV/RCH??)
//
//  PatientType=UpdateForm.alenc009.value.substr(4,1);
//  isBillable=UpdateForm.billablef.value;
//  if(isBillable==1&&(PatientType==1 || PatientType==2)) {
//    checkInd=document.UpdateForm.alenc115.value.substr(3,5)
//    if(checkInd.search(/W/g) >= 0) {
//      UpdateForm.nextpage.value="1";
//      UpdateForm.redirect.value="allweb03.pbl?reportno=1&template=805";
//    } else
//    if(checkInd.search(/V/g) >= 0) {
//      UpdateForm.nextpage.value="1";
//      UpdateForm.redirect.value="allweb03.pbl?reportno=1&template=806";
//    } else
//    if(checkInd.search(/M/g) >= 0) {
//      UpdateForm.nextpage.value="1";
//      UpdateForm.redirect.value="allweb03.pbl?reportno=1&template=804";
//    }
//  }
}
function PackComments(){
  UpdateForm.alenc107.value=UpdateForm.comments.value.substring(0,80);
  UpdateForm.alenc108.value=UpdateForm.comments.value.substring(80,160);
}
function ShowHideWaitingList(status){
  if(status==0)
    document.getElementById("DisplayWait").style.display="";
  else
    document.getElementById("DisplayWait").style.display="none";
}
function ShowVACS() {
   document.getElementById("DisplayVacs01").style.display="none";
   document.UpdateForm.alenc003.className="";
   document.getElementById("DisplayVacs02").style.display="none";
   document.UpdateForm.alenc009.className="";
   document.getElementById("DisplayVacs03").style.display="none";
   document.UpdateForm.alenc115.className="";
   document.getElementById("DisplayVacs04").style.display="none";
   document.UpdateForm.alenc011.className="";
   document.getElementById("DisplayIndirect").style.display="none";
   document.getElementById("DisplayItems01").style.display="none";
   document.getElementById("DisplayItems02").style.display="none";
   document.getElementById("DisplayItems03").style.display="none";
   document.getElementById("DisplayItems04").style.display="none";
   document.getElementById("DisplayItems05").style.display="none";
   document.getElementById("DisplayItems06").style.display="none";
   document.getElementById("DisplayLinked").style.display="none";
   document.getElementById("ReadOnlyLinked").style.display="none";
   document.getElementById("DisplayActivity").style.display="none";
   document.getElementById("DisplayIndirect").style.display="none";
   i=document.UpdateForm.alenc010.selectedIndex;
   VacsFlag=document.UpdateForm.alenc010.options[i].value.substring(6,7)
   if (isWhitespace(document.UpdateForm.alenc008.value)) {
     document.getElementById("DisplayLinked").style.display="";
   } else {
     document.getElementById("ReadOnlyLinked").style.display="";
   }
   if(VacsFlag==0) {
      document.getElementById("DisplayActivity").style.display="";
      document.getElementById("DisplayIndirect").style.display="";
   } else {
      document.getElementById("DisplayVacs01").style.display="";
      document.UpdateForm.alenc003.className="Mandatory";
      document.getElementById("DisplayVacs02").style.display="";
      document.UpdateForm.alenc009.className="Mandatory";
      document.getElementById("DisplayVacs03").style.display="";
      document.UpdateForm.alenc115.className="Mandatory";
      document.getElementById("DisplayVacs04").style.display="";
      document.UpdateForm.alenc011.className="Mandatory";
      document.getElementById("DisplayIndirect").style.display="";
      document.getElementById("DisplayItems01").style.display="";
      document.getElementById("DisplayItems02").style.display="";
      document.getElementById("DisplayItems03").style.display="";
      document.getElementById("DisplayItems04").style.display="";
      document.getElementById("DisplayItems05").style.display="";
      document.getElementById("DisplayItems06").style.display="";
      ShowHideBill();      
   }
}
function CheckLinkedBookings(referral,ur,checkflag) {
  if (isWhitespace(referral.value)) {
   return;
  }
  var serverURL = "../cgi-bin/allweb02.pbl?reportno=6&updatety=3" +
                  "&admissno=" + referral.value.replace(/ /g,"+") 
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|");
  if (returnValue.status==0) {
    if (ReturnValue[0] == 1) {    // Booked appointments exits
      var confirmMsg = "Warning : Linked outpatient appointments exist " +
                    "for this referral" +
                    "<br>Click OK Continue" 
      alertify.confirm(confirmMsg, function (e) {    
        if (e) { 
          checkflag.value=1;
        } else {
          checkflag.value=0;
        }
      });
    } else {
        checkflag.value=1;
    }
  }
}
