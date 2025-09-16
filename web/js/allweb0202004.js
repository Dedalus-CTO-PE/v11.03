//jsVersion  : V11.03.00
//========================================================================
// Program   : allweb0202004.js
//
// Function  : Standard Functions Used in allweb0202004 template 
//
//========================================================================
//
function CloseReferral() {
  if(validateMandatory(UpdateForm)) {
    if(document.UpdateForm.checkappt.value==0) {
      CheckLinkedBookings(UpdateForm.admissno,UpdateForm.urnumber)
    }
    if(document.UpdateForm.checkappt.value==0) {
      return;
    }
    if(document.UpdateForm.checkappt.value==1) {
      CheckRequestAppt(UpdateForm.urnumber,UpdateForm.admissno)
    }
    if(document.UpdateForm.checkappt.value!=2) {
      return;
    }
    if(CloseMaster=="1") {
      if(!isWhitespace(VINAH_Ref)) {
        alert("Warning: This is the last linked episode referral.\n" +
              "Please close the Program Referral.");
      }
      else {
        //T0865480-Start
        //If dept code indc24='C' (auto close primary referral
        //from linked referral is set) then do not show warning message.
        //If the indicator is not set then show the warning message
        if (document.UpdateForm.deptcode == 'undefined'){
            alert("Warning: This is the last linked internal referral.\n" +
                  "Please close the master referral.");
        }
        else{
           var CatCGindc24 = document.UpdateForm.deptcode.value.substr(71,1);
           if (CatCGindc24 != "C"){
              alert("Warning: This is the last linked internal referral.\n" +
                    "Please close the master referral.");
           }
        }
        //T0865480-End
      }

    }
    if(!CheckFutureBookings(UpdateForm.admissno,UpdateForm.alref007,
                            UpdateForm.alref008)) {
      document.UpdateForm.checkappt.value=0;
      return;
    }
    var Template = "";
    if(getTop().content) {
      if(getTop().content.TemplateFile) {
         Template=getTop().content.TemplateFile.content.substr(0,13);
      }
    }
    if(Template.substr(0,6) == "outweb") {
     document.UpdateForm.redirect.value="allweb02.pbl?reportno=2&template=2" +
           "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
           "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
           "&deptcode=" + document.UpdateForm.deptcode.value.replace(/ /g,"+"); 
      document.UpdateForm.nextpage.value="4"
    }
    TheatreRedirect();
    document.UpdateForm.submit();
  }
}
//
function PostParent() {
   document.UpdateForm.checkappt.value=1;
   CloseReferral(); 
}
function PostParentRequested() {
   document.UpdateForm.checkappt.value=2;
   CloseReferral(); 
}
//
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
      var message = "Warning : Linked outpatient appointments exist " +
                    "for this referral" +
                    "\nClick OK to view and cancel appointments. " +
                    "Cancel to Continue.";

      if (confirm(message)) {  // View linked appointments

          if (document.getElementById('rdcnapck') != null &&
              document.getElementById('rdcnapck').value == '1') {
            document.getElementById('nextpage').value = '5';
            document.getElementById('redirect').value =
            "outweb02.pbl?reportno=3&template=015" +
            "&urnumber=" + ur.value.replace(/ /g,"+") +
            "&admissno=" + referral.value.replace(/ /g,"+");
          }

          linkUrl="allweb02.pbl?reportno=4&template=3" +
                  "&urnumber=" + ur.value.replace(/ /g,"+") +
                  "&admissno=" + referral.value.replace(/ /g,"+") 
          Left=(document.body.clientWidth-700)/2
          DFrameLink(linkUrl,15,Left,700,450)
      }
      else {  // Continue; set redirect and nextpage

        if (document.getElementById('rdcnapck') != null &&
            document.getElementById('rdcnapck').value == '1') {
          document.getElementById('nextpage').value = '5';
          document.getElementById('redirect').value =
          "outweb02.pbl?reportno=3&template=015" +
          "&urnumber=" + ur.value.replace(/ /g,"+") +
          "&admissno=" + referral.value.replace(/ /g,"+");
        }

        document.UpdateForm.checkappt.value=1;
      }
    } 
    else {  // No Booked appointments
      if (document.getElementById('rdcnapck') != null &&
          document.getElementById('rdcnapck').value == '1') {
        document.getElementById('nextpage').value = '5';
        document.getElementById('redirect').value =
        "outweb02.pbl?reportno=3&template=015" +
        "&urnumber=" + ur.value.replace(/ /g,"+") +
        "&admissno=" + referral.value.replace(/ /g,"+");
      }
      document.UpdateForm.checkappt.value=1;
    }
  }
}
function CheckRequestAppt(ur,referral) {
  var serverURL = "../cgi-bin/allweb02.pbl?reportno=6&updatety=R" +
                  "&urnumber=" + ur.value.replace(/ /g,"+") +
                  "&admissno=" + referral.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|");
  if (returnValue.status==0) {
    if (ReturnValue[0] == 1) {    // Requested or Pending Resch appt exists
      var message = "Warning : Linked Requested Appointments exist " +
                    "for this referral." +
                    "\nClick OK to view and cancel " + 
                    "Linked Appointment Requests.";
      if (confirm(message)) {  // View requested appointments
          linkUrl="allweb02.pbl?reportno=4&template=6" +
                  "&urnumber=" + ur.value.replace(/ /g,"+") +
                  "&admissno=" + referral.value.replace(/ /g,"+")
          Left=(document.body.clientWidth-700)/2
          DFrameLink(linkUrl,15,15,950,500)
      }
      else {  // Continue; set redirect and nextpage
        document.UpdateForm.checkappt.value=2;
      }
    }
    else {  // No requested appointments
      document.UpdateForm.checkappt.value=2;
    }
  }
}
function CheckFutureBookings(referral,closedate,closetime) {
  if (isWhitespace(referral.value) || isWhitespace(closedate.value)) {
   return true;
  }
  var serverURL = "../cgi-bin/allweb02.pbl?reportno=6&updatety=6" +
                  "&admissno=" + referral.value.replace(/ /g,"+") +
                  "&alref007=" + closedate.value.replace(/ /g,"+")

  if (closetime != undefined) {
    serverURL += "&alref008=" + closetime.value.replace(/ /g,"+")
  }

  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|");
  if (returnValue.status==0) {
    if (ReturnValue[0] == 1) {    // Booked future appointments exits
      var message = "Error : Linked outpatient appointments exist " +
                    "for this referral after the proposed closure date/time." 
      alert(message)
      return false;
    }
  }
  return true;
}
function checkVINAHMandatoryClosure() {
   var VINAH_REF = document.UpdateForm.deptcode.value.substr(10,1);
   var MASTER_REF = document.UpdateForm.alref083.value;
   var FIRST_ENC_ADDED = document.UpdateForm.firstenc.value;
   var MandatoryOK=true;
//
   if(isWhitespace(VINAH_REF) || MASTER_REF != "1" || FIRST_ENC_ADDED != "1") {
     return;
   }
//
   if(VINAH_REF == "S" || VINAH_REF == "V") {  // SACS and VALP
     if(isWhitespace(document.UpdateForm.d_alref075.value) ||
        isWhitespace(document.UpdateForm.d_alref077.value) ||
        isWhitespace(document.UpdateForm.d_alref078.value) ||
        isWhitespace(document.UpdateForm.d_alref132.value)) {
        MandatoryOK=false;
     }
   }
//
   if(VINAH_REF == "O") {  // Specialist OP
     if(isWhitespace(document.UpdateForm.d_alref132.value)) {
        MandatoryOK=false;
     }
   }
//
   if(VINAH_REF == "M") {  // Medi Hotel
     if(isWhitespace(document.UpdateForm.d_alref132.value)) {
        MandatoryOK=false;
     }
   }
//
   if(VINAH_REF == "T") {  // TCP
     if(isWhitespace(document.UpdateForm.d_alref075.value) ||
        isWhitespace(document.UpdateForm.d_alref077.value) ||
        isWhitespace(document.UpdateForm.d_alref078.value) ||
        isWhitespace(document.UpdateForm.d_alref132.value)) {
        MandatoryOK=false;
     }
   }
//
   if(VINAH_REF == "P") {  // Palliative Care
     if(isWhitespace(document.UpdateForm.d_alref075.value) ||
        isWhitespace(document.UpdateForm.d_alref077.value) ||
        isWhitespace(document.UpdateForm.d_alref132.value)) {
        MandatoryOK=false;
     }
   }
//
   if(VINAH_REF == "R") {  // Residential Reach
     if(isWhitespace(document.UpdateForm.d_alref075.value) ||
        isWhitespace(document.UpdateForm.d_alref132.value)) {
        MandatoryOK=false;
     }
   }
//
   if(VINAH_REF == "H") {  // HBPCCT
     if(isWhitespace(document.UpdateForm.d_alref075.value) ||
        isWhitespace(document.UpdateForm.d_alref077.value) ||
        isWhitespace(document.UpdateForm.d_alref078.value) ||
        isWhitespace(document.UpdateForm.d_alref132.value)) {
        MandatoryOK=false;
     }
   }
//
   if(VINAH_REF == "A") {  // Post Acute
     if(isWhitespace(document.UpdateForm.d_alref075.value) ||
        isWhitespace(document.UpdateForm.d_alref077.value) ||
        isWhitespace(document.UpdateForm.d_alref078.value) ||
        isWhitespace(document.UpdateForm.d_alref132.value)) {
        MandatoryOK=false;
     }
   }
//
   if(VINAH_REF == "I") {  // HARP
     if(isWhitespace(document.UpdateForm.d_alref075.value) ||
        isWhitespace(document.UpdateForm.d_alref077.value) ||
        isWhitespace(document.UpdateForm.d_alref078.value) ||
        isWhitespace(document.UpdateForm.d_alref132.value)) {
        MandatoryOK=false;
     }
   }
//
   if(MandatoryOK == false) {
     alert("There are mandatory fields outstanding that must be completed " +
          "prior to closing this referral\n"  +
          "Please update via the update referral page");
     document.UpdateForm.okbutton.disabled = true;
   }
}
function TheatreRedirect() {
  if((document.getElementById('thetkeys') != undefined) &&
    (!isWhitespace(document.getElementById('thetkeys').value))) {
    document.getElementById('redirect').value =
      "oprweb01.pbl?reportno=4&template=001" +
      "&casekeys=" + document.UpdateForm.thetkeys.value.replace(/ /g,"+") +
      "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
      "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+");
    document.getElementById('nextpage').value = 5;
  }
}
