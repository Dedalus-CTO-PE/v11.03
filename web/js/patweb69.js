//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb69.js
//
// Written   : Don Nguyen
//
// Function  : Standard Functions used for LHD (Local Health District) Search
//
//-----------------------------------------------------------------
// Test LHD (Local Health District) connection
//-----------------------------------------------------------------
function LHDConnect() {
  var serverURL = "../cgi-bin/patweb69.pbl?reportno=4&remoteno=1";

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    if (returnValue.return_value == '0')
      return true;  // connection success
  }
  return false;  // connection failed
}

//-----------------------------------------------------------------
// LHD Search
//-----------------------------------------------------------------
function LHDSearch(RegSpanID, NewRegSpanID, ReturnFn)
{
  // Test our LHD connection first...
  //var bConnected = LHDConnect();
  var bConnected=true;

  if (!bConnected) {
    alert("The remote registration system has not responded.");

    if (!isWhitespace(RegSpanID)) {
      var RegSpan = document.getElementById(RegSpanID);
      var NewRegSpan = document.getElementById(NewRegSpanID);
      if (RegSpan != undefined && NewRegSpan != undefined) {
	RegSpan.innerHTML = NewRegSpan.innerHTML;
      }
    }
    return false;
  }

  // Redirect to LHD Search screen...
  var sex;
  for (var i =0 ; i < document.search.srchpsex.length; i++) {
    if (document.search.srchpsex[i].checked) {
      sex = document.search.srchpsex[i].value;
    }
  }

  var aGNames = document.search.srchgnam.value.split(' ');
  var sURL = "patweb69.pbl?reportno=1&template=001" +
                "&srchsnam=" + document.search.srchsnam.value +
                "&srchgnam=" + aGNames[0];

  if (aGNames.length > 1) {
    sURL += "&srchmnam=" + aGNames[1];
  }

  sURL += "&srchpdob=" + document.search.srchpdob.value +
          "&srchpsex=" + sex + "&srchtype=1";

  if (document.search.srchmedi != undefined) {
    sURL += "&srchmedi=" + document.search.srchmedi.value;
  }

  if (ReturnFn != undefined &&
      typeof(ReturnFn) == 'function') {
    ReturnFn();
  }
  else {
    location.href = sURL;
  }
}

var SRCH_MODE_DF = 0;  // Default search mode
var SRCH_MODE_OP = 1;  // Outpatient search mode
var SRCH_MODE_TH = 2;  // Theatre search mode
var SRCH_MODE_EA = 3;  // eAdmission/eReferral search mode
var SRCH_MODE_ER = 4;  // Emergency Registration

//-----------------------------------------------------------------
// LHD Search (DFrame search screen)
//-----------------------------------------------------------------
function LHDSearchFrame(RegSpanID, NewRegSpanID, RedirectURL, SearchMode)
{
  // Test our LHD connection first...
  //var bConnected = LHDConnect();
  var bConnected=true;

  if (!bConnected) {
    alert("The remote registration system has not responded.");

    if (!isWhitespace(RegSpanID)) {
      var RegSpan = document.getElementById(RegSpanID);
      var NewRegSpan = document.getElementById(NewRegSpanID);
      if (RegSpan != undefined && NewRegSpan != undefined) {
	RegSpan.innerHTML = NewRegSpan.innerHTML;
      }
    }
    return false;
  }

  // Redirect to LHD Search screen...
  var sex;
  for (var i =0 ; i < document.search.srchpsex.length; i++) {
    if (document.search.srchpsex[i].checked) {
      sex = document.search.srchpsex[i].value;
    }
  }

  var aGNames = document.search.srchgnam.value.split(' ');
  var sURL = "patweb69.pbl?reportno=1&template=060";  // default

  if (SearchMode != undefined) {
    if (SearchMode == SRCH_MODE_OP) {
      sURL = "patweb69.pbl?reportno=1&template=200";
    }
    else if (SearchMode == SRCH_MODE_TH) {
      sURL = "patweb69.pbl?reportno=1&template=201";
    }
    else if (SearchMode == SRCH_MODE_EA) {
      sURL = "patweb69.pbl?reportno=1&template=202" +
             "&admisnid=" + document.search.admisnid.value +
             "&erefrlid=" + document.search.erefrlid.value;
    }
    else if (SearchMode == SRCH_MODE_ER) {
      sURL = "patweb69.pbl?reportno=1&template=101";
    }
  }

  sURL += "&srchsnam=" + document.search.srchsnam.value +
          "&srchgnam=" + aGNames[0];

  if (aGNames.length > 1) {
    sURL += "&srchmnam=" + aGNames[1];
  }

  sURL += "&srchpdob=" + document.search.srchpdob.value +
          "&srchpsex=" + sex + "&srchtype=1";

  if (document.search.srchmedi != undefined) {
    sURL += "&srchmedi=" + document.search.srchmedi.value;
  }

  if (document.search.admissno != undefined) {
    sURL += "&srchadmn=" + document.search.admissno.value;
  }

  if (RedirectURL != undefined) {
    sURL += "&redirect=" + encodeURIComponent(RedirectURL);
  }

  location.href = sURL;
}

