//jsVersion  : V11.03.01
//=============================================================================
// Program   : nhiweb99.js
//
// Written   : 14.10.2003 
//
// Function  : Standard Functions Used in NHIWEB99
//
//=============================================================================
function ClearDonor() {
  DisableAll = false;
  //DonorCheckBoxes = documen.all.tags("INPUT");
  DonorCheckBoxes = document.getElementsByTagName('INPUT');
  for (i=0; i<DonorCheckBoxes.length; i++) {
     if (DonorCheckBoxes[i].name == "nhdnr001") {
       if (DonorCheckBoxes[i].value == "X") { 
         if (DonorCheckBoxes[i].checked) { DonorCheckBoxes[i].checked = true; }
         else { DisableAll = true;DonorCheckBoxes[i].checked = false; } 
       } 
     } 
  }
  for (i=0; i<DonorCheckBoxes.length; i++) {
     if (DonorCheckBoxes[i].name == "nhdnr001") {
     if (DonorCheckBoxes[i].value!="X") { 
            DonorCheckBoxes[i].checked=false 
            DonorCheckBoxes[i].disabled=!DisableAll } }
  }
}
//
// If Save Alia Checked then Just Submit the Form
//
function UpdateForm01() {
  f = document.NHIUpdate;
  UpCase(document.NHIUpdate.nhmas001)
  UpCase(document.NHIUpdate.nhmas002)
  UpCase(document.NHIUpdate.nhmas003)
  UpCase(document.NHIUpdate.nhmas004)
  UpCase(document.NHIUpdate.nhmas006)
  UpCase(document.NHIUpdate.nhmas007)
  UpCase(document.NHIUpdate.nhmas008)
  UpCase(document.NHIUpdate.nhmas009)
  UpCase(document.NHIUpdate.nhmas010)

  if(document.NHIUpdate.ptmas021.value.substr(3,1)=="1") {
    document.NHIUpdate.nhmas014.value="Y"}
  else if (document.NHIUpdate.ptmas021.value.substr(3,1)=="2") {
    document.NHIUpdate.nhmas014.value="N"}

  if (CheckAlias()) {
    if(document.NHIUpdate.emerflag.value=="4") {
      document.NHIUpdate.redirect.value="patweb89.pbl?reportno=1&template=005"+
        "&systflag=1" +
        "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+") +
        "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+") ;
    }
    var skipaliasQues = 0
    if (VariableNameExists('SaveAliasToTicked')) {
      if (SaveAliasToTicked == true && f.nhmas019.checked == true) {
        skipaliasQues = 1
      }
    }
    if (skipaliasQues == 0) {
      AliasQues();
    }
    else {
      f.nhmas019.value = "1";
      SubmitHidden(f);
    }
  }
  else {
    if(document.NHIUpdate.emerflag.value=="1") {
      document.NHIUpdate.redirect.value="emrweb02.pbl?reportno=1&template=001"+
        "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+") +
        "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+") ;
    }
    if(document.NHIUpdate.emerflag.value=="2") {
      document.NHIUpdate.redirect.value="emrweb02.pbl?reportno=2&template=002"+
        "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+") +
        "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+") ;
    }
    if(document.NHIUpdate.emerflag.value=="4") {
      document.NHIUpdate.redirect.value="patweb89.pbl?reportno=1&template=005"+
        "&systflag=1" +
        "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+") +
        "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+") ;
    }

    SubmitHidden(document.NHIUpdate);
  }
}//end UpdateForm
function UpdateForm() {
  f = document.NHIUpdate;
  UpCase(document.NHIUpdate.nhmas001)
  UpCase(document.NHIUpdate.nhmas002)
  UpCase(document.NHIUpdate.nhmas003)
  UpCase(document.NHIUpdate.nhmas004)
  UpCase(document.NHIUpdate.nhmas006)
  UpCase(document.NHIUpdate.nhmas007)
  UpCase(document.NHIUpdate.nhmas008)
  UpCase(document.NHIUpdate.nhmas009)
  UpCase(document.NHIUpdate.nhmas010)

  if (CheckAlias()) {
    var skipaliasQues = 0
    if (VariableNameExists('SaveAliasToTicked')) {
      if (SaveAliasToTicked == true && f.nhmas019.checked == true) {
        skipaliasQues = 1
      }
    }
    if (skipaliasQues == 0) {
      AliasQues();
    }
    else {
      f.nhmas019.value = "1";
      SubmitHidden(f);
    }
  }
  else {
    if (!validateMandatory(document.NHIUpdate)) {
      return;
    }
    SubmitHidden(document.NHIUpdate);
  }
}//end UpdateForm

