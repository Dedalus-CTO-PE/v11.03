//jsVersion  : V11.03.02
//========================================================================
// Program   : emrweb02.js
//
// Written   : 28.12.2000 Pat Dirito
//
// Function  : Standard Functions Used in emrweb0201102.html
//
//========================================================================
//  Report 11
//========================================================================
function GPSearch(gpName,gpCode,gpPractice,gpPracName,gpCount) {
  window.gpName=gpName;
  window.gpCode=gpCode;
  window.gpPractice=gpPractice;
  window.gpPracName=gpPracName;
  window.gpCount=gpCount;
  url="patweb99.pbl?reportno=6&template=11";
  Left=(document.body.clientWidth-700)/2
  DFrameLink(url,0,Left,700,370);
}
function UpdatePage() {
  //determine if the current health fund table active or not
  if (!isWhitespace(document.UpdateForm.emvis017.value)) {
    Hfund = document.UpdateForm.emvis017;
    Hfunddesc = document.UpdateForm.funddesc;
    Htable = document.UpdateForm.emvis018;
    Htabledesc = document.UpdateForm.tabldesc;
    saveHfndDsc = document.UpdateForm.funddesc.value;
    saveHtblDsc = document.UpdateForm.tabldesc.value;

    if  (!validateHftable(20,Hfund,Htable,Hfunddesc,Htabledesc)) {
      ans=confirm("Select another active health fund table? ");
      if (ans==true) {
        document.UpdateForm.funddesc.value = saveHfndDsc;
        document.UpdateForm.tabldesc.value = saveHtblDsc;
        return;
      }
    }
  }

  if (validateMandatory(UpdateForm)) {
    if (document.UpdateForm.preaddset.value==1) {
      ans=confirm("Do you want to update the Previous Address details?");
      if (ans) {
        document.UpdateForm.prevaddr.value="1";
      }
      document.UpdateForm.preaddset.value=1;
    }
  UpdInterpreter();
//
  if (document.UpdateForm.aliasset.value==1) {
    ans=confirm("Save as an Alias ?");
    if (ans) {
      document.UpdateForm.savealia.value="1";
    }
    document.UpdateForm.aliasset.value="1";
  }
  setRedirectAdm();
  document.UpdateForm.UpdateButton.disabled=true;
  document.UpdateForm.formactn.value="C1"
  document.UpdateForm.updttype.value="REGIS"
//  UpdateWin=window.open("","HideUpdateWindow",
//  "width=10,height=10,top=1024,directories=no,location=no" +
//  ",scrollbars=no,status=no,toolbar=no,menubar=no,resizeable=no")
//  document.UpdateForm.target="HideUpdateWindow";
  document.UpdateForm.target="PopUpFrame";

// this checks to see if it is being used outside the MAPVIEW
  if (isWhitespace(top.menu.location.search)) {
    document.UpdateForm.nextpage.value=9
  }


  if (document.UpdateForm.prevhosp!=undefined) {
    if(document.UpdateForm.prevhosp.checked==true){
      document.UpdateForm.redirect.value="patweb07.pbl?reportno=15&template=001"
      SetCookie("prevhospCookie",'2');
    }
  }

// removed lines below, setRedirectAdm() already sets this
//  if (document.getElementById('ptcnnewc')!=null) {
//    UsingNewContRedirect(); 
//  }

  setTimeout('document.UpdateForm.UpdateButton.disabled=false',1000);
  document.UpdateForm.submit()
  }
}
function UpdatePageNZ() {
  if (validateMandatory(UpdateForm)) {
    if (document.UpdateForm.preaddset.value==1) {
      ans=confirm("Do you want to update the Previous Address details?");
      if (ans) {
        document.UpdateForm.prevaddr.value="1";
      }
      document.UpdateForm.preaddset.value=1;
    }
  UpdInterpreter();
//
  if (document.UpdateForm.aliasset.value==1) {
    ans=confirm("Save as an Alias ?");
    if (ans) {
      document.UpdateForm.savealia.value="1";
    }
    document.UpdateForm.aliasset.value="1";
  }
  if (document.UpdateForm.redirect.value.substr(0,12)!=="nhiweb99.pbl") {
    setRedirectAdmNZ();
  }
  document.UpdateForm.UpdateButton.disabled=true;
  document.UpdateForm.formactn.value="C1"
  document.UpdateForm.updttype.value="TRIAG"
//  UpdateWin=window.open("","HideUpdateWindow",
//  "width=10,height=10,top=1024,directories=no,location=no" +
//  ",scrollbars=no,status=no,toolbar=no,menubar=no,resizeable=no")
//  document.UpdateForm.target="HideUpdateWindow";
  document.UpdateForm.target="PopUpFrame";

// this checks to see if it is being used outside the MAPVIEW
  if (isWhitespace(top.menu.location.search)) {
    document.UpdateForm.nextpage.value=9
  }
  SetOptOutSMS();
  setTimeout('document.UpdateForm.UpdateButton.disabled=false',1000);
  document.UpdateForm.submit()
  }
}
function checkAlias01() {
  if (document.UpdateForm.aliasset.value==0) {
  document.UpdateForm.aliasset.value="1";
  }
}
function checkAdd01()  {
  if (document.UpdateForm.preaddset.value==0) {
    document.UpdateForm.preaddset.value=1;
    }
}

