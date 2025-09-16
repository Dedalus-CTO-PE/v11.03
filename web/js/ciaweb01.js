//jsVersion  : V11.03.00
//========================================================================
//   Report 1
//========================================================================
//========================================================================
//   Report 2
//========================================================================
function ShowDetail02(linkurl) {
  Left=(document.body.clientWidth-490)/2
  DFrameLink02(linkurl,0,Left,490,360)
}
function DFrameLink02(LinkToUrl,FrameTop,FrameLeft,FrameWidth,FrameHeight) {
  DFrameStart()
  PopUpFrame.document.location.href=LinkToUrl
  PopUpScreen.style.top=FrameTop + document.body.scrollTop
  PopUpScreen.style.left=FrameLeft
  MaxWidth=document.width-FrameLeft
  MaxHeight=document.height-FrameTop
  if (FrameWidth>MaxWidth)   { PopUpScreen.style.width=MaxWidth }
                        else { PopUpScreen.style.width=FrameWidth }
  if (FrameHeight>MaxHeight) { PopUpScreen.style.height=MaxHeight }
                        else { PopUpScreen.style.height=FrameHeight }
  PopUpScreen.style.display=""
}
//========================================================================
//   Report 3
//========================================================================
function ShowDetail03(linkurl) {
  Left=(document.body.clientWidth-600)/2
  DFrameLink(linkurl,0,Left,600,330)
}
function EditLookup03() {
    SelectCode.template.value=3
    SelectCode.caext001.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-600)/2
    DFrameSubmit(SelectCode,0,Left,600,330)
}
//========================================================================
//   Report 4
//========================================================================
function ShowDetail04(linkurl) {
  Left=(document.body.clientWidth-390)/2
  DFrameLink(linkurl,0,Left,390,250)
}
function EditType04() {
    SelectCode.template.value=3
    SelectCode.catyp001.value=SelectCode.startkey.value
    SelectCode.validate.value=1
    Left=(document.body.clientWidth-390)/2
    DFrameSubmit(SelectCode,0,Left,390,250)
}
function CodeList04(type) {
  parent.location.href="ciaweb01.pbl?reportno=05&template=001&cacod001=" +
                          type
  DFrameExit()
}
//========================================================================
//   Report 5
//========================================================================
function submitForm(theForm) {
  if (validateMandatory(theForm)) {
    theForm.submit();
  }
}
function ShowDetail05(linkurl) {
  Left=(document.body.clientWidth-390)/2
  DFrameLink(linkurl,0,Left,390,180)
}
function EditType05() {
    SelectCode.template.value=3
    SelectCode.cacod002.value=SelectCode.startkey.value
    SelectCode.validate.value=1
    Left=(document.body.clientWidth-390)/2
    DFrameSubmit(SelectCode,0,Left,390,180)
}
function AddCode05(type) {
    SelectCode.template.value=2
    SelectCode.cacod001.value=type
    Left=(document.body.clientWidth-390)/2
    DFrameSubmit(SelectCode,0,Left,390,180)
}
function ViewType05(type) {
  linkurl="ciaweb01.pbl?reportno=04&template=003&catyp001=" + type
  ShowDetail04(linkurl);
}
function DescList05(type) {
  location.href="ciaweb01.pbl?reportno=05&template=004&cacod001="+type
}
function CodeList05(type) {
  location.href="ciaweb01.pbl?reportno=05&template=001&cacod001="+type
}
//========================================================================
//   Report 6
//========================================================================
function ShowList06(linkurl) {
  location.href=linkurl;
}
function AddCode06(type) {
    SelectCode.template.value=3
    SelectCode.caage001.value=type
    Left=(document.body.clientWidth-390)/2
    DFrameSubmit(SelectCode,0,Left,390,180)
}
function ShowDetail06(linkurl) {
  Left=(document.body.clientWidth-390)/2
  DFrameLink(linkurl,0,Left,390,180)
}
function EditType06() {
    SelectCode.template.value=4
    SelectCode.caage002.value=SelectCode.startkey.value
    SelectCode.validate.value=1
    Left=(document.body.clientWidth-390)/2
    DFrameSubmit(SelectCode,0,Left,390,180)
}
//========================================================================
//   Report 7
//========================================================================
function ShowList07(linkurl) {
  location.href=linkurl;
}
function StartList07(type) {
    location.href="ciaweb01.pbl?reportno=07&template=002&caprd001="+type
}
function AddCode07(type) {
    SelectCode.template.value=3
    SelectCode.caprd001.value=type
    Left=(document.body.clientWidth-390)/2
    DFrameSubmit(SelectCode,0,Left,390,220)
}
function ShowDetail07(linkurl) {
  Left=(document.body.clientWidth-390)/2
  DFrameLink(linkurl,0,Left,390,220)
}
//========================================================================
//   Report 8
//========================================================================
function ShowList08(linkurl) {
  location.href=linkurl;
}
function StartList08(type) {
    location.href="ciaweb01.pbl?reportno=08&template=002&caaad001="+type
}
function AddCode08(type) {
    SelectCode.template.value=3
    SelectCode.caaad001.value=type
    Left=(document.body.clientWidth-430)/2
    DFrameSubmit(SelectCode,0,Left,430,220)
}
function ShowDetail08(linkurl) {
  Left=(document.body.clientWidth-430)/2
  DFrameLink(linkurl,0,Left,430,220)
}
function EditType08() {
    SelectCode.template.value=4
    SelectCode.caaad002.value=SelectCode.startkey.value
    SelectCode.validate.value=1
    Left=(document.body.clientWidth-430)/2
    DFrameSubmit(SelectCode,0,Left,430,220)
}
//========================================================================
//   Report 9
//========================================================================
function ShowList09(maptype) {
  linkurl="ciaweb01.pbl?reportno=09&template=002&cainc001=" + maptype;
  location.href=linkurl;
}
function AddCode09(type) {
    SelectCode.template.value=3
    SelectCode.cainc001.value=type
    Left=(document.body.clientWidth-490)/2
    if (type==2) {
      DFrameSubmit(SelectCode,50,Left,490,250)
    }
    else {
      DFrameSubmit(SelectCode,50,Left,490,150)
    }
}
function ShowDetail09(linkurl) {
  Left=(document.body.clientWidth-490)/2
  DFrameLink(linkurl,50,Left,490,150)
}
function EditType09() {
    SelectCode.template.value=4
    SelectCode.cainc002.value=SelectCode.startkey.value
    SelectCode.validate.value=1
    Left=(document.body.clientWidth-490)/2
    DFrameSubmit(SelectCode,50,Left,490,150)
}
function ShowSpan09(type) {
  if (type.value==1) {
    MappingOptions.innerHTML=MiscGroup.innerHTML;
  }
  else if (type.value==2) {
    MappingOptions.innerHTML=MiscCode.innerHTML;
  }
  else if (type.value==3) {
    MappingOptions.innerHTML=JournalCode.innerHTML;
  }
  else if (type.value==4) {
    MappingOptions.innerHTML=Ward.innerHTML;
  }
  else if (type.value==5) {
    MappingOptions.innerHTML=AdmissionType.innerHTML;
  }
  else if (type.value==6) {
    MappingOptions.innerHTML=BedType.innerHTML;
  }
  else {
    MappingOptions.innerHTML="";
  }
}
function MiscSearch(misccode,miscdesc,multhosp) {
// Set ReturnNoBlur variable so updateParent skips execution of onBlur().
// Cannot use onBlur on fields within a Span, because it does not recognise it
  window.ReturnNoBlur=" ";
  DefMiscChargeSearchFrame(misccode,miscdesc,multhosp);
}
//------------------------------------------------------------
// Function : Standard Casemix Search Frame
//------------------------------------------------------------
function CasemixSearch(ReturnCode,ReturnName) {
  DFrameStart()
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  document.all.PopUpFrame.src="../lookups/CasemixSearch.html"
  SearchFrameShow()
}

