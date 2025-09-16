//jsVersion  : V11.03.00
//========================================================================
// Program   : hosweb01.js
//
// Written   : 20/04/2004
//
// Function  : Standard Functions Used in hosweb01 
//
// Version   : 
//
// V9.09.01  10/08/2007  Mike Laming         CAR 125462
//           Added Hospital Name to display for all options if Multi-Hospital
// V9.08.01  21/03/2007  Mike Laming         CAR 125462
//           Added Health Fund selection to ProcessReport
// V9.04.01  07/10/2004  Jill Habasque       CAR 53798
//           Added multi hospital
// V9.03.03  30/07/2004  Pat Dirito          CAR 52184
//           Removed checking of validateMandatory in checkBatchNo()
// V9.03.02  10/06/2004  Pat Dirito          CAR 50552
//           Removed checking of ptcnuedi in ProcessReport()      
// V9.03.01  08/06/2004  Pat Dirito          CAR 48876
//           Took out init() moved to template hosweb0101001.html 
// V9.03.00  20/04/2004  Pat Dirito          CAR 48900
//           Created Include
//========================================================================
// REPORT 1 
//========================================================================
function ShowSpans(showoption) {
  if (showoption.value=="C") {
    HosClaimOptions.innerHTML=CreateExtract.innerHTML;
    TableLocation.innerHTML="";
    document.ReportForm.schddate.focus();
    ReportLoad();
    document.ReportForm.probutton.disabled=false;
  } else if (showoption.value=="R") {
    HosClaimOptions.innerHTML=Re_Extract.innerHTML;
    document.ReportForm.probutton.disabled=true;
    document.ReportForm.schddate.focus();
    ReportLoad();
    clrFields(ReportForm.keystr01,ReportForm.dummy1,ReportForm.dummy2);
    clrFields(ReportForm.dummy4);
    TableLocation.innerHTML="";
  } else {
    TableLocation.innerHTML="";
    HosClaimOptions.innerHTML="" 
  }
}
function ProcessReport() {
 if (document.ReportForm.optntype.value=="C") {
   if (document.ReportForm.ibcnmhos.value==1) {
       ReportForm.keystr02.value=ReportForm.multhosp.value;
       ReportForm.keystr03.value=ReportForm.fundcode.value;
       ReportForm.keystr04.value="Y"
       ReportForm.keystr05.value=" "
       ReportForm.keystr06.value=" "
   }
   else {
       ReportForm.keystr02.value=ReportForm.fundcode.value;
       ReportForm.keystr03.value="Y"
       ReportForm.keystr04.value=" "
       ReportForm.keystr05.value=" "
       ReportForm.keystr06.value=" "
   }
 }
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
//
function checkBatchNo(batchno) {
  if(isWhitespace(batchno.value)) { return; }
  if ((event.keyCode == 13) || (event.keyCode == 9)) {  // Carriage Return
    ans=validateBatch(batchno);
    if(!ans) { return }
    document.BatchForm.batchnum.value=batchno.value;
    document.BatchForm.submit();
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
function SetBatch() {
  document.BatchForm.batchnum.value=document.ReportForm.keystr01.value;
  document.BatchForm.submit();
}
//
//
//
function ShowSpansNCG(showoption) {
  if (showoption.value=="1") {
    NCGOptions.innerHTML=FundGrpSeq.innerHTML;
  } else if (showoption.value=="2") {
    NCGOptions.innerHTML=ClaimTypSeq.innerHTML;
  } else {
    NCGOptions.innerHTML=""
  }
}
//------------------------------------------------------------
// Function : Validate Health Fund Group
//------------------------------------------------------------
function validateGroup(ReturnCode) {
  if (isWhitespace(ReturnCode.value)) { return true; }
  var serverURL ="../cgi-bin/hosweb01.pbl?reportno=2&valdtype=3" +
                 "&valdcode=" + ReturnCode.value.replace(/ /g,"+");

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
  } else {
    ReturnCode.selectedIndex=0;
    return false;
  }
  return true;
}
//------------------------------------------------------------
// Function : Validate Financial Year Periods
//------------------------------------------------------------
function validateFin(startdate,enddate) {
  var serverURL ="../cgi-bin/hosweb01.pbl?reportno=2&valdtype=4" +
                 "&strtdate=" + startdate.value.replace(/ /g,"+") +
                 "&endddate=" + enddate.value.replace(/ /g,"+");

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
  } else {
    startdate.select();
    return false;
  }
  return true;
}
