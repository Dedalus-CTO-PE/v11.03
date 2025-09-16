//jsVersion  : V11.03.02
//=======================================================================
// Program   : emrweb0201101.js
//========================================================================
//
function clrCon() {
  document.UpdateForm.emvis106.value="";
  document.UpdateForm.name_emvis106.value="";
}
function defDeparture() {
// Departure Status to home if no expected ward and no expected unit
  if(document.UpdateForm.emvis116.value=="" &&
    document.UpdateForm.emvis134.value=="") {
    for(var i=0; i<document.UpdateForm.emvis026.length; i++) {
       ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
       if(ind==1){
         document.UpdateForm.emvis026.selectedIndex=i;
         break;
       }
    }
  }
// if Expected Ward set departure status 
  if(document.UpdateForm.emvis116.value!="") {
    if(document.UpdateForm.emvis026.selectedIndex==0) {
      for(var i=0; i<document.UpdateForm.emvis026.length; i++) {
         ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
         if(ind==18){
            document.UpdateForm.emvis026.selectedIndex=i;
            break;
         }
      }
    }
  }
// if Expected Unit set departure status
  if(!isWhitespace(document.UpdateForm.emvis134.value)) {
    if(document.UpdateForm.emvis026.selectedIndex==0) {
      for(var i=0; i<document.UpdateForm.emvis026.length; i++) {
         ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
         if(ind==18){
            document.UpdateForm.emvis026.selectedIndex=i;
            break;
         }
      }
    }
  }
// Default the Departure Status according to the EFR bed type.
// Emergency Ward/Bed = Discharged Home
// Normal Ward/Bed = Admitted to Hospital
// Emergency Ward/Bed Short Stay = Admitted to EMR
// Default the departure time to the ward request date and time
// If Admitted directly to a normal ward bed. Default the emergency departure 
// date/time to the current date/time not the admission date/time
// EFT BED TYPE 0 = Patient has not been admitted to hospital
//              1 = No it is not an emergency ward/bed type
//              2 = Yes it is a emergency ward/bed type
//              3 = Yes it is a emergency ward/bed type - Short Stay Observation
// If the inpatient admission is not discharged and they are in an EFT Bed type
// 2. Default the emergency departure date/time to the current date/time
  if(document.UpdateForm.efrbedty.value=="1") {
    for(var i=0; i<document.UpdateForm.emvis026.length; i++) {
       ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
       if(ind==18){
          document.UpdateForm.emvis026.selectedIndex=i;
          if (document.UpdateForm.efradmis.value=="1") {
            break; // Admitted directly to a normal ward/bed
          }
          document.UpdateForm.emvis024.value=document.UpdateForm.deptdate.value;
          document.UpdateForm.emvis025.value=document.UpdateForm.depttime.value;
          break;
       }
    }
  }
  if(document.UpdateForm.efrbedty.value=="2") {
    for(var i=0; i<document.UpdateForm.emvis026.length; i++) {
       ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
       if(ind==1){
          document.UpdateForm.emvis026.selectedIndex=i;
          if (document.UpdateForm.efrdisch.value=="0") {
            break; // Inpat admiss is not discharge so use current date/time
          }
          document.UpdateForm.emvis024.value=document.UpdateForm.deptdate.value;
          document.UpdateForm.emvis025.value=document.UpdateForm.depttime.value;
          break;
       }
    }
  }
  if(document.UpdateForm.efrbedty.value=="3") {
    for(var i=0; i<document.UpdateForm.emvis026.length; i++) {
       ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
       if(ind==3){
          document.UpdateForm.emvis026.selectedIndex=i;
          document.UpdateForm.emvis024.value=document.UpdateForm.deptdate.value;
          document.UpdateForm.emvis025.value=document.UpdateForm.depttime.value;
          break;
       }
    }
  }
// ongoing care (Yes)
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
  if (ind==18 || ind==2 || ind==4 || ind==19 || ind==17 || ind==20 
      || ind==21 || ind==23 || ind==9
      || ind==14 || ind==15 || ind==16 || ind==22 || ind==24){
    document.UpdateForm.emvis100.selectedIndex=1;
  }
  if (ind==5 || ind==6 || ind==7 || ind==8 ){
    document.UpdateForm.emvis100.selectedIndex=2;
  }
  if (ind==0 || ind==1 || ind==3 ){
    document.UpdateForm.emvis100.selectedIndex=0;
  }
// referred to on discharge
  document.UpdateForm.emvis051.selectedIndex=0;
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
    if (ind==18 || ind==2 || ind==3 || ind==5 || ind==6 || ind==7 || ind==8
        || ind==14 || ind==15 || ind==16 || ind==22) {
        for(var i=0; i<document.UpdateForm.emvis051.length; i++) {
           hdp=trim(document.UpdateForm.emvis051.options[i].value.substr(14,4));
	   if( hdp==19){
	     document.UpdateForm.emvis051.selectedIndex=i;
             break;
           }
        }
    }
// Show Divs
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
    if (ind==19 || ind==4 || ind==17 || ind==20 || ind==21) {
     document.getElementById('Departure').style.display="";
     document.getElementById('Departure').innerHTML=document.getElementById('ShowDeparture').innerHTML;
    } else {
     document.getElementById('Departure').style.display="none";
     document.getElementById('Departure').innerHTML="";
    } 
  CheckDeparture()
}
//
// Same as defDeparture but has not got any ongoing care fields
//
function defDepartureA() {
// Departure Status to home if no expected ward and no expected unit
  if(document.UpdateForm.emvis116.value=="" &&
    document.UpdateForm.emvis134.value=="") {
    for(var i=0; i<document.UpdateForm.emvis026.length; i++) {
       ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
       if(ind==1){
         document.UpdateForm.emvis026.selectedIndex=i;
         break;
       }
    }
  }
// if Expected Ward set departure status 
  if(document.UpdateForm.emvis116.value!="") {
    if(document.UpdateForm.emvis026.selectedIndex==0) {
      for(var i=0; i<document.UpdateForm.emvis026.length; i++) {
         ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
         if(ind==18){
            document.UpdateForm.emvis026.selectedIndex=i;
            break;
         }
      }
    }
  }
// if Expected Unit set departure status
   if(!isWhitespace(document.UpdateForm.emvis134.value)) {
     if(document.UpdateForm.emvis026.selectedIndex==0) {
       for(var i=0; i<document.UpdateForm.emvis026.length; i++) {
          ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
          if(ind==18){
             document.UpdateForm.emvis026.selectedIndex=i;
             break;
          }
       }
     }
    }
// Default the Departure Status according to the EFR bed type.
// Emergency Ward/Bed = Discharged Home
// Normal Ward/Bed = Admitted to Hospital
// Emergency Ward/Bed Short Stay = Admitted to EMR
// Default the departure time to the ward request date and time
// If Admitted directly to a normal ward bed. Default the emergency departure 
// date/time to the current date/time not the admission date/time
// EFT BED TYPE 0 = Patient has not been admitted to hospital
//              1 = No it is not an emergency ward/bed type
//              2 = Yes it is a emergency ward/bed type
//              3 = Yes it is a emergency ward/bed type - Short Stay Observation
// If the inpatient admission is not discharged and they are in an EFT Bed type
// 2. Default the emergency departure date/time to the current date/time
  if(document.UpdateForm.efrbedty.value=="1") {
    for(var i=0; i<document.UpdateForm.emvis026.length; i++) {
       ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
       if(ind==18){
          document.UpdateForm.emvis026.selectedIndex=i;
          if (document.UpdateForm.efradmis.value=="1") {
            break; // Admitted directly to a normal ward/bed 
          }
          document.UpdateForm.emvis024.value=document.UpdateForm.deptdate.value;
          document.UpdateForm.emvis025.value=document.UpdateForm.depttime.value;
          break;
       }
    }
  }
  if(document.UpdateForm.efrbedty.value=="2") {
    for(var i=0; i<document.UpdateForm.emvis026.length; i++) {
       ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
       if(ind==1){
          document.UpdateForm.emvis026.selectedIndex=i;
          if (document.UpdateForm.efrdisch.value=="0") {
            break; // Inpat admiss is not discharge so use current date/time
          }
          document.UpdateForm.emvis024.value=document.UpdateForm.deptdate.value;
          document.UpdateForm.emvis025.value=document.UpdateForm.depttime.value;
          break;
       }
    }
  }

  if(document.UpdateForm.efrbedty.value=="3") {
    for(var i=0; i<document.UpdateForm.emvis026.length; i++) {
       ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
       if(ind==3){
         document.UpdateForm.emvis026.selectedIndex=i;
         document.UpdateForm.emvis024.value=document.UpdateForm.deptdate.value;
         document.UpdateForm.emvis025.value=document.UpdateForm.depttime.value;
         break;
       }
    }
  }

  if (document.UpdateForm.stvssind != undefined) {
    if (document.UpdateForm.shstdpst.value== "1") {
      document.UpdateForm.emvis024.value=document.UpdateForm.shstdate.value;
      document.UpdateForm.emvis025.value=document.UpdateForm.shsttime.value;
      for(var i=0; i<document.UpdateForm.emvis026.length; i++) {
       ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
       if(ind==3){
         document.UpdateForm.emvis026.selectedIndex=i;
         break;
       }
      }
    }
  }

// ongoing care (Yes)
//i=document.UpdateForm.emvis026.selectedIndex
//ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
//if (ind==18 || ind==2 || ind==4 || ind==19 || ind==17 || ind==20 
//    || ind==21 || ind==23 || ind==9
//    || ind==14 || ind==15 || ind==16 || ind==22 || ind==24){
//  document.UpdateForm.emvis100.selectedIndex=1;
//}
//if (ind==5 || ind==6 || ind==7 || ind==8 ){
//  document.UpdateForm.emvis100.selectedIndex=2;
//}
//if (ind==0 || ind==1 || ind==3 ){
//  document.UpdateForm.emvis100.selectedIndex=0;
//}
// referred to on discharge
  document.UpdateForm.emvis051.selectedIndex=0;
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
    if (ind==18 || ind==2 || ind==3 || ind==5 || ind==6 || ind==7 || ind==8
        || ind==14 || ind==15 || ind==16 || ind==22 || ind==24 || ind==25
        || ind==26) {
        for(var i=0; i<document.UpdateForm.emvis051.length; i++) {
           hdp=trim(document.UpdateForm.emvis051.options[i].value.substr(14,4));
           if(hdp==19){
             document.UpdateForm.emvis051.selectedIndex=i;
             break;
           }
        }
    }
// Show Divs
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
    if (ind==19 || ind==4 || ind==17 || ind==20 || ind==21) {
     document.getElementById('Departure').style.display="";
     document.getElementById('Departure').innerHTML=document.getElementById('ShowDeparture').innerHTML;
    } else {
     document.getElementById('Departure').style.display="none";
     document.getElementById('Departure').innerHTML="";
    }
  CheckDepartureA()
}
function setFormactn() {
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
  if (ind=="18" || ind=="2" || ind=="14" || ind=="15" || ind=="16" 
      || ind=="22") {
    document.UpdateForm.nextpage.value="2";
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=1&template=16" +
                           "&admissno=" + document.UpdateForm.admissno.value +
                           "&urnumber=" + document.UpdateForm.urnumber.value +
                           "&emradmit=1" }
  if (ind=="19" || ind=="4" || ind=="17" || ind=="20" || ind=="21") {
    if (document.UpdateForm.emvis033.selectedIndex=="0") {
      alert("Please enter a Transfer Destination.");
      document.UpdateForm.emvis033.focus()
      return;
    }
  }
  if (validateMandatory(UpdateForm)) {    
    document.UpdateForm.nextpage.value="1"
    document.UpdateForm.formactn.value="C1"
    document.UpdateForm.updttype.value="DOCTO"
    UpdateWin=window.open("","HideUpdateWindow",
    "width=10,height=10,top=1024,directories=no,location=no" +
    ",scrollbars=no,status=no,toolbar=no,menubar=no,resizeable=no")
    document.UpdateForm.target="HideUpdateWindow";
    document.UpdateForm.submit();
    }
}
function setDischarge() {
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
  if(ind=="18" || ind=="2" || ind=="14" || ind=="15" || ind=="16" 
     || ind=="22") { 
    document.UpdateForm.emvis133.value=1 
    document.UpdateForm.nextpage.value="2";
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=1&template=16" +
                           "&admissno=" + document.UpdateForm.admissno.value +
                           "&urnumber=" + document.UpdateForm.urnumber.value +
                           "&emradmit=1" 
  }
  else {
    document.UpdateForm.emvis133.value=0
    if(ind=="19" || ind=="4" || ind=="17" || ind=="20" || ind=="21") {
      if(document.UpdateForm.emvis033.selectedIndex=="0") {
        alert("Please enter a Transfer Destination.");
        document.UpdateForm.emvis033.focus()
        return;
      }
    }
  }
  if (validateMandatory(UpdateForm)) {    
    document.UpdateForm.nextpage.value="2"
    ReturnPage=GetCookieData("ReturnPath")
    if (ReturnPage=="unknown") {
      document.UpdateForm.redirect.value="emrweb01.pbl?reportno=1&template=2" }
    else {
      document.UpdateForm.redirect.value=ReturnPage }
    document.UpdateForm.formactn.value="D "
    document.UpdateForm.updttype.value="DISCH"
    UpdateWin=window.open("","HideUpdateWindow",
    "width=10,height=10,top=1024,directories=no,location=no" +
    ",scrollbars=no,status=no,toolbar=no,menubar=no,resizeable=no")
    document.UpdateForm.target="HideUpdateWindow";
    document.UpdateForm.submit()
    }
}
function ChkDestInd() {
  // Check Destination for discharge destination
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
  document.UpdateForm.emvis033.selectedIndex=0
  if (ind!="19" && ind!="4" && ind!="17" && ind!="20" && ind!="21") {
    document.UpdateForm.emvis026.focus()
    alert("Transfer source not required for selected Discharge Destination")
    document.UpdateForm.emvis026.focus()
  }
}
function ChkStatInd() {
  // Check status for transfer source
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
  document.UpdateForm.emvis033.selectedIndex=0
  if (ind!="19" && ind!="4" && ind!="17" && ind!="20" && ind!="21") {
    document.UpdateForm.dschdest.focus()
    alert("Transfer source not required for selected Discharge Status")
    document.UpdateForm.dschdest.focus()
  }
}
function DischargeDest() {
  // Set focus to transfer source if indicator set on Destination
  i=document.UpdateForm.dschdest.selectedIndex
  ind=trim(document.UpdateForm.dschdest.options[i].value.substr(14,4));
  document.UpdateForm.emvis033.selectedIndex=0
  if (ind=="19") {
    document.UpdateForm.emvis033.focus()
  }
}
function CheckIndiStat(){
  // Check indicator for transfer destination
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4))
//  document.UpdateForm.emvis033.selectedIndex=0
  if (ind=="19" || ind=="4" || ind=="17" || ind=="20" || ind=="21") {
    if (document.UpdateForm.emvis033.selectedIndex=="0") {
      alert("Please enter a Transfer Destination.");
      document.UpdateForm.emvis033.focus()
      return;
    }
  }
}
function DischargeStat() {
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
  if(ind=="18" || ind=="2" || ind=="14" || ind=="15" || ind=="16" 
     || ind=="22") {
      document.UpdateForm.redirect.value="patweb89.pbl?reportno=1&" + 
                                     "template=16&urnumber=" + 
                                     document.UpdateForm.urnumber.value
      document.UpdateForm.nextpage.value="2"
      }
  else {
      document.UpdateForm.nextpage.value="1"
      document.UpdateForm.redirect.value=""
      }    
}
function ChkIndicator() {
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
  if (ind!="19" && ind !="4" && ind!="17" && ind!="20" && ind!="21") {
    document.UpdateForm.emvis033.selectedIndex=0
    alert("Discharge Destination not required for selected Departure Status")
    document.UpdateForm.emvis026.focus()
  }
}
function CheckDocNurDepStat() {
  if (!isWhitespace(document.UpdateForm.ptdocsee.value+document.UpdateForm.ptnursee.value)) {
    i=document.UpdateForm.emvis026.selectedIndex;
    ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
    if (ind==10||ind==11) {
//    alert("Dr/Nurse First Seen Dat/Time != 0 and Departure Status = "+ind+": Unable to post this combination.");
      alert("Doctor and/or Nurse Date and Time must be blank to validate this combination")
      return false;
    }
  }
  return true;
}
//
// Returns the date string value (YYYYMMDD) for today's date
//
function GetCurrDateStr()
{
  var dateStr = "";

  var Today = new Date()
  var ThisDay = Today.getDate();
  var ThisMth = parseInt(Today.getMonth(),10) + 1;
  var ThisYrs = Today.getFullYear();
  if (ThisDay < 10) ThisDay="0" + ThisDay;
  if (ThisMth < 10) ThisMth="0" + ThisMth;
  dateStr = dateStr.concat(ThisYrs,ThisMth,ThisDay)

  return dateStr;
}
function IsValidDepartureTime()
{
// Departure time must be in the future
  if (document.UpdateForm.currTime != undefined) {
    var theField = document.UpdateForm.emvis025;  // departure time
    var labelStr = theField.title;
    var dateStrDepart = SetDateYYYYMMDD(document.UpdateForm.emvis024.value);
    var dateStrToday = GetCurrDateStr();

    SetCurrentDateTimeNoFocus(null,document.UpdateForm.currTime);

    if (!(dateStrDepart < dateStrToday))
    {
      // departure date not in the past so we must check the time value
      if (theField.value > document.UpdateForm.currTime.value)
      {
        alert(labelStr + " must be in the Past.")
        theField.select()
        theField.value="";
        return false;
      }
    }
  }
  return true;
}
function UpdateDischarge() {
  if (!IsValidDepartureTime()) {
    return;
  }
//
  trueorfalse=CheckDocNurDepStat();
  if (trueorfalse==false) {
    return;
  }
//
//if(document.UpdateForm.ptcnhdps.value=="3") {                // Victorian
//  if(!chkExpDteTme()) {
//    return;
//  }
//}
//
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4))
  document.UpdateForm.nextpage.value="8"
