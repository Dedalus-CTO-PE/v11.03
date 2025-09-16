//jsVersion  : V11.03.00
//========================================================================
// Program   : DefaultOnlineNok.js
//  
// Written   : 14.08.2014 B.G.Ackland
//
// Function  : Default Online Preadmission from AJAX Call to MS SQL Database
//   Interface to Online Preadmission Database to 
//   Default Patient Registration Fields
//   This does a AJAX call to a stored procedure passing the AdmissionID.
//   The stored procedure will return a list of name value pairs
//   that will default into the registration form.A
//   The preadm01.php will return the valus in a JSON structure.
//   The name of the field is used to determine the form field name.
//
//
//========================================================================
var patientObj;
var concessionCards;
function DefaultOnlineNok(AdmissionID) {
  theURL="preadm01.php"+
        "?reportno=5" +
        "&admissionid="+AdmissionID +
        "&httprand="+Math.random();
  xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
    patientObj = eval("("+xmlHttp.responseText+")");
    ProcessResults()
  }
  else {
    alert('Error Connecting to Web Service');
  }
}
function DefaultOnlineCon(AdmissionID) {
  theURL="preadm01.php"+
        "?reportno=5" +
        "&admissionid="+AdmissionID +
        "&httprand="+Math.random();
  xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
  //alert(xmlHttp.responseText)
    patientObj = eval("("+xmlHttp.responseText+")");
//    ProcessResults()
    updateContacts();
  }
  else {
    alert('Error Connecting to Web Service');
  }
}
function ProcessResults() {
  updateConcession();
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
              for (j=0;j<el.options.length;j++) {
                if (trim(el.options[j].text.toUpperCase())==trim(defaultTo.toUpperCase())) {
                  el.selectedIndex=j;matchedIt=true;
                } 
              }
            }
            if (!matchedIt) {
              if (!isWhitespace(defaultTo)) alert(el.title+"\nInvalid Code - "+defaultTo)
            }
          }
          break;
        }
      }
    }
  }
  UpCase(document.UpdateForm.ptmas049);
  UpCase(document.UpdateForm.ptmas050);
  UpCase(document.UpdateForm.ptmas051);
  UpCase(document.UpdateForm.ptmas052);
  UpCase(document.UpdateForm.ptmsx010);
  UpCase(document.UpdateForm.ptmsx011);
  UpCase(document.UpdateForm.ptmsx012);
  UpCase(document.UpdateForm.ptmsx013);
  UpCase(document.UpdateForm.ptmsx019);
  UpCase(document.UpdateForm.ptmsx020);
  UpCase(document.UpdateForm.ptmsx021);
  UpCase(document.UpdateForm.ptmsx022);
}
function updateConcession(cardType,cardCode,cardExpiry) {
  var Left  = (getClientWidth() - 640)/2;
  var theURL="patweb07.pbl?reportno=4&template=6&urnumber="+PatientURN;
  for (var i=1;i<9;i++) {
    if (patientObj[0]['CONCESSIONCARD0'+i]!='') {
      if (typeof sjogprtl != 'undefined' && sjogprtl == "1") {
        SetCookie("sjogwaPortalCOOKIE","");
      }
      DFrameLink(theURL,50,Left,640,480)
      break;
    }
  }
}
function updateContacts() {
  var Left  = (getClientWidth() - 900)/2;
  var theURL="patweb07.pbl?reportno=6&template=8&urnumber="+PatientURN;
  DFrameLink(theURL,50,Left,900,480)
}

