//jsVersion  : V11.03.06
//------------------------------------------------------------ 
// Function : FeesEstimateCAB.js
//------------------------------------------------------------ 
function GetSJGTotal() {
  rebtotal=0;
  numtotal=0;
    if (document.UpdateForm!=undefined)  {
      costlos=UpdateForm.expcdlos.value;
    } else {
      costlos=Patient.expcdlos.value;
    }

    if ((Patient.festflag.value=="1") || (costlos=="0") ||
        (Patient.admrlost.value > 0)) {
      costlos=Patient.admrlost.value;
    }

  if (costlos == 0) {
      if(!isWhitespace(Patient.hbfee01c.value)) {
        if (document.UpdateForm!=undefined) {
         if (UpdateForm.selfinsr.value=="1") {
           Patient.hbfee01c.value="0";
         }
        }
        rebtotal+=parseFloat(Patient.hbfee01c.value)         // Same Day
     }
     if(!isWhitespace(Patient.hbfee01d.value)) {
        numtotal+=(1 * parseFloat(Patient.hbfee01d.value))     // Same Day
     }
  } else {
    if(Patient.festflag.value=="0") {
     if(!isWhitespace(Patient.hbfee02c.value)) {
      if (document.UpdateForm!=undefined) {
       if (UpdateForm.selfinsr.value=="1") {
          Patient.hbfee02c.value="0";
       }
      }
        rebtotal+=(parseFloat(Patient.hbfee02c.value))   // Shared
     }
 
     if(!isWhitespace(Patient.hbfee02d.value)) {
        numtotal+=(costlos * parseFloat(Patient.hbfee02d.value))
     }

     if(!isWhitespace(Patient.hbfee03c.value)) {
      if (document.UpdateForm!=undefined) {
       if (UpdateForm.selfinsr.value=="1") {
          Patient.hbfee03c.value="0";
       }
      }
        rebtotal+=(parseFloat(Patient.hbfee03c.value))  // Private
     }

     if(!isWhitespace(Patient.hbfee03d.value)) {
       numtotal+=(parseFloat(Patient.hbfee03e.value))
//      numtotal+=(costlos * parseFloat(Patient.hbfee03d.value))
     }

     if(!isWhitespace(Patient.hbfee04c.value)) {
      if (document.UpdateForm!=undefined) {
       if (UpdateForm.selfinsr.value=="1") {
          Patient.hbfee04c.value="0";
       }
      }
        rebtotal+=(parseFloat(Patient.hbfee04c.value))
     }
     if(!isWhitespace(Patient.hbfee04d.value)) {
        numtotal+=(costlos * parseFloat(Patient.hbfee04d.value))
     }
     if(!isWhitespace(Patient.hbfee05c.value)) {
      if (document.UpdateForm!=undefined) {
       if (UpdateForm.selfinsr.value=="1") {
          Patient.hbfee05c.value="0";
       }
      }
        rebtotal+=(parseFloat(Patient.hbfee05c.value))
     }
     if(!isWhitespace(Patient.hbfee05d.value)) {
        numtotal+=(costlos * parseFloat(Patient.hbfee05d.value))
     }
     if(!isWhitespace(Patient.hbfee06c.value)) {
      if (document.UpdateForm!=undefined) {
       if (UpdateForm.selfinsr.value=="1") {
          Patient.hbfee06c.value="0";
       }
      }
        rebtotal+=(parseFloat(Patient.hbfee06c.value))
     }
     if(!isWhitespace(Patient.hbfee06d.value)) {
        numtotal+=(costlos * parseFloat(Patient.hbfee06d.value))
     }
     if(!isWhitespace(Patient.hbfee07c.value)) {
      if (document.UpdateForm!=undefined) {
       if (UpdateForm.selfinsr.value=="1") {
          Patient.hbfee07c.value="0";
       }
      }
        rebtotal+=(parseFloat(Patient.hbfee07c.value))
     }
     if(!isWhitespace(Patient.hbfee07d.value)) {
        numtotal+=(costlos * parseFloat(Patient.hbfee07d.value))
     }

    } else {
     if(!isWhitespace(Patient.hbfee03c.value)) {
      if (document.UpdateForm!=undefined) {
       if (UpdateForm.selfinsr.value=="1") {
          Patient.hbfee03c.value="0";
       }
      }
        rebtotal+=(parseFloat(Patient.hbfee03c.value))   // Private rebate
     }
     if(!isWhitespace(Patient.hbfee03d.value)) {
       numtotal+=(costlos * parseFloat(Patient.hbfee03d.value)) // Private pat.cost
//         numtotal+=(parseFloat(Patient.hbfee03e.value)) // Private pat.cost
     }
    }
  }

//  if(Patient.festflag.value=="0") {
   if (rebtotal != 0 && costlos !=0 ){
      xx =(costlos * rebtotal)
      rebtotal=xx
   }
//  }

// IFC - if Expected WARD/BED is blank or zero amt and Default bed type is zero,
//       default the total Fund rebate to Private Bed

///GGGGGGGGGGGGG

// if(Patient.festflag.value=="0") {
//   if (rebtotal == 0) {
//    if(parseFloat(Patient.hbfee99v.value)=="0.00") {
//      rebtotal+=(parseFloat(Patient.hbfee99y.value))   // Private fund rebate
//      numtotal+=(costlos * parseFloat(Patient.hbfee99x.value)) // Pri.total cost
//      numtotal-=(costlos * parseFloat(Patient.hbfee99y.value)) // Pri. fund cost
//    } else {
//     if(!isWhitespace(Patient.hbfee99w.value)) {
//      rebtotal+=(parseFloat(Patient.hbfee99w.value))   // Private fund rebate
//      numtotal+=(costlos * parseFloat(Patient.hbfee99v.value)) // Pri.total cost
//      numtotal-=(costlos * parseFloat(Patient.hbfee99w.value)) // Pri. fund cost
//     }
//    }
//   }
// }

// add Rebate of Theatre items

    if(!isWhitespace(Patient.thfee01c.value)) {
      rebtotal+=parseFloat(Patient.thfee01c.value) }
    if(!isWhitespace(Patient.thfee01d.value)) {
      numtotal+=parseFloat(Patient.thfee01d.value) }

    if(!isWhitespace(Patient.thfee02c.value)) {
      rebtotal+=parseFloat(Patient.thfee02c.value)}
    if(!isWhitespace(Patient.thfee02d.value)) {
      numtotal+=parseFloat(Patient.thfee02d.value) }

    if(!isWhitespace(Patient.thfee03c.value)) {
      rebtotal+=parseFloat(Patient.thfee03c.value) }
    if(!isWhitespace(Patient.thfee03d.value)) {
      numtotal+=parseFloat(Patient.thfee03d.value) }

    if(!isWhitespace(Patient.thfee04c.value)) {
      rebtotal+=parseFloat(Patient.thfee04c.value) }
    if(!isWhitespace(Patient.thfee04d.value)) {
      numtotal+=parseFloat(Patient.thfee04d.value) }

    if(!isWhitespace(Patient.thfee05c.value)) {
      rebtotal+=parseFloat(Patient.thfee05c.value) }
    if(!isWhitespace(Patient.thfee05d.value)) {
      numtotal+=parseFloat(Patient.thfee05d.value) }

    if(!isWhitespace(Patient.thfee06c.value)) {
      rebtotal+=parseFloat(Patient.thfee06c.value) }
    if(!isWhitespace(Patient.thfee06d.value)) {
      numtotal+=parseFloat(Patient.thfee06d.value) }

    if(!isWhitespace(Patient.thfee07c.value)) {
      rebtotal+=parseFloat(Patient.thfee07c.value) }
    if(!isWhitespace(Patient.thfee07d.value)) {
      numtotal+=parseFloat(Patient.thfee07d.value) }

    if(!isWhitespace(Patient.thfee08c.value)) {
      rebtotal+=parseFloat(Patient.thfee08c.value) }
    if(!isWhitespace(Patient.thfee08d.value)) {
      numtotal+=parseFloat(Patient.thfee08d.value) }

    if(!isWhitespace(Patient.thfee09c.value)) {
      rebtotal+=parseFloat(Patient.thfee09c.value) }
    if(!isWhitespace(Patient.thfee09d.value)) {
      numtotal+=parseFloat(Patient.thfee09d.value) }

    if(!isWhitespace(Patient.thfee10c.value)) {
      rebtotal+=parseFloat(Patient.thfee10c.value) }
    if(!isWhitespace(Patient.thfee10d.value)) {
      numtotal+=parseFloat(Patient.thfee10d.value) }

    if(!isWhitespace(Patient.thfee11c.value)) {
      rebtotal+=parseFloat(Patient.thfee11c.value) }
    if(!isWhitespace(Patient.thfee11d.value)) {
      numtotal+=parseFloat(Patient.thfee11d.value) }

    if(!isWhitespace(Patient.thfee12c.value)) {
      rebtotal+=parseFloat(Patient.thfee12c.value) }
    if(!isWhitespace(Patient.thfee12d.value)) {
      numtotal+=parseFloat(Patient.thfee12d.value) }

    if(!isWhitespace(Patient.thfee13c.value)) {
      rebtotal+=parseFloat(Patient.thfee13c.value) }
    if(!isWhitespace(Patient.thfee13d.value)) {
      numtotal+=parseFloat(Patient.thfee13d.value) }

    if(!isWhitespace(Patient.thfee14c.value)) {
      rebtotal+=parseFloat(Patient.thfee14c.value) }
    if(!isWhitespace(Patient.thfee14d.value)) {
      numtotal+=parseFloat(Patient.thfee14d.value) }

    if(!isWhitespace(Patient.thfee15c.value)) {
      rebtotal+=parseFloat(Patient.thfee15c.value) }
    if(!isWhitespace(Patient.thfee15d.value)) {
      numtotal+=parseFloat(Patient.thfee15d.value) }

    if(!isWhitespace(Patient.thfee16c.value)) {
      rebtotal+=parseFloat(Patient.thfee16c.value) }
    if(!isWhitespace(Patient.thfee16d.value)) {
      numtotal+=parseFloat(Patient.thfee16d.value) }

    if(!isWhitespace(Patient.thfee17c.value)) {
      rebtotal+=parseFloat(Patient.thfee17c.value) }
    if(!isWhitespace(Patient.thfee17d.value)) {
      numtotal+=parseFloat(Patient.thfee17d.value) }

    if(!isWhitespace(Patient.thfee18c.value)) {
      rebtotal+=parseFloat(Patient.thfee18c.value) }
    if(!isWhitespace(Patient.thfee18d.value)) {
      numtotal+=parseFloat(Patient.thfee18d.value) }

    if(!isWhitespace(Patient.thfee19c.value)) {
      rebtotal+=parseFloat(Patient.thfee19c.value) }
    if(!isWhitespace(Patient.thfee19d.value)) {
      numtotal+=parseFloat(Patient.thfee19d.value) }

    if(!isWhitespace(Patient.thfee20c.value)) {
      rebtotal+=parseFloat(Patient.thfee20c.value) }
    if(!isWhitespace(Patient.thfee20d.value)) {
      numtotal+=parseFloat(Patient.thfee20d.value) }

    if(!isWhitespace(Patient.thfee21c.value)) {
      rebtotal+=parseFloat(Patient.thfee21c.value) }
    if(!isWhitespace(Patient.thfee21d.value)) {
      numtotal+=parseFloat(Patient.thfee21d.value) }

    if(!isWhitespace(Patient.thfee22c.value)) {
      rebtotal+=parseFloat(Patient.thfee22c.value) }
    if(!isWhitespace(Patient.thfee22d.value)) {
      numtotal+=parseFloat(Patient.thfee22d.value) }

    if(!isWhitespace(Patient.thfee23c.value)) {
      rebtotal+=parseFloat(Patient.thfee23c.value) }
    if(!isWhitespace(Patient.thfee23d.value)) {
      numtotal+=parseFloat(Patient.thfee23d.value) }

    if(!isWhitespace(Patient.thfee24c.value)) {
      rebtotal+=parseFloat(Patient.thfee24c.value) }
    if(!isWhitespace(Patient.thfee24d.value)) {
      numtotal+=parseFloat(Patient.thfee24d.value) }

    if(!isWhitespace(Patient.thfee25c.value)) {
      rebtotal+=parseFloat(Patient.thfee25c.value) }
    if(!isWhitespace(Patient.thfee25d.value)) {
      numtotal+=parseFloat(Patient.thfee25d.value) }

    if(!isWhitespace(Patient.thfee26c.value)) {
      rebtotal+=parseFloat(Patient.thfee26c.value) }
    if(!isWhitespace(Patient.thfee26d.value)) {
      numtotal+=parseFloat(Patient.thfee26d.value) }

    if(!isWhitespace(Patient.thfee27c.value)) {
      rebtotal+=parseFloat(Patient.thfee27c.value) }
    if(!isWhitespace(Patient.thfee27d.value)) {
      numtotal+=parseFloat(Patient.thfee27d.value) }

    if(!isWhitespace(Patient.thfee28c.value)) {
      rebtotal+=parseFloat(Patient.thfee28c.value) }
    if(!isWhitespace(Patient.thfee28d.value)) {
      numtotal+=parseFloat(Patient.thfee28d.value) }

    if(!isWhitespace(Patient.thfee29c.value)) {
      rebtotal+=parseFloat(Patient.thfee29c.value) }
    if(!isWhitespace(Patient.thfee29d.value)) {
      numtotal+=parseFloat(Patient.thfee29d.value) }

    if(!isWhitespace(Patient.thfee30c.value)) {
      rebtotal+=parseFloat(Patient.thfee30c.value) }
    if(!isWhitespace(Patient.thfee30d.value)) {
      numtotal+=parseFloat(Patient.thfee30d.value) }

// add Rebate of Misc. items

    if(!isWhitespace(Patient.msfee01c.value)) {
      rebtotal+=parseFloat(Patient.msfee01c.value) }
    if(!isWhitespace(Patient.msfee01d.value)) {
      numtotal+=parseFloat(Patient.msfee01d.value) }

    if(!isWhitespace(Patient.msfee02c.value)) {
      rebtotal+=parseFloat(Patient.msfee02c.value) }
    if(!isWhitespace(Patient.msfee02d.value)) {
      numtotal+=parseFloat(Patient.msfee02d.value) }

    if(!isWhitespace(Patient.msfee03c.value)) {
      rebtotal+=parseFloat(Patient.msfee03c.value) }
    if(!isWhitespace(Patient.msfee03d.value)) {
      numtotal+=parseFloat(Patient.msfee03d.value) }

    if(!isWhitespace(Patient.msfee04c.value)) {
      rebtotal+=parseFloat(Patient.msfee04c.value) }
    if(!isWhitespace(Patient.msfee04d.value)) {
      numtotal+=parseFloat(Patient.msfee04d.value) }

    if(!isWhitespace(Patient.msfee05c.value)) {
      rebtotal+=parseFloat(Patient.msfee05c.value) }
    if(!isWhitespace(Patient.msfee05d.value)) {
      numtotal+=parseFloat(Patient.msfee05d.value) }

    if(!isWhitespace(Patient.msfee06c.value)) {
      rebtotal+=parseFloat(Patient.msfee06c.value) }
    if(!isWhitespace(Patient.msfee06d.value)) {
      numtotal+=parseFloat(Patient.msfee06d.value) }

    if(!isWhitespace(Patient.msfee07c.value)) {
      rebtotal+=parseFloat(Patient.msfee07c.value) }
    if(!isWhitespace(Patient.msfee07d.value)) {
      numtotal+=parseFloat(Patient.msfee07d.value) }

    if(!isWhitespace(Patient.msfee08c.value)) {
      rebtotal+=parseFloat(Patient.msfee08c.value) }
    if(!isWhitespace(Patient.msfee08d.value)) {
      numtotal+=parseFloat(Patient.msfee08d.value) }

    if(!isWhitespace(Patient.msfee09c.value)) {
      rebtotal+=parseFloat(Patient.msfee09c.value) }
    if(!isWhitespace(Patient.msfee09d.value)) {
      numtotal+=parseFloat(Patient.msfee09d.value) }

    if(!isWhitespace(Patient.msfee10c.value)) {
      rebtotal+=parseFloat(Patient.msfee10c.value) }
    if(!isWhitespace(Patient.msfee10d.value)) {
      numtotal+=parseFloat(Patient.msfee10d.value) }

    if(!isWhitespace(Patient.msfee11c.value)) {
      rebtotal+=parseFloat(Patient.msfee11c.value) }
    if(!isWhitespace(Patient.msfee11d.value)) {
      numtotal+=parseFloat(Patient.msfee11d.value) }

    if(!isWhitespace(Patient.msfee12c.value)) {
      rebtotal+=parseFloat(Patient.msfee12c.value) }
    if(!isWhitespace(Patient.msfee12d.value)) {
      numtotal+=parseFloat(Patient.msfee12d.value) }

    if(!isWhitespace(Patient.msfee13c.value)) {
      rebtotal+=parseFloat(Patient.msfee13c.value) }
    if(!isWhitespace(Patient.msfee13d.value)) {
      numtotal+=parseFloat(Patient.msfee13d.value) }

    if(!isWhitespace(Patient.msfee14c.value)) {
      rebtotal+=parseFloat(Patient.msfee14c.value) }
    if(!isWhitespace(Patient.msfee14d.value)) {
      numtotal+=parseFloat(Patient.msfee14d.value) }

    if(!isWhitespace(Patient.msfee15c.value)) {
      rebtotal+=parseFloat(Patient.msfee15c.value) }
    if(!isWhitespace(Patient.msfee15d.value)) {
      numtotal+=parseFloat(Patient.msfee15d.value) }

    if(!isWhitespace(Patient.msfee16c.value)) {
      rebtotal+=parseFloat(Patient.msfee16c.value) }
    if(!isWhitespace(Patient.msfee16d.value)) {
      numtotal+=parseFloat(Patient.msfee16d.value) }

    if(!isWhitespace(Patient.msfee17c.value)) {
      rebtotal+=parseFloat(Patient.msfee17c.value) }
    if(!isWhitespace(Patient.msfee17d.value)) {
      numtotal+=parseFloat(Patient.msfee17d.value) }

    if(!isWhitespace(Patient.msfee18c.value)) {
      rebtotal+=parseFloat(Patient.msfee18c.value) }
    if(!isWhitespace(Patient.msfee18d.value)) {
      numtotal+=parseFloat(Patient.msfee18d.value) }

    if(!isWhitespace(Patient.msfee19c.value)) {
      rebtotal+=parseFloat(Patient.msfee19c.value) }
    if(!isWhitespace(Patient.msfee19d.value)) {
      numtotal+=parseFloat(Patient.msfee19d.value) }

    if(!isWhitespace(Patient.msfee20c.value)) {
      rebtotal+=parseFloat(Patient.msfee20c.value) }
    if(!isWhitespace(Patient.msfee20d.value)) {
      numtotal+=parseFloat(Patient.msfee20d.value) }

    if(!isWhitespace(Patient.msfee21c.value)) {
      rebtotal+=parseFloat(Patient.msfee21c.value) }
    if(!isWhitespace(Patient.msfee21d.value)) {
      numtotal+=parseFloat(Patient.msfee21d.value) }

    if(!isWhitespace(Patient.msfee22c.value)) {
      rebtotal+=parseFloat(Patient.msfee22c.value) }
    if(!isWhitespace(Patient.msfee22d.value)) {
      numtotal+=parseFloat(Patient.msfee22d.value) }

    if(!isWhitespace(Patient.msfee23c.value)) {
      rebtotal+=parseFloat(Patient.msfee23c.value) }
    if(!isWhitespace(Patient.msfee23d.value)) {
      numtotal+=parseFloat(Patient.msfee23d.value) }

    if(!isWhitespace(Patient.msfee24c.value)) {
      rebtotal+=parseFloat(Patient.msfee24c.value) }
    if(!isWhitespace(Patient.msfee24d.value)) {
      numtotal+=parseFloat(Patient.msfee24d.value) }

    if(!isWhitespace(Patient.msfee25c.value)) {
      rebtotal+=parseFloat(Patient.msfee25c.value) }
    if(!isWhitespace(Patient.msfee25d.value)) {
      numtotal+=parseFloat(Patient.msfee25d.value) }

    if(!isWhitespace(Patient.msfee26c.value)) {
      rebtotal+=parseFloat(Patient.msfee26c.value) }
    if(!isWhitespace(Patient.msfee26d.value)) {
      numtotal+=parseFloat(Patient.msfee26d.value) }

    if(!isWhitespace(Patient.msfee27c.value)) {
      rebtotal+=parseFloat(Patient.msfee27c.value) }
    if(!isWhitespace(Patient.msfee27d.value)) {
      numtotal+=parseFloat(Patient.msfee27d.value) }

    if(!isWhitespace(Patient.msfee28c.value)) {
      rebtotal+=parseFloat(Patient.msfee28c.value) }
    if(!isWhitespace(Patient.msfee28d.value)) {
      numtotal+=parseFloat(Patient.msfee28d.value) }

    if(!isWhitespace(Patient.msfee29c.value)) {
      rebtotal+=parseFloat(Patient.msfee29c.value) }
    if(!isWhitespace(Patient.msfee29d.value)) {
      numtotal+=parseFloat(Patient.msfee29d.value) }

    if(!isWhitespace(Patient.msfee30c.value)) {
      rebtotal+=parseFloat(Patient.msfee30c.value) }
    if(!isWhitespace(Patient.msfee30d.value)) {
      numtotal+=parseFloat(Patient.msfee30d.value) }

// if(Patient.estimate==undefined) {
//    if(!isWhitespace(Patient.hospcpay.value)) {
//      numtotal+=parseFloat(Patient.hospcpay.value) }
// }

if(Patient.festflag.value=="0") {
    if (document.UpdateForm!=undefined)  {
        if(!isWhitespace(UpdateForm.ptelg032.value)) {
         if (UpdateForm.selfinsr.value=="1") {
          numtotal+=parseFloat(UpdateForm.ptelg032.value) 
         } else {
          rebtotal+=parseFloat(UpdateForm.ptelg032.value)
         }
        }
      } else {
      if(!isWhitespace(Patient.ptelmamt.value)) {
        numtotal+=parseFloat(Patient.ptelmamt.value) }
      }

    if(!isWhitespace(UpdateForm.priexlos.value)) {
      numtotal+=parseFloat(UpdateForm.priexlos.value) }
        rebtotal-=parseFloat(UpdateForm.priexlos.value)        // pri copayment

    if(!isWhitespace(UpdateForm.shaexlos.value)) {
      numtotal+=parseFloat(UpdateForm.shaexlos.value) }
        rebtotal-=parseFloat(UpdateForm.shaexlos.value)        // sha copayment

    if(!isWhitespace(UpdateForm.sdyexlos.value)) {
      numtotal+=parseFloat(UpdateForm.sdyexlos.value) }
        rebtotal-=parseFloat(UpdateForm.sdyexlos.value)        // sdy copayment

    if(!isWhitespace(UpdateForm.hosexlos.value)) {
      numtotal+=parseFloat(UpdateForm.hosexlos.value)
        rebtotal-=parseFloat(UpdateForm.hosexlos.value)        // hos copayment
      }
    if(!isWhitespace(UpdateForm.thtexlos.value)) {
      numtotal+=parseFloat(UpdateForm.thtexlos.value)
        rebtotal-=parseFloat(UpdateForm.thtexlos.value)        // tht copayment
      }
    if(!isWhitespace(UpdateForm.icuexlos.value)) {
      numtotal+=parseFloat(UpdateForm.icuexlos.value) }
        rebtotal-=parseFloat(UpdateForm.icuexlos.value)        // icu copayment

//if (UpdateForm.selfinsr.value=="1") {
//} else {
//  if(!isWhitespace(UpdateForm.ptelg032.value)) {
//    rebtotal+=parseFloat(UpdateForm.ptelg032.value)
//  }
//}

//if (UpdateForm.selfinsr.value=="1") {
//  if(!isWhitespace(UpdateForm.ptelg034.value)) {
//     numtotal+=parseFloat(UpdateForm.ptelg034.value)
//  }
//}

    if (Patient.prostamt != undefined) {
      if(!isWhitespace(Patient.prostamt.value)) {
        numtotal+=parseFloat(Patient.prostamt.value) }
    }
    if (Patient.pharmamt != undefined) {
      if(!isWhitespace(Patient.pharmamt.value)) {
        numtotal+=parseFloat(Patient.pharmamt.value) }
    }
    if (Patient.consmamt != undefined) {
      if(!isWhitespace(Patient.consmamt.value)) {
        numtotal+=parseFloat(Patient.consmamt.value) }
    }

 }

if(Patient.festflag.value=="1") {
 if(!isWhitespace(Patient.pmfdxcss.value)) {
     numtotal+=parseFloat(Patient.pmfdxcss.value)
     rebtotal-=parseFloat(Patient.pmfdxcss.value) }
 } else if((Patient.festflag.value=="0") &&
          (document.UpdateForm!=undefined))  {
    if(Patient.admrlost.value > 0) {
           numtotal+=parseFloat(UpdateForm.ptelg003.value)
             rebtotal-=parseFloat(UpdateForm.ptelg003.value)
    } else {
           numtotal+=parseFloat(UpdateForm.ptelg040.value)
             rebtotal-=parseFloat(UpdateForm.ptelg040.value)
    }
} else {
    if(!isWhitespace(Patient.fundxcss.value)) {
        numtotal+=parseFloat(Patient.fundxcss.value)
          rebtotal-=parseFloat(Patient.fundxcss.value)
    }
}

  if (rebtotal < 0) { rebtotal = 0; }                      // no negative total
  Patient.estrebtt.value = rebtotal;
    RoundNumber(document.Patient.estrebtt,2);

  if ((Patient.festflag.value=="1") ||(!isWhitespace(Patient.gsttotal.value)))
    { numtotal+=parseFloat(Patient.gsttotal.value) }

  Patient.esttotal.value = numtotal;
   RoundNumber(document.Patient.esttotal,2);

  if(Patient.festflag.value=="0") {
    if (document.PatCostForm!=undefined)  {
      if(document.PatCostForm.totopock!=undefined)  {
        document.PatCostForm.totopock.value=numtotal;
        document.UpdateForm.ptelg034.value=numtotal;
        RoundNumber(document.UpdateForm.ptelg034,2);
        RoundNumber(document.PatCostForm.totopock,2);
        SubmitHidden(PatCostForm);
      }
    }
 }
}

function GetFundTot() {
  fndtotal=0;
  if(Patient.festflag.value=="1") {

  if(document.getElementById("ptcnifcl").value==1) {

   if(document.Patient.consmreb!=undefined) {
    if(!isWhitespace(Patient.consmreb.value)) {
      fndtotal+=parseFloat(Patient.consmreb.value) }
   }

   if ((document.Patient.hbfee01a != undefined) &&
       (!isWhitespace(document.Patient.hbfee01a.value)) &&
       (!isNaN(Patient.hbfee01a.value))) {
      fndtotal+=parseFloat(Patient.hbfee01a.value) }

   if ((document.Patient.hbfee02a != undefined) &&
       (!isWhitespace(document.Patient.hbfee02a.value)) &&
       (!isNaN(Patient.hbfee02a.value))) {
      fndtotal+=parseFloat(Patient.hbfee02a.value) }

   if ((document.Patient.hbfee03a != undefined) &&
       (!isWhitespace(document.Patient.hbfee03a.value)) &&
       (!isNaN(document.Patient.hbfee03a.value))) {
      fndtotal+=parseFloat(Patient.hbfee03a.value) }

   if ((document.Patient.hbfee04a != undefined) &&
       (!isWhitespace(document.Patient.hbfee04a.value)) &&
       (!isNaN(Patient.hbfee04a.value))) {
      fndtotal+=parseFloat(Patient.hbfee04a.value) }

   if ((document.Patient.hbfee05a != undefined) &&
       (!isWhitespace(document.Patient.hbfee05a.value)) &&
       (!isNaN(Patient.hbfee05a.value))) {
      fndtotal+=parseFloat(Patient.hbfee05a.value) }

   if ((document.Patient.hbfee06a != undefined) &&
       (!isWhitespace(document.Patient.hbfee06a.value)) &&
       (!isNaN(Patient.hbfee06a.value))) {
      fndtotal+=parseFloat(Patient.hbfee06a.value) }

   if ((document.Patient.hbfee07a != undefined) &&
       (!isWhitespace(document.Patient.hbfee07a.value)) &&
       (!isNaN(Patient.hbfee07a.value))) {
      fndtotal+=parseFloat(Patient.hbfee07a.value) }

  } else {
    if(!isWhitespace(Patient.bdfee01c.value)) {
      fndtotal+=parseFloat(Patient.bdfee01c.value) }
    if(!isWhitespace(Patient.bdfee02c.value)) {
      fndtotal+=parseFloat(Patient.bdfee02c.value) }
    if(!isWhitespace(Patient.bdfee03c.value)) {
      fndtotal+=parseFloat(Patient.bdfee03c.value) }
    if(!isWhitespace(Patient.bdfee04c.value)) {
      fndtotal+=parseFloat(Patient.bdfee04c.value) }
    if(!isWhitespace(Patient.bdfee05c.value)) {
      fndtotal+=parseFloat(Patient.bdfee05c.value) }
    if(!isWhitespace(Patient.bdfee06c.value)) {
      fndtotal+=parseFloat(Patient.bdfee06c.value) }
    if(!isWhitespace(Patient.bdfee07c.value)) {
      fndtotal+=parseFloat(Patient.bdfee07c.value) }
   }

//
    if(!isWhitespace(Patient.thfee01c.value)) {
      fndtotal+=parseFloat(Patient.thfee01c.value) }
    if(!isWhitespace(Patient.thfee02c.value)) {
      fndtotal+=parseFloat(Patient.thfee02c.value) }
    if(!isWhitespace(Patient.thfee03c.value)) {
      fndtotal+=parseFloat(Patient.thfee03c.value) }
    if(!isWhitespace(Patient.thfee04c.value)) {
      fndtotal+=parseFloat(Patient.thfee04c.value) }
    if(!isWhitespace(Patient.thfee05c.value)) {
      fndtotal+=parseFloat(Patient.thfee05c.value) }
    if(!isWhitespace(Patient.thfee06c.value)) {
      fndtotal+=parseFloat(Patient.thfee06c.value) }

    if(Patient.festflag.value=="1") {
     if(!isWhitespace(Patient.thfee07c.value)) {
      fndtotal+=parseFloat(Patient.thfee07c.value) }
     if(!isWhitespace(Patient.thfee08c.value)) {
      fndtotal+=parseFloat(Patient.thfee08c.value) }
     if(!isWhitespace(Patient.thfee09c.value)) {
      fndtotal+=parseFloat(Patient.thfee09c.value) }
     if(!isWhitespace(Patient.thfee10c.value)) {
      fndtotal+=parseFloat(Patient.thfee10c.value) }
     if(!isWhitespace(Patient.thfee11c.value)) {
      fndtotal+=parseFloat(Patient.thfee11c.value) }
     if(!isWhitespace(Patient.thfee12c.value)) {
      fndtotal+=parseFloat(Patient.thfee12c.value) }
     if(!isWhitespace(Patient.thfee13c.value)) {
      fndtotal+=parseFloat(Patient.thfee13c.value) }
     if(!isWhitespace(Patient.thfee14c.value)) {
      fndtotal+=parseFloat(Patient.thfee14c.value) }
     if(!isWhitespace(Patient.thfee15c.value)) {
      fndtotal+=parseFloat(Patient.thfee15c.value) }
     if(!isWhitespace(Patient.thfee16c.value)) {
      fndtotal+=parseFloat(Patient.thfee16c.value) }
     if(!isWhitespace(Patient.thfee17c.value)) {
      fndtotal+=parseFloat(Patient.thfee17c.value) }
     if(!isWhitespace(Patient.thfee18c.value)) {
      fndtotal+=parseFloat(Patient.thfee18c.value) }
     if(!isWhitespace(Patient.thfee19c.value)) {
      fndtotal+=parseFloat(Patient.thfee19c.value) }
     if(!isWhitespace(Patient.thfee20c.value)) {
      fndtotal+=parseFloat(Patient.thfee20c.value) }
     if(!isWhitespace(Patient.thfee21c.value)) {
      fndtotal+=parseFloat(Patient.thfee21c.value) }
     if(!isWhitespace(Patient.thfee22c.value)) {
      fndtotal+=parseFloat(Patient.thfee22c.value) }
     if(!isWhitespace(Patient.thfee23c.value)) {
      fndtotal+=parseFloat(Patient.thfee23c.value) }
     if(!isWhitespace(Patient.thfee24c.value)) {
      fndtotal+=parseFloat(Patient.thfee24c.value) }
     if(!isWhitespace(Patient.thfee25c.value)) {
      fndtotal+=parseFloat(Patient.thfee25c.value) }
     if(!isWhitespace(Patient.thfee26c.value)) {
      fndtotal+=parseFloat(Patient.thfee26c.value) }
     if(!isWhitespace(Patient.thfee27c.value)) {
      fndtotal+=parseFloat(Patient.thfee27c.value) }
     if(!isWhitespace(Patient.thfee28c.value)) {
      fndtotal+=parseFloat(Patient.thfee28c.value) }
     if(!isWhitespace(Patient.thfee29c.value)) {
      fndtotal+=parseFloat(Patient.thfee29c.value) }
     if(!isWhitespace(Patient.thfee30c.value)) {
      fndtotal+=parseFloat(Patient.thfee30c.value) }
     if(!isWhitespace(Patient.thfee31c.value)) {
      fndtotal+=parseFloat(Patient.thfee31c.value) }
     if(!isWhitespace(Patient.thfee32c.value)) {
      fndtotal+=parseFloat(Patient.thfee32c.value) }
     if(!isWhitespace(Patient.thfee33c.value)) {
      fndtotal+=parseFloat(Patient.thfee33c.value) }
     if(!isWhitespace(Patient.thfee34c.value)) {
      fndtotal+=parseFloat(Patient.thfee34c.value) }
     if(!isWhitespace(Patient.thfee35c.value)) {
      fndtotal+=parseFloat(Patient.thfee35c.value) }
     if(!isWhitespace(Patient.thfee36c.value)) {
      fndtotal+=parseFloat(Patient.thfee36c.value) }
     if(!isWhitespace(Patient.thfee37c.value)) {
      fndtotal+=parseFloat(Patient.thfee37c.value) }
     if(!isWhitespace(Patient.thfee38c.value)) {
      fndtotal+=parseFloat(Patient.thfee38c.value) }
     if(!isWhitespace(Patient.thfee39c.value)) {
      fndtotal+=parseFloat(Patient.thfee39c.value) }
     if(!isWhitespace(Patient.thfee40c.value)) {
      fndtotal+=parseFloat(Patient.thfee40c.value) }
     if(!isWhitespace(Patient.thfee41c.value)) {
      fndtotal+=parseFloat(Patient.thfee41c.value) }
     if(!isWhitespace(Patient.thfee42c.value)) {
      fndtotal+=parseFloat(Patient.thfee42c.value) }
     if(!isWhitespace(Patient.thfee43c.value)) {
      fndtotal+=parseFloat(Patient.thfee43c.value) }
     if(!isWhitespace(Patient.thfee44c.value)) {
      fndtotal+=parseFloat(Patient.thfee44c.value) }
     if(!isWhitespace(Patient.thfee45c.value)) {
      fndtotal+=parseFloat(Patient.thfee45c.value) }
     if(!isWhitespace(Patient.thfee46c.value)) {
      fndtotal+=parseFloat(Patient.thfee46c.value) }
     if(!isWhitespace(Patient.thfee47c.value)) {
      fndtotal+=parseFloat(Patient.thfee47c.value) }
     if(!isWhitespace(Patient.thfee48c.value)) {
      fndtotal+=parseFloat(Patient.thfee48c.value) }
     if(!isWhitespace(Patient.thfee49c.value)) {
      fndtotal+=parseFloat(Patient.thfee49c.value) }
     if(!isWhitespace(Patient.thfee50c.value)) {
      fndtotal+=parseFloat(Patient.thfee50c.value) }
    }

//
    if(!isWhitespace(Patient.msfee01c.value)) {
      fndtotal+=parseFloat(Patient.msfee01c.value) }
    if(!isWhitespace(Patient.msfee02c.value)) {
      fndtotal+=parseFloat(Patient.msfee02c.value) }
    if(!isWhitespace(Patient.msfee03c.value)) {
      fndtotal+=parseFloat(Patient.msfee03c.value) }
    if(!isWhitespace(Patient.msfee04c.value)) {
      fndtotal+=parseFloat(Patient.msfee04c.value) }
    if(!isWhitespace(Patient.msfee05c.value)) {
      fndtotal+=parseFloat(Patient.msfee05c.value) }
    if(!isWhitespace(Patient.msfee06c.value)) {
      fndtotal+=parseFloat(Patient.msfee06c.value) }
    if(!isWhitespace(Patient.msfee07c.value)) {
      fndtotal+=parseFloat(Patient.msfee07c.value) }
    if(!isWhitespace(Patient.msfee08c.value)) {
      fndtotal+=parseFloat(Patient.msfee08c.value) }

    if(Patient.festflag.value=="1") {
     if(!isWhitespace(Patient.msfee09c.value)) {
      fndtotal+=parseFloat(Patient.msfee09c.value) }
     if(!isWhitespace(Patient.msfee10c.value)) {
      fndtotal+=parseFloat(Patient.msfee10c.value) }
     if(!isWhitespace(Patient.msfee11c.value)) {
      fndtotal+=parseFloat(Patient.msfee11c.value) }
     if(!isWhitespace(Patient.msfee12c.value)) {
      fndtotal+=parseFloat(Patient.msfee12c.value) }
     if(!isWhitespace(Patient.msfee13c.value)) {
      fndtotal+=parseFloat(Patient.msfee13c.value) }
     if(!isWhitespace(Patient.msfee14c.value)) {
      fndtotal+=parseFloat(Patient.msfee14c.value) }
     if(!isWhitespace(Patient.msfee15c.value)) {
      fnfndtal+=parseFloat(Patient.msfee15c.value) }
     if(!isWhitespace(Patient.msfee16c.value)) {
      fndtotal+=parseFloat(Patient.msfee16c.value) }
     if(!isWhitespace(Patient.msfee17c.value)) {
      fndtotal+=parseFloat(Patient.msfee17c.value) }
     if(!isWhitespace(Patient.msfee18c.value)) {
      fndtotal+=parseFloat(Patient.msfee18c.value) }
     if(!isWhitespace(Patient.msfee19c.value)) {
      fndtotal+=parseFloat(Patient.msfee19c.value) }
     if(!isWhitespace(Patient.msfee20c.value)) {
      fndtotal+=parseFloat(Patient.msfee20c.value) }
     if(!isWhitespace(Patient.msfee21c.value)) {
      fndtotal+=parseFloat(Patient.msfee21c.value) }
     if(!isWhitespace(Patient.msfee22c.value)) {
      fndtotal+=parseFloat(Patient.msfee22c.value) }
     if(!isWhitespace(Patient.msfee23c.value)) {
      fndtotal+=parseFloat(Patient.msfee23c.value) }
     if(!isWhitespace(Patient.msfee24c.value)) {
      fndtotal+=parseFloat(Patient.msfee24c.value) }
     if(!isWhitespace(Patient.msfee25c.value)) {
      fndtotal+=parseFloat(Patient.msfee25c.value) }
     if(!isWhitespace(Patient.msfee26c.value)) {
      fndtotal+=parseFloat(Patient.msfee26c.value) }
     if(!isWhitespace(Patient.msfee27c.value)) {
      fndtotal+=parseFloat(Patient.msfee27c.value) }
     if(!isWhitespace(Patient.msfee28c.value)) {
      fndtotal+=parseFloat(Patient.msfee28c.value) }
     if(!isWhitespace(Patient.msfee29c.value)) {
      fndtotal+=parseFloat(Patient.msfee29c.value) }
     if(!isWhitespace(Patient.msfee30c.value)) {
      fndtotal+=parseFloat(Patient.msfee30c.value) }
     if(!isWhitespace(Patient.msfee31c.value)) {
      fndtotal+=parseFloat(Patient.msfee31c.value) }
     if(!isWhitespace(Patient.msfee32c.value)) {
      fndtotal+=parseFloat(Patient.msfee32c.value) }
     if(!isWhitespace(Patient.msfee33c.value)) {
      fndtotal+=parseFloat(Patient.msfee33c.value) }
     if(!isWhitespace(Patient.msfee34c.value)) {
      fndtotal+=parseFloat(Patient.msfee34c.value) }
     if(!isWhitespace(Patient.msfee35c.value)) {
      fndtotal+=parseFloat(Patient.msfee35c.value) }
     if(!isWhitespace(Patient.msfee36c.value)) {
      fndtotal+=parseFloat(Patient.msfee36c.value) }
     if(!isWhitespace(Patient.msfee37c.value)) {
      fndtotal+=parseFloat(Patient.msfee37c.value) }
     if(!isWhitespace(Patient.msfee38c.value)) {
      fndtotal+=parseFloat(Patient.msfee38c.value) }
     if(!isWhitespace(Patient.msfee39c.value)) {
      fndtotal+=parseFloat(Patient.msfee39c.value) }
     if(!isWhitespace(Patient.msfee40c.value)) {
      fndtotal+=parseFloat(Patient.msfee40c.value) }
     if(!isWhitespace(Patient.msfee41c.value)) {
      fndtotal+=parseFloat(Patient.msfee41c.value) }
     if(!isWhitespace(Patient.msfee42c.value)) {
      fndtotal+=parseFloat(Patient.msfee42c.value) }
     if(!isWhitespace(Patient.msfee43c.value)) {
      fndtotal+=parseFloat(Patient.msfee43c.value) }
     if(!isWhitespace(Patient.msfee44c.value)) {
      fndtotal+=parseFloat(Patient.msfee44c.value) }
     if(!isWhitespace(Patient.msfee45c.value)) {
      fndtotal+=parseFloat(Patient.msfee45c.value) }
     if(!isWhitespace(Patient.msfee46c.value)) {
      fndtotal+=parseFloat(Patient.msfee46c.value) }
     if(!isWhitespace(Patient.msfee47c.value)) {
      fndtotal+=parseFloat(Patient.msfee47c.value) }
     if(!isWhitespace(Patient.msfee48c.value)) {
      fndtotal+=parseFloat(Patient.msfee48c.value) }
     if(!isWhitespace(Patient.msfee49c.value)) {
      fndtotal+=parseFloat(Patient.msfee49c.value) }
     if(!isWhitespace(Patient.msfee50c.value)) {
      fndtotal+=parseFloat(Patient.msfee50c.value) }
     if(!isWhitespace(Patient.msfee51c.value)) {
      fndtotal+=parseFloat(Patient.msfee51c.value) }
     if(!isWhitespace(Patient.msfee52c.value)) {
      fndtotal+=parseFloat(Patient.msfee52c.value) }
    }
  }

//  Standard Fees Estimate, for Compensable Claim the Total GST 
//  will be added to Fund total

   if ((document.getElementById("ptcnifcl").value == 0) &&
       ((Patient.claimtyp.value.substr(3,5).search(/V/g) >= 0) ||
        (Patient.claimtyp.value.substr(3,5).search(/W/g) >= 0) ||
        (Patient.claimtyp.value.substr(3,5).search(/C/g) >= 0) ||
        (Patient.claimtyp.value.substr(3,5).search(/D/g) >= 0))) {
    if(!isWhitespace(Patient.gsttotal.value)) {
      fndtotal+=parseFloat(Patient.gsttotal.value) }
   }

  Patient.fsttotal.value = fndtotal;
  RoundNumber(document.Patient.fsttotal,2);

}

function GetTotal() {
  numtotal=0;
  if(Patient.festflag.value=="1") {
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

 if(Patient.ptcnuofe.value=="1"){
  if(Patient.othfee01 != undefined) {
    if(!isWhitespace(Patient.othfee01.value)) {
      numtotal+=parseFloat(Patient.othfee01.value) }
    if(!isWhitespace(Patient.othfee02.value)) {
      numtotal+=parseFloat(Patient.othfee02.value) }
    if(!isWhitespace(Patient.othfee03.value)) {
      numtotal+=parseFloat(Patient.othfee03.value) }
    if(!isWhitespace(Patient.othfee04.value)) {
      numtotal+=parseFloat(Patient.othfee04.value) }
    if(!isWhitespace(Patient.othfee05.value)) {
      numtotal+=parseFloat(Patient.othfee05.value) }
    if(!isWhitespace(Patient.othfee06.value)) {
      numtotal+=parseFloat(Patient.othfee06.value) }
    if(!isWhitespace(Patient.othfee07.value)) {
      numtotal+=parseFloat(Patient.othfee07.value) }
    if(!isWhitespace(Patient.othfee08.value)) {
      numtotal+=parseFloat(Patient.othfee08.value) }
    if(!isWhitespace(Patient.othfee09.value)) {
      numtotal+=parseFloat(Patient.othfee09.value) }
  }
 }

 if((document.getElementById("ptcnifcl").value==1) &&
    (document.Patient.consmpat!=undefined)) {
  if(!isWhitespace(Patient.consmpat.value)) {
    numtotal+=parseFloat(Patient.consmpat.value) }
 } else {
 if(!isWhitespace(Patient.consumab.value)) {
    numtotal+=parseFloat(Patient.consumab.value) }
 }

//
 if(Patient.estimate==undefined) {
    if(!isWhitespace(Patient.hospcpay.value)) {
      numtotal+=parseFloat(Patient.hospcpay.value) }
 }
//
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
 
    if(Patient.festflag.value=="1") {
     if(!isWhitespace(Patient.thfee07d.value)) {
      numtotal+=parseFloat(Patient.thfee07d.value) }
     if(!isWhitespace(Patient.thfee08d.value)) {
      numtotal+=parseFloat(Patient.thfee08d.value) }
     if(!isWhitespace(Patient.thfee09d.value)) {
      numtotal+=parseFloat(Patient.thfee09d.value) }
     if(!isWhitespace(Patient.thfee10d.value)) {
      numtotal+=parseFloat(Patient.thfee10d.value) }
     if(!isWhitespace(Patient.thfee11d.value)) {
      numtotal+=parseFloat(Patient.thfee11d.value) }
     if(!isWhitespace(Patient.thfee12d.value)) {
      numtotal+=parseFloat(Patient.thfee12d.value) }
     if(!isWhitespace(Patient.thfee13d.value)) {
      numtotal+=parseFloat(Patient.thfee13d.value) }
     if(!isWhitespace(Patient.thfee14d.value)) {
      numtotal+=parseFloat(Patient.thfee14d.value) }
     if(!isWhitespace(Patient.thfee15d.value)) {
      numtotal+=parseFloat(Patient.thfee15d.value) }
     if(!isWhitespace(Patient.thfee16d.value)) {
      numtotal+=parseFloat(Patient.thfee16d.value) }
     if(!isWhitespace(Patient.thfee17d.value)) {
      numtotal+=parseFloat(Patient.thfee17d.value) }
     if(!isWhitespace(Patient.thfee18d.value)) {
      numtotal+=parseFloat(Patient.thfee18d.value) }
     if(!isWhitespace(Patient.thfee19d.value)) {
      numtotal+=parseFloat(Patient.thfee19d.value) }
     if(!isWhitespace(Patient.thfee20d.value)) {
      numtotal+=parseFloat(Patient.thfee20d.value) }
     if(!isWhitespace(Patient.thfee21d.value)) {
      numtotal+=parseFloat(Patient.thfee21d.value) }
     if(!isWhitespace(Patient.thfee22d.value)) {
      numtotal+=parseFloat(Patient.thfee22d.value) }
     if(!isWhitespace(Patient.thfee23d.value)) {
      numtotal+=parseFloat(Patient.thfee23d.value) }
     if(!isWhitespace(Patient.thfee24d.value)) {
      numtotal+=parseFloat(Patient.thfee24d.value) }
     if(!isWhitespace(Patient.thfee25d.value)) {
      numtotal+=parseFloat(Patient.thfee25d.value) }
     if(!isWhitespace(Patient.thfee26d.value)) {
      numtotal+=parseFloat(Patient.thfee26d.value) }
     if(!isWhitespace(Patient.thfee27d.value)) {
      numtotal+=parseFloat(Patient.thfee27d.value) }
     if(!isWhitespace(Patient.thfee28d.value)) {
      numtotal+=parseFloat(Patient.thfee28d.value) }
     if(!isWhitespace(Patient.thfee29d.value)) {
      numtotal+=parseFloat(Patient.thfee29d.value) }
     if(!isWhitespace(Patient.thfee30d.value)) {
      numtotal+=parseFloat(Patient.thfee30d.value) }
     if(!isWhitespace(Patient.thfee31d.value)) {
      numtotal+=parseFloat(Patient.thfee31d.value) }
     if(!isWhitespace(Patient.thfee32d.value)) {
      numtotal+=parseFloat(Patient.thfee32d.value) }
     if(!isWhitespace(Patient.thfee33d.value)) {
      numtotal+=parseFloat(Patient.thfee33d.value) }
     if(!isWhitespace(Patient.thfee34d.value)) {
      numtotal+=parseFloat(Patient.thfee34d.value) }
     if(!isWhitespace(Patient.thfee35d.value)) {
      numtotal+=parseFloat(Patient.thfee35d.value) }
     if(!isWhitespace(Patient.thfee36d.value)) {
      numtotal+=parseFloat(Patient.thfee36d.value) }
     if(!isWhitespace(Patient.thfee37d.value)) {
      numtotal+=parseFloat(Patient.thfee37d.value) }
     if(!isWhitespace(Patient.thfee38d.value)) {
      numtotal+=parseFloat(Patient.thfee38d.value) }
     if(!isWhitespace(Patient.thfee39d.value)) {
      numtotal+=parseFloat(Patient.thfee39d.value) }
     if(!isWhitespace(Patient.thfee40d.value)) {
      numtotal+=parseFloat(Patient.thfee40d.value) }
     if(!isWhitespace(Patient.thfee41d.value)) {
      numtotal+=parseFloat(Patient.thfee41d.value) }
     if(!isWhitespace(Patient.thfee42d.value)) {
      numtotal+=parseFloat(Patient.thfee42d.value) }
     if(!isWhitespace(Patient.thfee43d.value)) {
      numtotal+=parseFloat(Patient.thfee43d.value) }
     if(!isWhitespace(Patient.thfee44d.value)) {
      numtotal+=parseFloat(Patient.thfee44d.value) }
     if(!isWhitespace(Patient.thfee45d.value)) {
      numtotal+=parseFloat(Patient.thfee45d.value) }
     if(!isWhitespace(Patient.thfee46d.value)) {
      numtotal+=parseFloat(Patient.thfee46d.value) }
     if(!isWhitespace(Patient.thfee47d.value)) {
      numtotal+=parseFloat(Patient.thfee47d.value) }
     if(!isWhitespace(Patient.thfee48d.value)) {
      numtotal+=parseFloat(Patient.thfee48d.value) }
     if(!isWhitespace(Patient.thfee49d.value)) {
      numtotal+=parseFloat(Patient.thfee49d.value) }
     if(!isWhitespace(Patient.thfee50d.value)) {
      numtotal+=parseFloat(Patient.thfee50d.value) }
    }

//
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

    if(Patient.festflag.value=="1") {
     if(!isWhitespace(Patient.msfee09d.value)) {
      numtotal+=parseFloat(Patient.msfee09d.value) }

     if(!isWhitespace(Patient.msfee10d.value)) {
      numtotal+=parseFloat(Patient.msfee10d.value) }
     if(!isWhitespace(Patient.msfee11d.value)) {
      numtotal+=parseFloat(Patient.msfee11d.value) }
     if(!isWhitespace(Patient.msfee12d.value)) {
      numtotal+=parseFloat(Patient.msfee12d.value) }
     if(!isWhitespace(Patient.msfee13d.value)) {
      numtotal+=parseFloat(Patient.msfee13d.value) }
     if(!isWhitespace(Patient.msfee14d.value)) {
      numtotal+=parseFloat(Patient.msfee14d.value) }
     if(!isWhitespace(Patient.msfee15d.value)) {
      numtotal+=parseFloat(Patient.msfee15d.value) }
     if(!isWhitespace(Patient.msfee16d.value)) {
      numtotal+=parseFloat(Patient.msfee16d.value) }
     if(!isWhitespace(Patient.msfee17d.value)) {
      numtotal+=parseFloat(Patient.msfee17d.value) }
     if(!isWhitespace(Patient.msfee18d.value)) {
      numtotal+=parseFloat(Patient.msfee18d.value) }
     if(!isWhitespace(Patient.msfee19d.value)) {
      numtotal+=parseFloat(Patient.msfee19d.value) }
     if(!isWhitespace(Patient.msfee20d.value)) {
      numtotal+=parseFloat(Patient.msfee20d.value) }
     if(!isWhitespace(Patient.msfee21d.value)) {
      numtotal+=parseFloat(Patient.msfee21d.value) }
     if(!isWhitespace(Patient.msfee22d.value)) {
      numtotal+=parseFloat(Patient.msfee22d.value) }
     if(!isWhitespace(Patient.msfee23d.value)) {
      numtotal+=parseFloat(Patient.msfee23d.value) }
     if(!isWhitespace(Patient.msfee24d.value)) {
      numtotal+=parseFloat(Patient.msfee24d.value) }
     if(!isWhitespace(Patient.msfee25d.value)) {
      numtotal+=parseFloat(Patient.msfee25d.value) }
     if(!isWhitespace(Patient.msfee26d.value)) {
      numtotal+=parseFloat(Patient.msfee26d.value) }
     if(!isWhitespace(Patient.msfee27d.value)) {
      numtotal+=parseFloat(Patient.msfee27d.value) }
     if(!isWhitespace(Patient.msfee28d.value)) {
      numtotal+=parseFloat(Patient.msfee28d.value) }
     if(!isWhitespace(Patient.msfee29d.value)) {
      numtotal+=parseFloat(Patient.msfee29d.value) }
     if(!isWhitespace(Patient.msfee30d.value)) {
      numtotal+=parseFloat(Patient.msfee30d.value) }
     if(!isWhitespace(Patient.msfee31d.value)) {
      numtotal+=parseFloat(Patient.msfee31d.value) }
     if(!isWhitespace(Patient.msfee32d.value)) {
      numtotal+=parseFloat(Patient.msfee32d.value) }
     if(!isWhitespace(Patient.msfee33d.value)) {
      numtotal+=parseFloat(Patient.msfee33d.value) }
     if(!isWhitespace(Patient.msfee34d.value)) {
      numtotal+=parseFloat(Patient.msfee34d.value) }
     if(!isWhitespace(Patient.msfee35d.value)) {
      numtotal+=parseFloat(Patient.msfee35d.value) }
     if(!isWhitespace(Patient.msfee36d.value)) {
      numtotal+=parseFloat(Patient.msfee36d.value) }
     if(!isWhitespace(Patient.msfee37d.value)) {
      numtotal+=parseFloat(Patient.msfee37d.value) }
     if(!isWhitespace(Patient.msfee38d.value)) {
      numtotal+=parseFloat(Patient.msfee38d.value) }
     if(!isWhitespace(Patient.msfee39d.value)) {
      numtotal+=parseFloat(Patient.msfee39d.value) }
     if(!isWhitespace(Patient.msfee40d.value)) {
      numtotal+=parseFloat(Patient.msfee40d.value) }

     if(!isWhitespace(Patient.msfee41d.value)) {
      numtotal+=parseFloat(Patient.msfee41d.value) }
     if(!isWhitespace(Patient.msfee42d.value)) {
      numtotal+=parseFloat(Patient.msfee42d.value) }
     if(!isWhitespace(Patient.msfee43d.value)) {
      numtotal+=parseFloat(Patient.msfee43d.value) }
     if(!isWhitespace(Patient.msfee44d.value)) {
      numtotal+=parseFloat(Patient.msfee44d.value) }
     if(!isWhitespace(Patient.msfee45d.value)) {
      numtotal+=parseFloat(Patient.msfee45d.value) }
     if(!isWhitespace(Patient.msfee46d.value)) {
      numtotal+=parseFloat(Patient.msfee46d.value) }
     if(!isWhitespace(Patient.msfee47d.value)) {
      numtotal+=parseFloat(Patient.msfee47d.value) }
     if(!isWhitespace(Patient.msfee48d.value)) {
      numtotal+=parseFloat(Patient.msfee48d.value) }
     if(!isWhitespace(Patient.msfee49d.value)) {
      numtotal+=parseFloat(Patient.msfee49d.value) }
     if(!isWhitespace(Patient.msfee50d.value)) {
      numtotal+=parseFloat(Patient.msfee50d.value) }
     if(!isWhitespace(Patient.msfee51d.value)) {
      numtotal+=parseFloat(Patient.msfee51d.value) }
     if(!isWhitespace(Patient.msfee52d.value)) {
      numtotal+=parseFloat(Patient.msfee52d.value) }
    }

//
    if(!isWhitespace(Patient.pmfdxcss.value)) {
      numtotal+=parseFloat(Patient.pmfdxcss.value) }

//  Standard Fees Estimate, for NON Compensable Claim the Total GST
//  will be added to Patient total

   if ((document.getElementById("ptcnifcl").value == 0) &&
       ((Patient.claimtyp.value.substr(3,5).search(/V/g) >= 0) ||
        (Patient.claimtyp.value.substr(3,5).search(/W/g) >= 0) ||
        (Patient.claimtyp.value.substr(3,5).search(/C/g) >= 0) ||
        (Patient.claimtyp.value.substr(3,5).search(/D/g) >= 0))) {
   } else {
    if(!isWhitespace(Patient.gsttotal.value)) {
      numtotal+=parseFloat(Patient.gsttotal.value) }
   }

 if(Patient.estimate!=undefined) {
  if (document.UpdateForm!=undefined)  {
    if(!isWhitespace(UpdateForm.priexlos.value)) {
      numtotal+=parseFloat(UpdateForm.priexlos.value) }
    if(!isWhitespace(UpdateForm.shaexlos.value)) {
      numtotal+=parseFloat(UpdateForm.shaexlos.value) }
    if(!isWhitespace(UpdateForm.hosexlos.value)) {
      numtotal+=parseFloat(UpdateForm.hosexlos.value) }
  }
 }

  } else if(Patient.festflag.value=="0") {
    if (document.UpdateForm!=undefined)  {
      if(document.UpdateForm.ptelg032!=undefined)  {
        if(!isWhitespace(UpdateForm.ptelg032.value)) {
          numtotal+=parseFloat(UpdateForm.ptelg032.value) }
      } else {
       if (document.Patient.ptelmamt!=undefined)  {
           if(!isWhitespace(Patient.ptelmamt.value)) {
             numtotal+=parseFloat(Patient.ptelmamt.value) }
       }
      }
    } else {
       if (document.Patient.ptelmamt!=undefined)  {
           if(!isWhitespace(Patient.ptelmamt.value)) {
             numtotal+=parseFloat(Patient.ptelmamt.value) }
       }
    }
  if (document.UpdateForm!=undefined)  {
     if(document.UpdateForm.priexlos!=undefined)  {
       if(!isWhitespace(UpdateForm.priexlos.value)) {
         numtotal+=parseFloat(UpdateForm.priexlos.value) }
       if(!isWhitespace(UpdateForm.shaexlos.value)) {
         numtotal+=parseFloat(UpdateForm.shaexlos.value) }
       if(!isWhitespace(UpdateForm.sdyexlos.value)) {
         numtotal+=parseFloat(UpdateForm.sdyexlos.value) }
       if(!isWhitespace(UpdateForm.hosexlos.value)) {
         numtotal+=parseFloat(UpdateForm.hosexlos.value) }
       if(!isWhitespace(UpdateForm.thtexlos.value)) {
         numtotal+=parseFloat(UpdateForm.thtexlos.value) }
       if(!isWhitespace(UpdateForm.icuexlos.value)) {
         numtotal+=parseFloat(UpdateForm.icuexlos.value) }
    }
  }

    if (document.UpdateForm!=undefined)  {
      if(document.UpdateForm.ptelg003!=undefined)  {

//// Task 0907875 - for SJOG using standard layout

      if(document.getElementById("ptcnifcl").value==0 &&
          (trim(UpdateForm.expcdlos.value)=="0")) {
          numtotal+=parseFloat(UpdateForm.ptelg040.value)
       } else {

        if(!isWhitespace(UpdateForm.ptelg003.value)) {
          if(Patient.admrlost.value > 0) {
            numtotal+=parseFloat(UpdateForm.ptelg003.value) }
        }
        if(!isWhitespace(UpdateForm.ptelg040.value)) {
          if(Patient.admrlost.value < 1) {
            numtotal+=parseFloat(UpdateForm.ptelg040.value) }
        }
       }
      } else {
        if(!isWhitespace(Patient.fundxcss.value)) {
           numtotal+=parseFloat(Patient.fundxcss.value) }
      }
    } else {
      if(!isWhitespace(Patient.fundxcss.value)) {
         numtotal+=parseFloat(Patient.fundxcss.value) }
    }
 }

  if(document.getElementById("ptcnifcl").value==1) {
    if(Patient.discount!=undefined) {
     if(Patient.festflag.value=="1" && !isWhitespace(Patient.discount.value)) {
         numtotal-=parseFloat(Patient.discount.value) }
    }
  }
//
  GetHeaIFCTotals();
  Patient.esttotal.value = numtotal;
  RoundNumber(document.Patient.esttotal,2);
}
function GetHeaIFCTotals() {
  if(Patient.hbfee01e!=undefined && 
      document.getElementById("ptcnifcl").value==1) {
    if(!isWhitespace(Patient.hbfee01e.value)) {
        numtotal+=parseFloat(Patient.hbfee01e.value) }
  }
  if(Patient.hbfee02e!=undefined&&
      document.getElementById("ptcnifcl").value==1) {
    if(!isWhitespace(Patient.hbfee02e.value)) {
        numtotal+=parseFloat(Patient.hbfee02e.value) }
  }
  if(Patient.hbfee02e!=undefined &&
      document.getElementById("ptcnifcl").value==1) {
    if(!isWhitespace(Patient.hbfee03e.value)) {
        numtotal+=parseFloat(Patient.hbfee03e.value) }
  }
  costlos=0;
  costotal=0;
  rebtotal=0;
  daytotal=0;
  if(Patient.festflag.value=="0") {
//
    if (document.UpdateForm!=undefined)  {
      if(document.UpdateForm.expcdlos!=undefined) {
        costlos=UpdateForm.expcdlos.value;
      }

      if(document.getElementById("ptcnifcl").value == 2) {
        if (costlos==0) {
          costlos="1";
        }
      }

      if (checkInd.search(/V/g) >= 0) {
        if(!isWhitespace(Patient.hbfee02b.value)) {
          costotal+=(costlos * parseFloat(Patient.hbfee02b.value))   // DVA
        }
      } else
      if (checkInd.search(/D/g) >= 0) {
        if(!isWhitespace(Patient.hbfee02b.value)) {
          costotal+=(costlos * parseFloat(Patient.hbfee02b.value))   // DOD
        }
      } else {
        if(!isWhitespace(Patient.hbfee03b.value)) {
          costotal+=(costlos * parseFloat(Patient.hbfee03b.value))   // Private
        }
      }
    }
    if (costlos == 0) {
      if(!isWhitespace(Patient.hbfee01b.value)) {
        costotal+=parseFloat(Patient.hbfee01b.value)                 // Same Day
      }
    }
// JP added for hea 0892480     
    if(document.getElementById("ptcnifcl").value==1) {
      if(!isWhitespace(Patient.htfee01d.value)) {
        numtotal+=parseFloat(Patient.htfee01d.value) 
        }
      if(!isWhitespace(Patient.hofee01d.value)) {
        numtotal+=parseFloat(Patient.hofee01d.value) 
        }
      if(!isWhitespace(Patient.hpfee01d.value)) {
        numtotal+=parseFloat(Patient.hpfee01d.value) 
        }
    }
//
// JP added for cabrini 0880122
    if(document.getElementById("ptcnifcl").value==3) {
      if(document.UpdateForm!=undefined)  {
         if(document.UpdateForm.ptelg032!=undefined)  {
           if(!isWhitespace(UpdateForm.ptelg032.value)) {
              costotal+=parseFloat(UpdateForm.ptelg032.value) }
         } else {
           if (document.Patient.ptelmamt!=undefined) {
              if(!isWhitespace(Patient.ptelmamt.value)) {
              numtotal+=parseFloat(Patient.ptelmamt.value) }
           }
         }
      } else {
         if (document.Patient.ptelmamt!=undefined) {
            if(!isWhitespace(Patient.ptelmamt.value)) {
            numtotal+=parseFloat(Patient.ptelmamt.value) }
         }
      }
    }
// JP end added for cabrini 0880122
//
    if(!isWhitespace(Patient.htfee01b.value)) {
      costotal+=parseFloat(Patient.htfee01b.value) }
    if(!isWhitespace(Patient.hofee01b.value)) {
      costotal+=parseFloat(Patient.hofee01b.value) }
    if(!isWhitespace(Patient.hpfee01b.value)) {
      costotal+=parseFloat(Patient.hpfee01b.value) }
    if (document.getElementById("ptcnifcl").value == 2) {
      if(!isWhitespace(UpdateForm.ptelg032.value)) {
        costotal+=parseFloat(UpdateForm.ptelg032.value)    // show in costotal
        numtotal-=parseFloat(UpdateForm.ptelg032.value) }  // for SJOG only
    }
    if ((document.getElementById("ptcnifcl").value == 1) ||
       (document.getElementById("ptcnifcl").value == 3)){
      if (checkInd.search(/V/g) >= 0) {
        numtotal-=parseFloat(UpdateForm.priexlos.value) }  // not for DVA if HEA
    }
//
//  if(!isWhitespace(Patient.hbfee05c.value)) {
//    rebtotal+=parseFloat(Patient.hbfee05c.value) }
//  if(!isWhitespace(Patient.htfee01c.value)) {
//    rebtotal+=parseFloat(Patient.htfee01c.value) }
//  if(!isWhitespace(Patient.hofee01c.value)) {
//    rebtotal+=parseFloat(Patient.hofee01c.value) }
//  if(!isWhitespace(Patient.hpfee01c.value)) {
//    rebtotal+=parseFloat(Patient.hpfee01c.value) }
//
    rebtotal+=parseFloat(costotal)
    if (document.UpdateForm!=undefined)  {
      if(document.UpdateFormpriexlos!=undefined)  {
        rebtotal-=parseFloat(UpdateForm.priexlos.value)        // pri copayment
        rebtotal-=parseFloat(UpdateForm.shaexlos.value)        // sha copayment
        rebtotal-=parseFloat(UpdateForm.sdyexlos.value)        // sdy copayment
        rebtotal-=parseFloat(UpdateForm.hosexlos.value)        // hos copayment
        rebtotal-=parseFloat(UpdateForm.thtexlos.value)        // tht copayment
        rebtotal-=parseFloat(UpdateForm.icuexlos.value)        // icu copayment
      }
    }
    if (document.UpdateForm!=undefined)  {
      if(document.UpdateForm.ptelg003!=undefined)  {
        if(!isWhitespace(UpdateForm.ptelg003.value)) {
          if(Patient.admrlost.value > 0) {
            rebtotal-=parseFloat(UpdateForm.ptelg003.value)
            daytotal+=parseFloat(UpdateForm.ptelg003.value) }  // onight excess
        }
        if(!isWhitespace(UpdateForm.ptelg040.value)) {
          if(Patient.admrlost.value < 1) {
            rebtotal-=parseFloat(UpdateForm.ptelg040.value)
            daytotal+=parseFloat(UpdateForm.ptelg040.value) }  // sameday excess
        }
      } else {
        if(!isWhitespace(Patient.fundxcss.value)) {
          rebtotal-=parseFloat(Patient.fundxcss.value) }
      }
    } else {
    if(!isWhitespace(Patient.fundxcss.value)) {
        rebtotal-=parseFloat(Patient.fundxcss.value) }
    }
//
    if (document.UpdateForm!=undefined)  {
      if(document.UpdateForm.ptelg002!=undefined)  {
        if(Patient.admrlost.value > 1) {
          daytotal+=parseFloat(UpdateForm.ptelg002.value)  // day pri copayment
        }
        if ((document.getElementById("ptcnifcl").value == 1)||
            (document.getElementById("ptcnifcl").value == 3)) {
          if (checkInd.search(/V/g) >= 0) {
            daytotal-=parseFloat(UpdateForm.ptelg002.value)// not for DVA if HEA
          }
        }
        if(Patient.admrlost.value <= 1) {
          daytotal+=parseFloat(UpdateForm.ptelg025.value)  // day sdy copayment
        }
        daytotal+=parseFloat(UpdateForm.ptelg010.value)    // day sha copayment
        daytotal+=parseFloat(UpdateForm.ptelg027.value)    // day hos copayment
        daytotal+=parseFloat(UpdateForm.ptelg011.value)    // day tht copayment
        daytotal+=parseFloat(UpdateForm.ptelg041.value)    // day icu copayment
    }
    }
//
  }
  if (rebtotal < 0) { rebtotal = 0; }                      // no negative total
  Patient.estcostt.value = costotal;
  Patient.estrebtt.value = rebtotal;
  Patient.estdaytt.value = daytotal;
  RoundNumber(document.Patient.estcostt,2);
  RoundNumber(document.Patient.estrebtt,2);
  RoundNumber(document.Patient.estdaytt,2);
}

function GetDayTot() {
  daycharge=0;
    if(!isWhitespace(Patient.bdfee01b.value)) {
      daycharge+=parseFloat(Patient.bdfee01b.value) }
    if(!isWhitespace(Patient.bdfee02b.value)) {
      daycharge+=parseFloat(Patient.bdfee02b.value) }
    if(!isWhitespace(Patient.bdfee03b.value)) {
      daycharge+=parseFloat(Patient.bdfee03b.value) }
    if(!isWhitespace(Patient.bdfee04b.value)) {
      daycharge+=parseFloat(Patient.bdfee04b.value) }
    if(!isWhitespace(Patient.bdfee05b.value)) {
      daycharge+=parseFloat(Patient.bdfee05b.value) }
    if(!isWhitespace(Patient.bdfee06b.value)) {
      daycharge+=parseFloat(Patient.bdfee06b.value) }
    if(!isWhitespace(Patient.bdfee07b.value)) {
      daycharge+=parseFloat(Patient.bdfee07b.value) }

    if(!isWhitespace(Patient.thfee01b.value)) {
      daycharge+=parseFloat(Patient.thfee01b.value) }
    if(!isWhitespace(Patient.thfee02b.value)) {
      daycharge+=parseFloat(Patient.thfee02b.value) }
    if(!isWhitespace(Patient.thfee03b.value)) {
      daycharge+=parseFloat(Patient.thfee03b.value) }
    if(!isWhitespace(Patient.thfee04b.value)) {
      daycharge+=parseFloat(Patient.thfee04b.value) }
    if(!isWhitespace(Patient.thfee05b.value)) {
      daycharge+=parseFloat(Patient.thfee05b.value) }
    if(!isWhitespace(Patient.thfee06b.value)) {
      daycharge+=parseFloat(Patient.thfee06b.value) }
    if(!isWhitespace(Patient.thfee07b.value)) {
      daycharge+=parseFloat(Patient.thfee07b.value) }
    if(!isWhitespace(Patient.thfee08b.value)) {
      daycharge+=parseFloat(Patient.thfee08b.value) }
    if(!isWhitespace(Patient.thfee09b.value)) {
      daycharge+=parseFloat(Patient.thfee09b.value) }
    if(!isWhitespace(Patient.thfee10b.value)) {
      daycharge+=parseFloat(Patient.thfee10b.value) }
    if(!isWhitespace(Patient.thfee11b.value)) {
      daycharge+=parseFloat(Patient.thfee11b.value) }
    if(!isWhitespace(Patient.thfee12b.value)) {
      daycharge+=parseFloat(Patient.thfee12b.value) }
    if(!isWhitespace(Patient.thfee13b.value)) {
      daycharge+=parseFloat(Patient.thfee13b.value) }
    if(!isWhitespace(Patient.thfee14b.value)) {
      daycharge+=parseFloat(Patient.thfee14b.value) }
    if(!isWhitespace(Patient.thfee15b.value)) {
      daycharge+=parseFloat(Patient.thfee15b.value) }
    if(!isWhitespace(Patient.thfee16b.value)) {
      daycharge+=parseFloat(Patient.thfee16b.value) }
    if(!isWhitespace(Patient.thfee17b.value)) {
      daycharge+=parseFloat(Patient.thfee17b.value) }
    if(!isWhitespace(Patient.thfee18b.value)) {
      daycharge+=parseFloat(Patient.thfee18b.value) }
    if(!isWhitespace(Patient.thfee19b.value)) {
      daycharge+=parseFloat(Patient.thfee19b.value) }
    if(!isWhitespace(Patient.thfee20b.value)) {
      daycharge+=parseFloat(Patient.thfee20b.value) }
    if(!isWhitespace(Patient.thfee21b.value)) {
      daycharge+=parseFloat(Patient.thfee21b.value) }
    if(!isWhitespace(Patient.thfee22b.value)) {
      daycharge+=parseFloat(Patient.thfee22b.value) }
    if(!isWhitespace(Patient.thfee23b.value)) {
      daycharge+=parseFloat(Patient.thfee23b.value) }
    if(!isWhitespace(Patient.thfee24b.value)) {
      daycharge+=parseFloat(Patient.thfee24b.value) }
    if(!isWhitespace(Patient.thfee25b.value)) {
      daycharge+=parseFloat(Patient.thfee25b.value) }
    if(!isWhitespace(Patient.thfee26b.value)) {
      daycharge+=parseFloat(Patient.thfee26b.value) }
    if(!isWhitespace(Patient.thfee27b.value)) {
      daycharge+=parseFloat(Patient.thfee27b.value) }
    if(!isWhitespace(Patient.thfee28b.value)) {
      daycharge+=parseFloat(Patient.thfee28b.value) }
    if(!isWhitespace(Patient.thfee29b.value)) {
      daycharge+=parseFloat(Patient.thfee29b.value) }
    if(!isWhitespace(Patient.thfee30b.value)) {
      daycharge+=parseFloat(Patient.thfee30b.value) }
    if(!isWhitespace(Patient.thfee31b.value)) {
      daycharge+=parseFloat(Patient.thfee31b.value) }
    if(!isWhitespace(Patient.thfee32b.value)) {
      daycharge+=parseFloat(Patient.thfee32b.value) }
    if(!isWhitespace(Patient.thfee33b.value)) {
      daycharge+=parseFloat(Patient.thfee33b.value) }
    if(!isWhitespace(Patient.thfee34b.value)) {
      daycharge+=parseFloat(Patient.thfee34b.value) }
    if(!isWhitespace(Patient.thfee35b.value)) {
      daycharge+=parseFloat(Patient.thfee35b.value) }
    if(!isWhitespace(Patient.thfee36b.value)) {
      daycharge+=parseFloat(Patient.thfee36b.value) }
    if(!isWhitespace(Patient.thfee37b.value)) {
      daycharge+=parseFloat(Patient.thfee37b.value) }
    if(!isWhitespace(Patient.thfee38b.value)) {
      daycharge+=parseFloat(Patient.thfee38b.value) }
    if(!isWhitespace(Patient.thfee39b.value)) {
      daycharge+=parseFloat(Patient.thfee39b.value) }
    if(!isWhitespace(Patient.thfee40b.value)) {
      daycharge+=parseFloat(Patient.thfee40b.value) }
    if(!isWhitespace(Patient.thfee41b.value)) {
      daycharge+=parseFloat(Patient.thfee41b.value) }
    if(!isWhitespace(Patient.thfee42b.value)) {
      daycharge+=parseFloat(Patient.thfee42b.value) }
    if(!isWhitespace(Patient.thfee43b.value)) {
      daycharge+=parseFloat(Patient.thfee43b.value) }
    if(!isWhitespace(Patient.thfee44b.value)) {
      daycharge+=parseFloat(Patient.thfee44b.value) }
    if(!isWhitespace(Patient.thfee45b.value)) {
      daycharge+=parseFloat(Patient.thfee45b.value) }
    if(!isWhitespace(Patient.thfee46b.value)) {
      daycharge+=parseFloat(Patient.thfee46b.value) }
    if(!isWhitespace(Patient.thfee47b.value)) {
      daycharge+=parseFloat(Patient.thfee47b.value) }
    if(!isWhitespace(Patient.thfee48b.value)) {
      daycharge+=parseFloat(Patient.thfee48b.value) }
    if(!isWhitespace(Patient.thfee49b.value)) {
      daycharge+=parseFloat(Patient.thfee49b.value) }
    if(!isWhitespace(Patient.thfee50b.value)) {
      daycharge+=parseFloat(Patient.thfee50b.value) }
    if(!isWhitespace(Patient.msfee01b.value)) {
      daycharge+=parseFloat(Patient.msfee01b.value) }
    if(!isWhitespace(Patient.msfee02b.value)) {
      daycharge+=parseFloat(Patient.msfee02b.value) }
    if(!isWhitespace(Patient.msfee03b.value)) {
      daycharge+=parseFloat(Patient.msfee03b.value) }
    if(!isWhitespace(Patient.msfee04b.value)) {
      daycharge+=parseFloat(Patient.msfee04b.value) }
    if(!isWhitespace(Patient.msfee05b.value)) {
      daycharge+=parseFloat(Patient.msfee05b.value) }
    if(!isWhitespace(Patient.msfee06b.value)) {
      daycharge+=parseFloat(Patient.msfee06b.value) }
    if(!isWhitespace(Patient.msfee07b.value)) {
      daycharge+=parseFloat(Patient.msfee07b.value) }
    if(!isWhitespace(Patient.msfee08b.value)) {
      daycharge+=parseFloat(Patient.msfee08b.value) }
    if(!isWhitespace(Patient.msfee09b.value)) {
      daycharge+=parseFloat(Patient.msfee09b.value) }
    if(!isWhitespace(Patient.msfee10b.value)) {
      daycharge+=parseFloat(Patient.msfee10b.value) }
    if(!isWhitespace(Patient.msfee11b.value)) {
      daycharge+=parseFloat(Patient.msfee11b.value) }
    if(!isWhitespace(Patient.msfee12b.value)) {
      daycharge+=parseFloat(Patient.msfee12b.value) }
    if(!isWhitespace(Patient.msfee13b.value)) {
      daycharge+=parseFloat(Patient.msfee13b.value) }
    if(!isWhitespace(Patient.msfee14b.value)) {
      daycharge+=parseFloat(Patient.msfee14b.value) }
    if(!isWhitespace(Patient.msfee15b.value)) {
      daycharge+=parseFloat(Patient.msfee15b.value) }
    if(!isWhitespace(Patient.msfee16b.value)) {
      daycharge+=parseFloat(Patient.msfee16b.value) }
    if(!isWhitespace(Patient.msfee17b.value)) {
      daycharge+=parseFloat(Patient.msfee17b.value) }
    if(!isWhitespace(Patient.msfee18b.value)) {
      daycharge+=parseFloat(Patient.msfee18b.value) }
    if(!isWhitespace(Patient.msfee19b.value)) {
      daycharge+=parseFloat(Patient.msfee19b.value) }
    if(!isWhitespace(Patient.msfee20b.value)) {
      daycharge+=parseFloat(Patient.msfee20b.value) }
    if(!isWhitespace(Patient.msfee21b.value)) {
      daycharge+=parseFloat(Patient.msfee21b.value) }
    if(!isWhitespace(Patient.msfee22b.value)) {
      daycharge+=parseFloat(Patient.msfee22b.value) }
    if(!isWhitespace(Patient.msfee23b.value)) {
      daycharge+=parseFloat(Patient.msfee23b.value) }
    if(!isWhitespace(Patient.msfee24b.value)) {
      daycharge+=parseFloat(Patient.msfee24b.value) }
    if(!isWhitespace(Patient.msfee25b.value)) {
      daycharge+=parseFloat(Patient.msfee25b.value) }
    if(!isWhitespace(Patient.msfee26b.value)) {
      daycharge+=parseFloat(Patient.msfee26b.value) }
    if(!isWhitespace(Patient.msfee27b.value)) {
      daycharge+=parseFloat(Patient.msfee27b.value) }
    if(!isWhitespace(Patient.msfee28b.value)) {
      daycharge+=parseFloat(Patient.msfee28b.value) }
    if(!isWhitespace(Patient.msfee29b.value)) {
      daycharge+=parseFloat(Patient.msfee29b.value) }
    if(!isWhitespace(Patient.msfee30b.value)) {
      daycharge+=parseFloat(Patient.msfee30b.value) }
    if(!isWhitespace(Patient.msfee31b.value)) {
      daycharge+=parseFloat(Patient.msfee31b.value) }
    if(!isWhitespace(Patient.msfee32b.value)) {
      daycharge+=parseFloat(Patient.msfee32b.value) }
    if(!isWhitespace(Patient.msfee33b.value)) {
      daycharge+=parseFloat(Patient.msfee33b.value) }
    if(!isWhitespace(Patient.msfee34b.value)) {
      daycharge+=parseFloat(Patient.msfee34b.value) }
    if(!isWhitespace(Patient.msfee35b.value)) {
      daycharge+=parseFloat(Patient.msfee35b.value) }
    if(!isWhitespace(Patient.msfee36b.value)) {
      daycharge+=parseFloat(Patient.msfee36b.value) }
    if(!isWhitespace(Patient.msfee37b.value)) {
      daycharge+=parseFloat(Patient.msfee37b.value) }
    if(!isWhitespace(Patient.msfee38b.value)) {
      daycharge+=parseFloat(Patient.msfee38b.value) }
    if(!isWhitespace(Patient.msfee39b.value)) {
      daycharge+=parseFloat(Patient.msfee39b.value) }
    if(!isWhitespace(Patient.msfee40b.value)) {
      daycharge+=parseFloat(Patient.msfee40b.value) }
    if(!isWhitespace(Patient.msfee41b.value)) {
      daycharge+=parseFloat(Patient.msfee41b.value) }
    if(!isWhitespace(Patient.msfee42b.value)) {
      daycharge+=parseFloat(Patient.msfee42b.value) }
    if(!isWhitespace(Patient.msfee43b.value)) {
      daycharge+=parseFloat(Patient.msfee43b.value) }
    if(!isWhitespace(Patient.msfee44b.value)) {
      daycharge+=parseFloat(Patient.msfee44b.value) }
    if(!isWhitespace(Patient.msfee45b.value)) {
      daycharge+=parseFloat(Patient.msfee45b.value) }
    if(!isWhitespace(Patient.msfee46b.value)) {
      daycharge+=parseFloat(Patient.msfee46b.value) }
    if(!isWhitespace(Patient.msfee47b.value)) {
      daycharge+=parseFloat(Patient.msfee47b.value) }
    if(!isWhitespace(Patient.msfee48b.value)) {
      daycharge+=parseFloat(Patient.msfee48b.value) }
    if(!isWhitespace(Patient.msfee49b.value)) {
      daycharge+=parseFloat(Patient.msfee49b.value) }
    if(!isWhitespace(Patient.msfee50b.value)) {
      daycharge+=parseFloat(Patient.msfee50b.value) }
    if(!isWhitespace(Patient.msfee51b.value)) {
      daycharge+=parseFloat(Patient.msfee51b.value) }
    if(!isWhitespace(Patient.msfee52b.value)) {
      daycharge+=parseFloat(Patient.msfee52b.value) }
    if(!isWhitespace(Patient.consumab.value)) {
      daycharge+=parseFloat(Patient.consumab.value) }

  Patient.dailytot.value = daycharge;
  RoundNumber(document.Patient.dailytot,2);
}

function PreviewFeesEstimate() {
  NewWindow=window.open("","NewWindow",
  "top=10,left=10,width=900,height=880,location=no,toolbar=yes,scrollbars=yes,menubar=yes")
  NewWindow.document.open()
  if((document.getElementById("ptcnifcl").value == 3) &&
     (Patient.festflag.value=="0")){
      NewWindow.document.write(CABLayout())
      NewWindow.document.close();
      return;
  }
  if(document.getElementById("ptcnifcl").value == 1) {
   if (Patient.festflag.value=="1") {
    NewWindow.document.write(HEAEstimateDocument())
    } else {
    NewWindow.document.write(HEALayout())
    }
  } else {
    if(document.getElementById("ptcnifcl").value == 2) {
      NewWindow.document.write(SJGHCLayout())
    } else {
      NewWindow.document.write(fullEstimateDocument())
    }
  }
  NewWindow.document.close();
  HideWaitScreen();
}

function PrintFeesEstimate() {
  if(validateMandatory(DocumentForm)) {
  NewWindow=window.open("","NewWindow",
  "top=10,left=10,width=750,height=500,location=no,toolbar=yes,scrollbars=yes,menubar=yes")
  if(document.getElementById("ptcnifcl").value == 1) {
   if (Patient.festflag.value=="1") {
    DocumentForm.htmlline.value=HEAEstimateDocument()
   } else {
    DocumentForm.htmlline.value=HEALayout()
   }
  } else {
    if(document.getElementById("ptcnifcl").value == 2) {
      DocumentForm.htmlline.value=SJGHCLayout()
    } else {
      if(document.getElementById("ptcnifcl").value == 3){
        DocumentForm.htmlline.value=CABLayout()
      } else {
        DocumentForm.htmlline.value=fullEstimateDocument()
      }
    }
  }
  NewWindow.document.open()
  NewWindow.document.write(DocumentForm.htmlline.value)
  setTimeout(function() {
    NewWindow.print();
    self.close();
    NewWindow.document.close();
    NewWindow.close();
    DocumentForm.submit();
  }, 1000);
  HideWaitScreen();
  }
}
// --------------------------
// Standard Layout (Format 0)
// --------------------------
function fullEstimateDocument() {
  if(Patient.festflag.value=="0") {
    if(!isWhitespace(Patient.estimate.value)) { 
      Patient.festflag.value="1";
    }
  }
  DocumentHTML="<title>Fees Estimate Details</title>\n" +
"<style type=text/css>\n" +
"body { margin:10; \n" +
"font-family: Arial; }\n" +
"td { font-size:9pt;}\n" +
"td.SectHead { \n" +
"background-color:lightgrey;\n" +
"font-family: Arial;\n" +
"font-weight:bold; }\n" +
"td.HeadingRow  { \n" +
"font-family: Arial;\n" +
"font-size:10pt; \n" +
"font-weight:bold; }\n" +
"p.page {page-break-after: always}\n" +
"</style>\n" +

"<table align=center width=100% border=0>\n" +

"<tr><td width=150><img height=50 src=../images/" +
 Patient.hospcode.value + "logo.gif></td>\n" +

"    <td><b>Reference No: </b>" + Patient.pmfdquot.value + "</td></tr>\n"
if(Patient.festflag.value=="1") {
  DocumentHTML+="<tr><td>&nbsp;</td><td><b>Expiry Date: </b>\n" +
                     Patient.pmfdexpd.value + "</td></tr>\n"
}
DocumentHTML+="<tr><td>&nbsp;</td><td><b>Doctor Name: </b>\n" +
  Patient.doctname.value + "</td></tr>\n" +
"<tr><td>&nbsp;</td><td><b>Name: </b>\n" +
  Patient.Title.value +
  Patient.Given.value + "\n" +
  Patient.Surname.value + "</td></tr>\n" +

"<tr><td>&nbsp;</td><td><b>Date Of Birth: </b>\n" +
  Patient.dob.value + "</td></tr>\n" +

"<tr><td>&nbsp;</td><td><b>Admission Date: </b>\n" +
  Patient.admndate.value + "</td><td>&nbsp;</td></tr>\n" ;

//"<tr><td colspan=6 align=center><hr width=100%></td></tr>\n" +
/////if(Patient.festflag.value=="0") { // 313842 only for IFC
DocumentHTML+="<tr><td colspan=6 align=center class=SectHead>\n" +
  " INFORMED FINANCIAL CONSENT </td></tr>\n" ;
/////}
/////if(Patient.festflag.value=="1") { // 313842 only for IFC
/////DocumentHTML+="<tr><td colspan=6 align=center class=SectHead>\n" +
/////  " FEES ESTIMATE </td></tr>\n" ;
/////}

DocumentHTML+="<tr><td>\n" +
" <b>INSURANCE DETAILS </td></tr>\n" +

"<tr><td colspan=6><table width=100%>\n"

if((Patient.claimtyp.value.substr(7,1))=="1" ||
   (Patient.claimtyp.value.substr(7,1))=="2") {
  DocumentHTML+="<td colspan=6>[X] <b><i>Private Health Insurance </td></tr>\n"
  } else {
  DocumentHTML+="<td colspan=6>[&nbsp; ] <b><i>Private Health Insurance </td></tr>\n" }

DocumentHTML+=
"<tr><td><b>Fund Name </td>\n" +
"<td>" + Patient.hlthfund.value + "</td>\n" +
"    <td><b>Membership No </td>\n" +
"<td>" + Patient.hlthmemb.value + "</td>\n" +
"    <td><b>Schedule </td>\n" +
"<td>" + Patient.hlthtabl.value + "</td></tr>\n" +
"<tr><td><b>Fund Excess </td>\n" 
if(Patient.festflag.value=="1") {
  DocumentHTML+="<td>" + Patient.pmfdxcss.value + "</td>\n"
} else if((Patient.festflag.value=="0") &&
         (document.UpdateForm!=undefined))  {
  if(Patient.admrlost.value > 0) {
    DocumentHTML+="<td>" + UpdateForm.ptelg003.value + "</td>\n"
  } else {
    DocumentHTML+="<td>" + UpdateForm.ptelg040.value + "</td>\n"
  }
 } else {
  DocumentHTML+="<td>" + Patient.fundxcss.value + "</td>\n"
}

DocumentHTML+="    <td><b>Paid up date </td>\n"
// "<td>" + Patient.paidupdt.value + "</td>\n" +

 if((Patient.festflag.value=="0") &&
    (document.UpdateForm!=undefined))  {
       if(UpdateForm.ptelg001.value=="1"){
         DocumentHTML+="<td>Yes</td>\n"
       } else {
         DocumentHTML+="<td>No</td>\n"
       }
 } else {
  DocumentHTML+="<td>" + Patient.paidupdt.value + "</td>\n"
 }

DocumentHTML+="    <td><b>Qualifying Periods</td>\n"
//"    <td><b>Qualifying Periods </td>\n"
// "<td>" + Patient.qualperd.value + "</td></tr>\n" +

 if((Patient.festflag.value=="0") &&
    (document.UpdateForm!=undefined))  {
       if(UpdateForm.ptelg030.value=="1"){
         DocumentHTML+="<td>Yes</td></tr>\n"
       } else {
         DocumentHTML+="<td>No</td></tr>\n"
       }
 } else {
  DocumentHTML+="<td>" + Patient.qualperd.value + "</td></tr>\n"
 }

DocumentHTML+="    <td><b>PEA form required</td>\n"
if(trim(Patient.subjtpea.value)=="Yes"){
  DocumentHTML+="<td>[X]</td>\n"
  } else {
  DocumentHTML+="<td>[&nbsp; ]</td>\n" }

DocumentHTML+=
"    <td><b>Estimate required </td>\n" +
"<td>" + "[&nbsp; ]" + "</td>\n"

if(Patient.hospname.value.substr(0,7)=="Cabrini"){
  DocumentHTML+=
  "    <td><b>Campus Malvern (ONight) </td>\n" +
  "<td>" + "&nbsp;" + "</td></tr>\n"
}

DocumentHTML+=
"<tr><td colspan=6 align=center><hr width=100%></td></tr>\n"

if((Patient.claimtyp.value.substr(7,1))=="0" ||
   (Patient.claimtyp.value.substr(7,1))=="3") {
  DocumentHTML+="<tr><td colspan=2>[X]<b>Non/Self/Overseas insured </td>\n"
  } else {
  DocumentHTML+="<tr><td colspan=2>[&nbsp; ]<b>Non/Self/Overseas insured </td>\n" }

DocumentHTML+=
"    <td><b>Estimate required </td>\n" +
"    <td>" + "[&nbsp; ]" + "</td>\n" +
"<td>" + "&nbsp;" + "</td>\n" +
"<td>" + "&nbsp;" + "</td></tr>\n"

if((Patient.claimtyp.value.substr(7,1))=="7"){
  DocumentHTML+="<tr><td colspan=2>[X]\n"
  } else {
  DocumentHTML+="<tr><td colspan=2>[&nbsp; ]\n" }

if((Patient.dvacolor.value.substr(14,1))=="G"){
  DocumentHTML+=
  "<b>Veterans Affairs Cardholder </td>\n" +
  "    <td><b>Gold</b>[X]</td>\n" +
  "    <td><b>White</b>[&nbsp; ]</td>\n"
  } else 
if((Patient.dvacolor.value.substr(14,1))=="W"){
  DocumentHTML+=
  "<b>Veterans Affairs Cardholder </td>\n" +
  "    <td><b>Gold</b>[&nbsp; ]</td>\n" +
  "    <td><b>White</b>[X]</td>\n"
  } else {
  DocumentHTML+=
  "<b>Veterans Affairs Cardholder </td>\n" +
  "    <td><b>Gold</b>[&nbsp; ]</td>\n" +
  "    <td><b>White</b>[&nbsp; ]</td>\n" }

DocumentHTML+=
  "    <td align=right><b>(White) Est. Required</b>[&nbsp; ]</td>\n" +
"<td>" + "&nbsp;" + "</td></tr>\n"

if(Patient.ptcnhdps.value=="6"){
  if((Patient.claimtyp.value.substr(7,1))=="4"){
    DocumentHTML+="<tr><td>[X]<b>Workcover/WCC </td>\n"
  } else {
    DocumentHTML+="<tr><td>[&nbsp; ]<b>Workcover/WCC </td>\n"
  }
} else if((Patient.claimtyp.value.substr(7,1))=="4"){
    DocumentHTML+="<tr><td>[X]<b>Workcover </td>\n"
  } else {
    DocumentHTML+="<tr><td>[&nbsp; ]<b>Workcover </td>\n"
  }

checkInd=document.Patient.claimtyp.value.substr(3,5)
if(Patient.ptcnhdps.value=="6"){
  if (checkInd.search(/M/g) >= 0) {
    DocumentHTML+="<td>[X]<b>TAC/MVIT </td>\n"
  } else {
    DocumentHTML+="<td>[&nbsp; ]<b>TAC/MVIT </td>\n"
  }
} else if (checkInd.search(/M/g) >= 0) {
    DocumentHTML+="<td>[X]<b>TAC </td>\n"
  } else {
    DocumentHTML+="<td>[&nbsp; ]<b>TAC </td>\n"
  }

DocumentHTML+=
"<td colspan=2><b>Letter of Approval</b>&nbsp;  Yes[&nbsp; ]  No[&nbsp; ]</td>\n" +
"    <td align=right><b>Est. Required</b> [&nbsp; ]</td>\n" +
"<td>" + "&nbsp;" + "</td></tr>\n" +

"</table></tr>\n" +

"<tr><td colspan=6 align=center><hr width=100%></td></tr>\n" +

"<tr><table width=100% border=1 cellspacing=0><tr>\n" +
"<tr><td>&nbsp;</td><td colspan=5 align=center class=SectHead>\n" +
" ESTIMATED            </td></tr>\n" +
"<td align=center><b>Accommodation Type</td>\n" + 
"<td align=center><b>Daily Room Rate</td>\n" +
"<td align=center><b>Maximum Cost</td>\n" +
"<td align=center><b>Length of Stay</td>\n" +
"<td align=center><b>Fund Rebate</td>\n" +
"<td align=center><b>Patient Cost</td></tr>\n"

if(Patient.festflag.value=="1") {
  DocumentHTML+="<tr><td>&nbsp;" + Patient.bdfee01u.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee01b.value + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=center>&nbsp;" + Patient.bdfee01s.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee01c.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee01t.value + "</td></tr>\n"
} else if(Patient.festflag.value=="0" &&
         parseFloat(UpdateForm.ptelg002.value)>0) {
  DocumentHTML+="<tr><td>&nbsp;Co-payment required - Private</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.ptelg002.value + "</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.ptelg019.value + "</td>\n" +
  "<td align=center>&nbsp;" + UpdateForm.expcdlos.value + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.priexlos.value + "</td></tr>\n"
}

if(Patient.festflag.value=="1") {
  DocumentHTML+="<tr><td>&nbsp;" + Patient.bdfee02u.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee02b.value + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=center>&nbsp;" + Patient.bdfee02s.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee02c.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee02t.value + "</td></tr>\n"
} else if(Patient.festflag.value=="0" &&
         parseFloat(UpdateForm.ptelg010.value)>0) {
  DocumentHTML+="<tr><td>&nbsp;Co-payment required - Shared</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.ptelg010.value + "</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.ptelg020.value + "</td>\n" +
  "<td align=center>&nbsp;" + UpdateForm.expcdlos.value + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.shaexlos.value + "</td></tr>\n"
}

if(Patient.festflag.value=="1") {
  DocumentHTML+="<tr><td>&nbsp;" + Patient.bdfee03u.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee03b.value + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=center>&nbsp;" + Patient.bdfee03s.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee03c.value + "</td>\n" +
 "<td align=right>&nbsp;" + Patient.bdfee03t.value + "</td></tr>\n"
} else if(Patient.festflag.value=="0" &&
         parseFloat(UpdateForm.ptelg025.value)>0) {
  DocumentHTML+="<tr><td>&nbsp;Co-payment required - Same day</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.ptelg025.value + "</td>\n" +
//  "<td align=right>&nbsp;" + UpdateForm.ptelg026.value + "</td>\n" +
  "<td align=right>&nbsp;</td>\n" +
  "<td align=center>&nbsp;" + UpdateForm.expcdlos.value + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.sdyexlos.value + "</td></tr>\n"
}

if(Patient.festflag.value=="1") {
  DocumentHTML+="<tr><td>&nbsp;" + Patient.bdfee04u.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee04b.value + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=center>&nbsp;" + Patient.bdfee04s.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee04c.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee04t.value + "</td></tr>\n"
} else if(Patient.festflag.value=="0" &&
         parseFloat(UpdateForm.ptelg027.value)>0) {
  DocumentHTML+="<tr><td>&nbsp;Co-payment required - Hospital</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.ptelg027.value + "</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.ptelg028.value + "</td>\n" +
  "<td align=center>&nbsp;" + UpdateForm.expcdlos.value + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.hosexlos.value + "</td></tr>\n"
}

if(Patient.festflag.value=="1") {
  DocumentHTML+="<tr><td>&nbsp;" + Patient.bdfee05u.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee05b.value + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=center>&nbsp;" + Patient.bdfee05s.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee05c.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee05t.value + "</td></tr>\n"
} else if(Patient.festflag.value=="0" &&
         parseFloat(UpdateForm.ptelg011.value)>0) {
  DocumentHTML+="<tr><td>&nbsp;Co-payment required - Theatre</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.ptelg011.value + "</td>\n" +
  "<td align=right>&nbsp;</td>\n" +
  "<td align=center>&nbsp;" + UpdateForm.expcdlos.value + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.thtexlos.value + "</td></tr>\n"
}

if(Patient.festflag.value=="1") {
  DocumentHTML+="<tr><td>&nbsp;" + Patient.bdfee06u.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee06b.value + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=center>&nbsp;" + Patient.bdfee06s.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee06c.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee06t.value + "</td></tr>\n"
} else if(Patient.festflag.value=="0" &&
         parseFloat(UpdateForm.ptelg041.value)>0) {
  DocumentHTML+="<tr><td>&nbsp;Co-payment required - ICU/CCU/SCN</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.ptelg041.value + "</td>\n" +
  "<td align=right>&nbsp;</td>\n" +
  "<td align=center>&nbsp;" + UpdateForm.expcdlos.value + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.icuexlos.value + "</td></tr>\n"
}

if((Patient.estimate!=undefined) &&
   (Patient.festflag.value=="1"))
 {
 if (document.UpdateForm!=undefined)  {

  if(parseFloat(UpdateForm.ptelg002.value)>0) {
  DocumentHTML+="<tr><td>&nbsp;Private Co-Payment</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.ptelg002.value + "</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.ptelg019.value + "</td>\n" +
  "<td align=center>&nbsp;" + UpdateForm.expcdlos.value + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.priexlos.value + "</td></tr>\n"
 }

  if(parseFloat(UpdateForm.ptelg010.value)>0) {
  DocumentHTML+="<tr><td>&nbsp;Shared Co-Payment</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.ptelg010.value + "</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.ptelg020.value + "</td>\n" +
  "<td align=center>&nbsp;" + UpdateForm.expcdlos.value + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.shaexlos.value + "</td></tr>\n"
 }
  if(parseFloat(UpdateForm.ptelg025.value)>0) {
  DocumentHTML+="<tr><td>&nbsp;Same Day Co-Payment</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.ptelg025.value + "</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.ptelg026.value + "</td>\n" +
  "<td align=center>&nbsp;" + UpdateForm.expcdlos.value + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.sdyexlos.value + "</td></tr>\n"
 }


  if(parseFloat(UpdateForm.ptelg027.value)>0) {
  DocumentHTML+="<tr><td>&nbsp;Hospital Co-Payment</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.ptelg027.value + "</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.ptelg028.value + "</td>\n" +
  "<td align=center>&nbsp;" + UpdateForm.expcdlos.value + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.hosexlos.value + "</td></tr>\n"
 }

 }
}


//if(Patient.festflag.value=="1" && !isWhitespace(Patient.bdfee06u.value)) {
//  DocumentHTML+="<tr><td>&nbsp;" + Patient.bdfee06u.value + "</td>\n" +
//  "<td align=right>&nbsp;" + Patient.bdfee06b.value + "</td>\n" +
//  "<td>&nbsp;" + "" + "</td>\n" +
//  "<td align=center>&nbsp;" + Patient.bdfee06s.value + "</td>\n" +
//  "<td align=right>&nbsp;" + Patient.bdfee06c.value + "</td>\n" +
//  "<td align=right>&nbsp;" + Patient.bdfee06t.value + "</td></tr>\n"
//}

if(Patient.festflag.value=="1" && !isWhitespace(Patient.bdfee07u.value)) {
  DocumentHTML+="<tr><td>&nbsp;" + Patient.bdfee07u.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee07b.value + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=center>&nbsp;" + Patient.bdfee07s.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee07c.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee07t.value + "</td></tr>\n"
}

if(Patient.estimate==undefined) {
 if(Patient.festflag.value=="1" && parseFloat(Patient.hospcpay.value)>0) {
   DocumentHTML+="<tr><td>Co-Payments to Hospital </td>\n" +
   "<td>&nbsp;" + "" + "</td>\n" +
   "<td>&nbsp;" + "" + "</td>\n" +
   "<td>&nbsp;" + "" + "</td>\n" +
   "<td>&nbsp;" + "" + "</td>\n" +
   "<td align=right>&nbsp;" + Patient.hospcpay.value + "</td></tr>\n"
 }
}
if (document.UpdateForm!=undefined) {
  if(Patient.festflag.value=="0" &&
     !isWhitespace( UpdateForm.ptelg031.value)) {
    DocumentHTML+="<tr><td> " + UpdateForm.ptelg031.value + "&nbsp;</td>\n" +
    "<td>&nbsp;" + "" + "</td>\n" +
    "<td>&nbsp;" + "" + "</td>\n" +
    "<td>&nbsp;" + "" + "</td>\n" +
    "<td>&nbsp;" + "" + "</td>\n" +
    "<td align=right>&nbsp;" + UpdateForm.ptelg032.value + "</td></tr>\n"
  }
} else {
  if(Patient.festflag.value=="0" &&
     !isWhitespace( Patient.ptelmdes.value)) {
    DocumentHTML+="<tr><td> " + Patient.ptelmdes.value + "&nbsp;</td>\n" +
    "<td>&nbsp;" + "" + "</td>\n" +
    "<td>&nbsp;" + "" + "</td>\n" +
    "<td>&nbsp;" + "" + "</td>\n" +
    "<td>&nbsp;" + "" + "</td>\n" +
    "<td align=right>&nbsp;" + Patient.ptelmamt.value + "</td></tr>\n"
  }
}


if(!isWhitespace(Patient.thfee01a.value)) {

DocumentHTML+="<tr><td align=left><b>Theatre Fees</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left><b>Item Number</td>\n" +
"<td align=left><b>Description</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td></tr>\n"

DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee01a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee01a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee01c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee01d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee02a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee02a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee02a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee02c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee02d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee03a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee03a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee03a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee03c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee03d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee04a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee04a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee04a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee04c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee04d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee05a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee05a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee05a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee05c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee05d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee06a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee06a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee06a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee06c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee06d.value + "</td></tr>\n"
}

// Fees Estimate - Print Theatre fees up to 50 items

if(Patient.festflag.value=="1") {
if(!isWhitespace(Patient.thfee07a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee07a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee07a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee07c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee07d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee08a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee08a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee08a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee08c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee08d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee09a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee09a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee09a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee09c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee09d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee10a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee10a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee10a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee10c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee10d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee11a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee11a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee11a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee11c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee11d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee12a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee12a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee12a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee12c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee12d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee13a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee13a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee13a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee13c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee13d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee14a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee14a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee14a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee14c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee14d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee15a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee15a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee15a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee15c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee15d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee16a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee16a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee16a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee16c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee16d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee17a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee17a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee17a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee17c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee17d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee18a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee18a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee18a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee18c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee18d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee19a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee19a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee19a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee19c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee19d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee20a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee20a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee20a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee20c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee20d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee21a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee21a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee21a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee21c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee21d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee22a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee22a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee22a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee22c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee22d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee23a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee23a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee23a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee23c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee23d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee24a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee24a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee24a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee24c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee24d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee25a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee25a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee25a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee25c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee25d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee26a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee26a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee26a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee26c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee26d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee27a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee27a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee27a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee27c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee27d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee28a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee28a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee28a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee28c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee28d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee29a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee29a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee29a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee29c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee29d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee30a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee30a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee30a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee30c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee30d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee31a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee31a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee31a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee31c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee31d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee32a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee32a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee32a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee32c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee32d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee33a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee33a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee33a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee33c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee33d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee34a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee34a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee34a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee34c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee34d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee35a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee35a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee35a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee35c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee35d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee36a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee36a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee36a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee36c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee36d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee37a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee37a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee37a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee37c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee37d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee38a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee38a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee38a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee38c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee38d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee39a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee39a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee39a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee39c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee39d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee40a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee40a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee40a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee40c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee40d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee41a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee41a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee41a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee41c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee41d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee42a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee42a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee42a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee42c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee42d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee43a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee43a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee43a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee43c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee43d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee44a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee44a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee44a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee44c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee44d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee45a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee45a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee45a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee45c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee45d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee46a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee46a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee46a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee46c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee46d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee47a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee47a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee47a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee47c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee47d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee48a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee48a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee48a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee48c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee48d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee49a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee49a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee49a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee49c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee49d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee50a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee50a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.thfee50a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee50c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee50d.value + "</td></tr>\n"
}
}

if(!isWhitespace(Patient.msfee01a.value)) {
if(trim(Patient.msfee01a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee01a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee01c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee01d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td align=left><b>Misc Charges</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left><b>Code</td>\n" +
"<td align=left><b>Description</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td></tr>\n"

DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee01a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee01a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee01c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee01d.value + "</td></tr>\n"
}
}

if(!isWhitespace(Patient.msfee02a.value)) {
if(trim(Patient.msfee02a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee02a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee02c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee02d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee02a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee02a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee02c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee02d.value + "</td></tr>\n"
}
}

if(!isWhitespace(Patient.msfee03a.value)) {
if(trim(Patient.msfee03a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee03a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee03c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee03d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee03a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee03a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee03c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee03d.value + "</td></tr>\n"
}
}

if(!isWhitespace(Patient.msfee04a.value)) {
if(trim(Patient.msfee04a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee04a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee04c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee04d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee04a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee04a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee04c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee04d.value + "</td></tr>\n"
}
}

if(!isWhitespace(Patient.msfee05a.value)) {
if(trim(Patient.msfee05a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee05a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee05c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee05d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee05a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee05a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee05c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee05d.value + "</td></tr>\n"
}
}

if(!isWhitespace(Patient.msfee06a.value)) {
if(trim(Patient.msfee06a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee06a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee06c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee06d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee06a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee06a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee06c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee06d.value + "</td></tr>\n"
}
}

if(!isWhitespace(Patient.msfee07a.value)) {
if(trim(Patient.msfee07a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee07a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee07c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee07d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee07a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee07a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee07c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee07d.value + "</td></tr>\n"
}
}

if(!isWhitespace(Patient.msfee08a.value)) {
if(trim(Patient.msfee08a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee08a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee08c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee08d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee08a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee08a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee08c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee08d.value + "</td></tr>\n"
}
}

// Fees Estimate - Print Misc.Charge up to 50 items

if(Patient.festflag.value=="1") {

if(!isWhitespace(Patient.msfee09a.value)) {
if(trim(Patient.msfee09a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee09a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee09c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee09d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee09a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee09a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee09c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee09d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee10a.value)) {
if(trim(Patient.msfee10a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee10a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee10c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee10d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee10a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee10a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee10c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee10d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee11a.value)) {
if(trim(Patient.msfee11a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee11a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee11c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee11d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee11a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee11a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee11c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee11d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee12a.value)) {
if(trim(Patient.msfee12a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee12a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee12c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee12d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee12a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee12a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee12c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee12d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee13a.value)) {
if(trim(Patient.msfee13a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee13a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee13c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee13d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee13a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee13a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee13c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee13d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee14a.value)) {
if(trim(Patient.msfee14a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee14a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee14c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee14d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee14a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee14a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee14c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee14d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee15a.value)) {
if(trim(Patient.msfee15a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee15a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee15c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee15d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee15a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee15a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee15c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee15d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee16a.value)) {
if(trim(Patient.msfee16a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee16a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee16c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee16d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee16a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee16a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee16c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee16d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee17a.value)) {
if(trim(Patient.msfee17a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee17a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee17c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee17d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee17a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee17a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee17c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee17d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee18a.value)) {
if(trim(Patient.msfee18a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee18a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee18c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee18d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee18a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee18a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee18c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee18d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee19a.value)) {
if(trim(Patient.msfee19a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee19a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee19c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee19d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee19a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee19a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee19c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee19d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee20a.value)) {
if(trim(Patient.msfee20a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee20a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee20c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee20d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee20a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee20a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee20c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee20d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee21a.value)) {
if(trim(Patient.msfee21a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee21a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee21c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee21d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee21a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee21a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee21c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee21d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee22a.value)) {
if(trim(Patient.msfee22a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee22a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee22c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee22d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee22a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee22a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee22c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee22d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee23a.value)) {
if(trim(Patient.msfee23a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee23a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee23c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee23d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee23a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee23a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee23c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee23d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee24a.value)) {
if(trim(Patient.msfee24a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee24a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee24c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee24d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee24a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee24a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee24c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee24d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee25a.value)) {
if(trim(Patient.msfee25a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee25a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee25c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee25d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee25a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee25a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee25c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee25d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee26a.value)) {
if(trim(Patient.msfee26a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee26a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee26c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee26d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee26a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee26a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee26c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee26d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee27a.value)) {
if(trim(Patient.msfee27a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee27a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee27c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee27d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee27a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee27a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee27c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee27d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee28a.value)) {
if(trim(Patient.msfee28a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee28a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee28c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee28d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee28a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee28a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee28c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee28d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee29a.value)) {
if(trim(Patient.msfee29a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee29a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee29c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee29d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee29a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee29a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee29c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee29d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee30a.value)) {
if(trim(Patient.msfee30a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee30a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee30c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee30d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee30a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee30a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee30c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee30d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee31a.value)) {
if(trim(Patient.msfee31a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee31a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee31c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee31d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee31a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee31a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee31c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee31d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee32a.value)) {
if(trim(Patient.msfee32a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee32a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee32c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee32d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee32a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee32a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee32c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee32d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee33a.value)) {
if(trim(Patient.msfee33a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee33a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee33c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee33d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee33a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee33a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee33c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee33d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee34a.value)) {
if(trim(Patient.msfee34a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee34a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee34c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee34d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee34a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee34a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee34c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee34d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee35a.value)) {
if(trim(Patient.msfee35a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee35a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee35c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee35d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee35a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee35a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee35c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee35d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee36a.value)) {
if(trim(Patient.msfee36a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee36a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee36c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee36d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee36a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee36a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee36c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee36d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee37a.value)) {
if(trim(Patient.msfee37a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee37a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee37c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee37d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee37a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee37a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee37c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee37d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee38a.value)) {
if(trim(Patient.msfee38a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee38a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee38c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee38d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee38a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee38a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee38c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee38d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee39a.value)) {
if(trim(Patient.msfee39a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee39a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee39c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee39d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee39a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee39a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee39c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee39d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee40a.value)) {
if(trim(Patient.msfee40a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee40a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee40c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee40d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee40a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee40a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee40c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee40d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee41a.value)) {
if(trim(Patient.msfee41a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee41a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee41c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee41d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee41a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee41a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee41c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee41d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee42a.value)) {
if(trim(Patient.msfee43a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee43a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee43c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee43d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee42a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee42a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee42c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee42d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee43a.value)) {
if(trim(Patient.msfee43a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee43a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee43c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee43d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee43a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee43a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee43c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee43d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee44a.value)) {
if(trim(Patient.msfee44a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee44a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee44c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee44d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee44a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee44a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee44c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee44d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee45a.value)) {
if(trim(Patient.msfee45a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee45a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee45c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee45d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee45a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee45a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee45c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee45d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee46a.value)) {
if(trim(Patient.msfee46a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee46a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee46c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee46d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee46a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee46a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee46c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee46d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee47a.value)) {
if(trim(Patient.msfee47a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee47a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee47c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee47d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee47a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee47a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee47c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee47d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee48a.value)) {
if(trim(Patient.msfee48a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee48a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee48c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee48d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee48a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee48a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee48c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee48d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee49a.value)) {
if(trim(Patient.msfee49a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee49a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee49c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee49d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee49a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee49a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee49c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee49d.value + "</td></tr>\n"
}
}
if(!isWhitespace(Patient.msfee50a.value)) {
if(trim(Patient.msfee50a.value.substr(0,9))=="xxxxxxxxx") {
DocumentHTML+="<tr><td align=left><b>&nbsp;" + Patient.msfee50a.value.substr(10,20) + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee50c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee50d.value + "</td></tr>\n"
} else {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee50a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee50a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee50c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee50d.value + "</td></tr>\n"
}
}
// Pharmacy
if(!isWhitespace(Patient.msfee51a.value)) {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee51a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee51a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee51c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee51d.value + "</td></tr>\n"
}
// Prosthet.
if(!isWhitespace(Patient.msfee52a.value)) {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee52a.value.substr(0,9) + "</td>\n" +
"<td align=left>&nbsp;" + Patient.msfee52a.value.substr(10,20) + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee52c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee52d.value + "</td></tr>\n"
}
}

 if(Patient.festflag.value=="1" && !isWhitespace(Patient.consumab.value)) {
 DocumentHTML+="<tr><td right><b>Consumables</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>&nbsp;" + ".00" + "</td>\n" +
 "<td align=right>&nbsp;" + Patient.consumab.value + "</td></tr>\n"
}

// Display other fees if parameter is turned on
if(Patient.ptcnuofe.value=="1"){
if(Patient.othfee01 != undefined) {
 if(Patient.festflag.value=="1" && !isWhitespace(Patient.othfee01.value)) {
 DocumentHTML+="<tr><td><b>Other Fees</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>Surgeon Gap Amount</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>&nbsp;" + Patient.othfee01.value + "</td></tr>\n"
 }
 if(Patient.festflag.value=="1" && !isWhitespace(Patient.othfee02.value)) {
 DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>Assistant Gap Amount</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>&nbsp;" + Patient.othfee02.value + "</td></tr>\n"
 }
 if(Patient.festflag.value=="1" && !isWhitespace(Patient.othfee03.value)) {
 DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>Anaesthetist Gap Amount</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>&nbsp;" + Patient.othfee03.value + "</td></tr>\n"
 }
 if(Patient.festflag.value=="1" && !isWhitespace(Patient.othfee04.value)) {
 DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>ICU Intensivists</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>&nbsp;" + Patient.othfee04.value + "</td></tr>\n"
 }
 if(Patient.festflag.value=="1" && !isWhitespace(Patient.othfee05.value)) {
 DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>Physio (Initial Visit)</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>&nbsp;" + Patient.othfee05.value + "</td></tr>\n"
 }
 if(Patient.festflag.value=="1" && !isWhitespace(Patient.othfee06.value)) {
 DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>Physio (Subs Visit)</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>&nbsp;" + Patient.othfee06.value + "</td></tr>\n"
 }
 if(Patient.festflag.value=="1" && !isWhitespace(Patient.othfee07.value)) {
 DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>Radiology</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>&nbsp;" + Patient.othfee07.value + "</td></tr>\n"
 }
 if(Patient.festflag.value=="1" && !isWhitespace(Patient.othfee08.value)) {
 DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>Pathology</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>&nbsp;" + Patient.othfee08.value + "</td></tr>\n"
 }
 if(Patient.festflag.value=="1" && !isWhitespace(Patient.othfee09.value)) {
 DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>Cosmetic Out of Pocket</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>&nbsp;" + Patient.othfee09.value + "</td></tr>\n"
 }
 }
}

if ((document.UpdateForm!=undefined) && (Patient.festflag.value=="0")) {
  if (UpdateForm.selfinsr.value=="1") {
  DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
   "<td align=right><b>Out of Pocket</td>\n" +
   "<td align=right>" + UpdateForm.ptelg034.value + "</td>\n"
  } else {
   DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
   "<td>&nbsp;" + "" + "</td>\n" +
   "<td>&nbsp;" + "" + "</td>\n"
  }
} else {
   DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
   "<td>&nbsp;" + "" + "</td>\n" +
   "<td>&nbsp;" + "" + "</td>\n"
}

 DocumentHTML+="<td align=right><b>Fund Excess </td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" 
if(Patient.festflag.value=="1") {
  DocumentHTML+="<td align=right>" + Patient.pmfdxcss.value + "</td></tr>\n" 
} else if((Patient.festflag.value=="0") &&
         (document.UpdateForm!=undefined))  {

//// Task 0907875 - for SJOG using standard layout
  if(trim(UpdateForm.expcdlos.value)=="0") {
   DocumentHTML+="<td align=right>" + UpdateForm.ptelg040.value + "</td></tr>\n"
  } else {
/////

  if(Patient.admrlost.value > 0) {
   DocumentHTML+="<td align=right>" + UpdateForm.ptelg003.value + "</td></tr>\n"
  } else {
   DocumentHTML+="<td align=right>" + UpdateForm.ptelg040.value + "</td></tr>\n"
  }
 }
} else {
  DocumentHTML+="<td align=right>" + Patient.fundxcss.value + "</td></tr>\n"
}

// For Compensable Claim, the Total GST will be printed under Fund Total
// For NON Compensable Claim, the Total GST will be printed under Patient Total

checkInd=document.Patient.claimtyp.value.substr(3,5)
if ((checkInd.search(/V/g) >= 0) ||
    (checkInd.search(/W/g) >= 0) ||
    (checkInd.search(/C/g) >= 0) ||
    (checkInd.search(/D/g) >= 0)) {

DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right><b>GST </td>\n" +
"<td align=right>" + Patient.gsttotal.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td></tr>\n"
 } else {

DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right><b>GST </td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>" + Patient.gsttotal.value + "</td></tr>\n"
 }

GetTotal();
GetFundTot();

DocumentHTML+=
"<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right><b>TOTAL ESTIMATED COST $ </td>\n" +
"<td align=right>" + Patient.fsttotal.value + "</td>\n" +
"<td align=right>" + Patient.esttotal.value + "</td></tr>\n" +
"</table></tr>\n" +

"<tr><table width=100% border=0 cellspacing=2>\n"
if(Patient.festflag.value=="0") {
  if (document.UpdateForm!=undefined)  {
    if(!isWhitespace(UpdateForm.ptelg022.value) ||
       !isWhitespace(UpdateForm.ptelg005.value)) {
    DocumentHTML+="<tr><td class=HeadingRow>\n" +
    "Comments</td></tr>\n" +
    "<tr><td>\n" + UpdateForm.ptelg022.value + "<br>" +
                   UpdateForm.ptelg005.value + "</td></tr>\n"
    }
  } else {
    if(!isWhitespace(Patient.ptelg022.value) || 
       !isWhitespace(Patient.ptelg005.value)) {
    DocumentHTML+="<tr><td class=HeadingRow>\n" +
    "Comments</td></tr>\n" +
    "<tr><td>\n" + Patient.ptelg022.value + "<br>" + 
                   Patient.ptelg005.value + "</td></tr>\n" 
  }
 }
}

if(Patient.festflag.value=="1") {
  if(!isWhitespace(Patient.pmfdcmn1.value) ||
     !isWhitespace(Patient.pmfdcmn2.value) ||
     !isWhitespace(Patient.pmfdcmn3.value) ||
     !isWhitespace(Patient.pmfdcmn4.value) ||
     !isWhitespace(Patient.pmfdcmn5.value)) {
    DocumentHTML+="<tr><td class=HeadingRow>\n" +
    "Comments</td></tr>\n" +
    "<tr><td>\n" + Patient.pmfdcmn1.value + "</td></tr>\n"
    if(!isWhitespace(Patient.pmfdcmn2.value)) {
      DocumentHTML+="<tr><td>\n" + Patient.pmfdcmn2.value + "</td></tr>\n"
    }
    if(!isWhitespace(Patient.pmfdcmn3.value)) {
      DocumentHTML+="<tr><td>\n" + Patient.pmfdcmn3.value + "</td></tr>\n"
    }
    if(!isWhitespace(Patient.pmfdcmn4.value)) {
      DocumentHTML+="<tr><td>\n" + Patient.pmfdcmn4.value + "</td></tr>\n"
    }
    if(!isWhitespace(Patient.pmfdcmn5.value)) {
      DocumentHTML+="<tr><td>\n" + Patient.pmfdcmn5.value + "</td></tr>\n"
    }
  }
}

DocumentHTML+=
// Display the customisable fees estimate text
  Patient.feestext.value +


"</table></tr>\n" +

"<tr><table width=100% border=0 cellspacing=2>\n" +

"<tr><td height=70 align=center valign=bottom>&nbsp;</td>\n" +
"    <td height=70 align=center valign=bottom>&nbsp;</td>\n" +
"    <td height=70 align=center valign=bottom>&nbsp;</td>\n" +
"    <td height=70 align=center valign=bottom>&nbsp;</td>\n" +
"    </tr>\n" +

"<tr><td><hr width=100%></td>\n" +
"    <td><hr width=100%></td>\n" +
"    <td><hr width=100%></td>\n" +
"    <td><hr width=100%></td>\n" +
"    </tr>\n" +

"<tr><td align=center valign=top>\n" +
"Signature of Patient/Relative\n" +
"</td><td align=center valign=top>\n" +
"Name if other than Patient </td>\n" +
"</td><td align=center valign=top>\n" +
"Signature of Staff Member </td>\n" +
"</td><td align=center valign=top>\n" +
"Date </td></tr>\n" 

if(Patient.festflag.value=="1") {
  DocumentHTML+="<tr><td align=center>" +
                "Date Created : " + Patient.pmfdcdat.value +
                "&nbsp;&nbsp;</td>\n" +
  "    <td>&nbsp;</td>\n" +
  "    <td>&nbsp;</td>\n" +
  "    <td>&nbsp;</td>\n" +
  "    </tr>\n"
}
DocumentHTML+="</table></tr>\n" +

"</table>\n"
  return(DocumentHTML)
}
// ---------------------------------
// Healthscope IFC Layout (Format 1)
// ---------------------------------
function HEALayout() {
  Patient.festflag.value="0";          // always use IFC information
//
  DocumentHTML="<title>Healthscope  IFC</title>\n" +
"<style type=text/css>\n" +
"body { margin:10; \n" +
"font-family: Arial; }\n" +
"td { font-size:9px;}\n" +
"td.calc { border-right-style:solid;\n" +
"          border-top-style:solid;\n" +
"          border-width:1px; text-align:center;} \n" +
"td.calc1 { border-right-style:solid;\n" +
"           border-width:1px; text-align:center;} \n" +
"table.calc { border-collapse:collapse; border:1px solid grey;} \n" +
"td.smalltext { font-size:8px;}\n" +
"td.largetext { font-size:10px;}\n" +
"td.dings { font-size:14px;}\n" +
"td.MainHead { font-size:16px; font-family: Arial;}\n" +
"td.SectHead1 { \n" +
"          border-right-style:solid;\n" +
"          border-top-style:solid;\n" +
"          border-width:1px; \n" +
"background-color:lightgrey;\n" +
"font-family: Arial;\n" +
"font-weight:bold; }\n" +
"td.SectHead2 { \n" +
"color:white;\n" +
"background-color:black;\n" +
"font-family: Arial;\n" +
"font-size:12px; \n" +
"font-weight:bold; }\n" +
"td.SectHead3 { \n" +
"border-color:black;\n" +
"color:white;\n" +
"background-color:black;\n" +
"font-family: Arial;\n" +
"font-size:12px; \n" +
"font-weight:bold; }\n" +
"td.SectHead4 { \n" +
"border-color:black;\n" +
"color:white;\n" +
"background-color:black;\n" +
"font-family: Arial;\n" +
"font-size:7px; \n" +
"font-weight:bold; }\n" +
"td.HeadingRow  { \n" +
"font-family: Arial;\n" +
"font-size:10px; \n" +
"font-weight:bold; }\n" +
"p.page {page-break-after: always}\n" +
".vertical-text { \n" + 
"transform: rotate(90deg);\n" + 
"transform-origin: 305px 260px;\n" +
"margin-left: 30px;\n" +
"margin-top: 50px;\n" +
"padding: 10px;\n" +
"float: right;\n" +
"</style>\n" +

"<table align=center width=100% border=1 cellspacing=0>\n" +
////////////////////////////////////////////////////////////////////////////
"<tr><td colspan=6><table width=100% border=0 cellspacing=0>\n" +
//
// IFC Hospital Header
"<tr><td width=50%>&nbsp;</td>\n" +
"    <td>&nbsp;</td>\n" +
"    <td>&nbsp;</td></tr>\n" +
"<tr><td align=center rowspan=5><img height=60 src=../images/" +
 Patient.hospcode.value + "logo.gif></td>\n" +
"    <td>&nbsp;</td>\n" +
"    <td>&nbsp;</td></tr>\n" +
"    <td><b>UR Number:    </b>" + Patient.urnumber.value + "</td>\n" +
"    <td><b>Visit Number:    </b>" + Patient.admissno.value + "</td>\n" +
"</tr>\n"
//
// IFC Patient Details
DocumentHTML+=
"    <td><b>Surname: </b>\n" +
  Patient.Surname.value + "</td>\n" +
"    <td>&nbsp;</td></tr>\n" +
"    <td><b>Name: </b>\n" +
  Patient.Given.value + "</td>\n" +
"    <td>&nbsp;</td></tr>\n" +
"    <td><b>Date Of Birth: </b>" + Patient.dob.value + "</td>\n" +
"    <td><b>Gender: </b>" + Patient.sex.value + "</td></tr>\n" +
"<tr><td>&nbsp;</td>\n" +
"    <td><b>Dr: </b>" + Patient.doctname.value + "</td>\n" +
"    <td>&nbsp;</td></tr>\n" +
"<tr><td class=MainHead align=center>INFORMED FINANCIAL CONSENT</td>\n" +
"    <td>&nbsp;</td>\n" +
"    <td>&nbsp;</td></tr>\n" +
"<tr><td>&nbsp;</td>\n" +
"    <td>&nbsp;</td>\n" +
"    <td>&nbsp;</td></tr>\n" +
"</table></td>\n" +
//"<td rowspan=20><div style='position: relative;width:55px;height:550px'>\n" +
//"<div class=vertical-text style='width:550px;height:55px;font-size: 24;'> \n" + 
//"INFORMED FINANCIAL CONSENT&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;HRM 4.8A</div></div>" +
"<td rowspan=20><img height=550 src=../images/" +
Patient.hospcode.value + "IFC.gif></td>\n" +
 "</td>\n" +
"</tr>\n" +
//
// IFC Admission Details
"<tr><td colspan=6><table width=98% align=center border=0 cellspacing=0>\n" +
"<tr><td><b>Admission Date: </b>" + Patient.admndate.value + "</td>\n" +
"    <td>&nbsp;</td></tr>\n" +
"</table></td></tr>\n" +
"<tr><td colspan=6><table width=98% align=center border=0 cellspacing=0>\n" +
"<tr><td width=30%><b>Details Confirmed Prior to Admission: </b></td>\n" +
"<td class=dings>&#10065</td><td>Confirmed </td>\n" +
"<td class=dings>&#10065</td><td>No Answer </td>\n" +
"<td class=dings>&#10065</td><td>Left Message </td>\n" +
"<td>Date: </td>\n" +
"<td>____/____/____</td></tr>\n" +
"</table></td></tr>\n" +
//
// IFC Insurance Details
"<tr><td colspan=6 align=left class=SectHead2>&nbsp;\n" +
" INSURANCE DETAILS          </td></tr>\n" +
"<tr><td colspan=6><table width=98% align=center border=0 cellspacing=0>\n" +
//
"<td><b>CLAIM TYPE: </b></td>\n" + 
"<td>" + Patient.claimdsc.value + "</td></tr>\n"
checkInd=document.Patient.claimtyp.value.substr(3,5)

// DVA
if (checkInd.search(/V/g) >= 0) {
DocumentHTML+=
"<tr><td>Card Number: </td>\n" +
"    <td>" + Patient.dvaccnum.value + "</td>\n" +
"    <td>Preferred Accommodation </td>\n" +
"    <td>" + Patient.prefaccm.value + "</td>\n"
DocumentHTML+=
"</tr>\n" +

"<tr><td>Card Type: </td>\n" +
"    <td>" + Patient.dvacldsc.value + "</td>\n" +
"    <td>Approval Given? </td>\n"
  if(document.UpdateForm!=undefined){
    if(UpdateForm.ptelg006.value=="1"){
        DocumentHTML+="<td>Yes</td>\n"
      } else {
        DocumentHTML+="<td>No</td>\n"
      }
  }
DocumentHTML+=
"    <td>Date: </td>\n"
  if(document.UpdateForm!=undefined){
      DocumentHTML+="<td>" + UpdateForm.ptelg013.value + "</td>\n"
  }
DocumentHTML+=
"</tr><tr><td>&nbsp</td></tr><tr><td>&nbsp</td></tr>\n"
} else

// ADF
if (checkInd.search(/D/g) >= 0) {
DocumentHTML+=
"<tr><td>PMKeys Number: </td>\n" +
"    <td>" + Patient.defpmkey.value + "</td>\n" +
"    <td>Preferred Accommodation </td>\n" +
"    <td>" + Patient.prefaccm.value + "</td>\n"
DocumentHTML+=
"</tr>\n" +

"<tr><td>Defence Force Approval Number: </td>\n" +
"    <td>" + Patient.defappno.value + "</td>\n" +
"    <td>Claim Accepted? </td>\n"
    if(Patient.defclacc.value=="1"){
        DocumentHTML+="<td>Yes</td>\n"
    } else
    if(Patient.defclacc.value=="0"){
        DocumentHTML+="<td>No</td>\n"
    } else {
        DocumentHTML+="<td>N/A</td>\n"
    }
DocumentHTML+=
"    <td>Referral Date: </td>\n" +
"    <td>" + Patient.defrefdt.value + "</td>\n"
DocumentHTML+=
"</tr><tr><td>&nbsp</td></tr><tr><td>&nbsp</td></tr>\n"
} else

{
//if (checkInd.search(/M/g) < 0) {
// Private
DocumentHTML+=
"<tr><td width=20%>Health Fund: </td>\n" +
"    <td>" + Patient.hlthfdsc.value.substr(0,23) + "</td>\n" +
"    <td width=20%>Exclusions / Restrictions? </td>\n"
  if(document.UpdateForm!=undefined){
    if(UpdateForm.ptelg004.value=="1"){
        DocumentHTML+="<td>Yes</td>\n"
      } else {
        DocumentHTML+="<td>No</td>\n"
      }
  }
DocumentHTML+=
"</tr>\n" +

"<tr><td>Level of Cover: </td>\n"
  if(document.UpdateForm!=undefined){
    if(!isWhitespace(UpdateForm.ptelg024.value)){
        DocumentHTML+="<td>" + UpdateForm.ptelg024.value.substr(0,24) + "</td>\n"
      } else {
        DocumentHTML+="<td>" + Patient.hlthtabl.value.substr(0,24) + "</td>\n"
      }
  }
DocumentHTML+=
"    <td>Waits Served? </td>\n"
  if(document.UpdateForm!=undefined){
    if(UpdateForm.ptelg030.value=="1"){
        DocumentHTML+="<td>Yes</td>\n"
      } else {
        DocumentHTML+="<td>No</td>\n"
      }
  }
DocumentHTML+=
"</tr>\n" +

"<tr><td>Member Number: </td>\n" +
"    <td>" + Patient.hlthmemb.value + "</td>\n" +
"    <td>Check Complete? </td>\n"
  if(document.UpdateForm!=undefined){
    if(UpdateForm.ptelg006.value=="1"){
        DocumentHTML+="<td>Yes</td>\n"
      } else {
        DocumentHTML+="<td>No</td>\n"
      }
  }
DocumentHTML+=
"    <td>Date: </td>\n"
  if(document.UpdateForm!=undefined){
      DocumentHTML+="<td>" + UpdateForm.ptelg013.value + "</td>\n"
  }
DocumentHTML+=
"</tr>\n" +

"<tr><td>Financial: </td>\n"
  if(document.UpdateForm!=undefined){
    if(UpdateForm.ptelg001.value=="1"){
        DocumentHTML+="<td>Yes</td>\n"
      } else {
        DocumentHTML+="<td>No</td>\n"
      }
  }
DocumentHTML+=
"    <td>Preferred Accommodation </td>\n" +
"    <td>" + Patient.prefaccm.value + "</td>\n"
DocumentHTML+=
"</tr>\n"
}

DocumentHTML+=
//
"</table></td></tr>\n" +
"<tr><td colspan=6 align=left class=SectHead2>&nbsp;</td></tr>\n" +
"<tr><td colspan=6><table width=98% align=center border=0 cellspacing=0>\n" +
"<tr><td colspan=6 class=smalltext><b>Estimate does not include pathology, radiology, non-admission related pharmacy drugs, discharge pharmacy drugs, Doctors or Anaesthetist fees,\n" +
" prosthesis charges, non-emergency patient transport, clinically necessary patient transport, visitor meals, boarder fees, STD or mobile phone calls not fully funded by your \n" + 
"nominated insurer.</b></td></tr>\n" +
//
// IFC Reason for Admission
"<tr><td align=center colspan=6><table width=95% class=calc cellspacing=0>\n" +

"<tr><td colspan=2 align=center class=SectHead1>\n" +
" Reason for Admission </td>\n" +
"<td colspan=2 align=center class=SectHead1>\n" +
" DRG/Item Number/Admission Type </td>\n" +
"<td colspan=2 align=center class=SectHead1>\n" +
" Length of Stay </td></tr>\n" +

"<tr><td colspan=2 class=calc>&nbsp;" + Patient.admreasn.value +
//"<br>" + Patient.admreasn.value.substr(40,80) + "</td>\n" +
"<td colspan=2 class=calc>&nbsp;" + Patient.admritmn.value + "</td>\n" +
"<td colspan=2 class=calc>&nbsp;" + Patient.admrlost.value + "</td></tr>\n" +

"</table></td></tr>\n" +
//
"<tr><td colspan=6 align=left>&nbsp;</td></tr>\n" +
//
"<tr><td align=center colspan=6><table width=95% class=calc cellspacing=0>\n" +
"<tr><td align=center class=SectHead3>Charge Type</td>\n" + 
"<td align=center class=SectHead3>Estimated Cost</td>\n" + 
"<td align=center class=SectHead3>Fund Rebate</td>\n" + 
"<td align=center colspan=2 class=SectHead3>Patient Cost</td></tr>\n" +
"<tr><td align=center class=SectHead4>&nbsp;</td>\n" + 
"<td align=center class=SectHead4>(if not accepted per day)</td>\n" + 
"<td align=center class=SectHead4>(per day)</td>\n" + 
"<td align=center colspan=2 class=SectHead4>(if claim accepted)</td></tr>\n" +
//
// IFC Accommodation Details
"<tr><td class=calc><b>Accommodation</td>\n" + 
"<td class=calc><b>&nbsp;</td>\n" +
"<td class=calc><b>&nbsp;</td>\n" +
"<td class=calc><b>Per Day</td>\n" +
"<td class=calc><b>Maximum</td></tr>\n"
//
//if(!isWhitespace(Patient.hbfee01a.value)) {
DocumentHTML+=
"<tr><td class=calc1>" +
 trim(Patient.hbfee01a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"

 if(isWhitespace(Patient.hbfee01b.value)) {
    DocumentHTML+= "$0.00"
  } else {
    DocumentHTML+= "$"
    DocumentHTML+=
    trim(Patient.hbfee01b.value)
  }
  DocumentHTML+= "&nbsp;</td>\n" +
  "<td class=calc1>"

 if(isWhitespace(Patient.hbfee01c.value)) {
    DocumentHTML+= "$0.00"
  } else {
    DocumentHTML+= "$"
    DocumentHTML+=
    trim(Patient.hbfee01c.value)
  }
  DocumentHTML+= "&nbsp;</td>\n" +
  "<td class=calc1>"

 if(isWhitespace(Patient.hbfee01d.value)) {
    DocumentHTML+= "$0.00"
  } else {
    DocumentHTML+= "$"
    DocumentHTML+=
    trim(Patient.hbfee01d.value)
  }
  DocumentHTML+= "&nbsp;</td>\n" +
  "<td class=calc1>"

if(!isWhitespace(Patient.hbfee01e.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee01e.value) + "&nbsp;</td></tr>\n"
//}
//
//if(!isWhitespace(Patient.hbfee02a.value)) {
DocumentHTML+=
"<tr><td class=calc1>" +
 trim(Patient.hbfee02a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee02b.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee02b.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee02c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee02c.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee02d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee02d.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee02e.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee02e.value) + "&nbsp;</td></tr>\n"
//}
//
//if(!isWhitespace(Patient.hbfee03a.value)) {
DocumentHTML+=
"<tr><td class=calc1>" +
 trim(Patient.hbfee03a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee03b.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee03b.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee03c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee03c.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee03d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee03d.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee03e.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee03e.value) + "&nbsp;</td></tr>\n"
//}
//
//if(!isWhitespace(Patient.hbfee04a.value)) {
DocumentHTML+=
"<tr><td class=calc1>" +
 trim(Patient.hbfee04a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee04b.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee04b.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee04c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee04c.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee04d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee04d.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee04e.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee04e.value) + "&nbsp;</td></tr>\n"
//}
//
//if(!isWhitespace(Patient.hbfee05a.value)) {
DocumentHTML+=
"<tr><td class=calc1>" + 
 trim(Patient.hbfee05a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee05b.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee05b.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee05c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee05c.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee05d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee05d.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee05e.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee05e.value) + "&nbsp;</td></tr>\n"
//}
//
//if(!isWhitespace(Patient.hbfee06a.value)) {
DocumentHTML+=
"<tr><td class=calc1>" +
 trim(Patient.hbfee06a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee06b.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee06b.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee06c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee06c.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee06d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee06d.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee06e.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee06e.value) + "&nbsp;</td></tr>\n"
//}
//
//if(!isWhitespace(Patient.hbfee07a.value)) {
DocumentHTML+=
"<tr><td class=calc1>" +
 trim(Patient.hbfee07a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee07b.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee07b.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee07c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee07c.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee07d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee07d.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee07e.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee07e.value) + "&nbsp;</td></tr>\n"
//}
//
//if(!isWhitespace(Patient.hbfee08a.value)) {
DocumentHTML+=
"<tr><td class=calc1>" +
 trim(Patient.hbfee08a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee08b.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee08b.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee08c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee08c.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee08d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee08d.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee08e.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee08e.value) + "&nbsp;</td></tr>\n"
//}
//
// IFC Theatre Details
if(!isWhitespace(Patient.htfee01a.value)) {
DocumentHTML+=
"<tr><td class=calc><b>" +
 trim(Patient.htfee01a.value) + "&nbsp;</td>\n" +
"<td class=calc>"
if(!isWhitespace(Patient.htfee01b.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.htfee01b.value) + "&nbsp;</td>\n" +
"<td class=calc>"
if(!isWhitespace(Patient.htfee01c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.htfee01c.value) + "&nbsp;</td>\n" +
"<td class=calc>"
if(!isWhitespace(Patient.htfee01d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.htfee01d.value) + "&nbsp;</td>\n" +
"<td class=calc>"
if(!isWhitespace(Patient.htfee01e.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.htfee01d.value) + "&nbsp;</td></tr>\n"
}
//
// IFC Other Consumables
if(!isWhitespace(Patient.hofee01a.value)) {
DocumentHTML+=
"<tr><td class=calc><b>" +
 trim(Patient.hofee01a.value) + "&nbsp;</td>\n" + 
"<td class=calc>"
if(!isWhitespace(Patient.hofee01b.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hofee01b.value) + "&nbsp;</td>\n" +
"<td class=calc>"
if(!isWhitespace(Patient.hofee01c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hofee01c.value) + "&nbsp;</td>\n" +
"<td class=calc>"
if(!isWhitespace(Patient.hofee01d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hofee01d.value) + "&nbsp;</td>\n" +
"<td class=calc>"
if(!isWhitespace(Patient.hofee01e.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hofee01d.value) + "&nbsp;</td></tr>\n"
}
//
// IFC Prosthesis
if(!isWhitespace(Patient.hpfee01a.value)) {
DocumentHTML+=
"<tr><td class=calc><b>" +
 trim(Patient.hpfee01a.value) + "&nbsp;</td>\n" + 
"<td class=calc>"
if(!isWhitespace(Patient.hpfee01b.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hpfee01b.value) + "&nbsp;</td>\n" +
"<td class=calc>"
if(!isWhitespace(Patient.hpfee01c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hpfee01c.value) + "&nbsp;</td>\n" +
"<td class=calc>"
if(!isWhitespace(Patient.hpfee01d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hpfee01d.value) + "&nbsp;</td>\n" +
"<td class=calc>"
if(!isWhitespace(Patient.hpfee01e.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hpfee01d.value) + "&nbsp;</td></tr>\n"
}
//
// IFC Fund Excess
DocumentHTML+=
"<tr><td class=calc><b>Fund Excess</td>\n" + 
"<td class=calc><b>&nbsp;</td>\n" +
"<td class=calc><b>&nbsp;</td>\n" +
"<td class=calc><b>&nbsp;</td>\n" +
"<td class=calc><b>&nbsp;</td></tr>\n" +

"<tr><td class=calc1>Same Day</td>\n" +
"<td class=calc1><b>&nbsp;</td>\n" +
"<td class=calc1><b>&nbsp;</td>\n"

if((Patient.festflag.value=="0") &&
   (document.UpdateForm!=undefined) &&
  parseFloat(UpdateForm.ptelg040.value)>0) {

  DocumentHTML+="<td class=calc1>$" +
  Math.round(UpdateForm.ptelg040.value) + ".00" + "</td>"

  costlos=trim(UpdateForm.expcdlos.value);
  if(costlos=="0"){
    DocumentHTML+="<td class=calc1>$" +
    Math.round(UpdateForm.ptelg040.value) + ".00" + "</td>"
  } else {
    DocumentHTML+="<td class=calc1><b>&nbsp;</td>"
  }
  DocumentHTML+="</tr>\n"
} else {
  DocumentHTML+="<td class=calc1><b>&nbsp;</td>\n"
  DocumentHTML+="<td class=calc1>&nbsp;</td></tr>\n"
}
DocumentHTML+=
"<tr><td class=calc1>Overnight</td>\n" +
"<td class=calc1><b>&nbsp;</td>\n" +
"<td class=calc1><b>&nbsp;</td>\n"

if((Patient.festflag.value=="0") &&
   (document.UpdateForm!=undefined) &&
  parseFloat(UpdateForm.ptelg003.value)>0) {

  DocumentHTML+="<td class=calc1>$" +
  Math.round(UpdateForm.ptelg003.value) + ".00" + "</td>"

  costlos=trim(UpdateForm.expcdlos.value);
  if(costlos!="0"){
    DocumentHTML+="<td class=calc1>$" +
    Math.round(UpdateForm.ptelg003.value) + ".00" + "</td>"
  } else {
    DocumentHTML+="<td class=calc1><b>&nbsp;</td>"
  }
  DocumentHTML+="</tr>\n"
} else {
//DocumentHTML+="<td class=calc1>" + Patient.fundxcss.value + "</td></tr>\n"
  DocumentHTML+="<td class=calc1><b>&nbsp;</td>\n"
  DocumentHTML+="<td class=calc1>&nbsp;</td></tr>\n"
}

//
// IFC Co-Payments
DocumentHTML+=
"<tr><td class=calc><b>Co-Payment</td>\n" + 
"<td class=calc><b>&nbsp;</td>\n" +
"<td class=calc><b>&nbsp;</td>\n" +
"<td class=calc><b>&nbsp;</td>\n" +
"<td class=calc><b>&nbsp;</td></tr>\n"

//if(Patient.festflag.value=="0" &&
//  parseFloat(UpdateForm.ptelg002.value)>0) {
  DocumentHTML+="<tr><td class=calc1>Private</td>\n" +
//"<td class=calc1>&nbsp;" + UpdateForm.ptelg019.value + "</td>\n" +
//"<td class=calc1>&nbsp;" + UpdateForm.expcdlos.value + "</td>\n" +
  "<td class=calc1>&nbsp;" + "" + "</td>\n" +
  "<td class=calc1>&nbsp;" + "" + "</td>\n"
  if (checkInd.search(/V/g) >= 0) {
    DocumentHTML+=
    "<td class=calc1>&nbsp;" + "" + "</td>\n" +
    "<td class=calc1>&nbsp;" + "" + "</td></tr>\n"    // blank for DVA(HEA only)
  } else {
    DocumentHTML+=
    "<td class=calc1>&nbsp;"
    if(!isWhitespace(UpdateForm.ptelg002.value)) { DocumentHTML+= "$"}
    DocumentHTML+=
    Math.round(UpdateForm.ptelg002.value) + ".00" + "</td>\n"
    if (parseFloat(UpdateForm.priexlos.value)>0) {
    DocumentHTML+=
      "<td class=calc1>&nbsp;$" + 
      Math.round(UpdateForm.priexlos.value) + ".00" + "</td></tr>\n"
    } else {
    DocumentHTML+=
      "<td class=calc1>&nbsp;" + "" + "</td></tr>\n"
    }
  }
//}
//if(Patient.festflag.value=="0" &&
//  parseFloat(UpdateForm.ptelg010.value)>0) {
  DocumentHTML+="<tr><td class=calc1>Shared</td>\n" +
//"<td class=calc1>&nbsp;" + UpdateForm.ptelg020.value + "</td>\n" +
//"<td class=calc1>&nbsp;" + UpdateForm.expcdlos.value + "</td>\n" +
  "<td class=calc1>&nbsp;" + "" + "</td>\n" +
  "<td class=calc1>&nbsp;" + "" + "</td>\n" +
  "<td class=calc1>&nbsp;"
    if(!isWhitespace(UpdateForm.ptelg010.value)) { DocumentHTML+= "$"}
    DocumentHTML+=
    Math.round(UpdateForm.ptelg010.value) + ".00" + "</td>\n"
    if (parseFloat(UpdateForm.shaexlos.value)>0) {
    DocumentHTML+=
      "<td class=calc1>&nbsp;$" + 
      Math.round(UpdateForm.shaexlos.value) + ".00" + "</td></tr>\n"
    } else {
    DocumentHTML+=
      "<td class=calc1>&nbsp;" + "" + "</td></tr>\n"
    }
//}
//if(Patient.festflag.value=="0" &&
//  parseFloat(UpdateForm.ptelg025.value)>0) {
  DocumentHTML+="<tr><td class=calc1>Same Day</td>\n" +
//"<td class=calc1>&nbsp;" + UpdateForm.ptelg026.value + "</td>\n" +
//"<td class=calc1>&nbsp;" + UpdateForm.expcdlos.value + "</td>\n" +
  "<td class=calc1>&nbsp;" + "" + "</td>\n" +
  "<td class=calc1>&nbsp;" + "" + "</td>\n" +
  "<td class=calc1>&nbsp;"
    if(!isWhitespace(UpdateForm.ptelg025.value)) { DocumentHTML+= "$"}
    DocumentHTML+=
    Math.round(UpdateForm.ptelg025.value) + ".00" + "</td>\n"
    if (parseFloat(UpdateForm.sdyexlos.value)>0) {
    DocumentHTML+=
      "<td class=calc1>&nbsp;$" + 
      Math.round(UpdateForm.sdyexlos.value) + ".00" + "</td></tr>\n"
    } else {
    DocumentHTML+=
      "<td class=calc1>&nbsp;" + "" + "</td></tr>\n"
    }
//}
//if(Patient.festflag.value=="0" &&
//  parseFloat(UpdateForm.ptelg027.value)>0) {
//  DocumentHTML+="<tr><td class=calc1>Hospital</td>\n" +
//"<td class=calc1>&nbsp;" + UpdateForm.ptelg028.value + "</td>\n" +
//"<td class=calc1>&nbsp;" + UpdateForm.expcdlos.value + "</td>\n" +
//  "<td class=calc1>&nbsp;" + "" + "</td>\n" +
//  "<td class=calc1>&nbsp;" + "" + "</td>\n" +
//  "<td class=calc1>&nbsp;" + UpdateForm.ptelg027.value + "</td>\n"
//    if (parseFloat(UpdateForm.hosexlos.value)>0) {
//    DocumentHTML+=
//      "<td class=calc1>&nbsp;" + UpdateForm.hosexlos.value + "</td></tr>\n"
//    } else {
//      "<td class=calc1>&nbsp;" + "" + "</td></tr>\n"
//    }
//}
//if(Patient.festflag.value=="0" &&
//  parseFloat(UpdateForm.ptelg011.value)>0) {
//  DocumentHTML+="<tr><td class=calc1>Theatre</td>\n" +
//"<td class=calc1>&nbsp;" + UpdateForm.ptelg021.value + "</td>\n" +
//"<td class=calc1>&nbsp;" + UpdateForm.expcdlos.value + "</td>\n" +
//  "<td class=calc1>&nbsp;" + "" + "</td>\n" +
//  "<td class=calc1>&nbsp;" + "" + "</td>\n" +
//"<td class=calc1>&nbsp;" + UpdateForm.ptelg011.value + "</td>\n"
//  "<td class=calc1>&nbsp;" + "" + "</td>\n"
//    if (parseFloat(UpdateForm.thtexlos.value)>0) {
//    DocumentHTML+=
//      "<td class=calc1>&nbsp;" + UpdateForm.thtexlos.value + "</td></tr>\n"
//    } else {
//      "<td class=calc1>&nbsp;" + "" + "</td></tr>\n"
//    }
//}
//if(Patient.festflag.value=="0" &&
//  parseFloat(UpdateForm.ptelg041.value)>0) {
  DocumentHTML+="<tr><td class=calc1>ICU / CCU / SCN</td>\n" +
//"<td class=calc1>&nbsp;" + UpdateForm.ptelg043.value + "</td>\n" +
//"<td class=calc1>&nbsp;" + UpdateForm.expcdlos.value + "</td>\n" +
  "<td class=calc1>&nbsp;" + "" + "</td>\n" +
  "<td class=calc1>&nbsp;" + "" + "</td>\n" +
  "<td class=calc1>&nbsp;"
    if(!isWhitespace(UpdateForm.ptelg041.value)) { DocumentHTML+= "$"}
    DocumentHTML+=
    Math.round(UpdateForm.ptelg041.value) + ".00" + "</td>\n"
    if (parseFloat(UpdateForm.icuexlos.value)>0) {
    DocumentHTML+=
      "<td class=calc1>&nbsp;$" + 
      Math.round(UpdateForm.icuexlos.value) + ".00" + "</td></tr>\n"
    } else {
    DocumentHTML+=
      "<td class=calc1>&nbsp;" + "" + "</td></tr>\n"
    }
//}
//
//jp task 0892480
    DocumentHTML+="<tr><td class=calc1>Theatre</td>\n" +
    "<td class=calc1>&nbsp;" + "" + "</td>\n" +
    "<td class=calc1>&nbsp;" + "" + "</td>\n" +
    "<td class=calc1>&nbsp;"
      if(!isWhitespace(UpdateForm.ptelg011.value)) { DocumentHTML+= "$"}
      DocumentHTML+=
      Math.round(UpdateForm.ptelg011.value) + ".00" + "</td>\n"
      if (parseFloat(UpdateForm.thtexlos.value)>0) {
      DocumentHTML+=
        "<td class=calc1>&nbsp;$" +
        Math.round(UpdateForm.thtexlos.value) + ".00" + "</td></tr>\n"
      } else {
      DocumentHTML+=
        "<td class=calc1>&nbsp;" + "" + "</td></tr>\n"
      }
    DocumentHTML+="<tr><td class=calc1>Hospital</td>\n" +
    "<td class=calc1>&nbsp;" + "" + "</td>\n" +
    "<td class=calc1>&nbsp;" + "" + "</td>\n" +
    "<td class=calc1>&nbsp;"
      if(!isWhitespace(UpdateForm.ptelg027.value)) { DocumentHTML+= "$"}
      DocumentHTML+=
      Math.round(UpdateForm.ptelg027.value) + ".00" + "</td>\n"
      if (parseFloat(UpdateForm.hosexlos.value)>0) {
      DocumentHTML+=
        "<td class=calc1>&nbsp;$" +
        Math.round(UpdateForm.hosexlos.value) + ".00" + "</td></tr>\n"
      } else {
      DocumentHTML+=
        "<td class=calc1>&nbsp;" + "" + "</td></tr>\n"
      }

// end jp 0892480
if (document.UpdateForm!=undefined) {
  if(Patient.festflag.value=="0" &&
     !isWhitespace( UpdateForm.ptelg031.value)) {
    DocumentHTML+="<tr><td class=calc>" + UpdateForm.ptelg031.value + "&nbsp;</td>\n" +
    "<td class=calc>&nbsp;" + "" + "</td>\n" +
    "<td class=calc>&nbsp;" + "" + "</td>\n" +
    "<td class=calc>&nbsp;$" +
    Math.round(UpdateForm.ptelg032.value) + ".00" + "</td>\n" +
    "<td class=calc>&nbsp;$" + 
    Math.round(UpdateForm.ptelg032.value) + ".00" + "</td></tr>\n"
  } else {
    DocumentHTML+="<tr><td class=calc>&nbsp;" + "" + "</td>\n" +
    "<td class=calc>&nbsp;" + "" + "</td>\n" +
    "<td class=calc>&nbsp;" + "" + "</td>\n" +
    "<td class=calc>&nbsp;" + "" + "</td>\n" +
    "<td class=calc>&nbsp;" + "" + "</td></tr>\n"
  }
} else {
  if(Patient.festflag.value=="0" &&
     !isWhitespace( Patient.ptelmdes.value)) {
    DocumentHTML+="<tr><td class=calc> " + Patient.ptelmdes.value + "&nbsp;</td>\n" +
    "<td class=calc>&nbsp;" + "" + "</td>\n" +
    "<td class=calc>&nbsp;" + "" + "</td>\n" +
    "<td class=calc>&nbsp;" + "" + "</td>\n" +
    "<td class=calc>&nbsp;" + Patient.ptelmamt.value + "</td></tr>\n"
  }
}
//////////////////////////////////////////////////////////////////////
//if ((document.UpdateForm!=undefined) && (Patient.festflag.value=="0")) {
//  if (UpdateForm.selfinsr.value=="1") {
//  DocumentHTML+="<tr><td class=calc1>&nbsp;" + "" + "</td>\n" +
//   "<td class=calc1><b>Out of Pocket</td>\n" +
//   "<td class=calc1>" + UpdateForm.ptelg034.value + "</td>\n"
//  } else {
//   DocumentHTML+="<tr><td class=calc1>&nbsp;" + "" + "</td>\n" +
//   "<td class=calc1>&nbsp;" + "" + "</td>\n" +
//   "<td class=calc1>&nbsp;" + "" + "</td>\n"
//  }
//} else {
     DocumentHTML+="<tr><td class=calc1>&nbsp;" + "" + "</td>\n" +
     "<td class=calc1>&nbsp;" + "" + "</td>\n" +
     "<td class=calc1>&nbsp;" + "" + "</td>\n"
//}
DocumentHTML+="<td class=calc1>&nbsp;</td>\n" +
              "<td class=calc1>&nbsp;</td></tr>\n"

//DocumentHTML+=
//"<tr><td>&nbsp;" + "" + "</td>\n" +
//"<td>&nbsp;" + "" + "</td>\n" +
//"<td>&nbsp;" + "" + "</td>\n" +
//"<td class=calc1><b>GST </td>\n" +
//"<td class=calc1>" + Patient.gsttotal.value + "</td></tr>\n"

GetTotal();

DocumentHTML+=
"<tr><td align=center class=SectHead1>TOTAL </td>\n" +
"<td align=center class=SectHead1>$" + 
  Math.round(Patient.estcostt.value) + ".00" + "</td>\n" +
"<td align=center class=SectHead1>$" + 
  Math.round(Patient.estrebtt.value) + ".00" + "</td>\n" +
"<td align=center class=SectHead1>&nbsp;" + "" + "</td>\n" +
//"<td align=center class=SectHead1>$" + Patient.estdaytt.value + "</td>\n" +
"<td align=center class=SectHead1>$" + 
  Math.round(Patient.esttotal.value) + ".00" + "</td></tr>\n" +

"</table></td></tr>\n"
//
// IFC Exclusions and Comments
  if (document.UpdateForm!=undefined)  {
    if(!isWhitespace(UpdateForm.ptelg005.value)) {
    DocumentHTML+="<tr><td class=HeadingRow width=10% valign=top>\n" +
    "EXCLUSIONS:</td>\n" +
    "<td>\n" + UpdateForm.ptelg005.value.substr(0,66) + "</td></tr>\n"
    }
  } else {
    if(!isWhitespace(Patient.ptelg005.value)) { 
    DocumentHTML+="<tr><td class=HeadingRow width=10% valign=top>\n" +
    "EXCLUSIONS:</td>\n" +
    "<td>\n" + Patient.ptelg005.value.substr(0,66) + "</td></tr>\n" 
  }
 }

  if (document.UpdateForm!=undefined)  {
    if(!isWhitespace(UpdateForm.ptelg022.value)) {
    DocumentHTML+="<tr><td class=HeadingRow width=10% valign=top>\n" +
    "COMMENTS:</td>\n" +
    "<td>\n" + UpdateForm.ptelg022.value.substr(0,66) + "</td></tr>\n"
    }
  } else {
    if(!isWhitespace(Patient.ptelg022.value)) {
    DocumentHTML+="<tr><td class=HeadingRow width=10% valign=top>\n" +
    "COMMENTS:</td>\n" +
    "<td>\n" + Patient.ptelg022.value.substr(0,66) + "</td></tr>\n"
  }
 }
DocumentHTML+=
"</table></tr>\n" +

//"<tr><td align=left><table width=98% align=center border=0 cellspacing=0>\n" +
//"<tr>\n" +
//"    <td><b>Estimate Completed By: </b>" + Patient.LoginName.value +
//              "&nbsp;&nbsp;</td>\n" +
//"    <td><b>Date: </b>" + Patient.currdate.value +
//              "&nbsp;&nbsp;</td>\n" +
//"    </tr>\n" +
//"</table></tr>\n" +

"<tr><td align=left><table width=98% align=center border=0 cellspacing=0>\n" +
"<tr><td class=smalltext colspan=6>This is an estimation only, which has been based on information provided prior to any treatment given. \n" +
"Should additional alternative procedures be performed or your proposed Length of Stay has altered, " +
Patient.hospname.value +
" reserves the right to review these charges. \n" +
"Health fund information is confidential and used only for " +
Patient.hospname.value +
" billing purposes. </td></tr>\n" +
"<tr><td class=smalltext colspan=6 align=right>Verified by:  ..............................................................................................\n" + 
"  Patient / Next-of-Kin / Carer / Legal Guardian Signature </td></tr>\n" +
"</table></td>\n" +
"<tr><td align=left><table width=98% align=center border=0 cellspacing=0>\n" +
"<tr><td class=smalltext colspan=6>Patients / guardians are encouraged to confirm with their health insurer, prior to admission or as soon as practical after admission, the following:\n" +
"<br>\u2022  reimbursement for each of the expected charges in relation to the policy they hold\n" + 
"<br>\u2022 if the planned admission or treatment is within a waiting or exclusion period for the policy\n" + 
"<br>\u2022 if there is a gap payment for treatment</td></tr>\n" +
"</table></td>\n" +
//
// IFC Signature Line
"<tr><td colspan=6 align=left class=SectHead2>&nbsp;\n" +
"PATIENT / NEXT OF KIN / CARER / LEGAL GUARDIAN TO COMPLETE </td></tr>\n" +
"<tr><td colspan=6><table width=98% align=center border=0 cellspacing=0>\n" +

"<tr><td colspan=6> I have been advised of the above cost estimates in respect of the proposed treatment for " +
Patient.Given.value + "&nbsp;" +
Patient.Surname.value + ".<br>\n" +
"I understand that they are estimates and may change as a result of variations in the treatment provided. <br>\n" +
"I accept responsibilities for payment of this account, including (if applicable) if a nominated insurer does not pay the anticipated rebate. <br>\n" +
"</td></tr>\n" +

"<tr><td colspan=6 align=left>&nbsp;</td></tr>\n" +

"<tr><td class=largetext colspan=6>Patient / Next-of-Kin / Carer / Legal Guardian Signature....................................................................    Date......../......../................  </td></tr>\n" +
"<tr><td class=smalltext colspan=6>(If Next-Of-Kin / Carer / Legal Guardian, please state Name / Relationship and provide Address / Contact Details):  </td></tr>\n" +

"<tr><td colspan=6 align=left>&nbsp;</td></tr>\n" +

"<tr><td>.......................................................................</td>\n" +
"    <td>........................................</td>\n" +
"    <td>.................................................................................</td>\n" +
"    <td>..............................</td></tr>\n" +
"<tr><td class=smalltext>NAME</td>" +
"    <td class=smalltext>RELATIONSHIP</td>" +
"    <td class=smalltext>ADDRESS</td>" +
"    <td class=smalltext>CONTACT NUMBER</td></tr>\n" +

"</table></td></tr>\n"
//////////////////////////////////////////////////////////////////////////
DocumentHTML+=
"</table>\n"
  return(DocumentHTML)
}
// ---------------------------------
// SJGHC IFC Layout (Format 2)
// ---------------------------------
function SJGHCLayout() {
//Patient.festflag.value="0";          // always use IFC information
//

if(Patient.festflag.value=="1") {
  DocumentHTML="<title>SJGHC IFC</title>\n" +
"<style type=text/css>\n" +
"body { margin:10; \n" +
"font-family: Arial; }\n" +
"td { font-size:9px;}\n" +
"td.calc { border-right-style:solid;\n" +
"          border-top-style:solid;\n" +
"          border-width:1px; text-align:center;} \n" +
"td.calc1 { border-right-style:solid;\n" +
"           border-width:1px; text-align:center;} \n" +
"table.calc { border-collapse:collapse; border:1px solid grey;} \n" +
"td.smalltext { font-size:8px;}\n" +
"td.largetext { font-size:10px;}\n" +
"td.dings { font-size:14px;}\n" +
"td.MainHead { font-size:16px; font-family: Arial;}\n" +
"td.SectHead1 { \n" +
"          border-right-style:solid;\n" +
"          border-top-style:solid;\n" +
"          border-width:1px; \n" +
"background-color:lightgrey;\n" +
"font-family: Arial;\n" +
"font-weight:bold; }\n" +
"td.SectHead2 { \n" +
"color:white;\n" +
"background-color:black;\n" +
"font-family: Arial;\n" +
"font-size:12px; \n" +
"font-weight:bold; }\n" +
"td.SectHead3 { \n" +
"border-color:black;\n" +
"color:white;\n" +
"background-color:black;\n" +
"font-family: Arial;\n" +
"font-size:12px; \n" +
"font-weight:bold; }\n" +
"td.SectHead4 { \n" +
"border-color:black;\n" +
"color:white;\n" +
"background-color:black;\n" +
"font-family: Arial;\n" +
"font-size:7px; \n" +
"font-weight:bold; }\n" +
"td.HeadingRow  { \n" +
"font-family: Arial;\n" +
"font-size:10px; \n" +
"font-weight:bold; }\n" +
"p.page {page-break-after: always}\n" +
"</style>\n" +

"<table align=center width=100% border=1 cellspacing=0>\n" +
////////////////////////////////////////////////////////////////////////////
"<tr><td colspan=6><table width=100% border=0 cellspacing=0>\n" +
//
// Fees Estimate Header

"<tr><td align=center width=60% rowspan=3><img height=100 src=../images/" +
 Patient.hospcode.value + "logo.gif></td>\n" +
"<td><b>UR Number:    </b>" + Patient.urnumber.value + "</td>\n" +
//"<td><b>Quote Number:    </b>" + Patient.pmfdquot.value + "</td>\n" +
"</tr>\n"

} else {

  DocumentHTML="<title>SJGHC IFC</title>\n" +
"<style type=text/css>\n" +
"body { margin:10; \n" +
"font-family: Arial; }\n" +
"td { font-size:9px;}\n" +
"td.calc { border-right-style:solid;\n" +
"          border-top-style:solid;\n" +
"          border-width:1px; text-align:center;} \n" +
"td.calc1 { border-right-style:solid;\n" +
"           border-width:1px; text-align:center;} \n" +
"table.calc { border-collapse:collapse; border:1px solid grey;} \n" +
"td.smalltext { font-size:8px;}\n" +
"td.largetext { font-size:10px;}\n" +
"td.dings { font-size:14px;}\n" +
"td.MainHead { font-size:16px; font-family: Arial;}\n" +
"td.SectHead1 { \n" +
"          border-right-style:solid;\n" +
"          border-top-style:solid;\n" +
"          border-width:1px; \n" +
"background-color:lightgrey;\n" +
"font-family: Arial;\n" +
"font-weight:bold; }\n" +
"td.SectHead2 { \n" +
"color:white;\n" +
"background-color:black;\n" +
"font-family: Arial;\n" +
"font-size:12px; \n" +
"font-weight:bold; }\n" +
"td.SectHead3 { \n" +
"border-color:black;\n" +
"color:white;\n" +
"background-color:black;\n" +
"font-family: Arial;\n" +
"font-size:12px; \n" +
"font-weight:bold; }\n" +
"td.SectHead4 { \n" +
"border-color:black;\n" +
"color:white;\n" +
"background-color:black;\n" +
"font-family: Arial;\n" +
"font-size:7px; \n" +
"font-weight:bold; }\n" +
"td.HeadingRow  { \n" +
"font-family: Arial;\n" +
"font-size:10px; \n" +
"font-weight:bold; }\n" +
"p.page {page-break-after: always}\n" +
"</style>\n" +

"<table align=center width=100% border=1 cellspacing=0>\n" +
////////////////////////////////////////////////////////////////////////////
"<tr><td colspan=6><table width=100% border=0 cellspacing=0>\n" +
//
// IFC Hospital Header
"<tr><td align=center width=60% rowspan=3><img height=100 src=../images/" +
 Patient.hospcode.value + "logo.gif></td>\n" +
"<td><b>UR Number:    </b>" + Patient.urnumber.value + "</td>\n" +
"<td><b>Visit Number:    </b>" + Patient.admissno.value + "</td>\n" +
"</tr>\n"
}

//
// IFC Patient Details
DocumentHTML+=
"<tr><td><b>Surname: </b>\n" +
  Patient.Surname.value + "</td>\n" +
"    <td>&nbsp;</td></tr>\n" +
"<tr><td><b>Name: </b>\n" +
  Patient.Given.value + "</td>\n" +
"    <td>&nbsp;</td></tr>\n" +
"<tr><td>&nbsp;</td>\n" +
"    <td><b>Date Of Birth: </b>" + Patient.dob.value + "</td>\n" +
"    <td><b>Gender: </b>" + Patient.sex.value + "</td></tr>\n"
if(Patient.festflag.value=="1") { // 313842 only for Fees Estimate
DocumentHTML+=
"<tr><td>&nbsp;</td>\n" +
"    <td><b>Reference No: </b>\n" +
  Patient.pmfdquot.value + "</td>\n" +
"    <td>&nbsp;</td></tr>\n" +
"<tr><td>&nbsp;</td>\n" +
"    <td><b>Expiry Date: </b>\n" +
  Patient.pmfdexpd.value + "</td>\n" +
"    <td>&nbsp;</td></tr>\n"
} else { // 313842 only for IFC
DocumentHTML+=
"<tr><td>&nbsp;</td>\n" +
"    <td>&nbsp;</td>\n" +
"    <td>&nbsp;</td></tr>\n" +
"<tr><td>&nbsp;</td>\n" +
"    <td>&nbsp;</td>\n" +
"    <td>&nbsp;</td></tr>\n"
}
///////////////////////////////////////////////////////////////////////////////
if(Patient.festflag.value=="0") { // 313842 only for IFC
DocumentHTML+=
"<tr><td class=MainHead align=center>INFORMED FINANCIAL CONSENT</td>\n" +
"    <td><b>Dr: </b>" + Patient.doctname.value + "</td>\n" +
"    <td>&nbsp;</td></tr>\n" +
"</table></td>\n" +
"<td rowspan=20><img height=550 src=../images/" +
 Patient.hospcode.value + "IFC.gif></td>\n" +
"</tr>\n"
}
///////////////////////////////////////////////////////////////////////////////
if(Patient.festflag.value=="1") { // 313842 only for Fees Estimate
DocumentHTML+=
"<tr><td class=MainHead align=center>FEES ESTIMATE     No." + Patient.pmfdquot.value + "</td>\n" +
"    <td><b>Dr: </b>" + Patient.doctname.value + "</td>\n" +
"    <td>&nbsp;</td></tr>\n" +
"</table></td>\n" +
"<td rowspan=20><img height=550 src=../images/" +
 "FeesEst.gif></td>\n" +
"</tr>\n"
}
///////////////////////////////////////////////////////////////////////////////
//
// IFC Admission Details
DocumentHTML+=
"<tr><td colspan=6><table width=98% align=center border=0 cellspacing=0>\n" +
"<tr><td><b>Admission Date: </b>" + Patient.admndate.value + "</td>\n" +
"    <td>&nbsp;</td></tr>\n" +
"</table></td></tr>\n"
//if(Patient.festflag.value=="0") { // 313842 only for IFC
if(Patient.festflag.value=="0" || Patient.festflag.value=="1") { 
DocumentHTML+=
"<tr><td colspan=6><table width=98% align=center border=0 cellspacing=0>\n" +
"<tr><td width=30%><b>Details Confirmed Prior to Admission: </b></td>\n" +
"<td class=dings>&#10065</td><td>Confirmed </td>\n" +
"<td class=dings>&#10065</td><td>No Answer </td>\n" +
"<td class=dings>&#10065</td><td>Left Message </td>\n" +
"<td>Date: </td>\n" +
"<td>____/____/____</td></tr>\n" +
"</table></td></tr>\n"
}
//
// IFC Insurance Details
DocumentHTML+=
"<tr><td colspan=6 align=left class=SectHead2>&nbsp;\n" +
" INSURANCE DETAILS          </td></tr>\n" +
"<tr><td colspan=6><table width=98% align=center border=0 cellspacing=0>\n"
///////////////////////////////////////////////////////////////////////////////
//if(Patient.festflag.value=="1") {
///  do not print the following for both SJOG IFC and Fees Estimate
if(Patient.festflag.value!="0" || Patient.festflag.value!="1") { 
if((Patient.claimtyp.value.substr(7,1))=="1" ||
   (Patient.claimtyp.value.substr(7,1))=="2") {
  DocumentHTML+="<td colspan=6>[X] <b><i>Private Health Insurance </td></tr>\n"
  } else {
  DocumentHTML+="<td colspan=6>[&nbsp; ] <b><i>Private Health Insurance </td></tr>\n" }


 if  (document.UpdateForm!=undefined)  {
  if (document.UpdateForm.usebasic.value=="1") {
    document.Patient.hlthtabl.value="Using Default Cover Rates";
  }
 }

DocumentHTML+=
"<tr><td><b>Fund Name </td>\n" +
"<td>" + Patient.hlthfund.value + "</td>\n" +
"    <td><b>Membership No </td>\n" +
"<td>" + Patient.hlthmemb.value + "</td>\n" +
"    <td><b>Schedule </td>\n" +
"<td>" + Patient.hlthtabl.value + "</td></tr>\n" +
"<tr><td><b>Fund Excess </td>\n"

if(Patient.festflag.value=="1") {
  DocumentHTML+="<td>" + Patient.pmfdxcss.value + "</td>\n"
} else if((Patient.festflag.value=="0") &&
         (document.UpdateForm!=undefined))  {
  if(Patient.admrlost.value > 0) {
    DocumentHTML+="<td>" + UpdateForm.ptelg003.value + "</td>\n"
  } else {
    DocumentHTML+="<td>" + UpdateForm.ptelg040.value + "</td>\n"
  }
 } else {
  DocumentHTML+="<td>" + Patient.fundxcss.value + "</td>\n"
}

DocumentHTML+="    <td><b>Paid up date </td>\n"
// "<td>" + Patient.paidupdt.value + "</td>\n" +

 if((Patient.festflag.value=="0") &&
    (document.UpdateForm!=undefined))  {
       if(UpdateForm.ptelg001.value=="1"){
         DocumentHTML+="<td>Yes</td>\n"
       } else {
         DocumentHTML+="<td>No</td>\n"
       }
 } else {
  DocumentHTML+="<td>" + Patient.paidupdt.value + "</td>\n"
 }

DocumentHTML+="    <td><b>Qualifying Periods</td>\n"
//"    <td><b>Qualifying Periods </td>\n"
// "<td>" + Patient.qualperd.value + "</td></tr>\n" +

 if((Patient.festflag.value=="0") &&
    (document.UpdateForm!=undefined))  {
       if(UpdateForm.ptelg030.value=="1"){
         DocumentHTML+="<td>Yes</td></tr>\n"
       } else {
         DocumentHTML+="<td>No</td></tr>\n"
       }
 } else {
  DocumentHTML+="<td>" + Patient.qualperd.value + "</td></tr>\n"
 }

DocumentHTML+="    <td><b>PEA form required</td>\n"
if(trim(Patient.subjtpea.value)=="Yes"){
  DocumentHTML+="<td>[X]</td>\n"
  } else {
  DocumentHTML+="<td>[&nbsp; ]</td>\n" }

DocumentHTML+=
"    <td><b>Estimate required </td>\n" +
"<td>" + "[&nbsp; ]" + "</td>\n"

if(Patient.hospname.value.substr(0,7)=="Cabrini"){
  DocumentHTML+=
  "    <td><b>Campus Malvern (ONight) </td>\n" +
  "<td>" + "&nbsp;" + "</td></tr>\n"
}

DocumentHTML+=
"<tr><td colspan=6 align=center><hr width=100%></td></tr>\n"

if((Patient.claimtyp.value.substr(7,1))=="0" ||
   (Patient.claimtyp.value.substr(7,1))=="3") {
  DocumentHTML+="<tr><td colspan=2>[X]<b>Non/Self/Overseas insured </td>\n"
  } else {
  DocumentHTML+="<tr><td colspan=2>[&nbsp; ]<b>Non/Self/Overseas insured </td>\n" }

DocumentHTML+=
"    <td><b>Estimate required </td>\n" +
"    <td>" + "[&nbsp; ]" + "</td>\n" +
"<td>" + "&nbsp;" + "</td>\n" +
"<td>" + "&nbsp;" + "</td></tr>\n"

if((Patient.claimtyp.value.substr(7,1))=="7"){
  DocumentHTML+="<tr><td colspan=2>[X]\n"
  } else {
  DocumentHTML+="<tr><td colspan=2>[&nbsp; ]\n" }

if((Patient.dvacolor.value.substr(14,1))=="G"){
  DocumentHTML+=
  "<b>Veterans Affairs Cardholder </td>\n" +
  "    <td><b>Gold</b>[X]</td>\n" +
  "    <td><b>White</b>[&nbsp; ]</td>\n"
  } else
if((Patient.dvacolor.value.substr(14,1))=="W"){
  DocumentHTML+=
  "<b>Veterans Affairs Cardholder </td>\n" +
  "    <td><b>Gold</b>[&nbsp; ]</td>\n" +
  "    <td><b>White</b>[X]</td>\n"
  } else {
  DocumentHTML+=
  "<b>Veterans Affairs Cardholder </td>\n" +
  "    <td><b>Gold</b>[&nbsp; ]</td>\n" +
  "    <td><b>White</b>[&nbsp; ]</td>\n" }

DocumentHTML+=
  "    <td align=right><b>(White) Est. Required</b>[&nbsp; ]</td>\n" +
"<td>" + "&nbsp;" + "</td></tr>\n"

if(Patient.ptcnhdps.value=="6"){
  if((Patient.claimtyp.value.substr(7,1))=="4"){
    DocumentHTML+="<tr><td>[X]<b>Workcover/WCC </td>\n"
  } else {
    DocumentHTML+="<tr><td>[&nbsp; ]<b>Workcover/WCC </td>\n"
  }
} else if((Patient.claimtyp.value.substr(7,1))=="4"){
    DocumentHTML+="<tr><td>[X]<b>Workcover </td>\n"
  } else {
    DocumentHTML+="<tr><td>[&nbsp; ]<b>Workcover </td>\n"
  }

checkInd=document.Patient.claimtyp.value.substr(3,5)
if(Patient.ptcnhdps.value=="6"){
  if (checkInd.search(/M/g) >= 0) {
    DocumentHTML+="<td>[X]<b>TAC/MVIT </td>\n"
  } else {
    DocumentHTML+="<td>[&nbsp; ]<b>TAC/MVIT </td>\n"
  }
} else if (checkInd.search(/M/g) >= 0) {
    DocumentHTML+="<td>[X]<b>TAC </td>\n"
  } else {
    DocumentHTML+="<td>[&nbsp; ]<b>TAC </td>\n"
  }

DocumentHTML+=
"<td colspan=2><b>Letter of Approval</b>&nbsp;  Yes[&nbsp; ]  No[&nbsp; ]</td>\n" +
"    <td align=right><b>Est. Required</b> [&nbsp; ]</td>\n" +
"<td>" + "&nbsp;" + "</td></tr>\n" +

"<tr><td colspan=6 align=center><hr width=100%></td></tr>\n"

} // end festflag=1
///////////////////////////////////////////////////////////////////////////////
///  print the following for both SJOG IFC and Fees Estimate
if(Patient.festflag.value=="0" || Patient.festflag.value=="1") { 
DocumentHTML+=
"<td><b>CLAIM TYPE: </b></td>\n" + 
"<td>" + Patient.claimdsc.value + "</td></tr>\n"
checkInd=document.Patient.claimtyp.value.substr(3,5)

// DVA
if (checkInd.search(/V/g) >= 0) {
DocumentHTML+=
"<tr><td>Card Number: </td>\n" +
"    <td>" + Patient.dvaccnum.value + "</td>\n" +
"    <td>Preferred Accommodation </td>\n" +
"    <td>" + Patient.prefaccm.value + "</td>\n"
DocumentHTML+=
"</tr>\n" +

"<tr><td>Card Type: </td>\n" +
"    <td>" + Patient.dvacldsc.value + "</td>\n" +
"    <td>Approval Given? </td>\n"
  if(document.UpdateForm!=undefined){
    if(UpdateForm.ptelg006.value=="1"){
        DocumentHTML+="<td>Yes</td>\n"
      } else {
        DocumentHTML+="<td>No</td>\n"
      }
  }
DocumentHTML+=
"    <td>Date: </td>\n"
  if(document.UpdateForm!=undefined){
      DocumentHTML+="<td>" + UpdateForm.ptelg013.value + "</td>\n"
  }
DocumentHTML+=
"</tr>\n"
} else

// ADF
if (checkInd.search(/D/g) >= 0) {
DocumentHTML+=
"<tr><td>PMKeys Number: </td>\n" +
"    <td>" + Patient.defpmkey.value + "</td>\n" +
"    <td>Preferred Accommodation </td>\n" +
"    <td>" + Patient.prefaccm.value + "</td>\n"
DocumentHTML+=
"</tr>\n" +

"<tr><td>Defence Force Approval Number: </td>\n" +
"    <td>" + Patient.defappno.value + "</td>\n" +
"    <td>Claim Accepted? </td>\n"
    if(Patient.defclacc.value=="1"){
        DocumentHTML+="<td>Yes</td>\n"
    } else
    if(Patient.defclacc.value=="0"){
        DocumentHTML+="<td>No</td>\n"
    } else {
        DocumentHTML+="<td>N/A</td>\n"
    }
DocumentHTML+=
"    <td>Referral Date: </td>\n" +
"    <td>" + Patient.defrefdt.value + "</td>\n"
DocumentHTML+=
"</tr>\n"
} else

{
//if (checkInd.search(/M/g) < 0) {
// Private
DocumentHTML+=
"<tr><td width=20%>Health Fund: </td>\n" +
"    <td>" + Patient.hlthfdsc.value + "</td>\n" +
"    <td width=20%>Exclusions / Restrictions? </td>\n"
  if(document.UpdateForm!=undefined){
    if(UpdateForm.ptelg004.value=="1"){
        DocumentHTML+="<td>Yes</td>\n"
      } else {
        DocumentHTML+="<td>No</td>\n"
      }
  }
DocumentHTML+=
"</tr>\n" +

"<tr><td>Level of Cover: </td>\n"
  if(document.UpdateForm!=undefined){
    if(!isWhitespace(UpdateForm.ptelg024.value)){
        DocumentHTML+="    <td>" + UpdateForm.ptelg024.value + "</td>\n"
      } else {
        DocumentHTML+="    <td>" + Patient.hlthtabl.value + "</td>\n"
      }
  }
DocumentHTML+=
"    <td>Waits Served? </td>\n"
  if(document.UpdateForm!=undefined){
    if(UpdateForm.ptelg030.value=="1"){
        DocumentHTML+="<td>Yes</td>\n"
      } else {
        DocumentHTML+="<td>No</td>\n"
      }
  }
DocumentHTML+=
"</tr>\n" +

"<tr><td>Member Number: </td>\n" +
"    <td>" + Patient.hlthmemb.value + "</td>\n" +
"    <td>Check Complete? </td>\n"
  if(document.UpdateForm!=undefined){
    if(UpdateForm.ptelg006.value=="1"){
        DocumentHTML+="<td>Yes</td>\n"
      } else {
        DocumentHTML+="<td>No</td>\n"
      }
  }
DocumentHTML+=
"    <td>Date: </td>\n"
  if(document.UpdateForm!=undefined){
      DocumentHTML+="<td>" + UpdateForm.ptelg013.value + "</td>\n"
  }
DocumentHTML+=
"</tr>\n" +

"<tr><td>Financial: </td>\n"
  if(document.UpdateForm!=undefined){
    if(UpdateForm.ptelg001.value=="1"){
        DocumentHTML+="<td>Yes</td>\n"
      } else {
        DocumentHTML+="<td>No</td>\n"
      }
  }
DocumentHTML+=
"    <td>Preferred Accommodation </td>\n" +
"    <td>" + Patient.prefaccm.value + "</td>\n"
DocumentHTML+=
"</tr>\n"
}


DocumentHTML+=
"</tr>\n" +

"<tr><td><b>Fund Excess </td>\n"
if(Patient.festflag.value=="1") {
  DocumentHTML+="<td>" + Patient.pmfdxcss.value + "</td>\n"
 } else {
  DocumentHTML+="<td>" + Patient.fundxcss.value + "</td>\n"
}

DocumentHTML+="    <td><b>PEA form required</td>\n"
if(trim(Patient.subjtpea.value)=="Yes"){
  DocumentHTML+="<td>[X]</td>\n"
  } else {
  DocumentHTML+="<td>[&nbsp; ]</td>\n" }




} // end festflag=0
///////////////////////////////////////////////////////////////////////////////
DocumentHTML+=
//
"</table></td></tr>\n" +
"<tr><td colspan=6 align=left class=SectHead2>&nbsp;</td></tr>\n" +
"<tr><td colspan=6><table width=98% align=center border=0 cellspacing=0>\n"
///////////////////////////////////////////////////////////////////////////////
//if(Patient.festflag.value=="0") {
if(Patient.festflag.value=="0" || Patient.festflag.value=="1") {
DocumentHTML+=
"<tr><td colspan=6 class=smalltext><b>Estimate does not include pathology, radiology, non-admission related pharmacy drugs, discharge pharmacy drugs,\n" +
" non-PBS pharmacy drugs, non-emergency patient transport, clinically necessary patient transport,  Doctors or Anaesthetist fees,\n" +
" prosthesis charges, visitor meals, boarder fees, STD or mobile phone calls.</b></td></tr>\n" +

//
// IFC Reason for Admission
"<tr><td align=center colspan=6><table width=95% class=calc cellspacing=0>\n" +

"<tr><td colspan=2 align=center class=SectHead1>\n" +
" Reason for Admission </td>\n" +
"<td colspan=2 align=center class=SectHead1>\n" +
" DRG/Item Number/Admission Type </td>\n" +
"<td colspan=2 align=center class=SectHead1>\n" +
" Length of Stay </td></tr>\n"

if(Patient.festflag.value=="0") {
   if (!isWhitespace(document.Patient.thfee01a.value)) {
   DocumentHTML+=
   "<tr><td colspan=2 class=calc>&nbsp;" + Patient.admreasn.value +
   "<td colspan=2 class=calc>&nbsp;" + Patient.thfee01a.value + "</td>\n" +
   "<td colspan=2 class=calc>&nbsp;" + Patient.admrlost.value + "</td></tr>\n" +
   "</table></td></tr>\n"
   } else {
  DocumentHTML+=
  "<tr><td colspan=2 class=calc>&nbsp;" + Patient.admreasn.value +
  "<td colspan=2 class=calc>&nbsp;" + Patient.admritmn.value + "</td>\n" +
  "<td colspan=2 class=calc>&nbsp;" + Patient.admrlost.value + "</td></tr>\n" +
  "</table></td></tr>\n"
   }
 } else {
DocumentHTML+=
"<tr><td colspan=2 class=calc>&nbsp;" + Patient.admreasn.value +
//"<br>" + Patient.admreasn.value.substr(40,80) + "</td>\n" +
"<td colspan=2 class=calc>&nbsp;" + Patient.admritmn.value + "</td>\n" +
"<td colspan=2 class=calc>&nbsp;" + Patient.admrlost.value + "</td></tr>\n" +
"</table></td></tr>\n"
}
}
///////////////////////////////////////////////////////////////////////////////
//

///  print the following for both SJOG IFC and Fees Estimate
if(Patient.festflag.value=="0" || Patient.festflag.value=="1") { // body
DocumentHTML+=
"<tr><td colspan=6 align=left>&nbsp;</td></tr>\n" +
//
"<tr><td align=center colspan=6><table width=95% class=calc cellspacing=0>\n" +
"<tr><td align=center class=SectHead3>Charge Type</td>\n" + 
"<td align=center class=SectHead3>Estimated Cost</td>\n" + 
"<td align=center class=SectHead3>Fund Rebate</td>\n" + 
"<td align=center colspan=2 class=SectHead3>Patient Cost</td></tr>\n" +
"<tr><td align=center class=SectHead4>&nbsp;</td>\n" + 
"<td align=center class=SectHead4>(if claim not accepted by your insurer)</td>\n" + 
"<td align=center class=SectHead4>(per day)</td>\n" + 
"<td align=center colspan=2 class=SectHead4>(if claim fully accepted by insurer)</td></tr>\n" 
//

DocumentHTML+=
"<tr><td align=center class=SectHead1><b>Single Charges</td>\n" + 
"<td class=SectHead1><b>&nbsp;</td>\n" +
"<td class=SectHead1><b>&nbsp;</td>\n" +
"<td class=SectHead1><b>&nbsp;</td>\n" +
"<td class=SectHead1><b>&nbsp;</td>\n"

if(Patient.festflag.value=="1") { 
DocumentHTML+=
  "<tr><td class=calc>Fund Excess</td>\n" +
  "<td class=calc><b>&nbsp;</td>\n" +
  "<td class=calc><b>&nbsp;</td>\n" +
  "<td class=calc><b>&nbsp;</td>\n"
  DocumentHTML+="<td style='text-align:right' class=calc>" + Patient.pmfdxcss.value + "&nbsp;&nbsp;</td></tr>\n"
}

if(Patient.festflag.value=="0") {
// IFC Fund Excess
DocumentHTML+=
"<tr><td class=calc><b>Fund Excess</td>\n" +
"<td class=calc><b>&nbsp;</td>\n" +
"<td class=calc><b>&nbsp;</td>\n" +
"<td class=calc><b>&nbsp;</td>\n" +
"<td class=calc><b>&nbsp;</td></tr>\n" +
"<tr><td class=calc1>Same Day</td>\n" +
"<td class=calc1><b>&nbsp;</td>\n" +
"<td class=calc1><b>&nbsp;</td>\n" +
"<td class=calc1><b>&nbsp;</td>\n"
if((Patient.festflag.value=="0") &&
   (document.UpdateForm!=undefined) &&
  parseFloat(UpdateForm.ptelg040.value)>0) {
  DocumentHTML+="<td style='text-align:right' class=calc1>$" +
  Math.round(UpdateForm.ptelg040.value) + ".00" + "&nbsp;&nbsp;</td></tr>\n"
} else {
  DocumentHTML+="<td style='text-align:right' class=calc1>$" + ".00" + "&nbsp;&nbsp;</td></tr>\n"
}

DocumentHTML+=
"<tr><td class=calc1>Overnight</td>\n" +
"<td class=calc1><b>&nbsp;</td>\n" +
"<td class=calc1><b>&nbsp;</td>\n" +
"<td class=calc1><b>&nbsp;</td>\n"
if((Patient.festflag.value=="0") &&
   (document.UpdateForm!=undefined) &&
  parseFloat(UpdateForm.ptelg003.value)>0) {
  DocumentHTML+="<td style='text-align:right' class=calc1>$" +
  Math.round(UpdateForm.ptelg003.value) + ".00" + "&nbsp;&nbsp;</td></tr>\n"
} else {
//DocumentHTML+="<td class=calc1>" + Patient.fundxcss.value + "</td></tr>\n"
  DocumentHTML+="<td class=calc1>&nbsp;</td></tr>\n"
}

}


//
///  print the Keyin Theatre fees for both SJOG IFC and Fees Estimate

DocumentHTML+=
"<tr><td class=calc1 align=left>" + "&nbsp;</td>\n" + "<td class=calc1>"
DocumentHTML+=
  "&nbsp;</td>\n" + "<td class=calc1>"
DocumentHTML+=
 "&nbsp;</td>\n" + "<td class=calc1>"
DocumentHTML+=
 "&nbsp;</td>\n" + "<td class=calc1>"
DocumentHTML+=
 "&nbsp;</td></tr>\n"

if (document.UpdateForm!=undefined) {
  if(Patient.festflag.value=="0" &&
     !isWhitespace( UpdateForm.ptelg031.value)) {

   if (UpdateForm.selfinsr.value=="1") {
    DocumentHTML+="<tr><td style='text-align:right' class=calc>" + UpdateForm.ptelg031.value + "&nbsp;&nbsp;</td>\n" +
    "<td class=calc>&nbsp;" + "" + "</td>\n" +
    "<td class=calc>&nbsp;" + "" + "</td>\n" +
    "<td class=calc>&nbsp;" + "" + "</td>\n" +
    "<td style='text-align:right' class=calc>&nbsp;$" + 
    Math.round(UpdateForm.ptelg032.value) + ".00" + "&nbsp;&nbsp;</td></tr>\n" 
   } else {
    DocumentHTML+="<tr><td class=calc>" + UpdateForm.ptelg031.value + "&nbsp;&nbsp;</td>\n" +
    "<td class=calc>&nbsp;" + "" + "</td>\n" +
    "<td style='text-align:right' class=calc>&nbsp;$" + 
    Math.round(UpdateForm.ptelg032.value) + ".00" + "&nbsp;&nbsp;</td>\n" +
    "<td class=calc>&nbsp;" + "" + "</td>\n" +
    "<td class=calc>&nbsp;" + "" + "</td></tr>\n"
   }

  } else {
    DocumentHTML+="<tr><td class=calc>&nbsp;" + "" + "</td>\n" +
    "<td class=calc>&nbsp;" + "" + "</td>\n" +
    "<td class=calc>&nbsp;" + "" + "</td>\n" +
    "<td class=calc>&nbsp;" + "" + "</td>\n" +
    "<td class=calc>&nbsp;" + "" + "</td></tr>\n"
  }
} else {
  if(Patient.festflag.value=="0" &&
     !isWhitespace( Patient.ptelmdes.value)) {

   if (UpdateForm.selfinsr.value=="1") {
    DocumentHTML+="<tr><td style='text-align:right' class=calc> " + Patient.ptelmdes.value + "&nbsp;&nbsp;</td>\n" +
    "<td class=calc>&nbsp;" + "" + "</td>\n" +
    "<td class=calc>&nbsp;" + "" + "</td>\n" +
    "<td class=calc>&nbsp;" + "" + "</td>\n" +
    "<td style='text-align:right' class=calc>&nbsp;" + Patient.ptelmamt.value + "&nbsp;&nbsp;</td></tr>\n"
   } else {
    DocumentHTML+="<tr><td style='text-align:right' class=calc> " + Patient.ptelmdes.value + "&nbsp;&nbsp;</td>\n" +
    "<td class=calc>&nbsp;" + "" + "</td>\n" +
    "<td style='text-align:right' class=calc>&nbsp;" + Patient.ptelmamt.value + "&nbsp;&nbsp;</td>\n" +
    "<td class=calc>&nbsp;" + "" + "</td>\n" +
    "<td class=calc>&nbsp;" + "" + "</td></tr>\n"
   }

  }
}

///////////////////////////////
if(!isWhitespace(Patient.thfee01a.value)) {
DocumentHTML+=
"<tr><td class=calc align=left>" +
 trim(Patient.thfee01a.value) + "&nbsp;</td>\n" +
"<td class=calc>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.thfee01c.value="";
 }
}
if(!isWhitespace(Patient.thfee01c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.thfee01c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc>"
if(!isWhitespace(Patient.thfee01d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
trim(Patient.thfee01d.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.thfee02a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.thfee02a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.thfee02c.value="";
 }
}
if(!isWhitespace(Patient.thfee02c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.thfee02c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.thfee02d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
trim(Patient.thfee02d.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.thfee03a.value)) {
DocumentHTML+=
"<tr><td class=calc1>" +
 trim(Patient.thfee03a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.thfee03c.value="";
 }
}
if(!isWhitespace(Patient.thfee03c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.thfee03c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.thfee03d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
trim(Patient.thfee03d.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.thfee04a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.thfee04a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.thfee04c.value="";
 }
}
if(!isWhitespace(Patient.thfee04c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.thfee04c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.thfee04d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
trim(Patient.thfee04d.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.thfee05a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.thfee05a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.thfee05c.value="";
 }
}
if(!isWhitespace(Patient.thfee05c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.thfee05c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.thfee05d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
trim(Patient.thfee05d.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.thfee06a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.thfee06a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.thfee06c.value="";
 }
}
if(!isWhitespace(Patient.thfee06c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.thfee06c.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.thfee06d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
trim(Patient.thfee06d.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.thfee07a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.thfee07a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.thfee07c.value="";
 }
}
if(!isWhitespace(Patient.thfee07c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.thfee07c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.thfee07d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
trim(Patient.thfee07d.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.thfee08a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.thfee08a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.thfee08c.value="";
 }
}
if(!isWhitespace(Patient.thfee08c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.thfee08c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.thfee08d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
trim(Patient.thfee08d.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.thfee09a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.thfee09a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.thfee09c.value="";
 }
}
if(!isWhitespace(Patient.thfee09c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.thfee09c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.thfee09d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
trim(Patient.thfee09d.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.thfee10a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.thfee10a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.thfee10c.value="";
 }
}
if(!isWhitespace(Patient.thfee10c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.thfee10c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.thfee10d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
trim(Patient.thfee10d.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.thfee11a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.thfee11a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.thfee11c.value="";
 }
}
if(!isWhitespace(Patient.thfee11c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.thfee11c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.thfee11d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
trim(Patient.thfee11d.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.thfee12a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.thfee12a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.thfee12c.value="";
 }
}
if(!isWhitespace(Patient.thfee12c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.thfee12c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.thfee12d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
trim(Patient.thfee12d.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.thfee13a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.thfee13a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.thfee13c.value="";
 }
}
if(!isWhitespace(Patient.thfee13c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.thfee13c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.thfee13d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
trim(Patient.thfee13d.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.thfee14a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.thfee14a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.thfee14c.value="";
 }
}
if(!isWhitespace(Patient.thfee14c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.thfee14c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.thfee14d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
trim(Patient.thfee14d.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.thfee15a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.thfee15a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.thfee15c.value="";
 }
}
if(!isWhitespace(Patient.thfee15c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.thfee15c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.thfee15d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
trim(Patient.thfee15d.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.thfee16a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.thfee16a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.thfee16c.value="";
 }
}
if(!isWhitespace(Patient.thfee16c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.thfee16c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.thfee16d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
trim(Patient.thfee16d.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.thfee17a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.thfee17a.value) + "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.thfee17c.value="";
 }
}
if(!isWhitespace(Patient.thfee17c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.thfee17c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.thfee17d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
trim(Patient.thfee17d.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.thfee18a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.thfee18a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.thfee18c.value="";
 }
}
if(!isWhitespace(Patient.thfee18c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.thfee18c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.thfee18d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
trim(Patient.thfee18d.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.thfee19a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.thfee19a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.thfee19c.value="";
 }
}
if(!isWhitespace(Patient.thfee19c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.thfee19c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.thfee19d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
trim(Patient.thfee19d.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.thfee20a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.thfee20a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.thfee20c.value="";
 }
}
if(!isWhitespace(Patient.thfee20c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.thfee20c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.thfee20d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
trim(Patient.thfee20d.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.thfee21a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.thfee21a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.thfee21c.value="";
 }
}
if(!isWhitespace(Patient.thfee21c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.thfee21c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.thfee21d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
trim(Patient.thfee21d.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.thfee22a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.thfee22a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.thfee22c.value="";
 }
}
if(!isWhitespace(Patient.thfee22c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.thfee22c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.thfee22d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
trim(Patient.thfee22d.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.thfee23a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.thfee23a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.thfee23c.value="";
 }
}
if(!isWhitespace(Patient.thfee23c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.thfee23c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.thfee23d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
trim(Patient.thfee23d.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.thfee24a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.thfee24a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.thfee24c.value="";
 }
}
if(!isWhitespace(Patient.thfee24c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.thfee24c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.thfee24d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
trim(Patient.thfee24d.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.thfee25a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.thfee25a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.thfee25c.value="";
 }
}
if(!isWhitespace(Patient.thfee25c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.thfee25c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.thfee25d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
trim(Patient.thfee25d.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.thfee26a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.thfee26a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.thfee26c.value="";
 }
}
if(!isWhitespace(Patient.thfee26c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.thfee26c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.thfee26d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
trim(Patient.thfee26d.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.thfee27a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.thfee27a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.thfee27c.value="";
 }
}
if(!isWhitespace(Patient.thfee27c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.thfee27c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.thfee27d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
trim(Patient.thfee27d.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.thfee28a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.thfee28a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.thfee28c.value="";
 }
}
if(!isWhitespace(Patient.thfee28c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.thfee28c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.thfee28d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
trim(Patient.thfee28d.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.thfee29a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.thfee29a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.thfee29c.value="";
 }
}
if(!isWhitespace(Patient.thfee29c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.thfee29c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.thfee29d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
trim(Patient.thfee29d.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.thfee30a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.thfee30a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.thfee30c.value="";
 }
}
if(!isWhitespace(Patient.thfee30c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.thfee30c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.thfee30d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
trim(Patient.thfee30d.value) + "&nbsp;&nbsp;</td></tr>\n"
}

///  print Keyin Misc.Items for both SJOG IFC and Fees Estimate

if(!isWhitespace(Patient.msfee01a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.msfee01a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.msfee01c.value="";
 }
}
if(!isWhitespace(Patient.msfee01c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.msfee01c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"

Patient.itemamnt.value="0.00";
if(!isWhitespace(Patient.msfee01d.value)) {
   Patient.itemamnt.value=Patient.msfee01d.value;
   if (trim(Patient.msfee01d.value) < 0) {
    DocumentHTML+= "-$"
    Patient.itemamnt.value=(parseFloat(Patient.msfee01d.value) * -1)
    RoundNumber(Patient.itemamnt,2);
   } else { 
    DocumentHTML+= "$"
   }
}
DocumentHTML+=
trim(Patient.itemamnt.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.msfee02a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.msfee02a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.msfee02c.value="";
 }
}
if(!isWhitespace(Patient.msfee02c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.msfee02c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
Patient.itemamnt.value="0.00";
if(!isWhitespace(Patient.msfee02d.value)) {
   Patient.itemamnt.value=Patient.msfee02d.value;
   if (trim(Patient.msfee02d.value) < 0) {
    DocumentHTML+= "-$"
    Patient.itemamnt.value=(parseFloat(Patient.msfee02d.value) * -1)
    RoundNumber(Patient.itemamnt,2);
   } else {
    DocumentHTML+= "$"
   }
}
DocumentHTML+=
trim(Patient.itemamnt.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.msfee03a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.msfee03a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.msfee03c.value="";
 }
}
if(!isWhitespace(Patient.msfee03c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.msfee03c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
Patient.itemamnt.value="0.00";
if(!isWhitespace(Patient.msfee03d.value)) {
   Patient.itemamnt.value=Patient.msfee03d.value;
   if (trim(Patient.msfee03d.value) < 0) {
    DocumentHTML+= "-$"
    Patient.itemamnt.value=(parseFloat(Patient.msfee03d.value) * -1)
    RoundNumber(Patient.itemamnt,2);
   } else {
    DocumentHTML+= "$"
   }
}
DocumentHTML+=
trim(Patient.itemamnt.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.msfee04a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.msfee04a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.msfee04c.value="";
 }
}
if(!isWhitespace(Patient.msfee04c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.msfee04c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
Patient.itemamnt.value="0.00";
if(!isWhitespace(Patient.msfee04d.value)) {
   Patient.itemamnt.value=Patient.msfee04d.value;
   if (trim(Patient.msfee04d.value) < 0) {
    DocumentHTML+= "-$"
    Patient.itemamnt.value=(parseFloat(Patient.msfee04d.value) * -1)
    RoundNumber(Patient.itemamnt,2);
   } else {
    DocumentHTML+= "$"
   }
}
DocumentHTML+=
trim(Patient.itemamnt.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.msfee05a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.msfee05a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.msfee05c.value="";
 }
}
if(!isWhitespace(Patient.msfee05c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.msfee05c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
Patient.itemamnt.value="0.00";
if(!isWhitespace(Patient.msfee05d.value)) {
   Patient.itemamnt.value=Patient.msfee05d.value;
   if (trim(Patient.msfee05d.value) < 0) {
    DocumentHTML+= "-$"
    Patient.itemamnt.value=(parseFloat(Patient.msfee05d.value) * -1)
    RoundNumber(Patient.itemamnt,2);
   } else {
    DocumentHTML+= "$"
   }
}
DocumentHTML+=
trim(Patient.itemamnt.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.msfee06a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.msfee06a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.msfee06c.value="";
 }
}
if(!isWhitespace(Patient.msfee06c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.msfee06c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
Patient.itemamnt.value="0.00";
if(!isWhitespace(Patient.msfee06d.value)) {
   Patient.itemamnt.value=Patient.msfee06d.value;
   if (trim(Patient.msfee06d.value) < 0) {
    DocumentHTML+= "-$"
    Patient.itemamnt.value=(parseFloat(Patient.msfee06d.value) * -1)
    RoundNumber(Patient.itemamnt,2);
   } else {
    DocumentHTML+= "$"
   }
}
DocumentHTML+=
trim(Patient.itemamnt.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.msfee07a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.msfee07a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.msfee07c.value="";
 }
}
if(!isWhitespace(Patient.msfee07c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.msfee07c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
Patient.itemamnt.value="0.00";
if(!isWhitespace(Patient.msfee07d.value)) {
   Patient.itemamnt.value=Patient.msfee07d.value;
   if (trim(Patient.msfee07d.value) < 0) {
    DocumentHTML+= "-$"
    Patient.itemamnt.value=(parseFloat(Patient.msfee07d.value) * -1)
    RoundNumber(Patient.itemamnt,2);
   } else {
    DocumentHTML+= "$"
   }
}
DocumentHTML+=
trim(Patient.itemamnt.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.msfee08a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.msfee08a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.msfee08c.value="";
 }
}
if(!isWhitespace(Patient.msfee08c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.msfee08c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
Patient.itemamnt.value="0.00";
if(!isWhitespace(Patient.msfee08d.value)) {
   Patient.itemamnt.value=Patient.msfee08d.value;
   if (trim(Patient.msfee08d.value) < 0) {
    DocumentHTML+= "-$"
    Patient.itemamnt.value=(parseFloat(Patient.msfee08d.value) * -1)
    RoundNumber(Patient.itemamnt,2);
   } else {
    DocumentHTML+= "$"
   }
}
DocumentHTML+=
trim(Patient.itemamnt.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.msfee09a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.msfee09a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.msfee09c.value="";
 }
}
if(!isWhitespace(Patient.msfee09c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.msfee09c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
Patient.itemamnt.value="0.00";
if(!isWhitespace(Patient.msfee09d.value)) {
   Patient.itemamnt.value=Patient.msfee09d.value;
   if (trim(Patient.msfee09d.value) < 0) {
    DocumentHTML+= "-$"
    Patient.itemamnt.value=(parseFloat(Patient.msfee09d.value) * -1)
    RoundNumber(Patient.itemamnt,2);
   } else {
    DocumentHTML+= "$"
   }
}
DocumentHTML+=
trim(Patient.itemamnt.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.msfee10a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.msfee10a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.msfee10c.value="";
 }
}
if(!isWhitespace(Patient.msfee10c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.msfee10c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
Patient.itemamnt.value="0.00";
if(!isWhitespace(Patient.msfee10d.value)) {
   Patient.itemamnt.value=Patient.msfee10d.value;
   if (trim(Patient.msfee10d.value) < 0) {
    DocumentHTML+= "-$"
    Patient.itemamnt.value=(parseFloat(Patient.msfee10d.value) * -1)
    RoundNumber(Patient.itemamnt,2);
   } else {
    DocumentHTML+= "$"
   }
}
DocumentHTML+=
trim(Patient.itemamnt.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.msfee11a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.msfee11a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.msfee11c.value="";
 }
}
if(!isWhitespace(Patient.msfee11c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.msfee11c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
Patient.itemamnt.value="0.00";
if(!isWhitespace(Patient.msfee11d.value)) {
   Patient.itemamnt.value=Patient.msfee11d.value;
   if (trim(Patient.msfee11d.value) < 0) {
    DocumentHTML+= "-$"
    Patient.itemamnt.value=(parseFloat(Patient.msfee11d.value) * -1)
    RoundNumber(Patient.itemamnt,2);
   } else {
    DocumentHTML+= "$"
   }
}
DocumentHTML+=
trim(Patient.itemamnt.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.msfee12a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.msfee12a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.msfee12c.value="";
 }
}
if(!isWhitespace(Patient.msfee12c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.msfee12c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
Patient.itemamnt.value="0.00";
if(!isWhitespace(Patient.msfee12d.value)) {
   Patient.itemamnt.value=Patient.msfee12d.value;
   if (trim(Patient.msfee12d.value) < 0) {
    DocumentHTML+= "-$"
    Patient.itemamnt.value=(parseFloat(Patient.msfee12d.value) * -1)
    RoundNumber(Patient.itemamnt,2);
   } else {
    DocumentHTML+= "$"
   }
}
DocumentHTML+=
trim(Patient.itemamnt.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.msfee13a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.msfee13a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.msfee13c.value="";
 }
}
if(!isWhitespace(Patient.msfee13c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.msfee13c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
Patient.itemamnt.value="0.00";
if(!isWhitespace(Patient.msfee13d.value)) {
   Patient.itemamnt.value=Patient.msfee13d.value;
   if (trim(Patient.msfee13d.value) < 0) {
    DocumentHTML+= "-$"
    Patient.itemamnt.value=(parseFloat(Patient.msfee13d.value) * -1)
    RoundNumber(Patient.itemamnt,2);
   } else {
    DocumentHTML+= "$"
   }
}
DocumentHTML+=
trim(Patient.itemamnt.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.msfee14a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.msfee14a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.msfee14c.value="";
 }
}
if(!isWhitespace(Patient.msfee14c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.msfee14c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
Patient.itemamnt.value="0.00";
if(!isWhitespace(Patient.msfee14d.value)) {
   Patient.itemamnt.value=Patient.msfee14d.value;
   if (trim(Patient.msfee14d.value) < 0) {
    DocumentHTML+= "-$"
    Patient.itemamnt.value=(parseFloat(Patient.msfee14d.value) * -1)
    RoundNumber(Patient.itemamnt,2);
   } else {
    DocumentHTML+= "$"
   }
}
DocumentHTML+=
trim(Patient.itemamnt.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.msfee15a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.msfee15a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.msfee15c.value="";
 }
}
if(!isWhitespace(Patient.msfee15c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.msfee15c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
Patient.itemamnt.value="0.00";
if(!isWhitespace(Patient.msfee15d.value)) {
   Patient.itemamnt.value=Patient.msfee15d.value;
   if (trim(Patient.msfee15d.value) < 0) {
    DocumentHTML+= "-$"
    Patient.itemamnt.value=(parseFloat(Patient.msfee15d.value) * -1)
    RoundNumber(Patient.itemamnt,2);
   } else {
    DocumentHTML+= "$"
   }
}
DocumentHTML+=
trim(Patient.itemamnt.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.msfee16a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.msfee16a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.msfee16c.value="";
 }
}
if(!isWhitespace(Patient.msfee16c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.msfee16c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
Patient.itemamnt.value="0.00";
if(!isWhitespace(Patient.msfee16d.value)) {
   Patient.itemamnt.value=Patient.msfee16d.value;
   if (trim(Patient.msfee16d.value) < 0) {
    DocumentHTML+= "-$"
    Patient.itemamnt.value=(parseFloat(Patient.msfee16d.value) * -1)
    RoundNumber(Patient.itemamnt,2);
   } else {
    DocumentHTML+= "$"
   }
}
DocumentHTML+=
trim(Patient.itemamnt.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.msfee17a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.msfee17a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.msfee17c.value="";
 }
}
if(!isWhitespace(Patient.msfee17c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.msfee17c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
Patient.itemamnt.value="0.00";
if(!isWhitespace(Patient.msfee17d.value)) {
   Patient.itemamnt.value=Patient.msfee17d.value;
   if (trim(Patient.msfee17d.value) < 0) {
    DocumentHTML+= "-$"
    Patient.itemamnt.value=(parseFloat(Patient.msfee17d.value) * -1)
    RoundNumber(Patient.itemamnt,2);
   } else {
    DocumentHTML+= "$"
   }
}
DocumentHTML+=
trim(Patient.itemamnt.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.msfee18a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.msfee18a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.msfee18c.value="";
 }
}
if(!isWhitespace(Patient.msfee18c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.msfee18c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
Patient.itemamnt.value="0.00";
if(!isWhitespace(Patient.msfee18d.value)) {
   Patient.itemamnt.value=Patient.msfee18d.value;
   if (trim(Patient.msfee18d.value) < 0) {
    DocumentHTML+= "-$"
    Patient.itemamnt.value=(parseFloat(Patient.msfee18d.value) * -1)
    RoundNumber(Patient.itemamnt,2);
   } else {
    DocumentHTML+= "$"
   }
}
DocumentHTML+=
trim(Patient.itemamnt.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.msfee19a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.msfee19a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.msfee19c.value="";
 }
}
if(!isWhitespace(Patient.msfee19c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.msfee19c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
Patient.itemamnt.value="0.00";
if(!isWhitespace(Patient.msfee19d.value)) {
   Patient.itemamnt.value=Patient.msfee19d.value;
   if (trim(Patient.msfee19d.value) < 0) {
    DocumentHTML+= "-$"
    Patient.itemamnt.value=(parseFloat(Patient.msfee19d.value) * -1)
    RoundNumber(Patient.itemamnt,2);
   } else {
    DocumentHTML+= "$"
   }
}
DocumentHTML+=
trim(Patient.itemamnt.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.msfee20a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.msfee20a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.msfee20c.value="";
 }
}
if(!isWhitespace(Patient.msfee20c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.msfee20c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
Patient.itemamnt.value="0.00";
if(!isWhitespace(Patient.msfee20d.value)) {
   Patient.itemamnt.value=Patient.msfee20d.value;
   if (trim(Patient.msfee20d.value) < 0) {
    DocumentHTML+= "-$"
    Patient.itemamnt.value=(parseFloat(Patient.msfee20d.value) * -1)
    RoundNumber(Patient.itemamnt,2);
   } else {
    DocumentHTML+= "$"
   }
}
DocumentHTML+=
trim(Patient.itemamnt.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.msfee21a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.msfee21a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.msfee21c.value="";
 }
}
if(!isWhitespace(Patient.msfee21c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.msfee21c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
Patient.itemamnt.value="0.00";
if(!isWhitespace(Patient.msfee21d.value)) {
   Patient.itemamnt.value=Patient.msfee21d.value;
   if (trim(Patient.msfee21d.value) < 0) {
    DocumentHTML+= "-$"
    Patient.itemamnt.value=(parseFloat(Patient.msfee21d.value) * -1)
    RoundNumber(Patient.itemamnt,2);
   } else {
    DocumentHTML+= "$"
   }
}
DocumentHTML+=
trim(Patient.itemamnt.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.msfee22a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.msfee22a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.msfee22c.value="";
 }
}
if(!isWhitespace(Patient.msfee22c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.msfee22c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
Patient.itemamnt.value="0.00";
if(!isWhitespace(Patient.msfee22d.value)) {
   Patient.itemamnt.value=Patient.msfee22d.value;
   if (trim(Patient.msfee22d.value) < 0) {
    DocumentHTML+= "-$"
    Patient.itemamnt.value=(parseFloat(Patient.msfee22d.value) * -1)
    RoundNumber(Patient.itemamnt,2);
   } else {
    DocumentHTML+= "$"
   }
}
DocumentHTML+=
trim(Patient.itemamnt.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.msfee23a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.msfee23a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.msfee23c.value="";
 }
}
if(!isWhitespace(Patient.msfee23c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.msfee23c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
Patient.itemamnt.value="0.00";
if(!isWhitespace(Patient.msfee23d.value)) {
   Patient.itemamnt.value=Patient.msfee23d.value;
   if (trim(Patient.msfee23d.value) < 0) {
    DocumentHTML+= "-$"
    Patient.itemamnt.value=(parseFloat(Patient.msfee23d.value) * -1)
    RoundNumber(Patient.itemamnt,2);
   } else {
    DocumentHTML+= "$"
   }
}
DocumentHTML+=
trim(Patient.itemamnt.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.msfee24a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.msfee24a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.msfee24c.value="";
 }
}
if(!isWhitespace(Patient.msfee24c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.msfee24c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
Patient.itemamnt.value="0.00";
if(!isWhitespace(Patient.msfee24d.value)) {
   Patient.itemamnt.value=Patient.msfee24d.value;
   if (trim(Patient.msfee24d.value) < 0) {
    DocumentHTML+= "-$"
    Patient.itemamnt.value=(parseFloat(Patient.msfee24d.value) * -1)
    RoundNumber(Patient.itemamnt,2);
   } else {
    DocumentHTML+= "$"
   }
}
DocumentHTML+=
trim(Patient.itemamnt.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.msfee25a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.msfee25a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.msfee25c.value="";
 }
}
if(!isWhitespace(Patient.msfee25c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.msfee25c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
Patient.itemamnt.value="0.00";
if(!isWhitespace(Patient.msfee25d.value)) {
   Patient.itemamnt.value=Patient.msfee25d.value;
   if (trim(Patient.msfee25d.value) < 0) {
    DocumentHTML+= "-$"
    Patient.itemamnt.value=(parseFloat(Patient.msfee25d.value) * -1)
    RoundNumber(Patient.itemamnt,2);
   } else {
    DocumentHTML+= "$"
   }
}
DocumentHTML+=
trim(Patient.itemamnt.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.msfee26a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.msfee26a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.msfee26c.value="";
 }
}
if(!isWhitespace(Patient.msfee26c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.msfee26c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
Patient.itemamnt.value="0.00";
if(!isWhitespace(Patient.msfee26d.value)) {
   Patient.itemamnt.value=Patient.msfee26d.value;
   if (trim(Patient.msfee26d.value) < 0) {
    DocumentHTML+= "-$"
    Patient.itemamnt.value=(parseFloat(Patient.msfee26d.value) * -1)
    RoundNumber(Patient.itemamnt,2);
   } else {
    DocumentHTML+= "$"
   }
}
DocumentHTML+=
trim(Patient.itemamnt.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.msfee27a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.msfee27a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.msfee27c.value="";
 }
}
if(!isWhitespace(Patient.msfee27c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.msfee27c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
Patient.itemamnt.value="0.00";
if(!isWhitespace(Patient.msfee27d.value)) {
   Patient.itemamnt.value=Patient.msfee27d.value;
   if (trim(Patient.msfee27d.value) < 0) {
    DocumentHTML+= "-$"
    Patient.itemamnt.value=(parseFloat(Patient.msfee27d.value) * -1)
    RoundNumber(Patient.itemamnt,2);
   } else {
    DocumentHTML+= "$"
   }
}
DocumentHTML+=
trim(Patient.itemamnt.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.msfee28a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.msfee28a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.msfee28c.value="";
 }
}
if(!isWhitespace(Patient.msfee28c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.msfee28c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
Patient.itemamnt.value="0.00";
if(!isWhitespace(Patient.msfee28d.value)) {
   Patient.itemamnt.value=Patient.msfee28d.value;
   if (trim(Patient.msfee28d.value) < 0) {
    DocumentHTML+= "-$"
    Patient.itemamnt.value=(parseFloat(Patient.msfee28d.value) * -1)
    RoundNumber(Patient.itemamnt,2);
   } else {
    DocumentHTML+= "$"
   }
}
DocumentHTML+=
trim(Patient.itemamnt.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.msfee29a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.msfee29a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.msfee29c.value="";
 }
}
if(!isWhitespace(Patient.msfee29c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.msfee29c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
Patient.itemamnt.value="0.00";
if(!isWhitespace(Patient.msfee29d.value)) {
   Patient.itemamnt.value=Patient.msfee29d.value;
   if (trim(Patient.msfee29d.value) < 0) {
    DocumentHTML+= "-$"
    Patient.itemamnt.value=(parseFloat(Patient.msfee29d.value) * -1)
    RoundNumber(Patient.itemamnt,2);
   } else {
    DocumentHTML+= "$"
   }
}
DocumentHTML+=
trim(Patient.itemamnt.value) + "&nbsp;&nbsp;</td></tr>\n"
}

if(!isWhitespace(Patient.msfee30a.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.msfee30a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.msfee30c.value="";
 }
}
if(!isWhitespace(Patient.msfee30c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.msfee30c.value) + "&nbsp;&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
Patient.itemamnt.value="0.00";
if(!isWhitespace(Patient.msfee30d.value)) {
   Patient.itemamnt.value=Patient.msfee30d.value;
   if (trim(Patient.msfee30d.value) < 0) {
    DocumentHTML+= "-$"
    Patient.itemamnt.value=(parseFloat(Patient.msfee30d.value) * -1)
    RoundNumber(Patient.itemamnt,2);
   } else {
    DocumentHTML+= "$"
   }
}
DocumentHTML+=
trim(Patient.itemamnt.value) + "&nbsp;&nbsp;</td></tr>\n"
}

//Prosthetics

if((Patient.festflag.value=="0") &&
   (document.UpdateForm!=undefined)) {
    if(UpdateForm.ptelg008.value == "1") {

if(!isWhitespace(Patient.prostcod.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.prostcod.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td class=calc1>"

//if ((document.UpdateForm!=undefined) && (UpdateForm.selfinsr.value=="1")) {
DocumentHTML+=  "&nbsp;</td>\n" + "<td class=calc1>"
//} else {
//if(!isWhitespace(Patient.prostamt.value)) { DocumentHTML+= "$"}
//DocumentHTML+=
// trim(Patient.prostamt.value) + "&nbsp;</td>\n" +
//"<td class=calc1>"
//}

DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.prostamt.value)) { DocumentHTML+= "$"}
  DocumentHTML+=
trim(Patient.prostamt.value) + "&nbsp;</td></tr>\n"
                                 "&nbsp;</td></tr>\n"
}

//Pharmacy 
if(!isWhitespace(Patient.pharmcod.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.pharmcod.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td class=calc1>"

//if ((document.UpdateForm!=undefined) && (UpdateForm.selfinsr.value=="1")) {
DocumentHTML+=  "&nbsp;</td>\n" + "<td class=calc1>"
//} else {
//if(!isWhitespace(Patient.pharmamt.value)) { DocumentHTML+= "$"}
//DocumentHTML+=
// trim(Patient.pharmamt.value) + "&nbsp;</td>\n" +
//"<td class=calc1>"
//}

DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.pharmamt.value)) { DocumentHTML+= "$"}
DocumentHTML+=
trim(Patient.pharmamt.value) + "&nbsp;&nbsp;</td></tr>\n"
}

//Consumables
if(!isWhitespace(Patient.consmcod.value)) {
DocumentHTML+=
"<tr><td class=calc1 align=left>" +
 trim(Patient.consmcod.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
DocumentHTML+= "&nbsp;</td>\n" +
"<td class=calc1>"
//if ((document.UpdateForm!=undefined) && (UpdateForm.selfinsr.value=="1")) {
DocumentHTML+=  "&nbsp;</td>\n" + "<td class=calc1>"
//} else {
//if(!isWhitespace(Patient.consmamt.value)) { DocumentHTML+= "$"}
//DocumentHTML+=
 //trim(Patient.consmamt.value) + "&nbsp;</td>\n" +
//"<td class=calc1>"
//}
DocumentHTML+= "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.consmamt.value)) { DocumentHTML+= "$"}
DocumentHTML+=
trim(Patient.consmamt.value) + "&nbsp;&nbsp;</td></tr>\n"
}

 } }

}

DocumentHTML+=
"<tr><td align=center class=SectHead1><b>Accommodation</td>\n" + 
"<td class=SectHead1><b>&nbsp;</td>\n" +
"<td class=SectHead1><b>&nbsp;</td>\n" +
"<td align=center class=SectHead1><b>Per Day</td>\n" +
"<td align=center class=SectHead1><b>Maximum</td></tr>\n"
//
//if(!isWhitespace(Patient.hbfee01a.value)) {

DocumentHTML+=
"<tr><td class=calc>" +
 trim(Patient.hbfee01a.value) + "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc>"
if(!isWhitespace(Patient.hbfee01b.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee01b.value) + "&nbsp;&nbsp;</td>\n" +
"<td style='text-align:right' class=calc>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.hbfee01c.value="";
 }
}
if(!isWhitespace(Patient.hbfee01c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee01c.value) + "&nbsp;&nbsp;</td>\n" +

"<td style='text-align:right' class=calc>"
if(!isWhitespace(Patient.hbfee01d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee01d.value) + "&nbsp;&nbsp;</td>\n" +
"<td style='text-align:right' class=calc>"
if(!isWhitespace(Patient.hbfee01e.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee01e.value) + "&nbsp;&nbsp;</td></tr>\n"
//}
//
//Shared Room
//if(!isWhitespace(Patient.hbfee02a.value)) {
DocumentHTML+=
"<tr><td class=calc1>" +
 trim(Patient.hbfee02a.value) + "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.hbfee02b.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee02b.value) + "&nbsp;&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.hbfee02c.value="";
 }
}
if(!isWhitespace(Patient.hbfee02c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee02c.value) + "&nbsp;&nbsp;</td>\n" +

"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.hbfee02d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee02d.value) + "&nbsp;&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.hbfee02e.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee02e.value) + "&nbsp;&nbsp;</td></tr>\n"
//}
//
///Private Room
//if(!isWhitespace(Patient.hbfee03a.value)) {
DocumentHTML+=
"<tr><td class=calc1>" +
 trim(Patient.hbfee03a.value) + "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.hbfee03b.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee03b.value) + "&nbsp;&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.hbfee03c.value="";
 }
}
if(!isWhitespace(Patient.hbfee03c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee03c.value) + "&nbsp;&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"

// Private Room Patient Cost
if(!isWhitespace(Patient.hbfee03d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee03d.value) + "&nbsp;&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.hbfee03e.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee03e.value) + "&nbsp;&nbsp;</td></tr>\n"
//}
//
if(!isWhitespace(Patient.hbfee04a.value)) {
DocumentHTML+=
"<tr><td class=calc1>" +
 trim(Patient.hbfee04a.value) + "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.hbfee04b.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee04b.value) + "&nbsp;&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.hbfee04c.value="";
 }
}
if(!isWhitespace(Patient.hbfee04c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee04c.value) + "&nbsp;&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.hbfee04d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee04d.value) + "&nbsp;&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.hbfee04e.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee04e.value) + "&nbsp;&nbsp;</td></tr>\n"
}
//
if(!isWhitespace(Patient.hbfee05a.value)) {
DocumentHTML+=
"<tr><td class=calc1>" + 
 trim(Patient.hbfee05a.value) + "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.hbfee05b.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee05b.value) + "&nbsp;&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.hbfee05c.value="";
 }
}
if(!isWhitespace(Patient.hbfee05c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee05c.value) + "&nbsp;&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.hbfee05d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee05d.value) + "&nbsp;&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.hbfee05e.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee05e.value) + "&nbsp;&nbsp;</td></tr>\n"
}
//
if(!isWhitespace(Patient.hbfee06a.value)) {
DocumentHTML+=
"<tr><td class=calc1>" +
 trim(Patient.hbfee06a.value) + "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.hbfee06b.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee06b.value) + "&nbsp;&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.hbfee06c.value="";
 }
}
if(!isWhitespace(Patient.hbfee06c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee06c.value) + "&nbsp;&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.hbfee06d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee06d.value) + "&nbsp;&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.hbfee06e.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee06e.value) + "&nbsp;&nbsp;</td></tr>\n"
}
//
if(!isWhitespace(Patient.hbfee07a.value)) {
DocumentHTML+=
"<tr><td class=calc1>" +
 trim(Patient.hbfee07a.value) + "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.hbfee07b.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee07b.value) + "&nbsp;&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.hbfee07c.value="";
 }
}
if(!isWhitespace(Patient.hbfee07c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee07c.value) + "&nbsp;&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.hbfee07d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee07d.value) + "&nbsp;&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.hbfee07e.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee07e.value) + "&nbsp;&nbsp;</td></tr>\n"
}
//
if(!isWhitespace(Patient.hbfee08a.value)) {
DocumentHTML+=
"<tr><td class=calc1>" +
 trim(Patient.hbfee08a.value) + "&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.hbfee08b.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee08b.value) + "&nbsp;&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if (document.UpdateForm!=undefined) {
 if (UpdateForm.selfinsr.value=="1") {
    Patient.hbfee08c.value="";
 }
}
if(!isWhitespace(Patient.hbfee08c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee08c.value) + "&nbsp;&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.hbfee08d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee08d.value) + "&nbsp;&nbsp;</td>\n" +
"<td style='text-align:right' class=calc1>"
if(!isWhitespace(Patient.hbfee08e.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee08e.value) + "&nbsp;&nbsp;</td></tr>\n"
//   end of Accommodation // SJOG
}

// Do not Print Theatre from patifcaf file for SJOG IFC
// IFC Theatre Details

if(Patient.festflag.value!="0" && Patient.festflag.value!="1") { 
if(!isWhitespace(Patient.htfee01a.value)) {
DocumentHTML+=
"<tr><td class=calc><b>" +
 trim(Patient.htfee01a.value) + "&nbsp;</td>\n" +
"<td class=calc>"
if(!isWhitespace(Patient.htfee01b.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.htfee01b.value) + "&nbsp;</td>\n" +
"<td class=calc>"
if(!isWhitespace(Patient.htfee01c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.htfee01c.value) + "&nbsp;</td>\n" +
"<td class=calc>"
if(!isWhitespace(Patient.htfee01d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.htfee01d.value) + "&nbsp;</td>\n" +
"<td class=calc>"
if(!isWhitespace(Patient.htfee01e.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.htfee01e.value) + "&nbsp;</td></tr>\n"
}
//
// IFC Other Consumables
if(!isWhitespace(Patient.hofee01a.value)) {
DocumentHTML+=
"<tr><td class=calc><b>" +
 trim(Patient.hofee01a.value) + "&nbsp;</td>\n" + 
"<td class=calc>"
if(!isWhitespace(Patient.hofee01b.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hofee01b.value) + "&nbsp;</td>\n" +
"<td class=calc>"
if(!isWhitespace(Patient.hofee01c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hofee01c.value) + "&nbsp;</td>\n" +
"<td class=calc>"
if(!isWhitespace(Patient.hofee01d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hofee01d.value) + "&nbsp;</td>\n" +
"<td class=calc>"
if(!isWhitespace(Patient.hofee01e.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hofee01e.value) + "&nbsp;</td></tr>\n"
}
//
// IFC Prosthesis
if(!isWhitespace(Patient.hpfee01a.value)) {
DocumentHTML+=
"<tr><td class=calc><b>" +
 trim(Patient.hpfee01a.value) + "&nbsp;</td>\n" + 
"<td class=calc>"
if(!isWhitespace(Patient.hpfee01b.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hpfee01b.value) + "&nbsp;</td>\n" +
"<td class=calc>"
if(!isWhitespace(Patient.hpfee01c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hpfee01c.value) + "&nbsp;</td>\n" +
"<td class=calc>"
if(!isWhitespace(Patient.hpfee01d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hpfee01d.value) + "&nbsp;</td>\n" +
"<td class=calc>"
if(!isWhitespace(Patient.hpfee01e.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hpfee01e.value) + "&nbsp;</td></tr>\n"
}
//
}

if(Patient.festflag.value=="0") { 
//
// IFC Co-Payments
DocumentHTML+=
"<tr><td class=calc><b>Co-Payment</td>\n" + 
"<td class=calc><b>&nbsp;</td>\n" +
"<td class=calc><b>&nbsp;</td>\n" +
"<td class=calc><b>&nbsp;</td>\n" +
"<td class=calc><b>&nbsp;</td></tr>\n"

//if(Patient.festflag.value=="0" &&
//  parseFloat(UpdateForm.ptelg002.value)>0) {
  DocumentHTML+="<tr><td class=calc1>Private</td>\n" +
//"<td class=calc1>&nbsp;" + UpdateForm.ptelg019.value + "</td>\n" +
//"<td class=calc1>&nbsp;" + UpdateForm.expcdlos.value + "</td>\n" +
  "<td class=calc1>&nbsp;" + "" + "</td>\n" +
  "<td class=calc1>&nbsp;" + "" + "</td>\n"
//if (checkInd.search(/V/g) >= 0) {
//  DocumentHTML+=
//  "<td class=calc1>&nbsp;" + "" + "</td>\n" +
//  "<td class=calc1>&nbsp;" + "" + "</td></tr>\n"    // blank for DVA(HEA only)
//} else {
    DocumentHTML+=
    "<td style='text-align:right' class=calc1>&nbsp;"
    if(!isWhitespace(UpdateForm.ptelg002.value)) { DocumentHTML+= "$"}
    DocumentHTML+=
    Math.round(UpdateForm.ptelg002.value) + ".00" + "&nbsp;&nbsp;</td>\n"
    if (parseFloat(UpdateForm.priexlos.value)>0) {
    DocumentHTML+=
      "<td style='text-align:right' class=calc1>&nbsp;$" + 
      Math.round(UpdateForm.priexlos.value) + ".00" + "&nbsp;&nbsp;</td></tr>\n"
    } else {
    DocumentHTML+=
      "<td style='text-align:right' class=calc1>&nbsp;" + "" + "</td></tr>\n"
    }
//}
//}
//if(Patient.festflag.value=="0" &&
//  parseFloat(UpdateForm.ptelg010.value)>0) {
  DocumentHTML+="<tr><td class=calc1>Shared</td>\n" +
//"<td class=calc1>&nbsp;" + UpdateForm.ptelg020.value + "</td>\n" +
//"<td class=calc1>&nbsp;" + UpdateForm.expcdlos.value + "</td>\n" +
  "<td class=calc1>&nbsp;" + "" + "</td>\n" +
  "<td class=calc1>&nbsp;" + "" + "</td>\n" +
  "<td style='text-align:right' class=calc1>&nbsp;"
    if(!isWhitespace(UpdateForm.ptelg010.value)) { DocumentHTML+= "$"}
    DocumentHTML+=
    Math.round(UpdateForm.ptelg010.value) + ".00" + "&nbsp;&nbsp;</td>\n"
    if (parseFloat(UpdateForm.shaexlos.value)>0) {
    DocumentHTML+=
      "<td style='text-align:right' class=calc1>&nbsp;$" + 
      Math.round(UpdateForm.shaexlos.value) + ".00" + "&nbsp;&nbsp;</td></tr>\n"
    } else {
    DocumentHTML+=
      "<td style='text-align:right' class=calc1>&nbsp;" + "" + "</td></tr>\n"
    }
//}
//if(Patient.festflag.value=="0" &&
//  parseFloat(UpdateForm.ptelg025.value)>0) {
  DocumentHTML+="<tr><td class=calc1>Same Day</td>\n" +
//"<td class=calc1>&nbsp;" + UpdateForm.ptelg026.value + "</td>\n" +
//"<td class=calc1>&nbsp;" + UpdateForm.expcdlos.value + "</td>\n" +
  "<td class=calc1>&nbsp;" + "" + "</td>\n" +
  "<td class=calc1>&nbsp;" + "" + "</td>\n" +
  "<td style='text-align:right' class=calc1>&nbsp;"
    if(!isWhitespace(UpdateForm.ptelg025.value)) { DocumentHTML+= "$"}
    DocumentHTML+=
    Math.round(UpdateForm.ptelg025.value) + ".00" + "&nbsp;&nbsp;</td>\n"
    if (parseFloat(UpdateForm.sdyexlos.value)>0) {
    DocumentHTML+=
      "<td style='text-align:right' class=calc1>&nbsp;$" + 
      Math.round(UpdateForm.sdyexlos.value) + ".00" + "&nbsp;&nbsp;</td></tr>\n"
    } else {
    DocumentHTML+=
      "<td style='text-align:right' class=calc1>&nbsp;" + "" + "&nbsp;&nbsp;</td></tr>\n"
    }
//}
//if(Patient.festflag.value=="0" &&
//  parseFloat(UpdateForm.ptelg027.value)>0) {
    DocumentHTML+="<tr><td class=calc1>Hospital</td>\n" +
//"<td class=calc1>&nbsp;" + UpdateForm.ptelg028.value + "</td>\n" +
//"<td class=calc1>&nbsp;" + UpdateForm.expcdlos.value + "</td>\n" +
    "<td class=calc1>&nbsp;" + "" + "</td>\n" +
    "<td class=calc1>&nbsp;" + "" + "</td>\n" +
    "<td style='text-align:right' class=calc1>&nbsp;"
      if(!isWhitespace(UpdateForm.ptelg027.value)) { DocumentHTML+= "$"}
      DocumentHTML+=
      Math.round(UpdateForm.ptelg027.value) + ".00" + "&nbsp;&nbsp;</td>\n"
      if (parseFloat(UpdateForm.hosexlos.value)>0) {
      DocumentHTML+=
//      "<td style='text-align:right' class=calc1>&nbsp;" + UpdateForm.hosexlos.value + "</td></tr>\n"
        "<td style='text-align:right' class=calc1>&nbsp;$" + 
        Math.round(UpdateForm.hosexlos.value) + ".00" + "&nbsp;&nbsp;</td></tr>\n"
      } else {
      DocumentHTML+=
        "<td style='text-align:right' class=calc1>&nbsp;" + "" + "&nbsp;&nbsp;</td></tr>\n"
      }
//}
//if(Patient.festflag.value=="0" &&
//  parseFloat(UpdateForm.ptelg011.value)>0) {
    DocumentHTML+="<tr><td class=calc1>Theatre</td>\n" +
//"<td class=calc1>&nbsp;" + UpdateForm.ptelg021.value + "</td>\n" +
//"<td class=calc1>&nbsp;" + UpdateForm.expcdlos.value + "</td>\n" +
    "<td class=calc1>&nbsp;" + "" + "</td>\n" +
    "<td class=calc1>&nbsp;" + "" + "</td>\n" +
    "<td style='text-align:right' class=calc1>&nbsp;"
      if(!isWhitespace(UpdateForm.ptelg011.value)) { DocumentHTML+= "$"}
      DocumentHTML+=
      Math.round(UpdateForm.ptelg011.value) + ".00" + "&nbsp;&nbsp;</td>\n"
      if (parseFloat(UpdateForm.thtexlos.value)>0) {
      DocumentHTML+=
//      "<td class=calc1>&nbsp;" + UpdateForm.thtexlos.value + "</td></tr>\n"
        "<td style='text-align:right' class=calc1>&nbsp;$" + 
        Math.round(UpdateForm.thtexlos.value) + ".00" + "&nbsp;&nbsp;</td></tr>\n"
      } else {
      DocumentHTML+=
        "<td style='text-align:right' class=calc1>&nbsp;" + "" + "&nbsp;&nbsp;</td></tr>\n"
      }
//}
//if(Patient.festflag.value=="0" &&
//  parseFloat(UpdateForm.ptelg041.value)>0) {
  DocumentHTML+="<tr><td class=calc1>ICU / CCU / SCN</td>\n" +
//"<td class=calc1>&nbsp;" + UpdateForm.ptelg043.value + "</td>\n" +
//"<td class=calc1>&nbsp;" + UpdateForm.expcdlos.value + "</td>\n" +
  "<td class=calc1>&nbsp;" + "" + "</td>\n" +
  "<td class=calc1>&nbsp;" + "" + "</td>\n" +
  "<td style='text-align:right' class=calc1>&nbsp;"
    if(!isWhitespace(UpdateForm.ptelg041.value)) { DocumentHTML+= "$"}
    DocumentHTML+=
    Math.round(UpdateForm.ptelg041.value) + ".00" + "&nbsp;&nbsp;</td>\n"
    if (parseFloat(UpdateForm.icuexlos.value)>0) {
    DocumentHTML+=
      "<td style='text-align:right' class=calc1>&nbsp;$" + 
      Math.round(UpdateForm.icuexlos.value) + ".00" + "&nbsp;&nbsp;</td></tr>\n"
    } else {
    DocumentHTML+=
      "<td class=calc1>&nbsp;" + "" + "</td></tr>\n"
    }
//}
//
//////////////////////////////////////////////////////////////////////
//if ((document.UpdateForm!=undefined) && (Patient.festflag.value=="0")) {
//  if (UpdateForm.selfinsr.value=="1") {
//  DocumentHTML+="<tr><td class=calc1>&nbsp;" + "" + "</td>\n" +
//   "<td class=calc1><b>Out of Pocket</td>\n" +
//   "<td class=calc1>" + UpdateForm.ptelg034.value + "</td>\n"
//  } else {
//   DocumentHTML+="<tr><td class=calc1>&nbsp;" + "" + "</td>\n" +
//   "<td class=calc1>&nbsp;" + "" + "</td>\n" +
//   "<td class=calc1>&nbsp;" + "" + "</td>\n"
//  }
//} else {
     DocumentHTML+="<tr><td class=calc1>&nbsp;" + "" + "</td>\n" +
     "<td class=calc1>&nbsp;" + "" + "</td>\n" +
     "<td class=calc1>&nbsp;" + "" + "</td>\n"
//}
DocumentHTML+="<td class=calc1>&nbsp;</td>\n" +
              "<td class=calc1>&nbsp;</td></tr>\n"

//DocumentHTML+=
//"<tr><td>&nbsp;" + "" + "</td>\n" +
//"<td>&nbsp;" + "" + "</td>\n" +
//"<td>&nbsp;" + "" + "</td>\n" +
//"<td class=calc1><b>GST </td>\n" +
//"<td class=calc1>" + Patient.gsttotal.value + "</td></tr>\n"

} //  end of festflag=0 313842

if(Patient.festflag.value=="0" || Patient.festflag.value=="1") {  // 313842

//if ((document.UpdateForm!=undefined) && (Patient.festflag.value=="0")) {
//if (UpdateForm.selfinsr.value=="1") {
//DocumentHTML+=
// "<tr><td align=center class=calc><b>Out of Pocket</td>\n" +
//"<td class=calc>"
//DocumentHTML+= "&nbsp;</td>\n" +
//"<td class=calc>"
//DocumentHTML+= "&nbsp;</td>\n" +
//"<td class=calc>"
//DocumentHTML+= "&nbsp;</td>\n" +
// "<td align=right class=calc>&nbsp;" 
//  if(!isWhitespace(UpdateForm.ptelg034.value)) { DocumentHTML+= "$"}
//if (UpdateForm.ptelg034.value=="0") {
//  DocumentHTML+=
//   + 0.00 + "</td></tr>\n"
//  } else {
//  DocumentHTML+=
//   + UpdateForm.ptelg034.value + "</td></tr>\n"
//  }
//  }
//}

if(Patient.festflag.value=="1") {
 if(!isWhitespace(Patient.gsttotal.value)) { 
  DocumentHTML+="<tr><td class=calc1>GST</td>\n" +
     "<td class=calc1>&nbsp;</td>\n" +
     "<td class=calc1>&nbsp;</td>\n" +
     "<td class=calc1>&nbsp;</td>\n" +
     "<td style='text-align:right' class=calc1>$" + Patient.gsttotal.value + "&nbsp;&nbsp;</td></tr>\n"
 }
}
GetSJGTotal();

DocumentHTML+=
"<tr><td align=center class=SectHead1>TOTAL (Length of Stay)</td>\n" +

//"<td align=center class=SectHead1>$" + 
//  Math.round(Patient.estcostt.value) + ".00" + "</td>\n" +
"<td align=center class=SectHead1>&nbsp;" + "" + "</td>\n" +

"<td style='text-align:right' class=SectHead1>$" + 
  Math.round(Patient.estrebtt.value) + ".00" + "&nbsp;&nbsp;</td>\n" +
//          (Patient.estrebtt.value) + "</td>\n" +

"<td align=center class=SectHead1>&nbsp;" + "" + "</td>\n" +

//"<td align=center class=SectHead1>$" + Patient.estdaytt.value + "</td>\n" +
"<td style='text-align:right' class=SectHead1>$" + 
    Math.round(Patient.esttotal.value) + ".00" + "&nbsp;&nbsp;</td></tr>\n" +

//  (Patient.esttotal.value) + "&nbsp;&nbsp;</td></tr>\n" +


"</table></td></tr>\n"
} //  end of festflag=0 313842
///////////////////////////////////////////////////////////////////////////////
//
//if(Patient.festflag.value=="1") { // 313842
///  do not print the following for both SJOG IFC and Fees Estimate
/// ===============================================================
if(Patient.festflag.value!="1" && Patient.festflag.value!="0" ) { // 313842
DocumentHTML+=
"<tr><td colspan=6 align=left>&nbsp;</td></tr>\n" +
//
"<tr><td align=center colspan=6><table width=95% border=1 class=calc cellspacing=0>\n" +
"<tr><td>&nbsp;</td><td colspan=5 align=center class=SectHead3>\n" +
" ESTIMATED            </td></tr>\n" +
"<tr><td align=center class=SectHead3>Accommodation Type</td>\n" + 
"<td align=center class=SectHead3>Daily Room Rate</td>\n" + 
"<td align=center class=SectHead3>Maximum Cost</td>\n" + 
"<td align=center class=SectHead3>Length of Stay</td>\n" +
"<td align=center class=SectHead3>Fund Rebate</td>\n" +
"<td align=center class=SectHead3>Patient Cost</td></tr>\n"
//
if(Patient.festflag.value=="1") {
  DocumentHTML+="<tr><td>&nbsp;" + Patient.bdfee01u.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee01b.value + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=center>&nbsp;" + Patient.bdfee01s.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee01c.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee01t.value + "</td></tr>\n"
} else if(Patient.festflag.value=="0" &&
         parseFloat(UpdateForm.ptelg002.value)>0) {
  DocumentHTML+="<tr><td>&nbsp;Co-payment required - Private</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.ptelg002.value + "</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.ptelg019.value + "</td>\n" +
  "<td align=center>&nbsp;" + UpdateForm.expcdlos.value + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.priexlos.value + "</td></tr>\n"
}

if(Patient.festflag.value=="1") {
  DocumentHTML+="<tr><td>&nbsp;" + Patient.bdfee02u.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee02b.value + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=center>&nbsp;" + Patient.bdfee02s.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee02c.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee02t.value + "</td></tr>\n"
} else if(Patient.festflag.value=="0" &&
         parseFloat(UpdateForm.ptelg010.value)>0) {
  DocumentHTML+="<tr><td>&nbsp;Co-payment required - Shared</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.ptelg010.value + "</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.ptelg020.value + "</td>\n" +
  "<td align=center>&nbsp;" + UpdateForm.expcdlos.value + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.shaexlos.value + "</td></tr>\n"
}

if(Patient.festflag.value=="1") {
  DocumentHTML+="<tr><td>&nbsp;" + Patient.bdfee03u.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee03b.value + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=center>&nbsp;" + Patient.bdfee03s.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee03c.value + "</td>\n" +
 "<td align=right>&nbsp;" + Patient.bdfee03t.value + "</td></tr>\n"
} else if(Patient.festflag.value=="0" &&
         parseFloat(UpdateForm.ptelg025.value)>0) {
  DocumentHTML+="<tr><td>&nbsp;Co-payment required - Same day</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.ptelg025.value + "</td>\n" +
//  "<td align=right>&nbsp;" + UpdateForm.ptelg026.value + "</td>\n" +
  "<td align=right>&nbsp;</td>\n" +
  "<td align=center>&nbsp;" + UpdateForm.expcdlos.value + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.sdyexlos.value + "</td></tr>\n"
}

if(Patient.festflag.value=="1") {
  DocumentHTML+="<tr><td>&nbsp;" + Patient.bdfee04u.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee04b.value + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=center>&nbsp;" + Patient.bdfee04s.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee04c.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee04t.value + "</td></tr>\n"
} else if(Patient.festflag.value=="0" &&
         parseFloat(UpdateForm.ptelg027.value)>0) {
  DocumentHTML+="<tr><td>&nbsp;Co-payment required - Hospital</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.ptelg027.value + "</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.ptelg028.value + "</td>\n" +
  "<td align=center>&nbsp;" + UpdateForm.expcdlos.value + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.hosexlos.value + "</td></tr>\n"
}

if(Patient.festflag.value=="1") {
  DocumentHTML+="<tr><td>&nbsp;" + Patient.bdfee05u.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee05b.value + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=center>&nbsp;" + Patient.bdfee05s.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee05c.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee05t.value + "</td></tr>\n"
} else if(Patient.festflag.value=="0" &&
         parseFloat(UpdateForm.ptelg011.value)>0) {
  DocumentHTML+="<tr><td>&nbsp;Co-payment required - Theatre</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.ptelg011.value + "</td>\n" +
  "<td align=right>&nbsp;</td>\n" +
  "<td align=center>&nbsp;" + UpdateForm.expcdlos.value + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.thtexlos.value + "</td></tr>\n"
}

if(Patient.festflag.value=="1") {
  DocumentHTML+="<tr><td>&nbsp;" + Patient.bdfee06u.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee06b.value + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=center>&nbsp;" + Patient.bdfee06s.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee06c.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee06t.value + "</td></tr>\n"
} else if(Patient.festflag.value=="0" &&
         parseFloat(UpdateForm.ptelg041.value)>0) {
  DocumentHTML+="<tr><td>&nbsp;Co-payment required - ICU/CCU/SCN</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.ptelg041.value + "</td>\n" +
  "<td align=right>&nbsp;</td>\n" +
  "<td align=center>&nbsp;" + UpdateForm.expcdlos.value + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.icuexlos.value + "</td></tr>\n"
}

if((Patient.estimate!=undefined) &&
   (Patient.festflag.value=="1"))
 {
 if (document.UpdateForm!=undefined)  {

  if(parseFloat(UpdateForm.ptelg002.value)>0) {
  DocumentHTML+="<tr><td>&nbsp;Private Co-Payment</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.ptelg002.value + "</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.ptelg019.value + "</td>\n" +
  "<td align=center>&nbsp;" + UpdateForm.expcdlos.value + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.priexlos.value + "</td></tr>\n"
 }

  if(parseFloat(UpdateForm.ptelg010.value)>0) {
  DocumentHTML+="<tr><td>&nbsp;Shared Co-Payment</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.ptelg010.value + "</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.ptelg020.value + "</td>\n" +
  "<td align=center>&nbsp;" + UpdateForm.expcdlos.value + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.shaexlos.value + "</td></tr>\n"
 }
  if(parseFloat(UpdateForm.ptelg025.value)>0) {
  DocumentHTML+="<tr><td>&nbsp;Same Day Co-Payment</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.ptelg025.value + "</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.ptelg026.value + "</td>\n" +
  "<td align=center>&nbsp;" + UpdateForm.expcdlos.value + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.sdyexlos.value + "</td></tr>\n"
 }


  if(parseFloat(UpdateForm.ptelg027.value)>0) {
  DocumentHTML+="<tr><td>&nbsp;Hospital Co-Payment</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.ptelg027.value + "</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.ptelg028.value + "</td>\n" +
  "<td align=center>&nbsp;" + UpdateForm.expcdlos.value + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=right>&nbsp;" + UpdateForm.hosexlos.value + "</td></tr>\n"
 }

 }
}


// if(Patient.festflag.value=="1" && !isWhitespace(Patient.bdfee06u.value)) {
//   DocumentHTML+="<tr><td>&nbsp;" + Patient.bdfee06u.value + "</td>\n" +
//   "<td align=right>&nbsp;" + Patient.bdfee06b.value + "</td>\n" +
//   "<td>&nbsp;" + "" + "</td>\n" +
//   "<td align=center>&nbsp;" + Patient.bdfee06s.value + "</td>\n" +
//   "<td align=right>&nbsp;" + Patient.bdfee06c.value + "</td>\n" +
//   "<td align=right>&nbsp;" + Patient.bdfee06t.value + "</td></tr>\n"
// }

if(Patient.festflag.value=="1" && !isWhitespace(Patient.bdfee07u.value)) {
  DocumentHTML+="<tr><td>&nbsp;" + Patient.bdfee07u.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee07b.value + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=center>&nbsp;" + Patient.bdfee07s.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee07c.value + "</td>\n" +
  "<td align=right>&nbsp;" + Patient.bdfee07t.value + "</td></tr>\n"
}

if(Patient.estimate==undefined) {
 if(Patient.festflag.value=="1" && parseFloat(Patient.hospcpay.value)>0) {
   DocumentHTML+="<tr><td>Co-Payments to Hospital </td>\n" +
   "<td>&nbsp;" + "" + "</td>\n" +
   "<td>&nbsp;" + "" + "</td>\n" +
   "<td>&nbsp;" + "" + "</td>\n" +
   "<td>&nbsp;" + "" + "</td>\n" +
   "<td align=right>&nbsp;" + Patient.hospcpay.value + "</td></tr>\n"
 }
}

if (document.UpdateForm!=undefined) {
  if(Patient.festflag.value=="0" &&
     !isWhitespace( UpdateForm.ptelg031.value)) {
    DocumentHTML+="<tr><td> " + UpdateForm.ptelg031.value + "&nbsp;</td>\n" +
    "<td>&nbsp;" + "" + "</td>\n" +
    "<td>&nbsp;" + "" + "</td>\n" +
    "<td>&nbsp;" + "" + "</td>\n" +
    "<td>&nbsp;" + "" + "</td>\n" +
    "<td align=right>&nbsp;" + UpdateForm.ptelg032.value + "</td></tr>\n"
  }
} else {
  if(Patient.festflag.value=="0" &&
     !isWhitespace( Patient.ptelmdes.value)) {
    DocumentHTML+="<tr><td> " + Patient.ptelmdes.value + "&nbsp;</td>\n" +
    "<td>&nbsp;" + "" + "</td>\n" +
    "<td>&nbsp;" + "" + "</td>\n" +
    "<td>&nbsp;" + "" + "</td>\n" +
    "<td>&nbsp;" + "" + "</td>\n" +
    "<td align=right>&nbsp;" + Patient.ptelmamt.value + "</td></tr>\n"
  }
}

if(!isWhitespace(Patient.thfee01a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td><b>Theatre Fees </td>\n" +
"<td align=right>&nbsp;" + Patient.thfee01a.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee01c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee01d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee02a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee02a.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee02c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee02d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee03a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee03a.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee03c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee03d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee04a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee04a.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee04c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee04d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee05a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee05a.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee05c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee05d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee06a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee06a.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee06c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee06d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.msfee01a.value)) {
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td><b>Consumables </td>\n" +
"<td align=right>&nbsp;" + Patient.msfee01a.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee01c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee01d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.msfee02a.value)) {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee02a.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee02c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee02d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.msfee03a.value)) {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee03a.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee03c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee03d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.msfee04a.value)) {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee04a.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee04c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee04d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.msfee05a.value)) {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee05a.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee05c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee05d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.msfee06a.value)) {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee06a.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee06c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee06d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.msfee07a.value)) {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee07a.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee07c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee07d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.msfee08a.value)) {
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee08a.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee08c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.msfee08d.value + "</td></tr>\n"
}

// Display other fees if parameter is turned on
if(Patient.ptcnuofe.value=="1"){
if(Patient.othfee01 != undefined) {
 if(Patient.festflag.value=="1" && !isWhitespace(Patient.othfee01.value)) {
 DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td><b>Other Fees</td>\n" +
 "<td align=right>Surgeon Gap Amount</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>&nbsp;" + Patient.othfee01.value + "</td></tr>\n"
 }
 if(Patient.festflag.value=="1" && !isWhitespace(Patient.othfee02.value)) {
 DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>Assistant Gap Amount</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>&nbsp;" + Patient.othfee02.value + "</td></tr>\n"
 }
 if(Patient.festflag.value=="1" && !isWhitespace(Patient.othfee03.value)) {
 DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>Anaesthetist Gap Amount</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>&nbsp;" + Patient.othfee03.value + "</td></tr>\n"
 }
 if(Patient.festflag.value=="1" && !isWhitespace(Patient.othfee04.value)) {
 DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>ICU Intensivists</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>&nbsp;" + Patient.othfee04.value + "</td></tr>\n"
 }
 if(Patient.festflag.value=="1" && !isWhitespace(Patient.othfee05.value)) {
 DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>Physio (Initial Visit)</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>&nbsp;" + Patient.othfee05.value + "</td></tr>\n"
 }
 if(Patient.festflag.value=="1" && !isWhitespace(Patient.othfee06.value)) {
 DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>Physio (Subs Visit)</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>&nbsp;" + Patient.othfee06.value + "</td></tr>\n"
 }
 if(Patient.festflag.value=="1" && !isWhitespace(Patient.othfee07.value)) {
 DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>Radiology</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>&nbsp;" + Patient.othfee07.value + "</td></tr>\n"
 }
 if(Patient.festflag.value=="1" && !isWhitespace(Patient.othfee08.value)) {
 DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>Pathology</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>&nbsp;" + Patient.othfee08.value + "</td></tr>\n"
 }
 if(Patient.festflag.value=="1" && !isWhitespace(Patient.othfee09.value)) {
 DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>Cosmetic Out of Pocket</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>&nbsp;" + Patient.othfee09.value + "</td></tr>\n"
 }
}
}

if ((document.UpdateForm!=undefined) && (Patient.festflag.value=="0")) {
  if (UpdateForm.selfinsr.value=="1") {
  DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
   "<td align=right><b>Out of Pocket</td>\n" +
   "<td align=right>" + UpdateForm.ptelg034.value + "</td>\n"
  } else {
   DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
   "<td>&nbsp;" + "" + "</td>\n" +
   "<td>&nbsp;" + "" + "</td>\n"
  }
} else {
   DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
   "<td>&nbsp;" + "" + "</td>\n" +
   "<td>&nbsp;" + "" + "</td>\n"
}
 DocumentHTML+="<td align=right><b>Fund Excess </td>\n" +
  "<td>&nbsp;" + "" + "</td>\n"
if(Patient.festflag.value=="1") {
  DocumentHTML+="<td align=right>" + Patient.pmfdxcss.value + "</td></tr>\n"
} else if((Patient.festflag.value=="0") &&
         (document.UpdateForm!=undefined))  {
  if(Patient.admrlost.value > 0) {
   DocumentHTML+="<td align=right>" + UpdateForm.ptelg003.value + "</td></tr>\n"
  } else {
   DocumentHTML+="<td align=right>" + UpdateForm.ptelg040.value + "</td></tr>\n"
  }
} else {
  DocumentHTML+="<td align=right>" + Patient.fundxcss.value + "</td></tr>\n"
}
DocumentHTML+="<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right><b>GST </td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>" + Patient.gsttotal.value + "</td></tr>\n"

GetTotal();

DocumentHTML+=
"<tr><td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right><b>TOTAL ESTIMATED COST $ </td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>" + Patient.esttotal.value + "</td></tr>\n" +

"</table></tr>\n"

} //  end of festflag=1 313842
///////////////////////////////////////////////////////////////////////////////
//
//if(Patient.festflag.value=="0") { // 313842
///  print the following for both SJOG IFC and Fees Estimate
if(Patient.festflag.value=="1" || Patient.festflag.value=="0" ) { // 313842

// Patient/Next of Kin/Carer/Legal Guardian signature

DocumentHTML+=
"<tr><td colspan=6 align=left>&nbsp;</td></tr>\n" +

"<tr><td class=largetext colspan=6>Patient / Next-of-Kin / Carer / Legal Guardian Signature....................................................................    Date......../......../................  </td></tr>\n"



// IFC Exclusions and Comments
  if (document.UpdateForm!=undefined)  {
    if(!isWhitespace(UpdateForm.ptelg005.value)) {
    DocumentHTML+="<tr><td class=HeadingRow width=10% valign=top>\n" +
    "EXCLUSIONS:</td>\n" +
    "<td>\n" + UpdateForm.ptelg005.value + "</td></tr>\n"
    }
  } else {
    if(!isWhitespace(Patient.ptelg005.value)) { 
    DocumentHTML+="<tr><td class=HeadingRow width=10% valign=top>\n" +
    "EXCLUSIONS:</td>\n" +
    "<td>\n" + Patient.ptelg005.value + "</td></tr>\n" 
  }
 }

  if (document.UpdateForm!=undefined)  {
    if(!isWhitespace(UpdateForm.ptelg022.value)) {
    DocumentHTML+="<tr><td class=HeadingRow width=10% valign=top>\n" +
    "COMMENTS:</td>\n" +
    "<td>\n" + UpdateForm.ptelg022.value + "</td></tr>\n"
    }
  } else {
    if(!isWhitespace(Patient.ptelg022.value)) {
    DocumentHTML+="<tr><td class=HeadingRow width=10% valign=top>\n" +
    "COMMENTS:</td>\n" +
    "<td>\n" + Patient.ptelg022.value + "</td></tr>\n"
  }
 }
DocumentHTML+=
"</table></tr>\n" +

"<tr><td align=left><table width=98% align=center border=0 cellspacing=0>\n" +
"<tr>\n" +
"    <td><b>Estimate Completed By: </b>" + Patient.LoginName.value +
              "&nbsp;&nbsp;</td>\n" +
"    <td><b>Date: </b>" + Patient.currdate.value +
              "&nbsp;&nbsp;</td>\n" +
"    </tr>\n" +
"</table></tr>\n" +

"<tr><td align=left><table width=98% align=center border=0 cellspacing=0>\n" +
"<tr><td class=smalltext colspan=6>This is an estimation only, which has been based on information provided prior to any treatment given. \n" +
"Should additional alternative procedures be performed or your proposed Length of Stay has altered, " +
Patient.hospname.value +
" reserves the right to review these charges. \n" +
"Health fund information is confidential and used only for " +
Patient.hospname.value +
" billing purposes. </td></tr>\n" +
"</table></td>\n" +
//
// IFC Signature Line
"<tr><td colspan=6 align=left class=SectHead2>&nbsp;\n" +
"PATIENT / NEXT OF KIN / CARER / LEGAL GUARDIAN TO COMPLETE </td></tr>\n" +
"<tr><td colspan=6><table width=98% align=center border=0 cellspacing=0>\n" +

"<tr><td colspan=6> I have been advised of the above cost estimates in respect of the proposed treatment for " +
Patient.Given.value + "&nbsp;" +
Patient.Surname.value + ".<br>\n" +
"I understand that they are estimates and may change as a result of variations in the treatment provided. <br>\n" +
"I accept responsibilities for payment of this account, including (if applicable) if a nominated insurer does not pay the anticipated rebate. <br>\n" +
"</td></tr>\n" +

"<tr><td colspan=6 align=left>&nbsp;</td></tr>\n" +

"<tr><td class=largetext colspan=6>Patient / Next-of-Kin / Carer / Legal Guardian Signature....................................................................    Date......../......../................  </td></tr>\n" +
"<tr><td class=smalltext colspan=6>(If Next-Of-Kin / Carer / Legal Guardian, please state Name / Relationship and provide Address / Contact Details):  </td></tr>\n" +

"<tr><td colspan=6 align=left>&nbsp;</td></tr>\n" +

"<tr><td>.......................................................................</td>\n" +
"    <td>........................................</td>\n" +
"    <td>.................................................................................</td>\n" +
"    <td>..............................</td></tr>\n" +
"<tr><td class=smalltext>NAME</td>" +
"    <td class=smalltext>RELATIONSHIP</td>" +
"    <td class=smalltext>ADDRESS</td>" +
"    <td class=smalltext>CONTACT NUMBER</td></tr>\n" +

"</table></td></tr>\n" +
"</table>\n"
} // end of festflag=0 313842
//////////////////////////////////////////////////////////////////////////
// Fees Estimate Comments
//if(Patient.festflag.value=="1") { // 313842
///  print the following for both SJOG IFC and Fees Estimate
if(Patient.festflag.value=="1" || Patient.festflag.value=="0" ) { // 313842
  if(!isWhitespace(Patient.pmfdcmn1.value) ||
     !isWhitespace(Patient.pmfdcmn2.value) ||
     !isWhitespace(Patient.pmfdcmn3.value) ||
     !isWhitespace(Patient.pmfdcmn4.value) ||
     !isWhitespace(Patient.pmfdcmn5.value)) {
    DocumentHTML+="<tr><td class=HeadingRow>\n" +
    "Comments</td></tr>\n" +
    "<tr><td>\n" + Patient.pmfdcmn1.value + "</td></tr>\n"
    if(!isWhitespace(Patient.pmfdcmn2.value)) {
      DocumentHTML+="<tr><td>\n" + Patient.pmfdcmn2.value + "</td></tr>\n"
    }
    if(!isWhitespace(Patient.pmfdcmn3.value)) {
      DocumentHTML+="<tr><td>\n" + Patient.pmfdcmn3.value + "</td></tr>\n"
    }
    if(!isWhitespace(Patient.pmfdcmn4.value)) {
      DocumentHTML+="<tr><td>\n" + Patient.pmfdcmn4.value + "</td></tr>\n"
    }
    if(!isWhitespace(Patient.pmfdcmn5.value)) {
      DocumentHTML+="<tr><td>\n" + Patient.pmfdcmn5.value + "</td></tr>\n"
    }
  }

DocumentHTML+=
"</table></tr>\n" +
"<tr><td colspan=6><table width=98% align=center border=0 cellspacing=0>\n" +

// Display the customisable fees estimate text
  Patient.feestext.value +

//"</table></td></tr>\n" +

"<tr><td colspan=6><table width=98% align=center border=0 cellspacing=0>\n" +

"<tr><td height=70 align=center valign=bottom>&nbsp;</td>\n" +
"    <td height=70 align=center valign=bottom>&nbsp;</td>\n" +
"    <td height=70 align=center valign=bottom>&nbsp;</td>\n" +
"    <td height=70 align=center valign=bottom>&nbsp;</td>\n" +
"    </tr>\n" +

"<tr><td><hr width=100%></td>\n" +
"    <td><hr width=100%></td>\n" +
"    <td><hr width=100%></td>\n" +
"    <td><hr width=100%></td>\n" +
"    </tr>\n" +

"<tr><td align=center valign=top>\n" +
"Signature of Patient/Relative\n" +
"</td><td align=center valign=top>\n" +
"Name if other than Patient </td>\n" +
"</td><td align=center valign=top>\n" +
"Signature of Staff Member </td>\n" +
"</td><td align=center valign=top>\n" +
"Date </td></tr>\n"

if(Patient.festflag.value=="1") {
  DocumentHTML+="<tr><td align=center>" +
                "Date Created : " + Patient.pmfdcdat.value +
                "&nbsp;&nbsp;</td>\n" +
  "    <td>&nbsp;</td>\n" +
  "    <td>&nbsp;</td>\n" +
  "    <td>&nbsp;</td>\n" +
  "    </tr>\n"
}
DocumentHTML+="</table></td></tr>\n" +

"</table>\n"
} // end of festflag=1 313842
//////////////////////////////////////////////////////////////////////////
  return(DocumentHTML)
}
/////////////////
////////////////
///////////////
//////////////
/// Layout 3 Cabrini
/////////////////
////////////////
///////////////
//////////////
// ---------------------------------
// Cabrini IFC Layout (Format 3)
// ---------------------------------
function CABLayout() {
  Patient.festflag.value="0";          // always use IFC information
//
  DocumentHTML="<title>Cabrini  IFC</title>\n" +
"<style type=text/css>\n" +
"body { margin:10; \n" +
"font-family: Arial; }\n" +
"td { font-size:9px;}\n" +
"td.calc { border-right-style:solid;\n" +
"          border-top-style:solid;\n" +
"          border-width:1px; text-align:center;} \n" +
"td.calc1 { border-right-style:solid;\n" +
"           border-width:1px; text-align:center;} \n" +
"table.calc { border-collapse:collapse; border:1px solid grey;} \n" +
"td.smalltext { font-size:8px;}\n" +
"td.largetext { font-size:10px;}\n" +
"td.dings { font-size:14px;}\n" +
"td.MainHead { font-size:16px; font-family: Arial;}\n" +
"td.SectHead1 { \n" +
"          border-right-style:solid;\n" +
"          border-top-style:solid;\n" +
"          border-width:1px; \n" +
"background-color:lightgrey;\n" +
"font-family: Arial;\n" +
"font-weight:bold; }\n" +
"td.SectHead2 { \n" +
"color:white;\n" +
"background-color:black;\n" +
"font-family: Arial;\n" +
"font-size:12px; \n" +
"font-weight:bold; }\n" +
"td.SectHead3 { \n" +
"border-color:black;\n" +
"color:white;\n" +
"background-color:black;\n" +
"font-family: Arial;\n" +
"font-size:12px; \n" +
"font-weight:bold; }\n" +
"td.SectHead4 { \n" +
"border-color:black;\n" +
"color:white;\n" +
"background-color:black;\n" +
"font-family: Arial;\n" +
"font-size:7px; \n" +
"font-weight:bold; }\n" +
"td.HeadingRow  { \n" +
"font-family: Arial;\n" +
"font-size:10px; \n" +
"font-weight:bold; }\n" +
"p.page {page-break-after: always}\n" +
".vertical-text { \n" +
"transform: rotate(90deg);\n" +
"transform-origin: 305px 260px;\n" +
"margin-left: 30px;\n" +
"margin-top: 50px;\n" +
"padding: 10px;\n" +
"float: right;\n" +
"</style>\n" +
"<table align=center width=100% border=1 cellspacing=0>\n" +
"<tr><td colspan=6><table width=100% border=0 cellspacing=0>\n" +
//
// IFC Hospital Header
"<tr><td width=50%>&nbsp;</td>\n" +
"    <td>&nbsp;</td>\n" +
"    <td>&nbsp;</td></tr>\n" +
"<tr><td align=center rowspan=5><img height=60 src=../images/" +
 Patient.hospcode.value + "logo.gif></td>\n" +
"    <td>&nbsp;</td>\n" +
"    <td>&nbsp;</td></tr>\n" +
"    <td><b>UR Number:    </b>" + Patient.urnumber.value + "</td>\n" +
"    <td><b>Visit Number:    </b>" + Patient.admissno.value + "</td>\n" +
"</tr>\n"
//
// IFC Patient Details
DocumentHTML+=
"    <td><b>Surname: </b>\n" +
  Patient.Surname.value + "</td>\n" +
"    <td>&nbsp;</td></tr>\n" +
"    <td><b>Name: </b>\n" +
  Patient.Given.value + "</td>\n" +
"    <td>&nbsp;</td></tr>\n" +
"    <td><b>Date Of Birth: </b>" + Patient.dob.value + "</td>\n" +
"    <td><b>Gender: </b>" + Patient.sex.value + "</td></tr>\n" +
"<tr><td>&nbsp;</td>\n" +
"    <td><b>Dr: </b>" + Patient.doctname.value + "</td>\n" +
"    <td>&nbsp;</td></tr>\n" +
"<tr><td class=MainHead align=center>INFORMED FINANCIAL CONSENT</td>\n" +
"    <td>&nbsp;</td>\n" +
"    <td>&nbsp;</td></tr>\n" +
"<tr><td>&nbsp;</td>\n" +
"    <td>&nbsp;</td>\n" +
"    <td>&nbsp;</td></tr>\n" +
"</table></td>\n" +
"<td rowspan=100><img height=550 src=../images/" +
Patient.hospcode.value + "IFC.gif></td>\n" +
"</td>\n" +
"</tr>\n" +
//
// IFC Admission Details
"<tr><td colspan=6><table width=98% align=center border=0 cellspacing=0>\n" +
"<tr><td><b>Admission Date: </b>" + Patient.admndate.value + "</td>\n" +
"    <td>&nbsp;</td></tr>\n" +
"</table></td></tr>\n" +
"<tr><td colspan=6><table width=98% align=center border=0 cellspacing=0>\n" +
"<tr><td width=30%><b>Details Confirmed Prior to Admission: </b></td>\n" +
"<td class=dings>&#10065</td><td>Confirmed </td>\n" +
"<td class=dings>&#10065</td><td>No Answer </td>\n" +
"<td class=dings>&#10065</td><td>Left Message </td>\n" +
"<td>Date: </td>\n" +
"<td>____/____/____</td></tr>\n" +
"</table></td></tr>\n" +
//
// IFC Insurance Details
"<tr><td colspan=6 align=left class=SectHead2>&nbsp;\n" +
" INSURANCE DETAILS          </td></tr>\n" +
"<tr><td colspan=6><table width=98% align=center border=0 cellspacing=0>\n" +
//
"<td><b>CLAIM TYPE: </b></td>\n" +
"<td>" + Patient.claimdsc.value + "</td></tr>\n"
checkInd=document.Patient.claimtyp.value.substr(3,5)

// DVA
if (checkInd.search(/V/g) >= 0) {
DocumentHTML+=
"<tr><td>Card Number: </td>\n" +
"    <td>" + Patient.dvaccnum.value + "</td>\n" +
"    <td>Preferred Accommodation </td>\n" +
"    <td>" + Patient.prefaccm.value + "</td>\n"
DocumentHTML+=
"</tr>\n" +

"<tr><td>Card Type: </td>\n" +
"    <td>" + Patient.dvacldsc.value + "</td>\n" +
"    <td>Approval Given? </td>\n"
  if(document.UpdateForm!=undefined){
    if(document.UpdateForm.ptelg006!=undefined){
      if(UpdateForm.ptelg006.value=="1"){
         DocumentHTML+="<td>Yes</td>\n"
      } else {
         DocumentHTML+="<td>No</td>\n"
      }
    }
  }
DocumentHTML+=
"    <td>Date: </td>\n"
  if(document.UpdateForm!=undefined){
    if(document.UpdateForm.ptelg013!=undefined){
       DocumentHTML+="<td>" + UpdateForm.ptelg013.value + "</td>\n"
    }
  }
DocumentHTML+=
"</tr><tr><td>&nbsp</td></tr><tr><td>&nbsp</td></tr>\n"
} else

// ADF
if (checkInd.search(/D/g) >= 0) {
DocumentHTML+=
"<tr><td>PMKeys Number: </td>\n" +
"    <td>" + Patient.defpmkey.value + "</td>\n" +
"    <td>Preferred Accommodation </td>\n" +
"    <td>" + Patient.prefaccm.value + "</td>\n"
DocumentHTML+=
"</tr>\n" +

"<tr><td>Defence Force Approval Number: </td>\n" +
"    <td>" + Patient.defappno.value + "</td>\n" +
"    <td>Claim Accepted? </td>\n"
    if(Patient.defclacc.value=="1"){
        DocumentHTML+="<td>Yes</td>\n"
    } else
    if(Patient.defclacc.value=="0"){
        DocumentHTML+="<td>No</td>\n"
    } else {
        DocumentHTML+="<td>N/A</td>\n"
    }
DocumentHTML+=
"    <td>Referral Date: </td>\n" +
"    <td>" + Patient.defrefdt.value + "</td>\n"
DocumentHTML+=
"</tr><tr><td>&nbsp</td></tr><tr><td>&nbsp</td></tr>\n"
} else

{
//if (checkInd.search(/M/g) < 0) {
// Private
DocumentHTML+=
"<tr><td width=20%>Health Fund: </td>\n" +
"    <td>" + Patient.hlthfdsc.value.substr(0,23) + "</td>\n" +
"    <td width=20%>Exclusions / Restrictions? </td>\n"
  if(document.UpdateForm!=undefined){
    if(document.UpdateForm.ptelg004!=undefined){
      if(UpdateForm.ptelg004.value=="1"){
         DocumentHTML+="<td>Yes</td>\n"
      } else {
         DocumentHTML+="<td>No</td>\n"
      }
    }
  }
DocumentHTML+=
"</tr>\n" +

"<tr><td>Level of Cover: </td>\n"
  if(document.UpdateForm!=undefined){
    if(document.UpdateForm.ptelg024!=undefined){
      if(!isWhitespace(UpdateForm.ptelg024.value)){
         DocumentHTML+="<td>" + UpdateForm.ptelg024.value.substr(0,24) + 
                       "</td>\n"
      } else {
         DocumentHTML+="<td>" + Patient.hlthtabl.value.substr(0,24) + 
         "</td>\n"
      }
    }
  }
DocumentHTML+=
"    <td>Waits Served? </td>\n"
  if(document.UpdateForm!=undefined){
    if(document.UpdateForm.ptelg030!=undefined){
      if(UpdateForm.ptelg030.value=="1"){
         DocumentHTML+="<td>Yes</td>\n"
      } else {
         DocumentHTML+="<td>No</td>\n"
      }
    }
  }
DocumentHTML+=
"</tr>\n" +

"<tr><td>Member Number: </td>\n" +
"    <td>" + Patient.hlthmemb.value + "</td>\n" +
"    <td>Check Complete? </td>\n"
  if(document.UpdateForm!=undefined){
    if(document.UpdateForm.ptelg006!=undefined){
      if(UpdateForm.ptelg006.value=="1"){
         DocumentHTML+="<td>Yes</td>\n"
      } else {
         DocumentHTML+="<td>No</td>\n"
      }
    }
  }
DocumentHTML+=
"    <td>Date: </td>\n"
  if(document.UpdateForm!=undefined){
    if(document.UpdateForm.ptelg013!=undefined){
       DocumentHTML+="<td>" + UpdateForm.ptelg013.value + "</td>\n"
    }
  }
DocumentHTML+=
"</tr>\n" +

"<tr><td>Financial: </td>\n"
  if(document.UpdateForm!=undefined){
    if(document.UpdateForm.ptelg001!=undefined){
      if(UpdateForm.ptelg001.value=="1"){
         DocumentHTML+="<td>Yes</td>\n"
      } else {
         DocumentHTML+="<td>No</td>\n"
      }
    }
  }
DocumentHTML+=
"    <td>Preferred Accommodation </td>\n" +
"    <td>" + Patient.prefaccm.value + "</td>\n"
DocumentHTML+=
"</tr>\n"
}

DocumentHTML+=
//
"</table></td></tr>\n" +
"<tr><td colspan=6 align=left class=SectHead2>&nbsp;</td></tr>\n" +
"<tr><td colspan=6><table width=98% align=center border=0 cellspacing=0>\n" +
"<tr><td colspan=6 class=smalltext><b>Estimate does not include pathology, radiology, non-admission related pharmacy drugs, discharge pharmacy drugs, Doctors or Anaesthetist fees,\n" +
" prosthesis charges, non-emergency patient transport, clinically necessary patient transport, visitor meals, boarder fees, STD or mobile phone calls not fully funded by your \n" +
"nominated insurer.</b></td></tr>\n" +
//
// IFC Reason for Admission
"<tr><td align=center colspan=6><table width=95% class=calc cellspacing=0>\n" +

"<tr><td colspan=2 align=center class=SectHead1>\n" +
" Reason for Admission </td>\n" +
"<td colspan=2 align=center class=SectHead1>\n" +
" DRG/Item Number/Admission Type </td>\n" +
"<td colspan=2 align=center class=SectHead1>\n" +
" Length of Stay </td></tr>\n" +

"<tr><td colspan=2 class=calc>&nbsp;" + Patient.admreasn.value +
//"<br>" + Patient.admreasn.value.substr(40,80) + "</td>\n" +
"<td colspan=2 class=calc>&nbsp;" + Patient.admritmn.value + "</td>\n" +
"<td colspan=2 class=calc>&nbsp;" + Patient.admrlost.value + "</td></tr>\n" +

"</table></td></tr>\n" +
//
"<tr><td colspan=6 align=left>&nbsp;</td></tr>\n" +
//
"<tr><td align=center colspan=6><table width=95% class=calc cellspacing=0>\n" +
"<tr><td align=center class=SectHead3>Charge Type</td>\n" +
"<td align=center class=SectHead3>Estimated Cost</td>\n" +
"<td align=center class=SectHead3>Fund Rebate</td>\n" +
"<td align=center colspan=2 class=SectHead3>Patient Cost</td></tr>\n" +
"<tr><td align=center class=SectHead4>&nbsp;</td>\n" +
"<td align=center class=SectHead4>(if not accepted per day)</td>\n" +
"<td align=center class=SectHead4>(per day)</td>\n" +
"<td align=center colspan=2 class=SectHead4>(if claim accepted)</td></tr>\n" +
//
// IFC Accommodation Details
"<tr><td class=calc><b>Accommodation</td>\n" +
"<td class=calc><b>&nbsp;</td>\n" +
"<td class=calc><b>&nbsp;</td>\n" +
"<td class=calc><b>Per Day</td>\n" +
"<td class=calc><b>Maximum</td></tr>\n"
//
//if(!isWhitespace(Patient.hbfee01a.value)) {
DocumentHTML+=
"<tr><td class=calc1>" +
 trim(Patient.hbfee01a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"

 if(isWhitespace(Patient.hbfee01b.value)) {
    DocumentHTML+= "$0.00"
  } else {
    DocumentHTML+= "$"
    DocumentHTML+=
    trim(Patient.hbfee01b.value)
  }
  DocumentHTML+= "&nbsp;</td>\n" +
  "<td class=calc1>"

 if(isWhitespace(Patient.hbfee01c.value)) {
    DocumentHTML+= "$0.00"
  } else {
    DocumentHTML+= "$"
    DocumentHTML+=
    trim(Patient.hbfee01c.value)
  }
  DocumentHTML+= "&nbsp;</td>\n" +
  "<td class=calc1>"

 if(isWhitespace(Patient.hbfee01d.value)) {
    DocumentHTML+= "$0.00"
  } else {
    DocumentHTML+= "$"
    DocumentHTML+=
    trim(Patient.hbfee01d.value)
  }
  DocumentHTML+= "&nbsp;</td>\n" +
  "<td class=calc1>"

if(!isWhitespace(Patient.hbfee01e.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee01e.value) + "&nbsp;</td></tr>\n"
//}
//
//if(!isWhitespace(Patient.hbfee02a.value)) {
DocumentHTML+=
"<tr><td class=calc1>" +
 trim(Patient.hbfee02a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee02b.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee02b.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee02c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee02c.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee02d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee02d.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee02e.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee02e.value) + "&nbsp;</td></tr>\n"
//}
//
//if(!isWhitespace(Patient.hbfee03a.value)) {
DocumentHTML+=
"<tr><td class=calc1>" +
 trim(Patient.hbfee03a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee03b.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee03b.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee03c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee03c.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee03d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee03d.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee03e.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee03e.value) + "&nbsp;</td></tr>\n"
//}
//
//if(!isWhitespace(Patient.hbfee04a.value)) {
DocumentHTML+=
"<tr><td class=calc1>" +
 trim(Patient.hbfee04a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee04b.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee04b.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee04c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee04c.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee04d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee04d.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee04e.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee04e.value) + "&nbsp;</td></tr>\n"
//}
//
//if(!isWhitespace(Patient.hbfee05a.value)) {
DocumentHTML+=
"<tr><td class=calc1>" +
 trim(Patient.hbfee05a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee05b.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee05b.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee05c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee05c.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee05d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee05d.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee05e.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee05e.value) + "&nbsp;</td></tr>\n"
//}
//
//if(!isWhitespace(Patient.hbfee06a.value)) {
DocumentHTML+=
"<tr><td class=calc1>" +
 trim(Patient.hbfee06a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee06b.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee06b.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee06c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee06c.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee06d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee06d.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee06e.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee06e.value) + "&nbsp;</td></tr>\n"
//}
//
//if(!isWhitespace(Patient.hbfee07a.value)) {
DocumentHTML+=
"<tr><td class=calc1>" +
 trim(Patient.hbfee07a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee07b.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee07b.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee07c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee07c.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee07d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee07d.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee07e.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee07e.value) + "&nbsp;</td></tr>\n"
//}
//
//if(!isWhitespace(Patient.hbfee08a.value)) {
DocumentHTML+=
"<tr><td class=calc1>" +
 trim(Patient.hbfee08a.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee08b.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee08b.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee08c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee08c.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee08d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee08d.value) + "&nbsp;</td>\n" +
"<td class=calc1>"
if(!isWhitespace(Patient.hbfee08e.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hbfee08e.value) + "&nbsp;</td></tr>\n"
//}
//
// IFC Theatre Details
if(!isWhitespace(Patient.htfee01a.value)) {
DocumentHTML+=
"<tr><td class=calc><b>" +
 trim(Patient.htfee01a.value) + "&nbsp;</td>\n" +
"<td class=calc>"
if(!isWhitespace(Patient.htfee01b.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.htfee01b.value) + "&nbsp;</td>\n" +
"<td class=calc>"
if(!isWhitespace(Patient.htfee01c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.htfee01c.value) + "&nbsp;</td>\n" +
"<td class=calc>"
if(!isWhitespace(Patient.htfee01d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.htfee01d.value) + "&nbsp;</td>\n" +
"<td class=calc>"
if(!isWhitespace(Patient.htfee01e.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.htfee01e.value) + "&nbsp;</td></tr>\n"
}
//
// IFC Other Consumables
if(!isWhitespace(Patient.hofee01a.value)) {
DocumentHTML+=
"<tr><td class=calc><b>" +
 trim(Patient.hofee01a.value) + "&nbsp;</td>\n" +
"<td class=calc>"
if(!isWhitespace(Patient.hofee01b.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hofee01b.value) + "&nbsp;</td>\n" +
"<td class=calc>"
if(!isWhitespace(Patient.hofee01c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hofee01c.value) + "&nbsp;</td>\n" +
"<td class=calc>"
if(!isWhitespace(Patient.hofee01d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hofee01d.value) + "&nbsp;</td>\n" +
"<td class=calc>"
if(!isWhitespace(Patient.hofee01e.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hofee01e.value) + "&nbsp;</td></tr>\n"
}
//
// IFC Prosthesis
if(!isWhitespace(Patient.hpfee01a.value)) {
DocumentHTML+=
"<tr><td class=calc><b>" +
 trim(Patient.hpfee01a.value) + "&nbsp;</td>\n" +
"<td class=calc>"
if(!isWhitespace(Patient.hpfee01b.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hpfee01b.value) + "&nbsp;</td>\n" +
"<td class=calc>"
if(!isWhitespace(Patient.hpfee01c.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hpfee01c.value) + "&nbsp;</td>\n" +
"<td class=calc>"
if(!isWhitespace(Patient.hpfee01d.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hpfee01d.value) + "&nbsp;</td>\n" +
"<td class=calc>"
if(!isWhitespace(Patient.hpfee01e.value)) { DocumentHTML+= "$"}
DocumentHTML+=
 trim(Patient.hpfee01e.value) + "&nbsp;</td></tr>\n"
}
//
// IFC Fund Excess
DocumentHTML+=
"<tr><td class=calc><b>Fund Excess</td>\n" +
"<td class=calc><b>&nbsp;</td>\n" +
"<td class=calc><b>&nbsp;</td>\n" +
"<td class=calc><b>&nbsp;</td>\n" +
"<td class=calc><b>&nbsp;</td></tr>\n" +
"<tr><td class=calc1>Same Day</td>\n" +
"<td class=calc1><b>&nbsp;</td>\n" +
"<td class=calc1><b>&nbsp;</td>\n" +
"<td class=calc1><b>&nbsp;</td>\n"

if(Patient.festflag.value=="0" && document.UpdateForm!=undefined) {
  if(document.UpdateForm.ptelg040!=undefined) {
    if(parseFloat(UpdateForm.ptelg040.value)>0) {
      DocumentHTML+="<td class=calc1>$" +
      Math.round(UpdateForm.ptelg040.value) + ".00" + "</td></tr>\n"
    } else {
      DocumentHTML+="<td class=calc1>&nbsp;</td></tr>\n"
    }
  } else {
    DocumentHTML+="<td class=calc1>&nbsp;</td></tr>\n"
  }
} else {
  DocumentHTML+="<td class=calc1>&nbsp;</td></tr>\n"
}

DocumentHTML+=
"<tr><td class=calc1>Overnight</td>\n" +
"<td class=calc1><b>&nbsp;</td>\n" +
"<td class=calc1><b>&nbsp;</td>\n" +
"<td class=calc1><b>&nbsp;</td>\n"
if(Patient.festflag.value=="0" && document.UpdateForm!=undefined) {
  if(document.UpdateForm.ptelg003!=undefined) {
    if(parseFloat(UpdateForm.ptelg003.value)>0) {
       DocumentHTML+="<td class=calc1>$" +
       Math.round(UpdateForm.ptelg003.value) + ".00" + "</td></tr>\n"
    } else {
       DocumentHTML+="<td class=calc1>&nbsp;</td></tr>\n"
    }
  } else {
    DocumentHTML+="<td class=calc1>&nbsp;</td></tr>\n"
  }
} else {
//DocumentHTML+="<td class=calc1>" + Patient.fundxcss.value + "</td></tr>\n"
  DocumentHTML+="<td class=calc1>&nbsp;</td></tr>\n"
}

//
// IFC Co-Payments
if (document.UpdateForm!=undefined)  {
   if(document.UpdateForm.ptelg002!=undefined &&
      document.UpdateForm.ptelg010!=undefined &&
      document.UpdateForm.ptelg011!=undefined &&
      document.UpdateForm.ptelg025!=undefined &&
      document.UpdateForm.ptelg027!=undefined &&
      document.UpdateForm.ptelg031!=undefined &&
      document.UpdateForm.ptelg032!=undefined &&
      document.UpdateForm.ptelg041!=undefined)  {
    DocumentHTML+=
    "<tr><td class=calc><b>Co-Payment</td>\n" +
    "<td class=calc><b>&nbsp;</td>\n" +
    "<td class=calc><b>&nbsp;</td>\n" +
    "<td class=calc><b>&nbsp;</td>\n" +
    "<td class=calc><b>&nbsp;</td></tr>\n"

    DocumentHTML+="<tr><td class=calc1>Private</td>\n" +
    "<td class=calc1>&nbsp;" + "" + "</td>\n" +
    "<td class=calc1>&nbsp;" + "" + "</td>\n"
    if (checkInd.search(/V/g) >= 0) {
      DocumentHTML+=
      "<td class=calc1>&nbsp;" + "" + "</td>\n" +
      "<td class=calc1>&nbsp;" + "" + "</td></tr>\n" // blank for DVA(HEA only)
    } else {
      DocumentHTML+=
      "<td class=calc1>&nbsp;"
      if(!isWhitespace(UpdateForm.ptelg002.value)) { DocumentHTML+= "$"}
      DocumentHTML+=
      Math.round(UpdateForm.ptelg002.value) + ".00" + "</td>\n"
      if (parseFloat(UpdateForm.priexlos.value)>0) {
      DocumentHTML+=
        "<td class=calc1>&nbsp;$" +
        Math.round(UpdateForm.priexlos.value) + ".00" + "</td></tr>\n"
      } else {
      DocumentHTML+=
        "<td class=calc1>&nbsp;" + "" + "</td></tr>\n"
      }
    }
    DocumentHTML+="<tr><td class=calc1>Shared</td>\n" +
    "<td class=calc1>&nbsp;" + "" + "</td>\n" +
    "<td class=calc1>&nbsp;" + "" + "</td>\n" +
    "<td class=calc1>&nbsp;"
      if(!isWhitespace(UpdateForm.ptelg010.value)) { DocumentHTML+= "$"}
      DocumentHTML+=
      Math.round(UpdateForm.ptelg010.value) + ".00" + "</td>\n"
      if (parseFloat(UpdateForm.shaexlos.value)>0) {
      DocumentHTML+=
        "<td class=calc1>&nbsp;$" +
      Math.round(UpdateForm.shaexlos.value) + ".00" + "</td></tr>\n"
      } else {
      DocumentHTML+=
        "<td class=calc1>&nbsp;" + "" + "</td></tr>\n"
      }
    DocumentHTML+="<tr><td class=calc1>Same Day</td>\n" +
    "<td class=calc1>&nbsp;" + "" + "</td>\n" +
    "<td class=calc1>&nbsp;" + "" + "</td>\n" +
    "<td class=calc1>&nbsp;"
      if(!isWhitespace(UpdateForm.ptelg025.value)) { DocumentHTML+= "$"}
      DocumentHTML+=
      Math.round(UpdateForm.ptelg025.value) + ".00" + "</td>\n"
      if (parseFloat(UpdateForm.sdyexlos.value)>0) {
      DocumentHTML+=
        "<td class=calc1>&nbsp;$" +
        Math.round(UpdateForm.sdyexlos.value) + ".00" + "</td></tr>\n"
      } else {
      DocumentHTML+=
        "<td class=calc1>&nbsp;" + "" + "</td></tr>\n"
      }

    DocumentHTML+="<tr><td class=calc1>Hospital</td>\n" +
    "<td class=calc1>&nbsp;" + "" + "</td>\n" +
    "<td class=calc1>&nbsp;" + "" + "</td>\n" +
    "<td class=calc1>&nbsp;"
      if(!isWhitespace(UpdateForm.ptelg027.value)) { DocumentHTML+= "$"}
      DocumentHTML+=
      Math.round(UpdateForm.ptelg027.value) + ".00" + "</td>\n"
      if (parseFloat(UpdateForm.hosexlos.value)>0) {
      DocumentHTML+=
        "<td class=calc1>&nbsp;$" +
        Math.round(UpdateForm.hosexlos.value) + ".00" + "</td></tr>\n"
      } else {
      DocumentHTML+=
        "<td class=calc1>&nbsp;" + "" + "</td></tr>\n"
      }

    DocumentHTML+="<tr><td class=calc1>Theatre</td>\n" +
    "<td class=calc1>&nbsp;" + "" + "</td>\n" +
    "<td class=calc1>&nbsp;" + "" + "</td>\n" +
    "<td class=calc1>&nbsp;"
      if(!isWhitespace(UpdateForm.ptelg011.value)) { DocumentHTML+= "$"}
      DocumentHTML+=
      Math.round(UpdateForm.ptelg011.value) + ".00" + "</td>\n"
      if (parseFloat(UpdateForm.thtexlos.value)>0) {
      DocumentHTML+=
        "<td class=calc1>&nbsp;$" +
        Math.round(UpdateForm.thtexlos.value) + ".00" + "</td></tr>\n"
      } else {
      DocumentHTML+=
        "<td class=calc1>&nbsp;" + "" + "</td></tr>\n"
      }

    DocumentHTML+="<tr><td class=calc1>ICU / CCU / SCN</td>\n" +
    "<td class=calc1>&nbsp;" + "" + "</td>\n" +
    "<td class=calc1>&nbsp;" + "" + "</td>\n" +
    "<td class=calc1>&nbsp;"
      if(!isWhitespace(UpdateForm.ptelg041.value)) { DocumentHTML+= "$"}
      DocumentHTML+=
      Math.round(UpdateForm.ptelg041.value) + ".00" + "</td>\n"
      if (parseFloat(UpdateForm.icuexlos.value)>0) {
      DocumentHTML+=
        "<td class=calc1>&nbsp;$" +
        Math.round(UpdateForm.icuexlos.value) + ".00" + "</td></tr>\n"
      } else {
      DocumentHTML+=
        "<td class=calc1>&nbsp;" + "" + "</td></tr>\n"
      }
    if (document.UpdateForm!=undefined) {
      if(Patient.festflag.value=="0" &&
         !isWhitespace( UpdateForm.ptelg031.value)) {
      DocumentHTML+="<tr><td class=calc>" + UpdateForm.ptelg031.value +
                    "&nbsp;</td>\n" +
      "<td class=calc>&nbsp;$" + Math.round(UpdateForm.ptelg032.value) +
        ".00" + "</td>\n" +
        "<td class=calc>&nbsp;" + "" + "</td>\n" +
        "<td class=calc>&nbsp;" + "" + "</td>\n" +
        "<td align=right class=calc>&nbsp;$" +
        Math.round(UpdateForm.ptelg032.value) + ".00" + "</td></tr>\n"
      }
    } else {
        if(Patient.festflag.value=="0" &&
         !isWhitespace( Patient.ptelmdes.value)) {
        DocumentHTML+="<tr><td class=calc> " + Patient.ptelmdes.value + 
                      "&nbsp;</td>\n" +
        "<td class=calc>&nbsp;" + "" + "</td>\n" +
        "<td class=calc>&nbsp;" + "" + "</td>\n" +
        "<td class=calc>&nbsp;" + "" + "</td>\n" +
        "<td class=calc>&nbsp;$" + Patient.ptelmamt.value + "</td></tr>\n"
        }
    }
  }
}
GetTotal();

DocumentHTML+=
"<tr><td align=center class=SectHead1>TOTAL </td>\n" +
"<td align=center class=SectHead1>$" +
  Math.round(Patient.estcostt.value) + ".00" + "</td>\n" +
"<td align=center class=SectHead1>$" +
  Math.round(Patient.estrebtt.value) + ".00" + "</td>\n" +
"<td align=center class=SectHead1>&nbsp;" + "" + "</td>\n" +
"<td align=center class=SectHead1>$" +
  Math.round(Patient.esttotal.value) + ".00" + "</td></tr>\n" +
"</table></td></tr>\n"

// IFC Exclusions and Comments
 if(document.UpdateForm!=undefined)  {
    if(document.UpdateForm.ptelg005!=undefined)  {
      if(!isWhitespace(UpdateForm.ptelg005.value)) {
        DocumentHTML+="<tr><td class=HeadingRow width=10% valign=top>\n" +
        "EXCLUSIONS:</td>\n" +
        "<td>\n" + UpdateForm.ptelg005.value.substr(0,66) + "</td></tr>\n"
      }
    } else {
      if(!isWhitespace(Patient.ptelg005.value)) {
        DocumentHTML+="<tr><td class=HeadingRow width=10% valign=top>\n" +
        "EXCLUSIONS:</td>\n" +
        "<td>\n" + Patient.ptelg005.value.substr(0,66) + "</td></tr>\n"
      }
    }
 } else {
    if(!isWhitespace(Patient.ptelg005.value)) {
      DocumentHTML+="<tr><td class=HeadingRow width=10% valign=top>\n" +
      "EXCLUSIONS:</td>\n" +
      "<td>\n" + Patient.ptelg005.value.substr(0,66) + "</td></tr>\n"
    }
 }

 if(document.UpdateForm!=undefined)  {
    if(document.UpdateForm.ptelg022!=undefined)  {
      if(!isWhitespace(UpdateForm.ptelg022.value)) {
        DocumentHTML+="<tr><td class=HeadingRow width=10% valign=top>\n" +
        "COMMENTS:</td>\n" +
        "<td>\n" + UpdateForm.ptelg022.value.substr(0,66) + "</td></tr>\n"
      }
    } else {
      if(!isWhitespace(Patient.ptelg022.value)) {
        DocumentHTML+="<tr><td class=HeadingRow width=10% valign=top>\n" +
        "COMMENTS:</td>\n" +
        "<td>\n" + Patient.ptelg022.value.substr(0,66) + "</td></tr>\n"
      }
    }
 } else {
    if(!isWhitespace(Patient.ptelg022.value)) {
      DocumentHTML+="<tr><td class=HeadingRow width=10% valign=top>\n" +
      "COMMENTS:</td>\n" +
      "<td>\n" + Patient.ptelg022.value.substr(0,66) + "</td></tr>\n"
    }
 }
DocumentHTML+=
"</table></tr>\n"

DocumentHTML+=
  "<tr><td align=left><table width=98% align=center border=0 cellspacing=0>\n" +
  "<tr><td>"+Patient.feestext.value+"</td></tr>";
//
// IFC Signature Line
DocumentHTML+=
"<tr><td colspan=6 align=left class=SectHead2>&nbsp;\n" +
"PATIENT / NEXT OF KIN / CARER / LEGAL GUARDIAN TO COMPLETE </td></tr>\n" +
"<tr><td colspan=6><table width=98% align=center border=0 cellspacing=0>\n" +

"<tr><td colspan=6> I have been advised of the above cost estimates in respect of the proposed treatment for " +
Patient.Given.value + "&nbsp;" +
Patient.Surname.value + ".<br>\n" +
"I understand that they are estimates and may change as a result of variations in the treatment provided. <br>\n" +
"I accept responsibilities for payment of this account, including (if applicable) if a nominated insurer does not pay the anticipated rebate. <br>\n" +
"</td></tr>\n" +

"<tr><td colspan=6 align=left>&nbsp;</td></tr>\n" +

"<tr><td class=largetext colspan=6>Patient / Next-of-Kin / Carer / Legal Guardian Signature....................................................................    Date......../......../................  </td></tr>\n" +
"<tr><td class=smalltext colspan=6>(If Next-Of-Kin / Carer / Legal Guardian, please state Name / Relationship and provide Address / Contact Details):  </td></tr>\n" +

"<tr><td colspan=6 align=left>&nbsp;</td></tr>\n" +

"<tr><td>.......................................................................</td>\n" +
"    <td>........................................</td>\n" +
"    <td>.................................................................................</td>\n" +
"    <td>..............................</td></tr>\n" +
"<tr><td class=smalltext>NAME</td>" +
"    <td class=smalltext>RELATIONSHIP</td>" +
"    <td class=smalltext>ADDRESS</td>" +
"    <td class=smalltext>CONTACT NUMBER</td></tr>\n" +

"</table></td></tr>\n"
DocumentHTML+=
"</table>\n"
  return(DocumentHTML)
}

// --------------------------
// HEA Fees Estimate (Format 1)
// --------------------------
function HEAEstimateDocument() {
  DocumentHTML="<title>Fees Estimate Details</title>\n" +
"<style type=text/css>\n" +
"body { margin:10; \n" +
"font-family: Arial; }\n" +
"td { font-size:9pt;}\n" +
"td.SectHead { \n" +
"background-color:lightgrey;\n" +
"font-family: Arial;\n" +
"font-weight:bold; }\n" +
"td.HeadingRow  { \n" +
"font-family: Arial;\n" +
"font-size:10pt; \n" +
"font-weight:bold; }\n" +
"p.page {page-break-after: always}\n" +
"</style>\n" +

"<table align=center width=100% border=1 cellspacing=0>\n" +
////////////////////////////////////////////////////////////////////////////
"<tr><td colspan=6><table width=100% border=0 cellspacing=0>\n" +
//
"<tr><td align=center width=60% rowspan=3><img height=100 src=../images/" +
 Patient.hospcode.value + "logo.gif></td>\n" +
"<td><b>Reference Number: </b>" + Patient.pmfdquot.value + "</td>\n" +
"</tr>\n"

DocumentHTML+=
"<tr><td><b>U/R Number: </b>\n" +
  Patient.urnumber.value + "</td>\n" +
"    <td>&nbsp;</td></tr>\n" +
"<tr><td><b>Name: </b>\n" +
Patient.Title.value +  Patient.Given.value +  Patient.Surname.value + "</td>\n" +
"    <td>&nbsp;</td></tr>\n" +
"<tr><td>&nbsp;</td>\n" +
"    <td><b>D.O.B: </b>" + Patient.dob.value + "</td>\n" +
"    <td>&nbsp;</td></tr>\n"

DocumentHTML+=
"<tr><td>&nbsp;</td>\n" +
"    <td><b>Doctor: </b>\n" +
  Patient.doctname.value + "</td>\n" +
"    <td>&nbsp;</td></tr>\n" +
"<tr><td>&nbsp;</td>\n" +
"    <td><b>Estimate Issue Date: </b>\n" +
  Patient.currdate.value + "</td>\n" +
"    <td>&nbsp;</td></tr>\n"

DocumentHTML+=
"<tr><td class=MainHead align=center><b>FEES ESTIMATE" + "</b></td>\n" +
"    <td><b>Estimate Expiry Date: </b>" + Patient.pmfdexpd.value + "</td>\n" +
"    <td>&nbsp;</td></tr>\n" +
"</table></td>\n" +
"<td rowspan=20><img height=550 src=../images/" +
 "FeesEst.gif></td>\n" +
"</tr>\n"

DocumentHTML+=
"<tr><td colspan=6><table width=100% align=center border=0 cellspacing=0>\n" +
"<tr><td width=60%><b>Expected Admission Date: </b>"+Patient.admndate.value + "</td>\n" +
"<td><b>Expected Length of Stay: </b>"+Patient.pmfdnons.value + "</td></tr>\n" +
"<tr><td><b>Reason for Admission: </b>"+Patient.pmfdcmn5.value + "</td>\n" +
"<td>&nbsp;</td></tr>\n" +
"</table></td></tr>\n"

if (document.Patient.usebasic.value=="1") {
DocumentHTML+=
"<tr><td colspan=6><table width=100% align=center border=0 cellspacing=0>\n" +
"<tr><td><b>Insurance Details: </b>"+Patient.hlthfund.value + "/Default Cover Rates</td>\n" +
"<td>&nbsp;</td></tr>\n" +
"</table></td></tr>\n"
} else {
DocumentHTML+=
"<tr><td colspan=6><table width=100% align=center border=0 cellspacing=0>\n" +
"<tr><td><b>Insurance Details: </b>"+Patient.hlthfund.value + "</td>\n" +
"<td>&nbsp;</td></tr>\n" +
"</table></td></tr>\n"
}


"<tr><td colspan=6><table width=100%>\n"


// Display the Comment estimate text
DocumentHTML+=
  "<tr><td colspan=6 align=left><table width=100% align=center border=0 cellspacing=0>\n" +
  "<tr><td>"+Patient.insrtext.value+"</td></tr>\n" +
  "</table></td></tr>\n"


DocumentHTML+=
"<tr><td colspan=6><table width=100%>\n"

DocumentHTML+=

"<tr><td colspan=6 align=center><hr width=100%></td></tr>\n" +

"<tr><table width=100% border=1 cellspacing=0><tr>\n" +

"<td align=center class=SectHead><b>Charge Type</td>\n" +
"<td align=center class=SectHead><b>Estimated Cost<br>or Daily Rate</td>\n" +
"<td align=center class=SectHead><b>Quantity<br>or LOS</td>\n" +
"<td align=center class=SectHead><b>Fund Rebate<br>Per Day Rate</td>\n" +
"<td align=center class=SectHead><b>Fund Rebate</td>\n" +
"<td align=center class=SectHead><b>Estimated<br>Patient Cost</td></tr>\n"



  if((isNaN(Patient.bdfee01s.value)) && (Patient.bdfee01s.value!='Daycase')) {
   DocumentHTML+="<tr><td align=left><b>Episodic Fee</td>\n" +
  "<td>&nbsp;</td>\n" +
  "<td>&nbsp;</td>\n" +
  "<td>&nbsp;</td>\n" +
  "<td>&nbsp;</td>\n" +
  "<td>&nbsp;</td></tr>\n"
 } else {
  DocumentHTML+="<tr><td align=left><b>Accommodation</td>\n" +
  "<td>&nbsp;</td>\n" +
  "<td>&nbsp;</td>\n" +
  "<td>&nbsp;</td>\n" +
  "<td>&nbsp;</td>\n" +
  "<td>&nbsp;</td></tr>\n"
 }

  Patient.hbfee01a.value=Patient.bdfee01c.value;

  if((!isNaN(Patient.bdfee01s.value)) && (Patient.bdfee01s.value!="0")) {
  Patient.hbfee01a.value=(parseFloat(Patient.bdfee01c.value) * (Patient.bdfee01s.value))
  RoundNumber(Patient.hbfee01a,2);
  }

if (document.Patient.usebasic.value=="1") {
   if ((trim(Patient.bdfee01s.value))=="Lump Sum Charge") {
    Patient.hbfee01a.value=(parseFloat(Patient.bdfee01c.value) * (Patient.pmfdnons.value))
    RoundNumber(Patient.hbfee01a,2);
  }
}

  DocumentHTML+="<tr><td>&nbsp;" + Patient.bdfee01u.value + "</td>\n" +
  "<td align=right>&nbsp;$" + Patient.bdfee01b.value + "</td>\n" +
  "<td align=center>&nbsp;" + Patient.bdfee01s.value + "</td>\n" +
  "<td align=right>&nbsp;$" + Patient.bdfee01c.value + "</td>\n"

  if((!isWhitespace(Patient.bdfee01s.value)) && (Patient.bdfee01s.value=="0") || (Patient.selfinsr.value=="1")){
    DocumentHTML+=
    "<td align=right>&nbsp;$" + ".00" + "</td>\n"
 } else {
    DocumentHTML+=
  "<td align=right>&nbsp;$" + Patient.hbfee01a.value + "</td>\n"
 }
  DocumentHTML+=
  "<td align=right>&nbsp;$" + Patient.bdfee01t.value + "</td></tr>\n"



 if(!isWhitespace(Patient.bdfee02u.value)) {

  if((isNaN(Patient.bdfee01s.value)) && (Patient.bdfee01s.value!='Daycase')) {
  DocumentHTML+="<tr><td align=left><b>Accommodation</td>\n" +
  "<td>&nbsp;</td>\n" +
  "<td>&nbsp;</td>\n" +
  "<td>&nbsp;</td>\n" +
  "<td>&nbsp;</td>\n" +
  "<td>&nbsp;</td></tr>\n"
  }

  DocumentHTML+="<tr><td>&nbsp;" + Patient.bdfee02u.value + "</td>\n" +
  "<td align=right>&nbsp;$" + Patient.bdfee02b.value + "</td>\n" +
  "<td align=center>&nbsp;" + Patient.bdfee02s.value + "</td>\n" +
  "<td align=right>&nbsp;$" + Patient.bdfee02c.value + "</td>\n"

  if((!isWhitespace(Patient.bdfee02s.value)) && (Patient.bdfee02s.value=="0") || (Patient.selfinsr.value=="1")){
    DocumentHTML+=
    "<td align=right>&nbsp;$" + ".00" + "</td>\n"
 } else {
  if((!isWhitespace(Patient.bdfee02s.value)) && (Patient.bdfee02s.value!="0")){
   Patient.hbfee02a.value=(parseFloat(Patient.bdfee02c.value) * (Patient.bdfee02s.value))
   RoundNumber(Patient.hbfee02a,2);
   if(Patient.hbfee02a.value=="0"){
      DocumentHTML+=
      "<td align=right>&nbsp;$" + ".00" + "</td>\n"
   } else {
    DocumentHTML+=
      "<td align=right>&nbsp;$" + Patient.hbfee02a.value + "</td>\n"
   }
  } else {
    DocumentHTML+=
    "<td>&nbsp;</td>\n"
  }
 }
  DocumentHTML+=
  "<td align=right>&nbsp;$" + Patient.bdfee02t.value + "</td></tr>\n"
}

 if(!isWhitespace(Patient.bdfee03u.value)) {
  DocumentHTML+="<tr><td>&nbsp;" + Patient.bdfee03u.value + "</td>\n" +
  "<td align=right>&nbsp;$" + Patient.bdfee03b.value + "</td>\n" +
  "<td align=center>&nbsp;" + Patient.bdfee03s.value + "</td>\n" +
  "<td align=right>&nbsp;$" + Patient.bdfee03c.value + "</td>\n" 

  if((!isWhitespace(Patient.bdfee03s.value)) && (Patient.bdfee03s.value=="0") || (Patient.selfinsr.value=="1")){
    DocumentHTML+=
    "<td align=right>&nbsp;$" + ".00" + "</td>\n"
  } else {
 if((!isWhitespace(Patient.bdfee03s.value)) && (Patient.bdfee03s.value!="0")){
  Patient.hbfee03a.value=(parseFloat(Patient.bdfee03c.value) * (Patient.bdfee03s.value))
  RoundNumber(Patient.hbfee03a,2);
   if(Patient.hbfee03a.value=="0"){
      DocumentHTML+=
      "<td align=right>&nbsp;$" + ".00" + "</td>\n"
   } else {
    DocumentHTML+=
      "<td align=right>&nbsp;$" + Patient.hbfee03a.value + "</td>\n"
   }
 } else {
    DocumentHTML+=
    "<td>&nbsp;</td>\n"
  }
 }
  DocumentHTML+=
  "<td align=right>&nbsp;$" + Patient.bdfee03t.value + "</td></tr>\n"
}

 if(!isWhitespace(Patient.bdfee04u.value)) {
  DocumentHTML+="<tr><td>&nbsp;" + Patient.bdfee04u.value + "</td>\n" +
  "<td align=right>&nbsp;$" + Patient.bdfee04b.value + "</td>\n" +
  "<td align=center>&nbsp;" + Patient.bdfee04s.value + "</td>\n" +
  "<td align=right>&nbsp;$" + Patient.bdfee04c.value + "</td>\n"

  if((!isWhitespace(Patient.bdfee04s.value)) && (Patient.bdfee04s.value=="0") || (Patient.selfinsr.value=="1")){
    DocumentHTML+=
    "<td align=right>&nbsp;$" + ".00" + "</td>\n"
   } else {
  if((!isWhitespace(Patient.bdfee04s.value)) && (Patient.bdfee04s.value!="0")){
  Patient.hbfee04a.value=(parseFloat(Patient.bdfee04c.value) * (Patient.bdfee04s.value))
  RoundNumber(Patient.hbfee04a,2);
   if(Patient.hbfee04a.value=="0"){
      DocumentHTML+=
      "<td align=right>&nbsp;$" + ".00" + "</td>\n"
   } else {
    DocumentHTML+=
      "<td align=right>&nbsp;$" + Patient.hbfee04a.value + "</td>\n"
   }
 } else {
    DocumentHTML+=
    "<td>&nbsp;</td>\n" 
  }
}
  DocumentHTML+=
  "<td align=right>&nbsp;$" + Patient.bdfee04t.value + "</td></tr>\n"
}

 if(!isWhitespace(Patient.bdfee05u.value)) {
  DocumentHTML+="<tr><td>&nbsp;" + Patient.bdfee05u.value + "</td>\n" +
  "<td align=right>&nbsp;$" + Patient.bdfee05b.value + "</td>\n" +
  "<td align=center>&nbsp;" + Patient.bdfee05s.value + "</td>\n" +
  "<td align=right>&nbsp;$" + Patient.bdfee05c.value + "</td>\n" 

  if((!isWhitespace(Patient.bdfee05s.value)) && (Patient.bdfee05s.value=="0") || (Patient.selfinsr.value=="1")){
    DocumentHTML+=
    "<td align=right>&nbsp;$" + ".00" + "</td>\n"
  } else {
  if((!isWhitespace(Patient.bdfee05s.value)) && (Patient.bdfee05s.value!="0")){
  Patient.hbfee05a.value=(parseFloat(Patient.bdfee05c.value) * (Patient.bdfee05s.value))
  RoundNumber(Patient.hbfee05a,2);
   if(Patient.hbfee05a.value=="0"){
      DocumentHTML+=
      "<td align=right>&nbsp;$" + ".00" + "</td>\n"
   } else {
    DocumentHTML+=
      "<td align=right>&nbsp;$" + Patient.hbfee05a.value + "</td>\n"
   }
} else {
    DocumentHTML+=
    "<td>&nbsp;</td>\n"
  }
}
  DocumentHTML+=
  "<td align=right>&nbsp;$" + Patient.bdfee05t.value + "</td></tr>\n"
}

 if(!isWhitespace(Patient.bdfee06u.value)) {
  DocumentHTML+="<tr><td>&nbsp;" + Patient.bdfee06u.value + "</td>\n" +
  "<td align=right>&nbsp;$" + Patient.bdfee06b.value + "</td>\n" +
  "<td align=center>&nbsp;" + Patient.bdfee06s.value + "</td>\n" +
  "<td align=right>&nbsp;$" + Patient.bdfee06c.value + "</td>\n"

  if((!isWhitespace(Patient.bdfee06s.value)) && (Patient.bdfee06s.value=="0") || (Patient.selfinsr.value=="1")){
    DocumentHTML+=
    "<td align=right>&nbsp;$" + ".00" + "</td>\n"
  } else {
  if((!isWhitespace(Patient.bdfee06s.value)) && (Patient.bdfee06s.value!="0")){
  Patient.hbfee06a.value=(parseFloat(Patient.bdfee06c.value) * (Patient.bdfee06s.value))
  RoundNumber(Patient.hbfee06a,2);
   if(Patient.hbfee06a.value=="0"){
      DocumentHTML+=
      "<td align=right>&nbsp;$" + ".00" + "</td>\n"
   } else {
    DocumentHTML+=
      "<td align=right>&nbsp;$" + Patient.hbfee06a.value + "</td>\n"
   }
} else {
    DocumentHTML+=
    "<td>&nbsp;</td>\n"
  }
}
  DocumentHTML+=
  "<td align=right>&nbsp;$" + Patient.bdfee06t.value + "</td></tr>\n"
}

 if(!isWhitespace(Patient.bdfee07u.value)) {
  if((!isWhitespace(Patient.bdfee07s.value)) && (Patient.bdfee07s.value!="0")){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.bdfee07u.value + "</td>\n" +
  "<td align=right>&nbsp;$" + Patient.bdfee07b.value + "</td>\n" +
  "<td align=center>&nbsp;" + Patient.bdfee07s.value + "</td>\n" +
  "<td align=right>&nbsp;$" + Patient.bdfee07c.value + "</td>\n" 

  if((!isWhitespace(Patient.bdfee07s.value)) && (Patient.bdfee07s.value=="0") || (Patient.selfinsr.value=="1")){
    DocumentHTML+=
    "<td align=right>&nbsp;$" + ".00" + "</td>\n"
   } else {
 if(!isWhitespace(Patient.bdfee07s.value)) {
  Patient.hbfee07a.value=(parseFloat(Patient.bdfee07c.value) * (Patient.bdfee07s.value))
  RoundNumber(Patient.hbfee07a,2);
   if(Patient.hbfee07a.value=="0"){
      DocumentHTML+=
      "<td align=right>&nbsp;$" + ".00" + "</td>\n"
   } else {
    DocumentHTML+=
      "<td align=right>&nbsp;$" + Patient.hbfee07a.value + "</td>\n"
   }
 } else {
    DocumentHTML+=
    "<td>&nbsp;</td>\n"
  }
}
  DocumentHTML+=
  "<td align=right>&nbsp;$" + Patient.bdfee07t.value + "</td></tr>\n"
}
}

DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td></tr>\n"

if(!isWhitespace(Patient.thfee01a.value)) {
DocumentHTML+="<tr><td align=left><b>Theatre/Procedure</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td></tr>\n"

DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee01a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee01b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee01e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
  "<td align=right>&nbsp;$" + Patient.thfee01c.value + "</td>\n" +
  "<td align=right>&nbsp;$" + Patient.thfee01d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee02a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee02a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee02b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee02e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee02c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee02d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee03a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee03a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee03b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee03e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee03c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee03d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee04a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee04a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee04b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee04e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee04c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee04d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee05a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee05a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee05b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee05e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee05c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee05d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee06a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee06a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee06b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee06e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee06c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee06d.value + "</td></tr>\n"
}

// Fees Estimate - Print Theatre fees up to 50 items

if(!isWhitespace(Patient.thfee07a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee07a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee07b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee07e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee07c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee07d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee08a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee08a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee08b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee08e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee08c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee08d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee09a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee09a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee09b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee09e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee09c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee09d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee10a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee10a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee10b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee10e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee10c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee10d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee11a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee11a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee11b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee11e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee11c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee11d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee12a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee12a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee12b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee12e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee12c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee12d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee13a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee13a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee13b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee13e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee13c.value + "</td>\n" +
"<td align=right>&nbsp;" + Patient.thfee13d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee14a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee14a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee14b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee14e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee14c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee14d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee15a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee15a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee15b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee15e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee15c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee15d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee16a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee16a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee16b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee16e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee16c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee16d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee17a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee17a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee17b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee17e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee17c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee17d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee18a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee18a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee18b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee18e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee18c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee18d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee19a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee19a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee19b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee19e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee19c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee19d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee20a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee20a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee20b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee20e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee20c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee20d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee21a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee21a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee21b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee21e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee21c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee21d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee22a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee22a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee22b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee22e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee22c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee22d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee23a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee23a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee23b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee23e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee23c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee23d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee24a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee24a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee24b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee24e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee24c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee24d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee25a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee25a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee25b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee25e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee25c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee25d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee26a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee26a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee26b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee26e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee26c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee26d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee27a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee27a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee27b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee27e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee27c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee27d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee28a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee28a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee28b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee28e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee28c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee28d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee29a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee29a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee29b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee29e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee29c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee29d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee30a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee30a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee30b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee30e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee30c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee30d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.thfee31a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee31a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee31b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee31e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee31c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee31d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee32a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee32a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee32b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee32e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee32c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee32d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee33a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee33a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee33b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee33e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee33c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee33d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee34a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee34a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee34b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee34e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee34c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee34d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee35a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee35a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee35b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee35e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee35c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee35d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee36a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee36a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee36b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee36e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee36c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee36d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee37a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee37a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee37b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee37e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee37c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee37d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee38a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee38a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee38b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee38e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee38c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee38d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee39a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee39a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee39b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee39e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee39c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee39d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee40a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee40a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee40b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee40e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee40c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee40d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee41a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee41a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee41b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee41e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee41c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee41d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee42a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee42a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee42b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee42e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee42c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee42d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee43a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee43a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee43b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee43e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee43c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee43d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee44a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee44a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee44b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee44e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee44c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee44d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee45a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee45a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee45b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee45e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee45c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee45d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee46a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee46a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee46b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee46e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee46c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee46d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee47a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee47a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee47b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee47e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee47c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee47d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee48a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee48a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee48b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee48e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee48c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee48d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee49a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee49a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee49b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee49e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee49c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee49d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.thfee50a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.thfee50a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee50b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.thfee50e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee50c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.thfee50d.value + "</td></tr>\n"
}
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td></tr>\n"

if(!isWhitespace(Patient.msfee01a.value)) {
DocumentHTML+="<tr><td align=left><b>Other</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td></tr>\n"

DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee01a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee01b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee01e.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee01c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee01d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.msfee02a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee02a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee02b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee02e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee02c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee02d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.msfee03a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee03a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee03b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee03e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee03c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee03d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.msfee04a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee04a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee04b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee04e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee04c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee04d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.msfee05a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee05a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee05b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee05e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee05c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee05d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.msfee06a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee06a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee06b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee06e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee06c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee06d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.msfee07a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee07a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee07b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee07e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee07c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee07d.value + "</td></tr>\n"
}

if(!isWhitespace(Patient.msfee08a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee08a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee08b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee08e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee08c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee08d.value + "</td></tr>\n"
}

// Fees Estimate - Print Misc.Charge up to 50 items

if(!isWhitespace(Patient.msfee09a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee09a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee09b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee09e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee09c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee09d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee10a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee10a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee10b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee10e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee10c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee10d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee11a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee11a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee11b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee11e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee11c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee11d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee12a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee12a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee12b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee12e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee12c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee12d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee13a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee13a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee13b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee13e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee13c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee13d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee14a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee14a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee14b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee14e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee14c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee14d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee15a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee15a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee15b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee15e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee15c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee15d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee16a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee16a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee16b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee16e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee16c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee16d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee17a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee17a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee17b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee17e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee17c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee17d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee18a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee18a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee18b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee18e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee18c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee18d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee19a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee19a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee19b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee19e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee19c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee19d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee20a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee20a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee20b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee20e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee20c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee20d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee21a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee21a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee21b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee21e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee21c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee21d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee22a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee22a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee22b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee22e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee22c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee22d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee23a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee23a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee23b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee23e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee23c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee23d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee24a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee24a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee24b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee24e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee24c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee24d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee25a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee25a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee25b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee25e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee25c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee25d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee26a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee26a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee26b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee26e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee26c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee26d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee27a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee27a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee27b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee27e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee27c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee27d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee28a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee28a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee28b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee28e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee28c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee28d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee29a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee29a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee29b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee29e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee29c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee29d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee30a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee30a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee30b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee30e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee30c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee30d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee31a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee31a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee31b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee31e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee31c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee31d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee32a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee32a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee32b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee32e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee32c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee32d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee33a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee33a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee33b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee33e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee33c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee33d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee34a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee34a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee34b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee34e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee34c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee34d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee35a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee35a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee35b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee35e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee35c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee35d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee36a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee36a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee36b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee36e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee36c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee36d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee37a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee37a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee37b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee37e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee37b.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee37d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee38a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee38a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee38b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee39e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee38c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee38d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee39a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee39a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee39b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee39e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee39c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee39d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee40a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee40a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee40b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee40e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee40c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee40d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee41a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee41a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee41b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee41e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee41c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee41d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee42a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee42a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee42b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee42e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee42c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee42d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee43a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee43a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee43b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee43e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee43c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee43d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee44a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee44a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee44b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee44e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee44c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee44d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee45a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee45a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee45b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee45e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee45c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee45d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee46a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee46a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee46b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee46e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee46c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee46d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee47a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee47a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee47b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee47e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee47c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee47d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee48a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee48a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee48b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee48e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee48c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee48d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee49a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee49a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee49b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee49e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee49c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee49d.value + "</td></tr>\n"
}
if(!isWhitespace(Patient.msfee50a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee50a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee50b.value + "</td>\n" +
"<td align=center>&nbsp;" + Patient.msfee50e.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee50c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee50d.value + "</td></tr>\n"
}
// Pharmacy
if(!isWhitespace(Patient.msfee51a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee51a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee51b.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee51c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee51d.value + "</td></tr>\n"
}
// Prosthet.
if(!isWhitespace(Patient.msfee52a.value)) {
DocumentHTML+="<tr><td align=left>&nbsp;" + Patient.msfee52a.value.substr(0,9) + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee52b.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee52c.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.msfee52d.value + "</td></tr>\n"
}
 if(!isWhitespace(Patient.consumab.value)) {
DocumentHTML+="<tr><td align=left>Consumables</td>\n" +
"<td align=right>&nbsp;$" + Patient.consumab.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n"

  if(Patient.selfinsr.value=="1"){
    Patient.consmreb.value=".00";
    Patient.consmpat.value=Patient.consumab.value;
  }

DocumentHTML+=
"<td align=right>&nbsp;$" + Patient.consmreb.value + "</td>\n" +
"<td align=right>&nbsp;$" + Patient.consmpat.value + "</td></tr>\n"
}

DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td></tr>\n"

 if(Patient.discount!=undefined) {
  if(!isWhitespace(Patient.discount.value)) {
  DocumentHTML+="<tr><td right><b>Discount</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td>&nbsp;" + "" + "</td>\n" +
  "<td align=right>&nbsp;$" + Patient.discount.value + "</td></tr>\n"
  }
 }

// Display other fees if parameter is turned on
if(Patient.ptcnuofe.value=="1"){
if(Patient.othfee01 != undefined) {
 if(!isWhitespace(Patient.othfee01.value)) {
 DocumentHTML+="<tr><td align=left>Surgeon Gap Amount</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>&nbsp;$" + Patient.othfee01.value + "</td></tr>\n"
 }
 if(!isWhitespace(Patient.othfee02.value)) {
 DocumentHTML+="<tr><td align=left>Assistant Gap Amount</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>&nbsp;$" + Patient.othfee02.value + "</td></tr>\n"
 }
 if(!isWhitespace(Patient.othfee03.value)) {
 DocumentHTML+="<tr><td align=left>Anaesthetist Gap Amount</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>&nbsp;$" + Patient.othfee03.value + "</td></tr>\n"
 }
 if(!isWhitespace(Patient.othfee04.value)) {
 DocumentHTML+="<tr><td align=left>ICU Intensivists</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>&nbsp;$" + Patient.othfee04.value + "</td></tr>\n"
 }
 if(!isWhitespace(Patient.othfee05.value)) {
 DocumentHTML+="<tr><td align=left>Physio (Initial Visit)</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>&nbsp;$" + Patient.othfee05.value + "</td></tr>\n"
 }
 if(!isWhitespace(Patient.othfee06.value)) {
 DocumentHTML+="<tr><td align=left>Physio (Subs Visit)</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>&nbsp;$" + Patient.othfee06.value + "</td></tr>\n"
 }
 if(!isWhitespace(Patient.othfee07.value)) {
 DocumentHTML+="<tr><td align=left>Radiology</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>&nbsp;$" + Patient.othfee07.value + "</td></tr>\n"
 }
 if(!isWhitespace(Patient.othfee08.value)) {
 DocumentHTML+="<tr><td align=left>Pathology</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>&nbsp;$" + Patient.othfee08.value + "</td></tr>\n"
 }
 if(!isWhitespace(Patient.othfee09.value)) {
 DocumentHTML+="<tr><td align=left>Cosmetic Out of Pocket</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td>&nbsp;" + "" + "</td>\n" +
 "<td align=right>&nbsp;$" + Patient.othfee09.value + "</td></tr>\n"
 }
 }
}
DocumentHTML+="<tr><td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td></tr>\n"

if((trim(Patient.pmfdxcss.value)) != ".00") {
 DocumentHTML+="<tr><td align=left><b>Fund Excess </td>\n" +
   "<td>&nbsp;" + "" + "</td>\n" +
   "<td>&nbsp;" + "" + "</td>\n" +
   "<td>&nbsp;" + "" + "</td>\n" +
   "<td>&nbsp;" + "" + "</td>\n"

 DocumentHTML+="<td align=right>$" + Patient.pmfdxcss.value + "</td></tr>\n"
}

DocumentHTML+="<tr><td align=left><b>GST </td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td align=right>$" + Patient.gsttotal.value + "</td></tr>\n"

GetTotal();
GetFundTot();
GetDayTot();

DocumentHTML+=
"<tr><td align=center><b>Total</td>\n" +
"<td align=right>$" + Patient.dailytot.value + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" +
"<td>&nbsp;" + "" + "</td>\n" 

 if(Patient.selfinsr.value=="1"){
   Patient.fsttotal.value=".00";
 }

if (parseFloat(Patient.esttotal.value)<0) {
  Patient.esttotal.value="0.00";
}

DocumentHTML+=
"<td align=right>$" + Patient.fsttotal.value + "</td>\n" +
"<td align=right>$" + Patient.esttotal.value + "</td></tr>\n" +
"</table></tr>\n" +

"<tr><table width=100% border=0 cellspacing=2>\n"

// HEA Fees Estimate is using Standard IFC form layout and it only prints
// Comment 1 to 4

  if(!isWhitespace(Patient.pmfdcmn1.value) ||
     !isWhitespace(Patient.pmfdcmn2.value) ||
     !isWhitespace(Patient.pmfdcmn3.value) ||
     !isWhitespace(Patient.pmfdcmn4.value)) {
    DocumentHTML+="<tr><td class=HeadingRow>\n" +
    "Comments</td></tr>\n" +
    "<tr><td>\n" + Patient.pmfdcmn1.value + "</td></tr>\n"
    if(!isWhitespace(Patient.pmfdcmn2.value)) {
      DocumentHTML+="<tr><td>\n" + Patient.pmfdcmn2.value + "</td></tr>\n"
    }
    if(!isWhitespace(Patient.pmfdcmn3.value)) {
      DocumentHTML+="<tr><td>\n" + Patient.pmfdcmn3.value + "</td></tr>\n"
    }
    if(!isWhitespace(Patient.pmfdcmn4.value)) {
      DocumentHTML+="<tr><td>\n" + Patient.pmfdcmn4.value + "</td></tr>\n"
    }
  }


DocumentHTML+=
"</table></tr>\n"

// Display the Comment estimate text
DocumentHTML+=
 "<tr><td align=left><table width=100% align=center border=0 cellspacing=0>\n" +
  "<tr><td>"+Patient.commtext.value+"</td></tr>\n" +
  "</table></td></tr>\n"

DocumentHTML+=
"<tr><td colspan=6><table width=100%>\n" +

//DocumentHTML+=
// Display the customisable fees estimate text
//  Patient.feestext.value +


"</table></tr>\n" +

"<tr><table width=100% border=0 cellspacing=2>\n" +

"<tr><td height=70 align=center valign=bottom>&nbsp;</td>\n" +
"    <td height=70 align=center valign=bottom>&nbsp;</td>\n" +
"    <td height=70 align=center valign=bottom>&nbsp;</td>\n" +
"    <td height=70 align=center valign=bottom>&nbsp;</td>\n" +
"    </tr>\n" +

"<tr><td><hr width=100%></td>\n" +
"    <td><hr width=100%></td>\n" +
"    <td><hr width=100%></td>\n" +
"    <td><hr width=100%></td>\n" +
"    </tr>\n" +

"<tr><td align=center valign=top>\n" +
"Signature of Patient/Relative\n" +
"</td><td align=center valign=top>\n" +
"Name if other than Patient </td>\n" +
"</td><td align=center valign=top>\n" +
"Signature of Staff Member </td>\n" +
"</td><td align=center valign=top>\n" +
"Date </td></tr>\n"

  DocumentHTML+="<tr><td align=center>" +
                "Date Created : " + Patient.pmfdcdat.value +
                "&nbsp;&nbsp;</td>\n" +
  "    <td>&nbsp;</td>\n" +
  "    <td>&nbsp;</td>\n" +
  "    <td>&nbsp;</td>\n" +
  "    </tr>\n"

DocumentHTML+="</table></tr>\n" +

"</table>\n"
  return(DocumentHTML)
}



