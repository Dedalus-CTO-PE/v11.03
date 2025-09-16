//jsVersion  : V11.03.00
//
function init() {
 initForm();
 InitialiseForms();
 setButtons();
}
function setButtons() {
 var actionBtn = parent.document.getElementById('actionButton');
  if(actionBtn) {
    actionBtn.className = actionBtn.className.replace(/SpanButton/g,"");
    actionBtn.className = actionBtn.className.replace(/Blue/g,"");
    actionBtn.className = actionBtn.className + " SpanButtonBlue";
    actionBtn.innerText = "Update";
     actionBtn.onclick = function() {
         UpdateAlert();
     }
  }
}
function UpdateAlert() {
  status=validateMandatory(document.UpdateForm);
  if (status=="true") {
    theURL=document.UpdateForm.action;
    var postStr=AJAXPostString2(document.UpdateForm)
    var xmlHttp = createHttpObject();
    xmlHttp.open("POST", theURL, false);
    xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
    xmlHttp.send(postStr);
    if (xmlHttp.status=="200") {
      if (xmlHttp.responseText.match(/location.href/i)) {
         parent.frames['PatFrame'].refreshScreen();
         parent.CloseDocument();
      }
      else {
        alertify.alert(xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,""));
      }
    }
    else {
      alertify.alert("Web Service Not Available. Check you Connection and Try Again.");
    }
  }
}
function initForm() {
// Strip End of Line Spaces from the textarea value 
 el=document.UpdateForm.alcommnt.value.split('\n');
 textareaValue="";
 for (i=0;i<el.length;i++) {
   textareaValue+=el[i].replace(/ *$/,"")+'\n';
 }
 document.UpdateForm.alcommnt.value=textareaValue;
 var hf=document.HiddenFields;
// Set Checkbox for Life Threaterning 
 if (hf.alert004.value != " ") {
    document.UpdateForm.alert004.checked="1"
 }
// Set Serverity Level 
 for (var i =0 ; i < document.UpdateForm.alert006.length; i++) {
     if (document.UpdateForm.alert006.options[i].value==hf.alert006.value) {
         document.UpdateForm.alert006.selectedIndex=i } };
// Set Entered By User and Date
 EnteredByUser=getUserName(hf.enteruid.value);
 EnteredByDate=FD(hf.enterdat.value);
 el=document.getElementById("EnteredBy");
 el.innerHTML=EnteredByUser+' on '+EnteredByDate
}
function getUserName(userid) {
  theURL='patweb80.pbl?reportno=61&valdcode='+userid
  var xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  return xmlHttp.responseText.split('|')[0];
}
