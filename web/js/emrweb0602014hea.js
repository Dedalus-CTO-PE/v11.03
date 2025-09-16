//jsVersion  : V11.03.00
//========================================================================
// Program   : emrweb0602014hea.js
//
// Written   : 06.08.2018 Peter Vela
//
// Function  : Standard Functions Used in hea/emrweb0602014.html
//
// Version   :
//
//========================================================================
var procedureArray = new Array();

function addProcedureToForm(form)
{

 if (!CheckDateTimeRange(document.AddForm.arrvdate,document.AddForm.arrvtime,
                         document.AddForm.procdate,document.AddForm.proctime) ||
     !CheckDateTimeRange(document.AddForm.procdate,document.AddForm.proctime,
                         document.AddForm.dschdate,document.AddForm.dschtime)) {
   alert("Procedure Date/Time must be within Arrival Date/Time and Discharge Date/Time.");
   return false;
 }

 var numberOfHiddenFields = 4;
 var nameFields = ["doctn","itype","schdf","pquan"];
 var valueFields = ["doc","itype","weight","quantity"];

 var obj = document.getElementById("AddForm");
 var newElement = null;

 for(var i = 0;i<procedureArray.length;i++)
 {
  for(var j = 0;j<numberOfHiddenFields;j++)
  {
     newElement = document.createElement("input");
     newElement.type = "hidden";
     newElement.name = nameFields[j]+""+procedureArray[i].id;
     newElement.value = procedureArray[i][valueFields[j]];
     obj.appendChild(newElement);
  }
 }

 return true;
}

function Procedure()
{
 this.id = 0;
 this.weight =0.00;
 this.itype = null;
 this.doc = null;
}

function removeFromCollection(proc)
{
 var procId = proc.name.substring(5,8);
 procId = parseInt(procId,10);

  if(procId=='233') {
    proc.value="";
  }

 for(var i = 0;i< procedureArray.length;i++)
 {
  if(parseInt(procedureArray[i].id,10) == procId)
  {
     procedureArray.splice(i,1);
  }
 }
}

