//jsVersion  : V11.03.01
//------------------------------------------------------------
// Source Code  : emrweb0201100.js
//
// Function     : Clinical Details Javascript
//------------------------------------------------------------
function init(){
  var strg1= trim(document.HiddenFields.Pres01.value)
  var strg2= trim(document.HiddenFields.Pres02.value)
  var strg3= trim(document.HiddenFields.Pres03.value)
  var strg4= trim(document.HiddenFields.Pres04.value)
  var strg5= trim(document.HiddenFields.Pres05.value)
  var strg6= trim(document.HiddenFields.Pres06.value)
  document.UpdateForm.prcom001.value=strg1 + '\n' + 
                            strg2 + '\n' +
                            strg3 + '\n' +
                            strg4 + '\n' +
                            strg5 + '\n' +
                            strg6
  document.HiddenFields.prcom001.value=UpdateForm.prcom001.value;
  PageLocation="?reportno=1&template=4" +
               "&urnumber=" + PatientURN.replace(/ /g,"+") +
               "&admissno=" + PatientVIS.replace(/ /g,"+")
  if(top.content.location.search.substring(1,23)!="reportno=1&template=16"&&
     top.content.location.search.substring(1,23)!="reportno=1&template=17"){
    if (top.content.location.search!=this.location.search) {
      if (top.content.location.search!=PageLocation) {
      top.content.location.href="emrweb02.pbl" + PageLocation } }
  }
  if (HiddenFields.InjuryIndicator.value == "1") { InjuryData(); }
  
  if (document.getElementById("patlocot")!=undefined) {
    if (document.getElementById("patlocot").value=="1") {
      if (HiddenFields.DischargeComplete.value == "3" ||
        HiddenFields.DischargeComplete.value == "4") {
        DisableCliScr(document.UpdateForm); }
    }
  } else {
    if (HiddenFields.DischargeComplete.value == "3" ||
        HiddenFields.DischargeComplete.value == "4") {
      DisableCliScr(document.UpdateForm); }
  }


  var str1= trim(document.HiddenFields.Diag01.value)
  var str2= trim(document.HiddenFields.Diag02.value)
  var str3= trim(document.HiddenFields.Diag03.value)
  var str4= trim(document.HiddenFields.Diag04.value)
  var str5= trim(document.HiddenFields.Diag05.value)
  var str6= trim(document.HiddenFields.Diag06.value)
  var str7= trim(document.HiddenFields.Diag07.value)
  var str8= trim(document.HiddenFields.Diag08.value)
  var str9= trim(document.HiddenFields.Diag09.value)
  if (isWhitespace(str1)) {
     str1=document.UpdateForm.temdiag.value;
     document.UpdateForm.patdiag.value=str1
    return }
  if (isWhitespace(str2)) {
     str2=document.UpdateForm.temdiag.value;
     document.UpdateForm.patdiag.value=str1+'\n'
    return }
  if (isWhitespace(str3)) {
     str3=document.UpdateForm.temdiag.value;
     document.UpdateForm.patdiag.value=str1+'\n'+str2+'\n'+str3
     return }
  if (isWhitespace(str4)) {
     str4=document.UpdateForm.temdiag.value;
     document.UpdateForm.patdiag.value=str1+'\n'+str2+'\n'+str3+'\n'
     return }
  if (isWhitespace(str5)) {
     str5=document.UpdateForm.temdiag.value;
     document.UpdateForm.patdiag.value=str1+'\n'+str2+'\n'+str3+'\n'+str4+'\n'
     return }
  if (isWhitespace(str6)) {
     str6=document.UpdateForm.temdiag.value;
     document.UpdateForm.patdiag.value=str1+'\n'+str2+'\n'+str3+'\n'+str4+'\n'+
                              str5+'\n'
     return }
  if (isWhitespace(str7)) {
     str7=document.UpdateForm.temdiag.value;
     document.UpdateForm.patdiag.value=str1+'\n'+str2+'\n'+str3+'\n'+str4+'\n'+
                              str5+'\n'+ str6+'\n'
     return }
  if (isWhitespace(str8)) {
     str8=document.UpdateForm.temdiag.value;
     document.UpdateForm.patdiag.value=str1+'\n'+str2+'\n'+str3+'\n'+str4+'\n'+
                              str5+'\n'+str6+'\n'+str7+'\n'
     return }
  if (isWhitespace(str9)) {
     str9=document.UpdateForm.temdiag.value;
     document.UpdateForm.patdiag.value=str1+'\n'+str2+'\n'+str3+'\n'+str4+'\n'+
                              str5+'\n'+str6+'\n'+str7+'\n'+str8+'\n'
     return }
     document.UpdateForm.patdiag.value=str1+'\n'+str2+'\n'+str3+'\n'+str4+'\n'+
                              str5+'\n'+str6+'\n'+str7+'\n'+str8+'\n'+str9

}
function checkDoctor() {
if (isWhitespace(HiddenFields.DoctorCode.value)) { 
 document.UpdateForm.emvis134.value=""
 document.UpdateForm.unitdesc.value=""
 alert("Cannot allocate a unit or ward until a doctor has been assigned to this patient!");
  return false;;
  }
}
function addDetail() {
  keyword=document.UpdateForm.dummy4.value;
  Left=(document.body.clientWidth-600)/2
  serverURL="emrweb05.pbl?reportno=7&template=5&keywords=" + keyword
  DFrameLink(serverURL,100,Left,600,300)
}
function newDiagnosis() {
  if (isWhitespace(document.UpdateForm.diagselt.value)) {
      alert("No Diagnosis selected !");
      return;
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
function setPreXml(AdmissNo) {
  if (isWhitespace(document.UpdateForm.prcom001.value)) { return; }

  if (trim(UpdateForm.prcom001.value)==trim(document.HiddenFields.prcom001.value)) { return; }

  user=document.PatientLinks.webuseid.value;

  if (top.content.location.search.substring(1,23)!="reportno=1&template=16") {
    top.content.UpdateForm.prcom001.value=document.UpdateForm.prcom001.value;
  }

  onblurHandler();

  //var formatedtext=formateText(UpdateForm.prcom001,'50') 

  var str = UpdateForm.prcom001.value;
  var maxLineLen = 50;
  var formatedtext = formatTextStr(str,maxLineLen);

  var serverURL   = "../cgi-bin/emrweb02.pbl?reportno=11" +
                    "&admissno=" + AdmissNo.replace(/ /g,"+") +
                    "&updateky=" + UpdateForm.updateky.value.replace(/ /g,"+") +
                    "&webuseid=" + user +
                    "&prcom001=" + escape(formatedtext);

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    ReturnValue=returnValue.return_value.split("|");
    if (returnValue.status==0) {
      var TestLastUpdate=UpdateForm.updateky.value;

      if (isWhitespace(ReturnValue[2])) {
        if (ReturnValue[1] > TestLastUpdate) {
          alert("Patient details updated by another user. The screen will now be refreshed. Changes to details have not been retained.");
          location.reload();
          return;
        }
      }
      document.UpdateForm.updateky.value = ReturnValue[0];
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        ReturnValue=returnValue.return_value.split("|");
        if (returnValue.status==0) {
          var TestLastUpdate=UpdateForm.updateky.value;

          if (isWhitespace(ReturnValue[2])) {
            if (ReturnValue[1] > TestLastUpdate) {
              alert("Patient details updated by another user. The screen will now be refreshed. Changes to details have not been retained.");
              location.reload();
              return;
            }
          }
          document.UpdateForm.updateky.value = ReturnValue[0];
        }
      }
    );
  }
}
function setManXml(AdmissNo) {
  if (isWhitespace(document.UpdateForm.vicmt002.value)) { return; }

  if (trim(UpdateForm.vicmt002.value)==trim(document.HiddenFields.vicmt002.value)) { return; }

  user=document.PatientLinks.webuseid.value;

  if (top.content.location.search.substring(1,23)!="reportno=1&template=16") {
    top.content.UpdateForm.vicmt002.value=document.UpdateForm.vicmt002.value;
  }

  onblurHandler();

  //var formatedtext=formateText(UpdateForm.vicmt002,'60') 

  var str = UpdateForm.vicmt002.value;
  var maxLineLen = 60;
  var formatedtext = formatTextStr(str,maxLineLen);

  var serverURL   = "../cgi-bin/emrweb02.pbl?reportno=12" +
                    "&admissno=" + AdmissNo.replace(/ /g,"+") +
                    "&updateky=" + document.UpdateForm.updateky.value.replace(/ /g,"+") +
                    "&webuseid=" + user +
                    "&vicmt002=" + escape(formatedtext);

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    ReturnValue=returnValue.return_value.split("|");
    if (returnValue.status==0) {
      var TestLastUpdate=UpdateForm.updateky.value;

      if (isWhitespace(ReturnValue[2])) {
        if (ReturnValue[1] > TestLastUpdate) {
          alert("Patient details updated by another user. The screen will now be refreshed. Changes to details have not been retained.");
          location.reload();
          return;
        }
      }
      document.UpdateForm.updateky.value = ReturnValue[0];
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        ReturnValue=returnValue.return_value.split("|");
        if (returnValue.status==0) {
          var TestLastUpdate=UpdateForm.updateky.value;

          if (isWhitespace(ReturnValue[2])) {
            if (ReturnValue[1] > TestLastUpdate) {
              alert("Patient details updated by another user. The screen will now be refreshed. Changes to details have not been retained.");
              location.reload();
              return;
            }
          }
          document.UpdateForm.updateky.value = ReturnValue[0];
        }
      }
    );
  }
}
function setManXmlBLANK(AdmissNo) {
  if (isWhitespace(document.UpdateForm.vicmt002.value)) { return; }

  if (trim(UpdateForm.vicmt002.value)==trim(document.HiddenFields.vicmt002.value)) { return; }

  user=document.PatientLinks.webuseid.value;

  if (top.content.location.search.substring(1,23)!="reportno=1&template=16") {
    top.content.UpdateForm.vicmt002.value=document.UpdateForm.vicmt002.value;
  }

  onblurHandler();
  var formatedtext=formateTextBLANK(UpdateForm.vicmt002,'60')
  var serverURL   = "../cgi-bin/emrweb02.pbl?reportno=12" +
                    "&admissno=" + AdmissNo.replace(/ /g,"+") +
                    "&updateky=" + document.UpdateForm.updateky.value.replace(/ /g,"+") +
                    "&webuseid=" + user +
                    "&vicmt002=" + escape(formatedtext);

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    ReturnValue=returnValue.return_value.split("|");
    if (returnValue.status==0) {
      var TestLastUpdate=document.UpdateForm.updateky.value;
      if (isWhitespace(ReturnValue[2])) {
        if (ReturnValue[1] > TestLastUpdate) {
          alert("Patient details updated by another user. The screen will now be refreshed. Changes to details have not been retained.");
          location.reload();
          return;
        }
      }
      document.UpdateForm.updateky.value = ReturnValue[0];
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        ReturnValue=returnValue.return_value.split("|");
        if (returnValue.status==0) {
          var TestLastUpdate=document.UpdateForm.updateky.value;
          if (isWhitespace(ReturnValue[2])) {
            if (ReturnValue[1] > TestLastUpdate) {
              alert("Patient details updated by another user. The screen will now be refreshed. Changes to details have not been retained.");
              location.reload();
              return;
            }
          }
          document.UpdateForm.updateky.value = ReturnValue[0];
        }
      }
    );
  }
}
function unlockClinNotes() {
  var serverURL="../cgi-bin/emrweb08.pbl?reportno=14" +
                "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
                "&webuseid=" + document.PatientLinks.webuseid.value.replace(/ /g,"+");

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);
  }
}
function clinNoteXml(AdmissNo) {
  onblurHandler();

  //var formatedtext=formateText(document.UpdateForm.vicmt001,'100');

  var str = UpdateForm.vicmt001.value;
  var maxLineLen = 100;
  var formatedtext = formatTextStr(str,maxLineLen);

  var serverURL="../cgi-bin/emrweb02.pbl?reportno=12" +
                "&admissno=" + AdmissNo.replace(/ /g,"+") +
                "&updateky=" + document.UpdateForm.updateky.value.replace(/ /g,"+") +
                "&webuseid=" + document.PatientLinks.webuseid.value.replace(/ /g,"+") +
                "&updttype=CLNOT" + 
                "&vicmt001=" + escape(formatedtext);

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|");
      document.UpdateForm.updateky.value = ReturnValue[0];
    }
    else {
      alert("The screen will now be refreshed.\n" +
            " Changes have not been retained.");
      location.reload();
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status==0) {
          ReturnValue=returnValue.return_value.split("|");
          document.UpdateForm.updateky.value = ReturnValue[0];
        }
        else {
          alert("The screen will now be refreshed.\n" +
                " Changes have not been retained.");
          location.reload();
        }
      }
    );
  }
}
function clinNoteXmlHEAVIC(AdmissNo) {
  onblurHandler();

  //var formatedtext=formateText(document.UpdateForm.vicmt001,'70');

  var str = UpdateForm.vicmt001.value;
  var maxLineLen = 70;
  var formatedtext = formatTextStr(str,maxLineLen);

  var serverURL="../cgi-bin/emrweb02.pbl?reportno=12" +
                "&admissno=" + AdmissNo.replace(/ /g,"+") +
                "&updateky=" + document.UpdateForm.updateky.value.replace(/ /g,"+") +
                "&webuseid=" + document.PatientLinks.webuseid.value.replace(/ /g,"+") +
                "&updttype=CLNOT" +
                "&vicmt001=" + escape(formatedtext);

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|");
      UpdateForm.updateky.value = ReturnValue[0];
    }
    else {
      alert("The screen will now be refreshed.\n" +
            " Changes have not been retained.");
      location.reload();
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status==0) {
          ReturnValue=returnValue.return_value.split("|");
          UpdateForm.updateky.value = ReturnValue[0];
        }
        else {
          alert("The screen will now be refreshed.\n" +
                " Changes have not been retained.");
          location.reload();
        }
      }
    );
  }
}
function clinNoteXmlBLANK(AdmissNo) {
  onblurHandler();
  var formatedtext=formateTextBLANK(document.UpdateForm.vicmt001,'100');
  var serverURL="../cgi-bin/emrweb02.pbl?reportno=12" +
                "&admissno=" + AdmissNo.replace(/ /g,"+") +
                "&updateky=" + document.UpdateForm.updateky.value.replace(/ /g,"+") +
                "&webuseid=" + document.PatientLinks.webuseid.value.replace(/ /g,"+") +
                "&updttype=CLNOT" +
                "&vicmt001=" + escape(formatedtext);

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|");
      UpdateForm.updateky.value = ReturnValue[0];
    }
    else {
      alert("The screen will now be refreshed.\n" +
            " Changes have not been retained.");
      location.reload();
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status==0) {
          ReturnValue=returnValue.return_value.split("|");
          UpdateForm.updateky.value = ReturnValue[0];
        }
        else {
          alert("The screen will now be refreshed.\n" +
                " Changes have not been retained.");
          location.reload();
        }
      }
    );
  }
}
function diagNoteXml(AdmissNo) {
  onblurHandler();
  user=document.PatientLinks.webuseid.value;

  //var formatedtext=formateText(document.UpdateForm.patdiag,'50') 

  var str = UpdateForm.patdiag.value;
  var maxLineLen = 50;
  var formatedtext = formatTextStr(str,maxLineLen);

  var serverURL   = "../cgi-bin/emrweb02.pbl?reportno=13" +
                    "&admissno=" + AdmissNo.replace(/ /g,"+") +
                    "&patdiag1=" + escape(formatedtext) +      
                    "&webuseid=" + user +
                    "&updttype=DINOT" +
                    "&updateky=" + document.UpdateForm.updateky.value.replace(/ /g,"+");

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    ReturnValue=returnValue.return_value.split("|");
    if (returnValue.status==0) {
  /*
      var TestLastUpdate=UpdateForm.updateky.value
      if(isWhitespace(ReturnValue[2])){
        if (ReturnValue[1] > TestLastUpdate) {
  alert("Patient details updated by another user. The screen will now be refreshed. Changes to details have not been retained.");
         location.reload();
         return;
         }
       }  
       UpdateForm.updateky.value = ReturnValue[0];
  */
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        ReturnValue=returnValue.return_value.split("|");
        if (returnValue.status==0) {

        }
      }
    );
  }
}
function DoctorData() {
  document.PatientLinks.reportno.value="01"
  document.PatientLinks.template.value="036"
  document.PatientLinks.action="emrweb02.pbl"
  DFrameSubmit(PatientLinks,100,580,500,300);
}
function NurseData() {
  document.PatientLinks.reportno.value="01"
  document.PatientLinks.template.value="035"
  document.PatientLinks.action="emrweb02.pbl"
  DFrameSubmit(PatientLinks,100,580,500,300);
}
function DoctorDataHEA() {
  document.PatientLinks.reportno.value="01"
  document.PatientLinks.template.value="036"
  document.PatientLinks.action="emrweb02.pbl"
  Left=(document.body.clientWidth-900)/2
  DFrameSubmit(PatientLinks,0,Left,900,300);
//  DFrameSubmit(PatientLinks,100,100,500,300);
}
function NurseDataHEA() {
  document.PatientLinks.reportno.value="01"
  document.PatientLinks.template.value="035"
  document.PatientLinks.action="emrweb02.pbl"
  Left=(document.body.clientWidth-900)/2
  DFrameSubmit(PatientLinks,0,Left,900,300);
//  DFrameSubmit(PatientLinks,100,580,500,300);
}

