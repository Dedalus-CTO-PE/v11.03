//jsVersion  : V11.03.02
//----------------------------------------------------------------------
// Function  : Standard Functions Used in comweb0603
//----------------------------------------------------------------------
//
//=======================================================================
// REPORT 3 - IHI Exceptions Enquiry
//========================================================================

function init() {
  if (document.EnquiryForm.pgoption.value=="A") {
    document.EnquiryForm.enselopt.selectedIndex=1;
    EnquiryOptions.innerHTML=IHINumEnquiry.innerHTML;
    TableLocation.innerHTML=IHINumEnquiryTable.innerHTML;
  } 
  else if (document.EnquiryForm.pgoption.value=="B") {
    document.EnquiryForm.enselopt.selectedIndex=2;
    EnquiryOptions.innerHTML=DateEnquiry.innerHTML;
    TableLocation.innerHTML=DateEnquiryTable.innerHTML;
    InitDateRangeFields();
  } 
  else if (document.EnquiryForm.pgoption.value=="C") {
    document.EnquiryForm.enselopt.selectedIndex=3;
    EnquiryOptions.innerHTML=MessageIDEnquiry.innerHTML;
    TableLocation.innerHTML=MessageIDEnquiryTable.innerHTML;
  } 
  else if (document.EnquiryForm.pgoption.value=="D") {
    document.EnquiryForm.enselopt.selectedIndex=4;
    EnquiryOptions.innerHTML=UserIDEnquiry.innerHTML;
    TableLocation.innerHTML=UserIDEnquiryTable.innerHTML;
    InitDateRangeFields();
  }
  else if (document.EnquiryForm.pgoption.value=="F") {
    document.EnquiryForm.enselopt.selectedIndex=5;
    EnquiryOptions.innerHTML=URNNumEnquiry.innerHTML;
    TableLocation.innerHTML=URNNumEnquiryTable.innerHTML;
  }
}

function ShowSpans(showoption) {
  if (showoption.value=="A") {
    EnquiryOptions.innerHTML=IHINumEnquiry.innerHTML;
    TableLocation.innerHTML="";
    clrFields(document.EnquiryForm.ihinumbr);
  } 
  else if (showoption.value=="B") {
    EnquiryOptions.innerHTML=DateEnquiry.innerHTML;
    TableLocation.innerHTML="";
    InitDateRangeFields();
    ClearDateFields();
  } 
  else if (showoption.value=="C") {
    EnquiryOptions.innerHTML=MessageIDEnquiry.innerHTML;
    TableLocation.innerHTML="";
    clrFields(document.EnquiryForm.hismsgid);
  } 
  else if (showoption.value=="D") {
    EnquiryOptions.innerHTML=UserIDEnquiry.innerHTML;
    InitDateRangeFields();
    ClearDateFields();
    clrFields(document.EnquiryForm.ihiuseri);
    TableLocation.innerHTML="";
  }
  else if (showoption.value=="F") {
    EnquiryOptions.innerHTML=URNNumEnquiry.innerHTML;
    TableLocation.innerHTML="";
    clrFields(document.EnquiryForm.ihiurnum);
  }
  else {
    EnquiryOptions.innerHTML=""
    TableLocation.innerHTML="";
  }
}

function ClearDateFields() {
  clrFields(document.EnquiryForm.datepstt,document.EnquiryForm.datepend,
    document.EnquiryForm.d_startdate, document.EnquiryForm.d_enddate);
}

function AddTextBlurHandler(el) {
  el.onblur = function () { TextBlurHandler(el); };
}

function InitDateRangeFields() {
  AddTextBlurHandler(document.EnquiryForm.d_startdate);
  AddTextBlurHandler(document.EnquiryForm.d_enddate);
}

function TrimField(el) {
  if (el == undefined) return;
  if (el.length == 0) return;

  el.value = trim(el.value);
}

function SubmitForm(theForm) {
  if (theForm == undefined) return;
  theForm.submit();
}

function ClearField(field) {
  clrFields(field);
  field.focus();
  TableLocation.innerHTML="";
}

function FieldFocus(el) {
  if (el == undefined) return;

  if (isWhitespace(el.value)) {
    el.value = "";
  }
}


function CheckIHINum(elIHINum) {
  if(isWhitespace(elIHINum.value)) { return; }

  // validate IHI number and submit on Carriage Return or Tab key
  if ((event.keyCode == 13) || (event.keyCode == 9)) {
    if (validateMandatory(EnquiryForm)) {
      var serverURL = "../cgi-bin/comweb06.pbl?reportno=5&valdtype=3" +
                      "&valdcode=" + elIHINum.value.replace(/ /g,"+");

      var returnValue = RSExecute(serverURL);
      if (returnValue.status==0) {
        ReturnValue = returnValue.return_value.split("|");
        if (ReturnValue == '1') {
          document.EnquiryForm.ihinumbr.value = elIHINum.value;
          SubmitForm(EnquiryForm);
        }
      }
    }
  }
}

function CheckURNum() {

  if(isWhitespace(EnquiryForm.ihiurnum.value)) { return; }


  // validate UR number and submit on Carriage Return or Tab key
  if ((event.keyCode == 13) || (event.keyCode == 9)) {
    if (validateMandatory(EnquiryForm)) {

      justifyRight(EnquiryForm.ihiurnum);
      if (validateCode(8,EnquiryForm.ihiurnum,EnquiryForm.dummyvar)) {
        SubmitForm(EnquiryForm);
      }

    }

  }

}

function CheckMsgID(elMsgID) {
  if(isWhitespace(elMsgID.value)) { return; }

  // validate messageID and submit on Carriage Return or Tab key
  if ((event.keyCode == 13) || (event.keyCode == 9)) {
    if (validateMandatory(EnquiryForm)) {

//    var serverURL = "../cgi-bin/comweb06.pbl?reportno=5&valdtype=2" +
//                    "&valdcode=" + elMsgID.value.replace(/ /g,"+");

//    var returnValue = RSExecute(serverURL);
//    if (returnValue.status==0) {
//      ReturnValue = returnValue.return_value.split("|");
//      if (ReturnValue == '1') {
          document.EnquiryForm.hismsgid.value = elMsgID.value;
          SubmitForm(EnquiryForm);
//      }
//    }
    }
  }
}

function SubmitByDate() {
  if (validateMandatory(EnquiryForm)) {
    var startdate = SetDateYYYYMMDD(document.EnquiryForm.d_startdate.value);
    var enddate = SetDateYYYYMMDD(document.EnquiryForm.d_enddate.value);
    if ( enddate < startdate ) {
      alert("Invalid Date Range entered");
      document.EnquiryForm.d_startdate.select();
      return false;
    }

    document.EnquiryForm.datepstt.value = startdate;
    document.EnquiryForm.datepend.value = enddate;
    SubmitForm(EnquiryForm);
  }
}

