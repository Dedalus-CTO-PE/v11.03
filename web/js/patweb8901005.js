//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb8901005.js
//========================================================================
//On click of Cancel
function DSetCancel() {
  if (!confirm("Warning: Injury/Accident Data will not be Updated!\n Ok to Continue ?")) {
  return;
  }
  var urno=document.UpdateForm.urnumber.value;
  var adm=document.UpdateForm.admissno.value;
  var link = "patweb98.pbl?reportno=01&template=001&urnumber="+urno+"&admissno="+adm;

  if(document.UpdateForm.systflag.value=="2"){
    outpatientRedirect();
  }
  if(document.UpdateForm.systflag.value=="9"){        // Allied Health
     link = "allweb02.pbl?reportno=02&template=002"
     + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+")
  } 

  //Checks if the referral will be rejected, and if so sends a flag
  //indicating it as such.
  if (document.UpdateForm.refrejct.value == "1") {
    link = link + "&refrejct=" + document.UpdateForm.refrejct.value;
  }

  location.href= link;
}

//Check Format of ACC Number entered
function chkFormat(){
  var last=document.UpdateForm.lastvald;
  var accn=document.UpdateForm.ptclm011;
  if(!isWhitespace(accn.value)) {
     if(accn.value.length<"7"){
        alert("Enter a Valid ACC Number");
        document.UpdateForm.ptclm011.value="";
        document.UpdateForm.ptclm011.focus();
     }
  }
  checkX=last.value.substr(0,1).search('[^a-zA-Z]');
  checkXX=last.value.substr(0,2).search('[^a-zA-Z]');
  if(checkXX<0){
     checkYY=accn.value.substr(0,2).search('[^a-zA-Z]');
     if(last.value.substr(0,2)<accn.value.substr(0,2))  {
        alert("Enter a valid ACC Number within range");
        document.UpdateForm.ptclm011.value="";
        document.UpdateForm.ptclm011.focus();
     }
     if(checkYY>=0){
        alert("Enter a valid ACC Number within range");
        document.UpdateForm.ptclm011.value="";
        document.UpdateForm.ptclm011.focus();
     }
  } else {
     checkY=accn.value.substr(0,1).search('[^a-zA-Z]');
     if(checkY>=0){
        alert("Enter a valid ACC Number within range");
        document.UpdateForm.ptclm011.value="";
        document.UpdateForm.ptclm011.focus();
     }
     if(last.value.substr(0,1)<accn.value.substr(0,1)){
        alert("Enter a valid ACC Number within range");
        document.UpdateForm.ptclm011.value="";
        document.UpdateForm.ptclm011.focus();
     }
  }
}

