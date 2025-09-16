//jsVersion  : V11.03.01
//=============================================================================
// Program   : Comp_FD.js
//
// Written   : 05.07.2011
//
// Function  : Standard Functions Used for Foreign Defence details
//
// Mods      :
//        V11.03.01 21/02/2023  Sunny             TSK 0816724
//                  Added setInsurance() for Insurance Search Keyword
//        V10.03.04 10/12/2012  J.Tan          CAR 276924
//                  Mods Other Address checkbox availibility
//        V10.03.03 31/08/2012  J.Tan          CAR 263723
//                  Added function to check Mandatory field for Billing Address
//        V10.03.02 26/03/2012  J.Tan          CAR 249142
//                  Mods to validate postcode only if not blank
//        V10.03.01 15/12/2011  Mike Laming    CAR 257259
//                  Add "trim" to all tests for Postcode "8888"
//        V10.02.02 16.09.2011  Sandra Barcham     248780
//                  Change Financial Election to Claim Type
//        V10.02.01 25.07.2011  Jeni Tan           239592
//                  Fixed focus
//        V10.02.00 05.07.2011  Jeni Tan           239592
//                  Created js
//=============================================================================

function valStationPostCode(){
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

function GetDefaultIns() {
  if (document.UpdateForm.addeflag.value=="1") {
    var serverURL = "../cgi-bin/patweb80.pbl?reportno=99" +
        "&valdcode=" + document.UpdateForm.finanelc.value.substr(0,3).replace(/ /g,"+") +
        "&valdtype=1"
    var returnValue = RSExecute(serverURL);
    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|");
      document.getElementById('pmext012').value=ReturnValue[0];
      DisplayIns();
    }
  } else {
      DisplayIns();
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
   document.UpdateForm.d_ffaddr.disabled=false;
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

function init() {
  InitPostCodes();
}

function BillMand() {
  if(document.UpdateForm.d_ffaddr.checked==true) {
    document.getElementById('pmext012').className="";
    ClearIns();
  } else {
    GetDefaultIns();
    if(document.UpdateForm.claimcod.value.substr(34,1)!="B") {
      document.getElementById('pmext012').className="Mandatory";
    } else {
      document.getElementById('pmext012').className="";
    }
  }
}

