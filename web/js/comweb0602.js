//jsVersion  : V11.03.01
//----------------------------------------------------------------------
// Function  : Standard Functions Used in comweb0602
//----------------------------------------------------------------------
//
//======================================================================
// REPORT 2 - IHI Enquiry
//======================================================================

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
  else if (document.EnquiryForm.pgoption.value=="D") {
    document.EnquiryForm.enselopt.selectedIndex=3;
    EnquiryOptions.innerHTML=MessageIDEnquiry.innerHTML;
    TableLocation.innerHTML=MessageIDEnquiryTable.innerHTML;
  } 
  else if (document.EnquiryForm.pgoption.value=="F") {
    document.EnquiryForm.enselopt.selectedIndex=4;
    EnquiryOptions.innerHTML=ReqOrgEnquiry.innerHTML;
    TableLocation.innerHTML=ReqOrgEnquiryTable.innerHTML;
    InitDateRangeFields();
  }
  else if (document.EnquiryForm.pgoption.value=="G") {
    document.EnquiryForm.enselopt.selectedIndex=5;
    EnquiryOptions.innerHTML=UserIDEnquiry.innerHTML;
    TableLocation.innerHTML=UserIDEnquiryTable.innerHTML;
    InitDateRangeFields();
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
  else if (showoption.value=="D") {
    EnquiryOptions.innerHTML=MessageIDEnquiry.innerHTML;
    TableLocation.innerHTML="";
    clrFields(document.EnquiryForm.hismsgid);
  } 
  else if (showoption.value=="F") {
    EnquiryOptions.innerHTML=ReqOrgEnquiry.innerHTML;
    InitDateRangeFields();
    ClearDateFields();
    TableLocation.innerHTML="";
  } 
  else if (showoption.value=="G") {
    EnquiryOptions.innerHTML=UserIDEnquiry.innerHTML;
    InitDateRangeFields();
    ClearDateFields();
    clrFields(document.EnquiryForm.ihiuseri);
    TableLocation.innerHTML="";
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

function FieldFocus(el) {
  if (el == undefined) return;

  if (isWhitespace(el.value)) {
    el.value = "";
  }
}


//------------------------------------------------------------
// Function : Validate Batch Number
//------------------------------------------------------------
function validateBatch(ReturnCode) {
  var serverURL ="../cgi-bin/hosweb01.pbl?reportno=2&valdtype=1" +
                 "&batchnum=" + ReturnCode.value.replace(/ /g,"+");

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
  } else {
    ReturnCode.select();
    return false;
  }
  return true;
}

// Note for following function KeyCode equates to
//    keyCode 13 - Carriage Return
//    keyCode 9  - Tab
//
function checkBatchNo(batchno) {
  if(isWhitespace(batchno.value)) { return; }
  if ((event.keyCode == 13) || (event.keyCode == 9)) {  // Carriage Return
    if (validateMandatory(EnquiryForm)) {
      ans=validateBatch(batchno);
      if(!ans) { return }
      document.EnquiryForm.hibatchn.value=batchno.value;
      document.EnquiryForm.submit();
    }
  }
}


function BatchNumSearchFrame(ReturnCode) {
  DFrameStart()
  window.ReturnCode=ReturnCode ;

  window.ReturnFunction="" ;
  for (var i=1; i < BatchNumSearchFrame.arguments.length; i++) {
    if (typeof(BatchNumSearchFrame.arguments[i]) == 'function') {
      window.ReturnFunction=BatchNumSearchFrame.arguments[i]
    }
  }

  linkurl="../cgi-bin/hosweb01.pbl?reportno=01&template=002";
  Left=(document.body.clientWidth-750)/2
  DFrameLink(linkurl,100,Left,750,400)
}

function SubmitForm(theForm) {
  if (theForm == undefined) return;
  theForm.submit();
}

function SetHosp(hosp) {
  linkurl="comweb06.pbl?reportno=2&template=1" +
          "&enselopt=" + document.EnquiryForm.enselopt.value.replace(/ /g,"+") +
          "&hospcode=" + hosp.value.replace(/ /g,"+")
  location.href=linkurl
}

function ClearField(field) {
  clrFields(field);
  field.focus();
  TableLocation.innerHTML="";
}

function CheckIHINum(elIHINum) {
  if(isWhitespace(elIHINum.value)) { return; }

  // validate IHI number and submit on Carriage Return or Tab key
  if ((event.keyCode == 13) || (event.keyCode == 9)) {
    if (validateMandatory(EnquiryForm)) {
      var serverURL = "../cgi-bin/comweb06.pbl?reportno=5&valdtype=1" +
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

