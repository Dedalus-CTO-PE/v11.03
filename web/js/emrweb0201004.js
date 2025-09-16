//jsVersion  : V11.03.07
//========================================================================
function init(){
// Following Removed not a good idea to check ever 10 milliseconds
// Should be donevia onchange/onblur events
// setTimeout('checkCode()',10); 
  PageDirty = false;
  var strg1= trim(HiddenFields.Pres01.value)
      if(!isWhitespace(strg1)) { strg1+="\n"}
  var strg2= trim(HiddenFields.Pres02.value)
      if(!isWhitespace(strg2)) { strg2+="\n"}
  var strg3= trim(HiddenFields.Pres03.value)
      if(!isWhitespace(strg3)) { strg3+="\n"}
  var strg4= trim(HiddenFields.Pres04.value)
      if(!isWhitespace(strg4)) { strg4+="\n"}
  var strg5= trim(HiddenFields.Pres05.value)
      if(!isWhitespace(strg5)) { strg5+="\n"}
  var strg6= trim(HiddenFields.Pres06.value)
  UpdateForm.prcom001.value=strg1+strg2+strg3+strg4+strg5+strg6
  UpdateForm.savdesc1.value=strg1+strg2+strg3+strg4+strg5+strg6
  if (HiddenFields.CheckUr.value == "1") { checkurno(); }
  savePrcom001=GetCookieData("emrweb0201004.prcom001");
  SetCookie("emrweb0201004.prcom001","");
  ExpireCookiePath("emrweb0201004.prcom001");
  if (savePrcom001!="unknown") {
    if (!isWhitespace(savePrcom001)) {
      if (confirm("Comments Saved\n\n"+savePrcom001+"\n\nClick Ok to Restore.")){
        UpdateForm.prcom001.value=savePrcom001;
        prcom001TopFrame();
      }
    }
  }

//
// Removed Following Line and Used Tags in Page emrweb0201004.html
//
//  getPresentCom(UpdateForm.test,UpdateForm.emvis060,UpdateForm.emrviscat);
}
function SetDirty() {
  PageDirty = true;
}
function getPresentCom(SearchField,ReturnSelect,CatCode) {
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=32" +
                    "&valdcode=" + SearchField.value.replace(/ /g,"+") +
                    "&valdcatc=" + CatCode.value.replace(/ /g,"+")

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status==0) {
      ReturnSelect.options.length=0
      ReturnValue=returnValue.return_value.split("|");
      for (var j=0; j < ReturnValue.length; j++) {
        if (!isWhitespace(ReturnValue[j])) {
          SelectValue=ReturnValue[j].split(",");
          ReturnSelect.options[ReturnSelect.options.length]=
           new Option(SelectValue[1],SelectValue[0]);
        }
      }
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status==0) {
          ReturnSelect.options.length=0
          ReturnValue=returnValue.return_value.split("|");
          for (var j=0; j < ReturnValue.length; j++) {
            if (!isWhitespace(ReturnValue[j])) {
              SelectValue=ReturnValue[j].split(",");
              ReturnSelect.options[ReturnSelect.options.length]=
               new Option(SelectValue[1],SelectValue[0]);
            }
          }
        }
      }
    );
  }
}
function prcom001TopFrame() {
  onblurHandler(window.event);

  // Move any "\" from end of line to the next line
  FormatEOLText(UpdateForm.prcom001);

// Note: formateText() function used because wrap=hard does not do wrapping 
//       when form not submited. 
  //var formatedtext=formateText(UpdateForm.prcom001,UpdateForm.prcom001.cols);

  var str = UpdateForm.prcom001.value;
  var maxLineLen = UpdateForm.prcom001.cols + 0;  // convert to numeric
  var formatedtext = formatTextStr(str,maxLineLen);

  UpdateForm.prcom001.value = formatedtext;

  //Checks whether there are more the 6 lines
  if (formatedtext.split(/\r?\n/).length > 6) {
    alert("Presenting Complaint Comments - Max 6 lines." +
          "\nPlease remove the extra line(s) to continue."); 
    FocusDelay(document.UpdateForm.prcom001); 
    return false;
  }
  
  //Checks whether there are more than 300 characters 
  if (formatedtext.replace(/\r?\n/gm,"").length > 300) {
    alert("Maximum 300 characters reached for Presenting Complaint Comments." +
          "\nPlease remove the extra character(s) to continue.");
    FocusDelay(document.UpdateForm.prcom001);
    return false;
  }

  var serverURL="../cgi-bin/emrweb02.pbl?reportno=11" +
                "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
                "&updateky=" + UpdateForm.updateky.value.replace(/ /g,"+") +
                "&webuseid=" + PatientLinks.webuseid.value.replace(/ /g,"+") +
                "&updttype=PRCOM" +
                "&prcom001=" + escape(formatedtext) 

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status==0) {
       ReturnValue=returnValue.return_value.split("|")
       UpdateForm.updateky.value = ReturnValue[0]; 
    }
    else {
  //   SetCookie("emrweb0201004.prcom001",UpdateForm.prcom001.value);
       // alert("The screen will now be refreshed.\n" +
       //       " Changes have not been retained.");
       location.reload();
       setTimeout('ReturnCode.select();',100);
  //   ReturnCode.select(); 
       return false;
    }
    if (top.menu==undefined){ return; }
    if (top.menu.document.all.EmergencyFrame==undefined){ return; }
    if (top.menu.document.all.EmergencyFrame.src==""){ return; }
    if (top.menu.EmergencyFrame.document.UpdateForm==undefined){return;}
    if (top.menu.EmergencyFrame.document.UpdateForm.prcom001==undefined){return;}
    if (top.menu.EmergencyFrame.document.UpdateForm.admissno==undefined){return;}
    ClinicalPage="emrweb02.pbl?reportno=1&template=100"
    if (top.menu.document.all.EmergencyFrame.src.substr(0,36)==ClinicalPage) {
      if (top.menu.EmergencyFrame.document.UpdateForm.admissno.value==
                                           UpdateForm.admissno.value) {
        top.menu.EmergencyFrame.document.UpdateForm.prcom001.value=
                                         UpdateForm.prcom001.value
      }
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status==0) {
           ReturnValue=returnValue.return_value.split("|")
           UpdateForm.updateky.value = ReturnValue[0]; 
        }
        else {
      //   SetCookie("emrweb0201004.prcom001",UpdateForm.prcom001.value);
           // alert("The screen will now be refreshed.\n" +
           //       " Changes have not been retained.");
           location.reload();
           setTimeout('ReturnCode.select();',100);
      //   ReturnCode.select(); 
           return false; 
        }
        if (top.menu==undefined){ return; }
        if (top.menu.document.all.EmergencyFrame==undefined){ return; }
        if (top.menu.document.all.EmergencyFrame.src==""){ return; }
        if (top.menu.EmergencyFrame.document.UpdateForm==undefined){return;}
        if (top.menu.EmergencyFrame.document.UpdateForm.prcom001==undefined){return;}
        if (top.menu.EmergencyFrame.document.UpdateForm.admissno==undefined){return;}
        ClinicalPage="emrweb02.pbl?reportno=1&template=100"
        if (top.menu.document.all.EmergencyFrame.src.substr(0,36)==ClinicalPage) {
          if (top.menu.EmergencyFrame.document.UpdateForm.admissno.value==
                                               UpdateForm.admissno.value) {
            top.menu.EmergencyFrame.document.UpdateForm.prcom001.value=
                                             UpdateForm.prcom001.value
          }
        }
      }
    );
  }

  return true;
}
function emvis060TopFrame() {
 if (top.menu==undefined){ return; }
 if (top.menu.document.all.EmergencyFrame==undefined){ return; }
 if (top.menu.document.all.EmergencyFrame.src==""){ return; }
 ClinicalPage="emrweb02.pbl?reportno=1&template=100"
 if (top.menu.document.all.EmergencyFrame.src.substr(0,36)==ClinicalPage) {
  if(top.menu.EmergencyFrame.document.UpdateForm==undefined){
      return; } 
  if (top.menu.EmergencyFrame.document.UpdateForm.emvis060==undefined){
      return; }
  if (top.menu.EmergencyFrame.document.UpdateForm.v060name==undefined){
      return; }
  for (var i =0 ; i < document.UpdateForm.emvis060.length; i++) {
    if (document.UpdateForm.emvis060.options[i].selected) {
      top.menu.EmergencyFrame.document.UpdateForm.emvis060.value= 
        document.UpdateForm.emvis060.options[i].value.substr(0,3);
      top.menu.EmergencyFrame.document.UpdateForm.v060name.value= 
        document.UpdateForm.emvis060.options[i].text; } };
  }
}

function savePresentingComplaint()
{
  var index = UpdateForm.emvis060.selectedIndex;
  var preComp = document.getElementById("current_precom");

  if (index != -1)
  {
    var code = UpdateForm.emvis060.options[index].value.substr(0,3);

    if (code != preComp.value)
    {
      var serverURL="../cgi-bin/emrweb02.pbl?reportno=11" +
                  "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
                  "&updateky=" + UpdateForm.updateky.value.replace(/ /g,"+") +
                  "&webuseid=" + PatientLinks.webuseid.value.replace(/ /g,"+") +
                  "&updttype=PRCOM" +
                  "&updflag1=1"+
                  "&emvis060=" + code;

      if (IEBrowser) {
        var returnValue = RSExecute(serverURL);

        if (returnValue.status==0)
        {
          ReturnValue=returnValue.return_value.split("|");
          UpdateForm.updateky.value = ReturnValue[0];
        }
      }
      else {
        var returnValue = RSExecuteFetch(serverURL);

        returnValue.then(
          function (returnValue) {
            returnValue = ParseFetchData(returnValue);  // parse fetch() result

            if (returnValue.status==0)
            {
              ReturnValue=returnValue.return_value.split("|");
              UpdateForm.updateky.value = ReturnValue[0];
            }
          }
        );
      }
    }
  }
}

function chknurse() {
 if (HiddenFields.NurseCode.value!="") {
   if (isWhitespace(document.UpdateForm.emvis130.value)) {
      alert("You can't update without entering the Nurse");
      document.UpdateForm.emvis130.focus();
      return false; }
   else{
      return true; }
 }
 return true;
}
function chkdoct() {
 if (HiddenFields.DoctorCode.value!="") {
   if (isWhitespace(document.UpdateForm.emvis007.value)) {
      alert("You can't update without entering the Doctor");
      document.UpdateForm.emvis007.focus();
      return false; }
   else{
        return true; }
  }
 return true;
}
function chkLoc() {
  if (HiddenFields.Location.value!="Discharged") {
     if (isWhitespace(document.UpdateForm.emvis006.value)) {
       alert("Please select valid Location");
       document.UpdateForm.emvis006.focus();
       return false; }
     else{
       return true; }
  }
  return true;
}

function onUpdate(){
  document.PatientLinks.checksub.value=1;
  var docchk=chkdoct();
  var nurchk=chknurse();
  var prcomupd = document.getElementById("prcomupd");

  if (docchk){ 
    if(nurchk){ 
       url = "emrweb02.pbl?reportno=1&template=4&urnumber=" +
         document.UpdateForm.urnumber.value.replace(/ /g,"+") +
         "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
         "&httprand=" + Math.random();

       document.UpdateForm.redirect.value=url;

       var locachk=chkLoc();
      
      if (locachk) 
      {
          if(prcomupd)
          {
             if(prcomupd.value==1) 
               setFormactn('PRCOM');
             else
               setFormactn('UPDAT');
           } 
           else
             setFormactn('UPDAT');
      }
    }
  }
}

