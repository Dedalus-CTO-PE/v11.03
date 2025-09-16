//jsVersion  : V11.03.00
//========================================================================
// Program   : comweb0504.js
//
// Written   : 13.07.2004 Pat Dirito
//
// Function  : Standard Functions Used in comweb0504  
//
// Version   :
//
// V9.03.00  : 13.07.2004  Pat Dirito  CAR 50842
//             Created Include   
//========================================================================
function ListDescVar() { 
  var p=document.SelectCode;
  location.href="comweb05.pbl?reportno=04&template=004" +
                "&ibvar001="  + p.ibvar001.value.replace(/ /g,"+")
}
function ListCodeVar() { 
  var p=document.SelectCode;
  location.href="comweb05.pbl?reportno=04&template=001" +
                "&ibvar001=" + p.ibvar001.value.replace(/ /g,"+")
}
function AddVar() {
  var p=document.SelectCode;
  var linkurl="comweb05.pbl?reportno=04&template=002" +
              "&ibvar001="  + p.ibvar001.value.replace(/ /g,"+")
  Left=(document.body.clientWidth-390)/2
  DFrameLink(linkurl,0,Left,390,180)
}
function ShowDetail(linkurl) {
  Left=(document.body.clientWidth-390)/2
  DFrameLink(linkurl,0,Left,390,180)
}
function EditVar() {
    SelectCode.template.value=3
    Left=(document.body.clientWidth-390)/2
    DFrameSubmit(SelectCode,0,Left,390,180)
}
