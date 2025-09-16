//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/cliweb06017.js
//
// Modification
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.02 06.08.2013 B.G.Ackland CAR 289383
//                      New AJAXPostString2 to fix post encoding
// V10.03.01 21/06/2013 Return for Pallative Home Care Notes
// V10.03.00 13/04/2012 Version change
// V10.01.00 13/04/2012 Version change
// V10.00.00 13/04/2012 Created for Mobility Suite
//

/******************************************************************************
 * cliweb06017.js
 ******************************************************************************/
 //Gobal variable
 window.lookupURL = "../lookups/ipad_lookups/";
 window.lookupFlag = false;
 window.btnStack = null;
 window.position = null;
 window.inputfield = null;

/******************************************************************************
 * addNote - request to the server to add note items
 ******************************************************************************/
function addNote(value) {
  var form = document.getElementById("NewNote");
  var status=validateMandatory(form);
  var formactn = document.getElementById("formactn");
  formactn.value = value;

  if (status == true) {
    var theURL = form.action;
    var postStr = AJAXPostString2(form);
    var xmlHttp = createHttpObject();
    xmlHttp.open("POST", theURL, false);
    xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
    xmlHttp.send(postStr);
    if (xmlHttp.status == "200") {
      if ( xmlHttp.responseText.match(/location.href/i) ){
        return true;
      }
      else{
        alertify.alert( xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,"") );
        return false;
      }
    }else{
      alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
      return false;
    }
  }
}

/******************************************************************************
 * updateNote - request to the server to change note items
 ******************************************************************************/
function updateNote(value) {
  var form = document.getElementById("UpdateNote");
  var status=validateMandatory(form);
  var formactn = document.getElementById("formactn");
  formactn.value = value;
  if (status == true) {
    var theURL = form.action;
    var postStr = AJAXPostString2(form);
    var xmlHttp = createHttpObject();
    xmlHttp.open("POST", theURL, false);
    xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
    xmlHttp.send(postStr);
    if (xmlHttp.status == "200") {
      if ( xmlHttp.responseText.match(/location.href/i) ){
        if(parent.ShowPatientNotes)
          parent.ShowPatientNotes();
      } else{
        alertify.alert( xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,"") );
      }
    } else{
      alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
    }
  }
}
/******************************************************************************
 * openLookup - popup the lookup panel
 *****************************************************************************/
function openLookup(returnCode,returnName,LookupPage,returnFocus) {
  var div = null;
  var panel = null;
  var theURL = null;

  if (window.lookupFlag){
//    div = document.getElementById("lookupPanel");
//    div.style.position = "relative";
//    el=document.getElementById(returnName);
//    div.style.top = findPos(el)[1]+"px";
  }else{
    div = createLookup(returnName);
  }

  window.btnStack = new Array();
  window.position = new Array();

  fillParentDiv(LookupPage,true);
  div.style.display = "";
  window.inputfield = returnName;
}
/******************************************************************************
 * findPos - the current position of the element
 *****************************************************************************/
function findPos(obj) {
  var curleft = 0;
  var curtop = 0;
  if (obj.offsetParent) {
    curleft = obj.offsetLeft
    curtop = obj.offsetTop
    while (obj = obj.offsetParent) {
      curleft += obj.offsetLeft
      curtop += obj.offsetTop
    }
  }
  return [curleft,curtop];
}
/******************************************************************************
 * getPage - remote call to get lookup template
 *****************************************************************************/
function getPage(url,el) {
  var xmlHttp = createHttpObject();
  xmlHttp.open("GET", url, true);
  xmlHttp.send();
  xmlHttp.onreadystatechange = function () {
    if (xmlHttp.status == "200") {
      str = xmlHttp.responseText;
      el.innerHTML = str;
    } else {
      alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
    }
  }
}
/*****************************************************************************
 * closeLookup - hide the lookup
 ****************************************************************************/
function closeLookup() {
  var div = document.getElementById("lookupPanel");
  div.style.display = "none";
  window.btnStack = null;
}
/******************************************************************************
 * createLookup - create the lookup panel
 *****************************************************************************/
function createLookup(returnName) {
  var div = document.getElementById("lookupPanel");
  div.innerHTML = "<div id='lookup-header' "+
                  " style='background-color:white;'>"+
                  "  <div id='lookup-cancel' style='display:none;' ></div>"+
                  "  <div id='lookup-panel-wrapper' >"+
                  "     <div id='lookup-panel'></div>"+
                  "  </div>"+
                  "</div>";
  window.lookupFlag = true;
  return div;
}
/******************************************************************************
 * fillParentDiv
 *****************************************************************************/
function fillParentDiv(lookupPage) {
  var btn = document.getElementById("lookup-cancel");
  if (checkStack()) {
     btn.innerHTML = "Back";
     btn.style.display = "";
     btn.onclick = function() {
          fillParentDiv("",false);
     };
  } else {
    btn.innerHTML = "";
     btn.style.display = "none";
    btn.onclick = closeLookup;
  }

  if (typeof arguments[1] != 'undefined') {
    if (arguments[1] == true) {
       pushStack(lookupPage);
       display(lookupPage);
    }else if (arguments[1] == false) {
       popStack();
       if (topStack() != null) {
          display(topStack());
       }
    }
  }
}
/******************************************************************************
 * checkStack - check if the stack has items
 *****************************************************************************/
function checkStack() {
  if (window.btnStack.length > 0) {
     return true;
  }else {
     return false;
  }
}
/******************************************************************************
 * display - show the lookup panel
 *****************************************************************************/
function display(lookupPage) {
  var btn = document.getElementById("lookup-cancel");
  var panel = document.getElementById("lookup-panel");
  var url= window.lookupURL + lookupPage + ".html";

  if (window.btnStack.length == 1) {
    btn.innerHTML = "";
    btn.style.display = "none";
    btn.onclick = closeLookup;
  }

  getPage(url,panel);
}
/******************************************************************************
 * pushStack - add one to the top of the stack
 *****************************************************************************/
function pushStack(url) {
  window.btnStack.push(url);
}
/******************************************************************************
 * topStack - get the top of the stack
 *****************************************************************************/
function topStack(url) {
  if(checkStack()) {
    return window.btnStack[window.btnStack.length - 1];
  }
  return null;
}
/******************************************************************************
 * popStack - remove the top of the stack
 *****************************************************************************/
function popStack() {
  if (window.btnStack.length > 0) {
     return window.btnStack.pop();
  }
  return null
}
/******************************************************************************
 * lookupUpdateStr - populates the element with the lookup string
 *****************************************************************************/
function lookupUpdateStr(el,returnCode) {
   returnCode.value = "";
   returnCode.value = el.value;
   closeLookup();
}
/******************************************************************************
 * lookupUpdateParent - populates the element with the lookup value
 *****************************************************************************/
function lookupUpdateParent(Code,Name,returnName) {
   if (typeof returnName != 'undefined') {
      if (returnName.type == "textarea") {
         returnName.value += Name + "\n";
      }else {
         returnName.value = Name;
      }
   }
}

