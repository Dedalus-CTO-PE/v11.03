var DocForm;
var printFormat= new Array();
function DocumentPrintingInit(el) {
  DocForm=el;
  clearDocumentTemplate();
  setDocumentType();
  if (el.documentType.length>0) {
    el=document.getElementById("clinicalDocument")
    el.style.display="";
  }
}
function clearDocumentTemplate() {
  el=DocForm.documentType
  el.options.length=0;
  printFormat.length=0;
}
function addDocumentTemplate(nameStr,valueStr,printFmt) {
  el=DocForm.documentType;
  printFormat[el.options.length]=printFmt;
  el.options[el.options.length]=new Option(nameStr,valueStr);
}