//
// function to validate the health fund table
//
function validateHftable(OptionNumber,FundCode,TableCode,FundName,TableName)
{
  ReturnFunction="" ;
  FundName.value="";
  TableName.value="";
  for (var i=5; i < validateHftable.arguments.length; i++) {
    if (typeof(validateHftable.arguments[i]) == 'function') {
      ReturnFunction=validateHftable.arguments[i]
    }
    else {
      validateHftable.arguments[i].value="";
    }
  }

  if (isWhitespace(FundCode.value)) return;;

  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
                    "&valdfund=" + FundCode.value.replace(/ /g,"+") +
                    "&valdtabl=" + TableCode.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    FundName.value=trim(ReturnValue[0])
    TableName.value=trim(ReturnValue[1])
    j=0

    for (var i=5; i < validateHftable.arguments.length; i++) {
      if (typeof(validateHftable.arguments[i]) != 'function') {
         j++
         validateHftable.arguments[i].value=ReturnValue[j]
      }
    }

    if (typeof(ReturnFunction) == 'function') {
      ReturnFunction()
    }
    return true;
  }

  else {
    if(FundCode.type != "hidden") { // check if hidden field
      FundCode.select();
    }
    return false;
  }
}


function setRedirect() {
  ind1=document.UpdateForm.emvis008.value.substr(3,1)
  ind2=document.UpdateForm.emvis008.value.substr(4,1)
  ind3=document.UpdateForm.emvis008.value.substr(5,1)
  ind4=document.UpdateForm.emvis008.value.substr(6,1)
  ind5=document.UpdateForm.emvis008.value.substr(7,1)

/*
ind2=0
ind3=0
ind4=0
ind5=0
*/

  if((ind1=="W")||(ind2=="W")||(ind3=="W")||(ind4=="W")||(ind5=="W")) {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=1&template=005" +
    "&systflag=1" +
    "&admissno=" + document.UpdateForm.admissno.value +
    "&urnumber=" + document.UpdateForm.urnumber.value;
  } else
  if((ind1=="V")||(ind2=="V")||(ind3=="V")||(ind4=="V")||(ind5=="V")) {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=1&template=17" +
    "&admissno=" + document.UpdateForm.admissno.value +
    "&urnumber=" + document.UpdateForm.urnumber.value;
  } else
  if((ind1=="M")||(ind2=="M")||(ind3=="M")||(ind4=="M")||(ind5=="M")) {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=1&template=18" +
    "&admissno=" + document.UpdateForm.admissno.value +
    "&urnumber=" + document.UpdateForm.urnumber.value;
  } else  
  if ((document.UpdateForm.ptcnueoc.value==1) && (ind3=="A")) {
     document.UpdateForm.redirect.value="eocweb01.pbl?reportno=1&template=006"
     + "&urnumber=" + document.UpdateForm.urnumber.value
     + "&admissno=" + document.UpdateForm.admissno.value
     + "&returncd=EMR";
  } else
  if(document.UpdateForm.ptcnnewc.value==1){
    document.UpdateForm.redirect.value="patweb07.pbl?reportno=06&template=004"+ 
    "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
    "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+");
  }
