//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/cliweb0202704.js
//
// Modification
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.01 06.08.2013 B.G.Ackland CAR 289383
//                      New AJAXPostString2 to fix post encoding
// V10.01.01 04.12.2012 B.G.Ackland New Medical Record View Refresh
// V10.01.00 13/04/2012 Version change
// V10.00.00 13/04/2012 Created for Mobility Suite
//

function init() {
  var actionButton = parent.document.getElementById('actionButton');

  if(actionButton) {
     //format the action button
     actionButton.className = actionButton.className.replace(/SpanButton/g,"");
     actionButton.className = actionButton.className.replace(/Blue/g,"");
     actionButton.className = actionButton.className + " SpanButtonBlue";
     actionButton.innerText = "Save";

     actionButton.onclick = function () { 
                               submitObservation();
                            };
  }
  getLatestEWS();

}

function getLatestEWS() {
  var xmlHttp = createHttpObject();
  var theURL="cliweb02.php?reportno=2&urnumber="+AddForm.urnumber.value.replace(/ /,"+")+
                                "&admissno="+AddForm.admissno.value.replace(/ /,"+")
  xmlHttp.open("GET", theURL, false);
  xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
  xmlHttp.send();
  if (xmlHttp.status == "200") {
   var h = document.getElementsByTagName("head")[0];
   var s = document.createElement("script");
   s.type="text/javascript";
   h.appendChild(s);
   s.text=xmlHttp.responseText;
   setDefaults();
  }
}
function setCheckbox(el,elValue) {
  if (elValue=='1') el.checked=true;
}
function setText(el,elValue) {
  el.value=elValue;
}
function setSelect(el,elValue) {
  for (i=0;i<el.options.length;i++) {
    if (el.options[i].value==elValue) el.options[i].selected=true;
  }
}
function submitObservation() {
  var status = validateMandatory(AddForm);
  if (status == true) {
    var theURL = AddForm.action;
    var postStr = AJAXPostString2(AddForm);
    var xmlHttp = createHttpObject();
    xmlHttp.open("POST", theURL, false);
    xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
    xmlHttp.send(postStr);
    if (xmlHttp.status == "200") {
    if ( xmlHttp.responseText.match(/location.href/i) ){
      parent.frames['PatFrame'].refreshScreen();
      parent.CloseDocument();
      }else{
      alertify.alert( xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,"") );
      }
    }else{
      alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
    }
  }
}

