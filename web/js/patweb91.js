//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb91.js
//
// Written   : 09.02.2000 Pat Dirito
//
// Function  : Standard Functions Used in patweb91  
//
//========================================================================
//   Report 1
//========================================================================
var widthrep01 = 450;
function ShowDetail01(linkurl) {
  Left=(document.body.clientWidth-widthrep01)/2
  DFrameLink(linkurl,0,Left,widthrep01,280)
}
function EditCategory01() {
    SelectCode.template.value=3
    SelectCode.ptcod001.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-widthrep01)/2
    DFrameSubmit(SelectCode,0,Left,widthrep01,280)
}
function StartList01(category) {
location.href="patweb91.pbl?reportno=01&template=001&startkey="+category
}
function StartListName01(category) {
location.href="patweb91.pbl?reportno=01&template=004&startkey="+category
}
function CodeList01(category) {
  if (category=="ap") {
    parent.location.href="patweb91.pbl?reportno=02&template=010&ptcod001=" +
                          category
  } else {
    parent.location.href="patweb91.pbl?reportno=02&template=001&ptcod001=" +
                          category
  }
  DFrameExit() 
}
function UpdateParent01(code,desc) {
  parent.ReturnCode.value=code
  parent.ReturnName.value=desc
  parent.PopUpScreen.style.display="none"
}
function StartList01005(category) {
location.href="patweb91.pbl?reportno=01&template=005&&norecord=8&startkey="+category
}
function CategorySec(category) {
  parent.location.href="comweb03.pbl?reportno=02&template=004&sccat002=" +
                        category
  DFrameExit() 
}
function SetHosSpec01() {
  if (document.UpdateForm.ibcnmhos.value=="1") {
    HospitalSpecific.innerHTML=ShowHospitalSpecific.innerHTML;
  }
}
function submitUpdCatg() {
 document.UpdateForm.ptcod006.value=" ";
  if (document.UpdateForm.d_ptcod006 != undefined) {
     if (document.UpdateForm.d_ptcod006.checked!=true) {
        document.UpdateForm.ptcod006.value="I";
     }
  }
 document.UpdateForm.ptcod014.value=" ";
  if (document.UpdateForm.d_ptcod014 != undefined) {
     if (document.UpdateForm.d_ptcod014.checked==true) {
        document.UpdateForm.ptcod014.value="1";
     }
  }
 document.UpdateForm.ptcod016.value=" ";
  if (document.UpdateForm.d_ptcod016 != undefined) {
     if (document.UpdateForm.d_ptcod016.checked==true) {
        document.UpdateForm.ptcod016.value="1";
     }
  }
 document.UpdateForm.ptcod017.value=" ";
  if (document.UpdateForm.d_ptcod017 != undefined) {
     if (document.UpdateForm.d_ptcod017.checked==true) {
        document.UpdateForm.ptcod017.value="1";
     }
  }
  setFormactn('U');
}
// Display Active Indicator for Selected Codes only
function SetActvInd01() {
  var actvcats="H1H2H3H4H5H6H7H8H9"
  var fndCat=actvcats.indexOf(document.UpdateForm.ptcod001.value)
  if  (fndCat != -1) {
      ActiveIndicator.innerHTML= ShowActiveIndicator.innerHTML;
  }
}
//========================================================================
//   Report 2
//========================================================================
var widthrep02 = 0;
function ShowDetail02(linkurl,disabled) {
  if (disabled=="1") {
    alert("Insufficient security to edit this category.");
    return;
  }
  Left=(document.body.clientWidth-800)/2
  DFrameLink(linkurl,0,Left,800,670)
}
function EditCategory02() {
    SelectCode.template.value=3
    SelectCode.ptcod001.value=SelectCode.ptcod001.value
    SelectCode.ptcod002.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-700)/2
    DFrameSubmit(SelectCode,0,Left,700,600)
}
function AddCodeAdm(category) {   // Admitting Point Cat Add 
    SelectCode.template.value=13
    SelectCode.ptcod001.value=category
    Left=(document.body.clientWidth-700)/2
    DFrameSubmit(SelectCode,0,Left,700,600)
}
function AddCode02(category) {
    SelectCode.template.value=2
    SelectCode.ptcod001.value=category
    Left=(document.body.clientWidth-800)/2
    DFrameSubmit(SelectCode,0,Left,800,670)
}
function ViewCat02(category) {
    SelectCode.reportno.value=1
    SelectCode.template.value=3
    SelectCode.ptcod001.value=category
    Left=(document.body.clientWidth-450)/2
    DFrameSubmit(SelectCode,0,Left,450,280)
}
function NameList02(category,codestat) {
  if (category=="ap") {
    location.href="patweb91.pbl?reportno=02&template=012&ptcod001="+category+"&codestat="+codestat
  } else {
    location.href="patweb91.pbl?reportno=02&template=004&ptcod001="+category+"&codestat="+codestat
  }
}
function CodeList02(category,codestat) {
  if (category=="ap") {
    location.href="patweb91.pbl?reportno=02&template=010&ptcod001="+category+"&codestat="+codestat
  } else {
    location.href="patweb91.pbl?reportno=02&template=001&ptcod001="+category+"&codestat="+codestat
  }
}
function StartList02(category,codestat) {
  if (category=="ap") {
    location.href="patweb91.pbl?reportno=02&template=010&ptcod001="+category+"&codestat="+codestat
  } else {
    location.href="patweb91.pbl?reportno=02&template=001&ptcod001="+category+"&codestat="+codestat
  }
}
function StartList02Unit(category,codestat) {
    location.href="patweb91.pbl?reportno=02&template=005&ptcod001="+category+"&codestat="+codestat
}
function StartList02ProcCdGrps(category) {
  location.href="patweb91.pbl?reportno=02&template=007&ptcod001="+category
}
function ProcMaint02(category) {
parent.location.href="watweb02.pbl?reportno=01&template=001&ptcod002="+category
DFrameExit()
}
function ConsMaint02(category) {
parent.location.href="watweb02.pbl?reportno=02&template=001&ptcod002="+category
DFrameExit()
}

