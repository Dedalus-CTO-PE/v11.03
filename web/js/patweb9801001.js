//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb9801001.js
//
// Written   : 22.01.2013 Jill Parkinson 
//
// Function  : Standard Functions Used in patweb9801001
//
// Version   :
//
// V10.11.02 04/12/2017  Richa Phogat   TSK 0843363
//           Added function DisplayFieldsHEA()
//           Added separation line between Concession Card details and PMI/Death
//           Details
// V10.03.00 22/01/2013  Jill Parkinson CAR 276498
//           Created include
//========================================================================
function checkHospitalPopUp(){
   if(!isWhitespace(document.PatientLinks.invcasek.value)){
        linkurl="watweb01.pbl?reportno=02&template=032" +
           "&urnumber="+document.PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&urnumber="+document.PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&invcasek="+document.PatientLinks.invcasek.value.replace(/ /g,"+") +
           "&allowahs=1"+
           "&useinvad=1";
        Left=(document.body.clientWidth-900)/2;
        DFrameLink(linkurl,50,Left,900,650);
   }
   if(!isWhitespace(document.PatientLinks.invadmno.value)){
     if(document.PatientLinks.invvistp.value==" 1"){
        Left=(document.body.clientWidth-850)/2;
        linkurl="emrweb02.pbl?reportno=01&template=022" +
           "&urnumber="+document.PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&urnumber="+document.PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&invadmno="+document.PatientLinks.invadmno.value.replace(/ /g,"+") +
           "&allowahs=1"+
           "&useinvad=1";

        DFrameLink(linkurl,50,Left,850,450);
     }
     if(document.PatientLinks.invvistp.value==" 3"){
        linkurl="patweb98.pbl?reportno=01&template=191" +
           "&urnumber="+document.PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&urnumber="+document.PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&invadmno="+document.PatientLinks.invadmno.value.replace(/ /g,"+") +
           "&allowahs=1"+
           "&useinvad=1";

        Left=(document.body.clientWidth-850)/2;
        DFrameLink(linkurl,50,Left,850,550);
     }
     if(document.PatientLinks.invvistp.value==" 7"){
        linkurl="patweb98.pbl?reportno=01&template=192" +
           "&urnumber="+document.PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&urnumber="+document.PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&invadmno="+document.PatientLinks.invadmno.value.replace(/ /g,"+") +
           "&allowahs=1"+
           "&useinvad=1";

        Left=(document.body.clientWidth-850)/2;
        DFrameLink(linkurl,50,Left,850,250);
     }
     if(document.PatientLinks.invvistp.value=="17"){
        linkurl="oprweb01.pbl?reportno=04&template=034" +
           "&urnumber="+document.PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&urnumber="+document.PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&invadmno="+document.PatientLinks.invadmno.value.replace(/ /g,"+") +
           "&allowahs=1"+
           "&useinvad=1";

        Left=(document.body.clientWidth-900)/2;
        DFrameLink(linkurl,50,Left,900,450);
     }
     if(document.PatientLinks.invvistp.value==" 2"){
        linkurl="outweb02.pbl?reportno=03&template=022" +
           "&urnumber="+document.PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&urnumber="+document.PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&invadmno="+document.PatientLinks.invadmno.value.replace(/ /g,"+") +
           "&allowahs=1"+
           "&useinvad=1";

        Left=(document.body.clientWidth-850)/2;
        DFrameLink(linkurl,50,Left,850,550);
     }
     if(document.PatientLinks.invvistp.value=="10"){
        linkurl="allweb02.pbl?reportno=02&template=032" +
           "&urnumber="+document.PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&urnumber="+document.PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&invadmno="+document.PatientLinks.invadmno.value.replace(/ /g,"+") +
           "&allowahs=1"+
           "&useinvad=1";

        Left=(document.body.clientWidth-950)/2;
        DFrameLink(linkurl,50,Left,950,550);
     }
 }
}
function DisplayFieldsHEA() {
  if(document.getElementById("PMIDef1L")) {
    if(isWhitespace(document.getElementById("PMIDef1L").innerHTML)) {
      document.getElementById("PMIDef1L").innerHTML="";
      document.getElementById("PMIDef1F").innerHTML="";
    }
  }
  if(document.getElementById("PMIDef2L")) {
    if(isWhitespace(document.getElementById("PMIDef2L").innerHTML)) {
      document.getElementById("PMIDef2L").innerHTML="";
      document.getElementById("PMIDef2F").innerHTML="";
    }
  }
  if(document.getElementById("PMIDef3L")) {
    if(isWhitespace(document.getElementById("PMIDef3L").innerHTML)) {
      document.getElementById("PMIDef3L").innerHTML="";
      document.getElementById("PMIDef3F").innerHTML="";
    }
  }
  if(document.getElementById("PMIDef4L")) {
    if(isWhitespace(document.getElementById("PMIDef4L").innerHTML)) {
      document.getElementById("PMIDef4L").innerHTML="";
      document.getElementById("PMIDef4F").innerHTML="";
    }
  }
  if(document.getElementById("PMIDef5L")) {
    if(isWhitespace(document.getElementById("PMIDef5L").innerHTML)) {
      document.getElementById("PMIDef5L").innerHTML="";
      document.getElementById("PMIDef5F").innerHTML="";
    }
  }

  if(document.getElementById("PMIDef1L")) {
    if((document.getElementById("PMIDef1L").innerHTML=="") &&
       (document.getElementById("PMIDef2L").innerHTML=="") &&
       (document.getElementById("PMIDef3L").innerHTML=="") &&
       (document.getElementById("PMIDef4L").innerHTML=="") &&
       (document.getElementById("PMIDef5L").innerHTML==""))
      {
       document.getElementById("headerline").style.display="none";
      }
  }
}
//==========================================================================
// Check Identifying Gender and Pronoun details
//==========================================================================
function ChkIdentifyGenderPronoun(f) {
  ind11 = f.psexin11.value;
  ind12 = f.psexin12.value;

  if (ind11=="G" || ind12=="P") {
    document.getElementById('GenderExtra').style.display = "";
    ChkIdentifyGender(f,ind11);
    ChkIdentifyPronoun(f,ind12);
  }
  else
  {
    document.getElementById('GenderExtra').style.display = "none";
    IdenGenLbl.innerHTML = idenGenDetailBlank.innerHTML;
    IdenGenDetail.innerHTML = idenGenDetailBlank.innerHTML;
    IdenProLbl.innerHTML = idenProDetailBlank.innerHTML;
    IdenProDetail.innerHTML = idenProDetailBlank.innerHTML;
  }
}
//==========================================================================
// Check Identifying Gender
//==========================================================================
function ChkIdentifyGender(f,ind) {
  if (ind=="G") {
    IdenGenLbl.innerHTML = idenGenLblShow.innerHTML;
    IdenGenDetail.innerHTML = idenGenDetailShow.innerHTML;
    ind1 = f.idgenin1.value;
    if (ind1=="O") {
      document.getElementById('IdenGenFreeTxt').innerHTML =
        document.getElementById('idenGenFreeTxtShow').innerHTML;
    }
    else {
      document.getElementById('IdenGenFreeTxt').innerHTML =
        document.getElementById('idenGenFreeTxtBlank').innerHTML;
    }
  }
  else {
    IdenGenLbl.innerHTML = idenGenDetailBlank.innerHTML;
    IdenGenDetail.innerHTML = idenGenDetailBlank.innerHTML;
  }
}
//==========================================================================
// Check Identifying Pronoun
//==========================================================================
function ChkIdentifyPronoun(f,ind) {
  if (ind=="P") {
    IdenProLbl.innerHTML = idenProLblShow.innerHTML;
    IdenProDetail.innerHTML = idenProDetailShow.innerHTML;
    ind1 = f.idproin1.value;
    if (ind1=="O") {
      document.getElementById('IdenProFreeTxt').innerHTML =
        document.getElementById('idenProFreeTxtShow').innerHTML;
    }
    else {
      document.getElementById('IdenProFreeTxt').innerHTML =
        document.getElementById('idenProFreeTxtBlank').innerHTML;
    }
  }
  else {
    IdenProLbl.innerHTML = idenProDetailBlank.innerHTML;
    IdenProDetail.innerHTML = idenProDetailBlank.innerHTML;
  }
}