function checkUR(status) {
var validateresult = validateMandatory(document.UpdateForm);
  if (validateresult==true) {
     if (status==1) {
       PatientLink('emrweb02.pbl',1,101)
     } else {
       PatientLink('emrweb02.pbl',1,109)
     }
  }
}
function validateNurse() {
  var hcpnurse = chkHcpEDNurse();
  if  (hcpnurse==true){
       validateCode('18',document.UpdateForm.emvis130,
                         document.UpdateForm.dummy5);
  }
  else {
       validateCode('17',document.UpdateForm.emvis130,
                         document.UpdateForm.dummy5,
                         document.UpdateForm.gnm,
                         SetNurseName);
  }
}

//C-0825792 - Check parameter to Use pmshcpaf/oprnuraf for ED Nurse
function chkHcpEDNurse(){
  if (document.getElementById('emcnurse')) {
      if (document.getElementById('emcnurse').value == "1") {
        return true;
       }
      else {
        return false;
      }
  }
  else {
      return false;
  }
}

//C-0825792 - Search Nurse from pmshcpaf/oprnuraf for ED Nurse
function SearchEDNurse(NurseId,ReturnNurseName) {
  var hcpnurse = chkHcpEDNurse();
  if (hcpnurse==true){
     HCPSearchFrame(NurseId,ReturnNurseName,20);
  }
  else {
     NurseSearchFrame(NurseId,ReturnNurseName);
  }
}
function SetNurseName() {
UpdateForm.dummy5.value=UpdateForm.gnm.value.replace(/\s*$/g,"")+
                              " " +
                        UpdateForm.dummy5.value.replace(/\s*$/g,"")
}

function SearchLink(server,report,template) {

 url= server +
     "?reportno=" + report +
     "&template=" + template +
     "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
     "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+")

//
 if(document.PatientLinks.d_regiflag!=undefined) {
   url = url + "&regiflag=" + PatientLinks.d_regiflag.value.replace(/ /g,"+")
 }

 if (top.menu.EmergencyFrameLink) {
   top.menu.EmergencyFrameLink(url,0,0,1008,521);
 } else {
   DFrameLink(url,0,0,1008,521);
 }
}

function PatientLink(server,report,template) {
 url= server + 
     "?reportno=" + report +
     "&template=" + template +
     "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
     "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") 
//
 if(document.PatientLinks.d_regiflag!=undefined) {
   url = url + "&regiflag=" + PatientLinks.d_regiflag.value.replace(/ /g,"+")
 }
 if (top.menu.EmergencyFrameLink) {
   top.menu.EmergencyFrameLink(url,0,0,1008,521);
 } else {
   location.href=url;
 }
}
function EmergencyFullPatientLink(server,report,template) {
 url= server + 
     "?reportno=" + report +
     "&template=" + template +
     "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
     "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") 
 if (top.menu.EmergencyFrameLink) {
   top.menu.EmergencyFrameLink(url,0,0,1008,521);
 } else {
   location.href=url;
 }
}
function updateNext(test) {
  if (isWhitespace(UpdateForm.emvis007.value)) {
    var serverURL   = "../cgi-bin/emrweb02.pbl?reportno=3" +
                      "&admissno=" + 
                       UpdateForm.admissno.value.replace(/ /g,"+") +
                      "&updttype=2&nextpage=8"

    if (IEBrowser) {
      var returnValue = RSExecute(serverURL); 

      parent.menu.location.reload();
    }
    else {
      var returnValue = RSExecuteFetch(serverURL);

      returnValue.then(
        function (returnValue) {
          returnValue = ParseFetchData(returnValue);  // parse fetch() result

          parent.menu.location.reload();
        }
      );
    }
  }
  else {
    alert('Patient Already Seen.'); 
  }
}
function checkCode(){
 if(!isWhitespace(document.UpdateForm.emvis130.value)){
   validateNurse();      
  }
  if(!isWhitespace(document.UpdateForm.emvis007.value)){
   validateCode('3',document.UpdateForm.emvis007,document.UpdateForm.dummy3);
  }
}
function checkurno() {
  if (UpdateForm.urnumber.value==0) {
   SearchLink('patweb90.pbl',1,101);
  }
  else {
   PatientLink('emrweb02.pbl',1,1);
  }
}
function fnPatientLink() {
  if (top.menu==undefined) { return }
  admissno=PatientLinks.admissno.value.replace(/ /g,"+")
  urnumber=PatientLinks.urnumber.value.replace(/ /g,"+")
  if (top.menu.defPatientLink.serverid==undefined) {
    serverid="patweb98"
    reportno="01"
    template="001" }
  else {
    serverid=top.menu.defPatientLink.serverid.value
    reportno=top.menu.defPatientLink.reportno.value
    template=top.menu.defPatientLink.template.value }
  url=serverid + ".pbl?reportno=" + reportno +
                "&template=" + template +
                "&urnumber=" + urnumber +
                "&admissno=" + admissno
 if (top.menu.EmergencyFrameLink) {
   top.menu.EmergencyFrameLink(url,0,0,1008,521);
 } else {
   location.href=url;
 }
}
function SmallFrameEmr(template) {
  PatientLinks.template.value=template
  PatientLinks.reportno.value=1
  Left=(document.body.clientWidth-600)/2
  DFrameSubmit(PatientLinks,0,Left,600,300)
}
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
  //
    if (top.TogglePanel) {
      parent.menu.location.reload();
    } else {
      if (top.menu.EmergencyFrame) {
        if (top.menu.EmergencyFrame.location=="about:blank") {
          parent.menu.location.reload();
        }
        else {
          parent.menu.EmergencyFrame.location.reload(); 
        }
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
          //
            if (top.TogglePanel) {
              parent.menu.location.reload();
            } else {
              if (top.menu.EmergencyFrame) {
                if (top.menu.EmergencyFrame.location=="about:blank") {
                  parent.menu.location.reload();
                }
                else {
                  parent.menu.EmergencyFrame.location.reload(); 
                }
              }
            }
          }
        );
      }
    );
  }
}
function UpdEmrDoc(doctor) {
  if (isWhitespace(document.UpdateForm.emvis007.value)) {
    if (isWhitespace(document.UpdateForm.emvis007.defaultValue)) {
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
  //
    if (top.TogglePanel) {
      parent.menu.location.reload();
    } else {
      if (top.menu.EmergencyFrame) {
        if (top.menu.EmergencyFrame.location=="about:blank") {
          parent.menu.location.reload();
        }
        else {
          parent.menu.EmergencyFrame.location.reload(); 
        }
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
              //
                if (top.TogglePanel) {
                  parent.menu.location.reload();
                } else {
                  if (top.menu.EmergencyFrame) {
                    if (top.menu.EmergencyFrame.location=="about:blank") {
                      parent.menu.location.reload();
                    }
                    else {
                      parent.menu.EmergencyFrame.location.reload(); 
                    }
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
function UpdNur(nurse) {
  if (isWhitespace(document.UpdateForm.emvis130.value)) {
    if (isWhitespace(document.UpdateForm.emvis130.defaultValue)) {
      return;
    }
    alert("Invalid Nurse deletion - Please use the eraser icon");
    document.UpdateForm.emvis130.value=document.UpdateForm.emvis130.defaultValue;
    document.UpdateForm.emvis130.focus();
    return;
  }
  nurse.value=nurse.value.toUpperCase()
  a=trim(UpdateForm.emvis130.value);
  b=trim(UpdateForm.emvis130.defaultValue);
  if (document.UpdateForm.emvis130.value.substr(0,1) == " ") {
      document.UpdateForm.emvis130.value = a;
  }
  if (a == b)  { return; }
  
  var hcpnurse = chkHcpEDNurse();
  if (hcpnurse==true) {
    var serverURL = "../cgi-bin/patweb80.pbl?reportno=18" +
                    "&valdcode=" + nurse.value.replace(/ /g,"+")
  }
  else {
    var serverURL = "../cgi-bin/patweb80.pbl?reportno=17" +
                    "&valdcode=" + nurse.value.replace(/ /g,"+")
  }

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status!=0) {
      document.UpdateForm.emvis130.value=document.UpdateForm.emvis130.defaultValue;
      document.UpdateForm.dummy5.value=document.UpdateForm.dummy5.defaultValue;
      UpdateForm.emvis130.focus();  
      return; 
    }

    admissno=document.UpdateForm.admissno.value;
    user=document.PatientLinks.webuseid.value;

    if (document.UpdateForm.nurupind != undefined) {
      var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=4" +
                        "&admissno=" + admissno.replace(/ /g,"+") +
                        "&webuseid=" + user.replace(/ /g,"+") +
                        "&updttype=ALNUR" +
                        "&doctcode=" + nurse.value.replace(/ /g,"+") +
                        "&nurupind=" + 
                         document.UpdateForm.nurupind.value.replace(/ /g,"+")
    } else {
      var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=4" +
                        "&admissno=" + admissno.replace(/ /g,"+") +
                        "&webuseid=" + user.replace(/ /g,"+") +
                        "&updttype=ALNUR" +
                        "&doctcode=" + nurse.value.replace(/ /g,"+")
    }

    var returnValue = RSExecute(serverURL);
    location.reload();
  //
    if (top.TogglePanel) {
      parent.menu.location.reload();
    } else {
      if (top.menu.EmergencyFrame) {
        if (top.menu.EmergencyFrame.location=="about:blank") {
          parent.menu.location.reload();
        }
        else {
          parent.menu.EmergencyFrame.location.reload();
        }
      }
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status!=0) {
          document.UpdateForm.emvis130.value=document.UpdateForm.emvis130.defaultValue;
          document.UpdateForm.dummy5.value=document.UpdateForm.dummy5.defaultValue;
          UpdateForm.emvis130.focus();  
          return; 
        }

        admissno=document.UpdateForm.admissno.value;
        user=document.PatientLinks.webuseid.value;

        if (document.UpdateForm.nurupind != undefined) {
          var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=4" +
                            "&admissno=" + admissno.replace(/ /g,"+") +
                            "&webuseid=" + user.replace(/ /g,"+") +
                            "&updttype=ALNUR" +
                            "&doctcode=" + nurse.value.replace(/ /g,"+") +
                            "&nurupind=" + 
                             document.UpdateForm.nurupind.value.replace(/ /g,"+")
        } else {
          var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=4" +
                            "&admissno=" + admissno.replace(/ /g,"+") +
                            "&webuseid=" + user.replace(/ /g,"+") +
                            "&updttype=ALNUR" +
                            "&doctcode=" + nurse.value.replace(/ /g,"+")
        }

        var returnValue = RSExecuteFetch(serverURL);

        returnValue.then(
          function (returnValue) {
            returnValue = ParseFetchData(returnValue);  // parse fetch() result

            location.reload();
          //
            if (top.TogglePanel) {
              parent.menu.location.reload();
            } else {
              if (top.menu.EmergencyFrame) {
                if (top.menu.EmergencyFrame.location=="about:blank") {
                  parent.menu.location.reload();
                }
                else {
                  parent.menu.EmergencyFrame.location.reload();
                }
              }
            }
          }
        );
      }
    );
  }
}
function DelDoc() {
  if (isWhitespace(document.UpdateForm.emvis007.value)) { return; }
  if (!confirm("Are you sure you want to delete this doctor?" +
               "\nOk to continue, Cancel to abort")) {
    return;
  }
  doctor="          ";
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
  //
    if (top.TogglePanel) {
      parent.menu.location.reload();
    } else {
      if (top.menu.EmergencyFrame == undefined) {
        parent.menu.location.reload();
      } else if (top.menu.EmergencyFrame.location=="about:blank") {
        parent.menu.location.reload();
      }
      else {
        parent.menu.EmergencyFrame.location.reload();
      }
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        location.reload();
      //
        if (top.TogglePanel) {
          parent.menu.location.reload();
        } else {
          if (top.menu.EmergencyFrame == undefined) {
            parent.menu.location.reload();
          } else if (top.menu.EmergencyFrame.location=="about:blank") {
            parent.menu.location.reload();
          }
          else {
            parent.menu.EmergencyFrame.location.reload();
          }
        }
      }
    );
  }
}
function DelDocInitAssessor(doctcode) {
  f = document.UpdateForm;
  if (f.discstat.value != 1) { return; }
  if (isWhitespace(doctcode.value)) { return; }

  if(!confirm("Are you sure you want to delete this initial assessor?" +
              "\nOk to continue, Cancel to abort")) {
    return;
  }

  UpdateForm.emvis164.value = "";
  RemoteEmrUpdate(f.admissno,f.emvis164);
  UpdateForm.emvis165.value = "";
  RemoteEmrUpdate(f.admissno,f.emvis165);
  UpdateForm.emvis166.value = "";
  RemoteEmrUpdate(f.admissno,f.emvis166);

  doctor="          ";
  admissno=document.UpdateForm.admissno.value;
  user=document.PatientLinks.webuseid.value;
  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=65" +
                    "&admissno=" + admissno.replace(/ /g,"+") +
                    "&doctcode=" + doctor.replace(/ /g,"+") +
                    "&webuseid=" + user.replace(/ /g,"+") +
                    "&updttype=INTAS"

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);
    ReloadScreen();
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        ReloadScreen();
      }
    );
  }
}
function ReloadScreen() {
  location.reload();

  if(top.TogglePanel) {
    parent.menu.location.reload();
  }
  else {
    if (top.menu.EmergencyFrame == undefined) {
      parent.menu.location.reload();
    } else if (top.menu.EmergencyFrame.location=="about:blank") {
      parent.menu.location.reload();
    }
    else {
      parent.menu.EmergencyFrame.location.reload();
    }
  }
}
function DelDocOther(doctcode) {
  f = document.UpdateForm;
  if (f.discstat.value != 1) { return; }
  if (isWhitespace(doctcode.value)) { return; }

  if(!confirm("Are you sure you want to delete this other/senior doctor?" +
              "\nOk to continue, Cancel to abort")) {
    return;
  }
  doctor="          ";
  admissno=document.UpdateForm.admissno.value;
  user=document.PatientLinks.webuseid.value;
  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=63" +
                    "&admissno=" + admissno.replace(/ /g,"+") +
                    "&doctcode=" + doctor.replace(/ /g,"+") +
                    "&webuseid=" + user.replace(/ /g,"+") +
                    "&updttype=OTDOC"

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);
    ReloadScreen();
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        ReloadScreen();
      }
    );
  }
}
function DelDocAllHealthHCP(doctcode) {
  f = document.UpdateForm;
  if (f.discstat.value != 1) { return; }
  if (isWhitespace(doctcode.value)) { return; }

  if(!confirm("Are you sure you want to delete this allied health HCP?" +
              "\nOk to continue, Cancel to abort")) {
    return;
  }

  UpdateForm.emvis179.value = "";
  RemoteEmrUpdate(f.admissno,f.emvis179);

  ReloadScreen();
}
function DelNurse() {
  if (isWhitespace(document.UpdateForm.emvis130.value)) { return; }
  if (!confirm("Are you sure you want to delete this nurse?" +
              "\nOk to continue, Cancel to Abort")) {
    return;
  }
  nurse="      ";                         
  admissno=document.PatientLinks.admissno.value;
  user=document.PatientLinks.webuseid.value;

  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=4" +
                    "&admissno=" + admissno.replace(/ /g,"+") +
                    "&webuseid=" + user.replace(/ /g,"+") +
                    "&doctcode=" + nurse.replace(/ /g,"+") +
                    "&updttype=ALNUR"

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    location.reload();
  //
    if (top.TogglePanel) {
      parent.menu.location.reload();
    } else {
      if (top.menu.EmergencyFrame == undefined) {
        parent.menu.location.reload();
      } else if (top.menu.EmergencyFrame.location=="about:blank") {
        parent.menu.location.reload();
      }
      else {
        parent.menu.EmergencyFrame.location.reload();
      }
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        location.reload();
      //
        if (top.TogglePanel) {
          parent.menu.location.reload();
        } else {
          if (top.menu.EmergencyFrame == undefined) {
            parent.menu.location.reload();
          } else if (top.menu.EmergencyFrame.location=="about:blank") {
            parent.menu.location.reload();
          }
          else {
            parent.menu.EmergencyFrame.location.reload();
          }
        }
      }
    );
  }
}
function refreashTop() {
onUpdate();
//
//setTimeout('refreashTopA()',100)    // Map refresh done in redirect
//
}
function refreashTopA() {
    if (parent.menu.document.readyState=="complete") {
      parent.menu.location.reload(); }
}
function NurseData() {
  PatientLinks.reportno.value="01"
  PatientLinks.template.value="036"
  PatientLinks.action="emrweb02.pbl"
  Left=(document.body.clientWidth-600)/2
  DFrameSubmit(PatientLinks,0,Left,600,300);
}
function DoctorData() {
  PatientLinks.reportno.value="01"
  PatientLinks.template.value="035"
  PatientLinks.action="emrweb02.pbl"
  Left=(document.body.clientWidth-600)/2
  DFrameSubmit(PatientLinks,0,Left,600,300);
}