//  if (ind=="18" || ind=="2" || ind=="14" || ind=="15" || ind=="16" 
//   || ind=="22") {
//    document.UpdateForm.nextpage.value="2";
//    document.UpdateForm.redirect.value="emrweb02.pbl?reportno=1&template=109" +
//        "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
//        "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
//        "&emradmit=1"
// }
  if(ind=="18" || ind=="2" || ind=="13" || ind=="14" || ind=="15" || ind=="16"
     || ind=="22" || ind=="25" || ind=="26") {
    document.UpdateForm.emvis133.value=1
    document.UpdateForm.nextpage.value="8";
    document.UpdateForm.redirect.value="emrweb01.pbl?reportno=1&template=001" +
          "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
          "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
          "&emradmit=1"
  }
  else {
    document.UpdateForm.emvis133.value=0
    document.UpdateForm.nextpage.value="8";
    document.UpdateForm.redirect.value="emrweb01.pbl?reportno=1&template=001" +
          "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
          "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
          "&emradmit=1"
    }
//
  if (document.UpdateForm.ptcnhdps.value=="3") {  // Victorian (VEMD)
    if (!ValidVEMDDeptStat()) {
      alert("E242:Invalid Referred to on Departure and Departure Status " +
            "combination");
      return;
    }
  }
//
  if (document.UpdateForm.ptcnhdps.value=="3" &&                // Victorian
      !isWhitespace(document.UpdateForm.emvis134.value)) {      // Exp Unit
    i=document.UpdateForm.emvis026.selectedIndex
    ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
    if(ind=="0" || ind=="1" || ind=="19" || ind=="23" || ind=="12" || ind=="17"
       || ind=="20" || ind=="21" || ind=="24"||ind=="4" || ind=="9") {
      if(!confirm("Inpatient Bed Request Date/Time exists.\n" +
                  "If discharged, a notification will be required by" +
                  " DHS\n" + "OK to continue, Cancel to abort")){
        return;
      }
    } else if (ind=="18" || ind=="2" || ind=="3" || ind=="13"
      || ind=="14" || ind=="15" || ind=="16" || ind=="22" || ind=="25" 
      || ind=="26" || ind=="27" || ind=="28" || ind=="31"){
      if (isWhitespace(document.HiddenFields.HospitalAdmission.value)) {
        alert("Warning : Patient must be admitted before being Discharged.");
        return;
      }
    } else {
      alert("Error. Invalid Departure Status with Inpatient Bed" +
            " Request Date/Time.");
      return;
    }
  }
//
  if (isWhitespace(document.UpdateForm.chkdot.value) &&
      document.UpdateForm.ptcnhdps.value=="3") {           // Victoria
    i=document.UpdateForm.emvis026.selectedIndex;
    ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,2));

    if (ind!="6" && ind!="8" && ind!="10" && ind!="11" && 
        ind!="T1" && ind!="31") {
      if (ind == "5" || ind == "1") {
        if (document.UpdateForm.chknur != undefined) {
          if (isWhitespace(document.UpdateForm.chknur.value)) {
            alert("Invalid discharge status, no attending doctor/nurse");
            return;
          }
        }
      } else {
        alert("Invalid discharge status, no attending doctor");
        return;
      }
    }
  }
//
  if (!isWhitespace(document.UpdateForm.chkdot.value) &&
     document.UpdateForm.ptcnhdps.value=="3") {           // Victoria
    i=document.UpdateForm.emvis026.selectedIndex
    ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,2));
    if(ind=="T1") {
      alert("Invalid discharge status, patient seen by a doctor");
      return;
    } 
  }
  if(document.UpdateForm.chknur!=undefined) {
    if (!isWhitespace(document.UpdateForm.chknur.value) &&
       document.UpdateForm.ptcnhdps.value=="3") {           // Victoria
      i=document.UpdateForm.emvis026.selectedIndex
      ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,2));
      if(ind=="T1") {
        alert("Invalid discharge status, patient seen by a nurse");
        return;
      } 
    }
  }
//
  if(document.UpdateForm.pdexists!=undefined){
    if(document.UpdateForm.pdexists.value!="" &&
       (document.UpdateForm.emvis026.value.substr(14,2)=="11" ||
        document.UpdateForm.emvis026.value.substr(14,2)=="T1")){
      alert("Please delete the primary diagnosis before updating");
      return false;
    }
  }
//
//document.UpdateForm.target="_self"
  document.UpdateForm.target="PopUpFrame";
  document.UpdateForm.formactn.value="C1"
  document.UpdateForm.updttype.value="UPDIS"
  var validateresult = validateMandatory(document.UpdateForm);
  if (validateresult==true) {
    document.UpdateForm.emvis073.disabled=false;
     document.UpdateForm.submit()
  }
}

function ValidVEMDDeptStat() {
  i=document.UpdateForm.emvis051.selectedIndex;  // Referred to on Departure
  ref=trim(document.UpdateForm.emvis051.options[i].value.substr(14,4));

  i=document.UpdateForm.emvis026.selectedIndex;  // Departure Status
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));

  // Validate 'Departure Status' if 'Referred to on Departure' is not blank
  if ( !isWhitespace(ind) && !isWhitespace(ref) ) {
    switch (ind) {
      case '3':
      case '5':
      case '7':
      case '8':
      case '11':
      case '14':
      case '15':
      case '18':
      case '22':
      case '25':
      case '26':
      case '27':
      case '28':
      case '31':
        if (ref != "19") {
          return false;
        }
        break;
      case '1':
      case '10':
      case '12':
      case '23':
      case '24':
      case '30':
        // 'Referred to on Departure' has to be 1-18
        refVal = parseInt(ref, 10);
        if (refVal < 1 || refVal > 18) {
          return false;
        }
        break;
      case '17':
        if (ref != "19") {
          return false;
        }
        break;
      case '20':
        if (ref != "19") {
          return false;
        }
        break;
      case '21':
        if (ref != "19") {
          return false;
        }
        break;
      case '19':
        if (ref != "19") {
          return false;
        }
        break;
    }

    if (ind == 'T1' || ind == 'T2' || ind == 'T5' || ind == 'T6') {
      if (ref != "19") {
        return false;
      }
    }

    if (ind == 'T3' && ref != "4")
      return false;

    if (ind == 'T4') {
      // 'Referred to on Departure' has to be 1-18
      refVal = parseInt(ref, 10);
      if (refVal < 1 || refVal > 18) {
        return false;
      }
    }

    if (ind == 'T7') {
      // 'Referred to on Departure' has to be 1-2
      refVal = parseInt(ref, 10);
      if (refVal < 1 || refVal > 2) {
        return false;
      }
    }
  }

  return true;
}


function PostDischarge() {
  if (!IsValidDepartureTime()) {
    return;
  }
//
  trueorfalse=CheckDocNurDepStat();
  if (trueorfalse==false) {
    return;
  }
//
//if(document.UpdateForm.ptcnhdps.value=="3") {                // Victorian
//  if(!chkExpDteTme()) {
//    return;
//  }
//}
//
  if (document.UpdateForm.ptcnhdps.value=="3" &&                // Victorian
      !isWhitespace(document.UpdateForm.emvis134.value)) {      // Exp Unit
    i=document.UpdateForm.emvis026.selectedIndex
    ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
    if(ind=="0" || ind=="1" || ind=="19" || ind=="23" || ind=="12" || ind=="17"
        || ind=="20" || ind=="21" || ind=="24" || ind=="4" || ind=="9") {
      if(!confirm("Inpatient Bed Request Date/Time exists.\n" +
                  "If discharged, a notification will be required by" +
                  " DHS\n" + "OK to continue, Cancel to abort")){
        return;
      }
    } else if (ind=="18" || ind=="2" || ind=="3" || ind=="13"
      || ind=="14" || ind=="15" || ind=="16" || ind=="22" || ind=="25" 
      || ind=="26" || ind=="27" || ind=="28" || ind=="31"){
      if (isWhitespace(document.HiddenFields.HospitalAdmission.value)) {
        alert("Warning : Patient must be admitted before being Discharged.");
        return;
      }
    } else {
      alert("Error. Invalid Departure Status with Inpatient Bed" + 
            " Request Date/Time.");
      return;
    }
  }
//
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
  if(ind=="18" || ind=="2" || ind=="14" || ind=="15" || ind=="16"
     || ind=="22" || ind=="25" || ind=="26") { 
    document.UpdateForm.emvis133.value=1 
    document.UpdateForm.nextpage.value="8";
    document.UpdateForm.redirect.value="emrweb01.pbl?reportno=1&template=001" +
          "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
          "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
          "&emradmit=1" 
  }
  else {
    document.UpdateForm.emvis133.value=0 
    document.UpdateForm.nextpage.value="8";
    document.UpdateForm.redirect.value="emrweb01.pbl?reportno=1&template=001" +
          "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
          "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
          "&emradmit=1" 
  }
//
  if (document.UpdateForm.ptcnhdps.value=="3") {  // Victorian (VEMD)
    if (!ValidVEMDDeptStat()) {
      alert("E242:Invalid Referred to on Departure and Departure Status " +
            "combination");
      return;
    }
  }
//
  if (isWhitespace(document.UpdateForm.chkdot.value) &&
      document.UpdateForm.ptcnhdps.value=="3") {           // Victoria
    i=document.UpdateForm.emvis026.selectedIndex;
    ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,2));

    if (ind!="6" && ind!="8" && ind!="10" && ind!="11" && 
        ind!="T1" && ind!="31") {
      if (ind == "5" || ind == "1") {
        if (document.UpdateForm.chknur != undefined) {
          if (isWhitespace(document.UpdateForm.chknur.value)) {
            alert("Invalid discharge status, no attending doctor/nurse");
            return;
          }
        } 
      } else {
        alert("Invalid discharge status, no attending doctor");
        return;
      }
    }
  }
//
  if (!isWhitespace(document.UpdateForm.chkdot.value) &&
     document.UpdateForm.ptcnhdps.value=="3") {           // Victoria
    i=document.UpdateForm.emvis026.selectedIndex
    ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,2));
    if(ind=="T1") {
      alert("Invalid discharge status, patient seen by a doctor");
      return;
    }
  }
  if(document.UpdateForm.chknur!=undefined) {
    if (!isWhitespace(document.UpdateForm.chknur.value) &&
       document.UpdateForm.ptcnhdps.value=="3") {           // Victoria
      i=document.UpdateForm.emvis026.selectedIndex
      ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,2));
      if(ind=="T1") {
        alert("Invalid discharge status, patient seen by a nurse");
        return;
      }
    }
  }
//
  if(document.UpdateForm.pdexists!=undefined){
    if(document.UpdateForm.pdexists.value!="" && 
       (document.UpdateForm.emvis026.value.substr(14,2)=="11" ||
        document.UpdateForm.emvis026.value.substr(14,2)=="T1")){
      alert("Please delete the primary diagnosis before discharging the patient");
      return false;
    }
  }
//  document.UpdateForm.target="_self"
  document.UpdateForm.target="PopUpFrame";
  document.UpdateForm.loadflag.value=1
  document.UpdateForm.formactn.value="D "
  document.UpdateForm.updttype.value="DISCH"
  chckMandatory=validateMandatory(document.UpdateForm)
  if(chckMandatory) {
    document.UpdateForm.emvis073.disabled=false;
  document.UpdateForm.submit() }
}
function CheckDeparture(){
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4))
//  document.UpdateForm.emvis033.readOnly=false
//  document.UpdateForm.emvis033.className="" 
  document.UpdateForm.emvis116.className="SelectBig" 
  document.UpdateForm.emvis134.className="SelectBig" 

// referred to on discharge
    document.UpdateForm.emvis051.selectedIndex=0;
    if (ind==18 || ind==2 || ind==3 || ind==5 || ind==6 || ind==7 || ind==8
       || ind==14 || ind==15 || ind==16 || ind==22) {
        for(var i=0; i<document.UpdateForm.emvis051.length; i++) {
           hdp=trim(document.UpdateForm.emvis051.options[i].value.substr(14,4));
           if(hdp==19){
             document.UpdateForm.emvis051.selectedIndex=i;
           }
        }
    }
