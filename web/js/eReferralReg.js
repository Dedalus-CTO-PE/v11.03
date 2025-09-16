//jsVersion  : V11.03.08
//------------------------------------------------------------------------------
// redirect on Cancel depending if eReferral Cookie is set or not
//------------------------------------------------------------------------------

// Address fields will bypass the readonly check
var bypass_fields = [ 'ptmas008', 'ptmas009', 'ptmas010', 'ptmas012',
                      'ptmas005', 'pmpmi084', 'pmpmi085', 'ptmas015',
                      'ptmas017', 'ptmas011' ];

// Some fields will be forced to update (no value comparison)
var force_update_fields = [ 'pmpmi113' ];  // Verified Address flag

//CGI Mapping
var CgiMapNameEref = {"opdea038":"d_opdea038"}

function chkeRefCancel() {
  if (document.UpdateForm.erefrlid != undefined) {
     if (isWhitespace(document.UpdateForm.erefrlid.value)) {
         PatientLinkTo('patweb98.pbl',1,1,0); }
     else {
         if (eRefCookie!="unknown") {
            document.UpdateForm.showflag.value = "1";
            getTop().content.location.href=eRefCookie; }
     }
  } else {
     PatientLinkTo('patweb98.pbl',1,1,0); }
}
//------------------------------------------------------------------------------
// remove eReferral Cookie and set variable for processing
//------------------------------------------------------------------------------
var eRefCookie;
function eRefPreList() {
  eRefCookie=GetContentCookie("eReferral");
  if (eRefCookie!="unknown") {
      ExpireCookiePath("eReferral");
      return; }
}
//------------------------------------------------------------------------------
// Go Back on Cancel depending if eReferral Cookie is set or not
//------------------------------------------------------------------------------
function chkeRefGoback() {
   if (document.AddForm.erefrlid != undefined) {
      if (isWhitespace(document.AddForm.erefrlid.value)) {
          history.go(-1); }
      else {
         if (eRefCookie!="unknown") {
            document.AddForm.showflag.value = "1";
            getTop().content.location.href=eRefCookie; }
      }
   } else {
      history.go(-1); }
}
function OnlineReferral() {
  var erefrlid = getQueryString('erefrlid').replace(/\+/g," ").substring(0,20);
  if (!isWhitespace(erefrlid)) {
    window.setTimeout(function () { DefaultOnlineReferral(erefrlid); }, 200);
  }
}
var patientObj;
var upiObj;

function DefaultOnlineReferral(ReferralID) {
  if (typeof ReferralID == 'undefined' || ReferralID == null) {
    return;
  }

  var theURL="comweb10.pbl"+
        "?reportno=3&remoteno=4" +
        "&erefrlid="+ReferralID;

  var xmlHttp= createHttpObject(); // Firefox, Opera 8.0+, Safari

  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();

  if (xmlHttp.responseText != "" && xmlHttp.status == 200) {
    patientObj = eval("("+xmlHttp.responseText+")");

    if (document.UpdateForm != null) {
// because some add forms are named UpdateForm 
      if (typeof document.UpdateForm.eautoadd != 'undefined') {
        theForm=document.AddForm;
        ProcessResultRef(patientObj);

        if (typeof document.UpdateForm.ptmis013 != 'undefined') {
          findHFunddesc() 
        }
      } else {
        theForm=document.UpdateForm;
        ConfirmResultsRef(patientObj);
      }
    }
    else {
      theForm=document.AddForm;

      // UPI?
      if (theForm != undefined && theForm.ptcnuepm != undefined 
          && theForm.ptcnuepm.value == "1" && theForm.upinumbr != undefined) {
        // Side by Side compare (eAdmission & UPI data)
        var upiObj;
        var theURL="patweb69.pbl?reportno=4&remoteno=9" +
                   "&srchupin=" + theForm.upinumbr.value +
                   "&srchnpid=" + theForm.upinspid.value;

        var returnValue = RSExecute(theURL);
        if (returnValue.status==0) {
          upiObj = eval("(" + returnValue.return_value + ")");
          ConfirmResultsRefUPI(patientObj, upiObj);
        }
      }
      else {
        ProcessResultRef(patientObj);
      }
    }
  } else {
    alert('Error Connecting to Web Service');
  }
}

