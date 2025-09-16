//jsVersion  : V11.03.02
//========================================================================
// Program   : admission.js
//
// Function  : Standard Functions Used in patweb89
//---------------------------------------------------------------

var checkMen;
var specialtyArray = new Array();

function setAlert() {
  if(document.UpdateForm.ptmis064.value.substr(3,1)=="1"){
    linkURL="cliweb01.pbl?reportno=1&template=005" +
          "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
          "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
          "&alert001=H3&alert002=&admalert=1";

    Left=(document.body.clientWidth-700)/2;
    DFrameLink(linkURL,90,Left,700,450);
 }
}
function  masContact(linkUrl)  {
  myWin=open(linkUrl, "ContactDetails",
  "width=480,height=240,scrollbars=no,status=no,toolbar=no,menubar=no");
}
//
function  masAccount(linkUrl)  {
  myWin=open(linkUrl, "AccountDetails",
  "width=480,height=240,scrollbars=no,status=no,toolbar=no,menubar=no");
}
function casemixSearch(drgName,drgCode)  {
  if (document.pat89adm.fldrgmbs[0].checked) {
         drgSearch(drgName,drgCode)  }
  else {
         mbsSearch(drgName,drgCode)  }
}
function  masDetails(linkUrl)  {
  myWin=open(linkUrl, "MasterDetails",
  "width=620,height=380,scrollbars=no,status=no,toolbar=no,menubar=no");
}
function  masClaim()  {
      i=document.pat89adm.ptmis022.selectedIndex
      claimType=document.pat89adm.ptmis022.options[i].value.substring(3,4)
      document.linkForm.target="ClaimDetails"
      if (claimType=='V'){
        document.linkForm.template.value="7" 
        ClaimDetails=open("","ClaimDetails",
        "width=350,height=100,scrollbars=no,status=no,toolbar=no,menubar=no")
        document.linkForm.submit()
        }
      else {
      if (claimType=='M'){
        document.linkForm.template.value="6" 
        ClaimDetails=open("","ClaimDetails",
        "width=500,height=460,scrollbars=no,status=no,toolbar=no,menubar=no")
        document.linkForm.submit()
        }
      else {
      if (claimType=='W'){
        document.linkForm.template.value="5" 
        ClaimDetails=open("","ClaimDetails",
        "width=600,height=300,scrollbars=no,status=no,toolbar=no,menubar=no")
        document.linkForm.submit()
        }
      else
       { alert("No Claim Details Required")
       }
       }
       }
}
function  cancelCode(linkUrl)  {
  myWin=open(linkUrl, "CancellationCode",
  "width=200,height=140,scrollbars=no,status=no,toolbar=no,menubar=no");
}
//
function ValidateMandatory(theForm)
{
   exit=true

   if (document.pat89pad.ptmis004.value=="") {
     alert("Please enter Ward/Bed before admitting patient")
     return(false)
   }
//
   if (document.pat89pad.ptmis001.value=="") {
       alert("Please enter Admission Date before admitting patient")
       return(false)
   }
//
   if (document.pat89pad.ptmis002.value=="") {
       alert("Please enter Admission Time before admitting patient")
       return(false)
   }
//
   if (document.pat89pad.ptmis009.value=="") {
       alert("Please enter Referral Source before admitting patient")
       return(false)
   }
//
   if (document.pat89pad.ptmis042.value=="") {
       alert("Please enter Readmission Indicator before admitting patient")
       return(false)
   }
//
   if ((document.pat89pad.ptmis007.value=="") ||
      (isWhitespace(document.pat89pad.ptmis007.value))){
       alert("Please enter Admitting Doctor before admitting patient")
       return(false)
   }
//
   if (document.pat89pad.ptmis011.value=="") {
       alert("Please enter Patient Type before admitting patient")
       return(false)
   }
//
   if ((document.pat89pad.ptmis006.value=="") ||
      (isWhitespace(document.pat89pad.ptmis006.value))){
       alert("Please enter Referring Doctor before admitting patient")
       return(false)
   }
//
   if (document.pat89pad.ptmis012.value=="") {
       alert("Please enter Admission Type before admitting patient")
       return(false)
   }
//
   if ((document.pat89pad.ptmis010.value=="") ||
      (isWhitespace(document.pat89pad.ptmis010.value))){
       alert("Please enter Specialty before admitting patient")
       return(false)
   }
//
   if ((document.pat89pad.ptmis039.value=="") ||
      (isWhitespace(document.pat89pad.ptmis039.value))){
       alert("Please enter Operator ID before admitting patient")
       return(false)
   }
//
   if (document.pat89pad.ptmis013.value=="") {
       alert("Please enter Hospital before admitting patient")
       return(false)
   }
//
   if (document.pat89pad.ptmis061.value=="") {
       alert("Please enter Health Agency before admitting patient")
       return(false)
   }
//
   if (document.pat89pad.ptmis060.value=="") {
       alert("Please enter Purchasing RHA before admitting patient")
       return(false)
   }
//
   if (document.pat89pad.newbmand.value=="1") {
     if (document.pat89pad.ptmis041.value=="") {
         alert("Please enter Gestation Period before admitting patient")
         return(false)
     }
   }
//
   if (document.pat89pad.agebmand.value=="1") {
     if (document.pat89pad.ptmis051.value=="") {
         alert("Please enter Admission Weight before admitting patient")
         return(false)
     }
   }
//
}
//
//
function displayDiv(OptionType,Field) {
if (Field == "AT") {
  if (OptionType.value.substr(0,3) == "WL ") {
    WaitingList.innerHTML=WaitingList.innerHTML
  }else if (OptionType.value.substr(0,3) == "ZW ") {
    WaitingList.innerHTML=WaitingList.innerHTML
  }else {
    WaitingList.innerHTML="";
  }
}
//
if (Field == "PT") {
  if (OptionType.value.substr(6,1) == "B") {
    NewBorn.innerHTML=NewBorn1.innerHTML
    if(document.UpdateForm.ptmis077!=undefined){
      document.UpdateForm.ptmis077.className="Mandatory";
    }
    document.UpdateForm.newbmand.value=1;
  }else {
    NewBorn.innerHTML="";
    if(document.UpdateForm.ptmis077!=undefined){
      document.UpdateForm.ptmis077.className="";
    }
    document.UpdateForm.newbmand.value=0;
  }
}
//
}//end displayDiv
//
function DisplayTransfer() {
  var i    = document.UpdateForm.ptmis009.selectedIndex;
  var ind1 = document.UpdateForm.ptmis009.options[i].value.substring(3,4);
  var ind  = document.UpdateForm.ptmis009.options[i].value.substring(4,5);
  if (ind != "1") {
   document.getElementById('transferxx').style.display="none";
   document.getElementById('trnsfsrc').className="";
   document.getElementById('trnsfsrc').value="";
  } else {
   document.getElementById('transferxx').style.display="";
   document.getElementById('trnsfsrc').className="Mandatory";
  }
}
function displayPrev(){
  p=document.UpdateForm
  if(!isWhitespace(p.dispprev.value)){
    document.getElementById('prevhospxx').style.display="";
//    document.getElementById('prevhosp').checked="true";
  } else {
    document.getElementById('prevhospxx').style.display="none";
//    document.getElementById('prevhosp').checked="";
  }
}

function DisplayTrnSrc() 
{
  var i    = document.UpdateForm.ptmis009.selectedIndex;
  var ind1 = document.UpdateForm.ptmis009.options[i].value.substring(3,4);
  var ind  = document.UpdateForm.ptmis009.options[i].value.substring(4,5);

  var TranSrcHeading = document.getElementById('TranSrcHeading');
  var TranSrc        = document.getElementById('TranSrc');

  if (ind!="1") 
  {
    TranSrc.innerHTML = document.getElementById('transferblank').innerHTML;
    TranSrcHeading.innerHTML = "";
    if(document.getElementsByName("ptmis082").length!==0){
        document.getElementsByName("ptmis082")[0].className="Integer";
    }
    if (document.UpdateForm.trnsfsrc != undefined) {
      document.UpdateForm.trnsfsrc.value = "";
    }
  } 
  else 
  {
    TranSrcHeading.innerHTML = document.getElementById('transferhd').innerHTML;
    TranSrc.innerHTML        = document.getElementById('transfersrc').innerHTML;
    if(document.getElementsByName("ptmis082").length!==0){
      document.getElementsByName("ptmis082")[0].className="Integer DefaultBlank Mandatory";
    }
  }
  if(document.all.QASHeading!=undefined){
      QASHeading.innerHTML=qasheading.innerHTML;
      QASNumber.innerHTML=qasnumber.innerHTML;
  }
}

function ChkAmbulanceNo() {
  i=document.UpdateForm.ptvis103.selectedIndex;
  ind1=document.UpdateForm.ptvis103.options[i].value.substring(3,4)
//
  if (ind1!="A") {
    document.UpdateForm.ptvis105.className="ReadOnly";
  } else {
//  document.UpdateForm.ptvis105.className="Mandatory";
    document.UpdateForm.ptvis105.className="";
    document.UpdateForm.ptvis105.focus();
 }
}

function DisplayContract() {
  i=document.UpdateForm.ptmis010.selectedIndex;
  ind=document.UpdateForm.ptmis010.options[i].value.substring(14,15)
  if (ind=="C" || ind=="S" || ind=="H") {
    ContractHeading.innerHTML=contracthd.innerHTML;
    ContractType.innerHTML=contracttype.innerHTML;
    Contrac1Heading.innerHTML=contracrhd.innerHTML;
    ContractRole.innerHTML=contractrole.innerHTML;
    Contrac2Heading.innerHTML=contracihd.innerHTML;
    ContractId.innerHTML=contractid.innerHTML;
  } else {
    ContractHeading.innerHTML=blanklabel.innerHTML;
    ContractType.innerHTML="";
    Contrac1Heading.innerHTML=blanklabel.innerHTML;
    ContractRole.innerHTML="";
    Contrac2Heading.innerHTML=blanklabel.innerHTML;
    ContractId.innerHTML="";
  }
  if (ind=="S"||ind=="H") {
     document.UpdateForm.ptasf001.className="Readonly";
     document.UpdateForm.ptasf002.className="Readonly";
     document.UpdateForm.ptasf001.value="";
     document.UpdateForm.ptasf002.value="";
   } else if (ind=="C"){
     document.UpdateForm.ptasf001.className="Mandatory";
     document.UpdateForm.ptasf002.className="Mandatory";
  }
}
function DisplayContractAdmittedHEA() {
  if(!document.getElementById("ptcnhdps")) {
    return;
  }
  var State=document.getElementById("ptcnhdps").value

  if(State == "2") { // NSW
    ind=document.UpdateForm.ptmis027.value.substring(37,38)
    if (ind=="C") {
      ContractHeading.innerHTML=contracthd.innerHTML;
      ContractType.innerHTML=contracttype.innerHTML;
      Contrac1Heading.innerHTML=contracrhd.innerHTML;
      ContractRole.innerHTML=contractrole.innerHTML;
      Contrac2Heading.innerHTML=contracihd.innerHTML;
      ContractId.innerHTML=contractid.innerHTML;
    } else {
      ContractHeading.innerHTML=blanklabel.innerHTML;
      ContractType.innerHTML="";
      Contrac1Heading.innerHTML=blanklabel.innerHTML;
      ContractRole.innerHTML="";
      Contrac2Heading.innerHTML=blanklabel.innerHTML;
      ContractId.innerHTML="";
    }
  }

  if(State == "3") { // VIC
    ind = document.UpdateForm.admistyp.value.substring(14,15);
    if (ind=="C" || ind=="S" || ind=="H") {
      ContractHeading.innerHTML=contracthd.innerHTML;
      ContractType.innerHTML=contracttype.innerHTML;
      Contrac1Heading.innerHTML=contracrhd.innerHTML;
      ContractRole.innerHTML=contractrole.innerHTML;
      Contrac2Heading.innerHTML=contracihd.innerHTML;
      ContractId.innerHTML=contractid.innerHTML;
      if (ind=="C") {
        ProgramIDHeading.innerHTML=programhd.innerHTML;
        ProgramID.innerHTML=programdt.innerHTML;
      }
    } else {
      ContractHeading.innerHTML=blanklabel.innerHTML;
      ContractType.innerHTML="";
      Contrac1Heading.innerHTML=blanklabel.innerHTML;
      ContractRole.innerHTML="";
      Contrac2Heading.innerHTML=blanklabel.innerHTML;
      ContractId.innerHTML="";
      ProgramIDHeading.innerHTML=blanklabel.innerHTML;
      ProgramID.innerHTML="";
    }
  }

  if(State == "4") { // QLD
    if (document.UpdateForm.ptcnqcct.value=="S ") {
      ind=document.UpdateForm.ptmis009.value.substring(10,11)
    } else {
      ind=document.UpdateForm.ptmis027.value.substring(11,12)
    }
    if (ind=="P") {
        ContractHeading.innerHTML=contracthd.innerHTML;
        ContractType.innerHTML=contracttype.innerHTML;
        Contrac1Heading.innerHTML=contracrhd.innerHTML;
        ContractRole.innerHTML=contractrole.innerHTML;
        Contrac2Heading.innerHTML=contracihd.innerHTML;
        ContractId.innerHTML=contractid.innerHTML;
    } else {
        ContractHeading.innerHTML=blanklabel.innerHTML;
        ContractType.innerHTML="";
        Contrac1Heading.innerHTML=blanklabel.innerHTML;
        ContractRole.innerHTML="";
        Contrac2Heading.innerHTML=blanklabel.innerHTML;
        ContractId.innerHTML="";
    }
  }

  if(State == "5" || State == "8") { // SA or NT

  }

  if(State == "6") { // WA
    if (document.UpdateForm.ptcnwauc.value=="1") {
      ind=document.UpdateForm.admistyp.value.substring(14,15)
      if (ind=="5") {
        ContractHeading.innerHTML=contracthd.innerHTML;
        ContractType.innerHTML=contracttype.innerHTML;
        Contrac1Heading.innerHTML=contracrhd.innerHTML;
        ContractRole.innerHTML=contractrole.innerHTML;
        Contrac2Heading.innerHTML=contracihd.innerHTML;
        ContractId.innerHTML=contractid.innerHTML;
      } else {
        ContractHeading.innerHTML=blanklabel.innerHTML;
        ContractType.innerHTML="";
        Contrac1Heading.innerHTML=blanklabel.innerHTML;
        ContractRole.innerHTML="";
        Contrac2Heading.innerHTML=blanklabel.innerHTML;
        ContractId.innerHTML="";
      }
    }
  }

}

