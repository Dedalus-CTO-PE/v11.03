//jsVersion  : V11.03.00
//========================================================================
function ShowOECFields() {
  if(document.UpdateForm.oecchbox.checked == true) {
    PreExistAilHdr.innerHTML=preexisthdr.innerHTML;
    PreExistAilHdr.style.display="";
    PreExistAilmnt.innerHTML=preexistail.innerHTML;
    PreExistAilmnt.style.display="";
    EmerAdmHdr.innerHTML=emeradmnhdr.innerHTML;
    EmerAdmHdr.style.display="";
    EmerAdmssn.innerHTML=emeradmissn.innerHTML;
    EmerAdmssn.style.display="";
    PresIllCodHdr.innerHTML=presillcodhdr.innerHTML;
    PresIllCodHdr.style.display="";
    PresIllCod.innerHTML=presillcod.innerHTML;
    PresIllCod.style.display="";
    SwiPresIllHdr.innerHTML=swipresillhdr.innerHTML;
    SwiPresIllHdr.style.display="";
    SwiPresIll.innerHTML=swipresill.innerHTML;
    SwiPresIll.style.display="";
//    LongLine.innerHTML=longline.innerHTML;
//    OESServices.innerHTML=oesservices.innerHTML;

    if (typeof domftitleDIV != 'undefined') {
      domftitleDIV.innerHTML=domftitleSPAN.innerHTML;
      domftitleDIV.style.display="";
      domffieldDIV.innerHTML=domffieldSPAN.innerHTML;
      domffieldDIV.style.display="";

      if (document.getElementById('extrambs') != null &&
          document.getElementById('extrambs').value == "1" &&
          document.UpdateForm.ptmis026 != undefined) {
        semctitleDIV.innerHTML=semctitleSPAN.innerHTML;
        semctitleDIV.style.display="";
        semcfieldDIV.innerHTML=semcfieldSPAN.innerHTML;
        semcfieldDIV.style.display="";
      }
    } else {
      OESServices.innerHTML=oesservices.innerHTML;
      OESServices.style.display="";
    }
  } else {
    PreExistAilHdr.innerHTML=blanklabel.innerHTML;
    PreExistAilHdr.style.display="none";
    PreExistAilmnt.innerHTML=blanklabel.innerHTML;
    PreExistAilmnt.style.display="none";
    EmerAdmHdr.innerHTML=blanklabel.innerHTML;
    EmerAdmHdr.style.display="none";
    EmerAdmssn.innerHTML=blanklabel.innerHTML;
    EmerAdmssn.style.display="none";
    PresIllCodHdr.innerHTML=blanklabel.innerHTML;
    PresIllCodHdr.style.display="none";
    PresIllCod.innerHTML=blanklabel.innerHTML;
    PresIllCod.style.display="none";
    SwiPresIllHdr.innerHTML=blanklabel.innerHTML;
    SwiPresIllHdr.style.display="none";
    SwiPresIll.innerHTML=blanklabel.innerHTML;
    SwiPresIll.style.display="none";
//    LongLine.innerHTML=blanklabel.innerHTML;
    OESServices.innerHTML=blanklabel.innerHTML;
    OESServices.style.display="none";

    if (typeof domftitleDIV != 'undefined') {
      domftitleDIV.innerHTML=blanklabel.innerHTML;
      domftitleDIV.style.display="none";
      domffieldDIV.innerHTML=blanklabel.innerHTML;
      domffieldDIV.style.display="none";

      if (document.getElementById('extrambs') != null) {
        semctitleDIV.innerHTML=blanklabel.innerHTML;
        semctitleDIV.style.display="none";
        semcfieldDIV.innerHTML=blanklabel.innerHTML;
        semcfieldDIV.style.display="none";
        extrambsDIV.innerHTML=blanklabel.innerHTML;
        extrambsDIV.style.display="none";
      }
    }
  }
}
function ShowOESFields() {
  if(document.UpdateForm.domfchbx.checked == true) {
    OESServices.innerHTML=oesservices.innerHTML;
    OESServices.style.display="";
  } else {
    OESServices.innerHTML=blanklabel.innerHTML;
    OESServices.style.display="none";
  }
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
function validateOECRequired(theForm) {
  for (i=0; i<theForm.elements.length; i++) {
    el=theForm.elements[i]
    if (el.className.match(/OECRequired/)) {
      if (!checkOECString(el,el.title)) {
         return false } }
    }

    if (isWhitespace(document.UpdateForm.patsurnm.value)) {
      alertOEC(document.UpdateForm.patsurnm);
      return false;
    }

    if (isWhitespace(document.UpdateForm.patgivnm.value)) {
      alertOEC(document.UpdateForm.patgivnm);
      return false;
    }

    if (isWhitespace(document.UpdateForm.patntdob.value)) {
      alertOEC(document.UpdateForm.patntdob);
      return false;
    }
  return true;
}
function mandatoryItemCode(ItemCode,DateofService,ServiceQuantity) {
  if(!isWhitespace(ItemCode.value)) {
    DateofService.className="Mandatory FutureDate";
    ServiceQuantity.className="Mandatory Integer";
  } else {
    DateofService.className="FutureDate";
    ServiceQuantity.className="Integer";
  }
}
function ItemCodeSearchFrame(ItemType,ItemCode,ItemDescription,EffDate) {
  if (ItemType.value=="6") {
    MiscChargeSearchFrame(ItemCode,ItemDescription);
  }

  if (ItemType.value=="3") {
    MbsSearchFrame(ItemCode,ItemDescription,EffDate);
  }
}
function validateItemCode(ItemType,ItemCode,ItemClam,
                          ItemFund,ItemTabl,ItemDescription,
                          EffDate) {
  if (ItemType.value=="6") {
    validateMsc1(ItemCode,ItemClam,ItemFund,ItemTabl,ItemDescription);
  }

  if (ItemType.value=="3") {
    validateCode(4,ItemCode,ItemDescription,EffDate);
  }
}
function switchPresIll() {
  if (document.UpdateForm.presilsw.checked==true) {
    PresIllCodHdr.innerHTML=presillnumhdr.innerHTML;
    PresIllCod.innerHTML=presillnum.innerHTML;

    if (document.getElementById('extrambs') != null &&
        document.getElementById('extrambs').value == "1" &&
        document.UpdateForm.ptmis026 != undefined) {

      if (document.getElementById('semcredf') != null &&
          trim(document.getElementById('semcredf').value) > "1") {
        semctitleDIV.innerHTML=semctitleredSPAN.innerHTML;
      } else {
        semctitleDIV.innerHTML=semctitleSPAN.innerHTML;
      }

      semcfieldDIV.innerHTML=semcfieldSPAN.innerHTML;
    }
  } else {
    PresIllCodHdr.innerHTML=presillcodhdr.innerHTML;
    PresIllCod.innerHTML=presillcod.innerHTML;

    if (typeof semctitleDIV != 'undefined') {
      semctitleDIV.innerHTML=blanklabel.innerHTML;
      semcfieldDIV.innerHTML=blanklabel.innerHTML;
      extrambsDIV.innerHTML=blanklabel.innerHTML;
    }
  }
}

function chkDOS(datefield) {
  if(!isWhitespace(datefield.value)){
    if(!ChkDateTime(UpdateForm.ptmis001,null,datefield,null)){
      alert(datefield.title+" cannot be before Admission Date");
      return false;
    }
  }
  return true;
}
function OECRequired() {
 if(document.UpdateForm.oecchbox.checked == true) {
     UpdateForm.ptvis043.className="OECRequired SelectBig";

     UpdateForm.ptmis007.className="OECRequired " +
                UpdateForm.ptmis007.className; //Admitting Doctor

      UpdateForm.doctnam2.className="OECRequired " +
                 UpdateForm.doctnam2.className; //Admitting Doctor Desc

     if (UpdateForm.ptmis020 != 'undefined') {
       UpdateForm.ptmis020.className="OECRequired Mandatory";

        if(document.getElementById('ptcnbdef')){
//          if(document.getElementById('ptcnbdef').value == "1"){
//            if(document.getElementById('d_ptmis020')) {
//      document.getElementById('d_ptmis020').className="OECRequired Mandatory";}}
      }

     }

     UpdateForm.ptmis027.className="OECRequired " +
                UpdateForm.ptmis027.className; //Claim Type

     UpdateForm.funddesc.className="OECRequired " +
                UpdateForm.funddesc.className; //Health Fund Code

     UpdateForm.tabldesc.className="OECRequired " + 
                UpdateForm.tabldesc.className; //Health Fund Code

     UpdateForm.ptmis030.className="OECRequired " + 
                         UpdateForm.ptmis030.className;

     UpdateForm.ptvis076.className="OECRequired SelectBig";
   
     UpdateForm.ptmis015.className="OECRequired " +
                UpdateForm.ptmis015.className; //Member Number
  } else {

     UpdateForm.funddesc.className="ReadOnly";
     UpdateForm.tabldesc.className="ReadOnly";
     UpdateForm.ptmis015.className="";
     if (UpdateForm.ptmis020 != 'undefined') {
       UpdateForm.ptmis020.className="Mandatory";

       if(document.getElementById('ptcnbdef')){
//         if(document.getElementById('ptcnbdef').value == '1'){
//           if(document.getElementById('d_ptmis020')) {
//             document.getElementById('d_ptmis020').className="Mandatory";}}
       }
     }

    AdmitMandatoryHEA();
  }
}
function ShowMBSFields() {
  if(document.getElementById("semcchbx").checked == true) {
    extrambsDIV.innerHTML=mbscodes.innerHTML;
  } else {
    extrambsDIV.innerHTML=blanklabel.innerHTML;
  }
}
function ValidateAllMbsCodes () {
  validateMbsCode(4,
                  document.UpdateForm.ptmis026,
                  document.UpdateForm.mbsdesc1,
                  document.UpdateForm.ptmis001)

  if (document.UpdateForm.showmbsc == undefined) {
    return;
  }

  if (document.UpdateForm.showmbsc.checked == true) {
    validateItemCode(document.UpdateForm.mbstypes,
                     document.UpdateForm.extrprov,
                     document.UpdateForm.ptmis027,
                     document.UpdateForm.ptmis013,
                     document.UpdateForm.ptmis014,
                     document.UpdateForm.d_extrprov,
                     document.UpdateForm.ptmis001);
    validateItemCode(document.UpdateForm.mbstypes,
                     document.UpdateForm.extrprv2,
                     document.UpdateForm.ptmis027,
                     document.UpdateForm.ptmis013,
                     document.UpdateForm.ptmis014,
                     document.UpdateForm.d_extrprv2,
                     document.UpdateForm.ptmis001);
    validateItemCode(document.UpdateForm.mbstypes,
                     document.UpdateForm.extrprv3,
                     document.UpdateForm.ptmis027,
                     document.UpdateForm.ptmis013,
                     document.UpdateForm.ptmis014,
                     document.UpdateForm.d_extrprv3,
                     document.UpdateForm.ptmis001);
    validateItemCode(document.UpdateForm.mbstypes,
                     document.UpdateForm.extrprv4,
                     document.UpdateForm.ptmis027,
                     document.UpdateForm.ptmis013,
                     document.UpdateForm.ptmis014,
                     document.UpdateForm.d_extrprv4,
                     document.UpdateForm.ptmis001);
    validateItemCode(document.UpdateForm.mbstypes,
                     document.UpdateForm.extrprv5,
                     document.UpdateForm.ptmis027,
                     document.UpdateForm.ptmis013,
                     document.UpdateForm.ptmis014,
                     document.UpdateForm.d_extrprv5,
                     document.UpdateForm.ptmis001);
  }
}

