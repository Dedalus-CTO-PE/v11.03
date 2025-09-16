//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb89.js
//
// Written   : ????
//
// Function  : Standard Functions Used in patweb8901018 template
//
// Version   : 
//
// V9.09.01  30/10/2007 Ebon Clements CAR 152914
//           Added regiflag to setFormactn()
// V9.05.02  29/03/2006 J.Tan         CAR 88178
//           Mods to use Confirm in SetCancel function                
// V9.05.01  06/03/2006 J.Tan         CAR 80700
//           Added Warning to SetCancel
// V9.04.01  26/10/2004 Ebon Clements CAR 54588
//           Added EmergencyMap test to SetCancel
// V9.03.02  31/05/2003 Jill Habasque CAR 50160
//           Fixed driver/passenger selection in MABRefNoSearchFrame
// V9.03.01  25/06/2003 Ebon Clements CAR 38892
//           Created include
//
//========================================================================
//
//------------------------------------------------------------
// Report 1 functions   
//------------------------------------------------------------
function SetFieldsPRA() {
 suburb = UpdateForm.ptpra004;
 state = UpdateForm.ptpra005;
 postcode = UpdateForm.ptpra006;
}
function SearchPage(returnName,LookupPage) {
window.returnName=returnName ;
Lookup=open(LookupPage, "LookupWindow",
"width=450,height=300,top=100,left=100,scrollbars=yes,status=no,toolbar=no,menubar=no") ;
}
function SetCancel() {
  alert("Warning: Injury/Accident Data will not be Updated!");
  if(top.location.pathname.match(/EmergencyMap/g)) {
    top.menu.location.reload();
  } else {
    fnPatientLink()
  }
/*
  location.href="patweb98.pbl?reportno=1&template=1"
   + "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+");
*/
}
function clrTable() {
  document.UpdateForm.emvis018.value="";
  document.UpdateForm.tabldesc.value="";
  document.UpdateForm.funddesc.value="";
}
function setFormactn() {
  if (validateMandatory(UpdateForm)) {
    document.UpdateForm.formactn.value="C1"
    if(document.UpdateForm.regiflag!=undefined){
      document.UpdateForm.redirect.value+=
      "&regiflag=" + document.UpdateForm.regiflag.value
    }
    SubmitHidden(UpdateForm);
  }
}
function chgName()  {
  if (document.UpdateForm.chckname.value==0) {
  ans=confirm("Save old Name as Alais ?");
  if (ans) { 
    document.UpdateForm.chckname.value="1" 
    }
  }
}      
/*
function CheckFund(fund,selectlist)  {
var found=0
strvar=fund.value+"      "         // format as three characters space filled
fund.value=strvar.substr(0,6)
for (var i =0 ; i < selectlist.length; i++) {
  if (selectlist.options[i].value.substr(0,6)==fund.value) {
         found=1
         selectlist.selectedIndex=i } }
if (found==0) { alert("Invalid Fund Entered")
                fund.focus() }
}
function UpdateFund(fund,selectlist) {
  fund.value=selectlist.value.substr(0,6);
}
*/
function CheckFund(fund,selectlist)  {
var found=0
strvar=fund.value;
if(!isWhitespace(strvar)){
for (var i =0 ; i < selectlist.length; i++) {
strvar=fund.value+"      "         // format as three characters space filled
fund.value=strvar.substr(0,6)
  if (selectlist.options[i].value.substr(0,6)==fund.value) {
         found=1
         selectlist.selectedIndex=i } }
if (found==0) { alert("Invalid Fund Entered")
                fund.focus() }
}
}
function UpdateFund(fund,selectlist) {
  fund.value=selectlist.value.substr(0,6);
}
function valTAC() {
validateTAC(42,UpdateForm.urnumber,UpdateForm.admissno,UpdateForm.ptclm012,
               UpdateForm.ptclm013,UpdateForm.ptclm027,UpdateForm.ptclm016,
               UpdateForm.ptclm014,UpdateForm.ptclm017,UpdateForm.ptclm015,
               UpdateForm.ptclm018,UpdateForm.drvrpass,UpdateForm.ptclm019,
               UpdateForm.ptclm021,UpdateForm.ptclm022,UpdateForm.ptclm023,
               UpdateForm.ptclm024,UpdateForm.ptclm025,UpdateForm.ptclm026,
               UpdateForm.dummy);

}
//
function lookUpMAB() {
MABRefNoSearchFrame(UpdateForm.urnumber,UpdateForm.ptclm012,UpdateForm.ptclm013,
                    UpdateForm.ptclm027,
                    UpdateForm.ptclm016,UpdateForm.ptclm014,UpdateForm.ptclm017,
                    UpdateForm.ptclm015,UpdateForm.ptclm018,UpdateForm.drvrpass,
                    UpdateForm.ptclm019,UpdateForm.ptclm021,UpdateForm.ptclm022,
                    UpdateForm.ptclm023,UpdateForm.ptclm024,UpdateForm.ptclm025,
                    UpdateForm.ptclm026,UpdateForm.dummy,UpdateForm.ptclm030,
                    UpdateForm.dummy);

}
function MABRefNoSearchFrame(urnumber,RetMABNo,RetDat,RetLoc,RetOthDrv,
                             RetPolRep,RetDet1,
                             RetCRegInv,RetDet2,RetDrvPas,RetMode,RetEng,
                             RetInjWhn,RetMechInj,RetRegInj,RetSoli,RetSNo,
                             RetInd,RetDrvPasSel,RetIndSel) 
{
  var PopUpFrameDoc = DFrameStart();
  window.urnumber=urnumber;
  window.RetMABNo=RetMABNo;     window.RetDat=RetDat;
  window.RetLoc=RetLoc;         window.RetOthDrv=RetOthDrv;
  window.RetPolRep=RetPolRep;   window.RetDet1=RetDet1;
  window.RetCRegInv=RetCRegInv; window.RetDet2=RetDet2;
  window.RetDrvPas=RetDrvPas;   window.RetMode=RetMode;
  window.RetEng=RetEng;         window.RetInjWhn=RetInjWhn;
  window.RetMechInj=RetMechInj; window.RetRegInj=RetRegInj;
  window.RetSoli=RetSoli;       window.RetSNo=RetSNo;
  window.RetInd=RetInd;         window.RetDrvPasSel=RetDrvPasSel;
  window.RetIndSel=RetIndSel;

  PopUpFrameDoc.location.href = "../lookups/MABRefNoSearchFrame.html";
  SearchFrameShow();
}
