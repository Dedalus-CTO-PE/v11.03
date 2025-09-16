//jsVersion  : V11.03.00
//------------------------------------------------------------
// Validate Separation Referral Characters
//
//------------------------------------------------------------
function SeparationRef(Separation,Sex,patage) {
  var ValidCodes;
  var ValidCodes2 = " "
  var fnyr2015 = "20150701";
  Separation.value=Separation.value.toUpperCase()

  if (SetDateYYYYMMDD(document.getElementsByName("trandate1")[0].value) <
      fnyr2015) {
    ValidCodes = "AKEFPMBUCSDGRXLT ";
  } else {
    ValidCodes = "AKEFHBUCSDGRXLT "; 
  }

  Char1=Separation.value.substr(0,1)
  Char2=Separation.value.substr(1,1)
  Char3=Separation.value.substr(2,1)
  Char4=Separation.value.substr(3,1)
  PatSex=Sex.substr(0,1)

  if(Separation.value.length == 2 ) {                                        
    if (Char1==Char2) 
        {
         alert("Duplicate codes not allowed")
        }                                                                 
  }
  if(Separation.value.length == 3 ) {                                        
    if (Char1==Char2 || Char1==Char3 || Char2==Char3) 
        {
         alert("Duplicate codes not allowed")
        }                                                                
  }
  if(Separation.value.length == 4 ) {                                        
    if (Char1==Char2 || Char1==Char3 || Char1==Char4 ||
        Char2==Char3 || Char2==Char4 || Char3==Char4) 
        {
         alert("Duplicate codes not allowed")
        }                                            //HPS Code ends here
  }
// No other codes can be used with code X
  if (Char1 == "X") {
    if (Char2!="" && ValidCodes2.indexOf(Char2)==-1) {
        alert("Incompatible Separation Referral Characters")
        SeparationAlert()
        Separation.focus() 
        return;}
    if (Char3!="" && ValidCodes2.indexOf(Char3)==-1) {
        alert("Incompatible Separation Referral Characters")
        SeparationAlert()
        Separation.focus() 
        return;}
    if (Char4!="" && ValidCodes2.indexOf(Char4)==-1) {
        alert("Incompatible Separation Referral Characters")
        SeparationAlert()
        Separation.focus() 
        return;}
  }
// No other codes can be used with code X
  if (Char2 == "X") {
    if (Char1!="" && ValidCodes2.indexOf(Char2)==-1) {
        alert("Incompatible Separation Referral Characters")
        SeparationAlert()
        Separation.focus() 
        return;}
    if (Char3!="" && ValidCodes2.indexOf(Char3)==-1) {
        alert("Incompatible Separation Referral Characters")
        SeparationAlert()
        Separation.focus() 
        return;}
    if (Char4!="" && ValidCodes2.indexOf(Char4)==-1) {
        alert("Incompatible Separation Referral Characters")
        SeparationAlert()
        Separation.focus() 
        return;}
  }
// No other codes can be used with code X
  if (Char3 == "X") {
    if (Char1!="" && ValidCodes2.indexOf(Char2)==-1) {
        alert("Incompatible Separation Referral Characters")
        SeparationAlert()
        Separation.focus() 
        return;}
    if (Char2!="" && ValidCodes2.indexOf(Char3)==-1) {
        alert("Incompatible Separation Referral Characters")
        SeparationAlert()
        Separation.focus() 
        return;}
    if (Char4!="" && ValidCodes2.indexOf(Char4)==-1) {
        alert("Incompatible Separation Referral Characters")
        SeparationAlert()
        Separation.focus() 
        return;}
  }
// No other codes can be used with code X
  if (Char4 == "X") {
    if (Char1!="" && ValidCodes2.indexOf(Char2)==-1) {
        alert("Incompatible Separation Referral Characters")
        SeparationAlert()
        Separation.focus() 
        return;}
    if (Char2!="" && ValidCodes2.indexOf(Char3)==-1) {
        alert("Incompatible Separation Referral Characters")
        SeparationAlert()
        Separation.focus() 
        return;}
    if (Char3!="" && ValidCodes2.indexOf(Char4)==-1) {
        alert("Incompatible Separation Referral Characters")
        SeparationAlert()
        Separation.focus() 
        return;}
  }
// Check for male with Post Natal Care

  if (PatSex == "M") {
     if (Char1=="F" || Char2=="F" || Char3=="F" || Char4=="F"){
        alert("Invalid Separation Referral Character for a male")
     }
     if (Char1=="E" || Char2=="E" || Char3=="E" || Char4=="E"){
        alert("Invalid Separation Referral Character for a male")
     }
}
       
//
  if (Char1!="" && ValidCodes.indexOf(Char1)==-1) {
      alert("Invalid Separation Referral Character \"" + Char1 + "\"")
      SeparationAlert()
      Separation.focus() }
  if (Char2!="" && ValidCodes.indexOf(Char2)==-1) {
      alert("Invalid Separation Referral Character \"" + Char2 + "\"")
      SeparationAlert()
      Separation.focus() }
  if (Char3!="" && ValidCodes.indexOf(Char3)==-1) {
      alert("Invalid Separation Referral Character \"" + Char3 + "\"")
      SeparationAlert()
      Separation.focus() }
  if (Char4!="" && ValidCodes.indexOf(Char4)==-1) {
      alert("Invalid Separation Referral Character \"" + Char4 + "\"")
      SeparationAlert()
      Separation.focus() }
//      SeprefChk(Separation);

}

