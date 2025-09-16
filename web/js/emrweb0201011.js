//jsVersion  : V11.03.03
//========================================================================
// Program   : emrweb0201011.js
//
// Written   : 14.08.2001 Harvinder Kumar
//
// Function  : Standard Functions Used in emrweb0201011.html
//
//========================================================================
function init(){
// Following Removed not a good idea to check ever 10 milliseconds
// Should be donevia onchange/onblur events
// setTimeout('checkCode()',10); 
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
  if (HiddenFields.CheckUr.value == "1") { checkurno(); }
//
// Removed Following Line and Used Tags in Page emrweb0201004.html
//
//  getPresentCom(UpdateForm.test,UpdateForm.emvis060,UpdateForm.emrviscat);
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
  onblurHandler();

// Note: formateText() function used because wrap=hard does not do wrapping 
//       when form not submited. 
  //var formatedtext=formateText(UpdateForm.prcom001,'50');

  var str = UpdateForm.prcom001.value;
  var maxLineLen = 50;
  var formatedtext = formatTextStr(str,maxLineLen);

  if (formatedtext.split(/[\r\n]/).length > 6) {
    alert("Presenting Complaint comments - Max 6 lines." +
          "\nPlease remove extra line(s) to continue."); 
    FocusDelay(document.UpdateForm.prcom001);
    return;
  }
  else if (formatedtext.replace(/\r?\n/gm,"").length > 300) {
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
                "&prcom001=" + escape(formatedtext) 
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
     ReturnValue=returnValue.return_value.split("|")
     UpdateForm.updateky.value = ReturnValue[0]; 
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
function chknurse() {
 if (HiddenFields.NurseCode.value!="") {
   if (isWhitespace(document.UpdateForm.emvis130.value)) {
      alert("You can't update without entering the Nurse");
      document.UpdateForm.emvis130.focus();
      return false; }
   else{
      return true; }
 }
 return true;
}
function chkdoct() {
 if (HiddenFields.DoctorCode.value!="") {
   if (isWhitespace(document.UpdateForm.emvis007.value)) {
      alert("You can't update without entering the Doctor");
      document.UpdateForm.emvis007.focus();
      return false; }
   else{
        return true; }
  }
 return true;
}
function chkLoc() {
  if (HiddenFields.Location.value!="Discharged") {
     if (isWhitespace(document.UpdateForm.emvis006.value)) {
       alert("Please select valid Location");
       document.UpdateForm.emvis006.focus();
       return false; }
     else{
       return true; }
  }
  return true;
}
function onUpdate(){
  var check=false;
  for(var i = 0; i < UpdateForm.emvis003.length; i++)
     if (UpdateForm.emvis003[i].checked==true) {
      check=true;
     }
  if (check==false) {
    alert("Triage Category has not been selected !");
    return
  }
  document.PatientLinks.checksub.value=1;
  url = "emrweb02.pbl?reportno=1&template=4&urnumber=" +
         document.UpdateForm.urnumber.value.replace(/ /g,"+") +
        "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+");
  document.UpdateForm.redirect.value=url;
  var locachk=chkLoc();
  if(locachk) {
    if (validateMandatory(UpdateForm)) {
        setTimeout('refreashTopA()',180)
        setFormactn('UPDAT');
    }
  }
}
function onUpdateACT(){
  var check=false;
  for(var i = 0; i < UpdateForm.emvis003.length; i++)
     if (UpdateForm.emvis003[i].checked==true) {
      check=true;
     }
  if (check==false) {
    alert("Triage Category has not been selected !");
    return
  }
  document.PatientLinks.checksub.value=1;
  url = "emrweb02.pbl?reportno=1&template=4&urnumber=" +
         document.UpdateForm.urnumber.value.replace(/ /g,"+") +
        "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+")  +
        "&secureid=" + document.UpdateForm.secureid.value.replace(/ /g,"+")  +
        "&securety=1&triredir=1"
  document.UpdateForm.redirect.value=url;
  var locachk=chkLoc();
  if(locachk) {
    if (validateMandatory(UpdateForm)) {
        setTimeout('refreashTopA()',180)
        setFormactn('UPDAT');
    }
  }
}
function onUpdateHEA(){
  var check=false;
  for(var i = 0; i < UpdateForm.emvis003.length; i++)
     if (UpdateForm.emvis003[i].checked==true) {
      check=true;
     }
  if (check==false) {
    alert("Triage Category has not been selected !");
    return
  }
  document.PatientLinks.checksub.value=1;
  url = "emrweb02.pbl?reportno=1&template=4&urnumber=" +
         document.UpdateForm.urnumber.value.replace(/ /g,"+") +
        "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
        "&triredir=3"
  document.UpdateForm.redirect.value=url;
  var locachk=chkLoc();
  if(locachk) {
    if (validateMandatory(UpdateForm)) {
        if(!document.getElementById("no_map_reload")) {
          setTimeout('refreashTopA()',180)
        }
        setFormactn('UPDAT');
    }
  }
}
function checkUR(status) {
var validateresult = validateMandatory(document.UpdateForm);
  if (validateresult==true) {
     if (status==1) {
       PatientLink('emrweb02.pbl',1,101)
     } else {
       PatientLink('emrweb02.pbl',1,109)
     }
  }
}
function onUpdateWA(){
  var check=false;
  for(var i = 0; i < UpdateForm.emvis003.length; i++)
     if (UpdateForm.emvis003[i].checked==true) {
      check=true;
     }
  if (check==false) {
    alert("Triage Category has not been selected !");
    return
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
  document.PatientLinks.checksub.value=1;
  url = "emrweb02.pbl?reportno=1&template=4&urnumber=" +
         document.UpdateForm.urnumber.value.replace(/ /g,"+") +
        "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
        "&triredir=3"
  document.UpdateForm.redirect.value=url;
  var locachk=chkLoc();
  if(locachk) {
    if (validateMandatory(UpdateForm)) {
        ShowFdvWarning();
        setTimeout('refreashTopA()',180)
        setFormactn('UPDAT');
    }
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
function validateNurse() {
  validateCode('17',document.UpdateForm.emvis130,
                    document.UpdateForm.dummy5,
                    document.UpdateForm.gnm,
                    SetNurseName);
}
function SetNurseName() {
UpdateForm.dummy5.value=UpdateForm.gnm.value.replace(/\s*$/g,"")+
                              " " +
                        UpdateForm.dummy5.value.replace(/\s*$/g,"")
}
function PatientLink(server,report,template) {
 url= server + 
     "?reportno=" + report +
     "&template=" + template +
     "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
     "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") 
 if (top.menu.EmergencyFrameLink) {
   top.menu.EmergencyFrameLink(url,0,0,1008,521);
 } else {
   location.href=url;
 }
}
function EmergencyFullPatientLink(server,report,template) {
 url= server + 
     "?reportno=" + report +
     "&template=" + template +
     "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
     "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") 
 if (top.menu.EmergencyFrameLink) {
   top.menu.EmergencyFrameLink(url,0,0,1008,521);
 } else {
   location.href=url;
 }
}
function updateNext(test) {
  if (isWhitespace(UpdateForm.emvis007.value)) {
    var serverURL   = "../cgi-bin/emrweb02.pbl?reportno=3" +
                      "&admissno=" + 
                       UpdateForm.admissno.value.replace(/ /g,"+") +
                      "&updttype=2&nextpage=8"
    var returnValue = RSExecute(serverURL); 
    parent.menu.location.reload();}
  else {
    alert('Patient Already Seen.'); }
}
function checkCode(){
 if(!isWhitespace(document.UpdateForm.emvis130.value)){
   validateNurse();      
  }
  if(!isWhitespace(document.UpdateForm.emvis007.value)){
   validateCode('3',document.UpdateForm.emvis007,document.UpdateForm.dummy3);
  }
}
function checkurno() {
  if (UpdateForm.urnumber.value==0) {
   PatientLink('patweb90.pbl',1,101);
  }
  else {
   PatientLink('emrweb02.pbl',1,1);
  }
}
function fnPatientLink() {
  if (top.menu==undefined) { return }
  admissno=PatientLinks.admissno.value.replace(/ /g,"+")
  urnumber=PatientLinks.urnumber.value.replace(/ /g,"+")
  if (top.menu.defPatientLink.serverid==undefined) {
    serverid="patweb98"
    reportno="01"
    template="001" }
  else {
    serverid=top.menu.defPatientLink.serverid.value
    reportno=top.menu.defPatientLink.reportno.value
    template=top.menu.defPatientLink.template.value }
  url=serverid + ".pbl?reportno=" + reportno +
                "&template=" + template +
                "&urnumber=" + urnumber +
                "&admissno=" + admissno
 if (top.menu.EmergencyFrameLink) {
   top.menu.EmergencyFrameLink(url,0,0,1008,521);
 } else {
   location.href=url;
 }
}
function SmallFrameEmr(template) {
  PatientLinks.template.value=template
  PatientLinks.reportno.value=1
  Left=(document.body.clientWidth-600)/2
  DFrameSubmit(PatientLinks,0,Left,600,300)
}
function UpdDoc(doctor) {
  if (isWhitespace(document.UpdateForm.emvis007.value)) { 
     if (isWhitespace(document.UpdateForm.emvis007.defaultValue))  {
        return;
     }
  alert("Invalid doctor deletion - Please use the eraser icon");
  document.UpdateForm.emvis007.value=document.UpdateForm.emvis007.defaultValue;
  document.UpdateForm.emvis007.focus();
  return;
  }
  doctor.value=doctor.value.toUpperCase()
  a=trim(doctor.value);
  b=trim(doctor.defaultValue);
  if (document.UpdateForm.emvis007.value.substr(0,1) == " ") {
      document.UpdateForm.emvis007.value = a;
  }
  if (a == b)  { return;; }
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=3" +
                    "&valdcode=" + doctor.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {  
   document.UpdateForm.emvis007.value=document.UpdateForm.emvis007.defaultValue;
    document.UpdateForm.dummy3.value=document.UpdateForm.dummy3.defaultValue;
    UpdateForm.emvis007.focus();  
    return; 
   }
  user=document.PatientLinks.webuseid.value;
  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=3" +
         "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
         "&doctcode=" + doctor.value.replace(/ /g,"+") +
         "&updttype=ALDOC" + "&webuseid=" + user
  var returnValue = RSExecute(serverURL);
  location.reload();
  if (top.menu.EmergencyFrame.location=="about:blank") {
    parent.menu.location.reload(); }
  else {
    parent.menu.EmergencyFrame.location.reload(); }
}
function UpdNur(nurse) {
  if (isWhitespace(document.UpdateForm.emvis130.value)) {
     if (isWhitespace(document.UpdateForm.emvis130.defaultValue))  {
        return;
     }
  alert("Invalid Nurse deletion - Please use the eraser icon");
  document.UpdateForm.emvis130.value=document.UpdateForm.emvis130.defaultValue;
  document.UpdateForm.emvis130.focus();
  return;
  }
  nurse.value=nurse.value.toUpperCase()
  a=trim(UpdateForm.emvis130.value);
  b=trim(UpdateForm.emvis130.defaultValue);
  if (document.UpdateForm.emvis130.value.substr(0,1) == " ") {
      document.UpdateForm.emvis130.value = a;
  }
  if (a == b)  { return;; }
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=17" +
                    "&valdcode=" + nurse.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {  
  document.UpdateForm.emvis130.value=document.UpdateForm.emvis130.defaultValue;
  document.UpdateForm.dummy5.value=document.UpdateForm.dummy5.defaultValue;
    UpdateForm.emvis130.focus();  
    return; 
   }

  admissno=document.UpdateForm.admissno.value;
  user=document.PatientLinks.webuseid.value;
  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=4" +
                    "&admissno=" + admissno.replace(/ /g,"+") +
                    "&webuseid=" + user.replace(/ /g,"+") +
                    "&updttype=ALNUR" +
                    "&doctcode=" + nurse.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  location.reload();
  if (top.menu.EmergencyFrame.location=="about:blank") {
    parent.menu.location.reload();
  }
  else {
    parent.menu.EmergencyFrame.location.reload();
  }
}
function UpdEmrDoc(doctor) {
  if (isWhitespace(document.UpdateForm.emvis007.value)) { 
     if (isWhitespace(document.UpdateForm.emvis007.defaultValue))  {
        return;
     }
  alert("Invalid doctor deletion - Please use the eraser icon");
  document.UpdateForm.emvis007.value=document.UpdateForm.emvis007.defaultValue;
  document.UpdateForm.emvis007.focus();
  return;
  }
  doctor.value=doctor.value.toUpperCase()
  a=trim(doctor.value);
  b=trim(doctor.defaultValue);
  if (document.UpdateForm.emvis007.value.substr(0,1) == " ") {
      document.UpdateForm.emvis007.value = a;
  }
  if (a == b)  { return;; }
// validate doctor exists in patdo1af
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=3" +
                    "&valdcode=" + doctor.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {
   document.UpdateForm.emvis007.value=document.UpdateForm.emvis007.defaultValue;
    document.UpdateForm.dummy3.value=document.UpdateForm.dummy3.defaultValue;
    UpdateForm.emvis007.focus();
    return;
   }
// validate doctor exists in emrdocaf
  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=11" +
                    "&valdcode=" + doctor.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {  
   document.UpdateForm.emvis007.value=document.UpdateForm.emvis007.defaultValue;
    document.UpdateForm.dummy3.value=document.UpdateForm.dummy3.defaultValue;
    UpdateForm.emvis007.focus();  
    return; 
   }
  user=document.PatientLinks.webuseid.value;
  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=3" +
         "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
         "&doctcode=" + doctor.value.replace(/ /g,"+") +
         "&updttype=ALDOC" + "&webuseid=" + user
  var returnValue = RSExecute(serverURL);
  location.reload();
  if (top.menu.EmergencyFrame.location=="about:blank") {
    parent.menu.location.reload(); }
  else {
    parent.menu.EmergencyFrame.location.reload(); }
}
function DelDoc() {
if (isWhitespace(document.UpdateForm.emvis007.value)) { return;; }
doctor="      ";
admissno=document.UpdateForm.admissno.value;
user=document.PatientLinks.webuseid.value;
  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=3" +
                    "&admissno=" + admissno.replace(/ /g,"+") +
                    "&doctcode=" + doctor.replace(/ /g,"+") +
                    "&webuseid=" + user.replace(/ /g,"+") +
                    "&updttype=ALDOC"
  var returnValue = RSExecute(serverURL);
  if (top.menu.EmergencyFrame.location=="about:blank") {
    parent.menu.location.reload();
  }
  else {
    parent.menu.EmergencyFrame.location.reload();
  }
  location.reload();
}
function DelNurse() {
if (isWhitespace(document.UpdateForm.emvis130.value)) { return;; }
nurse="      ";                         
admissno=document.PatientLinks.admissno.value;
user=document.PatientLinks.webuseid.value;

  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=4" +
                    "&admissno=" + admissno.replace(/ /g,"+") +
                    "&webuseid=" + user.replace(/ /g,"+") +
                    "&doctcode=" + nurse.replace(/ /g,"+") +
                    "&updttype=ALNUR"
  var returnValue = RSExecute(serverURL);

  location.reload();
  if (top.menu.EmergencyFrame.location=="about:blank") {
    parent.menu.location.reload();
  }
  else {
    parent.menu.EmergencyFrame.location.reload();
  }
}
function refreashTop() {
onUpdate();
setTimeout('refreashTopA()',100)
}
function refreashTopA() {
    if (parent.menu.document.readyState=="complete") {
      parent.menu.location.reload(); }
}
function NurseData() {
  PatientLinks.reportno.value="01"
  PatientLinks.template.value="036"
  PatientLinks.action="emrweb02.pbl"
  Left=(document.body.clientWidth-600)/2
  DFrameSubmit(PatientLinks,0,Left,600,300);
}
function DoctorData() {
  PatientLinks.reportno.value="01"
  PatientLinks.template.value="035"
  PatientLinks.action="emrweb02.pbl"
  Left=(document.body.clientWidth-600)/2
  DFrameSubmit(PatientLinks,0,Left,600,300);
}
function sentCom(SearchField,ReturnSelect,CatCode) {
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
          new Option(SelectValue[1],SelectValue[0]); } } }
}
function submitFormRedirect() {
if(document.PatientLinks.checksub.value==1) { return;;}
  if (IsDirty(UpdateForm)) {
    ans=confirm("Information has changed. Perform Update Now.")
    if (ans) {
     if(!validateMandatory(UpdateForm)) { return;;}
      UpdateForm.nextpage.value="0";
      UpdateForm.target="PopUpFrame";
      UpdateForm.submit(); 
    }
  }
}
function SubmitForm() {
  PatientLinks.checksub.value="1";
  if(!validateMandatory(UpdateForm)) { return;;}
  UpdateForm.nextpage.value="0";
  UpdateForm.target="PopUpFrame";
  UpdateForm.submit(); 
}
function IsDirty(eForm) {
  for (var i=0; i < eForm.length; i++) {
    var eElem = eForm.elements[i];
    if ("text" == eElem.type || "textarea" == eElem.tagName)
    {
      if (trim(eElem.value) != trim(eElem.defaultValue))  {
      return true;}
    }
    else if ("checkbox" == eElem.type || "radio" == eElem.type)
    {
      if (eElem.checked != eElem.defaultChecked) return true;
    }
  }
  return false;
}
function setFlag() {
  document.UpdateForm.savmanag.value=1
}  
function SaveMgtNte(ReturnCode) {
  onblurHandler()
//70

  //var formatedtext=formateText(UpdateForm.vicmt002,'60') 

  var str = UpdateForm.vicmt002.value;
  var maxLineLen = 60;
  var formatedtext = formatTextStr(str,maxLineLen);

  var serverURL="../cgi-bin/emrweb02.pbl?reportno=12" +
                "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
                "&updateky=" + UpdateForm.updateky.value.replace(/ /g,"+") +
                "&webuseid=" + PatientLinks.webuseid.value.replace(/ /g,"+") +
                "&updttype=MGNOT" + 
                "&vicmt002=" + escape(formatedtext) 
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
     ReturnValue=returnValue.return_value.split("|")
     UpdateForm.updateky.value = ReturnValue[0]; }
  else {
     alert("The screen will now be refreshed.\n" +
           " Changes have not been retained.");
     location.reload();
     ReturnCode.select();  }
}
function textCounter(field,cntfield,maxlimit) {
if (field.value.length > maxlimit) { 
field.value = field.value.substring(0, maxlimit);}
else {
cntfield.value = maxlimit - field.value.length;}
}

