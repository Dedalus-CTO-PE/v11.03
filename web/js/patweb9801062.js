//jsVersion  : V11.03.00
//========================================================================
OutputArray = new Array();        // Create Array to Store Rows of Table
OldArray = new Array();           // Create Array to Store Rows of Table
function UpdateArray(ReturnCode,ValdCode,ReturnFlag,UnknownFlag) {
  if (ValdCode=="1" && ReturnFlag && UnknownFlag!="1") {
     alert("Warning: TAC claim No is already valid");
  }
  var TACKey="";
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
  if(OutputArray.length==50) {     // max of 50 can be updated at once
   alert("Warning: A maximum of 50 visits can be updated in one transaction");
  }
}
function OutputDivision() {
    OutputString=""
    for (i=OutputArray.length-1;i>=0;i--) {
      OutputString+=OutputArray[i]
    }
    Results.innerHTML=OutputString
}
function AddOutputArray(TACKey) {
    OutputArray[OutputArray.length] = "<input type=hidden name=updtacno" +
                                      " value='" + TACKey + "'>"
}
function UpdateRecords() {
  if(OutputArray.length=="0") {
    alert("No TAC Visits have been selected to update.");
    return;
  }
  if (validateMandatory(UpdateForm)) {
   document.UpdateForm.submit();
  }
}