function DisplayContractHEA() {
  if(!document.getElementById("ptcnhdps")) {
    return;
  }
  var State=document.getElementById("ptcnhdps").value;
  if(State == "2") { // NSW
    DisplayContractHEA_NSW();

    if (document.getElementById('ptmis010').value.substr(5,1) == 'P' ||
        document.getElementById('ptmis010').value.substr(14,1) == '3') {
      if (typeof catYEtitleDIV != 'undefined') {
        catYEtitleDIV.innerHTML = catYEtitleSPAN.innerHTML;
        catYEfieldDIV.innerHTML = catYEfieldSPAN.innerHTML;
      }
    } else {
      if (typeof catYEtitleDIV != 'undefined') {
        catYEtitleDIV.innerHTML = "";
        catYEfieldDIV.innerHTML = "";
      }
    }

    if (document.getElementById('ptmis010').value.substr(5,1) == 'P') {
      if(document.getElementById("NSWFields1")) {
         document.getElementById("NSWFields1").style.display="";
      }
      if(document.getElementById("NSWFields2")) {
         document.getElementById("NSWFields2").style.display="";
      }
      //T0861841
      if(document.getElementById("NSWFields3")) {
         document.getElementById("NSWFields3").style.display="";
      }

      document.getElementById('ptvis095_nsw').className="SelectBig Mandatory";
      document.getElementById('ptvis104_nsw').className="SelectBig Mandatory";
    } else {
      if(document.getElementById("NSWFields1")) {
         document.getElementById("NSWFields1").style.display="none";
      }
      if(document.getElementById("NSWFields2")) {
         document.getElementById("NSWFields2").style.display="none";
      }
      //T0861841
      if(document.getElementById("NSWFields3")) {
         document.getElementById("NSWFields3").style.display="none";
      }

      document.getElementById('ptvis095_nsw').className="SelectBig";
      document.getElementById("ptvis104_nsw").className="SelectBig";
    }

  }

  if(State == "3") { // VIC
    DisplayContractHEA_VIC();
  }

  if(State == "4") { // QLD
    DisplayContractHEA_QLD();
  }

  if(State == "5" || State == "7" || State == "8") { // SA, TAS or NT

//    if (document.getElementById('ptmis010').value.substr(5,1) == 'P') {
      if(document.getElementById("SAFields1")) {
         document.getElementById("SAFields1").style.display="";
        }
//    } else {
//      if(document.getElementById("SAFields1")) {
//         document.getElementById("SAFields1").style.display="none";
//      }
//    }
    }

  if(State == "6") { // WA
    DisplayContractHEA_WA();

    if(document.getElementById("WAFields1")) {
       document.getElementById("WAFields1").style.display="";
    }
  }
}
function DisplayContractHEA_VIC() {
  i=document.UpdateForm.ptmis010.selectedIndex;
  ind=document.UpdateForm.ptmis010.options[i].value.substring(14,15)
  if (ind=="C" || ind=="S" || ind=="H") {
    ContractHeading.innerHTML=contracthd.innerHTML;
    ContractType.innerHTML=contracttype.innerHTML;
    Contrac1Heading.innerHTML=contracrhd.innerHTML;
    ContractRole.innerHTML=contractrole.innerHTML;
    Contrac2Heading.innerHTML=contracihd.innerHTML;
    ContractId.innerHTML=contractid.innerHTML;
    if (ind=="C") {
      ProgramIDHeading.innerHTML=programhd.innerHTML;
      ProgramID.innerHTML=programdt.innerHTML;
    }
  } else {
    ContractHeading.innerHTML=blanklabel.innerHTML;
    ContractType.innerHTML="";
    Contrac1Heading.innerHTML=blanklabel.innerHTML;
    ContractRole.innerHTML="";
    Contrac2Heading.innerHTML=blanklabel.innerHTML;
    ContractId.innerHTML="";
    ProgramIDHeading.innerHTML=blanklabel.innerHTML;
    ProgramID.innerHTML="";
  }
  if (ind=="S"||ind=="H") {
     document.UpdateForm.ptasf001.className="Readonly";
     document.UpdateForm.ptasf002.className="Readonly";
     document.UpdateForm.ptasf001.value="";
     document.UpdateForm.ptasf002.value="";
   } else if (ind=="C"){
     document.UpdateForm.ptasf001.className="Mandatory";
     document.UpdateForm.ptasf002.className="Mandatory";
  }
}
function DisplayContractHEA_NSW() {
  i=document.UpdateForm.ptmis027.selectedIndex;
  ind=document.UpdateForm.ptmis027.options[i].value.substring(37,38)
  if (ind=="C") {
    ContractHeading.innerHTML=contracthd.innerHTML;
    ContractType.innerHTML=contracttype.innerHTML;
    Contrac1Heading.innerHTML=contracrhd.innerHTML;
    ContractRole.innerHTML=contractrole.innerHTML;
    Contrac2Heading.innerHTML=contracihd.innerHTML;
    ContractId.innerHTML=contractid.innerHTML;
  } else {
    ContractHeading.innerHTML=blanklabel.innerHTML;
    ContractType.innerHTML="";
    Contrac1Heading.innerHTML=blanklabel.innerHTML;
    ContractRole.innerHTML="";
    Contrac2Heading.innerHTML=blanklabel.innerHTML;
    ContractId.innerHTML="";
  }
}
function DisplayContractHEA_WA() {
  if (document.UpdateForm.ptcnwauc.value=="1") {
    i=document.UpdateForm.ptmis010.selectedIndex;
    ind=document.UpdateForm.ptmis010.options[i].value.substring(14,15)
    if (ind=="5") {
      ContractHeading.innerHTML=contracthd.innerHTML;
      ContractType.innerHTML=contracttype.innerHTML;
      Contrac1Heading.innerHTML=contracrhd.innerHTML;
      ContractRole.innerHTML=contractrole.innerHTML;
      Contrac2Heading.innerHTML=contracihd.innerHTML;
      ContractId.innerHTML=contractid.innerHTML;
    } else {
      ContractHeading.innerHTML=blanklabel.innerHTML;
      ContractType.innerHTML="";
      Contrac1Heading.innerHTML=blanklabel.innerHTML;
      ContractRole.innerHTML="";
      Contrac2Heading.innerHTML=blanklabel.innerHTML;
      ContractId.innerHTML="";
    }
  }
}
function DisplayContractHEA_QLD() {
  if (document.UpdateForm.ptcnqcct.value=="S ") {
    i=document.UpdateForm.ptmis009.selectedIndex;
    ind=document.UpdateForm.ptmis009.options[i].value.substring(10,11)
  } else {
    i=document.UpdateForm.ptmis027.selectedIndex;
    ind=document.UpdateForm.ptmis027.options[i].value.substring(11,12)
  }
  if (ind=="P") {
      ContractHeading.innerHTML=contracthd.innerHTML;
      ContractType.innerHTML=contracttype.innerHTML;
      Contrac1Heading.innerHTML=contracrhd.innerHTML;
      ContractRole.innerHTML=contractrole.innerHTML;
      Contrac2Heading.innerHTML=contracihd.innerHTML;
      ContractId.innerHTML=contractid.innerHTML;
  } else {
      ContractHeading.innerHTML=blanklabel.innerHTML;
      ContractType.innerHTML="";
      Contrac1Heading.innerHTML=blanklabel.innerHTML;
      ContractRole.innerHTML="";
      Contrac2Heading.innerHTML=blanklabel.innerHTML;
      ContractId.innerHTML="";
  }
}


function DisplayContractSTV() {
  i=document.UpdateForm.ptmis010.selectedIndex;
  ind=document.UpdateForm.ptmis010.options[i].value.substring(14,15)
  if (ind=="C" || ind=="S" || ind=="H") {
    ContractHeading.innerHTML=contracthd.innerHTML;
    ContractType.innerHTML=contracttype.innerHTML;
    Contrac1Heading.innerHTML=contracrhd.innerHTML;
    ContractRole.innerHTML=contractrole.innerHTML;
    Contrac2Heading.innerHTML=contracihd.innerHTML;
    ContractId.innerHTML=contractid.innerHTML;
  } else {
    ContractHeading.innerHTML=blanklabel.innerHTML;
    ContractType.innerHTML="";
    Contrac1Heading.innerHTML=blanklabel.innerHTML;
    ContractRole.innerHTML="";
    Contrac2Heading.innerHTML=blanklabel.innerHTML;
    ContractId.innerHTML="";
  }
  if (ind=="S"||ind=="H") {
     document.UpdateForm.ptasf001.className="Readonly";
     document.UpdateForm.ptasf002.className="Readonly";
     document.UpdateForm.ptasf001.value="";
     document.UpdateForm.ptasf002.value="";
   } else if (ind=="C"){
     document.UpdateForm.ptasf001.className="Mandatory";
     document.UpdateForm.ptasf002.className="Mandatory";
  }

  if (ind=="S"){
     document.UpdateForm.ptasf003.className="Mandatory";
  }
}
function DisContractWAhealth() {
    i=document.UpdateForm.ptmis010.selectedIndex;
    ind=document.UpdateForm.ptmis010.options[i].value.substring(14,15)
    ind2=document.UpdateForm.ptmis010.options[i].value.substring(14,16)
    if (ind=="0"||ind=="5"||ind=="9"|ind2=="10") {
      document.getElementById('contractxx').style.display="";
      document.UpdateForm.ptasf003.className="Mandatory";
    } else {
      document.getElementById('contractxx').style.display="none";
      document.UpdateForm.ptasf003.className="";
    }
}


function DisContractWA() {
  if (document.UpdateForm.ptcnwauc.value=="1") {
    i=document.UpdateForm.ptmis010.selectedIndex;
    ind=document.UpdateForm.ptmis010.options[i].value.substring(14,15)
    if (ind=="5"||ind=="0") {
      ContractHeading.innerHTML=contracthd.innerHTML;
      ContractType.innerHTML=contracttype.innerHTML;
      Contrac1Heading.innerHTML=contracrhd.innerHTML;
      ContractRole.innerHTML=contractrole.innerHTML;
      Contrac2Heading.innerHTML=contracihd.innerHTML;
      ContractId.innerHTML=contractid.innerHTML;
    } else {
      ContractHeading.innerHTML=blanklabel.innerHTML;
      ContractType.innerHTML="";
      Contrac1Heading.innerHTML=blanklabel.innerHTML;
      ContractRole.innerHTML="";
      Contrac2Heading.innerHTML=blanklabel.innerHTML;
      ContractId.innerHTML="";
    }
  }
}
function DisContract() {
  if (document.UpdateForm.ptcnqcct.value=="S ") {
    i=document.UpdateForm.ptmis009.selectedIndex;
    ind=document.UpdateForm.ptmis009.options[i].value.substring(10,11)
  } else {
    i=document.UpdateForm.ptmis027.selectedIndex;
    ind=document.UpdateForm.ptmis027.options[i].value.substring(11,12)
  }
  if (ind=="P") {
    ContractHeading.innerHTML=contracthd.innerHTML;
    ContractType.innerHTML=contracttype.innerHTML;
    Contrac1Heading.innerHTML=contracrhd.innerHTML;
    ContractRole.innerHTML=contractrole.innerHTML;
    Contrac2Heading.innerHTML=contracihd.innerHTML;
    ContractId.innerHTML=contractid.innerHTML;
  } else {
    ContractHeading.innerHTML=blanklabel.innerHTML;
    ContractType.innerHTML="";
    Contrac1Heading.innerHTML=blanklabel.innerHTML;
    ContractRole.innerHTML="";
    Contrac2Heading.innerHTML=blanklabel.innerHTML;
    ContractId.innerHTML="";
  }
}
function ContractMand() {
  i=document.UpdateForm.ptmis027.selectedIndex;
  ind=document.UpdateForm.ptmis027.options[i].value.substring(11,12)
  if ((document.UpdateForm.ptcnqcct.value=="CL") && (ind=="P")) {
      document.UpdateForm.ptasf001.className="Mandatory";
      document.UpdateForm.ptasf002.className="Mandatory";
      document.UpdateForm.ptasf003.className="Mandatory";
      return;
    }
  if (document.UpdateForm.ptasf001 != undefined) {
   document.UpdateForm.ptasf001.className="";
   document.UpdateForm.ptasf002.className="";
   document.UpdateForm.ptasf003.className="";
  }
}

function setMHRedirect()
{
  if (document.UpdateForm.catmhlsa == undefined)
    return false;

  var catAllocMHLS = document.UpdateForm.catmhlsa.value;
  var ind14 = "";

  var pUnit = null;
  var pCareType = null;

  // get 'Care Type' element
  if (document.UpdateForm.d_ptmi12 != undefined) {
    pCareType = document.UpdateForm.d_ptmi12;
  }
  else if (document.UpdateForm.ptmis012 != undefined) {
    pCareType = document.UpdateForm.ptmis012;
  }

  // get 'Unit' element
  if (document.UpdateForm.d_ptmi24 != undefined) {
    pUnit = document.UpdateForm.d_ptmi24;
  }
  else if (document.UpdateForm.ptmis024 != undefined) {
    pUnit = document.UpdateForm.ptmis024;
  }

  //
  // Get indicator 14 value
  //
  if (catAllocMHLS == "AC")
  {
    // Cat AC - Unit
    ind14 = pUnit.value.substr(30,1);
  }
  else if (catAllocMHLS == "CC") {
    // Cat CC - Care Type
    ind14 = pCareType.value.substr(30,1);
  }

  if (ind14 == "M") {
    if (document.UpdateForm.mhadmflg != undefined) {
      document.UpdateForm.mhadmflg.value = "1";
    }

    document.UpdateForm.redirect.value="patweb89.pbl?reportno=07&template=001"
    + "&urnumber=" + document.UpdateForm.urnumber.value
    + "&admissno=";

    return true;
  }

  return false;
}
 
function setNDISRedirect() {
  // Set redirect to Concenssion Cards Maintenance if NDIS Participant
  if (document.UpdateForm.ptvis121 != undefined) {
    var i=document.UpdateForm.ptvis121.selectedIndex;
    var hdp1=document.UpdateForm.ptvis121.options[i].value.substr(14,1);

    if (hdp1 == "2" || hdp1 == "3") {
      var ans = confirm("Warning: NDIS Participant - ensure NDIS participant number has been recorded in Concession Card Maintenance. Would you like to enter NDIS details now?");

      if (ans) {
        document.UpdateForm.redirect.value =
          "patweb07.pbl?reportno=04&template=004" +
          "&urnumber=" + document.UpdateForm.urnumber.value +
          "&admissno=";
      }
    }
  }
}

