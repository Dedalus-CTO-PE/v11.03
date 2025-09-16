//jsVersion  : V11.03.00
//========================================================================
// Program   : mrtweb0118.js
//
// Function  : Standard Functions Used in mrtweb0118 templates
//
// Version   : 
// V9.12.01 25.11.2009 Ebon Clements  CAR 200609
//          Fixed js error in SetLinks()
// V9.04.00 23.09.2005 Ebon Clements  CAR 56976
//          Created include
//
//========================================================================
OutputArray = new Array();  // Create Array to Store Rows of Table
OldArray = new Array();  // Create Array to Store Rows of Table
var MKey="";

function SetLinks() 
{
  var lnkadmis = parent.document.getElementsByName('lnkadmis');
  for (var i = 0; i < lnkadmis.length; i++) 
  {
    if (lnkadmis[i].checked == true)  RemoveTable(lnkadmis[i].value);
  }
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
    OutputArray[OutputArray.length] = "<input type=hidden name=lnkadmis" +
                                      " value='" + MKey + "'>"
}