// ongoing care
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
  if (ind==18 || ind==2 || ind==19 || ind==17 || ind==20 || ind==21 || ind==23 
     || ind=="14" || ind=="15" || ind=="16" || ind=="22" || ind=="4"
     || ind=="9"){
    document.UpdateForm.emvis100.selectedIndex=1;
  }
  if (ind==5 || ind==6 || ind==7 || ind==8 ){
    document.UpdateForm.emvis100.selectedIndex=2;
  }
  if (ind==0 || ind==1 || ind==3 ){
    document.UpdateForm.emvis100.selectedIndex=0;
  }

// Show Divs
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
  ind2=trim(document.UpdateForm.emvis026.options[i].value.substr(4,1));
    if (ind==19 || ind==4 || ind==17 || ind==20 || ind==21) {
     document.getElementById('Departure').style.display="";
     document.getElementById('Departure').innerHTML=document.getElementById('ShowDeparture').innerHTML;
    } else {
     document.getElementById('Departure').style.display="none";
//   document.getElementById('Departure').innerHTML="";
     document.getElementById('Departure').innerHTML=document.getElementById('ShowDeparture').innerHTML;
     document.UpdateForm.emvis033.value="";
     document.UpdateForm.name_emvis033n.value=""
     document.UpdateForm.emvis052.selectedIndex=0;
//     document.UpdateForm.emvis050.selectedIndex=0;
     document.UpdateForm.emvis049.selectedIndex=0;
    }

// Transfer to another hospital
  if (ind=="19" || ind=="4" || ind=="17" || ind=="20" || ind=="21") { 
    document.UpdateForm.emvis033.className="Mandatory" 
//    document.UpdateForm.emvis050.className="Mandatory" 
    document.UpdateForm.emvis049.className="Mandatory" 
    document.UpdateForm.emvis052.className="Mandatory" } 
  else          { 
//                  document.UpdateForm.emvis033.value=""
//                  document.UpdateForm.name_emvis033n.value=""
//                  document.UpdateForm.emvis033.className="Readonly"
//                  document.UpdateForm.emvis033.readOnly=true
    document.UpdateForm.emvis033.className="Readonly"
//    document.UpdateForm.emvis050.className="Readonly" 
    document.UpdateForm.emvis049.className="Readonly" 
    document.UpdateForm.emvis052.className="Readonly"  
                }
// Admission to ward
  if (ind=="18" && ind2!="1" || ind=="2" || ind=="14" || ind=="15" || ind=="16" 
       || ind=="22") {
                  document.UpdateForm.emvis116.className="Mandatory" 
                  document.UpdateForm.emvis134.className="Mandatory" }

}
//
// Same as CheckDeparture but has not got any ongoing care fields
//
function CheckDepartureA(){
  VEMD2019TH=VEMDHideFields();              // VEMD 2019 telehealth visit
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4))
//  document.UpdateForm.emvis033.readOnly=false
//  document.UpdateForm.emvis033.className="" 

  var emvis116 = document.UpdateForm.emvis116;
  var emvis134 = document.UpdateForm.emvis134;
  
  //if object is undefine do nothing
  if(emvis116)
         emvis116.className="SelectBig";
  if(emvis134)
         emvis134.className="SelectBig";

// referred to on discharge
    document.UpdateForm.emvis051.selectedIndex=0;
    if (ind==18 || ind==2 || ind==3 || ind==5 || ind==6 || ind==7 || ind==8
        || ind=="14" || ind=="15" || ind=="16" || ind=="22" || ind=="25"
        || ind=="26"|| ind=="27" || ind=="28") {
        for(var i=0; i<document.UpdateForm.emvis051.length; i++) {
           hdp=trim(document.UpdateForm.emvis051.options[i].value.substr(14,4));
           if(hdp==19){
             document.UpdateForm.emvis051.selectedIndex=i;
           }
        }
    }
// ongoing care
//i=document.UpdateForm.emvis026.selectedIndex
//ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
//if (ind==18 || ind==2 || ind==19 || ind==17 || ind==20 || ind==21 || ind==23 
//    || ind=="14" || ind=="15" || ind=="16" || ind=="22" || ind=="4"
//    || ind=="9"){
//  document.UpdateForm.emvis100.selectedIndex=1;
//}
//if (ind==5 || ind==6 || ind==7 || ind==8 ){
//  document.UpdateForm.emvis100.selectedIndex=2;
//}
//if (ind==0 || ind==1 || ind==3 ){
//  document.UpdateForm.emvis100.selectedIndex=0;
//}
// 
// Show Divs
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
  ind2=trim(document.UpdateForm.emvis026.options[i].value.substr(4,1));
    if ((ind==19 || ind==4 || ind==17 || ind==20 || ind==21) && !VEMD2019TH) {
     document.getElementById('Departure').style.display="";
     document.getElementById('Departure').innerHTML=document.getElementById('ShowDeparture').innerHTML;
    } else {
     document.getElementById('Departure').style.display="none";
//   document.getElementById('Departure').innerHTML="";
     document.getElementById('Departure').innerHTML=document.getElementById('ShowDeparture').innerHTML;
     document.UpdateForm.emvis033.value="";
     document.UpdateForm.name_emvis033n.value=""
     document.UpdateForm.emvis052.selectedIndex=0;
//     document.UpdateForm.emvis050.selectedIndex=0;
     document.UpdateForm.emvis049.selectedIndex=0;
    }

// Transfer to another hospital
  if ((ind=="19" || ind=="4" || ind=="17" || ind=="20" || ind=="21")
      && !VEMD2019TH) {
    document.UpdateForm.emvis033.className="Mandatory"
//    document.UpdateForm.emvis050.className="Mandatory"
    document.UpdateForm.emvis049.className="Mandatory"
    document.UpdateForm.emvis052.className="Mandatory" }
  else          {
//                  document.UpdateForm.emvis033.value=""
//                  document.UpdateForm.name_emvis033n.value=""
//                  document.UpdateForm.emvis033.className="Readonly"
//                  document.UpdateForm.emvis033.readOnly=true
    document.UpdateForm.emvis033.className="Readonly"
//    document.UpdateForm.emvis050.className="Readonly"
    document.UpdateForm.emvis049.className="Readonly"
    document.UpdateForm.emvis052.className="Readonly"
                }
// Admission to ward
  if (ind=="18" && ind2!="1"|| ind==="2" || ind=="14" || ind=="15" || ind=="16"
      || ind=="22") 
  { 
                  if(document.UpdateForm.emvis116)
                            document.UpdateForm.emvis116.className="Mandatory"
                  if(document.UpdateForm.emvis134)
                            document.UpdateForm.emvis134.className="Mandatory" 
  }

}
function DischargeStat() {
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
  if(ind=="18" || ind=="2" || ind=="14" || ind=="15" || ind=="16" 
     || ind=="22") {
      document.UpdateForm.redirect.value="patweb89.pbl?reportno=1&" + 
                                     "template=16&urnumber=" + 
                                     document.UpdateForm.urnumber.value
      document.UpdateForm.nextpage.value="2"
      }
  else {
      document.UpdateForm.nextpage.value="1"
      document.UpdateForm.redirect.value=""
      }    
}
//
function PostDischargeACT() {
//
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
  if(ind=="1") {  // Admitted to ward
    document.UpdateForm.emvis133.value=1
    document.UpdateForm.nextpage.value="8";
    document.UpdateForm.redirect.value="emrweb01.pbl?reportno=1&template=001" +
          "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
          "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
          "&emradmit=1"
  }
  else {
    document.UpdateForm.emvis133.value=0
    document.UpdateForm.nextpage.value="8";
    document.UpdateForm.redirect.value="emrweb01.pbl?reportno=1&template=001" +
          "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
          "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
          "&emradmit=1"
    }
//
    if(ind!="4") {  // All except did not wait must have a doctor
      if(isWhitespace(document.UpdateForm.chkdot.value)) {
        alert("Attending Doctor Must Be Entered Before Discharge")
        return;
      }
    } 
//
  document.UpdateForm.target="_self"
  document.UpdateForm.loadflag.value=1
  document.UpdateForm.formactn.value="D "
  document.UpdateForm.updttype.value="DISCH"
  chckMandatory=validateMandatory(document.UpdateForm)
//
   if(!top.location.pathname.match(/EmergencyMap/g)) {
      document.UpdateForm.nextpage.value="2";
      document.UpdateForm.redirect.value="emrweb01.pbl?reportno=1&template=002"
  }
  if(chckMandatory) {
  document.UpdateForm.submit() }
}
//
function UpdateDischargeACT() {
//
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4))
  document.UpdateForm.nextpage.value="8"
  if (ind=="1") {  // Admittted to ward
    document.UpdateForm.nextpage.value="2";
    document.UpdateForm.redirect.value="emrweb02.pbl?reportno=1&template=109" +
        "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
        "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
        "&emradmit=1"
 }
//
    if(ind!="4") {  // All except did not wait must have a doctor
      if(isWhitespace(document.UpdateForm.chkdot.value)) {
        alert("Attending Doctor Must Be Entered Before Discharge")
        return;
      }
    }
//
  document.UpdateForm.target="_self"
  document.UpdateForm.formactn.value="C1"
  document.UpdateForm.updttype.value="DOCTO"
  var validateresult = validateMandatory(document.UpdateForm);
  if (validateresult==true) {
     document.UpdateForm.submit()
  }
}
function PreDischargeACT() {
//
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4))
  document.UpdateForm.nextpage.value="8"
  if (ind=="1") {  // Admittted to ward
    document.UpdateForm.nextpage.value="2";
    document.UpdateForm.redirect.value="emrweb02.pbl?reportno=1&template=109" +
        "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
        "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
        "&emradmit=1"
 }
//
    if(ind!="4") {  // All except did not wait must have a doctor
      if(isWhitespace(document.UpdateForm.chkdot.value)) {
        alert("Attending Doctor Must Be Entered Before Discharge")
        return;                                             
      }                                                     
    }                                                       
//                                                          
  document.UpdateForm.target="_self"                        
  document.UpdateForm.formactn.value="C1"                   
  document.UpdateForm.updttype.value="DOCTO"                
//
// Save of pre discharge details has no mandatory fields
//
  document.UpdateForm.submit()                           
}                                                           
//
function CtypeWarning() {
  if(document.HiddenFields!=undefined &&
     document.HiddenFields.DischargeComplete!=undefined &&
     document.HiddenFields.ctypmand!=undefined &&
     document.UpdateForm!=undefined &&
     document.UpdateForm.emvis147!=undefined) {
     if(document.HiddenFields.DischargeComplete.value==3) {
       if (document.HiddenFields.ctypmand.value==1) {

         if(document.UpdateForm.ctypeadm.value=="Yes" &&
            document.UpdateForm.emvis147.selectedIndex!=0){
            alert("WARNING: Waiting on Admission (C-type) incomplete details " +
                  "will not be updated");
         }
         if(document.UpdateForm.ctypeadm.value=="No " &&
            document.UpdateForm.emvis147.selectedIndex!=1){
            alert("WARNING: Waiting on Admission (C-type) incomplete details " +
                  "will not be updated");
         }

       }
     }
  }
}
function PostDischargeTHC() {
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
  if(ind=="2") {
    document.UpdateForm.emvis133.value=1
    document.UpdateForm.nextpage.value="8";
    document.UpdateForm.redirect.value="emrweb01.pbl?reportno=1&template=001"
  }
  else {
    document.UpdateForm.emvis133.value=0
    document.UpdateForm.nextpage.value="8";
    document.UpdateForm.redirect.value="emrweb01.pbl?reportno=1&template=001"
    }
//

  if (isWhitespace(document.UpdateForm.chkdot.value)) {
    i=document.UpdateForm.emvis026.selectedIndex
    ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,2));
    if(ind!="6" && ind!="8" && ind!="11") {
      alert("Invalid discharge status, no attending doctor");
      return;}
      }
  document.UpdateForm.target="_self"
  document.UpdateForm.loadflag.value=1
  document.UpdateForm.formactn.value="D "
  document.UpdateForm.updttype.value="DISCH"
  chckMandatory=validateMandatory(document.UpdateForm)
  if(chckMandatory) {
  document.UpdateForm.submit() }
}
function PostDischargeNZ() {
//
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
  if(ind=="1") {  // Admitted to ward
    document.UpdateForm.emvis133.value=1
    document.UpdateForm.nextpage.value="8";
    document.UpdateForm.redirect.value="emrweb01.pbl?reportno=1&template=001" +
          "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
          "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
          "&emradmit=1"
  }
  else {
    document.UpdateForm.emvis133.value=0
    document.UpdateForm.nextpage.value="8";
    document.UpdateForm.redirect.value="emrweb01.pbl?reportno=1&template=001" +
          "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
          "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
          "&emradmit=1"
    }
//
  if(top.TogglePanel) {
    document.UpdateForm.nextpage.value="18";
    document.UpdateForm.redirect.value=""
  }
//  document.UpdateForm.target="_self"
  document.UpdateForm.target="PopUpFrame";
  document.UpdateForm.loadflag.value=1
  document.UpdateForm.formactn.value="D "
  document.UpdateForm.updttype.value="DISCH"
  chckMandatory=validateMandatory(document.UpdateForm)
//
   if(!top.location.pathname.match(/EmergencyMap/g)) {
      document.UpdateForm.nextpage.value="12";
      document.UpdateForm.redirect.value="emrweb01.pbl?reportno=1&template=002"
  }
  if(document.UpdateForm.emvis008!=undefined){
    i=document.UpdateForm.emvis008.selectedIndex
    ind1=trim(document.UpdateForm.emvis008.options[i].value.substr(3,1));
    ind2=trim(document.UpdateForm.emvis008.options[i].value.substr(4,1));
    ind3=trim(document.UpdateForm.emvis008.options[i].value.substr(5,1));
    ind4=trim(document.UpdateForm.emvis008.options[i].value.substr(6,1));
    ind5=trim(document.UpdateForm.emvis008.options[i].value.substr(7,1));
    if(document.UpdateForm.urnumber.value!="       0"){
    if((ind1=="W")||(ind2=="W")||(ind3=="W")||(ind4=="W")||(ind5=="W")) {
      document.UpdateForm.nextpage.value="12";
      alert("Reminder:\nThis patient is an ACC patient, please ensure that "+
           "the ACC Details have been completed.");
      document.UpdateForm.redirect.value="patweb89.pbl?reportno=1&template=5" +
      "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+")  +
      "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")  +
      "&systflag=1";}
      }
  }
  if(chckMandatory) {
    document.UpdateForm.submit() 
  }
}
//
function UpdateDischargeNZ() {
//
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4))
  document.UpdateForm.nextpage.value="8"
  if (ind=="1") {  // Admittted to ward
    document.UpdateForm.nextpage.value="2";
    document.UpdateForm.redirect.value="emrweb02.pbl?reportno=1&template=109" +
        "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
        "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
        "&emradmit=1"
 }