function InjuryData() {
  document.PatientLinks.reportno.value="01"
  document.PatientLinks.template.value="071"
  document.PatientLinks.action="emrweb02.pbl"
  Left=(document.body.clientWidth-600)/2
  DFrameSubmit(document.PatientLinks,100,Left,600,300);
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
    alert("Patient not registered, please allocate a UR number!");}
  else {
    document.PatientLinks.reportno.value="01"
    document.PatientLinks.template.value="050"
    document.PatientLinks.action="emrweb02.pbl"
    Left=(document.body.clientWidth-900)/2
    DFrameSubmit(document.PatientLinks,100,Left,900,300);
  }
}
function AddManagementNotes() {
  if(document.UpdateForm.urnumber.value=="       0") {
    alert("Patient not registered, please allocate a UR number!");}
  else {
    document.PatientLinks.reportno.value="01"
    document.PatientLinks.template.value="080"
    document.PatientLinks.action="emrweb02.pbl"
    Left=(document.body.clientWidth-900)/2
    DFrameSubmit(document.PatientLinks,100,Left,900,300);
  }
}
function DocumentLink() {
  if(document.UpdateForm.urnumber.value=="       0") {
    alert("Patient not registered, please allocate a UR number!");}
  else {
    PatientLinkTo("cliweb08.pbl",1,1,0,0,0);
  }
}
function AddPatNote() {
  if(document.UpdateForm.urnumber.value=="       0") {
    alert("Patient not registered, please allocate a UR number!");}
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
function displayNotesLink() {
  document.PatientLinks.reportno.value="01"
  document.PatientLinks.template.value="019"
  document.PatientLinks.action="emrweb02.pbl"
  Left=(document.body.clientWidth-700)/2
  DFrameSubmit(document.PatientLinks,20,Left,580,475);
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

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    ReturnValue=returnValue.return_value.split("|");
    if (returnValue.status==0) {
      if(ReturnValue[0]=="1") {
       alert("Procedure notes are locked by another user id - " + ReturnValue[2]);
       return;
      }
    }

    document.PatientLinks.target="_self"
    document.PatientLinks.reportno.value="02"
    document.PatientLinks.template.value="016"
    document.PatientLinks.action="emrweb06.pbl"
    document.PatientLinks.submit();
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        ReturnValue=returnValue.return_value.split("|");
        if (returnValue.status==0) {
          if(ReturnValue[0]=="1") {
           alert("Procedure notes are locked by another user id - " + ReturnValue[2]);
           return;
          }
        }

        document.PatientLinks.target="_self"
        document.PatientLinks.reportno.value="02"
        document.PatientLinks.template.value="016"
        document.PatientLinks.action="emrweb06.pbl"
        document.PatientLinks.submit();
      }
    );
  }
}
function ProcedureLink() {
  user=document.PatientLinks.webuseid.value;
  var serverURL = "../cgi-bin/emrweb08.pbl?reportno=9" +
                    "&webuseid=" + user.replace(/ /g,"+") +
                    "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+");

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    ReturnValue=returnValue.return_value.split("|");
    if (returnValue.status==0) { 
      if(ReturnValue[0]=="1") {
       alert("Procedure notes are locked by another user id - " + ReturnValue[2]);
       return;
      }
    }
    document.PatientLinks.target="_self"
    document.PatientLinks.reportno.value="02"
    document.PatientLinks.template.value="014"
    document.PatientLinks.action="emrweb06.pbl"
    document.PatientLinks.submit()
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        ReturnValue=returnValue.return_value.split("|");
        if (returnValue.status==0) { 
          if(ReturnValue[0]=="1") {
           alert("Procedure notes are locked by another user id - " + ReturnValue[2]);
           return;
          }
        }
        document.PatientLinks.target="_self"
        document.PatientLinks.reportno.value="02"
        document.PatientLinks.template.value="014"
        document.PatientLinks.action="emrweb06.pbl"
        document.PatientLinks.submit()
      }
    );
  }
}
function DiagnosisLink() {
  document.PatientLinks.target="_self"
  document.PatientLinks.reportno.value="02"
  document.PatientLinks.template.value="001"
  document.PatientLinks.action="emrweb06.pbl"
  document.PatientLinks.submit()
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
  if (isWhitespace(document.UpdateForm.emvis116.value)) { return; }
  SearchField.value=SearchField.value.toUpperCase()
  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=5" +
                    "&valdcode=" + SearchField.value.replace(/ /g,"+") +
                    "&webuseid=" + user +
                    "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
                    "&updateky=" + document.UpdateForm.updateky.value.replace(/ /g,"+") 

  if (IEBrowser) {
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
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

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
    );
  }
}
function validateCatCode1(ReturnCatg,ReturnCode,ReturnName,ReturnD,ReturnT) {
  user=document.PatientLinks.webuseid.value;
  if (isWhitespace(document.UpdateForm.emvis134.value)) { return;}
  if (document.HiddenFields.DischargeComplete.value=="2") {
     alert("Patient is discharged please use supervisor clinical screen.");
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

  if (IEBrowser) {
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
      j=0;

      for (var i=5; i < validateCatCode1.arguments.length; i++) {
         if (typeof(validateCatCode1.arguments[i]) != 'function') {
           j++
           validateCatCode1.arguments[i].value=ReturnValue[j] } }
//         defDateTime(UpdateForm.emvis073,'Date',UpdateForm.emvis083,'Time');
    }
    else {
       document.UpdateForm.emvis134.focus();
       document.UpdateForm.emvis134.value="";
       document.UpdateForm.unitdesc.value="";
       document.UpdateForm.emvis073.value="";
       document.UpdateForm.emvis083.value="";
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);
    var fnArgs = validateCatCode1.arguments;

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

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
          j=0;

          for (var i=5; i < fnArgs.length; i++) {
            if (typeof(fnArgs[i]) != 'function') {
              j++;
              fnArgs[i].value=ReturnValue[j];
            }
          }
//        defDateTime(UpdateForm.emvis073,'Date',UpdateForm.emvis083,'Time');
        }
        else {
           document.UpdateForm.emvis134.focus();
           document.UpdateForm.emvis134.value="";
           document.UpdateForm.unitdesc.value="";
           document.UpdateForm.emvis073.value="";
           document.UpdateForm.emvis083.value="";
        }
      }
    );
  }
}
function defDateTime(dateField,dateString,timeField,timeString) {
  if (dateField!=null) {
    if(dateField.readOnly==true) {
      alert( dateField.title + " is a readonly field." )
      dateField.blur()
      dateField.focus()
      return;
    }
    if(dateField.disabled==true) {
      alert( dateField.title + " is a disabled field." )
      return;
    }
  }
  if (timeField!=null) {
    if(timeField.readOnly==true) {
      alert( timeField.title + " is a readonly field." )
      timeField.blur()
      timeField.focus()
      return;
    }
    if(timeField.disabled==true) {
      alert( timeField.title + " is a disabled field." )
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
 if(theField.value=="") { return true; }
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
           alert('Invalid '+labelString)
           theField.focus()
           return false;
           }
        else {
          if (sec<10) sec="0" + sec
          if (hour<10)  hour ="0" + hour
          if (min<10)  min ="0" + min
          timeValue=hour + ":" + min + ":" + sec
          theField.value=timeValue
               }
  return true;
}
function refreashContent() {
  top.content.location.reload();
}
function lockClinical() {
  user=document.PatientLinks.webuseid.value;
  var serverURL = "../cgi-bin/emrweb08.pbl?reportno=7" +
                  "&webuseid=" + user +
                  "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
                  "&updateky=" + UpdateForm.updateky.value.replace(/ /g,"+");

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    ReturnValue=returnValue.return_value.split("|");

    if (returnValue.status!=0) {
      return;
    }
    else {
      if (ReturnValue[0]=="1") {
        alert("Clinical notes are locked by another user id - " + ReturnValue[1]);
        location.reload();
        return;
      }
      if (ReturnValue[0]=="2") {
        alert("Clinical notes have changed by another user. \n" +
              "The screen will refresh and display the changes !");
        location.reload();
      }
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        ReturnValue=returnValue.return_value.split("|");

        if (returnValue.status!=0) {
          return;
        }
        else {
          if (ReturnValue[0]=="1") {
            alert("Clinical notes are locked by another user id - " + ReturnValue[1]);
            location.reload();
          }
          if (ReturnValue[0]=="2") {
            alert("Clinical notes have changed by another user. \n" +
                  "The screen will refresh and display the changes !");
            location.reload();
          }
        }
      }
    );
  }
}
function lockDiagnosis() {
  user=document.PatientLinks.webuseid.value;
  var serverURL = "../cgi-bin/emrweb08.pbl?reportno=8" +
                  "&webuseid=" + user +
                  "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
                  "&updateky=" + document.UpdateForm.updateky.value.replace(/ /g,"+");

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    ReturnValue=returnValue.return_value.split("|");

    if (returnValue.status!=0) {
      return; 
    }
    else {
      if (ReturnValue[0]=="1") {
        alert("Diagnosis notes are locked by another user id - " + ReturnValue[1]);
        location.reload();
        return;
      }
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        ReturnValue=returnValue.return_value.split("|");

        if (returnValue.status!=0) {
          return; 
        }
        else {
          if (ReturnValue[0]=="1") {
            alert("Diagnosis notes are locked by another user id - " + ReturnValue[1]);
            location.reload();
            return;
          }
        } 
      }
    );
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
      case "checkbox":
          el.disabled = true; break;
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
  alert("Invalid doctor deletion - Please use the eraser icon");
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
  if (a == b)  { return; }
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=3" +
                    "&valdcode=" + doctor.value.replace(/ /g,"+")


  if (IEBrowser) {
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
    if (returnValue.status==0) {
      if (top.menu.document.all.EmergencyFrame!=undefined) {
        top.content.location.reload();
      }
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

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

        var returnValue = RSExecuteFetch(serverURL);

        returnValue.then(
          function (returnValue) {
            returnValue = ParseFetchData(returnValue);  // parse fetch() result

            location.reload();
            if (returnValue.status==0) {
              if (top.menu.document.all.EmergencyFrame!=undefined) {
                top.content.location.reload();
              }
            }
          }
        );
      }
    );
  }
}
//
function UpdEmrDoc(doctor) {
  if (isWhitespace(document.UpdateForm.emvis007.value)) {
    if (isWhitespace(document.UpdateForm.emvis007.defaultValue))  {
      return;
    }
    alert("Invalid doctor deletion - Please use the eraser icon");
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
  if (a == b)  { return; }

  // validate doctor exists in patdo1af
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=3" +
                    "&valdcode=" + doctor.value.replace(/ /g,"+")

  if (IEBrowser) {
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
    if (returnValue.status==0) {
      if (top.menu.document.all.EmergencyFrame!=undefined) {
       top.content.location.reload();
      }
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status!=0) {
          document.UpdateForm.emvis007.value=document.UpdateForm.emvis007.defaultValue;
          document.UpdateForm.dummy3.value=document.UpdateForm.dummy3.defaultValue;
          UpdateForm.emvis007.focus();
          return;
        }

        // validate doctor exists in emrdocaf
        var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=11" +
                          "&valdcode=" + doctor.value.replace(/ /g,"+")

        var returnValue = RSExecuteFetch(serverURL);

        returnValue.then(
          function (returnValue) {
            returnValue = ParseFetchData(returnValue);  // parse fetch() result

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

            var returnValue = RSExecuteFetch(serverURL);

            returnValue.then(
              function (returnValue) {
                returnValue = ParseFetchData(returnValue);  // parse fetch() result
                location.reload();
                if (returnValue.status==0) {
                  if (top.menu.document.all.EmergencyFrame!=undefined) {
                    top.content.location.reload();
                  }
                }
              }
            );
          }
        );
      }
    );
  }
}
//
function DelDoc() {
  if (isWhitespace(document.UpdateForm.emvis007.value)) { return; }
  doctor="      ";
  admissno=document.UpdateForm.admissno.value;
  user=document.PatientLinks.webuseid.value;
  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=3" +
                    "&admissno=" + admissno.replace(/ /g,"+") +
                    "&doctcode=" + doctor.replace(/ /g,"+") +
                    "&webuseid=" + user.replace(/ /g,"+") +
                    "&updttype=ALDOC"

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    location.reload();
    if (returnValue.status==0) {
      if (top.menu.document.all.EmergencyFrame!=undefined) {
        top.content.location.reload();
      }
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        location.reload();
        if (returnValue.status==0) {
          if (top.menu.document.all.EmergencyFrame!=undefined) {
            top.content.location.reload();
          }
        }
      }
    );
  }
}
function validateDepDate(depDate,depTime) {
  user=document.PatientLinks.webuseid.value;
  if (isWhitespace(document.UpdateForm.emvis071.value)) { return; }
  if (!checkDate(document.UpdateForm.emvis071,'Ready for Departure date')) { 
      document.UpdateForm.emvis071.value="";
      document.UpdateForm.emvis071.focus();
      return ; 
  }
  if (isWhitespace(document.UpdateForm.emvis081.value)) { return; }
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

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|");
      if (ReturnValue[0] == "DEL") {
        document.UpdateForm.emvis071.focus();
        return;
      }
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status==0) {
          ReturnValue=returnValue.return_value.split("|");
          if (ReturnValue[0] == "DEL") {
            document.UpdateForm.emvis071.focus();
            return;
          }
        }
      }
    );
  }
}
function UpdateDoctorDate(SeenDoctor,SeenDate,SeenTime) {
  if (!checkTimeA(SeenTime,SeenTime.title)) {
      return;
  } 
  user=document.PatientLinks.webuseid.value;
  if (isWhitespace(SeenDoctor.value)) { 
    if (!isWhitespace(SeenDate.value)||!isWhitespace(SeenTime.value)) { 
      alert("No doctor allocated first doctor seen date/time must be blank");
      SeenDate.selectedIndex=0;
      SeenTime.value="";
      return; 
    }
  }
  if (isWhitespace(SeenDate.value) || isWhitespace(SeenTime.value)) { 
      alert("First doctor seen date/time are mandatory");
      return; 
  }

  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=13" +
                    "&doctdate=" + SeenDate.value.replace(/ /g,"+") +
                    "&docttime=" + SeenTime.value.replace(/ /g,"+") +
                    "&webuseid=" + user.replace(/ /g,"+") +
                    "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
                    "&updttype=UPDAT" 

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);
  }
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
           alert('Invalid '+labelString)
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
  if (!isWhitespace(reqdate.value) && isWhitespace(reqdate.value)) {
    return;
  }
  var serverURL = "../cgi-bin/emrweb08.pbl?reportno=15" +
                  "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
                  "&valddate=" + reqdate.value.replace(/ /g,"+") +
                  "&valdtime=" + reqtime.value.replace(/ /g,"+") +
                  "&updttype=A"
