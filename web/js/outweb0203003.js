//jsVersion  : V11.03.01
//------------------------------------------------------------ 
function ChkChkIn(){
if(!checkTimeMin(UpdateForm.outbb032,UpdateForm.outbb032.title)) {
   return; 
}
var ChkTime=UpdateForm.outbb032.value.replace(/:/g,"")
var TimSeen=UpdateForm.outbb033.value.replace(/:/g,"")
ChkTime=trim(ChkTime);
TimSeen=trim(TimSeen);
GetCurDateTime(UpdateForm.CurrDate,UpdateForm.CurrTime);
var cdatebig = ChkDateTime(UpdateForm.startdate,UpdateForm.outbb032,UpdateForm.CurrDate,UpdateForm.CurrTime);
if (!(isWhitespace(UpdateForm.outbb033.value))){
   if(!isWhitespace(ChkTime) && !isWhitespace(TimSeen)) {
     if (ChkTime>TimSeen){
        alert("Check in time should be less than time seen");
        UpdateForm.outbb032.value="";
        }
     }
   }
if (!(isWhitespace(UpdateForm.outbb032.value))){
   if (!(cdatebig)){
      alert("Check in time cannot be in the future");
      UpdateForm.outbb032.value="";
      }
   }
}
function ChkTimSn(){
if(!checkTimeMin(UpdateForm.outbb033,UpdateForm.outbb033.title)) {
   return; 
}
var ChkTime=UpdateForm.outbb032.value.replace(/:/g,"")
var TimSeen=UpdateForm.outbb033.value.replace(/:/g,"")
var DepTime=UpdateForm.outbb034.value.replace(/:/g,"")
ChkTime=trim(ChkTime);
TimSeen=trim(TimSeen);
DepTime=trim(DepTime);
GetCurDateTime(UpdateForm.CurrDate,UpdateForm.CurrTime);
var cdatebig = ChkDateTime(UpdateForm.startdate,UpdateForm.outbb033,UpdateForm.CurrDate,UpdateForm.CurrTime);
if (!(isWhitespace(UpdateForm.outbb033.value))){
   if(!isWhitespace(ChkTime) && !isWhitespace(TimSeen)) {
     if (ChkTime>TimSeen){
        alert("Time seen should be greater than check in time");
        UpdateForm.outbb033.value="";
        }
     }
   }
   if (!(isWhitespace(UpdateForm.outbb034.value))){
     if(!isWhitespace(TimSeen) && !isWhitespace(DepTime)) {
       if (TimSeen>DepTime){
          alert("Time seen should be less than departure time");
          UpdateForm.outbb033.value="";
       }
     }
   }
   if (!(isWhitespace(UpdateForm.outbb033.value))){
     if (!(cdatebig)){
         alert("Time seen cannot be in the future");
         UpdateForm.outbb033.value="";
     }
   }
}
function ChkTimDp(){
if(!checkTimeMin(UpdateForm.outbb034,UpdateForm.outbb034.title)) {
   return;
}
var DepTime=UpdateForm.outbb034.value.replace(/:/g,"")
var TimSeen=UpdateForm.outbb033.value.replace(/:/g,"")
DepTime=trim(DepTime);
TimSeen=trim(TimSeen);
GetCurDateTime(UpdateForm.CurrDate,UpdateForm.CurrTime);
var cdatebig = ChkDateTime(UpdateForm.startdate,UpdateForm.outbb034,UpdateForm.CurrDate,UpdateForm.CurrTime);
if (!(isWhitespace(UpdateForm.outbb034.value))){
   if (isWhitespace(UpdateForm.outbb033.value)){
      alert("Patient not Seen,cannot be departed");
      UpdateForm.outbb034.value="";
           }
   else if (TimSeen>DepTime){
           alert("Departure time should be greater than time seen");
           UpdateForm.outbb034.value="";
           }
   else if (!(cdatebig)){
      alert("Departure time cannot be in the future");
           UpdateForm.outbb034.value="";
           }
   }
}
function SetDefaultField() {
//
// Only defalut times if session date is today
//
  if(UpdateForm.dateclin.value != UpdateForm.todaydat.value) {  
    return;                       
  }
//
  if (isWhitespace(UpdateForm.outbb032.value)) {
      SetCurrentDateTimeMin(null,UpdateForm.outbb032);  
      SetCurrentDateTimeMin(null,UpdateForm.outbb033);  
      UpdateForm.outbb033.focus(); return;}
//
// Auto populate the seen and departure time if the patient is being discharged
// and they are checked in
//
  if (UpdateForm.deptflag.value==1) {
     if (isWhitespace(UpdateForm.outbb033.value)) {
         SetCurrentDateTimeMin(null,UpdateForm.outbb033);  
         UpdateForm.outbb033.focus();}
     if (isWhitespace(UpdateForm.outbb034.value)) {
         SetCurrentDateTimeMin(null,UpdateForm.outbb034);  
         UpdateForm.outbb034.focus();return;}
     }
//
  if (isWhitespace(UpdateForm.outbb033.value)) {
      SetCurrentDateTimeMin(null,UpdateForm.outbb033);  
      UpdateForm.outbb033.focus(); return;}
  if (isWhitespace(UpdateForm.outbb034.value)) {
      SetCurrentDateTimeMin(null,UpdateForm.outbb034);  
      UpdateForm.outbb034.focus(); return;}
}
function UpdateRecords() {
  if (!isWhitespace(UpdateForm.outbb034.value)) {
    if (isWhitespace(UpdateForm.outbb032.value)) {
        alert("Patient with no check in time, cannot be departed");
        UpdateForm.outbb032.focus(); 
        return;
    }
    if (isWhitespace(UpdateForm.outbb033.value)) {
        alert("Patient with no time seen, cannot be departed");
        UpdateForm.outbb033.focus(); 
        return;
    }
  }
  var indc4 = UpdateForm.outbb035.value.substr(6,1);  // Outcome indicator 4
  if (indc4 != "C" && indc4 != "R") {   // *T0857147
    var ScrName=CheckOutcome();
    if(chkExtraTempl(document.UpdateForm,"A",document.UpdateForm.casekeys.value,
       PatientLinks.urnumber.value.replace(/ /g,"+"),ScrName)) {
      document.UpdateForm.nextpage.value="1";
    }
  }
  if(typeof(ReEnableFields)== 'function') {
    if(!validateMandatory(UpdateForm)) {
      return;
    }
    ReEnableFields();
  }

  if(document.getElementById("outbb080")) {
    document.getElementById("outbb080").value =
       document.getElementById("d_outbb080").value;
    document.getElementById("outbb081").value =
       document.getElementById("d_outbb081").value;
    document.getElementById("outbb082").value =
       document.getElementById("d_outbb082").value;
    document.getElementById("outbb083").value =
       document.getElementById("d_outbb083").value;
  }
  if (typeof valReferralClaim === 'function') {
    valReferralClaim();
  }
  SubmitHidden(UpdateForm);
}
function CheckOutcome() {
  var ScrName="";
  if (UpdateForm.outbb035.value.substr(0,3) == UpdateForm.otcnocrd.value) {
     UpdateForm.redirect.value="outweb02.pbl?reportno=03&template=004"
     + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+")
     + "&casekeys=" + document.PatientLinks.casekeys.value.replace(/ /g,"+");
     UpdateForm.nextpage.value="1";
     ScrName="OCR";
  } 
  if (UpdateForm.outbb035.value.substr(0,3) == UpdateForm.otcnocdd.value) {
     UpdateForm.redirect.value="outweb02.pbl?reportno=03&template=006"
     + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+")
     + "&casekeys=" + document.PatientLinks.casekeys.value.replace(/ /g,"+");
     UpdateForm.nextpage.value="1";
     ScrName="OCD";
  }
  return ScrName;
}
function GetCurDateTime(dateField,timeField) {
  if (timeField!=null) timeField.value="";
  var serverURL = "../cgi-bin/patweb80.pbl?reportno=1";
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValues=returnValue.return_value.split("|")
    if (dateField!=null) {
       dateField.value=ReturnValues[0];
       dateField.blur() }
    if (timeField!=null) {
      timeField.value=ReturnValues[1].substr(0,5);
      timeField.blur()
                        } }
}

