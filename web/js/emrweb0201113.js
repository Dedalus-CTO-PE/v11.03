//jsVersion  : V11.03.00
//========================================================================
// Program   : emrweb0201113.js
//
// Written   : 31.01.2018 TAS
//
// Function  : Standard Functions Used in emrweb0201113.html
//
// Version   : 
//
//========================================================================
function prcom001TopFrame() {
  onblurHandler()
// Note: formateText() function used because wrap=hard does not do wrapping 
//       when form not submited. 
  var formatedtext=formateText(triage.prcom001,'50') 
  if ((formatedtext.split(/[\r\n]/).length>6) || 
        (triage.prcom001.value.length > 300)) {
    alert("Presenting Complaint comments - Max 6 lines."
          +"\nPlease remove extra rows to continue."); 
    document.triage.prcom001.focus(); 
    return; }
  var serverURL="../cgi-bin/emrweb02.pbl?reportno=11" +
                "&admissno=" + triage.admissno.value.replace(/ /g,"+") +
                "&updateky=" + triage.updateky.value.replace(/ /g,"+") +
                "&webuseid=" + PatientLinks.webuseid.value.replace(/ /g,"+") +
                "&updttype=PRCOM" +
                "&prcom001=" + escape(formatedtext) 
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
     ReturnValue=returnValue.return_value.split("|")
     triage.updateky.value = ReturnValue[0]; 
  }
  else {
     alert("The screen will now be refreshed.\n" +
           " Changes have not been retained.");
     location.reload();
     ReturnCode.select(); 
     return; }
  if (top.menu==undefined){ return; }
  if (top.menu.document.all.EmergencyFrame==undefined){ return; }
  if (top.menu.document.all.EmergencyFrame.src==""){ return; }
  if (top.menu.EmergencyFrame.document.triage==undefined){return;}
  if (top.menu.EmergencyFrame.document.triage.prcom001==undefined){return;}
  ClinicalPage="emrweb02.pbl?reportno=1&template=100"
  if (top.menu.document.all.EmergencyFrame.src.substr(0,36)==ClinicalPage) {
   top.menu.EmergencyFrame.document.Triage.prcom001.value= 
                  triage.prcom001.value }
}
function formateLine(ReturnLine,column) {
  var endofline = "\n";
  var space = " ";
  var position = column-0;
  var testsize;
  var textarray = ReturnLine.split(" ");
  var text = textarray[0];
  var thisline = textarray[0];
  var newlineadded=false;
  var testlength;

  for (var i=1; i < textarray.length; i++) {
    if (textarray[i].length < column) {

      if(newlineadded == true) {
        testlength=textarray[i] + thisline;
      } else {
        testlength= space + textarray[i] + thisline;
      }
      if(testlength.length >= position && i != textarray.length - 1) {
        text+=endofline;
        thisline="";
        newlineadded=true;
      }

      if(newlineadded == true) {
        text += textarray[i];
        thisline += textarray[i];
      } else {
        text += space + textarray[i];
        thisline += space + textarray[i];
      }
      newlineadded=false;
    }
    testsize = thisline + textarray[i+1];
    if (testsize.length >= position && i != textarray.length - 1) {
      text += endofline;
      thisline = "";
      newlineadded=true;
    }
  }
  return text;
}

