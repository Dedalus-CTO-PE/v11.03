//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb88.js
//
// Written   : 09.02.2000 Pat Dirito
//
// Function  : Standard Functions Used in patweb88  
//
//========================================================================
//------------------------------------------------------------
// Function : Find Theartre Band  
//------------------------------------------------------------
function TheatBandSearchFrame(ReturnCode,ReturnName) {
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../cgi-bin/patweb88.pbl?reportno=1&template=004";

  var left = getClientWidth() - 220;
  PopUpScreen.style.top     = document.body.scrollTop + 'px';
  PopUpScreen.style.left    = left + 'px';
  PopUpScreen.style.width   = '220px';
  PopUpScreen.style.height  = document.body.clientHeight + 'px';
  PopUpScreen.style.display = "";

}
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
//   Report 1
//========================================================================
function updateParent01(code,desc) {
  parent.ReturnCode.value=code
  parent.ReturnName.value=desc
  parent.PopUpScreen.style.display="none"
}
//========================================================================
//   Report 2
//========================================================================
function showICD02(linkurl) {
  location.href=linkurl
}
function ICD10Tab02() {
document.LinkForm.reportno.value="2"
document.LinkForm.template.value="1"
document.LinkForm.submit()
}
function ICD10Back02() {
document.LinkForm.reportno.value="2"
document.LinkForm.template.value="5"
document.LinkForm.submit()
}
function ReadonOpr(theform) {
  if (theform.ptico018.checked==false) {
    theform.ptico016.className="ReadOnly";
    theform.ptico016.readOnly=true;
    theform.ptico016.value="";
  } else {
    theform.ptico016.className="";
    theform.ptico016.readOnly=false;
  }
  if (theform.ptico019.checked==false) {
    theform.ptico020.className="ReadOnly";
    theform.ptico020.readOnly=true;
    theform.ptico020.value="";
  } else {
    theform.ptico020.className="";
    theform.ptico020.readOnly=false;
  }
  if (theform.ptico021.checked==false) {
    theform.ptico022.className="ReadOnly";
    theform.ptico022.readOnly=true;
    theform.ptico022.value="";
  } else {
    theform.ptico022.className="";
    theform.ptico022.readOnly=false;
  }
}
//========================================================================
//   Report 3
//========================================================================
function showICD03(linkurl) {
  location.href=linkurl
}
function ICD10Tab03() {
document.LinkForm.reportno.value="3"
document.LinkForm.template.value="1"
document.LinkForm.submit()
}
function ICD10Back03() {
document.LinkForm.reportno.value="3"
document.LinkForm.template.value="4"
document.LinkForm.submit()
}
function ReadonDis(theform) {
  if (theform.pticd019.checked==false) {
    theform.pticd017.className="ReadOnly";
    theform.pticd017.readOnly=true;
    theform.pticd017.value="";
  } else {
    theform.pticd017.className="";
    theform.pticd017.readOnly=false;
  }
  if (theform.pticd020.checked==false) {
    theform.pticd021.className="ReadOnly";
    theform.pticd021.readOnly=true;
    theform.pticd021.value="";
  } else {
    theform.pticd021.className="";
    theform.pticd021.readOnly=false;
  }
  if (theform.pticd022.checked==false) {
    theform.pticd023.className="ReadOnly";
    theform.pticd023.readOnly=true;
    theform.pticd023.value="";
  } else {
    theform.pticd023.className="";
    theform.pticd023.readOnly=false;
  }
}
//========================================================================
//   Report 4
//========================================================================
function EditLookup04() {
    SelectCode.template.value=3
    SelectCode.pthos001.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-420)/2
    DFrameSubmit(SelectCode,0,Left,420,250)
}
function ShowDetail04(linkurl) {
  Left=(document.body.clientWidth-400)/2
  DFrameLink(linkurl,0,Left,420,250)
}
function FileLoc04(hospcode,uniqindx) {
parent.location.href="patweb88.pbl?reportno=05&template=001&pthos001="+hospcode+"&ptloc001="+uniqindx
DFrameExit() 
}
//========================================================================
//   Report 5
//========================================================================
function ShowDetail05(linkurl) {
  Left=(document.body.clientWidth-380)/2
  DFrameLink(linkurl,0,Left,380,160)
}
function AddDetail05() {
    SelectCode.template.value=2
    Left=(document.body.clientWidth-380)/2
    DFrameSubmit(SelectCode,0,Left,380,160)
}
function Hospital05() {
    SelectCode.reportno.value=4
    SelectCode.template.value=3
    Left=(document.body.clientWidth-420)/2
    DFrameSubmit(SelectCode,0,Left,420,250)
}
//========================================================================
//   Report 6
//========================================================================
function ShowDetail06(linkurl) {
  Left=(document.body.clientWidth-450)/2
  DFrameLink(linkurl,0,Left,450,130)
}
function EditLookup06() {
    SelectCode.template.value=3
    SelectCode.ptlga001.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-450)/2
    DFrameSubmit(SelectCode,0,Left,450,130)
}
function LgaPost06(code) {                                 
parent.location.href="patweb88.pbl?reportno=09&template=001&ptlga001="+code
DFrameExit()                                                
}                
//========================================================================
//   Report 7
//========================================================================
function EditLookup07() {
    SelectCode.template.value=3
    SelectCode.ptnur001.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-450)/2
    DFrameSubmit(SelectCode,0,Left,400,190)
}
function ShowDetail07(linkurl) {
  Left=(document.body.clientWidth-440)/2
  DFrameLink(linkurl,0,Left,440,190)
}
function WardMain07(ward) {
parent.location.href="patweb88.pbl?reportno=08&template=001&ptnur001="+ward
DFrameExit()
}
//========================================================================
//   Report 8
//========================================================================
function EditLookup08() {
    SelectCode.template.value=3
    SelectCode.ptnur002.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-450)/2
    DFrameSubmit(SelectCode,0,Left,420,110)
}
function ShowDetail08(linkurl) {
    Left=(document.body.clientWidth-400)/2
    DFrameLink(linkurl,0,Left,420,110)
}
function AddDetail08(station) {
    document.SelectCode.reportno.value=8
    document.SelectCode.template.value=2
    document.SelectCode.ptnur001.value=station
    Left=(document.body.clientWidth-400)/2
    DFrameSubmit(SelectCode,0,Left,400,110)
}
//========================================================================
//   Report 9
//========================================================================
function EditLookup09() {
    SelectCode.template.value=3
    SelectCode.ptlgp001.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-400)/2
    DFrameSubmit(SelectCode,0,Left,400,110)
}
function ShowDetail09(linkurl) {
    Left=(document.body.clientWidth-400)/2
    DFrameLink(linkurl,0,Left,400,110)
}
function AddDetail09(code) {
    document.SelectCode.reportno.value=9
    document.SelectCode.template.value=2
    document.SelectCode.ptlga001.value=code
    document.SelectCode.ptlgp002.value=code
    Left=(document.body.clientWidth-400)/2
    DFrameSubmit(SelectCode,0,Left,400,110)
}
//========================================================================
//   Report 10
//========================================================================
function ShowDetail10(linkurl) {
  Left=(document.body.clientWidth-450)/2
  DFrameLink(linkurl,0,Left,450,260)
}
function EditLookup10() {
    SelectCode.template.value=3
    SelectCode.ptctc001.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-450)/2
    DFrameSubmit(SelectCode,0,Left,450,260)
}
//========================================================================
//   Report 11
//========================================================================
function ShowDetail11(linkurl) {
  Left=(document.body.clientWidth-450)/2
  DFrameLink(linkurl,0,Left,450,220)
}
function EditLookup11() {
  var dummy="";
  if (validateCode(35,SelectCode.startkey,dummy)) {
    SelectCode.template.value=3
    SelectCode.patcm001.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-450)/2
    DFrameSubmit(SelectCode,0,Left,450,220)
  }
}

