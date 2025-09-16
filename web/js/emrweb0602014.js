//jsVersion  : V11.03.00
//========================================================================
function displaySpan(checkbox) {
  if ((checkbox.name.substring(5,8)>="021") &&
     (checkbox.name.substring(5,8)<="038")) {

      if (AddForm.spanflg1.value!=1) {
        AddForm.spanflg1.value=1;
        document.AddForm.others1.checked=true;
        consultationsdiv.innerHTML=consultationsspan.innerHTML;
      }
  }

  if ((checkbox.name.substring(5,8)>="055") &&
     (checkbox.name.substring(5,8)<="056")) {

      if (AddForm.spanflg2.value!=1) {
        AddForm.spanflg2.value=1;
        document.AddForm.others3.checked=true;
        burnsdiv.innerHTML=burnsspan.innerHTML;
      }
  }

  if ((checkbox.name.substring(5,8)>="051") &&
     (checkbox.name.substring(5,8)<="054")) {

      if (AddForm.spanflg3.value!=1) {
        AddForm.spanflg3.value=1;
        document.AddForm.others2.checked=true;
        diagnosticsdiv.innerHTML=diagnosticsspan.innerHTML;
      }
  }

  if ((checkbox.name.substring(5,8)>="105") &&
     (checkbox.name.substring(5,8)<="120")) {

      if (AddForm.spanflg4.value!=1) {
        AddForm.spanflg4.value=1;
        document.AddForm.others4.checked=true;
        surgicaldiv.innerHTML=surgicalspan.innerHTML;
      }
  }

  if ((checkbox.name.substring(5,8)>="124") &&
     (checkbox.name.substring(5,8)<="126")) {

      if (AddForm.spanflg5.value!=1) {
        AddForm.spanflg5.value=1;
        document.AddForm.others5.checked=true;
        othersurgicaldiv.innerHTML=othersurgicalspan.innerHTML;
      }
  }

  if ((checkbox.name.substring(5,8)>="193") &&
     (checkbox.name.substring(5,8)<="195")) {

      if (AddForm.spanflg6.value!=1) {
        AddForm.spanflg6.value=1;
        document.AddForm.others6.checked=true;
        anaesthesiadiv.innerHTML=anaesthesiaspan.innerHTML;
      }
  }

  if ((checkbox.name.substring(5,8)>="198") &&
     (checkbox.name.substring(5,8)<="199")) {

      if (AddForm.spanflg7.value!=1) {
        AddForm.spanflg7.value=1;
        document.AddForm.others7.checked=true;
        urinetestdiv.innerHTML=urinetestspan.innerHTML;
      }
  }

  if ((checkbox.name.substring(5,8)>="209") &&
     (checkbox.name.substring(5,8)<="228")) {

      if (AddForm.spanflg8.value!=1) {
        AddForm.spanflg8.value=1;
        document.AddForm.others8.checked=true;
        criticaldiv.innerHTML=criticalspan.innerHTML;
      }
  }
}
function criticalInnerHTML() {
  if (document.AddForm.others8.checked==true) {
    criticaldiv.innerHTML=criticalspan.innerHTML;
  } else {
    criticaldiv.innerHTML="";
  }
}
function urinetestInnerHTML() {
  if (document.AddForm.others7.checked==true) {
    urinetestdiv.innerHTML=urinetestspan.innerHTML;
  } else {
    urinetestdiv.innerHTML="";
  }
}
function anaesthesiaInnerHTML() {
  if (document.AddForm.others6.checked==true) {
    anaesthesiadiv.innerHTML=anaesthesiaspan.innerHTML;
  } else {
    anaesthesiadiv.innerHTML="";
  }
}
function othersurgicalInnerHTML() {
  if (document.AddForm.others5.checked==true) {
    othersurgicaldiv.innerHTML=othersurgicalspan.innerHTML;
  } else {
    othersurgicaldiv.innerHTML="";
  }
}
function surgicalInnerHTML() {
  if (document.AddForm.others4.checked==true) {
    surgicaldiv.innerHTML=surgicalspan.innerHTML;
  } else {
    surgicaldiv.innerHTML="";
  }
}
function burnsInnerHTML() {
  if (document.AddForm.others3.checked==true) {
    burnsdiv.innerHTML=burnsspan.innerHTML;
  } else {
    burnsdiv.innerHTML="";
  }
}
function diagnosticsInnerHTML() {
  if (document.AddForm.others2.checked==true) {
    diagnosticsdiv.innerHTML=diagnosticsspan.innerHTML;
  } else {
    diagnosticsdiv.innerHTML="";
  }
}
function consultationsInnerHTML() {
  if (document.AddForm.others1.checked==true) {
    consultationsdiv.innerHTML=consultationsspan.innerHTML;
  } else {
    consultationsdiv.innerHTML="";
  }
}
function ClosePg() {
  document.AddForm.action="emrweb02.pbl"
  document.AddForm.reportno.value="1"
  document.AddForm.template.value="100"
  document.AddForm.submit()
}
function init() {

//          consultationsdiv.innerHTML=consultationsspan.innerHTML;

  if (document.AddForm.emerstat.value=="4") {
     alert("Cancelled Visit.");
     PatientLinks.submit()
  }

  if (isWhitespace(document.AddForm.emerdoct.value)) {
     alert("No attending doctor assigned.");
     PatientLinks.submit()
  }

PageLocation="?reportno=1&template=4" +
               "&urnumber=" + PatientURN.replace(/ /g,"+") +
               "&admissno=" + PatientVIS.replace(/ /g,"+")
  if(top.content.location.search.substring(1,23)!="reportno=1&template=16"&&
     top.content.location.search.substring(1,23)!="reportno=1&template=17"){
    if (top.content.location.search!=this.location.search) {
      if (top.content.location.search!=PageLocation) {
      top.content.location.href="emrweb02.pbl" + PageLocation } }
  }
}
function CancelPage() {
 PatientLinks.submit()
}
function unLock() {
  var serverURL = "../cgi-bin/emrweb08.pbl?reportno=10" +
                    "&admissno=" + AddForm.admissno.value.replace(/ /g,"+")

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);
  }
}
function ProceduresList() {
 this.addRow= _AddRow;
}
function _AddRow() {
  procedureCode=arguments[2].replace(/ /g,"")
  procedureSchdf=arguments[15].substring(11,15)
  procedureSchdf=procedureSchdf.replace(/ /g,"0")
//alert(procedureSchdf);
  CheckBoxes = document.getElementsByTagName("INPUT");
  for (i=0; i<CheckBoxes.length; i++) {
     if (CheckBoxes(i).name.substring(0,5) == "proci") {
       if (CheckBoxes(i).value==procedureCode) {
         if (CheckBoxes(i+3).value==procedureSchdf) {
            CheckBoxes(i).checked=true;
            displaySpan(CheckBoxes(i));
            break; 
         } } } }
}
function afterhoursInnerHTML() {
  if (document.AddForm.others9.checked==true) {
    afterhoursdiv.innerHTML=afterhoursspan.innerHTML;
  } else {
    afterhoursdiv.innerHTML="";
  }
}
