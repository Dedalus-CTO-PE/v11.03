//jsVersion  : V11.03.01

//=============================================================================
// Program   : Comp_WC.js
//
// Written   : 05.07.2011
//
// Function  : Standard Functions Used for Workers Compensable details
//
// Mods      :
//        V11.03.01 21/02/2023  Sunny             TSK 0816724
//                  Added setInsurance() for Insurance Search Keyword
//        V10.03.04 23/08/2012  J.Tan          CAR 263723
//                  Added SetPostCode
//        V10.03.03 26/03/2012  J.Tan          CAR 249142     
//                  Mods to validate postcode only if not blank
//        V10.03.02 08/02/2012  J.Tan          CAR 256004
//                  Fixed Employer and Solicitor names
//        V10.03.01 15/12/2011  Mike Laming    CAR 257259
//                  Add "trim" to all tests for Postcode "8888"
//        V10.02.02 16.09.2011  Sandra Barcham     248780
//                  Change Financial Election to Claim Type
//        V10.02.01 25.07.2011  Jeni Tan           239592
//                  Fixed focus
//        V10.02.00 05.07.2011  Jeni Tan           239592
//                  Created js
//=============================================================================

function SetPostCode01() {
 suburb   = UpdateForm.pmext006;
 state    = UpdateForm.pmext007;
 postcode = UpdateForm.pmext008;
 if(postcode.value=="") {
   return;
 }
 LookupSuburb(UpdateForm.pmext008.value)
}

function SetPostCode02() {
 suburb   = UpdateForm.pmext067;
 state    = UpdateForm.pmext068;
 postcode = UpdateForm.pmext069;
 if(postcode.value=="") {
   return;
 }
 LookupSuburb(UpdateForm.pmext069.value)
}

function SetPostCode03() {
 suburb   = UpdateForm.pmext082;
 state    = UpdateForm.pmext083;
 postcode = UpdateForm.pmext084;
 if(postcode.value=="") {
   return;
 }
 LookupSuburb(UpdateForm.pmext084.value)
}

function valPostCode(){
 if(!isWhitespace(UpdateForm.pmext082.value)) {
  UpCase(UpdateForm.pmext082);
  if(trim(UpdateForm.pmext084.value)!="8888"){
    suburb   = UpdateForm.pmext082;
    state    = UpdateForm.pmext083;
    postcode = UpdateForm.pmext084;
    LookupPostCode(UpdateForm.pmext082.value);
  }
 }
}

function valEmplPostCode() {
 if(!isWhitespace(UpdateForm.pmext006.value)) {
  UpCase(UpdateForm.pmext006);
  if(trim(UpdateForm.pmext008.value)!="8888"){
    suburb   = UpdateForm.pmext006;
    state    = UpdateForm.pmext007;
    postcode = UpdateForm.pmext008;
    LookupPostCode(UpdateForm.pmext006.value);
  }
 }
}

function valSolicitorPostCode(){
 if(!isWhitespace(UpdateForm.pmext067.value)) {
  UpCase(UpdateForm.pmext067);
  if(trim(UpdateForm.pmext069.value)!="8888"){
    suburb   = UpdateForm.pmext067;
    state    = UpdateForm.pmext068;
    postcode = UpdateForm.pmext069;
    LookupPostCode(UpdateForm.pmext067.value);
  }
 }
}

function ClearIns() {
    document.getElementById('pmext012').selectedIndex=0
    document.UpdateForm.insadd1.value="";
    document.UpdateForm.insadd2.value="";
    document.UpdateForm.insadd3.value="";
    document.UpdateForm.insadd4.value="";
    document.UpdateForm.inspcode.value="";
    document.UpdateForm.inscname.value="";
    document.UpdateForm.insctelp.value="";
}

function SetPrinter() {
  if(document.UpdateForm.prntform.checked==true) {
    if(isWhitespace(document.UpdateForm.statndes.value)) {
     alert('Claim Type Stationery Form is NOT setup.');
     document.UpdateForm.prntform.checked=false
     return;
    }
    document.UpdateForm.d_statncod.value=document.UpdateForm.statndes.value
    document.UpdateForm.schdprnt.className="Mandatory";
    document.UpdateForm.schdprnt.disabled=false;
  } else {
    document.UpdateForm.d_statncod.value=""
    document.UpdateForm.schdprnt.className="";
    document.UpdateForm.schdprnt.disabled=true;
  }
}