function setRedirect()
{
  if (setMHRedirect())
    return;

  checkMen=" ";
  if (document.UpdateForm.d_ptmis024 != undefined) {
   checkMen=document.UpdateForm.d_ptmis024.value.substr(7,1);
  }

  if (checkMen=="P") {
    if (document.UpdateForm.mhadmflg != undefined)
    {
      document.UpdateForm.mhadmflg.value="1";
    }
  }

  if (document.UpdateForm.ptcnxcom != undefined) {
    if (document.UpdateForm.ptcnxcom.value == "1") {
      setRedirectXCom();
      return;
    }
  }

  checkInd=document.UpdateForm.ptmis027.value.substr(3,5)
  if (checkInd.search(/E/g) >= 0) {
    document.UpdateForm.redirect.value="patweb78.pbl?reportno=06&template=002"
    + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
    + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
  } else if (checkInd.search(/M/g) >= 0) {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=006"
    + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
    + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
  } else if (checkInd.search(/V/g) >= 0) {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=007"
    + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
    + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
  } else if (checkInd.search(/W/g) >= 0) {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=005"
    + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
    + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
  } else if (checkInd.search(/D/g) >= 0) {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=080"
    + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
    + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
  } else if (document.UpdateForm.ptmis027.value.substr(8,1) == "C") {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=021"
    + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
    + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
  } else if (document.UpdateForm.mvmedrec.value == "1") {
    document.UpdateForm.redirect.value="mrtweb01.pbl?reportno=09&template=003"
    + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
    + "&admissno=" + document.PatientLinks.admissno.value + "&admissno=";
  } else {
    document.UpdateForm.redirect.value="patweb98.pbl?reportno=01&template=002"
    + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
    + "&admissno=" + document.PatientLinks.admissno.value + "&admissno=";
  }

  setNDISRedirect();
}

function setRedirectXCom() {
  checkComp=document.UpdateForm.ptmis027.value.substr(3,1);
   if (checkComp=="D") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=080"
     + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
     + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
   } else if (checkComp=="A") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=340"
     + "&urnumber=" + document.UpdateForm.urnumber.value
     + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
   } else if (checkComp=="O") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=341"
     + "&urnumber=" + document.UpdateForm.urnumber.value
     + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
   } else if (checkComp=="M") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=342"
     + "&urnumber=" + document.UpdateForm.urnumber.value
     + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
   } else if (checkComp=="F") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=343"
     + "&urnumber=" + document.UpdateForm.urnumber.value
     + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
   } else if (checkComp=="H") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=344"
     + "&urnumber=" + document.UpdateForm.urnumber.value
     + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
   } else if (checkComp=="S") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=345"
     + "&urnumber=" + document.UpdateForm.urnumber.value
     + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
   } else if (checkComp=="V") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=346"
     + "&urnumber=" + document.UpdateForm.urnumber.value
     + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
   } else if (checkComp=="W") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=347"
     + "&urnumber=" + document.UpdateForm.urnumber.value
     + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
   } else if (checkComp=="E") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=348"
     + "&urnumber=" + document.UpdateForm.urnumber.value
     + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
   } else if (checkComp=="G") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=349"
     + "&urnumber=" + document.UpdateForm.urnumber.value
     + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
   } else if (document.UpdateForm.mvmedrec.value == "1") {
     document.UpdateForm.redirect.value="mrtweb01.pbl?reportno=09&template=003"
     + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.PatientLinks.admissno.value + "&admissno=";
   } else {
     if (checkMen=="P") {
       if (document.UpdateForm.mhadmflg != undefined)
       {
         document.UpdateForm.redirect.value="patweb89.pbl?reportno=07&template=001"
         + "&urnumber=" + document.UpdateForm.urnumber.value
         + "&admissno=";

         SetCookie("mentalhealthcookie","1");

         return;
       }
     } else {
       document.UpdateForm.redirect.value="patweb98.pbl?reportno=01&template=002"
       + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
       + "&admissno=" + document.PatientLinks.admissno.value + "&admissno=";
     }
   }

   setNDISRedirect();
}


function setRedirectAdm()
{
  if (setMHRedirect())
    return;

  checkMen=" ";
  if (document.UpdateForm.ptmis024 != undefined) {
    checkMen=document.UpdateForm.ptmis024.value.substr(7,1);
  }

  if (checkMen=="P") {
    if (document.UpdateForm.mhadmflg != undefined)
    {
      document.UpdateForm.mhadmflg.value="1";
    }
  }

  if (document.UpdateForm.ptcnxcom != undefined) {
    if (document.UpdateForm.ptcnxcom.value == "1") {
      setRedirectAdmXCom();
      return;
    }
  }

  if (checkMen=="P") {
    if (document.UpdateForm.mhadmflg != undefined)
    {
      document.UpdateForm.mhadmflg.value="1";
      document.UpdateForm.redirect.value="patweb89.pbl?reportno=07&template=001"
      + "&urnumber=" + document.UpdateForm.urnumber.value
      + "&admissno=";
      return;
    }
  }

  if (document.UpdateForm.cfinan.value=="1") {
    document.UpdateForm.redirect.value="patweb71.pbl?reportno=04&template=006"
    + "&urnumber=" + document.UpdateForm.urnumber.value
    + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
  } else if (document.UpdateForm.cfinan.value=="2") {
    document.UpdateForm.redirect.value="patweb71.pbl?reportno=04&template=013"
    + "&urnumber=" + document.UpdateForm.urnumber.value
    + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
  } else if (document.UpdateForm.ptmis027.value.substr(3,1) == "M") {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=006"
    + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
    + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
  } else if (document.UpdateForm.ptmis027.value.substr(3,1) == "V") {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=007"
    + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
    + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
  } else if (document.UpdateForm.ptmis027.value.substr(3,1) == "W") {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=005"
    + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
    + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
  } else if (document.UpdateForm.ptmis027.value.substr(3,1) == "D") {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=080"
    + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
    + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
  } else if (document.UpdateForm.ptmis027.value.substr(3,1) == "C") {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=021"
    + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
    + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
  } else if (document.UpdateForm.mvmedrec.value == "1") {
    document.UpdateForm.redirect.value="mrtweb01.pbl?reportno=09&template=004"
    + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
    + "&admissno=" + document.PatientLinks.admissno.value + "&admissno=";
  } else {
    document.UpdateForm.redirect.value="patweb98.pbl?reportno=01&template=043"
    + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
    + "&admissno=" + document.PatientLinks.admissno.value + "&admissno=";
  }

  setNDISRedirect();
}
//
function setRedirectAdmXCom() {
  checkComp=document.UpdateForm.ptmis027.value.substr(3,1);
  if (checkComp=="D") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=080"
     + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
     + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
   } else if (checkComp=="A") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=340"
     + "&urnumber=" + document.UpdateForm.urnumber.value
     + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
   } else if (checkComp=="O") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=341"
     + "&urnumber=" + document.UpdateForm.urnumber.value
     + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
   } else if (checkComp=="M") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=342"
     + "&urnumber=" + document.UpdateForm.urnumber.value
     + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
   } else if (checkComp=="F") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=343"
     + "&urnumber=" + document.UpdateForm.urnumber.value
     + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
   } else if (checkComp=="H") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=344"
     + "&urnumber=" + document.UpdateForm.urnumber.value
     + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
   } else if (checkComp=="S") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=345"
     + "&urnumber=" + document.UpdateForm.urnumber.value
     + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
   } else if (checkComp=="V") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=346"
     + "&urnumber=" + document.UpdateForm.urnumber.value
     + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
   } else if (checkComp=="W") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=347"
     + "&urnumber=" + document.UpdateForm.urnumber.value
     + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
   } else if (checkComp=="E") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=348"
     + "&urnumber=" + document.UpdateForm.urnumber.value
     + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
   } else if (checkComp=="G") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=349"
     + "&urnumber=" + document.UpdateForm.urnumber.value
     + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
   } else if (document.UpdateForm.mvmedrec.value == "1") {
     document.UpdateForm.redirect.value="mrtweb01.pbl?reportno=09&template=004"
     + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.PatientLinks.admissno.value + "&admissno=";
   } else {
     if (checkMen=="P") {
       if (document.UpdateForm.mhadmflg != undefined)
       {
         document.UpdateForm.redirect.value="patweb89.pbl?reportno=07&template=001"
         + "&urnumber=" + document.UpdateForm.urnumber.value
         + "&admissno=";
         return;
       }
     } else {
       document.UpdateForm.redirect.value="patweb98.pbl?reportno=01&template=043"
       + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
       + "&admissno=" + document.PatientLinks.admissno.value + "&admissno=";
     }
   }

   setNDISRedirect();
}

function checkTableadm() {
  if(!isWhitespace(document.UpdateForm.ptmis013.value)) {
    document.UpdateForm.ptmis014.className="Mandatory";
  } else {
    document.UpdateForm.ptmis014.value="";
    document.UpdateForm.ptmis014.className="";
    document.UpdateForm.tabldesc.value="";
  }
}
//
function valIntStay(intstay,criteria) {
    intstay=document.UpdateForm.ptvis043.value.substr(3,1)
    criteria=document.UpdateForm.ptvis041.value.substr(3,1)
    errorflag="false"
    if(intstay==1){
        if(criteria!=1){
             alert("Invalid Intended Stay for Admission Criteria.")
             errorflag="true";
             return;}
          }
    if(intstay==2){
        if(criteria!=2){
             alert("Invalid Intended Stay for Admission Criteria.")
             errorflag="true";
             return false;}
          }
}
//
// Check if admission date is in the past (warning)
function CheckAdmitDate(){
      var strtDay  = document.UpdateForm.ptmis001.value.substring(0,2);
      var strtMon  = document.UpdateForm.ptmis001.value.substring(3,6);
      var strtYear = document.UpdateForm.ptmis001.value.substring(7,11);
      strtMon = GetMonthNumber(strtMon);

      var strtDate = strtYear + strtMon + strtDay
      if(!CheckFuture(strtDate)){
        ans=confirm("Warning: Admission date is prior to current date.")
        if(ans==false){
         return;
      }
    }
}
//
function ContType(type) {
  var ValidCodes = "123458 "
  if (ValidCodes.indexOf(type.value)==-1) {
  alert ("Invalid Contract Type");
  type.value="";
  type.focus();
  }
}

function ContRole(role) {
  var ValidCodes = "AB "
  if (ValidCodes.indexOf(role.value)==-1) {
  alert ("Invalid Contract Role");
  role.value="";
  role.focus();
  }
}

