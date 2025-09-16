//jsVersion  : V11.03.00
//========================================================================
// Program   : comweb0604.js
//
// Written   : 18/03/2014
//
// Function  : Standard Functions Used in comweb0604
//
// Version   : 
//
// V10.04.00   18/03/2014  Don Nguyen       CAR 291879
//             Created Include
//=======================================================================
// REPORT 4 - IHI Errors Enquiry
//========================================================================

function init() {
  if (document.EnquiryForm.pgoption.value=="A") {
    document.EnquiryForm.enselopt.selectedIndex=1;
    EnquiryOptions.innerHTML=RequestTypeEnquiry.innerHTML;
    TableLocation.innerHTML=RequestTypeEnquiryTable.innerHTML;
    SelectReqType();
  } 
  else if (document.EnquiryForm.pgoption.value=="B") {
    document.EnquiryForm.enselopt.selectedIndex=2;
    EnquiryOptions.innerHTML=RequestCodeEnquiry.innerHTML;
    TableLocation.innerHTML=RequestCodeEnquiryTable.innerHTML;
    InitDateRangeFields();
  } 
  else if (document.EnquiryForm.pgoption.value=="C") {
    document.EnquiryForm.enselopt.selectedIndex=3;
    EnquiryOptions.innerHTML=IDNumEnquiry.innerHTML;
    TableLocation.innerHTML=IDNumEnquiryTable.innerHTML;
  } 
  else if (document.EnquiryForm.pgoption.value=="D") {
    document.EnquiryForm.enselopt.selectedIndex=4;
    EnquiryOptions.innerHTML=DateEnquiry.innerHTML;
    TableLocation.innerHTML=DateEnquiryTable.innerHTML;
    InitDateRangeFields();
  }
  else if (document.EnquiryForm.pgoption.value=="E") {
    document.EnquiryForm.enselopt.selectedIndex=5;
    EnquiryOptions.innerHTML=UserIDEnquiry.innerHTML;
    TableLocation.innerHTML=UserIDEnquiryTable.innerHTML;
    InitDateRangeFields();
  }
  else if (document.EnquiryForm.pgoption.value=="F") {
    document.EnquiryForm.enselopt.selectedIndex=6;
    EnquiryOptions.innerHTML=ErrorCodeEnquiry.innerHTML;
    TableLocation.innerHTML=ErrorCodeEnquiryTable.innerHTML;
    InitDateRangeFields();
  }
}

function ShowSpans(showoption) {
  if (showoption.value=="A") {
    EnquiryOptions.innerHTML=RequestTypeEnquiry.innerHTML;
    InitDateRangeFields();
    ClearDateFields();
    TableLocation.innerHTML="";
  } 
  else if (showoption.value=="B") {
    EnquiryOptions.innerHTML=RequestCodeEnquiry.innerHTML;
    InitDateRangeFields();
    ClearDateFields();
    clrFields(document.EnquiryForm.reqtcode);
    TableLocation.innerHTML="";
  } 
  else if (showoption.value=="C") {
    EnquiryOptions.innerHTML=IDNumEnquiry.innerHTML;
    clrFields(document.EnquiryForm.identnum);
    TableLocation.innerHTML="";
  } 
  else if (showoption.value=="D") {
    EnquiryOptions.innerHTML=DateEnquiry.innerHTML;
    InitDateRangeFields();
    ClearDateFields();
    TableLocation.innerHTML="";
  }
  else if (showoption.value=="E") {
    EnquiryOptions.innerHTML=UserIDEnquiry.innerHTML;
    InitDateRangeFields();
    ClearDateFields();
    TableLocation.innerHTML="";
  }
  else if (showoption.value=="F") {
    EnquiryOptions.innerHTML=ErrorCodeEnquiry.innerHTML;
    InitDateRangeFields();
    ClearDateFields();
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


function CheckIDNum(elIDNum) {
  if(isWhitespace(elIDNum.value)) { return; }

  // validate IHI number and submit on Carriage Return or Tab key
  if ((event.keyCode == 13) || (event.keyCode == 9)) {
    if (validateMandatory(EnquiryForm)) {
      var serverURL = "../cgi-bin/comweb06.pbl?reportno=5&valdtype=6" +
                      "&valdcode=" + elIDNum.value.replace(/ /g,"+");

      var returnValue = RSExecute(serverURL);
      if (returnValue.status==0) {
        ReturnValue = returnValue.return_value.split("|");
        if (ReturnValue == '1') {
          document.EnquiryForm.identnum.value = elIDNum.value;
          SubmitForm(EnquiryForm);
        }
      }
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

