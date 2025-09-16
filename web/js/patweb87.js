//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb87.js
//========================================================================
//   Report 1
//========================================================================
function ShowDetail01(linkurl) {
  Left=(document.body.clientWidth-650)/2
  DFrameLink(linkurl,0,Left,650,400)
}
function EditLookup01() {
    SelectCode.template.value=3
    SelectCode.hfgrp001.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-650)/2
    DFrameSubmit(SelectCode,0,Left,650,400)
}

function FilterMultiple(el) {
  var noselected=0;
  ms=document.getElementById("multhosp");
  for (var i=0;i<ms.options.length;i++) {
    if (ms.options[i].selected==true) {
      noselected++;
    }
  }
  if(ms.options[0].value=="All" && noselected>1 && 
     ms.options[0].selected==true) {
    alert("All can't be used with multiple selections");
     ms.options[0].selected=false;
  }
  var hospid="";
  var allselected=false;
  for (var i=0;i<ms.options.length;i++) {
  if (ms.options[i].selected==true)
    hospid+= ms.options[i].value.substr(0,3) + "|";
  }
}
function ClearInvHold() {
   if (document.UpdateForm.usefhinv.value=="1") {
     alert("Health Fund On Hold Invoice file must be created first.");
     document.UpdateForm.clrhlinv.checked=false;
     return;
   }

   if(document.UpdateForm.clrhlinv.checked==true){
      document.UpdateForm.sethlinv.checked=false;
      document.UpdateForm.ptfhi005.className="Readonly";
      document.UpdateForm.ptfhi005.value="";
      document.UpdateForm.ptfhi005.readOnly=true;
      document.UpdateForm.ptfhi005.disabled=true;

      if (document.UpdateForm.ibcnmhos.value=="1") {
        document.UpdateForm.multhosp.className="Mandatory";
        document.UpdateForm.multhosp.value="";
        document.UpdateForm.multhosp.readOnly=false;
        document.UpdateForm.multhosp.disabled=false;
      }

      document.UpdateForm.ptfhi003.className="Mandatory";
      document.UpdateForm.ptfhi003.readOnly=false;
      document.UpdateForm.ptfhi003.disabled=false;

      document.UpdateForm.ptfhi004.className="Readonly";
      document.UpdateForm.ptfhi004.value="";
      document.UpdateForm.ptfhi004.readOnly=true;
      document.UpdateForm.ptfhi004.disabled=true;

      document.UpdateForm.ptfhi006.className="Readonly";
      document.UpdateForm.ptfhi006.value="";
      document.UpdateForm.ptfhi006.readOnly=true;
      document.UpdateForm.ptfhi006.disabled=true;
   } else {
      document.UpdateForm.ptfhi003.className="Readonly";
      document.UpdateForm.ptfhi003.value="";
      document.UpdateForm.ptfhi003.readOnly=true;
      document.UpdateForm.ptfhi003.disabled=true;
      if (document.UpdateForm.ibcnmhos.value=="1") {
        document.UpdateForm.multhosp.className="Readonly";
        document.UpdateForm.multhosp.value="";
        document.UpdateForm.multhosp.readOnly=true;
        document.UpdateForm.multhosp.disabled=true;
      }
   }
}
function SetInvHold() {
   if (document.UpdateForm.usefhinv.value=="1") {
     alert("Health Fund On Hold Invoice file must be created first.");
     document.UpdateForm.sethlinv.checked=false;
     return;
   }

   if(document.UpdateForm.sethlinv.checked==true){
      document.UpdateForm.clrhlinv.checked=false;

      if (document.UpdateForm.ibcnmhos.value=="1") {
        document.UpdateForm.multhosp.className="Mandatory";
        document.UpdateForm.multhosp.readOnly=false;
        document.UpdateForm.multhosp.disabled=false;
      }

      document.UpdateForm.ptfhi005.className="Mandatory";
      document.UpdateForm.ptfhi005.readOnly=false;
      document.UpdateForm.ptfhi005.disabled=false;

      document.UpdateForm.ptfhi003.className="Mandatory";
      document.UpdateForm.ptfhi003.readOnly=false;
      document.UpdateForm.ptfhi003.disabled=false;

      document.UpdateForm.ptfhi004.readOnly=false;
      document.UpdateForm.ptfhi004.disabled=false;

      document.UpdateForm.ptfhi006.readOnly=false;
      document.UpdateForm.ptfhi006.disabled=false;
   } else {
     if(document.UpdateForm.clrhlinv.checked==false){
      document.UpdateForm.ptfhi005.className="Readonly";
      document.UpdateForm.ptfhi005.value="";
      document.UpdateForm.ptfhi005.readOnly=true;
      document.UpdateForm.ptfhi005.disabled=true;

      if (document.UpdateForm.ibcnmhos.value=="1") {
        document.UpdateForm.multhosp.className="Readonly";
        document.UpdateForm.multhosp.value="";
        document.UpdateForm.multhosp.readOnly=true;
        document.UpdateForm.multhosp.disabled=true;
      }

      document.UpdateForm.ptfhi003.className="Readonly";
      document.UpdateForm.ptfhi003.value="";
      document.UpdateForm.ptfhi003.readOnly=true;
      document.UpdateForm.ptfhi003.disabled=true;

      document.UpdateForm.ptfhi004.className="Readonly";
      document.UpdateForm.ptfhi004.value="";
      document.UpdateForm.ptfhi004.readOnly=true;
      document.UpdateForm.ptfhi004.disabled=true;

      document.UpdateForm.ptfhi006.className="Readonly";
      document.UpdateForm.ptfhi006.value="";
      document.UpdateForm.ptfhi006.readOnly=true;
      document.UpdateForm.ptfhi006.disabled=true;
     }
   }
}

function DispHospital() {
  if (document.UpdateForm.ibcnmhos.value!="1") {
    document.getElementById("HospCode").innerHTML=
             document.getElementById("blankhosp").innerHTML;
    document.getElementById("HospHeading").innerHTML="";
  } else {
    document.getElementById("HospHeading").innerHTML=
             document.getElementById("hosphd").innerHTML;
    document.getElementById("HospCode").innerHTML=
             document.getElementById("hospital").innerHTML;

    document.UpdateForm.multhosp.className="Readonly";
    document.UpdateForm.multhosp.value="";
    document.UpdateForm.multhosp.readOnly=true;
    document.UpdateForm.multhosp.disabled=true;
  }
}

function SetDescription() {
   if((document.UpdateForm.sethlinv.checked==false) &&
      (document.UpdateForm.clrhlinv.checked==false)){
    document.UpdateForm.ptfhi003.value="";
    document.UpdateForm.ptfhi003.className="Readonly";
    document.UpdateForm.ptfhi003.readOnly=true;
    document.UpdateForm.ptfhi005.value="";
    document.UpdateForm.ptfhi005.className="Readonly";
    document.UpdateForm.ptfhi005.readOnly=true;
   }
  if(!isWhitespace(document.UpdateForm.ptfhi005.value)) {
    document.UpdateForm.ptfhi006.className="";
    document.UpdateForm.ptfhi006.readOnly=false;
    document.UpdateForm.ptfhi004.className="";
    document.UpdateForm.ptfhi004.readOnly=false;
  } else {
    document.UpdateForm.ptfhi006.value="";
    document.UpdateForm.ptfhi006.className="Readonly";
    document.UpdateForm.ptfhi006.readOnly=true;
    document.UpdateForm.ptfhi004.value="";
    document.UpdateForm.ptfhi004.className="Readonly";
    document.UpdateForm.ptfhi004.readOnly=true;
  }
}