//------------------------------------------------------------
// Contract Type Alert
//------------------------------------------------------------
function ContTypeAlert() {
  alert("Valid Contract Type Number\n\n" +
"1 - B    A (health authority/other external purchaser) contracts B (hospital) for admitted service\n" +
"\n" +
"2 - ABA  Patient admitted by Hospital A. Hospital A contracts Hospital B for admitted or non-admitted patient service.\n" +
"Patient Returns to Hospital A on completion of service by Hospital B.\n" +
"\n" +
"3 - AB   Patient admitted by Hospital A. Hospital A contracts Hospital B for admitted or non-admitted patient service\n" +
"Patient Does not return to Hospital A on conmpletion of service by Hospital B.\n" +
"\n" +
"4 - (A)B Patient not admitted by Hospital A. Hospital A contracts Hospital B for the whole admitted patient service\n" +
"\n" +
"5 - BA   Hospital A, which does not initially admit the patient, contracts Hospital B for an admitted patient service\n" +
"following which the patient is transferred to and admitted by Hospital A.\n" + 
"\n" +
"8 - BAB Patient is admitted to Hospital B under contract to Hospital A, then receives admitted care at Hospital A before\n" +
"returning to Hospital B for remainder of care.\n" );
}
//
//------------------------------------------------------------
// Contract Role Alert
//------------------------------------------------------------
function ContRoleAlert() {
  alert("Valid Contract Role Character\n\n" +
"A - The Contracting (purchasing) hospital is termed Hospital A.\n" +
"\n" +
"B - The contracted (service provider) hospital is termed Hospital B." )
}
//
//------------------------------------------------------------
// Set Link ACC Redirect and Return program after link ACC
//------------------------------------------------------------
function SetLinkACC(CurForm,ReturnCd) {
  if ((CurForm.ptcnueoc.value==1)&&(CurForm.ptmis027.value.substr(5,1)=='A')) {
       CurForm.redirect.value="eocweb01.pbl?reportno=01&template=006"
             + "&urnumber=" + CurForm.urnumber.value.replace(/ /g,"+") 
             + '&returncd=' + ReturnCd
             + "&admissno=";
  }
  if (CurForm.ptmis027.value.substr(3,1)=='W') {
       CurForm.redirect.value="patweb89.pbl?reportno=01&template=005"
             + "&urnumber=" + CurForm.urnumber.value.replace(/ /g,"+")
             + "&admissno=";
  }
} //end SetLinkACC
//------------------------------------------------------------
// Set default Ward if Ward was prevously blank
//------------------------------------------------------------
function defaultWard() {
  if(isWhitespace(document.UpdateForm.exstward.value)){
    j=document.UpdateForm.ptvis046.value.substr(14,3)
    if (j.replace(/ /g,"") !="") {
      document.UpdateForm.ptmis004.selectedIndex=0;
      for (var i =0 ; i < document.UpdateForm.ptmis004.length; i++) {
        if (document.UpdateForm.ptmis004.options[i].value==
            document.UpdateForm.ptvis046.value.substr(14,3)) {
          document.UpdateForm.ptmis004.selectedIndex=i } };
    }
  }
}
function valContract(p){
  validateContract(p.ptmis027,p.ptmis026,p.ptmis007,p.ptmis013,p.nzhosp,p.ptmis004,p.ptmis001,p.retcount,p.retcontr,p.retcdesc);
    if(p.retcount.value==0){
       alert("No Contract Procedure Code can be assigned.");
       return false;
    }
    if(p.retcount.value==1){
      ans=confirm("Assigned Contract Procedure Code is : " + p.retcontr.value +
              "\n" + p.retcdesc.value + "\nClick OK to accept or cancel " +
              "to change contract details.")
      if(ans==true){
         document.UpdateForm.nzspr007.value=p.retcontr.value;
         return true;
      } else {
         document.UpdateForm.nzspr007.value="";
         return false;}
    }
    if(p.retcount.value>1){
      ans=confirm("More than one Contract Procedure Code can be assigned." +
              "\nClick OK to Review or cancel " +
              "to change contract details.")
      if(ans==true){
        ContractProcedureCodeSearchFrame(p.ptmis027,p.ptmis026,p.ptmis007,p.ptmis013,p.nzhosp,p.ptmis004,p.ptmis001,UpdateForm.nzspr007,UpdateForm.dummy);
        return false;
      } else {
        return false;}
    }
}
function setClaim(){
 if(document.UpdateForm.ptmis027.value.substr(9,1)=="P"||
  document.UpdateForm.ptmis027.value.substr(9,1)=="F"){
     document.UpdateForm.ptmis013.className="Mandatory";
     document.UpdateForm.ptmis026.className="Mandatory";
     document.UpdateForm.nzspr007.className="Mandatory";
  } else {
     document.UpdateForm.ptmis013.className="";
     document.UpdateForm.ptmis026.className="";
     document.UpdateForm.nzspr007.className="";
  }
     PatientInsHeading.innerHTML=patientinshd.innerHTML;
     //PatientIns.innerHTML=patientins.innerHTML;
     InsurerHeading.innerHTML=insurerhd.innerHTML;
     Insurer.innerHTML=insurer.innerHTML;
     ApprovalSightedHeading.innerHTML=approvalsightedhd.innerHTML;
     //ApprovalSighted.innerHTML=approvalsighted.innerHTML;
     ClaimNumberHeading.innerHTML=claimnumberhd.innerHTML;
     ClaimNumber.innerHTML=claimnumber.innerHTML;
     ApprovalDateHeading.innerHTML=approvaldatehd.innerHTML;
     ApprovalDate.innerHTML=approvaldate.innerHTML;
     CommentsHeading.innerHTML=commentshd.innerHTML;
     Comments.innerHTML=comments.innerHTML;
//   }else{
//     document.UpdateForm.ptmis013.className="";
//     document.UpdateForm.ptmis026.className="";
//     document.UpdateForm.nzspr007.className="";
//     PatientInsHeading.innerHTML="";
//     PatientIns.innerHTML=patientinsblank.innerHTML;
//     InsurerHeading.innerHTML="";
//     Insurer.innerHTML=insurerblank.innerHTML;
//     ApprovalSightedHeading.innerHTML="";
//     ApprovalSighted.innerHTML=approvalsightedblank.innerHTML;
//     ClaimNumberHeading.innerHTML="";
//     ClaimNumber.innerHTML=claimnumberblank.innerHTML;
//     ApprovalDateHeading.innerHTML="";
//     ApprovalDate.innerHTML=approvaldateblank.innerHTML;
//     CommentsHeading.innerHTML="";
//     Comments.innerHTML=commentsblank.innerHTML;
//  }
 document.UpdateForm.nzspr015.className="";
 document.UpdateForm.nzspr017.className="";
 if(document.UpdateForm.ptmis027.value.substr(11,1)=="A"){
     document.UpdateForm.nzspr015.className="Mandatory";
   }else{
     if(document.UpdateForm.ptmis027.value.substr(11,1)=="B"){
         document.UpdateForm.nzspr017.className="Mandatory";
       }else{
         if(document.UpdateForm.ptmis027.value.substr(11,1)=="C"){
             document.UpdateForm.nzspr015.className="Mandatory";
             document.UpdateForm.nzspr017.className="Mandatory";
         }
     }
  }
}
function ReadDoc(OptionNumber,OptionType,ReturnCode,ReturnName,ReturnPrac,ReturnPnam,ReturnPcnt,ReturnProv) {
  ReturnName.value="";
  ReturnPrac.value="";
  ReturnPnam.value="";
  ReturnPcnt.value="";
  ReturnProv.value="";
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL  = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
               "&returnfm=2" + "&valdtype=" + OptionType +
               "&valdcode=" + ReturnCode.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=trim(ReturnValue[0]);
    ReturnPrac.value=ReturnValue[1];
    ReturnPnam.value=ReturnValue[2];
    ReturnPcnt.value=ReturnValue[3];
    ReturnProv.value=ReturnValue[4]; 
    if(ReturnValue[5] == "1" &&  ReturnPnam.type != "hidden") {
      alert("WARNING: HCP is linked to more than 1 practice.\n" +
            "Please enter practice separately.");
      ReturnPrac.value="";
      ReturnPnam.value="";
      ReturnPcnt.value="";
      ReturnProv.value="";
    }
  } else {
    ReturnCode.value="";
    ReturnCode.select();
    return false; }
}
function checkBedManagement(wardcode,beddcode) {
  admissno=PatientLinks.admissno.value.replace(/ /g,"+")
  ReturnFunction="" ;
  var admisdte="";
  var staydays="0";
  var admistme="";
  var ptrgm001="";
  var ptrgm002="";
  var ptrgm003="";
  for (var i=2; i < checkBedStatus.arguments.length; i++) {
   if (typeof(checkBedStatus.arguments[i]) == 'function') {
     ReturnFunction=checkBedStatus.arguments[i] } }

  // Receive optional parameters
  if (checkBedStatus.arguments.length >= 9) {
    admisdte=checkBedStatus.arguments[2].replace(/ /g,"+");
    staydays=checkBedStatus.arguments[3].replace(/ /g,"+");
    admistme=checkBedStatus.arguments[4].replace(/ /g,"+");
    ptrgm001=checkBedStatus.arguments[5].replace(/ /g,"+");
    ptrgm002=checkBedStatus.arguments[6].replace(/ /g,"+");
    ptrgm003=checkBedStatus.arguments[7].replace(/ /g,"+");
    prnxindi="0";
  }
  var serverURL = "../cgi-bin/patweb96.pbl?reportno=12&remoteno=1" +
                  "&wardcode="+wardcode.replace(/ /g,"+") +
                  "&beddcode="+beddcode.replace(/ /g,"+") +
                  "&admissno="+admissno.replace(/ /g,"+") +
                  "&admisdte="+admisdte.replace(/ /g,"+") +
                  "&admistme="+admistme.replace(/ /g,"+") +
                  "&staydays="+staydays.replace(/ /g,"+");
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {

    if (isWhitespace(document.UpdateForm.ptmis004.value)) {
      if (typeof(ReturnFunction) == 'function') {
        ReturnFunction()
        return;
      }
    }

    if (isWhitespace(document.UpdateForm.ptmis005.value)) {
      if (typeof(ReturnFunction) == 'function') {
        ReturnFunction()
        return;
      }
    }

    if (UpdateForm.pswdindc.value==0) {
      var serverURL = "../cgi-bin/patweb96.pbl?reportno=12&remoteno=5" +
                      "&wardcode="+wardcode.replace(/ /g,"+") +
                      "&beddcode="+beddcode.replace(/ /g,"+") +
                      "&admissno="+admissno.replace(/ /g,"+") +
                      "&admisdte="+admisdte.replace(/ /g,"+") +
//                      "&staydays="+staydays.replace(/ /g,"+") +
                      "&admistme="+admistme.replace(/ /g,"+") +
                      "&ptrgm001="+ptrgm001.replace(/ /g,"+") +
                      "&ptrgm002="+ptrgm002.replace(/ /g,"+") +
                      "&ptrgm003="+ptrgm003.replace(/ /g,"+") +
                      "&prnxindi="+prnxindi.replace(/ /g,"+")
      var returnValue = RSExecute(serverURL);
      if (returnValue.status==0) {
        if (returnValue.return_value==1) {
          if (!confirm("Warning: Pre-Adm/Admission will override a previous bed managment record.")) {
            return;
          }
        }
        prevretval=returnValue.return_value;
        prnxindi="1";
        var serverURL = "../cgi-bin/patweb96.pbl?reportno=12&remoteno=5" +
                        "&wardcode="+wardcode.replace(/ /g,"+") +
                        "&beddcode="+beddcode.replace(/ /g,"+") +
                        "&admissno="+admissno.replace(/ /g,"+") +
                        "&admisdte="+admisdte.replace(/ /g,"+") +
//                        "&staydays="+staydays.replace(/ /g,"+") +
                        "&admistme="+admistme.replace(/ /g,"+") +
                        "&ptrgm001="+ptrgm001.replace(/ /g,"+") +
                        "&ptrgm002="+ptrgm002.replace(/ /g,"+") +
                        "&ptrgm003="+ptrgm003.replace(/ /g,"+") +
                        "&prnxindi="+prnxindi.replace(/ /g,"+")
        var returnValue = RSExecute(serverURL);
        if (returnValue.status==0) {
          if (returnValue.return_value==1) {
            if (!confirm("Warning: Pre-Adm/Adm will override a following bed managment record.")) {
              return;
            }
          }

          if (prevretval==1 || returnValue.return_value==1) {
            UpdateForm.pswdindc.value="1";
            PasswordHead.innerHTML=passwordhd.innerHTML;
            PasswordCode.innerHTML=passwordcd.innerHTML;
            UserNameHead.innerHTML=usernamehd.innerHTML;
            UserNameCode.innerHTML=usernamcd.innerHTML;
            return;
          }
          if (typeof(ReturnFunction) == 'function') {
            checkMaxPat(wardcode,admisdte);
            ReturnFunction()
          }
        }
      }
    } else {
      if (typeof(ReturnFunction) == 'function') {
        checkMaxPat(wardcode,admisdte);
        ReturnFunction()
      }
    }
  }
}


function displayRegime() {
    x=document.UpdateForm.ptmis012.value.substring(4,5);
    if(x=="O") {
      RegimeHead1.innerHTML=regimehd1.innerHTML;
      RegimeCode1.innerHTML=regimecod1.innerHTML;
      RegimeCode1.style.display="";
      RegimeHead2.innerHTML=regimehd2.innerHTML;
      RegimeCode2.innerHTML=regimecod2.innerHTML;
      RegimeCode2.style.display="";
      RegimeHead3.innerHTML=regimehd3.innerHTML;
      RegimeCode3.innerHTML=regimecod3.innerHTML;
      RegimeCode3.style.display="";
      if(document.getElementById('RegimeCode4')) {
        RegimeHead4.innerHTML=regimehd4.innerHTML;
        RegimeCode4.innerHTML=regimecod4.innerHTML;
        RegimeCode4.style.display="";
      }
      if (isWhitespace(UpdateForm.ptrgm001.value)) UpdateForm.ptrgm001.value="";
      if (isWhitespace(UpdateForm.ptrgm002.value)) UpdateForm.ptrgm002.value="";
      if (isWhitespace(UpdateForm.ptrgm003.value)) UpdateForm.ptrgm003.value="";
      valRegimeCode();
    } else {
      RegimeHead1.innerHTML="";
      RegimeCode1.innerHTML=regimeblank1.innerHTML;
      RegimeCode1.style.display="none";
      RegimeHead2.innerHTML="";
      RegimeCode2.innerHTML=regimeblank2.innerHTML;
      RegimeCode2.style.display="none";
      RegimeHead3.innerHTML="";
      RegimeCode3.innerHTML=regimeblank3.innerHTML;
      RegimeCode3.style.display="none";
      if(document.getElementById('RegimeCode4')) {
        RegimeHead4.innerHTML="";
        RegimeCode4.innerHTML=regimeblank4.innerHTML;
        RegimeCode4.style.display="none";
      }
    }
}
function valRegimeCode(){
  p=document.UpdateForm;
  if (p.dummy == undefined)
      return;

  if (!isWhitespace(p.ptrgm001.value)) {
      validateCode(75,p.ptrgm001,p.dummy);
  }
  if (!isWhitespace(p.ptrgm002.value)){
     validateCode(75,p.ptrgm002,p.dummy);
  }
  if (!isWhitespace(p.ptrgm003.value)){
     validateCode(75,p.ptrgm003,p.dummy);
  }
}

//
function ShowAdmissionWeight(theForm) {
  BabyAge.style.display="none";
  document.UpdateForm.ptmis051.className="";
  document.UpdateForm.ptmis051.min="0";
  document.UpdateForm.agebmand.value=0;
//
  if(isWhitespace(theForm.ptcnbage.value) || 
     isWhitespace(theForm.pbdate.value) ||
     isWhitespace(theForm.ptmis001.value)) {
     return;
  }
//
  Bday = new Date();
  Bday.setFullYear(theForm.pbdate.value.substring(6,11));
  monstr= theForm.pbdate.value.substring(3,6)
  if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon=00
  if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon=01
  if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon=02
  if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon=03
  if (monstr=="May" || monstr=="MAY" || monstr=="may") mon=04
  if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon=05
  if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon=06
  if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon=07
  if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon=08
  if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon=09
  if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon=10
  if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon=11
  Bday.setMonth(mon);
  Bday.setDate(theForm.pbdate.value.substring(0,2));
//
  Adat = new Date();
  Adat.setFullYear(theForm.ptmis001.value.substring(6,11));
  monstr= theForm.ptmis001.value.substring(3,6)
  if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon=00
  if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon=01
  if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon=02
  if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon=03
  if (monstr=="May" || monstr=="MAY" || monstr=="may") mon=04
  if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon=05
  if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon=06
  if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon=07
  if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon=08
  if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon=09
  if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon=10
  if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon=11
  Adat.setMonth(mon);
  Adat.setDate(theForm.ptmis001.value.substring(0,2));
//
  if (Adat.getTime() >= Bday.getTime()) {
    daysold = Adat.getTime() - Bday.getTime();
    daysold = Math.floor(daysold / (1000 * 60 * 60 * 24));
  } else {
    return;
  }
//
  CheckBabyWeight(theForm);
}

function CheckBabyWeight(theForm) {
  if(daysold <= theForm.ptcnbage.value) {
    BabyAge.style.display="";
    document.UpdateForm.ptmis051.className="Mandatory Number";
    document.UpdateForm.ptmis051.min="1";
    document.UpdateForm.agebmand.value=1;
  }
}
function checkMaxPat(wardcode,admisdte) {
  var serverURL="../cgi-bin/patweb96.pbl?reportno=12&remoteno=7" +
                "&wardcode="+wardcode.replace(/ /g,"+") +
                "&admisdte="+admisdte.replace(/ /g,"+");

  var returnValue=RSExecute(serverURL);
  if (returnValue.status==0) {
    if (returnValue.return_value==1) {
      alert("Warning: Maximum number of Patients exceeded.");
    }
  }
  return;
} 
function displayBookingDet(){
  if(document.UpdateForm.bookflag.value=="1"){
      BookingDet.innerHTML=bookingdet.innerHTML;
  } else {
      BookingDet.innerHTML=nobookingdet.innerHTML;
  }
}

function setHF() {
 p=document.UpdateForm;                         
 if (p.ptmis027.value.substr(29,1)=="H")        
 {                                              
   if (p.ptmis013.type == "hidden")             
   {                                            
     p.funddesc.className="Mandatory";          
     p.tabldesc.className="Mandatory";          
   }                                            
   else                                         
   {                                            
     p.ptmis013.className="Mandatory";          
     p.ptmis014.className="Mandatory";          
   }                                            
 } else {                                       
    p.ptmis013.className="";                    
    p.ptmis014.className="";                    
    p.funddesc.className="readonly";            
    p.tabldesc.className="readonly";            
 }                                              
}                                               