function CheckFields() {
  if ( isWhitespace(document.search.srchsnam.value) &&
       isWhitespace(document.search.srchgnam.value) &&
       isWhitespace(document.search.srchpdob.value) ) {

    alert("Insufficient search criteria. " +
          "One of the following fields must be entered: \n\n" +
          "\t" + document.search.srchsnam.title + " or " +
          document.search.srchgnam.title + " or " +
          document.search.srchpdob.title) + ".";
    return false;
  }

  return true;
}

function HasConnection() {
  //var bConnected = LHDConnect();
  var bConnected=true;

  if (!bConnected) {
    // Clear any previous results
    DeleteChildNodes(document.getElementById('BodyDivision'));
    alert("The remote registration system has not responded, " +
          "please attempt registration later.");
    return false;
  }

  return true;
}

function ToggleMandatory(QuickRegChkbx) {
  if (QuickRegChkbx == undefined)
    return;

  var p = document.search;
  var sClass = "";
  if (!QuickRegChkbx.checked) {
    sClass = "Mandatory";
  }
  p.srchsnam.className = sClass;
  p.srchgnam.className = sClass;
  p.srchpsex.className = sClass;
  p.srchpdob.className = sClass;
}

// Patient Data Fields Array:
// --------------------------
//  0 - Title
//  1 - Surname
//  2 - First Given Name
//  3 - Second Given Name
//  4 - Gender
//  5 - Date of Birth
//  6 - Address Line 1
//  7 - Address Line 2
//  8 - Address Line 3 (Suburb)
//  9 - Address Line 4 (State)
// 10 - Address Line 5 (Post Code)
// 11 - Home Phone
// 12 - Mobile Phone
// 13 - Work Phone
// 14 - Country of Birth          (Category C; THCSCOD)
// 15 - Preferred Language        (Category LA; THCSCOD) 
// 16 - Interpreter Required      (Y/N)
// 17 - Race (Aboriginality)      (Category VA; THCSCOD)
// 18 - Medicare Number
// 19 - Medicare Valid To Date
// 20 - Resident Status           (Category T; Indicator 1)
//
//
// Fields not in use:
// ------------------
// xx - Marital Status
// xx - Email
// xx - Religion

var PatDatFields = [
"Title",
"Surname",
"First Given Name",
"Second Given Name",
"Gender",
"Date of Birth",
"Address Line 1",
"Address Line 2",
"Address Line 3",
"Address Line 4",
"Address Line 5",
"Home Phone",
"Mobile Phone",
"Work Phone",
"Country of Birth",
"Preferred Language",
"Interpreter Required",
"Race (Aboriginality)",
"Medicare Number",
"Medicare Valid To Date",
"Resident Status"
]


