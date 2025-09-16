//jsVersion  : V11.03.00
//========================================================================
// Program   : comweb01.js
//
// Function  : Standard Functions Used in comweb01  
//
// Version   :
//
// V9.03.00 05.07.2003 Lina Vo   41196
//          Created new.
//
//========================================================================
//
//========================================================================
//   Report 1
//========================================================================
function ShowDetail01(linkurl) {
  Left=(document.body.clientWidth-400)/2
  DFrameLink(linkurl,0,Left,400,250)
}
function EditCategory01() {
  if (isWhitespace(SelectCode.startkey.value)) return;
  var dummy="";
  var category=SelectCode.startkey;
  var inactflg=SelectCode.alwinact;
  var valddate=SelectCode.codedate;

  validateCommCC(category,inactflg,valddate,dummy,validateCommCC_SuccessReturnFn);
}
function validateCommCC_SuccessReturnFn() {
  SelectCode.template.value=3;
  SelectCode.cmcod001.value=SelectCode.startkey.value;
  Left=(document.body.clientWidth-400)/2;
  DFrameSubmit(SelectCode,0,Left,400,250);
}
function StartList01(category) {
location.href="comweb01.pbl?reportno=01&template=001&startkey="+category
}
function StartListName01(category) {
location.href="comweb01.pbl?reportno=01&template=004&startkey="+category
}
function CodeList01(category) {
  parent.location.href="comweb01.pbl?reportno=02&template=001&cmcod001=" +
                          category
  DFrameExit() 
}
function UpdateParent01(code,desc) {
  parent.ReturnCode.value=code
  parent.ReturnName.value=desc
  parent.PopUpScreen.style.display="none"
}
function StartList01005(category) {
location.href="comweb01.pbl?reportno=01&template=005&&norecord=8&startkey="+category
}
//========================================================================
//   Report 2
//========================================================================
function ShowDetail02(linkurl) {
  Left=(document.body.clientWidth-680)/2
  DFrameLink(linkurl,0,Left,680,300)
}
function EditCategory02() {
  if (isWhitespace(SelectCode.startkey.value)) return;
  var dummy="";
  SelectCode.catecode.value=SelectCode.cmcod001.value + 
                            SelectCode.startkey.value;
  category=SelectCode.catecode;
  inactflg=SelectCode.alwinact;
  valddate=SelectCode.codedate;
  if (validateCommCC(category,inactflg,valddate,dummy)) {
    SelectCode.template.value=3
    SelectCode.cmcod001.value=SelectCode.cmcod001.value
    SelectCode.cmcod002.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-680)/2
    DFrameSubmit(SelectCode,0,Left,680,300)
  }
}
function AddCode02(category) {
    SelectCode.template.value=2
    SelectCode.cmcod001.value=category
    Left=(document.body.clientWidth-680)/2
    DFrameSubmit(SelectCode,0,Left,680,300)
}
function ViewCat02(category) {
    SelectCode.reportno.value=1
    SelectCode.template.value=3
    SelectCode.cmcod001.value=category
    Left=(document.body.clientWidth-400)/2
    DFrameSubmit(SelectCode,0,Left,400,250)
}
function CodeList02(category) {
  location.href="comweb01.pbl?reportno=02&template=001&cmcod001="+category
}
function NameList02(category) {
  location.href="comweb01.pbl?reportno=02&template=004&cmcod001="+category
}
function StartList02(category) {
  location.href="comweb01.pbl?reportno=02&template=001&cmcod001="+category
}
function StartListName02(category) {
  location.href="comweb01.pbl?reportno=02&template=004&cmcod001="+category
}
