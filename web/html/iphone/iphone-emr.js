// Source Code:  ./iphone/iphone-emr.js
//
// Modification 
//
// Version         Date                         Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.00       13/04/2012                   Version change
// V10.01.00       13/04/2012                   Version change
// V10.00.00       13/04/2012                   Created for Mobility Suite
//

var RSExecuteResult=false;        // RSExecute return object 
//------------------------------------------------------------
// Source Code  : iphone-emr.js
//
// Function     : Emergency View Javascript
//
// Modification : 
//
// V10.00.00  09.06.2010 B.G.Ackland
//                       Copy from emrweb0201100.js for iPhone Application
//------------------------------------------------------------
function WorkFormInit(){
  var strg1= trim(document.HiddenFields.Pres01.value)
  var strg2= trim(document.HiddenFields.Pres02.value)
  var strg3= trim(document.HiddenFields.Pres03.value)
  var strg4= trim(document.HiddenFields.Pres04.value)
  var strg5= trim(document.HiddenFields.Pres05.value)
  var strg6= trim(document.HiddenFields.Pres06.value)
  el=document.getElementById("prcom001");
  el.innerHTML="<span class=Note>"+strg1.replace(/ *$/," ") + strg2.replace(/ *$/," ") + 
               strg3.replace(/ *$/," ") + strg4.replace(/ *$/," ") + 
               strg5.replace(/ *$/," ") + strg6.replace(/ *$/," ") + "</span>" 

  var ProcString="";
  var procs="";
  procs=document.HiddenFields.procedures.value;
  for (i=0;i<procs.length;i++) {
    if (i%40==0) {
     ProcString=ProcString +"<span class=Note>"+ procs.substr(i,40).replace(/ *$/,"</span>")
    }
  }
  document.HiddenFields.procedures.value="";
  el=document.getElementById("procedures");
  el.innerHTML=ProcString;

  Inj=document.HiddenFields.InjuryIndicator.value;
  if (Inj=="1") {
    el=document.getElementById("InjuryData");
    el.style.color='red';
  }

  CTypeAdm=document.HiddenFields.CTypeAdm.value
  if ( CTypeAdm == "Yes") {
    document.UpdateForm.emvis147.value=1; }
  else {
    document.UpdateForm.emvis147.value=0; }

  MedNoteLine=document.HiddenFields.MedNoteLine.value
  NoteArray=MedNoteLine.split("|");
  var NewNotes="<span class=NoteHead>"+NoteArray[0].substr(0,45)+"</span><span class=Note>";
  for (var j=1; j < NoteArray.length; j++) {
     if (!isWhitespace(NoteArray[j])) {
        if (NoteArray[j].match(/[0-9][0-9] ... [0-9][0-9][0-9][0-9]/)) { 
          NewNotes=NewNotes.replace(/ *$/," ")+"</span><br><span class=NoteHead>"+
                   NoteArray[j].substr(0,45)+"</span><span class=Note>";
        }
        else {
          NewNotes=NewNotes.replace(/ *$/," ")+NoteArray[j];
        }
     } }
  NewNotes=NewNotes+"</span>";
  medhistory=document.getElementById("medichis");
  medhistory.innerHTML=NewNotes;


  var str1= trim(document.HiddenFields.Diag01.value)
  var str2= trim(document.HiddenFields.Diag02.value)
  var str3= trim(document.HiddenFields.Diag03.value)
  var str4= trim(document.HiddenFields.Diag04.value)
  var str5= trim(document.HiddenFields.Diag05.value)
  var str6= trim(document.HiddenFields.Diag06.value)
  var str7= trim(document.HiddenFields.Diag07.value)
  var str8= trim(document.HiddenFields.Diag08.value)
  var str9= trim(document.HiddenFields.Diag09.value)
  el=document.getElementById("patdiag");
  if (isWhitespace(str1)) {
     str1=document.UpdateForm.temdiag.value;
     el.innerHTML=str1
    return }
  if (isWhitespace(str2)) {
     str2=document.UpdateForm.temdiag.value;
     el.innerHTML='<span class=Note>'+str1+'</span>'
    return }
  if (isWhitespace(str3)) {
     str3=document.UpdateForm.temdiag.value;
     el.innerHTML='<span class=Note>'+str1+'</span>'+
                  '<span class=Note>'+str2+'</span>'
     return }
  if (isWhitespace(str4)) {
     str4=document.UpdateForm.temdiag.value;
     el.innerHTML='<span class=Note>'+str1+'</span>'+
                  '<span class=Note>'+str2+'</span>'+
                  '<span class=Note>'+str3+'</span>'
     return }
  if (isWhitespace(str5)) {
     str5=document.UpdateForm.temdiag.value;
     el.innerHTML='<span class=Note>'+str1+'</span>'+
                  '<span class=Note>'+str2+'</span>'+
                  '<span class=Note>'+str3+'</span>'+
                  '<span class=Note>'+str4+'</span>'
     return }
  if (isWhitespace(str6)) {
     str6=document.UpdateForm.temdiag.value;
     el.innerHTML='<span class=Note>'+str1+'</span>'+
                  '<span class=Note>'+str2+'</span>'+
                  '<span class=Note>'+str3+'</span>'+
                  '<span class=Note>'+str4+'</span>'+
                  '<span class=Note>'+str5+'</span>'
     return }
  if (isWhitespace(str7)) {
     str7=document.UpdateForm.temdiag.value;
     el.innerHTML='<span class=Note>'+str1+'</span>'+
                  '<span class=Note>'+str2+'</span>'+
                  '<span class=Note>'+str3+'</span>'+
                  '<span class=Note>'+str4+'</span>'+
                  '<span class=Note>'+str5+'</span>'+
                  '<span class=Note>'+str6+'</span>'
     return }
  if (isWhitespace(str8)) {
     str8=document.UpdateForm.temdiag.value;
     el.innerHTML='<span class=Note>'+str1+'</span>'+
                  '<span class=Note>'+str2+'</span>'+
                  '<span class=Note>'+str3+'</span>'+
                  '<span class=Note>'+str4+'</span>'+
                  '<span class=Note>'+str5+'</span>'+
                  '<span class=Note>'+str6+'</span>'+
                  '<span class=Note>'+str7+'</span>'
     return }
  if (isWhitespace(str9)) {
     str9=document.UpdateForm.temdiag.value;
     el.innerHTML='<span class=Note>'+str1+'</span>'+
                  '<span class=Note>'+str2+'</span>'+
                  '<span class=Note>'+str3+'</span>'+
                  '<span class=Note>'+str4+'</span>'+
                  '<span class=Note>'+str5+'</span>'+
                  '<span class=Note>'+str6+'</span>'+
                  '<span class=Note>'+str7+'</span>'+
                  '<span class=Note>'+str8+'</span>'
     return }
     el.innerHTML='<span class=Note>'+str1+'</span>'+
                  '<span class=Note>'+str2+'</span>'+
                  '<span class=Note>'+str3+'</span>'+
                  '<span class=Note>'+str4+'</span>'+
                  '<span class=Note>'+str5+'</span>'+
                  '<span class=Note>'+str6+'</span>'+
                  '<span class=Note>'+str7+'</span>'+
                  '<span class=Note>'+str8+'</span>'+
                  '<span class=Note>'+str9+'</span>'
}
function checkDoctor() {
if (isWhitespace(HiddenFields.DoctorCode.value)) { 
 document.UpdateForm.emvis134.value=""
 document.UpdateForm.unitdesc.value=""
 alertify.alert("Cannot allocate a unit or ward until a doctor has been assigned to this patient!");
  return false;;
  }
}
function addDetail() {
  keyword=document.UpdateForm.dummy4.value;
  Left=(document.body.clientWidth-600)/2
  serverURL="emrweb05.pbl?reportno=7&template=5&keywords=" + keyword
  DFrameLink(serverURL,100,Left,600,300)
}

