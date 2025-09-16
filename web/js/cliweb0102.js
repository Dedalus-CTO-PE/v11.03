//jsVersion  : V11.03.00
//========================================================================
// Program   : cliweb0102.js
//
// Written   : 01.04.2004 Pat Dirito
//
// Function  : Standard Functions Used in cliweb0102*
//
// Version   :
//
// V9.03.01  07.06.2004  Davin  CAR 50430
//           Allow diagnosis date to be blank if no diagnosis entered
// V9.03.00  01.04.2004  Pat Dirito      
//           Created js
//========================================================================
function init() {
  var p=document[pform];
  p.admissdt.title="Admission Date";
  p.admissdt.value=p.admissdt.value.substr(0,11);
}
//
//   CheckDiag*Date() functions check the Outcome dates for that Diagnosis
//   when the Diagnosis Date has been changed
//
function CheckDiag1Date() {
  var p=document[pform];
  if (isWhitespace(p.pmscl005.value)) { return true; }
  ans=CheckDateRange(p.admissdt,p.pmscl005);
  if (!ans) { return false; }
  ans=CheckDateRange(p.pmscl005,p.pmscl011);
  if (!ans) { return false; }
  ans=CheckDateRange(p.pmscl005,p.pmscl013);
  if (!ans) { return false; }
  ans=CheckDateRange(p.pmscl005,p.pmscl015);
  if (!ans) { return false; }
  ans=CheckDateRange(p.pmscl005,p.pmscl017);
  if (!ans) { return false; }
  return true;
}
function CheckDiag2Date() {
  var p=document[pform];
  if (isWhitespace(p.pmscl020.value)) { return true; }
  ans=CheckDateRange(p.admissdt,p.pmscl020);
  if (!ans) { return false; }
  ans=CheckDateRange(p.pmscl020,p.pmscl026);
  if (!ans) { return false; }
  ans=CheckDateRange(p.pmscl020,p.pmscl028);
  if (!ans) { return false; }
  ans=CheckDateRange(p.pmscl020,p.pmscl030);
  if (!ans) { return false; }
  ans=CheckDateRange(p.pmscl020,p.pmscl032);
  if (!ans) { return false; }
  return true;
}
function CheckDiag3Date() {
  var p=document[pform];
  if (isWhitespace(p.pmscl035.value)) { return true; }
  ans=CheckDateRange(p.admissdt,p.pmscl035);
  if (!ans) { return false; }
  ans=CheckDateRange(p.pmscl035,p.pmscl041);
  if (!ans) { return false; }
  ans=CheckDateRange(p.pmscl035,p.pmscl043);
  if (!ans) { return false; }
  ans=CheckDateRange(p.pmscl035,p.pmscl045);
  if (!ans) { return false; }
  ans=CheckDateRange(p.pmscl035,p.pmscl047);
  if (!ans) { return false; }
  return true;
}
function CheckDiag4Date() {
  var p=document[pform];
  if (isWhitespace(p.pmscl050.value)) { return true; }
  ans=CheckDateRange(p.admissdt,p.pmscl050);
  if (!ans) { return false; }
  ans=CheckDateRange(p.pmscl050,p.pmscl056);
  if (!ans) { return false; }
  ans=CheckDateRange(p.pmscl050,p.pmscl058);
  if (!ans) { return false; }
  ans=CheckDateRange(p.pmscl050,p.pmscl060);
  if (!ans) { return false; }
  ans=CheckDateRange(p.pmscl050,p.pmscl062);
  if (!ans) { return false; }
  return true;
}
function List() {
  var linkurl="cliweb01.pbl?reportno=2&template=1" +
         "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+") +
         "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+"); 

  location.href=linkurl
}
//
//  Need at least one Diagnosis set on Page
//
function CheckForDiag() {
  var p=document[pform];
  if (!isWhitespace(p.pmscl004.value)) { return true; }
  if (!isWhitespace(p.pmscl019.value)) { return true; }
  if (!isWhitespace(p.pmscl034.value)) { return true; }
  if (!isWhitespace(p.pmscl049.value)) { return true; }
  alert("Note. You must set at least 1 Diagnois record!");
  return false;
}
function AddRecord() {
  if (validateMandatory(AddForm)) {
    ans=CheckForDiag()
    if (!ans) { return false; }
    ans=CheckDiag1Date() 
    if (!ans) { return false; }
    ans=CheckDiag2Date() 
    if (!ans) { return false; }
    ans=CheckDiag3Date() 
    if (!ans) { return false; }
    ans=CheckDiag4Date() 
    if (!ans) { return false; }
    AddForm.submit();
  }  
}
function UpdateRecord(type) {
  if (type=="D") {
    document.UpdateForm.updttype.value="D";
  } else {
    document.UpdateForm.updttype.value="U";
  }
  if (validateMandatory(UpdateForm)) {
    ans=CheckForDiag()
    if (!ans) { return false; }
    ans=CheckDiag1Date() 
    if (!ans) { return false; }
    ans=CheckDiag2Date() 
    if (!ans) { return false; }
    ans=CheckDiag3Date() 
    if (!ans) { return false; }
    ans=CheckDiag4Date() 
    if (!ans) { return false; }
    UpdateForm.submit();
  }  
}
//
//  SetManda*() functions set the Diagnosis and Outcome 1 to mandatory
//  also reverts back to defualt if Dignosis is made blank
//
function SetManda1() {
  var p=document[pform];
  if (!isWhitespace(p.pmscl004.value)) {
    p.pmscl004.className="Mandatory";
    p.pmscl005.className="Mandatory";
    p.pmscl006.className="Mandatory";
    p.pmscl007.className="Mandatory";
    if (isWhitespace(p.pmscl005.value)) {
      SetCurrentDateTime(eval(p.ddate1.date),eval(p.ddate1.time))
    }
    p.pmscl007.focus();
  } else {
    p.pmscl004.className="";
    p.pmscl005.className="";
    p.pmscl006.className="";
    p.pmscl007.className="";
  }
}
function SetManda2() {
  var p=document[pform];
  if (!isWhitespace(p.pmscl019.value)) {
    p.pmscl019.className="Mandatory";
    p.pmscl020.className="Mandatory";
    p.pmscl021.className="Mandatory";
    p.pmscl022.className="Mandatory";
    if (isWhitespace(p.pmscl020.value)) {
      SetCurrentDateTime(eval(p.ddate2.date),eval(p.ddate2.time))
    }
    p.pmscl022.focus();
  } else {
    p.pmscl019.className="";
    p.pmscl020.className="";
    p.pmscl021.className="";
    p.pmscl022.className="";
  }
}
function SetManda3() {
  var p=document[pform];
  if (!isWhitespace(p.pmscl034.value)) {
    p.pmscl034.className="Mandatory";
    p.pmscl035.className="Mandatory";
    p.pmscl036.className="Mandatory";
    p.pmscl037.className="Mandatory";
    if (isWhitespace(p.pmscl035.value)) {
      SetCurrentDateTime(eval(p.ddate3.date),eval(p.ddate3.time))
    }
    p.pmscl037.focus();
  } else {
    p.pmscl034.className="";
    p.pmscl035.className="";
    p.pmscl036.className="";
    p.pmscl037.className="";
  }
}
function SetManda4() {
  var p=document[pform];
  if (!isWhitespace(p.pmscl049.value)) {
    p.pmscl049.className="Mandatory";
    p.pmscl050.className="Mandatory";
    p.pmscl051.className="Mandatory";
    p.pmscl052.className="Mandatory";
    if (isWhitespace(p.pmscl050.value)) {
      SetCurrentDateTime(eval(p.ddate4.date),eval(p.ddate4.time))
    }
    p.pmscl052.focus();
  } else {
    p.pmscl049.className="";
    p.pmscl050.className="";
    p.pmscl051.className="";
    p.pmscl052.className="";
  }
}
//
// ClrDiag*() functions clear all fields for the Diagnosis section when 
// the Diagnosis is cleared
//
function ClrDiag1() {
  var p=document[pform];
  clrFields(p.pmscl004,p.diag1desc,p.pmscl005,p.pmscl006,p.pmscl007);
  Diag1Out1();
  Diag1Out2();
  Diag1Out3();
  Diag1Out4();
}
function ClrDiag2() {
  var p=document[pform];
  clrFields(p.pmscl019,p.diag2desc,p.pmscl020,p.pmscl021,p.pmscl022);
  Diag2Out1();
  Diag2Out2();
  Diag2Out3();
  Diag2Out4();
}
function ClrDiag3() {
  var p=document[pform];
  clrFields(p.pmscl034,p.diag3desc,p.pmscl035,p.pmscl036,p.pmscl037);
  Diag3Out1();
  Diag3Out2();
  Diag3Out3();
  Diag3Out4();
}
function ClrDiag4() {
  var p=document[pform];
  clrFields(p.pmscl049,p.diag4desc,p.pmscl050,p.pmscl051,p.pmscl052);
  Diag4Out1();
  Diag4Out2();
  Diag4Out3();
  Diag4Out4();
}
// 
// Diag*Out*() functions clear the Outcome selection list and Dates/Time
// if cleared. Else will set itself & date/times to Mandadtory.
// Will also inherit the Diagnosis Date & Time
//
function Diag1Out1() {
  var p=document[pform];
  if ((isWhitespace(p.pmscl007.value))||(isWhitespace(p.pmscl004.value))) { 
    p.pmscl011.value="";
    p.pmscl012.value="";
    p.pmscl011.className="";
    p.pmscl012.className="";
    return; 
  }
  p.pmscl007.className="Mandatory";
  p.pmscl011.className="Mandatory";
  p.pmscl012.className="Mandatory";
  if (isWhitespace(p.pmscl005.value)) { 
    SetCurrentDateTime(eval(p.diag1out1.date),eval(p.diag1out1.time));
  } else {
    p.pmscl011.value=p.pmscl005.value;
    p.pmscl012.value=p.pmscl006.value;
  }
}
function Diag1Out2() {
  var p=document[pform];
  if ((isWhitespace(p.pmscl008.value))||(isWhitespace(p.pmscl004.value))) { 
    p.pmscl008.value="";
    p.pmscl013.value="";
    p.pmscl014.value="";
    p.pmscl008.className="";
    p.pmscl013.className="";
    p.pmscl014.className="";
    return; 
  }
  p.pmscl008.className="Mandatory";
  p.pmscl013.className="Mandatory";
  p.pmscl014.className="Mandatory";
  if (isWhitespace(p.pmscl005.value)) { 
    SetCurrentDateTime(eval(p.diag1out2.date),eval(p.diag1out2.time));
  } else {
    p.pmscl013.value=p.pmscl005.value;
    p.pmscl014.value=p.pmscl006.value;
  }
}
function Diag1Out3() {
  var p=document[pform];
  if ((isWhitespace(p.pmscl009.value))||(isWhitespace(p.pmscl004.value))) { 
    p.pmscl009.value="";
    p.pmscl015.value="";
    p.pmscl016.value="";
    p.pmscl009.className="";
    p.pmscl015.className="";
    p.pmscl016.className="";
    return; 
  }
  p.pmscl009.className="Mandatory";
  p.pmscl015.className="Mandatory";
  p.pmscl016.className="Mandatory";
  if (isWhitespace(p.pmscl005.value)) { 
    SetCurrentDateTime(eval(p.diag1out3.date),eval(p.diag1out3.time));
  } else {
    p.pmscl015.value=p.pmscl005.value;
    p.pmscl016.value=p.pmscl006.value;
  }
}
function Diag1Out4() {
  var p=document[pform];
  if ((isWhitespace(p.pmscl010.value))||(isWhitespace(p.pmscl004.value))) { 
    p.pmscl010.value="";
    p.pmscl017.value="";
    p.pmscl018.value="";
    p.pmscl010.className="";
    p.pmscl017.className="";
    p.pmscl018.className="";
    return; 
  }
  p.pmscl010.className="Mandatory";
  p.pmscl017.className="Mandatory";
  p.pmscl018.className="Mandatory";
  if (isWhitespace(p.pmscl005.value)) { 
    SetCurrentDateTime(eval(p.diag1out4.date),eval(p.diag1out4.time));
  } else {
    p.pmscl017.value=p.pmscl005.value;
    p.pmscl018.value=p.pmscl006.value;
  }
}
function Diag2Out1() {
  var p=document[pform];
  if ((isWhitespace(p.pmscl022.value))||(isWhitespace(p.pmscl019.value))) { 
    p.pmscl026.value="";
    p.pmscl027.value="";
    p.pmscl026.className="";
    p.pmscl027.className="";
    return; 
  }
  p.pmscl022.className="Mandatory";
  p.pmscl026.className="Mandatory";
  p.pmscl027.className="Mandatory";
  if (isWhitespace(p.pmscl020.value)) { 
    SetCurrentDateTime(eval(p.diag2out1.date),eval(p.diag2out1.time));
  } else {
    p.pmscl026.value=p.pmscl020.value;
    p.pmscl027.value=p.pmscl021.value;
  }
}
function Diag2Out2() {
  var p=document[pform];
  if ((isWhitespace(p.pmscl023.value))||(isWhitespace(p.pmscl019.value))) { 
    p.pmscl023.value="";
    p.pmscl028.value="";
    p.pmscl029.value="";
    p.pmscl023.className="";
    p.pmscl028.className="";
    p.pmscl029.className="";
    return; 
  }
  p.pmscl023.className="Mandatory";
  p.pmscl028.className="Mandatory";
  p.pmscl029.className="Mandatory";
  if (isWhitespace(p.pmscl020.value)) { 
    SetCurrentDateTime(eval(p.diag2out2.date),eval(p.diag2out2.time));
  } else {
    p.pmscl028.value=p.pmscl020.value;
    p.pmscl029.value=p.pmscl021.value;
  }
}
function Diag2Out3() {
  var p=document[pform];
  if ((isWhitespace(p.pmscl024.value))||(isWhitespace(p.pmscl019.value))) { 
    p.pmscl024.value="";
    p.pmscl030.value="";
    p.pmscl031.value="";
    p.pmscl024.className="";
    p.pmscl030.className="";
    p.pmscl031.className="";
    return; 
  }
  p.pmscl024.className="Mandatory";
  p.pmscl030.className="Mandatory";
  p.pmscl031.className="Mandatory";
  if (isWhitespace(p.pmscl020.value)) { 
    SetCurrentDateTime(eval(p.diag2out3.date),eval(p.diag2out3.time));
  } else {
    p.pmscl030.value=p.pmscl020.value;
    p.pmscl031.value=p.pmscl021.value;
  }
}
function Diag2Out4() {
  var p=document[pform];
  if ((isWhitespace(p.pmscl025.value))||(isWhitespace(p.pmscl019.value))) { 
    p.pmscl025.value="";
    p.pmscl032.value="";
    p.pmscl033.value="";
    p.pmscl025.className="";
    p.pmscl032.className="";
    p.pmscl033.className="";
    return; 
  }
  p.pmscl025.className="Mandatory";
  p.pmscl032.className="Mandatory";
  p.pmscl033.className="Mandatory";
  if (isWhitespace(p.pmscl020.value)) { 
    SetCurrentDateTime(eval(p.diag2out4.date),eval(p.diag2out4.time));
  } else {
    p.pmscl032.value=p.pmscl020.value;
    p.pmscl033.value=p.pmscl021.value;
  }
}
function Diag3Out1() {
  var p=document[pform];
  if ((isWhitespace(p.pmscl037.value))||(isWhitespace(p.pmscl034.value))) { 
    p.pmscl041.value="";
    p.pmscl042.value="";
    p.pmscl041.className="";
    p.pmscl042.className="";
    return; 
  }
  p.pmscl037.className="Mandatory";
  p.pmscl041.className="Mandatory";
  p.pmscl042.className="Mandatory";
  if (isWhitespace(p.pmscl035.value)) { 
    SetCurrentDateTime(eval(p.diag3out1.date),eval(p.diag3out1.time));
  } else {
    p.pmscl041.value=p.pmscl035.value;
    p.pmscl042.value=p.pmscl036.value;
  }
}
function Diag3Out2() {
  var p=document[pform];
  if ((isWhitespace(p.pmscl038.value))||(isWhitespace(p.pmscl034.value))) { 
    p.pmscl038.value="";
    p.pmscl043.value="";
    p.pmscl044.value="";
    p.pmscl038.className="";
    p.pmscl043.className="";
    p.pmscl044.className="";
    return; 
  }
  p.pmscl038.className="Mandatory";
  p.pmscl043.className="Mandatory";
  p.pmscl044.className="Mandatory";
  if (isWhitespace(p.pmscl035.value)) { 
    SetCurrentDateTime(eval(p.diag3out2.date),eval(p.diag3out2.time));
  } else {
    p.pmscl043.value=p.pmscl035.value;
    p.pmscl044.value=p.pmscl036.value;
  }
}
function Diag3Out3() {
  var p=document[pform];
  if ((isWhitespace(p.pmscl039.value))||(isWhitespace(p.pmscl034.value))) { 
    p.pmscl039.value="";
    p.pmscl045.value="";
    p.pmscl046.value="";
    p.pmscl039.className="";
    p.pmscl045.className="";
    p.pmscl046.className="";
    return; 
  }
  p.pmscl039.className="Mandatory";
  p.pmscl045.className="Mandatory";
  p.pmscl046.className="Mandatory";
  if (isWhitespace(p.pmscl035.value)) { 
    SetCurrentDateTime(eval(p.diag3out3.date),eval(p.diag3out3.time));
  } else {
    p.pmscl045.value=p.pmscl035.value;
    p.pmscl046.value=p.pmscl036.value;
  }
}
function Diag3Out4() {
  var p=document[pform];
  if ((isWhitespace(p.pmscl040.value))||(isWhitespace(p.pmscl034.value))) { 
    p.pmscl040.value="";
    p.pmscl047.value="";
    p.pmscl048.value="";
    p.pmscl040.className="";
    p.pmscl047.className="";
    p.pmscl048.className="";
    return; 
  }
  p.pmscl040.className="Mandatory";
  p.pmscl047.className="Mandatory";
  p.pmscl048.className="Mandatory";
  if (isWhitespace(p.pmscl035.value)) { 
    SetCurrentDateTime(eval(p.diag3out4.date),eval(p.diag3out4.time));
  } else {
    p.pmscl047.value=p.pmscl035.value;
    p.pmscl048.value=p.pmscl036.value;
  }
}
function Diag4Out1() {
  var p=document[pform];
  if ((isWhitespace(p.pmscl052.value))||(isWhitespace(p.pmscl049.value))) { 
    p.pmscl056.value="";
    p.pmscl057.value="";
    p.pmscl056.className="";
    p.pmscl057.className="";
    return; 
  }
  p.pmscl052.className="Mandatory";
  p.pmscl056.className="Mandatory";
  p.pmscl057.className="Mandatory";
  if (isWhitespace(p.pmscl050.value)) { 
    SetCurrentDateTime(eval(p.diag4out1.date),eval(p.diag4out1.time));
  } else {
    p.pmscl056.value=p.pmscl050.value;
    p.pmscl057.value=p.pmscl051.value;
  }
}
function Diag4Out2() {
  var p=document[pform];
  if ((isWhitespace(p.pmscl053.value))||(isWhitespace(p.pmscl049.value))) { 
    p.pmscl053.value="";
    p.pmscl058.value="";
    p.pmscl059.value="";
    p.pmscl053.className="";
    p.pmscl058.className="";
    p.pmscl059.className="";
    return; 
  }
  p.pmscl053.className="Mandatory";
  p.pmscl058.className="Mandatory";
  p.pmscl059.className="Mandatory";
  if (isWhitespace(p.pmscl050.value)) { 
    SetCurrentDateTime(eval(p.diag4out2.date),eval(p.diag4out2.time));
  } else {
    p.pmscl058.value=p.pmscl050.value;
    p.pmscl059.value=p.pmscl051.value;
  }
}
function Diag4Out3() {
  var p=document[pform];
  if ((isWhitespace(p.pmscl054.value))||(isWhitespace(p.pmscl049.value))) { 
    p.pmscl054.value="";
    p.pmscl060.value="";
    p.pmscl061.value="";
    p.pmscl054.className="";
    p.pmscl060.className="";
    p.pmscl061.className="";
    return; 
  }
  p.pmscl054.className="Mandatory";
  p.pmscl060.className="Mandatory";
  p.pmscl061.className="Mandatory";
  if (isWhitespace(p.pmscl050.value)) { 
    SetCurrentDateTime(eval(p.diag4out3.date),eval(p.diag4out3.time));
  } else {
    p.pmscl060.value=p.pmscl050.value;
    p.pmscl061.value=p.pmscl051.value;
  }
}
function Diag4Out4() {
  var p=document[pform];
  if ((isWhitespace(p.pmscl055.value))||(isWhitespace(p.pmscl049.value))) { 
    p.pmscl055.value="";
    p.pmscl062.value="";
    p.pmscl063.value="";
    p.pmscl055.className="";
    p.pmscl062.className="";
    p.pmscl063.className="";
    return; 
  }
  p.pmscl055.className="Mandatory";
  p.pmscl062.className="Mandatory";
  p.pmscl063.className="Mandatory";
  if (isWhitespace(p.pmscl050.value)) { 
    SetCurrentDateTime(eval(p.diag4out4.date),eval(p.diag4out4.time));
  } else {
    p.pmscl062.value=p.pmscl050.value;
    p.pmscl063.value=p.pmscl051.value;
  }
}
function validateDis(Option,ReturnCode,ReturnName,FuncName) {
  ReturnCode.value=ReturnCode.value.toUpperCase()
  ReturnCode.value=ReturnCode.value.replace(/ /g,"")
  setfo=ReturnCode.value.search('[A-Z]')
  if (setfo == "0") {
    Codelen=ReturnCode.value.length;
    findot=ReturnCode.value.search('[.]')
    findslash=ReturnCode.value.search('[/]')
    if ((findot != "3") && (Codelen > "5")) {  // Check for Morphology Code
      // Check whether a "/" has been entered for this code
      // If code not in format M0000/0
      if (findslash != "5") {
        a=ReturnCode.value.substr(0,5);
        b=ReturnCode.value.substr(5,5);
        ReturnCode.value= a + "/" + b;      // Add slash to string
      }
    } else {
      // Check whether a "." has been entered if not format with a "." 
      // If code not in format A00.0 or Code is > 3 characters 
      if ((findot != "3") && (ReturnCode.value.length != "3")) {
        a=ReturnCode.value.substr(0,3);  // Then must be in format A000 
        b=ReturnCode.value.substr(3,3);
        ReturnCode.value= a + "." + b;     // Add full stop to string
      }
    }
  validateCode(Option,ReturnCode,ReturnName,FuncName);
  }
}
function CheckDateRange(FromInput,ToInput) {
  if (isWhitespace(ToInput.value)) { return true; }
  if (SetDateYYYYMMDD(FromInput.value) > SetDateYYYYMMDD(ToInput.value)) {
    alert(ToInput.title + " must be > or equal to " + FromInput.title + " of " +
         FromInput.value);
    ToInput.select();
    return false }
  else {
    return true }
}
function SetCurrentDateTime(dateField,timeField) {
  if (dateField!=null) {
    if(dateField.readOnly==true) {
      alert( dateField.title + " is a readonly field." )
      dateField.blur()
      dateField.focus()
      return;
    }
    dateField.value="";
  }
  if (timeField!=null) {
    if(timeField.readOnly==true) {
      alert( timeField.title + " is a readonly field." )
      timeField.blur()
      timeField.focus()
      return;
    }
    timeField.value="";
  }
  var serverURL = "../cgi-bin/patweb80.pbl?reportno=1";
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValues=returnValue.return_value.split("|")
    if (dateField!=null) {
      dateField.value=ReturnValues[0];
    }
    if (timeField!=null) {
      timeField.value=ReturnValues[1]
    } 
  }
}