function checkMultipleAdmission(theForm){
  theForm.contmult.value="0";
  var serverURL = "../cgi-bin/comweb80.pbl?reportno=42&remoteno=1" +
                  "&valdcode="+theForm.urnumber.value.replace(/ /g,"+");
  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {
    return true;
  }
  ReturnValues=returnValue.return_value.split("|")
  current=ReturnValues[0];
  count=ReturnValues[1];
  theForm.leavhosp.value=ReturnValues[2];
  theForm.leavadmn.value=ReturnValues[3];
  theForm.leavtype.value=ReturnValues[4];
  adm_this_hosp=ReturnValues[5];

  if (adm_this_hosp=="1") {
    // Allow multiple admissions in same hospital for a Day Case & Type of Leave
    if ((theForm.ptmis011.value.substr(6,1) != "D") || (ReturnValues[6] != "A"))
    {
      alert("Error: Patient is already admitted to this hospital.");
      return true;
    }
  }

  if(count>1){
    alert("Error: More than one current admission already exists.");
    return true;
  }
// if flag is set in page, don't allow 2 current admissions (must be On Leave)
  if(document.getElementById('dontcurr')&&current=="1"){
     alert("Error: Patient currently admitted at "+
          trim(theForm.leavhosp.value) +
          " under Admission - " + trim(theForm.leavadmn.value) + "\n" );
          return true;
  }
  if(current=="1"){
    if(confirm("Patient currently admitted at "+
            trim(theForm.leavhosp.value) +
            " under Admission - " + trim(theForm.leavadmn.value) + "\n" )){
            theForm.contmult.value="1";
            return false;
    } else {
            return true;
    }
  }
  if(count==1){

    if (theForm.contmupt!=undefined) {
      var indc3 = ReturnValues[6];  // Category 'TL' Indicator 3
      var indc4 = theForm.ptmis011.value.substr(6,1);  // Cat 'P' Indicator 4

      // Check Patient Type; Category P - Indicator 4 (Day Case?)
      if (indc4 != "D") {
        alert("Patient currently On Leave from "+
               trim(theForm.leavhosp.value) +
            " under Admission - " + trim(theForm.leavadmn.value) + "\n" +
            "This admission must be an Intended Day Case - \n" +
            "Patient Category");
        return true;
      }

      // Allow Day Case for a certain Type of Leave...

      // Check Type of Leave; Category TL - Indicator 3
      if (indc3 == "A") {  // for Same Hospital Admission?
        var curHosp = ReturnValues[7];  // Current Hospital Code
        var admHosp = ReturnValues[8];  // Admitting Hospital Code
        var msg = "";

        // Same hospital?
        if (trim(curHosp) != trim(admHosp)) {
          msg = "Patient currently On Leave from " +
                trim(theForm.leavhosp.value) +
                " under Admission - " + trim(theForm.leavadmn.value) + "\n" +
                "Leave Type=" + trim(theForm.leavtype.value);
        }
        else {
          msg = "Patient currently On Leave" +
                " under Admission - " + trim(theForm.leavadmn.value) + "\n" +
                "Leave Type=" + trim(theForm.leavtype.value);
        }

        if (!confirm(msg)) {
          return true;
        } else {
          theForm.contmult.value="1";
        }
      }
      else if (indc3 == "M") {  // for Inter Hospital Admission?
        if (!confirm("Patient currently On Leave from "+
                trim(theForm.leavhosp.value) +
                " under Admission - " + trim(theForm.leavadmn.value) + "\n" +
                "Leave Type=" + trim(theForm.leavtype.value) )){
                return true;
        } else {
          theForm.contmult.value="1";
        }
      }
      else {
        alert("Patient currently On Leave from "+
                trim(theForm.leavhosp.value) +
                " under Admission - " + trim(theForm.leavadmn.value) + "\n" +
                "Leave Type=" + trim(theForm.leavtype.value) +
                " does not allow multiple admissions.");
        return true;
      }
    } else {
      if (!confirm("Patient currently On Leave from "+
              trim(theForm.leavhosp.value) +
              " under Admission - " + trim(theForm.leavadmn.value) + "\n" +
              "Leave Type=" + trim(theForm.leavtype.value) )){
              return true;
      } else {
        theForm.contmult.value="1";
      }
    }
  }
  return false;
}

function showFundingSource() {
    i=document.UpdateForm.ptmis027.selectedIndex;
    ind=document.UpdateForm.ptmis027.options[i].value.substring(3,4)
    if (ind=="A") {
      FundingHeading.innerHTML=offdutyhd.innerHTML;
      FundingId.innerHTML=offdutyid.innerHTML;
    } else {
      if (ind=="P") {
        FundingHeading.innerHTML=fundinghd.innerHTML;
        FundingId.innerHTML=fundingid.innerHTML;
        document.UpdateForm.ptvis131.className="Mandatory";
      } else {
        FundingHeading.innerHTML=blanklabel.innerHTML;
        FundingId.innerHTML=blanklabel.innerHTML;
      }
    }
}
function defaultDisasterCode() {
  if (!isWhitespace(document.UpdateForm.disacode.value)) {
  for (var i =0 ; i < document.UpdateForm.dispt001.length; i++) {
     if (document.UpdateForm.dispt001.options[i].value==
         document.UpdateForm.disacode.value) {
         document.UpdateForm.dispt001.selectedIndex=i
     }
    }
  }

  displayDisasterID();

  if (!isWhitespace(document.UpdateForm.dispt001.value)) {
    document.UpdateForm.dispt001.className = "Readonly";
    document.UpdateForm.dispt001.onfocus =
    function () {this.defaultIndex=this.selectedIndex};
    document.UpdateForm.dispt001.onchange =
    function () {this.selectedIndex=this.defaultIndex};
  }

}
function displayDisasterID() {
  if (!isWhitespace(document.UpdateForm.dispt001.value)) {
    disasteridnumbertitleDIV.innerHTML=disasteridnumbertitleSPAN.innerHTML;
    disasteridnumberDIV.innerHTML=disasteridnumberSPAN.innerHTML;
  } else {
    disasteridnumbertitleDIV.innerHTML="";
    disasteridnumberDIV.innerHTML="";
  }

  if (!isWhitespace(disasteridnumberDIV.innerHTML)) {
    var serverURL   = "../cgi-bin/patweb80.pbl?reportno=98" +
                    "&valdcode=" + UpdateForm.urnumber.value.replace(/ /g,"+") +
                    UpdateForm.dispt001.value.replace(/ /g,"+");
    var returnValue = RSExecute(serverURL);
    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|");
      if (!isWhitespace(ReturnValue[0])) {
        document.UpdateForm.dispt002.value=ReturnValue;
        document.UpdateForm.dispt002.className="Readonly";
        document.UpdateForm.dispt002.readOnly=true;
      }
    }
  }
}
function checkUnq(){
  f = document.UpdateForm
  var savadtyp = f.ptmis010.value.substring(0,3);
  if (f.ptmis012.value.substr(15,1)=="6"){
    selectOptions2("47",f.dummy,f.ptmis010);
  }
  else {
    f.dummy.value="A ";
    selectOptions3("15",UpdateForm.dummy,UpdateForm.ptmis010);
    f.dummy.value="";
  }

  if (!isWhitespace(savadtyp)){
    for (var i =0 ; i < f.ptmis010.length; i++) {
      var atype = f.ptmis010.options[i].value.substring(0,3);
      if (atype==savadtyp) {
        f.ptmis010.selectedIndex = i
      }
    }
  }
}
function findPrgmdesc() {
 Progcode=UpdateForm.ptvis099.value;
  for (var i =0 ; i < document.UpdateForm.prgmcode.length; i++) {
     if (trim(document.UpdateForm.prgmcode.options[i].value)==trim(Progcode.substr(0,8))) {
         document.UpdateForm.prgmcode.selectedIndex=i
         return
     }
    }
  alert("Invalid Program code");
  document.UpdateForm.ptvis099.value="";
  document.UpdateForm.prgmcode.selectedIndex=0
  document.UpdateForm.ptvis099.focus()
}
function savePrgmcode() {
       UpdateForm.ptvis099.value=UpdateForm.prgmcode.value;
}

function isChangedExpectedDate() {
 p=document.UpdateForm
 if((p.o_ptmis030!=undefined) && (p.ptmis030!=undefined) && (p.admnstat!=undefined)){
  if (trim(p.admnstat.value)!=3){
   if (trim(p.o_ptmis030.value)!=trim(p.ptmis030.value)) {
     var chdisdte = document.getElementById('chdisdte');
     if( chdisdte != null) {
       if(!confirm("Intended Length of Stay has been updated.\n" + 
                   "Do you want to update Expected Discharge Date?\n" + 
                   "\n" + 
                   "Press OK to update the Expected Discharge Date.\n" + 
                   "Cancel to retain the existing Expected Discharge Date.")) 
       {
             chdisdte.value = 1;
       } else {
             chdisdte.value = 0;
       }
     }
   }
  }
 }
}
function CalculateBMI(Weight,Height,Bmi) {
  if(!isWhitespace(Weight.value)) {
    if(!checkNumber(Weight)) {
       Weight.value="";
       Bmi.value="";
       Weight.focus();
       return;
    }
    RoundNumber(Weight,2);
    BmiHighlight(Weight,Bmi);
  }
//
  if(!isWhitespace(Height.value)) {
    if(!checkInteger(Height,Height.title)) {
       Height.value="";
       Bmi.value="";
       Height.focus();
       return;
    }
  }
  if(isWhitespace(Weight.value) || isWhitespace(Height.value)) {
     Bmi.value="";
     return;
  }
//  BMI= kg / height in meters squared
  weight=parseInt(Weight.value,10);
  height_meters=parseInt(Height.value,10) / 100;
  if(height_meters==0 || weight == 0) {
     Bmi.value="";
     return;
  }
  height_meters_squard=height_meters * height_meters;
  Bmi.value=weight/height_meters_squard;
  RoundNumber(Bmi,1);
  BmiHighlight(Weight,Bmi);
}
function BmiHighlight(Weight,Bmi) {
  if(Weight.value>150) {
    Weight.className="Red";
  } else {
    Weight.className="";
  }
//
  if(Bmi.value>35) {
    Bmi.className="Red";
  } else {
    Bmi.className="Readonly";
  }
}
function UpdateNutrition(urnumber,admissno) {
  linkurl="patweb93.pbl?reportno=18&template=002" +
          "&urnumber=" + urnumber.value.replace(/ /g,"+") +
          "&admissno=" + admissno.value.replace(/ /g,"+") +
          "&pmnut001=" + admissno.value.replace(/ /g,"+") +
          "&pmnut002= "
  DFrameLink(linkurl,0,75,650,350)
}
function DispContractACT() {
  ind=document.UpdateForm.ptmis027.value.substring(37,38);
  if (ind=="C") {
    ContrHeading.innerHTML=contrihd.innerHTML;
    ContrId.innerHTML=contrid.innerHTML;
    Contr1Heading.innerHTML=contrthd.innerHTML;
    ContrType.innerHTML=contrtype.innerHTML;
    Contr2Heading.innerHTML=contrrhd.innerHTML;
    ContrRole.innerHTML=contrrole.innerHTML;
    Contr3Heading.innerHTML=contrhhd.innerHTML;
    ContrUR.innerHTML=contrur.innerHTML;
  } else {
    ContrHeading.innerHTML=blanklabel.innerHTML;
    ContrId.innerHTML="";
    Contr1Heading.innerHTML=blanklabel.innerHTML;
    ContrType.innerHTML="";
    Contr2Heading.innerHTML=blanklabel.innerHTML;
    ContrRole.innerHTML="";
    Contr3Heading.innerHTML=blanklabel.innerHTML;
    ContrUR.innerHTML="";
  }

}
function createSpecialtyArray() {

  var x;
  var option;

  for (x=0; x<document.getElementById("ptmis010").options.length; x++) {
    specialtyArray[x]=document.getElementById("ptmis010")[x].value + "|" +
                      document.getElementById("ptmis010")[x].innerHTML;
  }

//  document.getElementById("ptmis010").innerHTML="";
}
function getHCPSpecialtySelectList() {
  var x;
  var y;

//  document.getElementById("ptmis010").innerHTML="";

  if (isWhitespace(document.getElementById("ptmis001").value) ||
      isWhitespace(document.getElementById("ptmis007").value)) {
    return;
  }

  var serverURL = "../cgi-bin/comweb80.pbl?reportno=97" +
                  "&valddate=" +
                  document.getElementById("ptmis001").value.replace(/ /g,"+") +
                  "&valdcode=" +
                  document.getElementById("ptmis007").value.replace(/ /g,"+");

  var returnValue = RSExecute(serverURL);

  if (returnValue.status!=0) {
    return;
  }

  document.getElementById("ptmis010").innerHTML="";

  option = document.createElement("option");
  option.value="";
  option.innerHTML="";
  document.getElementById("ptmis010").appendChild(option);

  ReturnValue=returnValue.return_value.split("|");

  for (x=0; x<specialtyArray.length; x++) {
    for (y=0; y<ReturnValue.length; y++) {
      if (specialtyArray[x].substr(0,3) == ReturnValue[y]) {
        option = document.createElement("option");
        option.value=specialtyArray[x].split("|")[0];
        option.innerHTML=specialtyArray[x].split("|")[1];
        document.getElementById("ptmis010").appendChild(option);
      }
    }
  }
}
function defaultSpecialty() {

  var x;

  if (isWhitespace(document.getElementById("c_ptmis010").value)) {return;}

  for (x=0; x<document.getElementById("ptmis010").length; x++) {
    if (document.getElementById("ptmis010")[x].value.substr(0,3) ==
        document.getElementById("c_ptmis010").value) {
      document.getElementById("ptmis010").selectedIndex=x;
    }
  }

}
function createSpecialtyArrayPATWEB96() {

  var x;
  var option;

  for (x=0; x<document.getElementById("specialt").options.length; x++) {
    specialtyArray[x]=document.getElementById("specialt")[x].value + "|" +
                      document.getElementById("specialt")[x].innerHTML;
  }

//  document.getElementById("specialt").innerHTML="";
}
function getHCPSpecialtySelectListPATWEB96() {
  var x;
  var y;

//  document.getElementById("specialt").innerHTML="";

  if (isWhitespace(document.getElementById("admndate").value) ||
      isWhitespace(document.getElementById("attddoct").value)) {
    return;
  }

  var serverURL = "../cgi-bin/comweb80.pbl?reportno=97" +
                  "&valddate=" +
                  document.getElementById("admndate").value.replace(/ /g,"+") +
                  "&valdcode=" +
                  document.getElementById("attddoct").value.replace(/ /g,"+");

  var returnValue = RSExecute(serverURL);

  if (returnValue.status!=0) {
    return;
  }

  document.getElementById("specialt").innerHTML="";

  option = document.createElement("option");
  option.value="";
  option.innerHTML="";
  document.getElementById("specialt").appendChild(option);

  ReturnValue=returnValue.return_value.split("|");

  for (x=0; x<specialtyArray.length; x++) {
    for (y=0; y<ReturnValue.length; y++) {
      if (specialtyArray[x].substr(0,3) == ReturnValue[y]) {
        option = document.createElement("option");
        option.value=specialtyArray[x].split("|")[0];
        option.innerHTML=specialtyArray[x].split("|")[1];
        document.getElementById("specialt").appendChild(option);
      }
    }
  }
}
function defaultSpecialtyPATWEB96() {

  var x;

  if (isWhitespace(document.getElementById("c_specialt").value)) {return;}

  for (x=0; x<document.getElementById("specialt").length; x++) {
    if (document.getElementById("specialt")[x].value.substr(0,3) ==
        document.getElementById("c_specialt").value) {
      document.getElementById("specialt").selectedIndex=x;
    }
  }

}
function DefaultInformGP(InformGPField, DefaultVal) {
  if (DefaultVal == "3") {
    DefaultVal = "0";
  }
  if (DefaultVal == "4") {
    DefaultVal = "1";
  }
  if (DefaultVal == "5") {
    DefaultVal = "2";
  }

  for (var i=0 ; i < InformGPField.length; i++) {
    if (InformGPField.options[i].value == DefaultVal)
      InformGPField.selectedIndex=i;
  }
}
function DefaultMYHR(MYHRField, DefaultVal) {
  if (DefaultVal == "3") {
    DefaultVal = "0";
  }
  if (DefaultVal == "4") {
    DefaultVal = "1";
  }
  if (DefaultVal == "5") {
    DefaultVal = "2";
  }

  for (var i=0 ; i < MYHRField.length; i++) {
    if (MYHRField.options[i].value == DefaultVal)
      MYHRField.selectedIndex=i;
  }
}