//========================================================================
//   Report 2
//========================================================================
function ShowDetail02(linkurl) {
  Left=(document.body.clientWidth-1070)/2
  DFrameLink(linkurl,0,Left,1070,850)
}
function EditCategory02() {
  var dummy="";
  if (validateCode(47,SelectCode.startkey,dummy)) {
    SelectCode.template.value=3
    SelectCode.hfund001.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-970)/2
    DFrameSubmit(SelectCode,0,Left,970,650)
  }
}
function Tables02(table) {
parent.location.href="patweb87.pbl?reportno=3&template=1&hftab001="+table
DFrameExit()
}
function setUpdateFormactn02()
{
  if (document.UpdateForm.prevind.value == "1") //active ind previously off
  {
    if (document.UpdateForm.hfund011.checked == true) //active ind now on
    {
      ans=confirm("Do you want to activate all tables ?")
      if (ans)
      {
        alert("Activating all attached tables");
        setFormactn('E');  // activate all tables
      }
      else
      {
        alert("Activating the health fund");
        setFormactn('U');  // activate the health fund 
      }
    }
    else //active ind now off 
    {
      setFormactn('U');
    }
  }
  else // active ind previously on
  {
    if (document.UpdateForm.hfund011.checked == true) //active ind now on
    {
      setFormactn('U');
    }
    else // active ind now off
    {
      alert("Inactivating all attached tables");
      setFormactn('E');  // Inactivate all tables
    }
  }
}
//========================================================================
//   Report 3
//========================================================================
function ShowDetail03(linkurl) {
  Left=(document.body.clientWidth-480)/2
  DFrameLink(linkurl,0,Left,480,425)
}
function ViewFund03(fundcode) {
  SelectCode.reportno.value=2
  SelectCode.template.value=3
  SelectCode.hfund001.value=fundcode
  Left=(document.body.clientWidth-650)/2
  DFrameSubmit(SelectCode,0,Left,650,650)
}
function ShowMoeity(linkurl) {
  Left=(document.body.clientWidth-380)/2
  DFrameLink(linkurl,0,Left,380,225)
}
function AddCode03(fundcode) {
  SelectCode.reportno.value=3
  SelectCode.template.value=2
  SelectCode.hftab001.value=fundcode
  Left=(document.body.clientWidth-480)/2
  DFrameSubmit(SelectCode,0,Left,480,235)
}
function AddMoiety(fundcode,fundtable) {
  SelectCode.reportno.value=3
  SelectCode.template.value=5
  SelectCode.hftab001.value=fundcode
  SelectCode.hftab002.value=fundtable
  Left=(document.body.clientWidth-380)/2
  DFrameSubmit(SelectCode,0,Left,380,225)
}
function StartList03(category) {
location.href="patweb87.pbl?reportno=03&template=001&hftab001="+category
}
function EditCategory03() {
  var dummy="";
  if (validateHFT(48,SelectCode.hftab001,SelectCode.startkey,dummy,dummy)){
    SelectCode.template.value=3
    SelectCode.hftab001.value=SelectCode.hftab001.value
    SelectCode.hftab002.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-480)/2
    DFrameSubmit(SelectCode,0,Left,480,425)
  }
}
//========================================================================
//   Report 5
//========================================================================
function ShowDetail05(linkurl) {
  Left=(document.body.clientWidth-480)/2
  DFrameLink(linkurl,0,Left,480,155)
}
function EditLookup05() {
    SelectCode.template.value=3
    SelectCode.ptalw001.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-380)/2
    DFrameSubmit(SelectCode,0,Left,380,155)
}
//========================================================================
//   Report 6
//========================================================================
function ShowDetail06(linkurl) {
  Left=(document.body.clientWidth-810)/2
  DFrameLink(linkurl,0,Left,810,600)
}
function EditLookup06() {
    SelectCode.template.value=3
    SelectCode.ptins001.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-810)/2
    DFrameSubmit(SelectCode,0,Left,810,600)
}
function CheckEclipse(theForm) {
  if(theForm.ptcnuedi.value=="1") {
    document.getElementById('Eclipse').innerHTML=
    document.getElementById('ShowEclipse').innerHTML;
    document.getElementById('Eclipse').style.display="";
  }
}
//========================================================================
// Report 7
//========================================================================
function AddFormactn07() {
  if(document.AddForm.d_ptlet008.checked==true) {
    document.AddForm.ptlet008.value="0";
  } else {
    document.AddForm.ptlet008.value="1";
  }
  if(document.AddForm.ptcnsmsn.value == "1") {
    if(document.AddForm.d_ptlet009.checked==true) {
      document.AddForm.ptlet009.value="1";
    } else {
      document.AddForm.ptlet009.value="0";
    }
  }
  if (validateMandatory(AddForm)) {
    if (validateFld07(AddForm)) {
      AddForm.submit();
    }
  }
}
function updateFormactn07() {
  if(document.UpdateForm.d_ptlet008.checked==true) {
    document.UpdateForm.ptlet008.value="0";
  } else {
    document.UpdateForm.ptlet008.value="1";
  }
  if(document.UpdateForm.ptcnsmsn.value == "1") {
    if(document.UpdateForm.d_ptlet009.checked==true) {
      document.UpdateForm.ptlet009.value="1";
    } else {
      document.UpdateForm.ptlet009.value="0";
    }
  }
  if (validateMandatory(UpdateForm)) {
    if (validateFld07(UpdateForm)) {
      setFormactn('U');
    }
  }
}
function validateFld07(thisForm) {
  pagelength = parseInt(thisForm.ptlet005.value,10);
  if (pagelength<=0) {
    alert("Page Length must be > 0");
    thisForm.ptlet005.focus();
    return false;
  }
  topmargin = parseInt(thisForm.ptlet004.value,10);
  if (topmargin<=0) {
    alert("Top Margin must be > 0");
    thisForm.ptlet004.focus();
    return false;
  }
  bottommargin = parseInt(thisForm.ptlet003.value,10);
  if (bottommargin<=0) {
    alert("Bottom Margin must be > 0");
    thisForm.ptlet003.focus();
    return false;
  }
  leftmargin = parseInt(thisForm.ptlet006.value,10);
  if (leftmargin<=0) {
    alert("Left Margin must be > 0");
    thisForm.ptlet006.focus();
    return false;
  }

  if (pagelength < bottommargin) {
     alert("Bottom Margin must be less than Page Length");
     thisForm.ptlet003.focus();
     return false;
  }
 
  if (pagelength < topmargin) {
     alert("Top Margin must be less than Page Length");
     thisForm.ptlet004.focus();
     return false;
  }
  if (pagelength < (topmargin+bottommargin)) {
     if  (topmargin > bottommargin) {
         alert("Top Margin is too big");
         thisForm.ptlet004.focus();
     }
     else {
         alert("Bottom Margin is too big");
         thisForm.ptlet003.focus();
     }
     return false;
  }
  if (pagelength == (topmargin+bottommargin)) {
     alert("Invalid Top and Bottom Margin combination");
     if  (topmargin > bottommargin) {
         thisForm.ptlet004.focus();
     }
     else {
         thisForm.ptlet003.focus();
     }
     return false;
  }
  return true;
}
function SetSMSPaper(theForm) {
  if (theForm.d_ptlet009.checked==true) {              // SMS Message
    theForm.ptlet003.className="Readonly Integer";    // Bottom Margin
    theForm.ptlet003.value="1";
    theForm.ptlet003.readonly=true;
    theForm.ptlet004.className="Readonly Integer";    // Top Margin
    theForm.ptlet004.value="1";
    theForm.ptlet004.readonly=true;
    theForm.ptlet005.className="Readonly Integer";    // Paper Length
    theForm.ptlet005.value="10";
    theForm.ptlet005.readonly=true;
    theForm.ptlet006.className="Readonly Integer";    // Left Margin
    theForm.ptlet006.value="1";
    theForm.ptlet006.readonly=true;
    if(theForm.name == "AddForm") {
    }
  } else {
    theForm.ptlet003.className="Mandatory Integer";   // Bottom Margin
    theForm.ptlet003.readonly=false;
    theForm.ptlet004.className="Mandatory Integer";   // Top Margin
    theForm.ptlet004.readonly=false;
    theForm.ptlet005.className="Mandatory Integer";   // Paper Length
    theForm.ptlet005.readonly=false;
    theForm.ptlet006.className="Mandatory Integer";   // Left Margin
    theForm.ptlet006.readonly=false;
  }
}

