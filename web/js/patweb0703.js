//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb0703.js
//
// Written   : 17.06.2004 Jill Habasque
//
// Function  : Standard Functions Used in patweb07 report 3
//
// Version   : 
//
// V9.03.00  20.07.2004 Jill Habasque  CAR 44641
//           New Javascript
//========================================================================
function ShowDetail03(linkurl) {
  Left=(document.body.clientWidth-500)/2
  DFrameLink(linkurl,0,Left,520,350)
}
function EditLookup03() {
    SelectCode.template.value=3
    SelectCode.pmdaa001.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-420)/2
    DFrameSubmit(SelectCode,0,Left,420,250)
}
