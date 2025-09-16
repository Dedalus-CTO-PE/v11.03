//jsVersion  : V11.03.01
//========================================================================
// Program   : patweb89.js
//
// Written   : ????
//
// Function  : Standard Functions Used in patweb8901018 template
//
// Version   : 
//
// V11.03.01 21/02/2023  Sunny        TSK 0816724
//           Made ptclm009 cross browser compatbile  
// V9.09.01  30/10/2007 Ebon Clements CAR 152914
//           Added regiflag to setFormactn() 
// V9.05.02  29/03/2006 J.Tan         CAR 88178
//           Mods to use Confirm in SetCancel function                
// V9.05.01  06/03/2006 J.Tan         CAR 80700
//           Added Warning to SetCancel
// V9.04.02  15/11/2004 Jill Habasque CAR 54920
//           Added ptcnhdps
// V9.04.01  26/10/2004 Ebon Clements CAR 54588
//           Added EmergencyMap test to SetCancel
// V9.03.01  25/06/2003 Ebon Clements CAR 38892
//           Created include
//
//========================================================================
//
//------------------------------------------------------------
// Report 1 functions   
//------------------------------------------------------------
function SetFields() {
 state = UpdateForm.ptclm028;
 suburb = UpdateForm.ptclm004;
 postcode = UpdateForm.ptclm005;
}
function SearchPage(returnName,LookupPage) {
window.returnName=returnName ;
Lookup=open(LookupPage, "LookupWindow",
"width=450,height=300,top=100,left=100,scrollbars=yes,status=no,toolbar=no,menubar=no") ;
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
function PrintScreen(linkurl) {
  PrintWindow=open(linkurl,"PrintScreen",
    "width=400,height=150,top=50,left=50," +
    "titlebar=no,scrollbars=yes,status=no,toolbar=no,menubar=no");
}
function chgName()  {
  if (document.UpdateForm.chckname.value==0) {
  ans=confirm("Save old Name as Alais ?");
  if (ans) { 
    document.UpdateForm.chckname.value="1" 
    }
  }
}      
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
function lookUpWC() {
WCRefNoSearchFrame(UpdateForm.urnumber,UpdateForm.ptclm001,UpdateForm.ptclm002,
                    UpdateForm.ptclm003,
                    UpdateForm.ptclm004,UpdateForm.ptclm028,UpdateForm.ptclm005,
                    UpdateForm.ptclm006,UpdateForm.ptclm007,UpdateForm.accepted,
                    document.getElementById('ptclm009'),UpdateForm.ptclm010,
                    UpdateForm.dummy,UpdateForm.dummy1,UpdateForm.ptclm032,
                    UpdateForm.cinjure,UpdateForm.injcode,
                    UpdateForm.ptclm034,UpdateForm.ptclm031,
                    UpdateForm.ptclm033,UpdateForm.ptclm008,
                    UpdateForm.ptcnhdps);
}
function WCRefNoSearchFrame(urnumber,RetEName,RetAdd1,RetAdd2,RetAdd3,
                             RetAdd4,RetPost,
                             RetTele,RetCDat,RetAccPt,RetInsCod,RetClmNo,
                             RetComn1,RetComn2,RetAloc,RetCInj,RetInjCod,
                             RetCName,RetCInjSel,RetInjCodSel,RetAccPtSel,
                             ptcnhdps) {
  var PopUpFrameDoc = DFrameStart();
  window.urnumber=urnumber;
  window.RetEName=RetEName;     window.RetAdd1=RetAdd1;
  window.RetAdd2=RetAdd2;       window.RetAdd3=RetAdd3;
  window.RetAdd4=RetAdd4;       window.RetPost=RetPost;
  window.RetTele=RetTele;       window.RetCDat=RetCDat;
  window.RetAccPt=RetAccPt;     window.RetInsCod=RetInsCod;
  window.RetClmNo=RetClmNo;     window.RetComn1=RetComn1;
  window.RetComn2=RetComn2;     window.RetAloc=RetAloc;
  window.RetCInj=RetCInj;       window.RetInjCod=RetInjCod;
  window.RetCName=RetCName;     window.RetCInjSel=RetCInjSel; 
  window.RetInjCodSel=RetInjCodSel;
  window.RetAccPtSel=RetAccPtSel;
  window.ptcnhdps=ptcnhdps;

  PopUpFrameDoc.location.href = "../lookups/WCRefNoSearchFrame.html";
  SearchFrameShow();
}
//
function SetCancel() {
  if (!confirm("Warning: Injury/Accident Data will not be Updated!\n Ok to Continue ?")) {
   return;
  }
  if(top.location.pathname.match(/EmergencyMap/g)) {
    top.menu.location.reload();
  } else {
    fnPatientLink()
  }
}