//========================================================================
//   Report 8
//========================================================================
function AddRange08(FinYear) {
  SelectCode.reportno.value=8
  SelectCode.template.value=2
  SelectCode.ptdrg003.value=FinYear
  Left=(document.body.clientWidth-360)/2
  DFrameSubmit(SelectCode,0,Left,360,300)
}
function selectYear08(yearValue) {
  SelectCode.vyearcho.value=yearValue
  SelectCode.frstdate.value=yearValue
  SelectCode.submit()
}
function ShowDetail08(linkurl) {
  Left=(document.body.clientWidth-340)/2
  DFrameLink(linkurl,0,Left,360,300)
}
function CopyRange08(FinYear) {
  SelectCode.reportno.value=8
  SelectCode.template.value=4
  SelectCode.ptdrg003.value=FinYear
  Left=(document.body.clientWidth-300)/2
  DFrameSubmit(SelectCode,0,Left,300,150)
}
//========================================================================
//   Report 9
//========================================================================
function ShowDetail09(linkurl) {
  Left=(document.body.clientWidth-340)/2
  DFrameLink(linkurl,0,Left,340,130)
}
function EditLookup09() {
    SelectCode.template.value=3
    SelectCode.ptyer001.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-340)/2
    DFrameSubmit(SelectCode,0,Left,340,130)
}
//========================================================================
//   Report 11
//========================================================================
function SubmitAdd11() {
  p=document.AddForm;
  if(!CheckPreAdm11(p.pmsle007,p.pmsle008,p.currdate)) {
    return;
  }
  document.AddForm.updttype.value="A";
  SubmitForm();
}
//
function SubmitUpdate11() { 
  p=document.UpdateForm;
  if(!CheckPreAdm11(p.pmsle007,p.pmsle008,p.currdate)) {
    return;
  }
  setFormactn('U');
}
//
function CheckPreAdm11(fromdate,todate,currdate) {
  if(SetDateYYYYMMDD(fromdate.value) > SetDateYYYYMMDD(currdate.value) ||
     SetDateYYYYMMDD(todate.value) > SetDateYYYYMMDD(currdate.value)) {
     alert("Pre-Admissions will only be selected for furture admission dates");
  } else {
    return true;
  }
  if(!isWhitespace(fromdate.value) && isWhitespace(todate.value)) {
    if(SetDateYYYYMMDD(fromdate.value) > SetDateYYYYMMDD(currdate.value)) {
      alert("To admission date is required for Pre-Admissions");
      return false;
    }
  }
  if(!isWhitespace(todate.value) && isWhitespace(fromdate.value)) {
    if(SetDateYYYYMMDD(todate.value) > SetDateYYYYMMDD(currdate.value)) {
      alert("From admission date is required for Pre-Admissions");
      return false;
    }
  }
  if(SetDateYYYYMMDD(fromdate.value) <= SetDateYYYYMMDD(currdate.value) ||
     SetDateYYYYMMDD(todate.value) <= SetDateYYYYMMDD(currdate.value)) {
     alert("Admission from and to date must be in the future " +
           "for Pre-Admissions");
     return false;
  }
  return true;
}
function EditList10(extrctid) {
  URL="patweb87.pbl?reportno=12&template=001&pmsle001=" + extrctid;
  parent.location.href=URL;
}
//========================================================================
// Report 13                           
//========================================================================
function DeletePatient13(CheckBox,ExtractID,Admission) {
  UpdateValue=0
  if (CheckBox.checked) {
     UpdateValue=1 }
  var serverURL   = "../cgi-bin/patweb87.pbl?reportno=13" +
                    "&pmsls001=" + ExtractID.replace(/ /g,"+") +
                    "&pmsls002=" + Admission.replace(/ /g,"+") +
                    "&pmsls003=" + UpdateValue
  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {
    ReturnCode.select();  }
}
//
function PrintExtract12(extrctid) {
  URL="patweb87.pbl?reportno=12&template=002&pmsle001=" + extrctid;
  Left=(document.body.clientWidth-550)/2
  DFrameLink(URL,20,Left,550,350);
}
function PrintExtractSMS12(extrctid) {
  URL="patweb87.pbl?reportno=12&template=003&pmsle001=" + extrctid;
  Left=(document.body.clientWidth-550)/2
  DFrameLink(URL,20,Left,550,350);
}
//========================================================================
// Report 14                           
//========================================================================
function ShowDetail14(linkurl) {
  Left=(document.body.clientWidth-380)/2
  DFrameLink(linkurl,0,Left,380,165)
}
function EditLookup14() {
    SelectCode.template.value=3
    SelectCode.invmsgcd.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-380)/2
    DFrameSubmit(SelectCode,0,Left,380,165)
}
//========================================================================
//   Report 15
//========================================================================
function SubmitAdd15() {
  if (validateFld15(AddForm)) {
    document.AddForm.updttype.value="A";
    SubmitForm();
  }
}
//
function SubmitUpdate15() {
  if (validateFld15(UpdateForm)) {
    setFormactn('U');
  }
}
//
function EditList16(extrctid) {
  URL="patweb87.pbl?reportno=16&template=001&pmsfl001=" + extrctid;
  parent.location.href=URL;
}
function validateFld15(thisForm) {
//
// validate visit date range
//
  if ((!isWhitespace(thisForm.pmsfl003.value)) &&
      (!isWhitespace(thisForm.pmsfl004.value))) {
    if (!CheckDateRange(thisForm.pmsfl003,thisForm.pmsfl004)) {
      thisForm.pmsfl003.select();
      return false;
    }
  }
//
// validate discharge date range
//
  if ((!isWhitespace(thisForm.pmsfl005.value)) &&
      (!isWhitespace(thisForm.pmsfl006.value))) {
    if (!CheckDateRange(thisForm.pmsfl005,thisForm.pmsfl006)) {
      thisForm.pmsfl005.select();
      return false;
    }
  }
//
// validate surname range  
//
  if ((!isWhitespace(thisForm.pmsfl007.value)) &&
      (!isWhitespace(thisForm.pmsfl008.value))) {
    if (!CheckRange(thisForm.pmsfl007,thisForm.pmsfl008)) {
      thisForm.pmsfl007.select();
      return false;
    }
  }
//
// validate Last Letter range  
//
  if ((!isWhitespace(thisForm.pmsfl009.value)) &&
      (!isWhitespace(thisForm.pmsfl010.value))) {
    if (!CheckRange(thisForm.pmsfl009,thisForm.pmsfl010)) {
      thisForm.pmsfl009.focus();
      thisForm.pmsfl009.select();
      return false;
    }
  }
//
// validate Last Letter date range
//
  if ((!isWhitespace(thisForm.pmsfl011.value)) &&
      (!isWhitespace(thisForm.pmsfl012.value))) {
    if (!CheckDateRange(thisForm.pmsfl011,thisForm.pmsfl012)) {
      thisForm.pmsfl011.select();
      return false;
    }
  }
//
// validate Future Action range  
//
  if ((!isWhitespace(thisForm.pmsfl013.value)) &&
      (!isWhitespace(thisForm.pmsfl014.value))) {
    if (thisForm.pmsfl013.value.substr(0,3)>
        thisForm.pmsfl014.value.substr(0,3)) {
      alert("Invalid Future Action code range.")
      thisForm.pmsfl013.focus();
      thisForm.pmsfl013.select();
      return false;
    }
  }
//
// validate Future Action date range
//
  if ((!isWhitespace(thisForm.pmsfl015.value)) &&
      (!isWhitespace(thisForm.pmsfl016.value))) {
    if (!CheckDateRange(thisForm.pmsfl015,thisForm.pmsfl016)) {
      thisForm.pmsfl015.select();
      return false;
    }
  }
//
// validate Claim Code range  
//
  if ((!isWhitespace(thisForm.pmsfl017.value)) &&
      (!isWhitespace(thisForm.pmsfl018.value))) {
    if (thisForm.pmsfl017.value.substr(0,3)>
        thisForm.pmsfl018.value.substr(0,3)) {
      alert("Invalid Claim Code range.")
      thisForm.pmsfl017.focus();
      thisForm.pmsfl017.select();
      return false;
    }
  }
//
// validate Admission Type range  
//
  if ((!isWhitespace(thisForm.pmsfl019.value)) &&
      (!isWhitespace(thisForm.pmsfl020.value))) {
    if (thisForm.pmsfl019.value.substr(0,3)>
        thisForm.pmsfl020.value.substr(0,3)) {
      alert("Invalid Admission Type range.")
      thisForm.pmsfl019.focus();
      thisForm.pmsfl019.select();
      return false;
    }
  }
//
// validate Fund Payment date range
//
  if ((!isWhitespace(thisForm.pmsfl023.value)) &&
      (!isWhitespace(thisForm.pmsfl024.value))) {
    if (!CheckDateRange(thisForm.pmsfl023,thisForm.pmsfl024)) {
      thisForm.pmsfl023.select();
      return false;
    }
  }
// 
// validate minimum amount
//
  if (thisForm.pmsfl021.value==0) {
    alert("Minimum Oustanding Amount must be > 0.")
    thisForm.pmsfl021.select();
    return false;
  }
  return true;
}
//========================================================================
// Report 17
//========================================================================
function DeletePatient17(CheckBox,ExtractID,Admission) {
  UpdateValue=0
  if (CheckBox.checked) {
     UpdateValue=1 }
  var serverURL   = "../cgi-bin/patweb87.pbl?reportno=17" +
                    "&pmlls001=" + ExtractID.replace(/ /g,"+") +
                    "&pmlls002=" + Admission.replace(/ /g,"+") +
                    "&pmlls003=" + UpdateValue
  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {
    ReturnCode.select();  }
}
//
function PrintExtract16(extrctid) {
  URL="patweb87.pbl?reportno=16&template=002&pmsfl001=" + extrctid;
  Left=(document.body.clientWidth-500)/2
  DFrameLink(URL,20,Left,550,300);
}
//========================================================================
//   Report 18
//========================================================================
function SubmitAdd18() {
  document.AddForm.updttype.value="A";
  SubmitForm();
}
//
function SubmitUpdate() {
  setFormactn('U');
}
//========================================================================
// Report 19
//========================================================================
function EditList19(extrctid) {
  URL="patweb87.pbl?reportno=19&template=001&otal0001=" + extrctid.value;
  parent.location.href=URL;
}
//
function PrintExtract19(extrctid) {
  URL="patweb87.pbl?reportno=19&template=002&otal0001=" + extrctid;
  Left=(document.body.clientWidth-500)/2
  DFrameLink(URL,20,Left,550,280);
}
//
function PrintExtractSMS19(extrctid) {
  URL="patweb87.pbl?reportno=19&template=003&otal0001=" + extrctid;
  Left=(document.body.clientWidth-500)/2
  DFrameLink(URL,20,Left,550,350);
}
//
function SubmitUpdate19() {
  setFormactn('U');
}
//
function DeletePatient19(CheckBox,ExtractID,Admissno) {
  UpdateValue=0
  if (CheckBox.checked) {
     UpdateValue=1 }
  var serverURL   = "../cgi-bin/patweb87.pbl?reportno=20" +
                    "&otal0001=" + ExtractID.replace(/ /g,"+") +
                    "&otla0001=" + Admissno.replace(/ /g,"+") +
                    "&otla0002=" + UpdateValue 
  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {
    ReturnCode.select();  }
}
//========================================================================
// Report 20
//========================================================================
function DeletePatient20(CheckBox,ExtractID,Debtor) {
  UpdateValue=0
  if (CheckBox.checked) {
     UpdateValue=1 }
  var serverURL   = "../cgi-bin/patweb87.pbl?reportno=26" +
                    "&otal0001=" + ExtractID.replace(/ /g,"+") +
                    "&otal0002=" + Debtor.replace(/ /g,"+") +
                    "&otal0003=" + UpdateValue 
  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {
    ReturnCode.select();  }
}
//========================================================================
//   Report 21
//========================================================================
function SubmitAdd21() {
  document.AddForm.updttype.value="A";
  SubmitForm();
}
//
function SubmitUpdate() {
  setFormactn('U');
}
//
function EditList22(extrctid) {
  URL="patweb87.pbl?reportno=22&template=001&prrm0001=" + extrctid;
  parent.location.href=URL;
}
//========================================================================
// Report 23
//========================================================================
function DeletePatient23(CheckBox,ExtractID,Debtor) {
  UpdateValue=0
  if (CheckBox.checked) {
     UpdateValue=1 }
  var serverURL   = "../cgi-bin/patweb87.pbl?reportno=26" +
                    "&prirl001=" + ExtractID.replace(/ /g,"+") +
                    "&prirl002=" + Debtor.replace(/ /g,"+") +
                    "&prirl003=" + UpdateValue 
  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {
    ReturnCode.select();  }
}
//
function PrintExtract22(extrctid) {
  URL="patweb87.pbl?reportno=22&template=002&prrm0001=" + extrctid;
  Left=(document.body.clientWidth-500)/2
  DFrameLink(URL,20,Left,550,300);
}
//========================================================================
//   Report 24
//========================================================================
function submitSel24(thisForm) {
  if (validateMandatory(thisForm)) {
    //
    // UR or Debtor Number Validation
    //
    if (!isWhitespace(thisForm.prgl0003.value)) {
      justifyRight(thisForm.prgl0003);
      if (!validateURDebtor(thisForm.prgl0016,thisForm.prgl0003,
                            thisForm.dummy)) { 
        return; 
      }
    }
    if (!isWhitespace(thisForm.prgl0004.value)) {
      justifyRight(thisForm.prgl0004);
      if (!validateURDebtor(thisForm.prgl0016,thisForm.prgl0004,
                            thisForm.dummy)) { 
        return; 
      }
    }
    if ((!isWhitespace(thisForm.prgl0003.value))&&
       (isWhitespace(thisForm.prgl0004.value)))  {
      alert("Both Debtor Number Range Fields are required.")
      thisForm.prgl0004.focus();
      return;
    }
    if ((isWhitespace(thisForm.prgl0003.value))&&
       (!isWhitespace(thisForm.prgl0004.value)))  {
      alert("Both Debtor Number Range Fields are required.")
      thisForm.prgl0003.focus();
      return;
    }
    if (thisForm.prgl0003.value>thisForm.prgl0004.value) {
      alert("Invalid Debtor Number Range.")
      thisForm.prgl0003.focus();
      return;
    }
    //
    // Surname Validation
    //
    if ((!isWhitespace(thisForm.prgl0005.value))&&
       (isWhitespace(thisForm.prgl0006.value)))  {
      alert("Both Surname Fields are required.")
      thisForm.prgl0006.focus();
      return;
    }
    if ((isWhitespace(thisForm.prgl0005.value))&&
       (!isWhitespace(thisForm.prgl0006.value)))  {
      alert("Both Surname Fields are required.")
      thisForm.prgl0005.focus();
      return;
    }
    if (thisForm.prgl0005.value>thisForm.prgl0006.value) {
      alert("Invalid Surname Range.")
      thisForm.prgl0005.focus();
      return;
    }
    //
    // Visit Date Validation
    //
    if ((!isWhitespace(thisForm.prgl0007.value))&&
       (isWhitespace(thisForm.prgl0008.value)))  {
      alert("Both Visit Date Fields are required.")
      thisForm.prgl0008.focus();
      return;
    }
    if ((isWhitespace(thisForm.prgl0007.value))&&
       (!isWhitespace(thisForm.prgl0008.value)))  {
      alert("Both Visit Date Fields are required.")
      thisForm.prgl0007.focus();
      return;
    }
    if (!CheckDateRange(thisForm.prgl0007,thisForm.prgl0008)) {
      thisForm.prgl0007.focus();
      return;
    }
    //
    // Practices Validation
    //
    if ((!isWhitespace(thisForm.prgl0009.value))&&
       (isWhitespace(thisForm.prgl0010.value)))  {
      alert("Both Practices Fields are required.")
      thisForm.prgl0010.focus();
      return;
    }
    if ((isWhitespace(thisForm.prgl0009.value))&&
       (!isWhitespace(thisForm.prgl0010.value)))  {
      alert("Both Practice Fields are required.")
      thisForm.prgl0009.focus();
      return;
    }
    if (thisForm.prgl0009.value.substr(0,6)>
        thisForm.prgl0010.value.substr(0,6)) {
      alert("Invalid Practice Range.")
      thisForm.prgl0009.focus();
      return;
    }
    //
    // Service Doctor Validation
    //
    if ((!isWhitespace(thisForm.prgl0011.value))&&
       (isWhitespace(thisForm.prgl0012.value)))  {
      alert("Both Service Doctor Fields are required.")
      thisForm.prgl0012.focus();
      return;
    }
    if ((isWhitespace(thisForm.prgl0011.value))&&
       (!isWhitespace(thisForm.prgl0012.value)))  {
      alert("Both Service Doctor Fields are required.")
      thisForm.prgl0011.focus();
      return;
    }
    if (thisForm.prgl0011.value.substr(0,6)>
        thisForm.prgl0012.value.substr(0,6)) {
      alert("End Doctor less than Start Doctor.")
      thisForm.prgl0011.focus();
      return;
    }
    //
    // Claim Code Validation
    //
    if ((!isWhitespace(thisForm.prgl0013.value))&&
       (isWhitespace(thisForm.prgl0014.value)))  {
      alert("Both Claim Code Fields are required.")
      thisForm.prgl0014.focus();
      return;
    }
    if ((isWhitespace(thisForm.prgl0013.value))&&
       (!isWhitespace(thisForm.prgl0014.value)))  {
      alert("Both Claim Code Fields are required.")
      thisForm.prgl0013.focus();
      return;
    }
    if (thisForm.prgl0013.value.substr(0,3)>
        thisForm.prgl0014.value.substr(0,3)) {
      alert("Invalid Claim Code Range.")
      thisForm.prgl0013.focus();
      return;
    }
    thisForm.submit();
  } 
}
function URDebtorSearch(patflag,urnumber,patname,visitno) {
//  if (patflag[1].checked==true) {
  if (patflag.value==0) {
//      DebtorSearchFrame(urnumber);
  }
  else {
      PatientSearchFrame(patname,urnumber,visitno);
  }
}
function validateURDebtor(patflag,urnumber,patname) {
//  if (patflag[1].checked==true) {
  if (patflag.value==0) {
//    if (validateCode(59,urnumber,patname)) { return true; }
    alert("Private Practice Debtor Number no longer used.");
    return;
  }
  else {
    if (validateCode(8,urnumber,patname)) { return true; }
  }
  return false;
}
function SubmitAdd24() {
  document.AddForm.updttype.value="A";
  SubmitForm();
}
//
function SubmitUpdate() {
  setFormactn('U');
}
//
//========================================================================
//   Report 25
//========================================================================
function EditList25(extrctid) {
  URL="patweb87.pbl?reportno=25&template=001&prgl0001=" + extrctid;
  parent.location.href=URL;
}
//========================================================================
// Report 26
//========================================================================
function DeletePatient26(CheckBox,ExtractID,Debtor,ScanFlg,UniID) {
  UpdateValue=0
  if (CheckBox.checked) {
     UpdateValue=1 }
  var serverURL   = "../cgi-bin/patweb87.pbl?reportno=26" +
                    "&prigl001=" + ExtractID.replace(/ /g,"+") +
                    "&prigl002=" + Debtor.replace(/ /g,"+") +
                    "&prigl003=" + UpdateValue +
                    "&prigl004=" + ScanFlg.replace(/ /g,"+") +
                    "&prigl005=" + UniID.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {
    ReturnCode.select();  }
}
//
function PrintExtract25(extrctid) {
  URL="patweb87.pbl?reportno=25&template=002&prgl0001=" + extrctid;
  Left=(document.body.clientWidth-500)/2
  DFrameLink(URL,20,Left,550,300);
}
//========================================================================
//   Report 27
//========================================================================
function SubmitAdd27() {
  document.AddForm.updttype.value="A";
  SubmitForm();
}
//
function SubmitUpdate() {
  setFormactn('U');
}
function submitSel27(thisForm) {
  if (validateMandatory(thisForm)) {
    //
    // UR or Debtor Number Validation
    //
    if (!isWhitespace(thisForm.prfl0003.value)) {
      justifyRight(thisForm.prfl0003);
      if (!validateURDebtor(thisForm.prfl0027,thisForm.prfl0003,
                            thisForm.dummy)) { 
        return; 
      }
    }
    if (!isWhitespace(thisForm.prfl0004.value)) {
      justifyRight(thisForm.prfl0004);
      if (!validateURDebtor(thisForm.prfl0027,thisForm.prfl0004,
                            thisForm.dummy)) { 
        return; 
      }
    }
    if ((!isWhitespace(thisForm.prfl0003.value))&&
       (isWhitespace(thisForm.prfl0004.value)))  {
      alert("Both Debtor Number Range Fields are required.")
      thisForm.prfl0004.focus();
      return;
    }
    if ((isWhitespace(thisForm.prfl0003.value))&&
       (!isWhitespace(thisForm.prfl0004.value)))  {
      alert("Both Debtor Number Range Fields are required.")
      thisForm.prfl0003.focus();
      return;
    }
    if (thisForm.prfl0003.value>thisForm.prfl0004.value) {
      alert("Invalid Debtor Number Range.")
      thisForm.prfl0003.focus();
      return;
    }
    //
    // Surname Validation
    //
    if ((!isWhitespace(thisForm.prfl0005.value))&&
       (isWhitespace(thisForm.prfl0006.value)))  {
      alert("Both Surname Fields are required.")
      thisForm.prfl0006.focus();
      return;
    }
    if ((isWhitespace(thisForm.prfl0005.value))&&
       (!isWhitespace(thisForm.prfl0006.value)))  {
      alert("Both Surname Fields are required.")
      thisForm.prfl0005.focus();
      return;
    }
    if (thisForm.prfl0005.value>thisForm.prfl0006.value) {
      alert("Invalid Surname Range.")
      thisForm.prfl0005.focus();
      return;
    }
    //
    // Visit Date Validation
    //
    if ((!isWhitespace(thisForm.prfl0007.value))&&
       (isWhitespace(thisForm.prfl0008.value)))  {
      alert("Both Visit Date Fields are required.")
      thisForm.prfl0008.focus();
      return;
    }
    if ((isWhitespace(thisForm.prfl0007.value))&&
       (!isWhitespace(thisForm.prfl0008.value)))  {
      alert("Both Visit Date Fields are required.")
      thisForm.prfl0007.focus();
      return;
    }
    if (!CheckDateRange(thisForm.prfl0007,thisForm.prfl0008)) {
      thisForm.prfl0007.focus();
      return;
    }
    //
    // Practices Validation
    //
    if ((!isWhitespace(thisForm.prfl0009.value))&&
       (isWhitespace(thisForm.prfl0010.value)))  {
      alert("Both Practices Fields are required.")
      thisForm.prfl0010.focus();
      return;
    }
    if ((isWhitespace(thisForm.prfl0009.value))&&
       (!isWhitespace(thisForm.prfl0010.value)))  {
      alert("Both Practice Fields are required.")
      thisForm.prfl0009.focus();
      return;
    }
    if (thisForm.prfl0009.value.substr(0,6)>
        thisForm.prfl0010.value.substr(0,6))  {
      alert("Invalid Practice Range.")
      thisForm.prfl0009.focus();
      return;
    }
    //
    // Service Doctor Validation
    //
    if ((!isWhitespace(thisForm.prfl0011.value))&&
       (isWhitespace(thisForm.prfl0012.value)))  {
      alert("Both Service Doctor Fields are required.")
      thisForm.prfl0012.focus();
      return;
    }
    if ((isWhitespace(thisForm.prfl0011.value))&&
       (!isWhitespace(thisForm.prfl0012.value)))  {
      alert("Both Service Doctor Fields are required.")
      thisForm.prfl0011.focus();
      return;
    }
    if (thisForm.prfl0011.value.substr(0,6)>
        thisForm.prfl0012.value.substr(0,6)) {
      alert("End Doctor less than Start Doctor.")
      thisForm.prfl0011.focus();
      return;
    }
    //
    // Claim Code Validation
    //
    if ((!isWhitespace(thisForm.prfl0013.value))&&
       (isWhitespace(thisForm.prfl0014.value)))  {
      alert("Both Claim Code Fields are required.")
      thisForm.prfl0014.focus();
      return;
    }
    if ((isWhitespace(thisForm.prfl0013.value))&&
       (!isWhitespace(thisForm.prfl0014.value)))  {
      alert("Both Claim Code Fields are required.")
      thisForm.prfl0013.focus();
      return;
    }
    if (thisForm.prfl0013.value.substr(0,3)>
        thisForm.prfl0014.value.substr(0,3))  {
      alert("Invalid Claim Code Range.")
      thisForm.prfl0013.focus();
      return;
    }
    //
    // Last Letter Sent Validation
    //
    if ((!isWhitespace(thisForm.prfl0015.value))&&
       (isWhitespace(thisForm.prfl0016.value)))  {
      alert("Both Last Letter Sent Fields are required.")
      thisForm.prfl0016.focus();
      return;
    }
    if ((isWhitespace(thisForm.prfl0015.value))&&
       (!isWhitespace(thisForm.prfl0016.value)))  {
      alert("Both Last Letter Sent Fields are required.")
      thisForm.prfl0015.focus();
      return;
    }
    if (thisForm.prfl0015.value.substr(0,3)>
        thisForm.prfl0016.value.substr(0,3))  {
      alert("Invalid Last Letter Sent Range.")
      thisForm.prfl0015.focus();
      return;
    }
    //
    // Date Last Letter Sent Validation
    //
    if ((!isWhitespace(thisForm.prfl0017.value))&&
       (isWhitespace(thisForm.prfl0018.value)))  {
      alert("Both Dates Last Letter Sent Fields are required.")
      thisForm.prfl0018.focus();
      return;
    }
    if ((isWhitespace(thisForm.prfl0017.value))&&
       (!isWhitespace(thisForm.prfl0018.value)))  {
      alert("Both Dates Last Letter Sent Fields are required.")
      thisForm.prfl0017.focus();
      return;
    }
    if (!CheckDateRange(thisForm.prfl0017,thisForm.prfl0018)) {
      thisForm.prfl0017.focus();
      return;
    }
    //
    // Future Action Code Validation
    //
    if ((!isWhitespace(thisForm.prfl0019.value))&&
       (isWhitespace(thisForm.prfl0020.value)))  {
      alert("Both Future Action Code Fields are required.")
      thisForm.prfl0020.focus();
      return;
    }
    if ((isWhitespace(thisForm.prfl0019.value))&&
       (!isWhitespace(thisForm.prfl0020.value)))  {
      alert("Both Future Action Code Fields are required.")
      thisForm.prfl0019.focus();
      return;
    }
    if (thisForm.prfl0019.value.substr(0,3)>
        thisForm.prfl0020.value.substr(0,3))  {
      alert("Invalid Future Action Code Range.")
      thisForm.prfl0019.focus();
      return;
    }
    //
    // Future Action Date Validation
    //
    if ((!isWhitespace(thisForm.prfl0021.value))&&
       (isWhitespace(thisForm.prfl0022.value)))  {
      alert("Both Future Action Date Fields are required.")
      thisForm.prfl0022.focus();
      return;
    }
    if ((isWhitespace(thisForm.prfl0021.value))&&
       (!isWhitespace(thisForm.prfl0022.value)))  {
      alert("Both Future Action Date Fields are required.")
      thisForm.prfl0021.focus();
      return;
    }
    if (!CheckDateRange(thisForm.prfl0021,thisForm.prfl0022)) {
      thisForm.prfl0021.focus();
      return;
    }
    //
    // Invoice Date Validation
    //
    if ((!isWhitespace(thisForm.prfl0024.value))&&
       (isWhitespace(thisForm.prfl0025.value)))  {
      alert("Both Invoice Date Range Fields are required.")
      thisForm.prfl0025.focus();
      return;
    }
    if ((isWhitespace(thisForm.prfl0024.value))&&
       (!isWhitespace(thisForm.prfl0025.value)))  {
      alert("Both Invoice Date Range Fields are required.")
      thisForm.prfl0024.focus();
      return;
    }
    if (!CheckDateRange(thisForm.prfl0024,thisForm.prfl0025)) {
      thisForm.prfl0024.focus();
      return;
    }
    thisForm.submit();
  } 
}
//
function EditList28(extrctid) {
  URL="patweb87.pbl?reportno=28&template=001&prfl0001=" + extrctid;
  parent.location.href=URL;
}
//========================================================================
// Report 29
//========================================================================
function DeletePatient29(CheckBox,ExtractID,Debtor,ScanFlg,UniID) {
  UpdateValue=0
  if (CheckBox.checked) {
     UpdateValue=1 }
  var serverURL   = "../cgi-bin/patweb87.pbl?reportno=29" +
                    "&prifl001=" + ExtractID.replace(/ /g,"+") +
                    "&prifl002=" + Debtor.replace(/ /g,"+") +
                    "&prifl003=" + UpdateValue +
                    "&prifl004=" + ScanFlg.replace(/ /g,"+") +
                    "&prifl005=" + UniID.replace(/ /g,"+") 
  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {
    ReturnCode.select();  }
}
//
function PrintExtract28(extrctid) {
  URL="patweb87.pbl?reportno=28&template=002&prfl0001=" + extrctid;
  Left=(document.body.clientWidth-500)/2
  DFrameLink(URL,20,Left,550,300);
}

