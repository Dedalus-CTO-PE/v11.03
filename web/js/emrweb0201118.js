//jsVersion  : V11.03.04
//========================================================================
function init(){
  var strg1= trim(HiddenFields.Pres01.value)
      if(!isWhitespace(strg1)) { strg1+="\n"}
  var strg2= trim(HiddenFields.Pres02.value)
      if(!isWhitespace(strg2)) { strg2+="\n"}
  var strg3= trim(HiddenFields.Pres03.value)
      if(!isWhitespace(strg3)) { strg3+="\n"}
  var strg4= trim(HiddenFields.Pres04.value)
      if(!isWhitespace(strg4)) { strg4+="\n"}
  var strg5= trim(HiddenFields.Pres05.value)
      if(!isWhitespace(strg5)) { strg5+="\n"}
  var strg6= trim(HiddenFields.Pres06.value)

  UpdateForm.prcom001.value=strg1+strg2+strg3+strg4+strg5+strg6
  UpdateForm.savdesc1.value=strg1+strg2+strg3+strg4+strg5+strg6
}
function getPresentCom(SearchField,ReturnSelect,CatCode) {
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=32" +
                    "&valdcode=" + SearchField.value.replace(/ /g,"+") +
                    "&valdcatc=" + CatCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnSelect.options.length=0
    ReturnValue=returnValue.return_value.split("|");
    for (var j=0; j < ReturnValue.length; j++) {
       if (!isWhitespace(ReturnValue[j])) {
         SelectValue=ReturnValue[j].split(",");
         ReturnSelect.options[ReturnSelect.options.length]=
         new Option(SelectValue[1],SelectValue[0]); 
       } } 
  }
}
function prcom001TopFrame() {
  onblurHandler(window.event);

  // Move any "\" from end of line to the next line
  FormatEOLText(UpdateForm.prcom001);

// Note: formateText() function used because wrap=hard does not do wrapping 
//       when form not submited. 
  //var formattedText=formateText(UpdateForm.prcom001,'50');

  var str = UpdateForm.prcom001.value;
  var maxLineLen = 50;
  var formattedText = formatTextStr(str,maxLineLen);

  // Update the textarea with the newly formatted text (with line breaks)
  UpdateForm.prcom001.value = formattedText;  

  if (formattedText.split(/\r?\n/).length > 6) {
    alert("Presenting Complaint comments - Max 6 lines." +
          "\nPlease remove extra line(s) to continue."); 
    FocusDelay(document.UpdateForm.prcom001);
    return; 
  }
  else if (formattedText.replace(/\r?\n/gm,"").length > 300) {
    alert("Presenting Complaint Comments - Max 300 characters." +
          "\nPlease remove the extra character(s) to continue.");
    FocusDelay(document.UpdateForm.prcom001);
    return;
  }

  var serverURL="../cgi-bin/emrweb02.pbl?reportno=11" +
                "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
                "&updateky=" + UpdateForm.updateky.value.replace(/ /g,"+") +
                "&webuseid=" + PatientLinks.webuseid.value.replace(/ /g,"+") +
                "&updttype=PRCOM" +
                "&prcom001=" + escape(formattedText) 
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
     ReturnValue=returnValue.return_value.split("|")
     UpdateForm.updateky.value = ReturnValue[0]; 
  }
  else {
     alert("The screen will now be refreshed." +
           "\nChanges have not been retained.");
     location.reload();
     //ReturnCode.select(); 
     return; }
  if (top.menu==undefined){ return; }
  if (top.menu.document.all.EmergencyFrame==undefined){ return; }
  if (top.menu.document.all.EmergencyFrame.src==""){ return; }
  if (top.menu.EmergencyFrame.document.UpdateForm==undefined){return;}
  if (top.menu.EmergencyFrame.document.UpdateForm.prcom001==undefined){return;}
  ClinicalPage="emrweb02.pbl?reportno=1&template=100"
  if (top.menu.document.all.EmergencyFrame.src.substr(0,36)==ClinicalPage) {
   top.menu.EmergencyFrame.document.UpdateForm.prcom001.value= 
                  UpdateForm.prcom001.value }
}
function emvis060TopFrame() {
 if (top.menu==undefined){ return; }
 if (top.menu.document.all.EmergencyFrame==undefined){ return; }
 if (top.menu.document.all.EmergencyFrame.src==""){ return; }
 ClinicalPage="emrweb02.pbl?reportno=1&template=100"
 if (top.menu.document.all.EmergencyFrame.src.substr(0,36)==ClinicalPage) {
  if(top.menu.EmergencyFrame.document.UpdateForm==undefined){
      return; } 
  if (top.menu.EmergencyFrame.document.UpdateForm.emvis060==undefined){
      return; }
  if (top.menu.EmergencyFrame.document.UpdateForm.v060name==undefined){
      return; }
  for (var i =0 ; i < document.UpdateForm.emvis060.length; i++) {
    if (document.UpdateForm.emvis060.options[i].selected) {
      top.menu.EmergencyFrame.document.UpdateForm.emvis060.value= 
        document.UpdateForm.emvis060.options[i].value.substr(0,3);
      top.menu.EmergencyFrame.document.UpdateForm.v060name.value= 
        document.UpdateForm.emvis060.options[i].text; } };
  }
}
function onUpdateWA(){
  if(document.UpdateForm.d_emvis091.checked==true) {
    document.UpdateForm.emvis091.value="1";
  } else {
    document.UpdateForm.emvis091.value="0";
  }
  if(document.getElementById('S01YU')) {
     Meth=document.getElementById('S01YU');
     if(Meth.className.match(/Mandatory/)) {
       if(isWhitespace(Meth.value.substr(4,3))) {
         catYU=trim(document.getElementById('d_catYU').value);
         alert( catYU + " is a required field.\nPlease enter it now." )
         Meth.focus();
         return;
       }
     }
  }
  if(validateMandatory(UpdateForm)) {
    ShowFdvWarning();
    theURL="emrweb02.pbl?reportno=1&template=4"+
             "&urnumber="+document.UpdateForm.urnumber.value.replace(/ /g,"+") +
             "&admissno="+document.UpdateForm.admissno.value.replace(/ /g,"+")
    document.UpdateForm.redirect.value=theURL;
    document.UpdateForm.nextpage.value="2";
    setFormactn('UPDAT');
  }
}
function ShowFdvWarning() {
  f = document.UpdateForm;
  if (f.pmsvx122 == undefined) {return;}

  i = f.pmsvx122.selectedIndex;
  if (i == -1) {return;}

  ind1 = f.pmsvx122.options[i].value.substr(3,1);
  if (ind1=='X') {
    alert("Please complete FDV Screening form (FDV950)");
  }
}
//function refreashTop() {
//onUpdate();
//setTimeout('refreashTopA()',100)
//}
//function refreashTopA() {
//  if (parent.menu.document.readyState=="complete") {
//    parent.menu.location.reload(); }
//}
function DisplayDiv() {
  var Indicator = document.UpdateForm.emvis060.value.substr(13,1);
  var Triage    = document.getElementById('Triage');
  if (Indicator=="I") {
     Triage.style.display = "";
     Triage.innerHTML     = document.getElementById('EmergencyProc').innerHTML;
     }
  else {
     Triage.style.display = "none";
     Triage.innerHTML     = "";}
}