//
  if(!top.location.pathname.match(/EmergencyMap/g)) {
    document.UpdateForm.nextpage.value="12";
    document.UpdateForm.redirect.value="emrweb02.pbl?reportno=1&template=100" +
        "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
        "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
  }
  if(document.UpdateForm.emvis008!=undefined){
    i=document.UpdateForm.emvis008.selectedIndex
    ind1=trim(document.UpdateForm.emvis008.options[i].value.substr(3,1));
    ind2=trim(document.UpdateForm.emvis008.options[i].value.substr(4,1));
    ind3=trim(document.UpdateForm.emvis008.options[i].value.substr(5,1));
    ind4=trim(document.UpdateForm.emvis008.options[i].value.substr(6,1));
    ind5=trim(document.UpdateForm.emvis008.options[i].value.substr(7,1));
    if(document.UpdateForm.urnumber.value!="       0"){
    if((ind1=="W")||(ind2=="W")||(ind3=="W")||(ind4=="W")||(ind5=="W")) {
      document.UpdateForm.nextpage.value="12";
      document.UpdateForm.redirect.value="patweb89.pbl?reportno=1&template=5" +
      "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+")  +
      "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")  +
      "&systflag=1";}
      }
  }
//  document.UpdateForm.target="_self"
  document.UpdateForm.target="PopUpFrame";
  document.UpdateForm.formactn.value="C1"
  document.UpdateForm.updttype.value="DOCTO"
  var validateresult = validateMandatory(document.UpdateForm);
  if (validateresult==true) {
     document.UpdateForm.submit()
  }
}
function CheckDepartureACT(){
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4))
//
  if (ind=="2") {  // Departure status home HDP=2
    for(var i=0; i<document.UpdateForm.emvis048.length; i++) {
       ind=trim(document.UpdateForm.emvis048.options[i].value.substr(3,1));
       if(ind==2){ // Discharge destination = Home
         document.UpdateForm.emvis048.selectedIndex=i;
         break;
       }
    }
    for(var i=0; i<document.UpdateForm.emvis051.length; i++) {
       ind=trim(document.UpdateForm.emvis051.options[i].value.substr(14,4));
       if(ind==5){ // Referred to on departure = LMO
         document.UpdateForm.emvis051.selectedIndex=i;
         break;
       }
    }
  }
//
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4))
//
  if (ind=="4") {  // Did not wait HDP=4
    for(var i=0; i<document.UpdateForm.emvis048.length; i++) {
       ind=trim(document.UpdateForm.emvis048.options[i].value.substr(14,4));
       if(ind==5){ // Discharge destination = Other
         document.UpdateForm.emvis048.selectedIndex=i;
         break;
       }
    }
    for(var i=0; i<document.UpdateForm.emvis051.length; i++) {
       ind=trim(document.UpdateForm.emvis051.options[i].value.substr(14,4));
       if(ind==8){ // Referred to on departure = Not referring
         document.UpdateForm.emvis051.selectedIndex=i;
         break;
       }
    }
  }
//
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4))
//     
  if (ind=="1") {  // Admission to Calvary HDP=1
    for(var i=0; i<document.UpdateForm.emvis048.length; i++) {
       ind=trim(document.UpdateForm.emvis048.options[i].value.substr(14,4));
       if(ind==1){ // Discharge destination = Ward
         document.UpdateForm.emvis048.selectedIndex=i;
         break;
       }
    }
    for(var i=0; i<document.UpdateForm.emvis051.length; i++) {
       ind=trim(document.UpdateForm.emvis051.options[i].value.substr(14,4));
       if(ind==12){ // Referred to on departure = Hospital
         document.UpdateForm.emvis051.selectedIndex=i;
         break;
       }
    }
  }
//
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4))
//     
  if (ind=="7"||ind=="6") {  // Dead on arrival HDP=7 , Died in ED HDP=6
    for(var i=0; i<document.UpdateForm.emvis048.length; i++) {
       ind=trim(document.UpdateForm.emvis048.options[i].value.substr(14,4));
       if(ind==6){ // Discharge destination = Mortuary
         document.UpdateForm.emvis048.selectedIndex=i;
         break;
       }
    }
    for(var i=0; i<document.UpdateForm.emvis051.length; i++) {
       ind=trim(document.UpdateForm.emvis051.options[i].value.substr(14,4));
       if(ind==8){ // Referred to on departure = Not referring
         document.UpdateForm.emvis051.selectedIndex=i;
         break;
       }
    }
  }
//
}
function CheckDepartureHDH(){
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(16,2))
// Ready to depart date and time not mandatory if
// Left at own risk, Did not wait, Deceased
  if (ind=="06" || ind=="07" || ind=="03" || ind=="08") {
    document.UpdateForm.emvis071.className="Date";
    document.UpdateForm.emvis081.className="Time";
  } else {
    document.UpdateForm.emvis071.className="Mandatory Date";
    document.UpdateForm.emvis081.className="Mandatory Time";
  }
//
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(16,2))
//
  if (ind=="6") {  // Did not wait HDP=4
    for(var i=0; i<document.UpdateForm.emvis048.length; i++) {
       ind=trim(document.UpdateForm.emvis048.options[i].value.substr(14,4));
       if(ind==5){ // Discharge destination = Other
         document.UpdateForm.emvis048.selectedIndex=i;
         break;
       }
    }
    for(var i=0; i<document.UpdateForm.emvis051.length; i++) {
       ind=trim(document.UpdateForm.emvis051.options[i].value.substr(14,4));
       if(ind==8){ // Referred to on departure = Not referring
         document.UpdateForm.emvis051.selectedIndex=i;
         break;
       }
    }
  }
//
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(16,2))
//
  if (ind=="1") {  // Admission to Calvary HDP=1
    for(var i=0; i<document.UpdateForm.emvis048.length; i++) {
       ind=trim(document.UpdateForm.emvis048.options[i].value.substr(14,4));
       if(ind==1){ // Discharge destination = Ward
         document.UpdateForm.emvis048.selectedIndex=i;
         break;
       }
    }
    for(var i=0; i<document.UpdateForm.emvis051.length; i++) {
       ind=trim(document.UpdateForm.emvis051.options[i].value.substr(14,4));
       if(ind==12){ // Referred to on departure = Hospital
         document.UpdateForm.emvis051.selectedIndex=i;
         break;
       }
    }
  }
//
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(16,2))
//
  if (ind=="3"||ind=="8") {  // Dead on arrival HDP=7 , Died in ED HDP=6
    for(var i=0; i<document.UpdateForm.emvis048.length; i++) {
       ind=trim(document.UpdateForm.emvis048.options[i].value.substr(14,4));
       if(ind==6){ // Discharge destination = Mortuary
         document.UpdateForm.emvis048.selectedIndex=i;
         break;
       }
    }
    for(var i=0; i<document.UpdateForm.emvis051.length; i++) {
       ind=trim(document.UpdateForm.emvis051.options[i].value.substr(14,4));
       if(ind==8){ // Referred to on departure = Not referring
         document.UpdateForm.emvis051.selectedIndex=i;
         break;
       }
    }
  }
//
// Show Divs
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(16,2));
  ind2=trim(document.UpdateForm.emvis026.options[i].value.substr(4,1));

  if (ind==19 || ind==5 || ind==17 || ind==20 || ind==21) {
    document.getElementById('Departure').style.display="";
    document.getElementById('Departure').innerHTML=document.getElementById('ShowDeparture').innerHTML;
  } else {        
    document.getElementById('Departure').style.display="none";
//  document.getElementById('Departure').innerHTML="";
    document.getElementById('Departure').innerHTML=document.getElementById('ShowDeparture').innerHTML;
    document.UpdateForm.emvis033.value="";
    document.UpdateForm.name_emvis033n.value=""
    document.UpdateForm.emvis052.selectedIndex=0;
//  document.UpdateForm.emvis050.selectedIndex=0;
    document.UpdateForm.emvis049.selectedIndex=0;
  }             

// Transfer to another hospital
  if (ind=="19" || ind=="5" || ind=="17" || ind=="20" || ind=="21") {
    document.UpdateForm.emvis033.className="Mandatory"
//  document.UpdateForm.emvis050.className="Mandatory"
    document.UpdateForm.emvis049.className="Mandatory"
    document.UpdateForm.emvis052.className="Mandatory" 
  } else {
//  document.UpdateForm.emvis033.value=""
//  document.UpdateForm.name_emvis033n.value=""
//  document.UpdateForm.emvis033.className="Readonly"
//  document.UpdateForm.emvis033.readOnly=true
    document.UpdateForm.emvis033.className="Readonly"
//  document.UpdateForm.emvis050.className="Readonly"
    document.UpdateForm.emvis049.className="Readonly"
    document.UpdateForm.emvis052.className="Readonly"
  }
}
function defDepartureACT() {
// if Expected Ward set departure status 
  if(document.UpdateForm.emvis116.value!="") {
    if(document.UpdateForm.emvis026.selectedIndex==0) {
      for(var i=0; i<document.UpdateForm.emvis026.length; i++) {
         ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
         if(ind==1){
            document.UpdateForm.emvis026.selectedIndex=i;
            CheckDepartureACT();
            break;
         }
      }
    }
  }
}
function defDepartureHDH() {
// if Expected Ward set departure status
  if(document.UpdateForm.emvis116.value!="") {
    if(document.UpdateForm.emvis026.selectedIndex==0) {
      for(var i=0; i<document.UpdateForm.emvis026.length; i++) {
         ind=trim(document.UpdateForm.emvis026.options[i].value.substr(16,2));
         if(ind==1){
            document.UpdateForm.emvis026.selectedIndex=i;
            CheckDepartureHDH();
            break;
         }
      }
    }
  } else {
    CheckDepartureHDH();
  }
}
//
function chkExpDteTme() {
    i=document.UpdateForm.emvis026.selectedIndex;
    ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));

    if (ind==18 || ind==2 || ind==3 || ind==13 ||
        ind==14 || ind==15 || ind==16 || ind==22 ||
        ind==0 || ind==1 || ind==19 || ind==23 || ind==12 ||
        ind==17 || ind==20 || ind==21 || ind==4 || ind==9) {

      if (ind==0 || ind==1 || ind==19 || ind==23 || ind==12 ||
          ind==17 || ind==20 || ind==21 || ind==4 || ind==9) {
        if (isWhitespace(document.UpdateForm.emvis073.value)) {
          return true;
        }
        if (isWhitespace(document.UpdateForm.emvis083.value)) {
          return true;
        }
      } else {
        if (isWhitespace(document.UpdateForm.emvis073.value)) {
          alert("Unit Request Date must be entered.");
          return false;
        }
        if (isWhitespace(document.UpdateForm.emvis083.value)) {
          alert("Unit Request Time must be entered.");
          return false;
        }
      }

      if(document.UpdateForm.emvis073.type!="select-one") {
        if(CheckDateTimeRange(document.UpdateForm.emvis024,
            document.UpdateForm.emvis025,
            document.UpdateForm.emvis073,
            document.UpdateForm.emvis083)){ 
          alert("Unit Request Date/Time must be prior to Departure Date/Time.");
          return false;
        }
        return true;
      }

      i=document.UpdateForm.emvis073.selectedIndex;
      ureqday=document.UpdateForm.emvis073.options[i].value.substring(0,2);
      monstr=document.UpdateForm.emvis073.options[i].value.substring(3,6);

      if (monstr=="Jan") {ureqmon="01";}
      if (monstr=="Feb") {ureqmon="02";}
      if (monstr=="Mar") {ureqmon="03";}
      if (monstr=="Apr") {ureqmon="04";}
      if (monstr=="May") {ureqmon="05";}
      if (monstr=="Jun") {ureqmon="06";}
      if (monstr=="Jul") {ureqmon="07";}
      if (monstr=="Aug") {ureqmon="08";}
      if (monstr=="Sep") {ureqmon="09";}
      if (monstr=="Oct") {ureqmon="10";}
      if (monstr=="Nov") {ureqmon="11";}
      if (monstr=="Dec") {ureqmon="12";}

      ureqyear=document.UpdateForm.emvis073.options[i].value.substring(7,11);
      ureqdate=ureqyear+ureqmon+ureqday;

      var x = document.UpdateForm.emvis083.value.split(":");
      hour=x[0];
      min=x[1];
      sec=x[2];
      ureqtime=hour+min+sec;

      depday=document.UpdateForm.emvis024.value.substring(0,2);
      monstr=document.UpdateForm.emvis024.value.substring(3,6);

      if (monstr=="Jan") {depmon="01";}
      if (monstr=="Feb") {depmon="02";}
      if (monstr=="Mar") {depmon="03";}
      if (monstr=="Apr") {depmon="04";}
      if (monstr=="May") {depmon="05";}
      if (monstr=="Jun") {depmon="06";}
      if (monstr=="Jul") {depmon="07";}
      if (monstr=="Aug") {depmon="08";}
      if (monstr=="Sep") {depmon="09";}
      if (monstr=="Oct") {depmon="10";}
      if (monstr=="Nov") {depmon="11";}
      if (monstr=="Dec") {depmon="12";}

      depyear=document.UpdateForm.emvis024.value.substring(7,11);
      depdate=depyear+depmon+depday;

      var x = document.UpdateForm.emvis025.value.split(":");
      hour=x[0];
      min=x[1];
      sec=x[2];
      deptime=hour+min+sec;

      if (ureqdate > depdate) {
        alert("Unit Request Date must be prior to Departure Date.");
        return false;
      }
      if (ureqdate == depdate) {
        if (ureqtime > deptime) {
          alert("Unit Request Time must be prior to Departure Time.");
          return false;
        }
      }
    }
  return true;
}
//
//////////////////////////
//
function CheckDeparturePRIV(){
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4))
//  document.UpdateForm.emvis033.readOnly=false
//  document.UpdateForm.emvis033.className=""
  document.UpdateForm.emvis116.className="SelectBig"
  document.UpdateForm.emvis134.className="SelectBig"

// referred to on discharge
//    document.UpdateForm.emvis051.selectedIndex=0;
//    if (ind==18 || ind==2 || ind==3 || ind==5 || ind==6 || ind==7 || ind==8
//        || ind=="14" || ind=="15" || ind=="16" || ind=="22") {
//        for(var i=0; i<document.UpdateForm.emvis051.length; i++) {
//         hdp=trim(document.UpdateForm.emvis051.options[i].value.substr(14,4));
//           if(hdp==19){
//             document.UpdateForm.emvis051.selectedIndex=i;
//           }
//        }
//    }
// ongoing care
//i=document.UpdateForm.emvis026.selectedIndex
//ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
//if (ind==18 || ind==2 || ind==19 || ind==17 || ind==20 || ind==21 || ind==23
//    || ind=="14" || ind=="15" || ind=="16" || ind=="22" || ind=="4"
//    || ind=="9"){
//  document.UpdateForm.emvis100.selectedIndex=1;
//}
//if (ind==5 || ind==6 || ind==7 || ind==8 ){
//  document.UpdateForm.emvis100.selectedIndex=2;
//}
//if (ind==0 || ind==1 || ind==3 ){
//  document.UpdateForm.emvis100.selectedIndex=0;
//}
//
// Show Divs
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
  ind2=trim(document.UpdateForm.emvis026.options[i].value.substr(4,1));
    if (ind==19 || ind==4 || ind==17 || ind==20 || ind==21) {
     document.getElementById('Departure').style.display="";
     document.getElementById('Departure').innerHTML=document.getElementById('ShowDeparture').innerHTML;
    } else {
     document.getElementById('Departure').style.display="none";
//   document.getElementById('Departure').innerHTML="";
     document.getElementById('Departure').innerHTML=document.getElementById('ShowDeparture').innerHTML;
     document.UpdateForm.emvis033.value="";
     document.UpdateForm.name_emvis033n.value=""
     document.UpdateForm.emvis052.selectedIndex=0;
//     document.UpdateForm.emvis050.selectedIndex=0;
     document.UpdateForm.emvis049.selectedIndex=0;
    }