//========================================================================
// Report 30
//========================================================================
function SD30(linkurl) {
  Left=(document.body.clientWidth-400)/2
  DFrameLink(linkurl,0,Left,400,260)
}
function AddDetail30() {
  Left=(document.body.clientWidth-400)/2
  linkurl="patweb87.pbl?reportno=30&template=002" +
          "&fltclnic=" + SelectCode.fltclnic.value.replace(/ /g,"+")
  DFrameLink(linkurl,0,Left,400,260)
}

function SelectCodeSubmit30()
{
  SelectCode.submit();
}


//========================================================================
// Report 31
//========================================================================
function ShowDetail31(linkurl) {
  Left=(document.body.clientWidth-400)/2
  DFrameLink(linkurl,0,Left,400,260)
} 
function AddDetail31(linkurl) {
  Left=(document.body.clientWidth-400)/2
  DFrameLink(linkurl,0,Left,400,260)
}

function DisplayDetails31(usingDischStat) {
 if(usingDischStat==0) {
      nDStat.style.display="";
      nDStat.innerHTML=dispNDStat.innerHTML;

      wDStat.style.display="none";
      wDStat.innerHTML="";
 } else {
      nDStat.style.display="none";
      nDStat.innerHTML="";

      wDStat.style.display="";
      wDStat.innerHTML=dispWDStat.innerHTML;
 }
}