//========================================================================
//   Report 13
//========================================================================
function ICD10Tab13() {
  document.LinkForm.reportno.value="13"
  document.LinkForm.template.value="1"
  document.LinkForm.submit()
}
function ICD10Back13() {
  document.LinkForm.reportno.value="13"
  document.LinkForm.template.value="5"
  document.LinkForm.submit()
}
function submitAdd() {
  if (validateMandatory(document.AddForm))
    document.AddForm.submit();
}

//========================================================================
//   Report 14
//========================================================================
function ICD10Tab14() {
  document.LinkForm.reportno.value="14"
  document.LinkForm.template.value="1"
  document.LinkForm.submit()
}
function ICD10Back14() {
  document.LinkForm.reportno.value="14"
  document.LinkForm.template.value="4"
  document.LinkForm.submit()
}

//========================================================================
//   Report 15
//========================================================================
function ICD10Tab15() {
  document.LinkForm.reportno.value="15"
  document.LinkForm.template.value="1"
  document.LinkForm.submit()
}
function ICD10Back15() {
  document.LinkForm.reportno.value="15"
  document.LinkForm.template.value="5"
  document.LinkForm.submit()
}
function submitAdd() {
  if (validateMandatory(document.AddForm))
    document.AddForm.submit();
}

//========================================================================
//   Report 16
//========================================================================
function ICD10Tab16() {
  document.LinkForm.reportno.value="16"
  document.LinkForm.template.value="1"
  document.LinkForm.submit()
}
function ICD10Back16() {
  document.LinkForm.reportno.value="16"
  document.LinkForm.template.value="4"
  document.LinkForm.submit()
}

