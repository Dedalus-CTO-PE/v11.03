//jsVersion  : V11.03.00
//========================================================================
// Program   : hosweb0103.js
//
// Written   : 10/05/2004
//
// Function  : Standard Functions Used in hosweb0103
//
// Version   : 
//
// V10.03.01 22/05/2012  Ebon Clements      265723
//           2012 CD Diffs - Fixed validateUR()
// V9.09.01  10/08/2007  Mike Laming         CAR 125462
//           Add Multi-Hospital to ShowSpans for each relevant option
// V9.08.01  21/03/2007  Mike Laming         CAR 125462
//           Add SetHosp for Multi-Hospital selection
// V9.03.00  10/05/2004  Pat Dirito          CAR 48900
//           Created Include
//========================================================================
// REPORT 3 - Casmix Funding
//========================================================================
function init() {
  if (document.BatchForm.pgoption.value=="A") {
    if(isWhitespace(document.BatchForm.batchno.value)) { return; }
    document.BatchForm.updttype.selectedIndex=1;
    HosClaimOptions.innerHTML=BatchEnquiry.innerHTML;
    TableLocation.innerHTML=BatchEnquiryTable.innerHTML;
    justifyLeft(document.BatchForm.batchnum); // Do here cuase not work in span!
    document.BatchForm.batchnum.focus();
  } else if (document.BatchForm.pgoption.value=="B") {
    if(isWhitespace(document.BatchForm.adminnum.value)) { return; }
    document.BatchForm.updttype.selectedIndex=2;
    HosClaimOptions.innerHTML=AdmissnoEnquiry.innerHTML;
    TableLocation.innerHTML=AdmissnoEnquiryTable.innerHTML;
    justifyLeft(document.BatchForm.admissno); // Do here cuase not work in span!
    justifyLeft(document.BatchForm.dummy1); // Do here cuase not work in span!
    document.BatchForm.admissno.focus();
  } else if (document.BatchForm.pgoption.value=="C") {
    if(isWhitespace(document.BatchForm.invoice.value)) { return; }
    document.BatchForm.updttype.selectedIndex=3;
    HosClaimOptions.innerHTML=InvoiceEnquiry.innerHTML;
    TableLocation.innerHTML=InvoiceEnquiryTable.innerHTML;
    justifyLeft(document.BatchForm.invoicen); // Do here cuase not work in span!
    justifyLeft(document.BatchForm.dummy1); // Do here cuase not work in span!
    justifyLeft(document.BatchForm.dummy2); // Do here cuase not work in span!
    justifyLeft(document.BatchForm.dummy3); // Do here cuase not work in span!
    justifyLeft(document.BatchForm.dummy4); // Do here cuase not work in span!
    document.BatchForm.invoicen.focus();
  } else if (document.BatchForm.pgoption.value=="D") {
    if(isWhitespace(document.BatchForm.urnum.value)) { return; }
    document.BatchForm.updttype.selectedIndex=4;
    HosClaimOptions.innerHTML=UREnquiry.innerHTML;
    TableLocation.innerHTML=UREnquiryTable.innerHTML;
    if (BatchForm.ibcnmhos.value=="1") {
      TableLocation.innerHTML=UREnquiryTabMH.innerHTML;
    } else {
      TableLocation.innerHTML=UREnquiryTable.innerHTML;
    }
    justifyLeft(document.BatchForm.urnumber); // Do here cuase not work in span!
    document.BatchForm.urnumber.focus();
  } else if ((document.BatchForm.pgoption.value=="E") ||
             (document.BatchForm.pgoption.value=="G")) {
    document.BatchForm.updttype.selectedIndex=5;
    HosClaimOptions.innerHTML=WaitExtractionEnquiry.innerHTML;
    TableLocation.innerHTML="";
  }
}
function ShowSpans(showoption) {
  if (showoption.value=="A") {
    HosClaimOptions.innerHTML=BatchEnquiry.innerHTML;
    TableLocation.innerHTML="";
    clrFields(BatchForm.batchnum,BatchForm.dummy1,BatchForm.dummy2);
    clrFields(BatchForm.dummy4);
    setTimeout('document.BatchForm.batchnum.focus();',100);
  } else if (showoption.value=="B") {
    HosClaimOptions.innerHTML=AdmissnoEnquiry.innerHTML;
    TableLocation.innerHTML="";
    clrFields(BatchForm.admissno,BatchForm.dummy1,BatchForm.dummy2);
    clrFields(BatchForm.dummy4);
    setTimeout('document.BatchForm.admissno.focus();',100);
  } else if (showoption.value=="C") {
    HosClaimOptions.innerHTML=InvoiceEnquiry.innerHTML;
    TableLocation.innerHTML="";
    clrFields(BatchForm.invoicen,BatchForm.dummy1,BatchForm.dummy2);
    clrFields(BatchForm.dummy3,BatchForm.dummy4);
    setTimeout('document.BatchForm.invoicen.focus();',100);
  } else if (showoption.value=="D") {
    HosClaimOptions.innerHTML=UREnquiry.innerHTML;
    TableLocation.innerHTML="";
    clrFields(BatchForm.urnumber,BatchForm.dummy1);
    setTimeout('document.BatchForm.urnumber.focus();',100);
  } else if (showoption.value=="E") {
    HosClaimOptions.innerHTML=WaitExtractionEnquiry.innerHTML;
    TableLocation.innerHTML="";
  } else {
    HosClaimOptions.innerHTML="" 
    TableLocation.innerHTML="";
  }
}
function ProcessReport() {
  if (validateMandatory(BatchForm)) {
    SubmitReport(BatchForm) 
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
    if (validateMandatory(BatchForm)) {
      ans=validateBatch(batchno);
      if(!ans) { return }
      document.BatchForm.batchnum.value=batchno.value;
      document.BatchForm.submit();
    }
  }
}
//
//   NEXT PAGE BUTTON
//
function NextRecordSet(nextkey,prevkey) {
//  alert("Limit Reached")
  NextPage.innerHTML="<input type=button class=button value='Prev Page' " +
                     "onclick='PrevRecords(\"" + prevkey + "\");'>" +
                     "<input type=button class=button value='Next Page' " +
                     "onclick='NextRecords(\"" + nextkey + "\");'>"
}
function PrevRecords(Key) {
//  alert("prev: " + Key)
  document.BatchForm.prevrecd.value=Key;
  document.BatchForm.batchnum.value=document.BatchForm.batchno.value;
  document.BatchForm.submit();
}
function NextRecords(Key) {
//  alert("next: " + Key)
  document.BatchForm.uncodkey.value=Key;
  document.BatchForm.batchnum.value=document.BatchForm.batchno.value;
  document.BatchForm.submit();
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
//------------------------------------------------------------
// Function : Resubmit Item
//------------------------------------------------------------
function Resubmit(Item) {
  var status=Item.value.substr(0,2);
  if (status==" 3") {
    ans=confirm("Warning Invoice already sent!\n" +
                "Press OK to continue or Cancel to quit.");
    if (!ans) {
      return false; 
    }
  }
  if (Item.checked==true) {
    var chckflag="1";
  } else {
    var chckflag="0";
  }
  var serverURL ="../cgi-bin/hosweb01.pbl?reportno=2&valdtype=2" +
                 "&batchkey=" + Item.value.replace(/ /g,"+") +
                 "&checkdfl=" + chckflag;

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
  } else {
    Item.checked=false;
    return false;
  }
  return true;
}
function checkAdmiss(admiss) {
  if(isWhitespace(admiss.value)) { return; }
  if ((event.keyCode == 13) || (event.keyCode == 9)) {  // Carriage Return
    if (validateMandatory(BatchForm)) {
      justifyRight(admiss)
      ans=validateCode(45,admiss,document.BatchForm.admissno_dum);
      if(!ans) { return }
      document.BatchForm.admissno.value=admiss.value;
      document.BatchForm.submit();
    }
  }
}
function checkInvoice(invoice) {
  if(isWhitespace(invoice.value)) { return; }
  if ((event.keyCode == 13) || (event.keyCode == 9)) {  // Carriage Return
    if (validateMandatory(BatchForm)) {
      justifyRight(invoice)
      ans=validateInvoice(invoice);
      if(!ans) { return }
      document.BatchForm.invoicen.value=invoice.value;
      document.BatchForm.submit();
    }
  }
}
//------------------------------------------------------------
// Function : Validate Invoice Number
//------------------------------------------------------------
function validateInvoice(ReturnCode) {
  var serverURL ="../cgi-bin/patweb80.pbl?reportno=51&valdtype=1" +
                 "&valdcode=" + ReturnCode.value.replace(/ /g,"+");

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    var dummy=1;  // Dummy return
  } else {
    setTimeout('document.BatchForm.invoicen.select();',100);
    return false;
  }
  return true;
}
function checkUR(urnum) {
  if(isWhitespace(urnum.value)) { return; }
  if ((event.keyCode == 13) || (event.keyCode == 9)) {  // Carriage Return
    if (validateMandatory(BatchForm)) {
      justifyRight(urnum)
      ans=validateUR(urnum);
      if(!ans) { return }
      document.BatchForm.urnumber.value=urnum.value;
      document.BatchForm.submit();
    }
  }
}
//------------------------------------------------------------
// Function : Validate U/R Number
//------------------------------------------------------------
function validateUR(ReturnCode) {
  var serverURL ="../cgi-bin/patweb80.pbl?reportno=33" +
                 "&valdcode=" + ReturnCode.value.replace(/ /g,"+");

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    var urflag=returnValue.return_value.split("|")
    if (urflag[0]=="1") { 
      var dummy=1;  // Dummy return
      return true;
    } else {
      setTimeout('document.BatchForm.urnumber.select();',100);
      alert("Invalid Patient U/R - " + ReturnCode.value);
      return false;
    }
  }  
}
function PatientSearchFrame(ReturnName,ReturnUR,ReturnVisit) {
  ReturnFunction="" ;
  SearchType="" ;
  for (var i=3; i < PatientSearchFrame.arguments.length; i++) {
    if (typeof(PatientSearchFrame.arguments[i]) == 'function') {
      ReturnFunction=PatientSearchFrame.arguments[i] }
    else {
      SearchType=PatientSearchFrame.arguments[i].value
    } }
  window.ReturnName=ReturnName ;
  window.ReturnUR=ReturnUR ;
  window.ReturnVisit=ReturnVisit ;
  var PopUpFrameDoc = DFrameStart();
  PopUpFrameDoc.location.href= "../lookups/PatientSearchFrame"+SearchType+".html";
  SearchFrameShow();
}
function SetForm() {
  document.BatchForm.submit();
}
function CheckDelete() {
  ans=confirm("Are you sure you want to Delete?\n" +
              "Press OK to continue or Cancel to quit.");
  if (!ans) {
    return false; 
  }
  document.BatchForm.nextpage.value="1";
  document.BatchForm.redirect.value="hosweb01.pbl?reportno=3&template=1&updttype=E";
  document.BatchForm.updttype.options[5].value="G";
  document.BatchForm.submit();
}
//
function SetHosp(hosp) {
  linkurl="hosweb01.pbl?reportno=3&template=1" +
          "&updttype=" + document.BatchForm.updttype.value.replace(/ /g,"+") +
          "&hospcode=" + hosp.value.replace(/ /g,"+")
  location.href=linkurl             
}
