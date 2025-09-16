//jsVersion  : V11.03.00
//========================================================================
// Program   : cliweb07.js
//
// Written   : 08.02.2000 Pat Dirito
//
// Function  : Standard Functions Used in cliweb07 
//
// Version   : V5.07.00 08.02.2000 Pat Dirito 
//
//========================================================================
//========================================================================
//  Report 3 
//========================================================================
function ListResultCodes(Lab,Seg,Fld) {
 codeskey=Lab + Seg + Fld
 ListCodes="cliweb07.pbl?reportno=02&template=001" +
          "&codeskey="+codeskey.replace(/ /g,"+")
 parent.location.href=ListCodes
 DFrameExit() 
}
function EditResultCode(rsctakey) {
  SelectCode.template.value=2
  SelectCode.rsctakey.value=rsctakey
  Left=(document.body.clientWidth-450)/2
  DFrameSubmit(SelectCode,0,Left,450,300)
} 
function ShowDetail03(linkurl) {
  Left=(document.body.clientWidth-450)/2
  DFrameLink(linkurl,0,Left,450,125)
} 
function EditLookup03() {
    SelectCode.template.value=3
    SelectCode.hltab001.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-450)/2
    DFrameSubmit(SelectCode,0,Left,450,125)
}
function CodeList03(category) {
parent.location.href="cliweb07.pbl?reportno=04&template=001&hltab001="+category
DFrameExit()
}
//========================================================================
//  Report 4 
//========================================================================
function ShowDetail04(linkurl) {
  Left=(document.body.clientWidth-500)/2
  DFrameLink(linkurl,0,Left,500,410)
}
function EditLookup04() {
    SelectCode.template.value=3
    SelectCode.hltab001.value=SelectCode.hltab001.value
    SelectCode.hlcod001.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-500)/2
    DFrameSubmit(SelectCode,0,Left,500,410)
}
function Table04(category) {
    SelectCode.reportno.value=3
    SelectCode.template.value=3
    SelectCode.hltab001.value=category
    Left=(document.body.clientWidth-450)/2
    DFrameSubmit(SelectCode,0,Left,450,125)
}
function AddCode04(category) {
    SelectCode.reportno.value=4
    SelectCode.template.value=2
    SelectCode.hltab001.value=category
    Left=(document.body.clientWidth-500)/2
    DFrameSubmit(SelectCode,0,Left,500,410)
}
//========================================================================
//  Report 5 
//========================================================================
function ShowDetail05(linkurl) {
  Left=(document.body.clientWidth-450)/2
  DFrameLink(linkurl,0,Left,450,265)
}
function EditLookup05() {
  SelectCode.template.value=3
  SelectCode.resla001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-450)/2
  DFrameSubmit(SelectCode,0,Left,450,265)
}
//========================================================================
//  Report 6 
//========================================================================
function EditLookup06() {
    SelectCode.template.value=3
    SelectCode.respn001.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-350)/2
    DFrameSubmit(SelectCode,0,Left,350,200)
}
function ShowDetail06(linkurl) {
  Left=(document.body.clientWidth-350)/2
  DFrameLink(linkurl,0,Left,350,200)
}
