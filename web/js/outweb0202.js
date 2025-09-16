//jsVersion  : V11.03.00
//------------------------------------------------------------
// Function : outweb0202.js
//------------------------------------------------------------
function setTodayDate () {
  if (isWhitespace(document.SelectPeriod.sesskeyt.value)) {
    alert('Warning: There is no open clinic for today');
  }
  else {
   location.href=document.SelectPeriod.loctoday.value;
  }
}
function showTodayButton () {
  if (document.SelectPeriod.otcndtdy.value==1) {
    document.getElementById('TodayButSpan').style.display = "";
  }
  else {
    document.getElementById('TodayButSpan').style.display = "none";
  }
}

