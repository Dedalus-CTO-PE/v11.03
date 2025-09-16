//jsVersion  : V11.03.00
//========================================================================
// Program   : comweb03.js
//
// Function  : Standard Functions Used in comweb03  
//
// Version   :
//
// V10.02.01 12.07.2011 Peter Vela    CAR 246347
//          Adjusted dframe height in ViewCat02()
// V9.07.01 13.07.2006 Ebon Clements CAR 103365
//          Added functions for report 5
// V9.04.01 07.06.2005 Davin   CAR 62379
//          Added functions for report 4 (HIC expl. codes)
// V9.03.00 19.03.2004 Davin   CAR 18702
//          Created new.
//
//========================================================================
//
//========================================================================
//   Report 1
//========================================================================
function ShowDetail01(linkurl,admin) {
  Left=(document.body.clientWidth-400)/2
  DFrameLink(linkurl,0,Left,400,250)
}
function EditGroup01() {
  if (isWhitespace(SelectCode.startkey.value)) return;
  SelectCode.template.value=3
  SelectCode.scgrp001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-400)/2
  DFrameSubmit(SelectCode,0,Left,400,250)
}
function UpdateParent01(code,desc) {
  parent.ReturnCode.value=code
  parent.ReturnName.value=desc
  parent.PopUpScreen.style.display="none"
}
function StartList01() {
  location.href="comweb03.pbl?reportno=01&template=001"
}
function StartListDesc01() {
  location.href="comweb03.pbl?reportno=01&template=004"
}
function CodeList012(group) {
  parent.location.href="comweb03.pbl?reportno=02&template=001&sccat001=" + group
  DFrameExit()
}
function CodeList013(group) {
  parent.location.href="comweb03.pbl?reportno=03&template=001&scusr001=" + group
  DFrameExit()
}
function GroupCatCodeList(group,cat) {
  parent.location.href="comweb03.pbl?reportno=05&template=001" +
                       "&sccod001=" + group.replace(/ /g,"+") +
                       "&sccod002=" + cat.replace(/ /g,"+");
  DFrameExit()
}
//========================================================================
//   Report 2
//========================================================================
function ShowDetail02(linkurl,disabled) {
  if (disabled=="1") {
    alert("Security groups cannot be edited.");
    return;
  }
  Left=(document.body.clientWidth-400)/2
  DFrameLink(linkurl,0,Left,400,250)
}
function EditCategory02() {
  if (isWhitespace(SelectCode.startkey.value)) return;
    SelectCode.template.value=3
    SelectCode.sccat001.value=SelectCode.sccat001.value
    SelectCode.sccat002.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-400)/2
    DFrameSubmit(SelectCode,0,Left,400,250)
}
function EditGroup02() {
  if (isWhitespace(SelectCode.startkey.value)) return;
  SelectCode.template.value=6
  SelectCode.sccat001.value=SelectCode.startkey.value
  SelectCode.sccat002.value=SelectCode.sccat002.value
  Left=(document.body.clientWidth-400)/2
  DFrameSubmit(SelectCode,0,Left,400,250)
}
function ViewCat02() {
  var p=document.SelectCode;
  linkurl="patweb91.pbl?reportno=01&template=003" +
                    "&ptcod001=" + p.sccat002.value.replace(/ /g,"+");
  Left=(document.body.clientWidth-390)/2
  DFrameLink(linkurl,0,Left,390,240)
}
function AddCode02(group) {
    SelectCode.template.value=2
    SelectCode.sccat001.value=group
    Left=(document.body.clientWidth-400)/2
    DFrameSubmit(SelectCode,0,Left,400,250)
}
function AddGroup02() {
  var p=document.SelectCode;
  linkurl="comweb03.pbl?reportno=02&template=005" +
                    "&sccat002=" + p.sccat002.value.replace(/ /g,"+");
  Left=(document.body.clientWidth-400)/2
  DFrameLink(linkurl,0,Left,400,250)
}
function ViewGrp02(group) {
    SelectCode.reportno.value=1
    SelectCode.template.value=3
    SelectCode.scgrp001.value=group
    Left=(document.body.clientWidth-400)/2
    DFrameSubmit(SelectCode,0,Left,400,250)
}
function StartList02(group) {
  location.href="comweb03.pbl?reportno=02&template=001&sccat001=" + group
}
function StartListDesc02(group) {
  location.href="comweb03.pbl?reportno=02&template=004&sccat001=" + group
}
//========================================================================
//   Report 3
//========================================================================
function ShowDetail03(linkurl) {
  Left=(document.body.clientWidth-400)/2
  DFrameLink(linkurl,0,Left,400,250)
}
function EditUserID03() {
  if (isWhitespace(SelectCode.startkey.value)) return;
    SelectCode.template.value=3
    SelectCode.scusr001.value=SelectCode.scusr001.value
    SelectCode.scusr002.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-400)/2
    DFrameSubmit(SelectCode,0,Left,400,250)
}
function AddCode03(group) {
    SelectCode.template.value=2
    SelectCode.scusr001.value=group
    Left=(document.body.clientWidth-400)/2
    DFrameSubmit(SelectCode,0,Left,400,250)
}
function AddGroup03() {
  var p=document.SelectCode;
  linkurl="comweb03.pbl?reportno=03&template=005" +
                    "&scusr002=" + p.scusr002.value.replace(/ /g,"+");
  Left=(document.body.clientWidth-400)/2
  DFrameLink(linkurl,0,Left,400,250)
}
function ViewGrp03(group) {
    SelectCode.reportno.value=1
    SelectCode.template.value=3
    SelectCode.scgrp001.value=group
    Left=(document.body.clientWidth-400)/2
    DFrameSubmit(SelectCode,0,Left,400,250)
}
function StartList03(group) {
  location.href="comweb03.pbl?reportno=03&template=001&scusr001=" + group
}
function StartListDesc03(group) {
  location.href="comweb03.pbl?reportno=03&template=004&scusr001=" + group
}
//========================================================================
//
function CheckCatg(catg,selectlist)  {
  var found=0;
 if (isWhitespace(catg.value)) {
    selectlist.selectedIndex=0;
    return; }
  for (var i =0 ; i < selectlist.length; i++) {
    if (selectlist.options[i].value.substr(0,2)==catg.value) {
      found=1
      selectlist.selectedIndex=i } }
  if (found==0) {
    alert("Invalid Category Entered")
    selectlist.selectedIndex=0
    catg.focus() }
}
function UpdateCatg(catg,selectlist) {
  catg.value=selectlist.value.substr(0,2);
}
//========================================================================
//
function CheckUser(user,selectlist)  {
  var found=0;
 if (isWhitespace(user.value)) {
    selectlist.selectedIndex=0;
    return; }
  for (var i =0 ; i < selectlist.length; i++) {
    if (selectlist.options[i].value.substr(0,10)==user.value) {
      found=1
      selectlist.selectedIndex=i } }
  if (found==0) {
    alert("Invalid User ID Entered")
    selectlist.selectedIndex=0
    user.focus() }
}
function UpdateUser(user,selectlist) {
  user.value=selectlist.value.substr(0,10);
}
//========================================================================
//
function CheckGroup(group,selectlist)  {
  var found=0;
 if (isWhitespace(group.value)) {
    selectlist.selectedIndex=0;
    return; }
  for (var i =0 ; i < selectlist.length; i++) {
    if (selectlist.options[i].value.substr(0,3)==group.value) {
      found=1
      selectlist.selectedIndex=i } }
  if (found==0) {
    alert("Invalid Security Group Entered")
    selectlist.selectedIndex=0
    group.focus() }
}
function UpdateGroup(group,selectlist) {
  group.value=selectlist.value.substr(0,3);
}
//========================================================================
//   Report 4
//========================================================================
function ShowDetail04(linkurl) {
  Left=(document.body.clientWidth-580)/2
  DFrameLink(linkurl,0,Left,580,200)
}
function EditLookup04() {
    SelectCode.template.value=3
    SelectCode.hcems001.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-580)/2
    DFrameSubmit(SelectCode,0,Left,580,200)
}
//========================================================================
//   Report 5
//========================================================================
function ShowDetail05(linkurl,disabled) {
  if (disabled=="1") {
    alert("Security groups cannot be edited.");
    return;
  }
  Left=(document.body.clientWidth-400)/2
  DFrameLink(linkurl,0,Left,400,250)
}
function ViewGrpCat05(group) {
  location.href="comweb03.pbl?reportno=02&template=001" +
                "&sccat001=" + group.replace(/ /g,"+") 
}
function EditGrpCategory05() {
  if (isWhitespace(SelectCode.startkey.value)) return;
    SelectCode.template.value=3
    SelectCode.sccod003.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-400)/2
    DFrameSubmit(SelectCode,0,Left,400,250)
}
function StartGrpList05(group,code) {
  location.href="comweb03.pbl?reportno=05&template=001" +
                "&sccod001=" + group.replace(/ /g,"+") +
                "&sccod002=" + code.replace(/ /g,"+");
}
function AddGroupCode05(group,code) {
    SelectCode.template.value=2
    SelectCode.sccod001.value=group
    SelectCode.sccod002.value=code
    Left=(document.body.clientWidth-400)/2
    DFrameSubmit(SelectCode,0,Left,400,250)
}
