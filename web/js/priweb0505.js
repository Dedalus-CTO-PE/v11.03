//jsVersion  : V11.03.00
//========================================================================
// Program   : priweb0505.js
//
// Written   : 29.01.2004 Pat Dirito   
//
// Function  : Standard Functions Used in priweb05
//
//========================================================================
function ChkCode(theForm) {
  if ((isWhitespace(AddForm.pritd002.value)) &&
     (isWhitespace(AddForm.pritd004.value))) { return; }

  if(theForm.pritd002.value == "M") {
     theForm.pritd002.value="MBS";
  }
  if(theForm.pritd002.value == "A") {
     theForm.pritd002.value="AMA";
  }

  if(theForm.pritd002.value != "MBS") {
    if(theForm.pritd002.value != "AMA"){
        alert("Item Flag should be MBS or AMA");
        theForm.pritd002.value=""
        theForm.pritd002.focus()
    }
  }
}
//------------------------------------------------------------------
//  Validate an MBS item from the private practice item file
//------------------------------------------------------------------
function validatePMBS(ReturnCode,ReturnName,ReturnType,ReturnScod,ReturnEfdt,ReturnAmnt) {
  ReturnFunction="" ;
  ReturnName.value="";
  ReturnAmnt.value="";
  for (var i=6; i < validatePMBS.arguments.length; i++) {
    if (typeof(validatePMBS.arguments[i]) == 'function') {
      ReturnFunction=validatePMBS.arguments[i] }
    else {
      validatePMBS.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  if (isWhitespace(ReturnType.value)) return;;
  var serverURL   = "../cgi-bin/allweb01.pbl?reportno=14" +
                    "&valdtype=" + ReturnType.value.replace(/ /g,"+") +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&valdscod=" + ReturnScod.value.replace(/ /g,"+") +
                    "&valdefdt=" + ReturnEfdt.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    ReturnAmnt.value=(ReturnValue[1])
    j=0
    for (var i=6; i < validatePMBS.arguments.length; i++) {
       if (typeof(validatePMBS.arguments[i]) != 'function') {
         j++
         validatePMBS.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    return false;
     }
}
function TypeDesc() {
  var p=document.AddForm;
  if (p.pritd002.value==" 0") {
    p.pritd002.value="MBS";
  } else {
    p.pritd002.value="AMA";
  }
}
function MoveRec(tempno,type,oldseqnc,moveswap) {
  document.MoveForm.pritd001.value=tempno;
  document.MoveForm.pritd002.value=type;
  document.MoveForm.pritd003.value=oldseqnc;
  document.MoveForm.moveswap.value=moveswap;
  if (document.MoveForm.newseqnc.value == ""){
    document.MoveForm.newseqnc.value=oldseqnc; }
  UpdateWin=window.open("","HideUpdateWindow",
  "width=10,height=10,top=1024,directories=no,location=no" +
  ",scrollbars=no,status=no,toolbar=no,menubar=no,resizeable=no")
  document.MoveForm.target="HideUpdateWindow";
  document.MoveForm.submit();
}
function setSeq(newseq) {
  document.MoveForm.newseqnc.value=newseq.value;
}
function AddItem(tempID) {
  template=tempID.replace(/ /g,"+")
  LinkUrl="priweb05.pbl?reportno=05&template=2&pritd001="+template
  Left=(document.body.clientWidth-650)/2
  DFrameLink(LinkUrl,20,Left,650,320)
}
function ShowDetail(linkurl) {
  Left=(document.body.clientWidth-550)/2
  DFrameLink(linkurl,0,Left,550,260)
}
//------------------------------------------------------------------
//  Validate an MBS item from the private practice item file
//  with cease date
//------------------------------------------------------------------
function validatePMBSCDate(ReturnCode,ReturnName,ReturnType,
                           ReturnScod,ReturnEfdt,ReturnAmnt) {
  ReturnFunction="" ;
  ReturnName.value="";
  ReturnAmnt.value="";
  for (var i=6; i < validatePMBSCDate.arguments.length; i++) {
    if (typeof(validatePMBSCDate.arguments[i]) == 'function') {
      ReturnFunction=validatePMBSCDate.arguments[i] }
    else {
      validatePMBSCDate.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  if (isWhitespace(ReturnType.value)) return;;
  var serverURL   = "../cgi-bin/allweb01.pbl?reportno=23" +
                    "&valdtype=" + ReturnType.value.replace(/ /g,"+") +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&valdscod=" + ReturnScod.value.replace(/ /g,"+") +
                    "&valdefdt=" + ReturnEfdt.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    ReturnAmnt.value=(ReturnValue[1])
    j=0
    for (var i=6; i < validatePMBSCDate.arguments.length; i++) {
       if (typeof(validatePMBSCDate.arguments[i]) != 'function') {
         j++
         validatePMBSCDate.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    return false;
     }
}