//========================================================================
//   Report 17
//========================================================================
function EditLookup17() {
  if (isWhitespace(SelectCode.startkey.value)) {
    alert("Please enter Hospital ID.");
    SelectCode.startkey.focus();
    return;
  }
  else {
    SelectCode.template.value="003"
    SelectCode.pthsp001.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-1000)/2
    DFrameSubmit(SelectCode,0,Left,1000,700)
  }
}
function ShowDetail17(linkurl) {
  Left=(document.body.clientWidth-1000)/2
  DFrameLink(linkurl,0,Left,1000,730)
}
function LinkedDivisions17() {
  linkurl="patweb88.pbl?reportno=27&template=001" +
          "&pthsp001=" + UpdateForm.pthsp001.value.replace(/ /g,"+") +
          "&pmdiv002= "
  parent.location.href=linkurl;
}
function LinkedHPIO17() {
  linkurl="patweb88.pbl?reportno=30&template=001" +
          "&pthsp001=" + UpdateForm.pthsp001.value.replace(/ /g,"+");
  parent.location.href=linkurl;
}
  
//========================================================================
//   Report 18
//========================================================================
function ICD10Tab18() {
  document.LinkForm.reportno.value="18"
  document.LinkForm.template.value="1"
  document.LinkForm.submit()
}
function ICD10Back18() {
  document.LinkForm.reportno.value="18"
  document.LinkForm.template.value="5"
  document.LinkForm.submit()
} 
function submitAdd() {
  if (validateMandatory(document.AddForm))
    document.AddForm.submit();
}
   
//========================================================================
//   Report 19
//========================================================================
function ICD10Tab19() {
  document.LinkForm.reportno.value="19"
  document.LinkForm.template.value="1"
  document.LinkForm.submit()
} 
function ICD10Back19() {
  document.LinkForm.reportno.value="19"
  document.LinkForm.template.value="4"
  document.LinkForm.submit()
}
//
//========================================================================
//   Report 20
//========================================================================
function ICD10Tab20() {
  document.LinkForm.reportno.value="20"
  document.LinkForm.template.value="1"
  document.LinkForm.submit()
}
function ICD10Back20() {
  document.LinkForm.reportno.value="20"
  document.LinkForm.template.value="5"
  document.LinkForm.submit()
}

//========================================================================
//   Report 21
//========================================================================
function ICD10Tab21() {
  document.LinkForm.reportno.value="21"
  document.LinkForm.template.value="1"
  document.LinkForm.submit()
}
function ICD10Back21() {
  document.LinkForm.reportno.value="21"
  document.LinkForm.template.value="4"
  document.LinkForm.submit()
}
//========================================================================
//   Report 22
//========================================================================
function ICD10Tab22() {
  document.LinkForm.reportno.value="22"
  document.LinkForm.template.value="1"
  document.LinkForm.submit()
}
function ICD10Back22() {
  document.LinkForm.reportno.value="22"
  document.LinkForm.template.value="5"
  document.LinkForm.submit()
}

//========================================================================
//   Report 23
//========================================================================
function ICD10Tab23() {
  document.LinkForm.reportno.value="23"
  document.LinkForm.template.value="1"
  document.LinkForm.submit()
}
function ICD10Back23() {
  document.LinkForm.reportno.value="23"
  document.LinkForm.template.value="4"
  document.LinkForm.submit()
}
//========================================================================
//   Report 24                               ICD10 Ed.7 Proc.   CAR 219246
//========================================================================
function ICD10Tab24() {
  document.LinkForm.reportno.value="24"
  document.LinkForm.template.value="1"
  document.LinkForm.submit()
}
function ICD10Back24() {
  document.LinkForm.reportno.value="24"
  document.LinkForm.template.value="5"
  document.LinkForm.submit()
}