function CatFields02(CatCode) {
 HDPDefault.innerHTML=StdField1.innerHTML;
 AssocNumb.innerHTML=StdField2.innerHTML;
 HCPEquiv.innerHTML=StdField3.innerHTML;
 CodeData.innerHTML=StdData1.innerHTML;
 HCPEquData.innerHTML=StdData2.innerHTML;
 SurchrgDesc.innerHTML="";
 SurchrgData.innerHTML="";

 if(CatCode == "BK") {
   HDPDefault.innerHTML=BookType.innerHTML;
   AssocNumb.innerHTML=MaxBooks.innerHTML;
   HCPEquiv.innerHTML="";
   HCPEquData.innerHTML="";
  }
 if(CatCode == "BT") {
   AssocNumb.innerHTML=RoomType.innerHTML;
  }
 if(CatCode == "J ") {
   HDPDefault.innerHTML=Journals.innerHTML;
   HCPEquiv.innerHTML="";
   CodeData.innerHTML=JrnlData.innerHTML;
   HCPEquData.innerHTML="";
  }
 if(CatCode == "CR") {
   SurchrgDesc.innerHTML=SurchrgField1.innerHTML;
   SurchrgData.innerHTML=SurchrgField2.innerHTML;
 }
}
function SetHosSpec02() {
  if(document.UpdateForm.ibcnmhos.value=="1") {
    HospitalButton.style.display="";
    if (document.UpdateForm.showrhos.value=="1") {
      document.UpdateForm.HospButton.className="RedButton";
    }
  } 
}
function SetEclipse02() {
  if (document.UpdateForm.ptcnuedi.value=="1" &&
      (document.UpdateForm.ptcod001.value=="BT" ||
       document.UpdateForm.ptcod001.value=="A ")) {
    EclipseButton.style.display="";
    if (!isWhitespace(document.UpdateForm.pmdva001.value)) {
      document.UpdateForm.ButtonEclipse.className="RedButton";
    }
  }
}
function MaintainEclipse02() {
  linkurl="patweb91.pbl?reportno=2&template=016" +
          "&ptcod001=" + UpdateForm.ptcod001.value.replace(/ /g,"+") +
          "&ptcod002=" + UpdateForm.ptcod002.value.replace(/ /g,"+")
  Left=(document.body.clientWidth-400)/2
  DFrameLink(linkurl,0,Left,400,180)
}
function SetCopyHosSpec02() {
  if(document.SelectCode.ibcnmhos.value=="1") {
    document.getElementById('HospitalButton').style.display="";
    if (document.SelectCode.showrhos.value=="1") {
      document.getElementById('HospButton').className="RedButton";
    }
  } 
}
function MaintainHosSpec02() {
  linkurl="patweb91.pbl?reportno=2&template=014" +
          "&ptcod001=" + UpdateForm.ptcod001.value.replace(/ /g,"+") +
          "&ptcod002=" + UpdateForm.ptcod002.value.replace(/ /g,"+")
  Left=(document.body.clientWidth-400)/2
  DFrameLink(linkurl,0,Left,400,250)
}
function CopyHosSpec02() {
  linkurl="patweb91.pbl?reportno=2&template=015" +
          "&ptcod001=" + SelectCode.ptcod001.value.replace(/ /g,"+") 
  Left=(document.body.clientWidth-400)/2
  DFrameLink(linkurl,0,Left,400,250)
}
function HospitalCopy02() {
  if(!validateMandatory(UpdateForm)){
    return;
  }
  if(confirm("Warning: Create hospital specific details" +
             " for this category and hospital\n" +
             "Click OK to continue, CANCEL to exit")) {
    document.UpdateForm.updttype.value="C";
    document.UpdateForm.submit();
  }
}
function HospitalDel02() {
  if(!validateMandatory(UpdateForm)){
    return;
  }
  if(confirm("Warning: This will delete all hospital specific details" +
             " for this category and hospital\n" +
             "Click OK to continue, CANCEL to exit")) {
    document.UpdateForm.updttype.value="R";
    document.UpdateForm.submit();
  }
}

