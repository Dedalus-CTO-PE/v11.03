//jsVersion  : V11.03.00
//========================================================================
// Program   : DefaultOnline.js
//  
// Written   : 14.08.2014 B.G.Ackland
//
// Function  : Default Online Preadmission from AJAX Call to MS SQL Database
//
// Modifications : V10.05.02 28.01.2015 B.G.Ackland CAR 311929
//                           Enhance Select List Process
//
//========================================================================
var patientObj;
function DefaultOnline(CallProcedure,AdmissionID,CallBack) {
  theURL="preadm01.php"+
        "?reportno=8" +
        "&admissionid="+AdmissionID +
        "&callproc="+CallProcedure +
        "&httprand="+Math.random();
  xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
    patientObj = eval("("+xmlHttp.responseText+")");
    ProcessResult();
    CallBack();
  } else {
    alert('Error Connecting to Web Service');
  }
}
function ProcessResult() {
  for (var i = 0; i < patientObj.length; i++) {
    for (fieldLabel in patientObj[i]) {
      if (document.getElementsByName(fieldLabel).length==1) {
        el=document.getElementsByName(fieldLabel)[0];
        defaultTo=patientObj[i][fieldLabel]
        switch (el.type) {
         case "hidden":
          el.value=defaultTo;
          break;
         case "textarea":
          el.value=defaultTo;
          break;
         case "text":
          el.value=defaultTo;
          break;
         case "select-one":
          matchedIt=false;
          for (j=0;j<el.options.length;j++) {
            if (trim(el.options[j].value.substr(0,3))==trim(defaultTo)) {
              el.selectedIndex=j;matchedIt=true;
            }
          }
          if (!matchedIt) {
            for (j=0;j<el.options.length;j++) {
              if (trim(el.options[j].value)==trim(defaultTo)) {
                el.selectedIndex=j;matchedIt=true;
              }
            }
          }
          if (!matchedIt) {
            for (j=0;j<el.options.length;j++) {
              if (trim(el.options[j].text.toUpperCase())==trim(defaultTo.toUpperCase())) {
                el.selectedIndex=j;matchedIt=true;
              }
            }
          }
          if (!matchedIt) {
            if (!isWhitespace(defaultTo)) alert(el.name+" - "+el.title+"\nInvalid Code - "+defaultTo)
          }
          break;
        }
      }
    }
  }
}