function NurseDataHEA() {
  PatientLinks.reportno.value="01"
  PatientLinks.template.value="036"
  PatientLinks.action="emrweb02.pbl"
  Left=(document.body.clientWidth-900)/2
  DFrameSubmit(PatientLinks,0,Left,900,300);
}
function DoctorDataHEA() {
  PatientLinks.reportno.value="01"
  PatientLinks.template.value="035"
  PatientLinks.action="emrweb02.pbl"
  Left=(document.body.clientWidth-900)/2
  DFrameSubmit(PatientLinks,0,Left,900,300);
}

function sentCom(SearchField,ReturnSelect,CatCode) {
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=32" +
                    "&valdcode=" + SearchField.value.replace(/ /g,"+") +
                    "&valdcatc=" + CatCode.value.replace(/ /g,"+")

  if (IEBrowser) {
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
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status==0) {
          ReturnSelect.options.length=0
          ReturnValue=returnValue.return_value.split("|");
          for (var j=0; j < ReturnValue.length; j++) {
             if (!isWhitespace(ReturnValue[j])) {
               SelectValue=ReturnValue[j].split(",");
               ReturnSelect.options[ReturnSelect.options.length]=
                new Option(SelectValue[1],SelectValue[0]); } } }
      }
    );
  }
}
function submitFormRedirect() {
if(document.PatientLinks.checksub.value==1) { return;}
//  if (IsDirty(UpdateForm)) {
  if (PageDirty) {
    ans=confirm("Information has changed. Perform Update Now.")
    if (ans) {
      UpdateForm.nextpage.value="0";
      UpdateForm.target="PopUpFrame";
      UpdateForm.submit(); 
    }
  }
}
function SubmitForm() {
  PatientLinks.checksub.value="1";
  UpdateForm.nextpage.value="0";
  UpdateForm.target="PopUpFrame";
  UpdateForm.submit(); 
}
function IsDirty(eForm) {
  if (UpdateForm.savmanag.value=="1") { return true; }
  for (var i=0; i < eForm.length; i++) {
    var eElem = eForm.elements[i];
    if ( eElem.type == "text" ) { 
      if (trim(eElem.value) != trim(eElem.defaultValue))  {
        return true;}
     }
  }
  return false;
}
function setFlag() {
  document.UpdateForm.savmanag.value=1
}  
function SaveMgtNte(ReturnCode) {
  onblurHandler(window.event)
//70
  //var formatedtext=formateText(UpdateForm.vicmt002,'60') 

  var str = UpdateForm.vicmt002.value;
  var maxLineLen = UpdateForm.vicmt002.cols + 0;  // convert to numeric
  var formatedtext = formatTextStr(str,maxLineLen);

  var serverURL="../cgi-bin/emrweb02.pbl?reportno=12" +
                "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
                "&updateky=" + UpdateForm.updateky.value.replace(/ /g,"+") +
                "&webuseid=" + PatientLinks.webuseid.value.replace(/ /g,"+") +
                "&updttype=MGNOT" + 
                "&vicmt002=" + escape(formatedtext) 

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status==0) {
       ReturnValue=returnValue.return_value.split("|")
       UpdateForm.updateky.value = ReturnValue[0]; }
    else {
       alert("The screen will now be refreshed.\n" +
             " Changes have not been retained.");
       location.reload();
       setTimeout('ReturnCode.select();',100);
  //   ReturnCode.select(); 
       return; }
    if (top.menu==undefined){ return; }
    if (top.menu.document.all.EmergencyFrame==undefined){ return; }
    if (top.menu.document.all.EmergencyFrame.src==""){ return; }
    if (top.menu.EmergencyFrame.document.UpdateForm==undefined){return;}
    if (top.menu.EmergencyFrame.document.UpdateForm.vicmt002==undefined){return;}
    ClinicalPage="emrweb02.pbl?reportno=1&template=100"
    if (top.menu.document.all.EmergencyFrame.src.substr(0,36)==ClinicalPage) {
      top.menu.EmergencyFrame.document.UpdateForm.vicmt002.value=
                    UpdateForm.vicmt002.value 
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status==0) {
           ReturnValue=returnValue.return_value.split("|")
           UpdateForm.updateky.value = ReturnValue[0]; }
        else {
           alert("The screen will now be refreshed.\n" +
                 " Changes have not been retained.");
           location.reload();
           setTimeout('ReturnCode.select();',100);
      //   ReturnCode.select(); 
           return; }
        if (top.menu==undefined){ return; }
        if (top.menu.document.all.EmergencyFrame==undefined){ return; }
        if (top.menu.document.all.EmergencyFrame.src==""){ return; }
        if (top.menu.EmergencyFrame.document.UpdateForm==undefined){return;}
        if (top.menu.EmergencyFrame.document.UpdateForm.vicmt002==undefined){return;}
        ClinicalPage="emrweb02.pbl?reportno=1&template=100"
        if (top.menu.document.all.EmergencyFrame.src.substr(0,36)==ClinicalPage)
        {
          top.menu.EmergencyFrame.document.UpdateForm.vicmt002.value=
                        UpdateForm.vicmt002.value 
        }
      }
    );
  }
}
function SaveMgtNteBLANK(ReturnCode) {
  onblurHandler(window.event)
//70
  var formatedtext=formateTextBLANK(UpdateForm.vicmt002,'60')
  var serverURL="../cgi-bin/emrweb02.pbl?reportno=12" +
                "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
                "&updateky=" + UpdateForm.updateky.value.replace(/ /g,"+") +
                "&webuseid=" + PatientLinks.webuseid.value.replace(/ /g,"+") +
                "&updttype=MGNOT" +
                "&vicmt002=" + escape(formatedtext)

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status==0) {
       ReturnValue=returnValue.return_value.split("|")
       UpdateForm.updateky.value = ReturnValue[0]; }
    else {
       alert("The screen will now be refreshed.\n" +
             " Changes have not been retained.");
       location.reload();
       setTimeout('ReturnCode.select();',100);
  //   ReturnCode.select(); 
       return; }
    if (top.menu==undefined){ return; }
    if (top.menu.document.all.EmergencyFrame==undefined){ return; }
    if (top.menu.document.all.EmergencyFrame.src==""){ return; }
    if (top.menu.EmergencyFrame.document.UpdateForm==undefined){return;}
    if (top.menu.EmergencyFrame.document.UpdateForm.vicmt002==undefined){return;}
    ClinicalPage="emrweb02.pbl?reportno=1&template=100"
    if (top.menu.document.all.EmergencyFrame.src.substr(0,36)==ClinicalPage) {
     top.menu.EmergencyFrame.document.UpdateForm.vicmt002.value=
                    UpdateForm.vicmt002.value 
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status==0) {
           ReturnValue=returnValue.return_value.split("|")
           UpdateForm.updateky.value = ReturnValue[0]; }
        else {
           alert("The screen will now be refreshed.\n" +
                 " Changes have not been retained.");
           location.reload();
           setTimeout('ReturnCode.select();',100);
      //   ReturnCode.select(); 
           return; }
        if (top.menu==undefined){ return; }
        if (top.menu.document.all.EmergencyFrame==undefined){ return; }
        if (top.menu.document.all.EmergencyFrame.src==""){ return; }
        if (top.menu.EmergencyFrame.document.UpdateForm==undefined){return;}
        if (top.menu.EmergencyFrame.document.UpdateForm.vicmt002==undefined){return;}
        ClinicalPage="emrweb02.pbl?reportno=1&template=100"
        if (top.menu.document.all.EmergencyFrame.src.substr(0,36)==ClinicalPage) {
         top.menu.EmergencyFrame.document.UpdateForm.vicmt002.value=
                        UpdateForm.vicmt002.value 
        }
      }
    );
  }
}
function textCounter(field,cntfield,maxlimit) {
if (field.value.length > maxlimit) { 
field.value = field.value.substring(0, maxlimit);}
else {
cntfield.value = maxlimit - field.value.length;}
}
function AddMgtNote() {
  PatientLinks.reportno.value="01"
  PatientLinks.template.value="080"
  PatientLinks.action="emrweb02.pbl"
  Left=(document.body.clientWidth-700)/2
  DFrameSubmit(PatientLinks,0,Left,700,300);
}
function SetDischarged() {
  if(document.HiddenFields==undefined) { return; }
  if(document.HiddenFields.DischargeComplete==undefined) { return; }
  if(document.HiddenFields.DischargeComplete.value!="2" &&
     document.HiddenFields.DischargeComplete.value!="3" ) { return; }
//
  if ( (document.getElementById("DocDelBut") != undefined) &&
       (document.getElementById("NurDelBut") != undefined) ) {
    document.getElementById("DocDelBut").onclick=DischargedMessage;
    document.getElementById("NurDelBut").onclick=DischargedMessage;
  }
}
function DischargedMessage() {
  alert("This patient is discharged, Please use supervisor functions");
}
function changeMHDocDateTime() {
  PatientLinks.reportno.value="01"
  PatientLinks.template.value="117"
  PatientLinks.action="emrweb02.pbl"
  Left=(document.body.clientWidth-600)/2
  DFrameSubmit(PatientLinks,0,Left,600,350);
}
function OtherDoctorData() {
  PatientLinks.reportno.value="01"
  PatientLinks.template.value="122"
  PatientLinks.action="emrweb02.pbl"
  Left=(document.body.clientWidth-600)/2
  DFrameSubmit(PatientLinks,0,Left,600,300);
}
function DocHandoverForm(DocCode) {
  if (document.PatientLinks.newdoctr == undefined)
    return;

  document.PatientLinks.action="emrweb02.pbl";
  document.PatientLinks.reportno.value="25";
  document.PatientLinks.template.value="001";
  document.PatientLinks.newdoctr.value=DocCode;

  //Top=(document.body.clientHeight - 580)/2;
  Left=(document.body.clientWidth - 950)/2;

  DFrameSubmit(document.PatientLinks,0,Left,950,580);
}
function BedReqLink() {
  PatientLink('patweb10.pbl',8,1);
}
function ProcedureLink() {
  user=document.PatientLinks.webuseid.value;
  var serverURL = "../cgi-bin/emrweb08.pbl?reportno=9" +
                    "&webuseid=" + user.replace(/ /g,"+") +
                    "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+")

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    ReturnValue=returnValue.return_value.split("|");
    if (returnValue.status==0) {
      if (ReturnValue[0]=="1") {
        alert("Procedure notes are locked by another user id - " + ReturnValue[2]);
        return;
      }
    }
    PatientLink('emrweb06.pbl',2,14);
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        ReturnValue=returnValue.return_value.split("|");
        if (returnValue.status==0) {
          if (ReturnValue[0]=="1") {
            alert("Procedure notes are locked by another user id - " + ReturnValue[2]);
            return;
          }
        }
        PatientLink('emrweb06.pbl',2,14);
      }
    );
  }
}
function DiagnosisLink() {
  PatientLink('emrweb06.pbl',2,1);
}
function PublicFaclityFields() {
  if(!VariableNameExists('PublicFacility')) {
    return;
  }
  if(!PublicFacility) {
   return;
  }
//  document.getElementById("UpdateButton").style.display="none";
  document.getElementById("ObservationButton").style.display="none";
  document.getElementById("ReturnButton").value="Exit";
  document.getElementById("ClinicalButton").style.display="none";
  document.getElementById("ProceduresButton").style.display="";
  document.getElementById("PublicSpan1").innerHTML=
  document.getElementById("ShowPublicSpan1").innerHTML;
  document.getElementById("TriageNurseDate").style.display="";
  document.getElementById("ShowManagementNotes").style.display="none";
  document.getElementById("ShowStream").style.display="";
  document.getElementById("field_emvis007").innerText="Treating Doctor";
  document.getElementById("emvis007").title="Treating Doctor";
  checkFirstSeenHEA();
  var diagCookieName = "diagnosisCookie-" + trim(UpdateForm.admissno.value);
  var diagCookieVal = GetCookieData(diagCookieName);
  if (!isWhitespace(document.HiddenFields.PrimaryDiagnosis.value)) {
    document.UpdateForm.diagnosisSearch.value =
    document.HiddenFields.PrimaryDiagnKeyw.value.substring(0,1);
    if (diagCookieVal != "unknown") {
      document.UpdateForm.diagnosisSearch.value = diagCookieVal;
      ExpireCookiePath("diagnosisCookie-" + trim(UpdateForm.admissno.value));
    }

    getDiagnosis(UpdateForm.diagnosisSearch,
                 UpdateForm.emvcd005,
                 UpdateForm.emvcd033,
                 SelectDiagList);

    
  }
  if(!isWhitespace(document.UpdateForm.emvis156.value) ||
     !isWhitespace(document.UpdateForm.emvis157.value)) {
     document.UpdateForm.emvis156.className="Readonly PastDate";
     document.UpdateForm.emvis156.readOnly=true;
     document.UpdateForm.emvis157.className="Readonly";
     document.UpdateForm.emvis157.readOnly=true;
  }
  MandInitAssessor();
  if(isWhitespace(document.HiddenFields.cat_YNdesc.value)) {
    document.getElementById("InsertINTReason").innerHTML=
    "<input type=hidden name=emvis167>";
  }
  if(!isWhitespace(document.UpdateForm.emvis164.value)) {
    document.UpdateForm.emvis164.className="Readonly";
    document.UpdateForm.emvis164.readOnly=true;
  }
}
function SelectDiagList() {
  for (var i=0; i < document.UpdateForm.emvcd005.length; i++) {
    if (document.UpdateForm.emvcd005.options[i].value.substring(0,10)==
        document.HiddenFields.PrimaryDiagnCode.value) {
      document.UpdateForm.emvcd005.selectedIndex=i;
    }
  }

  document.UpdateForm.emvcd033.value =
    document.HiddenFields.PrimaryDiagnFtxt.value;
}
function checkFirstSeenHEA() {
 if (!isWhitespace(document.UpdateForm.frsndoct.value)) {
   document.UpdateForm.frsndoct.className="readonly";
   document.UpdateForm.frsndoct.readOnly=true;
   document.UpdateForm.frsndate.className="Date readonly";
   document.UpdateForm.frsndate.readOnly=true;
   document.UpdateForm.frsntime.className="readonly";
   document.UpdateForm.frsntime.readOnly=true;

   document.UpdateForm.FirstSeenDoctorButton.disabled=true;
 }
}
function AdmDoctor() {
 validateCode(31,UpdateForm.emvis106,UpdateForm.n_emvis106);
 UpdateFieldEMR(document.UpdateForm.admissno,1,UpdateForm.emvis106);
 UpdatePreAdmReq(document.UpdateForm.admissno);
}
function ClrAdmDoctor() {
 UpdateForm.emvis106.value="";
 UpdateForm.n_emvis106.value="";
 UpdateFieldEMR(document.UpdateForm.admissno,1,UpdateForm.emvis106);
 UpdatePreAdmReq(document.UpdateForm.admissno);
}
function UpdateFieldEMR(Visit,OptionType,ReturnCode) {
  ReturnFunction="" ;
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
//-----------------------------------------------------------------
// HealthScope function to push the ED admitting doctor EMVIUR01
// to the linked pre admission or outstanding bed request
//-----------------------------------------------------------------
function UpdatePreAdmReq(adm) {
  ReturnFunction="" ;
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
function updateCB() {
  if (document.UpdateForm.d_emvis091.checked==true) {
    document.UpdateForm.emvis091.value="1";
  } else {
    document.UpdateForm.emvis091.value="0";
  }
}
function updateDrAdmitting() {
  updateCB();
  UpdateFieldEMR(document.UpdateForm.admissno,3,document.UpdateForm.emvis091);
}
function submitFreeFormat() {
  if (isWhitespace(document.UpdateForm.emvcd005.value)&&
      !isWhitespace(document.UpdateForm.emvcd033.value)) {
    alert("Primary Diagnosis selection field is mandatory.");
  } else {
    submitPrimaryDiag();
  }
}

//Submits the primary diagnosis
function submitPrimaryDiag() {

  //Creates a cookie to hold the admission number
  var diagCookieName = "diagnosisCookie-" + trim(UpdateForm.admissno.value);

  //Replaces double quotes with single quotes
  document.UpdateForm.emvcd033.value =
  document.UpdateForm.emvcd033.value.replace(/"/g,"'");

  //Checks if the Diagnosis Search field is blank and updates it
  //Saves the cookie and refreshes the screen
  if (isWhitespace(document.UpdateForm.diagnosisSearch.value)) {
    UpdateFieldVCD(UpdateForm.admissno,
      "          "+UpdateForm.emvcd003.value,
      " ",
      function () {
        SetCookie(diagCookieName,document.UpdateForm.diagnosisSearch.value);
        StdPageRefresh();
      }
    );

  //Otherwise validates the diagnosis, passes functions and cookie through
  } else {
    if (!isWhitespace(document.UpdateForm.emvcd005.value)) {
      validateEMRDiagnosis(validateEMRDiagnosisRetFuncTrue,
                           validateEMRDiagnosisRetFuncFalse, diagCookieName) 
    }
  }
}

//Function that is fired if the EMR Diagnosis is true
function validateEMRDiagnosisRetFuncTrue(diagCookieName) {

  //Updates the VCD field, saves the cookie and refreshes the screen
  UpdateFieldVCD(UpdateForm.admissno,
    UpdateForm.emvcd005.value.substring(0,10)+UpdateForm.emvcd003.value,
    UpdateForm.emvcd033.value,
    function () {

      SetCookie(diagCookieName,document.UpdateForm.diagnosisSearch.value);
      StdPageRefresh();
    }
  );
}

//If the validate EMR Diagnosis is false, returns to the search input
function validateEMRDiagnosisRetFuncFalse() {
  FocusDelay(document.UpdateForm.diagnosisSearch);
}

//Updates the VCD field
function UpdateFieldVCD(Visit,ReturnCode,ReturnDesc) {

  //Clears the return function
  ReturnFunction="" ;

  //Cycles through the arguments passed through after the third
  //argument
  for (var i=3; i < UpdateFieldVCD.arguments.length; i++) {

    //If the argument is a function, assigns it to return function
    if (typeof(UpdateFieldVCD.arguments[i]) == 'function') {
      ReturnFunction=UpdateFieldVCD.arguments[i] }
    else {

      //Clears the argument
      UpdateFieldVCD.arguments[i].value=""; }  }

  //Builds the URL for the server
  var serverURL  = "../cgi-bin/emrweb08.pbl?reportno=24" +
               "&admissno=" + Visit.value.replace(/ /g,"+") +
               "&valdcode=" + ReturnCode.replace(/ /g,"+") +
               "&valddesc=" + escape(ReturnDesc.replace(/ /g,"+"))

  //Internet Explorer
  if (IEBrowser) {

    //Executes a fetch
    var returnValue = RSExecute(serverURL);

    //Checks if the fetch was successful
    if (returnValue.status==0) {
      if (returnValue.return_value=="1") {
        alert("Only Free Format Description from Primary Diagnosis is defaulted to Bed Request.");
      }
    }
    else {
      FocusDelay(ReturnCode);
    }

    //Executes the return function
    if (typeof(ReturnFunction) == 'function') { ReturnFunction() }
  }

  //Non-IE Browsers
  else {

    //Executes the fetch
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(

      //Once completed parses the results
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

      //Checks if it was successful
        if (returnValue.status==0) {
          if (returnValue.return_value=="1") {
            alert("Only Free Format Description from Primary Diagnosis is defaulted to Bed Request.");
          }
        }
        else {
          FocusDelay(ReturnCode);
        }

        //Checks if the ReturnFuction is a function, and if so, executes it
        if (typeof(ReturnFunction) == 'function') { ReturnFunction() }
      }
    );
  }
}
 
//Validates the EMR Diagnosis
function validateEMRDiagnosis(RetFuncTrue,RetFuncFalse, diagCookie) {

  //Builds the URL for accessing the server
  var serverURL="../cgi-bin/emrweb08.pbl?reportno=23" +
                "&emvcd001="+UpdateForm.emvcd001.value.replace(/ /g,"+") +
                "&emvcd002="+UpdateForm.emvcd002.value.replace(/ /g,"+") +
                "&emvcd003="+UpdateForm.emvcd003.value.replace(/ /g,"+") +
       "&emvcd005="+UpdateForm.emvcd005.value.substring(0,10).replace(/ /g,"+");

  //Internet Explorer
  if (IEBrowser) {

    //Executes the fetch
    var returnValue=RSExecute(serverURL);

    //Was the fetch successful
    if (returnValue.status==0) {

      //Does the record already exist?
      if (returnValue.return_value==1) {
        alert("Error: Diagnosis Record already exists.");

        //Checks if a false function passed through, and executes it
        if (typeof(RetFuncFalse) == 'function') { RetFuncFalse() }
        return false;
      }
    }

    //Checks if the true function was passed through, and executes it
    if (typeof(RetFuncTrue) == 'function') { RetFuncTrue(diagCookie) }
  }

  //Other browsers
  else {

    //Executes the fetch
    var returnValue = RSExecuteFetch(serverURL);

    //Once the results have been recieved
    returnValue.then(
      function (returnValue) {

        //Reads the results of the fetch
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        //If it was successful
        if (returnValue.status==0) {

          //Checks if the diagnosis exists.
          if (returnValue.return_value==1) {
            alert("Error: Diagnosis Record already exists.");

            //Checks if the false function was passed through, and 
            //executes it if it did.
            if (typeof(RetFuncFalse) == 'function') { RetFuncFalse() }
            return false;
          }
        }

        //Checks if the true function was passed through, and executes it if
        //it was. This allows this function to execute different return
        //functions as opposed to a single set return function
        if (typeof(RetFuncTrue) == 'function') { RetFuncTrue(diagCookie) }
      }
    );
  }
}

var promptedErrDTAD=false;
function resetErrDTAD() {
  window.setTimeout(function () { promptedErrDTAD = false; }, 100);
}

function DecisionToAdmitDate(ev) {
  u=document.UpdateForm;
  h=document.HiddenFields;

  if (!checkDate(u.emvis158,u.emvis158.title)) {
    return;
  }

  if (promptedErrDTAD) {
    CancelEvent(ev);
    return false;  // already prompted error
  }

  if (!isWhitespace(u.emvis158.value) && !isWhitespace(u.emvis159.value)) {
    if (!CheckDateTimeRange(h.emvis001,h.emvis002,u.emvis158,u.emvis159)) {
      alert("Error: Decision to admit date/time " +
            "can't be before the arrival date/time.");
      promptedErrDTAD=true;
      return false;
    }
  }

  if (!isWhitespace(h.emvis128.value) && !isWhitespace(h.emvis129.value) &&
     !isWhitespace(u.emvis158.value) && !isWhitespace(u.emvis159.value)) {
    if (!CheckDateTimeRange(h.emvis128,h.emvis129,u.emvis158,u.emvis159)) {
      alert("Error: Decision to admit date/time " +
            "can't be before the triage date/time.");
      promptedErrDTAD=true;
      return false;
    }
  }

  if (h.DischargeComplete != "1" && 
     !isWhitespace(h.emvis024.value) && !isWhitespace(h.emvis025.value) &&
     !isWhitespace(u.emvis158.value) && !isWhitespace(u.emvis159.value)) {
    if (CheckDateTimeRange(h.emvis024,h.emvis025,u.emvis158,u.emvis159)) {
      alert("Error: Decision to admit date/time " +
            "can't be after the discharge date/time.");
      promptedErrDTAD=true;
      return false;
    }
  }

  RemoteEmrUpdate(UpdateForm.admissno,UpdateForm.emvis158);
  RemoteEmrUpdate(UpdateForm.admissno,UpdateForm.emvis159);

  promptedErrDTAD=false;
}


var promptedErrDTAT=false;
function resetErrDTAT() {
  window.setTimeout(function () { promptedErrDTAT = false; }, 100);
}

function DecisionToAdmitTime(ev) {
  u=document.UpdateForm;
  h=document.HiddenFields;

  if (!checkTime(u.emvis159,u.emvis159.title)) {
    return;
  }

  if (promptedErrDTAT) {
    CancelEvent(ev);
    return false;  // already prompted error
  }

  if (!isWhitespace(u.emvis158.value) && !isWhitespace(u.emvis159.value)) {
    if (!CheckDateTimeRange(h.emvis001,h.emvis002,u.emvis158,u.emvis159)) {
      alert("Error: Decision to admit date/time " +
            "can't be before the arrival date/time.");
      promptedErrDTAT=true;
      return false;
    }
  }

  if (!isWhitespace(h.emvis128.value) && !isWhitespace(h.emvis129.value) &&
     !isWhitespace(u.emvis158.value) && !isWhitespace(u.emvis159.value)) {
    if (!CheckDateTimeRange(h.emvis001,h.emvis002,u.emvis158,u.emvis159)) {
      alert("Error: Decision to admit date/time " +
            "can't be before the arrival date/time.");
      promptedErrDTAT=true;
      return false;
    }
  }

  if (h.DischargeComplete != "1" &&
     !isWhitespace(h.emvis024.value) && !isWhitespace(h.emvis025.value) &&
     !isWhitespace(u.emvis158.value) && !isWhitespace(u.emvis159.value)) {
    if (CheckDateTimeRange(h.emvis024,h.emvis025,u.emvis158,u.emvis159)) {
      alert("Error: Decision to admit date/time " +
             "can't be after the discharge date/time.");
      promptedErrDTAT=true;
      return false;
    }
  }

  RemoteEmrUpdate(UpdateForm.admissno,UpdateForm.emvis158);
  RemoteEmrUpdate(UpdateForm.admissno,UpdateForm.emvis159);

  promptedErrDTAT=false;
}
function AmbulanceHandoverDate() {
  u=document.UpdateForm;
  h=document.HiddenFields;

  if (u.emvis156.readOnly == true)
    return;

  if(!checkDate(u.emvis156,u.emvis156.title)) {
   return;
  }
  if(!isWhitespace(u.emvis156.value) && !isWhitespace(u.emvis157.value)) {
    if(!CheckDateTimeRange(h.emvis001,h.emvis002,u.emvis156,u.emvis157)) {
      alert("Error: Ambulance Transfer of Care date/time " +
            "can't be before the arrival date/time.");
      return;
    }
  }
  if(!isWhitespace(h.emvis128.value) && !isWhitespace(h.emvis129.value) &&
     !isWhitespace(u.emvis156.value) && !isWhitespace(u.emvis157.value)) {
    if(!CheckDateTimeRange(h.emvis128,h.emvis129,u.emvis156,u.emvis157)) {
      alert("Error: Ambulance Transfer of Care date/time " +
            "can't be before the triage date/time.");
      return;
    }
  }
  if(h.DischargeComplete != "1" &&
     !isWhitespace(h.emvis024.value) && !isWhitespace(h.emvis025.value) &&
     !isWhitespace(u.emvis156.value) && !isWhitespace(u.emvis157.value)) {
     if(CheckDateTimeRange(h.emvis024,h.emvis025,u.emvis156,u.emvis157)) {
       alert("Error: Ambulance Transfer of Care date/time " +
             "can't be after the discharge date/time.");
       return;
     }
  }
  if(isWhitespace(u.emvis156.value) && !isWhitespace(u.emvis157.value)) {
     u.emvis156.className="BackDate Mandatory";
     u.emvis157.className="Time Mandatory";
     return;
  }
  if(!isWhitespace(u.emvis156.value) && isWhitespace(u.emvis157.value)) {
     u.emvis156.className="BackDate Mandatory";
     u.emvis157.className="Time Mandatory";
     return;
  }
  if(isWhitespace(u.emvis156.value) && isWhitespace(u.emvis157.value)) {
     u.emvis156.className="";
     u.emvis157.className="";
  }
  RemoteEmrUpdate(UpdateForm.admissno,UpdateForm.emvis156);
  RemoteEmrUpdate(UpdateForm.admissno,UpdateForm.emvis157);
}
function AmbulanceHandoverTime() {
  u=document.UpdateForm;
  h=document.HiddenFields;

  if (u.emvis157.readOnly == true)
    return;

  if(!checkTime(u.emvis157,u.emvis157.title)) {
   return;
  }
  if(!isWhitespace(u.emvis156.value) && !isWhitespace(u.emvis157.value)) {
    if(!CheckDateTimeRange(h.emvis001,h.emvis002,u.emvis156,u.emvis157)) {
      alert("Error: Ambulance Transfer of Care date/time " +
            "can't be before the arrival date/time.");
      return;
    }
  }
  if(!isWhitespace(h.emvis128.value) && !isWhitespace(h.emvis129.value) &&
     !isWhitespace(u.emvis156.value) && !isWhitespace(u.emvis157.value)) {
    if(!CheckDateTimeRange(h.emvis001,h.emvis002,u.emvis156,u.emvis157)) {
      alert("Error: Ambulance Transfer of Care date/time " +
            "can't be before the arrival date/time.");
      return;
    }
  }
  if(h.DischargeComplete != "1" &&
     !isWhitespace(h.emvis024.value) && !isWhitespace(h.emvis025.value) &&
     !isWhitespace(u.emvis156.value) && !isWhitespace(u.emvis157.value)) {
     if(CheckDateTimeRange(h.emvis024,h.emvis025,u.emvis156,u.emvis157)) {
       alert("Error: Ambulance Transfer of Care date/time " +
             "can't be after the discharge date/time.");
       return;
     }
  }
  if(isWhitespace(u.emvis156.value) && !isWhitespace(u.emvis157.value)) {
     u.emvis156.className="BackDate Mandatory";
     u.emvis157.className="Time Mandatory";
     return;
  }
  if(!isWhitespace(u.emvis156.value) && isWhitespace(u.emvis157.value)) {
     u.emvis156.className="BackDate Mandatory";
     u.emvis157.className="Time Mandatory";
     return;
  }
  if(isWhitespace(u.emvis156.value) && isWhitespace(u.emvis157.value)) {
     u.emvis156.className="";
     u.emvis157.className="";
  }
  RemoteEmrUpdate(UpdateForm.admissno,UpdateForm.emvis156);
  RemoteEmrUpdate(UpdateForm.admissno,UpdateForm.emvis157);
}
function InitialAssessor() {
  if(document.UpdateForm.emvis164.readOnly==true) {
    alert("Initial Assessor is a readonly field.");
    return;
  }
  HCPSearchFrame(UpdateForm.emvis164,UpdateForm.n_emvis164,0);
}
function MandInitAssessor() {
  if(isWhitespace(UpdateForm.emvis164.value)) {
    return;
  }
  mandatory=GetCookieData("InitialAss");
  if(trim(mandatory)!=trim(UpdateForm.admissno.value)) {
    return;
  }
  document.UpdateForm.emvis165.className="BackDate Mandatory"
  document.UpdateForm.emvis165.readOnly=false;
  document.UpdateForm.emvis166.className="Time Mandatory";
  document.UpdateForm.emvis166.readOnly=false;
  document.UpdateForm.emvis167.className="mandatory";
  document.UpdateForm.emvis167.disabled=false;
  if(document.UpdateForm.emvis167.type!="hidden") {
    document.UpdateForm.emvis167.focus();
  }
  ExpireCookiePath('InitialAss');
}
function SaveInitReason(reason) {
 if (reason.className.match(/mandatory/)) {
    if (!checkString(reason,reason.title)) {
        return false 
    } 
 }
 RemoteEmrUpdate(UpdateForm.admissno,document.UpdateForm.emvis167);
}
function SaveInitialAssessor() {
  if(trim(UpdateForm.emvis164.value)==trim(UpdateForm.emvis164.defaultValue) &&
     trim(UpdateForm.emvis165.value)==trim(UpdateForm.emvis165.defaultValue) &&
     trim(UpdateForm.emvis166.value)==trim(UpdateForm.emvis166.defaultValue)){
     return;
  }
  if(UpdateForm.emvis164.value!=UpdateForm.emvis164.defaultValue) {
    ValidateHCP(18,0,UpdateForm.emvis164,UpdateForm.n_emvis164);
  }
  if(UpdateForm.emvis165.value!=UpdateForm.emvis165.defaultValue) {
    if(!checkDate(UpdateForm.emvis165)) {
      return;
    }
  }
  if(UpdateForm.emvis166.value!=UpdateForm.emvis166.defaultValue) {
    if(!checkTime(UpdateForm.emvis166)) {
      return;
    }
  }
  MandInitAssessor();
  if(isWhitespace(UpdateForm.emvis164.value)) {
     return;
  }
  if(isWhitespace(UpdateForm.emvis165.value) ||
     isWhitespace(UpdateForm.emvis166.value)) {
     UpdateForm.emvis165.readOnly=false;
     UpdateForm.emvis166.readOnly=false;
     SetCurrentDateTime(UpdateForm.emvis165,UpdateForm.emvis166);
     UpdateForm.emvis165.readOnly=true;
     UpdateForm.emvis166.readOnly=true;
  }
  if(!CheckDateTimeRange(UpdateForm.arrvdate,UpdateForm.arrvtime,
                         UpdateForm.emvis165,UpdateForm.emvis166)) {
    alert("Initial assessor date/time can't be prior" +
          " to the arrival date/time")
    UpdateForm.emvis165.value="";
    UpdateForm.emvis166.value="";
    return;
  }
  RemoteEmrValues(UpdateForm.admissno,HiddenFields.seendate,
                  HiddenFields.seentime);
  if(!isWhitespace(HiddenFields.seendate.value)) {
    if(!CheckDateTimeRange(UpdateForm.emvis165,UpdateForm.emvis166,
                           HiddenFields.seendate,HiddenFields.seentime)) {
      alert("Initial assessor date/time can't be after " +
            "the first seen by doctor date/time")
      UpdateForm.emvis165.value="";
      UpdateForm.emvis166.value="";
      return;
    }
  }
  RemoteEmrUpdate(UpdateForm.admissno,UpdateForm.emvis164);
  RemoteEmrUpdate(UpdateForm.admissno,UpdateForm.emvis165);
  RemoteEmrUpdate(UpdateForm.admissno,UpdateForm.emvis166);
  RemoteEmrUpdate(UpdateForm.admissno,UpdateForm.emvis167);
  RemoteEmrHistory(UpdateForm.admissno,"INTAS");
  SetIntitailAss();
  location.reload();
  if(top.TogglePanel) {
    parent.menu.location.reload();
  } else {
    if (top.menu.EmergencyFrame==undefined) {
      parent.menu.location.reload();
    } else {
      if (top.menu.EmergencyFrame.location=="about:blank") {
        parent.menu.location.reload(); }
      else {
        parent.menu.EmergencyFrame.location.reload(); }
    }
  }
}
function SetIntitailAss() {
  SetCookie("InitialAss",UpdateForm.admissno.value,20);
}
function checkFirstSeen() {
 if (!isWhitespace(document.UpdateForm.frsndoct.value)) {
   document.UpdateForm.frsndoct.className="readonly";
   document.UpdateForm.frsndoct.readOnly=true;
   document.UpdateForm.frsndate.className="Date readonly";
   document.UpdateForm.frsndate.readOnly=true;
   document.UpdateForm.frsntime.className="readonly";
   document.UpdateForm.frsntime.readOnly=true;

   document.UpdateForm.SearchIcongif.disabled=true;
   document.UpdateForm.Dategif.disabled=true;
   document.UpdateForm.CurrentTimegif.disabled=true;
   document.UpdateForm.Calendargif.disabled=true;
   document.UpdateForm.FirstSeenDoctorButton.disabled=true;
 }
}
function SearchDoctorHEA() {
  if(document.UpdateForm.frsndoct.readOnly==true) {
    alert(document.UpdateForm.frsndoct.title + " is a readonly field.");
    return;
  }
  if (UpdateForm.emcndoct.value==1) {
    DoctorEmrSearchFrame(UpdateForm.frsndoct,UpdateForm.dummy4);
  }
  else {
    DoctorSearchFrame(UpdateForm.frsndoct,UpdateForm.dummy4);
  }
}
function getDoctorDescHEA() {
  if (isWhitespace(document.UpdateForm.frsndoct.value)) {
    document.UpdateForm.dummy4.value="";
    return;
  }
// validate doctor exists in patdo1af
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=3" +
             "&valdcode=" + document.UpdateForm.frsndoct.value.replace(/ /g,"+")

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status!=0) {
      document.UpdateForm.frsndoct.value=document.UpdateForm.frsndoct.defaultValue;
      document.UpdateForm.dummy4.value=document.UpdateForm.dummy4.defaultValue;
      UpdateForm.frsndoct.focus();
      return;
    } else {
      ReturnValue=returnValue.return_value.split("|");
      document.UpdateForm.dummy4.value=ReturnValue[0];
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status!=0) {
          document.UpdateForm.frsndoct.value=document.UpdateForm.frsndoct.defaultValue;
          document.UpdateForm.dummy4.value=document.UpdateForm.dummy4.defaultValue;
          UpdateForm.frsndoct.focus();
          return;
        } else {
          ReturnValue=returnValue.return_value.split("|");
          document.UpdateForm.dummy4.value=ReturnValue[0];
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
      document.UpdateForm.dummy4.value=document.UpdateForm.dummy4.defaultValue;
      UpdateForm.frsndoct.focus();
      return;
    }

    // validate doctor exists in emrdocaf
    var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=11" +
                      "&valdcode=" + doctor.value.replace(/ /g,"+")
    var returnValue = RSExecute(serverURL);
    if (returnValue.status!=0) {
      document.UpdateForm.frsndoct.value=document.UpdateForm.frsndoct.defaultValue;
      document.UpdateForm.dummy4.value=document.UpdateForm.dummy4.defaultValue;
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
          document.UpdateForm.dummy4.value=document.UpdateForm.dummy4.defaultValue;
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
              document.UpdateForm.dummy4.value=document.UpdateForm.dummy4.defaultValue;
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
            //  if (top.menu.EmergencyFrame.location=="about:blank") {
            //    parent.menu.location.reload(); }
            //  else {
            //    parent.menu.EmergencyFrame.location.reload(); }

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
      document.UpdateForm.dummy4.value=document.UpdateForm.dummy4.defaultValue;
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
          document.UpdateForm.dummy4.value=document.UpdateForm.dummy4.defaultValue;
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
        //  if (top.menu.EmergencyFrame.location=="about:blank") {
        //    parent.content.location.reload(); }
        //  else {
        //    parent.content.EmergencyFrame.location.reload(); }

          }
        );
      }
    );
  }
}
function changeMHDocDateTime() {
  PatientLinks.reportno.value="01"
  PatientLinks.template.value="117"
  PatientLinks.action="emrweb02.pbl"
  Left=(document.body.clientWidth-600)/2
  DFrameSubmit(PatientLinks,0,Left,600,350);
}
function readOnlyMHPractitionerDateTime() {
  if (document.HiddenFields.DischargeComplete.value !="1") {
    document.UpdateForm.emvimpra.className="readonly";
    document.UpdateForm.emvimpra.readOnly=true;
    document.UpdateForm.emvimpdt.className="readonly";
    document.UpdateForm.emvimpdt.readOnly=true;
    document.UpdateForm.emvimptm.className="readonly";
    document.UpdateForm.emvimptm.readOnly=true;
    return;
  }
  if(!VariableNameExists('PublicFacility')) {
    return;
  }
  if(PublicFacility) {
    if (isWhitespace(document.UpdateForm.emvimpra.value)) {
      document.UpdateForm.emvimpdt.className="readonly";
      document.UpdateForm.emvimpdt.readOnly=true;
      document.UpdateForm.emvimptm.className="readonly";
      document.UpdateForm.emvimptm.readOnly=true;
    }
  }
}
function UpdMHPractitioner(doctor) {
  if (isWhitespace(document.UpdateForm.emvimpra.value)) {
     if (isWhitespace(document.UpdateForm.emvimpra.defaultValue))  {
        return;
     }
  alert("Invalid mental health practitoner deletion - " +
        "Please use the eraser icon");
  document.UpdateForm.emvimpra.value=document.UpdateForm.emvimpra.defaultValue;
  document.UpdateForm.emvimpra.focus();
  return;
  }
  doctor.value=doctor.value.toUpperCase()
  a=trim(doctor.value);
  b=trim(doctor.defaultValue);
  if (document.UpdateForm.emvimpra.value.substr(0,1) == " ") {
      document.UpdateForm.emvimpra.value = a;
  }
  if (a == b)  { return; }
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=18&valdtype=18" +
                    "&valdcode=" + doctor.value.replace(/ /g,"+")

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status!=0) {
      document.UpdateForm.emvimpra.value=document.UpdateForm.emvimpra.defaultValue;
      document.UpdateForm.d_emvimpra.value=document.UpdateForm.d_emvimpra.defaultValue;
      UpdateForm.emvimpra.focus();
      return;
    }

    user=document.PatientLinks.webuseid.value;
    var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=59" +
           "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
           "&doctcode=" + doctor.value.replace(/ /g,"+") +
           "&updttype=MHPRA" + "&webuseid=" + user

    var returnValue = RSExecute(serverURL);
    location.reload();
  //
    if (top.TogglePanel) {
      parent.menu.location.reload();
    } else {
      if (top.menu.EmergencyFrame) {
        if (top.menu.EmergencyFrame.location=="about:blank") {
          parent.menu.location.reload(); }
        else {
          parent.menu.EmergencyFrame.location.reload();
        }
      }
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status!=0) {
          document.UpdateForm.emvimpra.value=document.UpdateForm.emvimpra.defaultValue;
          document.UpdateForm.d_emvimpra.value=document.UpdateForm.d_emvimpra.defaultValue;
          UpdateForm.emvimpra.focus();
          return;
        }

        user=document.PatientLinks.webuseid.value;
        var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=59" +
               "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
               "&doctcode=" + doctor.value.replace(/ /g,"+") +
               "&updttype=MHPRA" + "&webuseid=" + user

        var returnValue = RSExecuteFetch(serverURL);

        returnValue.then(
          function (returnValue) {
            returnValue = ParseFetchData(returnValue);  // parse fetch() result

            location.reload();
          //
            if (top.TogglePanel) {
              parent.menu.location.reload();
            } else {
              if (top.menu.EmergencyFrame) {
                if (top.menu.EmergencyFrame.location=="about:blank") {
                  parent.menu.location.reload(); }
                else {
                  parent.menu.EmergencyFrame.location.reload();
                }
              }
            }
          }
        );
      }
    );
  }
}
function DelMHPractitioner() {
  if (document.UpdateForm.emvimpra.readOnly == true) {
    alert(document.UpdateForm.emvimpra.title + " is a readonly field." );
    document.UpdateForm.emvimpra.focus();
    return;
  }
  if (isWhitespace(document.UpdateForm.emvimpra.value)) { return; }
  if(!confirm("Are you sure you want to delete this " +
              "mental health practitioner?" +
              "\nOk to continue, Cancel to abort")) {
    return;
  }
  doctor="      ";
  admissno=document.UpdateForm.admissno.value;
  user=document.PatientLinks.webuseid.value;
  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=59" +
                    "&admissno=" + admissno.replace(/ /g,"+") +
                    "&doctcode=" + doctor.replace(/ /g,"+") +
                    "&webuseid=" + user.replace(/ /g,"+") +
                    "&updttype=MHPRA"

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    location.reload();
  //
    if (top.TogglePanel) {
      parent.menu.location.reload();
    } else {
      if (top.menu.EmergencyFrame == undefined) {
        parent.menu.location.reload();
      } else if (top.menu.EmergencyFrame.location=="about:blank") {
        parent.menu.location.reload();
      }
      else {
        parent.menu.EmergencyFrame.location.reload();
      }
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        location.reload();
      //
        if (top.TogglePanel) {
          parent.menu.location.reload();
        } else {
          if (top.menu.EmergencyFrame == undefined) {
            parent.menu.location.reload();
          } else if (top.menu.EmergencyFrame.location=="about:blank") {
            parent.menu.location.reload();
          }
          else {
            parent.menu.EmergencyFrame.location.reload();
          }
        }
      }
    );
  }
}
function SearchMHPractitioner() {
 if(document.UpdateForm.emvimpra.readOnly == true) {
   alert(document.UpdateForm.emvimpra.title + " is a readonly field." );
   document.UpdateForm.emvimpra.focus();
   return;
 }
 HCPSearchFrame(UpdateForm.emvimpra,UpdateForm.d_emvimpra,9);
}
function MHPractitionerDate() {
  if(!checkDate(UpdateForm.emvimpdt,UpdateForm.emvimpdt.title)) {
   return;
  }
  if(!isWhitespace(UpdateForm.emvimpra.value)) {
    if(isWhitespace(UpdateForm.emvimpdt.value)) {
      alert(UpdateForm.emvimpdt.title + " is a required field.\n" +
           "Please enter it now." )
      UpdateForm.emvimpdt.value=UpdateForm.emvimpdt.defaultValue;
      UpdateForm.emvimpdt.focus();
      return;
    }
  }
  if (!isWhitespace(document.UpdateForm.arrvdate.value) &&
      !isWhitespace(document.UpdateForm.emvimpdt.value)) {
    if(SetDateYYYYMMDD(document.UpdateForm.arrvdate.value) >
       SetDateYYYYMMDD(document.UpdateForm.emvimpdt.value)) {
      alert("Mental Health Practitioner Date cannot be before Arrival Date.");
      UpdateForm.emvimpdt.value=UpdateForm.emvimpdt.defaultValue;
      UpdateForm.emvimpdt.focus();
      return;
    } else {
      if (SetDateYYYYMMDD(document.UpdateForm.arrvdate.value) ==
          SetDateYYYYMMDD(document.UpdateForm.emvimpdt.value) &&
          !isWhitespace(document.UpdateForm.arrvtime.value) &&
          !isWhitespace(document.UpdateForm.emvimptm.value) &&
          document.UpdateForm.arrvtime.value >
          document.UpdateForm.emvimptm.value) {
        alert("Mental Health Practitioner Time cannot be before Arrival Time.");
        UpdateForm.emvimpdt.value=UpdateForm.emvimpdt.defaultValue;
        UpdateForm.emvimpdt.focus();
        return;
      }
    }
  }
  if(document.UpdateForm.emvimpdt.value !=
     document.UpdateForm.emvimpdt.defaultValue) {
     p=document.UpdateForm;
     var serverURL = "../cgi-bin/emrweb08.pbl?reportno=21" +
                     "&admissno=" + p.admissno.value.replace(/ /g,"+") +
                     "&emvis172=" + p.emvimpdt.value.replace(/ /g,"+")

    if (IEBrowser) {
      var returnValue = RSExecute(serverURL);
      document.UpdateForm.emvimpdt.defaultValue=document.UpdateForm.emvimpdt.value
    }
    else {
      var returnValue = RSExecuteFetch(serverURL);

      returnValue.then(
        function (returnValue) {
          returnValue = ParseFetchData(returnValue);  // parse fetch() result

          document.UpdateForm.emvimpdt.defaultValue=document.UpdateForm.emvimpdt.value
        }
      );
    }
  }
}
function MHPractitionerTime() {
  if(!checkTime(UpdateForm.emvimptm,UpdateForm.emvimptm.title)) {
   return;
  }
  if(!isWhitespace(UpdateForm.emvimpra.value)) {
    if(isWhitespace(UpdateForm.emvimptm.value)) {
      alert(UpdateForm.emvimptm.title + " is a required field.\n" +
           "Please enter it now." )
      UpdateForm.emvimptm.value=UpdateForm.emvimptm.defaultValue;
      UpdateForm.emvimptm.focus();
      return;
    }
  }
  if (!isWhitespace(document.UpdateForm.arrvdate.value) &&
      !isWhitespace(document.UpdateForm.arrvtime.value) &&
      !isWhitespace(document.UpdateForm.emvimpdt.value) &&
      !isWhitespace(document.UpdateForm.emvimptm.value)) {
    if(SetDateYYYYMMDD(document.UpdateForm.arrvdate.value) >
       SetDateYYYYMMDD(document.UpdateForm.emvimpdt.value)) {
      alert("Mental Health Practitioner Date cannot be before Arrival Date.");
      UpdateForm.emvimptm.value=UpdateForm.emvimptm.defaultValue;
      UpdateForm.emvimptm.focus();
      return;
    } else {
      if (SetDateYYYYMMDD(document.UpdateForm.arrvdate.value) ==
          SetDateYYYYMMDD(document.UpdateForm.emvimpdt.value) &&
          !isWhitespace(document.UpdateForm.arrvtime.value) &&
          !isWhitespace(document.UpdateForm.emvimptm.value) &&
          document.UpdateForm.arrvtime.value >
          document.UpdateForm.emvimptm.value) {
        alert("Mental Health Practitioner Time cannot be before Arrival Time.");
        UpdateForm.emvimptm.value=UpdateForm.emvimptm.defaultValue;
        UpdateForm.emvimptm.focus();
        return;
      }
    }
  }
  SetCurrentDateTimeNoFocus(document.UpdateForm.curdtvar,
                     document.UpdateForm.curtmvar);
  if (!isWhitespace(document.UpdateForm.emvimpdt.value) &&
      !isWhitespace(document.UpdateForm.emvimptm.value)) {
    if (SetDateYYYYMMDD(document.UpdateForm.curdtvar.value) ==
        SetDateYYYYMMDD(document.UpdateForm.emvimpdt.value) &&
        document.UpdateForm.emvimptm.value >
        document.UpdateForm.curtmvar.value) {
        alert("Mental Health Practitioner cannot have a future time.");
        UpdateForm.emvimptm.value=UpdateForm.emvimptm.defaultValue;
        UpdateForm.emvimptm.focus();
      return;
    }
  }
  if(document.UpdateForm.emvimptm.value !=
     document.UpdateForm.emvimptm.DefaultValue) {
     p=document.UpdateForm;
     var serverURL = "../cgi-bin/emrweb08.pbl?reportno=21" +
                     "&admissno=" + p.admissno.value.replace(/ /g,"+") +
                     "&emvis173=" + p.emvimptm.value.replace(/ /g,"+")

    if (IEBrowser) {
      var returnValue = RSExecute(serverURL);
      document.UpdateForm.emvimptm.DefaultValue=document.UpdateForm.emvimptm.value
    }
    else {
      var returnValue = RSExecuteFetch(serverURL);

      returnValue.then(
        function (returnValue) {
          returnValue = ParseFetchData(returnValue);  // parse fetch() result

          document.UpdateForm.emvimptm.DefaultValue=document.UpdateForm.emvimptm.value
        }
      );
    }
  }
}