//Validate ACC Number
function validateACC(){
if(document.UpdateForm.ptclm011.value!=""){
  var serverURL   = "../cgi-bin/comweb80.pbl?reportno=26&valdcode="
  + document.UpdateForm.ptclm011.value.replace(/ /g,"+")+"&valdcod2="
  + document.UpdateForm.urnumber.value.replace(/ /g,"+")+"&valdcod3="
  + document.UpdateForm.admissno.value.replace(/ /g,"+");
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|")
  if(ReturnValue=="ACC No"){
    return;}
  else if(ReturnValue==""){
    document.UpdateForm.ptclm011.value="";
    document.UpdateForm.ptclm011.focus();
  return;
  }
  else {
    document.UpdateForm.ptclm011.value=trim(ReturnValue[1]);
    document.UpdateForm.ptclm036.value=trim(ReturnValue[2]);
    var p=document.UpdateForm.ptclm046;
    for(var i=0;i<p.length;i++){
      if(p.options[i].value.substring(0,3)==ReturnValue[3]){
        document.UpdateForm.ptclm046.selectedIndex=i;
      }
    }
    var q=document.UpdateForm.ptclm047;
    for(var i=0;i<q.length;i++){
      if(q.options[i].value.substring(0,3)==ReturnValue[4]){
        document.UpdateForm.ptclm047.selectedIndex=i;
      }
    }
    var r=document.UpdateForm.ptclm048;
    for(var i=0;i<r.length;i++){
      if(r.options[i].value.substring(0,3)==ReturnValue[5]){
        document.UpdateForm.ptclm048.selectedIndex=i;
      }
    }
    document.UpdateForm.ptclm049.value=trim(ReturnValue[6]);
    document.UpdateForm.ptclm052.value=trim(ReturnValue[7]);
    var s=document.UpdateForm.ptclm053;
    for(var i=0;i<s.length;i++){
      if(s.options[i].value.substring(0,3)==ReturnValue[8]){
        document.UpdateForm.ptclm053.selectedIndex=i;
      }
    }

    document.UpdateForm.ptclm054.value=ReturnValue[9];
    document.UpdateForm.ptclm055.value=ReturnValue[10];

    if(trim(ReturnValue[11])=="1"){
      document.UpdateForm.d_ptclm056.checked=true;
      document.getElementById("sportnamehd").style.visibility="visible";
      document.getElementById("sportnamevalue").style.visibility="visible";
      document.UpdateForm.d_sport.className="Mandatory";
      var t=document.UpdateForm.d_sport;
      for(var i=0;i<t.length;i++){
        if(t.options[i].value.substring(0,3)==ReturnValue[12]){
          document.UpdateForm.d_sport.selectedIndex=i;
        }
      }
    } else{
      document.UpdateForm.d_ptclm056.checked=false;
      document.getElementById("sportnamehd").style.visibility="hidden";
      document.getElementById("sportnamevalue").style.visibility="hidden";
      document.UpdateForm.ptclm057.className="";
    }
//  var t=document.UpdateForm.ptclm057;
//  for(var i=0;i<t.length;i++){
//  if(t.options[i].value.substring(0,3)==ReturnValue[12]){
//    document.UpdateForm.ptclm057.selectedIndex=i;
//  }
//}
    if(ReturnValue[13]=="1"){
      document.UpdateForm.d_ptclm058.checked=true;}
    else{
      document.UpdateForm.d_ptclm058.checked=false;
    }
    if(ReturnValue[14]=="1"){
      document.UpdateForm.d_ptclm059.checked=true;}
    else{
      document.UpdateForm.d_ptclm059.checked=false;
    }
    var u=document.UpdateForm.ptclm060;
    for(var i=0;i<u.length;i++){
      if(u.options[i].value.substring(0,3)==ReturnValue[15]){
        document.UpdateForm.ptclm060.selectedIndex=i;
      }
    }
    document.UpdateForm.ptclm061.value=trim(ReturnValue[16]);
    document.UpdateForm.ptclm062.value=trim(ReturnValue[17]);
    document.UpdateForm.ptclm063.value=trim(ReturnValue[18]);
    document.UpdateForm.ptclm064.value=trim(ReturnValue[19]);
//  document.UpdateForm.ptclm065.value=trim(ReturnValue[20]);
    var x=document.UpdateForm.ptclm065;
    for(var i=0;i<x.length;i++){
      if(x.options[i].value==ReturnValue[20]){
        document.UpdateForm.ptclm065.selectedIndex=i;
      }
    }
//  document.UpdateForm.ptclm066.value=trim(ReturnValue[21]);
    var w=document.UpdateForm.ptclm066;
    for(var i=0;i<w.length;i++){
      if(w.options[i].value==ReturnValue[21]){
        document.UpdateForm.ptclm066.selectedIndex=i;
      } 
    }

    GetNewClaimValue();

    var v=document.UpdateForm.ptclm079;
    for(var i=0;i<v.length;i++){
      if(v.options[i].value.substring(0,3)==ReturnValue[23]){
        document.UpdateForm.ptclm079.selectedIndex=i;
      }
    }
    document.UpdateForm.ptclm080.value=trim(ReturnValue[24]);
    document.UpdateForm.ptclm001.value=trim(ReturnValue[25]);
    document.UpdateForm.ptclm002.value=trim(ReturnValue[26]);
    document.UpdateForm.ptclm003.value=trim(ReturnValue[27]);
    document.UpdateForm.ptclm004.value=trim(ReturnValue[28]);
    document.UpdateForm.ptclm005.value=trim(ReturnValue[29]);
    document.UpdateForm.ptclm006.value=trim(ReturnValue[30]);
    document.UpdateForm.ptclm007.value=trim(ReturnValue[31]);
    document.UpdateForm.ptclm008.value=trim(ReturnValue[32]);
    document.UpdateForm.ptclm069.value=trim(ReturnValue[35]);
    document.UpdateForm.cinjcmnt.value=ReturnValue[44];
    document.UpdateForm.ainjcmnt.value=ReturnValue[45];
    document.UpdateForm.ptclm081.value=ReturnValue[46];
    if (ReturnValue[47]=="1") { document.UpdateForm.d_ptclm084.checked=true;}
    document.UpdateForm.ptclm088.value=ReturnValue[48];
    if (ReturnValue[49]=="1") { document.UpdateForm.d_ptclm085.checked=true;}
    if (ReturnValue[50]=="1") { document.UpdateForm.d_ptclm086.checked=true;
      document.getElementById("gainedbyfield").style.visibility="visible";
      document.getElementById("gainedbyvalue").style.visibility="visible";
      document.UpdateForm.ptclm089.className="Mandatory";
      document.UpdateForm.ptclm089.value=ReturnValue[51];
      valDoctorUnit1();
    } else {
      document.UpdateForm.d_ptclm086.checked=false;
      document.getElementById("gainedbyfield").style.visibility="hidden";
      document.getElementById("gainedbyvalue").style.visibility="hidden";
      document.UpdateForm.ptclm089.className="";
    }
    valDoctorUnit()
    }
  } else {
    document.UpdateForm.ptclm001.value="";
    document.UpdateForm.ptclm002.value="";
    document.UpdateForm.ptclm003.value="";
    document.UpdateForm.ptclm004.value="";
    document.UpdateForm.ptclm005.value="";
    document.UpdateForm.ptclm006.value="";
    document.UpdateForm.ptclm007.value="";
    document.UpdateForm.ptclm008.value="";
    document.UpdateForm.ptclm011.value="";
    document.UpdateForm.ptclm036.value="";
    document.UpdateForm.ptclm046.value="";
    document.UpdateForm.ptclm047.value="";
    document.UpdateForm.ptclm048.value="";
    document.UpdateForm.ptclm049.value="";
    document.UpdateForm.ptclm052.value="";
    document.UpdateForm.ptclm053.value="";
    document.UpdateForm.ptclm054.value="";
    document.UpdateForm.ptclm055.value="";
    document.UpdateForm.d_ptclm056.value="";
    document.UpdateForm.ptclm057.value="";
    document.UpdateForm.d_ptclm058.value="";
    document.UpdateForm.d_ptclm059.value="";
    document.UpdateForm.ptclm060.value="";
    document.UpdateForm.ptclm061.value="";
    if(trim(document.UpdateForm.ptclm061.value)==""){
      document.UpdateForm.ptclm061.value=document.UpdateForm.CurDate.value;
    }
    document.UpdateForm.ptclm062.value="";
    document.UpdateForm.ptclm063.value="";
    document.UpdateForm.ptclm064.value="";
    document.UpdateForm.ptclm065.value="";
    document.UpdateForm.ptclm066.value="";
    document.UpdateForm.ptclm079.value="";
    document.UpdateForm.ptclm080.value="";
    document.UpdateForm.cinjcmnt.value="";
    document.UpdateForm.ainjcmnt.value="";
//  document.UpdateForm.ptclm081.value="";
    document.UpdateForm.d_ptclm084.checked=false;
    document.UpdateForm.ptclm088.value="";
    document.UpdateForm.d_ptclm085.checked=false;
    document.UpdateForm.d_ptclm086.checked=false;
  }
  ChkEmp();
  ChkSport();
}

