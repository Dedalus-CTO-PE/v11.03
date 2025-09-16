/*

   Interface to Online Preadmission Database to 
   Default Patient Registration Fields when a Theatre Booking is converted to a PreAdmission
   This does a AJAX call to a stored procedure passing the AdmissionID.
   The stored procedure will return a list of name value pairs
   that will default into the registration form.A
   The preadm01.php will return the valus in a JSON structure.
   The name of the field is used to determine the form field name.

*/
var patientObj;
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
            for (j=0;j<el.options.length;j++)
              if (trim(el.options[j].value.substr(0,3))==trim(defaultTo)) {el.selectedIndex=j;matchedIt=true;}
            if (!matchedIt) {
              for (j=0;j<el.options.length;j++)
                if (trim(el.options[j].value)==trim(defaultTo)) {el.selectedIndex=j;matchedIt=true;}
              if (!matchedIt) {
                if (!isWhitespace(defaultTo)) alert(el.name+" - "+el.title+"\nInvalid Code - "+defaultTo)
              }
            }
            break;
          }
        }
      }
    }
//  UpCase(document.AddForm.pmpmi084);
    valDoctorUnit();
    validateCode(4,document.UpdateForm.ptmis026,document.UpdateForm.mbsdesc1)
    validateHFT(20,document.UpdateForm.ptmis013,document.UpdateForm.ptmis014,
                   document.UpdateForm.funddesc,document.UpdateForm.tabldesc);
    if (isWhitespace(document.UpdateForm.funddesc.value)) {
      document.UpdateForm.ptmis014.value='';
      validateCode(16,document.UpdateForm.ptmis013,document.UpdateForm.funddesc);
      if (isWhitespace(document.UpdateForm.funddesc.value)) {document.UpdateForm.ptmis013.value='';}
    }
}
