//jsVersion  : V11.03.00
//========================================================================
// Program   : hosweb0107.js
//
// Written   : 21/11/2006
//
// Function  : Standard Functions Used in hosweb0107
//
// Version   : 
//
// V10.03.01 22/05/2012  Ebon Clements      265723
//           2012 CD Diffs - Fixed validateUR()
// V9.08.01  11/01/2007  Mike Laming         CAR 103368
//           Add Outpatient changes made to V9.07 
// V9.08.00  15/11/2006  Mike Laming         CAR 103368
//           Created Include
//=======================================================================
// REPORT 7 - CCPS EDI Claims Enquiry
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
    document.BatchForm.invoicen.focus();
  } else if (document.BatchForm.pgoption.value=="D") {
    if(isWhitespace(document.BatchForm.urnum.value)) { return; }
    document.BatchForm.updttype.selectedIndex=4;
    HosClaimOptions.innerHTML=UREnquiry.innerHTML;
    TableLocation.innerHTML=UREnquiryTable.innerHTML;
    justifyLeft(document.BatchForm.urnumber); // Do here coz not work in span!
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
    setTimeout('document.BatchForm.batchnum.focus();',100);
  } else if (showoption.value=="B") {
    HosClaimOptions.innerHTML=AdmissnoEnquiry.innerHTML;
    TableLocation.innerHTML="";
    clrFields(BatchForm.admissno,BatchForm.dummy1,BatchForm.dummy2);
    setTimeout('document.BatchForm.admissno.focus();',100);
  } else if (showoption.value=="C") {
    HosClaimOptions.innerHTML=InvoiceEnquiry.innerHTML;
    TableLocation.innerHTML="";
    clrFields(BatchForm.invoicen,BatchForm.dummy1,BatchForm.dummy2,BatchForm.dummy3);
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
  Left=(document.body.clientWidth-600)/2
  DFrameLink(linkurl,100,Left,600,380)
}
//------------------------------------------------------------
// Function : Change Status
//------------------------------------------------------------
function ChngStat(Invkey,Newstat,Reasonc) { 
   var status=Invkey.substr(0,2);
   var newstat=Newstat.value;
   var reasonc=Reasonc.value;

//                                        newstat 1=resubmit 2=approve 3=cancel
//                                                4=sent
  if (newstat=="3" & reasonc==" ") {
    Reasonc.className = "Mandatory";
    Reasonc.disabled = false;
    return;
  }
  if (newstat=="3") {
  }else {
    Reasonc.className = "";
    Reasonc.disabled = true;
    Reasonc.value    = " ";
  }
  if (newstat=="0") {
    return;
  }

  if (status==" 0" || status==" 1") {
    if (newstat=="1" || newstat=="2" || newstat=="4") {
      alert("Invoice has not been extracted yet");
      return;
    }
  }

  var serverURL ="../cgi-bin/hosweb01.pbl?reportno=2&valdtype=5" +
                 "&batchkey=" + Invkey.replace(/ /g,"+") +
                 "&newstats=" + newstat +
                 "&reasoncd=" + reasonc;

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
  } else {
  }
  return true;
}

function CheckExclude(Invkey) {
  document.BatchForm.nextpage.value="1";
  document.BatchForm.redirect.value="hosweb01.pbl?reportno=7&template=1" +
           "&updttype=E&systemid=" + document.BatchForm.saveit.value;
  document.BatchForm.updttype.options[5].value="G";
  document.BatchForm.batchkey.value=Invkey;
  document.BatchForm.submit();
}

function SelectSystem() {
//alert(document.BatchForm.systemid.value);
  document.BatchForm.submit();
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
function checkVisit(admiss) {
  if(isWhitespace(admiss.value)) { return; }
  if ((event.keyCode == 13) || (event.keyCode == 9)) {  // Carriage Return
    if (validateMandatory(BatchForm)) {
      justifyRight(admiss)
      ans=validateCode(22,admiss,document.BatchForm.admissno_dum);
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
  PopUpFrameDoc.location.href = "../lookups/PatientSearchFrame"+SearchType+".html";
  SearchFrameShow();
}
function SetForm() {
  document.BatchForm.submit();
}
