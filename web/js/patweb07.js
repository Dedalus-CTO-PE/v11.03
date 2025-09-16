//jsVersion  : V11.03.02
//========================================================================
// Program   : patweb07.js
//
// Function  : Standard Functions Used in patweb07 templates
//
//========================================================================
//
// Admission / Master Details
//
//------------------------------------------------------------
// Report 4 functions
//------------------------------------------------------------

//Validate NDIS Number
function validateNDISNumber(NDISNumb,State) {

  //Checks if NDIS number matches requirements
  if (!checkNdisNumber(NDISNumb,State)) {

     var errorMsg = "NDIS Identifier - Must be numeric - " + 
                    "First two characters must be 43";

     //If the state is Victoria
     if (State == "3") {
       errorMsg += "\nunless ID Number is not known, then enter 999999999";
     }

     alert(errorMsg);
     NDISNumb.select();
     NDISNumb.focus();
     return false;
  }
  return true;
}

