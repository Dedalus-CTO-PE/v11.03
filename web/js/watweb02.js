//jsVersion  : V11.03.00
//========================================================================
// Program   : watweb02.js
//
// Written   : 19.05.2000 Bronko Sosic
//
// Function  : Standard Functions Used in watweb02 templates 
//
// Version   :V9.00.00 25.07.2001 HPS Bangalore 
//            V5.08.00 19.05.2000 Bronko Sosic
//
//========================================================================
//
//========================================================================
//  Report 1
//========================================================================
function ShowDetail01(linkurl) {
  Left=(document.body.clientWidth-380)/2
  DFrameLink(linkurl,0,Left,380,335)
}
function EditLookup01() {
  SelectCode.template.value=3
  SelectCode.wtpro001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-380)/2
  DFrameSubmit(SelectCode,0,Left,380,335)
}
function AddCod01(group) {
  SelectCode.reportno.value=1
  SelectCode.template.value=2
  SelectCode.wtpro005.value=group
  SelectCode.ptcod002.value=group
  Left=(document.body.clientWidth-380)/2
  DFrameSubmit(SelectCode,0,Left,380,335)
}
//========================================================================
//  Report 2
//========================================================================
function ShowDetail02(linkurl) {
  Left=(document.body.clientWidth-450)/2
  DFrameLink(linkurl,0,Left,450,225)
}
function EditLookup02() {
  SelectCode.template.value=3
  SelectCode.wtvwl001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-450)/2
  DFrameSubmit(SelectCode,0,Left,450,225)
}
function AddCod02(group) {
alert(group);
  SelectCode.reportno.value=2
  SelectCode.template.value=2
  SelectCode.wtvwl002.value=group
  SelectCode.ptcod002.value=group
  Left=(document.body.clientWidth-650)/2
  DFrameSubmit(SelectCode,0,Left,650,380)
}
function LookUp(validType,validName,validCode,validCat) {
  window.ValidateName=validName
  window.ValidateCode=validCode
  document.Lookup.valdtype.value=validType
  document.Lookup.valdcode.value=validCode.value
  document.Lookup.valcateg.value=validCat
  document.Lookup.target="newWindow"
  newWindow=open("","newWindow",
  "width=1,height=1,scrollbars=no,status=no,toolbar=no,menubar=no")
  document.Lookup.submit()
}
//========================================================================
//  Report 3
//========================================================================
function ShowDetail03(linkurl) {
  Left=(document.body.clientWidth-460)/2
  DFrameLink(linkurl,0,Left,460,395)
}
function EditLookup03() {
  SelectCode.template.value=3
  SelectCode.wtlet001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-460)/2
  DFrameSubmit(SelectCode,0,Left,460,395)
}

function AddLet03() {
  SelectCode.reportno.value=3
  SelectCode.template.value=2
  Left=(document.body.clientWidth-460)/2
  DFrameSubmit(SelectCode,0,Left,460,400)
}
function SetStartKey03() {
  var NewSK="  0";
  if(SelectCode.startkey.value!="") {
    LenSK=SelectCode.startkey.value.length
    switch(LenSK) {
      case 1: NewSK="  " + SelectCode.startkey.value;break;
      case 2: NewSK=" " + SelectCode.startkey.value;break;
      case 3: NewSK=SelectCode.startkey.value;break;
    }
  }
  SelectCode.startkey.value=NewSK
  document.SelectCode.submit()
}
.----------------------------------------------------------------
. Report 4
.-----------------------------------------------------------------
function ShowDetail04(linkurl) {
  Left=(document.body.clientWidth-280)/2
  DFrameLink(linkurl,0,Left,290,190)
}
function check1()
{
alert("kkr")
}
