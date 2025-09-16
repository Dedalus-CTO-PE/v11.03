//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/patweb1008012.js
//
// Modification
//
// Version         Date          Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.08.01 14.11.2016 Ebon Clements  TSK 0322699
//                      Added assignInitialDiagnosis()
// V10.03.01 06.08.2013 B.G.Ackland CAR 289383
//                      New AJAXPostString2 to fix post encoding
// V10.01.01 04.12.2012 B.G.Ackland New Medical Record View Refresh
// V10.01.00 13/04/2012 Version change
// V10.00.00 13/04/2012 Created for Mobility Suite
//

function SubmitRequest() {
  if (validateMandatory(AddForm)) {
    theURL=document.AddForm.action;
    var postStr=AJAXPostString2(document.AddForm)
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
      alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
    }
  }
}
function ShowHospital() {
  if(document.AddForm.ibcnmhos.value=="1") {
    ShowHospital=document.getElementById('ShowHospital')
    document.getElementById('Hospital').outerHTML=ShowHospital.innerHTML
    PatientSex=document.AddForm.h_patientsex.value;
    h_pmbrq014=document.AddForm.h_pmbrq014.value;
    for(var i =0 ; i < document.AddForm.pmbrq014.length; i++) {
    if (document.AddForm.pmbrq014.options[i].value==h_pmbrq014) {
         document.AddForm.pmbrq014.selectedIndex=i } };
  }
}
function DefCons() {
  c_pmbrq004=document.AddForm.pmbrq004.options[document.AddForm.pmbrq004.selectedIndex].value
  if(c_pmbrq004.substr(5,1)!="D" && !isWhitespace(c_pmbrq004)) {
    document.AddForm.pmbrq005.value=trim(document.AddForm.defconcd.value);
    document.AddForm.n_pmbrq005.value=trim(document.AddForm.defconnm.value);
  } 
  else {   
    document.AddForm.pmbrq005.value="";
    document.AddForm.n_pmbrq005.value="";
  }
}
function setButtons() {
 ShowHospital();
 DefCons();
 ShowList();
 var actionBtn = parent.document.getElementById('actionButton');

  if(actionBtn) {

    actionBtn.className = actionBtn.className.replace(/SpanButton/g,"");
    actionBtn.className = actionBtn.className.replace(/Blue/g,"");
    actionBtn.className = actionBtn.className + " SpanButtonBlue";
    actionBtn.innerText = "Save";

     actionBtn.onclick = function() {
        SubmitRequest();
     }

  }
}
function ShowList() {
 t = new Table();
 AddTableRows();
 SortOrderBy=1;
 t.rows.sort(RevStringSort);
 OS='<ul class=ListRes>'
 for(var i = 0; i < t.rows.length; i++) {
   OS += "<li class=ItemRes>" +
         "<span> "+t.rows[i][3]+ "("+t.rows[i][7]+")</span><br/>"+
         "<span class=subscriptLeft>Expected Ward/Bed : "+t.rows[i][18]+"</span>"+
         "<span class=subscriptRight>Allocated : "+FormatDate(t.rows[i][13])+"</span><br/>"+
           "<span class=ntTimeframe>"+FormatCommentAge(t.rows[i][1])+"</span>"  +
           "<span class=ntWhen>"+FormatDateTime(t.rows[i][1])+"</span>"  +
         "</li>"
 }
 OS+='</ul>'
 ListLocation=document.getElementById("requestHistory");
 ListLocation.innerHTML = OS;
 if (t.rows.length == 0) {
   ListLocation.style.display="none";
 }

}
function assignInitialDiagnosis() {
  if (document.AddForm.emcndedi.value=="0") {
    AddForm.pmbrq008.value = AddForm.emvccode.value;
    AddForm.pmbrq015.value = AddForm.freefrds.value;
    validateCode(6,AddForm.pmbrq008,AddForm.n_pmbrq008);
    return;
  }
  if (document.AddForm.emcndedi.value=="1") {
    if (!isWhitespace(AddForm.freefrds.value)) {
      AddForm.pmbrq015.value = AddForm.freefrds.value;
      alertify.alert("Only Free Format Description from Primary Diagnosis is defaulted to Bed Request.");
      return;
    }
  }
  if (document.AddForm.emcndedi.value=="2") {
      AddForm.pmbrq015.value = AddForm.freefrds.value;
      return;
  }
}
function assignFreeFormat() {
  AddForm.pmbrq015.value = trim(AddForm.n_pmbrq008.value) + " ";
}