function validateNurse() {
  validateCode('17',document.UpdateForm.emvis127,
                    document.UpdateForm.dummy1,
                    document.UpdateForm.gnm,
                    SetNurseName);
}
function SetNurseName() {
UpdateForm.dummy1.value=UpdateForm.gnm.value.replace(/\s*$/g,"")+
                              " " +
                            UpdateForm.dummy1.value.replace(/\s*$/g,"")
}
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
function validateLocation(SearchField,SearchName) {
  if (isWhitespace(SearchField.value)) {
      return;;
  }
  if(SearchField.value==UpdateForm.savelocn.value) {
      return;
  }
  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=2" +
                    "&valdcode=" + SearchField.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    SearchName.value=trim(ReturnValue[1])
  }
  else {
     document.UpdateForm.emvis006.focus();
     document.UpdateForm.emvis006.selectedIndex=0;
     document.UpdateForm.name_emvis006.value="";
  }

}
function SplitInjuryDesc()  {
words=UpdateForm.injrtext.value.split(/\s+/);
UpdateForm.injur002.value=""
UpdateForm.injur003.value=""
firstflag=0
for (i=0 ; i<words.length ; i++) {
  if (UpdateForm.injur002.value.length+words[i].length < 50 && firstflag==0 ) {
    UpdateForm.injur002.value+=words[i] + " " }
  else {
    UpdateForm.injur003.value+=words[i] + " "
    firstflag=1 }
  }
UpdateForm.injrtext.value=UpdateForm.injur002.value+UpdateForm.injur003.value
}
function SetTriageDate() {
  if(UpdateForm.emvis003[0].checked== true) {   // Traige cat 1
    document.UpdateForm.emvis128.value=document.UpdateForm.emvis001.value
    document.UpdateForm.emvis129.value=document.UpdateForm.emvis002.value
  } else {
    document.UpdateForm.emvis128.value=document.UpdateForm.currdate.value
    document.UpdateForm.emvis129.value=document.UpdateForm.currtime.value
  }
}
function AddMgtNote() {
  PatientLinks.reportno.value="01"
  PatientLinks.template.value="080"
  PatientLinks.action="emrweb02.pbl"
  Left=(document.body.clientWidth-700)/2
  DFrameSubmit(PatientLinks,0,Left,700,300);
}
function onUpdateSJOGMID(){
  var check=false;
  for(var i = 0; i < UpdateForm.emvis003.length; i++)
     if (UpdateForm.emvis003[i].checked==true) {
      check=true;
     }
  if (check==false) {
    alert("Triage Category has not been selected !");
    return
  }
  document.PatientLinks.checksub.value=1;
  url = "emrweb02.pbl?reportno=1&template=4&urnumber=" +
         document.UpdateForm.urnumber.value.replace(/ /g,"+") +
        "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+");
  document.UpdateForm.redirect.value=url;
  if (validateMandatory(UpdateForm)) {
      setTimeout('refreashTopA()',180)
      setFormactn('UPDAT');
  }
}
//-----------------------------------------------------------------
// Show VEMD Telehealth fields
//-----------------------------------------------------------------
function VEMDFields() {
  if(!document.getElementById("emvis177")) {
    return;
  }
  visitdate=document.getElementById("emvis001");
  state=document.getElementById("ptcnhdps");
  servicetype=document.getElementById("emvis177");
  if(SetDateYYYYMMDD(visitdate.value)< DOYR2019 || state.value != "3") {
    return;
  }
  document.getElementById("servicename").style.display="";
  document.getElementById("servicefield").style.display="";
  servicetype.className="SelectBig Mandatory";
}
//-----------------------------------------------------------------
// Show VEMD Telehealth patient location
//-----------------------------------------------------------------
function VEMDPatientLoc() {
  servicetype=document.getElementById("emvis177");
  if(servicetype.value.substr(14,1)=="2") {
    document.getElementById("locationname").style.display="";
    document.getElementById("locationfield").innerHTML=
    document.getElementById("telehealthlocationfield").innerHTML;
  } else if(servicetype.value.substr(14,1)=="6") {
    document.getElementById("locationname").style.display="";
    document.getElementById("locationfield").innerHTML=
    document.getElementById("virtuallocationfield").innerHTML;
  } else {
    document.getElementById("locationname").style.display="none";
    document.getElementById("locationfield").innerHTML=
    document.getElementById("blanklocationfield").innerHTML;
  }
}
//-----------------------------------------------------------------
// Show VEMD Telehealth patient location source
//-----------------------------------------------------------------
function VEMDPatientSource() {
  patlocation=document.getElementById("emvis178");
  locsource=document.getElementById("trnsfsrc");
  locsource_name=document.getElementById("name_trnsfsrc");
//  if(patlocation==undefined) {
//    document.getElementById("sourcename").style.display="none";
//    locsource.className="";
//    locsource.value="";
//    return;
//  }
  if(patlocation.value.substr(3,1)=="T") {
    document.getElementById("sourcename").style.display="";
    locsource.className="Mandatory";
  } else {
    document.getElementById("sourcename").style.display="none";
    locsource.className="";
    locsource.value="";
    locsource_name.value="";
  }
}
