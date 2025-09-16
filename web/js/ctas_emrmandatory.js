/*  01 : CTAS : 21-Oct-2015 : Regional Customisations
	* Added validateMandatory (from Standard.js) to validate fields in ED screens
*/

// Function  : validateMandatory
//
// Operation : Check a each form input field
//             Mandatory Fields Defined with
//             class=Mandatory
//             title=string describing the field
// Example   :
// <select name=pattitle tabindex=1 class=Mandatory title="Patient Title">
//
//========================================================================
function validateMandatory(theForm) {
  // temp radio name
  var tempradio="";
  for (i=0; i<theForm.elements.length; i++) {
    el=theForm.elements[i]
    if (el.className.match(/Integer/) && el.type=="text") {
      if (!checkInteger(el,el.title)) {
         return false } }
    if (el.className.match(/Number/) && el.type=="text") {
      if (!checkNumber(el)) {
         return false } }
    if (el.title.match(/Date/) && el.type=="text") {
      if (!checkDate(el,el.title)) {
         return false } }
    if (el.title.match(/Time/) && el.type=="text") {
      if (!checkTime(el,el.title)) {
         return false } }
    if (el.className.match(/Mandatory/)) {
      // for radio buttons, skip
	  if (el.type=="radio") {
		 if(tempradio!=el.name) {
			 tempradio=el.name;
			 if(!checkRadio(document.getElementsByName(el.name))) {
				 alert("You did not select a value for " + el.title + ".\n" + "This is a mandatory field.\n" +
				"Please select it now.");
				 return false;
			 }
		 }
	  } else {
		if (!checkString(el,el.title)) {
			return false }  
	  }
    }
  }
  // could be made dynamic, for now make it manual
  /*
  checkRadio(document.getElementsByName("emvis059"));
  checkRadio(document.getElementsByName("emvis041"));
  checkRadio(document.getElementsByName("emvis057"));
  checkRadio(document.getElementsByName("emvis065"));
  */
  return true;
} 

function checkRadio(el) {
	var hasBeenSet=0;
	for (var i =0 ; i < el.length; i++) {
		if (el[i].checked==1) {
			hasBeenSet=1;
		}
	}
	if (!hasBeenSet) {
		return false;  
	}
	return true;
}

// Function  : validateMandatoryField
//
// Operation : Check a each form input field
//             Mandatory Fields Defined with
//             class=Mandatory
//             title=string describing the field
// Example   :
// <select name=pattitle tabindex=1 class=Mandatory title="Patient Title">
//
//========================================================================
function validateMandatoryField(element) {
    el=element;
    if (el.className.match(/Integer/) && el.type=="text") {
      if (!checkInteger(el,el.title)) {
         return false } }
    else if (el.className.match(/Number/) && el.type=="text") {
      if (!checkNumber(el)) {
         return false } }
    else if (el.title.match(/Date/) && el.type=="text") {
      if (!checkDate(el,el.title)) {
         return false } }
    else if (el.title.match(/Time/) && el.type=="text") {
      if (!checkTime(el,el.title)) {
         return false } }
    else if (el.className.match(/Mandatory/)) {
      if (!checkString(el,el.title)) {
         return false } }
	else {
		return true
	}
}
