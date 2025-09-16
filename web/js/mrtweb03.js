//jsVersion  : V11.03.00
//========================================================================
// Program   : mrtweb03.js
//
// Written   : 23.10.2000 Katie Nelson 
//
// Function  : Standard Functions Used in mrtweb03 templates
//
// Version   :
//        V10.02.02 12/09/2011 Mike Laming   CAR 240724
//                  Added SetHospital() to Report 1
//        V10.02.01 08/07/2011 Ebon Clements CAR 240724
//                  Added SetMRTLocationF() and SetMRTLocationT()
//        V9.04.02 01/04/2005 J.Tan          CAR 54695
//                  Added function valFields02 for add screen
//        V9.04.01 09/09/2004 Ebon Clements  CAR 53354
//                  Totran template diff - Added multi hospital
//        V5.10.00 03.05.2001 Added details for report 4 and 5
//        V5.09.00 23.10.2000 Katie Nelson  
//
//
//========================================================================
//
//========================================================================
//  Report 1
//========================================================================
function EditList01(extrctid) {
  URL="mrtweb03.pbl?reportno=02&template=001&mrtep001=" + extrctid.value;
  parent.location.href=URL;
//  DFrameLink(URL,20,50,650,350);
}
function SetHospital(p) {

  if(p.ibcnmhos.value=="1") {
    HospitalTitle.innerHTML=ShowHospitalTitle.innerHTML;
    Hospital.innerHTML=ShowHospital.innerHTML;
  } else {
    HospitalTitle.innerHTML="";
    Hospital.innerHTML=ShowNoHospital.innerHTML;;
  }
}
//========================================================================
//  Report 2
//========================================================================
function ShowDetail02(linkurl) {
  Left=(document.body.clientWidth-350)/2
  DFrameLink(linkurl,0,Left,350,260)
}
//
function AutoCode02(extrctid) {
  document.AutoCode.mrtex001.value=extrctid;
  document.AutoCode.submit();
}
//========================================================================
// Flag Delete Patient From List
//========================================================================
function DeletePatient(CheckBox,ExtractID,Admission,ExtrType) {
  UpdateValue=0 
  if (CheckBox.checked) {
     UpdateValue=1 }
  var serverURL   = "../cgi-bin/mrtweb03.pbl?reportno=3" +
                    "&mrtep001=" + ExtractID.replace(/ /g,"+") +
                    "&mrtep002=" + Admission.replace(/ /g,"+") +
                    "&extrtype=" + ExtrType.replace(/ /g,"+") +                
                    "&mrtep003=" + UpdateValue
  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {
    ReturnCode.select();  }
}
//========================================================================
// Flag Delete Patient From List
//========================================================================
function DeletePatient05(CheckBox,ExtractID,Admission,ExtrType) {
  UpdateValue=0
  if (CheckBox.checked) {
     UpdateValue=1 }
  var serverURL   = "../cgi-bin/mrtweb03.pbl?reportno=3" +
                    "&mrtre001=" + ExtractID.replace(/ /g,"+") +
                    "&mrtre002=" + Admission.replace(/ /g,"+") +
                    "&extrtype=" + ExtrType.replace(/ /g,"+") +
                    "&mrtep003=" + UpdateValue
  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {
    ReturnCode.select();  }
}
//========================================================================
// Validate fields for Report 4 add and update templates
//========================================================================
function valChk03(code) {
  if (isWhitespace(UpdateForm.mrtre003.value) || isWhitespace(UpdateForm.mrtre004.value) ){
   alert("This field can't be used with blank discharge dates.");
    code.checked=0;
  }
}
//
function valChk05(code) {
  if (isWhitespace(AddForm.mrtre003.value) || isWhitespace(AddForm.mrtre004.value) ){
   alert("This field can't be used with blank discharge dates.");
    code.checked=0;
  }
}
//
function valSel03(code) {
  if (isWhitespace(UpdateForm.mrtre003.value) || isWhitespace(UpdateForm.mrtre004.value) ){
   alert("This field can't be used for blank discharge dates.");
    code.selectedIndex=0;
  }
}
//
function valSel05(code) {
  if (isWhitespace(AddForm.mrtre003.value) || isWhitespace(AddForm.mrtre004.value) ){
   alert("This field can't be used for blank discharge dates.");
    code.selectedIndex=0;
  }
}
//
function valFields02(code,name) {
  if (isWhitespace(AddForm.mrtre003.value) || isWhitespace(AddForm.mrtre004.value) ){
   alert("This field can't be used for blank discharge dates.");
   code.value="";
   name.value="";
  }
}
function valFields03(code,name) {
  if (isWhitespace(UpdateForm.mrtre003.value) || isWhitespace(UpdateForm.mrtre004.value) ){
   alert("This field can't be used for blank discharge dates.");
   code.value="";
   name.value="";
  }
}
function valFields05(code,name) {
  if (isWhitespace(AddForm.mrtre003.value) || isWhitespace(AddForm.mrtre004.value) ){
   alert("This field can't be used for blank discharge dates.");
   code.value="";
   name.value="";
  }
}
//
//
function SubmitUpdate() {
  if ((UpdateForm.mrtre003.value=="") &&
      
      (UpdateForm.mrtre005.value=="" )) {
    alert("Discharge or Visit Date Range must be entered!");
    return;
  }
  if (UpdateForm.mrtre003.value!="")  {
    if (!CheckDateRange(UpdateForm.mrtre003,UpdateForm.mrtre004))  {
       return; }
  }
  if (UpdateForm.mrtre005.value!="")  {
    if (!CheckDateRange(UpdateForm.mrtre005,UpdateForm.mrtre006))  {
       return; }
  }
  if (UpdateForm.mrtre031.value!="")  {
    if (!CheckDateRange(UpdateForm.mrtre031,UpdateForm.mrtre032))  {
       return; }
  }
//
//
  if (isWhitespace(UpdateForm.mrtre003.value) || isWhitespace(UpdateForm.mrtre004.value) ){
     if (!isWhitespace(document.UpdateForm.mrtre009.value)) {
       alert("Discharge Consultant can't be used with blank discharge dates.");
       return; } 
//
     if (!isWhitespace(document.UpdateForm.mrtre007.value)) {
       alert("Discharge Unit can't be used with blank discharge dates.");
       return; }
//
     if (!isWhitespace(document.UpdateForm.mrtre008.value)) {
       alert("Discharge Ward can't be used with blank discharge dates.");
       return; }
//
     if (document.UpdateForm.mrtre027.checked) {
       alert("Sameday Discharge can't be used with blank discharge dates.");
       return; }
//
     if (!isWhitespace(document.UpdateForm.mrtre013.value)) {
       alert("Disease Code 1 can't be used with blank discharge dates.");
       return; }
//
     if (!isWhitespace(document.UpdateForm.mrtre014.value)) {
       alert("Disease Code 2 can't be used with blank discharge dates.");
       return; }
//
     if (!isWhitespace(document.UpdateForm.mrtre015.value)) {
       alert("Disease Code 3 can't be used with blank discharge dates.");
       return; }
//
     if (!isWhitespace(document.UpdateForm.mrtre016.value)) {
       alert("Procedure Code 1 can't be used with blank discharge dates.");
       return; }
//
     if (!isWhitespace(document.UpdateForm.mrtre017.value)) {
       alert("Procedure Code 2 can't be used with blank discharge dates.");
       return; }
//
     if (!isWhitespace(document.UpdateForm.mrtre018.value)) {
       alert("Procedure Code 3 can't be used with blank discharge dates.");
       return; }
//
     if (!isWhitespace(document.UpdateForm.mrtre028.value)) {
       alert("Coder Id from can't be used with blank discharge dates.");
       return; }
//
     if (!isWhitespace(document.UpdateForm.mrtre029.value)) {
       alert("Coder Id to can't be used with blank discharge dates.");
       return; }
//
     if (!isWhitespace(document.UpdateForm.mrtre030.value)) {
       alert("Coder Snags can't be used with blank discharge dates.");
       return; }
//
     if (!isWhitespace(document.UpdateForm.mrtre031.value)) {
       alert("Coding Date From can't be used with blank discharge dates.");
       return; }
//
     if (!isWhitespace(document.UpdateForm.mrtre032.value)) {
       alert("Coding Date To can't be used with blank discharge dates.");
       return; }
//
 } 
  setFormactn('U');
}
//
function SubmitAdd() {
  if ((AddForm.mrtre003.value=="") &&                                            
      (AddForm.mrtre005.value=="" )) {
    alert("Discharge or Visit Date Range must be entered!");
    return;
  }
  if (AddForm.mrtre003.value!="")  {
    if (!CheckDateRange(AddForm.mrtre003,AddForm.mrtre004))  {
       return; }
  }
  if (AddForm.mrtre005.value!="")  {
    if (!CheckDateRange(AddForm.mrtre005,AddForm.mrtre006))  {
       return; }
  }
//
  if (isWhitespace(AddForm.mrtre003.value) || isWhitespace(AddForm.mrtre004.value) ){
     if (!isWhitespace(document.AddForm.mrtre009.value)) {
       alert("Discharge Consultant can't be used with blank discharge dates.");
       return; } 
//
     if (!isWhitespace(document.AddForm.mrtre007.value)) {
       alert("Discharge Unit can't be used with blank discharge dates.");
       return; }
//
     if (!isWhitespace(document.AddForm.mrtre008.value)) {
       alert("Discharge Ward can't be used with blank discharge dates.");
       return; }
//
     if (document.AddForm.mrtre027.checked) {
       alert("Sameday Discharge can't be used with blank discharge dates.");
       return; }
//
     if (!isWhitespace(document.AddForm.mrtre013.value)) {
       alert("Disease Code 1 can't be used with blank discharge dates.");
       return; }
//
     if (!isWhitespace(document.AddForm.mrtre014.value)) {
       alert("Disease Code 2 can't be used with blank discharge dates.");
       return; }
//
     if (!isWhitespace(document.AddForm.mrtre015.value)) {
       alert("Disease Code 3 can't be used with blank discharge dates.");
       return; }
//
     if (!isWhitespace(document.AddForm.mrtre016.value)) {
       alert("Procedure Code 1 can't be used with blank discharge dates.");
       return; }
//
     if (!isWhitespace(document.AddForm.mrtre017.value)) {
       alert("Procedure Code 2 can't be used with blank discharge dates.");
       return; }
//
     if (!isWhitespace(document.AddForm.mrtre018.value)) {
       alert("Procedure Code 3 can't be used with blank discharge dates.");
       return; }
//
     if (!isWhitespace(document.AddForm.mrtre028.value)) {
       alert("Coder Id from can't be used with blank discharge dates.");
       return; }
//
     if (!isWhitespace(document.AddForm.mrtre029.value)) {
       alert("Coder Id to can't be used with blank discharge dates.");
       return; }
//
     if (!isWhitespace(document.AddForm.mrtre030.value)) {
       alert("Coder Snags can't be used with blank discharge dates.");
       return; }
//
     if (!isWhitespace(document.AddForm.mrtre031.value)) {
       alert("Coding Date From can't be used with blank discharge dates.");
       return; }
//
     if (!isWhitespace(document.AddForm.mrtre032.value)) {
       alert("Codind Date To can't be used with blank discharge dates.");
       return; }
//
 } 
  document.AddForm.updttype.value="A";
  SubmitForm();
}
//
function EditList04(extrctid) {
  URL="mrtweb03.pbl?reportno=05&template=001&mrtre001=" + extrctid;
  parent.location.href=URL;
}
//
function PrintExtract(extrctid) {
  URL="mrtweb03.pbl?reportno=05&template=002&mrtre001=" + extrctid;
  Left=(document.body.clientWidth-450)/2
  DFrameLink(URL,20,Left,500,250);
}
function DisplayHosp() {
  if (document.AddForm.ibcnmhos.value!="1") {
    HospCode.innerHTML=transferblank.innerHTML;
    HospHeading.innerHTML="";
    document.AddForm.mrtme046.value="";
    document.getElementById('HospitalF').innerHTML=
    document.getElementById('ShowNoHospitalF').innerHTML
    document.getElementById('HospitalT').innerHTML=
    document.getElementById('ShowNoHospitalT').innerHTML
  } else {
    HospHeading.innerHTML=hosphd.innerHTML;
    HospCode.innerHTML=hospital.innerHTML;
    document.getElementById('HospitalF').innerHTML=
    document.getElementById('ShowHospitalF').innerHTML
    document.getElementById('HospitalT').innerHTML=
    document.getElementById('ShowHospitalT').innerHTML
  }
  SetMRTLocationF(AddForm);
  SetMRTLocationT(AddForm);
}
function DisplayHospUpdate() {
  if (document.UpdateForm.ibcnmhos.value!="1") {
    HospCode.innerHTML=transferblank.innerHTML;
    HospHeading.innerHTML="";
    document.UpdateForm.mrtme046.value="";
    document.getElementById('HospitalF').innerHTML=
    document.getElementById('ShowNoHospitalF').innerHTML
    document.getElementById('HospitalT').innerHTML=
    document.getElementById('ShowNoHospitalT').innerHTML
  } else {
    HospHeading.innerHTML=hosphd.innerHTML;
    HospCode.innerHTML=hospital.innerHTML;
    document.getElementById('HospitalF').innerHTML=
    document.getElementById('ShowHospitalF').innerHTML
    document.getElementById('HospitalT').innerHTML=
    document.getElementById('ShowHospitalT').innerHTML
  }
  SetMRTLocationF(UpdateForm);
  SetMRTLocationT(UpdateForm);
}
function SetMRTLocationF(theForm) {
 p=theForm;
 p.mrtre025.options.length=0;
 p.mrtre025.options[p.mrtre025.options.length]= new Option(" "," ");
 if(p.ibcnmhos.value==1) {
    MrtMultiHomeLocns(p.mrtre025,p.d_mrtre025.value,p.mrtre047.value)
    if(!isWhitespace(p.mrtre047.value)) {
      p.mrtre025.className="Mandatory";
    } else {
      p.mrtre025.className="";
    }
 } else {
    MrtHomeLocns(p.mrtre025,p.d_mrtre025.value)
 }
}
function SetMRTLocationT(theForm) {
 p=theForm;
 p.mrtre026.options.length=0;
 p.mrtre026.options[p.mrtre026.options.length]= new Option(" "," ");
 if(p.ibcnmhos.value==1) {
    MrtMultiHomeLocns(p.mrtre026,p.d_mrtre026.value,p.mrtre048.value)
    if(!isWhitespace(p.mrtre048.value)) {
      p.mrtre026.className="Mandatory";
    } else {
      p.mrtre026.className="";
    }
 } else {
    MrtHomeLocns(p.mrtre026,p.d_mrtre026.value)
 }
}

