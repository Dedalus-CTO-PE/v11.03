//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb8912.js 
//  
// Written   : 09/06/2011
//    
// Function  : Standard Functions Used in patweb8912 templates
//    
// Version   : 
//  
// V10.03.03 11/12/2012  J.Tan          CAR 276875
//                       Added SetLocal for 'Send Bill to Local'
// V10.03.02 15/12/2011  Mike Laming    CAR 257259
//                       Add "trim" to all tests for Postcode "8888"
// V10.03.01 10/11/2011  Ebon Clements     CAR 248529
//                       Added multiple contacts of the same type functionality
// V10.02.03   16.09.2011  Sandra Barcham     248780
//                       Change Financial Election to Claim Type
// V10.02.02   29/08/2012  J.Tan         CAR 249142
//                      Mods checking for blank address line 1 prior Valpostcode
// V10.02.01   09/06/2012  J.Tan         CAR 239592
//                      Created include
//========================================================================


function init() {
  InitPostCodes();
}

function SetClose() {
var urnumber ="%PATWEB89.12.003";
var admissno ="%PATWEB89.12.081";
var link = "patweb98.pbl?reportno=01&template=001&urnumber="+
           urnumber+"&admissno="+admissno;
  location.href= link;
}

function ClearIns() {
    document.UpdateForm.pmres011.selectedIndex=0
    document.UpdateForm.insadd1.value="";
    document.UpdateForm.insadd2.value="";
    document.UpdateForm.insadd3.value="";
    document.UpdateForm.insadd4.value="";
    document.UpdateForm.inspcode.value="";
    document.UpdateForm.inscname.value="";
    document.UpdateForm.insctelp.value="";
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
   document.UpdateForm.pmres015.disabled=true;
   document.UpdateForm.pmres033.disabled=false;
   document.UpdateForm.pmres033.className="Mandatory";
   document.UpdateForm.d_pmres034.disabled=false;
   document.UpdateForm.d_pmres035.disabled=false;
   document.UpdateForm.d_pmres036.disabled=false;
   document.UpdateForm.d_pmres037.disabled=false;
   document.UpdateForm.d_pmres038.disabled=false;
   document.UpdateForm.d_pmres039.disabled=false;
   document.UpdateForm.d_pmres040.disabled=false;
   document.UpdateForm.d_pmres034.value=document.UpdateForm.pmres034.value;
   document.UpdateForm.d_pmres035.value=document.UpdateForm.pmres035.value;
   document.UpdateForm.d_pmres036.value=document.UpdateForm.pmres036.value;
   document.UpdateForm.d_pmres037.value=document.UpdateForm.pmres037.value;
   document.UpdateForm.d_pmres038.value=document.UpdateForm.pmres038.value;
   document.UpdateForm.d_pmres039.value=document.UpdateForm.pmres039.value;
   document.UpdateForm.d_pmres040.value=document.UpdateForm.pmres040.value;
  } else {
   FSchoolAdd1.innerHTML=SAdd1.innerHTML;
   FSchoolAdd2.innerHTML=SAdd2.innerHTML;
   FSchoolAdd3.innerHTML=SAdd3.innerHTML;
   FSchoolAdd4.innerHTML=SAdd4.innerHTML;
   FSchoolPCode.innerHTML=SPCode.innerHTML;
   FSchoolCName.innerHTML=SCName.innerHTML;
   FSchoolCPhone.innerHTML=SCPhone.innerHTML;
   document.UpdateForm.pmres015.disabled=false;
   document.UpdateForm.d_ffaddr.disabled=true;
   document.UpdateForm.pmres033.className="";
   document.UpdateForm.pmres033.disabled=true;
  }
}

function valPostCode(){
 if (!isWhitespace(UpdateForm.pmcex007.value)) {
  UpCase(UpdateForm.pmcex009);
  if(trim(UpdateForm.pmcex011.value)!="8888"){
    suburb   = UpdateForm.pmcex009;
    state    = UpdateForm.pmcex010;
    postcode = UpdateForm.pmcex011;
    LookupPostCode(UpdateForm.pmcex009.value);
  }
 }
}
function LocalSuburb(suburb) {
 if (!isWhitespace(UpdateForm.pmcex007.value)) {
  LookupSuburb(suburb);
 }
}

function valSchoolPostCode(){
  UpCase(UpdateForm.d_pmres036);
  if(trim(UpdateForm.d_pmres038.value)!="8888"){
    suburb   = UpdateForm.d_pmres036
    state    = UpdateForm.d_pmres037;
    postcode = UpdateForm.d_pmres038;
    LookupPostCode(UpdateForm.d_pmres036.value);
  }
}

function valEmplPostCode(){
  UpCase(UpdateForm.pmres019);
  if(trim(UpdateForm.pmres021.value)!="8888"){
    suburb   = UpdateForm.pmres019
    state    = UpdateForm.pmres020;
    postcode = UpdateForm.pmres021;
    LookupPostCode(UpdateForm.pmres019.value);
  }
}

function DispReciprocal() {
  ind=document.UpdateForm.pmres010.value.substr(5,1)
  if (ind=="R") {
     reciphd.innerHTML=recipfl.innerHTML;
  } else {
     reciphd.innerHTML="";
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


function ChkSchool() {
  if(!isWhitespace(document.UpdateForm.pmres015.value)) {
    document.UpdateForm.d_ffaddr.checked=0;
    document.UpdateForm.d_ffaddr.disabled=true;
  } else {
    document.UpdateForm.d_ffaddr.disabled=false;
  }
}
function ClearSchool(){
  document.UpdateForm.pmres033.value="";
  document.UpdateForm.pmres034.value="";
  document.UpdateForm.pmres035.value="";
  document.UpdateForm.pmres036.value="";
  document.UpdateForm.pmres037.value="";
  document.UpdateForm.pmres038.value="";
  document.UpdateForm.pmres039.value="";
  document.UpdateForm.pmres040.value="";
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

function SetLocal() {
  p=document.UpdateForm
  if(p.d_pmres022.checked==true){
    document.UpdateForm.pmcex007.className="Mandatory";
    document.UpdateForm.pmcex009.className="Mandatory";
    document.UpdateForm.pmcex011.className="Mandatory";
  } else {
    document.UpdateForm.pmcex007.className="";
    document.UpdateForm.pmcex009.className="";
    document.UpdateForm.pmcex011.className="";
  }
}