function textFieldRef(el,defaultValue) {
  if (el.name != "pmpmi061") {
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
  if(el.onblur) {
     ReFocusTo=document.activeElement;
     el.focus(); 
     el.blur(); 
     ReFocusTo.focus();
  }
}
function selectionFieldRef(el,defaultValue){
  var matchedIt = false;
  var generatedCatCode = false;
  if(el.name=="ptmas019") {
    generatedCatCode = true;
  }
  //try find it by code
  for (var j = 0; j < el.options.length; j++) {
      if (el.options[j].value.length == 63 || generatedCatCode == true ||
         (el.name=="wattr011" && el.options[j].value.length == 45)) {
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
//------------------------------------------------------------------------------
// Displays the popup confirmation screen for fields to be updated on a template
//------------------------------------------------------------------------------
function ConfirmResultsRef(obj) {
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
         continue; }

      if (document.getElementById("erefmaprf") != undefined) {
        if (CgiMapRef[obj[i].name] != undefined) {
          obj[i].name = CgiMapRef[obj[i].name];
        }
      }

      if (document.getElementById("erefmapbk") != undefined) {
        if (CgiMapBook[obj[i].name] != undefined) {
          obj[i].name = CgiMapBook[obj[i].name];
        }
      }

      if (document.getElementById("erefmapwt") != undefined) {
        if (CgiMapWat[obj[i].name] != undefined) {
          obj[i].name = CgiMapWat[obj[i].name];
        }
      }

     var el = document.getElementsByName(obj[i].name);
     if (typeof el == 'undefined') {
          continue; }

     el = el[0];
 
     if (el != null) {
        if (!ArrayValueExists(bypass_fields, el.name)) {  // bypassed field ?
          if (el.readOnly) { continue; }
        }

        defaultTo= typeof obj[i].value != 'undefined'
                   ? obj[i].value : "" ;
        if (!isWhitespace(el.title)) {
           fieldTitle='<b>'+el.title+'</b>'; }
        else {
           fieldTitle='&nbsp;'; }

        switch (el.type) {
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

          case "text":
            defaultTo=defaultTo.toUpperCase();
            if (!isWhitespace(el.title)) {
               currentValue = el.value; }
            else {
               currentValue = '&nbsp;'; }
            if (el.title.match(/Valid to/)) {
               var yyyy = defaultTo.substr(4,4);
               var mm = defaultTo.substr(2,2);
               var dd = defaultTo.substr(0,2);
               mnth = ["","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"];
               defaultTo = dd+" "+mnth[parseInt(mm,10)]+" "+yyyy;
            }
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
                    "' id='wp_"+el.name+"' value='"+el.value+
                    "|"+defaultTo+"'"+
                    " type='checkbox' checked=true /></td></tr>";
              found =true; }
            break;

          case "textarea":
            defaultTo=defaultTo.toUpperCase();
            if (!isWhitespace(el.title)) {
               currentValue = el.value; }
            else {
               currentValue = '&nbsp;'; }
            if (el.value!=defaultTo) {
               cs += "<tr><td>" + fieldTitle +"</td><td>"+
                     currentValue+"</td><td>"+
                     defaultTo+"</td>"+
                     "<td><input name='wp_"+el.name+
                     "' id='wp_"+el.name+"' value='"+el.value+
                     "|"+defaultTo+"'"+
                     " type='checkbox' checked=true /></td></tr>";
               found =true; }
            break;

          case "select-one":
            currentValue=el.options[el.selectedIndex].text;
            newValue=defaultTo + "  (Invalid Code)"
            matchedIt=false;
            CodeLength=trim(defaultTo).length;
            if(CodeLength<3) {
              CodeLength=3;
            }
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
            if (!matchedIt) {
               for (var j=0; j < el.options.length; j++) {
                   if (trim(el.options[j].innerHTML)==trim(defaultTo)) {
                      newValue=el.options[j].text;
                      matchedIt=true;
                      break; }
               }
            }
            if (currentValue!=newValue) {
               if (!isWhitespace(newValue)) {
                  newValued = newValue; }
               else {
                  newValued = '&nbsp;'; }
               cs +="<tr><td>" + fieldTitle +"</td><td>"+
                    currentValue+"</td><td>"+
                    newValued+"</td>"+
                    "<td><input name='wp_"+el.name+"' id='wp_"+el.name+
                    "' value='"+currentValue+"|"+newValue+"'"+
                    " type='checkbox' checked=true /></td></tr>";
               found =true;
             }
             break;
        }
     }
  }

  cs += "<tr><td colspan=4>&nbsp;</td></tr>"+
        "<tr><td colspan=4 style='text-align:center'><b>" +
        "Click Ok to Continue with Updates</b></td></tr>";
  visit_type=getURTitle();

  if (found == true) {
    var contents =
       '<html><head>' +
       '<link rel="stylesheet" href="../html/standard.css" type="text/css">' +
       '<link rel="stylesheet" href="../html/custom.css" type="text/css">' +
       '<script type="text/javascript" src="../js/Standard.js"></script>' +
       '</head><body onload="PageLoad(event)" style="margin:0;">' +
       '<span class="DFrameTitleBar" id="DFrameTitleBar">' +
       '<img align="right" alt="Exit" class="MenuIcon" src="../images/ExitIcon.gif" onclick="DFrameExit();">' +
       'Fields to be Updated ' + visit_type +
       '</span><span id=PageBodySection>' +
       cs +
       '<tr><td colspan=4 style="text-align:center"><br />' +
       '<input type=button value=Ok class=button onclick=' +
       '"parent.ProcessContinueRef();">&nbsp;' +
       '<input type=button value=Cancel class=button onclick=' +
       '"parent.cancelBtnRef();">' +
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

    return;
  }
}
function getURTitle() {
  var heading = " ";
 
  if (document.getElementById("urnumber") &&
      !isWhitespace(document.getElementById("urnumber").value)) {
    heading = " for U/R " + trim(document.getElementById("urnumber").value);
  }

  if (document.getElementById("erefmaprf") != undefined) {
    if (document.getElementById("admissno") != undefined) {
      heading += " Referral Number " +
                 document.getElementById("admissno").value;
    }
  } else {
    if (document.getElementById("casekeys") != undefined) {
      if (!isWhitespace(document.getElementById("casekeys").value)) {
        heading += " Waiting List Event Code " +
                   document.getElementById("casekeys").value.substr(8);
      }
    }
  }

  return heading;
}
//------------------------------------------------------------------------------
// Processes cancel button from confirmation screen
//------------------------------------------------------------------------------
function cancelBtnRef() {
  if (eRefCookie!="unknown" && eRefCookie!=undefined) {
    var theForm = (document.UpdateForm != undefined) ? document.UpdateForm : document.AddForm;

    theForm.showflag.value = "1";
    getTop().content.location.href = eRefCookie;
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
function ProcessContinueRef() {
  ProcessResult2Ref();
  var formName = document.UpdateForm;
  if (typeof formName == 'undefined') {
     formName = document.AddForm; }

  if (typeof formName.d_ptmas036 !== 'undefined' ||
      typeof formName.d_ptmis013 !== 'undefined') {
     findHFunddesc(); }

  if(formName.name == "AddForm") {
    if(formName.ptcnuepm != undefined ) {
      if(formName.ptcnuepm.value == "1") {
        if (typeof findFund == "function") {
          findFund();
        }
      }
    }
  }

  PopUpScreen.style.display="none";
  PopUpFrame.document.close();
  if(document.getElementById('ptcnepis')) {
    if(document.getElementById('episcard')) {
      if(document.getElementById('episcard').value=="1") {
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

// Waiting list to referral cgi map
var CgiMapRef = { "wattx026":"alref035", "wattr048":"alref034",
                  "wattr050":"alref034", "wattr012":"bkrec002",
                  "wattr004":"alref088", "wattr014":"alref027" };

// Waiting list to booking cgi map
var CgiMapBook = { "wattr012":"bkrec002", "wattx026":"bkrec023",
                   "wattr013":"bkrec033", "wattr001":"operprv1",
                   "wattr002":"operexpd", "wattx026":"patclaim",
                   "wattr003":"operdes1", "wattr050":"opdea037" };

// Booking to waiting list cgi map
var CgiMapWat = { "bokrx011":"wattx040" };

function ProcessResultRef(obj) {
  for (var i = 0; i < obj.length;i++) {
      if (typeof obj[i] == 'undefined') {
         continue; }

      if(CgiMapNameEref[obj[i].name] != undefined){
        obj[i].name = CgiMapNameEref[obj[i].name];
      }

      if (document.getElementById("erefmaprf") != undefined) {
        if (CgiMapRef[obj[i].name] != undefined) {
          obj[i].name = CgiMapRef[obj[i].name];
        }
      }

      if (document.getElementById("erefmapbk") != undefined) {
        if (CgiMapBook[obj[i].name] != undefined) {
          obj[i].name = CgiMapBook[obj[i].name];
        }
      }

      if (document.getElementById("erefmapwt") != undefined) {
        if (CgiMapWat[obj[i].name] != undefined) {
          obj[i].name = CgiMapWat[obj[i].name];
        }
      }

      var el = document.getElementsByName(obj[i].name.trim());
      if (typeof el == 'undefined') {
         continue; }

      el = el[0];
      var eAdmissionValue =  typeof obj[i].value != 'undefined' ? obj[i].value : "";
      if (el != null) {
         switch(el.type) {
           case "text":
           case "hidden":
             textFieldRef(el,eAdmissionValue);
             break;
           case "textarea":
             textAreaField(el,eAdmissionValue);
             break;
           case "select-one":
             selectionFieldRef(el,eAdmissionValue);
             break;
           case "checkbox":
             checkboxFieldRef(el,eAdmissionValue,obj[i].name);
             break;
           default:
             break;
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
function textAreaField(el,defaultValue) {
  defaultValue = trim(defaultValue);
  if(isWhitespace(el.value)) {
    el.value = defaultValue.toUpperCase();
  } else {
    el.value = el.value + "\n" + defaultValue.toUpperCase();
  }
  ReFocusTo=document.activeElement;
  el.focus();
  el.blur();
  ReFocusTo.focus();
}
//------------------------------------------------------------------------------
// Populates template fields with new values from confirmation screen
//  uses UpdateForm as key
//------------------------------------------------------------------------------
function ProcessResult2Ref() {
  var arrayCheckList = PopUpFrame.document.getElementsByTagName('input');
  for (var i = 0; i < arrayCheckList.length; i++) {
      if (arrayCheckList[i].type == 'checkbox') {
         var elName = arrayCheckList[i].name.replace(/wp_/g,"");
         if (arrayCheckList[i].checked == true) {
            var elementMapping = document.getElementById(elName);
            if (elementMapping == null) {
               elementMapping = document.getElementsByName(elName);
               if (elementMapping.length > 0) {
                  elementMapping = elementMapping[0]; }
               else {
                  elementMapping = null; }
            }
            var eReferralValue =
                    typeof arrayCheckList[i].value.split("|")[1] != 'undefined'
                                   ? arrayCheckList[i].value.split("|")[1] : "";

            //Converts Date
            if (elementMapping.title.match(/Valid to/g)) {
                var dd = eReferralValue.substr(0,2);
                var mon = eReferralValue.substr(3,3);
                var yyyy = eReferralValue.substr(7,4);
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

              eReferralValue = dd+mm+yyyy
            }

            if (elementMapping != null) {
               switch(elementMapping.type) {
                 case "text":
                 case "hidden":
                   textFieldRef(elementMapping,eReferralValue) ;
                   break;
                 case "textarea":
                   textAreaField(elementMapping,eReferralValue);
                   break;
                 case "select-one":
                   var matchedIt=false;
                   selectionFieldRef(elementMapping,eReferralValue);
                   break;
                 default:
                   break;
               }
            }
         }
      }
   }
}
function OnlineReferralContact() {
  var erefrlid = getQueryString('erefrlid').replace(/\+/g," ").substring(0,20);
  if (!isWhitespace(erefrlid)) {
      DefaultOnlineReferralContact(erefrlid); }
}
function DefaultOnlineReferralContact(ReferralID) {
  if (typeof ReferralID == 'undefined' || ReferralID == null) {
     return; }

  var theURL="comweb10.pbl"+
        "?reportno=3&remoteno=4" +
        "&erefrlid="+ReferralID;
  var xmlHttp= createHttpObject(); // Firefox, Opera 8.0+, Safari

  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.responseText != "" && xmlHttp.status == 200) {
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
         updateReferralContacts(ReferralID);               // load contacts page
         ExpireCookiePath("eAdmCookieContact");
      } else {
         updateReferralConcession(ReferralID);
      }
  }
  else {
    alert('Error Connecting to Web Service');
  }
}
function updateReferralContacts(ReferralID) {
  var Left  = (getClientWidth() - 900)/2;
  var theURL="patweb07.pbl?reportno=6&template=8" +
             "&urnumber=" + PatientURN +
             "&erefrlid=" + ReferralID
  DFrameLink(theURL,50,Left,900,480);
}
function updateReferralConcession(ReferralID) {
  var Left  = (getClientWidth() - 900)/2;
  var theURL="patweb07.pbl?reportno=4&template=6" +
             "&urnumber=" + PatientURN +
             "&erefrlid=" + ReferralID
  DFrameLink(theURL,50,Left,900,480);
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
function ConfirmResultsRefUPI(obj, objUPI) {
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

    var el = document.getElementsByName(obj[i].name);
    if (typeof el == 'undefined') {
      continue;
    }


    el = el[0];
    if (el != null) {
      if (el.className.match(/IgnoreOldContacts/)) {
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
        }
     }
  }

  cs += "<tr><td colspan=4>&nbsp;</td></tr>"+
        "<tr><td colspan=4 style='text-align:center'><b>" +
        "Click Ok to Continue with Updates</b></td></tr>";
  visit_type=getURTitle();

  if (found == true) {
    var contents =
       '<html><head>' +
       '<link rel="stylesheet" href="../html/standard.css" type="text/css">' +
       '<link rel="stylesheet" href="../html/custom.css" type="text/css">' +
       '<script type="text/javascript" src="../js/Standard.js"></script>' +
       '</head><body onload="PageLoad(event)" style="margin:0;">' +
       '<span class="DFrameTitleBar" id="DFrameTitleBar">' +
       '<img align="right" alt="Exit" class="MenuIcon" src="../images/ExitIcon.gif" onclick="DFrameExit();">' +
       'Fields to be Updated ' + visit_type +
       '</span><span id=PageBodySection>' +
       cs +
       '<tr><td colspan=4 style="text-align:center"><br />' +
       '<input type=button value=Ok class=button onclick=' +
       '"parent.ProcessContinueRef();">&nbsp;' +
       '<input type=button value=Cancel class=button onclick=' +
       '"parent.cancelBtnRef();">' +
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

function checkboxFieldRef(el,eAdmissionValue,objName){

  if(trim(eAdmissionValue)=="1"){
    el.checked=true;

    switch(objName) {
      case "mbsbox1 ":
        ShowMBSFields1();
        break;
      case "mbsbox2 ":
        ShowMBSFields2();
        break;
      case "mbsbox3 ":
        ShowMBSFields3();
        break;
      case "mbsbox4 ":
        ShowMBSFields4();
        break;
      case "mbsbox5 ":
        ShowMBSFields5();
        break;
      default:
        break; 
    }
  } else {
    el.checked=false;
  }
}
