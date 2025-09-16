//jsVersion  : V11.03.00
//------------------------------------------------------------
// Function : outweb0203023.js
//
// Modifications :
//
// V10.03.00  29.11.2012 Ebon Clements      CAR 267173
//                       Created include
//------------------------------------------------------------
function SetDefaultField() {
//
// Only defalut time seen if session date is today
//
  if (UpdateForm.dateclin.value != UpdateForm.todaydat.value) {
     return;
  }
//
  if (isWhitespace(UpdateForm.outbb032.value)) {
      if(isWhitespace(UpdateForm.outbb033.value)) {
        SetCurrentDateTimeMin(null,UpdateForm.outbb032);
      } else {
        UpdateForm.outbb032.value=UpdateForm.outbb033.value;
      }
  }
//
  if (isWhitespace(UpdateForm.outbb033.value)) {
      SetCurrentDateTimeMin(null,UpdateForm.outbb033);
      UpdateForm.outbb033.focus();}
}
//
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
        UpdateForm.outbb033.focus();
        return;
        }
     }
   }
   if (!(isWhitespace(UpdateForm.outbb034.value))){
     if(!isWhitespace(TimSeen) && !isWhitespace(DepTime)) {
       if (TimSeen>DepTime){
          alert("Time seen should be less than departure time");
          UpdateForm.outbb033.value="";
          UpdateForm.outbb033.focus();
          return;
       }
     }
   }
   if (!(isWhitespace(UpdateForm.outbb033.value))){
     if (!(cdatebig)){
         alert("Time seen cannot be in the future");
         UpdateForm.outbb033.value="";
         UpdateForm.outbb033.focus();
         return;
     }
   }
} 
//
function ChkTimDp(){
if(!checkTimeMin(UpdateForm.outbb034,UpdateForm.outbb034.title)) {
   return false;
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
      return false;
           }
   else if (TimSeen>DepTime){
           alert("Departure time should be greater than time seen");
           return false;
           }
   else if (!(cdatebig)){
      alert("Departure time cannot be in the future");
      return false;
           }
   }
return true;
}
//
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
//
function UpdateRecords() {
  if(!ChkTimDp()) {
    return;
  }
  if (!isWhitespace(UpdateForm.outbb033.value)) {
    if (isWhitespace(UpdateForm.outbb032.value)) {
        alert("Patient with no check in time, cannot be seen");
        UpdateForm.outbb032.focus();
        return;
    }
  }
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
  SubmitHidden(UpdateForm);
}

