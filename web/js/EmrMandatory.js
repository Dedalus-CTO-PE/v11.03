//jsVersion  : V11.03.00
//========================================================================
// Global Variables
//========================================================================
var whitespace = " \t\n\r";
var mPrefix = "You did not enter a value for "
var mSuffix = "\nThis is a required field.\nPlease enter it now."
//
function triageMandatory(theForm) {   
return (
      checkString(theForm.elements["emvis128"],"Triage Date") &&
      checkString(theForm.elements["emvis129"],"Triage Time") &&
      checkRadio(theForm.elements["emvis003"],"Triage Category",theForm) &&
      checkString(theForm.elements["emvis127"],"Triage Nurse") 
      )
}
//
function dischMandatory(theForm) {   
return (
      checkString(theForm.elements["emvis024"],"Departure Date") &&
      checkString(theForm.elements["emvis025"],"Departure Time") &&
      checkString(theForm.elements["emvis026"],"Departure Status") &&
      checkString(theForm.elements["emvis051"],"Referred to on Departure") 
      )
}
//
function workMandatory(theForm) {   
return (
      checkString(theForm.elements["emvis007"],"Attending Doctor") &&
      checkString(theForm.elements["emvis030"],"Doctor Seen Date") &&
      checkString(theForm.elements["emvis031"],"Doctor Seen Time") &&
      checkStatus(theForm.elements["emvis026"],theForm.elements["emvis073"],theForm.elements["emvis083"])
      )
}
//
function pmi2Mandatory(theForm) {   
return (
      checkString(theForm.elements["emvis017"],"Health Fund") &&
      checkString(theForm.elements["emvis018"],"Health Fund Table") &&
      checkMedicare(theForm.elements["ptmas022"])
//      checkString(theForm.elements["ptmas022"],"Medicare Number") 
      )
}
//
function pmi1Mandatory(theForm) {   
return (
      checkString(theForm.elements["emvis062"],"Clerical ID") &&
//      checkString(theForm.elements["ptmas039"],"Preferred Language") &&
      checkString(theForm.elements["ptmas001"],"Title") &&
      checkString(theForm.elements["ptmas005"],"Surname") &&
      checkString(theForm.elements["ptmas006"],"Given Name") &&
      checkString(theForm.elements["ptmas014"],"Sex") &&
      checkString(theForm.elements["ptmas016"],"Date of Birth") &&
      checkString(theForm.elements["ptmas010"],"Suburb") &&
      checkString(theForm.elements["ptmas011"],"Post code") &&
      checkString(theForm.elements["ptmas018"],"Country of Birth") &&
      checkString(theForm.elements["ptmas041"],"Aboriginality") &&
      checkString(theForm.elements["emvis008"],"Compensable Status") &&
      checkString(theForm.elements["emvis013"],"Arrival Transport") &&
      checkString(theForm.elements["emvis061"],"Referred By") &&
      checkAmb(theForm.elements["emvis013"],theForm.elements["emvis034"],theForm) &&
      checkReferred(theForm.elements["emvis061"],theForm.elements["emvis032"],theForm) &&
      checkString(theForm.elements["emvis053"],"Type of Visit")
    )
}
function checkAmb(mode,number,theForm) {
  if(mode.value.substr(3,1)=="A") {
    if (isWhitespace(number.value)) {
       alert(mPrefix + "Ambulance Case Number" + mSuffix);
       FocusDelay(document.theForm.emvis013);
       return false;
    } else {
       return true;
    }
  } else {
    return true;
  }
}
function checkReferred(referred,source,theForm) {
  if(referred.value.substr(5,1)=="1") {
    if (isWhitespace(source.value)) {
       alert(mPrefix + "Transfer Source" + mSuffix);
       FocusDelay(document.theForm.emvis032);
       return false;
    } else {
      return true;
    }
  } else {
    return true;
  }
}
function checkStatus(status,date,time,theForm) {
  if(status.value.substr(4,1)=="2") {
    if ((isWhitespace(date.value)) || (isWhitespace(time.value))) {
       alert(mPrefix + "Ward Request Date/Time" + mSuffix);
       FocusDelay(document.theForm.emvis073.focus);
       return false
    } else{
       return true;
    }
  } else {
    return true;
  }
}
//
function checkRadio(r,s,theForm) {
  for (var i =0 ; i < document.triage.emvis003.length; i++) {
       if (document.triage.emvis003[i].checked) {
           return true;
       } 
  }
  alert(mPrefix + s + mSuffix);
  FocusDelay(document.triage.emvis003.focus);
  return false;
} 
//======================================================================
//
// checkString (TEXTFIELD theField, STRING s, [, BOOLEAN emptyOK==false])
//
// Check that string theField.value is not all whitespace.
//
// For explanation of optional argument emptyOK,
// see comments of function isInteger.
//
//======================================================================
function checkString (theField, s, emptyOK)
{   // Next line is needed on NN3 to avoid "undefined is not a number" error
    // in equality comparison below.
    if (checkString.arguments.length == 2) emptyOK = false;
    if ((emptyOK == true) && (isEmpty(theField.value))) return true;
    if (isWhitespace(theField.value))
       return warnEmpty (theField, s);
    else return true;
}

// Check whether string s is empty.

function isEmpty(s)
{   return ((s == null) || (s.length == 0))
}

// Returns true if string s is empty or
// whitespace characters only.

function isWhitespace (s)

{   var i;

    // Is s empty?
    if (isEmpty(s)) return true;

    // Search through string's characters one by one
    // until we find a non-whitespace character.
    // When we do, return false; if we don't, return true.

    for (i = 0; i < s.length; i++)
    {
        // Check that current character isn't whitespace.
        var c = s.charAt(i);

        if (whitespace.indexOf(c) == -1) return false;
    }

    // All characters are whitespace.
    return true;
}
// Notify user that required field theField is empty.
// String s describes expected contents of theField.value.
// Put focus in theField and return false.

function warnEmpty (theField, s)
{   theField.focus()
    alert(mPrefix + s + mSuffix)
    return false
}

function SetFieldFocus(FieldID) {
  if (!FieldID) return false;
  var el = document.getElementById(FieldID);

  if (el) {
    el.focus();
  }
  return true;
}

function LookupPresComp(e, SearchField, DescField, CatCodeField) {
  var e = e ? e : window.event;
  var key = e.keyCode;

  // ignore key press if it's a combination of ctrl/alt/shift
  if (e.ctrlKey || e.altKey || e.shiftKey)
    return true;

  if ( (key > 45 && key < 91) || (key == 8) ) {
    // Is an Alpha-numeric or Backspace keypress; so we'll do the lookup
    UpCase(SearchField);
    getPresentCom(SearchField,DescField,CatCodeField);
  }
  return true;
}

function makeMandatory(fields) {
  addClass(fields,"Mandatory");
}

function makeOptional(fields) {
  removeClass(fields,"Mandatory");
}