// Get value for New Claim to be Lodged field
function GetNewClaimValue() {
   var p = document.UpdateForm;
   var statVal = trim(ReturnValue[22]);
   var statDesc = "";
   p.newclaim.checked = false;
   p.newclaim.disabled = true;

   switch (statVal) {
     case '0':
      statDesc = "Existing";     break;
     case '1':
      statDesc = "Parked";
      p.newclaim.checked = true; break;
     case '2':
      statDesc = "Completed";    break;
     case '3':
      statDesc = "Cancelled";    break;
   }

   document.getElementById('spStatDesc').innerHTML = statDesc;
   document.UpdateForm.ptclm078.value = statVal;  // set Status value

  // Disable 'ACC Number' field
   p.ptclm011.className = "ReadOnly";
   p.ptclm011.readOnly = true;

   // Hide 'Assign ACC No' button
   document.getElementById('AccButtonSpan').innerHTML="";
   if (p.newclaim.checked) {
     document.getElementById('submitacc').style.visibility="visible";
     if (p.d_ptclm086.checked==false) {
       p.ptclm065.className="Mandatory";
       p.ptclm062.className="Mandatory";
       p.ptclm064.className="Mandatory";
       p.ptclm066.className="Mandatory";
     }
   } else {
       document.getElementById('submitacc').style.visibility="hidden";
       p.ptclm065.className="";
       p.ptclm062.className="";
       p.ptclm064.className="";
       p.ptclm066.className="";
   }

   ChkTreat();
   ChkTreat1();
   CheckAuth();
}

//Check Employer Status
function ChkEmp(){
  if(trim(document.UpdateForm.ptclm061.value)==""){
     document.UpdateForm.ptclm061.value=document.UpdateForm.CurDate.value;
  }
  if(document.UpdateForm.ptclm060.value.substring(3,4)=="Y"){
     document.getElementById("worktypehd").style.visibility="visible"
     document.getElementById("worktype").style.visibility="visible"
     document.UpdateForm.ptclm079.className="Mandatory";
  } 
  else {
     document.getElementById("worktypehd").style.visibility="hidden"
     document.getElementById("worktype").style.visibility="hidden"
     document.UpdateForm.ptclm079.className="";
  }
  if(document.UpdateForm.ptclm060.value.substring(4,5)=="O"){
     document.getElementById("employmenthd").style.visibility="visible"
     document.getElementById("employmentvalue").style.visibility="visible"
     document.UpdateForm.ptclm080.className="Mandatory";
  } 
  else {
     document.getElementById("employmenthd").style.visibility="hidden"
     document.getElementById("employmentvalue").style.visibility="hidden"
     document.UpdateForm.ptclm080.className="";
  }
  checkWorkRelated()
}

//Function called onload of page
function ChkFlag(){
  if(document.UpdateForm.ptclm011.value!=""){
    document.UpdateForm.ptclm011.className="ReadOnly";
    document.UpdateForm.ptclm011.readOnly=true;
    document.getElementById('AccButtonSpan').innerHTML="";
    document.getElementById('SearchIconSpan').innerHTML="";
  } else {
    document.UpdateForm.ptclm011.className="Mandatory";
    document.UpdateForm.ptclm011.readOnly=false;
    document.getElementById('AccButtonSpan').innerHTML=document.getElementById('OutputACCButton').innerHTML;
  }
  if(document.UpdateForm.newclaim.disabled==false) {
    if(document.UpdateForm.newclaim.checked){
      document.UpdateForm.ptclm078.value="1";
      document.UpdateForm.newclaim.value="1";
    } else {
      document.UpdateForm.ptclm078.value="0";
      document.UpdateForm.newclaim.value="0";
    }
  } else {
    if(document.UpdateForm.newclaim.checked){
      document.UpdateForm.ptclm078.value="1";
      document.UpdateForm.newclaim.value="1";
    }
  }
}
function NewClaim() {

  if(document.UpdateForm.d_ptclm078.value == "0" ||
     document.UpdateForm.d_ptclm078.value == "2") {
    document.UpdateForm.newclaim.disabled=true;
    document.getElementById("submitacc").style.visibility="hidden";
    document.UpdateForm.ptclm078.value=document.UpdateForm.d_ptclm078.value
    document.UpdateForm.ptclm008.focus();
  } else if(document.UpdateForm.d_ptclm078.value == "1") {
    document.UpdateForm.newclaim.checked=true;
    document.UpdateForm.newclaim.value="1";
    document.UpdateForm.newclaim.disabled=true;
  } else {
   document.getElementById("submitacc").style.visibility="hidden";
   document.UpdateForm.newclaim.checked=false;
   document.UpdateForm.newclaim.value="0";
  }
}
//Validations on Auto Submit
function valmandate(){
  if((document.UpdateForm.ptclm060.value.substring(3,4)=="Y") ||
     (document.UpdateForm.ptclm046.value.substring(3,4)=="Y")) {
      document.UpdateForm.ptclm001.className="Mandatory";
      document.UpdateForm.ptclm002.className="Mandatory";
      document.UpdateForm.ptclm005.className="Mandatory";
  } else {
          document.UpdateForm.ptclm001.className="";
          document.UpdateForm.ptclm002.className="";
          document.UpdateForm.ptclm005.className="";
  }
  if(document.UpdateForm.d_ptclm056.checked){
     document.UpdateForm.ptclm056.value="1";
     document.UpdateForm.ptclm057.value=document.UpdateForm.d_sport.value;
  } else {
     document.UpdateForm.ptclm056.value="0";
     document.UpdateForm.ptclm057.value="";
  }
  if(document.UpdateForm.d_ptclm058.checked){
     document.UpdateForm.ptclm058.value="1";
  }
  else{
     document.UpdateForm.ptclm058.value="0"
  }
  if(document.UpdateForm.d_ptclm059.checked){
     document.UpdateForm.ptclm059.value="1";
  }
  else{
     document.UpdateForm.ptclm059.value="0"
  }
  if(document.UpdateForm.d_ptclm084.checked){
     document.UpdateForm.ptclm084.value="1";
  } else{
     document.UpdateForm.ptclm084.value="0"
  }
  if(document.UpdateForm.d_ptclm085.checked){
     document.UpdateForm.ptclm085.value="1";
  } else{
     document.UpdateForm.ptclm085.value="0"
  }
  if(document.UpdateForm.d_ptclm086.checked){
     document.UpdateForm.ptclm086.value="1";
  } else{
     document.UpdateForm.ptclm086.value="0"
  }
}

