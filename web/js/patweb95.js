//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb95.js
//
// Written   : 18.02.2000 Pat Dirito
//
// Function  : Standard Functions Used in patweb95  
//
// Version   : V9.06.01 13.06.2006 Sunil CAR 108454
//             Increased the height of the Dframe to 370 
// Version   : V5.07.01 18.02.2000 Pat Dirito 
//
//========================================================================
//
//========================================================================
//   Report 2
//========================================================================
function UpdateParent02(code,desc) {
  parent.ReturnCode.value=code
  parent.ReturnName.value=desc
  parent.PopUpScreen.style.display="none"
}
//========================================================================
//   Report 4
//========================================================================
function ShowDetail04(linkurl) {
  Left=(document.body.clientWidth-420)/2
  DFrameLink(linkurl,0,Left,420,347)
}
function StartList04(category) {
location.href="patweb95.pbl?reportno=04&template=001&startkey="+category
self.close();
}
function EditWard04() {
  SelectCode.template.value=3
  SelectCode.ptwrd001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-420)/2
  DFrameSubmit(SelectCode,0,Left,420,347)
}
