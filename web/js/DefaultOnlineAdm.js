//jsVersion  : V11.03.00
//========================================================================
// Program   : DefaultOnlineAdm.js
//  
// Written   : 14.08.2014 B.G.Ackland
//
// Function  : Default Online Preadmission from AJAX Call to Portal Database
//   Interface to Online Preadmission Database to 
//   Default Patient Admission Fields
//   This does a AJAX call to a stored procedure passing the AdmissionID.
//   The stored procedure will return a list of name value pairs
//   that will default into the registration form.A
//   The preadm01.php will return the valus in a JSON structure.
//   The name of the field is used to determine the form field name.
//
// Modifications : V10.05.03 28.01.2015 B.G.Ackland CAR 311929
//                           Enhance Select List Process
//                 V10.04.02 12.11.2014 B.G.Ackland CAR 307466
//                           Check that ptclm010 uses 6 character code
//                 V10.04.01 19.5.2014 B.G.Ackland
//                           Check that ptmis026 is on form before validation
//========================================================================
var patientObj;
function DefaultOnlineAdm(AdmissionID) {
  theURL="preadm01.php"+
        "?reportno=6" +
        "&admissionid="+AdmissionID +
        "&httprand="+Math.random();
  xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
    patientObj = eval("("+xmlHttp.responseText+")");
    ProcessResult()
  }
  else {
    alert('Error Connecting to Web Service');
  }
}
function DefaultOnlineThr(AdmissionID) {
  theURL="preadm01.php"+
        "?reportno=7" +
        "&admissionid="+AdmissionID +
        "&httprand="+Math.random();
  xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
    patientObj = eval("("+xmlHttp.responseText+")");
    ProcessResult()
  }
  else {
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
            if (fieldLabel=='ptclm010') {  /* Health Fund 6 Characters */
              for (j=0;j<el.options.length;j++) {
                if (trim(el.options[j].value.substr(0,6))==trim(defaultTo)) {
                  el.selectedIndex=j;matchedIt=true;
                }
              }
            } else {
              for (j=0;j<el.options.length;j++) {
                if (trim(el.options[j].value.substr(0,3))==trim(defaultTo)) {
                  el.selectedIndex=j;matchedIt=true;
                }
              }
            }
            if (!matchedIt) {
              for (j=0;j<el.options.length;j++) {
                if (trim(el.options[j].value)==trim(defaultTo)) {
                  el.selectedIndex=j;matchedIt=true;
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
                if (!isWhitespace(defaultTo)) {
                  alert(el.name+" - "+el.title+"\nInvalid Code - "+defaultTo);
                }
              }
            }
            break;
          }
        }
      }
    }
//  UpCase(document.AddForm.pmpmi084);
    valDoctorUnit();
    if (document.UpdateForm.ptmis026!=undefined) {
      validateCode(4,document.UpdateForm.ptmis026,document.UpdateForm.mbsdesc1)
    }
    if (document.UpdateForm.funddesc!=undefined) {
      validateHFT(20,document.UpdateForm.ptmis013,document.UpdateForm.ptmis014,
                     document.UpdateForm.funddesc,document.UpdateForm.tabldesc);
      if (isWhitespace(document.UpdateForm.funddesc.value)) {
        document.UpdateForm.ptmis014.value='';
        validateCode(16,document.UpdateForm.ptmis013,document.UpdateForm.funddesc);
        if (isWhitespace(document.UpdateForm.funddesc.value)) {document.UpdateForm.ptmis013.value='';}
      }
    }
}
