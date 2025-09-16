//jsVersion  : V11.03.06
//-----------------------------------------------------------------------------y

// Address fields will bypass the readonly check
var bypass_fields = [ 'ptmas008', 'ptmas009', 'ptmas010', 'ptmas012',
                      'ptmas005', 'pmpmi084', 'pmpmi085', 'ptmas015',
                      'ptmas017', 'ptmas011' ];

// Some fields will be forced to update (no value comparison)
var force_update_fields = [ 'pmpmi113' ];  // Verified Address flag

// Some fields don't want to be auto updated. (Overwrite checkbox unticked)
var no_auto_update_fields = [ 'ptmis020' ];  // Verified Address flag

// Map cgi names
var CgiMapNameEadm = {"optoutsm":"d_ptmsx050", "optoutem":"d_ptmas045" ,
                      "d_ptmsx050":"optoutsm" };

function OnlinePreadmission() {
  var admisnid = getQueryString('admisnid').replace(/\+/g," ").substring(0,20);
  if (!isWhitespace(admisnid)) {
    window.setTimeout(function () { DefaultOnlineReg(admisnid); }, 200);
  }
}
//------------------------------------------------------------------------------
function DefaultOnlineReg(AdmissionID) {

  if (typeof AdmissionID == 'undefined' || AdmissionID == null) {
    return;
  }

  var theURL="patweb14.pbl"+
        "?reportno=7&websrvno=1" +
        "&admisnid="+AdmissionID;

  var xmlHttp= createHttpObject(); // Firefox, Opera 8.0+, Safari

  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();

  if (xmlHttp.responseText != "" && xmlHttp.status == 200) {
    patientObj = eval("("+xmlHttp.responseText+")");

    if (document.UpdateForm != null) {
    // some add forms are named UpdateForm

      if (typeof document.UpdateForm.eautoadd != 'undefined') {
        theForm=document.AddForm;
        ProcessResult(patientObj);

        if (typeof document.UpdateForm.ptmis013 != 'undefined') {
          findHFunddesc(); 
        }
      }
      else {
        theForm=document.UpdateForm;
        ConfirmResults(patientObj); 
      }
    }
    else {  // AddForm
      theForm=document.AddForm;

      // UPI?
      if (theForm.ptcnuepm != undefined && theForm.ptcnuepm.value == "1") {

        // Side by Side compare (eAdmission & UPI data)
        var theURL="patweb69.pbl?reportno=4&remoteno=9" + 
                   "&srchupin=" + theForm.upinumbr.value +
                   "&srchnpid=" + theForm.upinspid.value;

        var returnValue = RSExecute(theURL);
        if (returnValue.status==0) {
          upiObj = eval("(" + returnValue.return_value + ")");
          ConfirmResultsUPI(patientObj, upiObj);  
        }
      }
      else {
        ProcessResult(patientObj);
      }
    } 
  }
  else {
    alert('Error Connecting to Web Service'); 
  }
}
//------------------------------------------------------------------------------
// Populates template fields with new values no confirmation screen
//  uses AddForm as key
//------------------------------------------------------------------------------
function ProcessResult(obj) {

  for (var i = 0; i < obj.length;i++) {
      if (typeof obj[i] == 'undefined') {
         continue; }

      if (CgiMapNameEadm[obj[i].name] != undefined) {
        obj[i].name = CgiMapNameEadm[obj[i].name];
      }

      var el = document.getElementsByName(obj[i].name);
      if (typeof el == 'undefined') {
         continue; }
      el = el[0];
      var eAdmissionValue =  typeof obj[i].value != 'undefined' ? obj[i].value : "";
      if (el != null) {
         switch(el.type) {
           case "text":
           case "hidden":
             textField(el,eAdmissionValue);
             break;
           case "textarea":
             break;
           case "select-one":
             selectionField(el,eAdmissionValue);
             break;
           case "checkbox":
             checkboxField(el,eAdmissionValue) ;
             break;
           default:
             break;
         }
      }
  }

  if(document.getElementById('pmpmi059')) {
    //Adds the GP name to the field if there is one
    ValidateHCP(18,4,document.getElementById('pmpmi059'),
                     document.getElementById('genpname'));
  }

  if(document.getElementById('pmpmi060')) {
    //Adds the practice details, including the GP
    if (!isWhitespace(document.getElementById('pmpmi060').value)) {
 
      ValidateHCG(70,0,document.getElementById('pmpmi060'),
                       document.getElementById('pmpmi059'),
                       document.getElementById('genpprac'),
                       document.getElementById('pmpmi061'));
    }
  }


  if (document.getElementById('ptcnuadv') != undefined && 
      document.getElementById('ptcnuadv').value == "1") {
    // Using Address Validation
    if (ShowVerifiedLabel != undefined) {
      window.setTimeout(function () { ShowVerifiedLabel(); }, 200);
    }
  }
}
//------------------------------------------------------------------------------
function textAreaField(el,defaultValue) {
  defaultValue = trim(defaultValue);
  el.value = defaultValue.toUpperCase();

  if (el.onblur) { 
     ReFocusTo=document.activeElement;
     el.focus();
     el.blur();
     ReFocusTo.focus();
  }
}
//------------------------------------------------------------------------------
function textField(el,defaultValue) {
  if (el.name != "pmpmi061" && el.name != "ptvis030") {
    defaultValue = trim(defaultValue);
  }

  if (!defaultValue.match(/ /g," ") && !el.title.match(/Valid to/)) {
     if (el.title.match(/Date/g)) {
        var yyyy = defaultValue.substr(0,4);
        var mm = defaultValue.substr(4,2);
        var dd = defaultValue.substr(6,2);
        var mnth =
        ["","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"];
        defaultValue = dd+" "+mnth[(parseInt(mm,10))]+" "+yyyy;
        el.value = defaultValue;
     } else {
        el.value = defaultValue.toUpperCase(); }
  } else {
     if (el.title.match(/Valid to/g)) {
               var yyyy = defaultValue.substr(4,4);
               var mm = defaultValue.substr(2,2);
               var dd = defaultValue.substr(0,2);
               mnth = ["","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"];
               defaultValue = dd+" "+mnth[parseInt(mm,10)]+" "+yyyy;
        el.value = defaultValue; }
     else {
     el.value = defaultValue.toUpperCase(); } }

     if (!el.title.match(/suburb/gi)) {
       if(el.onblur) {
         ReFocusTo=document.activeElement;
         el.focus();
         el.blur();
         ReFocusTo.focus();
       }
     }
}
//------------------------------------------------------------------------------
function selectionField(el,defaultValue){
  var matchedIt = false;
  var generatedCatCode = false;
  if(el.name=="ptmas019") {
    generatedCatCode = true;
  }
  //try find it by code
  for (var j = 0; j < el.options.length; j++) {

      if (el.options[j].value.length == 63 || generatedCatCode == true) {
        if (trim(el.options[j].value.substr(0,3)) == trim(defaultValue)) {
           el.selectedIndex = j;
           matchedIt = true;
           break; }
      } else {
        if (trim(el.options[j].value) == trim(defaultValue)) {
           el.selectedIndex = j;
           matchedIt = true;
           break; }
      }
  }
  //if no match is found try find it by description
  if (!matchedIt) {
     for (var j = 0; j < el.options.length; j++) {
        if (trim(el.options[j].innerHTML).toUpperCase() ==
            trim(defaultValue).toUpperCase()) {
           el.selectedIndex = j;
           matchedIt = true;
           break; }
     }
  }

  if (IECompatibilityMode) {
    el.fireEvent("onchange");
  } else {
    var event = new Event('change');
    el.dispatchEvent(event);
  }

  //still no match - display warning
  if (!matchedIt) {
     if (!isWhitespace(defaultValue)) {
        alert(el.title+"\nInvalid Code - "+ defaultValue); }
  }
}
function checkboxField(el,defaultValue) {
  if(trim(defaultValue) == "1") {
    el.checked=true;
  } else {
    el.checked=false;
  }
}
//------------------------------------------------------------------------------
// Displays the popup confirmation screen for fields to be updated on a template
// Takes obj, which is the data brought across from the eAdmission
//------------------------------------------------------------------------------
function ConfirmResults(obj) {
  var found = false;

  //Builds the dFrame header
  cs="<div style='overflow:auto;height:90%;'>" +
     "<table width=100% cellspacing=0 cellpadding=2 border=0 " +
     " style='overflow:auto'>"+
     "<tr style="+
     "'font-weight:bold;background-image:url(../images/heading-cell.gif)'>"+
     "<td class=HeadingCell width=25%>Field Title</td>" +
     "<td class=HeadingCell>Current Value</td>" +
     "<td class=HeadingCell>New Value</td>" +
     "<td class=HeadingCell width=5% nowrap>Overwrite?</td></tr>";

  //Goes through each of the fields in the object
  for (var i = 0; i < obj.length; i++) {

     //Prevents an error if a field is undefined
     if (typeof obj[i] == 'undefined') {
       continue;
     }

     if (CgiMapNameEadm[obj[i].name] != undefined) {
       obj[i].name = CgiMapNameEadm[obj[i].name];
     }

     //Gets the matching field related to the field on the eAdmission
     //Skips if it is undefined
     var el = document.getElementsByName(obj[i].name);
     if (typeof el == 'undefined') {
       continue;
     }

     el = el[0];

     if (el != null) {
        if (!ArrayValueExists(bypass_fields, el.name)) {  // bypassed field ?
          if (el.readOnly) { continue; }
        }

        if (el.className.match(/IgnoreOldContacts/)) {
          continue;
        }

        if (el.className.match(/IgnorePortalField/)) {
          continue;
        }

        //Ternary Operator - Checks if the value is undefined, amd makes it ""
        //if it is otherwise it just sets the value.
        defaultTo = typeof obj[i].value != 'undefined' ? obj[i].value : "";

        //Builds the page row by row
        if (!isWhitespace(el.title)) {
           fieldTitle = '<b>' + el.title + '</b>';
        }
        else {
           fieldTitle = '&nbsp;';
        }

        //Checks the type of input based on the value retrieved from the
        //template
        switch (el.type) {

          //Is the input a hidden field
          case "hidden":
            if (ArrayValueExists(force_update_fields, el.name)) {
              currentValue = el.value;

              cs += "<tr>" +
                    "<td>" + fieldTitle + "</td>" +
                    "<td>" + currentValue + "</td><td>" + defaultTo + "</td>"+
                    "<td><input name='wp_" + el.name + "'" +
                    " id='wp_" + el.name + "'" +
                    " value='" + el.value + "|" + defaultTo + "'" +
                    " type='checkbox' checked=true /></td>" + 
                    "</tr>";
              found = true;
              break;
            }

          //Is it a text field?
          case "text":
            defaultTo = defaultTo.toUpperCase();
            if (!isWhitespace(el.title)) {
               currentValue = el.value;
            }
            else {
               currentValue = '&nbsp;';
            }

            //Is the field a date field with the date in one direction
            if (el.title.match(/Valid to/)) {
               var yyyy = defaultTo.substr(4,4);
               var mm = defaultTo.substr(2,2);
               var dd = defaultTo.substr(0,2);
               mnth = ["","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"];
               defaultTo = dd+" "+mnth[parseInt(mm,10)]+" "+yyyy;
            }

            //Is the field a date field with the date in other direction
            if (el.title.match(/Date/) && !el.title.match(/Valid to/)) {
               var yyyy = defaultTo.substr(0,4);
               var mm = defaultTo.substr(4,2);
               var dd = defaultTo.substr(6,2);
               mnth = ["","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"];
               defaultTo = dd+" "+mnth[parseInt(mm,10)]+" "+yyyy;
            }

            if (trim(el.value.toUpperCase())!=trim(defaultTo.toUpperCase())) {
              cs += "<tr><td>" + fieldTitle +"</td><td>"+
                    currentValue+"</td><td>"+ defaultTo+"</td>"+
                    "<td><input name='wp_"+el.name+
                    "' id='wp_"+el.name+"' value=\""+el.value+
                    "|"+defaultTo+"\""+
                    " type='checkbox' ";
              if (!ArrayValueExists(no_auto_update_fields, el.name)) {
                cs += "checked=true";
              }
              cs += " /></td></tr>";
              found = true;
            }
            break;

          //Is the field a 'Text Area' field
          case "textarea":
            defaultTo=defaultTo.toUpperCase();
            if (!isWhitespace(el.title)) {
               currentValue = el.value;
            }
            else {
               currentValue = '&nbsp;';
            }

            if (el.value!=defaultTo) {
               cs += "<tr><td>" + fieldTitle +"</td><td>"+
                     currentValue+"</td><td>"+
                     defaultTo+"</td>"+
                     "<td><input name='wp_"+el.name+
                     "' id='wp_"+el.name+"' value='"+el.value+
                     "|"+defaultTo+"'"+
                     " type='checkbox' checked=true /></td></tr>";
               found =true;
            }
            break;

          //If the input is a select input field
          case "select-one":

            //Retrieves the text of the current select value
            currentValue = el.options[el.selectedIndex].text;

            //Sets up the variable to hold the new value
            //Assunes that it is invalid
            newValue=defaultTo + "  (Invalid Code)"
            matchedIt=false; 
            CodeLength=trim(defaultTo).length;

            if (CodeLength<3) {
              CodeLength=3;
            }

            //Goes through each of the options. If the value matches
            //the matched flag is set
            for (var j=0; j < el.options.length; j++) {  // Original Case
                if (trim(el.options[j].value.substr(0,CodeLength))==
                    trim(defaultTo)) {
                   newValue=el.options[j].text;
                   matchedIt=true;
                   break; }
            }
            defaultTo=defaultTo.toUpperCase();
            for (var j=0; j < el.options.length; j++) { // Upper Case
                if (trim(el.options[j].value.substr(0,CodeLength))==
                   trim(defaultTo)) {
                   newValue=el.options[j].text;
                   matchedIt=true;
                   break; }
            }

            //Checks if the text matches in case the code is invalid
            if (!matchedIt) {
               for (var j=0; j < el.options.length; j++) {
                   if (trim(el.options[j].innerHTML)==trim(defaultTo)) {
                      newValue=el.options[j].text;
                      matchedIt=true;
                      break; }
               }
            }

            //Displays if the values don't match
            if (currentValue != newValue) {
               if (!isWhitespace(newValue)) {
                  newValued = newValue; }
               else {
                  newValued = '&nbsp;'; }
               cs +='<tr><td>' + fieldTitle +'</td><td>'+
                    currentValue+'</td><td>'+
                    newValued+'</td>'+
                    '<td><input name="wp_'+el.name+'" id="wp_'+el.name+
                    '" value="'+currentValue+'|'+newValue+'"'+
                    ' type="checkbox" checked=true /></td></tr>';
               found =true;
            }
            break;
//
          //If the input is a checkbox. Sets the value to either yes/no
          case "checkbox":
            if(trim(defaultTo) == "1") {
               defaultTo = "Yes";
               defaultTo_V = "1";
            } else {
              defaultTo = "No";
              defaultTo_V = "0";
            }
            if(el.checked == true) {
              currentValue = "Yes";
              currentValue_V = "1";
            } else {
              currentValue = "No";
              currentValue_V = "0";
            }
            if((el.checked == false && defaultTo == "Yes") ||
               (el.checked == true && defaultTo != "No")) {
              
               cs += "<tr><td>" + fieldTitle +"</td><td>"+
                     currentValue+"</td><td>"+
                     defaultTo+"</td>"+
                     "<td><input name='wp_"+el.name+
                     "' id='wp_"+el.name+"' value='"+currentValue_V+
                     "|"+defaultTo_V+"'"+
                     " type='checkbox' checked=true /></td></tr>"
            
            }
            break;
//
        }
     }
  }

  //Sets the end of the popup
  cs += "<tr><td colspan=4>&nbsp;</td></tr>"+
        "<tr><td colspan=4 style='text-align:center'><b>" +
        "Click Ok to Continue with Updates</b></td></tr>";

  //Builds the HTML for the popup
  if (found == true) {
    var contents =
       '<html><head>' +
       '<link rel="stylesheet" href="../html/standard.css" type="text/css">' +
       '<link rel="stylesheet" href="../html/custom.css" type="text/css">' +
       '<script type="text/javascript" src="../js/Standard.js"></script>' +
       '</head>'+
       '<body onload="PageLoad(event)" style="margin:0;">' +
       '<span class="DFrameTitleBar">' +
       '<img align="right" alt="Exit" class="MenuIcon" ' +
       ' src="../images/ExitIcon.gif" onclick="DFrameExit();">' +
       'Fields to be Updated</span>' +
       '<span id=PageBodySection>' +
       cs +
       '<tr><td colspan=4 style="text-align:center"><br />' +
       '<input type=button value=Ok class=button onclick=' +
       '"parent.ProcessContinue();">&nbsp;' +
       '<input type=button value=Cancel class=button onclick=' +
       '"parent.cancelBtn();">' +
       '</td></tr></table></div></span>' +
       '</body></html>';

    var PopUpFrame = document.getElementById('PopUpFrame');

    if (PopUpFrame.contentDocument) {
      PopUpFrame.contentDocument.open();
      PopUpFrame.contentDocument.write(contents);
      PopUpFrame.contentDocument.close();
    }
    else {
      PopUpFrame.contentWindow.document.open();
      PopUpFrame.contentWindow.document.write(contents);
      PopUpFrame.contentWindow.document.close();
    }

    //Sets the dimensions of the Popup Frame
    MaxWidth=document.body.clientWidth;
    MaxHeight=document.body.clientHeight;
    FrameWidth=640;
    FrameHeight=480;

    if (FrameWidth>MaxWidth) {
      PopUpScreen.style.width=MaxWidth; }
    else {
      PopUpScreen.style.width=FrameWidth; }

    if (FrameHeight>MaxHeight) {
      PopUpScreen.style.height=MaxHeight; }
    else {
      PopUpScreen.style.height=FrameHeight; }

    PopUpScreen.style.top=(document.body.clientHeight)/10;
    PopUpScreen.style.left=(document.body.clientWidth)/4;
    PopUpScreen.style.display="";

    var w = parseInt(PopUpScreen.style.width,10);
    var h = parseInt(PopUpScreen.style.height,10);

    return;
  }
}
//------------------------------------------------------------------------------
// Processes cancel button from confirmation screen
//------------------------------------------------------------------------------
function cancelBtn() {
  if (eAdmCookie!="unknown" && eAdmCookie!=undefined) {
    var theForm = (document.UpdateForm != undefined) ? document.UpdateForm : document.AddForm;

    theForm.showflag.value = "1";
    getTop().content.location.href = eAdmCookie;
  }
  else if (getTop().content.PatientLinks != undefined) {
    PatientLinkTo('patweb98.pbl',1,1,0);
  }
  else {
    PopUpScreen.style.display="none";
  }
}
//------------------------------------------------------------------------------
// Populates update template with selected values only from confirmation screen
//------------------------------------------------------------------------------
function ProcessContinue() {

  ProcessResult2();

  var formName = document.UpdateForm;
  if (typeof formName == 'undefined') {
     formName = document.AddForm; }

  if (typeof formName.d_ptmas036 !== 'undefined' ||
      typeof formName.d_ptmis013 !== 'undefined') {
     findHFunddesc(); }

  if(formName.name == "UpdateForm") {

    surName = PopUpFrame.document.getElementById("wp_ptmas005");
    fstName = PopUpFrame.document.getElementById("wp_pmpmi084");

    //Checks if there is a surname, and it has been checked
    if (surName != null) {
      if (surName.checked == true) {

        //Flags a possible alias
        checkAlias01();    
      }
    }
    
    //Checks if there is a first name, and it has been checked
    if (fstName != null) {
      if (fstName.checked == true) {

        //Flags a possible alias
        checkAlias01();    
      }
    }
  }

  if(formName.name == "AddForm") {
    if(formName.ptcnuepm != undefined ) {
      if(formName.ptcnuepm.value == "1") {
        if (typeof findFund == "function") {
          findFund();
        }
      }
    } 
  }

  //Adds the GP name to the field if there is one
  if(document.getElementById('pmpmi059') != undefined ) {
    ValidateHCP(18,4,document.getElementById('pmpmi059'),
                     document.getElementById('genpname'));

  }
  //Adds the practice details, including the GP
  if(document.getElementById('pmpmi060') != undefined ) {
    if (!isWhitespace(document.getElementById('pmpmi060').value)) {

      ValidateHCG(70,0,document.getElementById('pmpmi060'),
                       document.getElementById('pmpmi059'),
                       document.getElementById('genpprac'),
                       document.getElementById('pmpmi061')); 
    }
  }

  //Removes the pop-up screen
  PopUpScreen.style.display="none";
  PopUpFrame.document.close();

  if(document.getElementById('ptcnepis')) {
    if(document.getElementById('episcard')) {
      if(document.getElementById('episcard').value=="1") {
        updateConcession();
      }
    }
  }
  
  if (document.getElementById('ptcnuadv') != undefined && 
      document.getElementById('ptcnuadv').value == "1") {
    // Using Address Validation
    if (ShowVerifiedLabel != undefined) {
      window.setTimeout(function () { ShowVerifiedLabel(); }, 200);
    }
  }
}
//------------------------------------------------------------------------------
// Populates template fields with new values from confirmation screen
//  uses UpdateForm as key
//------------------------------------------------------------------------------
function ProcessResult2() {

  //Creates an array containing all of the inputs
  var arrayCheckList = PopUpFrame.document.getElementsByTagName('input');


  for (var i = 0; i < arrayCheckList.length; i++) {
      if (arrayCheckList[i].type == 'checkbox') {
         var elName = arrayCheckList[i].name.replace(/wp_/g,"");

         //Has the inputs been selected?
         if (arrayCheckList[i].checked == true) {

            //Gets the element that corresponds with the input
            var elementMapping = document.getElementById(elName);
            if (elementMapping == null) {
               elementMapping = document.getElementsByName(elName);
               if (elementMapping.length > 0) {
                  elementMapping = elementMapping[0]; }
               else {
                  elementMapping = null; }
            }

            //Checks if the value is undefined. If not, it splits the value
            var eAdmissionValue =
                    typeof arrayCheckList[i].value.split("|")[1] != 'undefined'
                                   ? arrayCheckList[i].value.split("|")[1] : "";

            //Converts Date
            if (elementMapping.title.match(/Valid to/g)) {
                var dd = eAdmissionValue.substr(0,2);
                var mon = eAdmissionValue.substr(3,3);
                var yyyy = eAdmissionValue.substr(7,4);
              if (mon=="Jan" || mon=="JAN" || mon=="jan") mm="01"
              if (mon=="Feb" || mon=="FEB" || mon=="feb") mm="02"
              if (mon=="Mar" || mon=="MAR" || mon=="mar") mm="03"
              if (mon=="Apr" || mon=="APR" || mon=="apr") mm="04"
              if (mon=="May" || mon=="MAY" || mon=="may") mm="05"
              if (mon=="Jun" || mon=="JUN" || mon=="jun") mm="06"
              if (mon=="Jul" || mon=="JUL" || mon=="jul") mm="07"
              if (mon=="Aug" || mon=="AUG" || mon=="aug") mm="08"
              if (mon=="Sep" || mon=="SEP" || mon=="sep") mm="09"
              if (mon=="Oct" || mon=="OCT" || mon=="oct") mm="10"
              if (mon=="Nov" || mon=="NOV" || mon=="nov") mm="11"
              if (mon=="Dec" || mon=="DEC" || mon=="dec") mm="12"

              eAdmissionValue = dd+mm+yyyy
            }

            //Checks what type of input
            if (elementMapping != null) {
               switch(elementMapping.type) {
                 case "text":
                 case "hidden":
                   textField(elementMapping,eAdmissionValue) ;
                   break;
                 case "select-one":
                   var matchedIt=false;
                   selectionField(elementMapping,eAdmissionValue);
                   break;
                 case "checkbox":
                   checkboxField(elementMapping,eAdmissionValue) ;
                   break;
                 default:
                   break;
               }
            }
         }
      }
   }
}
//------------------------------------------------------------------------------
// redirect on Cancel depending if eAdmission Cookie is set or not
//------------------------------------------------------------------------------
function chkeAdmCancel() {
  if (document.UpdateForm.admisnid != undefined) {
     if (isWhitespace(document.UpdateForm.admisnid.value)) {
         PatientLinkTo('patweb98.pbl',1,1,0); }
     else {
         if (eAdmCookie!="unknown") {
            document.UpdateForm.showflag.value = "1";
            getTop().content.location.href=eAdmCookie; 
         } else {
            theURL="patweb14.pbl?reportno=04&template=002&viewtype=1";
            eAdmDVCookie=GetContentCookie("eAdmissionDefaultView");
            if (eAdmDVCookie!="unknown") {
              theURL+="&deftview=" + eAdmDVCookie;
            }
            getTop().content.location.href=theURL;
         }
     }
  } else {
     PatientLinkTo('patweb98.pbl',1,1,0); }
}
//------------------------------------------------------------------------------
// Go Back on Cancel depending if eAdmission Cookie is set or not
//------------------------------------------------------------------------------
function chkeAdmGoback() {
   if (document.AddForm.admisnid != undefined) {
      if (isWhitespace(document.AddForm.admisnid.value)) {
          history.go(-1); }
      else {
         if (eAdmCookie!="unknown") {
            document.AddForm.showflag.value = "1";
            getTop().content.location.href=eAdmCookie; 
         } else {
            theURL="patweb14.pbl&reportno=04&template=002&viewtype=1";
            eAdmDVCookie=GetContentCookie("eAdmissionDefaultView");
            if (eAdmDVCookie!="unknown") {
              theURL+="&deftview=" + eAdmDVCookie;
            }
            getTop().content.location.href=theURL;
         }
      }
   } else {
      history.go(-1); }
}
//------------------------------------------------------------------------------
// New contacts 
//------------------------------------------------------------------------------
var patientObj;
var concessionCards;
var upiObj;

