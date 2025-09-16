//jsVersion  : V11.03.00
//========================================================================
// Program   : ciaweb02.js
//
// Written   : 12.01.2004 Ebon Clements
//
// Function  : Standard Functions Used in ciaweb02 templates
//
// Version   : 
//
// V9.04.01   16.11.2005  Ebon Clements               CAR 71242
//            Added filename.focus() to CheckFile
// V9.04.00   19.05.2005  Ebon Clements               CAR 76890
//            Added ShowDetailWarn02
// V9.03.03   14.05.2004  Ebon Clements               CAR 49573
//            Added CheckFile
// V9.03.02   21.04.2004  Ebon Clements               CAR 45489
//            Added PowerPlay functions
// V9.03.01   12.03.2004  Ebon Clements               CAR 46515
//            Added CancelExtract07 and Extract07
// V9.03.00   12.01.2004  Ebon Clements               CAR 45487
//            Created Include
//
//========================================================================
//
//========================================================================
//   Report 1
//========================================================================
//========================================================================
//   Report 2
//========================================================================
function ShowDetail02(linkurl) {
 location.href=linkurl;
}
function ShowDetailWarn02(linkurl,stat) {
 if(stat=="1") {
   alert("Warning - Extract Files not generated");
 } else if(stat=="2") {
   alert("Warning - Extract Generation Error");
 } 
 location.href=linkurl;
}
function AddDetail02(linkurl) {
  Left=(document.body.clientWidth-550)/2
  DFrameLink(linkurl,0,Left,550,450)
}
function AddExtract02() {
  if(!validateMandatory(AddForm)) {
   return;
  }
//
  if(document.AddForm.d_cscea008.checked==true) {
     document.AddForm.cscea008.value="1";
  } else {
     document.AddForm.cscea008.value="0";
  }
//
  if(document.AddForm.d_cscea019.checked==true) {
     document.AddForm.cscea019.value="1";
  } else {
     document.AddForm.cscea019.value="0";
  }
//
  if (!CheckDateRange(document.AddForm.cscea004,document.AddForm.cscea005)) { 
       return;
  }
  if (!CheckDateRange(document.AddForm.cscea006,document.AddForm.cscea007)) { 
       return;
  }
//
  document.AddForm.redirect.value="ciaweb02.pbl?reportno=04&template=001" +
          "&extracid=" + document.AddForm.extracid.value
//
  AddForm.submit();
}
function CheckID02() {
 checkid=document.AddForm.extracid.value.search('[^a-zA-Z0-9]');
 if (checkid >= 0) {
   alert("Extract ID can only be alphanumeric!");
   document.AddForm.extracid.value="";
   document.AddForm.extracid.focus();
   return;
 }
}
function DelExtract02() {
  ans=confirm("Are you sure you want to Delete ?")
  if(ans){ 
    document.UpdateForm.updttype.value="D";
    document.UpdateForm.redirect.value="ciaweb02.pbl?reportno=2&template=001"
    document.UpdateForm.submit() 
   }
}
function CancelExt02() {
  location.href="ciaweb02.pbl?reportno=4&template=001" +
                "&extracid=" + UpdateForm.extracid.value 
}
function UpdExtract02() {
 if(!validateMandatory(UpdateForm)) {
  return;
 }
//
 if(document.UpdateForm.d_cscea008.checked==true) {
    document.UpdateForm.cscea008.value="1";
 } else {
    document.UpdateForm.cscea008.value="0";
 }
//
 if(document.UpdateForm.d_cscea019.checked==true) {
    document.UpdateForm.cscea019.value="1";
 } else {
    document.UpdateForm.cscea019.value="0";
 }
//
 if(!CheckDateRange(document.UpdateForm.cscea004,document.UpdateForm.cscea005)){
 
      return;
 }
 if(!CheckDateRange(document.UpdateForm.cscea006,document.UpdateForm.cscea007)){
 
      return;
 }
//
  document.UpdateForm.redirect.value="ciaweb02.pbl?reportno=4&template=001" +
                                     "&extracid=" + UpdateForm.extracid.value 
  document.UpdateForm.updttype.value="U";
  UpdateForm.submit();
}
//------------------------------------------------------------
// Check Range Values
// Blank from is equal to start and blank to is equal to end
// so range tests can be ignored.
//------------------------------------------------------------
function CheckRange03(FromInput,ToInput) {
  if (isWhitespace(FromInput.value)) {
    return true;
  }
  if (isWhitespace(ToInput.value)) {
    return true;
  }
  if (FromInput.value > ToInput.value) {
    alert("Invalid Range Entered " + FromInput.title + " " + ToInput.title);
    ToInput.select();
    ToInput.focus();
    return false }
  else {
    return true }
}
function UpdRange05() {
 if(!validateMandatory(UpdateForm)) {
  return;
 }
//
 if(!CheckRange03(UpdateForm.cscex003,UpdateForm.cscex004)) { return }
 if(!CheckRange03(UpdateForm.cscex006,UpdateForm.cscex007)) { return }
 if(!CheckRange03(UpdateForm.cscex009,UpdateForm.cscex010)) { return }
 if(!CheckRange03(UpdateForm.cscex012,UpdateForm.cscex013)) { return }
 if(!CheckRange03(UpdateForm.cscex015,UpdateForm.cscex016)) { return }
 if(!CheckRange03(UpdateForm.cscex018,UpdateForm.cscex019)) { return }
 if(!CheckRange03(UpdateForm.cscex021,UpdateForm.cscex022)) { return }
 if(!CheckRange03(UpdateForm.cscex024,UpdateForm.cscex025)) { return }
 if(!CheckRange03(UpdateForm.cscex027,UpdateForm.cscex028)) { return }
 if(!CheckRange03(UpdateForm.cscex030,UpdateForm.cscex031)) { return }
//
  document.UpdateForm.redirect.value="ciaweb02.pbl?reportno=4&template=001" +
                                     "&extracid=" + UpdateForm.extracid.value
  document.UpdateForm.updttype.value="A";
  UpdateForm.submit();
}
function DelRange05() {
  ans=confirm("Are you sure you want to Delete ?")
  if(ans){
    document.UpdateForm.updttype.value="D";
    document.UpdateForm.redirect.value="ciaweb02.pbl?reportno=4&template=001" +
                                     "&extracid=" + UpdateForm.extracid.value
    document.UpdateForm.submit()
   }
}
function CancelRange05() {
  location.href="ciaweb02.pbl?reportno=4&template=001" +
                "&extracid=" + UpdateForm.extracid.value
}
function DelAnal06() {
  ans=confirm("Are you sure you want to Delete ?")
  if(ans){
    document.UpdateForm.updttype.value="D";
    document.UpdateForm.redirect.value="ciaweb02.pbl?reportno=4&template=001" +
                "&extracid=" + UpdateForm.extracid.value
    document.UpdateForm.submit()
   }
}
function CancelAnal06() {
  location.href="ciaweb02.pbl?reportno=4&template=001" +
                "&extracid=" + UpdateForm.extracid.value
}
function UpdAnal06() {
 if(!validateMandatory(UpdateForm)) {
  return;
 }
//
 if(document.UpdateForm.d_cseya002.checked==true) {
    document.UpdateForm.cseya002.value="1";
 } else {
    document.UpdateForm.cseya002.value="0";
 }
 if(document.UpdateForm.d_cseya003.checked==true) {
    document.UpdateForm.cseya003.value="1";
 } else {
    document.UpdateForm.cseya003.value="0";
 }
 if(document.UpdateForm.d_cseya004.checked==true) {
    document.UpdateForm.cseya004.value="1";
 } else {
    document.UpdateForm.cseya004.value="0";
 }
 if(document.UpdateForm.d_cseya005.checked==true) {
    document.UpdateForm.cseya005.value="1";
 } else {
    document.UpdateForm.cseya005.value="0";
 }
 if(document.UpdateForm.d_cseya006.checked==true) {
    document.UpdateForm.cseya006.value="1";
 } else {
    document.UpdateForm.cseya006.value="0";
 }
 if(document.UpdateForm.d_cseya007.checked==true) {
    document.UpdateForm.cseya007.value="1";
 } else {
    document.UpdateForm.cseya007.value="0";
 }
 if(document.UpdateForm.d_cseya008.checked==true) {
    document.UpdateForm.cseya008.value="1";
 } else {
    document.UpdateForm.cseya008.value="0";
 }
 if(document.UpdateForm.d_cseya009.checked==true) {
    document.UpdateForm.cseya009.value="1";
 } else {
    document.UpdateForm.cseya009.value="0";
 }
 if(document.UpdateForm.d_cseya010.checked==true) {
    document.UpdateForm.cseya010.value="1";
 } else {
    document.UpdateForm.cseya010.value="0";
 }
 if(document.UpdateForm.d_cseya011.checked==true) {
    document.UpdateForm.cseya011.value="1";
 } else {
    document.UpdateForm.cseya011.value="0";
 }
 if(document.UpdateForm.d_cseya012.checked==true) {
    document.UpdateForm.cseya012.value="1";
 } else {
    document.UpdateForm.cseya012.value="0";
 }
 if(document.UpdateForm.d_cseya013.checked==true) {
    document.UpdateForm.cseya013.value="1";
 } else {
    document.UpdateForm.cseya013.value="0";
 }
 if(document.UpdateForm.d_cseya014.checked==true) {
    document.UpdateForm.cseya014.value="1";
 } else {
    document.UpdateForm.cseya014.value="0";
 }
//
  document.UpdateForm.redirect.value="ciaweb02.pbl?reportno=4&template=001" +
                                     "&extracid=" + UpdateForm.extracid.value
  document.UpdateForm.updttype.value="A";
  UpdateForm.submit();
}
function CancelCon07() {
  location.href="ciaweb02.pbl?reportno=4&template=001" +
                "&extracid=" + UpdateForm.extracid.value
}
function ProsCon07() {
 if(!validateMandatory(UpdateForm)) {
  return;
 }
  document.UpdateForm.redirect.value="ciaweb02.pbl?reportno=4&template=001" +
                                     "&extracid=" + UpdateForm.extracid.value
  document.UpdateForm.updttype.value="S";
  UpdateForm.submit();
}
function CancelTrim07() {
  location.href="ciaweb02.pbl?reportno=4&template=001" +
                "&extracid=" + UpdateForm.extracid.value
}
function ProsTrim07() {
 if(!validateMandatory(UpdateForm)) {
  return;
 }
  if(document.UpdateForm.d_trimmx04.checked==true) {
     document.UpdateForm.trimmx04.value="1";
  } else {
     document.UpdateForm.trimmx04.value="0";
  }
  document.UpdateForm.redirect.value="ciaweb02.pbl?reportno=4&template=001" +
                                     "&extracid=" + UpdateForm.extracid.value
  document.UpdateForm.updttype.value="T";
  UpdateForm.submit();
}
function SetPercent07() {
  if(document.UpdateForm.d_trimmx04.checked==true) {
    document.UpdateForm.trimmx05.className="Readonly";
    document.UpdateForm.trimmx05.readOnly=true;
    document.UpdateForm.trimmx05.value="";
  } else {
    document.UpdateForm.trimmx05.className="Mandatory Number";
    document.UpdateForm.trimmx05.readOnly=false;
  }
}
function CancelExtract07() {
  location.href="ciaweb02.pbl?reportno=4&template=001" +
                "&extracid=" + UpdateForm.extracid.value
}
function Extract07() {
 if(!validateMandatory(UpdateForm)) {
  return;
 }
  document.UpdateForm.redirect.value="ciaweb02.pbl?reportno=4&template=001" +
                                     "&extracid=" + UpdateForm.extracid.value
  document.UpdateForm.updttype.value="E";
  UpdateForm.submit();
}
function ShowDetail08(linkurl) {
  Left=(document.body.clientWidth-750)/2
  DFrameLink(linkurl,0,Left,750,550)
}
function AddDetail08(linkurl) {
  Left=(document.body.clientWidth-750)/2
  DFrameLink(linkurl,0,Left,750,550)
}
function AddPower08() {
  if(!validateMandatory(AddForm)) {
   return;
  }
 if(document.AddForm.d_csppy014.checked==true) {
    document.AddForm.csppy014.value="1";
 } else {
    document.AddForm.csppy014.value="0";
 }
 if(document.AddForm.d_csppy015.checked==true) {
    document.AddForm.csppy015.value="1";
 } else {
    document.AddForm.csppy015.value="0";
 }
 if(document.AddForm.d_csppy016.checked==true) {
    document.AddForm.csppy016.value="1";
 } else {
    document.AddForm.csppy016.value="0";
 }
 if(document.AddForm.d_csppy017.checked==true) {
    document.AddForm.csppy017.value="1";
 } else {
    document.AddForm.csppy017.value="0";
 }
 if(document.AddForm.d_csppy018.checked==true) {
    document.AddForm.csppy018.value="1";
 } else {
    document.AddForm.csppy018.value="0";
 }
 if(document.AddForm.d_csppy022.checked==true) {
    document.AddForm.csppy022.value="1";
 } else {
    document.AddForm.csppy022.value="0";
 }
 if(document.AddForm.d_csppy023.checked==true) {
    document.AddForm.csppy023.value="1";
 } else {
    document.AddForm.csppy023.value="0";
 }
 if(document.AddForm.d_csppy024.checked==true) {
    document.AddForm.csppy024.value="1";
 } else {
    document.AddForm.csppy024.value="0";
 }
 if(document.AddForm.d_csppy028.checked==true) {
    document.AddForm.csppy028.value="1";
 } else {
    document.AddForm.csppy028.value="0";
 }
 if(document.AddForm.d_csppy029.checked==true) {
    document.AddForm.csppy029.value="1";
 } else {
    document.AddForm.csppy029.value="0";
 }
 if(confirm("Generate PowerPlay analysis files now?")) {
   document.AddForm.genpower.value="1"; 
 } 
 AddForm.submit();
}
function UpdPower08() {
 if(!validateMandatory(UpdateForm)) {
  return;
 }
 if(document.UpdateForm.d_csppy014.checked==true) {
    document.UpdateForm.csppy014.value="1";
 } else {
    document.UpdateForm.csppy014.value="0";
 }
 if(document.UpdateForm.d_csppy015.checked==true) {
    document.UpdateForm.csppy015.value="1";
 } else {
    document.UpdateForm.csppy015.value="0";
 }
 if(document.UpdateForm.d_csppy016.checked==true) {
    document.UpdateForm.csppy016.value="1";
 } else {
    document.UpdateForm.csppy016.value="0";
 }
 if(document.UpdateForm.d_csppy017.checked==true) {
    document.UpdateForm.csppy017.value="1";
 } else {
    document.UpdateForm.csppy017.value="0";
 }
 if(document.UpdateForm.d_csppy018.checked==true) {
    document.UpdateForm.csppy018.value="1";
 } else {
    document.UpdateForm.csppy018.value="0";
 }
 if(document.UpdateForm.d_csppy022.checked==true) {
    document.UpdateForm.csppy022.value="1";
 } else {
    document.UpdateForm.csppy022.value="0";
 }
 if(document.UpdateForm.d_csppy023.checked==true) {
    document.UpdateForm.csppy023.value="1";
 } else {
    document.UpdateForm.csppy023.value="0";
 }
 if(document.UpdateForm.d_csppy024.checked==true) {
    document.UpdateForm.csppy024.value="1";
 } else {
    document.UpdateForm.csppy024.value="0";
 }
 if(document.UpdateForm.d_csppy028.checked==true) {
    document.UpdateForm.csppy028.value="1";
 } else {
    document.UpdateForm.csppy028.value="0";
 }
 if(document.UpdateForm.d_csppy029.checked==true) {
    document.UpdateForm.csppy029.value="1";
 } else {
    document.UpdateForm.csppy029.value="0";
 }
 if(confirm("Generate PowerPlay analysis files now?")) {
   document.UpdateForm.genpower.value="1";
 }
 document.UpdateForm.updttype.value="U";
 UpdateForm.submit();
}
function DelPower08() {
  ans=confirm("Are you sure you want to Delete ?")
  if(ans){
    document.UpdateForm.updttype.value="D";
    document.UpdateForm.submit()
   }
}
function zeroFill1(theField) {
  if(isWhitespace(theField.value)) {
    return;
  } 
  theField.value=theField.value + "00000000";
  theField.value=theField.value.substr(0,8);
}
function TimeDimsA() {
  if(document.AddForm.csppy004.value=="0") {
    document.AddForm.dummy001.value="";
    document.AddForm.dummy002.value="";
    document.AddForm.dummy003.value="";
    document.AddForm.dummy004.value="";
    document.AddForm.dummy005.value="";
    document.AddForm.csppy009.value="";
    document.AddForm.csppy010.value="";
    document.AddForm.csppy011.value="";
    document.AddForm.csppy012.value="";
    document.AddForm.csppy013.value="";
    document.AddForm.csppy013.className="Readonly";
    document.AddForm.csppy013.readOnly=true;
  } else {
    document.AddForm.dummy001.value="Time Period Analysis ";
    document.AddForm.dummy002.value="";
    document.AddForm.dummy003.value="";
    document.AddForm.dummy004.value="";
    document.AddForm.dummy005.value="";
    document.AddForm.csppy009.value="All Years";
    document.AddForm.csppy010.value="";
    document.AddForm.csppy011.value="";
    document.AddForm.csppy012.value="";
    document.AddForm.csppy013.value="";
    document.AddForm.csppy013.className="";
    document.AddForm.csppy013.readOnly=false;
  }
  SetDim1A();
  SetDim2A();
  SetDim3A();
  SetDim4A();
}
function SetDim1A() {
  if(document.AddForm.csppy004.value!="0") {
    if(!isWhitespace(document.AddForm.d_csppy003.value)) {
      document.AddForm.dummy002.value=document.AddForm.d_csppy003.value;
      document.AddForm.csppy010.value= "All " + 
      document.AddForm.extlevel.value;
    }
  } else {
    if(!isWhitespace(document.AddForm.d_csppy003.value)) {
      document.AddForm.dummy001.value=document.AddForm.d_csppy003.value;
      document.AddForm.csppy009.value= "All " + 
      document.AddForm.extlevel.value;
    }
  }
}
function SetDim2A() {
  if(document.AddForm.csppy004.value!="0") {
    if(!isWhitespace(document.AddForm.d_csppy006.value)) {
      document.AddForm.dummy003.value=document.AddForm.d_csppy006.value;
      document.AddForm.csppy011.value= "All " + 
      document.AddForm.d_csppy006.value;
    }
  } else {
    if(!isWhitespace(document.AddForm.d_csppy006.value)) {
      document.AddForm.dummy002.value=document.AddForm.d_csppy006.value;
      document.AddForm.csppy010.value= "All " + 
      document.AddForm.d_csppy006.value;
    }
  }
}
function SetDim3A() {
  if(document.AddForm.csppy004.value!="0") {
    if(!isWhitespace(document.AddForm.d_csppy007.value)) {
      document.AddForm.dummy004.value=document.AddForm.d_csppy007.value;
      document.AddForm.csppy012.value= "All " + 
      document.AddForm.d_csppy007.value;
    }
  } else {
    if(!isWhitespace(document.AddForm.d_csppy007.value)) {
      document.AddForm.dummy003.value=document.AddForm.d_csppy007.value;
      document.AddForm.csppy011.value= "All " + 
      document.AddForm.d_csppy007.value;
    }
  }
}
function SetDim4A() {
  if(document.AddForm.csppy004.value!="0") {
    if(!isWhitespace(document.AddForm.d_csppy008.value)) {
      document.AddForm.dummy005.value=document.AddForm.d_csppy008.value;
      document.AddForm.csppy013.value= "All " + 
      document.AddForm.d_csppy008.value;
    }
  } else {
    if(!isWhitespace(document.AddForm.d_csppy008.value)) {
      document.AddForm.dummy004.value=document.AddForm.d_csppy008.value;
      document.AddForm.csppy012.value= "All " + 
      document.AddForm.d_csppy008.value;
    }
  }
}
function TimeDimsU() {
  if(document.UpdateForm.csppy004.value=="0") {
    document.UpdateForm.dummy001.value="";
    document.UpdateForm.dummy002.value="";
    document.UpdateForm.dummy003.value="";
    document.UpdateForm.dummy004.value="";
    document.UpdateForm.dummy005.value="";
    document.UpdateForm.csppy009.value="";
    document.UpdateForm.csppy010.value="";
    document.UpdateForm.csppy011.value="";
    document.UpdateForm.csppy012.value="";
    document.UpdateForm.csppy013.value="";
    document.UpdateForm.csppy013.className="Readonly";
    document.UpdateForm.csppy013.readOnly=true;
  } else {
    document.UpdateForm.dummy001.value="Time Period Analysis ";
    document.UpdateForm.dummy002.value="";
    document.UpdateForm.dummy003.value="";
    document.UpdateForm.dummy004.value="";
    document.UpdateForm.dummy005.value="";
    document.UpdateForm.csppy009.value="All Years";
    document.UpdateForm.csppy010.value="";
    document.UpdateForm.csppy011.value="";
    document.UpdateForm.csppy012.value="";
    document.UpdateForm.csppy013.value="";
    document.UpdateForm.csppy013.className="";
    document.UpdateForm.csppy013.readOnly=false;
  }
  SetDim1U();
  SetDim2U();
  SetDim3U();
  SetDim4U();
}
function SetDim1U() {
  if(document.UpdateForm.csppy004.value!="0") {
    if(!isWhitespace(document.UpdateForm.d_csppy003.value)) {
      document.UpdateForm.dummy002.value=document.UpdateForm.d_csppy003.value;
      document.UpdateForm.csppy010.value= "All " + 
      document.UpdateForm.extlevel.value;
    }
  } else {
    if(!isWhitespace(document.UpdateForm.d_csppy003.value)) {
      document.UpdateForm.dummy001.value=document.UpdateForm.d_csppy003.value;
      document.UpdateForm.csppy009.value= "All " + 
      document.UpdateForm.extlevel.value;
    }
  }
}
function SetDim2U() {
  if(document.UpdateForm.csppy004.value!="0") {
    if(!isWhitespace(document.UpdateForm.d_csppy006.value)) {
      document.UpdateForm.dummy003.value=document.UpdateForm.d_csppy006.value;
      document.UpdateForm.csppy011.value= "All " + 
      document.UpdateForm.d_csppy006.value;
    }
  } else {
    if(!isWhitespace(document.UpdateForm.d_csppy006.value)) {
      document.UpdateForm.dummy002.value=document.UpdateForm.d_csppy006.value;
      document.UpdateForm.csppy010.value= "All " + 
      document.UpdateForm.d_csppy006.value;
    }
  }
}
function SetDim3U() {
  if(document.UpdateForm.csppy004.value!="0") {
    if(!isWhitespace(document.UpdateForm.d_csppy007.value)) {
      document.UpdateForm.dummy004.value=document.UpdateForm.d_csppy007.value;
      document.UpdateForm.csppy012.value= "All " + 
      document.UpdateForm.d_csppy007.value;
    }
  } else {
    if(!isWhitespace(document.UpdateForm.d_csppy007.value)) {
      document.UpdateForm.dummy003.value=document.UpdateForm.d_csppy007.value;
      document.UpdateForm.csppy011.value= "All " + 
      document.UpdateForm.d_csppy007.value;
    }
  }
}
function SetDim4U() {
  if(document.UpdateForm.csppy004.value!="0") {
    if(!isWhitespace(document.UpdateForm.d_csppy008.value)) {
      document.UpdateForm.dummy005.value=document.UpdateForm.d_csppy008.value;
      document.UpdateForm.csppy013.value= "All " + 
      document.UpdateForm.d_csppy008.value;
    }
  } else {
    if(!isWhitespace(document.UpdateForm.d_csppy008.value)) {
      document.UpdateForm.dummy004.value=document.UpdateForm.d_csppy008.value;
      document.UpdateForm.csppy012.value= "All " + 
      document.UpdateForm.d_csppy008.value;
    }
  }
}
function CancelLMerge07() {
  location.href="ciaweb02.pbl?reportno=4&template=001" +
                "&extracid=" + UpdateForm.extracid.value
}
function LMerge07() {
 if(!validateMandatory(UpdateForm)) {
  return;
 }
  document.UpdateForm.redirect.value="ciaweb02.pbl?reportno=4&template=001" +
                                     "&extracid=" + UpdateForm.extracid.value
  document.UpdateForm.updttype.value="M";
  UpdateForm.submit();
}
function CheckFile(filename) {
 if(filename.value.search('[.]') != -1) {
    alert("The file name does not require an extension");
    filename.focus();
 }
}