function DisplayIns() {
    GetIns(document.getElementById('pmext012'),
           document.UpdateForm.insadd1,
           document.UpdateForm.insadd2,
           document.UpdateForm.insadd3,
           document.UpdateForm.insadd4,
           document.UpdateForm.inspcode,
           document.UpdateForm.inscname,
           document.UpdateForm.insctelp,
           document.UpdateForm.faxnumbr);
   if (isWhitespace(document.getElementById('pmext012').value)) {
    document.UpdateForm.insadd1.value="";
    document.UpdateForm.insadd2.value="";
    document.UpdateForm.insadd3.value="";
    document.UpdateForm.insadd4.value="";
    document.UpdateForm.inspcode.value="";
    document.UpdateForm.inscname.value="";
    document.UpdateForm.insctelp.value="";
   }
}

function init() {
  InitPostCodes();
}

function lookUpWCO() {
WCOClmNoSearchFrame(UpdateForm.urnumber,UpdateForm.pmext013,UpdateForm.pmext140,
                UpdateForm.d_pmext138,UpdateForm.pmext010,UpdateForm.d_pmext097,
                  UpdateForm.pmext095,document.getElementById('pmext012'),
                  UpdateForm.pmext004,
                  UpdateForm.pmext005,UpdateForm.pmext006,UpdateForm.pmext007,
                  UpdateForm.pmext008,UpdateForm.pmext065,UpdateForm.pmext066,
                  UpdateForm.pmext067,UpdateForm.pmext068,UpdateForm.pmext069,
                  UpdateForm.pmext070,UpdateForm.pmext071,UpdateForm.pmext078,
                  UpdateForm.pmext079,UpdateForm.pmext080,UpdateForm.pmext081,
                  UpdateForm.pmext082,UpdateForm.pmext083,UpdateForm.pmext084,
                  UpdateForm.pmext085,UpdateForm.pmext086,UpdateForm.pmext059,
                  UpdateForm.pmext060,UpdateForm.pmext061,UpdateForm.pmext003,
                  UpdateForm.pmext064,UpdateForm.d_faddr);

}
function WCOClmNoSearchFrame(urnumber,RetClmno,RetElec,
                             RetMvit,RetAdat,RetInMV,
                             RetAloc,RetIns,RetEadd1,
                             RetEadd2,RetEadd3,RetEadd4,
                             RetEadd5,RetSadd1,RetSadd2,
                             RetSadd3,RetSadd4,RetSadd5,
                             RetSphone,RetSname,RetEname,
                             RetEphone,RetFadd1,RetFadd2,
                             RetFadd3,RetFadd4,RetFadd5,
                             RetFname,RetFphone,RetCom1,
                             RetCom2,RetCom3,RetEmpnam,
                             RetSolnam) {

  DFrameStart();
  window.urnumber=urnumber;     window.RetClmno=RetClmno;
  window.RetElec=RetElec;       window.RetMvit=RetMvit;
  window.RetAdat=RetAdat;       window.RetInMV=RetInMV;
  window.RetAloc=RetAloc;       window.RetIns=RetIns;
  window.RetEadd1=RetEadd1;     window.RetEadd2=RetEadd2;
  window.RetEadd3=RetEadd3;     window.RetEadd4=RetEadd4;
  window.RetEadd5=RetEadd5;     window.RetSadd1=RetSadd1;
  window.RetSadd2=RetSadd2;     window.RetSadd3=RetSadd3;
  window.RetSadd4=RetSadd4;     window.RetSadd5=RetSadd5;
  window.RetSphone=RetSphone;   window.RetSname=RetSname;
  window.RetEname=RetEname;     window.RetEphone=RetEphone;
  window.RetFadd1=RetFadd1;     window.RetFadd2=RetFadd2;
  window.RetFadd3=RetFadd3;     window.RetFadd4=RetFadd4;
  window.RetFadd5=RetFadd5;     window.RetFname=RetFname;
  window.RetFphone=RetFphone;   window.RetCom1=RetCom1;
  window.RetCom2=RetCom2;       window.RetCom3=RetCom3;
  window.RetEmpnam=RetEmpnam;   window.RetSolnam=RetSolnam;

  document.getElementById('PopUpFrame').src="../lookups/WCOClmNoSearchFrame.html";
  SearchFrameShow();
}
function DispFFAddr() {
  if(document.UpdateForm.d_ffaddr.checked==true) {
   LContactAdd1.innerHTML=LFAdd1.innerHTML;
   LContactAdd2.innerHTML="";
   LContactAdd3.innerHTML=LFAdd3.innerHTML;
   LContactAdd4.innerHTML=LFAdd4.innerHTML;
   LContactPCode.innerHTML=LFPostCode.innerHTML;
   LContactPName.innerHTML=LFCName.innerHTML;
   LContactPhone.innerHTML=LFCPhone.innerHTML;

   FContactAdd1.innerHTML=FFAdd1.innerHTML;
   FContactAdd2.innerHTML=FFAdd2.innerHTML;
   FContactAdd3.innerHTML=FFAdd3.innerHTML;
   FContactAdd4.innerHTML=FFAdd4.innerHTML;
   FContactPCode.innerHTML=FFPCode.innerHTML;
   FContactPName.innerHTML=FFCName.innerHTML;
   FContactPhone.innerHTML=FFCPhone.innerHTML;
   document.UpdateForm.d_pmext080.focus();
  } else {
   LContactAdd1.innerHTML="";
   LContactAdd2.innerHTML="";
   LContactAdd3.innerHTML="";
   LContactAdd4.innerHTML="";
   LContactPCode.innerHTML="";
   LContactPName.innerHTML="";
   LContactPhone.innerHTML="";

   FContactAdd1.innerHTML="";
   FContactAdd2.innerHTML="";
   FContactAdd3.innerHTML="";
   FContactAdd4.innerHTML="";
   FContactPCode.innerHTML="";
   FContactPName.innerHTML="";
   FContactPhone.innerHTML="";

  }
}