//========================================================================
//   Report 25                               ICD10 Ed.7 Disease CAR 219246
//========================================================================
function ICD10Tab25() {
  document.LinkForm.reportno.value="25"
  document.LinkForm.template.value="1"
  document.LinkForm.submit()
}
function ICD10Back25() {
  document.LinkForm.reportno.value="25"
  document.LinkForm.template.value="4"
  document.LinkForm.submit()
}
//========================================================================
//   Report 27
//========================================================================
function ShowDetail27(linkurl) {
  Left=(document.body.clientWidth-600)/2
  DFrameLink(linkurl,0,Left,600,300)
}
function AllHospitals27() {
  linkurl="patweb88.pbl?reportno=17&template=001";
  location.href=linkurl;
}
function ViewHosp27() {
  SelectCode.reportno.value=17
  SelectCode.template.value=3
  Left=(document.body.clientWidth-1000)/2
  DFrameSubmit(SelectCode,0,Left,1000,730)
}
function AddDivision27() {
  linkurl="patweb88.pbl?reportno=27&template=002" +
          "&pthsp001=" + SelectCode.pthsp001.value.replace(/ /g,"+") +
          "&pmdiv002=" + SelectCode.pmdiv002.value.replace(/ /g,"+") +
          "&pmdiv003=" + SelectCode.pmdiv003.value.replace(/ /g,"+") +
          "&pmdiv004=" + SelectCode.pmdiv004.value.replace(/ /g,"+")
  Left=(document.body.clientWidth-600)/2
  DFrameLink(linkurl,0,Left,600,300)
}
function LinkedUnits27() {
  linkurl="patweb88.pbl?reportno=27&template=004" +
          "&pthsp001=" + UpdateForm.pmdiv001.value.replace(/ /g,"+") +
          "&pmdiv002=" + UpdateForm.pmdiv002.value.replace(/ /g,"+") +
          "&pmdiv003=" + UpdateForm.pmdiv003.value.replace(/ /g,"+") +
          "&pmdiv004=" + UpdateForm.pmdiv004.value.replace(/ /g,"+")
  parent.location.href=linkurl;
}
function AllDivisions27() {
  linkurl="patweb88.pbl?reportno=27&template=001" +
          "&pthsp001=" + SelectCode.pthsp001.value.replace(/ /g,"+") +
          "&pmdiv002=" + SelectCode.pmdiv002.value.replace(/ /g,"+") +
          "&pmdiv003=" + SelectCode.pmdiv003.value.replace(/ /g,"+") +
          "&pmdiv004=" + SelectCode.pmdiv004.value.replace(/ /g,"+")
  location.href=linkurl;
}
function ViewDivision27() {
  SelectCode.reportno.value=27
  SelectCode.template.value=3
  Left=(document.body.clientWidth-600)/2
  DFrameSubmit(SelectCode,0,Left,600,300)
}
function AddUnit27() {
  linkurl="patweb88.pbl?reportno=27&template=005" +
          "&pthsp001=" + SelectCode.pthsp001.value.replace(/ /g,"+") +
          "&pmdiv002=" + SelectCode.pmdiv002.value.replace(/ /g,"+") +
          "&pmdiv003=" + SelectCode.pmdiv003.value.replace(/ /g,"+") +
          "&pmdiv004=" + SelectCode.pmdiv004.value.replace(/ /g,"+")
  Left=(document.body.clientWidth-600)/2
  DFrameLink(linkurl,0,Left,600,300)
}
function LinkedTeams27() {
  linkurl="patweb88.pbl?reportno=27&template=007" +
          "&pthsp001=" + UpdateForm.pmdiv001.value.replace(/ /g,"+") +
          "&pmdiv002=" + UpdateForm.pmdiv002.value.replace(/ /g,"+") +
          "&pmdiv003=" + UpdateForm.pmdiv003.value.replace(/ /g,"+") +
          "&pmdiv004=" + UpdateForm.pmdiv004.value.replace(/ /g,"+")
  parent.location.href=linkurl;
}
function AllUnits27() {
  linkurl="patweb88.pbl?reportno=27&template=004" +
          "&pthsp001=" + SelectCode.pthsp001.value.replace(/ /g,"+") +
          "&pmdiv002=" + SelectCode.pmdiv002.value.replace(/ /g,"+") +
          "&pmdiv003=" + SelectCode.pmdiv003.value.replace(/ /g,"+") +
          "&pmdiv004=" + SelectCode.pmdiv004.value.replace(/ /g,"+")
  location.href=linkurl;
}
function ViewUnit27() {
  SelectCode.reportno.value=27
  SelectCode.template.value=6
  Left=(document.body.clientWidth-600)/2
  DFrameSubmit(SelectCode,0,Left,600,300)
}
function AddTeam27() {
  linkurl="patweb88.pbl?reportno=27&template=008" +
          "&pthsp001=" + SelectCode.pthsp001.value.replace(/ /g,"+") +
          "&pmdiv002=" + SelectCode.pmdiv002.value.replace(/ /g,"+") +
          "&pmdiv003=" + SelectCode.pmdiv003.value.replace(/ /g,"+") +
          "&pmdiv004=" + SelectCode.pmdiv004.value.replace(/ /g,"+")
  Left=(document.body.clientWidth-600)/2
  DFrameLink(linkurl,0,Left,600,300)
}
//========================================================================
//   Report 28                               ICD10 Ed.8 Proc.   CAR 284420
//========================================================================
function ICD10Tab28() {
  document.LinkForm.reportno.value="28"
  document.LinkForm.template.value="1"
  document.LinkForm.submit()
}
function ICD10Back28() {
  document.LinkForm.reportno.value="28"
  document.LinkForm.template.value="5"
  document.LinkForm.submit()
}

