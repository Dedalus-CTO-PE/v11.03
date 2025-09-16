//jsVersion  : V11.03.00
//========================================================================
// Program   : mehweb02.js
//
// Written   : 01/05/2006
//
// Function  : Functions Used in mehweb0201XXX.html 
//
// Version   : 
//
// V9.06.00  01/05/2006  J.Tan        CAR 90040
//           Created Include
//========================================================================
// REPORT 1 - MHINC Extract
//========================================================================
function UpdateSelections(ExtractKey) {
  mhinc001=ExtractKey.replace(/ /g,"+")
  LinkUrl="mehweb02.pbl?reportno=1&template=3&mhinc001="+mhinc001
  location.href=LinkUrl
}
function SubmitForm(theForm) {
  if (confirm("Selection of MHINC will now be scheduled."+ 
              " Please wait...")) {
    if (validateMandatory(theForm)) {
      theForm.submit();
    }
  }
}
function DeleteSelections(ExtractKey) {
  mhinc001=ExtractKey.replace(/ /g,"+")
  LinkUrl="mehweb02.pbl?reportno=1&template=3&mhinc001="+mhinc001
  location.href=LinkUrl
}

function PrintBList(extrctid) {
  URL="mehweb02.pbl?reportno=01&template=004&pmsbi001=" + extrctid;
  location.href=URL
}