function addToCollection(proc,doc,weight,itype)
{

    if (proc.checked) {
//    alert(proc.value+"|"+ document.getElementById("AddForm").procdate.value);

      var valdcod3 = "   ";

      if (weight == "9.97") {
        valdcod3 = "RV "
      }

      var serverURL = "../cgi-bin/comweb81.pbl?reportno=15&valdcode=" +
          proc.value.replace(/ /g,"+") +
          "&valdcod2=" +
          PatientCLC.replace(/ /g,"+") +
          "&valddate=" +
          document.getElementById("AddForm").procdate.value.replace(/ /g,"+") +
          "&valdcod3=" +
          valdcod3.replace(/ /g,"+");

      var returnValue = RSExecute(serverURL);
      if (returnValue.status==0) {
        if (returnValue.return_value!=1) {
          alert("Invalid Item Code: " + proc.value);
          proc.checked=false;
          return;
        }
      }

    }

  if (proc.checked) {
    var serverURL = "../cgi-bin/comweb81.pbl?reportno=16&valdcode=" +
                      document.AddForm.admissno.value.replace(/ /g,"+") +
                      "&valdcod2=" +
                      proc.value.replace(/ /g,"+");
    var returnValue = RSExecute(serverURL);
    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|");
      if (ReturnValue[0] == "1") {
        if(!confirm("Item "+proc.value+" already added by Dr. "+
                    trim(ReturnValue[1])+
                    ". Do you wish to continue?")) {
          proc.checked=false;
          return;
        }
      }
    }
  }

  if (isWhitespace(document.AddForm.srvcdoct.value) &&
      proc.checked) {
     proc.checked=false;
     alert("Service Doctor must be populated first.");
    return;
  }

  var procedure = new Procedure();

  if(proc.checked)
  {
   procedure.id = proc.name.substring(5,8);
  if(procedure.id=='233') {
    proc.value="NCH";
  }
   procedure.weight = weight;
//alert("|"+procedure.weight+"|");
   procedure.itype = itype;
   procedure.doc = doc;
   procedure.quantity = 1;
   procedureArray.push(procedure);
  }
  else
  {
   removeFromCollection(proc);
  }
}
function addToCollectionMBP(proc,doc,weight,itype)
{

    if (proc.checked) {
//    alert(proc.value+"|"+ document.getElementById("AddForm").procdate.value);
      var serverURL = "../cgi-bin/comweb81.pbl?reportno=15&valdcode=" +
          proc.value.replace(/ /g,"+") +
          "&valdcod2=" +
          PatientCLC.replace(/ /g,"+") +
          "&valddate=" +
          document.getElementById("AddForm").procdate.value.replace(/ /g,"+");

      var returnValue = RSExecute(serverURL);
      if (returnValue.status==0) {
        if (returnValue.return_value!=1) {
          alert("Invalid Item Code: " + proc.value);
          proc.checked=false;
          return;
        }
      }

    }

  if (proc.checked) {
    var serverURL = "../cgi-bin/comweb81.pbl?reportno=16&valdcode=" +
                      document.AddForm.admissno.value.replace(/ /g,"+") +
                      "&valdcod2=" +
                      proc.value.replace(/ /g,"+");
    var returnValue = RSExecute(serverURL);
    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|");
      if (ReturnValue[0] == "1") {
        if(!confirm("Item "+proc.value+" already added by Dr. "+
                    trim(ReturnValue[1])+
                    ". Do you wish to continue?")) {
          proc.checked=false;
          return;
        }
      }
    }
  }

    if (isWhitespace(document.AddForm.srvcdoct.value) &&
        proc.checked) {
       proc.checked=false;
       alert("Service Doctor must be populated first.");
      return;
    }

  var procedure = new Procedure();

  if(proc.checked)
  {
   procedure.id = proc.name.substring(5,8);
  if(procedure.id=='233') {
    proc.value="NCH";
  }
   procedure.weight = weight;
//alert("|"+procedure.weight+"|");
   procedure.itype = itype;
   procedure.doc = doc;

   procedure.quantity = 1;

  if(procedure.id=='007') {
    if (document.AddForm.pquan008 != undefined){
      if (!isWhitespace(document.AddForm.pquan008.value)) {
        procedure.quantity = document.AddForm.pquan008.value;
      }
    } 
  }
  if(procedure.id=='008') {
    if (document.AddForm.pquan008 != undefined){
      if (!isWhitespace(document.AddForm.pquan008.value)) {
        procedure.quantity = document.AddForm.pquan008.value;
      }
    }
  }
  if(procedure.id=='009') {
    if (document.AddForm.pquan010 != undefined){
      if (!isWhitespace(document.AddForm.pquan010.value)) {
        procedure.quantity = document.AddForm.pquan010.value;
      }
    }
  }
  if(procedure.id=='010') {
    if (document.AddForm.pquan010 != undefined){
      if (!isWhitespace(document.AddForm.pquan010.value)) {
        procedure.quantity = document.AddForm.pquan010.value;
      }
    }
  }
  if(procedure.id=='011') {
    if (document.AddForm.pquan011 != undefined){
      if (!isWhitespace(document.AddForm.pquan011.value)) {
        procedure.quantity = document.AddForm.pquan011.value;
      }
    }
  }
  if(procedure.id=='012') {
    if (document.AddForm.pquan012 != undefined){
      if (!isWhitespace(document.AddForm.pquan012.value)) {
        procedure.quantity = document.AddForm.pquan012.value;
      }
    }
  }
  if(procedure.id=='029') {
    if (document.AddForm.pquan030 != undefined){
      if (!isWhitespace(document.AddForm.pquan030.value)) {
        procedure.quantity = document.AddForm.pquan030.value;
      }
    }
  }
  if(procedure.id=='030') {
    if (document.AddForm.pquan030 != undefined){
      if (!isWhitespace(document.AddForm.pquan030.value)) {
        procedure.quantity = document.AddForm.pquan030.value;
      }
    }
  }
  if(procedure.id=='031') {
    if (document.AddForm.pquan032 != undefined){
      if (!isWhitespace(document.AddForm.pquan032.value)) {
        procedure.quantity = document.AddForm.pquan032.value;
      }
    }
  }
  if(procedure.id=='032') {
    if (document.AddForm.pquan032 != undefined){
      if (!isWhitespace(document.AddForm.pquan032.value)) {
        procedure.quantity = document.AddForm.pquan032.value;
      }
    }
  }
  if(procedure.id=='033') {
    if (document.AddForm.pquan034 != undefined){
      if (!isWhitespace(document.AddForm.pquan034.value)) {
        procedure.quantity = document.AddForm.pquan034.value;
      }
    }
  }
  if(procedure.id=='034') {
    if (document.AddForm.pquan034 != undefined){
      if (!isWhitespace(document.AddForm.pquan034.value)) {
        procedure.quantity = document.AddForm.pquan034.value;
      }
    }
  }

   procedureArray.push(procedure);
  }
  else
  {
   removeFromCollection(proc);
  }
}
function AssignAfterCare() {
  if (document.AddForm.nacbox.checked==true) {
    document.AddForm.emvis094.value="1";
  } else {
    document.AddForm.emvis094.value="0";
  }
}
function getConItemNum() {
  document.AddForm.coninvar.value=" .00"

  for (var x=0; x<5; x++) {
    if (document.AddForm.conitmnm[x].checked==true) {
      document.AddForm.coninvar.value=document.AddForm.conitmnm[x].value;
//      alert(document.AddForm.coninvar.value);
    }
  }

}
function assignWeight(weight) {
  if (weight.value=="9.99") {
     for (var x = 213; x < 233; x++) {
      document.getElementById("proci"+x).disabled=true;
      document.getElementById("proci"+x).checked=false;
     }
     x = 233;
       document.getElementById("proci"+x).checked=true;
       addToCollection(document.getElementById("proci"+x),
                     ProcedureDoc,weight.value,'M');
   } else {
     for (var x = 213; x < 233; x++) {
       document.getElementById("proci"+x).disabled=false;
     }
     x = 233;
       document.getElementById("proci"+x).checked=false;
       removeFromCollection(document.getElementById("proci"+x));
  }

// 213 - 232
  for (var x = 213; x < 233; x++) {
    if (document.getElementById("proci"+x).checked==true) {
      removeFromCollection(document.getElementById("proci"+x));
      addToCollection(document.getElementById("proci"+x),
                      ProcedureDoc,weight.value,'M');
    }
  }
}
function assignWeightMBS(weight) {

  if (weight.value=="9.99") {
     for (var x = 241; x < 259; x++) {
      document.getElementById("proci"+x).disabled=true;
      document.getElementById("proci"+x).checked=false;
     }
//     x = 233;
//       document.getElementById("proci"+x).checked=true;
//       addToCollection(document.getElementById("proci"+x),
//                     ProcedureDoc,weight.value,'M');
     return;
   } else {
     for (var x = 241; x < 259; x++) {
       document.getElementById("proci"+x).disabled=false;
     }
     x = 233;
       document.getElementById("proci"+x).checked=false;
       removeFromCollection(document.getElementById("proci"+x));
  }

// 241 - 260
  for (var x = 241; x < 259; x++) {
    if (document.getElementById("proci"+x).checked==true) {
      removeFromCollection(document.getElementById("proci"+x));
      addToCollection(document.getElementById("proci"+x),
                      ProcedureDoc,weight.value,'M');
    }
  }

  checkServices(document.AddForm.srvcdoct);

}
function disableConsulRedButton() {
//  if (document.AddForm.cmpsindc.value=="1"){
//    for (x=0;x < 4;x++){
//      if (document.AddForm.conitmnm[x].value=="9.98") {
//        document.AddForm.conitmnm[x].disabled=true;
//      }
//    }
//  }
}
function disableConsulRedButtonMBS() {
  if (document.AddForm.cmpsindc.value=="1"){
    for (x=0;x < 6;x++){
      if (document.AddForm.conitmnn[x].value=="9.97") {
        document.AddForm.conitmnn[x].disabled=true;
      }
    }
  }
}
function disableMBSCons() {
  document.AddForm.conitmnn[0].checked=true;
  for (var x=0; x<6; x++) {
    document.AddForm.conitmnn[x].disabled=true;
  }
  for (var x = 241; x < 259; x++) {
    document.getElementById("proci"+x).disabled=true;
    document.getElementById("proci"+x).checked=false;
  }
}
function disableMBSConsAllItems() {
  for (var x = 241; x < 259; x++) {
    document.getElementById("proci"+x).disabled=true;
    document.getElementById("proci"+x).checked=false;
  }
}
function disableNonVRFACEM() {
//  for (var x = 241; x < 247; x++) {
//    document.getElementById("proci"+x).disabled=true;
//    document.getElementById("proci"+x).checked=false;
//  }
//  for (var x = 253; x < 268; x++) {
//    document.getElementById("proci"+x).disabled=true;
//    document.getElementById("proci"+x).checked=false;
//  }
//  for (var x = 273; x < 259; x++) {
//    document.getElementById("proci"+x).disabled=true;
//    document.getElementById("proci"+x).checked=false;
//  }
}
function disableVRFACEM() {
//  for (var x = 247; x < 261; x++) {
//    document.getElementById("proci"+x).disabled=true;
//    document.getElementById("proci"+x).checked=false;
//  }
//  for (var x = 268; x < 259; x++) {
//    document.getElementById("proci"+x).disabled=true;
//    document.getElementById("proci"+x).checked=false;
//  }
}
function disableNonVRVR() {
//  for (var x = 241; x < 253; x++) {
//    document.getElementById("proci"+x).disabled=true;
//    document.getElementById("proci"+x).checked=false;
//  }
//  for (var x = 261; x < 273; x++) {
//    document.getElementById("proci"+x).disabled=true;
//    document.getElementById("proci"+x).checked=false;
//  }
}
function enableMBSConsIndc1VR() {
//  document.getElementById("proci247").disabled=false;
//  document.getElementById("proci248").disabled=false;
//  document.getElementById("proci268").disabled=false;
//  document.getElementById("proci249").disabled=false;
//  document.getElementById("proci250").disabled=false;
//  document.getElementById("proci269").disabled=false;
//  document.getElementById("proci251").disabled=false;
//  document.getElementById("proci252").disabled=false;
//  document.getElementById("proci270").disabled=false;
//  document.getElementById("proci271").disabled=false;
//  document.getElementById("proci272").disabled=false;
}
function enableMBSConsIndc1NONVR() {
//  document.getElementById("proci261").disabled=false;
//  document.getElementById("proci262").disabled=false;
//  document.getElementById("proci263").disabled=false;
//  document.getElementById("proci241").disabled=false;
//  document.getElementById("proci242").disabled=false;
//  document.getElementById("proci264").disabled=false;
//  document.getElementById("proci243").disabled=false;
//  document.getElementById("proci244").disabled=false;
//  document.getElementById("proci265").disabled=false;
//  document.getElementById("proci245").disabled=false;
//  document.getElementById("proci246").disabled=false;
//  document.getElementById("proci266").disabled=false;
//  document.getElementById("proci267").disabled=false;
}
function enableMBSConsIndc1FACEM() {
//  document.getElementById("proci273").disabled=false;
//  document.getElementById("proci274").disabled=false;
//  document.getElementById("proci253").disabled=false;
//  document.getElementById("proci254").disabled=false;
//  document.getElementById("proci256").disabled=false;
//  document.getElementById("proci257").disabled=false;
//  document.getElementById("proci259").disabled=false;
//  document.getElementById("proci275").disabled=false;
//  document.getElementById("proci255").disabled=false;
//  document.getElementById("proci258").disabled=false;
//  document.getElementById("proci260").disabled=false;
}
function enableMBSConsIndc1NONMEDICAREDOCTOR() {
  for (var x = 241; x < 259; x++) {
    document.getElementById("proci"+x).disabled=false;
  }
}
function enableMBSCons() {
//  document.AddForm.conitmnn[0].checked=true;
  for (var x=0; x<6; x++) {
    document.AddForm.conitmnn[x].disabled=false;
  }
  for (var x = 241; x < 259; x++) {
    document.getElementById("proci"+x).disabled=false;
  }
}
function checkServices(servicedoctor) {

  if (isWhitespace(servicedoctor.value)) {
    for (x = 0; x < document.getElementsByTagName('input').length; x++) {
      if (document.getElementsByTagName('input').item(x).type == 'checkbox' &&
          document.getElementsByTagName('input').item(x).checked) {
        alert("Service Doctor must be populated if items are selected.");
        servicedoctor.selectedIndex=servicedoctor.length-1;
        return;
      }
    }
  }

  ProcedureDoc=servicedoctor.value;

  if (isWhitespace(servicedoctor.value)) {
    srvcdoctclDIV.innerHTML="";
    disableMBSCons();
    return;
  }
  enableMBSCons();

  var serverURL = "../cgi-bin/comweb81.pbl?reportno=9&valdcode=" +
                  servicedoctor.value.replace(/ /g,"+");

  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) { return; }

  ReturnValue=returnValue.return_value.split("|");
  if (!isWhitespace(ReturnValue[0])) {
    srvcdoctclDIV.innerHTML="(" + ReturnValue[0] + ")";
  } else {
    srvcdoctclDIV.innerHTML="";
  }

