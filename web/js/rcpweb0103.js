//jsVersion  : V11.03.00
//========================================================================
// Program   : rcpweb0103.js
//
// Written   : 06.11.2003 Pat Dirito
//
// Function  : Standard Functions Used in rcpweb0103 templates
//
// Version   : 
//
// V10.03.01 17.04.2012  J.Tan           CAR 252226
//           Made dframe size larger
// V9.03.02  13.01.2004  Lina Vo         CAR 44073
//           Made dframe size larger
// V9.03.01  04.12.2003  Ebon Clements   CAR 43981
//           Made dframe size larger
// V9.03.00  06.11.2003  Pat Dirito      43981
//           Javascript created
//
//========================================================================
//
//========================================================================
//   Report 3
//========================================================================
function ShowDetail(linkurl) {
  Left=(document.body.clientWidth-550)/2
  DFrameLink(linkurl,0,Left,550,350)
}
function Edit() {
    SelectCode.template.value=3
    SelectCode.rcpdr001.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-550)/2
    DFrameSubmit(SelectCode,0,Left,550,350)
}
