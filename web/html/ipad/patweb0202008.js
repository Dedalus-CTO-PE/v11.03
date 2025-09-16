//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/patweb0202008.js
//
// Modification 
//
// Version         Date          Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.03 06.08.2013 B.G.Ackland CAR 289383
//                      New AJAXPostString2 to fix post encoding
// V10.03.02 21.07.2013 B.G.Ackland CAR
//                      Restore toggleImg function
// V10.03.01 02.07.2013 B.G.Ackland Align tran and Work Scripts
// V10.03.01 02.07.2013 B.G.Ackland Align tran and Work Scripts
// V10.03.00 13/04/2012 Version change
// V10.01.00 13/04/2012 Version change
// V10.00.00 13/04/2012 Created for Mobility Suite
//

function NewList() {
  status=validateMandatory(document.AddForm);
  if (status=="true") {
    theURL=document.AddForm.updttype.value="A";
    theURL=document.AddForm.action;
    var postStr=AJAXPostString2(document.AddForm)
    var xmlHttp = createHttpObject();
    xmlHttp.open("POST", theURL, false);
    xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
    xmlHttp.send(postStr);
    if (xmlHttp.status=="200") {
      if (xmlHttp.responseText.match(/location.href/i)) {
        document.location.reload();
      }
      else {
        alertify.alert(xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,""));
      }
    }
    else {
      alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
    }
  }
}
function init() {
 InitialiseForms();
 getLists();
 setButtons();
}
/******************************************************************************
 * removeItem - remove medication from collection and display panel
 *****************************************************************************/
function removeItem(ListNumber,el,item) {
  document.AddForm.webpd002.value=ListNumber;
  document.AddForm.updttype.value="D";
  theURL=document.AddForm.action;
  var postStr=AJAXPostString2(document.AddForm)
  var xmlHttp = createHttpObject();
  xmlHttp.open("POST", theURL, false);
  xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
  xmlHttp.send(postStr);
  if (xmlHttp.status=="200") {
    if (xmlHttp.responseText.match(/location.href/i)) {
       el.parentElement.style.display='none';
       document.AddForm.webpd002.value="";
    }
    else {
      alertify.alert(xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,""));
    }
  }
  else {
    alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
  }
}
/******************************************************************************
 * toggleImg - set the image to show or hide
 *****************************************************************************/
function toggleImg(el,buttonId) {
 el2=document.getElementById(buttonId);
 if (el.className == "delete") {
     el.className = "stop";
     el2.className = "hideslide"
 }else {
     el.className = "delete";
     el2.className = "showslide"
 }
}
function getLists() {
  el=document.getElementById("currentLists");
  OS="<ul class=sectionList>"+
     "<li class=sectionItem><span class=NoteHead>Current Favourite Lists</span></li>"
  for (i=0;i<el.options.length;i++) {
    OS+="<li class=sectionItem>"+
        "<img style='vertical-align:middle' class='stop' "+
        "id='img10"+i+"' onclick='toggleImg(this,\"img20"+i+"\")' "+
        " src='../html/ipad/Delete.jpg'>" +
        el.options[i].text + "  (id:"+ el.options[i].value + ")"+
        "<img id='img20"+i+"' onclick='removeItem(\""+el.options[i].value+"\",this,\"med10"+i+"\");' " +
        "class='hideslide' src='../html/ipad/DeleteIcon.jpg'>" +
        "</li>"
        //"<img id='img20"+i+"' ontouchstart='removeItem(this,\"med10"+i+"\");' " +
  }
  OS+="</ul class=sectionList>"
  el=document.getElementById("ListLocation");
  el.innerHTML=OS;
}
function setButtons() {
 var actionBtn = parent.document.getElementById('actionButton');
  if(actionBtn) {
    actionBtn.className = actionBtn.className.replace(/Blue/g,"");
    actionBtn.innerText = "Done";
    actionBtn.onclick = function() {
        parent.location.reload();
    }
  }
}