function CheckAlias() {

var CheckRequired=0

UpCase(document.NationalName.nzhissur)
UpCase(document.NationalName.nzhisgv1)
UpCase(document.NationalName.nzhisgv2)
UpCase(document.NationalName.nzhisgv3)

var OldSurn = document.NationalName.nzhissur.value
var OldGiv1 = document.NationalName.nzhisgv1.value
var OldGiv2 = document.NationalName.nzhisgv2.value
var OldGiv3 = document.NationalName.nzhisgv3.value
var OldPref = document.NationalName.nzhispre.value

var NewSurn = document.NHIUpdate.nhmas001.value
var NewGiv1 = document.NHIUpdate.nhmas002.value
var NewGiv2 = document.NHIUpdate.nhmas003.value
var NewGiv3 = document.NHIUpdate.nhmas004.value
for ( i=0 ; i < document.NHIUpdate.nhmas005.length ; i++) {
   if (document.NHIUpdate.nhmas005[i].checked) {
     var NewPref=document.NHIUpdate.nhmas005[i].value }
   }

if (OldSurn != NewSurn) {
  CheckRequired=1 }
if (OldGiv1 != NewGiv1) {
  CheckRequired=1 }
if (OldGiv2 != NewGiv2) {
  CheckRequired=1 }
if (OldGiv3 != NewGiv3) {
  CheckRequired=1 }
if (OldPref != NewPref) {
  CheckRequired=1 }

if (CheckRequired == 1) {
  return(true);
} else {
  return(false);
}
}//end CheckAlias

function StartPage() {
UpCase(document.NHIUpdate.nhmas001)
UpCase(document.NHIUpdate.nhmas002)
UpCase(document.NHIUpdate.nhmas003)
UpCase(document.NHIUpdate.nhmas004)
UpCase(document.NHIUpdate.nhmas006)
UpCase(document.NHIUpdate.nhmas007)
UpCase(document.NHIUpdate.nhmas008)
UpCase(document.NHIUpdate.nhmas009)
UpCase(document.NHIUpdate.nhmas010)
ErrMsg  = document.NationalName.nzhiserr.value
ResidentStatus=document.NationalName.nzhisres.value
PatientSex=document.NationalName.nzhissex.value
if (ResidentStatus==1 || ResidentStatus=="Y") {
  document.NHIUpdate.nhmas014.checked=true
}
for ( i=0 ; i < document.NHIUpdate.nhmas015.length ; i++ ) {
  if (document.NHIUpdate.nhmas015[i].value == PatientSex) {
      document.NHIUpdate.nhmas015[i].checked = true }
  }
document.NHIUpdate.nhmas001.focus() 
if ( ErrMsg != "" ) { alert(ErrMsg) }
}