function RemoteMHPractitionerDateTime() {
  if (document.UpdateForm.emvimpdt.value !=
     document.UpdateForm.emvimpdt.defaultValue) {
     p=document.UpdateForm;
     var serverURL = "../cgi-bin/emrweb08.pbl?reportno=21" +
                     "&admissno=" + p.admissno.value.replace(/ /g,"+") +
                     "&emvis172=" + p.emvimpdt.value.replace(/ /g,"+")

    if (IEBrowser) {
      var returnValue = RSExecute(serverURL);
      document.UpdateForm.emvimpdt.defaultValue=document.UpdateForm.emvimpdt.value
    }
    else {
      var returnValue = RSExecuteFetch(serverURL);

      returnValue.then(
        function (returnValue) {
          returnValue = ParseFetchData(returnValue);  // parse fetch() result

          document.UpdateForm.emvimpdt.defaultValue=document.UpdateForm.emvimpdt.value
        }
      );
    }
  }
  if (document.UpdateForm.emvimptm.value !=
     document.UpdateForm.emvimptm.DefaultValue) {
     p=document.UpdateForm;
     var serverURL = "../cgi-bin/emrweb08.pbl?reportno=21" +
                     "&admissno=" + p.admissno.value.replace(/ /g,"+") +
                     "&emvis173=" + p.emvimptm.value.replace(/ /g,"+")

    if (IEBrowser) {
      var returnValue = RSExecute(serverURL);
      document.UpdateForm.emvimptm.DefaultValue=document.UpdateForm.emvimptm.value
    }
    else {
      var returnValue = RSExecuteFetch(serverURL);

      returnValue.then(
        function (returnValue) {
          returnValue = ParseFetchData(returnValue);  // parse fetch() result

          document.UpdateForm.emvimptm.DefaultValue=document.UpdateForm.emvimptm.value
        }
      );
    }
  }
}
function validateattendingdoctor(RetFuncTrue) {
  var serverURL = "../cgi-bin/emrweb08.pbl?reportno=58" +
                  "&admissno=" +
                  document.UpdateForm.admissno.value.replace(/ /g,"+") +
                  "&doctcode=" +
                  document.UpdateForm.emvis007.value.replace(/ /g,"+")

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status == 0)
    {
      if (returnValue.return_value == "1") {
        alert("Doctor has been updated previously. Page will reload, " +
              "details not updated.");
        location.reload();

        if(top.TogglePanel) {
          parent.menu.location.reload();
        }
        else {
          if (top.menu.EmergencyFrame) {
            if (top.menu.EmergencyFrame.location=="about:blank") {
              parent.menu.location.reload();
            }
            else {
              parent.menu.EmergencyFrame.location.reload();
            }
          }
        }
        return false;
      }
    }

    if (typeof(RetFuncTrue) == 'function') {
      window.setTimeout(function () { RetFuncTrue(); }, 200);
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status == 0)
        {
          if (returnValue.return_value == "1") {
            alert("Doctor has been updated previously. Page will reload, " +
                  "details not updated.");
            location.reload();

            if(top.TogglePanel) {
              parent.menu.location.reload();
            }
            else {
              if (top.menu.EmergencyFrame) {
                if (top.menu.EmergencyFrame.location=="about:blank") {
                  parent.menu.location.reload();
                }
                else {
                  parent.menu.EmergencyFrame.location.reload();
                }
              }
            }
            return false;
          }
        }

        if (typeof(RetFuncTrue) == 'function') { RetFuncTrue() }
      }
    );
  }
}
function ExternalLinkButtons() {
  if(VariableNameExists('EMRExtLink1DisplayButton')) {
    if(EMRExtLink1DisplayButton) {
      document.getElementById("EmrExternalLinkButton1").style.display="";
      if(VariableNameExists('EMRExtLink1ButtonTitle')) {
        document.getElementById("extlinkbutton1").value=
        EMRExtLink1ButtonTitle;
      }
    }
  }
//
  if(VariableNameExists('EMRExtLink2DisplayButton')) {
    if(EMRExtLink2DisplayButton) {
      document.getElementById("EmrExternalLinkButton2").style.display="";
      if(VariableNameExists('EMRExtLink2ButtonTitle')) {
        document.getElementById("extlinkbutton2").value=
        EMRExtLink2ButtonTitle;
      }
    }
  }
//
  if(VariableNameExists('EMRExtLink3DisplayButton')) {
    if(EMRExtLink3DisplayButton) {
      document.getElementById("EmrExternalLinkButton3").style.display="";
      if(VariableNameExists('EMRExtLink3ButtonTitle')) {
        document.getElementById("extlinkbutton3").value=
        EMRExtLink3ButtonTitle;
      }
    }
  }
//
  if(VariableNameExists('EMRExtLink4DisplayButton')) {
    if(EMRExtLink4DisplayButton) {
      document.getElementById("EmrExternalLinkButton4").style.display="";
      if(VariableNameExists('EMRExtLink4ButtonTitle')) {
        document.getElementById("extlinkbutton4").value=
        EMRExtLink4ButtonTitle;
      }
    }
  }
//
  if(VariableNameExists('EMRExtLink5DisplayButton')) {
    if(EMRExtLink5DisplayButton) {
      document.getElementById("EmrExternalLinkButton5").style.display="";
      if(VariableNameExists('EMRExtLink5ButtonTitle')) {
        document.getElementById("extlinkbutton5").value=
        EMRExtLink5ButtonTitle;
      }
    }
  }
}
function fnExtButton1() {
  if(!VariableNameExists("EMRExtLink1URL")) {
    return;
  }
  var win = window.open(EMRExtLink1URL, "_blank");
  win.focus();
}
function fnExtButton2() {
  if(!VariableNameExists("EMRExtLink2URL")) {
    return;
  }
  var win = window.open(EMRExtLink2URL, "_blank");
  win.focus();
}
function fnExtButton3() {
  if(!VariableNameExists("EMRExtLink3URL")) {
    return;
  }
  var win = window.open(EMRExtLink3URL, "_blank");
  win.focus();
}
function fnExtButton4() {
  if(!VariableNameExists("EMRExtLink4URL")) {
    return;
  }
  var win = window.open(EMRExtLink4URL, "_blank");
  win.focus();
}
function fnExtButton5() {
  if(!VariableNameExists("EMRExtLink5URL")) {
    return;
  }
  var win = window.open(EMRExtLink5URL, "_blank");
  win.focus();
}
function HideMainButtons() {
  if(VariableNameExists("EMRClinicalScreenButtonUpdate")) {
    if(!EMRClinicalScreenButtonUpdate) {
      document.getElementById("EMRClinicalScreenButtonUpdate").style.display="none";
    }
  }
  if(VariableNameExists("EMRClinicalScreenButtonClinical")) {
    if(!EMRClinicalScreenButtonClinical) {
      document.getElementById("EMRClinicalScreenButtonClinical").style.display="none";
    }
  }
  if(VariableNameExists("EMRClinicalScreenButtonWardBedRequest")) {
    if(!EMRClinicalScreenButtonWardBedRequest) {
      document.getElementById("EMRClinicalScreenButtonWardBedRequest").style.display="none";
    }
  }
  if(VariableNameExists("EMRClinicalScreenButtonRegistration")) {
    if(!EMRClinicalScreenButtonRegistration) {
      document.getElementById("EMRClinicalScreenButtonRegistration").style.display="none";
    }
  }
  if(VariableNameExists("EMRClinicalScreenButtonInjuryData")) {
    if(!EMRClinicalScreenButtonInjuryData) {
      document.getElementById("EMRClinicalScreenButtonInjuryData").style.display="none";
    }
  }
  if(VariableNameExists("EMRClinicalScreenButtonOutstanding")) {
    if(!EMRClinicalScreenButtonOutstanding) {
      document.getElementById("EMRClinicalScreenButtonOutstanding").style.display="none";
    }
  }
  if(VariableNameExists("EMRClinicalScreenButtonDischarge")) {
    if(!EMRClinicalScreenButtonDischarge) {
      document.getElementById("EMRClinicalScreenButtonDischarge").style.display="none";
    }
  }
  if(VariableNameExists("EMRClinicalScreenButtonLabelsForms")) {
    if(!EMRClinicalScreenButtonLabelsForms) {
      document.getElementById("EMRClinicalScreenButtonLabelsForms").style.display="none";
    }
  }
  if(VariableNameExists("EMRClinicalScreenButtonReturntoMap")) {
    if(!EMRClinicalScreenButtonReturntoMap) {
      document.getElementById("EMRClinicalScreenButtonReturntoMap").style.display="none";
    }
  }
  if(VariableNameExists("EMRClinicalScreenButtonJumpQueue")) {
    if(!EMRClinicalScreenButtonJumpQueue) {
      document.getElementById("EMRClinicalScreenButtonJumpQueue").style.display="none";
    }
  }
  if(VariableNameExists("EMRClinicalScreenButtonMHPractitioner")) {
    if(!EMRClinicalScreenButtonMHPractitioner) {
      document.getElementById("EMRClinicalScreenButtonMHPractitioner").style.display="none";
    }
  }
  if(VariableNameExists("EMRClinicalScreenButtonBilling")) {
    if(EMRClinicalScreenButtonBilling) {
      document.getElementById("EMRClinicalScreenButtonBilling").style.display="";
    }
  }
}
function NewCrossCons() {
 var  LinkURL= "../cgi-bin/patweb78.pbl?reportno=02&template=002&showspec=1" +
     "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
     "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+")
  Left=(document.body.clientWidth-800)/2;
  DFrameLink(LinkURL,0,Left,800,500);
}
function CrossConsDetails(ur,adm,referringCons,referredCons,recnum) {
  var LinkUrl="patweb78.pbl?reportno=02&template=003&showspec=1" +
              "&urnumber=" + ur.replace(/ /g,"+") +
              "&admissno=" + adm.replace(/ /g,"+") +
              "&ptcrc001=" + referringCons.replace(/ /g,"+") +
              "&ptcrc002=" + referredCons.replace(/ /g,"+") + 
              "&ptcrc003=" + recnum.replace(/ /g,"+");
  var Left=(document.body.clientWidth-800)/2;
  DFrameLink(LinkUrl,0,Left,800,500);
}
