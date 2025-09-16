//jsVersion  : V11.03.00
//========================================================================
function validateOECRequired(theForm) {
  for (i=0; i<theForm.elements.length; i++) {
    el=theForm.elements[i]
    if (el.className.match(/OECRequired/)) {
      if (!checkOECString(el,el.title)) {
         return false } }
    }

    if (isWhitespace(document.AddForm.patsurnm.value)) {
      alertOEC(document.AddForm.patsurnm);
      return false;
    }

    if (isWhitespace(document.AddForm.patgivnm.value)) {
      alertOEC(document.AddForm.patgivnm);
      return false;
    }

    if (isWhitespace(document.AddForm.patntdob.value)) {
      alertOEC(document.AddForm.patntdob);
      return false;
    }

  return true;
}
function alertOEC(OECpmifield) {
  alert("Online Eligibility Details Incomplete. Request Not Processed.\n"+
        OECpmifield.title+" is a required OEC PMI field.\n"+
        "Please enter it now.");
}
function checkOECString (theField, s, emptyOK) {
if (checkOECString.arguments.length == 2) emptyOK = false;
 if ((emptyOK == true) && (isEmpty(theField.value))) return true;
 if (isWhitespace(theField.value))
   return warnOECEmpty (theField, s);
 else return true;
}
function warnOECEmpty (theField, s) {
 alert("Online Eligibility Details Incomplete. Request Not Processed.\n"
       + s + " is a required OEC field.\nPlease enter it now." )
 theField.focus()
 return false
}
function mandatoryItemCode(ItemCode,ServiceQuantity) {

  if(!isWhitespace(ItemCode.value)) {
    ServiceQuantity.className="Mandatory Integer";
  } else {
    ServiceQuantity.className="Integer";
  }

}
function switchPresIll() {
  if (document.AddForm.presilsw.checked==true) {
    presentingillnesstitleDIV.innerHTML=presillnumhdr.innerHTML;
    presentingillnessfieldDIV.innerHTML=presillnum.innerHTML;
    validateCode(4,document.AddForm.ptelf017,document.AddForm.mbsdesc1);
  } else {
    presentingillnesstitleDIV.innerHTML=presillcodhdr.innerHTML;
    presentingillnessfieldDIV.innerHTML=presillcod.innerHTML;
  }

}
function ShowOECFields() {
  if (document.AddForm.oecchbox.checked==true) {
    document.AddForm.ffoecind.value="1";
    intendedstaytitleDIV.innerHTML=intendedstaytitleSPAN.innerHTML;
    intendedstayfieldDIV.innerHTML=intendedstayfieldSPAN.innerHTML;
    patientcategorytitleDIV.innerHTML=patientcategorytitleSPAN.innerHTML;
    patientcategoryfieldDIV.innerHTML=patientcategoryfieldSPAN.innerHTML;
    peaindicatortitleDIV.innerHTML=peaindicatortitleSPAN.innerHTML;
    peaindicatorfieldDIV.innerHTML=peaindicatorfieldSPAN.innerHTML;
    emergencyadmissiontitleDIV.innerHTML=emergencyadmissiontitleSPAN.innerHTML;
    emergencyadmissionfieldDIV.innerHTML=emergencyadmissionfieldSPAN.innerHTML;
    presentingillnesstitleDIV.innerHTML=presillcodhdr.innerHTML;
    presentingillnessfieldDIV.innerHTML=presillcod.innerHTML;
    switchpresentingillnessfieldDIV.innerHTML=
    switchpresentingillnessfieldSPAN.innerHTML;
    dvanumbertitleDIV.innerHTML=dvanumbertitleSPAN.innerHTML;
    dvanumberfieldDIV.innerHTML=dvanumberfieldSPAN.innerHTML;
    LongLine.innerHTML=longline.innerHTML;
    AddMBScodes.innerHTML=addmbscodes.innerHTML;
    OESMBSitems.innerHTML=blanklabel.innerHTML;
    miscchargecode1titleDIV.innerHTML=miscchargecode1titleSPAN.innerHTML;
    miscchargecode1fieldDIV.innerHTML=miscchargecode1fieldSPAN.innerHTML;
   miscchargecode1quanfieldDIV.innerHTML=miscchargecode1quanfieldSPAN.innerHTML;
    miscchargecode2titleDIV.innerHTML=miscchargecode2titleSPAN.innerHTML;
    miscchargecode2fieldDIV.innerHTML=miscchargecode2fieldSPAN.innerHTML;
   miscchargecode2quanfieldDIV.innerHTML=miscchargecode2quanfieldSPAN.innerHTML;
    miscchargecode3titleDIV.innerHTML=miscchargecode3titleSPAN.innerHTML;
    miscchargecode3fieldDIV.innerHTML=miscchargecode3fieldSPAN.innerHTML;
   miscchargecode3quanfieldDIV.innerHTML=miscchargecode3quanfieldSPAN.innerHTML;
    miscchargecode4titleDIV.innerHTML=miscchargecode4titleSPAN.innerHTML;
    miscchargecode4fieldDIV.innerHTML=miscchargecode4fieldSPAN.innerHTML;
   miscchargecode4quanfieldDIV.innerHTML=miscchargecode4quanfieldSPAN.innerHTML;
    miscchargecode5titleDIV.innerHTML=miscchargecode5titleSPAN.innerHTML;
    miscchargecode5fieldDIV.innerHTML=miscchargecode5fieldSPAN.innerHTML;
   miscchargecode5quanfieldDIV.innerHTML=miscchargecode5quanfieldSPAN.innerHTML;
  }
  else
  {
    document.AddForm.ffoecind.value="";
    intendedstaytitleDIV.innerHTML="";
    intendedstayfieldDIV.innerHTML="";
    patientcategorytitleDIV.innerHTML="";
    patientcategoryfieldDIV.innerHTML="";
    peaindicatortitleDIV.innerHTML="";
    peaindicatorfieldDIV.innerHTML="";
    emergencyadmissiontitleDIV.innerHTML="";
    emergencyadmissionfieldDIV.innerHTML="";
    presentingillnesstitleDIV.innerHTML="";
    presentingillnessfieldDIV.innerHTML="";
    switchpresentingillnessfieldDIV.innerHTML="";
    dvanumbertitleDIV.innerHTML="";
    dvanumberfieldDIV.innerHTML="";
    LongLine.innerHTML=blanklabel.innerHTML;
    AddMBScodes.innerHTML=blanklabel.innerHTML;
    OESMBSitems.innerHTML=blanklabel.innerHTML;
    miscchargecode1titleDIV.innerHTML="";
    miscchargecode1fieldDIV.innerHTML="";
    miscchargecode1quanfieldDIV.innerHTML="";
    miscchargecode2titleDIV.innerHTML="";
    miscchargecode2fieldDIV.innerHTML="";
    miscchargecode2quanfieldDIV.innerHTML="";
    miscchargecode3titleDIV.innerHTML="";
    miscchargecode3fieldDIV.innerHTML="";
    miscchargecode3quanfieldDIV.innerHTML="";
    miscchargecode4titleDIV.innerHTML="";
    miscchargecode4fieldDIV.innerHTML="";
    miscchargecode4quanfieldDIV.innerHTML="";
    miscchargecode5titleDIV.innerHTML="";
    miscchargecode5fieldDIV.innerHTML="";
    miscchargecode5quanfieldDIV.innerHTML="";
  }
}
function OECRequired() {
  if(document.AddForm.oecchbox.checked == true) {
     if (AddForm.bkrec004.className=="Mandatory") {
       AddForm.bkrec004.className="OECRequired Mandatory";
     } else {
       AddForm.bkrec004.className="OECRequired";
     }
     if (AddForm.bkrec005.className=="Mandatory") {
       AddForm.bkrec005.className="OECRequired Mandatory";
     } else {
       AddForm.bkrec005.className="OECRequired";
     }
     if (AddForm.bkrec023.className=="Mandatory") {
       AddForm.bkrec023.className="OECRequired Mandatory";
     } else {
       AddForm.bkrec023.className="OECRequired";
     }
     if (AddForm.bkrec033.className=="Mandatory") {
       AddForm.bkrec033.className="OECRequired Mandatory";
     } else {
       AddForm.bkrec033.className="OECRequired";
     }
     if (AddForm.bkrec035.className=="Mandatory") {
       AddForm.bkrec035.className="OECRequired Mandatory";
     } else {
       AddForm.bkrec035.className="OECRequired";
     }
     if (AddForm.bkrec036.className=="Mandatory") {
       AddForm.bkrec036.className="OECRequired Mandatory";
     } else {
       AddForm.bkrec036.className="OECRequired";
     }
  }
  else
  {
     if (AddForm.bkrec004.className=="OECRequired Mandatory") {
       AddForm.bkrec004.className="Mandatory";
     } else {
       AddForm.bkrec004.className="";
     }
     if (AddForm.bkrec005.className=="OECRequired Mandatory") {
       AddForm.bkrec005.className="Mandatory";
     } else {
       AddForm.bkrec005.className="";
     }
     if (AddForm.bkrec023.className=="OECRequired Mandatory") {
       AddForm.bkrec023.className="Mandatory";
     } else {
       AddForm.bkrec023.className="";
     }
     if (AddForm.bkrec033.className=="OECRequired Mandatory") {
       AddForm.bkrec033.className="Mandatory";
     } else {
       AddForm.bkrec033.className="";
     }
     if (AddForm.bkrec035.className=="OECRequired Mandatory") {
       AddForm.bkrec035.className="Mandatory";
     } else {
       AddForm.bkrec035.className="";
     }
     if (AddForm.bkrec036.className=="OECRequired Mandatory") {
       AddForm.bkrec036.className="Mandatory";
     } else {
       AddForm.bkrec036.className="";
     }
  }
}


function ShowOESmbs() {
  if(document.AddForm.showmbsc.checked == true) {
    OESMBSitems.innerHTML=oesmbsitems.innerHTML;
  } else {
    OESMBSitems.innerHTML=blanklabel.innerHTML;
  }
}
function ItemCodeSearchFrame(ItemType,ItemCode,ItemDescription) {
  if (ItemType.value=="6") {
    MiscChargeSearchFrame(ItemCode,ItemDescription);
  }

  if (ItemType.value=="3") {
    MbsSearchFrame(ItemCode,ItemDescription);
  }
}