//Validations on Submit to ACC
function SubmittoACC(){
 if(document.UpdateForm.injdiage.value!="1") {
    alert("Cannot be submitted. No Injury Diagnosis Code entered.")
    return;
 }
 if(document.UpdateForm.injdflag.value=="1") {
    alert("Side must be entered for Injury Diagnosis");
    return;
 }
  if((document.UpdateForm.ptclm060.value.substring(3,4)=="Y") ||
     (document.UpdateForm.ptclm046.value.substring(3,4)=="Y")) {
    document.UpdateForm.ptclm001.className="Mandatory";
    document.UpdateForm.ptclm002.className="Mandatory";
    document.UpdateForm.ptclm005.className="Mandatory";
  } else {
    document.UpdateForm.ptclm001.className="";
    document.UpdateForm.ptclm002.className="";
    document.UpdateForm.ptclm005.className="";
  }
  if(document.UpdateForm.d_ptclm058.checked){
     document.UpdateForm.ptclm058.value="1";
  }
  else{
     document.UpdateForm.ptclm058.value="0"
  }
  if(document.UpdateForm.d_ptclm059.checked){
     document.UpdateForm.ptclm059.value="1";
  }
  else{
     document.UpdateForm.ptclm059.value="0"
  }
  if(document.UpdateForm.d_ptclm084.checked){
     document.UpdateForm.ptclm084.value="1";
  } else{
     document.UpdateForm.ptclm084.value="0"
  }
  if(document.UpdateForm.d_ptclm085.checked){
     document.UpdateForm.ptclm085.value="1";
  } else{
     document.UpdateForm.ptclm085.value="0"
  }
  if(document.UpdateForm.d_ptclm086.checked){
     document.UpdateForm.ptclm086.value="1";
  } else{
     document.UpdateForm.ptclm086.value="0"
  }
  
  document.UpdateForm.ptclm078.value="2";
  document.UpdateForm.newclaim.value="1";

  document.UpdateForm.redirect.value="patweb98.pbl?reportno=01&template=060"
  + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
  + "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+")
  document.UpdateForm.accflag1.value="S";

  if (validateMandatory(UpdateForm)) {
    if (document.UpdateForm.ptcnactm &&
        document.UpdateForm.ptcnactm.value == "1") {
      ShowWaitScreen();
      window.setTimeout(HideWaitScreen,30000);  // restore page after 30 secs
    }
    document.UpdateForm.target="PopUpFrame";
    document.UpdateForm.submit();
  }
}

//On click of ACC Number
function AssignACCNo(){
if(document.UpdateForm.ptclm011.className=="ReadOnly"){
  return false;
}
if(document.UpdateForm.ptclm011.value==""){
  var serverURL   = "../cgi-bin/comweb80.pbl?reportno=28"
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|")
  if(ReturnValue!=""){
    document.UpdateForm.ptclm011.value=ReturnValue;
  }
  document.UpdateForm.ptclm011.focus();
  }
}