//------------------------------------------------------------
// Separation Referral Alert
//------------------------------------------------------------
function SeparationAlert() {
  var fnyr2015 = "20150701";
  if (SetDateYYYYMMDD(document.getElementsByName("trandate1")[0].value) < 
      fnyr2015) {
  alert("Valid Separation Referral Character\n\n" +
"A - Referral to ACAS, arranged before discharge\n" +
"K - Referral to ATSI, arranged before discharge\n" +
"E - Domiciliary postnatal care, referral declined\n" +
"F - Domiciliary postnatal care, arranged before discharge\n" +
"P - Post acute care program services, arranged before discharge\n" +
"M - Referral to a community rehabilitation centre, arranged before discharge\n" +
"B - Community palliative care support, arranged before discharge\n" +
"U - Home nursing support, arranged before disc (name change from dis nursing)\n" +
"C - Mental health community services, arranged before discharge\n" +
"S - Referral to private psychiatrist, arranged before discharge\n" +
"D - Psychiatric disability support service, arranged before discharge\n" +
"G - Referral to general practitioner, arranged before discharge\n" +
"R - Other clinical care &/or support services, arranged before discharge\n" +
"X - No referral or support services, arranged before discharge\n" +
"L - Alcohol and drug treatment service, arranged before discharge\n" +
"T - Referral to Transition Care home based program, arranged before discharge");
  } else {
  alert("Valid Separation Referral Character\n\n" +
"A - Referral to ACAS, arranged before discharge\n" +
"K - Referral to ATSI, arranged before discharge\n" +
"E - Domiciliary postnatal care, referral declined\n" +
"F - Domiciliary postnatal care, arranged before discharge\n" +
"H - Health Independence Program services, arranged before discharge\n" +
"B - Community palliative care support, arranged before discharge\n" +
"U - Home nursing support, arranged before disc (name change from dis nursing)\n" +
"C - Mental health community services, arranged before discharge\n" +
"S - Referral to private psychiatrist, arranged before discharge\n" +
"D - Psychiatric disability support service, arranged before discharge\n" +
"G - Referral to general practitioner, arranged before discharge\n" +
"R - Other clinical care &/or support services, arranged before discharge\n" +
"X - No referral or support services, arranged before discharge\n" +
"L - Alcohol and drug treatment service, arranged before discharge\n" +
"T - Referral to Transition Care home based program, arranged before discharge");
  }
}
//------------------------------------------------------------
// Automatic Update Transfer Source based on Destination
//------------------------------------------------------------
function DisplayTrnSrc() {
  i=document.pat96pdf.dschdest.selectedIndex;
  ind=document.pat96pdf.dschdest.options[i].value.substring(4,5)
//  document.pat96pdf.trnsfsrc.selectedIndex=0
  if (ind!="1") {
//    TranSrc.innerHTML="";
    TranSrc.innerHTML=transferblank.innerHTML;
    document.pat96pdf.trnsfsrc.value="";
  } else {
    TranSrc.innerHTML=transfersrc.innerHTML;
  }
}
//------------------------------------------------------------
// Show Autopsy Indicator based on Deceased Indicator
//------------------------------------------------------------
function DisplayAutopsy() {
  i=document.pat96pdf.dschstat.selectedIndex
  ind=document.pat96pdf.dschstat.options[i].value.substring(3,4)
  if (ind=="D") {
    document.pat96pdf.dschdind.value="1"
    Autop.innerHTML=autopsyDiv.innerHTML;
  }
  else {
    Autop.innerHTML="";
    document.pat96pdf.dschdind.value="0"}
}
//------------------------------------------------------------
// Move Medical Record Prompt
//------------------------------------------------------------
function moveMREC() {
  var msg="Do you want to move Medical Record?";
  if (confirm(msg)) {
    document.pat96pdf.movemrec.value=1;
  } else {
    document.pat96pdf.movemrec.value=0;
  }
  document.pat96pdf.submit();
}
//------------------------------------------------------------
// Check Destination for transfer source
//------------------------------------------------------------
function ChkDestInd() {
  i=document.pat96pdf.dschdest.selectedIndex
  ind=document.pat96pdf.dschdest.options[i].value.substring(4,5)
//  document.pat96pdf.trnsfsrc.selectedIndex=0
  if (ind!="1") {
    document.pat96pdf.dschstat.focus()
    document.pat96pdf.trnsfsrc.value="";
    alert("Transfer source not required for selected Discharge Destination")
    document.pat96pdf.dschstat.focus()
  }
}
//------------------------------------------------------------
// Check status for transfer source
//------------------------------------------------------------
function ChkStatInd() {
  i=document.pat96pdf.dschstat.selectedIndex
  ind=document.pat96pdf.dschstat.options[i].value.substring(4,5)
//  document.pat96pdf.trnsfsrc.selectedIndex=0
  if (ind!="1") {
    document.pat96pdf.dschdest.focus()
    alert("Transfer source not required for selected Discharge Status")
    document.pat96pdf.dschdest.focus()
  }
}
//------------------------------------------------------------
// Set focus to transfer source if indicator set on Destination
//------------------------------------------------------------
function DischargeDest() {
  i=document.pat96pdf.dschdest.selectedIndex;
  ind=document.pat96pdf.dschdest.options[i].value.substring(4,5);
//  document.pat96pdf.trnsfsrc.selectedIndex=0;
  if (ind=="1") {
    document.pat96pdf.trnsfsrc.focus();
  } 
}
//------------------------------------------------------------
// Check indicator for transfer source
//------------------------------------------------------------
function CheckIndiStat(){
  i=document.pat96pdf.dschstat.selectedIndex
  ind=document.pat96pdf.dschstat.options[i].value.substring(4,5)
//  document.pat96pdf.trnsfsrc.selectedIndex=0
  if (ind=="1") {
    document.pat96pdf.trnsfsrc.focus()
  }
  // Check indicator for deceased
  i2=document.pat96pdf.dschstat.selectedIndex
  ind2=document.pat96pdf.dschstat.options[i2].value.substring(3,4)
  if (ind2=="D") {
    document.pat96pdf.dschdind.value="1"
  }
  else {
    document.pat96pdf.dschautp.checked=0 }
}

function DischargeStat() {
  // Set focus to transfer source if indicator set on Status
  i=document.pat96pdf.dschstat.selectedIndex
  ind=document.pat96pdf.dschstat.options[i].value.substring(4,5)
//  document.pat96pdf.trnsfsrc.selectedIndex=0
  if (ind=="1") {
    document.pat96pdf.trnsfsrc.focus()
  }
}

function Autopsy() {
  //set deceased indicator (hidden field) otherwise autospy must no be checked
  i=document.pat96pdf.dschstat.selectedIndex
  ind=document.pat96pdf.dschstat.options[i].value.substring(3,4)
  if (ind=="D") {
    document.pat96pdf.dschdind.value="1"
  }
  else {
    document.pat96pdf.dschautp.checked=0 }
}

