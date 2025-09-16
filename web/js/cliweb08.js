//jsVersion  : V11.03.00
//========================================================================
// Program   : cliweb08.js
//
// Written   : 15.02.2000 Pat Dirito
//
// Function  : Standard Functions Used in cliweb08 templates
//
// Version   : 
//             V10.05.01 14/10/2014 Peter Vela      CAR 301518
//                   Increased ViewDoc() Dframe size 
//             V10.00.01 19/05/2010 Jill Parkinson  CAR 207094
//                   Added ShowSummary()
//             V9.11.01 13/08/2009 Peter McMullen   174998
//                   Remove redundant hidden window from SubmitForm01 
//           : V9.04.02 07/06/2005 Ebon Clements CAR 62018
//                   Reversed changes from V9.04.01           
//             V9.04.01 01/04/2005 Ebon Clements CAR 58772
//                   CD diffs - ViewDoc DFrame size change
//             V9.02.00 11/09/2001 Ebon Clements 
//                   Fixed error in heading causing an error on page
//             V5.08 08.06.2000 B.G.Ackland
//                   Moved FldNoSearch from Standard.js
//             V0.00 15.02.2000 Pat Dirito 
//
//========================================================================
//------------------------------------------------------------
// Function : Field Number Search
//------------------------------------------------------------
function FldNoSearchFrame(ReturnCode,ReturnName) {
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../cgi-bin/" + 
                              "cliweb08.pbl?reportno=04&template=004";
  SearchFrameShow();
}
//========================================================================
//   Report 1
//========================================================================
function showSummary(linkurl) {
  myWin=open(linkurl,"",
  "left=100 top=100 width=830,height=600,scrollbars=yes,status=no,toolbar=no,menubar=no");
}
function ViewDoc(linkurl) {
  Left=(document.body.clientWidth-480)/2
  DFrameLink(linkurl,0,Left,480,500)
}
function SendDoc(linkurl) {
  Left=(document.body.clientWidth-680)/2
  DFrameLink(linkurl,0,Left,680,400)
}
function SubmitForm01() 
{
  exit=validateMandatory01(AddForm)
  if (exit==true)
    document.AddForm.submit();
}
function validateMandatory01(theForm)
{   return (
      checkString(theForm.elements["corsp001"],"Correspondence file name")&&
      checkString(theForm.elements["corsp003"],"Document Type")&&
      checkDate(theForm.elements["corsp002"],"Date")                           
  );
}
function setFormactn01(type) {
if (document.UpdateForm.corsp011.value==""){
 alert('Reason for Change Must be Entered') }
else {
document.UpdateForm.updttype.value=type;
if (type=="U") { document.UpdateForm.submit(); }
if (type=="D") {
   ans=confirm("Are you sure you want to Delete ?")
   if (ans) { document.UpdateForm.submit() }
   }
}
}
function ShowAudit(auditkey) {
  var linkurl="cliweb08.pbl?reportno=1&template=019" +
         "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+") +
         "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+") +
         "&auditkey=" + auditkey;
  location.href=linkurl;
}

//========================================================================
//   Report 2
//========================================================================
function EditLookup02() {
  SelectCode.template.value=3
  SelectCode.obpct001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-450)/2
  DFrameSubmit(SelectCode,0,Left,450,250)
}
function ShowDetail02(linkurl) {
  Left=(document.body.clientWidth-450)/2
  DFrameLink(linkurl,0,Left,450,250)
}
//========================================================================
//   Report 4
//========================================================================
function ShowDetail04(linkurl) {
  Left=(document.body.clientWidth-400)/2
  DFrameLink(linkurl,0,Left,400,215)
}
function EditCategory04() {
    SelectCode.template.value=3
    SelectCode.clidf001.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-400)/2
    DFrameSubmit(SelectCode,0,Left,400,215)
}
function updateParent04(numb,desc) {
  parent.ReturnName.value=desc
  parent.ReturnCode.value=numb
  parent.PopUpScreen.style.display="none"
}
//========================================================================
//   Report 5
//========================================================================
function ShowDetail05(linkurl) {
  Left=(document.body.clientWidth-440)/2
  DFrameLink(linkurl,0,Left,440,180)
}
function ShowAdd05(linkurl) {
  Left=(document.body.clientWidth-440)/2
  DFrameLink(linkurl,0,Left,440,155)
}
function StartList05() {
location.href="cliweb08.pbl?reportno=05&template=001"
}
function EditCategory05() {
    SelectCode.template.value=3
    SelectCode.clict001.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-440)/2
    DFrameSubmit(SelectCode,0,Left,440,180)
}
function CorrDetl05(coretype) {
parent.location.href="cliweb08.pbl?reportno=06&template=001&clicd001="+coretype
DFrameExit()
}
function setFormactn05(type) {
document.UpdateForm.updttype.value=type;
if (type=="U") { document.UpdateForm.submit(); }
if (type=="S") { document.UpdateForm.submit(); }
if (type=="D") {
   ans=confirm("Are you sure you want to Delete ?")
   if (ans) { document.UpdateForm.submit() }
   }
}
//========================================================================
//   Report 6
//========================================================================
function ShowDetail06(linkurl) {
  Left=(document.body.clientWidth-400)/2
  DFrameLink(linkurl,0,Left,400,270)
}
function ViewType06(downtype) {
    SelectCode.reportno.value=5
    SelectCode.template.value=3
    SelectCode.clict001.value=downtype
    Left=(document.body.clientWidth-440)/2
    DFrameSubmit(SelectCode,0,Left,440,180)
}
function AddCode06(fldnumb) {
    SelectCode.reportno.value=6
    SelectCode.template.value=2
    SelectCode.clicd001.value=fldnumb
    Left=(document.body.clientWidth-500)/2
    DFrameSubmit(SelectCode,0,Left,500,420)
}
function CodeList06(fldNumb) {
location.href="cliweb08.pbl?reportno=06&template=004&clicd001="+fldNumb
}
function StartList06(fldNumb) {
location.href="cliweb08.pbl?reportno=06&template=001&clicd001="+fldNumb
}
function EditCategory06() {
    SelectCode.template.value=3
    SelectCode.clicd001.value=SelectCode.clicd001.value
    SelectCode.clicd002.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-400)/2
    DFrameSubmit(SelectCode,0,Left,400,270)
}
function fldSearch(linkurl,fldNumb,fldDesc) {
    window.fldNumb=fldNumb
    window.fldDesc=fldDesc
    myWin=open(linkurl,"FldNumbSearch",
    "left=100 top=100 width=630,height=400,scrollbars=yes,status=no,toolbar=no,menubar=no");
}
