//jsVersion  : V11.03.02
//========================================================================
// Program   : priweb01.js
//
// Written   : 21.02.2000 Bronko Sosic
//
// Function  : Standard Functions Used in priweb01  
//
// Version   : 
//
//========================================================================
//   Report 1
//========================================================================
function Doctors01(practice) {
  parent.location.href="priweb01.pbl?reportno=02&template=001&pridc001=" +
                        practice
DFrameExit()
}
function Batch01(practice) {
  parent.location.href="priweb01.pbl?reportno=08&template=001&mediprac=" +
                        practice
DFrameExit()
}
function ShowDetail01(linkurl) {
  Left=(document.body.clientWidth-600)/2
  DFrameLink(linkurl,0,Left,630,400)
}
function EditLookup01() {
    SelectCode.template.value=3
    SelectCode.pripr001.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-600)/2
    DFrameSubmit(SelectCode,0,Left,630,380)
}
function SecAccess(linkurl) {
  Left=(document.body.clientWidth-600)/2
  DFrameLink(linkurl,0,Left,600,390)
}
function UserSecAccess(practice) {
  linkurl="priweb01.pbl?reportno=06&template=001" +
                    "&primprac=" + practice.replace(/ /g,"+") 
  Left=(document.body.clientWidth-700)/2
  DFrameLink(linkurl,0,Left,700,640)
}
function AddMPrac01() {
   AddForm.redirect.value="priweb01.pbl?reportno=02&template=005"+
           "&pridc001=" + document.AddForm.pripr001.value.replace(/ /g,"+") +
           "&pridc002=" + document.AddForm.pripr003.value.replace(/ /g,"+")
   SubmitForm();
  }
function DeleteMPrac01(){
   if (UpdateForm.holditem.value == "1") {
     alert("Medical Practice can NOT be Deleted, still has Items to be invoiced.");
     return;
   }

   UpdateForm.updttype.value="D";
   UpdateForm.nextpage.value="5";
   UpdateForm.redirect.value="priweb01.pbl?reportno=01&template=001"
   if(confirm("Are you sure you want to Delete ?")) {
     document.UpdateForm.submit(); 
   }
}
//========================================================================
//   Report 2 Practice Doctors
//========================================================================
function ShowDetail02(linkurl,status) {
  if(status=="1") {
    if(!confirm("Doctor is inactive. Continue?")) {
      return;
   } 
  }
  Left=(document.body.clientWidth-600)/2
  DFrameLink(linkurl,0,Left,600,380)
}
function setFormactn02(type) {
 if (type=="P") {
   if (validateMandatory(UpdateForm)) {
     document.UpdateForm.redirect.value=location.href;
     //redirect val set to current page location as per TSK 0931002
     document.UpdateForm.updttype.value="P";
     document.UpdateForm.submit();
   }
 }
 if (type=="U") {
   if (validateMandatory(UpdateForm)) {
     if (document.UpdateForm.actstats.checked==true) {
        document.UpdateForm.pridc006.value="0"
     } else {
        document.UpdateForm.pridc006.value="1"
     }
     document.UpdateForm.redirect.value="priweb01.pbl?reportno=02&template=004"+
     "&pridc001=" + document.UpdateForm.pridc001.value.replace(/ /g,"+") +
     "&pridc002=" + document.UpdateForm.pridc002.value.replace(/ /g,"+")
     document.UpdateForm.updttype.value="U";
     document.UpdateForm.submit(); 
   }
 }
 if (type=="A") {
     if (document.AddForm.actstats.checked==true)  {
        document.AddForm.pridc006.value="0"
     } else {
        document.AddForm.pridc006.value="1"
     }
     document.AddForm.redirect.value="priweb01.pbl?reportno=02&template=004"+
     "&pridc001=" + document.AddForm.pridc001.value.replace(/ /g,"+") +
     "&pridc002=" + document.AddForm.pridc002.value.replace(/ /g,"+")
     document.AddForm.updttype.value="A";
     SubmitForm();
 }
 if (type=="D") {
    ans=confirm("Are you sure you want to Delete ?")
    if (ans) { 
     document.UpdateForm.redirect.value="priweb01.pbl?reportno=02&template=001"+
     "&pridc001=" + document.UpdateForm.pridc001.value.replace(/ /g,"+") 
     document.UpdateForm.updttype.value="D";
     document.UpdateForm.submit() 
    }
 }
}

function GoNextPage02(nextPage) {
   document.UpdateForm.updttype.value="P";
   document.UpdateForm.redirect.value=nextPage;
   document.UpdateForm.submit();
}

function GoPrevPage02(prevPage) {
   document.UpdateForm.updttype.value="P";
   document.UpdateForm.redirect.value=prevPage;
   document.UpdateForm.submit();
}