function getDiagnosis(SearchField,ReturnSelect) {
  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=1" +
                    "&valdcode=" + SearchField.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnSelect.options.length=0
    ReturnValue=returnValue.return_value.split("|");
    for (var j=0; j < ReturnValue.length; j++) {
       if (!isWhitespace(ReturnValue[j])) {
         SelectValue=ReturnValue[j].split(",");
         ReturnSelect.options[ReturnSelect.options.length]=
          new Option(SelectValue[1],SelectValue[0]); } } }
}
function newDiagnosis() {
  if (isWhitespace(document.UpdateForm.diagselt.value)) {
      alertify.alert("No Diagnosis selected !");
      return;;
  }
  document.AddDiagnosis.emvcd005.value=UpdateForm.diagselt.value
  document.AddDiagnosis.submit();
}
function setFormactn() {
    document.UpdateForm.formactn.value="C1"
    document.UpdateForm.nextpage.value=0
    document.UpdateForm.redirect.value="emrweb02.pbl?reportno=1&template=100" +
          "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+") +
          "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+") 
    document.UpdateForm.target="PopUpFrame"
    document.UpdateForm.submit();
}
function setPreXml(ReturnCode) {
if(isWhitespace(document.UpdateForm.prcom001.value)) { return;}
if(trim(UpdateForm.prcom001.value)==trim(document.HiddenFields.prcom001.value))
   { return; }
  user=document.PatientLinks.webuseid.value;
  if(top.content.location.search.substring(1,23)!="reportno=1&template=16"){
    top.content.UpdateForm.prcom001.value=document.UpdateForm.prcom001.value;
  }
  onblurHandler()
  var formatedtext=formateText(UpdateForm.prcom001,'50') 
  var serverURL   = "../cgi-bin/emrweb02.pbl?reportno=11" +
                    "&admissno=" + ReturnCode +
                    "&updateky=" + UpdateForm.updateky.value.replace(/ /g,"+") +
                    "&webuseid=" + user +
                    "&prcom001=" + escape(formatedtext)  
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|")
  if (returnValue.status==0) {
    var TestLastUpdate=UpdateForm.updateky.value
    if(isWhitespace(ReturnValue[2])){
    if (ReturnValue[1] > TestLastUpdate) {
      alertify.alert("Patient details updated by another user. The screen will now be refreshed. Changes to details have not been retained.");
     location.reload();
     return;
     }
     }
     UpdateForm.updateky.value = ReturnValue[0];
       }
  else {
    ReturnCode.select();  }
}
function setManXml(ReturnCode) {
if(isWhitespace(document.UpdateForm.vicmt002.value)) { return;}
if(trim(UpdateForm.vicmt002.value)==trim(document.HiddenFields.vicmt002.value))
   { return; }
  user=document.PatientLinks.webuseid.value;
  if(top.content.location.search.substring(1,23)!="reportno=1&template=16"){
    top.content.UpdateForm.vicmt002.value=document.UpdateForm.vicmt002.value;
  }
  onblurHandler()
  var formatedtext=formateText(UpdateForm.vicmt002,'60') 
  var serverURL   = "../cgi-bin/emrweb02.pbl?reportno=12" +
                    "&admissno=" + ReturnCode +
                    "&updateky=" + document.UpdateForm.updateky.value.replace(/ /g,"+") +
                    "&webuseid=" + user +
                    "&vicmt002=" + escape(formatedtext)  
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|")
  if (returnValue.status==0) {
    var TestLastUpdate=UpdateForm.updateky.value
    if(isWhitespace(ReturnValue[2])){
    if (ReturnValue[1] > TestLastUpdate) {
      alertify.alert("Patient details updated by another user. The screen will now be refreshed. Changes to details have not been retained.");
     location.reload();
     return;
     }
     }
     document.UpdateForm.updateky.value = ReturnValue[0];
       }
  else {
    ReturnCode.select();  }
}
function setManXmlBLANK(ReturnCode) {
if(isWhitespace(document.UpdateForm.vicmt002.value)) { return;}
if(trim(UpdateForm.vicmt002.value)==trim(document.HiddenFields.vicmt002.value))
   { return; }
  user=document.PatientLinks.webuseid.value;
  if(top.content.location.search.substring(1,23)!="reportno=1&template=16"){
    top.content.UpdateForm.vicmt002.value=document.UpdateForm.vicmt002.value;
  }
  onblurHandler()
  var formatedtext=formateTextBLANK(UpdateForm.vicmt002,'60')
  var serverURL   = "../cgi-bin/emrweb02.pbl?reportno=12" +
                    "&admissno=" + ReturnCode +
                    "&updateky=" + document.UpdateForm.updateky.value.replace(/ /g,"+") +
                    "&webuseid=" + user +
                    "&vicmt002=" + escape(formatedtext)
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|")
  if (returnValue.status==0) {
    var TestLastUpdate=document.UpdateForm.updateky.value
    if(isWhitespace(ReturnValue[2])){
    if (ReturnValue[1] > TestLastUpdate) {
      alertify.alert("Patient details updated by another user. The screen will now be refreshed. Changes to details have not been retained.");
     location.reload();
     return;
     }
     }
     document.UpdateForm.updateky.value = ReturnValue[0];
       }
  else {
    ReturnCode.select();  }
}
function unlockClinNotes() {
  var serverURL="../cgi-bin/emrweb08.pbl?reportno=14" +
                "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+") +
                "&webuseid=" + document.PatientLinks.webuseid.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
}
function clinNoteXml(ReturnCode) {
  var formatedtext=formateText(document.UpdateForm.vicmt001,'100')
  var serverURL="../cgi-bin/emrweb02.pbl?reportno=12" +
                "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+") +
                "&updateky=" + document.PatientLinks.updateky.value.replace(/ /g,"+") +
                "&webuseid=" + document.PatientLinks.webuseid.value.replace(/ /g,"+") +
                "&updttype=CLNOT" + 
                "&vicmt001=" + escape(formatedtext)
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
     parent.document.location.reload();
  }
  else {
     alertify.alert("The screen will now be refreshed.<br/>" +
           " Changes have not been retained.");
     location.reload();
  }
}
function clinNoteXmlBLANK(ReturnCode) {
  onblurHandler()
  var formatedtext=formateTextBLANK(document.UpdateForm.vicmt001,'100')
  var serverURL="../cgi-bin/emrweb02.pbl?reportno=12" +
                "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
                "&updateky=" + document.UpdateForm.updateky.value.replace(/ /g,"+") +
                "&webuseid=" + document.PatientLinks.webuseid.value.replace(/ /g,"+") +
                "&updttype=CLNOT" +
                "&vicmt001=" + escape(formatedtext)
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
     ReturnValue=returnValue.return_value.split("|")
     UpdateForm.updateky.value = ReturnValue[0]; }
  else {
     alertify.alert("The screen will now be refreshed.<br/>" +
           " Changes have not been retained.");
     location.reload();
//     ReturnCode.select();  
  }
}
function diagNoteXml(ReturnCode) {
  onblurHandler()
  user=document.PatientLinks.webuseid.value;
  var formatedtext=formateText(document.UpdateForm.patdiag,'50') 
  var serverURL   = "../cgi-bin/emrweb02.pbl?reportno=13" +
                    "&admissno=" + ReturnCode +
                    "&patdiag1=" + escape(formatedtext) +      
                    "&webuseid=" + user +
                    "&updttype=DINOT" +
                    "&updateky=" + document.UpdateForm.updateky.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|")
  if (returnValue.status==0) {
/*
    var TestLastUpdate=UpdateForm.updateky.value
    if(isWhitespace(ReturnValue[2])){
      if (ReturnValue[1] > TestLastUpdate) {
      alertify.alert("Patient details updated by another user. The screen will now be refreshed. Changes to details have not been retained.");
       location.reload();
       return;
       }
     }  
     UpdateForm.updateky.value = ReturnValue[0];
*/
       }
  else {
    ReturnCode.select();  }
}
function DoctorData() {
  PageSectionID="sectionE";
  el=document.getElementsByTagName("div")
  for (i=0;i<el.length;i++) {
    if (el[i].id.match(/section.*row/)) {
      el[i].style.display="none";
    }
    if (el[i].id==PageSectionID) {
      el[i].style.display="none";
    }
  }
  theURL = "emrweb02.pbl?reportno=01&template=335" +
           "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+")
  AddPageTitle="Doctor Handover";
  AddPageURL=theURL;
  openSection(AddPageURL,AddPageTitle);
}
function NurseData() {
  PageSectionID="sectionE";
  el=document.getElementsByTagName("div")
  for (i=0;i<el.length;i++) {
    if (el[i].id.match(/section.*row/)) {
      el[i].style.display="none";
    }
    if (el[i].id==PageSectionID) {
      el[i].style.display="none";
    }
  }
  theURL = "emrweb02.pbl?reportno=01&template=336" +
           "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+")
  AddPageTitle="Nurse Handover";
  AddPageURL=theURL;
  openSection(AddPageURL,AddPageTitle);
}
function InjuryData() {
  PageSectionID="sectionE";
  el=document.getElementsByTagName("div")
  for (i=0;i<el.length;i++) {
    if (el[i].id.match(/section.*row/)) {
      el[i].style.display="none";
    }
    if (el[i].id==PageSectionID) {
      el[i].style.display="none";
    }
  }
  theURL = "emrweb02.pbl?reportno=01&template=371" +
           "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+")
  AddPageTitle="Injury Surveillance";
  AddPageURL=theURL;
  openSection(AddPageURL,AddPageTitle);

}
/*
function NotesTemplate(textarea) {
  ReturnText=textarea
  PatientLinks.reportno.value="04"
  PatientLinks.template.value="002"
  PatientLinks.action="cliweb06.pbl"
  DFrameSubmit(PatientLinks,100,120,700,400);
}
*/
function AddList() {
  if(document.UpdateForm.urnumber.value=="       0") {
    alertify.alert("Patient not registered, please allocate a UR number!");
  }
  else {
    PageSectionID="sectionE";
    el=document.getElementsByTagName("div")
    for (i=0;i<el.length;i++) {
      if (el[i].id.match(/section.*row/)) {
        el[i].style.display="none";
      }
      if (el[i].id==PageSectionID) {
        el[i].style.display="none";
      }
    }
    theURL = "emrweb02.pbl?reportno=01&template=350" +
             "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+") +
             "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+")
    AddPageTitle="Add Medical History";
    AddPageURL=theURL;
    openSection(AddPageURL,AddPageTitle);
  }
}
function DocumentLink() {
  if(document.UpdateForm.urnumber.value=="       0") {
    alertify.alert("Patient not registered, please allocate a UR number!");}
  else {
    PatientLinkTo("cliweb08.pbl",1,1,0,0,0);
  }
}
function AddPatNote() {
  if(document.UpdateForm.urnumber.value=="       0") {
    alertify.alert("Patient not registered, please allocate a UR number!");}
  else {
    document.PatientLinks.reportno.value="01"
    document.PatientLinks.template.value="060"
    document.PatientLinks.action="emrweb02.pbl"
    Left=(document.body.clientWidth-700)/2
    DFrameSubmit(document.PatientLinks,100,Left,700,300);
  }
}
function AddNotes() {
  document.PatientLinks.reportno.value="04"
  document.PatientLinks.template.value="002"
  document.PatientLinks.action="cliweb06.pbl"
  Left=(document.body.clientWidth-700)/2
  DFrameSubmit(document.PatientLinks,100,Left,700,300);
}
function PrintNotes() {
  document.PatientLinks.reportno.value="01"
  document.PatientLinks.template.value="009"
  document.PatientLinks.action="emrweb02.pbl"
  Left=(document.body.clientWidth-300)/2
  DFrameSubmit(document.PatientLinks,200,Left,300,200);
}
function PrintNotesSTV() {
  document.PatientLinks.reportno.value="01"
  document.PatientLinks.template.value="007"
  document.PatientLinks.action="emrweb02.pbl"
  Left=(document.body.clientWidth-300)/2
  DFrameSubmit(document.PatientLinks,82,Left,350,180);
}
function ProcedureList() {
  var linkurl = "../cgi-bin/emrweb06.pbl?reportno=2&template=015" +
                    "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+")+
                    "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") 
  Left=(document.body.clientWidth-900)/2
  DFrameLink(linkurl,0,Left,900,400);
}
function ProcedureLinkNoDef() {
  user=document.PatientLinks.webuseid.value;
  var serverURL = "../cgi-bin/emrweb08.pbl?reportno=9" +
                    "&webuseid=" + user.replace(/ /g,"+") +
                    "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|");
  if (returnValue.status==0) {
    if(ReturnValue[0]=="1") {
     alertify.alert("Procedure notes are locked by another user id - " + ReturnValue[1]);
     return;
    }
  }
  document.PatientLinks.target="_self"
  document.PatientLinks.reportno.value="02"
  document.PatientLinks.template.value="016"
  document.PatientLinks.action="emrweb06.pbl"
  document.PatientLinks.submit()
}
function NotesLink() {
  user=document.PatientLinks.webuseid.value;
  var serverURL = "../cgi-bin/emrweb08.pbl?reportno=7" +
                    "&webuseid=" + user +
                    "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
                    "&updateky=" + UpdateForm.updateky.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|");
  if (returnValue.status==0) { 
    if(ReturnValue[0]=="1") {
     alertify.alert("Clinical notes are locked by another user id - " + ReturnValue[1]);
     return;
    }
  }
  PageSectionID="sectionE";
  el=document.getElementsByTagName("div")
  for (i=0;i<el.length;i++) {
    if (el[i].id.match(/section.*row/)) {
      el[i].style.display="none";
    }
    if (el[i].id==PageSectionID) {
      el[i].style.display="none";
    }
  }
  theURL = "emrweb02.pbl?reportno=01&template=302" +
           "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+")
  AddPageTitle="Update Clinical Notes";
  AddPageURL=theURL;
  openSection(AddPageURL,AddPageTitle);
}
function ProcedureLink() {
  user=document.PatientLinks.webuseid.value;
  var serverURL = "emrweb08.pbl?reportno=9" +
                  "&webuseid=" + user.replace(/ /g,"+") +
                  "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") 
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|");
  if (returnValue.status==0) { 
    if(ReturnValue[0]=="1") {
     alertify.alert("Procedure notes are locked by another user id - " + ReturnValue[1]);
     return;
    }
  }
  PageSectionID="sectionE";
  el=document.getElementsByTagName("div")
  for (i=0;i<el.length;i++) {
    if (el[i].id.match(/section.*row/)) {
      el[i].style.display="none";
    }
    if (el[i].id==PageSectionID) {
      el[i].style.display="none";
    }
  }
  theURL = "emrweb06.pbl?reportno=02&template=24" +
           "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+")
  AddPageTitle="Add Procedures";
  AddPageURL=theURL;
  openSection(AddPageURL,AddPageTitle);
}
function DiagnosisLink() {
  PageSectionID="sectionE";
  el=document.getElementsByTagName("div")
  for (i=0;i<el.length;i++) {
    if (el[i].id.match(/section.*row/)) {
      el[i].style.display="none";
    }
    if (el[i].id==PageSectionID) {
      el[i].style.display="none";
    }
  }
  theURL = "emrweb06.pbl?reportno=02&template=21" +
           "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+")
  AddPageTitle="Add Diagnosis";
  AddPageURL=theURL;
  openSection(AddPageURL,AddPageTitle);
}
function BedReqLink() {
  document.PatientLinks.target="_self"
  document.PatientLinks.reportno.value="08"
  document.PatientLinks.template.value="001"
  document.PatientLinks.action="patweb10.pbl"
  document.PatientLinks.submit()
}
function DiagnosisSearch()  {
  url="emrweb05.pbl?reportno=07&template=006&keywords=" +
      document.UpdateForm.keywords.value.replace(/ /g,"+")
      DFrameLink(url,20,50,700,370);
}
function validateWard(SearchField,SearchName,SearchDate,SearchTime) {
  user=document.PatientLinks.webuseid.value;
  if (isWhitespace(document.UpdateForm.emvis116.value)) { return;; }
  SearchField.value=SearchField.value.toUpperCase()
  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=5" +
                    "&valdcode=" + SearchField.value.replace(/ /g,"+") +
                    "&webuseid=" + user +
                    "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
                    "&updateky=" + document.UpdateForm.updateky.value.replace(/ /g,"+") 
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    if (ReturnValue[0] == "DEL") {
     document.UpdateForm.emvis116.focus();
     document.UpdateForm.emvis116.value="";
     document.UpdateForm.warddesc.value="";
     document.UpdateForm.emvis074.value="";
     document.UpdateForm.emvis084.value="";
     return;
    }
    SearchTime.value=trim(ReturnValue[3])
    SearchDate.value=trim(ReturnValue[2])
    SearchName.value=trim(ReturnValue[1])
    SearchField.value=trim(ReturnValue[0])
//  defDateTime(UpdateForm.emvis074,'Date',UpdateForm.emvis084,'Time');
  }
  else {
     document.UpdateForm.emvis116.focus();
     document.UpdateForm.emvis116.value="";
     document.UpdateForm.warddesc.value="";
     document.UpdateForm.emvis074.value="";
     document.UpdateForm.emvis084.value="";
  }
}
function validateCatCode1(ReturnCatg,ReturnCode,ReturnName,ReturnD,ReturnT) {
  user=document.PatientLinks.webuseid.value;
  if (isWhitespace(document.UpdateForm.emvis134.value)) { return;;}
  if (document.HiddenFields.DischargeComplete.value=="2") {
     alertify.alert("Patient is discharged please use supervisor clinical screen.");
     document.UpdateForm.emvis134.value="";
     document.UpdateForm.emvis134.focus();
     return;
  }
  var check=checkDoctor();
  if (check==false) {
     document.UpdateForm.emvis134.focus();
     document.UpdateForm.emvis134.value="";
     document.UpdateForm.unitdesc.value="";
     document.UpdateForm.emvis073.value="";
     document.UpdateForm.emvis083.value="";
     return;
  }
  var serverURL = "../cgi-bin/emrweb08.pbl?reportno=6&valdcode=" +
                    ReturnCatg.value.replace(/ /g,"+") +
                    ReturnCode.value.replace(/ /g,"+") +
                    "&webuseid=" + user +
                    "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
                    "&updateky=" + UpdateForm.updateky.value.replace(/ /g,"+") 
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    if (ReturnValue[0] == "DEL") {
     document.UpdateForm.emvis134.focus();
     document.UpdateForm.emvis134.value="";
     document.UpdateForm.unitdesc.value="";
     document.UpdateForm.emvis073.value="";
     document.UpdateForm.emvis083.value="";
     return;
    }
    ReturnName.value=ReturnValue[0];
    ReturnD.value=ReturnValue[1];
    ReturnT.value=ReturnValue[2];
    j=0
    for (var i=5; i < validateCatCode1.arguments.length; i++) {
       if (typeof(validateCatCode1.arguments[i]) != 'function') {
         j++
         validateCatCode1.arguments[i].value=ReturnValue[j] } }
//       defDateTime(UpdateForm.emvis073,'Date',UpdateForm.emvis083,'Time');
  }
  else {
     document.UpdateForm.emvis134.focus();
     document.UpdateForm.emvis134.value="";
     document.UpdateForm.unitdesc.value="";
     document.UpdateForm.emvis073.value="";
     document.UpdateForm.emvis083.value="";
  }
}
function defDateTime(dateField,dateString,timeField,timeString) {
  if (dateField!=null) {
    if(dateField.readOnly==true) {
      alertify.alert( dateField.title + " is a readonly field." )
      dateField.blur()
      dateField.focus()
      return;
    }
    if(dateField.disabled==true) {
      alertify.alert( dateField.title + " is a disabled field." )
      return;
    }
  }
  if (timeField!=null) {
    if(timeField.readOnly==true) {
      alertify.alert( timeField.title + " is a readonly field." )
      timeField.blur()
      timeField.focus()
      return;
    }
    if(timeField.disabled==true) {
      alertify.alert( timeField.title + " is a disabled field." )
      return;
    }
  }
  var monthname = new Array(12)
  monthname[0]="Jan"
  monthname[1]="Feb"
  monthname[2]="Mar"
  monthname[3]="Apr"
  monthname[4]="May"
  monthname[5]="Jun"
  monthname[6]="Jul"
  monthname[7]="Aug"
  monthname[8]="Sep"
  monthname[9]="Oct"
  monthname[10]="Nov"
  monthname[11]="Dec"
  var n=new Date();
  var day=n.getDate();
  var mon=n.getMonth();
  mon=mon + 1
  var ccyy=n.getFullYear();
  if (day<10)  day ="0" + day
  var dateValue=day + " " + monthname[mon-1] + " " + ccyy
  dateField.value=dateValue;
  timeField.value="          ";
  checkDate(dateField,dateString);
  checkTime(timeField,timeString);
}
function checkTime(theField, labelString)
{
 if(theField.value=="") { return; }
 if(theField.value=="00000000000") { return; }
 var err=0
        var hour=0
        var min=0
        var sec=0
        var Today = new Date()
        timevalue=theField.value
        timelength=timevalue.length
        position=0
        start=0
        flag=0
        while (position < timelength) {
          chr = timevalue.substring(position, position+1)
          if (chr==" " || chr==":" || chr==".") {
            if (flag==2) {
              if (position-start>2) {
                      sec = timevalue.substring(start+2, position)// seconds
                }
              else {
                sec = timevalue.substring(start, position)
                }
              flag = 3
              }
            if (flag==1) {
                min = timevalue.substring(start, position)
              flag = 2
              start=position+1
              }
            if (flag==0) {
              hour  = timevalue.substring(start, position)
              flag = 1
              start=position+1
              }
            }
          position++
        } //End While
        if (flag==2) {
          if (position-start>2) {
            sec = timevalue.substring(start+2, position)// seconds
            }
          else {
            sec = timevalue.substring(start, position)
            }
          }
        if (flag==1) {
          if (timelength==8) {
            min = timevalue.substring(3,5)
            sec = timevalue.substring(6,8)
            }
          else {
            if (timelength==5) {
              min = timevalue.substring(3,5)
              sec = 0
              }
            }
          }
        if (flag==0) {
          if (timelength==6) {
            hour = timevalue.substring(0,2)
            min = timevalue.substring(2,4)
            sec = timevalue.substring(4,6)
            }
          else {
            if (timelength==4) {
              hour = timevalue.substring(0,2)
              min = timevalue.substring(2,4)
              sec = "00"
              }
            }
          }
        if ((hour=="") || (hour=="  ")) {
           hour=Today.getHours();
           min=Today.getMinutes();
           sec=Today.getSeconds();
           }
        if ((min=="") || (min=="  ")){
           min=Today.getMinutes();
           sec=Today.getSeconds();
           }
        if ((sec=="") || (sec=="  ")){
           sec="0"
           }
              hour=parseInt(hour,10)
        if (isNaN(hour))  err=1
        min=parseInt(min,10)
        if (isNaN(min))  err=1
        sec=parseInt(sec,10)
        if (isNaN(sec)) err=1
        if (err==0) {
            //basic error checking
             if (min<0 || min>59) err = 1
                   if (hour<0 || hour>23) err = 1
                   if (sec<0 || sec>59) err = 1
            }

               //advanced error checking
             if (err==1) {
           alertify.alert('Invalid '+labelString)
           theField.focus()
           }
        else {
          if (sec<10) sec="0" + sec
          if (hour<10)  hour ="0" + hour
          if (min<10)  min ="0" + min
          timeValue=hour + ":" + min + ":" + sec
          theField.value=timeValue
               }
}
function refreashContent() {
  top.content.location.reload();
}
function lockClinical() {
  user=document.PatientLinks.webuseid.value;
  var serverURL = "../cgi-bin/emrweb08.pbl?reportno=7" +
                    "&webuseid=" + user +
                    "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+") +
                    "&updateky=" + document.PatientLinks.updateky.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|");
  if (returnValue.status!=0) { return;}
  else {
    if(ReturnValue[0]=="1") {
     alertify.alert("Clinical notes are locked by another user id - " + ReturnValue[1]);
     location.reload();
     return;
    }
    if(ReturnValue[0]=="2") {
     alertify.alert("Clinical notes have changed by another user. <br/>" +
           "The screen will refresh and display the changes !");
     location.reload();
    }
  }
}
function lockDiagnosis() {
  user=document.PatientLinks.webuseid.value;
  var serverURL = "../cgi-bin/emrweb08.pbl?reportno=8" +
                    "&webuseid=" + user +
                    "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
                    "&updateky=" + document.UpdateForm.updateky.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|");
  if (returnValue.status!=0) { return;}
  else {
//    alertify.alert(ReturnValue);
    if(ReturnValue[0]=="1") {
     alertify.alert("Diagnosis notes are locked by another user id - " + ReturnValue[1]);
     location.reload();
     return;
    }
  }
}
function OutputTable() {
  OutputString="<tr><td colspan=4>"
  OutputString+="<table width=100% cellspacing=0 cellpadding=0 border=0>"
  OutputString+="<tr><td align=right class=DataLabel>Departure:</td>"
  OutputString+="<td class=DataField width=15%>" + document.HiddenFields.deptdate.value +
                " " + HiddenFields.depttime.value +
                "</td>"
  OutputString+="<td align=right class=DataLabel>Departure Status:</td>"
  OutputString+="<td class=DataField width=15%>" + document.HiddenFields.deptstat.value +
                "</td>"
  OutputString+="<td align=right class=DataLabel>Referred to on Departure:</td>"
  OutputString+="<td class=DataField width=15%>" + document.HiddenFields.deptrefr.value +
                "</td></tr>"
  OutputString+="</table></td></tr>"
  Results.innerHTML=OutputString
}
//========================================================================
// Disable Clinical Details Screen
//========================================================================
function DisableCliScr(theForm) {
  for (var e = 0; e < theForm.elements.length; e++) {
    var el=theForm.elements[e] ;
    switch(el.type) {
      case "text":
          el.disabled = true; break;
      case "select-one":
          el.disabled = true; break;
      case "textarea":
          el.readOnly = true;
          el.style.color = "gray"; 
          break;
      case "button":
          if (el.value != "Print") 
            el.disabled = true; 
          break;
      case "hidden":
          break;
     }
  }
}
//
function UpdDoc(doctor) {
  if (isWhitespace(document.UpdateForm.emvis007.value)) {
     if (isWhitespace(document.UpdateForm.emvis007.defaultValue))  {
        return;
     }
  alertify.alert("Invalid doctor deletion - Please use the eraser icon");
  document.UpdateForm.emvis007.value=document.UpdateForm.emvis007.defaultValue;
  document.UpdateForm.emvis007.focus();
  return;
  }
  doctor.value=doctor.value.toUpperCase()
  a=trim(doctor.value);
  b=trim(doctor.defaultValue);
  if (document.UpdateForm.emvis007.value.substr(0,1) == " ") {
      document.UpdateForm.emvis007.value = a;
  }
  if (a == b)  { return;; }
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=3" +
                    "&valdcode=" + doctor.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {
   document.UpdateForm.emvis007.value=document.UpdateForm.emvis007.defaultValue;
    document.UpdateForm.dummy3.value=document.UpdateForm.dummy3.defaultValue;
    document.UpdateForm.emvis007.focus();
    return;
   }
  user=document.PatientLinks.webuseid.value;
  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=3" +
         "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
         "&doctcode=" + doctor.value.replace(/ /g,"+") +
         "&updttype=ALDOC" + "&webuseid=" + user
  var returnValue = RSExecute(serverURL);
  location.reload();
  if(returnValue.status==0) {
    if(top.menu.document.all.EmergencyFrame!=undefined){
     top.content.location.reload();
    }
  }
}
//
function UpdEmrDoc(doctor) {
  if (isWhitespace(document.UpdateForm.emvis007.value)) {
     if (isWhitespace(document.UpdateForm.emvis007.defaultValue))  {
        return;
     }
  alertify.alert("Invalid doctor deletion - Please use the eraser icon");
  document.UpdateForm.emvis007.value=document.UpdateForm.emvis007.defaultValue;
  document.UpdateForm.emvis007.focus();
  return;
  }
  doctor.value=doctor.value.toUpperCase()
  a=trim(doctor.value);
  b=trim(doctor.defaultValue);
  if (document.UpdateForm.emvis007.value.substr(0,1) == " ") {
      document.UpdateForm.emvis007.value = a;
  }
  if (a == b)  { return;; }
// validate doctor exists in patdo1af
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=3" +
                    "&valdcode=" + doctor.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {
   document.UpdateForm.emvis007.value=document.UpdateForm.emvis007.defaultValue;
    document.UpdateForm.dummy3.value=document.UpdateForm.dummy3.defaultValue;
    UpdateForm.emvis007.focus();
    return;
   }
// validate doctor exists in emrdocaf
  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=11" +
                    "&valdcode=" + doctor.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {
   document.UpdateForm.emvis007.value=document.UpdateForm.emvis007.defaultValue;
    document.UpdateForm.dummy3.value=document.UpdateForm.dummy3.defaultValue;
    UpdateForm.emvis007.focus();
    return;
   }
  user=document.PatientLinks.webuseid.value;
  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=3" +
         "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
         "&doctcode=" + doctor.value.replace(/ /g,"+") +
         "&updttype=ALDOC" + "&webuseid=" + user
  var returnValue = RSExecute(serverURL);
  location.reload();
  if(returnValue.status==0) {
    if(top.menu.document.all.EmergencyFrame!=undefined){
     top.content.location.reload();
    }
  }
}
//
function DelDoc() {
if (isWhitespace(document.UpdateForm.emvis007.value)) { return;; }
doctor="      ";
admissno=document.UpdateForm.admissno.value;
user=document.PatientLinks.webuseid.value;
  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=3" +
                    "&admissno=" + admissno.replace(/ /g,"+") +
                    "&doctcode=" + doctor.replace(/ /g,"+") +
                    "&webuseid=" + user.replace(/ /g,"+") +
                    "&updttype=ALDOC"
  var returnValue = RSExecute(serverURL);
  location.reload();
  if(returnValue.status==0) {
    if(top.menu.document.all.EmergencyFrame!=undefined){
     top.content.location.reload();
    }
  }
}
function validateDepDate(depDate,depTime) {
  user=document.PatientLinks.webuseid.value;
  if (isWhitespace(document.UpdateForm.emvis071.value)) { return;; }
  if (!checkDate(document.UpdateForm.emvis071,'Ready for Departure date')) { 
      document.UpdateForm.emvis071.value="";
      document.UpdateForm.emvis071.focus();
      return ; 
  }
  if (isWhitespace(document.UpdateForm.emvis081.value)) { return;; }
  if (!checkTimeTF(document.UpdateForm.emvis081,'Ready departure time')) { 
      document.UpdateForm.emvis081.value="";
      document.UpdateForm.emvis081.focus();
      return ; 
  }
  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=12" +
                    "&valdcode=" + document.UpdateForm.emvis071.value.replace(/ /g,"+") +
                    "&valdtime=" + document.UpdateForm.emvis081.value.replace(/ /g,"+") +
                    "&webuseid=" + user +
                    "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
                    "&updateky=" + document.UpdateForm.updateky.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    if (ReturnValue[0] == "DEL") {
     document.UpdateForm.emvis071.focus();
     return;
    }
   }
}
function UpdateDoctorDate(SeenDoctor,SeenDate,SeenTime) {
  if(!checkTimeA(SeenTime,SeenTime.title)) {
      return;
  } 
  user=document.PatientLinks.webuseid.value;
  if (isWhitespace(SeenDoctor.value)) { 
    if (!isWhitespace(SeenDate.value)||!isWhitespace(SeenTime.value)) { 
      alertify.alert("No doctor allocated first doctor seen date/time must be blank");
      SeenDate.selectedIndex=0;
      SeenTime.value="";
      return; 
    }
  }
  if (isWhitespace(SeenDate.value) || isWhitespace(SeenTime.value)) { 
      alertify.alert("First doctor seen date/time are mandatory");
      return; 
  }

  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=13" +
                    "&doctdate=" + SeenDate.value.replace(/ /g,"+") +
                    "&docttime=" + SeenTime.value.replace(/ /g,"+") +
                    "&webuseid=" + user.replace(/ /g,"+") +
                    "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
                    "&updttype=UPDAT" 
  var returnValue = RSExecute(serverURL);
}
function checkTimeTF(theField, labelString)
{
 if(theField.value=="") { return; }
 if(theField.value=="00000000000") { return; }
 var err=0
        var hour=0
        var min=0
        var sec=0
        var Today = new Date()
        timevalue=theField.value
        timelength=timevalue.length
        position=0
        start=0
        flag=0
        while (position < timelength) {
          chr = timevalue.substring(position, position+1)
          if (chr==" " || chr==":" || chr==".") {
            if (flag==2) {
              if (position-start>2) {
                      sec = timevalue.substring(start+2, position)// seconds
                }
              else {
                sec = timevalue.substring(start, position)
                }
              flag = 3
              }
            if (flag==1) {
                min = timevalue.substring(start, position)
              flag = 2
              start=position+1
              }
            if (flag==0) {
              hour  = timevalue.substring(start, position)
              flag = 1
              start=position+1
              }
            }
          position++
        } //End While
        if (flag==2) {
          if (position-start>2) {
            sec = timevalue.substring(start+2, position)// seconds
            }
          else {
            sec = timevalue.substring(start, position)
            }
          }
        if (flag==1) {
          if (timelength==8) {
            min = timevalue.substring(3,5)
            sec = timevalue.substring(6,8)
            }
          else {
            if (timelength==5) {
              min = timevalue.substring(3,5)
              sec = 0
              }
            }
          }
        if (flag==0) {
          if (timelength==6) {
            hour = timevalue.substring(0,2)
            min = timevalue.substring(2,4)
            sec = timevalue.substring(4,6)
            }
          else {
            if (timelength==4) {
              hour = timevalue.substring(0,2)
              min = timevalue.substring(2,4)
              sec = "00"
              }
            }
          }
        if ((hour=="") || (hour=="  ")) {
           hour=Today.getHours();
           min=Today.getMinutes();
           sec=Today.getSeconds();
           }
        if ((min=="") || (min=="  ")){
           min=Today.getMinutes();
           sec=Today.getSeconds();
           }
        if ((sec=="") || (sec=="  ")){
           sec="0"
           }
              hour=parseInt(hour,10)
        if (isNaN(hour))  err=1
        min=parseInt(min,10)
        if (isNaN(min))  err=1
        sec=parseInt(sec,10)
        if (isNaN(sec)) err=1
        if (err==0) {
            //basic error checking
             if (min<0 || min>59) err = 1
                   if (hour<0 || hour>23) err = 1
                   if (sec<0 || sec>59) err = 1
            }

               //advanced error checking
             if (err==1) {
           alertify.alert('Invalid '+labelString)
           theField.focus()
           return false;
           }
        else {
          if (sec<10) sec="0" + sec
          if (hour<10)  hour ="0" + hour
          if (min<10)  min ="0" + min
          timeValue=hour + ":" + min + ":" + sec
          theField.value=timeValue
          return true;
               }
}
//
function UpdateRegReq(reqdate,reqtime) {
  if(!isWhitespace(reqdate.value) && isWhitespace(reqdate.value)) {
    return;
  }
  var serverURL = "../cgi-bin/emrweb08.pbl?reportno=15" +
                  "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
                  "&valddate=" + reqdate.value.replace(/ /g,"+") +
                  "&valdtime=" + reqtime.value.replace(/ /g,"+") +
                  "&updttype=A"
//
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|")
  if (returnValue.status==0) {
  } else {
    ReturnCode.select();  
  }
}
function UpdateRegVis(reqdate,reqtime) {
  if(!isWhitespace(reqdate.value) && isWhitespace(reqdate.value)) {
    return;
  }
  var serverURL = "../cgi-bin/emrweb08.pbl?reportno=15" +
                  "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
                  "&valddate=" + reqdate.value.replace(/ /g,"+") +
                  "&valdtime=" + reqtime.value.replace(/ /g,"+") +
                  "&updttype=B"
//
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|")
  if (returnValue.status==0) {
  } else {
    ReturnCode.select();
  }
}
function AddClinNote() {
  document.PatientLinks.reportno.value="06"
  document.PatientLinks.template.value="011"
  document.PatientLinks.action="cliweb06.pbl"
  Left=(document.body.clientWidth-900)/2
  DFrameSubmit(document.PatientLinks,0,Left,900,300);
}
function AddDoctorNotes() {
  document.PatientLinks.reportno.value="06"
  document.PatientLinks.template.value="021"
  document.PatientLinks.action="cliweb06.pbl"
  Left=(document.body.clientWidth-900)/2
  DFrameSubmit(document.PatientLinks,0,Left,900,300);
}
function CheckFocus(thefield) {
 if(thefield.disabled==true) {
    return;
 }
 thefield.focus();
}
function NextPatient(linkurl) {
  if(isWhitespace(linkurl)) {
    alertify.alert("There are no more emergency patients for this arrival date."); 
    return;
  }
  location.href=linkurl;
}
//========================================================================
// Function  : checkTimeA
// 
// Operation : Validate Time Input
//             Time May be entered in any of the following formats
//                      hhmm
//                      hh:mm
//                      hh.mm
//                      hhmmss
//                      hh:mm:ss
//                      hh.mm.ss
//             The field will be checked and display in a hh:mm:ss format.
//             
// Parameters: theField    - The item on the form ie this
//             labelString - Description of Time
// Example   : 
//             <input type="text" name="patbtime" size="12"
//              onchange="checkTimeA(this,'Time of Birth')"> </p>
//========================================================================
function checkTimeA() {
theField=this
labelString=this.title
if (checkTimeA.arguments.length > 0 ) {
  theField=checkTimeA.arguments[0]
  labelString=checkTimeA.arguments[1]
}
 if(theField.value=="") { return true; }
 var ErrorFound=false
 var hour=0
 var min=0
 var sec=0
 timevalue=theField.value
 timelength=timevalue.length
 if (timevalue.match(/\./)) {
    var x=timevalue.split(".")
    hour=x[0]
    min=x[1]
    if (x[2]==undefined) { sec="0" }
                    else { sec=x[2] }}
 else {
   if (timevalue.match(/\:/)) {
      var x=timevalue.split(":")
      hour=x[0]
      min=x[1]
      if (x[2]==undefined) { sec="0" }
                      else { sec=x[2] }}
   else {
     if (timelength<3) {
       hour=timevalue; min="0"; sec="0" }
     else {
       switch (timelength) {
       case 3: {
         hour=timevalue.substr(0,1); min=timevalue.substr(1,2); sec="0";
         break; }
       case 4: {
         hour=timevalue.substr(0,2); min=timevalue.substr(2,2); sec="0";
         break; }
       case 6: {
         hour=timevalue.substr(0,2);
         min=timevalue.substr(2,2);
         sec=timevalue.substr(4,2);
         break; }
       default: {
         ErrorFound=true ;
         break; }
       }
     }
   }
 }
 if (isNaN(hour)){ ErrorFound=true }
 if (isNaN(min)) { ErrorFound=true }
 if (isNaN(sec)) { ErrorFound=true }
 if (isWhitespace(hour)){ ErrorFound=true }
 if (isWhitespace(min)) { ErrorFound=true }
 if (isWhitespace(sec)) { ErrorFound=true }
 hour=parseInt(hour,10)
 min=parseInt(min,10)
 sec=parseInt(sec,10)
 if (!ErrorFound) {
   if (min<0 || min>59) { ErrorFound = true }
     if (hour<0 || hour>23) { ErrorFound = true }
       if (sec<0 || sec>59) { ErrorFound = true }
 }
 if (!ErrorFound) {
   if (hour==0 && min==0 && sec==0) { ErrorFound = true }
 }

 if (ErrorFound) {
   alertify.alert('Invalid '+labelString)
   theField.select()
   return false; }
 else {
   if (sec<10) { sec="0" + sec }
   if (hour<10){ hour ="0" + hour }
   if (min<10) { min ="0" + min }
   theField.value=hour + ":" + min + ":" + sec
   return true; }
}
//------------------------------------------------------------
//  RSExecuteStateChange - get data back from Ajax_RSExecute call       
//------------------------------------------------------------
function RSExecuteStateChange()
{
  var data = '';
  var start_index = 0;
  var data_start_index = 0;
  var end_index = 0;
  var start_key = '<RETURN_VALUE';
  var end_key = '</RETURN_VALUE>';
  var metatag = '';

  if (xmlHttp.readyState==4)
  {
    if (xmlHttp.status == 200)
    {
      RSExecuteResult.message      = '';
      RSExecuteResult.return_value = '';
      RSExecuteResult.status       =  0;
      data = xmlHttp.responseText;

      if ((start_index = data.indexOf(start_key)) != -1)
      {
        data_start_index = data.indexOf('>',start_index) + 1;
        end_index = data.indexOf(end_key,data_start_index);
        if (end_index == -1)
          end_index = data.length;
        metatag = data.substring(start_index,data_start_index);
        if (metatag.indexOf('TYPE=SIMPLE') != -1)
        {
          RSExecuteResult.return_value=
            unescape(data.substring(data_start_index,end_index));
        }
        else if (metatag.indexOf('TYPE=ERROR') != -1)
        {
          RSExecuteResult.message     =
            unescape(data.substring(data_start_index,end_index));
          alertify.alert('Error Message<br/>' + RSExecuteResult.message)
          RSExecuteResult.status  = -1;
        }
        else if (metatag.indexOf('TYPE=WARNING') != -1)
        {
          RSExecuteResult.message     =
            unescape(data.substring(data_start_index,end_index));
          if(!confirm('Warning Message<br/>' + RSExecuteResult.message))
          {
            RSExecuteResult.status       =  -1;
          }
        }
      }
    }
    else
    {
      RSExecuteResult.status       = -1;
    }
  }
}