//ACC Numbers left-Warning Message
function ACCNoLeft(){
checkX=document.UpdateForm.lastvald.value.substr(0,1).search('[^a-zA-Z]');
checkXX=document.UpdateForm.lastvald.value.substr(0,2).search('[^a-zA-Z]');
if(checkXX<0){
  var st=document.UpdateForm.lastvald.value.substring(2,7);
  var tt=document.UpdateForm.lastvald.value.substring(2,7)-"200";
if(document.UpdateForm.lastvald.value.substring(0,2)==
   document.UpdateForm.ptclm011.value.substring(0,2)){
if(document.UpdateForm.ptclm011.value.substring(2,7)>=tt) {
  alert("Warning: Less then 200 valid ACC Numbers available"); 
  var serverURL   = "../cgi-bin/patweb89.pbl?reportno=14&remoteno=1";
  var returnValue = RSExecute(serverURL);
 }
 }
}
else{
  var rt=document.UpdateForm.lastvald.value.substring(1,7);
  var rr=document.UpdateForm.lastvald.value.substring(1,7)-"200";
if(document.UpdateForm.lastvald.value.substring(0,1)==
   document.UpdateForm.ptclm011.value.substring(0,1)){
  if(document.UpdateForm.ptclm011.value.substring(1,7)>=rr){
    alert("Warning: Less then 200 valid ACC Numbers available"); 
  var serverURL   = "../cgi-bin/patweb89.pbl?reportno=14&remoteno=1";
  var returnValue = RSExecute(serverURL);
 }
 }
}
}

//Check Recurring Injury Flag
function ChkRecur(){
if(document.UpdateForm.d_ptclm058.checked){
  document.UpdateForm.d_ptclm058.value="1";}
else{
  document.UpdateForm.d_ptclm058.value="0";}
}

//Check Treatment Injury Diagnosis
function ChkTreat(){
  if(document.UpdateForm.d_ptclm059.checked){
     alert("Warning: Please fill out an ACC2152 Treatment Injury Claim Form in addition to this ACC45");
  }
}

//Check Treatment Injury
function ChkTreat1(){
  if(document.UpdateForm.d_ptclm059.checked) {
     document.UpdateForm.d_ptclm059.value="1";
  } else {
  document.UpdateForm.d_ptclm059.value="0";
  }
}


//Check Sporting Injury
function ChkSport(){
  if(document.UpdateForm.d_ptclm056.checked){
     document.UpdateForm.ptclm056.value="1";
     document.UpdateForm.d_ptclm056.value="1";
     document.getElementById("sportnamehd").style.visibility="visible"
     document.getElementById("sportnamevalue").style.visibility="visible"
     document.UpdateForm.d_sport.className="Mandatory";
  } else {
     document.UpdateForm.ptclm056.value="0";
     document.UpdateForm.d_ptclm056.value="0";
     document.getElementById("sportnamehd").style.visibility="hidden"
     document.getElementById("sportnamevalue").style.visibility="hidden"
     document.UpdateForm.d_sport.className="";
     document.UpdateForm.d_sport.value="";
  }
}

//Open Work Capacity Frame
function OpenWCFrame(linkurl){
  valmandate();
  if(validateMandatory(UpdateForm)) {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=005"
      + "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
      + "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+")
      + "&returncd=" + document.UpdateForm.returncd.value.replace(/ /g,"+")
      + "&systflag=" + document.UpdateForm.systflag.value.replace(/ /g,"+")
      + "&casekeys=" + document.UpdateForm.casekeys.value.replace(/ /g,"+")
      + "&seriflag=" + document.UpdateForm.seriflag.value.replace(/ /g,"+")
      + "&refrejct=" + document.UpdateForm.refrejct.value.replace(/ /g,"+")
      + "&showflag=1"

     document.UpdateForm.accauflg.value="W";
     SubmitHidden(UpdateForm);
  }
}
//Open ACC Forms Frame
function OpenAFFrame(linkurl){
  valmandate();
  if(validateMandatory(UpdateForm)) {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=005"
      + "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
      + "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+")
      + "&systflag=" + document.UpdateForm.systflag.value.replace(/ /g,"+")
      + "&seriflag=" + document.UpdateForm.seriflag.value.replace(/ /g,"+")
      + "&refrejct=" + document.UpdateForm.refrejct.value.replace(/ /g,"+")
      + "&accfflag=1"

     SubmitHidden(UpdateForm);
  }
}

//Open Injury Diagnosis Details Frame
function OpenInjDiagFrame(){
  valmandate();
  if(validateMandatory(UpdateForm)) {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=061"
      + "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
      + "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+")
      + "&systflag=" + document.UpdateForm.systflag.value.replace(/ /g,"+")
      + "&seriflag=" + document.UpdateForm.seriflag.value.replace(/ /g,"+")
      + "&ptclm011=" + document.UpdateForm.ptclm011.value.replace(/ /g,"+")
      + "&refrejct=" + document.UpdateForm.refrejct.value;

     document.UpdateForm.accauflg.value="I";
     SubmitHidden(UpdateForm);
  } else {
     return false;
  }
}

//Open Referral Details Frame
function OpenRefDetFrame(){
  valmandate();
  if(validateMandatory(UpdateForm)) {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=071"
      + "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
      + "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+")
      + "&systflag=" + document.UpdateForm.systflag.value.replace(/ /g,"+")
      + "&seriflag=" + document.UpdateForm.seriflag.value.replace(/ /g,"+")
      + "&ptclm011=" + document.UpdateForm.ptclm011.value.replace(/ /g,"+")
      + "&refrejct=" + document.UpdateForm.refrejct.value.replace(/ /g,"+")

     document.UpdateForm.accauflg.value="R";
     SubmitHidden(UpdateForm);
  } else {
     return false;
  }
}


