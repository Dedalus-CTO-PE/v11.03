//jsVersion  : V11.03.00
//========================================================================
// Program   : priweb02.js
//
// Written   : 09.02.2004 J.Tan        
//
// Function  : Standard Functions Used in priweb02  
// 
// Mods:
//   V9.12.01  02/06/2009  Jill Habasque CAR 197848
//             Changed norecord from 20 to 10
//   V9.09.01  01/08/2007  Peter Vela CAR 144548
//             Fixed GetPRFA to include prpre001
//   V9.04.01  16/12/2004  J.Tan 
//             Fixed GetPRFA to include U/R number
//   V9.03.02  27/04/2004  Sylvek Litewka  CAR 49241
//             Added code in 'validateSDoc()' to clear doctor's name when
//             doctor's code is removed or invalid.
//   V9.03.01  23/04/2004  Sylvek Litewka  CAR 49164
//             Fixed syntax error in validateBulk() function.
//
//========================================================================
//   Report 1
//========================================================================

function validateSDoc(MediPrac,ReturnCode,ReturnDesc) {
  if (isWhitespace(ReturnCode.value)) {
    ReturnDesc.value="";       // Clear description (Doctor's name)
    return;
  }

  if (isWhitespace(MediPrac.value)) {
     alert("Medical Practice must be entered first.");
     MediPrac.focus();
     return;;  }

  for (var i=3; i < validateSDoc.arguments.length; i++) {
    if (typeof(validateSDoc.arguments[i]) == 'function') {
      ReturnFunction=validateSDoc.arguments[i] }
    else {
      validateSDoc.arguments[i].value=""; }  }

  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=63" + 
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&mediprac=" + MediPrac.value

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnDesc.value=ReturnValue[0];
    if (ReturnValue[1]==1)  {
       alert("Doctor is Inactive.");
       ReturnCode.select();
       ReturnCode.focus();
       return false; }
    }
  else {
    ReturnDesc.value="";       // Clear description (Doctor's name)
    ReturnCode.select();
    ReturnCode.focus();
    return false;
     }
}

function MPDoctorSearch(MediPrac,ReturnCode,ReturnName) {
  var PopUpFrameDoc = DFrameStart();
  if (isWhitespace(MediPrac.value)) {
     alert("Medical Practice must be entered first.");
     MediPrac.focus();
     return;;  }

  window.MediPrac=MediPrac;
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href="../cgi-bin/" +
                              "priweb01.pbl?reportno=2&template=7&pridc001="+
                               MediPrac.value + "&norecord=10";
  SearchFrameShow();
 }


//========================================================================
//   Report 2
//========================================================================
function validateBulk(medicare,fundcode,Claimcode,ReturnCode) {

  if (isWhitespace(Claimcode.value)) {
     alert("Claim code must be entered first.");
     ReturnCode.value="";
     Claimcode.focus();
     return;  }

  for (var i=4; i < validateBulk.arguments.length; i++) {
    if (typeof(validateBulk.arguments[i]) == 'function') {
      ReturnFunction=validateBulk.arguments[i] }
    else {
      validateBulk.arguments[i].value=""; }  }


  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL   = "../cgi-bin/priweb02.pbl?reportno=2" + 
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&claimcod=" + Claimcode.value

  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")

    if ((ReturnValue[1]=="C") && (isWhitespace(medicare.value))) {
           alert("There is no Medicare number for this patient.");
           ReturnCode.value="";
           ReturnCode.focus();
           return false; }
    else {
       if ((ReturnValue[1]=="H") && (isWhitespace(fundcode.value))) {
            alert("There is no Health Fund for this patient."); 
           ReturnCode.value="";
           ReturnCode.focus();
           return false; } }

    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } 
   }
   else {
       ReturnCode.value=""; }
      
}

//========================================================================
//   Report 3
//========================================================================

function GetPRFA(ReturnCode,URnumber,ClinicNam) {

  for (var i=3; i < GetPRFA.arguments.length; i++) {
    if (typeof(GetPRFA.arguments[i]) == 'function') {
      ReturnFunction=GetPRFA.arguments[i] }
    else {
      GetPRFA.arguments[i].value=""; }  }


  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL   = "../cgi-bin/priweb02.pbl?reportno=3" + 
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&urnumber=" + URnumber.value.replace(/ /g,"+") +
                    "&prhre001=" + ClinicNam.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")

    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } 
   }
}
