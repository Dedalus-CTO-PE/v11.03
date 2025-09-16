//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb79.js
//
// Written   : 26/09/2003
//
// Function  : Functions Used in patweb79XXXXX.html 
//
// Version   : 
//
// V10.03.01 24.09.2013  J.Tan         CAR 291237
//           Mods to enlarge DFRAME for ViewInvoice()
// V9.09.01  25.06.2007  Ebon Clements CAR 143244
//           Changed redirect in RegenerateBList()
// V9.08.02  21.06.2007  Ebon Clements CAR 143244
//           Added RegenerateBList()
// V9.08.01  18.05.2007  Ebon Clements CAR 133432
//           Added PrintBListSort()
// V9.04.01  03.09.2004  J.Tan        CAR 53073
//           Modifications for multi hospital
// V9.03.02  03.08.2004  Davin        CAR 52036
//           Modifications to show 'claim type' option
// V9.03.01  26.04.2004  Jeni Tan     CAR 45547
//           Modifications for bulk backdate invoice
// V9.03.00  26/09/2003  Lina Vo      CAR 36520
//           Created Include
//========================================================================
// REPORT 1 - Bulk List Selection                        
//========================================================================
function UpdateSelections(ExtractKey) {
  pmsbl001=ExtractKey.replace(/ /g,"+")
  LinkUrl="patweb79.pbl?reportno=1&template=3&pmsbl001="+pmsbl001
  location.href=LinkUrl
}
function SubmitForm(theForm) {
  if (confirm("Selection of Bulk Invoices will now be scheduled."+ 
              " Please wait...")) {
    if (validateMandatory(theForm)) {
      theForm.submit();
    }
  }
}
//
function ShowSpans(showoption,multhosp) {
  if (showoption.value=="1") {                    // By number of days   
     InvoiceOptions1.innerHTML=NumberDays.innerHTML;
     InvoiceOptions2.innerHTML=NameRange.innerHTML;
     InvoiceOptions3.innerHTML=LineSpan.innerHTML;
     InvoiceOptions4.innerHTML="";
     if (multhosp.value=="1") {
       InvoiceOptions5.innerHTML=HospID.innerHTML; }
     else {
       InvoiceOptions5.innerHTML=""; }
      
  } else if (showoption.value=="2") {              // By date range          
     InvoiceOptions1.innerHTML=DateRange.innerHTML;
     InvoiceOptions2.innerHTML=NameRange.innerHTML;
     InvoiceOptions3.innerHTML=LineSpan.innerHTML;
     InvoiceOptions4.innerHTML="";
     if (multhosp.value=="1") {
       InvoiceOptions5.innerHTML=HospID.innerHTML; }
     else {
       InvoiceOptions5.innerHTML=""; }

  } else if (showoption.value=="3") {              // By amount owing        
     InvoiceOptions1.innerHTML=MinAmountOwing.innerHTML;
     InvoiceOptions2.innerHTML=NameRange.innerHTML;
     InvoiceOptions3.innerHTML=LineSpan.innerHTML;
     InvoiceOptions4.innerHTML="";
     if (multhosp.value=="1") {
       InvoiceOptions5.innerHTML=HospID.innerHTML; }
     else {
       InvoiceOptions5.innerHTML=""; }

  } else if (showoption.value=="4") {              // By given Ward      
     InvoiceOptions1.innerHTML=DateRange.innerHTML;
     InvoiceOptions2.innerHTML=NameRange.innerHTML;
     InvoiceOptions3.innerHTML=DischargeWard.innerHTML;
     InvoiceOptions4.innerHTML=LineSpan.innerHTML;
     if (multhosp.value=="1") {
       InvoiceOptions5.innerHTML=HospID.innerHTML; }
     else {
       InvoiceOptions5.innerHTML=""; }

  } else if (showoption.value=="5") {              // By given Claim Type
     InvoiceOptions1.innerHTML=DateRange.innerHTML;
     InvoiceOptions2.innerHTML=NameRange.innerHTML;
     InvoiceOptions3.innerHTML=DischargeClaim.innerHTML;
     InvoiceOptions4.innerHTML=LineSpan.innerHTML;
     if (multhosp.value=="1") {
       InvoiceOptions5.innerHTML=HospID.innerHTML; }
     else {
       InvoiceOptions5.innerHTML=""; }

  } else {
     InvoiceOptions1.innerHTML="";
     InvoiceOptions2.innerHTML="";
     InvoiceOptions3.innerHTML="";
     InvoiceOptions4.innerHTML="";
     InvoiceOptions5.innerHTML="";
  }
}
function PrintList(extrctid) {
  URL="patweb79.pbl?reportno=01&template=004&pmsbl001=" + extrctid;
  location.href=URL
}
function DeleteInvoice(CheckBox,ExtractID,Admission) {
  UpdateValue=0
  if (CheckBox.checked) {
     UpdateValue=1 }
  var serverURL   = "../cgi-bin/patweb79.pbl?reportno=02" +
                    "&pmsbl001=" + ExtractID.replace(/ /g,"+") +
                    "&admissno=" + Admission.replace(/ /g,"+") +
                    "&deltstat=" + UpdateValue
  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {
    ReturnCode.select();  }
}
//
function PrintBulkInvoice(extrctid) {
  URL="patweb79.pbl?reportno=01&template=005&pmsbl001=" + extrctid;
  Left=(document.body.clientWidth-500)/2
  DFrameLink(URL,70,Left,550,230);
}
function ViewInvoice(url) {
  Left=(document.body.clientWidth-950)/2
  DFrameLink(url,50,Left,950,500);
}