//========================================================================
// Report 33                           
//========================================================================
function ShowDetail33(linkurl) {
  Left=(document.body.clientWidth-720)/2
  DFrameLink(linkurl,0,Left,720,220)
}
//========================================================================
// Report 34 Setup Financial Letters
//========================================================================
function AddFormactn34() {
  if(document.AddForm.d_ptflt007.checked==true) {
    document.AddForm.ptflt007.value="0";
  } else {
    document.AddForm.ptflt007.value="1";
  }
  if (validateMandatory(AddForm)) {
    if (validateFld34(AddForm)) {
      AddForm.submit();
    }
  }
}
function updateFormactn34() {
  if(document.UpdateForm.d_ptflt007.checked==true) {
    document.UpdateForm.ptflt007.value="0";
  } else {
    document.UpdateForm.ptflt007.value="1";
  }
  if (validateMandatory(UpdateForm)) {
    if (validateFld34(UpdateForm)) {
      setFormactn('U');
    }
  }
}
function validateFld34(thisForm) {
  pagelength = parseInt(thisForm.ptflt005.value,10);
  if (pagelength<=0) {
    alert("Page Length must be > 0");
    thisForm.ptflt005.focus();
    return false;
  }
  topmargin = parseInt(thisForm.ptflt004.value,10);
  if (topmargin<=0) {
    alert("Top Margin must be > 0");
    thisForm.ptflt004.focus();
    return false;
  }
  bottommargin = parseInt(thisForm.ptflt003.value,10);
  if (bottommargin<=0) {
    alert("Bottom Margin must be > 0");
    thisForm.ptflt003.focus();
    return false;
  }
  leftmargin = parseInt(thisForm.ptflt006.value,10);
  if (leftmargin<=0) {
    alert("Left Margin must be > 0");
    thisForm.ptflt006.focus();
    return false;
  }

  if (pagelength < bottommargin) {
     alert("Bottom Margin must be less than Page Length");
     thisForm.ptflt003.focus();
     return false;
  }
 
  if (pagelength < topmargin) {
     alert("Top Margin must be less than Page Length");
     thisForm.ptflt004.focus();
     return false;
  }
  if (pagelength < (topmargin+bottommargin)) {
     if  (topmargin > bottommargin) {
         alert("Top Margin is too big");
         thisForm.ptflt004.focus();
     }
     else {
         alert("Bottom Margin is too big");
         thisForm.ptflt003.focus();
     }
     return false;
  }
  if (pagelength == (topmargin+bottommargin)) {
     alert("Invalid Top and Bottom Margin combination");
     if  (topmargin > bottommargin) {
         thisForm.ptflt004.focus();
     }
     else {
         thisForm.ptflt003.focus();
     }
     return false;
  }
  return true;
}