//Make unavailable Submit to ACC
function GreyButton(){
  if(document.UpdateForm.newclaim.value!="1"){
    document.getElementById('AccButtonSpan').innerHTML="";
    document.getElementById("submitacc").style.visibility="hidden";
    document.UpdateForm.ptclm061.className="";
    document.UpdateForm.ptclm055.className="";
    document.UpdateForm.ptclm053.className="";
    document.UpdateForm.ptclm054.className="";
    document.UpdateForm.ptclm060.className="";
    document.UpdateForm.ptclm065.className="";
    document.UpdateForm.ptclm062.className="";
    document.UpdateForm.ptclm064.className="";
    document.UpdateForm.ptclm066.className="";
  } else {
    if (document.UpdateForm.d_ptclm011.value="") {
      document.getElementById('AccButtonSpan').innerHTML=document.getElementById('OutputACCButton').innerHTML;
    }
    if (document.UpdateForm.d_ptclm086.checked==false) {
      document.UpdateForm.ptclm065.className="Mandatory";
      document.UpdateForm.ptclm062.className="Mandatory";
      document.UpdateForm.ptclm064.className="Mandatory";
      document.UpdateForm.ptclm066.className="Mandatory";
    }
    document.getElementById("submitacc").style.visibility="visible";
    document.UpdateForm.ptclm061.className="Mandatory";
    document.UpdateForm.ptclm055.className="Mandatory";
    document.UpdateForm.ptclm053.className="Mandatory";
    document.UpdateForm.ptclm054.className="Mandatory";
    document.UpdateForm.ptclm060.className="Mandatory";
  }
}

//Called onload of page
function init(){
  if(document.PatientLinks.showflag.value=="1"){
    linkurl="patweb89.pbl?reportno=01&template=054"
      + "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
      + "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+")
      + "&systflag=" + document.UpdateForm.systflag.value.replace(/ /g,"+")
      + "&casekeys=" + document.UpdateForm.casekeys.value.replace(/ /g,"+")
      + "&seriflag=" + document.UpdateForm.seriflag.value.replace(/ /g,"+")
      + "&ptclm011=" + document.UpdateForm.ptclm011.value.replace(/ /g,"+")
    Left=(document.body.clientWidth-800)/2
    DFrameLink(linkurl,70,Left,800,400)
  }
  if(document.PatientLinks.accfflag.value=="1"){
    linkurl="patweb98.pbl?reportno=01&template=018"
      + "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
      + "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+")
      + "&ptclm011=" + document.UpdateForm.ptclm011.value.replace(/ /g,"+")
    Left=(document.body.clientWidth-800)/2
    DFrameLink(linkurl,70,Left,800,400)
  }

  if(document.UpdateForm.ageyears.value<" 15"){
   //  UpdateForm.ptclm047.className="Mandatory";  //place injury occurred
   //  UpdateForm.ptclm048.className="Mandatory";  //activity when injured
  } else {
   //  UpdateForm.ptclm047.className="";  //place injury occurred
   //  UpdateForm.ptclm048.className="";  //activity when injured
  }
  if(isWhitespace(document.UpdateForm.ptclm081.value)){
     document.UpdateForm.ptclm081.value=document.UpdateForm.deftrprv.value;
     valDoctorUnit();
  }
}

//function SearchPage(returnName,LookupPage) {
//  window.returnName=returnName ;
//  Lookup=open(LookupPage, "LookupWindow",
//  "width=150,height=200,top=20,left=20,scrollbars=yes,status=no,toolbar=no,menubar=no") ;
//}

function PrintScreen(linkurl) {
  PrintWindow=open(linkurl,"PrintScreen",
  "width=400,height=150,top=50,left=50," +
  "titlebar=no,scrollbars=yes,status=no,toolbar=no,menubar=no");
}

//On click of Ok
function SubmitClaim() {
  valmandate();
  if(!isWhitespace(document.UpdateForm.ptclm049.value)) {
  if(!ChkDateTime(UpdateForm.ptclm008,null,UpdateForm.ptclm049,null)){
     alert("ACC Decline Date before Accident Date");
     return;}
  }
  if(document.UpdateForm.mvmedrec.value == "1") {
   document.UpdateForm.redirect.value="mrtweb01.pbl?reportno=09&template=004"
   + "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
   + "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+")
   } else if (document.UpdateForm.returncd.value == "MEH") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=07&template=001"
     + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+")
     } else if (document.UpdateForm.returncd.value == "MH1") {
     document.UpdateForm.redirect.value="mehweb01.pbl?reportno=01&template=001"
     + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+")
     } else if (document.UpdateForm.returncd.value == "AH1") {
     document.UpdateForm.redirect.value="allweb02.pbl?reportno=02&template=002"
     + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+")

     } else if (document.UpdateForm.systflag.value == "1") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=014"
     + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+")

       if(document.getElementById('ptcnnewc')) {
         if(document.getElementById('ptcnnewc').value==1) {
            document.UpdateForm.redirect.value="patweb07.pbl?reportno=06"
            + "&template=004&urnumber="
            + document.PatientLinks.urnumber.value.replace(/ /g,"+")
            + "&admissno="
            + document.PatientLinks.admissno.value.replace(/ /g,"+")}
       }

   } else {
     document.UpdateForm.redirect.value="patweb98.pbl?reportno=01&template=043"
     + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+")
 }
 if(document.UpdateForm.systflag.value=="2"){
    outpatientRedirect();
 }
 if(document.UpdateForm.systflag.value=="4"){
     if (document.getElementById("lnacckie") != null &&
         document.getElementById("lnacckie").value == "1") {
      document.UpdateForm.redirect.value="watweb01.pbl?reportno=04&template=004"
       + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
       + "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+")
       + "&casekeys=" + document.UpdateForm.casekeys.value.replace(/ /g,"+")
     } else {
      document.UpdateForm.redirect.value="watweb01.pbl?reportno=02&template=010"
       + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
       + "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+")
     }
 }
 if(document.UpdateForm.systflag.value=="9"){
     document.UpdateForm.redirect.value="allweb02.pbl?reportno=02&template=002"
     + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+")
 }
 if(document.UpdateForm.d_ptclm056.checked){
    document.UpdateForm.ptclm056.value="1";
    document.UpdateForm.ptclm057.value=document.UpdateForm.d_sport.value;
 } else {
    document.UpdateForm.ptclm056.value="0";
    document.UpdateForm.ptclm057.value="";
 }
 if(document.UpdateForm.d_ptclm058.checked){
    document.UpdateForm.ptclm058.value="1";
 } else {
  document.UpdateForm.ptclm058.value="0";
 }
 if(document.UpdateForm.d_ptclm059.checked){
    document.UpdateForm.ptclm059.value="1";
 } else {
   document.UpdateForm.ptclm059.value="0";
 }
 if(document.UpdateForm.d_ptclm084.checked){
    document.UpdateForm.ptclm084.value="1";
 } else {
  document.UpdateForm.ptclm084.value="0";
 }
 if(document.UpdateForm.d_ptclm085.checked){
    document.UpdateForm.ptclm085.value="1";
 } else {
  document.UpdateForm.ptclm085.value="0";
 }
 if(document.UpdateForm.d_ptclm086.checked){
    document.UpdateForm.ptclm086.value="1";
 } else {
  document.UpdateForm.ptclm086.value="0";
 }

 //Checks if the referral will be rejected, and if so sends a flag
 //indicating it as such.
 if (document.UpdateForm.refrejct.value == "1") {
   document.UpdateForm.redirect.value = document.UpdateForm.redirect.value
   + "&refrejct=" + document.UpdateForm.refrejct.value;
 }

 SubmitHidden(UpdateForm);
}

