//jsVersion  : V11.03.00
//=============================================================================
// Program   : Comp_OS.js
//
// Written   : 05.07.2011
//
// Function  : Standard Functions Used for Overseas student details
//
// Mods      :
//        V10.03.04 30/05/2012  Ebon Clements  CAR
//                  Added OverseasSuburbED, SetPostCode1ED and valPMIPostCodeED
//        V10.03.03 26/03/2012  J.Tan          CAR 249142
//                  Mods to validate postcode only if not blank
//        V10.03.02 15/12/2011  Mike Laming    CAR 257259
//                  Add "trim" to all tests for Postcode "8888"
//        V10.03.01 10/11/2011  Ebon Clements     CAR 248529
//                  Added multiple contacts of the same type functionality
//        V10.02.03 16.09.2011  Sandra Barcham     248780
//                  Change Financial Election to Claim Type
//        V10.02.02 29.08.2011  Jeni Tan           249142
//                  Fixed checking Local suburb/postcode if address1 not blank
//        V10.02.01 25.07.2011  Jeni Tan           239592
//                  Fixed focus
//        V10.02.00 05.07.2011  Jeni Tan           239592
//                  Created js
//=============================================================================

function DispReciprocal() {
  ind=document.UpdateForm.pmext075.value.substr(5,1)
  if (ind=="R") {
     reciphd.innerHTML=recipfl.innerHTML;
  } else {
     reciphd.innerHTML="";
  }
}

function ClearIns() {
    document.UpdateForm.pmext012.selectedIndex=0
    document.UpdateForm.insadd1.value="";
    document.UpdateForm.insadd2.value="";
    document.UpdateForm.insadd3.value="";
    document.UpdateForm.insadd4.value="";
    document.UpdateForm.inspcode.value="";
    document.UpdateForm.inscname.value="";
    document.UpdateForm.insctelp.value="";
}

function DisplayIns() {
  if(!isWhitespace(document.UpdateForm.pmext012.value)) {
    GetIns(document.UpdateForm.pmext012,
           document.UpdateForm.insadd1,
           document.UpdateForm.insadd2,
           document.UpdateForm.insadd3,
           document.UpdateForm.insadd4,
           document.UpdateForm.inspcode,
           document.UpdateForm.inscname,
           document.UpdateForm.insctelp,
           document.UpdateForm.inscfaxn);
   } else {
     ClearIns();
   }
}

function valSchoolPostCode(){
 if(!isWhitespace(UpdateForm.d_pmext082.value)) {
  UpCase(UpdateForm.d_pmext082);
  if(trim(UpdateForm.d_pmext084.value)!="8888"){
    suburb   = UpdateForm.d_pmext082;
    state    = UpdateForm.d_pmext083;
    postcode = UpdateForm.d_pmext084;
    LookupPostCode(UpdateForm.d_pmext082.value);
  }
 }
}

function DispFFAddr() {
  if(document.UpdateForm.d_ffaddr.checked==true) {
   FSchoolAdd1.innerHTML=FFAdd1.innerHTML;
   FSchoolAdd2.innerHTML=FFAdd2.innerHTML;
   FSchoolAdd3.innerHTML=FFAdd3.innerHTML;
   FSchoolAdd4.innerHTML=FFAdd4.innerHTML;
   FSchoolPCode.innerHTML=FFPCode.innerHTML;
   FSchoolCName.innerHTML=FFCName.innerHTML;
   FSchoolCPhone.innerHTML=FFCPhone.innerHTML;
   document.UpdateForm.pmext143.disabled=true;
   document.UpdateForm.pmext078.disabled=false;
   document.UpdateForm.pmext078.className="Mandatory";
   document.UpdateForm.d_pmext080.disabled=false;
   document.UpdateForm.d_pmext081.disabled=false;
   document.UpdateForm.d_pmext082.disabled=false;
   document.UpdateForm.d_pmext083.disabled=false;
   document.UpdateForm.d_pmext084.disabled=false;
   document.UpdateForm.d_pmext085.disabled=false;
   document.UpdateForm.d_pmext086.disabled=false;
   document.UpdateForm.d_pmext080.value=document.UpdateForm.pmext080.value;
   document.UpdateForm.d_pmext081.value=document.UpdateForm.pmext081.value;
   document.UpdateForm.d_pmext082.value=document.UpdateForm.pmext082.value;
   document.UpdateForm.d_pmext083.value=document.UpdateForm.pmext083.value;
   document.UpdateForm.d_pmext084.value=document.UpdateForm.pmext084.value;
   document.UpdateForm.d_pmext085.value=document.UpdateForm.pmext085.value;
   document.UpdateForm.d_pmext086.value=document.UpdateForm.pmext086.value;
   document.UpdateForm.pmext078.focus();

  } else {
   FSchoolAdd1.innerHTML=SAdd1.innerHTML;
   FSchoolAdd2.innerHTML=SAdd2.innerHTML;
   FSchoolAdd3.innerHTML=SAdd3.innerHTML;
   FSchoolAdd4.innerHTML=SAdd4.innerHTML;
   FSchoolPCode.innerHTML=SPCode.innerHTML;
   FSchoolCName.innerHTML=SCName.innerHTML;
   FSchoolCPhone.innerHTML=SCPhone.innerHTML;
   document.UpdateForm.pmext143.disabled=false;
   document.UpdateForm.d_ffaddr.disabled=true;
   document.UpdateForm.pmext078.className="";
   document.UpdateForm.pmext078.disabled=true;
  }
}

