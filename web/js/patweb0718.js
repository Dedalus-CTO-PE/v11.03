//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb0718.js
//=============================================================================
function RetentionOverRide() {
  if (isWhitespace(document.UpdateForm.recrt001.value)) {
    document.UpdateForm.recrt002.value = "";
    document.UpdateForm.recrt002.readOnly=true;
    return;
  }
  if (document.UpdateForm.recrt001.value.substr(4,1) == "O") {
    document.UpdateForm.recrt002.readOnly=false;
  } else {
    document.UpdateForm.recrt002.readOnly=true;
  }
  retainYears = parseInt(document.UpdateForm.recrt001.value.substr(22,6));
  if (retainYears == 0) {
    document.UpdateForm.recrt002.value = "";
    document.UpdateForm.recrt002.className="Mandatory FutureDate";
    return;
  } else {
    document.UpdateForm.recrt002.className="";
  }
  indc1=(document.UpdateForm.recrt001.value.substr(3,1));
  hdpdf=(document.UpdateForm.recrt001.value.substr(14,4));
  ageyr=(document.UpdateForm.ageyears.value);
  if (indc1 == "C") {
    if (parseInt(ageyr) > parseInt(hdpdf)) {
      alert("Patient is not a child. Use a different Retention Period.");
      document.UpdateForm.recrt001.value = "";
      document.UpdateForm.recrt002.value = "";
      return;
    } else {
      retainYears -= ageyr;
    }
  }
  dayMonth = (document.UpdateForm.recretdt.value.substr(0,7));
  var myDate = GetDateObj(document.UpdateForm.recretdt.value);
  myDate.setFullYear(myDate.getFullYear() + retainYears);
  document.UpdateForm.recrt002.value = dayMonth + myDate.getFullYear();
}