// Transfer to another hospital
  if (ind=="19" || ind=="4" || ind=="17" || ind=="20" || ind=="21") {
    document.UpdateForm.emvis033.className="Mandatory"
//    document.UpdateForm.emvis050.className="Mandatory"
    document.UpdateForm.emvis049.className="Mandatory"
    document.UpdateForm.emvis052.className="Mandatory" }
  else          {
//                  document.UpdateForm.emvis033.value=""
//                  document.UpdateForm.name_emvis033n.value=""
//                  document.UpdateForm.emvis033.className="Readonly"
//                  document.UpdateForm.emvis033.readOnly=true
    document.UpdateForm.emvis033.className="Readonly"
//    document.UpdateForm.emvis050.className="Readonly"
    document.UpdateForm.emvis049.className="Readonly"
    document.UpdateForm.emvis052.className="Readonly"
                }
// Admission to ward
  if (ind=="18" && ind2!="1"|| ind==="2" || ind=="14" || ind=="15" || ind=="16"
      || ind=="22") {
                  document.UpdateForm.emvis116.className="Mandatory"
                  document.UpdateForm.emvis134.className="Mandatory" }

}
//
function PostDischargePRIV() {
  if (!IsValidDepartureTime()) {
    return;
  }
//
  trueorfalse=CheckDocNurDepStat();
  if (trueorfalse==false) {
    Return;
  }
//
  if(document.UpdateForm.ptcnhdps.value=="3") {                // Victorian
    if(!chkExpDteTme()) {
      return;
    }
  }
//
  if(document.UpdateForm.ptcnhdps.value=="3" &&                // Victorian
     !isWhitespace(document.UpdateForm.emvis134.value)) {      // Exp Unit
    i=document.UpdateForm.emvis026.selectedIndex
    ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
    if(ind=="0" || ind=="1" || ind=="19" || ind=="23" || ind=="12" || ind=="17"
        || ind=="20" || ind=="21" || ind=="24" || ind=="4" || ind=="9") {
      if(!confirm("Inpatient Bed Request Date/Time exists.\n" +
                  "If discharged, a notification will be required by" +
                  " DHS\n" + "OK to continue, Cancel to abort")){
        return;
      }
    } else if (ind=="18" || ind=="2" || ind=="3" || ind=="13"
      || ind=="14" || ind=="15" || ind=="16" || ind=="22" || ind=="31"){
      if (isWhitespace(document.HiddenFields.HospitalAdmission.value)) {
        alert("Warning : Patient must be admitted before being Discharged.");
        return;
      }
    } else {
      alert("Error. Invalid Departure Status with Inpatient Bed" +
            " Request Date/Time.");
      return;
    }
  }
//
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
  if(ind=="18" || ind=="2" || ind=="14" || ind=="15" || ind=="16"
     || ind=="22") {
    document.UpdateForm.emvis133.value=1
    document.UpdateForm.nextpage.value="8";
    document.UpdateForm.redirect.value="emrweb01.pbl?reportno=1&template=001" +
          "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
          "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
          "&emradmit=1"
  }
  else {
    document.UpdateForm.emvis133.value=0
    document.UpdateForm.nextpage.value="8";
    document.UpdateForm.redirect.value="emrweb01.pbl?reportno=1&template=001" +
          "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
          "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
          "&emradmit=1"
    }
//
   if(document.UpdateForm.urnumber.value!="       0") {
    if(document.UpdateForm.emcnrinv.value=="1") {
     document.UpdateForm.nextpage.value="15";
     document.UpdateForm.redirect.value="emrweb04.pbl?reportno=1&template=001" +
          "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
          "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
    }
   }
//
//    i=document.UpdateForm.emvis051.selectedIndex
//    ref=trim(document.UpdateForm.emvis051.options[i].value.substr(14,4));
//    i=document.UpdateForm.emvis026.selectedIndex
//    ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
//    if(ref=="19") {
//      if(ind==0 || ind==1 || ind==23 || ind==9 || ind==10 || ind==12){
//        alert("E242:Invalid Referred to on Departure and Departure Status " +
//              "combination");
//        return;}
//    }
//    else {
//      if(ind==18||ind==2||ind==3||ind==19||ind==5||ind==7||ind==8||
//         ind==11||ind==13|| ind==17||ind==20||ind==21||ind==4
//         || ind==14 || ind==15 || ind==16 || ind==22){
//        alert("E242:Invalid Referred to on Departure and Departure Status "+
//              "combination");
//        return;}
//    }
//

  if (isWhitespace(document.UpdateForm.chkdot.value)) {
    i=document.UpdateForm.emvis026.selectedIndex
    ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,2));
    if(ind!="6" && ind!="8" && ind!="10" && ind!="11") {
      alert("Invalid discharge status, no attending doctor");
      return;}
      }
//  document.UpdateForm.target="_self"
  document.UpdateForm.target="PopUpFrame";
  document.UpdateForm.loadflag.value=1
  document.UpdateForm.formactn.value="D "
  document.UpdateForm.updttype.value="DISCH"
  chckMandatory=validateMandatory(document.UpdateForm)
  if(chckMandatory) {
    document.UpdateForm.emvis073.disabled=false;
  document.UpdateForm.submit() }
}
//
function defDeparturePRIV() {
// Departure Status to home if no expected ward and no expected unit
  if(document.UpdateForm.emvis116.value=="" &&
    document.UpdateForm.emvis134.value=="") {
    for(var i=0; i<document.UpdateForm.emvis026.length; i++) {
       ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
       if(ind==1){
         document.UpdateForm.emvis026.selectedIndex=i;
         break;
       }
    }
  }
// if Expected Ward set departure status
  if(document.UpdateForm.emvis116.value!="") {
    if(document.UpdateForm.emvis026.selectedIndex==0) {
      for(var i=0; i<document.UpdateForm.emvis026.length; i++) {
         ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
         if(ind==18){
            document.UpdateForm.emvis026.selectedIndex=i;
            break;
         }
      }
    }
  }
// if Expected Unit set departure status
  if(!isWhitespace(document.UpdateForm.emvis134.value)) {
    if(document.UpdateForm.emvis026.selectedIndex==0) {
      for(var i=0; i<document.UpdateForm.emvis026.length; i++) {
         ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
         if(ind==18){
            document.UpdateForm.emvis026.selectedIndex=i;
            break;
         }
      }
    }
  }
// Default the Departure Status according to the EFR bed type.
// Emergency Ward/Bed = Discharged Home
// Normal Ward/Bed = Admitted to Hospital
// Emergency Ward/Bed Short Stay = Admitted to EMR
// Default the departure time to the ward request date and time
// If Admitted directly to a normal ward bed. Default the emergency departure
// date/time to the current date/time not the admission date/time
// EFT BED TYPE 0 = Patient has not been admitted to hospital
//              1 = No it is not an emergency ward/bed type
//              2 = Yes it is a emergency ward/bed type
//              3 = Yes it is a emergency ward/bed type - Short Stay Observation
// If the inpatient admission is not discharged and they are in an EFT Bed type
// 2. Default the emergency departure date/time to the current date/time
  if(document.UpdateForm.efrbedty.value=="1") {
    for(var i=0; i<document.UpdateForm.emvis026.length; i++) {
       ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
       if(ind==18){
          document.UpdateForm.emvis026.selectedIndex=i;
          if (document.UpdateForm.efradmis.value=="1") {
            break; // Admitted directly to a normal ward/bed
          }
          document.UpdateForm.emvis024.value=document.UpdateForm.deptdate.value;
          document.UpdateForm.emvis025.value=document.UpdateForm.depttime.value;
          break;
       }
    }
  }
  if(document.UpdateForm.efrbedty.value=="2") {
    for(var i=0; i<document.UpdateForm.emvis026.length; i++) {
       ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
       if(ind==1){
          document.UpdateForm.emvis026.selectedIndex=i;
          if (document.UpdateForm.efrdisch.value=="0") {
            break; // Inpat admiss is not discharge so use current date/time
          }
          document.UpdateForm.emvis024.value=document.UpdateForm.deptdate.value;
          document.UpdateForm.emvis025.value=document.UpdateForm.depttime.value;
          break;
       }
    }
  }
  if(document.UpdateForm.efrbedty.value=="3") {
    for(var i=0; i<document.UpdateForm.emvis026.length; i++) {
       ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
       if(ind==3){
          document.UpdateForm.emvis026.selectedIndex=i;
          document.UpdateForm.emvis024.value=document.UpdateForm.deptdate.value;
          document.UpdateForm.emvis025.value=document.UpdateForm.depttime.value;
          break;
       }
    }
  }
// ongoing care (Yes)
//i=document.UpdateForm.emvis026.selectedIndex
//ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
//if (ind==18 || ind==2 || ind==4 || ind==19 || ind==17 || ind==20
//    || ind==21 || ind==23 || ind==9
//    || ind==14 || ind==15 || ind==16 || ind==22 || ind==24){
//  document.UpdateForm.emvis100.selectedIndex=1;
//}
//if (ind==5 || ind==6 || ind==7 || ind==8 ){
//  document.UpdateForm.emvis100.selectedIndex=2;
//}
//if (ind==0 || ind==1 || ind==3 ){
//  document.UpdateForm.emvis100.selectedIndex=0;
//}
// referred to on discharge
//document.UpdateForm.emvis051.selectedIndex=0;
//i=document.UpdateForm.emvis026.selectedIndex
//ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
//  if (ind==18 || ind==2 || ind==3 || ind==5 || ind==6 || ind==7 || ind==8
//      || ind==14 || ind==15 || ind==16 || ind==22 || ind==24) {
//      for(var i=0; i<document.UpdateForm.emvis051.length; i++) {
//         hdp=trim(document.UpdateForm.emvis051.options[i].value.substr(14,4));
//         if(hdp==19){
//           document.UpdateForm.emvis051.selectedIndex=i;
//           break;
//         }
//      }
//  }
// Show Divs
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
    if (ind==19 || ind==4 || ind==17 || ind==20 || ind==21) {
     document.getElementById('Departure').style.display="";
     document.getElementById('Departure').innerHTML=document.getElementById('ShowDeparture').innerHTML;
    } else {
     document.getElementById('Departure').style.display="none";
     document.getElementById('Departure').innerHTML="";
    }
  CheckDeparturePRIV()
}
//
function UpdateDischargePRIV() {
  if (!IsValidDepartureTime()) {
    return;
  }
//   
  trueorfalse=CheckDocNurDepStat();
  if (trueorfalse==false) {
    return;
  }
//
  if(document.UpdateForm.ptcnhdps.value=="3") {                // Victorian
    if(!chkExpDteTme()) {
      return;
    }
  }
//
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4))
  document.UpdateForm.nextpage.value="8"
//  if (ind=="18" || ind=="2" || ind=="14" || ind=="15" || ind=="16"
//   || ind=="22") {
//    document.UpdateForm.nextpage.value="2";
//    document.UpdateForm.redirect.value="emrweb02.pbl?reportno=1&template=109"+
//        "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
//        "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
//        "&emradmit=1"
// }
  if(ind=="18" || ind=="2" || ind=="14" || ind=="15" || ind=="16"
     || ind=="22") {
    document.UpdateForm.emvis133.value=1
    document.UpdateForm.nextpage.value="8";
    document.UpdateForm.redirect.value="emrweb01.pbl?reportno=1&template=001" +
          "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
          "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
          "&emradmit=1"
  }
  else {
    document.UpdateForm.emvis133.value=0
    document.UpdateForm.nextpage.value="8";
    document.UpdateForm.redirect.value="emrweb01.pbl?reportno=1&template=001" +
          "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
          "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
          "&emradmit=1"
    }
//
//    i=document.UpdateForm.emvis051.selectedIndex
//    ref=trim(document.UpdateForm.emvis051.options[i].value.substr(14,4));
//    i=document.UpdateForm.emvis026.selectedIndex
//    ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
//    if(ref=="19") {
//      if(ind==0 || ind==1 || ind==23 || ind==9 || ind==10 || ind==12){
//        alert("E242:Invalid Referred to on Departure and Departure Status " +
//              "combination");
//        return;}
//    }
//    else {
//      if(ind==18||ind==2||ind==3||ind==19||ind==5||ind==7||ind==8||
//         ind==11||ind==13||ind==17||ind==20||ind==21||ind==4
//         || ind==14 || ind==15 || ind==16 || ind==22){
//        alert("E242:Invalid Referred to on Departure and Departure Status " +
//              "combination");
//      return;}
//    }
//
  if(document.UpdateForm.ptcnhdps.value=="3" &&                // Victorian
     !isWhitespace(document.UpdateForm.emvis134.value)) {      // Exp Unit
    i=document.UpdateForm.emvis026.selectedIndex
    ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
    if(ind=="0" || ind=="1" || ind=="19" || ind=="23" || ind=="12" || ind=="17"
       || ind=="20" || ind=="21" || ind=="24" || ind=="4" || ind=="9") {
      if(!confirm("Inpatient Bed Request Date/Time exists.\n" +
                  "If discharged, a notification will be required by" +
                  " DHS\n" + "OK to continue, Cancel to abort")){
        return;
      }
    } else if (ind=="18" || ind=="2" || ind=="3" || ind=="13"
      || ind=="14" || ind=="15" || ind=="16" || ind=="22" || ind=="31"){
      if (isWhitespace(document.HiddenFields.HospitalAdmission.value)) {
        alert("Warning : Patient must be admitted before being Discharged.");
        return;
      }
    } else {
      alert("Error. Invalid Departure Status with Inpatient Bed" +
            " Request Date/Time.");
      return;
    }
  }
//
  if (isWhitespace(document.UpdateForm.chkdot.value) &&
     document.UpdateForm.ptcnhdps.value=="3") {           // Victoria
    i=document.UpdateForm.emvis026.selectedIndex
    ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,2));
    if(ind!="6" && ind!="8" && ind!="10" && ind!="11") {
      alert("Invalid discharge status, no attending doctor");
      return;}
      }
//
//document.UpdateForm.target="_self"
  document.UpdateForm.target="PopUpFrame";
  document.UpdateForm.formactn.value="C1"
  document.UpdateForm.updttype.value="DOCTO"
  var validateresult = validateMandatory(document.UpdateForm);
  if (validateresult==true) {
    document.UpdateForm.emvis073.disabled=false;
     document.UpdateForm.submit()
  }
}
//
function PostDischargeHDH() {
//
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
  if(ind=="1") {  // Admitted to ward
    document.UpdateForm.emvis133.value=1
    document.UpdateForm.nextpage.value="8";
    document.UpdateForm.redirect.value="emrweb01.pbl?reportno=1&template=001" +
          "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
          "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
          "&emradmit=1"
  }
  else {
    document.UpdateForm.emvis133.value=0
    document.UpdateForm.nextpage.value="8";
    document.UpdateForm.redirect.value="emrweb01.pbl?reportno=1&template=001" +
          "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
          "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
          "&emradmit=1"
    }
//
//    if(ind!="4") {  // All except did not wait must have a doctor
//      if(isWhitespace(document.UpdateForm.chkdot.value)) {
//        alert("Attending Doctor Must Be Entered Before Discharge")
//        return;
//      }
//    }
//
  document.UpdateForm.target="_self"
  document.UpdateForm.loadflag.value=1
  document.UpdateForm.formactn.value="D "
  document.UpdateForm.updttype.value="DISCH"
  chckMandatory=validateMandatory(document.UpdateForm)
//
   if(!top.location.pathname.match(/EmergencyMap/g)) {
      document.UpdateForm.nextpage.value="2";
      document.UpdateForm.redirect.value="emrweb01.pbl?reportno=1&template=002"
  }
  if(chckMandatory) {
  document.UpdateForm.submit() }
}
//
function UpdateDischargeHDH() {
//
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4))
  if(getTop().location.pathname.match(/EmergencyMap/g)) {
    document.UpdateForm.nextpage.value="8"
  }
  if (ind=="1") {  // Admittted to ward
    document.UpdateForm.nextpage.value="2";
    document.UpdateForm.redirect.value="emrweb02.pbl?reportno=1&template=109" +
        "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
        "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
        "&emradmit=1"
 }
