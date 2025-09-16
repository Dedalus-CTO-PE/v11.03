//jsVersion  : V11.03.00
//========================================================================
// Program   : watweb0101002.js
//
// Function  : Standard Functions Used in watweb0101002 templates
//
// Version   : 
//             V9.02.01 29.05.2002  Ebon
//                      Created include for next buttons
//             V9.02.00 02.04.2002  Ebon Clements 
//                                  Created include
//
//========================================================================
function LimitReached() {
 alert("Limit Reached")
}
function NextRecordSet(key) {
  NextPage.innerHTML="<input type=button class=button value=Next " +
                     "onclick='NextRecords(\"" + key + "\");'>"
}
function NextRecords(Key) {
  document.SelectView.nextukey.value=Key;
  document.SelectView.submit();
}
