//jsVersion  : V11.03.00
//========================================================================
// Program   : allweb0202010.js
//
// Function  : Standard Functions Used in allweb0202010 template
//
//========================================================================
//
//------------------------------------------------------------------------
//             Check booked future appointments against a referral
//------------------------------------------------------------------------
function CheckFutureBookings(referral,closedate,closetime) {
  if (isWhitespace(referral.value) || isWhitespace(closedate.value)) {
    return true;
  }
  var serverURL = "../cgi-bin/allweb02.pbl?reportno=6&updatety=6" +
                  "&admissno=" + referral.value.replace(/ /g,"+") +
                  "&alref007=" + closedate.value.replace(/ /g,"+")

  if (closetime != undefined) {
    serverURL += "&alref008=" + closetime.value.replace(/ /g,"+")
  }

  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|");
  if (returnValue.status==0) {
    if (ReturnValue[0] == 1) {    // Booked future appointments exits
      var message = "Error : Linked outpatient appointments exist " +
                    "for this referral after the proposed rejection date/time."
      alert(message)
      return false;
    }
  }
  return true;
}

