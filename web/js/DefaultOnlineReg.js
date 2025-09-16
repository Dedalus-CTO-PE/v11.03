//jsVersion  : V11.03.00
//========================================================================
// Program   : DefaultOnlineReg.js
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
//========================================================================
var patientObj;
var theForm;
var overwrite = new Array();
var UpdatePage=true;
// Address fields will bypass the readonly check
var bypass_fields = [ 'ptmas008', 'ptmas009', 'ptmas010', 'ptmas012' ];

// Highlight fields red
var red_fields = [ 'ptmas017', 'ptmas015', 'ptmas023', 'ptmsx045' ,'pmpmi016'];
var red_displayed = new Array();

// Some fields will be forced to update (no value comparison)
var force_update_fields = [ 'pmpmi113' ];  // Verified Address flag

function DefaultOnlineReg(AdmissionID) {
  theURL="preadm01.php"+
        "?reportno=4" +
        "&admissionid="+AdmissionID +
        "&httprand="+Math.random();
  xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
    patientObj = eval("("+xmlHttp.responseText+")");
    if (document.UpdateForm != null) {
      theForm=document.UpdateForm;
      ConfirmResults();
    } else {
      UpdatePage=false;
      theForm=document.AddForm;
      ProcessResult();
    }
  } else {
    alert('Error Connecting to Web Service');
  }
}

//Checks if there is a mismatch to prevent overwriting another patient
function ProcessContinue() {

 //Sets mismatch flags
 MisMatchRedWarning=false;
 GenderDOBMismatch=false;

 //Checks the values of the variables
 for (var i = 0; i < patientObj.length; i++) {

    for (fieldLabel in patientObj[i]) {

      if (!overwrite[fieldLabel]&&UpdatePage) continue;

      //Is the mismatch Gender, DOB, or Medicare
      if (!red_displayed[fieldLabel]&&UpdatePage) continue;

         //Flags if Gender or DOB
         if ((fieldLabel == "ptmas015") ||(fieldLabel == "ptmas017")) {
           GenderDOBMismatch=true;

         //Flags if Medicare
         } else {
           MisMatchRedWarning=true;
         }
         break
    }
  }

  //If Gender/DOB mismatch, alerts user and prevents continuing
  if(GenderDOBMismatch) {
    alert("Error: DOB or Gender of incoming patient record \n" +
          "does not match existing PMI Record \n" +
          "Unable to proceed.");
    return; 
  }

  //If gender mismatch, asks user if they wish to proceed
  if(MisMatchRedWarning) {
    if(!confirm("Warning Medicare Number Mismatch.\n" +
                "Are you sure you want to override?")) {
      return;
    }
  }

  PopUpScreen.style.display="none";
  ProcessResult();
}

