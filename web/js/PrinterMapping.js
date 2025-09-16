//================================================================================
// Printer Mapping Script
//  This script is used in conjunction with CustomPrint.js to enable 
//  a default printer to be set based on the location of the patient.
//  currently this is implemented for Inpatient Ward Locations. 
//  In the future it is expected that the Visit Type and Visit Number
//  will allow settings for Outpatient and Emergency Locations.
//
//  V10.04.01 22.05.2014 B.G.Ackland
//            Exit when no match found to avoid having blank printer created
//
//================================================================================
var wardMap = new printerMap();
function SetPrinterByPatient(el,visitType,visitNumber,wardCode) {
   LoadWardMap();
   selectPrinter=""
   selectPrinterName=""
   wardCode = wardCode.replace(/\s*$/,"");
   for (i=0 ; i < wardMap.record.length ; i++) {
     if (wardCode==wardMap.record[i][0]) {
       selectPrinter=wardMap.record[i][1]
       selectPrinterName=wardMap.record[i][2]
     }
   }

   if (selectPrinter=="") return;   /* Exist if No Mapping Found for Patient */

   var PrinterFound=false;
   for (i=0 ; i<el.options.length ;i++) {
     if (trim(el.options[i].value)==trim(selectPrinter)) {
       el.selectedIndex=i
       PrinterFound=true;
     }
   }
   if (!PrinterFound) {
     el.options[el.options.length]=new Option(selectPrinterName,selectPrinter);
     el.selectedIndex=el.options.length-1;
   }
}
function printerMap() {
  this.record = new Array();
  this.addWard = _addWard;
}
function _addWard() {
  this.record[this.record.length] = new Array();
  var record = this.record[this.record.length-1];
  for(var i = 0; i < arguments.length; i++) 
     record[record.length] = arguments[i].replace(/\s*$/,"");
}
