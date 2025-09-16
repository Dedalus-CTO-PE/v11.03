//jsVersion  : V11.03.00
//
//
// Modification
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.01 06.08.2013 B.G.Ackland CAR 289383
//                      New AJAXPostString2 to fix post encoding
// V10.01.01 04.12.2012 B.G.Ackland New Medical Record View Refresh
//
function PageLoadExtended() {
  resetButtons();
  checkIfSACClosure();
  checkIfPCRMandatory();
  checkStatusOfReferral();
  checkVINAHMandatoryClosure();
  if (ReferralStatus=="Closed    "){
    alertify.alert("Referral has already been Closed");
  } else {
    setButtons();
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
       CloseReferral();
    }
  }
}
function CloseReferral() {
 if(validateMandatory(UpdateForm)) {
   if(document.UpdateForm.checkappt.value==0) {
     CheckLinkedBookings(UpdateForm.admissno,UpdateForm.urnumber)
   }
   if(document.UpdateForm.checkappt.value==0) {
     return;
   }
    theURL=document.UpdateForm.action;
    var postStr=AJAXPostString2(document.UpdateForm)
    var xmlHttp = createHttpObject();
    xmlHttp.open("POST", theURL, false);
    xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
    xmlHttp.send(postStr);
    if (xmlHttp.status=="200") {
      if (xmlHttp.responseText.match(/PROCESSING|OK/i)) {
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
function checkIfPCRMandatory() {
  if ((document.UpdateForm.ptcnhdps.value == "3") ||
      (document.UpdateForm.ptcnhdps.value == "1")) {
    document.UpdateForm.alref072.className="Mandatory";
  }
}
function checkIfSACClosure() {
  var alreuyn4 = document.getElementById("sacs_master");
  var alref006 = document.getElementById("alref006");
  var placeHolder = document.getElementById("reasonForClosurePlaceHolder");
  if (document.UpdateForm.ptcnhdps.value!="3") {  // Not Victoria
    alref006.className ="Mandatory";
    return;
  }
  if (alreuyn4.value.replace(/ /g,"") == "Yes")
  {
    placeHolder.style.display="none";
    if (alref006)
      alref006.className = "";
  }
  else
  {
    placeHolder.style.display="";

    if (alref006) {
        alref006.className ="Mandatory";
    }
  }
}
function checkStatusOfReferral() {
 document.UpdateForm.alref136.value=document.UpdateForm.alref136.value.replace(/ *$/,'');
 document.UpdateForm.alref137.value=document.UpdateForm.alref137.value.replace(/ *$/,'');
 p=document.UpdateForm
 if ( BulkBill == "Yes") {
   document.UpdateForm.alref036.value=1;
 }
 if ( SACSRef == "Yes" ) {
   if (document.UpdateForm.ptcnhdps.value == "3") {  // only Victoria
     document.getElementById('ShowSACSField1').style.display="";
     document.getElementById('ShowSACSField2').style.display="";
     document.UpdateForm.alref136.className+=" Mandatory";
     document.UpdateForm.alref137.className+=" Mandatory";
   }
   document.UpdateForm.alref083.value = 1;
  } else {
   document.UpdateForm.alref083.value = 0;
  }
 var comment = document.getElementById("commenty");
 if (ReferralStatus=="Closed    "){
    if (comment) {
     comment.readOnly = true;
     comment.className = "Readonly";
    }
 } else {
    if (comment)
       comment.value = ""; //blank comment if new close
    document.UpdateForm.alref007.value = alref007DEF;
    document.UpdateForm.alref008.value = alref008DEF; 
 }
 var VINAH_Ref = (document.UpdateForm.deptcode.value.substr(10,1));
 if ((VINAH_Ref == "T") && 
      document.UpdateForm.alref083.value!="1") {
   if (isWhitespace(document.UpdateForm.d_alref164.value)) {
    alertify.alert("The advanced care plan documented date is a mandatory field " +
          "prior to closing this referral<br>"  +
          "Please update via the update referral page");
    document.UpdateForm.okbutton.disabled = true;
    }
    if (parseInt(AssessCount,10) < 2) {
       alertify.alert("Two assessments are a mandatory " +
             "prior to closing this referral<br>"  +
             "Please add via the assessment page");
       document.UpdateForm.okbutton.disabled = true;
    }
 }
 if ((VINAH_Ref == "T" || VINAH_Ref == "H" || VINAH_Ref == "S") &&
     document.UpdateForm.alref083.value!="1") {
   if (mainHealthRecord != 1) {
      alertify.alert("The main health condition is mandatory " +
            "prior to closing this referral<br>"  +
            "Please add via the update referral page");
      document.UpdateForm.okbutton.disabled = true;
   }
 }
 if (VINAH_Ref == "P" && document.UpdateForm.alref083.value!="1" &&
     isWhitespace(document.UpdateForm.d_alref049.value)) {
     alertify.alert("The death place is mandatory " +
           "prior to closing this referral<br>"  +
           "Please add via the update referral page");
     document.UpdateForm.okbutton.disabled = true;
 }
 if ((VINAH_Ref == "S"  || VINAH_Ref == "H" || VINAH_Ref == "O"
     || VINAH_Ref == "P" || VINAH_Ref == "R" || VINAH_Ref == "A") &&
      document.UpdateForm.alref083.value!="1" ) {
   if (referralDestination != 1) {
      alertify.alert("The referral destination is mandatory " +
            "prior to closing this referral<br>"  +
            "Please add via the update referral page");
      document.UpdateForm.okbutton.disabled = true;
   }
 }
 if (VINAH_Ref == "O" && document.UpdateForm.alref083.value=="1" ) {
   if (isWhitespace(document.UpdateForm.d_alref094.value)) {
        alertify.alert("The Referral In Clinical Referral Date is a mandatory " +
              "field prior to closing this referral<br>"  +
              "Please update via the update referral page");
        document.UpdateForm.okbutton.disabled = true;
     }
 }
  if ((VINAH_Ref == "O") && document.UpdateForm.alref083.value!="1" ) {
    if(document.UpdateForm.fapbookd.value==""||
       document.UpdateForm.fapnotfd.value==""){
      if(!(ReferralStatus=="Waiting   " && document.UpdateForm.linkedop.value=="0" &&
         document.UpdateForm.encountr.value!="1")) { 
        alertify.alert("The First Appointment Booked and Notified of First <br>" +
              "Appointment is mandatory prior to closing this referral. <br>" +
              "Please add via the update referral page");
        document.UpdateForm.okbutton.disabled = true;
      }
    }
  }
  if (VINAH_Ref == "T" && document.UpdateForm.alref083.value!="1" &&
      REFERRALTRANSITIONDATES == 0) {
     alertify.alert("The Transition Date is mandatory prior"+
           " to closing this referral. Please add "+
           "via the update referral page");
     document.UpdateForm.okbutton.disabled = true;
  }
  if (VINAH_Ref == "T" && document.UpdateForm.alref083.value!="0" &&
     document.UpdateForm.firstenc.value == "1") {
     if (isWhitespace(document.UpdateForm.d_alref078.value)) {
        alertify.alert("The Accommodation Type is a mandatory field prior to closing" +
              " this referral<br>"  +
              "Please update via the update referral page");
        document.UpdateForm.okbutton.disabled = true;
     }
     if (isWhitespace(document.UpdateForm.d_alref132.value)) {
        alertify.alert("The Date of Referral Receipt Acknowledgement is a mandatory " +
              "field prior to closing this referral<br>"  +
              "Please update via the update referral page");
        document.UpdateForm.okbutton.disabled = true;
     }
  }
}
function CheckLinkedBookings(referral,ur) {
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
                    "<br>Click OK to view and cancel appointments. " +
                    "Cancel to Continue.";
      alertify.confirm(confirmMsg, function (e) {    
        if (e) { 
          linkUrl="allweb02.pbl?reportno=4&template=3" +
                  "&urnumber=" + ur.value.replace(/ /g,"+") +
                  "&admissno=" + referral.value.replace(/ /g,"+") 
          Left=(document.body.clientWidth-700)/2
          DFrameLink(linkUrl,15,Left,700,450)
        } else {
          document.UpdateForm.checkappt.value=1;
        }
      } );
    } else {
        document.UpdateForm.checkappt.value=1;
    }
  }
}
function checkVINAHMandatoryClosure() {
   var VINAH_REF = document.UpdateForm.deptcode.value.substr(10,1);
   var MASTER_REF = document.UpdateForm.alref083.value;
   var FIRST_ENC_ADDED = document.UpdateForm.firstenc.value;
   var MandatoryOK=true;
   if(isWhitespace(VINAH_REF) || MASTER_REF != "1" || FIRST_ENC_ADDED != "1") {
     return;
   }
   if(VINAH_REF == "S") {  // SACS           
     if(isWhitespace(document.UpdateForm.d_alref075.value) ||
        isWhitespace(document.UpdateForm.d_alref077.value) ||
        isWhitespace(document.UpdateForm.d_alref078.value) ||
        isWhitespace(document.UpdateForm.d_alref132.value)) {
        MandatoryOK=false;
     }
   }
   if(VINAH_REF == "O") {  // Specialist OP
     if(isWhitespace(document.UpdateForm.d_alref132.value)) {
        MandatoryOK=false;
     }
   }
   if(VINAH_REF == "M") {  // Medi Hotel
     if(isWhitespace(document.UpdateForm.d_alref132.value)) {
        MandatoryOK=false;
     }
   }
   if(VINAH_REF == "T") {  // TCP
     if(isWhitespace(document.UpdateForm.d_alref075.value) ||
        isWhitespace(document.UpdateForm.d_alref077.value) ||
        isWhitespace(document.UpdateForm.d_alref078.value) ||
        isWhitespace(document.UpdateForm.d_alref132.value)) {
        MandatoryOK=false;
     }
   }
   if(VINAH_REF == "P") {  // Palliative Care
     if(isWhitespace(document.UpdateForm.d_alref075.value) ||
        isWhitespace(document.UpdateForm.d_alref077.value) ||
        isWhitespace(document.UpdateForm.d_alref132.value)) {
        MandatoryOK=false;
     }
   }
   if(VINAH_REF == "R") {  // Residential Reach
     if(isWhitespace(document.UpdateForm.d_alref075.value) ||
        isWhitespace(document.UpdateForm.d_alref132.value)) {
        MandatoryOK=false;
     }
   }
   if(VINAH_REF == "H") {  // HBPCCT
     if(isWhitespace(document.UpdateForm.d_alref075.value) ||
        isWhitespace(document.UpdateForm.d_alref077.value) ||
        isWhitespace(document.UpdateForm.d_alref078.value) ||
        isWhitespace(document.UpdateForm.d_alref132.value)) {
        MandatoryOK=false;
     }
   }
   if(VINAH_REF == "A") {  // Post Acute
     if(isWhitespace(document.UpdateForm.d_alref075.value) ||
        isWhitespace(document.UpdateForm.d_alref077.value) ||
        isWhitespace(document.UpdateForm.d_alref078.value) ||
        isWhitespace(document.UpdateForm.d_alref132.value)) {
        MandatoryOK=false;
     }
   }
   if(VINAH_REF == "I") {  // HARP
     if(isWhitespace(document.UpdateForm.d_alref075.value) ||
        isWhitespace(document.UpdateForm.d_alref077.value) ||
        isWhitespace(document.UpdateForm.d_alref078.value) ||
        isWhitespace(document.UpdateForm.d_alref132.value)) {
        MandatoryOK=false;
     }
   }
   if(MandatoryOK == false) {
     alertify.alert("There are mandatory fields outstanding that must be completed " +
          "prior to closing this referral<br>"  +
          "Please update via the update referral page");
     document.UpdateForm.okbutton.disabled = true;
   }
}