function DisplayFieldsHEA() {
  if(!document.getElementById("ptcnhdps")) {
    return;
  }

  var State=document.getElementById("ptcnhdps").value;

  if(State == "2") { // 2 = New South Wales

    if (document.getElementById('ptmis010') != null) {
      if (document.getElementById('ptmis010').value.substr(5,1) == 'P') {
        if(document.getElementById("NSWFields1")) {
           document.getElementById("NSWFields1").style.display="";
        }
        //T0861841
        if(document.getElementById("NSWFields3")) {
           document.getElementById("NSWFields3").style.display="";
        }
      }
    }

    if (document.getElementById('admistyp') != null) {
      if (document.getElementById('admistyp').value.substr(5,1) == 'P') {
        if(document.getElementById("NSWFields1")) {
           document.getElementById("NSWFields1").style.display="";
        }
        //T0861841
        if(document.getElementById("NSWFields3")) {
           document.getElementById("NSWFields3").style.display="";
        }
      }
    }
    if(document.getElementById("NSWFields2")) {
       document.getElementById("NSWFields2").style.display="";
       document.getElementById('ptvis104_nsw').className="SelectBig Mandatory";
    }
    if (typeof sa4DIVfield != 'undefined') {
      sa4DIVfield.innerHTML = "";
    }
/// don't show other states employment status ptvis104
    if (typeof sa1DIVfield != 'undefined') {
      sa1DIVfield.innerHTML = "";
    }
    if (typeof wa1DIVfield != 'undefined') {
      wa1DIVfield.innerHTML = "";
    }
    if (typeof vic5DIVfield != 'undefined') {
      vic5DIVfield.innerHTML = "";
    }
    if (typeof qld4DIVfield != 'undefined') {
      qld4DIVfield.innerHTML = "";
    }

    if (document.getElementById('ptmis010') != null) {
      if (document.getElementById('ptmis010').value.substr(5,1) == 'P' ||
          document.getElementById('ptmis010').value.substr(14,1) == '3') {
        if (typeof catYEtitleDIV != 'undefined') {
          catYEtitleDIV.innerHTML = catYEtitleSPAN.innerHTML;
          catYEfieldDIV.innerHTML = catYEfieldSPAN.innerHTML;
        }
      } else {
        if (typeof catYEtitleDIV != 'undefined') {
          catYEtitleDIV.innerHTML = "";
          catYEfieldDIV.innerHTML = "";
        }
      }
    } else {
      if (document.getElementById('admistyp') != null) {
        if (document.getElementById('admistyp').value.substr(5,1) == 'P' ||
            document.getElementById('admistyp').value.substr(14,1) == '3') {
          if (typeof catYEtitleDIV != 'undefined') {
            catYEtitleDIV.innerHTML = catYEtitleSPAN.innerHTML;
            catYEfieldDIV.innerHTML = catYEfieldSPAN.innerHTML;
          }
        } else {
          if (typeof catYEtitleDIV != 'undefined') {
            catYEtitleDIV.innerHTML = "";
            catYEfieldDIV.innerHTML = "";
          }
        }
      }
    }
  }

  if(State == "3") { // 3 = Victoria
    if(document.getElementById("VICFields1")) {
       document.getElementById("VICFields1").style.display="none";
       document.getElementById("VICFields2").style.display="none";
       document.getElementById("VICFields3").style.display="none";
       document.getElementById("VICFields4").style.display="none";
    }

    if(document.getElementById("VICFields5")) {
       document.getElementById("VICFields5").style.display="";
       document.getElementById('ptvis104_vic').className="SelectBig Mandatory";
    }
/// don't show other states employment status ptvis104
    if (typeof nsw2DIVfield != 'undefined') {
      nsw2DIVfield.innerHTML="";
    }
    if (typeof wa1DIVfield != 'undefined') {
      wa1DIVfield.innerHTML="";
    }
    if (typeof vic5DIVfield != 'undefined') {
      qld4DIVfield.innerHTML="";
    }
    if (typeof sa1DIVfield != 'undefined') {
      sa1DIVfield.innerHTML="";
    }
  }

  if(State == "4") { // 4 = Queensland
    if(document.getElementById("QLDFields1")) {
       document.getElementById("QLDFields1").style.display="";
    }
    if(document.getElementById("QLDFields2")) {
       document.getElementById("QLDFields2").style.display="";
    }

    if (typeof WAFields2DIV != 'undefined') {
      WAFields2DIV.innerHTML = "";
    }

    if(document.getElementById("QLDFields3")) {
       document.getElementById("QLDFields3").style.display="";
    }

    if(document.getElementById("QLDFields4")) {
       document.getElementById("QLDFields4").style.display="";
       document.getElementById('ptvis104_qld').className="SelectBig Mandatory";
    }
/// don't show other states employment status ptvis104
    if (typeof nsw2DIVfield != 'undefined') {
      nsw2DIVfield.innerHTML="";
    }
    if (typeof wa1DIVfield != 'undefined') {
      wa1DIVfield.innerHTML="";
    }
    if (typeof vic5DIVfield != 'undefined') {
      vic5DIVfield.innerHTML="";
    }
    if (typeof sa1DIVfield != 'undefined') {
      sa1DIVfield.innerHTML="";
    }

    ChkAmbulanceNoHEA();
    DisplayFieldsHEAQLDMH(); // Dispplay HEA QLD MH fields
  }

  if(State == "5" || State == "7" || State == "8") { // 5 = South Australia 
                                                     // 7 = Tas 8 = NT
    if(document.getElementById("AdmissCriteriaL")) {
       document.getElementById("AdmissCriteriaL").innerHTML="";
       document.getElementById("AdmissCriteriaF").innerHTML="";
    }

    if(document.getElementById("SAFields1")) {
       document.getElementById("SAFields1").style.display="";
       document.getElementById('ptvis104_sa').className="SelectBig Mandatory";
    }

    if(document.getElementById("SAFields2")) {
       document.getElementById("SAFields2").style.display="";
    }
    if(document.getElementById("SAFields3")) {
       document.getElementById("SAFields3").style.display="";
    }
    if(document.getElementById("SAFields4")) {
       document.getElementById("SAFields4").style.display="";
    }

    if (typeof nsw1DIVfield != 'undefined') {
      nsw1DIVfield.innerHTML="";
    }
/// don't show other states employment status ptvis104
    if (typeof nsw2DIVfield != 'undefined') {
      nsw2DIVfield.innerHTML="";
    }
    if (typeof wa1DIVfield != 'undefined') {
      wa1DIVfield.innerHTML="";
    }
    if (typeof vic5DIVfield != 'undefined') {
      vic5DIVfield.innerHTML="";
    }
    if (typeof qld4DIVfield != 'undefined') {
      qld4DIVfield.innerHTML="";
    }

  }

  if(State == "6") { // 6 = Western Australia
    if(document.getElementById("AdmissCriteriaL")) {
       document.getElementById("AdmissCriteriaL").innerHTML="";
       document.getElementById("AdmissCriteriaF").innerHTML="";
    }
    if(document.getElementById("WAFields1")) {
       document.getElementById("WAFields1").style.display="";
       document.getElementById('ptvis104_wa').className="SelectBig Mandatory";
    }
    if(document.getElementById("WAFields2")) {
       document.getElementById("WAFields2").style.display="";
    }

    if (typeof QLDFields2DIV != 'undefined') {
      QLDFields2DIV.innerHTML = "";
    }

/// don't show other states employment status ptvis104
    if (typeof nsw2DIVfield != 'undefined') {
      nsw2DIVfield.innerHTML = "";
    }
    if (typeof sa1DIVfield != 'undefined') {
      sa1DIVfield.innerHTML = "";
    }
    if (typeof vic5DIVfield != 'undefined') {
      vic5DIVfield.innerHTML="";
    }
    if (typeof qld4DIVfield != 'undefined') {
      qld4DIVfield.innerHTML="";
    }

    if(document.getElementById("WAFields3")) {
       document.getElementById("WAFields3").style.display="";
    }
    if(document.getElementById("WAFields4")) {
       document.getElementById("WAFields4").style.display="";
    }
  }
  if(document.getElementById("AdmUserDef1L") &&
     document.getElementById("d_cusr1") &&
     document.getElementById("ptmis037")) {
    if(isWhitespace(document.getElementById("AdmUserDef1L").innerHTML) ||
      document.getElementById("d_cusr1").value != "1") {
      document.getElementById("AdmUserDef1L").innerHTML="";
      document.getElementById("AdmUserDef1F").innerHTML="";
    } else {
      if(document.getElementById("d_cusman1").value == "1") {
        document.getElementById("ptmis037").className="SelectBig Mandatory"
      }
    }
  }
  if(document.getElementById("AdmUserDef2L") &&
     document.getElementById("d_cusr2") &&
     document.getElementById("ptmis038")) {
    if(isWhitespace(document.getElementById("AdmUserDef2L").innerHTML) ||
      document.getElementById("d_cusr2").value != "1") {
      document.getElementById("AdmUserDef2L").innerHTML="";
      document.getElementById("AdmUserDef2F").innerHTML="";
    } else {
      if(document.getElementById("d_cusman2").value == "1") {
        document.getElementById("ptmis038").className="SelectBig Mandatory"
      }
    }
  }
  if(document.getElementById("AdmUserDef3L") &&
     document.getElementById("d_cusr3") &&
     document.getElementById("ptmis039")) {
    if(isWhitespace(document.getElementById("AdmUserDef3L").innerHTML) ||
      document.getElementById("d_cusr3").value != "1") {
      document.getElementById("AdmUserDef3L").innerHTML="";
      document.getElementById("AdmUserDef3F").innerHTML="";
    } else {
      if(document.getElementById("d_cusman3").value == "1") {
        document.getElementById("ptmis039").className="SelectBig Mandatory"
      }
    }
  }
  if(document.getElementById("AdmUserDef4L") &&
     document.getElementById("d_cusr4") &&
     document.getElementById("ptmis040")) {
    if(isWhitespace(document.getElementById("AdmUserDef4L").innerHTML) ||
      document.getElementById("d_cusr4").value != "1") {
      document.getElementById("AdmUserDef4L").innerHTML="";
      document.getElementById("AdmUserDef4F").innerHTML="";
    } else {
      if(document.getElementById("d_cusman4").value == "1") {
        document.getElementById("ptmis040").className="SelectBig Mandatory"
      }
    }
  }
  if(document.getElementById("AdmUserDef5L") &&
     document.getElementById("d_cusr5") &&
     document.getElementById("ptmis041")) {
    if(isWhitespace(document.getElementById("AdmUserDef5L").innerHTML) ||
      document.getElementById("d_cusr5").value != "1") {
      document.getElementById("AdmUserDef5L").innerHTML="";
      document.getElementById("AdmUserDef5F").innerHTML="";
    } else {
      if(document.getElementById("d_cusman5").value == "1") {
        document.getElementById("ptmis041").className="SelectBig Mandatory"
      }
    }
  }
  if(document.getElementById("AdmUserDef7L") &&
     document.getElementById("d_cusr7") &&
     document.getElementById("ptmis043")) {
    if(isWhitespace(document.getElementById("AdmUserDef7L").innerHTML) ||
      document.getElementById("d_cusr7").value != "1") {
      document.getElementById("AdmUserDef7L").innerHTML="";
      document.getElementById("AdmUserDef7F").innerHTML="";
    } else {
      if(document.getElementById("d_cusman7").value == "1") {
        document.getElementById("ptmis043").className="SelectBig Mandatory"
      }
    }
  }
  if(document.getElementById("ptcnbbap")) {
    if(document.getElementById("ptcnbbap").value != "1") {
      document.getElementById("PostOpWardBedL").innerHTML="";
      document.getElementById("PostOpWardBedF").innerHTML="";
    }
  }
}
function DisplayFieldsHEAQLDMH() {
 var showqldmh=false;
 if(!document.getElementById("qldmhdoc")) {
   return;
 }
 if(document.getElementById("qldmhdoc").value == "1") {
     showqldmh=true;
 }
 if(showqldmh == true) {
   if(document.getElementById("QLDMHFields1")) {
      document.getElementById("QLDMHFields1").style.display="";
   }
   if(document.getElementById("QLDMHFields2")) {
      document.getElementById("QLDMHFields2").style.display="";
   }
   if(document.getElementById("QLDMHFields3")) {
      document.getElementById("QLDMHFields3").style.display="";
   }
   if(document.getElementById("QLDMHFields4")) {
      document.getElementById("QLDMHFields4").style.display="";
   }
   if(document.getElementById("QLDMHFields5")) {
      document.getElementById("QLDMHFields5").style.display="";
   }
 } else {
   if(document.getElementById("QLDMHFields1")) {
      document.getElementById("QLDMHFields1").style.display="none";
   }
   if(document.getElementById("QLDMHFields2")) {
      document.getElementById("QLDMHFields2").style.display="none";
   }
   if(document.getElementById("QLDMHFields3")) {
      document.getElementById("QLDMHFields3").style.display="none";
   }
   if(document.getElementById("QLDMHFields4")) {
      document.getElementById("QLDMHFields4").style.display="none";
   }
   if(document.getElementById("QLDMHFields5")) {
      document.getElementById("QLDMHFields5").style.display="none";
   }
 }
}
function MandCaseMixCode(theForm) {
  if(theForm.ptmis075.value=="Y") {
     theForm.ptmis073.className="Mandatory";
  } else {
     theForm.ptmis073.className="";
  }
}
function AdmitMandatoryHEA() {
 var State=""
 if(document.getElementById("ptcnhdps")) {
     State=document.getElementById("ptcnhdps").value;
 }
 MandCaseMixCode(UpdateForm);
 UpdateForm.ptmis075.className="Mandatory SelectBig";  //Casepayment
 UpdateForm.ptmis011.className="SelectBig Mandatory";  //admission type
 UpdateForm.ptvis028.className="Mandatory";  //referring gp
 UpdateForm.genpname.className="Mandatory";  //referring gp desc
// UpdateForm.ptvis022.className="Mandatory";  //Inform GP
//
 var classDIGP = (UpdateForm.ptcndigp.value >= 3) ? "Mandatory" : "";
 UpdateForm.ptvis022.className = classDIGP;            //Inform GP
 var classMYHR = (UpdateForm.ptcndumh.value >= 3) ? "Mandatory" : "";
 UpdateForm.pmsvx125.className = classMYHR;            //Upload MyHR
//
 UpdateForm.ptmis009.className="SelectBig Mandatory"; //admission source
 UpdateForm.ptmis012.className="SelectBig Mandatory";  //care type
 UpdateForm.ptmis030.className="Mandatory Integer";    //PLOS
 UpdateForm.ptmis007.className="Mandatory";  //Admitting Doctor
 UpdateForm.doctnam2.className="Mandatory";  //Admitting Doctor Desc
 UpdateForm.ptmis024.className="SelectBig Mandatory";  //Unit
 UpdateForm.ptmis027.className="Mandatory SelectBig";  //Claim Type
 UpdateForm.ptmis010.className="Mandatory SelectBig";  //CMBS Class
 UpdateForm.ptvis043.className="SelectBig Mandatory";  //Intended Stay
 UpdateForm.ptvis046.className="SelectBig Mandatory";  //Admitting Point
 UpdateForm.ptvis093.className="SelectBig Mandatory";  //Preferred Accom
 UpdateForm.ptvis076.className="SelectBig Mandatory";  //Discharge Intention
 UpdateForm.ptvis118.className="SelectBig Mandatory";  //Survey
 UpdateForm.ptvis119.className="SelectBig Mandatory";  //Find out about
 UpdateForm.ptvis118.className="SelectBig Mandatory";  //Receive Survey
 UpdateForm.ptvis119.className="SelectBig Mandatory";  //Find out about hosp
 UpdateForm.ptvis135.className="FakeMand";

 if(State == "2") { // 2 = New South Wales
   UpdateForm.ptvis074.className="SelectBig Mandatory";  //LH Legal Status
   UpdateForm.ptvis077.className="SelectBig Mandatory";  //Pall Care Status
   UpdateForm.ptvis041.className="SelectBig Mandatory";  //Adm Criteria
//   UpdateForm.ptvis095.className="SelectBig Mandatory";  //Usual Accom psy
//   UpdateForm.ptvis104.className="SelectBig Mandatory";  //Employ Status

     if (document.getElementById('ptmis010').value.substr(5,1) == 'P'&&
         document.getElementById("NSWFields1").style.display == "") {
      document.getElementById('ptvis095_nsw').className="SelectBig Mandatory";
     } else {
      document.getElementById('ptvis095_nsw').className="SelectBig";
     }
 }
 if(State == "3") { // 3 = Victoria
   UpdateForm.ptvis041.className="SelectBig Mandatory";  //Adm Criteria
 }
 if(State == "4") { // 4 = Queensland
   UpdateForm.ptvis074.className="SelectBig Mandatory";  //LH Legal Status
   UpdateForm.ptvis077.className="SelectBig Mandatory";  //Pall Care Status
   UpdateForm.ptvis041.className="SelectBig Mandatory";  //Adm Criteria
   UpdateForm.ptvis080.className="SelectBig Mandatory";  //Prev Pall
//   UpdateForm.ptvis103.className="SelectBig Mandatory";  //Transport src
   document.getElementById('ptvis103_qld').className="SelectBig Mandatory";
 }
 if(State == "5" || State == "8") { // 5 = South Australia 8 = NT
   UpdateForm.ptvis074.className="SelectBig Mandatory";  //LH Legal Status
   UpdateForm.ptvis077.className="SelectBig Mandatory";  //Pall Care Status
   UpdateForm.ptvis104.className="SelectBig Mandatory";  //Employ Status
   UpdateForm.ptvis107.className="SelectBig Mandatory";  //Adm Cat
   UpdateForm.ptvis108.className="SelectBig Mandatory";  //Pub Priv Adm
//   UpdateForm.ptvis095.className="SelectBig Mandatory";  //Place of Resid

   document.getElementById('ptvis095_sa').className="SelectBig Mandatory";
 }
 if(State == "6") { // 6 = Western Australia
   UpdateForm.ptvis074.className="SelectBig Mandatory";  //LH Legal Status
   UpdateForm.ptvis077.className="SelectBig Mandatory";  //Pall Care Status
   UpdateForm.ptvis101.className="SelectBig Mandatory";  //Src of Ref Loc
   UpdateForm.ptvis102.className="SelectBig Mandatory";  //Clinical Ref
   UpdateForm.ptvis103.className="SelectBig Mandatory";  //Transport src
 }
}
function AdmittedMandatoryHEA() {
 if(!document.getElementById("ptcnhdps")) {
   return;
 }
 UpdateForm.ptmis030.className="Mandatory Integer";    //PLOS
 UpdateForm.ptvis093.className="SelectBig Mandatory";  //Preferred Accom
 UpdateForm.ptvis028.className="Mandatory";  //referring gp
 UpdateForm.genpname.className="Mandatory";  //referring gp desc
// UpdateForm.ptvis022.className="Mandatory";  //Inform GP
//
 var classDIGP = (UpdateForm.ptcndigp.value >= 3) ? "Mandatory" : "";
 UpdateForm.ptvis022.className = classDIGP;            //Inform GP
 var classMYHR = (UpdateForm.ptcndumh.value >= 3) ? "Mandatory" : "";
 UpdateForm.pmsvx125.className = classMYHR;            //Upload MyHR
//
 UpdateForm.ptvis043.className="SelectBig Mandatory";  //Intended Stay
 UpdateForm.ptvis076.className="SelectBig Mandatory";  //Discharge Intention
 UpdateForm.ptvis118.className="SelectBig Mandatory";  //Receive Survey
 UpdateForm.ptvis119.className="SelectBig Mandatory";  //Find out about hosp
 UpdateForm.ptmis012.className="SelectBig Mandatory";  //care type
 UpdateForm.ptvis046.className="SelectBig Mandatory";  //Admitting Point
 UpdateForm.ptvis135.className="FakeMand";

 var State=document.getElementById("ptcnhdps").value;

 if(State == "2") { // 2 = New South Wales
   UpdateForm.ptvis074.className="SelectBig Mandatory";  //LH Legal Status
   UpdateForm.ptvis077.className="SelectBig Mandatory";  //Pall Care Status
   UpdateForm.ptvis041.className="SelectBig Mandatory";  //Adm Criteria
//   UpdateForm.ptvis095.className="SelectBig Mandatory";  //Usual Accom psy
//   UpdateForm.ptvis104.className="SelectBig Mandatory";  //Employ Status

   if (document.getElementById('admistyp').value.substr(5,1) == 'P'&&
     document.getElementById("NSWFields1").style.display == "") {
     document.getElementById('ptvis095_nsw').className="SelectBig Mandatory";
   } else {
     document.getElementById('ptvis095_nsw').className="SelectBig";
   }
 }

 if(State == "3") { // 3 = Victoria
   UpdateForm.ptvis041.className="SelectBig Mandatory";  //Adm Criteria
 }
 if(State == "4") { // 4 = Queensland
   UpdateForm.ptvis074.className="SelectBig Mandatory";  //LH Legal Status
   UpdateForm.ptvis077.className="SelectBig Mandatory";  //Pall Care Status
   UpdateForm.ptvis041.className="SelectBig Mandatory";  //Adm Criteria
   UpdateForm.ptvis080.className="SelectBig Mandatory";  //Prev Pall
//   UpdateForm.ptvis103.className="SelectBig Mandatory";  //Transport src
   document.getElementById('ptvis103_qld').className="SelectBig Mandatory";
 }
 if(State == "5" || State == "7" || State == "8") { // 5 = South Australia 
                                                    // 7 = Tas 8 = NT
   UpdateForm.ptvis074.className="SelectBig Mandatory";  //LH Legal Status
   UpdateForm.ptvis077.className="SelectBig Mandatory";  //Pall Care Status
   UpdateForm.ptvis104.className="SelectBig Mandatory";  //Employ Status
   UpdateForm.ptvis107.className="SelectBig Mandatory";  //Adm Cat
   UpdateForm.ptvis108.className="SelectBig Mandatory";  //Pub Priv Adm
//   UpdateForm.ptvis095.className="SelectBig Mandatory";  //Place of Resid
   document.getElementById('ptvis095_sa').className="SelectBig Mandatory";
 }
 if(State == "6") { // 6 = Western Australia
   UpdateForm.ptvis074.className="SelectBig Mandatory";  //LH Legal Status
   UpdateForm.ptvis077.className="SelectBig Mandatory";  //Pall Care Status
   UpdateForm.ptvis101.className="SelectBig Mandatory";  //Src of Ref Loc
   UpdateForm.ptvis102.className="SelectBig Mandatory";  //Clinical Ref
   UpdateForm.ptvis103.className="SelectBig Mandatory";  //Transport src

 }
}
function ChkAmbulanceNoHEA() {
  i=document.UpdateForm.ptvis103.selectedIndex;
  ind1=document.UpdateForm.ptvis103.options[i].value.substring(3,4)
  hdp1=document.UpdateForm.ptvis103.options[i].value.substr(14,1);
//
  if (ind1!="A") {
    document.UpdateForm.ptvis105.value="";
    document.UpdateForm.ptvis105.className="ReadOnly";
    document.UpdateForm.ptvis105.readOnly=true;
    document.UpdateForm.ptvis105.disabled=true;
  } else {
    if(hdp1=="2" || hdp1=="3" || hdp1=="5") {
      document.UpdateForm.ptvis105.className="Mandatory";
    } else {
      document.UpdateForm.ptvis105.className="";
    }
    document.UpdateForm.ptvis105.readOnly=false;
    document.UpdateForm.ptvis105.disabled=false;
 }
}
function setHFHEA() {
 p=document.UpdateForm;
 if (p.d_ptmis027.value.substr(29,1)=="H")
 {
   if (p.ptmis013.type == "hidden")
   {
     p.funddesc.className="Mandatory";
     p.tabldesc.className="Mandatory";
     p.ptmis015.className="Mandatory";
   }
   else
   {
     p.ptmis013.className="Mandatory";
     p.ptmis014.className="Mandatory";
     p.ptmis015.className="Mandatory";
   }
 } else {
    p.ptmis013.className="";
    p.ptmis014.className="";
    p.ptmis015.className="readonly";
    p.funddesc.className="readonly";
    p.tabldesc.className="readonly";
 }
}
function UpdHealthFund() {
 updhf=document.UpdateForm.ptcnpmhf.value;
 if (updhf=="1") {
 if ((trim(document.UpdateForm.pmihfund.value)!=trim(document.UpdateForm.ptmis013.value)) ||
     (trim(document.UpdateForm.pmihftab.value)!=trim(document.UpdateForm.ptmis014.value)) ||
     (trim(document.UpdateForm.pmihndmm.value)!=trim(document.UpdateForm.ptmis015.value))) {
    if(!confirm("Do you want to Update the PMI Health Fund/Table/Membership Number?\n" +
                "Press OK to update the PMI record with the new Fund details.\n" +
                "Press Cancel to retain the existing PMI Fund details."))
    {
       UpdateForm.updhfund.value="1";   // NOT to Update PMI Health fund
       return;
    }
 }
 UpdateForm.updhfund.value="0";     // default to Update PMI Health fund
}
}