//========================================================================
//   Report 29                               ICD10 Ed.8 Disease CAR 284420
//========================================================================
function ICD10Tab29() {
  document.LinkForm.reportno.value="29"
  document.LinkForm.template.value="1"
  document.LinkForm.submit()
}
function ICD10Back29() {
  document.LinkForm.reportno.value="29"
  document.LinkForm.template.value="4"
  document.LinkForm.submit()
}
//========================================================================
//   Report 30
//========================================================================
function AllHospitals30() {
  linkurl="patweb88.pbl?reportno=17&template=001";
  location.href=linkurl;
}
function ViewHosp30() {
  SelectCode.reportno.value=17
  SelectCode.template.value=3
  Left=(document.body.clientWidth-1000)/2
  DFrameSubmit(SelectCode,0,Left,1000,730)
}
function AddHPIO30() {
  linkurl="patweb88.pbl?reportno=30&template=002" +
          "&pthsp001=" + SelectCode.pthsp001.value.replace(/ /g,"+") 
  Left=(document.body.clientWidth-550)/2
  DFrameLink(linkurl,0,Left,550,250)
}
function ShowDetail30(linkurl) {
  Left=(document.body.clientWidth-550)/2
  DFrameLink(linkurl,0,Left,550,250)
}
function SetActive30(theForm) {
  if(theForm.d_pmihu004.checked==true) {
    theForm.pmihu004.value="0";
  } else {
    theForm.pmihu004.value="1";
  }
}
//========================================================================
//   Report 31                               ICD10 Ed.9 Proc.   CAR 311669
//========================================================================
function ICD10Tab31() {
  document.LinkForm.reportno.value="31"
  document.LinkForm.template.value="1"
  document.LinkForm.submit()
}
function ICD10Back31() {
  document.LinkForm.reportno.value="31"
  document.LinkForm.template.value="5"
  document.LinkForm.submit()
}
//========================================================================
//   Report 32                               ICD10 Ed.9 Disease CAR 311669
//========================================================================
function ICD10Tab32() {
  document.LinkForm.reportno.value="32"
  document.LinkForm.template.value="1"
  document.LinkForm.submit()
}
function ICD10Back32() {
  document.LinkForm.reportno.value="32"
  document.LinkForm.template.value="4"
  document.LinkForm.submit()
}
//========================================================================
//   Report 33                               ICD10 Ed.10 Proc.   TSK 0833093
//========================================================================
function ICD10Tab33() {
  document.LinkForm.reportno.value="33"
  document.LinkForm.template.value="1"
  document.LinkForm.submit()
}
function ICD10Back33() {
  document.LinkForm.reportno.value="33"
  document.LinkForm.template.value="5"
  document.LinkForm.submit()
}
//========================================================================
//   Report 34                               ICD10 Ed.10 Disease TSK 0833093
//========================================================================
function ICD10Tab34() {
  document.LinkForm.reportno.value="34"
  document.LinkForm.template.value="1"
  document.LinkForm.submit()
}
function ICD10Back34() {
  document.LinkForm.reportno.value="34"
  document.LinkForm.template.value="4"
  document.LinkForm.submit()
}
//========================================================================
//   Report 37                               ICD10 Ed.11 Proc.   TSK 0869412
//========================================================================
function ICD10Tab37() {
  document.LinkForm.reportno.value="37"
  document.LinkForm.template.value="1"
  document.LinkForm.submit()
}
function ICD10Back37() {
  document.LinkForm.reportno.value="37"
  document.LinkForm.template.value="5"
  document.LinkForm.submit()
}
//========================================================================
//   Report 38                               ICD10 Ed.11 Disease TSK 0869412
//========================================================================
function ICD10Tab38() {
  document.LinkForm.reportno.value="38"
  document.LinkForm.template.value="1"
  document.LinkForm.submit()
}
function ICD10Back38() {
  document.LinkForm.reportno.value="38"
  document.LinkForm.template.value="4"
  document.LinkForm.submit()
}
//========================================================================
//   Report 40                               ICD10 Ed.12 Proc.   TSK 0917793
//========================================================================
function ICD10Tab40() {
  document.LinkForm.reportno.value="40"
  document.LinkForm.template.value="1"
  document.LinkForm.submit()
}
function ICD10Back40() {
  document.LinkForm.reportno.value="40"
  document.LinkForm.template.value="5"
  document.LinkForm.submit()
}
//========================================================================
//   Report 41                               ICD10 Ed.12 Disease TSK 0917793
//========================================================================
function ICD10Tab41() {
  document.LinkForm.reportno.value="41"
  document.LinkForm.template.value="1"
  document.LinkForm.submit()
}
function ICD10Back41() {
  document.LinkForm.reportno.value="41"
  document.LinkForm.template.value="4"
  document.LinkForm.submit()
}
//========================================================================
function ValdteAgeLimtFlds(MinFld, MaxFld) {
  justifyRight(MinFld);
  justifyRight(MaxFld);

  MaxFld.className = !isWhitespace(MinFld.value) ? "Number Mandatory" : "Number"
  MinFld.className = !isWhitespace(MaxFld.value) ? "Number Mandatory" : "Number"

  // Validate max age (pthsp057) > min age (pthsp056)
  var min = parseInt(MinFld.value);
  var max = parseInt(MaxFld.value);
  if (max <= min) {
    alert(MaxFld.title + " must be greater than " + MinFld.title);
    return false;
  }

  return true;
}

