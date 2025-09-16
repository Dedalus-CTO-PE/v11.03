//jsVersion  : V11.03.00
//------------------------------------------------------------ 
// Function : outweb0803001.js
//------------------------------------------------------------ 
function SubmitFinal() {
  setRedirect()
  if (validateMandatory(AddForm)) {
    if(AddForm.outbb071!=undefined) {
       AddForm.outbb071.disabled=false;
    }
    if(AddForm.d_pmsvx093!=undefined) {
      if(document.AddForm.d_pmsvx093.checked==true) {
        document.AddForm.pmsvx093.value="1";
      } else {
        document.AddForm.pmsvx093.value="0";
      }
    }
    if(typeof(ReEnableFields)== 'function') {
      ReEnableFields();
    }
    AddForm.submit() 
  }
}
function SubmitFinalNZ() {
  setRedirectNZ()
  if (validateMandatory(AddForm)) {
    SubmitHiddenNew(AddForm);
  }
}
function setRedirect() {
  if (document.AddForm.ptcnxcom != undefined) {
    if (document.AddForm.ptcnxcom.value == "1") {
      setRedirectXCom();
      return;
    }
  }

  strTemplate="" ;
  scrName="";
  checkInd=document.AddForm.outbb002.value.substr(3,5)
  if(checkInd.search(/W/g) >= 0) {
    strTemplate="041";
    scrName="WC";}
  if(checkInd.search(/M/g) >= 0) {
    strTemplate="042";
    scrName="TAC";}
  if(checkInd.search(/V/g) >= 0) {
    strTemplate="043";
    scrName="VA";}
  if(checkInd.search(/D/g) >= 0) {
    strTemplate="081";
    scrName="DF";}
  checkInd=document.AddForm.outbb002.value.substr(8,1)
  if(checkInd.search(/C/g) >= 0) {
    strTemplate="048";
    scrName="CT";}
  if (strTemplate=="") {
      document.AddForm.redirect.value="outweb02.pbl?reportno=3&template=1" +
                                      "&seriflag=1"
  } else {
    document.AddForm.redirect.value="patweb89.pbl?reportno=01" +
               "&template=" + strTemplate +
               "&seriflag=1" +
               "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+")  
  }
  if(chkExtraTempl(document.AddForm,"S",document.AddForm.firstbok.value,
              PatientLinks.urnumber.value.replace(/ /g,"+"),scrName)) {
    document.AddForm.redirect.value = document.AddForm.redirect.value +
                                      "&seriflag=1&shwprint=1"
  }
}
function setRedirectXCom() {
  strTemplate="" ;
  scrName="";
  checkComp=document.AddForm.outbb002.value.substr(3,1)
    if (checkComp=="D") {
     strTemplate="081";
     scrName="DF";}
    if (checkComp=="A") {
     strTemplate="240";
     scrName="AD"; }
   if (checkComp=="O") {
     strTemplate="241";
     scrName="OD"; }
   if (checkComp=="M") {
     strTemplate="242";
     scrName="MV"; }
   if (checkComp=="F") {
     strTemplate="243";
     scrName="FD"; }
   if (checkComp=="H") {
     strTemplate="244";
     scrName="PR"; }
   if (checkComp=="S") {
     strTemplate="245";
     scrName="SH"; }
   if (checkComp=="V") {
     strTemplate="246";
     scrName="WV"; }
   if (checkComp=="W") {
     strTemplate="247";
     scrName="WW"; }
   if (checkComp=="E") {
     strTemplate="248";
     scrName="OS"; }
   if (checkComp=="G") {
     strTemplate="249";
     scrName="OV"; }

  if (strTemplate=="") {
      document.AddForm.redirect.value="outweb02.pbl?reportno=3&template=1" +
                                      "&seriflag=1"
  } else {
    document.AddForm.redirect.value="patweb89.pbl?reportno=01" +
               "&template=" + strTemplate +
               "&seriflag=1" +
               "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+")
  }
  if(chkExtraTempl(document.AddForm,"S",document.AddForm.firstbok.value,
              PatientLinks.urnumber.value.replace(/ /g,"+"),scrName)) {
    document.AddForm.redirect.value = document.AddForm.redirect.value +
                                      "&seriflag=1&shwprint=1"
  }

}

