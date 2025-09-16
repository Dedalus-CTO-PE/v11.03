//jsVersion  : V11.03.00
//-----------------------------------------------------------------
// Function : outweb0205002.js
//-----------------------------------------------------------------
// Function to check outstanding appointment request for a referral
//-----------------------------------------------------------------
function checkApptRequest(urnumber,admissno,ctcnckar,bookflag) {
  if (ctcnckar!="1") return;
  if (bookflag!="2") return;
  if (isWhitespace(urnumber)) return;
  if (isWhitespace(admissno)) return;
  var serverURL = "../cgi-bin/outweb02.pbl?reportno=9&updatety=17" +
                  "&urnumber="+urnumber.replace(/ /g,"+") +
                  "&admissno="+admissno.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|");
  if (returnValue.status==0) {
    if (ReturnValue[0] == 1) {    // appointment request exists
      var message = "Warning : The patient has outstanding Appointment" +
                    " Requests." +
                    "\n\nClick OK to view Appointment Requests or CANCEL" +
                    " to continue."
      ans=confirm(message)
      if (ans) {
        ApptRequestList(urnumber,admissno);
      }
    }
  }
}
function ApptRequestList(urnumber,admissno){
  linkUrl="outweb08.pbl?reportno=8&template=001" +
          "&urnumber=" + urnumber.replace(/ /g,"+") +
          "&admissno=" + admissno.replace(/ /g,"+") +
          "&refrlvis=" + admissno.replace(/ /g,"+") +
          "&bookflag=2";
  parent.location.href=linkUrl;
}
