//jsVersion  : V11.03.00
//========================================================================
// Program   : casweb01.js
//
// Written   : 26.06.2000 Bronko sosic
//
// Function  : Standard Functions Used in casweb01 templates 
//
// Version   : V5.09.00 26.06.2000 Bronko Sosic
//
//========================================================================
//
//========================================================================
//  Report 1
//========================================================================
function ShowDetail01(linkurl) {
  Left=(document.body.clientWidth-520)/2
  DFrameLink(linkurl,0,Left,520,140)
}
function EditLookup01() {
  SelectCode.template.value=3
  SelectCode.cstef001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-490)/2
  DFrameSubmit(SelectCode,0,Left,490,140)
}
function AnalType01(episode) {
parent.location.href="casweb01.pbl?reportno=2&template=001&cssty001="+episode
DFrameExit()
}
function AnalMeas01(episode) {
parent.location.href="casweb01.pbl?reportno=4&template=001&csame001="+episode
DFrameExit()
}
//========================================================================
//  Report 2
//========================================================================
function ShowDetail02(linkurl) {
  Left=(document.body.clientWidth-520)/2
  DFrameLink(linkurl,0,Left,520,160)
}
function EditLookup02() {
  SelectCode.template.value=3
  SelectCode.cssty002.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-490)/2
  DFrameSubmit(SelectCode,0,Left,490,160)
}
function AnalCode02(episode,type) {
parent.location.href="casweb01.pbl?reportno=03&template=001&csxhd001="+episode+"&csxhd002="+type
DFrameExit()
}
//========================================================================
//  Report 3
//========================================================================
function ShowDetail03(linkurl) {
  Left=(document.body.clientWidth-520)/2
  DFrameLink(linkurl,0,Left,520,140)
}
function EditLookup03() {
  SelectCode.template.value=3
  SelectCode.csxhd003.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-520)/2
  DFrameSubmit(SelectCode,0,Left,520,140)
}
function AnalType03(episode,type) {
location.href="casweb01.pbl?reportno=02&template=001&cssty001="+episode+"&cssty002="+type
}
//========================================================================
//  Report 4
//========================================================================
function ShowDetail04(linkurl) {
  Left=(document.body.clientWidth-520)/2
  DFrameLink(linkurl,0,Left,520,240)
}
function EditLookup04() {
  SelectCode.template.value=3
  SelectCode.csame002.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-520)/2
  DFrameSubmit(SelectCode,0,Left,520,240)
}
//========================================================================
//  Report 5
//========================================================================
function ShowDetail05(linkurl) {
  Left=(document.body.clientWidth-520)/2
  DFrameLink(linkurl,0,Left,520,240)
}