function Doctors02(practice) {
location.href="priweb01.pbl?reportno=02&template=001&pridc001="+practice
self.close();
}
function AddDoct02(practice) {
  SelectCode.reportno.value=2
  SelectCode.template.value=2
  SelectCode.pridc001.value=practice
  Left=(document.body.clientWidth-600)/2
  DFrameSubmit(SelectCode,0,Left,600,380)
}
function AddMDoct02(practice,doctor) {
  if (document.AddForm.actstats.checked==true) {
      document.AddForm.pridc006.value="0"
  } else {
      document.AddForm.pridc006.value="1"
  }
   AddForm.redirect.value="priweb01.pbl?reportno=02&template=004"+
           "&pridc001=" + document.AddForm.pridc001.value.replace(/ /g,"+") +
           "&pridc002=" + document.AddForm.pridc002.value.replace(/ /g,"+")
   SubmitForm();
}
function ViewPrac02(practice) {
  SelectCode.reportno.value=1
  SelectCode.template.value=3
  SelectCode.pripr001.value=practice
  Left=(document.body.clientWidth-800)/2
  DFrameSubmit(SelectCode,0,Left,800,680)
}
function Practices02() {
  location.href="priweb01.pbl?reportno=01&template=001"
}
function SchFee02(practice,doctor) {
  parent.location.href="priweb01.pbl?reportno=02&template=004&pridc001="+
  practice+"&pridc002="+doctor
}
//========================================================================
//   Report 3
//========================================================================
//------------------------------------------------------------
// Validate Code to a Table Using Remote Scripting
//   OptionNumber =  3 - Doctor Code        (patdo1af)
//                   4 - Item Code          (patitemf)
//                   5 - DRG Code           (patdgwaf)
//                   6 - ICD Disease Code   (patic???)
//                   7 - ICD Operation Code (patic???)
//                   8 - Patient U/R        (patma1af)
//                   9 - Transfer Source    (patvadaf)
//                  20 - Nurse code         (oprnuraf)
//                  18 - HCP code           (pmshcpaf)  ** See also ValidateHCP
//                  27 - Theatre Expensive Items (oprexpaf)
//                  28 - Theatre Implant Code(oprthiaf)
//                  29 - Surgical Table Item Code(oprsesaf)
//                  30 - Nurse Code(oprnuraf)
//                  31 - Default Discharge Date/Time (pattranf)
//------------------------------------------------------------
function validateCode(OptionNumber,ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=3; i < validateCode.arguments.length; i++) {
    if (typeof(validateCode.arguments[i]) == 'function') {
      ReturnFunction=validateCode.arguments[i] }
    else {
      validateCode.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
  "&valdcode=" + ReturnCode.value.replace(/ /g,"+")+
  "&privprac=" + "1"
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=3; i < validateCode.arguments.length; i++) {
       if (typeof(validateCode.arguments[i]) != 'function') {
         j++
         validateCode.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() }
    return true;
  }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    ReturnCode.focus();
    return false;
     }
} 
function ShowDetail03(linkurl) {
  Left=(document.body.clientWidth-780)/2
  DFrameLink(linkurl,0,Left,780,610)
}
function ProvTabClose(){
document.LinkForm.reportno.value="3" 
document.LinkForm.template.value="1"
document.LinkForm.submit()
} 
//------------------------------------------------------------------
//  Validate an MBS item from the private practice item file
//------------------------------------------------------------------
function validatePMBS(ReturnCode,ReturnName,ReturnType,ReturnScod) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=4; i < validatePMBS.arguments.length; i++) {
    if (typeof(validatePMBS.arguments[i]) == 'function') {
      ReturnFunction=validatePMBS.arguments[i] }
    else {
      validatePMBS.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  if (isWhitespace(ReturnType.value)) return;;
  var serverURL   = "../cgi-bin/allweb01.pbl?reportno=9" +
                    "&valdtype=" + ReturnType.value.replace(/ /g,"+") +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&valdscod=" + ReturnScod.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=4; i < validatePMBS.arguments.length; i++) {
       if (typeof(validatePMBS.arguments[i]) != 'function') {
         j++
         validatePMBS.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.select();
    return false;
     }
}
function MBSAMA(field) {
  if(field.value=="MBS") {
     field.value=" 0";
    }
  if(field.value=="AMA") {
     field.value=" 1";
    }
}
function AMAMBS(field) {
  if(trim(field.value)=="0") {
     field.value="MBS";
    }
  if(trim(field.value)=="1") {
     field.value="AMA";
    }
}
function validateAccount(theForm) {
  p=theForm;
  if (isWhitespace(p.pripc011.value)) { return; }
  if (!isWhitespace(p.pripc010.value)) {
  ValAcc(p.pripc011,p.pname010,p)
  } else {
     alert("Default Ledger must be entered."); }
}
function ValAcc(ReturnCode,ReturnName,theForm) {
  p=theForm;
  a=p.pripc010.selectedIndex;
  acctcode=p.pripc010.options[a].value + p.pripc011.value;
  var serverURL="../cgi-bin/patweb80.pbl?reportno=52" +
                "&valdcode=" + acctcode.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
  }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    ReturnCode.focus();
  }
}
function ChkCode(theForm) {
  if(theForm.pripc003.value == "M") {
     theForm.pripc003.value="MBS";
  }     
  if(theForm.pripc003.value == "A") {
     theForm.pripc003.value="AMA";
  }
if (!isWhitespace(trim(theForm.pripc003.value))) {
  if(theForm.pripc003.value != "MBS") {
    if(theForm.pripc003.value != "AMA"){
        alert("Item Flag should be MBS or AMA");
        theForm.pripc003.value=""
        theForm.pripc003.focus()
       }
     }
  }
}
function ManMBS() {
  if ((!isWhitespace(AddForm.pripc003.value)) ||
     (!isWhitespace(AddForm.pripc004.value))) {
    AddForm.pripc003.className="Mandatory"
    AddForm.pripc004.className="Mandatory"
  } else {
    AddForm.pripc003.className="";
    AddForm.pripc004.className="";
  }
}
function ChkLedgerCr(theForm) {
  if (!isWhitespace(theForm.pripc010.value)) {
    AccountSearchFrame(theForm.pripc010,theForm.pripc011,theForm.pname010)
  } else {
    alert("Ledger field is empty"); 
  } 
}
function ChkLedgerDr(theForm) {
  if (!isWhitespace(theForm.pripc010.value)) {
    AccountSearchFrame(theForm.pripc012,theForm.pname010)
  } else {
    alert("Ledger field is empty"); 
  } 
}
function GLFormSubmit() {
  if(!isWhitespace(AddForm.pripc003.value)) {
    MBSAMA(AddForm.pripc003);
  }
  if (validateMandatory(AddForm)) {
    AddForm.pripc001.disabled=false
    AddForm.submit()
  }
}
function GLFormUpdate(type) {
  UpdateForm.updttype.value=type
  UpdateForm.pripc006.disabled=false
  if(!isWhitespace(UpdateForm.pripc003.value)) {
     MBSAMA(UpdateForm.pripc003);
  }
  if (type=="U") {
    if (validateMandatory(UpdateForm)) {
       UpdateForm.submit()
    }
  }
  if (type=="D") {
     UpdateForm.submit(); 
  }
}
//========================================================================
//   Report 4
//========================================================================
function BillTabClose(){
document.LinkForm.reportno.value="4" 
document.LinkForm.template.value="1"
document.LinkForm.submit()
} 
//========================================================================
//   Report 8
//========================================================================
function ShowDetail08(linkurl) {
  Left=(document.body.clientWidth-400)/2
  DFrameLink(linkurl,0,Left,400,250)
}
function PostUpdateForm() {
  if (!validateMandatory(UpdateForm)) {
     return;
  }
  if(document.UpdateForm.d_prbrn006.checked==true) {
     document.UpdateForm.prbrn006.value="1";
  } else {
     document.UpdateForm.prbrn006.value="0";
  }
  document.UpdateForm.updttype.value="U"
  if (!validateMandatory(UpdateForm)) {
     return;
  }
  document.UpdateForm.submit(); 
}
function CheckMCI(mcicode) {
  if(isWhitespace(mcicode.value)) {
    return;
  }
 if(mcicode.value.length != "8") {
   alert("MCI code must be in the format XXXYYYYY\n" + 
         "Where XXX = Alphabetic and YYYYY = Numeric.");
   mcicode.value="";
   mcicode.focus();
   return;
 }
 checkXXX=mcicode.value.substr(0,3).search('[^a-zA-Z]');
 if (checkXXX >= 0) {
   alert("MCI code must be in the format XXXYYYYY\n" + 
         "Where XXX = Alphabetic and YYYYY = Numeric.");
   mcicode.value="";
   mcicode.focus();
   return;
 }
 checkYYYYY=mcicode.value.substr(3,5).search('[^0-9]');
 if (checkYYYYY >= 0) {
   alert("MCI code must be in the format XXXYYYYY\n" + 
         "Where XXX = Alphabetic and YYYYY = Numeric.");
   mcicode.value="";
   mcicode.focus();
   return;
 }
}
function CheckProvNo(UseMed,ProvNo) {
  if(UseMed.value=="1") {                   // Using med claims is yes
    if(ProvNo.value.length != "8" &&
       !isWhitespace(ProvNo.value)) {       // Provider number must be 8 chars
        alert("Provider number must be 8 characters");
        ProvNo.focus();
    }
  }
}

function ChkHCPCode(ReturnCode,ReturnName) {
   ReturnCode.value=trim(ReturnCode.value);
   ValidateHCP(18,0,ReturnCode,ReturnName);
}