function ChkDindi() {
  // check deceased indicator on status
  i=document.pat96pdf.dschstat.selectedIndex
  ind=document.pat96pdf.dschstat.options[i].value.substring(3,4)
  if (ind!="D") {
    document.pat96pdf.dschdia1.focus()
    alert("Autopsy not required for selected Discharge Status")
    document.pat96pdf.dschdia1.focus()
    document.pat96pdf.dschautp.checked=0
  }
}
function DisplayFieldsPRI() {
  if(!document.getElementById("ptcnhdps")) {
    return;
  }
      State1Label.innerHTML=DisplayBlankLabel.innerHTML;
      State1Field.innerHTML=DisplayBlankField.innerHTML;
      State2Label.innerHTML=DisplayBlankLabel.innerHTML;
      State2Field.innerHTML=DisplayBlankField.innerHTML;
      State3Label.innerHTML=DisplayBlankLabel.innerHTML;
      State3Field.innerHTML=DisplayBlankField.innerHTML;
      State4Field.innerHTML=DisplayBlankField.innerHTML;

  var State=document.getElementById("ptcnhdps").value;
  // 2 = NSW, 3 = VIC, 4 = QLD, 5 = SA, 6 = WA
  if(State == "2") {
   if(document.pat96pdf.admntype != undefined) {
    if(document.pat96pdf.admntype.value.substring(5,6)=="P"){
      State1Label.innerHTML=DisplayRefOnSepLabel.innerHTML;
      State1Field.innerHTML=DisplayRefOnSepField.innerHTML;
    }
   }
      State2Label.innerHTML=DisplayPayStatOnSepLabel.innerHTML;
      State2Field.innerHTML=DisplayPayStatOnSepField.innerHTML;
      State3Label.innerHTML=DisplayPallCareStatLabel.innerHTML;
      State3Field.innerHTML=DisplayPallCareStatField.innerHTML;
      State4Field.innerHTML=DisplayMentalLegalHidden.innerHTML;
  }
  if(State == "3"||State == "4") {
      State1Label.innerHTML=DisplayIntToReadmitLabel.innerHTML;
      State1Field.innerHTML=DisplayIntToReadmitField.innerHTML;
  }
  if(State == "3") {
      State2Label.innerHTML=DisplaySeparationRefLabel.innerHTML;
      State2Field.innerHTML=DisplaySeparationRefField.innerHTML;
    }
  if(State == "4") {
      State2Label.innerHTML=DisplayCarerAvailabilityLabel.innerHTML;
      State2Field.innerHTML=DisplayCarerAvailabilityField.innerHTML;
      State4Field.innerHTML=DisplayMentalLegalHidden.innerHTML;
      DisplayFieldsHEAQLDMH(); // Display HEA QLD MH fields
    }
  if(State == "5") {
      State1Label.innerHTML=DisplayMentalLegalLabel.innerHTML;
      State1Field.innerHTML=DisplayMentalLegalField.innerHTML;
    }
  if(State == "6") {
      State1Label.innerHTML=DisplayMentalLegalLabel.innerHTML;
      State1Field.innerHTML=DisplayMentalLegalField.innerHTML;
      document.pat96pdf.dschmhls.className="SelectMed Mandatory";
    }
  if(State == "7") {
      State1Label.innerHTML=DisplayMentalLegalLabel.innerHTML;
      State1Field.innerHTML=DisplayMentalLegalField.innerHTML;
      document.pat96pdf.dschmhls.className="SelectMed Mandatory";
    }
}
function ShowHouse() {
  if(document.pat96pdf.ptcnchod.value=="1") {
    Housekeeping.innerHTML=Displayhousekeeping.innerHTML;
  }
}
function ShowHousePRI() {
  if(document.pat96pdf.ptcnchod.value=="1") {
    HouseKeepLabel.innerHTML=DisplayHouseKeepLabel.innerHTML;
    HouseKeepField.innerHTML=DisplayHouseKeepField.innerHTML;
    HouseStatLabel.innerHTML=DisplayHouseStatLabel.innerHTML;
    HouseStatField.innerHTML=DisplayHouseStatField.innerHTML;
  }
}
function ShowHouseUpdate() {
  if(document.getElementById('ptcnchod').value=="1" &&
     document.getElementById('pmshrdin').value=="1") {
    Housekeeping.innerHTML=Displayhousekeeping.innerHTML;
    document.getElementById('notifyhs').selectedIndex=2;
    HouseMandatory();

    if (!isWhitespace(document.getElementById('pmshrdrs').value)) {
      for (x=0;x<document.getElementById('pmhrd006').length;x++) {
        if (document.getElementById('pmshrdrs').value ==
            document.getElementById('pmhrd006')[x].value.substr(0,3)) {
          document.getElementById('pmhrd006').selectedIndex = x;
        }
      }
    }
  }
}
function ShowHouseUpdPRI() {
  if(document.getElementById('ptcnchod').value=="1" &&
     document.getElementById('pmshrdin').value=="1") {
    HouseKeepLabel.innerHTML=DisplayHouseKeepLabel.innerHTML;
    HouseKeepField.innerHTML=DisplayHouseKeepField.innerHTML;
    HouseStatLabel.innerHTML=DisplayHouseStatLabel.innerHTML;
    HouseStatField.innerHTML=DisplayHouseStatField.innerHTML;
    document.getElementById('notifyhs').selectedIndex=2;
    HouseMandatory();

    if (!isWhitespace(document.getElementById('pmshrdrs').value)) {
      for (x=0;x<document.getElementById('pmhrd006').length;x++) {
        if (document.getElementById('pmshrdrs').value ==
            document.getElementById('pmhrd006')[x].value.substr(0,3)) {
          document.getElementById('pmhrd006').selectedIndex = x;
        }
      }
    }
  }
}
function HouseMandatory() {
  if(document.pat96pdf.notifyhs.value=="1") {
     document.pat96pdf.pmhrd006.className="SelectMed Mandatory"
     document.pat96pdf.pmhrd006.disabled=false;
  } else {
     document.pat96pdf.pmhrd006.selectedIndex=0;
     document.pat96pdf.pmhrd006.className="SelectMed Readonly"
     document.pat96pdf.pmhrd006.disabled=true;
  }
}
function SetHousekeeping() {
  if((document.pat96pdf.notifyhs == undefined) ||
     (document.pat96pdf.ptcnchod == undefined)){ return }
  if(document.pat96pdf.ptcnchod.value=="1" &&
     document.pat96pdf.notifyhs.value=="1") {
     document.pat96pdf.pmhrd004.value=document.pat96pdf.trandate1.value;
     document.pat96pdf.pmhrd005.value=document.pat96pdf.trantime.value;
  }
}
function checkDeceasedINP(deathInd) {
  if (deathInd == "D")
  {
    alert("Warning Message\n"+
          "Patient will be discharged as 'Deceased'. ");
  }
}
function checkTrans() {
  DisplayTrnSrc();
  deceasedIndicator = document.pat96pdf.dschdest.value.substr(3,1);
  checkDeceasedINP(deceasedIndicator);
}
function GenericPass() {
  var serverURL  = "../cgi-bin/patweb80.pbl?reportno=11" +
              "&secureid=" + document.pat96pdf.username.value +
              "&securepw=" + document.pat96pdf.password.value +
              "&valdtype=1";

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    return true;
  }
  else {
    return false;
  }
}
function ValDeceasedINP(deathInd) {
  if (deathInd == "D")
  {
    if(!confirm("Warning Message \n Patient is being discharged as 'Deceased'. Please select OK to confirm or Cancel to change the Discharge Destination.")) {
    document.pat96pdf.dschdest.value="";
    return;
    }
  }
  if ((deathInd=="D") && (document.pat96pdf.genericu.value=="1")) {
    UserDesc.innerHTML="Username/Password"
    UserField.innerHTML=userpassw.innerHTML;
  } else {
    UserDesc.innerHTML=""
    UserField.innerHTML=userblank.innerHTML;
  }

}