//Displays additional HCP fields is checkbox selected
function displayAddHCP(addHCPDisplayed) {

   //Displays fields if selected
   if(addHCPDisplayed) {
      document.getElementById("addhcphead01label").innerHTML =
         document.getElementById("addHCPSlotslabel01").innerHTML;
      document.getElementById("addhcphead01").innerHTML =
         document.getElementById("addHCPSlots01").innerHTML;
      document.getElementById("addhcphead02label").innerHTML =
         document.getElementById("addHCPSlotslabel02").innerHTML;
      document.getElementById("addhcphead02").innerHTML =
         document.getElementById("addHCPSlots02").innerHTML;
      document.getElementById("addhcphead03label").innerHTML =
         document.getElementById("addHCPSlotslabel03").innerHTML;
      document.getElementById("addhcphead03").innerHTML =
         document.getElementById("addHCPSlots03").innerHTML;
      document.getElementById("addhcphead04label").innerHTML =
         document.getElementById("addHCPSlotslabel04").innerHTML;
      document.getElementById("addhcphead04").innerHTML =
         document.getElementById("addHCPSlots04").innerHTML;

   //Hides fields if not selected
   } else {
      document.getElementById("addhcphead01label").innerHTML =
         document.getElementById("addHCPSlotsBlank").innerHTML;
      document.getElementById("addhcphead01").innerHTML =
         document.getElementById("addHCPSlotsBlank").innerHTML;
      document.getElementById("addhcphead02label").innerHTML =
         document.getElementById("addHCPSlotsBlank").innerHTML;
      document.getElementById("addhcphead02").innerHTML =
         document.getElementById("addHCPSlotsBlank").innerHTML;
      document.getElementById("addhcphead03label").innerHTML =
         document.getElementById("addHCPSlotsBlank").innerHTML;
      document.getElementById("addhcphead03").innerHTML =
         document.getElementById("addHCPSlotsBlank").innerHTML;
      document.getElementById("addhcphead04label").innerHTML =
         document.getElementById("addHCPSlotsBlank").innerHTML;
      document.getElementById("addhcphead04").innerHTML =
         document.getElementById("addHCPSlotsBlank").innerHTML;
   }
}

//Checks if additional HCP present and displays fields
function loadAddHCP(HCPCode,HCPCodeVar) {

  //Checks if there is an additional HCP
  if(!isWhitespace(HCPCode)) {

    addHCPDisp = document.getElementById("addHCPprov").checked;

    //If present checks if already displaued
    if(!addHCPDisp) {

      //If not, displays it
      document.getElementById("addHCPprov").checked = true;
      displayAddHCP(true);
    }

    //Populates the HCP fields.
    HCPCodeField = document.getElementById("d_"+HCPCodeVar)
    HCPNameField = document.getElementById("name_"+HCPCodeVar);
    HCPCodeField.value=HCPCode;
    validateCode(3,HCPCodeField,HCPNameField);
  }
}