function ValidateProvDRG(MBSCode, MBSDesc, ProvDRG, IntendedStay, PSex,
                         PAge, AdmiDate) {
  if (validateCode(4,MBSCode,MBSDesc,AdmiDate)) {
    if (isWhitespace(ProvDRG.value)) {
      // Get associated Provisional DRG using the MBS Code and other values

      var serverURL  = "../cgi-bin/patweb88.pbl?reportno=36&remoteno=1" +
               "&ptprd001=" + trim(MBSCode.value) +
               "&ptprd004=" + trim(PSex.value) +
               "&ptprd005=" + IntendedStay.value.substr(3,1) +
               "&ptprd007=" + trim(PAge.value);

      var returnValue = RSExecute(serverURL);

      if (returnValue.status == 0) {
        ProvDRG.value = returnValue.return_value;
        if (!isWhitespace(ProvDRG.value)) {
          ProvDRG.focus();
        }
        return true;
      }

      return false; 
    }
  }
}

function ValidateCasemixCode(Code, ReturnCode, ReturnName) {
  var serverURL   = "../cgi-bin/patweb88.pbl?reportno=36&remoteno=2" +
                    "&valdcode=" + Code.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    if (!isWhitespace(returnValue.return_value)) {
      ReturnValue = returnValue.return_value.split("|");
      ReturnCode.value = ReturnValue[0];
      ReturnName.value = ReturnValue[1];
      return true;
    }
  }
  return false;
}

function FilterMentalHealth(MHFlag) {
  if (MHFlag == undefined)
    return;

  var p = document.UpdateForm;

  if (MHFlag == 1) {  // Is a MH visit
    // strip out Non Mental Health code
    filterCatCodeList(p.ptmis011,"14","G","1");  // Patient Type
    filterCatCodeList(p.ptmis009,"13","G","1");  // Referral Source
  }
  else {  // Not a MH visit
    // strip out Mental Health code
    filterCatCodeList(p.ptmis011,"14","M","1");  // Patient Type
    filterCatCodeList(p.ptmis009,"13","M","1");  // Referral Source
  }
}
function showBabyFields(theForm) {
  if(theForm.ptmis012.value.substr(18,2)!="70") {
    document.getElementById("babylabel1").style.display="none";
    document.getElementById("babyfield1").style.display="none";
    document.getElementById("babylabel2").style.display="none";
    document.getElementById("babyfield2").style.display="none";
    document.getElementById("babylabel3").style.display="none";
    document.getElementById("babyfield3").style.display="none";
    document.getElementById("babylabel4").style.display="none";
    document.getElementById("babyfield4").style.display="none";
    theForm.ptmis036.selectedIndex=0;
    theForm.ptmis036.className="";
    theForm.ptmis042.selectedIndex=0;
    theForm.ptmis042.className="SelectBig";
    theForm.ptmis051.value="0";
    theForm.ptmis051.min="0";
    theForm.ptmis051.className="Number";
    theForm.ptmis065.selectedIndex=0;
    theForm.ptmis065.className="SelectBig";
    return;
  } else {
    document.getElementById("babylabel1").style.display="";
    document.getElementById("babyfield1").style.display="";
    document.getElementById("babylabel2").style.display="";
    document.getElementById("babyfield2").style.display="";
    document.getElementById("babylabel3").style.display="";
    document.getElementById("babyfield3").style.display="";
    document.getElementById("babylabel4").style.display="";
    document.getElementById("babyfield4").style.display="";
    if(theForm.ptmis036.options[0].value=="0") {
      theForm.ptmis036.remove(0);           // Remove zero option
    }
  }
  if(theForm.ptmis012.value.substr(32,1)=="M") {
    theForm.ptmis036.className="Mandatory";
    theForm.ptmis042.className="SelectBig Mandatory";
    theForm.ptmis051.className="Number Mandatory";
    theForm.ptmis051.min="1";
    theForm.ptmis065.className="SelectBig Mandatory";
  } else {
    theForm.ptmis036.className="";
    theForm.ptmis042.className="SelectBig";
    theForm.ptmis051.className="Number";
    theForm.ptmis051.min="0";
    theForm.ptmis065.className="SelectBig";
  }
  if(theForm.ptmis036!=undefined && theForm.d_ptmis036!=undefined) {
    for(var i=0;i<theForm.ptmis036.length;i++) {
      if(theForm.ptmis036.options[i].value==
          theForm.d_ptmis036.value) {
          theForm.ptmis036.selectedIndex=i;
      }
    }
  }
}
function defaultCatVB() {

  if (document.UpdateForm.ptcnhdps.value != "2") {return;}

  if (document.UpdateForm.ptmis027.value.substr(3,1) == "P" ||
      document.UpdateForm.ptmis027.value.substr(3,1) == "R") {
    for(var i=0; i<document.UpdateForm.ptvis041.length; i++){
      if(document.UpdateForm.ptvis041.options[i].value.substr(4,1)=="1"){
        document.UpdateForm.ptvis041.selectedIndex = i;
        return;
      }
    }
  } else {
    for(var i=0; i<document.UpdateForm.ptvis041.length; i++){
      if(document.UpdateForm.ptvis041.options[i].value.substr(4,1)=="2"){
        document.UpdateForm.ptvis041.selectedIndex = i;
        return;
      }
    }
  }
}
function defaultCatVBOnload() {

  if (document.UpdateForm.ptcnhdps.value != "2") {return;}

  if (isWhitespace(document.UpdateForm.ptmis027.value)) {return;}
  //if (isWhitespace(document.UpdateForm.ptvis041.value)) {return;}

  if (document.UpdateForm.ptmis027.value.substr(3,1) == "P" ||
      document.UpdateForm.ptmis027.value.substr(3,1) == "R") {
    for(var i=0; i<document.UpdateForm.ptvis041.length; i++){
      if(document.UpdateForm.ptvis041.options[i].value.substr(4,1)=="1"){
        document.UpdateForm.ptvis041.selectedIndex = i;
        return;
      }
    }
  } else {
    for(var i=0; i<document.UpdateForm.ptvis041.length; i++){
      if(document.UpdateForm.ptvis041.options[i].value.substr(4,1)=="2"){
        document.UpdateForm.ptvis041.selectedIndex = i;
        return;
      }
    }
  }
}
function validateMbsCode(OptionNumber,ReturnCode,ReturnName,EffDate) {
  if (EffDate!=undefined) {
    TextBlurHandler(EffDate);
  }
  if (ReturnCode==undefined) {return};
  validateCode(OptionNumber,ReturnCode,ReturnName,EffDate);
}
function ShowActiveProgramID() {
  if(!document.getElementById("ptvis110") ||
     !document.getElementById("ProgramIdTitle") ||
     !document.getElementById("ProgramIdField") ||
     !document.getElementById("ShowProgramIdTitle") ||
     !document.getElementById("ShowProgramIdField")) {
     return;
  }
  if(document.getElementById("ptvis110").options.length<=1) {
    return;   // Only display program if options are available
  }
  document.getElementById("ProgramIdTitle").innerHTML=
  document.getElementById("ShowProgramIdTitle").innerHTML;
  document.getElementById("ProgramIdField").innerHTML=
  document.getElementById("ShowProgramIdField").innerHTML;
}