//Validate on click of Search
function valWC() {
validateWC(44,UpdateForm.urnumber,UpdateForm.admissno,UpdateForm.ptclm001,
               UpdateForm.ptclm002,UpdateForm.ptclm003,UpdateForm.ptclm004,
               UpdateForm.ptclm005,UpdateForm.ptclm006,UpdateForm.ptclm007,
               UpdateForm.ptclm008,UpdateForm.accepted,UpdateForm.dummy,
               UpdateForm.ptclm010,UpdateForm.ptclm011,UpdateForm.ptclm012,
               UpdateForm.ptclm013,UpdateForm.ptclm033,
               UpdateForm.cinjure,UpdateForm.injcode,
               UpdateForm.ptclm052,UpdateForm.ptclm053,
               UpdateForm.ptclm054,UpdateForm.ptclm055,
               UpdateForm.d_ptclm056,UpdateForm.d_sport,
               UpdateForm.d_ptclm058,UpdateForm.d_ptclm059,
               UpdateForm.ptclm060,UpdateForm.ptclm061,
               UpdateForm.ptclm062,UpdateForm.ptclm063,
               UpdateForm.ptclm064,UpdateForm.ptclm065,
               UpdateForm.ptclm066,UpdateForm.ptclm079,
               UpdateForm.ptclm080,UpdateForm.dummy,
               UpdateForm.ptclm036,UpdateForm.ptclm034,
               UpdateForm.ptclm035,UpdateForm.dummy,UpdateForm.ptcnhdps
               );
}

//Called on click of ACC Search
function lookUpWC() {
if(document.UpdateForm.ptclm011.className=="ReadOnly"){
return false;
}
WCRefNoSearchFrame(UpdateForm.urnumber,UpdateForm.ptclm001,UpdateForm.ptclm002,
                    UpdateForm.ptclm003,
                    UpdateForm.ptclm004,UpdateForm.ptclm005,UpdateForm.ptclm006,
                    UpdateForm.ptclm007,UpdateForm.ptclm008,UpdateForm.accepted,
                    UpdateForm.ptclm010,UpdateForm.ptclm011,
                    UpdateForm.ptclm012,UpdateForm.ptclm013,UpdateForm.ptclm033,
                    UpdateForm.cinjure,UpdateForm.injcode,
                    UpdateForm.ptclm052,UpdateForm.ptclm053,
                    UpdateForm.ptclm054,UpdateForm.ptclm055,
                    UpdateForm.d_ptclm056,UpdateForm.d_sport,
                    UpdateForm.d_ptclm058,UpdateForm.d_ptclm059,
                    UpdateForm.ptclm060,UpdateForm.ptclm061,
                    UpdateForm.ptclm062,UpdateForm.ptclm063,
                    UpdateForm.ptclm064,UpdateForm.ptclm065,
                    UpdateForm.ptclm066,UpdateForm.ptclm079,
                    UpdateForm.ptclm080,UpdateForm.dummy,
                    UpdateForm.ptclm036,UpdateForm.ptclm034,
                    UpdateForm.ptclm035,UpdateForm.dummy,UpdateForm.ptcnhdps,
                    UpdateForm.workrel,UpdateForm.ptclm046,
                    UpdateForm.placeocc,UpdateForm.ptclm047,
                    UpdateForm.activity,UpdateForm.ptclm048,
                    UpdateForm.ptclm049,UpdateForm.cinjcmnt,
                    UpdateForm.ainjcmnt,UpdateForm.ptclm081,
                    UpdateForm.d_ptclm084,UpdateForm.d_ptclm085,
                    UpdateForm.d_ptclm086,UpdateForm.d_ptclm087,
                    UpdateForm.ptclm088);
}

