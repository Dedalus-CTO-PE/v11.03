//jsVersion  : V11.03.00
//========================================================================
// Program   : watweb0103002.js
//
// Function  : Standard Functions Used in watweb0103002
//
// Version   : 
//
// V9.04.00 31.10.2005 Jill Habasque  CAR 58640
//          Create include
//========================================================================
OutputArray = new Array();  // Create Array to Store Rows of Table
OldArray = new Array();  // Create Array to Store Rows of Table
var WKey="";
function OutputTable(ReturnCode) {
  var WKey="";
  var Flag=0;
  AddOutputArray(ReturnCode)
}
function AddOutputArray(WKey) {
  OutputArray[OutputArray.length] = "<input type=hidden name=confarry" +
                                    " value='" + WKey + "'>"
}
function OutputDivision() {
    OutputString=""
    for (i=OutputArray.length-1;i>=0;i--) {
      OutputString+=OutputArray[i] }
    Results.innerHTML=OutputString
}
function RemoveTable(ReturnCode) {
  var WKey="";
  var Flag=0;
  OldArray=OutputArray
  OutputArray = new Array();  // Create Array to Store Rows of Table
  j=0;
  for (i=0;i<OldArray.length;i++) {
    x = ReturnCode.substring(0,20)
    y = OldArray[i].substring(40,60)
    if (x!=y) {
      OutputArray[j]=OldArray[i]
      j++ }
    else {
      Flag="1" }
  }
  if (Flag == "1") {
    OutputDivision() }
  else {
    AddOutputArray(ReturnCode)
    OutputDivision() }
}
function confirmBookings() {
  if (validateMandatory(SelectPeriod)) {

    if (isWhitespace(Results.innerHTML)) {
       alert("No Records Selected");
       return }
  document.SelectPeriod.updttype.value="C";
  document.SelectPeriod.submit();
  }
}