// Determine whether to allow collection of Mental Health Legal Status
function setMHLSCollect()
{
  if ( (document.pat96pdf.catmhlsa == undefined) ||
       (document.pat96pdf.d_actvls == undefined) )
    return false;

  var catAllocMHLS = document.pat96pdf.catmhlsa.value;
  var activeLSNoEnd = document.pat96pdf.d_actvls.value;
  var ind5 = "";
  var ind14 = "";


  //
  // Get indicator 14 value
  //
  if (catAllocMHLS == "AC")
  {
    // Cat AC - Unit
    ind5 = document.pat96pdf.d_catgAC.value.substr(7,1);
    ind14 = document.pat96pdf.d_catgAC.value.substr(30,1);
  }
  else if (catAllocMHLS == "CC") {
    // Cat CC - Care Type
    ind5 = document.pat96pdf.d_catgCC.value.substr(7,1);
    ind14 = document.pat96pdf.d_catgCC.value.substr(30,1);
  }

  if ((ind14 == "M") && (ind5 == "P")) {
    //
    // Is there any active Legal Status with no End Date ?
    //
    if (activeLSNoEnd == "1") {
      showMHDiv();

      if(isWhitespace(document.pat96pdf.mhdlukey.value)) {
      document.pat96pdf.redirect.value="mehweb01.pbl?reportno=09&template=001" +
  "&urnumber="+document.pat96pdf.urnumber.value.replace(/ /g,'+') +
  "&admissno="+document.pat96pdf.admissno.value.replace(/ /g,'+');
      } else {
      document.pat96pdf.redirect.value="mehweb01.pbl?reportno=09&template=003" +
  "&urnumber="+document.pat96pdf.mhdlukey.value.substr(0,8).replace(/ /g,'+') +
  "&uniqnumb="+document.pat96pdf.mhdlukey.value.substr(8,8).replace(/ /g,'+') +
  "&admissno="+document.pat96pdf.admissno.value.replace(/ /g,'+') +
  "&mvmedrec="+document.pat96pdf.movemrec.value;
      SetCookie("mhdlukeycookie",document.pat96pdf.mhdlukey.value);
      }

      if (document.pat96pdf.updmhdsc != undefined) {
        document.pat96pdf.updmhdsc.value = "1";  // update MH patient discharge
      }

      return true;
    }
  }

  return false;
}

function showMHDiv()
{
  if ( (document.getElementById('divMHDischarge') == undefined) ||
       (document.getElementById('spMHDischarge') == undefined) )
    return false;

  document.getElementById('divMHDischarge').innerHTML =
   document.getElementById('spMHDischarge').innerHTML;

  return true;
}

