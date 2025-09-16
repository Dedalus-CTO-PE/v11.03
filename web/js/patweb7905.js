//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb7905.js
//
// Written   : 04/12/2006
//
// Function  : Standard Functions Used in patweb7905 templates
//
// Version   : 
//
// V10.00.01 29/03/2010  Jill Parkinson CAR 218920
//           Fixed getelementbyid(selectprov)
// V9.08.02 07/03/2007  Ebon Clements CAR 126779
//          Added redirect to ScheduleExport()
// V9.08.01 10/01/2007  Ebon Clements CAR 126779
//          Added SelectProvider(),DisplayProv() and DisplayProvUpd()
// V9.08.00 04/12/2006  Ebon Clements CAR 126779
//          Created Include              
//========================================================================
// REPORT 5 - Related Provider Invoice Processing
//========================================================================
function valHfund(ReturnFund,FundName) {
  if(!isWhitespace(ReturnFund.value)) {
     validateCode(16,ReturnFund,FundName)
  }
  if(isWhitespace(ReturnFund.value)) {
    ReturnFund.value="";
    FundName.value="";
  }
}
//
function ProcessSearch() {
  if(validateMandatory(Filter)) {
    if(isWhitespace(Filter.filtcont.value)) {
      if(isWhitespace(Filter.filtprac.value)){
        alert("Please enter a contract or a practitioner");
        return;
      }
    }
    if(!isWhitespace(Filter.filtcont.value)) {
      if(!isWhitespace(Filter.filtprac.value)){
        alert("Either the contract or practitioner must be blank");
        return;
      }
    }
    if (!CheckDateRange(Filter.filtfdat,Filter.filttdat))  {
       return; }
    document.Filter.submit();
  }
}
function SetDefaults() {
  if(isWhitespace(Filter.filtfdat.value)) {
    Filter.filtfdat.value="01 " + Filter.defttdat.value.substr(3,8);
  }
  if(isWhitespace(Filter.filttdat.value)) {
    Filter.filttdat.value=Filter.defttdat.value;
  }
}
function UpdateDetails(adm,inv) {
  linkURL="patweb79.pbl?reportno=5&template=002" +
          "&admissno=" + adm.replace(/ /g,"+") + 
          "&nzrpi001=" + adm.replace(/ /g,"+") + 
          "&invoicno=" + inv.replace(/ /g,"+") +
          "&nzrpi002=" + inv.replace(/ /g,"+") 
  location.href=linkURL; 
}
function UpdRPInvoice(adm,inv,rinv) {
  linkurl="patweb79.pbl?reportno=5&template=004" +
          "&admissno=" + adm.replace(/ /g,"+") + 
          "&nzrpi001=" + adm.replace(/ /g,"+") + 
          "&invoicno=" + inv.replace(/ /g,"+") +
          "&nzrpi002=" + inv.replace(/ /g,"+") +
          "&nzrpi003=" + rinv.replace(/ /g,"+") 
   Left=(document.body.clientWidth-550)/2
   DFrameLink(linkurl,90,Left,550,350);
}
function SupRPInvoice(adm,inv,rinv) {
  linkurl="patweb79.pbl?reportno=5&template=005" +
          "&admissno=" + adm.value.replace(/ /g,"+") + 
          "&nzrpi001=" + adm.value.replace(/ /g,"+") + 
          "&invoicno=" + inv.value.replace(/ /g,"+") +
          "&nzrpi002=" + inv.value.replace(/ /g,"+") +
          "&nzrpi003=" + rinv.value.replace(/ /g,"+") 
  location.href=linkurl
}
function AddRPInvoice() {
   linkurl="patweb79.pbl?reportno=5&template=003" +
          "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") + 
          "&invoicno=" + document.UpdateForm.invoicno.value.replace(/ /g,"+")
   Left=(document.body.clientWidth-550)/2
   DFrameLink(linkurl,90,Left,550,350);
}
function SelectPatient(adm,ur) {
  linkURL="patweb98.pbl?reportno=1&template=001" +
          "&urnumber=" + ur.replace(/ /g,"+") + 
          "&admissno=" + adm.replace(/ /g,"+")
  location.href=linkURL; 
}
function UpdateProvAdm() {
  if(validateMandatory(UpdateForm)) {
     document.UpdateForm.updttype.value="E";
     document.UpdateForm.nextpage.value="1";
     document.UpdateForm.redirect.value="patweb79.pbl?reportno=5&template=002" +
          "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") + 
          "&invoicno=" + document.UpdateForm.invoicno.value.replace(/ /g,"+")
     document.UpdateForm.submit(); 
  } 
}
function UpdSupProvAdm() {
  if(validateMandatory(UpdateForm)) {
    document.UpdateForm.submit();
  } 
} 
function SupProvAdm(adm,inv) {
  linkurl="patweb79.pbl?reportno=5&template=006" +
          "&admissno=" + adm.value.replace(/ /g,"+") +
          "&invoicno=" + inv.value.replace(/ /g,"+") 
   Left=(document.body.clientWidth-550)/2
   DFrameLink(linkurl,90,Left,400,150);
}
function Export(ReturnCode) {
  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL   = "../cgi-bin/patweb79.pbl?reportno=6" +
                    "&updttype=E" +
                    "&nzpickey=" + ReturnCode.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {
    ReturnCode.select();  }
}
//------------------------------------------------------------
// Display selection list or keyin of provider
//------------------------------------------------------------
function DisplayProv(theform) {
  if(theform.nzrpi006.value.substr(3,1)=="A" ||
     theform.nzrpi006.value.substr(3,1)=="S") {
     document.getElementById('ShowProvider').innerHTML=document.getElementById('SelectProv').innerHTML;
     SelectProvider(theform.nzrpi001,theform.nzrpi006.value.substr(3,1),theform.nzrpi007);
  } else {
     document.getElementById('ShowProvider').innerHTML=document.getElementById('KeyinProv').innerHTML;
  }
}
//------------------------------------------------------------
// Display selection list or keyin of provider
//------------------------------------------------------------
function DisplayProvUpd(theform,deft) {
  if(theform.nzrpi006.value.substr(3,1)=="A" ||
     theform.nzrpi006.value.substr(3,1)=="S") {
     document.getElementById('ShowProvider').innerHTML=document.getElementById('SelectProv').innerHTML;
     SelectProvider(theform.nzrpi001,theform.nzrpi006.value.substr(3,1),theform.
nzrpi007);
    for (var i=0; i < theform.nzrpi007.length; i++) {
    if(theform.nzrpi007.options[i].value==deft.value){
        theform.nzrpi007.selectedIndex=i;
    }
 }
  } else {
     document.getElementById('ShowProvider').innerHTML=document.getElementById('KeyinProv').innerHTML;
  }  
}
//------------------------------------------------------------
// Get Select List Options for surgeons/anaesthetists
//------------------------------------------------------------
function SelectProvider(ReturnCode,ReturnType,ReturnSelect) {
  if (isWhitespace(ReturnCode.value)) return;;
  if (isWhitespace(ReturnType)) return;;   //(S)urgeon or (A)naesthetist

  var serverURL   = "../cgi-bin/patweb79.pbl?reportno=6" +
                    "&updttype=" + ReturnType.replace(/ /g,"+") +
                    "&admissno=" + ReturnCode.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnSelect.options.length=0
    ReturnSelect.options[ReturnSelect.options.length]=new Option("","");
    ReturnValue=returnValue.return_value.split("|");
    for (var j=0; j < ReturnValue.length; j++) {
       if (!isWhitespace(ReturnValue[j])) {
         SelectValue=ReturnValue[j].split(",");
         ReturnSelect.options[ReturnSelect.options.length]=
          new Option(SelectValue[1],SelectValue[0]); } } }
  else {
    ReturnCode.select();  }
}
function ScheduleExport() {
 if(!CheckExport()) {
   alert("No records selected for export");
   return;
 }
 document.Filter.updttype.value="S";
 document.Filter.nextpage.value="1";
 document.Filter.redirect.value="rshweb02.pbl?reportno=1&template=1"
 document.Filter.submit();
}
function CheckExport() 
{
  var nzpickey = document.getElementsByName('nzpickey');
  for (var i = 0; i < nzpickey.length; i++)
  {
    if (nzpickey[i].checked == true) return true;
  }
  return false;
}