//
  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);
/*
    ReturnValue=returnValue.return_value.split("|")
    if (returnValue.status==0) {
    } else {
      ReturnCode.select();  
    }
*/
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);
  }
}
function UpdateRegVis(reqdate,reqtime) {
  if (!isWhitespace(reqdate.value) && isWhitespace(reqdate.value)) {
    return;
  }
  var serverURL = "../cgi-bin/emrweb08.pbl?reportno=15" +
                  "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
                  "&valddate=" + reqdate.value.replace(/ /g,"+") +
                  "&valdtime=" + reqtime.value.replace(/ /g,"+") +
                  "&updttype=B"
//
  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);
/*
    ReturnValue=returnValue.return_value.split("|")
    if (returnValue.status==0) {
    } else {
      ReturnCode.select();
    }
*/
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);
  }
}
function AddClinNote() {
  document.PatientLinks.reportno.value="06"
  document.PatientLinks.template.value="011"
  document.PatientLinks.action="cliweb06.pbl"
  Left=(document.body.clientWidth-900)/2
  DFrameSubmit(document.PatientLinks,0,Left,900,300);
}
function ExpandClinNote() {
  document.PatientLinks.action="emrweb02.pbl"
  document.PatientLinks.reportno.value="01"
  document.PatientLinks.template.value="126"
  Left=(document.body.clientWidth-900)/2
  DFrameSubmit(document.PatientLinks,0,Left,900,550);
}
function AddDispPlan() {
  if (document.UpdateForm.dispoflg.value=="1") {
    document.PatientLinks.template.value="030"
  } else {
    document.PatientLinks.template.value="031"
  }
  document.PatientLinks.reportno.value="06"
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
    alert("There are no more emergency patients for this arrival date."); 
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
// if (!ErrorFound) {
//   if (hour==0 && min==0 && sec==0) { ErrorFound = true }
// }

 if (ErrorFound) {
   alert('Invalid '+labelString)
   theField.select()
   return false; }
 else {
   if (sec<10) { sec="0" + sec }
   if (hour<10){ hour ="0" + hour }
   if (min<10) { min ="0" + min }
   theField.value=hour + ":" + min + ":" + sec
   return true; }
}
function UpdateFieldEMR(Visit,OptionType,ReturnCode) {
  ReturnFunction="";
  for (var i=3; i < UpdateFieldEMR.arguments.length; i++) {
    if (typeof(UpdateFieldEMR.arguments[i]) == 'function') {
      ReturnFunction=UpdateFieldEMR.arguments[i] }
    else {
      UpdateFieldEMR.arguments[i].value=""; }  }
  var serverURL  = "../cgi-bin/emrweb08.pbl?reportno=20" + 
               "&admissno=" + Visit.value.replace(/ /g,"+") +
               "&valdtype=" + OptionType +
               "&valdcode=" + ReturnCode.value.replace(/ /g,"+")

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status==0) {
      if (typeof(ReturnFunction) == 'function') { ReturnFunction() }
    }
    else { ReturnCode.select(); return false; }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status==0) {
          if (typeof(ReturnFunction) == 'function') { ReturnFunction() }
        }
        else { ReturnCode.select(); return false; }
      }
    );
  }
}
function changeMHDocDateTime() {
  PatientLinks.reportno.value="01"
  PatientLinks.template.value="117"
  PatientLinks.action="emrweb02.pbl"
  Left=(document.body.clientWidth-600)/2
  DFrameSubmit(PatientLinks,50,Left,600,350);
}
//-----------------------------------------------------------------
// HealthScope function to push the ED admitting doctor EMVIUR01
// to the linked pre admission or outstanding bed request
//-----------------------------------------------------------------
function UpdatePreAdmReq(adm) {
  ReturnFunction="";
  for (var i=1; i < UpdatePreAdmReq.arguments.length; i++) {
   if (typeof(UpdatePreAdmReq.arguments[i]) == 'function') {
     ReturnFunction=UpdatePreAdmReq.arguments[i] } }

  var serverURL = "../cgi-bin/emrweb08.pbl?reportno=22" +
                  "&admissno="+adm.value.replace(/ /g,"+")

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status==0) {
      if (typeof(ReturnFunction) == 'function') { ReturnFunction() }
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status==0) {
          if (typeof(ReturnFunction) == 'function') { ReturnFunction() }
        }
      }
    );
  }
}
function UpdDoctorHEA() {
  if (UpdateForm.emcndoct.value==1) {
    UpdEmrDocHEA(UpdateForm.frsndoct,UpdateForm.frsndate,UpdateForm.frsntime);
  }
  else {
    UpdDocHEA(UpdateForm.frsndoct,UpdateForm.frsndate,UpdateForm.frsntime);
  }
}
function UpdEmrDocHEA(doctor,date,time) {
  if (isWhitespace(document.UpdateForm.frsndoct.value) ||
      isWhitespace(document.UpdateForm.frsndate.value) ||
      isWhitespace(document.UpdateForm.frsntime.value)) {

    alert("First Seen Doctor Code, Date and Time are mandatory.");
    return;
  }

  if (isWhitespace(document.UpdateForm.frsndoct.value)) {
     if (isWhitespace(document.UpdateForm.frsndoct.defaultValue))  {
        return;
     }
  alert("Invalid doctor deletion - Please use the eraser icon");
  document.UpdateForm.frsndoct.value=document.UpdateForm.frsndoct.defaultValue;
  document.UpdateForm.frsndoct.focus();
  return;
  }
  doctor.value=doctor.value.toUpperCase()
  a=trim(doctor.value);
  b=trim(doctor.defaultValue);
  if (document.UpdateForm.frsndoct.value.substr(0,1) == " ") {
      document.UpdateForm.frsndoct.value = a;
  }
  if (a == b)  { return; }

  // validate doctor exists in patdo1af
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=3" +
                    "&valdcode=" + doctor.value.replace(/ /g,"+")

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status!=0) {
      document.UpdateForm.frsndoct.value=document.UpdateForm.frsndoct.defaultValue;
      document.UpdateForm.dummy3.value=document.UpdateForm.dummy3.defaultValue;
      UpdateForm.frsndoct.focus();
      return;
    }

    // validate doctor exists in emrdocaf
    var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=11" +
                      "&valdcode=" + doctor.value.replace(/ /g,"+")

    var returnValue = RSExecute(serverURL);

    if (returnValue.status!=0) {
      document.UpdateForm.frsndoct.value=document.UpdateForm.frsndoct.defaultValue;
      document.UpdateForm.dummy3.value=document.UpdateForm.dummy3.defaultValue;
      UpdateForm.frsndoct.focus();
      return;
    }

    user=document.PatientLinks.webuseid.value;
    var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=29" +
           "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
           "&doctcode=" + doctor.value.replace(/ /g,"+") +
           "&doctdate=" + date.value.replace(/ /g,"+") +
           "&docttime=" + time.value.replace(/ /g,"+") +
           "&updttype=ALDOC" + "&webuseid=" + user

    var returnValue = RSExecute(serverURL);
    location.reload();
    parent.parent.content.location.reload();
