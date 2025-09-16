//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/patweb9305011.js
//
// Modification
//
// Version         Date          Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.01 06.08.2013 B.G.Ackland CAR 289383
//                      New AJAXPostString2 to fix post encoding
// V10.01.01 04.12.2012 B.G.Ackland New Medical Record View Refresh
// V10.01.00 13/04/2012 Version change
// V10.00.00 13/04/2012 Created for Mobility Suite
//
function SubmitForm() {
  splitComments();
  if (validateMandatory(UpdateForm)) {
    theURL=document.UpdateForm.action;
    var postStr=AJAXPostString2(document.UpdateForm)
    var xmlHttp = createHttpObject();
    xmlHttp.open("POST", theURL, false);
    xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
    xmlHttp.send(postStr);
    if (xmlHttp.status=="200") {
      if (xmlHttp.responseText.match(/reloadParentFrame/i)) {
        parent.frames['PatFrame'].refreshScreen();
        parent.CloseDocument();
      }
      else {
        alertify.alert(xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,""));
      }
    }
    else {
      alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
    }
  }
}
function splitComments() {
  var txtarea = document.getElementById('hiscomnt');
  var arr = new Array();
  for(var i = 0;i < 4; i++) {
    arr[i] = txtarea.value.replace(/\r\n/g," ").substr(i*50,((i+1)*50));
  }
   pmsvx052 = document.getElementById('pmsvx052');
   pmsvx053 = document.getElementById('pmsvx053');
   pmsvx054 = document.getElementById('pmsvx054');
   pmsvx055 = document.getElementById('pmsvx055');
   pmsvx052.value = arr[0];
   pmsvx053.value = arr[1];
   pmsvx054.value = arr[2];
   pmsvx055.value = arr[3];
}
function setButtons() {
  if (isWhitespace(document.UpdateForm.wdcom001.value)) document.UpdateForm.wdcom001.value='';
  if (isWhitespace(document.UpdateForm.hiscomnt.value)) document.UpdateForm.hiscomnt.value='';
  document.UpdateForm.wdcom001.value=document.UpdateForm.wdcom001.value.replace(/\s+$/, '')
  document.UpdateForm.hiscomnt.value=document.UpdateForm.hiscomnt.value.replace(/\s+$/, '')
  document.UpdateForm.pmswo005.value = trim(document.UpdateForm.pmswo005.value)
  document.UpdateForm.pmswo006.value = trim(document.UpdateForm.pmswo006.value)
  document.UpdateForm.patconds.value = trim(document.UpdateForm.patconds.value)
  if  (document.UpdateForm.c_patconva.value == "1") {
    document.UpdateForm.patconva.checked="1";
  }
  if  (document.UpdateForm.c_patconpa.value == "1") {
    document.UpdateForm.patconpa.checked="1";
  }
  var actionBtn = parent.document.getElementById('actionButton');

  if(actionBtn) {

    actionBtn.className = actionBtn.className.replace(/SpanButton/g,"");
    actionBtn.className = actionBtn.className.replace(/Blue/g,"");
    actionBtn.className = actionBtn.className + " SpanButtonBlue";
    actionBtn.innerText = "Save";

     actionBtn.onclick = function() {
        SubmitForm();
     }

  }
}
function checkLimits(txtArea,countChars,countLines){
  var maxLines = txtArea.rows;
  var maxChars = txtArea.rows * txtArea.cols;
  countChars.value = txtArea.value.length;
  countLines.value = getLines(txtArea);
  document.UpdateForm.maxLines.value = maxLines;
  document.UpdateForm.maxChars.value = maxChars;
    
  if((txtArea.value.length >= maxChars || getLines(txtArea) >= maxLines)
    && (window.event.keyCode == 10 || window.event.keyCode == 13))
  {
    while(getLines(txtArea) > maxLines)
      txtArea.value = txtArea.value.substr(0,txtArea.value.length-2);
    while(txtArea.value.length > maxChars)
      txtArea.value = txtArea.value.substr(0,txtArea.value.length-2);
    alertify.alert(maxChars+" characters and / or "+maxLines+" lines limit reached");
    countChars.value = txtArea.value.length;
    countLines.value = getLines(txtArea);
    return 0;
  }

  else if(txtArea.value.length > maxChars )
  {
//    while(txtArea.value.length > maxChars)
//    {
//      txtArea.value = txtArea.value.substr(0,txtArea.value.length-1);
//    }
    alertify.alert(maxChars+" characters limit reached.");
    countChars.value = txtArea.value.length;

    txtArea.value = txtArea.value.substring(0,txtArea.value.length-1)+"";
    countLines.value = getLines(txtArea);
    return 0;
  }

  else if (countLines.value > maxLines+1)
  {
//    while(countLines.value > maxLines)
//    {
//      txtArea.value = txtArea.value.substr(0,txtArea.value.length-1);
//    }
    alertify.alert(maxLines+" lines limit reached.");
    countChars.value = txtArea.value.length;
    countLines.value = getLines(txtArea);
    return 0;
  }

  countChars.value = txtArea.value.length;
  countLines.value = getLines(txtArea);

  return 1;
}
function getLines(txtArea){
  var lineHeight = parseInt(txtArea.style.lineHeight.replace(/px/i,''));
  if (document.createRange) {     // all browsers, except IE before version 9
    var tr = document.createRange ();
    tr.selectNodeContents (txtArea);
  }
  else {
    var tr = txtArea.createTextRange();
  }
  return Math.ceil(tr.boundingHeight/lineHeight);
}
