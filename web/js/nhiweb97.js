//jsVersion  : V11.03.00
//========================================================================
// Program   : nhiweb97.js
//
// Written   : 14.02.2000 Pat Dirito
//
// Function  : Standard Functions Used in nhiweb97  
//
// Version   : V5.07.00 01.03.2000 Pat Dirito 
//
//========================================================================
//
//========================================================================
//   Report 1
//========================================================================
function ShowDetail01(linkurl) {
  Left=(document.body.clientWidth-400)/2
  DFrameLink(linkurl,0,Left,400,130)
}
function EditLookup01() {
  SelectCode.template.value=3
  SelectCode.nhrel001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-400)/2
  DFrameSubmit(SelectCode,0,Left,400,130)
}
//========================================================================
//   Report 2
//========================================================================
function ShowDetail02(linkurl) {
  Left=(document.body.clientWidth-400)/2
  DFrameLink(linkurl,0,Left,400,130)
}
function EditLookup02() {
  SelectCode.template.value=3
  SelectCode.nheth001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-400)/2
  DFrameSubmit(SelectCode,0,Left,400,130)
}
//========================================================================
//   Report 3
//========================================================================
function ShowDetail03(linkurl) {
  Left=(document.body.clientWidth-400)/2
  DFrameLink(linkurl,0,Left,400,130)
}
function EditLookup03() {
  SelectCode.template.value=3
  SelectCode.nhdcd001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-400)/2
  DFrameSubmit(SelectCode,0,Left,400,130)
}
//========================================================================
//   Report 4
//========================================================================
function ShowDetail04(linkurl) {
  Left=(document.body.clientWidth-400)/2
  DFrameLink(linkurl,0,Left,400,130)
}
function EditLookup04() {
  SelectCode.template.value=3
  SelectCode.nhdmc001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-400)/2
  DFrameSubmit(SelectCode,0,Left,400,130)
}
