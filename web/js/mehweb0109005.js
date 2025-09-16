//jsVersion  : V11.03.00
//========================================================================
// Program   : mehweb0109005.js
//
// Written   : 24.05.2006 J.Tan
//
// Function  : Functions Used in mehweb0109005
//
// Version   :
//
// V10.10.01 19/05/2017  Richa Phogat   CAR 309890
//           Added new variable revwdate in GetDates(sectcode)
// V10.03.04 31/08/2012  Patrick Adair  CAR 233276
//           updated Chklstat() & GetDates(sectcode) to default to current date
//           if start date is not entered
// V10.03.03 07/12/2011  J.Tan          CAR 256568
//           Mods checking for LS entered prior to another LS
// V10.03.02 30/11/2011  Peter Vela     CAR 255510
//           Changed error message in FormSubmit()
// V10.03.01 21/11/2011  Peter Vela     CAR 255510
//           Changed error message in FormSubmit()
// V10.02.03 30/10/2011  Nicole Torrisi CAR 245798
//           Added validateTime() to prevent future times being entered
// V10.02.02 12/10/2011  Peter Vela     CAR 251551
//           Added mentalhealthcookie cookie validation in FormSubmit()
// V10.02.01 16/05/2011  Peter Vela     CAR 239538
//           Commented out default functionality for review due date
// V10.00.02 26/10/2010  Jill Parkinson CAR 231795
//           Changed submitHiddenNew in formsubmit to submithidden
// V10.00.01 25/11/2009  Mike Laming    CAR 195158
//           Major changes as per Spec
// V9.10.00  06.06.2008  Ebon Clements 170132
//           Added validateMandatory to FormSubmit
// V9.06.00  24.05.2006  J.Tan     CAR 90040
//           Created js
//========================================================================
//                             -- removed CAR 195158 --
//function DispResd() {
//  if(document.AddForm.currresd.checked == true) {
//    PResident.innerHTML=PlaceResd.innerHTML;
//  } else { 
//    PResident.innerHTML="";
//  }
//} 
     
//                             -- removed CAR 195158 --
//function InitResd() {
//    PResident.innerHTML="";
//} 

function FormSubmit() {
//  if(!validateMandatory(AddForm)) {
//    return;
//  }
     // disable button to avoid double clicking
  DisButton();

  if(!Chklstat()) {
    if(!confirm("Legal Status entered is prior to another Legal Status. OK to continue?")) {
     document.AddForm.mhdls002.value="";
     document.AddForm.mhdls002.focus();
     return;
    }
  }

//                             -- removed CAR 195158 --
//  if(document.AddForm.allwdriv.checked == true) {
//    document.AddForm.mhdls012.value="1";
//  } else {
//     document.AddForm.mhdls012.value="0";
//  }

//                             -- removed CAR 195158 --
//  if(document.AddForm.currresd.checked == true) {
//     document.AddForm.mhdls013.value="1";
//  } else {
//     document.AddForm.mhdls013.value="0";
//  }

  if (document.AddForm.mnhlckie!=undefined) {
    if (document.AddForm.mnhlckie.value=='1') {
      document.AddForm.redirect.value=
      'patweb98.pbl?reportno=1&template=43&urnumber=' +
      document.AddForm.urnumber.value.replace(/ /g,'+') +
      '&admissno=' + document.AddForm.admissno.value.replace(/ /g,'+');
      document.AddForm.nextpage.value="4";
    }
  }

//  document.AddForm.submit();
    SubmitHidden(AddForm);
}

function DisButton() {
  document.AddForm.addbutton.disabled=true;
  setInterval('document.AddForm.addbutton.disabled=false',6000);
}