function setRedirectNZ() {
  strTemplate="" ;
  scrName="";
  checkInd=document.AddForm.outbb002.value.substr(3,5)
  if(checkInd.search(/W/g) >= 0) {
    strTemplate="005";
    scrName="WC";}
  if(checkInd.search(/M/g) >= 0) {
    strTemplate="042";
    scrName="TAC";}
  if(checkInd.search(/V/g) >= 0) {
    strTemplate="043";
    scrName="VA";}
  if(checkInd.search(/D/g) >= 0) {
    strTemplate="081";
    scrName="DF";}
  checkInd=document.AddForm.outbb002.value.substr(8,1)
  if(checkInd.search(/C/g) >= 0) {
    strTemplate="048";
    scrName="CT";}
  if (strTemplate=="") {
      document.AddForm.redirect.value="outweb02.pbl?reportno=3&template=1" +
                                      "&seriflag=1"
  } else {
    document.AddForm.redirect.value="patweb89.pbl?reportno=01" +
               "&template=" + strTemplate +
               "&seriflag=1" +
               "&systflag=2" +
               "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+")
  }
  if(chkExtraTempl(document.AddForm,"S",document.AddForm.firstbok.value,
              PatientLinks.urnumber.value.replace(/ /g,"+"),scrName)) {
    document.AddForm.redirect.value = document.AddForm.redirect.value +
                                      "&seriflag=1&shwprint=1&systflag=2" 
  }
}
function GetBookings() {
  Flag=0
  Appointments.innerHTML="";
  for (var e = 0; e < parent.AddForm.elements.length; e++) {
    var el=parent.AddForm.elements[e] ;
    if(el.name.match(/seribkey/) && el.value!="") {
    if(Flag=="0") {
      document.AddForm.firstbok.value=el.value
      Flag=1;
    }
    Appointments.innerHTML+="<input type=hidden name=" +
                       el.name.substr(0,8) + " value='" + el.value + "'>"
    if(document.AddForm.lastbdat != undefined) {
      document.AddForm.lastbdat.value=el.value.substr(12,8) }   // CAR 271432
    }
  }
  document.AddForm.okbutton.disabled=false;
}
function DisplayCarer() {
  if(document.AddForm.otheccar != undefined) {
    if (document.AddForm.otheccar.value=="1"){
      ShowCarer.innerHTML=sendcarer.innerHTML;
    } else {
      ShowCarer.innerHTML="";
    }
  }
}
function SetAppointDefaults() {
  if(document.AddForm.bookflag.value == 2) {  // From A/H referral

    for (var i=0; i < document.AddForm.outbb002.length; i++) {
     if (document.AddForm.outbb002.options[i].value.substr(0,3)==
         document.AddForm.refrclmc.value.substr(0,3)){
         document.AddForm.outbb002.selectedIndex=i;
     }
    }
    showFundingSource(AddForm);
    if(document.AddForm.pmsvx141!=undefined &&
       !isWhitespace(document.AddForm.refrfsrc.value)) {
      for (var i=0; i < document.AddForm.pmsvx141.length; i++) {
       if (document.AddForm.pmsvx141.options[i].value.substr(0,3)==
           document.AddForm.refrfsrc.value.substr(0,3)){
           document.AddForm.pmsvx141.selectedIndex=i;
       }
      }
    }
    document.AddForm.outbb013.value=document.AddForm.refrprty.value;
    if(document.AddForm.outbb001!=undefined) {
      for (var i=0; i < document.AddForm.outbb001.length; i++) {
        if (document.AddForm.outbb001.options[i].value.substr(0,3) ==
            document.AddForm.refrsrce.value.substr(0,3))
        {
           document.AddForm.outbb001.selectedIndex=i;
        }
      }
    }
    document.AddForm.outbb029.value=document.AddForm.refrfgpc.value;
    document.AddForm.name_outbb029.value=document.AddForm.refrfgpn.value
    document.AddForm.pmsvx052.value=trim(document.AddForm.refrpcom.value);
    if(document.AddForm.refrprb1!=undefined) { 
       var problems="";
       if(!isWhitespace(document.AddForm.refrprb1.value)) {
          problems+=trim(document.AddForm.refrprb1.value);
       }
       if(!isWhitespace(document.AddForm.refrprb2.value)) {
         if(problems!="") { problems+=" ; ";}
         problems+=trim(document.AddForm.refrprb2.value);
       }
       if(!isWhitespace(document.AddForm.refrprb3.value)) {
         if(problems!="") { problems+=" ; ";}
          problems+=trim(document.AddForm.refrprb3.value);
       }
       document.AddForm.outptcom.value=problems
    }

    if(document.AddForm.refdia1c!=undefined) { 
      document.AddForm.outbb045.value=document.AddForm.refdia1c.value;
      document.AddForm.outbb046.value=document.AddForm.refdia1d.value;
      document.AddForm.outbb055.value=document.AddForm.refdia2c.value;
      document.AddForm.outbb056.value=document.AddForm.refdia2d.value;
      document.AddForm.outbb057.value=document.AddForm.refdia3c.value;
      document.AddForm.outbb058.value=document.AddForm.refdia3d.value;
    }
    if(document.AddForm.refpracc!=undefined) {
      document.AddForm.outbb030.value=document.AddForm.refpracc.value;
    }
    if(document.AddForm.refpracd!=undefined) {
      document.AddForm.d_outbb030.value=document.AddForm.refpracd.value;
    }
    if(document.AddForm.refpracn!=undefined) {
      document.AddForm.outbb037.value=document.AddForm.refpracn.value;
    }
  }
}
function MandProgram() {
  if(document.AddForm.addnewpg.checked==true) {
    document.AddForm.outbb003.className="SelectBig Mandatory";
  } else {
    document.AddForm.outbb003.className="SelectBig";
  }
}
//
function showFundingSource(theForm) {
    if(typeof(FundingHeading)=="undefined") { 
      return;
    }
    i=theForm.outbb002.selectedIndex;
    ind=theForm.outbb002.options[i].value.substring(3,4)
    if (ind=="A") {
      FundingHeading.innerHTML=offdutyhd.innerHTML;
      FundingId.innerHTML=offdutyid.innerHTML;
    } else {
      if (ind=="P") {
        FundingHeading.innerHTML=fundinghd.innerHTML;
        FundingId.innerHTML=fundingidshow.innerHTML;
        theForm.pmsvx141.className="Mandatory";
      } else {
        FundingHeading.innerHTML=blanklabel.innerHTML;
        FundingId.innerHTML=blanklabel.innerHTML;
      }
    }
}
function claimHF(theForm) {
  if(theForm.outbb002.value.substr(3,1) == "H") {
    theForm.outbb008.className="Mandatory";
  } else {
    theForm.outbb008.className="";
  }
  checkHFTable(theForm);
}
function checkHFTable(theForm) {
  if(!isWhitespace(theForm.outbb008.value)) {
    theForm.outbb009.className="Mandatory";
  } else {
    theForm.outbb009.value="";
    theForm.outbb009.className="";
    theForm.tabldesc.value="";
  }
}