//------------------------------------------------------------------------------
// remove eAdmission Cookie and set variable for processing
//------------------------------------------------------------------------------
var eAdmCookie;
function eAdmPreList() {
  eAdmCookie=GetContentCookie("eAdmission");
  if (eAdmCookie!="unknown") {
      ExpireCookiePath("eAdmission");
      return; }
}
function OnlinePreadmissionContact() {
  var admisnid = getQueryString('admisnid').replace(/\+/g," ").substring(0,20);
  if (!isWhitespace(admisnid)) {
      DefaultOnlineContact(admisnid); }
}
function DefaultOnlineContact(AdmissionID) {
  if (typeof AdmissionID == 'undefined' || AdmissionID == null) {
     return; }
  var theURL="patweb14.pbl"+
        "?reportno=7&websrvno=1" +
        "&admisnid="+AdmissionID;
  var xmlHttp= createHttpObject(); // Firefox, Opera 8.0+, Safari

  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.responseText != "" && xmlHttp.status == 200) {
// alert(xmlHttp.responseText);
      patientObj = eval("("+xmlHttp.responseText+")");

      theForm=document.ViewForm;
      if (theForm.ptcnuepm != undefined && theForm.ptcnuepm.value == "1") {
        var theURL="patweb69.pbl?reportno=4&remoteno=10" +
                   "&srchupin=" + theForm.upinumbr.value;

        var returnValue = RSExecute(theURL);
        if (returnValue.status==0) {
          upiObj = eval("(" + returnValue.return_value + ")");
        }
      }

      eAdmCookieContact=GetCookieData("eAdmCookieContact");
      if(eAdmCookieContact!="unknown"){
         updateContacts();                       // load contacts page 
         ExpireCookiePath("eAdmCookieContact");
      } else {
         updateConcession();
      }
  }
  else {
    alert('Error Connecting to Web Service');
  }
}