//  if (top.menu.EmergencyFrame.location=="about:blank") {
//    parent.menu.location.reload(); }
//  else {
//    parent.menu.EmergencyFrame.location.reload(); }

  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status!=0) {
          document.UpdateForm.frsndoct.value=document.UpdateForm.frsndoct.defaultValue;
          document.UpdateForm.dummy3.value=document.UpdateForm.dummy3.defaultValue;
          UpdateForm.frsndoct.focus();
          return;
        }

        // validate doctor exists in emrdocaf
        var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=11" +
                          "&valdcode=" + doctor.value.replace(/ /g,"+")

        var returnValue = RSExecuteFetch(serverURL);

        returnValue.then(
          function (returnValue) {
            returnValue = ParseFetchData(returnValue);  // parse fetch() result

            if (returnValue.status!=0) {
              document.UpdateForm.frsndoct.value=document.UpdateForm.frsndoct.defaultValue;
              document.UpdateForm.dummy3.value=document.UpdateForm.dummy3.defaultValue;
              UpdateForm.frsndoct.focus();
              return;
            }

            user=document.PatientLinks.webuseid.value;
            var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=29" +
                   "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
                   "&doctcode=" + doctor.value.replace(/ /g,"+") +
                   "&doctdate=" + date.value.replace(/ /g,"+") +
                   "&docttime=" + time.value.replace(/ /g,"+") +
                   "&updttype=ALDOC" + "&webuseid=" + user

            var returnValue = RSExecuteFetch(serverURL);

            returnValue.then(
              function (returnValue) {
                returnValue = ParseFetchData(returnValue);  // parse fetch() result
                location.reload();
                parent.parent.content.location.reload();
              }
            );
          }
        );
      }
    );
  }
}
function UpdDocHEA(doctor,date,time) {
  if (isWhitespace(document.UpdateForm.frsndoct.value) ||
      isWhitespace(document.UpdateForm.frsndate.value) ||
      isWhitespace(document.UpdateForm.frsntime.value)) {

    alert("First Seen Doctor Code, Date and Time are mandatory.");
    return;
  }

  if (isWhitespace(document.UpdateForm.frsndoct.value)) {
     if (isWhitespace(document.UpdateForm.frsndoct.defaultValue))  {
        return;
     }
  alert("Invalid doctor deletion - Please use the eraser icon");
  document.UpdateForm.frsndoct.value=document.UpdateForm.frsndoct.defaultValue;
  document.UpdateForm.frsndoct.focus();
  return;
  }
  doctor.value=doctor.value.toUpperCase()
  a=trim(doctor.value);
  b=trim(doctor.defaultValue);
  if (document.UpdateForm.frsndoct.value.substr(0,1) == " ") {
      document.UpdateForm.frsndoct.value = a;
  }
  if (a == b)  { return; }
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=3" +
                    "&valdcode=" + doctor.value.replace(/ /g,"+")

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status!=0) {
      document.UpdateForm.frsndoct.value=document.UpdateForm.frsndoct.defaultValue;
      document.UpdateForm.dummy3.value=document.UpdateForm.dummy3.defaultValue;
      UpdateForm.frsndoct.focus();
      return;
    }

    user=document.PatientLinks.webuseid.value;
    var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=29" +
           "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
           "&doctcode=" + doctor.value.replace(/ /g,"+") +
           "&doctdate=" + date.value.replace(/ /g,"+") +
           "&docttime=" + time.value.replace(/ /g,"+") +
           "&updttype=ALDOC" + "&webuseid=" + user

    var returnValue = RSExecute(serverURL);
    location.reload();
    parent.parent.content.location.reload();