//========================================================================
// Report 35 Setup Private Practice General letters
//========================================================================
function AddFormactn35() {
  if (validateMandatory(AddForm)) {
    if (validateFld35(AddForm)) {
       AddForm.submit();
    }
  }
}
function updateFormactn35() {
  if (validateMandatory(UpdateForm)) {
    if (validateFld35(UpdateForm)) {
       setFormactn('U');
    }
  }
}
function validateFld35(thisForm) {
  pagelength = parseInt(thisForm.prlet005.value,10);
  if (pagelength<=0) {
    alert("Page Length must be > 0");
    thisForm.prlet005.focus();
    return false;
  }
  topmargin = parseInt(thisForm.prlet004.value,10);
  if (topmargin<=0) {
    alert("Top Margin must be > 0");
    thisForm.prlet004.focus();
    return false;
  }
  bottommargin = parseInt(thisForm.prlet003.value,10);
  if (bottommargin<=0) {
    alert("Bottom Margin must be > 0");
    thisForm.prlet003.focus();
    return false;
  }
  leftmargin = parseInt(thisForm.prlet006.value,10);
  if (leftmargin<=0) {
    alert("Left Margin must be > 0");
    thisForm.prlet006.focus();
    return false;
  }

  if (pagelength < bottommargin) {
     alert("Bottom Margin must be less than Page Length");
     thisForm.prlet003.focus();
     return false;
  }
 
  if (pagelength < topmargin) {
     alert("Top Margin must be less than Page Length");
     thisForm.prlet004.focus();
     return false;
  }
  if (pagelength < (topmargin+bottommargin)) {
     if  (topmargin > bottommargin) {
         alert("Top Margin is too big");
         thisForm.prlet004.focus();
     }
     else {
         alert("Bottom Margin is too big");
         thisForm.prlet003.focus();
     }
     return false;
  }
  if (pagelength == (topmargin+bottommargin)) {
     alert("Invalid Top and Bottom Margin combination");
     if  (topmargin > bottommargin) {
         thisForm.prlet004.focus();
     }
     else {
         thisForm.prlet003.focus();
     }
     return false;
  }
  return true;
}