//
//  if(ind!="4") {  // All except did not wait must have a doctor
//    if(isWhitespace(document.UpdateForm.chkdot.value)) {
//      alert("Attending Doctor Must Be Entered Before Discharge")
//      return;
//    }
//  }
//
  document.UpdateForm.target="_self"
  document.UpdateForm.formactn.value="C1"
  document.UpdateForm.updttype.value="DOCTO"
  var validateresult = validateMandatory(document.UpdateForm);
  if (validateresult==true) {
     document.UpdateForm.submit()
  }
}
function PreDischargeHDH() {
//
  i=document.UpdateForm.emvis026.selectedIndex
  ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4))
  document.UpdateForm.nextpage.value="8"
  if (ind=="1") {  // Admittted to ward
    document.UpdateForm.nextpage.value="2";
    document.UpdateForm.redirect.value="emrweb02.pbl?reportno=1&template=109" +
        "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
        "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
        "&emradmit=1"
 }
//
//  if(ind!="4") {  // All except did not wait must have a doctor
//    if(isWhitespace(document.UpdateForm.chkdot.value)) {
//      alert("Attending Doctor Must Be Entered Before Discharge")
//      return;
//    }
//  }
//
  document.UpdateForm.target="_self"
  document.UpdateForm.formactn.value="C1"
  document.UpdateForm.updttype.value="DOCTO"
//
// Save of pre discharge details has no mandatory fields
//
  document.UpdateForm.submit()
}
function SetDepartureDateNZ() {
  UpdateForm.emvis150.value=UpdateForm.emvis024.value
  UpdateForm.emvis151.value=UpdateForm.emvis025.value
  UpdateForm.emvis151.focus();
}
function CheckDepartureDateNZ() {

  var ExtDesc = document.getElementById('ExtDesc');
  var ExtField = document.getElementById('ExtField');
  var DelayDesc = document.getElementById('DelayDesc');
  var DelayField = document.getElementById('DelayField');

  if(isWhitespace(UpdateForm.emvis024.value) ||
     isWhitespace(UpdateForm.emvis025.value)) {
     ExtDesc.style.display="none";
     ExtField.style.display="none";
     DelayDesc.style.display="none";
     DelayField.style.display="none";
     ExtField.disabled=true;
     DelayField.disabled=true;
     ExtField.className="";
     DelayField.className="";
     return true;
  }
  if(!checkDate(UpdateForm.emvis024,UpdateForm.emvis024.title)) { 
     ExtDesc.style.display="none";
     ExtField.style.display="none";
     DelayDesc.style.display="none";
     DelayField.style.display="none";
     ExtField.disabled=true;
     DelayField.disabled=true;
     ExtField.className="";
     DelayField.className="";
     return true;
  }
  if(!checkTime(UpdateForm.emvis025,UpdateForm.emvis025.title)) { 
     ExtDesc.style.display="none";
     ExtField.style.display="none";
     DelayDesc.style.display="none";
     DelayField.style.display="none";
     ExtField.disabled=true;
     DelayField.disabled=true;
     ExtField.className="";
     DelayField.className="";
     return true;
  }
  CheckEventEndDateNZ();

  if(isWhitespace(UpdateForm.emvis150.value) ||
     isWhitespace(UpdateForm.emvis151.value)){ 
     DelayDesc.style.display="none";
     DelayField.style.display="none";
     DelayField.disabled=true;
     DelayField.className="";
     return true;
  }
  if(!checkDate(UpdateForm.emvis150,UpdateForm.emvis150.title)) { 
     DelayDesc.style.display="none";
     DelayField.style.display="none";
     DelayField.disabled=true;
     DelayField.className="";
     return true;
  }
  if(!checkTime(UpdateForm.emvis151,UpdateForm.emvis151.title)) { 
     DelayDesc.style.display="none";
     DelayField.style.display="none";
     DelayField.disabled=true;
     DelayField.className="";
     return true;
  }

  if(!ChkDateTime(UpdateForm.emvis024,UpdateForm.emvis025,
                 UpdateForm.emvis150,UpdateForm.emvis151)) {
    alert("Departure date/time must be equal to or greater than " +
          "the event end date/time");
    UpdateForm.emvis151.focus();
    return false;
  }
//
   var delay="0";
//
   stime = new Date();
   stime.setFullYear(UpdateForm.emvis024.value.substr(7,4));
   monstr= UpdateForm.emvis024.value.substr(3,3)
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
   stime.setMonth(mon);
   stime.setDate(UpdateForm.emvis024.value.substr(0,2));
   stime.setHours(UpdateForm.emvis025.value.substr(0,2));
   stime.setMinutes(UpdateForm.emvis025.value.substr(3,2));
   stime.setSeconds(UpdateForm.emvis025.value.substr(6,2));

   etime = new Date();
   etime.setFullYear(UpdateForm.emvis150.value.substr(7,4));
   monstr= UpdateForm.emvis150.value.substr(3,3)
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
   etime.setMonth(mon);
   etime.setDate(UpdateForm.emvis150.value.substr(0,2));
   etime.setHours(UpdateForm.emvis151.value.substr(0,2));
   etime.setMinutes(UpdateForm.emvis151.value.substr(3,2));
   etime.setSeconds(UpdateForm.emvis151.value.substr(6,2));
   delay = etime.getTime() - stime.getTime();
   delay = Math.floor(delay / (1000));

  if (delay <= "60") {
     DelayDesc.style.display="none";
     DelayField.style.display="none";
     DelayField.disabled=true;
     DelayField.className="";
  } 
  else {
     DelayDesc.style.display="";
     DelayField.style.display="";
     DelayField.disabled=false;
     DelayDesc.disabled=false;
     DelayField.className="Mandatory";
  }
  return true;
}
function CheckEventEndDateNZ() {

  var ExtDesc = document.getElementById('ExtDesc');
  var ExtField = document.getElementById('ExtField');
  var DelayDesc = document.getElementById('DelayDesc');
  var DelayField = document.getElementById('DelayField');

   if(isWhitespace(UpdateForm.ptdocsee.value)) { 
      ExtDesc.style.display="none";
      ExtField.style.display="none";
      ExtField.disabled=true;
      ExtField.className="";
      return;
   }
   var duration="0";

   stime = new Date();
   stime.setFullYear(UpdateForm.ptdocsee.value.substr(7,4));
   monstr= UpdateForm.ptdocsee.value.substr(3,3)
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
   stime.setMonth(mon);
   stime.setDate(UpdateForm.ptdocsee.value.substr(0,2));
   stime.setHours(UpdateForm.ptdocsee.value.substr(12,2));
   stime.setMinutes(UpdateForm.ptdocsee.value.substr(15,2));
   stime.setSeconds(UpdateForm.ptdocsee.value.substr(18,2));

   etime = new Date();
   etime.setFullYear(UpdateForm.emvis024.value.substr(7,4));
   monstr= UpdateForm.emvis024.value.substr(3,3)
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
   etime.setMonth(mon);
   etime.setDate(UpdateForm.emvis024.value.substr(0,2));
   etime.setHours(UpdateForm.emvis025.value.substr(0,2));
   etime.setMinutes(UpdateForm.emvis025.value.substr(3,2));
   etime.setSeconds(UpdateForm.emvis025.value.substr(6,2));
   duration = etime.getTime() - stime.getTime();
   duration = Math.floor(duration / (1000 * 60));

  if (duration>trim(UpdateForm.emcnevrm.value)) {
      ExtDesc.style.display="";
      ExtField.style.display="";
      ExtField.disabled=false;
      ExtDesc.disabled=false;
      ExtField.className="Mandatory";
  }
  else {
      ExtDesc.style.display="none";
      ExtField.style.display="none";
      ExtField.disabled=true;    
      ExtField.className="";
  }
}
function ShowDeptDateReason() {
  if(!checkDate(UpdateForm.emvis024,UpdateForm.emvis024.title) ||
     !checkTime(UpdateForm.emvis025,UpdateForm.emvis025.title)) { 
    UpdateForm.reason07.selectedIndex=0;
    UpdateForm.reason07.disabled=true;
    UpdateForm.reason07.className="";
    UpdateForm.updfld01.value="";
    UpdateForm.reasfc01.value="";
    return;
  }
  if(UpdateForm.d_emvis024.value!=UpdateForm.emvis024.value ||
     UpdateForm.d_emvis025.value!=UpdateForm.emvis025.value) {
     UpdateForm.reason07.disabled=false;
     UpdateForm.reason07.className="Mandatory";
  } else {
    UpdateForm.reason07.selectedIndex=0;
    UpdateForm.reason07.disabled=true;
    UpdateForm.reason07.className="";
    UpdateForm.updfld01.value="";
    UpdateForm.reasfc01.value="";
  }
  CheckFutureTime(UpdateForm,UpdateForm.emvis024.value,UpdateForm.emvis025);

}
function DeptDateReason() {
  UpdateForm.updfld01.value="07";
  UpdateForm.reasfc01.value=UpdateForm.reason07.value;
}
function ShowDeptStatReason() {
  if(UpdateForm.d_emvis026.value!=UpdateForm.emvis026.value.substr(0,3)) {
     UpdateForm.reason10.disabled=false;
     UpdateForm.reason10.className="Mandatory";
  } else {
    UpdateForm.reason10.selectedIndex=0;
    UpdateForm.reason10.disabled=true;
    UpdateForm.reason10.className="";
    UpdateForm.updfld02.value="";
    UpdateForm.reasfc02.value="";
  }
}
function DeptStatReason() {
  UpdateForm.updfld02.value="10";
  UpdateForm.reasfc02.value=UpdateForm.reason10.value;
}
function CheckFutureDeparture(theForm,checkdate,checktime) {
 SetCurrentDateTimeNoFocus(null,theForm.currtime);// UNIX time
 if (SetDateYYYYMMDD(checkdate)==(theForm.currdate.value)) {
   var newttime=trim(checktime.value.replace(/:/g,"")) - 0
   var currentt=trim(theForm.currtime.value.replace(/:/g,"")) - 0
   if(newttime>currentt){
   alert("Departure time can't be in the future");
   checktime.focus();
   return false;
   }
 }
 return true;
}

/************************************************************************************
*                   Start IBA.HEA.Knox namespace
************************************************************************************/

//simulating namespace

var IBA = {}; 
IBA.HEA = {}; 

IBA.HEA.Knox = 
{

  /*******************************************************************************/
  /* updateDisc - update discharge function for HEA Knox
  */
  updateDisc:
  function()
  {
      var printercheckbox = document.getElementById("printcheck");
      var printerDropDown = document.getElementById("frmprint");
      var stationCode = document.getElementById("statncod");

      document.UpdateForm.formactn.value = "C2";
      document.UpdateForm.updttype.value = "UPDIS";

      
      i = document.UpdateForm.emvis026.selectedIndex;
      ind = trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
      if(document.UpdateForm.ptcnhdps!=undefined) {
        if(document.UpdateForm.ptcnhdps.value=="2") {   // NSW
          ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,2));
        }
      }
      document.UpdateForm.nextpage.value="8";

      if(ind=="18" || ind=="2" || ind=="13" || ind=="14" || ind=="15" || ind=="16"
         || ind=="22" || ind=="25" || ind=="26")
      {
         document.UpdateForm.emvis133.value=1
         document.UpdateForm.nextpage.value="8";
         document.UpdateForm.redirect.value="emrweb01.pbl?reportno=1&template=001" +
          "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
          "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
          "&emradmit=1"
      }
      else
      {
         document.UpdateForm.emvis133.value=0
         document.UpdateForm.nextpage.value="8";
         document.UpdateForm.redirect.value="emrweb01.pbl?reportno=1&template=001" +
          "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
          "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
          "&emradmit=1"
      }
      

      if(printercheckbox)
      {
        if(printercheckbox.checked)
        {
          if(!this.checkMandatory(printerDropDown) || !this.checkMandatory(stationCode))
          {
            alert("Please populate all mandatory fields");
            return;
          }
        }
      }

      this.sendCheckBoxes();
      
      if(!top.location.pathname.match(/EmergencyMap/g))
      {
         document.UpdateForm.nextpage.value="2";
         document.UpdateForm.redirect.value="emrweb02.pbl?reportno=1&template="+document.UpdateForm.template.value+
                   "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
                   "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") 

      }
////
  if(top.TogglePanel) {
    if (parent.TogglePanel!=null) {
       var s=getTop().document.getElementById("search");
       if (s.style.display!='none'){
         document.UpdateForm.nextpage.value="18"
       } else {
         if(top.location.pathname.match(/EmergencyMapView.html/g) ||
            top.location.pathname.match(/EmergencyMapViewEDClinician.html/g) ||
            top.location.pathname.match(/EmergencyMapViewEDClerk.html/g))
         {
           document.UpdateForm.redirect.value =
           "emrweb02.pbl?reportno=1&template=004" +
           "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
           "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+");
         }
         document.UpdateForm.nextpage.value="19"
       }
    }

  }