//========================================================================
// REPORT 3 - Bulk backdated invoice List Selection                        
//========================================================================

function DeleteSelections(ExtractKey) {
  pmsbi001=ExtractKey.replace(/ /g,"+")
  LinkUrl="patweb79.pbl?reportno=3&template=3&pmsbi001="+pmsbi001
  location.href=LinkUrl
}

function PrintBList(extrctid) {
  URL="patweb79.pbl?reportno=03&template=004&pmsbi001=" + extrctid;
  location.href=URL
}
function PrintBListSort(extrctid) {
  URL="patweb79.pbl?reportno=03&template=006&pmsbi001=" + extrctid;
  location.href=URL
}

function UpdateBSelections(ExtractKey) {
  pmsbi001=ExtractKey.replace(/ /g,"+")
  LinkUrl="patweb79.pbl?reportno=3&template=3&pmsbi001="+pmsbi001
  location.href=LinkUrl
}
function DeleteBInvoice(CheckBox,ExtractID,Admission) {
  UpdateValue=0
  if (CheckBox.checked) {
     UpdateValue=1 }
  var serverURL   = "../cgi-bin/patweb79.pbl?reportno=04" +
                    "&pmsbi001=" + ExtractID.replace(/ /g,"+") +
                    "&admissno=" + Admission.replace(/ /g,"+") +
                    "&deltstat=" + UpdateValue
  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {
    ReturnCode.select();  }
}
function PrintBulkBInvoice(extrctid) {
  URL="patweb79.pbl?reportno=03&template=005&pmsbi001=" + extrctid;
  Left=(document.body.clientWidth-500)/2
  DFrameLink(URL,70,Left,550,230);
}
//
function RegenerateBList(ExtractKey) {
 if(validateMandatory(UpdateForm)) {
   if(document.UpdateForm.ibcnmhos.value==1) {
      document.UpdateForm.pmsbi003.disabled=false 
   }
   document.UpdateForm.redirect.value="patweb79.pbl?reportno=03&template=003" +
                       "&pmsbi001=" + ExtractKey.replace(/ /g,"+")
   document.UpdateForm.updttype.value="U"
   document.UpdateForm.submit();
 }
}