function WCRefNoSearchFrame(urnumber,RetEName,RetAdd1,RetAdd2,RetAdd3,
                             RetAdd4,RetPost,
                             RetTele,RetCDat,RetAccPt,RetInsCod,RetClmNo,
                             RetComn1,RetComn2,RetAloc,RetCInj,RetInjCod,
                             RetTime,RetAclc,RetAinz,RetMovv,RetSpti,RetSprt,
                             RetReci,RetTric,RetEsta,RetPddt,RetArg1,RetArg2,
                             RetArsn,RetArtl,RetArrp,RetTwrk,RetOest,RetCsta,
                             RetCName,RetCInjSel,RetInjCodSel,RetAccPtSel,
                             ptcnhdps,RetWorkRel,RetWorkRelSel,
                             RetPlace,RetPlaceSel,RetAct,RetActSel,RetDetDate,
                             RetCinj,RetAinj,RetHCPTP,RetGrad,RetAhos,RetVerb,
                             RetAppr,RetPord,RetGainedBy,RetDocnam1)
 {
  var PopUpFrameDoc = DFrameStart();
  window.urnumber=urnumber;
  window.RetEName=RetEName;     window.RetAdd1=RetAdd1;
  window.RetAdd2=RetAdd2;       window.RetAdd3=RetAdd3;
  window.RetAdd4=RetAdd4;       window.RetPost=RetPost;
  window.RetTele=RetTele;       window.RetCDat=RetCDat;
  window.RetAccPt=RetAccPt;     window.RetInsCod=RetInsCod;
  window.RetClmNo=RetClmNo;     window.RetAloc=RetAloc;
  window.RetCInj=RetCInj;       window.RetInjCod=RetInjCod;
  window.RetCName=RetCName;     window.RetCInjSel=RetCInjSel;
  window.RetTime=RetTime;       window.RetAclc=RetAclc;
  window.RetAinz=RetAinz;       window.RetMovv=RetMovv;
  window.RetSpti=RetSpti;       window.RetSprt=RetSprt;
  window.RetReci=RetReci;       window.RetTric=RetTric;
  window.RetEsta=RetEsta;       window.RetPddt=RetPddt;
  window.RetArg1=RetArg1;       window.RetArg2=RetArg2;
  window.RetArsn=RetArsn;       window.RetArtl=RetArtl;
  window.RetArrp=RetArrp;       window.RetTwrk=RetTwrk;
  window.RetOest=RetOest;       window.RetCsta=RetCsta;
  window.RetCinj=RetCinj;       window.RetAinj=RetAinj;
  window.RetHCPTP=RetHCPTP;         window.RetGrad=RetGrad;
  window.RetInjCodSel=RetInjCodSel; window.RetAhos=RetAhos;
  window.RetAccPtSel=RetAccPtSel;   window.RetVerb=RetVerb;
  window.RetWorkRel=RetWorkRel;     window.RetAppr=RetAppr;
  window.RetWorkRelSel=RetWorkRelSel; window.RetPord=RetPord;
  window.ptcnhdps=ptcnhdps;         window.RetGainedBy=RetGainedBy; 
  window.RetPlace=RetPlace;         window.RetDocnam1=RetDocnam1;
  window.RetPlaceSel=RetPlaceSel;
  window.RetAct=RetAct;
  window.RetActSel=RetActSel;
  window.RetDetDate=RetDetDate;
  PopUpFrameDoc.location.href = "../lookups/WCRefNoSearchFrame.html";
  SearchFrameShow();
}

function outpatientRedirect(){
if(document.UpdateForm.seriflag.value=="1"){  // Single HCP Series
    var link="outweb02.pbl?reportno=03&template=001" +
    "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
    "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
    "&casekeys=" + document.UpdateForm.casekeys.value.replace(/ /g,"+")  +
    "&bookflag=" + document.UpdateForm.bookflag.value.replace(/ /g,"+") +
    "&refrlvis=" + document.UpdateForm.refrlvis.value.replace(/ /g,"+") 
  } else if (document.UpdateForm.seriflag.value=="2"){ // Multiple HCP Series
    var linkurl="outweb08.pbl?reportno=01&template=003" + 
    "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
    "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
    "&casekeys=" + document.UpdateForm.casekeys.value.replace(/ /g,"+") +
    "&firstadm=" + document.UpdateForm.firstadm.value.replace(/ /g,"+")  +
    "&bookflag=" + document.UpdateForm.bookflag.value.replace(/ /g,"+") +
    "&refrlvis=" + document.UpdateForm.refrlvis.value.replace(/ /g,"+")
    var link=GetOutCookie(linkurl," ","MultipleHCP");
  }else if (document.UpdateForm.refrflag.value=="1"){ // Referral details
    var link="outweb01.pbl?reportno=04&template=001" +
    "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
    "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+")
  } else {
   var link ="outweb02.pbl?reportno=03&template=001" +
   "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
   "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
   "&casekeys=" + document.UpdateForm.casekeys.value.replace(/ /g,"+") +
   "&shwprint=1"
   }
   document.UpdateForm.redirect.value=link;
}

function checkWorkRelated(){
if((document.UpdateForm.ptclm046.value.substring(3,4)=="Y") ||
   (document.UpdateForm.ptclm060.value.substring(3,4)=="Y")) {
    document.UpdateForm.ptclm001.className="Mandatory";
    document.UpdateForm.ptclm002.className="Mandatory";
    document.UpdateForm.ptclm005.className="Mandatory";
  }else{
    document.UpdateForm.ptclm001.className="";
    document.UpdateForm.ptclm002.className="";
    document.UpdateForm.ptclm005.className="";}
}
