//jsVersion  : V11.03.00
//========================================================================
// Program   : hosweb0106.js
//
// Written   : 21/11/2006
//
// Function  : Standard Functions Used in hosweb0106
//
// Version   : 
//
// V9.08.01  11/01/2007  Mike Laming         CAR 103368
//           Add Outpatient changes made to V9.07   
// V9.08.00  17/11/2006  Mike Laming         CAR 103368
//           Cloned from hosweb0101.js and modified for CCPS
//========================================================================
// REPORT 1 
//========================================================================
function ShowSpans(showoption) { 
  if (showoption.value=="1" || showoption.value=="2" ||
      showoption.value=="3") {
    SelectionHeading.innerHTML=SelectionHead1.innerHTML;
    HosClaimOptions.innerHTML=CreateExtract.innerHTML;
    DateXRange.innerHTML=DatXRange.innerHTML
    TableLocation.innerHTML="";
    document.ReportForm.schddate.focus();
    ReportLoad();
    if (showoption.value=="2") {
      SelectionHeading.innerHTML=SelectionHead2.innerHTML;
    }
    if (showoption.value=="3") {
      SelectionHeading.innerHTML=SelectionHead3.innerHTML;
    }

  } else if (showoption.value=="4") {
    SelectionHeading.innerHTML=SelectionHead4.innerHTML;
    HosClaimOptions.innerHTML=CreateExtract.innerHTML;
    DateXRange.innerHTML="";
    TableLocation.innerHTML="";
    document.ReportForm.schddate.focus();
    ReportLoad();

  } else if (showoption.value=="5") {
    SelectionHeading.innerHTML=SelectionHead5.innerHTML;
    HosClaimOptions.innerHTML=Re_Extract.innerHTML;
    DateXRange.innerHTML="";
    document.ReportForm.schddate.focus();
    ReportLoad();
    TableLocation.innerHTML="";

  } else {
    SelectionHeading.innerHTML="";
    HosClaimOptions.innerHTML="" 
    TableLocation.innerHTML="";
    DateXRange.innerHTML="";
  }
}
function ProcessReport() {
  document.ReportForm.keystr01.value=document.ReportForm.optntype.value;
  if (document.ReportForm.optntype.value=="1" ||
      document.ReportForm.optntype.value=="2" ||
      document.ReportForm.optntype.value=="3") {
    ReportForm.keystr02.title="From Date"
    ReportForm.keystr03.title="To Date"
    document.ReportForm.keystr02.value=document.ReportForm.datefrom.value;
    document.ReportForm.keystr03.value=document.ReportForm.datetoto.value;
  }
  if (document.ReportForm.optntype.value=="5") {
    document.ReportForm.keystr04.value=document.ReportForm.batchnum.value;
  }
  document.ReportForm.keystr05.value="Y";
  document.ReportForm.keystr06.value="";
  document.ReportForm.keystr07.value="";
 
// alert(ReportForm.keystr01.value+"'"+ReportForm.keystr02.value+"'");
// alert(ReportForm.keystr03.value+"'"+ReportForm.keystr04.value+"'");
// alert(ReportForm.keystr05.value+"'");
 
  if (validateMandatory(ReportForm)) {
    SubmitReport(ReportForm) 
  }
}
//------------------------------------------------------------
// Function : Validate Batch Number
//------------------------------------------------------------
function validateBatch(ReturnCode) {
  if (isWhitespace(ReturnCode.value)) { return true; }
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
//  document.BatchForm.submit();
//
function checkBatchNo(batchno) {
  if(isWhitespace(batchno.value)) { return; }
  if ((event.keyCode == 13) || (event.keyCode == 9)) {  // Carriage Return
    ans=validateBatch(batchno);
    if(!ans) { return }
    document.BatchForm.batchnum.value=batchno.value;
  }
  return true;
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
