//jsVersion  : V11.03.00
//========================================================================
// Program   : mrtweb0105.js
//
// Written   : 15.10.2001 Pat Dirito
//
// Function  : Standard Functions Used in mrtweb0105 templates 
//
//========================================================================
//  Report 5
//========================================================================
function AddRecord() {
if (document.AddForm.mrtms003.value <= 0) {
   alert("Volume Number must be greater than or equal 1!"); 
   return;
}
  SubmitForm();
}
//
function SetVolumeNo(vol) {
 if (vol.value <= 0) {
   alert("Volume Number must be greater than or equal 1!"); }  
}
//
function GenerateVol(ReturnUR,ReturnHMHO,ReturnHMLC,ReturnDOTY,ReturnVol) {
  ReturnVol.value="";
  if (isWhitespace(ReturnUR.value)) return;
  if (isWhitespace(ReturnDOTY.value)) return;
  var serverURL = "../cgi-bin/mrtweb01.pbl?reportno=17" +
                  "&valdurno=" + ReturnUR.value.replace(/ /g,"+") +
                  "&valdhmho=" + ReturnHMHO.value.replace(/ /g,"+") +
                  "&valdhmlc=" + ReturnHMLC.value.replace(/ /g,"+") +
                  "&valddoty=" + ReturnDOTY.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnVol.value=ReturnValue[0];
  } else {
    ReturnHMLC.select();  }
}
function SetPrinter() {
  if(document.AddForm.printlab.checked==true) {
    Printer.style.display=""
    Printer.innerHTML=ShowPrinter.innerHTML;
  } else {
    Printer.style.display="none"
    Printer.innerHTML="";
  }
}
function selectHosp(p) {
  if(p.ibcnmhos.value=="1") {
    for (var i =0 ; i < p.mrtms008.length; i++) {
      if (p.mrtms008.options[i].value == p.deflhosp.value)
          p.mrtms008.selectedIndex = i ;
    }
  }
}
function SetLocation(p) {
  if (!isWhitespace(p.mrtms008.value)) {
       p.deflhosp.value = p.mrtms008.value; }
  if (!isWhitespace(p.mrtms001.value)) {
       p.defllocn.value = p.mrtms001.value; }
   
  p.mrtms001.options.length=0;
  p.mrtms001.options[p.mrtms001.options.length]=new Option(" "," ");
  if(p.ibcnmhos.value=="1") {
    MrtMultiHomeLocns(p.mrtms001,p.defllocn.value,p.deflhosp.value)
  } else {
    MrtHomeLocns(p.mrtms001,p.defllocn.value)
  }
  p.mrtms001.remove(0);     // remove line 0 - extra blank option
}
