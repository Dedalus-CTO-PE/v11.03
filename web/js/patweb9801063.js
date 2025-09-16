//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb9801063.js
//
// Function  : Standard Functions Used in patweb9801063 templates
//
// Version   : V9.02.00 17.03.2003  J.Tan
//
//========================================================================
OutputArray = new Array();        // Create Array to Store Rows of Table
OldArray = new Array();           // Create Array to Store Rows of Table
function UpdateArray(ReturnCode) {
  var WCOKey="";
  var Flag=0;
  OldArray=OutputArray
  OutputArray = new Array();      // Create Array to Store Rows of Table
  j=0;
  for (i=0;i<OldArray.length;i++) {
    x = ReturnCode.substring(0,8)
    y = OldArray[i].substring(40,48)
    if (x!=y) {
      OutputArray[j]=OldArray[i]
      j++
    }
    else {
      Flag="1"                     // Remove record from array
    }
  }
  if (Flag == "1") {
    OutputDivision()
  }
  else {
    AddOutputArray(ReturnCode)    // Add new record to array
    OutputDivision()
  }
}
function OutputDivision() {
    OutputString=""
    for (i=OutputArray.length-1;i>=0;i--) {
      OutputString+=OutputArray[i]
    }
    Results.innerHTML=OutputString
}
function AddOutputArray(WCOKey) {
    OutputArray[OutputArray.length] = "<input type=hidden name=updwcono" +
                                      " value='" + WCOKey + "'>"
}
function UpdateRecords() {
  if(OutputArray.length=="0") {
    alert("No WC Visits have been selected to update.");
    return;
  }
  if (validateMandatory(UpdateForm)) {
   document.UpdateForm.submit();
  }
}