function setRTOS(){
  var RTOS = document.getElementById("RTOS");
  if(document.pat96pdf.admntype.value.substring(5,6)=="P"){
     document.pat96pdf.dschrtos.className = "Mandatory SelectMed";
     RTOS.style.visibility="visible";
     RTOS.style.display="";
  }
  else{
     document.pat96pdf.dschrtos.className = "";
     document.pat96pdf.dschrtos.value = "";
     RTOS.style.visibility="hidden";
     RTOS.style.display="none";
  }
}
//------------------------------------------------------------
// Statistical Discharge
//------------------------------------------------------------
function statDischarge(){
  if(document.pat96pdf.dschdest!=undefined) {
    var i=document.pat96pdf.dschdest.selectedIndex;
    var ind=document.pat96pdf.dschdest.options[i].value.substr(9,1);  // Cat DD
  } else {
    var i=document.pat96pdf.dschstat.selectedIndex;
    var ind=document.pat96pdf.dschstat.options[i].value.substr(9,1);  // Cat D
  }
  if(document.pat96pdf.statvtyp!=undefined) {      
     document.pat96pdf.statvtyp.value="";     
     document.pat96pdf.statvisn.value="";
  }
  if (ind != "S" && ind !="E") {
   document.getElementById('stathead').style.display="none";
   document.getElementById('statcarehead').style.display="none";
   document.getElementById('statcarevalue').style.display="none";
   document.getElementById('oldcarehead').style.display="none";
   document.getElementById('oldcarevalue').style.display="none";
   document.getElementById('d_ptmis012').className="";
   document.getElementById('d_ptmis004').className="";
   document.getElementById('d_ptmis005').className="";
   document.getElementById('d_ptmis010').className="";
   document.getElementById('pattypehead').style.display="none";
   document.getElementById('pattypevalue').style.display="none";
   document.getElementById('resphead').style.display="none";
   document.getElementById('respvalue').style.display="none";
   document.getElementById('d_ptmis007').className="";
   document.getElementById('d_ptmis024').className="";
   document.getElementById('unithead').style.display="none";
   document.getElementById('unitvalue').style.display="none";
   document.getElementById('wardhead').style.display="none";
   document.getElementById('wardvalue').style.display="none";
   document.getElementById('claimhead').style.display="none";
   document.getElementById('claimvalue').style.display="none";
   document.getElementById('d_ptmis027').className="";

  } else {
   if (document.pat96pdf.admstat.value=="4") {
    alert("Cannot Perform a Care Type Change when Patient is On Leave.");
    document.pat96pdf.dschdest.value="";
    return;
   } else {
   document.getElementById('stathead').style.display="";
   document.getElementById('statcarehead').style.display="";
   document.getElementById('statcarevalue').style.display="";
   document.getElementById('oldcarehead').style.display="";
   document.getElementById('oldcarevalue').style.display="";
   document.getElementById('d_ptmis012').className="Mandatory SelectMed";
   document.getElementById('d_ptmis004').className="Mandatory SelectMed";
   document.getElementById('d_ptmis005').className="mandatory SelectMed";
   document.getElementById('d_ptmis010').className="Mandatory SelectMed";
   document.getElementById('pattypehead').style.display="";
   document.getElementById('pattypevalue').style.display="";
   document.getElementById('resphead').style.display="";
   document.getElementById('respvalue').style.display="";
   document.getElementById('d_ptmis007').className="Mandatory";
   document.getElementById('d_ptmis024').className="Mandatory SelectMed";
   document.getElementById('unithead').style.display="";
   document.getElementById('unitvalue').style.display="";
   document.getElementById('wardhead').style.display="";
   document.getElementById('wardvalue').style.display="";
   document.getElementById('claimhead').style.display="";
   document.getElementById('claimvalue').style.display="";
   document.getElementById('d_ptmis027').className="Mandatory SelectMed";
   valDoctorUnit();
   LoadCurrentWard();
   LoadWardBeds();
   if (ind == "E") {
     showStatAdmSearch(document.getElementById('urnumber'),
                       document.getElementById('admissno'),
                       document.getElementById('trandate1'));
   }
   }
  }
}
function valDoctorUnit() {
  validateCode(31,pat96pdf.d_ptmis007,pat96pdf.doctnam2);
  selectOptions("30",pat96pdf.d_ptmis007,pat96pdf.d_ptmis024);
  selectUnit();
}
function selectUnit(){
  for (var i =0 ; i < document.pat96pdf.d_ptmis024.length; i++) {
    if (document.pat96pdf.d_ptmis024.options[i].value.substr(0,3)==
                 document.pat96pdf.deftunit.value.substr(0,3)) {
       document.pat96pdf.d_ptmis024.selectedIndex=i } };
    if (isWhitespace(document.pat96pdf.deftunit)) {
      if (pat96pdf.d_ptmis024.length==2) {
        pat96pdf.d_ptmis024.selectedIndex=1; } }
}
function DisContract() {
    i=document.pat96pdf.d_ptmis010.selectedIndex;
    ind=document.pat96pdf.d_ptmis010.options[i].value.substring(14,15)
    if (ind=="0"||ind=="5") {
      document.getElementById('contractxx').style.display="";
      document.pat96pdf.ptasf003.className="Mandatory";
    } else {
      document.getElementById('contractxx').style.display="none";
      document.pat96pdf.ptasf003.className="";
    }
}
function LoadCurrentWard() {
  for (var i =0 ; i < document.pat96pdf.d_ptmis004.length; i++) {
    if (document.pat96pdf.d_ptmis004.options[i].value.substr(0,3)==
                 document.pat96pdf.ptmis004.value.substr(0,3)) {
       document.pat96pdf.d_ptmis004.selectedIndex=i } };
}
function LoadWardBeds() {
  var p=document.pat96pdf;
  WardBedSelection(p.d_ptmis004,p.d_ptmis005,'A',p.x_ptmis005)
}
function statReadmit(){
// Statistical readmission changed
  p=document.pat96pdf
  if(document.pat96pdf.dschdest!=undefined) {
    var i=p.dschdest.selectedIndex;
    var ind=p.dschdest.options[i].value.substr(9,1);  // Cat DD
  } else {
    var i=p.dschstat.selectedIndex;
    var ind=p.dschstat.options[i].value.substr(9,1);  // Cat D
  }

  if(ind=='S'||ind=='O'||ind=='E'){
     p.action='patweb89.pbl';
     p.reportno.value='13';
    if(ind=='S' || ind=='E'){
      if(p.d_ptmis012.value.substr(0,3)==
         p.oldcare.value.substr(0,3)){
        alert("Error: Statistical Re-admission Care Type must be different"+
              " to the current Care Type");
        return;
      }
    }
   if(isWhitespace(p.ptmis011.value)){
     alert("Default Admission Type must be set up for Statistical Admission");
     return;
   }
   if(isWhitespace(p.ptmis009.value)){
   alert("Default Source of Referral must be set up for Statistical Admission");
     return;
   }
   if(ind=='O'){
    p.ptmis010.value=p.op_ptmis010.value;
    if(p.op_ptmis011 !=undefined){
    p.ptmis011.value=p.op_ptmis011.value;}
    p.ptmis012.value=p.op_ptmis012.value;
    p.ptmis027.value=p.op_ptmis027.value;
    p.ptmis007.value=p.op_ptmis007.value;
    p.ptvis075.value=p.op_ptvis075.value;
    p.ptmis024.value=p.op_ptmis024.value;
   } else {
    p.ptmis010.value=p.d_ptmis010.value;
    p.ptmis007.value=p.d_ptmis007.value;
    p.ptmis027.value=p.d_ptmis027.value;
    p.ptmis024.value=p.d_ptmis024.value;
    p.ptmis012.value=p.d_ptmis012.value;
    p.ptmis005.value=p.d_ptmis005.value;
    p.ptmis004.value=p.d_ptmis004.value;
    ind=document.pat96pdf.d_ptmis027.value.substring(3,4)
   }
   checkMen=p.ptmis024.value.substr(7,1);
   if (checkMen=="P") {
     if (p.mhadmflg != undefined)
     {
       p.mhadmflg.value="1";
     }
   }
   if(isWhitespace(p.ptmis012.value)){
      alert("Care Type must be set up for Statistical Admission");
      return;
   }
   if(isWhitespace(p.ptvis046.value)){
      alert("Default Admitting Point must be set up for Statistical Admission");
      return;
   }

   if(ind=="O"){
     p.ptmis020.value="";
     if(!confirm("Patient is being discharged as deceased Posthumous "+
             "Organ Donation.  Is this correct?")){
     return;
    }
   }
   p.ptmis001.value=p.trandate1.value;
   if(p.trantime.value.substr(0,5)=="00:00"){
      p.trantime.value="00:01:00"
   }
   p.ptmis002.value=p.trantime.value;
   dtime = new Date();
   dtime.setHours(p.trantime.value.substr(0,2));
   dtime.setMinutes(p.trantime.value.substr(3,2));
   dtime.setSeconds(p.trantime.value.substr(6,2));
   atime = new Date();
   atime.setTime(dtime.getTime()-60000);
   if(atime.getHours()<"10"){
     p.trantime.value="0"+atime.getHours()+":"+atime.getMinutes()+":"
                    +atime.getSeconds();
   } else {
     p.trantime.value=atime.getHours()+":"+atime.getMinutes()+":"
                    +atime.getSeconds();
   }
   checkTime(p.trantime);
//
//   checkBedStatus(p.ptmis068.value,
//                 p.ptmis076.value,p.ptmis001.value,
//                 p.ptmis030.value,p.ptmis002.value,
//                 p.ptrgm001.value,p.ptrgm002.value,
//                 p.ptrgm003.value,document.pat96pdf.submit());
//    return;

   }
// End Statistical readmission values
   document.pat96pdf.submit();

}
function checkstatDis() {
// check for Statistical readmission
  p=document.pat96pdf;

  if(p.dschdest!=undefined) {
    var i=p.dschdest.selectedIndex;
    var ind=p.dschdest.options[i].value.substr(9,1);  // Cat DD
  } else {
    var i=p.dschstat.selectedIndex;
    var ind=p.dschstat.options[i].value.substr(9,1);  // Cat D
  }

  if(ind=='S'||ind=='O'||ind=='E'){
//   p.deftdest.value="1";               // Already statistically discharged
     if(p.dschdest!=undefined) {         // so do not allow destination update
       p.dschdest.disabled=true;        
     } else {
       p.dschstat.disabled=true;        
     }
  } else {
//   p.deftdest.value="0";               // Not statistically discharged
     if(p.dschdest!=undefined) {         // so allow destination update
       p.dschdest.disabled=false;
     } else {
       p.dschstat.disabled=false; 
     }
  }
//
//    
//    Task 0870994 - Can't create new stat admission from update discharge
//
  return;
//
  document.getElementById('stathead').style.display="none";
  document.getElementById('statcarehead').style.display="none";
  document.getElementById('statcarevalue').style.display="none";
  document.getElementById('oldcarehead').style.display="none";
  document.getElementById('oldcarevalue').style.display="none";
  document.getElementById('d_ptmis012').className="";
  document.getElementById('d_ptmis004').className="";
  document.getElementById('d_ptmis005').className="";
  document.getElementById('d_ptmis010').className="";
  document.getElementById('pattypehead').style.display="none";
  document.getElementById('pattypevalue').style.display="none";
  document.getElementById('resphead').style.display="none";
  document.getElementById('respvalue').style.display="none";
  document.getElementById('d_ptmis007').className="";
  document.getElementById('d_ptmis024').className="";
  document.getElementById('unithead').style.display="none";
  document.getElementById('unitvalue').style.display="none";
  document.getElementById('wardhead').style.display="none";
  document.getElementById('wardvalue').style.display="none";
  document.getElementById('claimhead').style.display="none";
  document.getElementById('claimvalue').style.display="none";
  document.getElementById('d_ptmis027').className="";
}
function statDischargeUpd() {
//
//    Task 0870994 - Can't create new stat admission from update discharge
//                   you can only like to an existing current adm or discharge
//  if(document.pat96pdf.deftdest.value=="0"){
//  statDischarge();                   // allow update to statistical discharge
//  }
  if(document.pat96pdf.dschdest!=undefined) {
    var i=document.pat96pdf.dschdest.selectedIndex;
    var ind=document.pat96pdf.dschdest.options[i].value.substr(9,1);  // Cat DD
  } else {
    var i=document.pat96pdf.dschstat.selectedIndex;
    var ind=document.pat96pdf.dschstat.options[i].value.substr(9,1);  // Cat D
  }
  if(document.pat96pdf.statvtyp!=undefined) {
     document.pat96pdf.statvtyp.value="";
     document.pat96pdf.statvisn.value="";
  }
  if (ind !="E") {
    return;
  }

//
  showStatAdmSearchUpd(document.getElementById('urnumber'),
                       document.getElementById('admissno'),
                       document.getElementById('trandate1'));
}
//------------------------------------------------------------
// Display HEA QLD Mental Health Fields
//------------------------------------------------------------
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
      document.getElementById("ptqmh002").className="Mandatory SelectBigE";
      document.getElementById("ptqmh006").className="Mandatory SelectBigE";
   }
  if(document.getElementById("QLDMHFields3")) {
     document.getElementById("QLDMHFields3").style.display="";
     document.getElementById("pmsvx079").className="Mandatory SelectBigE";
     document.getElementById("ptqmh007").className="Mandatory SelectBigE";
  }
   if(document.getElementById("QLDMHFields4")) {
      document.getElementById("QLDMHFields4").style.display="";
      document.getElementById("ptqmh004").className="Mandatory SelectBigE";
      document.getElementById("ptqmh008").className="Mandatory SelectBigE";
   }
   if(document.getElementById("QLDMHFields5")) {
      document.getElementById("QLDMHFields5").style.display="";
      document.getElementById("ptqmh005").className="Mandatory SelectBigE";
   }
 } else {
   if(document.getElementById("QLDMHFields1")) {
      document.getElementById("QLDMHFields1").style.display="none";
   }
   if(document.getElementById("QLDMHFields2")) {
      document.getElementById("QLDMHFields2").style.display="none";
      document.getElementById("ptqmh002").className="";
      document.getElementById("ptqmh006").className="";
   }
   if(document.getElementById("QLDMHFields3")) {
      document.getElementById("QLDMHFields3").style.display="none";
      document.getElementById("ptqmh003").className="";
      document.getElementById("pmsvx079").className="";
      document.getElementById("ptqmh007").className="";
   }
   if(document.getElementById("QLDMHFields4")) {
      document.getElementById("QLDMHFields4").style.display="none";
      document.getElementById("ptqmh004").className="";
      document.getElementById("ptqmh008").className="";
   }
   if(document.getElementById("QLDMHFields5")) {
      document.getElementById("QLDMHFields5").style.display="none";
      document.getElementById("ptqmh005").className="";
   }
 }
}
function setScannedMR() {
  if(!VariableNameExists('SetSMRFlag')) {
    return;
  }
  if(SetSMRFlag==true) {
    if(document.getElementById("scannedm")) {
      document.getElementById("scannedm").value="1";
    }
  }
}
function showStatAdmSearch(searchUR,searchVis,searchDate) {

  if (isWhitespace(searchUR.value)) return;;
  if (isWhitespace(searchVis.value)) return;;
  if (isWhitespace(searchDate.value)) return;;

  var serverURL = "../cgi-bin/patweb96.pbl?reportno=12&remoteno=14"
                  + "&urnumber=" + searchUR.value.replace(/ /g,"+")
                  + "&admissno=" + searchVis.value.replace(/ /g,"+")
                  + "&valddate=" + searchDate.value.replace(/ /g,"+");
  var returnValue = RSExecute(serverURL);
  
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    if(ReturnValue[0]=="1") {
      StatAdmLinkSearchFrame(searchUR,searchVis,searchDate,"P");
    }
  }
}
function showStatAdmSearchUpd(searchUR,searchVis,searchDate) {

  if (isWhitespace(searchUR.value)) return;;
  if (isWhitespace(searchVis.value)) return;;
  if (isWhitespace(searchDate.value)) return;;

  var serverURL = "../cgi-bin/patweb96.pbl?reportno=12&remoteno=15"
                  + "&urnumber=" + searchUR.value.replace(/ /g,"+")
                  + "&admissno=" + searchVis.value.replace(/ /g,"+")
                  + "&valddate=" + searchDate.value.replace(/ /g,"+");
  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")

    if(ReturnValue[0]=="1") {
      StatAdmLinkSearchFrame(searchUR,searchVis,searchDate,"D");
    }
  }
}
function StatAdmLinkSearchFrame(urno,visit,ddate,srchty){
  DFrameStart();
  window.urn=urno.value;           // urnumber
  window.adm=visit.value;          // admission number
  window.ddat=ddate.value;         // discharge date
  window.srchtype=srchty;          // search type 
  document.getElementById('PopUpFrame').src="../lookups/StatAdmLinkSearchFrame.html";
  SearchFrameShow();
}
function getStatAdmDetails(vtype,vnumbr) {
  if(isWhitespace(vtype)){ return; }
  if(isWhitespace(vnumbr)){ return; }
  var serverURL = "../cgi-bin/comweb81.pbl?reportno=22" +
                "&valdtype=" + vtype.replace(/ /g,"+") +
                "&admissno=" + vnumbr.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if(returnValue.status==0) {
    ReturnV=returnValue.return_value.split("|");
  } else {
    return;
  }
//
//       Booking defaults
//
  if(vtype=="BOK") {         // Default booking details
    if(trim(document.getElementById("urnumber").value) != 
       trim(ReturnV[1])) {
       alert("Booking U/R number mismatch");
       return;
    }
    if(ReturnV[2]!="0") {
      alert("Invalid booking status");
      return;
    }
    document.pat96pdf.statvtyp.value=vtype;         // Booking Link
    document.pat96pdf.statvisn.value=ReturnV[0];    // Booking Number
    document.pat96pdf.d_ptmis007.value=ReturnV[3];  // Doctor
    document.pat96pdf.deftunit.value=ReturnV[18];   // Unit
    valDoctorUnit();
    selectCatCodeList(document.pat96pdf.d_ptmis027,ReturnV[20]); // Claim code
    selectCatCodeList(document.pat96pdf.d_ptmis010,ReturnV[17]); // Adm Type  
    selectWardList(document.pat96pdf.d_ptmis004,ReturnV[14]);    // Ward   
    document.pat96pdf.d_ptmis005.value=ReturnV[15];              // Bed   

    if(!isWhitespace(trim(ReturnV[27]))) {           // PLOS
     if(!isNaN(trim(ReturnV[27]))) {    
       document.pat96pdf.ptmis030.value=trim(ReturnV[27]);
     }
    }
    if(!isWhitespace(trim(ReturnV[31]))) {           // Reason for Admission
       document.pat96pdf.ptmis020.value=trim(ReturnV[31]);
    }

    return;
  }
//
//       Pre Admission Defaults
//
  if(vtype=="PRE") {         // Default booking details
    if(trim(document.getElementById("urnumber").value) !=
       trim(ReturnV[1])) {
       alert("Visit U/R number mismatch");
       return;
    }
    if(ReturnV[2]!="1") {
      alert("Invalid visit status");
      return;
    }
    document.pat96pdf.statvtyp.value=vtype;           // Pre Adm Link
    document.pat96pdf.statvisn.value=ReturnV[0];      // Admission Number
    document.pat96pdf.d_ptmis007.value=ReturnV[8];    // Doctor
    document.pat96pdf.deftunit.value=ReturnV[24];     // Unit
    valDoctorUnit();
    selectCatCodeList(document.pat96pdf.d_ptmis027,ReturnV[26]); // Claim code
    selectCatCodeList(document.pat96pdf.d_ptmis010,ReturnV[11]); // Adm Type  
    selectWardList(document.pat96pdf.d_ptmis004,ReturnV[35]);    // Ward   
    document.pat96pdf.d_ptmis005.value=ReturnV[38];              // Bed   

    if(!isWhitespace(trim(ReturnV[29]))) {           // PLOS
     if(!isNaN(trim(ReturnV[29]))) {
       document.pat96pdf.ptmis030.value=trim(ReturnV[29]);
     }
    }

    if(!isWhitespace(trim(ReturnV[21]))) {           // Reason for Admission
       document.pat96pdf.ptmis020.value=trim(ReturnV[21]);
    }

    if(!isWhitespace(trim(ReturnV[34]))) {           // Provisional DRG
       document.pat96pdf.ptmis066.value=trim(ReturnV[34]);
    }

    if(!isWhitespace(trim(ReturnV[69]))) {           // Employment Status
       document.pat96pdf.ptvis104.value=trim(ReturnV[69]);
    }

    if(!isWhitespace(trim(ReturnV[79]))) {           // Discharge Intention
       document.pat96pdf.ptvis076.value=trim(ReturnV[79]);
    }

    if(!isWhitespace(trim(ReturnV[93]))) {           // Program
       document.pat96pdf.ptvis099.value=trim(ReturnV[93]);
    }

    if(!isWhitespace(trim(ReturnV[64]))) {           // ML Legal Status
       document.pat96pdf.ptvis074.value=trim(ReturnV[64]);
    }

    if(!isWhitespace(trim(ReturnV[81]))) {           // Usual Accommodation
       document.pat96pdf.ptvis095.value=trim(ReturnV[81]);
    }

    if(!isWhitespace(trim(ReturnV[98]))) {           // Arrival Transport
       document.pat96pdf.ptvis103.value=trim(ReturnV[98]);
    }

    if(!isWhitespace(trim(ReturnV[45]))) {           // Inform GP
       document.pat96pdf.ptvis022.value=trim(ReturnV[45]);
    }

    if(!isWhitespace(trim(ReturnV[72]))) {           // Palliativer Care Status
       document.pat96pdf.ptvis077.value=trim(ReturnV[72]);
    }

    if(!isWhitespace(trim(ReturnV[110]))) {           // Patient Sat. Survey
       document.pat96pdf.ptvis118.value=trim(ReturnV[110]);
    }

    if(!isWhitespace(trim(ReturnV[111]))) {           // Hear about us
       document.pat96pdf.ptvis119.value=trim(ReturnV[111]);
    }

    if(isWhitespace(document.pat96pdf.ptmis013.value) &&
       isWhitespace(document.pat96pdf.ptmis014.value) &&
       !isWhitespace(trim(ReturnV[14])) &&
       !isWhitespace(trim(ReturnV[15]))) {           // Health Fund and Table
       document.pat96pdf.ptmis013.value=trim(ReturnV[14]);
       document.pat96pdf.ptmis014.value=trim(ReturnV[15]);
       document.pat96pdf.ptmis015.value=trim(ReturnV[107]);
    }

    if(trim(ReturnV[37]) != "Y") {           // Not casepayment
       document.pat96pdf.ptmis075.value="N"; // Not casepayment
       document.pat96pdf.ptmis073.value=" "; // Clear casemix code
    }
    if(trim(ReturnV[37]) == "Y") {           // Yes casepayment
       document.pat96pdf.ptmis075.value="Y"; // Yes casepayment
       document.pat96pdf.ptmis073.value=trim(ReturnV[36]); // casemix code
    }

    if(!isWhitespace(trim(ReturnV[47])) || !isWhitespace(trim(ReturnV[48]))) {
       document.pat96pdf.ptvis028.value=trim(ReturnV[47]); // Referring Doctor
       document.pat96pdf.ptvis029.value=trim(ReturnV[48]); // Ref Doc. Practice
       document.pat96pdf.ptvis030.value=ReturnV[49]; // Ref Doc. Prac Count
    }

    if(!isWhitespace(trim(ReturnV[108]))) {      // Prev Specialized Treatment
       if(document.pat96pdf.ptvis134!=undefined) {
         document.pat96pdf.ptvis134.value=trim(ReturnV[108]);
       }
    }

    return;
  }
//
//       Current IP Defaults
//
  if(vtype=="CUR") {         // Default current IP details
    if(trim(document.getElementById("urnumber").value) !=
      trim(ReturnV[1])) {
      alert("Visit U/R number mismatch");
      resetDDestination();
      return;
    }
    if(ReturnV[2]!="2") {
      alert("Invalid visit status");
      resetDDestination();
      return;
    }
    if(ReturnV[132] != 2) {
      alert("Error: The selected visits admission source must be " +
            "statistical admission.");
      resetDDestination();
      return;
    }
    if(!isWhitespace(ReturnV[134])) {
      alert("Error: The selected visit is already linked to visit " +
            ReturnV[134]);
      resetDDestination();
      return;
    }
    document.pat96pdf.d_fromdate.value=document.pat96pdf.trandate1.value;
    document.pat96pdf.d_fromtime.value=document.pat96pdf.trantime.value;
    document.pat96pdf.d_todate.value=SetDateDDMMMYYYY(ReturnV[3]);
    document.pat96pdf.d_totime.value=ReturnV[4];
    document.pat96pdf.d_duration.value=0;
    CalculateDuration(document.pat96pdf.d_fromdate,
                      document.pat96pdf.d_fromtime,
                      document.pat96pdf.d_todate,
                      document.pat96pdf.d_totime,
		      document.pat96pdf.d_duration);
    if(document.pat96pdf.d_duration.value == -1) {
      alert("Error: Selected admission date/time is less than" +
            "this visits discharge date/time")
      resetDDestination();
      return;
    }
    if(document.pat96pdf.d_duration.value > 60) {
      alert("Error: Selected admission date/time is greater than" +
            " a minute after this visits discharge date/time")
      resetDDestination();
      return;
    }
    document.pat96pdf.statvtyp.value=vtype;           // Pre Adm Link
    document.pat96pdf.statvisn.value=ReturnV[0];      // Admission Number
    return;
  }
//
//       Discharged IP Defaults
//
  if(vtype=="DIS") {         // Default discharged IP details
    if(trim(document.getElementById("urnumber").value) !=
      trim(ReturnV[1])) {
      alert("Visit U/R number mismatch");
      resetDDestination();
      return;
    }
    if(ReturnV[2]!="3") {
      alert("Invalid visit status");
      resetDDestination();
      return;
    }
    if(ReturnV[132] != 2) {
      alert("Error: The selected visits admission source must be " +
            "statistical admission.");
      resetDDestination();
      return;
    }
    if(!isWhitespace(ReturnV[135])) {
      alert("Error: The selected discharge is already linked to visit " +
            ReturnV[133]);
      resetDDestination();
      return;
    }
    document.pat96pdf.d_fromdate.value=document.pat96pdf.trandate1.value;
    document.pat96pdf.d_fromtime.value=document.pat96pdf.trantime.value;
    document.pat96pdf.d_todate.value=SetDateDDMMMYYYY(ReturnV[3]);
    document.pat96pdf.d_totime.value=ReturnV[4];
    document.pat96pdf.d_duration.value=0;
    CalculateDuration(document.pat96pdf.d_fromdate,
                      document.pat96pdf.d_fromtime,
                      document.pat96pdf.d_todate,
                      document.pat96pdf.d_totime,
                      document.pat96pdf.d_duration);
    if(document.pat96pdf.d_duration.value == -1) {
      alert("Error: Selected admission date/time is less than" +
            "this visits discharge date/time")
      resetDDestination();
      return;
    }
    if(document.pat96pdf.d_duration.value > 60) {
      alert("Error: Selected admission date/time is greater than" +
            " a minute after this visits discharge date/time")
      resetDDestination();
      return;
    }
    document.pat96pdf.statvtyp.value=vtype;           // Pre Adm Link
    document.pat96pdf.statvisn.value=ReturnV[0];      // Admission Number
    return;
  }
}
function resetDDestination() {          // reset the discharge destination
  p=document.pat96pdf;
  if(p.dschdest!=undefined) {
   for (var i=0; i < p.dschdest.length; i++) {
    if(p.dschdest.options[i].defaultSelected) {
      p.dschdest.selectedIndex=i;                      // Cat DD
    }
   }
  } else {
   for (var i=0; i < p.dschdest.length; i++) {
    if(p.dschdest.options[i].defaultSelected) {
      p.dschdest.selectedIndex=i;                      // Cat D
    }
   }
  }
}
function selectCatCodeList(sellist,setvalue) {
  for(var j = 0; j < sellist.options.length; j++) {
     if (trim(sellist.options[j].value.substr(0,3)) == trim(setvalue)) {
         sellist.selectedIndex = j;
         break; 
     }
  }
}
function selectWardList(sellist,setvalue) {
  for(var j = 0; j < sellist.options.length; j++) {
     if (trim(sellist.options[j].value.substr(0,3)) == trim(setvalue)) {
         sellist.selectedIndex = j;
         break; 
     }
  }
}
function validateStatDischarge(){
  if(document.pat96pdf.dschdest!=undefined) {
    var i=document.pat96pdf.dschdest.selectedIndex;
    var ind=document.pat96pdf.dschdest.options[i].value.substr(9,1);  // Cat DD
    var depnam=trim(document.pat96pdf.dschdest.title);
  } else {
    var i=document.pat96pdf.dschstat.selectedIndex;
    var ind=document.pat96pdf.dschstat.options[i].value.substr(9,1);  // Cat D
    var depnam=trim(document.pat96pdf.dschstat.title);
  }
  if(ind == "S" || ind =="E" || ind =="O") {
    if(isWhitespace(document.pat96pdf.statvisn.value)) {
      alert("Invalid " + depnam + " - A Statistical discharge must be linked" +
            " to another inpatient visit");
      resetDDestination();
      return false;
    }
  }
  return true;
}
function validateMRFD(adat,mrfd) {
  if (isWhitespace(adat.value) || isWhitespace(mrfd.value)) {
    return true;
  }
  if (SetDateYYYYMMDD(adat.value) > SetDateYYYYMMDD(mrfd.value)) {
    alert(mrfd.title + " can't be prior to the Admission Date.");
    FocusDelay(mrfd);
    return false;
  }
  return true;
}
function displayMRFD() {
  if(document.getElementById("ptcnhdps").value == "3") {   // Vic
    document.getElementById("VicMRFD").innerHTML =
    document.getElementById("ShowVicMRFD").innerHTML;
  }
}
