//jsVersion  : V11.03.00
//========================================================================
//  Report 01
//========================================================================
function RehabDetails(epsno,fromdate,todate,caretyp) {
  if (caretyp=="2 " || caretyp=="6 " || caretyp=="7 " || caretyp=="K " ||
      caretyp=="R1" || caretyp=="R2") {    
    LinkUrl="patweb78.pbl?reportno=1&template=002" +
           "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") +
           "&episodno=" + epsno.replace(/ /g,"+") +
           "&epfrdate=" + fromdate.replace(/ /g,"+") +
           "&eptodate=" + todate.replace(/ /g,"+") +
           "&epcaretp=" + caretyp.replace(/ /g,"+") 
    Left=(document.body.clientWidth-650)/2
    DFrameLink(LinkUrl,50,Left,650,450)
  } 
  else if (caretyp=="8 "|| caretyp=="MC") {
    LinkUrl="patweb78.pbl?reportno=1&template=003" +
           "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") +
           "&episodno=" + epsno.replace(/ /g,"+") +
           "&epfrdate=" + fromdate.replace(/ /g,"+") +
           "&eptodate=" + todate.replace(/ /g,"+") +
           "&epcaretp=" + caretyp.replace(/ /g,"+") 
    Left=(document.body.clientWidth-620)/2
    DFrameLink(LinkUrl,50,Left,620,380)
  }
  else if (caretyp=="P ") {
    LinkUrl="patweb78.pbl?reportno=1&template=006" +
           "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") +
           "&episodno=" + epsno.replace(/ /g,"+") +
           "&epfrdate=" + fromdate.replace(/ /g,"+") +
           "&eptodate=" + todate.replace(/ /g,"+") +
           "&epcaretp=" + caretyp.replace(/ /g,"+")
    Left=(document.body.clientWidth-470)/2
    DFrameLink(LinkUrl,50,Left,470,380)
  }
  else if (caretyp=="9 ") {
    LinkUrl="patweb78.pbl?reportno=1&template=004" +
           "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") +
           "&episodno=" + epsno.replace(/ /g,"+") +
           "&epfrdate=" + fromdate.replace(/ /g,"+") +
           "&eptodate=" + todate.replace(/ /g,"+") +
           "&epcaretp=" + caretyp.replace(/ /g,"+") 
    Left=(document.body.clientWidth-650)/2
    DFrameLink(LinkUrl,50,Left,650,380)
  }
  else if (caretyp=="E " || caretyp=="F ") {
    LinkUrl="patweb78.pbl?reportno=1&template=005" +
           "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") +
           "&episodno=" + epsno.replace(/ /g,"+") +
           "&epfrdate=" + fromdate.replace(/ /g,"+") +
           "&eptodate=" + todate.replace(/ /g,"+") +
           "&epcaretp=" + caretyp.replace(/ /g,"+")
    Left=(document.body.clientWidth-470)/2
    DFrameLink(LinkUrl,50,Left,470,380)
  }
}
//
function ListRehabDetQLD(epsno,fromdate,todate,caretyp) {
  LinkUrl="patweb78.pbl?reportno=7&template=006" +
         "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
         "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") +
         "&episodno=" + epsno.replace(/ /g,"+") +
         "&epfrdate=" + fromdate.replace(/ /g,"+") +
         "&eptodate=" + todate.replace(/ /g,"+") +
         "&epcaretp=" + caretyp.replace(/ /g,"+")
  location.href=LinkUrl
}
function QLDRdeLink(epsno,fromdate,todate,caretyp) {
  LinkUrl="patweb78.pbl?reportno=1&template=004" +
         "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
         "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") +
         "&episodno=" + epsno.replace(/ /g,"+") +
         "&epfrdate=" + fromdate.replace(/ /g,"+") +
         "&eptodate=" + todate.replace(/ /g,"+") +
         "&epcaretp=" + caretyp.replace(/ /g,"+")
    Left=(document.body.clientWidth-470)/2
    DFrameLink(LinkUrl,50,Left,470,380)
}
//
function ListRehabDetACT(epsno,fromdate,todate,caretyp) {
  LinkUrl="patweb78.pbl?reportno=7&template=006" +
         "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
         "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") +
         "&episodno=" + epsno.replace(/ /g,"+") +
         "&epfrdate=" + fromdate.replace(/ /g,"+") +
         "&eptodate=" + todate.replace(/ /g,"+") +
         "&epcaretp=" + caretyp.replace(/ /g,"+")
  location.href=LinkUrl
}
//
function RehabDetQLD(epsno,epsct,fromdate,todate,caretyp) {
  if(caretyp=="21"){
    LinkUrl="patweb78.pbl?reportno=7&template=002" +
           "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") +
           "&episodno=" + epsno.replace(/ /g,"+") +
           "&episodct=" + epsct.replace(/ /g,"+") +
           "&epfrdate=" + fromdate.replace(/ /g,"+") +
           "&eptodate=" + todate.replace(/ /g,"+") +
           "&epcaretp=" + caretyp.replace(/ /g,"+")
    Left=(document.body.clientWidth-480)/2
    DFrameLink(LinkUrl,50,Left,480,450)
  }
  else if((caretyp=="09")||(caretyp=="10")||(caretyp=="11")||(caretyp=="20")
        ||(caretyp=="31")||(caretyp=="30")) {
    LinkUrl="patweb78.pbl?reportno=7&template=004" +
           "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") +
           "&episodno=" + epsno.replace(/ /g,"+") +
           "&episodct=" + epsct.replace(/ /g,"+") +
           "&epfrdate=" + fromdate.replace(/ /g,"+") +
           "&eptodate=" + todate.replace(/ /g,"+") +
           "&epcaretp=" + caretyp.replace(/ /g,"+")
    Left=(document.body.clientWidth-470)/2
    DFrameLink(LinkUrl,50,Left,470,380)
  }
}
//
function RehabDetACT(epsno,epsct,fromdate,todate,caretyp) {
  if (caretyp=="21" || caretyp=="22" || caretyp=="23") {
    LinkUrl="patweb78.pbl?reportno=7&template=002" +
           "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") +
           "&episodno=" + epsno.replace(/ /g,"+") +
           "&episodct=" + epsct.replace(/ /g,"+") +
           "&epfrdate=" + fromdate.replace(/ /g,"+") +
           "&eptodate=" + todate.replace(/ /g,"+") +
           "&epcaretp=" + caretyp.replace(/ /g,"+")
    Left=(document.body.clientWidth-480)/2
    DFrameLink(LinkUrl,50,Left,480,450)
  }
  else if (caretyp=="40") {
    LinkUrl="patweb78.pbl?reportno=7&template=004" +
           "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") +
           "&episodno=" + epsno.replace(/ /g,"+") +
           "&episodct=" + epsct.replace(/ /g,"+") +
           "&epfrdate=" + fromdate.replace(/ /g,"+") +
           "&eptodate=" + todate.replace(/ /g,"+") +
           "&epcaretp=" + caretyp.replace(/ /g,"+")
    Left=(document.body.clientWidth-470)/2
    DFrameLink(LinkUrl,50,Left,470,380)
  }
}
//
function Barthel(score) {
  if (score.value < 0 || score.value > 100) {
    alert("Barthel index score must be in the range of 0 to 100.");  
    score.focus();
  }
  TextBlurHandler(score);   // Check for Numeric
}
function FIM(score) {
  if (score.value < 0 || (score.value > 126 && score.value != 999)) {
    alert("FIM score must be in the range of 0 to 126, or 999");
    score.focus();
  }
  TextBlurHandler(score);   // Check for Numeric
}
function PallAdm(state) {
  if (isWhitespace(state.value)) return;
  if (state.value < 1 || state.value > 3) {
    alert("The palliative care state on admission must be 1, 2, or 3.");
    state.focus();
  }
  TextBlurHandler(state);   // Check for Numeric
}
function PallDis(state) {
  if (isWhitespace(state.value)) return;
  if (state.value < 0 || state.value > 3) {
    alert("The palliative care state on discharge must be 0, 1, 2, or 3.");
    state.focus();
  }
  TextBlurHandler(state);   // Check for Numeric
}
function RUGAdm(rugadl) {
  if (isWhitespace(rugadl.value)) return;
  if (rugadl.value < 4 || rugadl.value > 18) {
    alert("The RUG ADL on admission must be in the range 4 to 18.");
    rugadl.focus();
  }
  TextBlurHandler(rugadl);   // Check for Numeric
}
function RUGDis(rugadl) {
  if (isWhitespace(rugadl.value)) return;
  if ((rugadl.value < 0 || (rugadl.value > 0 && rugadl.value < 4 ))||
       rugadl.value > 18) {
    alert("The RUG ADL on discharge must be 0, or be in the range 4 to 18.");
    rugadl.focus();
  }
  TextBlurHandler(rugadl);   // Check for Numeric
}
function SourcePall(source) {
  if (isWhitespace(source.value)) return;
  if (source.value < 1 || source.value > 99) {
    alert("The source of referral to palliative care must be between 1 and 99.");
    source.focus();
  }
  TextBlurHandler(source);   // Check for Numeric
}
function DispImpairCode() {
  stateind=document.AddForm.ptcnhdps.value;
  publcind=document.AddForm.ptcnhosp.value;
  caretind=trim(document.AddForm.caretype.value);
  if ((stateind=="3") && (publcind=="1")) {
    if (caretind=="2" || caretind=="6"|| caretind=="P") {
      ImpairLabel.innerHTML="Impairment Code";
      ImpairField.innerHTML=impairdisplay.innerHTML;
      valImpairmentCode(document.AddForm.ptrde021,document.AddForm.d_ptrde021);
      document.AddForm.ptrde021.className=""
      ReturnString=SetDateYYYYMMDD(document.AddForm.disdate.value);
      if(ReturnString>"20120701"){
       document.AddForm.ptrde021.className="Mandatory"}
    }
  } else {
    ImpairLabel.innerHTML="";
    ImpairField.innerHTML="";
  }
}
function DispScore() {
  stateind=document.AddForm.ptcnhdps.value;
  publcind=document.AddForm.ptcnhosp.value;
  caretind=trim(document.AddForm.caretype.value);
  if (caretind=="MC") {
    ScoreLabel.innerHTML="";
    ScoreField.innerHTML="";
  } else {
    ScoreLabel.innerHTML="Source of Referral for Pall Care";
    ScoreField.innerHTML=scoredisplay.innerHTML;
  }
}
function DispPhaseOfCare() {
  stateind=document.AddForm.ptcnhdps.value;
  publcind=document.AddForm.ptcnhosp.value;
  caretind=trim(document.AddForm.caretype.value);
  if ((stateind=="3") && (publcind=="1") && (caretind=="8")) {
    Phase1Label.innerHTML="Phase of Care";
//    Phase2Label.innerHTML="Phase of Care on Discharge";
    Phase1Field.innerHTML=phase1display.innerHTML;
//    Phase2Field.innerHTML=phase2display.innerHTML;
  } else {
    Phase1Label.innerHTML="";
//    Phase2Label.innerHTML="";
    Phase1Field.innerHTML="";
//    Phase2Field.innerHTML="";
  }
}
function ShowPhaseDetails(epskey) {
  LinkUrl="patweb78.pbl?reportno=10&template=001" +
          "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
          "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") +
          "&episkeys=" + epskey
  location.href=LinkUrl
}
function UpdatePhase(epsno,phasdate) {
    LinkUrl="patweb78.pbl?reportno=10&template=003" +
           "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") +
           "&pmfoc002=" + epsno.replace(/ /g,"+") +
           "&phasdate=" + phasdate.replace(/ /g,"+")
    Left=(document.body.clientWidth-400)/2
    DFrameLink(LinkUrl,150,Left,400,250)
}
function CheckPhaseDate() {
 a=document.AddForm.pmfoc003;
 b=document.AddForm.epfrdate;
 c=document.AddForm.eptodate;

  if (document.AddForm.admnstat != undefined && 
      trim(document.AddForm.admnstat.value) == "Current") {

    if (!(SetDateYYYYMMDD(a.value) <= SetDateYYYYMMDD(c.value))) {
    alert("Phase Change Date must be less than or equal to episode end date of " + c.value);
      return false ;
    }

  } else {

    if (!(SetDateYYYYMMDD(a.value) < SetDateYYYYMMDD(c.value))) {
    alert("Phase Change Date must be less than episode end date of " + c.value);
      return false ;
    }

  }

  if (!(SetDateYYYYMMDD(a.value) > SetDateYYYYMMDD(b.value))) {
    alert("Phase Change Date must be greater than episode start date of " + b.value);
    return false ;
  }
  return true;
}

function ShowTriageScoreAdm() {

  if((document.getElementById('ptcnhdps') == undefined) ||
     (document.getElementById('ptcnhosp') == undefined) ||
     (document.getElementById('caretype') == undefined)) {
      return false;
   }

  var StateInd=document.getElementById('ptcnhdps').value;
  var PublicHosp=document.getElementById('ptcnhosp').value;
  var PalliativeCare=document.getElementById('caretype').value.substr(0,1);

  //Show Triage Score on Admission for Public Hospital Palliative Care for
  //state of Victoria
    if ((StateInd == "3") && (PublicHosp == "1") && (PalliativeCare == "8")){
     document.getElementById('tscoreadm').style.display="";
     return true;
    }

    document.getElementById('tscoreadm').style.display="none";
    return false;
}