function ValidateAgeRange(MinFld, MaxFld) {
  if (!isWhitespace(MinFld.value)) {
    if (!checkInteger(MinFld, MinFld.title)) {
      return false;
    }
  }

  if (!isWhitespace(MaxFld.value)) {
    if (!checkInteger(MaxFld, MaxFld.title)) {
      return false;
    }
  }

  if (isWhitespace(MinFld.value) || isWhitespace(MaxFld.value))
    return true;

  CompareNumberFields(MinFld, MaxFld);
}

function ValidateValueField(Field, Min, Max) {
  if (Field == undefined)
    return true;

  if ( (Field.value.match(/\./g)) || (Field.value.match(/\+/g)) ) {
    alert(Field.title + " must be an Integer")
    FocusDelay(Field);
    Field.select();
    return false;
  }

  if (isFinite(Field.value)) {
    if (isFinite(Min)) {
      if (parseInt(Field.value,10) < parseInt(Min,10)) {
        alert(Field.title + " must be Greater Than or = " + Min);
        FocusDelay(Field);
        Field.select();
      }
    }

    if (isFinite(Max)) {
      if (parseInt(Field.value,10) > parseInt(Max,10)) {
        alert(Field.title + " must be Less Than or = " + Max);
        FocusDelay(Field);
        Field.select();
      }
    }
  }
  else {
    alert(Field.title + " Must be Numeric");
    FocusDelay(Field);
    Field.select();
    return false;
  }

  return true;
}
