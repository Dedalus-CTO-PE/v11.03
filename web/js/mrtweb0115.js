//jsVersion  : V11.03.00
//========================================================================
// Program   : mrtweb0115.js
//
// Function  : Standard Functions Used in mrtweb0115 templates
//
// Version   : 
// V9.04.00 07.07.2005 Ebon Clements  CAR 62220
//          Created include
//
//========================================================================
OutputArray = new Array();  // Create Array to Store Rows of Table
OldArray = new Array();  // Create Array to Store Rows of Table
var MKey="";
function init() 
{
  var mrreckey = parent.document.getElementsByName('mrreckey'); 
  for (var i = 0; i < mrreckey.length; i++) RemoveTable(mrreckey[i].value);
} 

function RemoveTable(ReturnCode) {
  var MKey="";
  var Flag=0;
  OldArray=OutputArray
  OutputArray = new Array();  // Create Array to Store Rows of Table
  j=0;
  for (i=0;i<OldArray.length;i++) {
    x = ReturnCode.substring(0,20)
    y = OldArray[i].substring(40,60)
    if (x!=y) {
      OutputArray[j]=OldArray[i]
      j++
    }
    else {
      Flag="1"
    }
  }
  if (Flag == "1") {
    OutputDivision()
  }
  else {
    AddOutputArray(ReturnCode)
    OutputDivision()
  }
}
function OutputDivision() {
    OutputString=""
    for (i=0; i<OutputArray.length; i++) {
      OutputString+=OutputArray[i]
    }
    Results.innerHTML=OutputString
}
function AddOutputArray(MKey) {
    OutputArray[OutputArray.length] = "<input type=hidden name=mrreckey" +
                                      " value='" + MKey + "'>"
}
function PrintLabels() {
  document.UpdateForm.submit();
}
