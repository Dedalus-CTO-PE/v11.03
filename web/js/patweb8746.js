//jsVersion  : V11.03.01
//=============================================================================
// Program   : patweb8746.js
//
// Written   : 29/08/2016
//
// Function  : Standard Functions Used in PATWEB87  Report 46
//
// V10.08.00   29/08/2016  Don Nguyen   TSK 0312570
//             Created new
//=============================================================================
function ValidateEffectiveDates(RecType,RecVal,RecDRG,FromDate,ToDate) {
  var serverURL = "../cgi-bin/patweb87.pbl?reportno=47" + 
      "&drgrtype=" + RecType + "&drgkyval=" + RecVal + "&drgverno=" + RecDRG +
      "&drgfrdat=" + FromDate + "&drgtodat=" + ToDate;
  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0)
  {
    var retVal = returnValue.return_value;
    if (retVal == "0") {
      return true;  // PASS
    }
    else if (retVal == "1") {
      var errMsg = "An effective date already exists for the " +
                   "entered date range. \nPlease review and re-enter " +
                   "the correct date range!";
      alert(errMsg);
      return false;
    }
  }
}

function ValidateEffectiveDatesUpdate(RecType,RecVal,RecDRG,FromDate,ToDate) {
  var serverURL = "../cgi-bin/patweb87.pbl?reportno=47" +
      "&drgrtype=" + RecType + "&drgkyval=" + RecVal + "&drgverno=" + RecDRG +
      "&drgfrdat=" + FromDate + "&drgtodat=" + ToDate + "&drgupdat=1";
  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0)
  {
    var retVal = returnValue.return_value;
    if (retVal == "0") {
      return true;  // PASS
    }
    else if (retVal == "1") {
      var errMsg = "An effective date already exists for the " +
                   "entered date range. \nPlease review and re-enter " +
                   "the correct date range!";
      alert(errMsg);
      return false;
    }
  }
}


function GetDRGVersion(Code) {
  if (Code == undefined)
    return "";

  var dict = { "041":"4.1", "042":"4.2", "050":"5.0", "051":"5.1", "052":"5.2",
               "060":"6.0", "062":"6.2", "070":"7.0", "080":"8.0", "090":"9.0",
               "100":"10.0", "110":"11.0"};

  return dict[Code];
}
