//jsVersion  : V11.03.00
//========================================================================
// Program   : rcpweb0102.js
//
// Written   : 20.10.2003 Pat Dirito
//
// Function  : Standard Functions Used in rcpweb0102 templates
//
// Version   : 
//
// V9.08.00  12.06.2007  Ebon Clements   142727
//           Increased DFrame size in ShowDetail() and EditReg()
// V9.03.00  05.11.2003  Pat Dirito      43983
//           Javascript created
//
//========================================================================
//
//========================================================================
//   Report 2
//========================================================================
function ShowDetail(linkurl) {
  Left=(document.body.clientWidth-580)/2
  DFrameLink(linkurl,0,Left,580,480)
}
function EditReg() {
    SelectCode.template.value=3
    SelectCode.regcp001.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-580)/2
    DFrameSubmit(SelectCode,0,Left,580,480)
}
