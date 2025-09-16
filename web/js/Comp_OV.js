//jsVersion  : V11.03.00
//=============================================================================
// Program   : Comp_OV.js
//
// Written   : 05.07.2011
//
// Function  : Standard Functions Used for Overseas Visitor details 
//
// Mods      :
//        V10.03.05 11/12/2012  J.Tan          CAR 276875
//                  Added SetLocal for 'Send Bill to Local'
//        V10.03.04 30/05/2012  Ebon Clements  CAR        
//                  Added OverseasSuburbED, SetPostCode1ED and valPMIPostCodeED
//        V10.03.03 26/03/2012  J.Tan          CAR 249142
//                  Mods to validate postcode only if not blank
//        V10.03.02 15/12/2011  Mike Laming    CAR 257259
//                  Add "trim" to all tests for Postcode "8888"
//        V10.03.01 10/11/2011  Ebon Clements     CAR 248529
//                  Added multiple contacts of the same type functionality
//        V10.02.02 16.09.2011  Sandra Barcham     248780
//                  Change Financial Election to Claim Type
//        V10.02.01 29.08.2011  Jeni Tan           249142
//                  Fixed checking Local suburb/postcode if address1 not blank
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
    document.UpdateForm.inscfaxn.value="";
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

function valEmplPostCode(){
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

function valPostCode(){
  if(!isWhitespace(UpdateForm.pmcex009.value)) {
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
  if(trim(UpdateForm.ptmas011.value)!="8888"){
     UpdateForm.ptmas085.value="";
     UpdateForm.ptmas011.value="8888";
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

function EmployerSuburb(suburb) {
  SetPostCode2();
  LookupSuburb(suburb);
}

function SetPostCode2() {
 suburb   = document.UpdateForm.pmext082;
 state    = document.UpdateForm.pmext083;
 postcode = document.UpdateForm.pmext084;
} 

function SetLocal() {
  p=document.UpdateForm
  if(p.d_pmext032.checked==true){
    document.UpdateForm.pmcex007.className="Mandatory";
    document.UpdateForm.pmcex009.className="Mandatory";
    document.UpdateForm.pmcex011.className="Mandatory";
  } else {
    document.UpdateForm.pmcex007.className="";
    document.UpdateForm.pmcex009.className="";
    document.UpdateForm.pmcex011.className="";
  }
}