function GetIns(ReturnCode,ReturnAdd1,ReturnAdd2,ReturnAdd3,ReturnAdd4,
                ReturnPost,ReturnCName,ReturnCTelp,ReturnCFaxn)
{
  if (isWhitespace(ReturnCode.value)) {
    ReturnAdd1.value="";
    ReturnAdd2.value="";
    ReturnAdd3.value="";
    ReturnAdd4.value="";
    ReturnPost.value="";
    ReturnCName.value="";
    ReturnCTelp.value="";
    ReturnCFaxn.value="";
    document.UpdateForm.d_ffaddr.disabled=false;
    return;;
  }

  var serverURL = "../cgi-bin/patweb80.pbl?reportno=36" +
        "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
        "&valdtype=1"

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnAdd1.value=ReturnValue[1];
    ReturnAdd2.value=ReturnValue[2];
    ReturnAdd3.value=ReturnValue[3];
    ReturnAdd4.value=ReturnValue[4];
    ReturnPost.value=ReturnValue[5];
    ReturnCName.value=ReturnValue[6];
    ReturnCTelp.value=ReturnValue[7];
    ReturnCFaxn.value=ReturnValue[8];
    document.UpdateForm.d_ffaddr.disabled=true;
    document.UpdateForm.d_ffaddr.checked=false;

   LContactAdd1.innerHTML="";
   LContactAdd2.innerHTML="";
   LContactAdd3.innerHTML="";
   LContactAdd4.innerHTML="";
   LContactPCode.innerHTML="";
   LContactPName.innerHTML="";
   LContactPhone.innerHTML="";

   FContactAdd1.innerHTML="";
   FContactAdd2.innerHTML="";
   FContactAdd3.innerHTML="";
   FContactAdd4.innerHTML="";
   FContactPCode.innerHTML="";
   FContactPName.innerHTML="";
   FContactPhone.innerHTML="";
  }
}