function GetDates(sectcode) {
  if (isWhitespace(document.AddForm.mhdls002.value)) {
     revdate=SetDateYYYYMMDD(document.AddForm.defldate.value);
     revwdate=SetDateYYYYMMDD(document.AddForm.defldate.value) }
  else {
     revdate=SetDateYYYYMMDD(document.AddForm.mhdls002.value);
     revwdate=SetDateYYYYMMDD(document.AddForm.mhdls006.value) }

  if (isWhitespace(sectcode.value)) {
//    document.AddForm.mhdls006.value="";
    document.AddForm.mhdls011.value="";
    return;

  } else {
    var serverURL="../cgi-bin/mehweb01.pbl?reportno=10" +
                  "&opendate=" + revdate.replace(/ /g,"+") +
                  "&valdcode=" + sectcode.value.replace(/ /g,"+") +
                  "&revwdate=" + revwdate.replace(/ /g,"+")

    var returnValue = RSExecute(serverURL);
    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|")
//      document.AddForm.mhdls006.value=trim(ReturnValue[0]);
      document.AddForm.mhdls011.value=trim(ReturnValue[1]);
    }
    if (sectcode.value.substr(5,1)=="C") {
        CnsDate1.innerHTML=CrtNotice1.innerHTML;
        CnsDate2.innerHTML=CrtNotice2.innerHTML;
        TriDate1.innerHTML=TribunalD1.innerHTML;
        TriDate2.innerHTML=TribunalD2.innerHTML;
        LogDate1.innerHTML=LodgedDat1.innerHTML;
        LogDate2.innerHTML=LodgedDat2.innerHTML;
        CrtTime1.innerHTML=CourtTime1.innerHTML;
        CrtTime2.innerHTML=CourtTime2.innerHTML;
    } else {
        CnsDate1.innerHTML="";
        CnsDate2.innerHTML="";
        TriDate1.innerHTML="";
        TriDate2.innerHTML="";
        LogDate1.innerHTML="";
        LogDate2.innerHTML="";
        CrtTime1.innerHTML="";
        CrtTime2.innerHTML="";
    }
  }
}

function Chklstat() {
  if (isWhitespace(document.AddForm.mhdls002.value)) {
     revdate=SetDateYYYYMMDD(document.AddForm.defldate.value) }
  else {
     revdate=SetDateYYYYMMDD(document.AddForm.mhdls002.value) }
  revtime=document.AddForm.mhdls003.value

  var urno= document.AddForm.urnumber.value.replace(/ /g,"+");
  var uniq= document.AddForm.uniqnumb.value.replace(/ /g,"+");

  var serverURL = "../cgi-bin/mehweb01.pbl?reportno=12" +
                  "&urnumber=" + urno +
                  "&trandate=" + revdate.replace(/ /g,"+") +
                  "&trantime=" + revtime +
                  "&uniqnumb=" + uniq

  var returnValue = RSExecute(serverURL);
  ReturnValue = returnValue.return_value.split("|");
  if (returnValue.status == 0) {
    if (ReturnValue[0] == 1)       // Combination already exists
      return false;                // Return error
  }
  return true;
}

//function valCaseTeam() {
//  selectOptions("73",AddForm.mhdls008,AddForm.mhdls009);
//  AddForm.mhdls009.selectedIndex=1
//}

function validateTime(dateField,timeField) {

  if (!checkDate(dateField,dateField.title)) {
    return false;
  }
  if (!checkTime(timeField,timeField.title)) {
    return false;
  }

  SetCurrentDateTimeNoFocus(AddForm.currdate,AddForm.currtime);
  if (!isWhitespace(dateField.value) &
      !isWhitespace(timeField.value) &
      !isWhitespace(document.AddForm.currdate.value) &
      !isWhitespace(document.AddForm.currtime.value)) {

    if (dateField.value ==
        document.AddForm.currdate.value) {

      if (timeField.value >
          document.AddForm.currtime.value) {
        alert(timeField.title + " cannot be in the future");
        timeField.value="";
        timeField.select();
        timeField.focus();
        return false;
      }
    }
  }
  return true;
}