//  if (ReturnValue[1]=="V") {
//    disableNonVRFACEM();
//    enableMBSConsIndc1VR();
//    return;
//  }

//  if (ReturnValue[1]=="N") {
//    disableVRFACEM();
//    enableMBSConsIndc1NONVR();
//    return;
//  }

//  if (ReturnValue[1]=="F") {
//    disableNonVRVR();
//    enableMBSConsIndc1FACEM();
//    return;
//  }

//  if (ReturnValue[1]=="M") {
////    disableMBSConsAllItems();
//    enableMBSConsIndc1NONMEDICAREDOCTOR();
//    return;
//  }

  disableConsults();

  if (ReturnValue[1]=="N" ||
      ReturnValue[1]=="V") {
    enableNonFACEMConsults();
    validateAgeGroup(ReturnValue[1]);
    return;
  }

  if (ReturnValue[1]=="F") {
    enableFACEMConsults();
    validateAgeGroup(ReturnValue[1]);
    return;
  }

  if (ReturnValue[1]=="M") {
    enableNonFACEMConsults();
    enableFACEMConsults();
    validateAgeGroup(ReturnValue[1]);
    return;
  }

  disableMBSConsAllItems();

}
function defaultProcedureDateTime() {
  if (document.AddForm.emerstat.value=="1" ||
      document.AddForm.emerstat.value=="2" ||
      document.AddForm.emerstat.value=="3") {
    document.AddForm.procdate.value=document.AddForm.emrhistd.value;
    document.AddForm.proctime.value=document.AddForm.emrhistt.value;
  }
}
function getConItemNumMBS() {
  document.AddForm.coninvar.value=" .00"

  for (var x=0; x<6; x++) {
    if (document.AddForm.conitmnn[x].checked==true) {
      document.AddForm.coninvar.value=document.AddForm.conitmnn[x].value;
//      alert(document.AddForm.coninvar.value);
    }
  }

}
function validateConcessionIndicator() {
  for (var x = 241; x < 259; x++) {

//    var serverURL = "../cgi-bin/comweb81.pbl?reportno=10&valdcode=" +
//                    document.getElementById("proci"+x).value.replace(/ /g,"+") +
//                    "&valddate=" + document.AddForm.arrvdate.value.replace(/ /g,"+");

//    var returnValue = RSExecute(serverURL);
//    if (returnValue.status==0) {
//      if (returnValue.return_value == "1") {
//        document.AddForm.concindc.value="1";
//      }
//    }

    if (document.getElementById("conci"+x).value == "1") {
      document.AddForm.concindc.value="1";
    }

  }

  if (document.AddForm.concindc.value!="1") {
    document.AddForm.conitmnn[3].disabled=true;
  }

}
function displayMDO() {

  if (document.AddForm.emvisite.value=="ASH") {
    mdoDIV.style.display='';
  }

}
function AddProc() {
    Urnumber=AddForm.urnumber.value.replace(/ /g,"+");
    Admissno=AddForm.admissno.value.replace(/ /g,"+");

//    if (UpdateForm.grpbydoc.value==1) {
     Servdoct=ProcedureDoc.replace(/ /g,"+");
     Left=(document.body.clientWidth-770)/2
     LinkURL="patweb75.pbl?reportno=01&template=006&urnumber=" + Urnumber +
             "&admissno=" + Admissno +
             "&servdoct=" + Servdoct
//    } else {
//     Left=(document.body.clientWidth-770)/2
//     LinkURL="patweb75.pbl?reportno=01&template=006&urnumber=" + Urnumber +
//             "&admissno=" + Admissno
//    }
    SetCookie("OtherProceduresCOOKIE",'1');
    DFrameLink(LinkURL,50,Left,770,400);

 }