function ProcessResult() {
  var checkBox;
  for (var i = 0; i < patientObj.length; i++) {
    for (fieldLabel in patientObj[i]) {
      if (!overwrite[fieldLabel]&&UpdatePage) continue; 
      if (document.getElementsByName(fieldLabel).length==1) {
        el=document.getElementsByName(fieldLabel)[0];
        defaultTo=patientObj[i][fieldLabel]
        switch (el.type) {
        case "checkbox":
          if (defaultTo=="Yes") {
            el.checked=true;
          }
          if (defaultTo=="No") {
            el.checked=false;
          }
          break;
        case "hidden":
          if (trim(el.value.toUpperCase())!=trim(defaultTo.toUpperCase())) {
            el.value=defaultTo;
          }
          break;
        case "textarea":
          el.value=defaultTo+el.value;
          break;
        case "text":
          if (trim(el.value.toUpperCase())!=trim(defaultTo.toUpperCase())) {
            el.value=defaultTo; 
          }
          break;
        case "select-one":
          matchedIt=false;
          for (j=0;j<el.options.length;j++)
            if (trim(el.options[j].value.substr(0,3))==trim(defaultTo)) {el.selectedIndex=j;matchedIt=true;}
          if (!matchedIt) {
            for (j=0;j<el.options.length;j++)
              if (trim(el.options[j].value)==trim(defaultTo)) {el.selectedIndex=j;matchedIt=true;}
            if (!matchedIt) {
              if (!isWhitespace(defaultTo)) alert(el.title+"\nInvalid Code - "+defaultTo)
            }
          }
          break;
        }
      }
    }
  }

  UpCase(theForm.pmpmi085);
  UpCase(theForm.ptmas005);
  UpCase(theForm.ptmas006);
  UpCase(theForm.ptmas008);
  UpCase(theForm.ptmas009);
  UpCase(theForm.ptmas010);
  UpCase(theForm.ptmas011);

  if (theForm.ptmas022 != undefined) {
    UpCase(theForm.ptmas022);
  }

  validateHFT(20,theForm.ptmas036,theForm.ptmas037,
                 theForm.funddesc,theForm.tabldesc);

  if (!checkMedicare(theForm.ptmas023)) theForm.ptmas023.value="";

  if (theForm.medicard != undefined) {  // Medicare Card dropdown exists
    if (!isWhitespace(theForm.ptmas023.value)) {  // Medicare Number exists
      theForm.medicard.value="1";  // patient with Medicare Card
    }
    else {
      theForm.medicard.value="0";  // patient without Medicare Card
    }
  }

  if (isWhitespace(theForm.funddesc.value)) {
    theForm.ptmas037.value='';
    validateCode(16,theForm.ptmas036,theForm.funddesc);
    if (isWhitespace(theForm.funddesc.value)) {theForm.ptmas036.value='';}
  }

  if (document.getElementById('ptcnuadv') != undefined && 
      document.getElementById('ptcnuadv').value == "1") {
    // Using Address Validation
    if (ShowVerifiedLabel != undefined) ShowVerifiedLabel();
  }
  else {
    valPostCode();
  }
}
function GetFieldValue(FieldLabel) {
  for (var i=0; i < patientObj.length; i++) {
    for (field in patientObj[i]) {
      if (field == FieldLabel) {
        return patientObj[i][field];  // return the value
      }
    }
  }
  return "";
}
// ==========================================================
//  Display the popup of changes to existing field
//  Loop though JSON structure and match to onscreen fields
// ===========================================================
function ConfirmResults() {
  FrameWidth=800;
  FrameHeight=600;

  cs="<table class=ResultsTable width=100% cellspacing=0 cellpadding=3>"+
     "<tr height=30><td class=HeadingCell>Field Title</td>"+
         "<td class=HeadingCell width=35%>Current Value</td>"+
         "<td class=HeadingCell width=35%>New Value</td>"+
         "<td class=HeadingCell width=10% style='text-align:center'>Accept</td></tr>"
  for (var i = 0; i < patientObj.length; i++) {
    for (fieldLabel in patientObj[i]) {
      overwrite[fieldLabel]=true;
      if (document.getElementsByName(fieldLabel).length==1) {
        if (fieldLabel == 'ptmas037') {  // Health Fund Level field
          // Skip if Health Fund is blank
          if (isWhitespace(GetFieldValue('ptmas036'))) continue;  // skip
        }

        el=document.getElementsByName(fieldLabel)[0];

        if (!ArrayValueExists(bypass_fields, el.name)) {  // bypassed field ?
          if (el.readOnly) { continue; }
        }

        defaultTo = patientObj[i][fieldLabel];

        if (isWhitespace(el.title)) {
          fieldTitle='<b>'+el.name+'</b>';
        } else {
          fieldTitle='<b>'+el.title+'</b>';
        }

        switch (el.type) {
          case "hidden":
            if (ArrayValueExists(force_update_fields, el.name)) {
              currentValue = el.value;

              cs += "<tr><td>" + fieldTitle  +"</td>"+
                        "<td>" + currentValue+"</td>"+
                        "<td>" + defaultTo   +"</td>"+
                        "<td style='text-align:center'>"+
                        "<input onclick=parent.toggleOverwrite('"+fieldLabel+"'); type=checkbox checked></td>"+
                    "</tr>";
            }
            else if (trim(el.value.toUpperCase()) != trim(defaultTo.toUpperCase())) {
              currentValue=el.value;
              cs += "<tr><td>" + fieldTitle  +"</td>"+
                        "<td>" + currentValue+"</td>"+
                        "<td>" + defaultTo   +"</td>"+
                        "<td style='text-align:center'>"+
                        "<input onclick=parent.toggleOverwrite('"+fieldLabel+"'); type=checkbox checked></td>"+
                    "</tr>";
            }
            break;

          case "textarea":
            currentValue=el.value;
            if (el.value!=defaultTo) {
               cs +="<tr><td>" + fieldTitle  +"</td>"+
                        "<td>" + currentValue+"</td>"+
                        "<td>" + defaultTo   +"</td>"+
                        "<td style='text-align:center'>"+
                        "<input onclick=parent.toggleOverwrite('"+fieldLabel+"'); type=checkbox checked></td>"+
                    "</tr>";
            }
            break;
          case "text":
            currentValue=el.value;
            if (trim(el.value.toUpperCase())!=trim(defaultTo.toUpperCase())) {
              if (ArrayValueExists(red_fields, el.name)) {  // Red highlight ?
               cs += "<tr class=Red>"
               red_displayed[fieldLabel]=true;
              } else {
               cs += "<tr>"
              }
              cs +="<td>" + fieldTitle  +"</td>"+
                        "<td>" + currentValue+"</td>"+
                        "<td>" + defaultTo   +"</td>"+
                        "<td style='text-align:center'>"+
                        "<input onclick=parent.toggleOverwrite('"+fieldLabel+"'); type=checkbox checked></td>"+
                    "</tr>";
            }
            break;
          case "select-one":
            currentValue=el.options[el.selectedIndex].text;
            newValue=defaultTo + "  (Invalid Code)"
            matchedIt=false;
            for (j=0;j<el.options.length;j++) {
              if (trim(el.options[j].value.substr(0,3))==trim(defaultTo)) {
                newValue=el.options[j].text;
                matchedIt=true;
              }
            }
            if (!matchedIt) {
              for (j=0;j<el.options.length;j++) {
                if (trim(el.options[j].value)==trim(defaultTo)) {
                  newValue=el.options[j].text;
                  matchedIt=true;
                }
              }
            }
            if (currentValue!=newValue) {
              if (!isWhitespace(newValue)) {
                   newValued = newValue; 
              } else {
                   newValued = '&nbsp;'; 
              }
              if (ArrayValueExists(red_fields, el.name)) {  // Red highlight ?
               cs += "<tr class=Red>"
               red_displayed[fieldLabel]=true;
              } else {
               cs += "<tr>"
              }
              cs +="<td>" + fieldTitle  +"</td>"+
                       "<td>" + currentValue+"</td>"+
                       "<td>" + newValue   +"</td>"+
                       "<td style='text-align:center'>"+
                       "<input onclick=parent.toggleOverwrite('"+fieldLabel+"'); type=checkbox checked></td>"+
                   "</tr>";
            }
            break;
        }
      }
    }
  }
  cs += "<tr><td colspan=4>&nbsp;</td></tr>"+
        "<tr><td colspan=4 style='text-align:center'>Click Ok to Continue with Updates</td></tr>"+
        "</table></body>"
  PopUpFrame.document.open()
  PopUpFrame.document.write( "" +
  '<html><head>' +
  '<link rel="stylesheet" href="../html/standard.css" type="text/css">' +
  '<link rel="stylesheet" href="../html/custom.css" type="text/css">' +
  '<script type="text/javascript" src="../js/Standard.js"></script>' +
  '<style>' +
  'table.ResultsTable {' +
  '  background-color:white;' +
  '}' +
  'table.ResultsTable td {' +
  '  border: 1px solid gray;' +  // light gray cell border
  '}' +
  '</style>' +
  '</head>' +
  '<body style="background-color:#ccc;margin:0;">' +
  '<div style="overflow:auto;height:' + (FrameHeight-10) + 'px;">' +
  '<span class=DFrameTitleBar ' +
  ' style="cursor:default">Fields to be Updated</span>' +
  '<span style="background-color:#ccc;text-align:center;margin:0;">' +
  cs +
  '<br>' +
  '<table cellspacing=1 cellpadding=1 border=0 align=center><tr>' +
  '<td><input type=button value=Ok class=button onclick="parent.ProcessContinue();"></td>' +
  '<td><input type=button value=Cancel class=button onclick="parent.history.back()"></td>' +
  '</tr></table>' +
  '</span></div>' +
  '</body></html>');

  PopUpFrame.document.close();

  MaxWidth=document.body.clientWidth;
  MaxHeight=document.body.clientHeight;

  if (FrameWidth>MaxWidth) {
    PopUpScreen.style.width=MaxWidth + "px";
  }
  else {
    PopUpScreen.style.width=FrameWidth + "px";
  }

  if (FrameHeight>MaxHeight) {
    PopUpScreen.style.height=MaxHeight + "px";
  }
  else {
    PopUpScreen.style.height=FrameHeight + "px";
  }

  PopUpScreen.style.top=(document.body.clientHeight - FrameHeight)/2 + "px";
  PopUpScreen.style.left=(document.body.clientWidth - FrameHeight)/2 + "px";
  PopUpScreen.style.display="";

  return;
}
function toggleOverwrite(fieldLabel) {
  if (overwrite[fieldLabel]) {
    overwrite[fieldLabel]=false;
  } else {
    overwrite[fieldLabel]=true;
  }
}
