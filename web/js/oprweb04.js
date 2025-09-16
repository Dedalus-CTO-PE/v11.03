//jsVersion  : V11.03.00
//========================================================================
// Program   : oprweb04.js
//
// Written   : 29.02.2000 Pat Dirito
//
// Function  : Standard Functions Used in oprweb04 templates 
//
// Version   : V11.02.01 
//
//========================================================================
//------------------------------------------------------------
// Function : Nurse Search Frame
//------------------------------------------------------------
function NurseSearchFrame(ReturnCode,ReturnName) {
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
 PopUpFrameDoc.location.href = "../cgi-bin/oprweb04.pbl?reportno=12&template=1";
  SearchFrameShow();
}
//========================================================================
//  Report 1
//========================================================================
function ShowDetail01(linkurl) {
  Left=(document.body.clientWidth-420)/2
  DFrameLink(linkurl,0,Left,420,450)
}
function TheaDate01(theatre) {
parent.location.href="oprweb04.pbl?reportno=02&template=001&opror002="+theatre
DFrameExit()
}
function UnavDate01(theatre) {
parent.location.href="oprweb04.pbl?reportno=09&template=001&oprua001="+theatre
DFrameExit()
}
function EditLookup01() {
  SelectCode.template.value=3
  SelectCode.oprop001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-420)/2
  DFrameSubmit(SelectCode,0,Left,420,450)
}
//========================================================================
//  Report 2
//========================================================================
function ShowDetail02(linkurl) {
  Left=(document.body.clientWidth-350)/2
  DFrameLink(linkurl,0,Left,350,150)
}
function AddTime02(theatre) {
  SelectCode.template.value=2
  SelectCode.opror002.value=theatre
  Left=(document.body.clientWidth-320)/2
  DFrameSubmit(SelectCode,0,Left,320,225)
}
function Theatre02(theatre) {
  LinkForm.reportno.value=1
  LinkForm.template.value=3
  LinkForm.oprop001.value=theatre
  Left=(document.body.clientWidth-420)/2
  DFrameSubmit(LinkForm,0,Left,420,450)
}
//========================================================================
//  Report 3
//========================================================================
function EditLookup03() {
  SelectCode.template.value=3
  SelectCode.oprnr001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-380)/2
  DFrameSubmit(SelectCode,0,Left,380,200)
}
function ShowDetail03(linkurl) {
  Left=(document.body.clientWidth-380)/2
  DFrameLink(linkurl,0,Left,380,200)
}
//========================================================================
//  Report 4
//========================================================================
function EditLookup04() {
  SelectCode.template.value=3
  SelectCode.oprit001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-520)/2
  DFrameSubmit(SelectCode,0,Left,520,500)
}
function ShowDetail04(linkurl) {
  Left=(document.body.clientWidth-520)/2
  DFrameLink(linkurl,0,Left,520,500)
}
function UpdateParent04(code,desc) {
  parent.ReturnCode.value=code
  parent.ReturnName.value=desc
  parent.PopUpScreen.style.display="none"
}
//========================================================================
//  Report 5
//========================================================================
function EditLookup05() {
  SelectCode.template.value=3
  SelectCode.oprtr001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-420)/2
  DFrameSubmit(SelectCode,0,Left,420,140)
}
function ShowDetail05(linkurl) {
  Left=(document.body.clientWidth-420)/2
  DFrameLink(linkurl,0,Left,420,140)
}
function TrayDet05(traycode) {
parent.location.href="oprweb04.pbl?reportno=06&template=001&oprtb001="+traycode
DFrameExit()
}
//========================================================================
//  Report 6
//========================================================================
function ShowDetail06(linkurl) {
  Left=(document.body.clientWidth-850)/2
  DFrameLink(linkurl,0,Left,950,600)
}
function AddDetail06() {
  SelectCode.reportno.value=6
  SelectCode.template.value=2
  Left=(document.body.clientWidth-850)/2
  DFrameSubmit(SelectCode,0,Left,950,600)
}
function Tray06() {
  LinkForm.reportno.value=5
  LinkForm.template.value=3
  Left=(document.body.clientWidth-420)/2
  DFrameSubmit(LinkForm,0,Left,420,140)
}
//========================================================================
//  Report 7
//========================================================================
function EditLookup07() {
  SelectCode.template.value=3
  SelectCode.oprcl001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-700)/2
  DFrameSubmit(SelectCode,0,Left,700,500)
}
function ShowDetail07(linkurl) {
  Left=(document.body.clientWidth-700)/2
  DFrameLink(linkurl,0,Left,700,500)
}
function Schedule07(schedule) {
parent.location.href="oprweb05.pbl?reportno=01&template=001&opsem001="+schedule
DFrameExit()
}
//========================================================================
//  Report 8
//========================================================================
function EditLookup08() {
  SelectCode.template.value=3
  SelectCode.oprex001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-365)/2
  DFrameSubmit(SelectCode,0,Left,950,300)
}
function ShowDetail08(linkurl) {
  Left=(document.body.clientWidth-400)/2
  DFrameLink(linkurl,0,Left,950,300)
}
//========================================================================
//  Report 9
//========================================================================
function ShowDetail09(linkurl) {
  Left=(document.body.clientWidth-330)/2
  DFrameLink(linkurl,0,Left,330,225)
}
function AddTime09(theatre) {
  SelectCode.template.value=2
  SelectCode.oprua001.value=theatre
  Left=(document.body.clientWidth-330)/2
  DFrameSubmit(SelectCode,0,Left,330,225)
}
function Theatre09(theatre) {
  LinkForm.reportno.value=1
  LinkForm.template.value=3
  LinkForm.oprop001.value=theatre
  Left=(document.body.clientWidth-420)/2
  DFrameSubmit(LinkForm,0,Left,420,450)
}
//
function PreferenceDetails(doctcode,prefcode) {
doctcode=doctcode.replace(/ /g,"+")
prefcode=prefcode.replace(/ /g,"+")
parent.location.href="oprweb04.pbl?reportno=11&template=1&doctcode="+doctcode+
                                                        "&prefcode="+prefcode
DFrameExit()
}
//========================================================================
//  Report 13
//========================================================================
function EditLookup13() {
  SelectCode.template.value=3
  SelectCode.oprtr001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-480)/2
  DFrameSubmit(SelectCode,0,Left,480,300)
}
function ShowDetail13(linkurl) {
  Left=(document.body.clientWidth-480)/2
  DFrameLink(linkurl,0,Left,480,300)
}
//========================================================================
//  Report 14
//========================================================================
function EditLookup14() {
  SelectCode.template.value=3
  SelectCode.opeqp001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-580)/2
  DFrameSubmit(SelectCode,0,Left,580,570)
}
function ShowDetail14(linkurl) {
  Left=(document.body.clientWidth-580)/2
  DFrameLink(linkurl,0,Left,580,600)
}
//========================================================================
//  Report 15
//========================================================================
function EditLookup15() {
  var msg1="Enter a Doctor Code";
  var msg2="Enter an Operation Code";
//if (isWhitespace(SelectCode.startkey.value)) {
//  alert(msg1);
//  return;
//}
  if (isWhitespace(SelectCode.opercode.value)) {
    alert(msg2);
    return;
  }
  SelectCode.template.value=3;
  SelectCode.opave001.value=SelectCode.startkey.value;
  SelectCode.opave002.value=SelectCode.opercode.value;
  Left=(document.body.clientWidth-600)/2;
  DFrameSubmit(SelectCode,50,Left,500,200);
}
function AddOprAvg(linkurl) {
  Left = (document.body.clientWidth-600)/2;
  DFrameLink(linkurl,100,Left,500,200);
}
function EditOprAvg(DocCode,OprCode) {
  LinkForm.opave001.value = DocCode;
  LinkForm.opave002.value = OprCode;
  Left=(document.body.clientWidth-700)/2;
  DFrameSubmit(LinkForm,50,Left,500,200);
}
function PreferenceCommentsDetails(doctcode,prefcode) {
doctcode=doctcode.replace(/ /g,"+")
prefcode=prefcode.replace(/ /g,"+")
parent.location.href="oprweb04.pbl?reportno=16&template=1&doctcode="+doctcode+
                                                        "&prefcode="+prefcode
DFrameExit()
}
//========================================================================
//  Report 17
//========================================================================
function AddWeekCycle(linkurl) {
  Left = (document.body.clientWidth-520)/2;
  DFrameLink(linkurl,0,Left,520,300);
}
function EditWeekCycle(EffDat,Unit) {
  LinkForm.opwcn001.value = EffDat;
  LinkForm.opwcn002.value = Unit;
  Left=(document.body.clientWidth-520)/2;
  DFrameSubmit(LinkForm,0,Left,520,300);
}
function SubmitAdd17() {
  SubmitHidden(AddForm);
}
function checkMonday() {
  if(checkDate(AddForm.opwcn001,AddForm.opwcn001.title)) {
    if(!isWhitespace(AddForm.opwcn001.value)) {
      DayOfWeek(AddForm.opwcn001,AddForm.dayofweek);
      if(AddForm.dayofweek.value != "Mon"){
        alert("Error: Effective Date must be a Monday");
        AddForm.opwcn001.value="";
      }
    }
  }
}