function valPostCode(){
  if (!isWhitespace(UpdateForm.pmcex009.value)) {
   UpCase(UpdateForm.pmcex009);
   if(trim(UpdateForm.pmcex011.value)!="8888"){
     suburb   = UpdateForm.pmcex009;
     state    = UpdateForm.pmcex010;
     postcode = UpdateForm.pmcex011;
     LookupPostCode(UpdateForm.pmcex009.value);
   }
  }
}

function valPMIPostCode(){
  UpCase(UpdateForm.ptmas010);
  if(trim(UpdateForm.ptmas012.value)!="8888"){
     UpdateForm.ptmas011.value="";
     UpdateForm.ptmas012.value="8888";
  }
}

function valPMIPostCodeED(){
  UpCase(UpdateForm.ptmas010);
  if(trim(UpdateForm.ptmas012.value)!="8888"){
     UpdateForm.ptmas085.value="";
     UpdateForm.ptmas011.value="8888";
  }
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

function LocalSuburb(suburb) {
 if (!isWhitespace(UpdateForm.pmcex007.value)) {
  SetPostCode0();
  LookupSuburb(suburb);
 }
}   
    
function SetPostCode0() {
    suburb   = UpdateForm.pmcex009;
    state    = UpdateForm.pmcex010;
    postcode = UpdateForm.pmcex011;
} 
 
function OverseasSuburb(suburb) {
  SetPostCode1();
  LookupSuburb(suburb);
}

function SetPostCode1() {
 suburb   = document.UpdateForm.ptmas010;
 state    = document.UpdateForm.ptmas011;
 postcode = document.UpdateForm.ptmas012;
}

function OverseasSuburbED(suburb) {
  SetPostCode1ED();
  LookupSuburb(suburb);
}

function SetPostCode1ED() {
 suburb   = document.UpdateForm.ptmas010;
 state    = document.UpdateForm.ptmas085;
 postcode = document.UpdateForm.ptmas011;
}

function SchoolSuburb(suburb) {
  SetPostCode2();
  LookupSuburb(suburb);
}

function SetPostCode2() {
 suburb   = document.UpdateForm.d_pmext082;
 state    = document.UpdateForm.d_pmext083;
 postcode = document.UpdateForm.d_pmext084;
}
function ChkSchool() {
  if(!isWhitespace(document.UpdateForm.pmext143.value)) {
    document.UpdateForm.d_ffaddr.checked=0;
    document.UpdateForm.d_ffaddr.disabled=true;
  } else {
    document.UpdateForm.d_ffaddr.disabled=false;
  }
}
function GetOrg(ReturnCode,ReturnAdd1,ReturnAdd2,ReturnAdd3,
                ReturnAdd4,ReturnPost,ReturnCNam,ReturnCPhn)
{
  if (isWhitespace(ReturnCode.value)) {
    ChkSchool();
    ReturnAdd1.value="";
    ReturnAdd2.value="";
    ReturnAdd3.value="";
    ReturnAdd4.value="";
    ReturnPost.value="";
    ReturnCNam.value="";
    ReturnCPhn.value="";
    return;;
  }

  var serverURL = "../cgi-bin/mehweb01.pbl?reportno=15" +
        "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
        "&valdtype=2"

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnAdd1.value=ReturnValue[1];
    ReturnAdd2.value=ReturnValue[2];
    ReturnAdd3.value=ReturnValue[3];
    ReturnAdd4.value=ReturnValue[4];
    ReturnPost.value=ReturnValue[5];
    ReturnCNam.value=ReturnValue[6];
    ReturnCPhn.value=ReturnValue[7];
    ChkSchool();
  }
}

function ClearSchool(){
   document.UpdateForm.pmext078.value="";
   document.UpdateForm.pmext080.value="";
   document.UpdateForm.pmext081.value="";
   document.UpdateForm.pmext082.value="";
   document.UpdateForm.pmext083.value="";
   document.UpdateForm.pmext084.value="";
   document.UpdateForm.pmext085.value="";
   document.UpdateForm.pmext086.value="";
}
