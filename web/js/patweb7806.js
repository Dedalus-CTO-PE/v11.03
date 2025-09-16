//jsVersion  : V11.03.00
//=============================================================================
// Program   : patweb7806.js
//
// Written   : 19.11.2007 
//
// Function  : Standard Functions Used in PATWEB78  Report 6
//
//=============================================================================
function GetPrintDetails() {
  if (document.UpdateForm.printfrm.checked==true) {
    document.UpdateForm.statncod.className="Mandatory";
    document.UpdateForm.schdprnt.className="Mandatory";
    document.UpdateForm.schdcopy.className="Mandatory";
    for (var i=0;i<document.UpdateForm.statncod.length;i++){
      if (document.UpdateForm.statncod.options[i].value.replace(/ /g,"")==
          document.UpdateForm.formdeft.value.replace(/ /g,"")){
          document.UpdateForm.statncod.selectedIndex=i}};
    document.getElementById('ShowPrinterFields').style.display='';
  } else {
    document.getElementById('ShowPrinterFields').style.display='none';
    document.UpdateForm.statncod.className="";
    document.UpdateForm.schdprnt.className="";
    document.UpdateForm.schdcopy.className="";
    document.UpdateForm.statncod.selectedIndex="";
  }
}
function PrivCopayExpLOS() {
  if (isNaN(UpdateForm.ptelg002.value)) {
    UpdateForm.ptelg002.value = 0
  }
  if (isNaN(UpdateForm.ptelg019.value)) {
    UpdateForm.ptelg019.value = 0
  }
  explos=UpdateForm.expcdlos.value;
  if (parseFloat(explos)==0) {
    explos="1";
  }
  copay=UpdateForm.ptelg002.value;
  upto=UpdateForm.ptelg019.value;
  copayment=(copay * explos);
  if(document.UpdateForm.d_ptelg035.checked!=true) {
    document.UpdateForm.priexlos.value="0";
  } else if(parseFloat(upto)==0) {
    document.UpdateForm.priexlos.value=copayment;
  } else {
    document.UpdateForm.priexlos.value=Math.min(copayment,upto);
  }
  RoundNumber(document.UpdateForm.priexlos,2);
}
function SharCopayExpLOS() {
  if (isNaN(UpdateForm.ptelg010.value)) {
    UpdateForm.ptelg010.value = 0
  }
  explos=UpdateForm.expcdlos.value;
  if (parseFloat(explos)==0) {
    explos="1";
  }
  copay=UpdateForm.ptelg010.value;
  upto=UpdateForm.ptelg020.value;
  copayment=(copay * explos);
  if(document.UpdateForm.d_ptelg036.checked!=true) {
    document.UpdateForm.shaexlos.value="0";
  } else if(parseFloat(upto)==0) {
    document.UpdateForm.shaexlos.value=copayment;
  } else {
    document.UpdateForm.shaexlos.value=Math.min(copayment,upto);
  }
  RoundNumber(document.UpdateForm.shaexlos,2);
}
function SameCopayExpLOS() {
  if (isNaN(UpdateForm.ptelg025.value)) {
    UpdateForm.ptelg025.value = 0
  }
  explos=UpdateForm.expcdlos.value;
  if (parseFloat(explos)==0) {
    explos="1";
  }
  copay=UpdateForm.ptelg025.value;
  upto=UpdateForm.ptelg026.value;
  copayment=(copay * explos);
  if(document.UpdateForm.d_ptelg037.checked!=true) {
    document.UpdateForm.sdyexlos.value="0";
  } else {
//  if(parseFloat(upto)==0) {
      document.UpdateForm.sdyexlos.value=copayment;
//  } else {
//    document.UpdateForm.sdyexlos.value=Math.min(copayment,upto);
  }
  RoundNumber(document.UpdateForm.sdyexlos,2);
}
function HospCopayExpLOS() {
  if (isNaN(UpdateForm.ptelg027.value)) {
    UpdateForm.ptelg027.value = 0
  }
  if (isNaN(UpdateForm.ptelg028.value)) {
    UpdateForm.ptelg028.value = 0
  }
  explos=UpdateForm.expcdlos.value;
  if (parseFloat(explos)==0) {
    explos="1";
  }
  copay=UpdateForm.ptelg027.value;
  upto=UpdateForm.ptelg028.value;
  copayment=(copay * explos);
  if(document.UpdateForm.d_ptelg038.checked!=true) {
    document.UpdateForm.hosexlos.value="0";
  } else if(parseFloat(upto)==0) {
    document.UpdateForm.hosexlos.value=copayment;
  } else {
    document.UpdateForm.hosexlos.value=Math.min(copayment,upto);
  }
  RoundNumber(document.UpdateForm.hosexlos,2);
}
function ThetCopayExpLOS() {
  if (isNaN(UpdateForm.ptelg011.value)) {
    UpdateForm.ptelg011.value = 0
  }
  copay=UpdateForm.ptelg011.value;
  upto=UpdateForm.ptelg021.value;
  if(document.UpdateForm.d_ptelg039.checked!=true) {
    document.UpdateForm.thtexlos.value="0";
  } else if(parseFloat(upto)==0) {
    document.UpdateForm.thtexlos.value=copay;
  } else {
    document.UpdateForm.thtexlos.value=Math.min(copay,upto);
  }
  RoundNumber(document.UpdateForm.thtexlos,2);
}
function ICUCCopayExpLOS() {
  if (isNaN(UpdateForm.ptelg041.value)) {
    UpdateForm.ptelg041.value = 0
  }
  if (isNaN(UpdateForm.ptelg043.value)) {
    UpdateForm.ptelg043.value = 0
  }
  explos=UpdateForm.expcdlos.value;
  if (parseFloat(explos)==0) {
    explos="1";
  }
  copay=UpdateForm.ptelg041.value;
  upto=UpdateForm.ptelg043.value;
  copayment=(copay * explos);
  if(document.UpdateForm.d_ptelg042.checked!=true) {
    document.UpdateForm.icuexlos.value="0";
  } else if(parseFloat(upto)==0) {
    document.UpdateForm.icuexlos.value=copayment;
  } else {
    document.UpdateForm.icuexlos.value=Math.min(copayment,upto);
  }
  RoundNumber(document.UpdateForm.icuexlos,2);
}
function TotalExpLOS() {
  PrivCopayExpLOS();
  SharCopayExpLOS();
  SameCopayExpLOS();
  HospCopayExpLOS();
  ThetCopayExpLOS();
  ICUCCopayExpLOS();
  privtotl=parseFloat(UpdateForm.priexlos.value);
  shartotl=parseFloat(UpdateForm.shaexlos.value);
  sametotl=parseFloat(UpdateForm.sdyexlos.value);
  hosptotl=parseFloat(UpdateForm.hosexlos.value);
  theatotl=parseFloat(UpdateForm.thtexlos.value);
  icuctotl=parseFloat(UpdateForm.icuexlos.value);
//
  if (isNaN(UpdateForm.ptelg003.value)) {
    UpdateForm.ptelg003.value = 0
  }
  if (explos > 0 && document.UpdateForm.expcdlos.value != "  0") {
    excstotl=parseFloat(UpdateForm.ptelg003.value);
  } else {
    excstotl = 0;
  }
//
  if (isNaN(UpdateForm.ptelg040.value)) {
    UpdateForm.ptelg040.value = 0
  }
  if (explos <=1 && document.UpdateForm.expcdlos.value == "  0") {
    excssday=parseFloat(UpdateForm.ptelg040.value);
  } else {
    excssday = 0;
  }
//
  if (isNaN(UpdateForm.ptelg032.value)) {
    UpdateForm.ptelg032.value = 0
  }
  misctotl=parseFloat(UpdateForm.ptelg032.value);
//
  oopstotl=0;
  if (document.getElementById('ptelg034') != undefined) {
    if (isNaN(document.getElementById('ptelg034').value)) {
      document.getElementById('ptelg034').value = "0.00"
    }
    if(!isWhitespace(document.getElementById('ptelg034').value)) {
    oopstotl=parseFloat(document.getElementById('ptelg034').value);
    }
  }
//
  amnttotl=(privtotl + shartotl + sametotl + hosptotl + theatotl + icuctotl +
            excstotl + excssday + misctotl + oopstotl);

    document.UpdateForm.totexlos.value=amnttotl;
    RoundNumber(document.UpdateForm.totexlos,2);
}
function MandatoryDesc() {
  if(parseFloat(UpdateForm.ptelg032.value)>0) {
    UpdateForm.ptelg031.className="Mandatory";
  } else {
    UpdateForm.ptelg031.className="";
  }
}
function SetUpTo() {
    UpdateForm.ptelg020.value=UpdateForm.ptelg019.value   // Shared Upto
    UpdateForm.ptelg026.value=UpdateForm.ptelg019.value   // Private Upto
}
function GetOutPockTotal() {
  numtotal=0;
 if (UpdateForm.selfinsr.value=="1") {
  if ((!isWhitespace(Patient.estimate.value)) &&
     ((parseFloat(document.getElementById('ptelg034').value)=="0.00"))) {
    if(!isWhitespace(Patient.bdfee01t.value)) {
      numtotal+=parseFloat(Patient.bdfee01t.value) }
    if(!isWhitespace(Patient.bdfee02t.value)) {
      numtotal+=parseFloat(Patient.bdfee02t.value) }
    if(!isWhitespace(Patient.bdfee03t.value)) {
      numtotal+=parseFloat(Patient.bdfee03t.value) }
    if(!isWhitespace(Patient.bdfee04t.value)) {
      numtotal+=parseFloat(Patient.bdfee04t.value) }
    if(!isWhitespace(Patient.bdfee05t.value)) {
      numtotal+=parseFloat(Patient.bdfee05t.value) }
    if(!isWhitespace(Patient.bdfee06t.value)) {
      numtotal+=parseFloat(Patient.bdfee06t.value) }
    if(!isWhitespace(Patient.bdfee07t.value)) {
      numtotal+=parseFloat(Patient.bdfee07t.value) }

    if(!isWhitespace(Patient.hospcpay.value)) {
      numtotal+=parseFloat(Patient.hospcpay.value) }

    if(document.getElementById("ptcnifcl").value == 2) {
     costlos=UpdateForm.expcdlos.value;
     if(!isWhitespace(Patient.bdfee01b.value)) {
        numtotal+=(costlos * parseFloat(Patient.bdfee01b.value))
     }
    }

    if(!isWhitespace(Patient.thfee01d.value)) {
      numtotal+=parseFloat(Patient.thfee01d.value) }
    if(!isWhitespace(Patient.thfee02d.value)) {
      numtotal+=parseFloat(Patient.thfee02d.value) }
    if(!isWhitespace(Patient.thfee03d.value)) {
      numtotal+=parseFloat(Patient.thfee03d.value) }
    if(!isWhitespace(Patient.thfee04d.value)) {
      numtotal+=parseFloat(Patient.thfee04d.value) }
    if(!isWhitespace(Patient.thfee05d.value)) {
      numtotal+=parseFloat(Patient.thfee05d.value) }
    if(!isWhitespace(Patient.thfee06d.value)) {
      numtotal+=parseFloat(Patient.thfee06d.value) }

  if (Patient.thfee07d != undefined) {
    if(!isWhitespace(Patient.thfee07d.value)) {
      numtotal+=parseFloat(Patient.thfee07d.value) }
  }
  if (Patient.thfee08d != undefined) {
    if(!isWhitespace(Patient.thfee08d.value)) {
      numtotal+=parseFloat(Patient.thfee08d.value) }
  }
  if (Patient.thfee09d != undefined) {
    if(!isWhitespace(Patient.thfee09d.value)) {
      numtotal+=parseFloat(Patient.thfee09d.value) }
  }
  if (Patient.thfee10d != undefined) {
    if(!isWhitespace(Patient.thfee10d.value)) {
      numtotal+=parseFloat(Patient.thfee10d.value) }
  }
  if (Patient.thfee11d != undefined) {
    if(!isWhitespace(Patient.thfee11d.value)) {
      numtotal+=parseFloat(Patient.thfee11d.value) }
  }
  if (Patient.thfee12d != undefined) {
    if(!isWhitespace(Patient.thfee12d.value)) {
      numtotal+=parseFloat(Patient.thfee12d.value) }
  }
  if (Patient.thfee13d != undefined) {
    if(!isWhitespace(Patient.thfee13d.value)) {
      numtotal+=parseFloat(Patient.thfee13d.value) }
  }
  if (Patient.thfee14d != undefined) {
    if(!isWhitespace(Patient.thfee14d.value)) {
      numtotal+=parseFloat(Patient.thfee14d.value) }
  }
  if (Patient.thfee15d != undefined) {
    if(!isWhitespace(Patient.thfee15d.value)) {
      numtotal+=parseFloat(Patient.thfee15d.value) }
  }
  if (Patient.thfee16d != undefined) {
    if(!isWhitespace(Patient.thfee16d.value)) {
      numtotal+=parseFloat(Patient.thfee16d.value) }
  }
  if (Patient.thfee17d != undefined) {
    if(!isWhitespace(Patient.thfee17d.value)) {
      numtotal+=parseFloat(Patient.thfee17d.value) }
  }
  if (Patient.thfee18d != undefined) {
    if(!isWhitespace(Patient.thfee18d.value)) {
      numtotal+=parseFloat(Patient.thfee18d.value) }
  }
  if (Patient.thfee19d != undefined) {
    if(!isWhitespace(Patient.thfee19d.value)) {
      numtotal+=parseFloat(Patient.thfee19d.value) }
  }
  if (Patient.thfee20d != undefined) {
    if(!isWhitespace(Patient.thfee20d.value)) {
      numtotal+=parseFloat(Patient.thfee20d.value) }
  }
  if (Patient.thfee21d != undefined) {
    if(!isWhitespace(Patient.thfee21d.value)) {
      numtotal+=parseFloat(Patient.thfee21d.value) }
  }
  if (Patient.thfee22d != undefined) {
    if(!isWhitespace(Patient.thfee22d.value)) {
      numtotal+=parseFloat(Patient.thfee22d.value) }
  }
  if (Patient.thfee23d != undefined) {
    if(!isWhitespace(Patient.thfee23d.value)) {
      numtotal+=parseFloat(Patient.thfee23d.value) }
  }
  if (Patient.thfee24d != undefined) {
    if(!isWhitespace(Patient.thfee24d.value)) {
      numtotal+=parseFloat(Patient.thfee24d.value) }
  }
  if (Patient.thfee25d != undefined) {
    if(!isWhitespace(Patient.thfee25d.value)) {
      numtotal+=parseFloat(Patient.thfee25d.value) }
  }
  if (Patient.thfee26d != undefined) {
    if(!isWhitespace(Patient.thfee26d.value)) {
      numtotal+=parseFloat(Patient.thfee26d.value) }
  }
  if (Patient.thfee27d != undefined) {
    if(!isWhitespace(Patient.thfee27d.value)) {
      numtotal+=parseFloat(Patient.thfee27d.value) }
  }
  if (Patient.thfee28d != undefined) {
    if(!isWhitespace(Patient.thfee28d.value)) {
      numtotal+=parseFloat(Patient.thfee28d.value) }
  }
  if (Patient.thfee29d != undefined) {
    if(!isWhitespace(Patient.thfee29d.value)) {
      numtotal+=parseFloat(Patient.thfee29d.value) }
  }
  if (Patient.thfee30d != undefined) {
    if(!isWhitespace(Patient.thfee30d.value)) {
      numtotal+=parseFloat(Patient.thfee30d.value) }
  }
  if (Patient.thfee31d != undefined) {
    if(!isWhitespace(Patient.thfee31d.value)) {
      numtotal+=parseFloat(Patient.thfee31d.value) }
  }
  if (Patient.thfee32d != undefined) {
    if(!isWhitespace(Patient.thfee32d.value)) {
      numtotal+=parseFloat(Patient.thfee32d.value) }
  }
  if (Patient.thfee33d != undefined) {
    if(!isWhitespace(Patient.thfee33d.value)) {
      numtotal+=parseFloat(Patient.thfee33d.value) }
  }
  if (Patient.thfee34d != undefined) {
    if(!isWhitespace(Patient.thfee34d.value)) {
      numtotal+=parseFloat(Patient.thfee34d.value) }
  }
  if (Patient.thfee35d != undefined) {
    if(!isWhitespace(Patient.thfee35d.value)) {
      numtotal+=parseFloat(Patient.thfee35d.value) }
  }
  if (Patient.thfee36d != undefined) {
    if(!isWhitespace(Patient.thfee36d.value)) {
      numtotal+=parseFloat(Patient.thfee36d.value) }
  }
  if (Patient.thfee37d != undefined) {
    if(!isWhitespace(Patient.thfee37d.value)) {
      numtotal+=parseFloat(Patient.thfee37d.value) }
  }
  if (Patient.thfee38d != undefined) {
    if(!isWhitespace(Patient.thfee38d.value)) {
      numtotal+=parseFloat(Patient.thfee38d.value) }
  }
  if (Patient.thfee39d != undefined) {
    if(!isWhitespace(Patient.thfee39d.value)) {
      numtotal+=parseFloat(Patient.thfee39d.value) }
  }
  if (Patient.thfee40d != undefined) {
    if(!isWhitespace(Patient.thfee40d.value)) {
      numtotal+=parseFloat(Patient.thfee40d.value) }
  }
  if (Patient.thfee41d != undefined) {
    if(!isWhitespace(Patient.thfee41d.value)) {
      numtotal+=parseFloat(Patient.thfee41d.value) }
  }
  if (Patient.thfee42d != undefined) {
    if(!isWhitespace(Patient.thfee42d.value)) {
      numtotal+=parseFloat(Patient.thfee42d.value) }
  }
  if (Patient.thfee43d != undefined) {
    if(!isWhitespace(Patient.thfee43d.value)) {
      numtotal+=parseFloat(Patient.thfee43d.value) }
  }
  if (Patient.thfee44d != undefined) {
    if(!isWhitespace(Patient.thfee44d.value)) {
      numtotal+=parseFloat(Patient.thfee44d.value) }
  }
  if (Patient.thfee45d != undefined) {
    if(!isWhitespace(Patient.thfee45d.value)) {
      numtotal+=parseFloat(Patient.thfee45d.value) }
  }
  if (Patient.thfee46d != undefined) {
    if(!isWhitespace(Patient.thfee46d.value)) {
      numtotal+=parseFloat(Patient.thfee46d.value) }
  }
  if (Patient.thfee47d != undefined) {
    if(!isWhitespace(Patient.thfee47d.value)) {
      numtotal+=parseFloat(Patient.thfee47d.value) }
  }
  if (Patient.thfee48d != undefined) {
    if(!isWhitespace(Patient.thfee48d.value)) {
      numtotal+=parseFloat(Patient.thfee48d.value) }
  }
  if (Patient.thfee49d != undefined) {
    if(!isWhitespace(Patient.thfee49d.value)) {
      numtotal+=parseFloat(Patient.thfee49d.value) }
  }
  if (Patient.thfee50d != undefined) {
    if(!isWhitespace(Patient.thfee50d.value)) {
      numtotal+=parseFloat(Patient.thfee50d.value) }
  }

    if(!isWhitespace(Patient.msfee01d.value)) {
      numtotal+=parseFloat(Patient.msfee01d.value) }
    if(!isWhitespace(Patient.msfee02d.value)) {
      numtotal+=parseFloat(Patient.msfee02d.value) }
    if(!isWhitespace(Patient.msfee03d.value)) {
      numtotal+=parseFloat(Patient.msfee03d.value) }
    if(!isWhitespace(Patient.msfee04d.value)) {
      numtotal+=parseFloat(Patient.msfee04d.value) }
    if(!isWhitespace(Patient.msfee05d.value)) {
      numtotal+=parseFloat(Patient.msfee05d.value) }
    if(!isWhitespace(Patient.msfee06d.value)) {
      numtotal+=parseFloat(Patient.msfee06d.value) }
    if(!isWhitespace(Patient.msfee07d.value)) {
      numtotal+=parseFloat(Patient.msfee07d.value) }
    if(!isWhitespace(Patient.msfee08d.value)) {
      numtotal+=parseFloat(Patient.msfee08d.value) }
//
    if(!isWhitespace(Patient.pmfdxcss.value)) {
      numtotal+=parseFloat(Patient.pmfdxcss.value) }
    if(!isWhitespace(Patient.gsttotal.value)) {
      numtotal+=parseFloat(Patient.gsttotal.value) }
//      
//  Add Consumable to Total out of pocket
//
  if(document.getElementById("ptcnifcl").value == 2) {
    if (Patient.prostamt != undefined) {
      if(!isWhitespace(Patient.prostamt.value)) {
        numtotal+=parseFloat(Patient.prostamt.value) }
    }
    if (Patient.pharmamt != undefined) {
      if(!isWhitespace(Patient.pharmamt.value)) {
        numtotal+=parseFloat(Patient.pharmamt.value) }
    }
    if (Patient.consmamt!= undefined) {
      if(!isWhitespace(Patient.consmamt.value)) {
        numtotal+=parseFloat(Patient.consmamt.value) }
    }

    if (Patient.ptelmamt!= undefined) {
     if(!isWhitespace(Patient.ptelmamt.value)) {
       numtotal+=parseFloat(Patient.ptelmamt.value) }
    }

  } else {
    if (Patient.consumab != undefined) {
      if(!isWhitespace(Patient.consumab.value)) {
        numtotal+=parseFloat(Patient.consumab.value) }
    }
  }

  Patient.esttotal.value = numtotal;
  RoundNumber(document.Patient.esttotal,2);
  document.getElementById('ptelg034').value=Patient.esttotal.value;

  TotalExpLOS();
  }
 }
}
