//jsVersion  : V11.03.00
//------------------------------------------------------------
// Function: OutExtraTemplates.js
//
// Modifications: V9.04.00 19/01/2005 Ebon Clements   CAR 56988
//                         Added replace space with plus in url
//                         11/11/2002 Sylvek Litewka  SRF 22721
//                         Created script.
//------------------------------------------------------------

//------------------------------------------------------------
// chkExtraTempl - check for Outpatients Extra templates
//
// Operation: Checks whether to redirect to Outpatient Extra
//            templates. If extra Booking/Attendance template
//            is to be used then redirect value on the given 
//            form is set.
//
// Parameters: CurForm  - form on which redirect value is to be set
//             Type     - type of extra template to check for, 
//                        B = Booking, A = Attendance
//             ClSesKey - Key to the Clinic Session Booking file
//             Urnumber - current patient's U/R number
//             NextScrn - (OPTIONAL) holds the code for the next 
//                        screen to be displayed. For Booking process
//                        this could be WorkCover, TAC or Veteran Affairs.
//                        For Attendance the next screens could be 
//                        Outcome-Discharge and Outcome-Reappoint.
//
// It returns 'true' if redirect value has been set.
//
// NOTE: The 'casekeys' are appended to the redirect value by the 
//       Server.
//-------------------------------------------------------------
function chkExtraTempl(CurForm,Type,ClSesKey,Urnumber) {
  var NextScrn="";
  if (chkExtraTempl.arguments.length == 5)
    NextScrn=chkExtraTempl.arguments[4];

  var serverURL = "../cgi-bin/outweb02.pbl?reportno=9&updatety=7&tmpltype=" +
                  Type + "&clseskey=" + ClSesKey.replace(/ /g,"+");
  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    if (ReturnValue[0] == 1) {    // Redirect to extra template
      CurForm.redirect.value=ReturnValue[1] + ".pbl?reportno=" +
               ReturnValue[2] + "&template=" + ReturnValue[3] +
               "&urnumber=" + Urnumber + "&nextscrn=" + NextScrn;
      return true;
    }
  }
}
