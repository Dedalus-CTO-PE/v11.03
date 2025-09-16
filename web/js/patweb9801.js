//jsVersion  : V11.03.00
//========================================================================
function DisplayFieldsHEA() {
  if(!document.getElementById("ptcnhdps")) {
    return;
  }
   
 var State=document.getElementById("ptcnhdps").value;
   
  if(State ==  "2") { // 2 = New South Wales
    if(document.getElementById("PrevPalL")) {
       document.getElementById("PrevPalL").style.display="none";
       document.getElementById("PrevPalF").style.display="none";
    }
    if(document.getElementById("TransferSrcL")) {
       document.getElementById("TransferSrcL").style.display="none";
       document.getElementById("TransferSrcF").style.display="none";
    }
    if(document.getElementById("QasNumL")) {
       document.getElementById("QasNumL").style.display="none";
       document.getElementById("QasNumF").style.display="none";
    }
    if(document.getElementById("AdmissCatL")) {
       document.getElementById("AdmissCatL").style.display="none";
       document.getElementById("AdmissCatF").style.display="none";
    }
    if(document.getElementById("PubPricAdmL")) {
       document.getElementById("PubPricAdmL").style.display="none";
       document.getElementById("PubPricAdmF").style.display="none";
    }
    if(document.getElementById("SrcRefLocL")) {
       document.getElementById("SrcRefLocL").style.display="none";
       document.getElementById("SrcRefLocF").style.display="none";
    }
    if(document.getElementById("ClinialRefL")) {
       document.getElementById("ClinialRefL").style.display="none";
       document.getElementById("ClinialRefF").style.display="none";
    }
  }
   
  if(State ==  "3") { // 3 = Victoria 
    if(document.getElementById("UsualAccomL")) {
       document.getElementById("UsualAccomL").style.display="none";
       document.getElementById("UsualAccomF").style.display="none";
    }
    if(document.getElementById("LegalStatL")) {
       document.getElementById("LegalStatL").style.display="none";
       document.getElementById("LegalStatF").style.display="none";
    }
    if(document.getElementById("PalCareStatL")) {
       document.getElementById("PalCareStatL").style.display="none";
       document.getElementById("PalCareStatF").style.display="none";
    }
    if(document.getElementById("PrevPalL")) {
       document.getElementById("PrevPalL").style.display="none";
       document.getElementById("PrevPalF").style.display="none";
    }
    if(document.getElementById("TransferSrcL")) {
       document.getElementById("TransferSrcL").style.display="none";
       document.getElementById("TransferSrcF").style.display="none";
    }
    if(document.getElementById("QasNumL")) {
       document.getElementById("QasNumL").style.display="none";
       document.getElementById("QasNumF").style.display="none";
    }
    if(document.getElementById("AdmissCatL")) {
       document.getElementById("AdmissCatL").style.display="none";
       document.getElementById("AdmissCatF").style.display="none";
    }
    if(document.getElementById("PubPricAdmL")) {
       document.getElementById("PubPricAdmL").style.display="none";
       document.getElementById("PubPricAdmF").style.display="none";
    }
    if(document.getElementById("SrcRefLocL")) {
       document.getElementById("SrcRefLocL").style.display="none";
       document.getElementById("SrcRefLocF").style.display="none";
    }
    if(document.getElementById("ClinialRefL")) {
       document.getElementById("ClinialRefL").style.display="none";
       document.getElementById("ClinialRefF").style.display="none";
    }
    if(document.getElementById("PrevSpecTitle")) {
       document.getElementById("PrevSpecTitle").style.display="none";
       document.getElementById("PrevSpecField").style.display="none";
    }
  }
   
  if(State ==  "4") { // 4 = Queensland
    if(document.getElementById("mhadoctr")) {
      if(document.getElementById("mhadoctr").value=="1") {
         document.getElementById("QLD_MH_Row1").style.display="";
         document.getElementById("QLD_MH_Row2").style.display="";
         document.getElementById("QLD_MH_Row3").style.display="";
         document.getElementById("QLD_MH_Row4").style.display="";
      }
    }
    if(document.getElementById("UsualAccomL")) {
       document.getElementById("UsualAccomL").style.display="none";
       document.getElementById("UsualAccomF").style.display="none";
    }
    if(document.getElementById("AdmissCatL")) {
       document.getElementById("AdmissCatL").style.display="none";
       document.getElementById("AdmissCatF").style.display="none";
    }
    if(document.getElementById("PubPricAdmL")) {
       document.getElementById("PubPricAdmL").style.display="none";
       document.getElementById("PubPricAdmF").style.display="none";
    }
    if(document.getElementById("SrcRefLocL")) {
       document.getElementById("SrcRefLocL").style.display="none";
       document.getElementById("SrcRefLocF").style.display="none";
    }
    if(document.getElementById("ClinialRefL")) {
       document.getElementById("ClinialRefL").style.display="none";
       document.getElementById("ClinialRefF").style.display="none";
    }
    if(document.getElementById("PrevSpecTitle")) {
       document.getElementById("PrevSpecTitle").style.display="none";
       document.getElementById("PrevSpecField").style.display="none";
    }
  }
   
  if(State ==  "5") { // 5 = South Australia
     if(document.getElementById("AmdCriteriaL")) {
       document.getElementById("AmdCriteriaL").style.display="none";
       document.getElementById("AmdCriteriaF").style.display="none";
     }
    if(document.getElementById("PrevPalL")) {
       document.getElementById("PrevPalL").style.display="none";
       document.getElementById("PrevPalF").style.display="none";
    }
    if(document.getElementById("TransferSrcL")) {
       document.getElementById("TransferSrcL").style.display="none";
       document.getElementById("TransferSrcF").style.display="none";
    }
    if(document.getElementById("QasNumL")) {
       document.getElementById("QasNumL").style.display="none";
       document.getElementById("QasNumF").style.display="none";
    }
    if(document.getElementById("SrcRefLocL")) {
       document.getElementById("SrcRefLocL").style.display="none";
       document.getElementById("SrcRefLocF").style.display="none";
    }
    if(document.getElementById("ClinialRefL")) {
       document.getElementById("ClinialRefL").style.display="none";
       document.getElementById("ClinialRefF").style.display="none";
    }
    if(document.getElementById("PrevSpecTitle")) {
       document.getElementById("PrevSpecTitle").style.display="none";
       document.getElementById("PrevSpecField").style.display="none";
    }
  }
   
  if(State ==  "6") { // 6 = Western Australia
     if(document.getElementById("AmdCriteriaL")) {
       document.getElementById("AmdCriteriaL").style.display="none";
       document.getElementById("AmdCriteriaF").style.display="none";
     }
     if(document.getElementById("UsualAccomL")) {
       document.getElementById("UsualAccomL").style.display="none";
       document.getElementById("UsualAccomF").style.display="none";
     }
     if(document.getElementById("PrevPalL")) {
        document.getElementById("PrevPalL").style.display="none";
        document.getElementById("PrevPalF").style.display="none";
     }
//     if(document.getElementById("TransferSrcL")) {
//        document.getElementById("TransferSrcL").style.display="none";
//        document.getElementById("TransferSrcF").style.display="none";
//     }
     if(document.getElementById("QasNumL")) {
        document.getElementById("QasNumL").style.display="none";
        document.getElementById("QasNumF").style.display="none";
     }
     if(document.getElementById("AdmissCatL")) {
        document.getElementById("AdmissCatL").style.display="none";
        document.getElementById("AdmissCatF").style.display="none";
     }
     if(document.getElementById("PubPricAdmL")) {
        document.getElementById("PubPricAdmL").style.display="none";
        document.getElementById("PubPricAdmF").style.display="none";
     }
    if(document.getElementById("PrevSpecTitle")) {
       document.getElementById("PrevSpecTitle").style.display="none";
       document.getElementById("PrevSpecField").style.display="none";
    }
  }
//
}