//========================================================================
// Report 36 Setup Private Practice Financial letters
//========================================================================
function AddFormactn36() {
  if (validateMandatory(AddForm)) {
    if (validateFld36(AddForm)) {
      AddForm.submit();
    }
  }
}
function updateFormactn36() {
  if (validateMandatory(UpdateForm)) {
    if (validateFld36(UpdateForm)) {
      setFormactn('U');
    }
  }
}
function validateFld36(thisForm) {

  pagelength = parseInt(thisForm.prflt005.value,10);
  if (pagelength<=0) {
    alert("Page Length must be > 0");
    thisForm.prflt005.focus();
    return false;
  }
  topmargin = parseInt(thisForm.prflt004.value,10);
  if (topmargin<=0) {
    alert("Top Margin must be > 0");
    thisForm.prflt004.focus();
    return false;
  }
  bottommargin = parseInt(thisForm.prflt003.value,10);
  if (bottommargin<=0) {
    alert("Bottom Margin must be > 0");
    thisForm.prflt003.focus();
    return false;
  }
  leftmargin = parseInt(thisForm.prflt006.value,10);
  if (leftmargin<=0) {
    alert("Left Margin must be > 0");
    thisForm.prflt006.focus();
    return false;
  }

  if (pagelength < bottommargin) {
     alert("Bottom Margin must be less than Page Length");
     thisForm.prflt003.focus();
     return false;
  }
 
  if (pagelength < topmargin) {
     alert("Top Margin must be less than Page Length");
     thisForm.prflt004.focus();
     return false;
  }
  if (pagelength < (topmargin+bottommargin)) {
     if  (topmargin > bottommargin) {
         alert("Top Margin is too big");
         thisForm.prflt004.focus();
     }
     else {
         alert("Bottom Margin is too big");
         thisForm.prflt003.focus();
     }
     return false;
  }
  if (pagelength == (topmargin+bottommargin)) {
     alert("Invalid Top and Bottom Margin combination");
     if  (topmargin > bottommargin) {
         thisForm.prflt004.focus();
     }
     else {
         thisForm.prflt003.focus();
     }
     return false;
  }
  return true;
}

//========================================================================
// Report 37 - Setup Booking Letters
//========================================================================
function AddFormactn37() {
  if(document.AddForm.d_bklet007.checked==true) {
    document.AddForm.bklet007.value="0";
  } else {
    document.AddForm.bklet007.value="1";
  }
  if (validateMandatory(AddForm)) {
    if (validateFld37(AddForm)) {
      AddForm.submit();
    }
  }
}
function updateFormactn37() {
  if(document.UpdateForm.d_bklet007.checked==true) {
    document.UpdateForm.bklet007.value="0";
  } else {
    document.UpdateForm.bklet007.value="1";
  }
  if (validateMandatory(UpdateForm)) {
    if (validateFld37(UpdateForm)) {
      setFormactn('U');
    }
  }
}
function validateFld37(thisForm) {
  pagelength = parseInt(thisForm.bklet005.value,10);
  if (pagelength<=0) {
    alert("Page Length must be > 0");
    thisForm.bklet005.focus();
    return false;
  }
  topmargin = parseInt(thisForm.bklet004.value,10);
  if (topmargin<=0) {
    alert("Top Margin must be > 0");
    thisForm.bklet004.focus();
    return false;
  }
  bottommargin = parseInt(thisForm.bklet003.value,10);
  if (bottommargin<=0) {
    alert("Bottom Margin must be > 0");
    thisForm.bklet003.focus();
    return false;
  }
  leftmargin = parseInt(thisForm.bklet006.value,10);
  if (leftmargin<=0) {
    alert("Left Margin must be > 0");
    thisForm.bklet006.focus();
    return false;
  }

  if (pagelength < bottommargin) {
     alert("Bottom Margin must be less than Page Length");
     thisForm.bklet003.focus();
     return false;
  }

  if (pagelength < topmargin) {
     alert("Top Margin must be less than Page Length");
     thisForm.bklet004.focus();
     return false;
  }
  if (pagelength < (topmargin+bottommargin)) {
     if  (topmargin > bottommargin) {
         alert("Top Margin is too big");
         thisForm.bklet004.focus();
     }
     else {
         alert("Bottom Margin is too big");
         thisForm.bklet003.focus();
     }
     return false;
  }
  if (pagelength == (topmargin+bottommargin)) {
     alert("Invalid Top and Bottom Margin combination");
     if  (topmargin > bottommargin) {
         thisForm.bklet004.focus();
     }
     else {
         thisForm.bklet003.focus();
     }
     return false;
  }
  return true;
}

