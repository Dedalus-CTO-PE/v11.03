//jsVersion  : V11.03.00
//========================================================================
// Program   : mehweb0109006.js
//
// Written   : 30.10.2011 Nicole Torrisi
//
// Function  : Functions Used in mehweb0109006
//
// Version   :
//
// V10.08.01 16/05/2016  Nicole Torrisi TSK 0817062
//           Added ShowLS
// V10.02.01 30.10.2011  Nicole Torrisi CAR 245798
//           Created js
//========================================================================
function SetCourtData(indicators) {
if (indicators.substr(5,1)=="C") {
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
function ShowLS() {
  if (document.UpdateForm.mhcnphed.value=="1") {
    InsertLSID1.innerHTML = LSID1.innerHTML;
    InsertLSID2.innerHTML = LSID2.innerHTML;
  } else {
    InsertLSID1.innerHTML = "";
    InsertLSID2.innerHTML = "";
  }
}
function FormSubmit() {
  if(!validateMandatory(UpdateForm)){
     return;
  }
  if(document.UpdateForm.mhhlsend.value != "") {
     if(isWhitespace(document.UpdateForm.mhdls017.value)) {
        alert("Legal Status Header has ended. End date required.")
        return;
     }
  }
  if(document.UpdateForm.statactv.checked == true) {
     document.UpdateForm.mhdls015.value="0";
  } else {
     document.UpdateForm.mhdls015.value="1";
  }

  if(!isWhitespace(document.UpdateForm.mhdls018.value) &&
     isWhitespace(document.UpdateForm.mhdls017.value)) {
     alert("End Time is not blank, End Date must be entered");
     return;
  }
  document.UpdateForm.submit();
}

function DelRec() {
  ans=confirm("Are you sure you want to Delete ?")
  if (ans) {
    document.UpdateForm.updttype.value="D";
    document.UpdateForm.submit();
  }
  DFrameExitRefresh();
}

//function GetDates(sectcode) {
//  revdate=SetDateYYYYMMDD(document.UpdateForm.mhdls002.value)
//
//  if (isWhitespace(sectcode.value)) {
//    document.UpdateForm.mhdls006.value=" ";
//    document.UpdateForm.mhdls011.value=" ";
//    return;
//  } else {
//    var serverURL="../cgi-bin/mehweb01.pbl?reportno=10" +
//                  "&opendate=" + revdate.replace(/ /g,"+") +
//                  "&valdcode=" + sectcode.value.replace(/ /g,"+")
//
//    var returnValue = RSExecute(serverURL);
//    if (returnValue.status==0) {
//      ReturnValue=returnValue.return_value.split("|")
//      document.UpdateForm.mhdls006.value=ReturnValue[0];
//      document.UpdateForm.mhdls011.value=ReturnValue[1];
//    }
//  }
//}
function checkRevDate() {
 if (!isWhitespace(document.UpdateForm.revidate.value)) {
  if (SetDateYYYYMMDD(document.UpdateForm.mhdls006.value) > SetDateYYYYMMDD(document.UpdateForm.revidate.value))
  {
    alert("New Review Date Entered must be before " + document.UpdateForm.revidate.value);
    document.UpdateForm.mhdls006.value=document.UpdateForm.revidate.value;
    document.UpdateForm.mhdls006.focus();
  }
 }
}

function checkRevTime() {
  if (SetDateYYYYMMDD(document.UpdateForm.mhdls006.value) == SetDateYYYYMMDD(document.UpdateForm.revidate.value))
   var currtime=trim(document.UpdateForm.revitime.value.replace(/:/g,"")) - 0
   var newrtime=trim(document.UpdateForm.mhdls007.value.replace(/:/g,"")) - 0
  {
   if(newrtime>currtime){
    alert("New Review Time Entered must be before " + document.UpdateForm.revitime.value);
    document.UpdateForm.mhdls007.value=document.UpdateForm.revitime.value;
    document.UpdateForm.mhdls007.focus();
   }
  }
}

function validateTime(dateField,timeField) {

  if (!checkDate(dateField,dateField.title)) {
    return false;
  }
  if (!checkTime(timeField,timeField.title)) {
    return false;
  }

  SetCurrentDateTimeNoFocus(UpdateForm.currdate,UpdateForm.currtime);
  if (!isWhitespace(dateField.value) &
      !isWhitespace(timeField.value) &
      !isWhitespace(document.UpdateForm.currdate.value) &
      !isWhitespace(document.UpdateForm.currtime.value)) {


    if (dateField.value ==
        document.UpdateForm.currdate.value) {

      if (timeField.value >
          document.UpdateForm.currtime.value) {
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