//Show Hide Legal Status field SPAN for SJOG-NSW
function dispLSFieldNSW(){
 if ((document.getElementById('ptcnnssi') == undefined) ||
     (document.getElementById('ptvis074') == undefined) ||
     (document.getElementById('nswLegalStatusDL') == undefined) ||
     (document.getElementById('nswLegalStatusDF') == undefined)) {
     return;
 }

 //PTCNNSSI is not set then hide data collection fields
 if (document.getElementById('ptcnnssi').value == ''){
    nswLegalStatusDL.innerHTML=blanklabel.innerHTML;
    nswLegalStatusDF.innerHTML=blanklabel.innerHTML;
    document.getElementById('ptvis074').className="Readonly";
    document.getElementById('ptvis074').disabled=true;
 } else {
    nswLegalStatusDL.innerHTML=nswLSLabel.innerHTML;
    nswLegalStatusDF.innerHTML=nswLSData.innerHTML;
    document.getElementById('ptvis074').className="Mandatory";
    document.getElementById('ptvis074').disabled=false;
 }
}

//Show Hide Birth Related fields SPANS for SJOG-NSW
function ShowHideBirthFieldsNSW(){
 //Check if any IDs are undefined

 if ((document.getElementById('ptcnnssi') == undefined) ||
     (document.getElementById('ptmis012') == undefined) ||
     (document.getElementById('ptmis036') == undefined) ||
     (document.getElementById('ptmis042') == undefined) ||
     (document.getElementById('ptmis051') == undefined) ||
     (document.getElementById('nswNumOfBabiesDL') == undefined) ||
     (document.getElementById('nswNumOfBabiesDF') == undefined) ||
     (document.getElementById('nswBirthOrderDL')  == undefined) ||
     (document.getElementById('nswBirthOrderDF')  == undefined) ||
     (document.getElementById('nswBirthWeightDL') == undefined) ||
     (document.getElementById('nswBirthWeightDF') == undefined)) {
     return false;
 }

 var catCCHDP = document.getElementById('ptmis012').value.substr(18,2);

 //Display Birth related fields if newborn care
 if (!isWhitespace(document.getElementById('ptcnnssi').value) &&
     (catCCHDP == '70')){
    nswNumOfBabiesDL.innerHTML=nswNumBabiesLabel.innerHTML;
    nswNumOfBabiesDF.innerHTML=nswNumBabiesData.innerHTML;
    document.getElementById('ptmis036').className="";
    document.getElementById('ptmis036').disabled=false;

    nswBirthOrderDL.innerHTML=nswBirthOrderLabel.innerHTML;
    nswBirthOrderDF.innerHTML=nswBirthOrderData.innerHTML;
    document.getElementById('ptmis042').className="";
    document.getElementById('ptmis042').disabled=false;

    nswBirthWeightDL.innerHTML=nswBirthWeightLabel.innerHTML;
    nswBirthWeightDF.innerHTML=nswBirthWeightData.innerHTML;
    document.getElementById('ptmis051').className="";
    document.getElementById('ptmis051').disabled=false;

    return true;
 }

  //Hide all Birth related fields if not newborn care
  nswNumOfBabiesDL.innerHTML=blanklabel.innerHTML;
  nswNumOfBabiesDF.innerHTML=blanklabel.innerHTML;
  document.getElementById('ptmis036').className="Readonly";
  document.getElementById('ptmis036').disabled=true;

  nswBirthOrderDL.innerHTML=blanklabel.innerHTML;
  nswBirthOrderDF.innerHTML=blanklabel.innerHTML;
  document.getElementById('ptmis042').className="Readonly";
  document.getElementById('ptmis042').disabled=true;

  nswBirthWeightDL.innerHTML=blanklabel.innerHTML;
  nswBirthWeightDF.innerHTML=blanklabel.innerHTML;
  document.getElementById('ptmis051').className="Readonly";
  document.getElementById('ptmis051').disabled=true;

  return false;
}

//Display birth related fields SPANS and values for SJOG-NSW
function dispBirthFieldsNSW(){

 var dispBirthF = ShowHideBirthFieldsNSW();

 if (dispBirthF == false){
    return false;}

 if ((document.getElementById('d_ptmis036') == undefined)||
     (document.getElementById('d_ptmis042') == undefined)) {
    return false;}

 var numOfBabiesValue = document.getElementById('d_ptmis036').value;
 var numOfBabiesList = document.getElementById('ptmis036');

 for (var i=0; i< numOfBabiesList.length; i++){
   if (numOfBabiesList.options[i].value.substr(0,3) == numOfBabiesValue) {
       numOfBabiesList.selectedIndex=i;}}

 var birthOrderValue = document.getElementById('d_ptmis042').value;
 var birthOrderList = document.getElementById('ptmis042');

 for (var i=0; i< birthOrderList.length; i++){
   if (birthOrderList.options[i].value.substr(0,3) == birthOrderValue) {
       birthOrderList.selectedIndex=i;}}

 return true;

}

function ShowReasonForAdmHEA(){
//Reason for Admission display options
 if ((document.getElementById('ptcnbdef') == undefined)||
     (document.getElementById('reaAdmfieldSPAN1') == undefined)){
      return;
 }

 if (document.getElementById('ptcnbdef').value=="1"){
   reaAdmfieldDIV.innerHTML=reaAdmfieldSPAN1.innerHTML;}
}

function getBillingDefaultHEA(ValClaim,ValdFund,ValdHfTb,ValAdmReas,ValAdmDate,
                              ValAdmno){

  if (document.getElementById('billAlertDIV')){
      billAlertDIV.innerHTML="";}       //Blank out any prev billing alerts

 p=document.UpdateForm;
  var serverURL = "../cgi-bin/comweb81.pbl?reportno=30" +
                  "&valclaim=" + ValClaim.value.replace(/ /g,"+") +
                  "&valdfund=" + ValdFund.value.replace(/ /g,"+") +
                  "&valdhftb=" + ValdHfTb.value.replace(/ /g,"+") +
                  "&valdcode=" + ValAdmReas.value.replace(/ /g,"+") +
                  "&valddate=" + ValAdmDate.value.replace(/ /g,"+") +
                  "&valdadmn=" + ValAdmno.value.replace(/ /g,"+");

  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {
     return;}

  ReturnValue=returnValue.return_value.split("|");
  var Admn = trim(ReturnValue[0]);     //patbdeaf.ptbeadmn
  var Cpay = trim(ReturnValue[1]);     //patbdeaf.ptbecpay
  var Csmx = trim(ReturnValue[2]);     //patbdeaf.ptbecsmx
  var Drgc = trim(ReturnValue[3]);     //patbdeaf.ptbedrgc
  var Drgv = trim(ReturnValue[4]);     //patbdeaf.ptbedrgv
  var Prgm = trim(ReturnValue[5]);     //patbdeaf.ptbeprgm
  var Tlos = trim(ReturnValue[6]);     //patbdeaf.ptbetlos
  var Care = trim(ReturnValue[7]);     //patbdeaf.ptbecare
  var Pill = trim(ReturnValue[8]);     //patbdeaf.ptbepill
  var Mbsi = trim(ReturnValue[9]);     //patbdeaf.ptbembsi
  var Ilos = trim(ReturnValue[10]);    //patbdeaf.ptbeilos

  //Billing Alert - patbdeaf.patbealer Cat az - long description
  if (document.getElementById('billAlertDIV')){
    billAlertDIV.innerHTML=trim(ReturnValue[11]);
  }

  if (p.ptmis010 != undefined){           // Admission Type - Cat A
    for (var i=0;i<p.ptmis010.length; i++) {
     if(trim(p.ptmis010.options[i].value.substr(0,3))== Admn){
        p.ptmis010.selectedIndex=i;} }
  }

  if (p.ptmis075.value != undefined){      // Casepayment
    if (Cpay=="1"){
       Cpay="Y"}
    else if(Cpay=="0"){
        Cpay="N";}

    for (var i=0;i<p.ptmis075.length; i++) {
     if(trim(p.ptmis075.options[i].value.substr(0,1))== Cpay){
        p.ptmis075.selectedIndex=i;} }

    MandCaseMixCode(UpdateForm);
  }

  if (p.ptmis073 != undefined){            // Casemix Code
      p.ptmis073.value = Csmx;
      valCasemix();
  }

  if (p.ptmis066 != undefined){             // Provisional DRG
      p.ptmis066.value = Drgc;
      validateCode(5,p.ptmis066,p.drgdesc1);
  }

  if (p.ptvis099 != undefined){             // Program Code
      p.ptvis099.value = Prgm;
      findPrgmdesc();
  }

  if (p.ptmis030 != undefined){             // Planned Length of Stay
      p.ptmis030.value = Tlos;}

  if (p.ptmis012 != undefined){             // Care Type - Cat CC
    for (var i=0;i<p.ptmis012.length; i++) {
     if(trim(p.ptmis012.options[i].value.substr(0,3))== Care){
        p.ptmis012.selectedIndex=i;} }
  }

  if (p.ptvis111 != undefined){             // Presenting Illness - Cat il
    for (var i=0;i<p.ptvis111.length; i++) {
     if(trim(p.ptvis111.options[i].value.substr(0,3))== Pill){
        p.ptvis111.selectedIndex=i;} }
  }

  if (p.ptmis026 != undefined){             // Presenting Illness (MBS)
      p.ptmis026.value = Mbsi;
      validateCode(4,p.ptmis026,p.mbsdesc1,p.ptmis001);
  }

  // Intended Length of Stay - Cat VI
  // Only default if the value on the admission template is currently blank
  if (p.ptvis043 != undefined){
    if (isWhitespace(p.ptvis043.value)){
       for (var i=0;i<p.ptvis043.length; i++) {
         if(trim(p.ptvis043.options[i].value.substr(0,3))== Ilos){
            p.ptvis043.selectedIndex=i;} }
    }
  }

}

function setPSTSjogNsw(){
  f = document.UpdateForm;
  if(f.ptmis010.value.substring(5,6)=="P" ||
     f.ptmis010.value.substring(14,15)=="3"){
    spnPrevTreatLbl.innerHTML = PrevTreatLbl.innerHTML;
    spnPrevTreat.innerHTML = PrevTreat.innerHTML;
    f.ptvis134.className = "Mandatory";
  }
  else {
    spnPrevTreatLbl.innerHTML = PrevTreatLblBlank.innerHTML;
    spnPrevTreat.innerHTML = PrevTreatBlank.innerHTML;
    f.ptvis134.className = "";
    f.ptvis134.value = "";
  }

  if(f.ptvis104!=undefined) {
    if(f.ptmis010.value.substring(5,6)=="P") {
      f.ptvis104.className = "Mandatory";
    }
    else {
      f.ptvis104.className = "";
    }
  }
}
function defaultMoveMedRec2(movrec) {
  if(!VariableNameExists('MoveMedRec')) {
    return;
  }
  if(MoveMedRec) {
    UpdateForm.mvmedre1.checked = true
  }
  else {
        UpdateForm.mvmedre1.checked = false
  }
 }

function valInformGP2(ptvis022,defaultValGP,ptcndigp) {
  if((defaultValGP==" ")){
    DefaultInformGP(ptvis022,ptcndigp);}      // inform gp default

  for(var i=0; i<ptvis022.length; i++){
  if (ptvis022.options[i].value==defaultValGP){
     ptvis022.selectedIndex = i; }}

  if((ptvis022.value!="0")&&(ptvis022.value!="1")){
    DefaultInformGP(ptvis022,ptcndigp);}      // inform gp default

  //Inform GP - Set mandatory/non-mandatory
  if (ptcndigp > 2){
     ptvis022.className="Mandatory";}
  else{
    ptvis022.className="";}
 }

function valMYHR2(pmsvx125,PCEHR,ptcndumh) {
  if((PCEHR==" ")){
    DefaultMYHR(pmsvx125,ptcndumh);}      // myhr default

//  var PCEHR = trim("   "); //pmsvx125/ptvis115
  for(var i=0; i<pmsvx125.length; i++){
  if (pmsvx125.options[i].value==PCEHR){
     pmsvx125.selectedIndex = i; }}

  if((pmsvx125.value!="0")&&(pmsvx125.value!="1")){
     DefaultMYHR(pmsvx125,ptcndumh);}      // upload myhr default
}