function formSubmitA(answer) {
  var PopUpScreen = document.getElementById('PopUpScreen');
  PopUpScreen.innerHTML="<iframe scrolling=no " +
                              "width=100% height=100% name=PopUpFrame></iframe>";
  if (answer =="Y") {
    document.NHIUpdate.nhmas019.checked=true
    document.NHIUpdate.nhmas019.value="1";
  } else { 
    document.NHIUpdate.nhmas019.checked=false
    document.NHIUpdate.nhmas019.value="0";
  }  
  PopUpScreen.style.display="none"
  SubmitHidden(document.NHIUpdate);
}
function AliasQues() {
  var PopUpScreen = document.getElementById('PopUpScreen');
  var PatientMenu = document.getElementById('PatientMenu');
//  documen.all.PopUpFrame.src="../lookups/AliasFrame.html"
  PopUpScreen.innerHTML="<span class=DFrameTitleBar>" +
"<img border=0 align=right src=../images/ExitIcon.gif " +
"onclick=formSubmitA('N');>" +
"Patient Name Changed" +
"</span>" +
"<table bgcolor=#cccccc width=100% height=80%>" +
"<tr><td align=center><b>Save Previous Name as Alias?</b></tr></td>" +
"<tr><td align=center>" +
"<input type=button value='Yes' class=button onClick=formSubmitA('Y');>" +
"<input type=button value='No' class=button onClick=formSubmitA('N');>" +
"</tr></td>" +
"</table>";
  
  var top   = PatientMenu.offsetTop + PatientMenu.offsetHeight + 150;
  var left  = (getClientWidth() - 250)/2;
  PopUpScreen.style.top = top + 'px'; 

  PopUpScreen.style.width   = '250px';
  PopUpScreen.style.left    = left + 'px';
  PopUpScreen.style.height  = '90px';
  PopUpScreen.style.display = "";
}
//------------------------------------------------------------
// Initialise Forms of the Page
//------------------------------------------------------------
function InitForms() {
  for (var f = 0 ; f < document.forms.length; f++) {
    for (var e = 0; e < document.forms[f].elements.length; e++) {
      var el=document.forms[f].elements[e] ;
      if (el.type == "text") { el.value=el.value.replace(/\s*$/,"") }
    }
  }
  document.NHIUpdate.nhmas001.focus() 
}
function UpCase(str){
  str.value=str.value.toUpperCase();
  str.value=str.value.replace(/ *$/,"");
}
function FormatGiven() {
UpCase(document.NHIUpdate.nhmas002)
UpCase(document.NHIUpdate.nhmas003)
UpCase(document.NHIUpdate.nhmas004)
document.NHIUpdate.fgiven.value=document.NHIUpdate.nhmas002.value + " " +
                                document.NHIUpdate.nhmas003.value + " " +
                                document.NHIUpdate.nhmas004.value
}
function FormatAddress() {
  UpCase(document.NHIUpdate.nhmas006)
  UpCase(document.NHIUpdate.nhmas007)
  UpCase(document.NHIUpdate.nhmas008)
  UpCase(document.NHIUpdate.nhmas009)
  UpCase(document.NHIUpdate.nhmas010)
  document.NHIUpdate.fadd1.value=document.NHIUpdate.nhmas006.value 
  document.NHIUpdate.fadd2.value=document.NHIUpdate.nhmas007.value
  document.NHIUpdate.fadd3.value=document.NHIUpdate.nhmas008.value
  document.NHIUpdate.fadd4.value=document.NHIUpdate.nhmas009.value
  AddLine4 = document.NHIUpdate.nhmas009.value
  AddLine5 = document.NHIUpdate.nhmas010.value
  if (document.NHIUpdate.nhmas010.value != " ") {
   if (document.NHIUpdate.fadd4.value == "") {
    document.NHIUpdate.fadd4.value = document.NHIUpdate.nhmas010.value  }
   else {
    document.NHIUpdate.fadd4.value += ", " + document.NHIUpdate.nhmas010.value }
  }
}
//------------------------------------------------------------
// Send New Registration
//------------------------------------------------------------
function AddForm() {
  UpCase(document.NHIUpdate.nhmas001)
  UpCase(document.NHIUpdate.nhmas002)
  UpCase(document.NHIUpdate.nhmas003)
  UpCase(document.NHIUpdate.nhmas004)
  UpCase(document.NHIUpdate.nhmas006)
  UpCase(document.NHIUpdate.nhmas007)
  UpCase(document.NHIUpdate.nhmas008)
  UpCase(document.NHIUpdate.nhmas009)
  UpCase(document.NHIUpdate.nhmas010)
  updateFormFlag=checkString(document.NHIUpdate.nhmas001,"Surname") &&
                 checkString(document.NHIUpdate.nhmas002,"Given Name") &&
                 checkString(document.NHIUpdate.nhmas011,"Date of Birth") &&
                 checkString(document.NHIUpdate.nhmas006,"Address Line 1") &&
                 checkString(document.NHIUpdate.nhmas016,"Ethnicity") &&
                 checkGender()
  if (updateFormFlag) { 
     DFrameSubmit(document.NHIUpdate,100,100,600,300)  }
}
function checkGender() {
GenderSet=false
for ( i=0 ; i < document.NHIUpdate.nhmas015.length ; i++ ) {
  if (document.NHIUpdate.nhmas015[i].checked) {
     GenderSet=true }
  }
if (GenderSet==false) { warnEmpty(document.NHIUpdate.nhmas001,"Gender")  }
return(GenderSet)
}
function SetAliasFlag() {
  f = document.NHIUpdate;
  if (VariableNameExists('SaveAliasToTicked')) {
    if (SaveAliasToTicked == true) {
      f.nhmas019.checked = true;
    }
  }
}