////
      document.UpdateForm.submit();
   },

  /****************************************************************************/
  /* validatePrinterCheckBox - check the printer checkbox if ticked make printer
  /* and stationery code mandatory
  */
  validatePrinterCheckBox:
  function()
  {
    var printercheckbox = document.getElementById("printcheck");
    var printerDropDown = document.getElementById("frmprint");
    var stationCode = document.getElementById("statncod");
    var noform = document.getElementById("nolabelf");

    if(printercheckbox)
    {
      if(printercheckbox.checked)
      {
        printerDropDown.className = "Mandatory";
        stationCode.className = "Mandatory";
        noform.value = "1";
      }
      else
      {
        printerDropDown.className = " ";
        stationCode.className = " ";
      }
    }
  },

  /*********************************************************************************
  /* validateCheckBoxes - set values from cgi to html checkbox object  
  /*                      1 = checked 
  /*                      0 = not checked
  */
  validateCheckBoxes:
  function()
  {
      var emrcl006 = document.getElementById("emrcl006");
      var dummyEmrcl006 = document.getElementById("d_emrcl006");

      var emrcl008 = document.getElementById("emrcl008");
      var dummyEmrcl008 = document.getElementById("d_emrcl008");

      var emrcl007 = document.getElementById("emrcl007");
      var dummyEmrcl007 = document.getElementById("d_emrcl007");

      emrcl006.value == 1 ? dummyEmrcl006.checked = true : dummyEmrcl006.checked = false;
      emrcl008.value == 1 ? dummyEmrcl008.checked = true : dummyEmrcl008.checked = false;
      emrcl007.value == 1 ? dummyEmrcl007.checked = true : dummyEmrcl007.checked = false;
  },

  /*********************************************************************************
  /* sendCheckBoxes - grab the html checkbox object and send it to the cgi
  /*                  checked = 1
  /*                  not checked = 0
  */
  sendCheckBoxes:
  function()
  {
    var emrcl006 = document.getElementById("emrcl006");
    var dummyEmrcl006 = document.getElementById("d_emrcl006");

    var emrcl008 = document.getElementById("emrcl008");
    var dummyEmrcl008 = document.getElementById("d_emrcl008");

    var emrcl007 = document.getElementById("emrcl007");
    var dummyEmrcl007 = document.getElementById("d_emrcl007");

    dummyEmrcl006.checked?emrcl006.value = 1: emrcl006.value = 0;
    dummyEmrcl008.checked?emrcl008.value = 1: emrcl008.value = 0;
    dummyEmrcl007.checked?emrcl007.value = 1: emrcl007.value = 0;
  },

  /*********************************************************************************
  /* checkTransferToSource - check the transfer to source indicator is set to 4
  /* if so display the departure details, if not hide the departure details
  */
  checkTransferToSource:
  function()
  {
    var VEMD2019TH=VEMDHideFields();              // VEMD 2019 telehealth visit
    var transferIndicator = 0;
    var emvis026 = document.getElementById("emvis026");
    var transferIndex = emvis026.selectedIndex;
    var departureSpan = document.getElementById("ShowDeparture");
    var departureSpanBlank = document.getElementById("ShowDepartureBlank");
    var departurePanel = document.getElementById("Departure");

    if(emvis026)
       transferIndicator = trim(emvis026.options[transferIndex].value.substr(14,2));
    if(departurePanel)
    {
      if((transferIndicator == "4" || transferIndicator == "17" ||
         transferIndicator == "19" || transferIndicator == "20" ||
         transferIndicator == "21") && !VEMD2019TH)
      {
        departurePanel.style.display = "";
        departurePanel.innerHTML = departureSpan.innerHTML;
      }
      else
      {
       departurePanel.style.display = "none";
       departurePanel.innerHTML = departureSpanBlank.innerHTML;
      }
    }
  },

  /**************************************************************************
  /* checkAmbBooking - check the transport mode and if it's is by ambulance
  /* set the ambulance booking time to mandatory
  */
  checkAmbBooking:
  function()
  {
    var transportInd = 0;
    var emvis049 = document.getElementById("emvis049");
    var emvis087 = document.getElementById("emvis087");
    var transportIndex = emvis049.selectedIndex;

    if(emvis049)
      transportInd = trim(emvis049.options[transportIndex].value.substr(14,4));

      if(transportInd == "3" || transportInd == "4" ||
         transportInd == "10" || transportInd == "11")
      {
        if(emvis087)
        {
          emvis087.className="Mandatory Time";
        }
      }
      else
      {
        if(emvis087)
        {
          emvis087.className="Time";
        }
      }
  },

  /*********************************************************************************
  /* dischargeMandatoryFields - set mandatory fields when user decides to discharge
  /* a patient, but allow for update to occur without making any fields mandatory
  */
  dischargeMandatoryFields:
  function(checkDepartureStatus)
  {
    // mandatroy fields list
    var arrayMandatoryFields = ["emvis024","emvis025","emvis026"];

    var emvis026 = document.getElementById("emvis026");
    var transferIndicator = 0;
    var transferIndex = emvis026.selectedIndex;

    var printercheckbox = document.getElementById("printcheck");
    var printerDropDown = document.getElementById("frmprint");

    // any additional fields that need to be made mandatory?
    if (arguments.length > 1) {
      // yes; add them to our array of mandatory fields
      for (var i=1; i<arguments.length; i++) {
        arrayMandatoryFields.push(arguments[i]);
      }
    }

    if(emvis026)
    {
      transferIndicator = trim(emvis026.options[transferIndex].value.substr(14,2));

      if(transferIndicator == "4" || transferIndicator == "17" ||
         transferIndicator == "19" || transferIndicator == "20" ||
         transferIndicator == "21")
      {
        //when indicator is 4, set departure details to mandatory on discharge
        arrayMandatoryFields.push("emvis033");
//        arrayMandatoryFields.push("emvis050");
        arrayMandatoryFields.push("emvis049");
        arrayMandatoryFields.push("emvis052");
      }
    }

    //printer checkbox exist on screen  
    if(printercheckbox)
    {
      //is checked?
      if(printercheckbox.checked)
      {
        //make fields mandatory
        arrayMandatoryFields.push("frmprint");
        arrayMandatoryFields.push("statncod");
      }
    }

    if ( (typeof informGP != "undefined") &&
         (typeof faxExists != "undefined") &&
         (typeof showPrinter != "undefined") ) {
      if(informGP && !faxExists && showPrinter!="1"){
         if(document.HiddenFields.DischargeComplete.value=="1"){
            arrayMandatoryFields.push("emrcn029");
         }
      }
    }

    // scan through all the fields and switch the mandatory fields on
    // using the arrayMandatoryFields list
    for(var i = 0; i < arrayMandatoryFields.length;i++)
    {
      if( !this.checkMandatory( document.getElementById( arrayMandatoryFields[i] ) ) )
      {
        this.switchAllMandatoryFieldsOn(arrayMandatoryFields);
        alert("Please populate all mandatory fields");
        return;
      }
    }

    if ((checkDepartureStatus != undefined) && checkDepartureStatus)
    {
      if (emvis026)
      {
        transferIndicator = trim(emvis026.options[transferIndex].value.substr(14,4));
        // check HCS EQUIVALENT...
        if (transferIndicator == "2") {
          if (isWhitespace(document.HiddenFields.HospitalAdmission.value)){
            alert("Patient must be admitted before being Discharged.");
            return;
          }
        }
      }
    }
    
    //everything OK, convert html checkboxes to cgi 
    this.sendCheckBoxes();
    // discharge patient
    this.postDischarge();
  },
  
  /*************************************************************************************
  /* postDischarge - discharge the patient
  /*
  */
  postDischarge:
  function()
  {
    trueorfalse=CheckDocNurDepStat();
    if (trueorfalse==false) 
      return;
      
    if (document.UpdateForm.ptcnhdps.value=="3" &&              // Victorian
      !isWhitespace(document.UpdateForm.emvis134.value)) {      // Exp Unit

      i = document.UpdateForm.emvis026.selectedIndex
      ind = trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));

      if (ind=="0" || ind=="1" || ind=="19" || ind=="23" || ind=="12" ||
          ind=="17" || ind=="20" || ind=="21" || ind=="24" || 
          ind=="4" || ind=="9") {

        if (!confirm("Inpatient Bed Request Date/Time exists.\n" +
                     "If discharged, a notification will be required by" +
                     " DHS\n" + "OK to continue, Cancel to abort")) {
          return;
        }
      } 
      else if (ind=="18" || ind=="2" || ind=="3" || ind=="13" ||
               ind=="14" || ind=="15" || ind=="16" || ind=="22" || ind=="25" ||
               ind=="26" || ind=="31") {

        if (document.getElementById('bhsdisin')==null) {        
          if (isWhitespace(document.HiddenFields.HospitalAdmission.value)){
           alert("Warning : Patient must be admitted before being Discharged.");
           return;
          }
        }
      } 
      else {
        alert("Error. Invalid Departure Status with Inpatient Bed" +
              " Request Date/Time.");
        return;
      }
    }

    i = document.UpdateForm.emvis026.selectedIndex;
    ind = trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
    if(document.UpdateForm.ptcnhdps!=undefined) {
      if(document.UpdateForm.ptcnhdps.value=="2") {   // NSW
        ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,2));
      }
    }
    if (ind=="18" || ind=="2" || ind=="14" || ind=="15" || ind=="16" ||
        ind=="22" || ind=="25" || ind=="26") {
      document.UpdateForm.emvis133.value=1
      document.UpdateForm.nextpage.value="8";

      document.UpdateForm.redirect.value="emrweb01.pbl?reportno=1&template=001"+
      "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
      "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
      "&emradmit=1"
    }
    else {
      document.UpdateForm.emvis133.value=0
      document.UpdateForm.nextpage.value="8";
      document.UpdateForm.redirect.value="emrweb01.pbl?reportno=1&template=001"+
      "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
      "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
      "&emradmit=1"
    }

    if (isWhitespace(document.UpdateForm.chkdot.value)) {
      i = document.UpdateForm.emvis026.selectedIndex
      ind = trim(document.UpdateForm.emvis026.options[i].value.substr(14,2));
      ind8 = trim(document.UpdateForm.emvis026.options[i].value.substr(10,1));
 
      if (ind!="6" && ind!="8" && ind!="10" && ind!="11" && ind!="9" &&
          ind!="T1" && ind!="31" && ind8!="N") {
        if (ind == "5" || ind == "1") {
          if (document.UpdateForm.chknur != undefined) {
            if (isWhitespace(document.UpdateForm.chknur.value)) {
              alert("Invalid discharge status, no attending doctor/nurse");
              return;
            }
          }
        }
        else {
          alert("Invalid discharge status, no attending doctor");
          return;
        }
      }
    }
  
    document.UpdateForm.target="PopUpFrame";
    document.UpdateForm.loadflag.value=1
    document.UpdateForm.formactn.value="D2"
    document.UpdateForm.updttype.value="DISCH"

    if (document.UpdateForm.urnumber.value != "       0") {
      if (document.UpdateForm.emcnrinv.value == "1") {
        if (bEnableMHCollect) {
          p = document.UpdateForm;
          p.redirect.value = "mehweb01.pbl?reportno=09&template=003" +
            "&urnumber=" + p.mhdlukey.value.substr(0,8).replace(/ /g,'+') +
            "&uniqnumb=" + p.mhdlukey.value.substr(8,8).replace(/ /g,'+') +
            "&admissno=" + p.lnkdadmn.value.replace(/ /g,'+') +
            "&invadmno=" + p.admissno.value.replace(/ /g,"+") +
            "&rinvredi=1";
          p.nextpage.value="15";
        }
        else {
          document.UpdateForm.nextpage.value="15";
          document.UpdateForm.redirect.value="emrweb04.pbl?reportno=1&template=001" +
          "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
          "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
        }
      }
      else {  // raise invoice redirect disabled
        if (bEnableMHCollect) {
          p = document.UpdateForm;
          p.redirect.value = "mehweb01.pbl?reportno=09&template=003" +
            "&urnumber=" + p.mhdlukey.value.substr(0,8).replace(/ /g,'+') +
            "&uniqnumb=" + p.mhdlukey.value.substr(8,8).replace(/ /g,'+') +
            "&admissno=" + p.lnkdadmn.value.replace(/ /g,'+') +
            "&rinvredi=0";
          p.nextpage.value="15";
        }
      }
    }
        
    if (!top.location.pathname.match(/EmergencyMap/g))
    {
      if (document.UpdateForm.sjogstin!=undefined) {
        document.UpdateForm.nextpage.value="0"; 
      } else {
        document.UpdateForm.nextpage.value="2";
      }
      document.UpdateForm.redirect.value="emrweb02.pbl?reportno=1&template=" +
      document.UpdateForm.template.value +
      "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
      "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
    }
/////
    if (parent.TogglePanel!=null) {
       var s=getTop().document.getElementById("search");
       if (s.style.display!='none'){
         document.UpdateForm.nextpage.value="18"
       } else {
         document.UpdateForm.nextpage.value="19"
       }
    }
////

    if (validateMandatory(document.UpdateForm))
    {
      document.UpdateForm.emvis073.disabled=false;
      document.UpdateForm.submit() 
    }
  },
 
  /*********************************************************************************
  /* switchAllMandatoryFieldsOn - takes an array and scans through the array checking 
  /* the classname is set to Mandatory if not set it.
  */
  switchAllMandatoryFieldsOn:
  function(arrayList)
  {
    var notFound = -1;
    var obj = null;

    for(var i = 0; i < arrayList.length;i++)
    {
      obj = document.getElementById(arrayList[i]);

      if(obj.className.search(/Mandatory/) == notFound)
      obj.className = " Mandatory";
    }
  },

  /**********************************************************************************
  /* checkMandatory - focus on the fields that is Mandatory
  */
  checkMandatory:
  function(element)
  {
    if(element && element.value === "" )
    {
      element.focus();

      if(element.select)
        element.select();

      return false;
    }
    
     return true;
  },
  
  /**********************************************************************************
  /* checkDateFunction - calls checkDate method
  /*
  */
  checkDateFunction:
  function()
  {
      if(isWhitespace(document.UpdateForm.emvis074.value)) 
        return;
      else 
        checkDate(document.UpdateForm.emvis074,'Ward Allocated Date');
  },
  
  /**********************************************************************************
  /* checkLMOName - check LMO exist, if LMO doesnt exist read from PMSPX2AF 
  /* (LMO_code, LMO-desc js variables)
  /*
  */
  checkLMOName:
  function()
  {
    var dummyEmrcl033 = document.getElementById("d_emrcl033");
    var dummyEmrcl053 = document.getElementById("d_emrcl053");
    var emrcl033 = document.getElementById("emrcl033");
    var name_emrcl033n = document.getElementById("name_emrcl033n");

    if(dummyEmrcl033)
    {
       dummyEmrcl033.value = dummyEmrcl033.value.replace(/ /g,"");
      if(dummyEmrcl033.value === "")
      {
        emrcl033.value = LMO_code;
        name_emrcl033n.value = LMO_desc
      }
      else
      {
        emrcl033.value = dummyEmrcl033.value;
        name_emrcl033n.value = dummyEmrcl053.value;
      }
    }
  }

};
function ValDate(dateField,timeField) {
   if (!checkDate(dateField,dateField.title)) {
      return;
   }
   if (!isWhitespace(timeField.value)) {
     CheckFutureTime(UpdateForm,dateField.value,timeField);
   }
}

function ValTime(dateField,timeField) {
   if (!checkTime(timeField,timeField.title)) {
      return;
   }
   CheckFutureTime(UpdateForm,dateField.value,timeField);
}

/*****************************************************************************************
*                                   End IBA.HEA.Knox namespace                           *
******************************************************************************************/

function checkDeceasedEMR(deathInd) {
  if(deathInd == "D")
  {
    alert("Warning Message\n"+
          "Patient will be discharged as 'Deceased'. ");
  }
}

function checkTrans()
{
 IBA.HEA.Knox.checkTransferToSource();
 deceasedIndicator = document.UpdateForm.emvis026.value.substr(3,1);
 checkDeceasedEMR(deceasedIndicator);
}

function GenericPass() {
  var serverURL  = "../cgi-bin/patweb80.pbl?reportno=11" +
              "&secureid=" + document.UpdateForm.username.value +
              "&securepw=" + document.UpdateForm.password.value +
              "&valdtype=1";

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status==0) {
      return true;
    }
    else {
      return false;
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status==0) {
          return true;
        }
        else {
          return false;
        }
      }
    );
  }
}