//------------------------------------------------------------
//  createHttpObject: set up object for Ajax_RSExecute calls       
//------------------------------------------------------------
function createHttpObject()
{
  try
  {
    xmlHttp=new XMLHttpRequest(); // Firefox, Opera 8.0+, Safari
  }
  catch (e)
  {
    // Internet Explorer in newer or older form
    try
    {
      xmlHttp=new ActiveXObject("Msxml2.XMLHTTP");
    }
    catch (e)
    {
      try
      {
        xmlHttp=new ActiveXObject("Microsoft.XMLHTTP");
      }
      catch (e)
      {
        alertify.alert("Your browser does not support AJAX!");
        return false;
      }
    }
  }
  return xmlHttp;
}
//------------------------------------------------------------
//  RSExecute: execute host procedure using Ajax
//------------------------------------------------------------
function RSExecute(url)
{
  xmlHttp = createHttpObject();

  // Note: this is a Synchronous Ajax call. and Firefox does NOT
  //  triggeer the onreadystatechange event on synchronour calls
  //  so the return analysis code is now inline after the send();
 
  //xmlHttp.onreadystatechange=RSExecuteStateChange;

  RSExecuteResult              = new Object();
  RSExecuteResult.status       = -1;
  RSExecuteResult.return_value = '';
  RSExecuteResult.message      = '';

  url = url + '&httprand='+Math.random();

  xmlHttp.open("GET",url,false);
  xmlHttp.send(null);

  RSExecuteStateChange();

  return RSExecuteResult;
}
//
// Ajax Call to Lookup for Doctor Name for Code
//
function doctorName(doctor) {
if (isWhitespace(doctor.value)) { return;;}
  doctor=doctor.value.toUpperCase()
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=3" +
                    "&valdcode=" + doctor.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {
    document.DoctorForm.emvis007.options.length=0;
    document.DoctorForm.DoctorName.value="";
    document.DoctorForm.DoctorSearch.focus();
    return;
  }
  if (DoctorForm.emcndoct.value==1) {
    var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=11" +
                      "&valdcode=" + doctor.replace(/ /g,"+")
    var returnValue = RSExecute(serverURL);
    if (returnValue.status!=0) {
      document.DoctorForm.emvis007.options.length=0;
      document.DoctorForm.DoctorName.value="";
      document.DoctorForm.DoctorSearch.focus();
      return;
    }
  }
  ReturnValue=returnValue.return_value.split("|");
  document.DoctorForm.DoctorName.value=ReturnValue[0];
}
//
// Call for Doctor Handover Search/Select
//
function getDoctor(SearchField,ReturnSelect) {
  if (event.keyCode<44||event.keyCode>127) { return true;}
  timeoutCtr    = new Date().getTime();
  theField      = SearchField;
  theFieldValue = SearchField.value;
  theHeight     ='250px';
  theURL        = "../cgi-bin/patweb99.pbl?reportno=02&template=011&norecord=10&doctstat=0&"+
                  "&keywords="+SearchField.value
  keycode       = event.keyCode;
  setTimeout("AJAXgetDoctor()", 5);
}
//
// Ajax Call for Doctor Handover Search 
//
function AJAXgetDoctor() {
  if (new Date().getTime() - timeoutCtr < 0) return false;
  var SearchString = "";
  SearchString = theFieldValue
  xmlHttp = createHttpObject();
  theURL = theURL + '&httprand='+Math.random();
  xmlHttp.open("GET", theURL, true);
  xmlHttp.onreadystatechange=function() {
     if (theField.value==SearchString) {
       if (xmlHttp.readyState==4) {
         AJAXgetDoctorSelect(); }
       }
     }
  xmlHttp.setRequestHeader("Content-type","text/html");
  xmlHttp.setRequestHeader("Cache-Control", "no-cache");
  xmlHttp.send();
  return false;
  theField.focus()
}
//
// Display Search Select Results
//
function AJAXgetDoctorSelect() {
  if (xmlHttp.responseText=="") {
    ReturnSelect.options.length=0
  }
  else {
    sHTMLOutput = xmlHttp.responseText;
    ReturnSelect.options.length=0
    ReturnTR=sHTMLOutput.split("<tr");
    for (var j=0; j < ReturnTR.length; j++) {
      ReturnTD=ReturnTR[j].split("<td");
      for (var i=0; i < ReturnTD.length; i++) {
        if (!isWhitespace(ReturnTD[i])) {
          if ((ReturnTD[i]).match(/javascript:updateParent/i)) {
            SelectName=ReturnTD[i].replace(/.*javascript:updateParent../i,"").replace(/','.*/,"")
            SelectCode=ReturnTD[i].replace(/.*javascript:updateParent.*','/i,"").replace(/'.*/,"")
            ReturnSelect.options[ReturnSelect.options.length]=
            new Option(SelectName,SelectCode);
          }
        }
      }
    }
  }
}
//
// Doctor Handover
//
function UpdateDoctor(el) {
  doctor=el.options[el.selectedIndex].value
  if (isWhitespace(doctor)) { return;;}
  doctor=doctor.toUpperCase()
  admissno=document.PatientLinks.admissno.value;
  user=document.PatientLinks.webuseid.value;
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=3" +
                    "&valdcode=" + doctor.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {
    document.DoctorForm.emvis007.value="";
    document.DoctorForm.emvis007.focus();
    return;
  }
  if (document.DoctorForm.emcndoct.value==1) {
    var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=11" +
                      "&valdcode=" + doctor.replace(/ /g,"+")
    var returnValue = RSExecute(serverURL);
    if (returnValue.status!=0) {
      document.DoctorForm.emvis007.value="";
      document.DoctorForm.emvis007.focus();
      return;
    }
  }
  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=3" +
                   "&admissno=" + admissno.replace(/ /g,"+") +
                   "&doctcode=" + doctor.replace(/ /g,"+") +
                   "&webuseid=" + user.replace(/ /g,"+") +
                   "&updttype=ALDOC" +
                   "&updateky=" + PatientLinks.updateky.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  parent.document.location.reload();
}
//
// Call for Nurse Handover Search/Select
//
function getNurse(SearchField,ReturnSelect) {
  if (event.keyCode<44||event.keyCode>127) { return true;}
  timeoutCtr    = new Date().getTime();
  theField      = SearchField;
  theFieldValue = SearchField.value;
  theHeight     ='250px';
  theURL        = "../cgi-bin/oprweb04.pbl?reportno=12&template=002&norecord=10"+
                  "&keywords="+SearchField.value
  keycode       = event.keyCode;
  setTimeout("AJAXgetNurse()", 5);
}
//
// Ajax Call for Nurse Handover Search 
//
function AJAXgetNurse() {
  if (new Date().getTime() - timeoutCtr < 0) return false;
  var SearchString = "";
  SearchString = theFieldValue
  xmlHttp = createHttpObject();
  theURL = theURL + '&httprand='+Math.random();
  xmlHttp.open("GET", theURL, true);
  xmlHttp.onreadystatechange=function() {
     if (theField.value==SearchString) {
       if (xmlHttp.readyState==4) {
         AJAXgetNurseSelect(); }
       }
     }
  xmlHttp.setRequestHeader("Content-type","text/html");
  xmlHttp.setRequestHeader("Cache-Control", "no-cache");
  xmlHttp.send();
  return false;
  theField.focus()
}
//
// Display Search Select Results
//
function AJAXgetNurseSelect() {
  if (xmlHttp.responseText=="") {
    ReturnSelect.options.length=0
  }
  else {
    sHTMLOutput = xmlHttp.responseText;
    ReturnSelect.options.length=0
    ReturnTR=sHTMLOutput.split("<tr");
    for (var j=0; j < ReturnTR.length; j++) {
      ReturnTD=ReturnTR[j].split("<td");
      for (var i=0; i < ReturnTD.length; i++) {
        if (!isWhitespace(ReturnTD[i])) {
          if ((ReturnTD[i]).match(/javascript:updateParent/i)) {
            SelectName=ReturnTD[i].replace(/.*javascript:updateParent../i,"").replace(/','.*/,"")
            SelectCode=ReturnTD[i].replace(/.*javascript:updateParent.*','/i,"").replace(/'.*/,"")
            ReturnSelect.options[ReturnSelect.options.length]=
            new Option(SelectName,SelectCode);
          }
        }
      }
    }
  }
}
//
// Nurse Handover
//
function UpdateNurse(el) {
  nurse=el.options[el.selectedIndex].value
  if (isWhitespace(nurse)) { return;;}
  nurse=nurse.toUpperCase()
  admissno=document.PatientLinks.admissno.value;
  user=document.PatientLinks.webuseid.value;
  datevald=document.PatientLinks.datevald.value;
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=17" +
                    "&valdcode=" + nurse.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {  return; }
  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=4" +
                    "&admissno=" + admissno.replace(/ /g,"+") +
                    "&webuseid=" + user.replace(/ /g,"+") +
                    "&updttype=ALNUR" +
                    "&doctcode=" + nurse.replace(/ /g,"+") +
                    "&datevald=" + datevald.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  parent.document.location.reload();
}
function formateText(ReturnText,column) {
  var line=ReturnText.value.split(/[\r\n]/);
  var endofline = "\n";
  var ReturnTextAll = "";
  for (var i=0;i< line.length;i++) {
    var returntext=formateLine(line[i],column);
    if (returntext.match(/[\r\n]$/) !=null) {
      ReturnTextAll+=returntext  }
    else {
      ReturnTextAll+=returntext + endofline } }
  return ReturnTextAll;
}
function formateLine(ReturnLine,column) {
  var endofline = "\n";
  var space = " ";
// important note: variable-0 to make the variable integer
  var position=column-0;
  var testsize
  var textarray=ReturnLine.split(" ");
  var text=textarray[0] + space
  var thisline=textarray[0] + space
  for (var i=1;i< textarray.length;i++) {
     text+=textarray[i] + space
     thisline+=textarray[i] + space;
     testsize=thisline + textarray[i+1];
     if (testsize.length >= position+1) {
       text+=endofline;
       thisline="";
     } }
  return text;
}