//========================================================================
//   Report 38
//========================================================================
function SubmitAdd38() {
  if (validateFld38(AddForm)) {
    document.AddForm.updttype.value="A";
    SubmitForm();
  }
}
//
function SubmitUpdate38() {
  if (validateFld38(UpdateForm)) {
    setFormactn('U');
  }
}
//
function EditList38(extrctid) {
  URL="patweb87.pbl?reportno=38&template=004&bokls001=" + extrctid;
  parent.location.href=URL;
}
//
function validateFld38(thisForm) {
//
// validate booking date range
//
 if (validateMandatory(thisForm)) {
  if ((!isWhitespace(thisForm.bokls004.value)) &&
      (isWhitespace(thisForm.bokls005.value))) { 
    alert("Both dates must be entered.");
    thisForm.bokls005.focus();
    return false;
  }
  if ((isWhitespace(thisForm.bokls004.value)) &&
      (!isWhitespace(thisForm.bokls005.value))) {
    alert("Both dates must be entered.");
    thisForm.bokls004.focus();
    return false;
  }
  if ((!isWhitespace(thisForm.bokls004.value)) &&
      (!isWhitespace(thisForm.bokls005.value))) {
    if (!CheckDateRange(thisForm.bokls004,thisForm.bokls005)) {
      return false;
    }
  }
  if ((isWhitespace(thisForm.bokls004.value)) &&
      (isWhitespace(thisForm.bokls005.value)) &&
      (isWhitespace(thisForm.bokls003.value))) {
    alert("Must enter at least one selection criteria.");
    thisForm.bokls003.focus();
    return false;
  }
  return true;
 }
 else {
   return false;
 }
}
function PrintExtract38(extrctid) {
  URL="patweb87.pbl?reportno=38&template=005&bokls001=" + extrctid;
  Left=(document.body.clientWidth-500)/2
  DFrameLink(URL,20,Left,500,300);
}
//========================================================================
// Report 39
//========================================================================
function DeletePatient39(CheckBox,ExtractID,Admission) {
  UpdateValue=0
  if (CheckBox.checked) {
     UpdateValue=1 }
  var serverURL   = "../cgi-bin/patweb87.pbl?reportno=39" +
                    "&bokls001=" + ExtractID.replace(/ /g,"+") +
                    "&bokls006=" + Admission.replace(/ /g,"+") +
                    "&bokls007=" + UpdateValue
  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {
    ReturnCode.select();  }
}
//
//========================================================================
function DisplayHosp() {
  if (document.AddForm.ibcnmhos.value!="1") {
    HospCode.innerHTML=transferblank.innerHTML;
    HospHeading.innerHTML="";
    document.AddForm.pmsfl029.value="";
  } else {
    HospHeading.innerHTML=hosphd.innerHTML;
    HospCode.innerHTML=hospital.innerHTML;
  }
}
function DisplayHospUpdate() {
  if (document.UpdateForm.ibcnmhos.value!="1") {
    HospCode.innerHTML=transferblank.innerHTML;
    HospHeading.innerHTML="";
    document.UpdateForm.pmsfl029.value="";
  } else {
    HospHeading.innerHTML=hosphd.innerHTML;
    HospCode.innerHTML=hospital.innerHTML;
  }
}
//
//========================================================================
// Report 40 Doctors letter selections
//========================================================================
function CheckHCP(hcp,desc,inact) {
  if(inact.value=="2") {
    ValidateHCP(18,17,hcp,desc);
  } else {
    ValidateHCP(18,0,hcp,desc);
  }
}
function CheckHCPSearch(hcp,desc,inact) {
  if(inact.value=="2") {
    HCPSearchFrame(hcp,desc,5);
  } else {
    HCPSearchFrame(hcp,desc,0);
  }
}
function DisplayHosp40() {
  if (document.forms[0].ibcnmhos.value!="1") {
    HospCode.innerHTML=transferblank.innerHTML;
    HospHeading.innerHTML="";
    document.AddForm.pmdlt009.value="";
  } else {
    HospHeading.innerHTML=hosphd.innerHTML;
    HospCode.innerHTML=hospital.innerHTML;
  }
}
function SubmitAdd40() {
  if(!CheckDateRange(AddForm.pmdlt011,AddForm.pmdlt012)){
    return;
  }
  if(!CheckDateRange(AddForm.pmdlt013,AddForm.pmdlt014)){
    return;
  }
  if(!CheckDateRange(AddForm.pmdlt020,AddForm.pmdlt021)){
    return;
  }
  if(!CheckDateRange(AddForm.pmdlt022,AddForm.pmdlt023)){
    return;
  }
  if(!CheckRange(AddForm.pmdlt003,AddForm.pmdlt004)){
    return;
  }
  if(!CheckRange(AddForm.pmdlt005,AddForm.pmdlt006)){
    return;
  }
  if(!CheckRange(AddForm.pmdlt007,AddForm.pmdlt008)){
    return;
  }
  if(!CheckRange(AddForm.pmdlt017,AddForm.pmdlt018)){
    return;
  }
  SubmitForm();
}
function SubmitUpdate40() {
  if(!CheckDateRange(UpdateForm.pmdlt011,UpdateForm.pmdlt012)){
    return;
  }
  if(!CheckDateRange(UpdateForm.pmdlt013,UpdateForm.pmdlt014)){
    return;
  }
  if(!CheckDateRange(UpdateForm.pmdlt020,UpdateForm.pmdlt021)){
    return;
  }
  if(!CheckDateRange(UpdateForm.pmdlt022,UpdateForm.pmdlt023)){
    return;
  }
  if(!CheckRange(UpdateForm.pmdlt003,UpdateForm.pmdlt004)){
    return;
  }
  if(!CheckRange(UpdateForm.pmdlt005,UpdateForm.pmdlt006)){
    return;
  }
  if(!CheckRange(UpdateForm.pmdlt007,UpdateForm.pmdlt008)){
    return;
  }
  if(!CheckRange(UpdateForm.pmdlt017,UpdateForm.pmdlt018)){
    return;
  }
  setFormactn('U');
}
function EditList40(extrctid) {
  URL="patweb87.pbl?reportno=41&template=001&pmdlt001=" + extrctid;
  parent.location.href=URL;
}
function DeleteHCP41(CheckBox,ExtractID,HCP) {
  UpdateValue=0
  if (CheckBox.checked) {
     UpdateValue=1 }
  var serverURL   = "../cgi-bin/patweb87.pbl?reportno=42" +
                    "&pmdsl001=" + ExtractID.replace(/ /g,"+") +
                    "&pmdsl002=" + HCP.replace(/ /g,"+") +
                    "&pmdsl003=" + UpdateValue
  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {
    ReturnCode.select();  }
}
//
function PrintExtract41(extrctid) {
  URL="patweb87.pbl?reportno=41&template=002&pmdlt001=" + extrctid;
  Left=(document.body.clientWidth-500)/2
  DFrameLink(URL,20,Left,500,300);
}
//========================================================================
// Report 43 Emergency Triage Fee selections
//========================================================================
function SelectCodeSubmit43()
{
  SelectCode.submit();
}
function ShowDetail43(linkurl) {
  Left=(document.body.clientWidth-400)/2
  DFrameLink(linkurl,0,Left,400,260)
} 
function AddDetail43(linkurl) {
  Left=(document.body.clientWidth-400)/2
  DFrameLink(linkurl,0,Left,400,260)
}
//========================================================================
//   Report 44 Maintain Programs
//========================================================================
function ShowDetail44(linkurl) {
  Left=(document.body.clientWidth-550)/2
  DFrameLink(linkurl,0,Left,550,450)
}
//========================================================================
//   Report 45 Maintain OP Programs
//========================================================================
function ShowDetail45(linkurl) {
  Left=(document.body.clientWidth-550)/2
  DFrameLink(linkurl,0,Left,550,450)
}
function ProgramDetail45() {
  var linkurl="patweb87.pbl?reportno=44&template=003" +
          "&pmhpg001=" + SelectCode.pmhpg001.value.replace(/ /g,"+") +
          "&pmhpg002=" + SelectCode.pmhpg002.value.replace(/ /g,"+") +
          "&pmhpg003=" + SelectCode.pmhpg003.value.replace(/ /g,"+") +
          "&pmhpg004=" + SelectCode.pmhpg004.value.replace(/ /g,"+") +
          "&pmhpg005=" + SelectCode.pmhpg005.value.replace(/ /g,"+")
  Left=(document.body.clientWidth-550)/2
  DFrameLink(linkurl,0,Left,550,450)
}
function AddOPDetail45() {
  var linkurl="patweb87.pbl?reportno=45&template=002" +
          "&pmhpg001=" + SelectCode.pmhpg001.value.replace(/ /g,"+") +
          "&pmhpg002=" + SelectCode.pmhpg002.value.replace(/ /g,"+") +
          "&pmhpg003=" + SelectCode.pmhpg003.value.replace(/ /g,"+") +
          "&pmhpg004=" + SelectCode.pmhpg004.value.replace(/ /g,"+") +
          "&pmhpg005=" + SelectCode.pmhpg005.value.replace(/ /g,"+")
  Left=(document.body.clientWidth-550)/2
  DFrameLink(linkurl,0,Left,550,450)
}
//========================================================================
//   Report 48
//========================================================================
function ShowDetail48(linkurl) {
  Left=(document.body.clientWidth-810)/2
  DFrameLink(linkurl,0,Left,810,300)
}
function EditLookup48() {
    SelectCode.template.value=3
    SelectCode.ptvst001.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-810)/2
    DFrameSubmit(SelectCode,0,Left,810,300)
}
//========================================================================
//   Report 49
//========================================================================
function AddDetail49(ValSetID, CodeID) {
  var sLinkURL = "patweb87.pbl?reportno=49&template=002" +
                 "&ptvsc001=" + ValSetID;

  if (CodeID != undefined) {
    sLinkURL += "&ptvsc002=" + CodeID;
  }

  var Width = 810;
  var Height = 250;

  var Left = (document.body.clientWidth-Width)/2
  var Top = (document.body.clientHeight-Height)/2;

  DFrameLink(sLinkURL,Top,Left,Width,Height);
}

function ShowDetail49(ValSetID, CodeID) {
  var sLinkURL = "patweb87.pbl?reportno=49&template=003" + 
                 "&ptvsc001=" + ValSetID + "&ptvsc002=" + CodeID

  var Width = 810;
  var Height = 250;

  var Left = (document.body.clientWidth-Width)/2
  var Top = (document.body.clientHeight-Height)/2;

  DFrameLink(sLinkURL,Top,Left,Width,Height);
}
/*
function EditLookup49() {
    SelectCode.template.value=3;
    SelectCode.ptvsc001.value=SelectCode.startkey.value;
    Left=(document.body.clientWidth-900)/2;
    DFrameSubmit(SelectCode,0,Left,900,600);
}
*/
function CodeSearchFrame(ValSetID, ReturnCode, ReturnName) {
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode;
  window.ReturnName=ReturnName;
  norecord = 10;

  for (var i=3; i < CodeSearchFrame.arguments.length; i++) {
    norecord = CodeSearchFrame.arguments[i];
  }

  PopUpFrameDoc.location.href = "../cgi-bin/patweb87.pbl?reportno=49" + 
                                "&template=101&ptvsc001=" + ValSetID +
                                "&norecord=" + norecord;
  SearchFrameShow();
}
//========================================================================
//   Report 50
//========================================================================
function ShowDetail50(TableName, TableIndex, ValSetID) {
  var sLinkURL = "patweb87.pbl?reportno=50&template=003" + 
                 "&ptvmt001=" + TableName + "&ptvmt002=" + TableIndex +
                 "&ptvmt003=" + ValSetID;

  var Width = 710;
  var Height = 250;

  var Left = (document.body.clientWidth-Width)/2
  var Top = (document.body.clientHeight-Height)/2;

  DFrameLink(sLinkURL,Top,Left,Width,Height);
}
function AddMapping(TableName, TableIndex) {
  var sLinkURL = "patweb87.pbl?reportno=50&template=002" +
                 "&maptbnam=" + TableName +
                 "&maptbind=" + TableIndex;

  var Width = 720;
  var Height = 300;
  var Left = (document.body.clientWidth-Width)/2;
  var Top = (document.body.clientHeight-Height)/2;

  DFrameLink(sLinkURL,Top,Left,Width,Height);
}

//========================================================================
//   Report 51
//========================================================================

function DisplayHosp51() {
  if (document.AddForm.ibcnmhos.value!="1") {
    document.getElementById("HospCode").innerHTML=
             document.getElementById("blankhosp").innerHTML;
    document.getElementById("HospHeading").innerHTML="";
  } else {
    document.getElementById("HospHeading").innerHTML=
             document.getElementById("hosphd").innerHTML;
    document.getElementById("HospCode").innerHTML=
             document.getElementById("hospital").innerHTML;
  }
}