//
// Define array indexes for special data fields...
//
var ARR_INDEX_SEX = 4;                   // index for Sex (Gender)
var ARR_INDEX_DOB = 5;                   // index for DOB
var ARR_INDEX_INTERPRET_REQ  = 16;       // index for Interpreter Required
var ARR_INDEX_MEDICARE_VALID_DATE = 19;  // index for Medicare Valid to Date

var AlternateIdDataStr;  // pipe-delimited string containing Alternate ID data

// Remote script to check for an existing UPI (Alternate ID).
// Returns matching the U/R and patient details (Surname, First Given Name)
function AltIdExists(UPI) {
  AlternateIdDataStr = "";
  var serverURL = "../cgi-bin/patweb69.pbl?reportno=4&remoteno=2" +
                  "&srchupin=" + UPI;

  var returnValue = RSExecute(serverURL);
  if (returnValue.status == 0) {
    if (returnValue.return_value != '0') {
      AlternateIdDataStr = returnValue.return_value;
      return true;  // UPI exists
    }
  }
  return false;  // UPI does NOT exist
}

// Get UR patient data (array) for a selected UR
function GetURData(UR) {
  var datArr;
  serverURL = "../cgi-bin/patweb69.pbl?reportno=4&remoteno=3" +
              "&srchurno=" + UR;
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    var retVal = returnValue.return_value;
    if (!isWhitespace(retVal) && retVal != "0" ) {
      datArr = returnValue.return_value.split("|");
    }
  }

  return datArr;
}

// Get UPI patient data (array) for a selected UPI
function GetUPIData(UPI, PersonID) {
  var datArr;
  var serverURL = "../cgi-bin/patweb69.pbl?reportno=4&remoteno=4" +
                  "&srchupin=" + UPI + "&srchnpid=" + PersonID;
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    var retVal = returnValue.return_value;
    if (!isWhitespace(retVal) && retVal != "0" ) {
      datArr = returnValue.return_value.split("|");
    }
  }

  return datArr;
}

// Remote script to check if UR exists
function URExists(UR) {
  if (isWhitespace(UR))
    return false;

  var serverURL = "../cgi-bin/patweb69.pbl?reportno=4&remoteno=5" +
                  "&srchurno=" + UR;

  var returnValue = RSExecute(serverURL);
  if (returnValue.status == 0) {
    return (returnValue.return_value == '1')
  }
  return false;  // remote script failed
}

// Remote script to check if UPI exists
function UPIExists(UPI, PersonID) {
  if (isWhitespace(UPI) || isWhitespace(PersonID))
    return false;

  var serverURL = "../cgi-bin/patweb69.pbl?reportno=4&remoteno=6" +
                  "&srchupin=" + UPI + "&srchnpid=" + PersonID;

  var returnValue = RSExecute(serverURL);
  if (returnValue.status == 0) {
    return (returnValue.return_value == '1')
  }
  return false;  // remote script failed
}

function HasUPI(UR) {
  if (isWhitespace(UR))
    return false;

  var serverURL = "../cgi-bin/patweb69.pbl?reportno=4&remoteno=7" +
                  "&srchurno=" + UR;

  var returnValue = RSExecute(serverURL);
  if (returnValue.status == 0) {
    return (returnValue.return_value == '1')
  }

  return false;
}

// Remote script to get the Category Code with a matching HCS Equivalent value
function GetCatgCode(Category, HCSEquiv) {
  if (isWhitespace(Category) || isWhitespace(HCSEquiv))
    return "";

  var serverURL = "../cgi-bin/patweb69.pbl?reportno=4&remoteno=8" +
                  "&srchcatg=" + Category + "&srchhcsc=" + HCSEquiv;

  var returnValue = RSExecute(serverURL);
  if (returnValue.status == 0) {
    return returnValue.return_value;
  }
  return "";  // remote script failed
}

function DataDiff(UR, UPI, PersonID) {
  var datArrUR, datArrUPI;

  // Get UR patient data (array)
  datArrUR = GetURData(UR);

  // Get UPI patient data (array)
  datArrUPI = GetUPIData(UPI,PersonID);

  // Compare the data arrays
  if (PatientDatArrDiff(datArrUR,datArrUPI)) {
    return true;   // data arrays differ
  }
  else 
    return false;  // data arrays identical
}