function updateContacts() {
  var Width = 970;
  var Height = 480;
  var Left  = (document.body.clientWidth-Width)/2;
  var Top = (document.body.clientHeight-Height)/2;

  var theURL="patweb07.pbl?reportno=6&template=8&urnumber="+PatientURN;
  DFrameLink(theURL,Top,Left,Width,Height);
}
function updateConcession() {
  var Width = 970;
  var Height = 480;
  var Left  = (document.body.clientWidth-Width)/2;
  var Top = (document.body.clientHeight-Height)/2;

  var theURL="patweb07.pbl?reportno=4&template=6&urnumber="+PatientURN;
  DFrameLink(theURL,Top,Left,Width,Height);
}

//
// UPI processing...
//
function ObjExists(name, obj) {
  for (var i = 0; i < obj.length; i++) {
    if (name == obj[i].name)
      return true;
  }

  return false;
}

function GetObjValue(name, obj) {
  for (var i = 0; i < obj.length; i++) {
    if (name == obj[i].name)
      return obj[i].value;
  }

  return "";
}

//------------------------------------------------------------------------------
// Displays the popup confirmation screen for fields to be updated on a template
// Uses data from eAdmission (obj) & UPI (objUPI).
//------------------------------------------------------------------------------
function ConfirmResultsUPI(obj, objUPI) {
  var found = false;
  cs="<div style='overflow:auto;height:90%;'>" +
     "<table width=100% cellspacing=0 cellpadding=2 border=0 style='overflow:auto'>"+
     "<tr style="+
     "'font-weight:bold;background-image:url(../images/heading-cell.gif)'>"+
     "<td class=HeadingCell width=25%>Field Title</td>" +
     "<td class=HeadingCell>Current Value</td>" +
     "<td class=HeadingCell>New Value</td>" +
     "<td class=HeadingCell width=5% nowrap>Overwrite?</td></tr>";

  for (var i = 0; i < obj.length; i++) {
    if (typeof obj[i] == 'undefined') {
      continue;
    }

    if (CgiMapNameEadm[obj[i].name] != undefined) {
      obj[i].name = CgiMapNameEadm[obj[i].name];
    }

    var el = document.getElementsByName(obj[i].name);
    if (typeof el == 'undefined') {
      continue;
    }

    el = el[0];
    if (el != null) {
      if (el.className.match(/IgnoreOldContacts/)) {
        continue;
      }

      if (el.className.match(/IgnorePortalField/)) {
        continue;
      }

      defaultTo = typeof obj[i].value != 'undefined' ? obj[i].value : "";
      currentValue = GetObjValue(obj[i].name, objUPI);

      if ( !ObjExists(obj[i].name, objUPI) ) {  // not returned in UPI data
        currentValue = el.value;  // use value on the screen instead of UPI
      }

      if (obj[i].name == "ptmas023") {  // Medicare #
        currentValue = currentValue.substr(0,10);  // exclude Reference Number
      }

      
      if (!isWhitespace(el.title)) {
         fieldTitle='<b>'+ el.title + '</b>';
      }
      else {
         fieldTitle='&nbsp;';
      }

      switch (el.type) {
        case "hidden":

        case "text":
          defaultTo = defaultTo.toUpperCase();

          if (isWhitespace(currentValue)) {
            currentValue = '&nbsp;';
          }

          if (el.title.match(/Valid to/)) {
            var yyyy = defaultTo.substr(4,4);
            var mm = defaultTo.substr(2,2);
            var dd = defaultTo.substr(0,2);
            mnth = ["","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"];
            defaultTo = dd+" "+mnth[parseInt(mm,10)]+" "+yyyy;
            currentValue = SetDateDDMMMYYYY(currentValue);
          }

          if (el.title.match(/Date/) && !el.title.match(/Valid to/)) {
            var yyyy = defaultTo.substr(0,4);
            var mm = defaultTo.substr(4,2);
            var dd = defaultTo.substr(6,2);
            mnth = ["","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"];
            defaultTo = dd+" "+mnth[parseInt(mm,10)]+" "+yyyy;
            currentValue = SetDateDDMMMYYYY(currentValue);
          }

          if (trim(el.value.toUpperCase()) != trim(defaultTo.toUpperCase())){
            cs += "<tr><td nowrap>" + fieldTitle + "</td><td>" +
                  el.value + "</td><td>" + defaultTo + "</td>" +
                  "<td><input name='wp_" + el.name +
                  "' id='wp_" + el.name + "' value='" + el.value +
                  "|" + defaultTo + "'" +
                  " type='checkbox' checked=true /></td></tr>";
            found = true;
          }
          break;

        case "textarea":
          defaultTo=defaultTo.toUpperCase();
          if (!isWhitespace(el.title)) {
            currentValue = el.value;
          }
          else {
            currentValue = '&nbsp;';
          }
          if (el.value!=defaultTo) {
            cs += "<tr><td>" + fieldTitle +"</td><td>"+
                  currentValue+"</td><td>"+
                  defaultTo+"</td>"+
                  "<td><input name='wp_"+el.name+
                  "' id='wp_"+el.name+"' value='"+el.value+
                  "|"+defaultTo+"'"+
                  " type='checkbox' checked=true /></td></tr>";
            found =true;
          }
          break;
          
        case "select-one":
          newValue = defaultTo + "  (Invalid Code)"
          matchedIt = false; 
          CodeLength = trim(defaultTo).length;
          if (CodeLength < 3) {
            CodeLength = 3;
          }

          if (obj[i].name == "pmpmi001") {  // Interpreter Required
            switch (currentValue) {
              case 'N':
                currentValue = '0';
                break;
              case 'Y':
                currentValue = '1';
                break;
              default:
                currentValue = ' ';
                break;
            }

            defaultTo = trim(defaultTo);
            if (defaultTo == 'true') {
              defaultTo = '1';
              newValue = '1';
            }
            else if (defaultTo == 'false') {
              defaultTo = '0';
              newValue = '0';
            }
          }


          if ( !ObjExists(obj[i].name, objUPI) ) {  
            currentValue = el.options[el.selectedIndex].text;
          }
          else {
            if (currentValue.indexOf("~") != -1) {
              currentValue = currentValue.split("~")[0];
            }
            else {
              for (var j=0; j < el.options.length; j++) {
                if (trim(el.options[j].value.substr(0,CodeLength)) ==
                    trim(currentValue)) {
                  currentValue=el.options[j].text;
                  break;
                }
              }
            }
          }

          
          for (var j=0; j < el.options.length; j++) {  // Original Case
            if (trim(el.options[j].value.substr(0,CodeLength)) == 
                trim(defaultTo)) {
              newValue=el.options[j].text;
              matchedIt=true;
              break;
            }
          }

          defaultTo = defaultTo.toUpperCase();
          for (var j=0; j < el.options.length; j++) { // Upper Case
            if (trim(el.options[j].value.substr(0,CodeLength)) == 
                trim(defaultTo)) {
              newValue=el.options[j].text;
              matchedIt=true;
              break;
            }
          }

          if (!matchedIt) {
            for (var j=0; j < el.options.length; j++) {
              if (trim(el.options[j].innerHTML) == trim(defaultTo)) {
                newValue=el.options[j].text;
                matchedIt=true;
                break;
              }
            }
          }

          if (currentValue != newValue) {
            if (!isWhitespace(newValue)) {
              newValued = newValue;
            }
            else {
              newValued = '&nbsp;';
            }
            cs += "<tr><td nowrap>" + fieldTitle +"</td><td>"+
                  currentValue+"</td><td>"+
                  newValued+"</td>"+
                  "<td><input name='wp_"+el.name+"' id='wp_"+el.name+
                  "' value='"+currentValue+"|"+newValue+"'"+
                  " type='checkbox' checked=true /></td></tr>";
            found = true;
          }
          break;
//
        case "checkbox":
          if(trim(defaultTo) == "1") {
             defaultTo = "Yes";
             defaultTo_V = "1";
          } else {
            defaultTo = "No";
            defaultTo_V = "0";
          }
          if(el.checked == true) {
            currentValue = "Yes";
            currentValue_V = "1";
          } else {
            currentValue = "No";
            currentValue_V = "0";
          }
          if((el.checked == false && defaultTo == "Yes") ||
             (el.checked == true && defaultTo != "No")) {

             cs += "<tr><td>" + fieldTitle +"</td><td>"+
                   currentValue+"</td><td>"+
                   defaultTo+"</td>"+
                   "<td><input name='wp_"+el.name+
                   "' id='wp_"+el.name+"' value='"+currentValue_V+
                   "|"+defaultTo_V+"'"+
                   " type='checkbox' checked=true /></td></tr>"
          }
          break;
//
        }
     }
  }

  cs += "<tr><td colspan=4>&nbsp;</td></tr>"+
        "<tr><td colspan=4 style='text-align:center'><b>" +
        "Click Ok to Continue with Updates</b></td></tr>";

  if (found == true) {
    var contents =
       '<html><head>' +
       '<link rel="stylesheet" href="../html/standard.css" type="text/css">' +
       '<link rel="stylesheet" href="../html/custom.css" type="text/css">' +
       '<script type="text/javascript" src="../js/Standard.js"></script>' +
       '</head><body onload="PageLoad(event)" style="margin:0;">' +
       '<span class="DFrameTitleBar">' +
       '<img align="right" alt="Exit" class="MenuIcon" ' +
       ' src="../images/ExitIcon.gif" onclick="DFrameExit();">' +
       'Fields to be Updated</span>' +
       '<span id=PageBodySection>' +
       cs +
       '<tr><td colspan=4 style="text-align:center"><br />' +
       '<input type=button value=Ok class=button onclick=' +
       '"parent.ProcessContinue();">&nbsp;' +
       '<input type=button value=Cancel class=button onclick=' +
       '"parent.cancelBtn();">' +
       '</td></tr></table></div></span></body></html>';

    var PopUpFrame = document.getElementById('PopUpFrame');

    if (PopUpFrame.contentDocument) {
      PopUpFrame.contentDocument.open();
      PopUpFrame.contentDocument.write(contents);
      PopUpFrame.contentDocument.close();
    }
    else {
      PopUpFrame.contentWindow.document.open();
      PopUpFrame.contentWindow.document.write(contents);
      PopUpFrame.contentWindow.document.close();
    }

    MaxWidth=document.body.clientWidth;
    MaxHeight=document.body.clientHeight;
    FrameWidth=640;
    FrameHeight=480;

    if (FrameWidth>MaxWidth) {
      PopUpScreen.style.width=MaxWidth; }
    else {
      PopUpScreen.style.width=FrameWidth; }

    if (FrameHeight>MaxHeight) {
      PopUpScreen.style.height=MaxHeight; }
    else {
      PopUpScreen.style.height=FrameHeight; }

    PopUpScreen.style.top=(document.body.clientHeight)/10;
    PopUpScreen.style.left=(document.body.clientWidth)/4;
    PopUpScreen.style.display="";

    var w = parseInt(PopUpScreen.style.width,10);
    var h = parseInt(PopUpScreen.style.height,10);

    if (!IEBrowser) {
      PopUpFrame = document.getElementById('PopUpFrame');
      PopUpFrame.style.width = w - 10 + "px";
      PopUpFrame.style.height = h - 10 + "px";
    }

    return;
  }
}
function searcheAdmission() {
  linkurl="patweb14.pbl?reportno=04&template=003"
  if(document.getElementById("eadm_priority")) {
     linkurl+="&filtflag=" + document.getElementById("eadm_priority").value;
  }
  var December25="";
  if(document.getElementById("eadm_date")) {
    December25=document.getElementById("eadm_date").value.substr(0,4) +
               "1225";
  }
  if(!isWhitespace(December25)) {
    linkurl+="&viewtype=0&&lastdate=" + December25
  }
  if(document.getElementById("eadm_surname")) {
     linkurl+="&filtsnam=" +
              trim(document.getElementById("eadm_surname").value);
  }
  Left=(document.body.clientWidth-1280)/2;
  DFrameLink(linkurl,0,Left,1280,600);
}
