//jsVersion  : V11.03.00
//========================================================================
// Program   : comweb05.js
//
// Written   : 18.06.2000 Pat Dirito
//
// Function  : Standard Functions Used in comweb05  
//
//========================================================================
function ShowDetail01(linkurl) {
  Left=(document.body.clientWidth-800)/2
  DFrameLink(linkurl,0,Left,800,320)
}
function Layout() {
  var p=document.UpdateForm;
  parent.location.href="comweb05.pbl?reportno=02&template=001&" +
                "ibtmd001=" + p.ibtmh001.value.replace(/ /g,"+")
}
function Copy() {
  var p=document.UpdateForm;
  var linkurl="comweb05.pbl?reportno=01&template=005&" +
              "ibtmh001=" + p.ibtmh001.value.replace(/ /g,"+")
  Left=(document.body.clientWidth-340)/2
  DFrameLink(linkurl,0,Left,340,290)
}
function EditTemplate() {
  SelectCode.template.value=3
  SelectCode.ibtmh001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-800)/2
  DFrameSubmit(SelectCode,0,Left,800,320)
}