//========================================================================
//   Report 3
//========================================================================
function ShowDetail03(linkurl) {
  Left=(document.body.clientWidth-380)/2
  DFrameLink(linkurl,0,Left,380,135)
}
function StartList03(category) {
location.href="patweb91.pbl?reportno=01&template=001&startkey="+category
}
function EditLookup03() {
    SelectCode.template.value=3
    SelectCode.wblid001.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-380)/2
    DFrameSubmit(SelectCode,0,Left,380,135)
}
function Lookup03(lookname) {
   EightZeros="00000000"
   LookupID=document.code_mainten.lidtestc.value
   LookupName="Lookup_" + LookupID + EightZeros.substring(0,8-LookupID.length) + "_000"
   lookname.value = LookupName;
   alert(lookname.value)
}
//========================================================================
//   Report 4
//========================================================================
function ShowDetail04(linkurl) {
  Left=(document.body.clientWidth-500)/2
  DFrameLink(linkurl,0,Left,500,410)
}
function EditLookupPg04() {
    SelectCode.template.value=3
    SelectCode.wblid001.value=SelectCode.wblid001.value
    SelectCode.wbpag001.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-500)/2
    DFrameSubmit(SelectCode,0,Left,500,410)
}
function AddPage04(lookpage) {
    SelectCode.template.value=2
    SelectCode.wblid001.value=lookpage
    Left=(document.body.clientWidth-500)/2
    DFrameSubmit(SelectCode,0,Left,500,450)
}
function ViewID04(lookid) {
    LinkCode.reportno.value=3
    LinkCode.template.value=3
    LinkCode.wblid001.value=lookid  
    Left=(document.body.clientWidth-380)/2
    DFrameSubmit(LinkCode,0,Left,380,135)
}
//========================================================================
//   Report 5
//========================================================================
function ShowDetail05(linkurl) {
  Left=(document.body.clientWidth-430)/2
  DFrameLink(linkurl,0,Left,430,250)
}
function EditLookup05() {
    SelectCode.template.value=3
    SelectCode.wblid001.value=SelectCode.wblid001.value
    SelectCode.wbpag001.value=SelectCode.wbpag001.value
    SelectCode.wbldt001.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-430)/2
    DFrameSubmit(SelectCode,0,Left,430,250)
}
function PageList05(lookupid) {
location.href="patweb91.pbl?reportno=04&template=001&wblid001="+lookupid
}
function AddLine05(lookupid,lookpage) {
    SelectCode.template.value=2
    SelectCode.wblid001.value=lookupid
    SelectCode.wbpag001.value=lookpage
    Left=(document.body.clientWidth-430)/2
    DFrameSubmit(SelectCode,0,Left,430,250)
}
function ViewPage05(lookupid,lookpage) {
    LinkCode.reportno.value=4
    LinkCode.template.value=3
    LinkCode.wblid001.value=lookupid
    LinkCode.wbpag001.value=lookpage
    Left=(document.body.clientWidth-500)/2
    DFrameSubmit(LinkCode,0,Left,500,410)
}
//========================================================================
//   Report 8
//========================================================================
function ShowDetail08(linkurl) {
  Left=(document.body.clientWidth-650)/2
  DFrameLink(linkurl,0,Left,650,380)
}
function EditCode08() {
    SelectCode.template.value=3
    SelectCode.patva001.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-650)/2
    DFrameSubmit(SelectCode,0,Left,650,300)
}
function SetAutoEnd08(datefield,autofield) {
  if(isWhitespace(datefield.value)) {
    autofield.checked=false
  }
}
function CheckAutoEnd08(autofield,datefield) {
  if(isWhitespace(datefield.value)) {
    alert("End date is Mandatory for auto update");
    autofield.checked=false;    
  }
}
function CheckDateRange08(FromInput,ToInput) {
  if (SetDateYYYYMMDD(FromInput.value) > SetDateYYYYMMDD(ToInput.value)) {
    alert("Invalid Range Entered " + FromInput.title + " " + ToInput.title);
    return false }
  else {
    return true }
}
function PostTransfer08() {
  if(UpdateForm.patva005.value==UpdateForm.patva007.value) {
    alert("Start and End dates can't be equal.");
    return;
  }
  if(UpdateForm.patva005.value!=UpdateForm.patva005.defaultValue) {
    if(!confirm("Start date has changed -" +
          " Please check admission dates for this transfer source" +
          " \nContinue?")){
       return;
    }
  }
  if(!isWhitespace(UpdateForm.patva007.value)) {
    if(!CheckDateRange08(UpdateForm.patva005,UpdateForm.patva007)) {
      return;
    }
  }
  setFormactn('U');
}
function AddTransfer08() {
  if(!validateMandatory(AddForm)){
    return;
  }
  if(AddForm.patva005.value==AddForm.patva007.value) {
    alert("Start and End dates can't be equal.");
    return;
  }
  if(!isWhitespace(AddForm.patva007.value)) {
    if(!CheckDateRange08(AddForm.patva005,AddForm.patva007)) {
      return;
    }
  }
  document.AddForm.submit();
}
//========================================================================
//   Report 9
//========================================================================
function SubmitAddPCode() {
  if (!checkSuburbChars())
     { return; }

  SubmitForm();
}
function checkSuburbChars() {
// Validate Suburb starts with alpha and contains only alphanumeric, space, 
// "-", "(" & ")", "'" (single quotes) and "+".
// Also that brackets are matched and in correct sequence.
  var ChrChk = /(?=^([^()]*\([^()]*\))*[^()]*$)^[a-zA-Z][a-zA-Z\d\(\)\-\s\'\+]*$/
  if (AddForm.ptpos002.value.search(ChrChk) == -1) {
     alert("Suburb contains invalid characters");
     return false;
  } else { return true; }
}

//========================================================================
//   Report 2
//========================================================================
function InitAltIDFields() {
  var elIndc1 = document.getElementById('ptcod007');
  var elIndc3 = document.getElementById('ptcod009');
  var tdInd1 = document.getElementById('tdIndc1');

  if (!elIndc1 || !elIndc3 || !tdInd1)
    return;

  tdInd1.innerHTML = "Alternate ID Prefix";

  elIndc1.maxLength = 2;
  elIndc1.title = "Alternate ID Prefix";
  elIndc3.className = "Readonly";  // indicator 3
  elIndc3.readOnly = true;

  AttachEventHandler('ptcod007','change',ValidateAltIDField);
}
function ValidateAltIDField() {
  var elIndc1 = document.getElementById('ptcod007');
  var elIndc3 = document.getElementById('ptcod009');

  if (!elIndc1 || !elIndc3)
    return;

  var sVal = elIndc1.value;

  if (isWhitespace(sVal)) {
    elIndc3.value = "";
    return;
  }

  // Only allow Alphanumeric character input
  if (sVal.match(/[^a-zA-Z0-9]/)) {
    alert("Invalid value entered for " + elIndc1.title + " !");
    elIndc1.focus();
    elIndc1.select();
    return;
  }

  elIndc3.value = sVal.substr(1,1);;  // set Indicator 3 value
}
