//jsVersion  : V11.03.00
//
//
// Modification
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.01 06.08.2013 B.G.Ackland CAR 289383
//                      New AJAXPostString2 to fix post encoding
function init() {
 DocumentPrintingInit(labels);
 var actionBtn = parent.document.getElementById('actionButton');
 if(actionBtn) {
    actionBtn.className = actionBtn.className.replace(/SpanButton/g,"");
    actionBtn.className = actionBtn.className.replace(/Blue/g,"");
    actionBtn.className = actionBtn.className + " SpanButtonBlue";
    actionBtn.innerText = "Print";
    actionBtn.onclick = function() {
        SubmitRequest();
      }
 }
 for (var i=0;i<document.labels.nolabels.length;i++){
  if (document.labels.nolabels.options[i].value.replace(/ /g,"")==
      LabelCop.replace(/ /g,"")){
      document.labels.nolabels.selectedIndex=i}};

 LabelNam=document.getElementById("LabelNam").value;
 for (var i=0;i<document.labels.labeltyp.length;i++){
  if (document.labels.labeltyp.options[i].value.replace(/ /g,"")==
      LabelNam.replace(/ /g,"")){
      document.labels.labeltyp.selectedIndex=i}};

 FormCop=document.getElementById("FormCop").value;
 for (var i=0;i<document.labels.nolabelf.length;i++){
  if (document.labels.nolabelf.options[i].value.replace(/ /g,"")==
      FormCop.replace(/ /g,"")){
      document.labels.nolabelf.selectedIndex=i}};

 FormNam=document.getElementById("FormNam").value;
 for (var i=0;i<document.labels.statncod.length;i++){
  if (document.labels.statncod.options[i].value.replace(/ /g,"")==
      FormNam.replace(/ /g,"")){
      document.labels.statncod.selectedIndex=i}};

 Form2Cop=document.getElementById("Form2Cop").value;
 for (var i=0;i<document.labels.nolablf2.length;i++){
  if (document.labels.nolablf2.options[i].value.replace(/ /g,"")==
      Form2Cop.replace(/ /g,"")){
      document.labels.nolablf2.selectedIndex=i}};

 Form2Nam=document.getElementById("Form2Nam").value;
 for (var i=0;i<document.labels.statncd2.length;i++){
  if (document.labels.statncd2.options[i].value.replace(/ /g,"")==
      Form2Nam.replace(/ /g,"")){
      document.labels.statncd2.selectedIndex=i}};
}
function changeValueLabel() {
  if(document.labels.check_multlt01.checked==false) {
    document.labels.nolabels.disabled=true;
    document.labels.labeltyp.disabled=true;
    document.labels.lblprint.disabled=true;
  } else {
    document.labels.nolabels.disabled=false;
    document.labels.labeltyp.disabled=false;
    document.labels.lblprint.disabled=false;
  }
}
function changeValueForm() {
  if(document.labels.check_multlt02.checked==false) {
    document.labels.nolabelf.disabled=true;
    document.labels.statncod.disabled=true;
    document.labels.frmprint.disabled=true;
  } else {
    document.labels.nolabelf.disabled=false;
    document.labels.statncod.disabled=false;
    document.labels.frmprint.disabled=false;
  }
}
function changeValueForm2() {
  if(document.labels.check_multlt03.checked==false) {
    document.labels.nolablf2.disabled=true;
    document.labels.statncd2.disabled=true;
    document.labels.frmprnt2.disabled=true;
  } else {
    document.labels.nolablf2.disabled=false;
    document.labels.statncd2.disabled=false;
    document.labels.frmprnt2.disabled=false;
  }
}
function changeValueForm3() {
  if(document.labels.documentCheck.checked==false) {
    document.labels.documentType.disabled=true;
    document.labels.documentCopies.disabled=true;
    document.labels.documentPrinter.disabled=true;
  } else {
    document.labels.documentType.disabled=false;
    document.labels.documentCopies.disabled=false;
    document.labels.documentPrinter.disabled=false;
  }
}
function SubmitRequest() {
  var bool = validateMandatory(labels);
  if(bool) {
    if (!labels.check_multlt01.checked) labels.nolabels.selectedIndex=0;
    if (!labels.check_multlt02.checked) {
      labels.nolabelf.selectedIndex=0;
      labels.statncod.selectedIndex=0;
    }
    if (!labels.check_multlt03.checked) {
      labels.nolablf2.selectedIndex=0;
      labels.statncd2.selectedIndex=0;
    }
    if (labels.documentCheck.checked) {
      var docType=labels.documentType.options[labels.documentType.selectedIndex].value
      webservice=encodeURIComponent(docType);
      webservice+="&urnumber="+encodeURIComponent(labels.urnumber.value);
      webservice+="&admissno="+encodeURIComponent(labels.admissno.value);
      stylesheet=printFormat[labels.documentType.selectedIndex]
      printer=labels.documentPrinter.options[labels.documentPrinter.selectedIndex].value
      copies=labels.documentCopies.options[labels.documentCopies.selectedIndex].value
      theURL="PrintDocument.php?webservice="+webservice+
             "&stylesheet="+stylesheet+
             "&copies="+copies+
             "&printer="+printer
      theURL=theURL.replace(/ /g,"+");
      xmlHttp = createHttpObject();
      xmlHttp.open("GET",theURL,false);
      xmlHttp.send();
      if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
        status=xmlHttp.responseText;
      }
      else{
        alertify.alert("Document Printing Web Service Not Available. Check your Connection and Try Again.");
        return;
      }
    }
    if (labels.check_multlt01.checked||
        labels.check_multlt02.checked||
        labels.check_multlt03.checked) {
      theURL=labels.action;
      var postStr=AJAXPostString2(document.labels)
      var xmlHttp = createHttpObject();
      xmlHttp.open("POST", theURL, false);
      xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
      xmlHttp.send(postStr);
      if (xmlHttp.status=="200") {
        if (xmlHttp.responseText.match(/alert/i)) {
          alertify.alert(xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,""));
        }
        if (xmlHttp.responseText.match(/PROCESSING|OK/i)) {
          parent.frames['PatFrame'].refreshScreen();
          parent.CloseDocument();
        }
        else {
          alertify.alert(xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,""));
        }
      }
      else {
        alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
      }
    }
    else {
      parent.frames['PatFrame'].refreshScreen();
      parent.CloseDocument();
    }
  }
}