function PatientSelect(UR, UPI, SName, GName, Sex, DOB) {
  // function stub (to be implemented on the template)
}

var sUpdateCookieName = GetCookieData('IBAUserName') + "-UPIDataUpdate";
function UPIShowDataDiff() {
  if (document.UpdateForm.ptcnuepm.value == "1") {  // using extended PMI ?
    if (!isWhitespace(document.UpdateForm.upinumbr.value) &&
        !isWhitespace(document.UpdateForm.upinspid.value) &&
        GetCookieData(sUpdateCookieName) == "1") {
      PatientLinkTo("patweb69.pbl",2,1,1,800,400);  // pop up DFrame with diffs
    }
  }
}

function SetUPIDataUpdateFlag() {
  SetCookie(sUpdateCookieName,"1");
}

function ClrUPIDataUpdateFlag() {
  ExpireCookiePath(sUpdateCookieName);
}

function GetGender(Value) {
  if (Value == undefined)
    return;

  if (Value == "I")
    return "Indeterminate";

  if (Value == "F")
    return "Female";

  if (Value == "M")
    return "Male";

  if (Value == "R")
    return "Other";

  if (Value == "U")
    return "Unknown";
}

function HideNextBtn() {
  var nextBtn = document.getElementById('spNextBtn');
  if (nextBtn != undefined) {
    nextBtn.style.display = "none";
  }
}

function SearchRedirect() {
  // Stub function to be implemented on template; redirect to search screen.
}

VALIDATE_MODE_LD = 0;  // Patient Load Mode
VALIDATE_MODE_EV = 1;  // Patient Event Mode

function ValidatePatUPI(TheForm, Mode) {
  if (TheForm == undefined || Mode == undefined)
    return true;

  if (TheForm.ptcnuepm.value != "1")
    return true;  // ignore if parameter not ON

  if (TheForm.d_newbornf != undefined && TheForm.d_newbornf.value == "1")
    return true;  // ignore if Newborn admission

  var sUR = TheForm.urnumber.value;
  var sMsg;

  if (isWhitespace(sUR) || (parseInt(sUR) == 0))
    return true;

  switch (Mode) {
    case VALIDATE_MODE_LD:
      sMsg = "Patient does not have a UPI.  " +
            "Link to the NSLHD to allocate a UPI.";
      break;

    case VALIDATE_MODE_EV:
      sMsg = "Patient does not have a UPI.  " +
            "Link to the NSLHD before creating a patient event.";
      break;
  }

  if (!HasUPI(sUR) && LHDConnect()) {
    var ans = confirm(sMsg)

    if (ans) {
      SearchRedirect();
      return false;
    }
  }

  return true;
}

function AddGender() {
  var p = document.search;

 if (p.ptcnhdps.value=="3") {
    intersexoption = document.createElement("option");
    intersexoption.text = "Other";
    intersexoption.value = "R";
    p.srchpsex.add(intersexoption);
 } else {
    intersexoption = document.createElement("option");
    intersexoption.text = "Intersex";
    intersexoption.value = "R";
    p.srchpsex.add(intersexoption);
 }
}

function SelectCatListCode(List, Code) {
  if (List == undefined || Code == undefined || isWhitespace(Code))
    return;

  for (var i =0 ; i < List.length; i++) {
    if (List[i].value.substr(0,3) == Code) {
      List.selectedIndex = i;
      return;
    }
  }
}

function PatientDatArrDiff(arr1, arr2) {
  if (arr1 == undefined || arr2 == undefined) return false;
  if (arr1 == null || arr2 == null) return false;

  var sValA, sValB;
  var i = arr1.length;

  if (i != arr2.length) return true;

  while (i--) {
    sValA = arr1[i].split("~")[0];
    sValB = arr2[i].split("~")[0];

    if (trim(sValA) !== trim(sValB)) return true;
  }

  return false;  // no diff
}
