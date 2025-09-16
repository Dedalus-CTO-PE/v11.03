//jsVersion  : V11.03.04
//========================================================================
// Program   : allweb05.js
//========================================================================
function MessageLink(messg) {
  linkurl = "../cgi-bin/allweb05.pbl?reportno=3&template=002" +
                   "&messgkey=" + messg.replace(/ /g,"+")
  Left=(document.body.clientWidth-1000)/2
  DFrameLink(linkurl,50,Left,1000,800)
}
function MessageLinkUr(ur,vis) {
  linkurl = "../cgi-bin/allweb05.pbl?reportno=5&template=001" +
                   "&urnumber=" + ur.replace(/ /g,"+") +
                   "&admissno=" + vis.replace(/ /g,"+")
  location.href=linkurl;
}
function ErrorLink() {
  linkurl = "../cgi-bin/allweb05.pbl?reportno=3&template=004"
  Left=(document.body.clientWidth-300)/2
  DFrameLink(linkurl,50,Left,300,100)
}
function BatchList() {
  linkurl = "../cgi-bin/allweb05.pbl?reportno=2&template=001" +
                   "&bfilname=" + SelectPeriod.bfilname.value.replace(/ /g,"+")
  location.href=linkurl
}
function SelectSubmit() {
 if(validateMandatory(SelectPeriod)) {
   document.SelectPeriod.submit();
 }
}
//------------------------------------------------------------
// Validate Batch Number for filename
//------------------------------------------------------------
function validateFileBatch(ReturnFile,ReturnBatch) {
  ReturnFunction="" ;
  for (var i=2; i < validateFileBatch.arguments.length; i++) {
    if (typeof(validateFileBatch.arguments[i]) == 'function') {
      ReturnFunction=validateFileBatch.arguments[i] }
    else {
      validateFileBatch.arguments[i].value=""; }  }
  if (isWhitespace(ReturnBatch.value)) return;;
  var serverURL = "../cgi-bin/allweb05.pbl?reportno=4" +
                  "&valdtype=1" +
                  "&bfilname=" + ReturnFile.value.replace(/ /g,"+")  +
                  "&batchnum=" + ReturnBatch.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnBatch.value=ReturnValue[1];
    j=0
    for (var i=3; i < validateFileBatch.arguments.length; i++) {
       if (typeof(validateFileBatch.arguments[i]) != 'function') {
         j++
         validateFileBatch.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnBatch.value="";
    ReturnBatch.select();  }
}
//------------------------------------------------------------
// Validate Batch Number for filename
//------------------------------------------------------------
function validateBatch(ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=2; i < validateBatch.arguments.length; i++) {
    if (typeof(validateBatch.arguments[i]) == 'function') {
      ReturnFunction=validateBatch.arguments[i] }
    else {
      validateBatch.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  justifyRight(ReturnCode);
  var serverURL = "../cgi-bin/allweb05.pbl?reportno=4" +
                  "&valdtype=2" +
                  "&batchnum=" + ReturnCode.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=ReturnValue[1];
    j=0
    for (var i=3; i < validateBatch.arguments.length; i++) {
       if (typeof(validateBatch.arguments[i]) != 'function') {
         j++
         validateBatch.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.value="";
    ReturnCode.select();  }
}
function FileLink(extrfile) {
   linkurl = "../cgi-bin/allweb05.pbl?reportno=2&template=001" +
                    "&bfilname=" + extrfile.replace(/ /g,"+")
   location.href=linkurl;
}
function FileUpdate(extrfile) {
   linkurl = "../cgi-bin/allweb05.pbl?reportno=1&template=002" +
                    "&bfilname=" + extrfile.replace(/ /g,"+")
  Left=(document.body.clientWidth-350)/2
  DFrameLink(linkurl,50,Left,350,150)
}
function BatchLink(bfilnam,batch) {
  linkurl = "../cgi-bin/allweb05.pbl?reportno=3&template=001" +
                   "&bfilname=" + bfilnam.replace(/ /g,"+") +
                   "&batchnum=" + batch.replace(/ /g,"+")
  location.href=linkurl;
}
function BatchUpdate(bfilnam,batch) {
  linkurl = "../cgi-bin/allweb05.pbl?reportno=2&template=002" +
                   "&bfilname=" + bfilnam.replace(/ /g,"+") +
                   "&batchnum=" + batch.replace(/ /g,"+")
  Left=(document.body.clientWidth-350)/2
  DFrameLink(linkurl,50,Left,350,150)
}
function FileList() {
  linkurl = "../cgi-bin/allweb05.pbl?reportno=1&template=001"
  location.href=linkurl
}
function SetFirstCon() {
  if(document.UpdateForm.d_alhdt033.checked==true) {
     document.UpdateForm.alhdt033.value="1";
  } else {
     document.UpdateForm.alhdt033.value="0";
  }
}
function ShowDivs() {
  if(document.UpdateForm.alhdt001.value==" 0" ||
     document.UpdateForm.alhdt001.value==" 1") {
     InsertPMIButton.style.display="";
     InsertPMIButton.style.display="";
     InsertUpdateButton.style.display="";
     InsertUpdateButton.style.display="";
  } else {
     InsertPMIButton.style.display="none";
     InsertPMIButton.style.display="none";
     InsertUpdateButton.style.display="none";
     InsertUpdateButton.style.display="none";
  }

  if(document.UpdateForm.alhdt008.value=="0") {            // Referral In
     Referral.style.display=""
     Referral.innerHTML=InsertReferralInFields.innerHTML;
     if(document.UpdateForm.alhdt001.value==" 0" ||
        document.UpdateForm.alhdt001.value==" 1") {
       document.getElementById("InsertRefInButton").style.display="";
     }
  } else if(document.UpdateForm.alhdt008.value=="1") {     // Episode Referral
     Referral.style.display=""
     Referral.innerHTML=InsertReferralInFields.innerHTML + 
                        InsertEpisodeReferralFields.innerHTML;
     if(document.UpdateForm.alhdt001.value==" 0" ||
        document.UpdateForm.alhdt001.value==" 1") {
       document.getElementById("InsertRefInButton").style.display="";
       document.getElementById("InsertRefButton").style.display="";
     }
     if(document.UpdateForm.alhdt001.value==" 1" &&
        document.UpdateForm.refinmsg.value=="0") {
        document.getElementById("InsertCreateRefInUpdButton").style.display="";
     }
  } else if(document.UpdateForm.alhdt008.value=="2") {     // Encounter
     Referral.style.display=""
     Referral.innerHTML=InsertReferralInFields.innerHTML +
                        InsertEpisodeReferralFields.innerHTML;
     Encounter.style.display=""
     Encounter.innerHTML=InsertEncounterFields.innerHTML;
     if(document.UpdateForm.alhdt001.value==" 0" ||
        document.UpdateForm.alhdt001.value==" 1") {
       document.getElementById("InsertRefInButton").style.display="";
       document.getElementById("InsertRefButton").style.display="";
       document.getElementById("InsertEncButton").style.display="";
     }
  } else if(document.UpdateForm.alhdt008.value=="3") {     // Merge

  } else if(document.UpdateForm.alhdt008.value=="4") {     // PMI
     Referral.innerHTML="";
     Referral.innerHTML=InsertReferralInFields.innerHTML;
     if(document.UpdateForm.alhdt001.value==" 0" ||
        document.UpdateForm.alhdt001.value==" 1") {
       document.getElementById("InsertRefInButton").style.display="";
     }
  } else if(document.UpdateForm.alhdt008.value=="5") {     // Referral Out
     Referral.style.display=""
     Referral.innerHTML=InsertReferralInFields.innerHTML + 
                        InsertEpisodeReferralFields.innerHTML +
                        InsertReferralOutFields.innerHTML;
     if(document.UpdateForm.alhdt001.value==" 0" ||
        document.UpdateForm.alhdt001.value==" 1") {
       document.getElementById("InsertRefInButton").style.display="";
       document.getElementById("InsertRefButton").style.display="";
     }
  }
  if(document.UpdateForm.alhdt001.value==" 0" ||
     document.UpdateForm.alhdt001.value==" 1" ||
     document.UpdateForm.alhdt001.value==" 2" ||
     document.UpdateForm.alhdt001.value==" 3" ||
     document.UpdateForm.alhdt001.value==" 4" ||
     document.UpdateForm.alhdt001.value==" 5") {
    InsertDeleteButton.style.display="";
  } 
  if(document.UpdateForm.alhdt001.value==" 1") {
     InsertResetButton.style.display="";
  } 
}
function PMILink() {
  linkUrl="patweb89.pbl?reportno=01&template=002" +
          "&urnumber=" + UpdateForm.d_alhdt002.value.replace(/ /g,"+")
  parent.location.href=linkUrl;
}
function ReferralLink() {
  linkUrl="allweb05.pbl?reportno=06&template=003&catactiv=2" +
          "&urnumber=" + UpdateForm.d_alhdt002.value.replace(/ /g,"+") +
          "&admissno=" + UpdateForm.d_alhdt004.value.replace(/ /g,"+")
  Left=(document.body.clientWidth-950)/2
  DFrameLink(linkUrl,5,Left,950,600)
}
function MasterReferralLink() {
  linkUrl="allweb05.pbl?reportno=06&template=001&catactiv=2" +
          "&urnumber=" + UpdateForm.d_alhdt002.value.replace(/ /g,"+") +
          "&admissno="  
  if(UpdateForm.alhdt008.value=="0" ||
     UpdateForm.alhdt008.value=="3" ||
    (UpdateForm.alhdt008.value=="4" &&
     isWhitespace(UpdateForm.d_alhdt030.value))) {
    linkUrl+=UpdateForm.d_alhdt004.value.replace(/ /g,"+")
  } else {
    linkUrl+=UpdateForm.d_alhdt030.value.replace(/ /g,"+")
  }
  Left=(document.body.clientWidth-700)/2
  DFrameLink(linkUrl,50,Left,700,400)
}
function EncounterLink() {
  linkUrl="allweb05.pbl?reportno=06&template=002" +
          "&urnumber=" + UpdateForm.d_alhdt002.value.replace(/ /g,"+") +
          "&admissno=" + UpdateForm.d_alhdt004.value.replace(/ /g,"+") +
          "&encoutky=" + UpdateForm.d_alhdt004.value.replace(/ /g,"+") +
                         UpdateForm.d_alhdt005.value.replace(/ /g,"+")
  Left=(document.body.clientWidth-750)/2
  DFrameLink(linkUrl,50,Left,750,400)
}
function displayDiagnosisPopupFrame(linkUrl) {
  var left = (document.body.clientWidth-800)/2;
  DFrameLink(linkUrl,5,left,800,450);
}
function itemExistInCollection(id,variable) {
  var btn = document.getElementById(id);
  if(btn) {
    if(variable==1) {
      btn.style.color = "red";
    } else {
      btn.style.color = "black";
    }
  }
}
function openHealthCondition() {
  var deptcode = document.getElementById("deptcode");
  var admissno = document.getElementById("admissno");
  var linkUrl = "allweb02.pbl?reportno=03&template=005&admissno="+
                admissno.value+
                "&deptcode="+
                deptcode.value;

  displayDiagnosisPopupFrame(linkUrl);
}
function openOtherFactorsAffectingHealth() {
  var deptcode = document.getElementById("deptcode");
  var admissno = document.getElementById("admissno");

  var linkUrl = "allweb02.pbl?reportno=03&template=007&admissno="+
                 admissno.value+
                "&deptcode="+
                 deptcode.value;

  displayDiagnosisPopupFrame(linkUrl);
}
function openReferralDestination() {
  var deptcode = document.getElementById("deptcode");
  var admissno = document.getElementById("admissno");
  var linkUrl = "allweb02.pbl?reportno=03&template=009&catactiv=2&vinaherr=1" +
                "&admissno=" + admissno.value+
                "&deptcode=" + deptcode.value;

  displayDiagnosisPopupFrame(linkUrl);
}
function ShowRelationship(carer) {
  if(carer.value.substr(14,1)=="1") {
    CarerRelHeading.style.display="";
    CarerRelHeading.innerHTML=ShowCarerRelHD.innerHTML;
    CarerRel.style.display="";
    CarerRel.innerHTML=ShowCarerRel.innerHTML;
//
    CarerResHeading.style.display="";
    CarerResHeading.innerHTML=ShowCarerResHD.innerHTML;
    CarerRes.style.display="";
    CarerRes.innerHTML=ShowCarerRes.innerHTML;
  } else {
    CarerRelHeading.style.display="none";
    CarerRelHeading.innerHTML="";
    CarerRel.style.display="none";
    CarerRel.innerHTML=ShowCarerRelBlank.innerHTML;
//
    CarerResHeading.style.display="none";
    CarerResHeading.innerHTML="";
    CarerRes.style.display="none";
    CarerRes.innerHTML=ShowCarerResBlank.innerHTML;
  }
}
//
function setMandMess() {
 var VINAH_Program = (document.UpdateForm.d_deptcode.value.substr(10,1));
//
 if(document.UpdateForm.alhdt008.value=="0") {            // Referral In
   setMandMessRefIn(VINAH_Program);
 } else if(document.UpdateForm.alhdt008.value=="1") {     // Episode Referral
   setMandMessEpRef(VINAH_Program);
 } else if(document.UpdateForm.alhdt008.value=="2") {     // Encounter
   setMandMessCont(VINAH_Program);
 }
}
//
function setMandMessRefIn(program) {
  if(program=="A") {         // Post Acute Care
    document.UpdateForm.alhdt017.className="Mandatory SelectMed"
    document.UpdateForm.alhdt017.disabled=false;
    ShowRelationshipMess();
    document.UpdateForm.alhdt018.className="Mandatory SelectMed"
    document.UpdateForm.alhdt018.disabled=false;
    document.UpdateForm.alhdt019.className="Mandatory SelectMed"
    document.UpdateForm.alhdt019.disabled=false;
    document.UpdateForm.alhdt023.className="Mandatory PastDate"
    document.UpdateForm.alhdt023.readOnly=false;
    if(trim(document.UpdateForm.d_alhdt026.value)=="Rejected") {
      document.UpdateForm.alhdt024.className="Mandatory SelectMed"
      document.UpdateForm.alhdt024.disabled=false;
    }
    if(trim(document.UpdateForm.d_alhdt026.value)=="Cancelled") {
      document.UpdateForm.alhdt025.className="Mandatory SelectMed"
      document.UpdateForm.alhdt025.disabled=false;
    }
    if(trim(document.UpdateForm.d_alhdt026.value)=="Waiting") {
      document.UpdateForm.alhdt029.className="PastDate"
    } else {
      document.UpdateForm.alhdt029.className="Mandatory PastDate"
    }
    document.UpdateForm.alhdt029.readOnly=false;
  } else if(program=="H") {  // HBPCCT Program
    document.UpdateForm.alhdt018.className="SelectMed"
    document.UpdateForm.alhdt018.disabled=false;
    document.UpdateForm.alhdt019.className="SelectMed"
    document.UpdateForm.alhdt019.disabled=false;
    document.UpdateForm.alhdt023.className="Mandatory PastDate"
    document.UpdateForm.alhdt023.readOnly=false;
  } else if(program=="S" || program=="E" || program=="L" ||
            program=="D" || program=="V") {  // SACS HEN TPN HBD VALP
    document.UpdateForm.alhdt017.className="Mandatory SelectMed"
    document.UpdateForm.alhdt017.disabled=false;
    ShowRelationshipMess();
    document.UpdateForm.alhdt018.className="Mandatory SelectMed"
    document.UpdateForm.alhdt018.disabled=false;
    document.UpdateForm.alhdt019.className="Mandatory SelectMed"
    document.UpdateForm.alhdt019.disabled=false;
    document.UpdateForm.alhdt023.className="Mandatory PastDate"
    document.UpdateForm.alhdt023.readOnly=false;
    if(trim(document.UpdateForm.d_alhdt026.value)=="Rejected") {
      document.UpdateForm.alhdt024.className="Mandatory SelectMed"
      document.UpdateForm.alhdt024.disabled=false;
    }
    if(trim(document.UpdateForm.d_alhdt026.value)=="Cancelled") {
      document.UpdateForm.alhdt025.className="Mandatory SelectMed"
      document.UpdateForm.alhdt025.disabled=false;
    }
    if(trim(document.UpdateForm.d_alhdt026.value)=="Waiting") {
      document.UpdateForm.alhdt029.className="PastDate"
    } else {
      document.UpdateForm.alhdt029.className="Mandatory PastDate"
    }
    document.UpdateForm.alhdt029.readOnly=false;
  } else if(program=="O") {  // Specialist Outpatient Clinic
    document.UpdateForm.alhdt023.className="Mandatory PastDate"
    document.UpdateForm.alhdt023.readOnly=false;
    if(trim(document.UpdateForm.d_alhdt026.value)=="Rejected") {
      document.UpdateForm.alhdt024.className="Mandatory SelectMed"
      document.UpdateForm.alhdt024.disabled=false;
    }
    if(trim(document.UpdateForm.d_alhdt026.value)=="Cancelled") {
      document.UpdateForm.alhdt025.className="Mandatory SelectMed"
      document.UpdateForm.alhdt025.disabled=false;
    }
    document.UpdateForm.alhdt027.className="Mandatory SelectMed"
    document.UpdateForm.alhdt027.disabled=false;
    document.UpdateForm.alhdt028.className="Date"
    document.UpdateForm.alhdt028.readOnly=false;
    if(trim(document.UpdateForm.d_alhdt026.value)=="Waiting") {
      document.UpdateForm.alhdt029.className="PastDate"
    } else {
      document.UpdateForm.alhdt029.className="Mandatory PastDate"
    }
    document.UpdateForm.alhdt029.readOnly=false;
  } else if(program=="M") {  // Medi-Hotel

  } else if(program=="P") {  // Palliative Care
    document.UpdateForm.alhdt017.className="Mandatory SelectMed"
    document.UpdateForm.alhdt017.disabled=false;
    ShowRelationshipMess();
    document.UpdateForm.alhdt018.className="Mandatory SelectMed"
    document.UpdateForm.alhdt018.disabled=false;
    document.UpdateForm.alhdt021.className="Mandatory SelectMed"
    document.UpdateForm.alhdt021.disabled=false;
    document.UpdateForm.alhdt023.className="Mandatory PastDate"
    document.UpdateForm.alhdt023.readOnly=false;
    if(trim(document.UpdateForm.d_alhdt026.value)=="Rejected") {
      document.UpdateForm.alhdt024.className="Mandatory SelectMed"
      document.UpdateForm.alhdt024.disabled=false;
    }
    if(trim(document.UpdateForm.d_alhdt026.value)=="Cancelled") {
      document.UpdateForm.alhdt025.className="Mandatory SelectMed"
      document.UpdateForm.alhdt025.disabled=false;
    }
  } else if(program=="R") {  // Residential In Reach
    document.UpdateForm.alhdt017.className="Mandatory SelectMed"
    document.UpdateForm.alhdt017.disabled=false;
    ShowRelationshipMess();
    document.UpdateForm.alhdt019.className="Mandatory SelectMed"
    document.UpdateForm.alhdt019.disabled=false;
    document.UpdateForm.alhdt023.className="Mandatory PastDate"
    document.UpdateForm.alhdt023.readOnly=false;
    if(trim(document.UpdateForm.d_alhdt026.value)=="Rejected") {
      document.UpdateForm.alhdt024.className="Mandatory SelectMed"
      document.UpdateForm.alhdt024.disabled=false;
    }
    if(trim(document.UpdateForm.d_alhdt026.value)=="Cancelled") {
      document.UpdateForm.alhdt025.className="Mandatory SelectMed"
      document.UpdateForm.alhdt025.disabled=false;
    }
    if(trim(document.UpdateForm.d_alhdt026.value)=="Waiting") {
      document.UpdateForm.alhdt029.className="PastDate"
    } else {
      document.UpdateForm.alhdt029.className="Mandatory PastDate"
    }
    document.UpdateForm.alhdt029.readOnly=false;
  } else if(program=="T") {  // Transitional Care Program
    document.UpdateForm.alhdt017.className="Mandatory SelectMed"
    document.UpdateForm.alhdt017.disabled=false;
    ShowRelationshipMess();
    document.UpdateForm.alhdt018.className="Mandatory SelectMed"
    document.UpdateForm.alhdt018.disabled=false;
    document.UpdateForm.alhdt019.className="Mandatory SelectMed"
    document.UpdateForm.alhdt019.disabled=false;
    document.UpdateForm.alhdt023.className="Mandatory PastDate"
    document.UpdateForm.alhdt023.readOnly=false;
    if(trim(document.UpdateForm.d_alhdt026.value)=="Rejected") {
      document.UpdateForm.alhdt024.className="Mandatory SelectMed"
      document.UpdateForm.alhdt024.disabled=false;
    }
    if(trim(document.UpdateForm.d_alhdt026.value)=="Cancelled") {
      document.UpdateForm.alhdt025.className="Mandatory SelectMed"
      document.UpdateForm.alhdt025.disabled=false;
    }
    if(trim(document.UpdateForm.d_alhdt026.value)=="Waiting") {
      document.UpdateForm.alhdt029.className="PastDate"
    } else {
      document.UpdateForm.alhdt029.className="Mandatory PastDate"
    }
    document.UpdateForm.alhdt029.readOnly=false;
  } else if(program=="I") {  // HARP
    document.UpdateForm.alhdt017.className="Mandatory SelectMed"
    document.UpdateForm.alhdt017.disabled=false;
    ShowRelationshipMess();
    document.UpdateForm.alhdt018.className="Mandatory SelectMed"
    document.UpdateForm.alhdt018.disabled=false;
    document.UpdateForm.alhdt019.className="Mandatory SelectMed"
    document.UpdateForm.alhdt019.disabled=false;
    document.UpdateForm.alhdt023.className="Mandatory PastDate"
    document.UpdateForm.alhdt023.readOnly=false;
    if(trim(document.UpdateForm.d_alhdt026.value)=="Rejected") {
      document.UpdateForm.alhdt024.className="Mandatory SelectMed"
      document.UpdateForm.alhdt024.disabled=false;
    }
    if(trim(document.UpdateForm.d_alhdt026.value)=="Cancelled") {
      document.UpdateForm.alhdt025.className="Mandatory SelectMed"
      document.UpdateForm.alhdt025.disabled=false;
    }
    if(trim(document.UpdateForm.d_alhdt026.value)=="Waiting") {
      document.UpdateForm.alhdt029.className="PastDate"
    } else {
      document.UpdateForm.alhdt029.className="Mandatory PastDate"
    }
    document.UpdateForm.alhdt029.readOnly=false;
  }
// All programs
  if(document.getElementById("alhdt071")) {
     document.getElementById("alhdt071").className="Mandatory SelectMed"
     document.getElementById("alhdt071").disabled=false;
  }
  document.UpdateForm.alhdt078.disabled=false;
  document.UpdateForm.alhdt078.className="PastDate";
  document.UpdateForm.alhdt079.disabled=false;
  document.UpdateForm.alhdt079.className="SelectMed Mandatory";
  document.UpdateForm.alhdt080.disabled=false;
  document.UpdateForm.alhdt080.className="SelectMed Mandatory";
  document.UpdateForm.alhdt081.disabled=false;
  document.UpdateForm.alhdt081.className="";
  document.UpdateForm.alhdt082.disabled=false;
  document.UpdateForm.alhdt082.className="PastDate";
  document.UpdateForm.alhdt083.disabled=false;
  document.UpdateForm.alhdt083.className="PastDate";
  setMandMessRefInReason();
}
function setMandMessRefInReason() {
 if(!document.getElementById("alhdt071") || 
    !document.getElementById("d_aldeutrs")) {
    return;
 }
 var TriageStat = trim(document.getElementById("alhdt071").value.substr(14,4));
 if(TriageStat != "1" &&  TriageStat != "3" && TriageStat != "010" &&
    TriageStat != "020") {
    document.UpdateForm.alhdt079.className="SelectMed";
     document.UpdateForm.alhdt080.className="SelectMed";
 }

 if ((TriageStat == "99") || (TriageStat == "98")) {
   document.getElementById("alhdt027").selectedIndex=0;
   document.getElementById("alhdt027").className="selectBig";
   document.getElementById("alhdt027").disabled=true;  
 } else {
   document.getElementById("alhdt027").className="Mandatory selectBig";
   document.getElementById("alhdt027").disabled=false; 
 }

}
//
function setMandMessEpRef(program) {
  document.UpdateForm.alhdt031.className="PastDate Mandatory"
  document.UpdateForm.alhdt031.readOnly=false;
  document.UpdateForm.alhdt032.className="PastDate"
  document.UpdateForm.alhdt032.readOnly=false;
  if(document.UpdateForm.alcndevp.value=="1") {
    document.getElementById("nameEpRefEvp").style.display="";
    document.getElementById("fieldEpRefEvp").style.display="";
    document.UpdateForm.alhdt044.className="Mandatory SelectMed"
    document.UpdateForm.alhdt044.disabled=false;
  }
//
  if(program=="A") {         // Post Acute Care
    document.UpdateForm.alhdt034.className="SelectMed"
    document.UpdateForm.alhdt034.disabled=false;
    document.UpdateForm.alhdt036.className="PastDate"
    document.UpdateForm.alhdt036.readOnly=false;
    document.UpdateForm.alhdt037.className="PastDate"
    document.UpdateForm.alhdt037.readOnly=false;
    document.UpdateForm.alhdt039.className="PastDate"
    document.UpdateForm.alhdt039.readOnly=false;
  } else if(program=="H") {  // HBPCCT Program
    document.UpdateForm.alhdt042.className="Mandatory SelectMed"
    document.UpdateForm.alhdt042.disabled=false;
    document.UpdateForm.d_alhdt033.disabled=false;
  } else if(program=="S" || program=="E" || program=="L" ||
            program=="D" || program=="V") {  // SACS HEN TPN HBD VALP
    document.UpdateForm.alhdt034.className="SelectMed"
    document.UpdateForm.alhdt034.disabled=false;
    document.UpdateForm.alhdt036.className="PastDate"
    document.UpdateForm.alhdt036.readOnly=false;
    document.UpdateForm.alhdt037.className="PastDate"
    document.UpdateForm.alhdt037.readOnly=false;
    document.UpdateForm.alhdt039.className="PastDate"
    document.UpdateForm.alhdt039.readOnly=false;
  } else if(program=="O") {  // Specialist Outpatient Clinic
    if(trim(document.UpdateForm.d_alhdt026.value)=="Waiting") {
      document.UpdateForm.alhdt038.className="Date"
    } else {
      document.UpdateForm.alhdt038.className="Mandatory Date"
    }
    document.UpdateForm.alhdt038.readOnly=false;
    document.UpdateForm.alhdt040.className="PastDate"
    document.UpdateForm.alhdt040.readOnly=false;
    document.UpdateForm.alhdt043.className="Mandatory SelectMed"
    document.UpdateForm.alhdt043.disabled=false;
    document.UpdateForm.alhdt069.className="Mandatory SelectMed"
    document.UpdateForm.alhdt069.disabled=false;
    UpdateForm.alhdt043.options.length=1;
    SetClinicType(UpdateForm.alhdt043,UpdateForm.d_alhdt043.value,UpdateForm.alhdt069.value);
  } else if(program=="M") {  // Medi-Hotel

  } else if(program=="P") {  // Palliative Care
    document.UpdateForm.alhdt036.className="PastDate"
    document.UpdateForm.alhdt036.readOnly=false;
    document.UpdateForm.alhdt041.className="SelectMed"
    document.UpdateForm.alhdt041.disabled=false;
    document.UpdateForm.alhdt042.className="Mandatory SelectMed"
    document.UpdateForm.alhdt042.disabled=false;
  } else if(program=="R") {  // Residential In Reach
    document.UpdateForm.alhdt034.className="SelectMed"
    document.UpdateForm.alhdt034.disabled=false;
    document.UpdateForm.alhdt036.className="PastDate"
    document.UpdateForm.alhdt036.readOnly=false;
    document.UpdateForm.alhdt037.className="PastDate"
    document.UpdateForm.alhdt037.readOnly=false;
    document.UpdateForm.alhdt039.className="PastDate"
    document.UpdateForm.alhdt039.readOnly=false;
  } else if(program=="T") {  // Transitional Care Program
    document.UpdateForm.alhdt034.className="SelectMed"
    document.UpdateForm.alhdt034.disabled=false;
    document.UpdateForm.alhdt036.className="PastDate"
    document.UpdateForm.alhdt036.readOnly=false;
    document.UpdateForm.alhdt037.className="PastDate"
    document.UpdateForm.alhdt037.readOnly=false;
    document.UpdateForm.alhdt039.className="PastDate"
    document.UpdateForm.alhdt039.readOnly=false;
  } else if(program=="I") {  // HARP
    document.UpdateForm.alhdt034.className="SelectMed"
    document.UpdateForm.alhdt034.disabled=false;
    document.UpdateForm.alhdt036.className="PastDate"
    document.UpdateForm.alhdt036.readOnly=false;
    document.UpdateForm.alhdt037.className="PastDate"
    document.UpdateForm.alhdt037.readOnly=false;
   }
// All programs
  if(document.getElementById("alhdt072")) {
    document.UpdateForm.alhdt072.className="PastDate"
    document.UpdateForm.alhdt072.readOnly=false;
  }
  if(program!="O") {   // Not Specialist Outpatient Clinic
    if(!isWhitespace(document.UpdateForm.alhdt038.value) ||
       !isWhitespace(document.UpdateForm.alhdt040.value)) {
       document.UpdateForm.alhdt038.className="Date"
       document.UpdateForm.alhdt038.readOnly=false;
       document.UpdateForm.alhdt040.className="PastDate"
       document.UpdateForm.alhdt040.readOnly=false;
    }
  }
}
//
function setMandMessCont(program) {
  if(document.UpdateForm.July2019!=undefined &&
     document.UpdateForm.alhdt051!=undefined &&
     document.UpdateForm.alhdt074!=undefined) {
 
     if(SetDateYYYYMMDD(document.UpdateForm.alhdt051.value) <
         SetDateYYYYMMDD(document.UpdateForm.July2019.value)) {
         document.UpdateForm.alhdt074.className="PastDate";
         document.UpdateForm.alhdt075.className="Time";
     }
  }
  if(document.UpdateForm.alcndevp.value=="1") {
    document.getElementById("nameContactEvp").style.display="";
    document.getElementById("fieldContactEvp").style.display="";
    document.UpdateForm.alhdt064.className="Mandatory SelectMed"
    document.UpdateForm.alhdt064.disabled=false;
  }
  if(program=="A") {         // Post Acute Care
    document.UpdateForm.alhdt046.className="Mandatory"
    document.UpdateForm.alhdt045.className="Mandatory SelectMed"
    document.UpdateForm.alhdt045.disabled=false;
    document.UpdateForm.alhdt053.className="Mandatory SelectMed"
    document.UpdateForm.alhdt053.disabled=false;
    document.UpdateForm.alhdt054.className="Mandatory SelectMed"
    document.UpdateForm.alhdt054.disabled=false;
    document.UpdateForm.alhdt055.className="Mandatory SelectMed"
    document.UpdateForm.alhdt055.disabled=false;
    document.UpdateForm.alhdt056.className="Mandatory SelectMed"
    document.UpdateForm.alhdt056.disabled=false;
    document.UpdateForm.alhdt057.className="Mandatory SelectMed"
    document.UpdateForm.alhdt057.disabled=false;
  } else if(program=="H") {  // HBPCCT Program
    document.UpdateForm.alhdt046.className="Mandatory"
    document.UpdateForm.alhdt053.className="Mandatory SelectMed"
    document.UpdateForm.alhdt053.disabled=false;
    document.UpdateForm.alhdt055.className="SelectMed"
    document.UpdateForm.alhdt055.disabled=false;
    document.UpdateForm.alhdt057.className="Mandatory SelectMed"
    document.UpdateForm.alhdt057.disabled=false;
    document.UpdateForm.alhdt058.className="Mandatory SelectMed"
    document.UpdateForm.alhdt058.disabled=false;
  } else if(program=="S" || program=="E" || program=="L" ||
            program=="D" || program=="V") {  // SACS HEN TPN HBD VALP
    document.UpdateForm.alhdt045.className="Mandatory SelectMed"
    document.UpdateForm.alhdt045.disabled=false;
    document.UpdateForm.alhdt046.className="Mandatory"
    document.UpdateForm.alhdt053.className="Mandatory SelectMed"
    document.UpdateForm.alhdt053.disabled=false;
    document.UpdateForm.alhdt054.className="Mandatory SelectMed"
    document.UpdateForm.alhdt054.disabled=false;
    document.UpdateForm.alhdt055.className="Mandatory SelectMed"
    document.UpdateForm.alhdt055.disabled=false;
    document.UpdateForm.alhdt056.className="Mandatory SelectMed"
    document.UpdateForm.alhdt056.disabled=false;
    document.UpdateForm.alhdt057.className="Mandatory SelectMed"
    document.UpdateForm.alhdt057.disabled=false;
  } else if(program=="O") {  // Specialist Outpatient Clinic
    document.UpdateForm.alhdt045.className="Mandatory SelectMed"
    document.UpdateForm.alhdt045.disabled=false;
    document.UpdateForm.alhdt046.className="Mandatory"
    document.UpdateForm.alhdt053.className="Mandatory SelectMed"
    document.UpdateForm.alhdt053.disabled=false;
    document.UpdateForm.alhdt054.className="Mandatory SelectMed"
    document.UpdateForm.alhdt054.disabled=false;
    document.UpdateForm.alhdt055.className="Mandatory SelectMed"
    document.UpdateForm.alhdt055.disabled=false;
    document.UpdateForm.alhdt056.className="Mandatory SelectMed"
    document.UpdateForm.alhdt056.disabled=false;
    document.UpdateForm.alhdt057.className="Mandatory SelectMed"
    document.UpdateForm.alhdt057.disabled=false;
    UpdateForm.alhdt043.options.length=1;
    SetClinicType(UpdateForm.alhdt043,UpdateForm.d_alhdt043.value,UpdateForm.alhdt069.value);
  } else if(program=="M") {  // Medi-Hotel
    document.UpdateForm.alhdt046.className="Mandatory"
    document.UpdateForm.alhdt053.className="Mandatory SelectMed"
    document.UpdateForm.alhdt053.disabled=false;
    document.UpdateForm.alhdt057.className="Mandatory SelectMed"
    document.UpdateForm.alhdt057.disabled=false;

  } else if(program=="P") {  // Palliative Care
    document.UpdateForm.alhdt045.className="Mandatory SelectMed"
    document.UpdateForm.alhdt045.disabled=false;
    document.UpdateForm.alhdt046.className="Mandatory"
    document.UpdateForm.alhdt053.className="Mandatory SelectMed"
    document.UpdateForm.alhdt053.disabled=false;
    document.UpdateForm.alhdt054.className="Mandatory SelectMed"
    document.UpdateForm.alhdt054.disabled=false;
    document.UpdateForm.alhdt055.className="Mandatory SelectMed"
    document.UpdateForm.alhdt055.disabled=false;
    document.UpdateForm.alhdt056.className="Mandatory SelectMed"
    document.UpdateForm.alhdt056.disabled=false;
    document.UpdateForm.alhdt057.className="Mandatory SelectMed"
    document.UpdateForm.alhdt057.disabled=false;
    document.UpdateForm.alhdt058.className="Mandatory SelectMed"
    document.UpdateForm.alhdt058.disabled=false;
    document.UpdateForm.alhdt059.className="Mandatory SelectMed"
    document.UpdateForm.alhdt059.disabled=false;
    document.UpdateForm.alhdt060.className="Mandatory SelectMed"
    document.UpdateForm.alhdt060.disabled=false;
    document.UpdateForm.alhdt062.className="Mandatory"
    document.UpdateForm.alhdt062.readonly=false;
    document.UpdateForm.alhdt063.className="Mandatory SelectMed"
    document.UpdateForm.alhdt063.disabled=false;
  } else if(program=="R") {  // Residential In Reach
    document.UpdateForm.alhdt045.className="Mandatory SelectMed"
    document.UpdateForm.alhdt045.disabled=false;
    document.UpdateForm.alhdt046.className="Mandatory"
    document.UpdateForm.alhdt053.className="Mandatory SelectMed"
    document.UpdateForm.alhdt053.disabled=false;
    document.UpdateForm.alhdt054.className="Mandatory SelectMed"
    document.UpdateForm.alhdt054.disabled=false;
    document.UpdateForm.alhdt055.className="Mandatory SelectMed"
    document.UpdateForm.alhdt055.disabled=false;
    document.UpdateForm.alhdt056.className="Mandatory SelectMed"
    document.UpdateForm.alhdt056.disabled=false;
    document.UpdateForm.alhdt057.className="Mandatory SelectMed"
    document.UpdateForm.alhdt057.disabled=false;
  } else if(program=="T") {  // Transitional Care Program
    document.UpdateForm.alhdt045.className="Mandatory SelectMed"
    document.UpdateForm.alhdt045.disabled=false;
    document.UpdateForm.alhdt046.className="Mandatory"
    document.UpdateForm.alhdt053.className="Mandatory SelectMed"
    document.UpdateForm.alhdt053.disabled=false;
    document.UpdateForm.alhdt054.className="SelectMed"
    document.UpdateForm.alhdt054.disabled=false;
    document.UpdateForm.alhdt055.className="Mandatory SelectMed"
    document.UpdateForm.alhdt055.disabled=false;
    document.UpdateForm.alhdt056.className="SelectMed"
    document.UpdateForm.alhdt056.disabled=false;
    document.UpdateForm.alhdt057.className="SelectMed"
    document.UpdateForm.alhdt057.disabled=false;
  } else if(program=="I") {  // HARP
    document.UpdateForm.alhdt045.className="Mandatory SelectMed"
    document.UpdateForm.alhdt045.disabled=false;
    document.UpdateForm.alhdt046.className="Mandatory"
    document.UpdateForm.alhdt053.className="Mandatory SelectMed"
    document.UpdateForm.alhdt053.disabled=false;
    document.UpdateForm.alhdt054.className="Mandatory SelectMed"
    document.UpdateForm.alhdt054.disabled=false;
    document.UpdateForm.alhdt056.className="Mandatory SelectMed"
    document.UpdateForm.alhdt056.disabled=false;
    document.UpdateForm.alhdt057.className="Mandatory SelectMed"
    document.UpdateForm.alhdt057.disabled=false;
  }
}
//
function setMandRefIn() {
 var VINAH_Program = (document.UpdateForm.deptcode.value.substr(10,1));
//
// Enable PMI realted fields for PMI error corrections
//
  document.UpdateForm.alref075.className="SelectMed"
  document.UpdateForm.alref075.disabled=false;
  document.UpdateForm.alref077.className="SelectMed"
  document.UpdateForm.alref077.disabled=false;
  document.UpdateForm.alref078.className="SelectMed"
  document.UpdateForm.alref078.disabled=false;
//
  if(VINAH_Program=="A") {         // Post Acute Care
    document.UpdateForm.alref075.className="Mandatory SelectMed"
    document.UpdateForm.alref075.disabled=false;
    document.UpdateForm.alref077.className="Mandatory SelectMed"
    document.UpdateForm.alref077.disabled=false;
    document.UpdateForm.alref078.className="Mandatory SelectMed"
    document.UpdateForm.alref078.disabled=false;
    document.UpdateForm.alref039.className="Mandatory PastDate"
    document.UpdateForm.alref039.readOnly=false;
    document.UpdateForm.alref132.className="Mandatory PastDate"
    document.UpdateForm.alref132.readOnly=false;
  } else if(VINAH_Program=="H") {  // HBPCCT Program
    document.UpdateForm.alref077.className="SelectMed"
    document.UpdateForm.alref077.disabled=false;
    document.UpdateForm.alref078.className="SelectMed"
    document.UpdateForm.alref078.disabled=false;
    document.UpdateForm.alref039.className="Mandatory PastDate"
    document.UpdateForm.alref039.readOnly=false;
  } else if(VINAH_Program=="S" || VINAH_Program=="E" ||
            VINAH_Program=="L" || VINAH_Program=="D"
            || VINAH_Program=="V") {  // SACS HEN TPN HBD VALP
    document.UpdateForm.alref075.className="Mandatory SelectMed"
    document.UpdateForm.alref075.disabled=false;
    document.UpdateForm.alref077.className="Mandatory SelectMed"
    document.UpdateForm.alref077.disabled=false;
    document.UpdateForm.alref078.className="Mandatory SelectMed"
    document.UpdateForm.alref078.disabled=false;
    document.UpdateForm.alref039.className="Mandatory PastDate"
    document.UpdateForm.alref039.readOnly=false;
    document.UpdateForm.alref132.className="Mandatory PastDate"
    document.UpdateForm.alref132.readOnly=false;
  } else if(VINAH_Program=="O") {  // Specialist Outpatient Clinic
    document.UpdateForm.alref039.className="Mandatory PastDate"
    document.UpdateForm.alref039.readOnly=false;
    document.UpdateForm.alref094.className="PastDate"
    document.UpdateForm.alref094.readOnly=false;
    document.UpdateForm.alref132.className="Mandatory PastDate"
    document.UpdateForm.alref132.readOnly=false;

  } else if(VINAH_Program=="M") {  // Medi-Hotel

  } else if(VINAH_Program=="P") {  // Palliative Care
    document.UpdateForm.alref075.className="Mandatory SelectMed"
    document.UpdateForm.alref075.disabled=false;
    document.UpdateForm.alref077.className="Mandatory SelectMed"
    document.UpdateForm.alref077.disabled=false;
    document.UpdateForm.alref049.className="Mandatory SelectMed"
    document.UpdateForm.alref049.disabled=false;
    document.UpdateForm.alref039.className="Mandatory PastDate"
    document.UpdateForm.alref039.readOnly=false;
    document.getElementById("alref192").disabled=false;
    document.getElementById("alref192").className="";
    RefAccepted="";
    if(document.getElementById("alref192")) {
       RefAccepted=trim(document.getElementById("alref186").value.substr(14,4));
    }
    HDP=trim(document.getElementById("d_aldeprgs").value.substr(14,4));
    if(HDP=="41" && RefAccepted=="1") {
      document.getElementById("alref192").className="Mandatory";
    } 
  } else if(VINAH_Program=="R") {  // Residential In Reach
    document.UpdateForm.alref075.className="Mandatory SelectMed"
    document.UpdateForm.alref075.disabled=false;
    document.UpdateForm.alref078.className="Mandatory SelectMed"
    document.UpdateForm.alref078.disabled=false;
    document.UpdateForm.alref039.className="Mandatory PastDate"
    document.UpdateForm.alref039.readOnly=false;
    document.UpdateForm.alref132.className="Mandatory PastDate"
    document.UpdateForm.alref132.readOnly=false;
  } else if(VINAH_Program=="T") {  // Transitional Care Program
    document.UpdateForm.alref075.className="Mandatory SelectMed"
    document.UpdateForm.alref075.disabled=false;
    document.UpdateForm.alref077.className="Mandatory SelectMed"
    document.UpdateForm.alref077.disabled=false;
    document.UpdateForm.alref078.className="Mandatory SelectMed"
    document.UpdateForm.alref078.disabled=false;
    document.UpdateForm.alref039.className="Mandatory PastDate"
    document.UpdateForm.alref039.readOnly=false;
    document.UpdateForm.alref132.className="Mandatory PastDate"
    document.UpdateForm.alref132.readOnly=false;
  } else if(VINAH_Program=="I") {  // HARP
    document.UpdateForm.alref075.className="Mandatory SelectMed"
    document.UpdateForm.alref075.disabled=false;
    document.UpdateForm.alref077.className="Mandatory SelectMed"
    document.UpdateForm.alref077.disabled=false;
    document.UpdateForm.alref078.className="Mandatory SelectMed"
    document.UpdateForm.alref078.disabled=false;
    document.UpdateForm.alref039.className="Mandatory PastDate"
    document.UpdateForm.alref039.readOnly=false;
    document.UpdateForm.alref132.className="Mandatory PastDate"
    document.UpdateForm.alref132.readOnly=false;
  }
}
//
function setMandEpRef() {
 var VINAH_Program = (document.UpdateForm.deptcode.value.substr(10,1));
  if(document.UpdateForm.alcndevp.value=="1") {
    document.getElementById("nameEpRefEvp").style.display="";
    document.getElementById("fieldEpRefEvp").style.display="";
    document.UpdateForm.alref145.className="Mandatory SelectMed"
    document.UpdateForm.alref145.disabled=false;
  }
//
  if(VINAH_Program=="A") {         // Post Acute Care
    if(document.UpdateForm.alrestat.value=="2") {
      document.UpdateForm.alref072.className="Mandatory SelectMed"
      document.UpdateForm.alref072.disabled=false;
    }
    document.UpdateForm.alref096.className="PastDate"
    document.UpdateForm.alref096.readOnly=false;
    document.UpdateForm.alref164.className="PastDate"
    document.UpdateForm.alref164.readOnly=false;
    document.UpdateForm.alref165.className="PastDate"
    document.UpdateForm.alref165.readOnly=false;
  } else if(VINAH_Program=="H") {  // HBPCCT Program
    document.UpdateForm.alref154.className="Mandatory SelectMed"
    document.UpdateForm.alref154.disabled=false;
    document.UpdateForm.alref134.disabled=false;
  } else if(VINAH_Program=="S" || VINAH_Program=="E" || 
            VINAH_Program=="L" || VINAH_Program=="D"
            || VINAH_Program=="V") {  // SACS HEN TPN HBD VALP
    if(document.UpdateForm.alrestat.value=="2") {
      document.UpdateForm.alref072.className="Mandatory SelectMed"
      document.UpdateForm.alref072.disabled=false;
    }
    document.UpdateForm.alref164.className="PastDate"
    document.UpdateForm.alref164.readOnly=false;
    document.UpdateForm.alref096.className="PastDate"
    document.UpdateForm.alref096.readOnly=false;
    document.UpdateForm.alref165.className="PastDate"
    document.UpdateForm.alref165.readOnly=false;
    document.UpdateForm.alref161.className="PastDate"
    document.UpdateForm.alref161.readOnly=false;
    if(document.UpdateForm.alrestat.value=="2") {
      document.UpdateForm.alref006.className="Mandatory SelectMed"
      document.UpdateForm.alref006.disabled=false;
    }
  } else if(VINAH_Program=="O") {  // Specialist Outpatient Clinic
    document.UpdateForm.alref106.className="Mandatory SelectMed"
    document.UpdateForm.alref106.disabled=false;
    document.UpdateForm.alref119.className="Mandatory SelectMed"
    document.UpdateForm.alref119.disabled=false;
//
    UpdateForm.alref106.options.length=1;
    SetClinicType(UpdateForm.alref106,UpdateForm.d_alref106.value,UpdateForm.alref119.value);
//
    document.UpdateForm.alref159.className="Date"
    document.UpdateForm.alref159.readOnly=false;
    document.UpdateForm.alref161.className="PastDate"
    document.UpdateForm.alref161.readOnly=false;
  } else if(VINAH_Program=="M") {  // Medi-Hotel

  } else if(VINAH_Program=="P") {  // Palliative Care
    if(document.UpdateForm.alrestat.value=="2") {
      document.UpdateForm.alref006.className="Mandatory SelectMed"
      document.UpdateForm.alref006.disabled=false;
    }
    document.UpdateForm.alref154.className="Mandatory SelectMed"
    document.UpdateForm.alref154.disabled=false;
    document.UpdateForm.alref164.className="PastDate"
    document.UpdateForm.alref164.readOnly=false;
  } else if(VINAH_Program=="R") {  // Residential In Reach
    if(document.UpdateForm.alrestat.value=="2") {
      document.UpdateForm.alref072.className="Mandatory SelectMed"
      document.UpdateForm.alref072.disabled=false;
    }
    document.UpdateForm.alref096.className="PastDate"
    document.UpdateForm.alref096.readOnly=false;
    document.UpdateForm.alref164.className="PastDate"
    document.UpdateForm.alref164.readOnly=false;
    document.UpdateForm.alref165.className="PastDate"
    document.UpdateForm.alref165.readOnly=false;
  } else if(VINAH_Program=="T") {  // Transitional Care Program
    if(document.UpdateForm.alrestat.value=="2") {
      document.UpdateForm.alref072.className="Mandatory SelectMed"
      document.UpdateForm.alref072.disabled=false;
    }
    document.UpdateForm.alref096.className="PastDate"
    document.UpdateForm.alref096.readOnly=false;
    document.UpdateForm.alref164.className="PastDate"
    document.UpdateForm.alref164.readOnly=false;
    document.UpdateForm.alref165.className="PastDate"
    document.UpdateForm.alref165.readOnly=false;
  } else if(VINAH_Program=="I") {  // HARP
    if(document.UpdateForm.alrestat.value=="2") {
      document.UpdateForm.alref072.className="Mandatory SelectMed"
      document.UpdateForm.alref072.disabled=false;
    }
    document.UpdateForm.alref096.className="PastDate"
    document.UpdateForm.alref096.readOnly=false;
    document.UpdateForm.alref164.className="PastDate"
    document.UpdateForm.alref164.readOnly=false;
  }
// 
  if(VINAH_Program!="O") {   // Not Specialist Outpatient Clinic
    if(!isWhitespace(document.UpdateForm.alref159.value) ||
       !isWhitespace(document.UpdateForm.alref161.value)) {
       document.UpdateForm.alref159.className="Date"
       document.UpdateForm.alref159.readOnly=false;
       document.UpdateForm.alref161.className="PastDate"
       document.UpdateForm.alref161.readOnly=false;
    }
  }
}
//
function setMandCont() {
 if(document.UpdateForm.July2019!=undefined &&
    document.UpdateForm.alenc017!=undefined &&
    document.UpdateForm.alenc011!=undefined &&
    document.UpdateForm.alenc005!=undefined) {
    
    if(SetDateYYYYMMDD(document.UpdateForm.alenc005.value) <
        SetDateYYYYMMDD(document.UpdateForm.July2019.value)) {
        document.UpdateForm.alenc017.className="PastDate";
        document.UpdateForm.alenc018.className="Time";
        document.UpdateForm.alenc011.className="";
    }
 }
 var VINAH_Program = (document.UpdateForm.deptcode.value.substr(10,1));
  if(document.UpdateForm.alcndevp.value=="1") {
    document.getElementById("nameContactEvp").style.display="";
    document.getElementById("fieldContactEvp").style.display="";
    document.UpdateForm.alenc079.className="Mandatory SelectMed"
    document.UpdateForm.alenc079.disabled=false;
  }
//
  if(VINAH_Program=="A") {         // Post Acute Care
    document.UpdateForm.alenc115.className="Mandatory SelectMed"
    document.UpdateForm.alenc115.disabled=false;
//  document.UpdateForm.alenc004.className="Mandatory SelectMed"
//  document.UpdateForm.alenc004.disabled=false;
    document.UpdateForm.alenc080.className="Mandatory SelectMed"
    document.UpdateForm.alenc080.disabled=false;
    document.UpdateForm.alenc081.className="Mandatory SelectMed"
    document.UpdateForm.alenc081.disabled=false;
    document.UpdateForm.alenc083.className="Mandatory SelectMed"
    document.UpdateForm.alenc083.disabled=false;
    document.UpdateForm.alenc084.className="Mandatory SelectMed"
    document.UpdateForm.alenc084.disabled=false;
    document.UpdateForm.alenc086.className="Mandatory SelectMed"
    document.UpdateForm.alenc086.disabled=false;
  } else if(VINAH_Program=="H") {  // HBPCCT Program
//  document.UpdateForm.alenc004.className="Mandatory SelectMed"
//  document.UpdateForm.alenc004.disabled=false;
    document.UpdateForm.alenc080.className="Mandatory SelectMed"
    document.UpdateForm.alenc080.disabled=false;
    document.UpdateForm.alenc083.className="Mandatory SelectMed"
    document.UpdateForm.alenc083.disabled=false;
    document.UpdateForm.alenc084.className="Mandatory SelectMed"
    document.UpdateForm.alenc084.disabled=false;
    document.UpdateForm.alenc086.className="Mandatory SelectMed"
    document.UpdateForm.alenc086.disabled=false;
    document.UpdateForm.alenc077.className="Mandatory SelectMed"
    document.UpdateForm.alenc077.disabled=false;
  } else if(VINAH_Program=="S" || VINAH_Program=="E" ||
            VINAH_Program=="L" || VINAH_Program=="D"
            || VINAH_Program=="V") {  // SACS HEN TPN HBD VALP
    document.UpdateForm.alenc115.className="Mandatory SelectMed"
    document.UpdateForm.alenc115.disabled=false;
//  document.UpdateForm.alenc004.className="Mandatory SelectMed"
//  document.UpdateForm.alenc004.disabled=false;
    document.UpdateForm.alenc080.className="Mandatory SelectMed"
    document.UpdateForm.alenc080.disabled=false;
    document.UpdateForm.alenc081.className="Mandatory SelectMed"
    document.UpdateForm.alenc081.disabled=false;
    document.UpdateForm.alenc083.className="Mandatory SelectMed"
    document.UpdateForm.alenc083.disabled=false;
    document.UpdateForm.alenc084.className="Mandatory SelectMed"
    document.UpdateForm.alenc084.disabled=false;
    document.UpdateForm.alenc086.className="Mandatory SelectMed"
    document.UpdateForm.alenc086.disabled=false;
  } else if(VINAH_Program=="O") {  // Specialist Outpatient Clinic
    document.UpdateForm.alenc115.className="Mandatory SelectMed"
    document.UpdateForm.alenc115.disabled=false;
//  document.UpdateForm.alenc004.className="Mandatory SelectMed"
//  document.UpdateForm.alenc004.disabled=false;
    document.UpdateForm.alenc080.className="Mandatory SelectMed"
    document.UpdateForm.alenc080.disabled=false;
    document.UpdateForm.alenc081.className="Mandatory SelectMed"
    document.UpdateForm.alenc081.disabled=false;
    document.UpdateForm.alenc083.className="Mandatory SelectMed"
    document.UpdateForm.alenc083.disabled=false;
    document.UpdateForm.alenc084.className="Mandatory SelectMed"
    document.UpdateForm.alenc084.disabled=false;
    document.UpdateForm.alenc086.className="Mandatory SelectMed"
    document.UpdateForm.alenc086.disabled=false;
  } else if(VINAH_Program=="M") {  // Medi-Hotel
    document.UpdateForm.alenc080.className="Mandatory SelectMed"
    document.UpdateForm.alenc080.disabled=false;
    document.UpdateForm.alenc086.className="Mandatory SelectMed"
    document.UpdateForm.alenc086.disabled=false;

  } else if(VINAH_Program=="P") {  // Palliative Care
    document.UpdateForm.alenc115.className="Mandatory SelectMed"
    document.UpdateForm.alenc115.disabled=false;
//  document.UpdateForm.alenc004.className="Mandatory SelectMed"
//  document.UpdateForm.alenc004.disabled=false;
    document.UpdateForm.alenc080.className="Mandatory SelectMed"
    document.UpdateForm.alenc080.disabled=false;
    document.UpdateForm.alenc081.className="Mandatory SelectMed"
    document.UpdateForm.alenc081.disabled=false;
    document.UpdateForm.alenc083.className="Mandatory SelectMed"
    document.UpdateForm.alenc083.disabled=false;
    document.UpdateForm.alenc084.className="Mandatory SelectMed"
    document.UpdateForm.alenc084.disabled=false;
    document.UpdateForm.alenc086.className="Mandatory SelectMed"
    document.UpdateForm.alenc086.disabled=false;
    document.UpdateForm.alenc077.className="Mandatory SelectMed"
    document.UpdateForm.alenc077.disabled=false;
    document.UpdateForm.alenc054.className="Mandatory SelectMed"
    document.UpdateForm.alenc054.disabled=false;
    document.UpdateForm.alenc052.className="Mandatory SelectMed"
    document.UpdateForm.alenc052.disabled=false;
    document.UpdateForm.alenc025.className="Mandatory"
    document.UpdateForm.alenc025.disabled=false;
    document.UpdateForm.alenc053.className="Mandatory SelectMed"
    document.UpdateForm.alenc053.disabled=false;
  } else if(VINAH_Program=="R") {  // Residential In Reach
    document.UpdateForm.alenc115.className="Mandatory SelectMed"
    document.UpdateForm.alenc115.disabled=false;
//  document.UpdateForm.alenc004.className="Mandatory SelectMed"
//  document.UpdateForm.alenc004.disabled=false;
    document.UpdateForm.alenc080.className="Mandatory SelectMed"
    document.UpdateForm.alenc080.disabled=false;
    document.UpdateForm.alenc081.className="Mandatory SelectMed"
    document.UpdateForm.alenc081.disabled=false;
    document.UpdateForm.alenc083.className="Mandatory SelectMed"
    document.UpdateForm.alenc083.disabled=false;
    document.UpdateForm.alenc084.className="Mandatory SelectMed"
    document.UpdateForm.alenc084.disabled=false;
    document.UpdateForm.alenc086.className="Mandatory SelectMed"
    document.UpdateForm.alenc086.disabled=false;
  } else if(VINAH_Program=="T") {  // Transitional Care Program
    document.UpdateForm.alenc115.className="Mandatory SelectMed"
    document.UpdateForm.alenc115.disabled=false;
//  document.UpdateForm.alenc004.className="Mandatory SelectMed"
//  document.UpdateForm.alenc004.disabled=false;
    document.UpdateForm.alenc080.className="Mandatory SelectMed"
    document.UpdateForm.alenc080.disabled=false;
    document.UpdateForm.alenc081.className="SelectMed"
    document.UpdateForm.alenc081.disabled=false;
    document.UpdateForm.alenc083.className="Mandatory SelectMed"
    document.UpdateForm.alenc083.disabled=false;
    document.UpdateForm.alenc084.className="SelectMed"
    document.UpdateForm.alenc084.disabled=false;
    document.UpdateForm.alenc086.className="SelectMed"
    document.UpdateForm.alenc086.disabled=false;
  } else if(VINAH_Program=="I") {  // HARP
    document.UpdateForm.alenc115.className="Mandatory SelectMed"
    document.UpdateForm.alenc115.disabled=false;
//  document.UpdateForm.alenc004.className="Mandatory SelectMed"
//  document.UpdateForm.alenc004.disabled=false;
    document.UpdateForm.alenc080.className="Mandatory SelectMed"
    document.UpdateForm.alenc080.disabled=false;
    document.UpdateForm.alenc081.className="Mandatory SelectMed"
    document.UpdateForm.alenc081.disabled=false;
    document.UpdateForm.alenc083.className="Mandatory SelectMed"
    document.UpdateForm.alenc083.disabled=false;
    document.UpdateForm.alenc084.className="Mandatory SelectMed"
    document.UpdateForm.alenc084.disabled=false;
    document.UpdateForm.alenc086.className="Mandatory SelectMed"
    document.UpdateForm.alenc086.disabled=false;
  }
}
//
function ShowRelationshipMess() {
  if(document.UpdateForm.alhdt017.value.substr(14,1)=="1") {
    document.UpdateForm.alhdt016.className="SelectMed Mandatory"
    document.UpdateForm.alhdt016.disabled=false;
    document.UpdateForm.alhdt020.className="SelectMed Mandatory"
    document.UpdateForm.alhdt020.disabled=false;
  } else {
    if(document.UpdateForm.alhdt016.disabled==false) {
      document.UpdateForm.alhdt016.className="SelectMed"
      document.UpdateForm.alhdt016.selectedIndex=0;
      document.UpdateForm.alhdt020.className="SelectMed"
      document.UpdateForm.alhdt020.selectedIndex=0;
    }
  }
}
function openAssessments() {
  var deptcode = document.getElementById("deptcode");
  var admissno = document.getElementById("admissno");
  var urnumber = document.getElementById("urnumber");
  var linkUrl = "allweb02.pbl?reportno=10&template=009" + 
                "&urnumber=" + urnumber.value +
                "&admissno=" + admissno.value +
                "&deptcode=" + deptcode.value;
  var left = (document.body.clientWidth-900)/2;
  DFrameLink(linkUrl,5,left,900,550);
}
function SetClinicTypeListRef() {
    UpdateForm.alref106.options.length=1;
    SetClinicType(UpdateForm.alref106,UpdateForm.d_alref106.value,UpdateForm.alref119.value);
}
function SetClinicTypeListHdt() {
    UpdateForm.alhdt043.options.length=1;
    SetClinicType(UpdateForm.alhdt043,UpdateForm.d_alhdt043.value,UpdateForm.alhdt069.value);
}
//------------------------------------------------------------
// Validate a visit number and check it is for this U/R
//------------------------------------------------------------
function ValidateVisit(ValidateV,ValidateUR,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=3; i < ValidateVisit.arguments.length; i++) {
    if (typeof(ValidateVisit.arguments[i]) == 'function') {
      ReturnFunction=ValidateVisit.arguments[i] }
    else {
      ValidateVisit.arguments[i].value=""; }  }
  if (isWhitespace(ValidateV.value)) return;;
  var serverURL = "../cgi-bin/allweb03.pbl?reportno=10&valdcode=" +
                    ValidateV.value.replace(/ /g,"+") +
                    "&valdurno=" + ValidateUR.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=ReturnValue[0];
    j=0
    for (var i=3; i < ValidateVisit.arguments.length; i++) {
       if (typeof(ValidateVisit.arguments[i]) != 'function') {
         j++
         ValidateVisiValidateVisit[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ValidateV.value="";
    ValidateV.focus();;
    return false;}
}
//------------------------------------------------------------
// Perform field edits on update allhdtaf message
//------------------------------------------------------------
function MessageEdits() {
  if(document.UpdateForm.alhdt008.value=="1") {     // Episode Referral
    if(!isWhitespace(UpdateForm.alhdt040.value) &&
       !isWhitespace(UpdateForm.alhdt070.value)) {
       if(SetDateYYYYMMDD(UpdateForm.alhdt070.value) >
          SetDateYYYYMMDD(UpdateForm.alhdt040.value)) {
          alert(UpdateForm.alhdt040.title + " must be after " +
          UpdateForm.alhdt070.title);
          return false;
       }
    }
//
    if(!isWhitespace(UpdateForm.alhdt038.value) &&
       !isWhitespace(UpdateForm.alhdt070.value)) {
       if(SetDateYYYYMMDD(UpdateForm.alhdt070.value) >
          SetDateYYYYMMDD(UpdateForm.alhdt038.value)) {
          alert(UpdateForm.alhdt038.title + " must be after " +
          UpdateForm.alhdt070.title);
          return false;
       }
    }
//
    if(!isWhitespace(UpdateForm.alhdt038.value) &&
       !isWhitespace(UpdateForm.alhdt040.value)) {
       if(SetDateYYYYMMDD(UpdateForm.alhdt040.value) >
          SetDateYYYYMMDD(UpdateForm.alhdt038.value)) {
          alert(UpdateForm.alhdt038.title + " must be after " +
          UpdateForm.alhdt040.title);
          return false;
       }
    }
  }
//
  return true;
} 
function CreateRefInMessage() {
  setFormactn('C');
}
//-------------------------------------------------------------------
// Show Triage Status and Triage Date accoding to department setup
//-------------------------------------------------------------------
function showTriageStatus() {
  if(!document.getElementById("d_aldeutrs")) {
    return;
  }
  var showtriage=false;
  if(document.getElementById("d_aldeutrs").value == "1") {
    showtriage=true;
  }
  if(showtriage) {
    if(document.getElementById("tsHeading")) {
      document.getElementById("tsHeading").innerHTML=
      document.getElementById("showtsHeading").innerHTML;
      document.getElementById("tsField").innerHTML=
      document.getElementById("showtsField").innerHTML;
      if(document.getElementById("alref186")) {
        document.getElementById("alref186").focus();
      }
    }
    document.getElementById("tdHeading").innerHTML=
    document.getElementById("showtdHeading").innerHTML;
    document.getElementById("tdField").innerHTML=
    document.getElementById("showtdField").innerHTML;
  } else {
    if(document.getElementById("tsHeading")) {
      document.getElementById("tsHeading").innerHTML="";
      document.getElementById("tsField").innerHTML="";
    }
    document.getElementById("tdHeading").innerHTML="";
    document.getElementById("tdField").innerHTML="";
  }
  filterTriageStatus();
}
//------------------------------------------------------------------
//  Common onLoad function to filter triage status
//------------------------------------------------------------------
function filterTriageStatus() {
  if(!document.getElementById("deptlcod")) {
    return;
  }
  if(!document.getElementById("d_alrestat")) {
    return;
  }
  if(!document.getElementById("alref186")) {
    return;
  }
  if(document.getElementById("d_alrestat").value != " " &&
     document.getElementById("d_alrestat").value != "0") {
    return;
  }
//
  TriageStatus=document.getElementById("alref186");
//
  if(document.getElementById("deptlcod").value.substr(10,1)=="O") { // SOP
     for(var i=0;i<TriageStatus.length;i++) {
        Ind1=trim(TriageStatus.options[i].value.substr(3,1));
        if(Ind1 != "S" && Ind1 != "B" && Ind1 !=""
           && TriageStatus.selected!=true){
          TriageStatus.remove(i);
          i--;
        }
     }
  }
//
  if(document.getElementById("deptlcod").value.substr(10,1)!="O") { // Not SOP
     for(var i=0;i<TriageStatus.length;i++) {
        Ind1=trim(TriageStatus.options[i].value.substr(3,1));
        if(Ind1 != "N" && Ind1 != "B" && Ind1 !=""
           && TriageStatus.selected!=true){
          TriageStatus.remove(i);
          i--;
        }
     }
  }
}
//------------------------------------------------------------------
//  Check the triage date is after the referral date
//------------------------------------------------------------------
function checkTriageDate() {
  if(!document.getElementById("alref187")) {  // Triage Date
    return;
  }
  triageD=document.getElementById("alref187");
  if(isWhitespace(triageD.value)) {
    return;
  }
  if(!checkDate(triageD,triageD.title)) {
    return;
  }
  if(!document.getElementById("d_alref019")) {   // Referral Date
    return;
  }
  referralD=document.getElementById("d_alref019");
  if (SetDateYYYYMMDD(referralD.value) > SetDateYYYYMMDD(triageD.value)) {
    alert("Triage date must be after the referral date");
    triageD.value="";
    triageD.focus();
  }
}
//-------------------------------------------------------------------
// Show Priority accoding to department setup
//-------------------------------------------------------------------
function showPriority() {
  if(!document.getElementById("d_aldeuprt")) {
    return;
  }
  var showpriority=false;
  if(document.getElementById("d_aldeuprt").value == "1") {
     showpriority=true;
  }
  if(showpriority) {
    document.getElementById("prHeading").innerHTML=
    document.getElementById("showprHeading").innerHTML;
    document.getElementById("prField").innerHTML=
    document.getElementById("showprField").innerHTML;
  } else {
    document.getElementById("prHeading").innerHTML="";
    document.getElementById("prField").innerHTML="";
  }
}
//-------------------------------------------------------------------
// Show Priority accoding to department setup
//-------------------------------------------------------------------
function showPriorityTriage() {
  if(!document.getElementById("d_aldeuprt")) {
    return;
  }
  if(document.getElementById("d_aldeuprt").value != "1") {
    return;
  }
  if(!document.getElementById("deptlcod")) {
    return;
  }
  if(!document.getElementById("alref186")) {
    return;
  }
  if(document.getElementById("alref027")) {
     HDP=trim(document.getElementById("alref186").value.substr(14,4));
     if(HDP=="99" || HDP=="98") {
       document.getElementById("alref027").selectedIndex=0;
       document.getElementById("alref027").className="selectMed";
       document.getElementById("alref027").disabled=true;
     } else {
       document.getElementById("alref027").className="Mandatory selectMed";
       document.getElementById("alref027").disabled=false;
     }
  }
//
// Mandatory referral in first triage score for Palliative care
//
  if(!document.getElementById("alref192")) {
    return;
  }
  if(!document.getElementById("d_aldeprgs")) {
    return;
  }
  RefAccepted="";
  if(document.getElementById("alref192")) {
     RefAccepted=trim(document.getElementById("alref186").value.substr(14,4));
  }
  HDP=trim(document.getElementById("d_aldeprgs").value.substr(14,4));
  if(HDP=="41" && RefAccepted=="1") {
    document.getElementById("alref192").className="Mandatory";
  } else {
    document.getElementById("alref192").className="";
  }
}
//-------------------------------------------------------------------
// Referral in outcome list
//-------------------------------------------------------------------
function referalOutcomeList() {
  f = document.UpdateForm;
  linkurl = "../cgi-bin/allweb05.pbl?reportno=07&template=001" +
            "&urnumber=" + f.urnumber.value.replace(/ /g,"+") +
            "&admissno=" + f.admissno.value.replace(/ /g,"+")
  Left=(document.body.clientWidth-600)/2;
  DFrameLink(linkurl,0,Left,600,350);
}
function UpdRefInOutcome(key,ur) {
  linkurl = "../cgi-bin/allweb05.pbl?reportno=07&template=003" +
            "&alriokey=" + key.replace(/ /g,"+") +
            "&urnumber=" + ur.replace(/ /g,"+") +
            "&admissno=" + key.substr(0,8).replace(/ /g,"+")
  Left=(document.body.clientWidth-500)/2;
  DFrameLink(linkurl,20,Left,500,300);
}
//-------------------------------------------------------------------
// Referral in outcome list
//-------------------------------------------------------------------
function SetReferralInReason() {
  UpdateForm.alhdt080.options.length=0;
  selectOptions2(59,UpdateForm.alhdt079,UpdateForm.alhdt080);
}