function init() {

//          consultationsdiv.innerHTML=consultationsspan.innerHTML;

  if (document.AddForm.emerstat.value=="4") {
     alert("Cancelled Visit.");
     PatientLinks.submit()
  }

//  if (isWhitespace(document.AddForm.emerdoct.value)) {
//     alert("No attending doctor assigned.");
//     PatientLinks.submit()
//  }

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
function validateReviewIndicator() {
  for (var x = 241; x < 259; x++) {

//    var serverURL = "../cgi-bin/comweb81.pbl?reportno=14&valdcode=" +
//                    document.getElementById("proci"+x).value.replace(/ /g,"+") +
//                    "&valddate=" + document.AddForm.arrvdate.value.replace(/ /g,"+");

//    var returnValue = RSExecute(serverURL);
//    if (returnValue.status==0) {
//      if (returnValue.return_value == "1") {
//        document.AddForm.rrevindc.value="1";
//      }
//    }

    if (document.getElementById("reviw"+x).value == "1") {
      document.AddForm.rrevindc.value="1";
    }

  }

  if (document.AddForm.rrevindc.value!="1") {
    document.AddForm.conitmnn[2].disabled=true;
  }

}
function pushQuantity() {
//alert(procedureArray.length);

  for (var x = 0; x < procedureArray.length; x++) {
//    alert(procedureArray[x].id);

  procedureArray[x].quantity=1;

  if(procedureArray[x].id=='007') {
    if (document.AddForm.pquan008 != undefined){
      if (!isWhitespace(document.AddForm.pquan008.value)) {
        procedureArray[x].quantity = document.AddForm.pquan008.value;
      }
    }
  }
  if(procedureArray[x].id=='008') {
    if (document.AddForm.pquan008 != undefined){
      if (!isWhitespace(document.AddForm.pquan008.value)) {
        procedureArray[x].quantity = document.AddForm.pquan008.value;
      }
    }
  }
  if(procedureArray[x].id=='009') {
    if (document.AddForm.pquan010 != undefined){
      if (!isWhitespace(document.AddForm.pquan010.value)) {
        procedureArray[x].quantity = document.AddForm.pquan010.value;
      }
    }
  }
  if(procedureArray[x].id=='010') {
    if (document.AddForm.pquan010 != undefined){
      if (!isWhitespace(document.AddForm.pquan010.value)) {
        procedureArray[x].quantity = document.AddForm.pquan010.value;
      }
    }
  }
  if(procedureArray[x].id=='011') {
    if (document.AddForm.pquan011 != undefined){
      if (!isWhitespace(document.AddForm.pquan011.value)) {
        procedureArray[x].quantity = document.AddForm.pquan011.value;
      }
    }
  }
  if(procedureArray[x].id=='012') {
    if (document.AddForm.pquan012 != undefined){
      if (!isWhitespace(document.AddForm.pquan012.value)) {
        procedureArray[x].quantity = document.AddForm.pquan012.value;
      }
    }
  }
  if(procedureArray[x].id=='029') {
    if (document.AddForm.pquan030 != undefined){
      if (!isWhitespace(document.AddForm.pquan030.value)) {
        procedureArray[x].quantity = document.AddForm.pquan030.value;
      }
    }
  }
  if(procedureArray[x].id=='030') {
    if (document.AddForm.pquan030 != undefined){
      if (!isWhitespace(document.AddForm.pquan030.value)) {
        procedureArray[x].quantity = document.AddForm.pquan030.value;
      }
    }
  }
  if(procedureArray[x].id=='031') {
    if (document.AddForm.pquan032 != undefined){
      if (!isWhitespace(document.AddForm.pquan032.value)) {
        procedureArray[x].quantity = document.AddForm.pquan032.value;
      }
    }
  }
  if(procedureArray[x].id=='032') {
    if (document.AddForm.pquan032 != undefined){
      if (!isWhitespace(document.AddForm.pquan032.value)) {
        procedureArray[x].quantity = document.AddForm.pquan032.value;
      }
    }
  }
  if(procedureArray[x].id=='033') {
    if (document.AddForm.pquan034 != undefined){
      if (!isWhitespace(document.AddForm.pquan034.value)) {
        procedureArray[x].quantity = document.AddForm.pquan034.value;
      }
    }
  }
  if(procedureArray[x].id=='034') {
    if (document.AddForm.pquan034 != undefined){
      if (!isWhitespace(document.AddForm.pquan034.value)) {
        procedureArray[x].quantity = document.AddForm.pquan034.value;
      }
    }
  }

//  alert(procedureArray[x].id+" "+procedureArray[x].quantity);

  }
}
function quantityMandatory(checkbox) {

  if (checkbox.checked==true) {
    if (checkbox.value=="14265") {
      document.AddForm.pquan008.className="Number Mandatory";
      if (isWhitespace(document.AddForm.pquan008.value)) {
        document.AddForm.pquan008.value="1"; 
      }
    }
    if (checkbox.value=="14266") {
      document.AddForm.pquan010.className="Number Mandatory";
      if (isWhitespace(document.AddForm.pquan010.value)) {
        document.AddForm.pquan010.value="1";
      }
    }
    if (checkbox.value=="14272") {
      document.AddForm.pquan012.className="Number Mandatory";
      if (isWhitespace(document.AddForm.pquan012.value)) {
        document.AddForm.pquan012.value="1";
      }
    }
    if (checkbox.value=="14263") {
      document.AddForm.pquan030.className="Number Mandatory";
      if (isWhitespace(document.AddForm.pquan030.value)) {
        document.AddForm.pquan030.value="1";
      }
    }
    if (checkbox.value=="14264") {
      document.AddForm.pquan032.className="Number Mandatory";
      if (isWhitespace(document.AddForm.pquan032.value)) {
        document.AddForm.pquan032.value="1";
      }
    }
    if (checkbox.value=="14270") {
      document.AddForm.pquan034.className="Number Mandatory";
      if (isWhitespace(document.AddForm.pquan034.value)) {
        document.AddForm.pquan034.value="1";
      }
    }
  } else {
    if (checkbox.value=="14265") {
      if (document.AddForm.proci007.checked==false &&
          document.AddForm.proci008.checked==false) {
        document.AddForm.pquan008.className="Number";
        document.AddForm.pquan008.value="";
      }
    }
    if (checkbox.value=="14266") {
      if (document.AddForm.proci009.checked==false &&
          document.AddForm.proci010.checked==false) {
        document.AddForm.pquan010.className="Number";
        document.AddForm.pquan010.value="";
      }
    }
    if (checkbox.value=="14272") {
      if (document.AddForm.proci011.checked==false &&
          document.AddForm.proci012.checked==false) {
        document.AddForm.pquan012.className="Number";
        document.AddForm.pquan012.value="";
      }
    }
    if (checkbox.value=="14263") {
      if (document.AddForm.proci029.checked==false &&
          document.AddForm.proci030.checked==false) {
        document.AddForm.pquan030.className="Number";
        document.AddForm.pquan030.value="";
      }
    }
    if (checkbox.value=="14264") {
      if (document.AddForm.proci031.checked==false &&
          document.AddForm.proci032.checked==false) {
        document.AddForm.pquan032.className="Number";
        document.AddForm.pquan032.value="";
      }
    }
    if (checkbox.value=="14270") {
      if (document.AddForm.proci033.checked==false &&
          document.AddForm.proci034.checked==false) {
        document.AddForm.pquan034.className="Number";
        document.AddForm.pquan034.value="";
      }
    }
  }

}
function disableConsults() {
  for (var x = 241; x < 259; x++) {
    document.getElementById("proci"+x).disabled=true;
    document.getElementById("proci"+x).checked=false;
  }
}
function enableNonFACEMConsults() {
  document.getElementById("proci241").disabled=false;
  document.getElementById("proci247").disabled=false;
  document.getElementById("proci253").disabled=false;
  document.getElementById("proci242").disabled=false;
  document.getElementById("proci248").disabled=false;
  document.getElementById("proci254").disabled=false;
  document.getElementById("proci243").disabled=false;
  document.getElementById("proci249").disabled=false;
  document.getElementById("proci255").disabled=false;
}
function enableFACEMConsults() {
  document.getElementById("proci244").disabled=false;
  document.getElementById("proci250").disabled=false;
  document.getElementById("proci256").disabled=false;
  document.getElementById("proci245").disabled=false;
  document.getElementById("proci251").disabled=false;
  document.getElementById("proci257").disabled=false;
  document.getElementById("proci246").disabled=false;
  document.getElementById("proci252").disabled=false;
  document.getElementById("proci258").disabled=false;
}
function validateAgeGroup(ind) {

  var age = parseInt(document.AddForm.ptmpsage.value);

  if (ind == "N" ||
      ind == "V" ||
      ind == "M") {
    if (age < 4) {
      document.getElementById("proci241").disabled=false;
      document.getElementById("proci247").disabled=false;
      document.getElementById("proci253").disabled=false;

      document.getElementById("proci242").checked=false;
      document.getElementById("proci242").disabled=true;
      document.getElementById("proci248").checked=false;
      document.getElementById("proci248").disabled=true;
      document.getElementById("proci254").checked=false;
      document.getElementById("proci254").disabled=true;

      document.getElementById("proci243").checked=false;
      document.getElementById("proci243").disabled=true;
      document.getElementById("proci249").checked=false;
      document.getElementById("proci249").disabled=true;
      document.getElementById("proci255").checked=false;
      document.getElementById("proci255").disabled=true;

    }
    if (age >= 4 && age < 75) {
      document.getElementById("proci241").checked=false;
      document.getElementById("proci241").disabled=true;
      document.getElementById("proci247").checked=false;
      document.getElementById("proci247").disabled=true;
      document.getElementById("proci253").checked=false;
      document.getElementById("proci253").disabled=true;

      document.getElementById("proci242").disabled=false;
      document.getElementById("proci248").disabled=false;
      document.getElementById("proci254").disabled=false;

      document.getElementById("proci243").checked=false;
      document.getElementById("proci243").disabled=true;
      document.getElementById("proci249").checked=false;
      document.getElementById("proci249").disabled=true;
      document.getElementById("proci255").checked=false;
      document.getElementById("proci255").disabled=true;
    }
    if (age >= 75) {
      document.getElementById("proci241").checked=false;
      document.getElementById("proci241").disabled=true;
      document.getElementById("proci247").checked=false;
      document.getElementById("proci247").disabled=true;
      document.getElementById("proci253").checked=false;
      document.getElementById("proci253").disabled=true;

      document.getElementById("proci242").checked=false;
      document.getElementById("proci242").disabled=true;
      document.getElementById("proci248").checked=false;
      document.getElementById("proci248").disabled=true;
      document.getElementById("proci254").checked=false;
      document.getElementById("proci254").disabled=true;

      document.getElementById("proci243").disabled=false;
      document.getElementById("proci249").disabled=false;
      document.getElementById("proci255").disabled=false;

    }
  }  

  if (ind == "F" ||
      ind == "M") {
    if (age < 4) {
      document.getElementById("proci244").disabled=false;
      document.getElementById("proci250").disabled=false;
      document.getElementById("proci256").disabled=false;

      document.getElementById("proci245").checked=false;
      document.getElementById("proci245").disabled=true;
      document.getElementById("proci251").checked=false;
      document.getElementById("proci251").disabled=true;
      document.getElementById("proci257").checked=false;
      document.getElementById("proci257").disabled=true;

      document.getElementById("proci246").checked=false;
      document.getElementById("proci246").disabled=true;
      document.getElementById("proci252").checked=false;
      document.getElementById("proci252").disabled=true;
      document.getElementById("proci258").checked=false;
      document.getElementById("proci258").disabled=true;
    }
    if (age >= 4 && age < 75) {
      document.getElementById("proci244").checked=false;
      document.getElementById("proci244").disabled=true;
      document.getElementById("proci250").checked=false;
      document.getElementById("proci250").disabled=true;
      document.getElementById("proci256").checked=false;
      document.getElementById("proci256").disabled=true;

      document.getElementById("proci245").disabled=false;
      document.getElementById("proci251").disabled=false;
      document.getElementById("proci257").disabled=false;

      document.getElementById("proci246").checked=false;
      document.getElementById("proci246").disabled=true;
      document.getElementById("proci252").checked=false;
      document.getElementById("proci252").disabled=true;
      document.getElementById("proci258").checked=false;
      document.getElementById("proci258").disabled=true;
    }
    if (age >= 75) {
      document.getElementById("proci244").checked=false;
      document.getElementById("proci244").disabled=true;
      document.getElementById("proci250").checked=false;
      document.getElementById("proci250").disabled=true;
      document.getElementById("proci256").checked=false;
      document.getElementById("proci256").disabled=true;

      document.getElementById("proci245").checked=false;
      document.getElementById("proci245").disabled=true;
      document.getElementById("proci251").checked=false;
      document.getElementById("proci251").disabled=true;
      document.getElementById("proci257").checked=false;
      document.getElementById("proci257").disabled=true;

      document.getElementById("proci246").disabled=false;
      document.getElementById("proci252").disabled=false;
      document.getElementById("proci258").disabled=false;

    }
  }
}
function padNumber(n, width, z) {
  z = z || '0';
  n = n + '';
  return n.length >= width ? n : new Array(width - n.length + 1).join(z) + n;
}
function disableProcedures() {
  for (var x = 1; x < 45; x++) {
 
    y = padNumber(x,3);

    document.getElementById("proci"+y).disabled=true;
    document.getElementById("proci"+y).checked=false;
  }

  document.AddForm.pquan008.value="";
  document.AddForm.pquan010.value="";
  document.AddForm.pquan012.value="";
  document.AddForm.pquan030.value="";
  document.AddForm.pquan032.value="";
  document.AddForm.pquan034.value="";

  document.AddForm.pquan008.className="Number";
  document.AddForm.pquan010.className="Number";
  document.AddForm.pquan012.className="Number";
  document.AddForm.pquan030.className="Number";
  document.AddForm.pquan032.className="Number";
  document.AddForm.pquan034.className="Number";

  document.AddForm.pquan008.disabled=true;
  document.AddForm.pquan010.disabled=true;
  document.AddForm.pquan012.disabled=true;
  document.AddForm.pquan030.disabled=true;
  document.AddForm.pquan032.disabled=true;
  document.AddForm.pquan034.disabled=true;

}
function enableProcedures() {
  for (var x = 1; x < 45; x++) {

    y = padNumber(x,3);

    document.getElementById("proci"+y).disabled=false;
  }

  document.AddForm.pquan008.disabled=false;
  document.AddForm.pquan010.disabled=false;
  document.AddForm.pquan012.disabled=false;
  document.AddForm.pquan030.disabled=false;
  document.AddForm.pquan032.disabled=false;
  document.AddForm.pquan034.disabled=false;
}
function checkProcedures(servicedoctor) {
//  if (isWhitespace(servicedoctor.value)) {return;}

  ProcedureDoc=servicedoctor.value;

  disableProcedures();
  if (isWhitespace(servicedoctor.value)) {
    srvcdoctclDIV.innerHTML="";
    return;
  }

  if (ReturnValue[1]=="N" ||
      ReturnValue[1]=="V") {
    enableNonFACEMProcedures();
    return;
  }

  if (ReturnValue[1]=="F") {
    enableFACEMProcedures();
    return;
  }

  if (ReturnValue[1]=="M") {
    enableNonFACEMProcedures();
    enableFACEMProcedures();
    return;
  }

}
function enableNonFACEMProcedures() {
  for (var x = 1; x < 23; x++) {

    y = padNumber(x,3);

    document.getElementById("proci"+y).disabled=false;
  }

  document.AddForm.pquan008.disabled=false;
  document.AddForm.pquan010.disabled=false;
  document.AddForm.pquan012.disabled=false;
}
function enableFACEMProcedures() {
  for (var x = 23; x < 45; x++) {

    y = padNumber(x,3);

    document.getElementById("proci"+y).disabled=false;
  }

  document.AddForm.pquan030.disabled=false;
  document.AddForm.pquan032.disabled=false;
  document.AddForm.pquan034.disabled=false;
}
