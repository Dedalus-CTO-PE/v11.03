//jsVersion  : V11.03.00
//========================================================================
// Functions for Time Lookup Frame
//========================================================================
function UpdateParent() {
  parent.TimeValue.value=document.SelectTime.SetTime.value.substr(0,5);
  parent.TimeValue.focus();
  parent.PopUpScreen.style.display="none";

  // Now we execute any return function passed into our Time Lookup Frame
  var retFunc = (parent.TimeRetFunc != undefined) ? parent.TimeRetFunc : null;
  if (retFunc != null) {
    if (typeof(retFunc) == 'function') {
      retFunc();
    }
  }
}
function SetHour(Hour) {
document.SelectTime.TimeHour.value=Hour;
ShowTime()
}
function SetMinTen(Tens) {
document.SelectTime.TimeMinute.value="0";
document.SelectTime.TimeTens.value=Tens;
ShowTime()
}
function SetMinFive(Tens) {
document.SelectTime.TimeMinute.value="5";
document.SelectTime.TimeTens.value=Tens;
ShowTime()
}
function SetMin(Minute) {
document.SelectTime.TimeMinute.value=Minute;
ShowTime()
}
function NextHour() {
HourValue=parseInt(document.SelectTime.TimeHour.value,10)+1
if ( HourValue > 23 ) { HourValue=0 }
document.SelectTime.TimeHour.value=HourValue
ShowTime()
}
function NextMinute() {
TensValue=parseInt(document.SelectTime.TimeTens.value,10)
MinuteValue=parseInt(document.SelectTime.TimeMinute.value,10)+1
if ( MinuteValue > "9" ) { 
   MinuteValue=0
   TensValue+=1
   if ( TensValue > "5" ) { TensValue=0; NextHour() }
}
document.SelectTime.TimeTens.value=TensValue
document.SelectTime.TimeMinute.value=MinuteValue
ShowTime()
}
function LastHour() {
HourValue=parseInt(document.SelectTime.TimeHour.value,10)-1
if ( HourValue < 0 ) { HourValue=23 }
document.SelectTime.TimeHour.value=HourValue
ShowTime()
}
function LastMinute() {
TensValue=parseInt(document.SelectTime.TimeTens.value,10)
MinuteValue=parseInt(document.SelectTime.TimeMinute.value,10)-1
if ( MinuteValue < "0" ) { 
   MinuteValue=9
   TensValue-=1
   if ( TensValue < "0" ) { TensValue=5; LastHour() }
}
document.SelectTime.TimeTens.value=TensValue
document.SelectTime.TimeMinute.value=MinuteValue
ShowTime()
}
function ShowTime() {
if ((""+document.SelectTime.TimeHour.value).length == 1) {
  document.SelectTime.TimeHour.value="0"+document.SelectTime.TimeHour.value; }
Minute = document.SelectTime.TimeTens.value +
         document.SelectTime.TimeMinute.value 
document.SelectTime.SetTime.value= document.SelectTime.TimeHour.value + ":" +
                                   Minute + ":00"
}
function TimeCurrent() {
  var serverURL = "../cgi-bin/patweb80.pbl?reportno=1";
  var returnValue = RSExecute(serverURL);
  var now;
  if (returnValue.status==0)
  {
    ReturnValues=returnValue.return_value.split("|")
    now=ReturnValues[1]
  }

  var ThisHour = now.substr(0,2);
  var ThisMinute = now.substr(3,2);
  document.SelectTime.TimeHour.value=ThisHour
  document.SelectTime.TimeTens.value=(ThisMinute-ThisMinute%10)/10
  document.SelectTime.TimeMinute.value=ThisMinute%10

  if ((""+document.SelectTime.TimeHour.value).length == 1) {
   document.SelectTime.TimeHour.value="0"+document.SelectTime.TimeHour.value; }
   Minute = document.SelectTime.TimeTens.value +
            document.SelectTime.TimeMinute.value
   document.SelectTime.SetTime.value= document.SelectTime.TimeHour.value + ":" +
                                   Minute + ":" + now.substr(6,2)
}
function TimeClear() {
document.SelectTime.TimeHour.value="00";
document.SelectTime.TimeTens.value="0";
document.SelectTime.TimeMinute.value="0";
Minute = document.SelectTime.TimeTens.value +
         document.SelectTime.TimeMinute.value 
document.SelectTime.SetTime.value= ""
}