function ValDeceasedEMR(deathInd) {
  if (deathInd == "D")
  {
    if(!confirm("Warning Message \n Patient is being discharged as 'Deceased'. Please select OK to confirm or Cancel to change the Discharge Destination.")) {
    document.UpdateForm.emvis026.value="";
    return;
    }
  }
  if ((deathInd=="D") && (document.UpdateForm.genericu.value=="1")) {
    UserDesc.innerHTML="Username/Password"
    UserField.innerHTML=userpassw.innerHTML;
  } else {
    UserDesc.innerHTML=""
    UserField.innerHTML=userblank.innerHTML;
  }
}

var bEnableMHCollect = false;

// Determine whether to allow collection of Mental Health Legal Status
function setMHLSCollect()
{
  bEnableMHCollect = false;
  p = document.UpdateForm;
  if ( (p.catmhlsa == undefined) ||
       (p.d_actvls == undefined) )
    return false;

  var catAllocMHLS = p.catmhlsa.value;
  var activeLSNoEnd = p.d_actvls.value;
  var ind5 = "";
  var ind14 = "";

  //
  // Get indicator 14 value
  //
  if (catAllocMHLS == "AC")
  {
    // Cat AC - Unit
    ind5 = p.d_catgAC.value.substr(7,1);
    ind14 = p.d_catgAC.value.substr(30,1);
  }
  else if (catAllocMHLS == "CC") {
    // Cat CC - Care Type
    ind5 = p.d_catgCC.value.substr(7,1);
    ind14 = p.d_catgCC.value.substr(30,1);
  }

  if ((ind14 == "M") && (ind5 == "P")) {
    //
    // Is there any active Legal Status with no End Date ?
    //
    if (activeLSNoEnd == "1") {
      bEnableMHCollect = true;
      showMHDiv();

      SetCookie("mhdlukeycookie",p.mhdlukey.value);

      if (p.updmhdsc != undefined) {
        p.updmhdsc.value = "1";  // update MH patient discharge
      }

      return true;
    }
  }

  return false;
}

function showMHDiv()
{
  var refToCareLblDiv = document.getElementById('divRefToCareLbl');
  var refToCareLblSpn = document.getElementById('spnRefToCareLbl');
  var refToCareDatDiv = document.getElementById('divRefToCareDat');
  var refToCareDatSpn = document.getElementById('spnRefToCareDat');
  var mhDisStatLblDiv = document.getElementById('divMHDisStatLbl');
  var mhDisStatLblSpn = document.getElementById('spnMHDisStatLbl');
  var mhDisStatDatDiv = document.getElementById('divMHDisStatDat');
  var mhDisStatDatSpn = document.getElementById('spnMHDisStatDat');

  if ( (refToCareLblDiv != undefined) && (refToCareLblSpn != undefined) &&
       (refToCareDatDiv != undefined) && (refToCareDatSpn != undefined)
     )
  {
    refToCareLblDiv.innerHTML = refToCareLblSpn.innerHTML;
    refToCareDatDiv.innerHTML = refToCareDatSpn.innerHTML;
  }

  if ( (mhDisStatLblDiv != undefined) && (mhDisStatLblSpn != undefined) &&
       (mhDisStatDatDiv != undefined) && (mhDisStatDatSpn != undefined)
     )
  {
    mhDisStatLblDiv.innerHTML = mhDisStatLblSpn.innerHTML;
    mhDisStatDatDiv.innerHTML = mhDisStatDatSpn.innerHTML;
  }

  return true;
}
//------------------------------------------------------------
// BHS Discharge screen VEMD edits
//------------------------------------------------------------
function validateVEMD_BHS() {
  if (!IsValidDepartureTime()) {
    return false;
  }
//
  trueorfalse=CheckDocNurDepStat();
  if (trueorfalse==false) {
    return false;
  }
//
//  if(document.UpdateForm.ptcnhdps.value=="3") {                // Victorian
//    if(!chkExpDteTme()) {
//      return false;
//    }
//  }
//
  if (document.UpdateForm.ptcnhdps.value=="3") {  // Victorian (VEMD)
    if (!ValidVEMDDeptStat()) {
      alert("E242:Invalid Referred to on Departure and Departure Status " +
            "combination");
      return;
    }
  }
//
  if (isWhitespace(document.UpdateForm.chkdot.value) &&
      document.UpdateForm.ptcnhdps.value=="3") {           // Victoria
    i=document.UpdateForm.emvis026.selectedIndex;
    ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,2));

    if (ind!="6" && ind!="8" && ind!="10" && ind!="11" && 
        ind!="T1" && ind!="31") {
      if (ind == "5" || ind == "1") {
        if (document.UpdateForm.chknur != undefined) {
          if (isWhitespace(document.UpdateForm.chknur.value)) {
            alert("Invalid discharge status, no attending doctor/nurse");
            return false;
          }
        }
      } else {
        alert("Invalid discharge status, no attending doctor");
        return false;
      }
    }
  }
//
  if (!isWhitespace(document.UpdateForm.chkdot.value)) {
    i=document.UpdateForm.emvis026.selectedIndex
    ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,2));
    if(ind=="T1") {
      alert("Invalid discharge status, patient seen by a doctor");
      return false;
    }
  }
  if(document.UpdateForm.chknur!=undefined) {
    if (!isWhitespace(document.UpdateForm.chknur.value)) {
      i=document.UpdateForm.emvis026.selectedIndex
      ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,2));
      if(ind=="T1") {
        alert("Invalid discharge status, patient seen by a nurse");
        return false;
      }
    }
  }
//
  if(document.UpdateForm.pdexists!=undefined){
    if(document.UpdateForm.pdexists.value!="" &&
       (document.UpdateForm.emvis026.value.substr(14,2)=="11" ||
        document.UpdateForm.emvis026.value.substr(14,2)=="T1")){
      alert("Please delete the primary diagnosis before discharging the patient");
      return false;
    }
  }
  return true;
}
//------------------------------------------------------------
// BHS Update discharge screen VEMD edits
//------------------------------------------------------------
function validateVEMDUpd_BHS() {
  if (!IsValidDepartureTime()) {
    return false;
  }
//
  trueorfalse=CheckDocNurDepStat();
  if (trueorfalse==false) {
    return false;
  }
//
//  if(document.UpdateForm.ptcnhdps.value=="3") {                // Victorian
//    if(!chkExpDteTme()) {
//      return false;
//    }
//  }
//
  if (document.UpdateForm.ptcnhdps.value=="3") {  // Victorian (VEMD)
    if (!ValidVEMDDeptStat()) {
      alert("E242:Invalid Referred to on Departure and Departure Status " +
            "combination");
      return;
    }
  }
//
  if (document.UpdateForm.ptcnhdps.value=="3" &&                // Victorian
      !isWhitespace(document.UpdateForm.emvis134.value)) {      // Exp Unit
    i=document.UpdateForm.emvis026.selectedIndex
    ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,4));
    if(ind=="0" || ind=="1" || ind=="19" || ind=="23" || ind=="12" || ind=="17"
       || ind=="20" || ind=="21" || ind=="24"||ind=="4" || ind=="9") {
      if(!confirm("Inpatient Bed Request Date/Time exists.\n" +
                  "If discharged, a notification will be required by" +
                  " DHS\n" + "OK to continue, Cancel to abort")){
        return false;
      }
    } else if (ind=="18" || ind=="2" || ind=="3" || ind=="13"
      || ind=="14" || ind=="15" || ind=="16" || ind=="22" || ind=="25"
      || ind=="26" || ind=="27" || ind=="28" || ind=="31"){
    } else {
      alert("Error. Invalid Departure Status with Inpatient Bed" +
            " Request Date/Time.");
      return false;
    }
  }
//
  if (isWhitespace(document.UpdateForm.chkdot.value) &&
      document.UpdateForm.ptcnhdps.value=="3") {           // Victoria
    i=document.UpdateForm.emvis026.selectedIndex;
    ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,2));

    if (ind!="6" && ind!="8" && ind!="10" && ind!="11" && 
        ind!="T1" && ind!="31") {
      if (ind == "5" || ind == "1") {
        if (document.UpdateForm.chknur != undefined) {
          if (isWhitespace(document.UpdateForm.chknur.value)) {
            alert("Invalid discharge status, no attending doctor/nurse");
            return false;
          }
        }
      } else {
        alert("Invalid discharge status, no attending doctor");
        return false;
      }
    }
  }
//
  if (!isWhitespace(document.UpdateForm.chkdot.value)) {
    i=document.UpdateForm.emvis026.selectedIndex
    ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,2));
    if(ind=="T1") {
      alert("Invalid discharge status, patient seen by a doctor");
      return false;
    }
  }
  if(document.UpdateForm.chknur!=undefined) {
    if (!isWhitespace(document.UpdateForm.chknur.value)) {
      i=document.UpdateForm.emvis026.selectedIndex
      ind=trim(document.UpdateForm.emvis026.options[i].value.substr(14,2));
      if(ind=="T1") {
        alert("Invalid discharge status, patient seen by a nurse");
        return false;
      }
    }
  }
  if(document.UpdateForm.pdexists!=undefined){
    if(document.UpdateForm.pdexists.value!="" &&
       (document.UpdateForm.emvis026.value.substr(14,2)=="11" ||
        document.UpdateForm.emvis026.value.substr(14,2)=="T1")){
      alert("Please delete the primary diagnosis before updating.");
      return false;
    }
  }
  return true;
}
function DisplayBreach() {
  if(EDBreach=="0") {  // Not using ED breach
    return;
  }
  showdelay=false;
  mandatory=false;
  document.getElementById('DelayText').innerHTML="";
  p=document.UpdateForm;
  i=p.emvis026.selectedIndex
  ind=trim(p.emvis026.options[i].value.substr(14,4));
  p.d_duration.value=0;
  if(ind!="11") {  // Did not wait
    CalculateDuration(p.d_arrdte,p.d_arrtme,p.emvis024,p.emvis025,p.d_duration);
  }
  if(p.d_duration.value>=61 && p.d_duration.value <=120) {
    document.getElementById('DelayText').innerHTML="> 1 Hour";
  }
  if(p.d_duration.value>=121 && p.d_duration.value <=180) {
    document.getElementById('DelayText').innerHTML="> 2 Hour";
  }
  if(p.d_duration.value>=181 && p.d_duration.value <=240) {
    document.getElementById('DelayText').innerHTML="> 3 Hour";
  }
  if(p.d_duration.value>=241 && p.d_duration.value <=300) {
    document.getElementById('DelayText').innerHTML="> 4 Hour";
  }
  if(p.d_duration.value>=301 && p.d_duration.value <=360) {
    document.getElementById('DelayText').innerHTML="> 5 Hour";
  }
  if(p.d_duration.value>=361 && p.d_duration.value <=420) {
    document.getElementById('DelayText').innerHTML="> 6 Hour";
  }
  if(p.d_duration.value>=421 && p.d_duration.value <=480) {
    document.getElementById('DelayText').innerHTML="> 7 Hour";
  }
  if(p.d_duration.value>=481 && p.d_duration.value <=540) {
    document.getElementById('DelayText').innerHTML="> 8 Hour";
  }
  if(p.d_duration.value>=541) {
    document.getElementById('DelayText').innerHTML="> 9 Hour";
  }
  if(p.d_duration.value>=(EDBreach * 60)) {
    showdelay=true;
    mandatory=true;
  }
  if(showdelay) {
    document.getElementById('Delay').innerHTML=
    document.getElementById('ShowDelay').innerHTML;
    if(mandatory) {
      document.getElementById('S04EB').className="Mandatory";
    }
  } else {
    document.getElementById('Delay').innerHTML=
    document.getElementById('NoDelay').innerHTML;
  }
}
//------------------------------------------------------------------------------
// Function : Remote script to validate AN-SNAP Return Code
// DiagType 1 = emricdaf
//          2 = ICD10
//------------------------------------------------------------------------------
function MethDiagnosis(Adm,DiagType,DiagCode,MethFlag) {
  MethFlag.value="0";
  if (isWhitespace(Adm.value) || isWhitespace(DiagType) ||
      isWhitespace(DiagCode.value)) {
    return;
  }
  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=60" +
                   "&admissno=" + Adm.value.replace(/ /g,"+") +
                   "&valdtype=" + DiagType.replace(/ /g,"+") +
                   "&valdcode=" + DiagCode.value;

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|");
      MethFlag.value=ReturnValue[0];
    } else {
      MethFlag.value="0";
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status==0) {
          ReturnValue=returnValue.return_value.split("|");
          MethFlag.value=ReturnValue[0];
        } else {
          MethFlag.value="0";
        }
      }
    );
  }
}
//-----------------------------------------------------------------
// Hide VEMD Telehealth fields
//-----------------------------------------------------------------
function VEMDHideFields() {
 
  if(!document.getElementById("emvis177")) {
    return false;
  }
  visitdate=document.getElementById("emvis001");
  state=document.getElementById("ptcnhdps");
  servicetype=document.getElementById("emvis177");

  if(SetDateYYYYMMDD(visitdate.value)< DOYR2019 || state.value != "3" ||
     servicetype.value.substr(14,1)!="2") {
    if(SetDateYYYYMMDD(visitdate.value)< DOYR2023 || state.value != "3" ||
       servicetype.value.substr(14,1)!="6") {
      return false;
    }
  }
  return true;     // Hide VEMD Telehealth or Virtual Care fields
}
//-----------------------------------------------------------------
// Hide VEMD when service type Telehealth or Virtual Care 
//-----------------------------------------------------------------
function VEMDCheckServiceType() {
  if(!document.getElementById("emvis177")) {
    return false;
  }
  visitdate=document.getElementById("emvis001");
  state=document.getElementById("ptcnhdps");
  servicetype=document.getElementById("emvis177");
  
 if(SetDateYYYYMMDD(visitdate.value)> DOYR2023 || state.value != "3" ){
    return false;
  }
 if ((servicetype.value.substr(14,1)!="2") &&
     (servicetype.value.substr(14,1)!="6")) {
    return false;
  }

  return true;     // Hide VEMD Telehealth or Virtual Care fields
}
//-----------------------------------------------------------------
// Filter VEMD Telehealth fields departure status options
//-----------------------------------------------------------------
function VEMDDepartureStatus() {
  p = document.UpdateForm;
  if(VEMDHideFields()) {                    // Only show Telehealth options
    filterCatCodeList(p.emvis026,"7","T","3");
  } else {                                  // Remove Telehealth options
    filterCatCodeList(p.emvis026,"7","T","1");
  }
}
//-----------------------------------------------------------------
// Hide VEMD Referred to on Departure
//-----------------------------------------------------------------
function VEMDHideForVirtCare() {
 
  p = document.UpdateForm;
  if(!document.getElementById("emvis051")) {
    return false;
  }
  visitdate=document.getElementById("emvis001");
  state=document.getElementById("ptcnhdps");
  servicetype=document.getElementById("emvis177");

  if(SetDateYYYYMMDD(visitdate.value)> DOYR2023 && state.value == "3" &&
     servicetype.value.substr(14,1) =="6") {
    filterCatCodeList(p.emvis051,"HDP","13  ","5"); // Remove Vitual Care  
  }
}

