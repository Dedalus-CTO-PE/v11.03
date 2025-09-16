//jsVersion  : V11.03.00
<!-- hide
//
function mbsSearch(mbsName,mbsCode)  {
  window.mbsName=mbsName
  window.mbsCode=mbsCode
  myWin=open("/lookups/test/MbsSearchWindow.html", "displayWindow",
  "width=600,height=400,scrollbars=yes,status=no,toolbar=no,menubar=no");
}
//
function diagnosisSearch(diagName,diagCode)  {
  window.diagName=diagName
  window.diagCode=diagCode
  myWin=open("/lookups/test/DiagSearchWindow.html", "displayWindow",
  "width=600,height=400,scrollbars=yes,status=no,toolbar=no,menubar=no");
}
//
function procedureSearch(procName,procCode)  {
  window.procName=procName
  window.procCode=procCode
  myWin=open("/lookups/test/ProcSearchWindow.html", "displayWindow",
  "width=600,height=400,scrollbars=yes,status=no,toolbar=no,menubar=no");
}
//
function EmrProcSearch(ReturnName,ReturnCode) {
  var PopUpFrameDoc = DFrameStart();
  var linkURL="emrweb05.pbl?reportno=6&template=4&norecord=9";
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = linkURL;
  SearchFrameShow();
}
//
function EmrDiagnosisSearch(ReturnCode,ReturnName)  {
  var PopUpFrameDoc = DFrameStart();
  var linkURL="emrweb05.pbl?reportno=7&template=4";
  window.ReturnFunction="";
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  if (EmrDiagnosisSearch.arguments.length > 1) {
    window.ReturnFunction=EmrDiagnosisSearch.arguments[2]; }
  PopUpFrameDoc.location.href = linkURL;
  SearchFrameShow();
}
//
function drgSearch(drgName,drgCode)  {
  window.drgName=drgName
  window.drgCode=drgCode
  myWin=open("/lookups/test/DrgSearchWindow.html", "displayWindow",
  "width=600,height=400,scrollbars=yes,status=no,toolbar=no,menubar=no");
}
//
function LookEmrCode(validType,validName,validCode) {

  if (validCode.value == "") {
    return;
  }

  window.ValidateName=validName
  window.ValidateCode=validCode
  document.LookUpCode.valdtype.value=validType
  document.LookUpCode.valdcode.value=validCode.value
  document.LookUpCode.target="newWindow"
  newWindow=open("","newWindow",
  "width=1,height=1,top=1024,scrollbars=no,status=no,toolbar=no,menubar=no")
  document.LookUpCode.submit()
}
//
function  cancelCode(linkUrl)  {
  myWin=open(linkUrl, "CancellationCode",
  "width=200,height=140,scrollbars=no,status=no,toolbar=no,menubar=no");
}
//
function procedureSearch10(procName,procCode)  {
  window.procName=procName
  window.procCode=procCode
  myWin=open("patweb88.pbl?reportno=2&template=4",
  "displayWindow",
  "width=600,height=400,scrollbars=yes,status=no,toolbar=no,menubar=no");
}
// -->
