//jsVersion  : V11.03.00
//========================================================================
// Program   : apsweb01.js
//
// Function  : Standard Functions Used in apsweb01 templates
// V9.02.01 21/09/2001  Ebon Clements 
//                      Created Include
//========================================================================
//
//====================================================================
// REPORT 1
//====================================================================
function DefaultSup02() {
  document.AddForm.apmas015.value=document.AddForm.apmas004.value
  document.AddForm.apmas016.value=document.AddForm.apmas005.value
  document.AddForm.apmas017.value=document.AddForm.apmas006.value
  document.AddForm.apmas018.value=document.AddForm.apmas007.value
  document.AddForm.apmas019.value=document.AddForm.apmas008.value
  document.AddForm.apmas020.value=document.AddForm.apmas009.value
  document.AddForm.apmas021.value=document.AddForm.apmas010.value
  document.AddForm.apmas022.value=document.AddForm.apmas011.value
  document.AddForm.apmas025.value=document.AddForm.apmas014.value

}
//
//
function SearchKey02() {
  if (!isWhitespace(document.AddForm.apmas004.value)){
  document.AddForm.apmas003.value=document.AddForm.apmas004.value.substring(0,6)
  }
}
//
function CheckGST02() {
  if (AddForm.apmas045.checked == true) {
     document.AddForm.apmas049.className="Mandatory"
  } else {
     document.AddForm.apmas049.className=""
  }
}
//
function CheckPay02() {
  if (document.AddForm.apmas036.selectedIndex > 1) {
     document.AddForm.apmas026.className="Mandatory"
     document.AddForm.apmas027.className="Mandatory"
  } else {
     document.AddForm.apmas026.className=""
     document.AddForm.apmas027.className=""
  }
}
//
function ValidateBSB02() {

  if (!isWhitespace(document.AddForm.apmas026.value)){
    if (document.AddForm.apmas026.value.substring(3,4) != "-"){
     alert("Invalid BSB Format");
    document.AddForm.apmas026.focus();
     return
    } 
  }
}
//
function CheckGST03() {
  if (UpdateForm.apmas045.checked == true) {
     document.UpdateForm.apmas049.className="Mandatory"
  } else {
     document.UpdateForm.apmas049.className=""
  }
}
function CheckPay03() {
  if (document.UpdateForm.apmas036.selectedIndex > 1) {
     document.UpdateForm.apmas026.className="Mandatory"
     document.UpdateForm.apmas027.className="Mandatory"
  } else {
     document.UpdateForm.apmas026.className=""
     document.UpdateForm.apmas027.className=""
  }
}
function ValidateBSB03() {
  if (!isWhitespace(document.UpdateForm.apmas026.value)){
    if (document.UpdateForm.apmas026.value.substring(3,4) != "-"){
     alert("Invalid BSB Format");
    document.UpdateForm.apmas026.focus();
     return
    } 
  }
}