//  if (top.menu.EmergencyFrame.location=="about:blank") {
//    parent.content.location.reload(); }
//  else {
//    parent.content.EmergencyFrame.location.reload(); }

  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status!=0) {
          document.UpdateForm.frsndoct.value=document.UpdateForm.frsndoct.defaultValue;
          document.UpdateForm.dummy3.value=document.UpdateForm.dummy3.defaultValue;
          UpdateForm.frsndoct.focus();
          return;
        }

        user=document.PatientLinks.webuseid.value;
        var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=29" +
               "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
               "&doctcode=" + doctor.value.replace(/ /g,"+") +
               "&doctdate=" + date.value.replace(/ /g,"+") +
               "&docttime=" + time.value.replace(/ /g,"+") +
               "&updttype=ALDOC" + "&webuseid=" + user

        var returnValue = RSExecuteFetch(serverURL);

        returnValue.then(
          function (returnValue) {
            returnValue = ParseFetchData(returnValue);  // parse fetch() result

            location.reload();
            parent.parent.content.location.reload();
          }
        );
      }
    );
  }
}
function SearchDoctorHEA() {
  if(document.UpdateForm.frsndoct.readOnly==true) {
    alert(document.UpdateForm.frsndoct.title + " is a readonly field.");
    return;
  }
  if (UpdateForm.emcndoct.value==1) {
    DoctorEmrSearchFrame(UpdateForm.frsndoct,UpdateForm.dummy3);
  }
  else {
    DoctorSearchFrame(UpdateForm.frsndoct,UpdateForm.dummy3);
  }
}
function getDoctorDescHEA() {
  if (isWhitespace(document.UpdateForm.frsndoct.value)) {
    document.UpdateForm.dummy3.value="";
    return;
  }
// validate doctor exists in patdo1af
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=3" +
             "&valdcode=" + document.UpdateForm.frsndoct.value.replace(/ /g,"+")

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status!=0) {
      document.UpdateForm.frsndoct.value=document.UpdateForm.frsndoct.defaultValue;
      document.UpdateForm.dummy3.value=document.UpdateForm.dummy3.defaultValue;
      UpdateForm.frsndoct.focus();
      return;
    } else {
      ReturnValue=returnValue.return_value.split("|");
      document.UpdateForm.dummy3.value=ReturnValue[0];
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status!=0) {
          document.UpdateForm.frsndoct.value=document.UpdateForm.frsndoct.defaultValue;
          document.UpdateForm.dummy3.value=document.UpdateForm.dummy3.defaultValue;
          UpdateForm.frsndoct.focus();
          return;
        } else {
          ReturnValue=returnValue.return_value.split("|");
          document.UpdateForm.dummy3.value=ReturnValue[0];
        }
      }
    );
  }
}
function ConsultantLink() {
  document.PatientLinks.target="_self"
  document.PatientLinks.reportno.value="02"
  document.PatientLinks.template.value="001"
  document.PatientLinks.action="patweb78.pbl"
  document.PatientLinks.submit()
}
function CheckAmbHandover() {
  if(VEMDHideFields()) {
    return;
  }
  if(document.HiddenFields.emvis013.value.substr(3,1)=="A") {
    AmbulanceHandover.innerHTML=ShowAmbulanceHandover.innerHTML;
  } 
}
function CheckAmbHandoverSTV() {
  if(VEMDHideFields()) {
    return;
  }
  if(document.HiddenFields.emvis013.value.substr(3,1)=="A") {
    AmbulanceHandoverLabel.innerHTML=ShowAmbulanceHandoverLabel.innerHTML;
    AmbulanceHandoverField.innerHTML=ShowAmbulanceHandoverField.innerHTML;
  } 
}
function AmbHandoverDate() {
  var elDate = document.getElementById('emvis156');
  if ((elDate == undefined) || (elDate == null))
    return;

  if (elDate.className.match(/Mandatory/)) {
    if (!checkString(elDate, elDate.title, true))
      return;
  }
  
  if (!checkDate(elDate, elDate.title)) {
    return;
  }

  if (isWhitespace(elDate.value)) {
    alert(elDate.title + " is a required field.\nPlease enter it now.");
    return;
  }

  p=document.UpdateForm;
  if(p.emvis128!=undefined && p.emvis129!=undefined) {
    if(!isWhitespace(p.emvis128.value) && !isWhitespace(p.emvis129.value) &&
       !isWhitespace(p.emvis156.value) && !isWhitespace(p.emvis157.value)) {
       if(!CheckDateTimeRange(p.emvis128,p.emvis129,p.emvis156,p.emvis157)) {
          alert("Ambulance handover complete date/time cannot be before " +
                "triage date/time");
          p.emvis156.value="";
          p.emvis157.value="";
          RemoteEmrUpdate(UpdateForm.admissno,UpdateForm.emvis156);
          RemoteEmrUpdate(UpdateForm.admissno,UpdateForm.emvis157);
          return;
       }
    }
  }

  RemoteEmrUpdate(UpdateForm.admissno,UpdateForm.emvis156);
}
function AmbHandoverTime() {
  var elTime = document.getElementById('emvis157');
  if ((elTime == undefined) || (elTime == null))
    return;

  if (elTime.className.match(/Mandatory/)) {
    if (!checkString(elTime, elTime.title, true))
      return;
  }

  if (!checkTimeA(elTime, elTime.title)) {
    return;
  }

  if (isWhitespace(elTime.value)) {
    alert(elTime.title + " is a required field.\nPlease enter it now.");
    return;
  }

  p=document.UpdateForm;
  if(p.emvis128!=undefined && p.emvis129!=undefined) {
    if(!isWhitespace(p.emvis128.value) && !isWhitespace(p.emvis129.value) &&
       !isWhitespace(p.emvis156.value) && !isWhitespace(p.emvis157.value)) {
       if(!CheckDateTimeRange(p.emvis128,p.emvis129,p.emvis156,p.emvis157)) {
          alert("Ambulance handover complete date/time cannot be before " +
                "triage date/time");
          p.emvis156.value="";
          p.emvis157.value="";
          RemoteEmrUpdate(UpdateForm.admissno,UpdateForm.emvis156);
          RemoteEmrUpdate(UpdateForm.admissno,UpdateForm.emvis157);
          return;
       } 
    }
  }

  RemoteEmrUpdate(UpdateForm.admissno,UpdateForm.emvis157);
}
function CheckDecisionToAdmit() {
  if(VEMDHideFields()) {
    return;
  }
  DecisionToAdmitLabel.innerHTML=ShowDecisionToAdmitLabel.innerHTML;
  DecisionToAdmitField.innerHTML=ShowDecisionToAdmitField.innerHTML;
}
function DecisionToAdmitDate() {
  if(!checkDate(UpdateForm.emvis158,UpdateForm.emvis158.title)) {
   return;
  }
  u=document.UpdateForm;
  h=document.HiddenFields;
  if(!isWhitespace(u.emvis158.value) && !isWhitespace(u.emvis159.value)) {
    if(!CheckDateTimeRange(h.emvis001,h.emvis002,u.emvis158,u.emvis159)) {
      alert("Error: Clinical decision to admit date/time " +
            "can't be before the arrival date/time.");
      u.emvis158.focus();
    }
  }
  RemoteEmrUpdate(UpdateForm.admissno,UpdateForm.emvis158);
}
function DecisionToAdmitTime() {
  if(!checkTime(UpdateForm.emvis159,UpdateForm.emvis159.title)) {
   return;
  }
  u=document.UpdateForm;
  h=document.HiddenFields;
  if(!isWhitespace(u.emvis158.value) && !isWhitespace(u.emvis159.value)) {
    if(!CheckDateTimeRange(h.emvis001,h.emvis002,u.emvis158,u.emvis159)) {
      alert("Error: Clinical decision to admit date/time " +
            "can't be before the arrival date/time.");
      u.emvis159.focus();
    }
  }
  RemoteEmrUpdate(UpdateForm.admissno,UpdateForm.emvis159);
}
function DocHandoverForm(DocCode,MapViewMode) {
  if (document.PatientLinks.newdoctr == undefined)
    return;

  document.PatientLinks.action="emrweb02.pbl";
  document.PatientLinks.reportno.value="25";
  document.PatientLinks.template.value="001";
  document.PatientLinks.newdoctr.value=DocCode;
  
  //Top=(document.body.clientHeight - 580)/2;
  Left=(document.body.clientWidth - 950)/2;

  if (MapViewMode != undefined && MapViewMode == true) {
    DFrameSubmit(document.PatientLinks,0,Left,950,420);
  }
  else {
    DFrameSubmit(document.PatientLinks,0,Left,950,490);
  }
}
//-----------------------------------------------------------------
// Hide VEMD Telehealth fields
//-----------------------------------------------------------------
function VEMDHideFields() {
  if(!document.getElementById("emvis177")) {
    return false;
  }
  visitdate=document.getElementById("emvis001");
  state=document.getElementById("ptcnhdps");
  servicetype=document.getElementById("emvis177");
  if(SetDateYYYYMMDD(visitdate.value)< DOYR2019 || state.value != "3" ||
     servicetype.value.substr(14,1)!="2") {
    return false;
  }
  return true;     // Hide VEMD Telehealth fields
}
function AmbHandoverDateHEA() {
  var elDate = document.getElementById('emvis156');
  if ((elDate == undefined) || (elDate == null))
    return;

  if (elDate.className.match(/Mandatory/)) {
    if (!checkString(elDate, elDate.title, true))
      return;
  }

  if (!checkDate(elDate, elDate.title)) {
    return;
  }

//  if (isWhitespace(elDate.value)) {
//    alert(elDate.title + " is a required field.\nPlease enter it now.");
//    return;
//  }

  p=document.UpdateForm;
  if(p.emarrdte!=undefined && p.emarrtim!=undefined) {
    if(!isWhitespace(p.emarrdte.value) && !isWhitespace(p.emarrtim.value) &&
       !isWhitespace(p.emvis156.value) && !isWhitespace(p.emvis157.value)) {
       if(!CheckDateTimeRange(p.emarrdte,p.emarrtim,p.emvis156,p.emvis157)) {
          alert("Ambulance handover complete date/time cannot be before " +
                "Arrival date/time");
          p.emvis156.value="";
          p.emvis157.value="";
          RemoteEmrUpdate(UpdateForm.admissno,UpdateForm.emvis156);
          RemoteEmrUpdate(UpdateForm.admissno,UpdateForm.emvis157);
          return;
       }
    }
  }

  if(p.emambdte!=undefined && p.emambtim!=undefined) {
    if(!isWhitespace(p.emambdte.value) && !isWhitespace(p.emambtim.value) &&
       !isWhitespace(p.emvis156.value) && !isWhitespace(p.emvis157.value)) {
       if(!CheckDateTimeRange(p.emambdte,p.emambtim,p.emvis156,p.emvis157)) {
          alert("Ambulance handover complete date/time cannot be before " +
                "Ambulance Destination date/time");
          p.emvis156.value="";
          p.emvis157.value="";
          RemoteEmrUpdate(UpdateForm.admissno,UpdateForm.emvis156);
          RemoteEmrUpdate(UpdateForm.admissno,UpdateForm.emvis157);
          return;
       }
    }
  }

  RemoteEmrUpdate(UpdateForm.admissno,UpdateForm.emvis156);
}
function AmbHandoverTimeHEA() {
  var elTime = document.getElementById('emvis157');
  if ((elTime == undefined) || (elTime == null))
    return;

  if (elTime.className.match(/Mandatory/)) {
    if (!checkString(elTime, elTime.title, true))
      return;
  }

  if (!checkTimeA(elTime, elTime.title)) {
    return;
  }

//  if (isWhitespace(elTime.value)) {
//    alert(elTime.title + " is a required field.\nPlease enter it now.");
//    return;
//  }

  p=document.UpdateForm;
  if(p.emarrdte!=undefined && p.emarrtim!=undefined) {
    if(!isWhitespace(p.emarrdte.value) && !isWhitespace(p.emarrtim.value) &&
       !isWhitespace(p.emvis156.value) && !isWhitespace(p.emvis157.value)) {
       if(!CheckDateTimeRange(p.emarrdte,p.emarrtim,p.emvis156,p.emvis157)) {
          alert("Ambulance handover complete date/time cannot be before " +
                "Arrival date/time");
          p.emvis156.value="";
          p.emvis157.value="";
          RemoteEmrUpdate(UpdateForm.admissno,UpdateForm.emvis156);
          RemoteEmrUpdate(UpdateForm.admissno,UpdateForm.emvis157);
          return;
       }
    }
  }

  if(p.emambdte!=undefined && p.emambtim!=undefined) {
    if(!isWhitespace(p.emambdte.value) && !isWhitespace(p.emambtim.value) &&
       !isWhitespace(p.emvis156.value) && !isWhitespace(p.emvis157.value)) {
       if(!CheckDateTimeRange(p.emambdte,p.emambtim,p.emvis156,p.emvis157)) {
          alert("Ambulance handover complete date/time cannot be before " +
                "Ambulance Destination date/time");
          p.emvis156.value="";
          p.emvis157.value="";
          RemoteEmrUpdate(UpdateForm.admissno,UpdateForm.emvis156);
          RemoteEmrUpdate(UpdateForm.admissno,UpdateForm.emvis157);
          return;
       }
    }
  }

  RemoteEmrUpdate(UpdateForm.admissno,UpdateForm.emvis157);
}