/*
  if((ind1=="C")||(ind2=="C")||(ind3=="C")||(ind4=="C")||(ind5=="C")) {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=1&template=29" +
    "&admissno=" + document.UpdateForm.admissno.value +
    "&urnumber=" + document.UpdateForm.urnumber.value;
  } else
*/
   else {   
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=1&template=14" +
    "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
    "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+");
  }
}
function UpdInterpreter() {
  TestPage="?reportno=1&template=4" +
               "&urnumber=" + PatientURN.replace(/ /g,"+") +
               "&admissno=" + PatientVIS.replace(/ /g,"+") 
  if (top.content.location.search!=TestPage) {
   return;
  }
  if(top.content.UpdateForm.pmpxi001!=undefined){
    if(document.UpdateForm.pmpxi001.checked) {
      top.content.UpdateForm.pmpxi001.value=1;
    } else {
      top.content.UpdateForm.pmpxi001.value=0;
    } 
  }
}
//========================================================================
// Update NHI Details
//========================================================================
function updateNHI01() {
    document.UpdateForm.redirect.value="nhiweb99.pbl?reportno=01&template=002" +
    "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")  +
    "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+") +
    "&emerflag=" + document.UpdateForm.emerflag.value.replace(/ /g,"+") ;
    UpdatePageNZ();
}
function AddPatNote() {
  if(document.UpdateForm.urnumber.value=="       0") {
    alert("Patient not registered, please allocate a UR number!");}
  else {
    PatientLinks.reportno.value="01"
    PatientLinks.template.value="061"
    PatientLinks.action="emrweb02.pbl"
    Left=(document.body.clientWidth-700)/2
    DFrameSubmit(PatientLinks,100,Left,700,300);
  }
}
function UsingNewContRedirect() {
  if (document.getElementById('ptcnnewc').value=='1') {
    document.getElementById('redirect').value=
    "patweb07.pbl?reportno=6&template=004";
  }
}
function checkContactCorrespondenceHEA(theForm) {

//T0888175-start
//Removed check for email option since the email address field have
//been made mandatory on HEA Add/Update PMI screens for T0879283
//if (theForm.pmpxi095.value.substring(3,4)=='E') {
//   theForm.pmpxi005.className="Mandatory";
//} else {
//   theForm.pmpxi005.className="";
//}
//T0888175-end

  if (theForm.pmpxi095.value.substring(3,4)=='H') {
     //theForm.ptmas012.className="Mandatory Phonenumnospaces";
     AddClassName(theForm.ptmas012,"Mandatory");
  } else {
     //theForm.ptmas012.className="Phonenumnospaces";
     RemoveClassName(theForm.ptmas012,"Mandatory");
  }

  if (theForm.pmpxi095.value.substring(3,4)=='M') {
     //theForm.ptmsx042.className="Mandatory MobilePhnospaces";
     AddClassName(theForm.ptmsx042,"Mandatory");
  } else {
     //theForm.ptmsx042.className="MobilePhnospaces";
     RemoveClassName(theForm.ptmsx042,"Mandatory");
  }

  if (theForm.pmpxi095.value.substring(3,4)=='W') {
     //theForm.ptmas013.className="Mandatory Phonenumnospaces";
     AddClassName(theForm.ptmas013,"Mandatory");
  } else {
     //theForm.ptmas013.className="Phonenumnospaces";
     RemoveClassName(theForm.ptmas013,"Mandatory");
  }
}
function ShowFundAlias2(theForm) {
  if(theForm.fndalias.checked==true) {
    document.getElementById('HealthFundAlias').style.display="";
    document.getElementById('HealthFundAlias1').style.display="";
    document.getElementById('HealthFundAlias2').style.display="";
    document.getElementById('HealthFundAlias3').style.display="";
    document.getElementById('HealthFundAlias4').style.display="";
    document.getElementById('HealthFundAlias5').style.display="";
    //theForm.pmpxi086.className="Mandatory";
    //theForm.pmpxi087.className="Mandatory";
    AddClassName(theForm.pmpxi086,"Mandatory");
    AddClassName(theForm.pmpxi087,"Mandatory");
  } else {
    document.getElementById('HealthFundAlias').style.display="none";
    document.getElementById('HealthFundAlias1').style.display="none";
    document.getElementById('HealthFundAlias2').style.display="none";
    document.getElementById('HealthFundAlias3').style.display="none";
    document.getElementById('HealthFundAlias4').style.display="none";
    document.getElementById('HealthFundAlias5').style.display="none";
    theForm.pmpxi086.value="";
    //theForm.pmpxi086.className="";
    RemoveClassName(theForm.pmpxi086,"Mandatory");
    theForm.pmpxi087.value="";
    //theForm.pmpxi087.className="";
    RemoveClassName(theForm.pmpxi087,"Mandatory");
    theForm.pmpxi088.value="";
  }
}
function AddURComment() {
  linkurl = "../cgi-bin/cliweb06.pbl?reportno=14&template=007" +
            "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") +
            "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+");
  Left=(document.body.clientWidth-750)/2;
  DFrameLink(linkurl,100,Left,750,300);
}
//==========================================================================
// Check Identifying Gender, Pronoun details and title
//==========================================================================
function ChkIdentifyGenderPronounTitle(f) {
  ind10 = f.ptmas014.value.substr(12,1);
  if (ind10 != 'N'){
    //document.getElementById('ptmas001').className="Mandatory";
    AddClassName('ptmas001',"Mandatory");
  } else {
    //document.getElementById('ptmas001').className="";
    RemoveClassName('ptmas001',"Mandatory");
  }

  ChkIdentifyGenderPronoun(f);
}
//==========================================================================
// Check Identifying Gender, Pronoun details and title
//==========================================================================
function ChkIdentifyGenderPronounTitle1(f) {
  ind10 = f.ptmas014.value.substr(12,1);
  if (ind10 != 'N'){
    //document.getElementById('ptmas001').className="Mandatory";
    AddClassName('ptmas001',"Mandatory");
  } else {
    //document.getElementById('ptmas001').className="";
    RemoveClassName('ptmas001',"Mandatory");
  }

  ChkIdentifyGenderPronoun1(f);
}
//==========================================================================
// Check Identifying Gender and Pronoun details
//==========================================================================
function ChkIdentifyGenderPronoun(f) {
  acode = f.ptmas014.value.substr(0,3);
  ind11 = f.ptmas014.value.substr(13,1);
  ind12 = f.ptmas014.value.substr(28,1);
  ind14 = f.ptmas014.value.substr(30,1);
  ind15 = f.ptmas014.value.substr(31,1);

  if (ind11=="G" || ind12=="P") {
    document.getElementById('GenderExtra').style.display = "";
    ChkIdentifyGender(f,acode,ind11,ind14);
    ChkIdentifyPronoun(f,acode,ind12,ind15);
  }
  else
  {
    document.getElementById('GenderExtra').style.display = "none";
    IdenGenLbl.innerHTML = idenGenDetailBlank.innerHTML;
    IdenGenDetail.innerHTML = idenGenDetailBlank.innerHTML;
    f.pmpxi125.value = "";
    f.pmpxi126.value = "";
    IdenProLbl.innerHTML = idenProDetailBlank.innerHTML;
    IdenProDetail.innerHTML = idenProDetailBlank.innerHTML;
    f.pmpxi127.value = "";
    f.pmpxi128.value = "";
  }
}
//==========================================================================
// Check Identifying Gender and Pronoun details
//==========================================================================
function ChkIdentifyGenderPronoun1(f) {
  acode = f.ptmas014.value.substr(0,3);
  ind11 = f.ptmas014.value.substr(13,1);
  ind12 = f.ptmas014.value.substr(28,1);
  ind14 = f.ptmas014.value.substr(30,1);
  ind15 = f.ptmas014.value.substr(31,1);

  ChkIdentifyGender(f,acode,ind11,ind14);
  ChkIdentifyPronoun(f,acode,ind12,ind15);
}
//==========================================================================
// Check Identifying Gender
//==========================================================================
function ChkIdentifyGender(f,Acode,Ind11,Ind14) {
  if (Ind11=="G") {
    IdenGenLbl.innerHTML = idenGenLblShow.innerHTML;
    IdenGenDetail.innerHTML = idenGenDetailShow.innerHTML;
    if (Ind14=="X") {
      RemoveClassName('pmpxi125',"Mandatory");
    }
    else {
      AddClassName('pmpxi125',"Mandatory");
    }
    DefaultIdentifyGender(f,Acode);
    ind1 = f.pmpxi125.value.substr(3,1);
    if (ind1=="O") {
      document.getElementById('IdenGenFreeTxt').innerHTML =
        document.getElementById('idenGenFreeTxtShow').innerHTML;
    }
    else {
      document.getElementById('IdenGenFreeTxt').innerHTML =
        document.getElementById('idenGenFreeTxtBlank').innerHTML;
      f.pmpxi126.value = "";
    }
  }
  else {
    IdenGenLbl.innerHTML = idenGenDetailBlank.innerHTML;
    IdenGenDetail.innerHTML = idenGenDetailBlank.innerHTML;
    f.pmpxi125.value = "";
    f.pmpxi126.value = "";
  }
}
//--------------------------------------------------------------------------
//--------------------------------------------------------------------------
function DefaultIdentifyGender(f,Acode) {
  if (f.pmpxi125.selectedIndex != 0) {
    return;
  }

  acat = "G "
  serverURL = "../cgi-bin/comweb81.pbl?reportno=61" +
              "&valdctyp=" + acat.replace(/ /g,"+") +
              "&valdcode=" + Acode.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status == 0) {
    ReturnValue = returnValue.return_value.split("|")
    if (ReturnValue.length > 1) {
      assc11 = trim(ReturnValue[78]);
      if (!isWhitespace(assc11)) {
        foundflg = 0;
        for (var i = 0; i < f.pmpxi125.length; i++) {
          code3 = trim(f.pmpxi125.options[i].value.substr(0,3));
          if (code3 == assc11) {
            f.pmpxi125.selectedIndex = i;
            foundflg = 1;
          }
        }
        if (foundflg == 0) {
          alert("Default Catgory G Associate Field 11 - " + assc11 +
                " not found in catgory Gi.")
        }
      }
    }
  }
}
//==========================================================================
// Check Identifying Pronoun
//==========================================================================
function ChkIdentifyPronoun(f,Acode,Ind12,Ind15) {
  if (Ind12=="P") {
    IdenProLbl.innerHTML = idenProLblShow.innerHTML;
    IdenProDetail.innerHTML = idenProDetailShow.innerHTML;
    if (Ind15=="X") {
      RemoveClassName('pmpxi127',"Mandatory");
    }
    else {
      AddClassName('pmpxi127',"Mandatory");
    }
    DefaultIdentifyPronoun(f,Acode);
    ind1 = f.pmpxi127.value.substr(3,1);
    if (ind1=="O") {
      document.getElementById('IdenProFreeTxt').innerHTML =
        document.getElementById('idenProFreeTxtShow').innerHTML;
    }
    else {
      document.getElementById('IdenProFreeTxt').innerHTML =
        document.getElementById('idenProFreeTxtBlank').innerHTML;
      f.pmpxi128.value = "";
    }
  }
  else {
    IdenProLbl.innerHTML = idenProDetailBlank.innerHTML;
    IdenProDetail.innerHTML = idenProDetailBlank.innerHTML;
    f.pmpxi127.value = "";
    f.pmpxi128.value = "";
  }
}
//--------------------------------------------------------------------------
//--------------------------------------------------------------------------
function DefaultIdentifyPronoun(f,Acode) {
  if (f.pmpxi127.selectedIndex != 0) {
    return;
  }

  acat = "G "
  serverURL = "../cgi-bin/comweb81.pbl?reportno=61" +
              "&valdctyp=" + acat.replace(/ /g,"+") +
              "&valdcode=" + Acode.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status == 0) {
    ReturnValue = returnValue.return_value.split("|")
    if (ReturnValue.length > 1) {
      assc12 = trim(ReturnValue[79]);
      if (!isWhitespace(assc12)) {
        foundflg = 0;
        for (var i = 0; i < f.pmpxi127.length; i++) {
          code3 = trim(f.pmpxi127.options[i].value.substr(0,3));
          if (code3 == assc12) {
            f.pmpxi127.selectedIndex = i;
            foundflg = 1;
          }
        }
        if (foundflg == 0) {
          alert("Default Catgory G Associate Field 12 - " + assc12 +
                " not found in catgory Gp.")
        }
      }
    }
  }
}
//==========================================================================
// Identifying Gender changed
//==========================================================================
function IdenGenderChange(f) {
  ind1 = f.pmpxi125.value.substr(3,1);
  if (ind1=="O") {
    document.getElementById('IdenGenFreeTxt').innerHTML =
      document.getElementById('idenGenFreeTxtShow').innerHTML;
  }
  else {
    document.getElementById('IdenGenFreeTxt').innerHTML =
      document.getElementById('idenGenFreeTxtBlank').innerHTML;
    f.pmpxi126.value = "";
  }
}
//==========================================================================
// Identifying Pronoun changed
//==========================================================================
function IdenPronounChange(f) {
  ind1 = f.pmpxi127.value.substr(3,1);
  if (ind1=="O") {
    document.getElementById('IdenProFreeTxt').innerHTML =
      document.getElementById('idenProFreeTxtShow').innerHTML;
  }
  else {
    document.getElementById('IdenProFreeTxt').innerHTML =
      document.getElementById('idenProFreeTxtBlank').innerHTML;
    f.pmpxi128.value = "";
  }
}
function valEmrVisit1() {
  if(document.UpdateForm.offdutyb!=undefined){
    if(document.UpdateForm.offdutyb.checked==true){
      alert("Error: Claim Type invalid for 'Off Duty' personnel.")
      return;
    }
  }
   checkSecondName(document.UpdateForm.ptcnusgn,document.UpdateForm.ptmas006,
                  document.UpdateForm.pmpxi084,document.UpdateForm.pmpxi085);

  validateSuspension(UpdateForm.urnumber,UpdateForm.emvis001,UpdateForm.datefrom,UpdateForm.dateto);

  if( UpdateForm.datefrom.value != "0" ){
         if(!confirm("Error : Patient has a Suspension record for period \n" +
               "\t" + UpdateForm.datefrom.value  + " - " + UpdateForm.dateto.value + "\n" +
               "\nWould you like to continue with the Registration?")) {
          return;
        }
  }

  i=document.UpdateForm.emvis061.selectedIndex;
  SrcInd=trim(document.UpdateForm.emvis061.options[i].value.substr(14,4));
  j=document.UpdateForm.emvis053.selectedIndex;
  TypInd=trim(document.UpdateForm.emvis053.options[j].value.substr(14,4));
  if (TypInd=="10") {
    if (!confirm("Warning: Patient is Dead on Arrival.")) {
      return;
    }
  }

  validateDemographicsConfirmedDate();

  if(!CheckValidGPAndPractice()) {
     return;
  }

  if (!ValMedicare01())
     { return; }
    if(!CheckValPostCode()) {
      return;
    }
  enableMedicare();

  if(p.prevhosp.checked==true){
    if (document.UpdateForm.prvhosdn.value!="1") {
      document.UpdateForm.redirect.value="patweb07.pbl?reportno=15&template=001"
      SetCookie("prevhospCookie",'2');
    }
  }

  if(document.UpdateForm.pmext049.value == 1 ||
     document.UpdateForm.emclcin1.value == "M") {
    document.UpdateForm.redirect.value = "patweb89.pbl?reportno=01&" +
    "template=342&urnumber=" + document.UpdateForm.urnumber.value    +
    "&mvmedrec=" + document.UpdateForm.mvmedrec.value;
    if (document.UpdateForm.pmext049.value == 1) {
      document.UpdateForm.redirect.value+= "&pmext049=" +
      document.UpdateForm.pmext049.value + "&admissno=";
    } else {
      document.UpdateForm.redirect.value+= "&admissno=";
    }
  }

  p=document.UpdateForm;
  if(checkLastUpdate(p.urnumber,p.opendate,p.opentime)) {
    UpdatePage();
  }
}

