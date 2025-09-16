//jsVersion  : V11.03.01
//========================================================================
// Program   : patweb98.js
//
// Written   : 04.03.2000 Pat Dirito
//
// Function  : Standard Functions Used in patweb98  
//
//========================================================================
//   Report 1
//========================================================================
function ShowNote(linkurl) {
  Left=(document.body.clientWidth-600)/2
  location.href=linkurl
}
function ChangeURFrame(linkurl) {
  Left=(document.body.clientWidth-600)/2
  DFrameLink(linkurl,0,Left,600,370)
}
function ShowAlert01(alrtcat,alrtcod,alrtcntr) {
  document.PatientLinks.reportno.value="01"
  document.PatientLinks.template.value="003"
  document.PatientLinks.alert001.value=alrtcat
  document.PatientLinks.alert002.value=alrtcod
  document.PatientLinks.alert013.value=alrtcntr
  document.PatientLinks.action="cliweb01.pbl"

  Width=700;
  Height=500;

  Top=(document.body.clientHeight-Height)/2;
  Left=(document.body.clientWidth-Width)/2;

  DFrameSubmit(document.PatientLinks,Top,Left,Width,Height);
}
function AddAlert01(SelectItem) {
  for (var i = 0; i < SelectItem.length; i++) {
    if (SelectItem.options[i].selected == true) {
        SelectOption=SelectItem.options[i].value }   }
  SelectItem.selectedIndex="0"
  document.PatientLinks.reportno.value="01"
  document.PatientLinks.template.value="002"
  document.PatientLinks.alert001.value=SelectOption
  document.PatientLinks.alert002.value="";
  document.PatientLinks.action="cliweb01.pbl"

  Width=700;
  Height=500;

  Top=(document.body.clientHeight-Height)/2;
  Left=(document.body.clientWidth-Width)/2;

  DFrameSubmit(document.PatientLinks,Top,Left,Width,Height)
}
function ChangeEps_23(epsno) {
  ServerPage="patweb98.pbl?reportno=01&template=023"
  location.href=ServerPage +
       "&urnumber="+document.PatientLinks.urnumber.value.replace(/ /g,"+") +
       "&admissno="+document.PatientLinks.admissno.value.replace(/ /g,"+") +
       "&epscd001="+epsno.value.replace(/ /g,"+")
}
function ChangeEps_24(epsno) {
  ServerPage="patweb98.pbl?reportno=01&template=024"
  location.href=ServerPage +
       "&urnumber="+document.PatientLinks.urnumber.value.replace(/ /g,"+") +
       "&admissno="+document.PatientLinks.admissno.value.replace(/ /g,"+") +
       "&epscd001="+epsno.value.replace(/ /g,"+")
}
//========================================================================
//   Report:2  Template:001
//========================================================================
//
// Note if admissno is blank that means criteria has not been met? eg
// no discharged patients found. (routine GETVIS00 in MRTWEB02.PBL)
// If visitno is blank that means no visits where found at all.
//
function ChkRecrdUR() {
  p=document.UpdateForm
  p.urnumber.value=p.dum1.value
//
// Output alerts via returned parameters 
//
  if (p.pce.value=="1") {
    alert("Note! This Patient is Deceased!"); 
  }
  if (isWhitespace(p.visitno.value)) {
    alert("No Visit Details Found over the Last Year")
    return; }

  if (((isWhitespace(p.admstats.value))||(p.admstats.value=="5")) && 
     (isWhitespace(p.admissno.value))) {

    if (p.mrcndcud.value=="1") {
      if (p.othrhosp.value=="1") {
        alert("No Uncoded Visits exist for this patient within "+p.pthsname.value);
        return; 
      } else {
        alert("This Patient does not have any uncoded Inpatient visits");
        return; 
      }

    } else {
      p.admissno.value=p.visitno.value;
      p.epsflag.value="0";
    }

  }

  if ((p.admstats.value=="1") && (isWhitespace(p.admissno.value))) {
    alert("This Patient is Currently Pre-Admitted, Visit No - " + 
          p.visitno.value); 
    return;
  }

  if (((p.admstats.value=="2")||(p.admstats.value=="4")) &&
      (isWhitespace(p.admissno.value))) {
    alert("This Patient is Current Inpatient, Visit No - " + p.visitno.value); 
    return; 
  }

  if (p.epsflag.value == "1") {
    ServerPage="mrtweb02.pbl?reportno=01&template=001" 
    location.href=ServerPage +
          "&urnumber=" + p.urnumber.value.replace(/ /g,"+") +
          "&admissno=" + p.admissno.value.replace(/ /g,"+") +
          "&epscd001=" + p.epsno.value;
  } 
  else {
    ServerPage="mrtweb02.pbl?reportno=03&template=001" 
    location.href=ServerPage +
          "&urnumber=" + p.urnumber.value.replace(/ /g,"+") +
          "&admissno=" + p.admissno.value.replace(/ /g,"+") +
          "&epscd001=" + p.epsno.value; 
  }
}
function ChkRecrdVis() {
  p=document.UpdateForm
  p.urnumber.value=p.dum1.value
//
// Output alerts via returned parameters 
//
  if (p.pce.value=="1") {
    alert("Note! This Patient is Deceased!"); 
  }

  if (isWhitespace(p.admissno.value)) {
    alert("No Visit Details Found") 
    return; }

  if ((isWhitespace(p.admstats.value))||(p.admstats.value=="5")) {
//  alert("This Patient does not have a Inpatient Visit");
    alert("This Patient does not have any uncoded Inpatient visits");
    return; }

  if ((p.admstats.value=="1")) {
    alert("This Patient is Currently Pre-Admitted, Visit No - " + 
          p.admissno.value); 
    return; }

  if ((p.admstats.value=="2")||(p.admstats.value=="4")) {
    alert("This Patient is Current Inpatient, Visit No - " + p.admissno.value); 
    return; }

  if (p.epsflag.value=="1") {
    ServerPage="mrtweb02.pbl?reportno=01&template=001" 
    location.href=ServerPage +
          "&urnumber="+document.UpdateForm.urnumber.value.replace(/ /g,"+") +
          "&admissno="+document.UpdateForm.admissno.value.replace(/ /g,"+") +
          "&epscd001="+document.UpdateForm.epsno.value } 
  else {
    ServerPage="mrtweb02.pbl?reportno=03&template=001" 
    location.href=ServerPage +
          "&urnumber="+document.UpdateForm.urnumber.value.replace(/ /g,"+") +
          "&admissno="+document.UpdateForm.admissno.value.replace(/ /g,"+") +
          "&epscd001="+document.UpdateForm.epsno.value }
}
function validateRecordID() {
  p=document.UpdateForm;
  if(p.urnumber.value!="") {
    LenUR=p.urnumber.value.length
    if (LenUR < 9) { 
      Count= 8 - LenUR ;
      Blanks="";
      for (i=0; i < Count;i++) { Blanks+=" ";}
      p.urnumber.value=Blanks + p.urnumber.value 
    }

    if (p.superlev.value == "1") {
      var sCookieName = "RecordCodingSuperlev-" + trim(p.webusrid.value);
      SetCookie(sCookieName,p.superlev.value);
      ServerPage = "patweb98.pbl?reportno=01&template=039" +
                   "&urnumber=" + p.urnumber.value.replace(/ /g,"+");
      location.href = ServerPage;
      return;
    }

    validateThis(1,p.urnumber,p.fnam,ChkRecrdUR,p.sex,p.dob,p.pce,p.dum1,
    p.admissno,p.dat,p.typ,p.dum2,p.epsflag,p.epsno,p.visitno,p.admstats,
    p.othrhosp)

  }
}
function validateVisit() {
  p=document.UpdateForm
  justifyRight(p.admissno)
  validateThis(2,p.admissno,p.fnam,ChkRecrdVis,p.sex,p.dob,p.pce,p.dum1,p.dum2,
  p.dat,p.typ,p.dum2,p.epsflag,p.epsno,p.admstats)

}
function validateThis(OptionNumber,ReturnCode,ReturnName) {
  ReturnFunction="";
  ReturnName.value="";
  for (var i=3; i < validateThis.arguments.length; i++) {
    if (typeof(validateThis.arguments[i]) == 'function') {
      ReturnFunction=validateThis.arguments[i] }
    else {
      validateThis.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=4" +
                  "&valdtype=" + OptionNumber +
                  "&valdcode=" + ReturnCode.value.replace(/ /g,"+") 

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=ReturnValue[0]
    j=0
    for (var i=3; i < validateThis.arguments.length; i++) {
       if (typeof(validateThis.arguments[i]) != 'function') {
         j++
         validateThis.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.select();  }
}
function validateThis2(OptionNumber,ReturnCode,ReturnEps,ReturnName) {
  ReturnFunction="";
  ReturnName.value="";
  for (var i=4; i < validateThis2.arguments.length; i++) {
    if (typeof(validateThis2.arguments[i]) == 'function') {
      ReturnFunction=validateThis2.arguments[i] }
    else {
      validateThis2.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=4" +
                  "&valdtype=" + OptionNumber +
                  "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                  "&valdepis=" + ReturnEps.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=ReturnValue[0]
    j=0
    for (var i=4; i < validateThis2.arguments.length; i++) {
       if (typeof(validateThis2.arguments[i]) != 'function') {
         j++
         validateThis2.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.select();  }
}
function GoPostDis() {
 p=document.UpdateForm
 document.UpdateForm.urnumber.value=document.UpdateForm.dum1.value
 if (document.UpdateForm.pce.value==1) {
   alert("Patient is Deceased") }
 if (isWhitespace(document.UpdateForm.admissno.value)) {
   ServerPage="patweb98.pbl?reportno=01&template=039" 
   alert("No Visit Details Found") }
 else {
   ServerPage="mrtweb04.pbl?reportno=1&template=001" 
   if (p.volflag.value=="1") {
     location.href=ServerPage +
           "&urnumber="+document.UpdateForm.urnumber.value.replace(/ /g,"+") +
           "&admissno="+document.UpdateForm.admissno.value.replace(/ /g,"+") +
           "&volumeno="+document.UpdateForm.savvol.value }
   else { 
     location.href=ServerPage +
           "&urnumber="+document.UpdateForm.urnumber.value.replace(/ /g,"+") +
           "&admissno="+document.UpdateForm.admissno.value.replace(/ /g,"+") }
   }
}
function valPostRecordID() {
 p=document.UpdateForm
 if(p.urnumber.value!="") {
   LenUR=p.urnumber.value.length
   if (LenUR < 9) { 
      Count= 8 - LenUR ;
      Blanks="";
      for (i=0; i < Count;i++) { Blanks+=" ";}
      p.urnumber.value=Blanks + p.urnumber.value }
      validatePost(1,p.urnumber,p.fnam,GoPostDis,p.sex,p.dob,p.pce,p.dum1,p.admissno,p.dat,p.typ,p.dum2,p.volflag,p.savvol)
  }
}
function validatePost(OptionNumber,ReturnCode,ReturnName) {
  ReturnFunction="";
  ReturnName.value="";
  for (var i=3; i < validateThis.arguments.length; i++) {
    if (typeof(validateThis.arguments[i]) == 'function') {
      ReturnFunction=validateThis.arguments[i] }
    else {
      validateThis.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL = "../cgi-bin/mrtweb04.pbl?reportno=3" +
                  "&valdtype=" + OptionNumber +
                  "&valdcode=" + ReturnCode.value.replace(/ /g,"+") 

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=ReturnValue[0]
    j=0
    for (var i=3; i < validateThis.arguments.length; i++) {
       if (typeof(validateThis.arguments[i]) != 'function') {
         j++
         validateThis.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.select();  }
}
function checkUnq(){
  f = document.UpdateForm
  var savadtyp = f.specialt.value.substring(0,3);
  if(document.UpdateForm.trnacare.value.substr(15,1)=="6"){
    selectOptions2("47",UpdateForm.dummy,UpdateForm.specialt);
  }
  else {
    UpdateForm.dummy.value="A ";
    selectOptions3("15",UpdateForm.dummy,UpdateForm.specialt);
    UpdateForm.dummy.value="";
  }

  if (!isWhitespace(savadtyp)){
    for (var i =0 ; i < f.specialt.length; i++) {
      var atype = f.specialt.options[i].value.substring(0,3);
      if (atype==savadtyp) {
        f.specialt.selectedIndex = i
      }
    }
  }
}
//------------------------------------------------------------
// Contract Type/Role Functions
//------------------------------------------------------------
function ContType(type) {
  var ValidCodes = "123458 "
  if (ValidCodes.indexOf(type.value)==-1) {
  alert ("Invalid Contract Type");
  type.value="";
  type.focus();
  }
} 

function ContRole(role) {
  var ValidCodes = "AB "
  if (ValidCodes.indexOf(role.value)==-1) {
  alert ("Invalid Contract Role");
  role.value="";
  role.focus();
  }
} 

//------------------------------------------------------------
// Contract Type Alert
//------------------------------------------------------------
function ContTypeAlert() {
  alert("Valid Contract Type Number\n\n" +
"1 - B    A (health authority/other external purchaser) contracts B (hospital) for admitted service\n" +
"\n" +
"2 - ABA  Patient admitted by Hospital A. Hospital A contracts Hospital B for admitted or non-admitted patient service.\n" +
"Patient Returns to Hospital A on completion of service by Hospital B.\n" +
"\n" +
"3 - AB   Patient admitted by Hospital A. Hospital A contracts Hospital B for admitted or non-admitted patient service\n" +
"Patient Does not return to Hospital A on conmpletion of service by Hospital B.\n" +
"\n" +
"4 - (A)B Patient not admitted by Hospital A. Hospital A contracts Hospital B for the whole admitted patient service\n" +
"\n" +
"5 - BA   Hospital A, which does not initially admit the patient, contracts Hospital B for an admitted patient service\n" +
"following which the patient is transferred to and admitted by Hospital A.\n" +
"\n" +
"8 - BAB Patient is admitted to Hospital B under contract to Hospital A, then receives admitted care at Hospital A before\n" +
"returning to Hospital B for remainder of care.\n" );
}
//
//------------------------------------------------------------
// Contract Role Alert
//------------------------------------------------------------
function ContRoleAlert() {
  alert("Valid Contract Role Character\n\n" +
"A - The Contracting (purchasing) hospital is termed Hospital A.\n" +
"\n" +
"B - The contracted (service provider) hospital is termed Hospital B." )
}

