//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb9810001.js
//
// Function  : Standard Functions Used in patweb9810001 templates
//
//========================================================================
OutputArray = new Array();        // Create Array to Store Rows of Table
OldArray = new Array();           // Create Array to Store Rows of Table
var specialtyArray = new Array();
function UpdateArray(ReturnCode) {
  var TRNKey="";
  var Flag=0;
  OldArray=OutputArray
  OutputArray = new Array();      // Create Array to Store Rows of Table
  j=0;
  for (i=0;i<OldArray.length;i++) {
    x = ReturnCode.substring(0,30)
    y = OldArray[i].substring(40,70)
    if (x!=y) {
      OutputArray[j]=OldArray[i]
      j++
    }
    else {
      Flag="1"                     // Remove record from array
    }
  }

  if (Flag == "1") {
    OutputDivision()
  }
  else {
    AddOutputArray(ReturnCode)    // Add new record to array
    OutputDivision()
  }
}
function OutputDivision() {
    OutputString=""
    for (i=OutputArray.length-1;i>=0;i--) {
      OutputString+=OutputArray[i]
    }
    Results.innerHTML=OutputString
}
function AddOutputArray(TRNKey) {
    OutputArray[OutputArray.length] = "<input type=hidden name=updtrnno" +
                                      " value='" + TRNKey + "'>"
}
function UpdateRecords() {
  if(OutputArray.length=="0") {
    alert("No records have been selected to update.");
    return;
  }
  if(document.UpdateForm.offdutyb!=undefined){
    if(document.UpdateForm.offdutyb.checked==true){
      alert("Error: Claim Type invalid for 'Off Duty' personnel.")
      return;
    }
  }

  SetRedirect();
  if (validateMandatory(UpdateForm)) {
   document.UpdateForm.submit();
  }
}
function DispChangeType() {
  if (document.UpdateForm.trnsupty.value==1) {
     TypeOfChange.innerHTML=WardBedChange.innerHTML
  }
  if (document.UpdateForm.trnsupty.value==2) {
     TypeOfChange.innerHTML=ClaimTypeChange.innerHTML
  }
  if (document.UpdateForm.trnsupty.value==3) {
     TypeOfChange.innerHTML=PatTypeChange.innerHTML
  }
  if (document.UpdateForm.trnsupty.value==4) {
    if(document.UpdateForm.ptcnhdps.value==6&&document.UpdateForm.chosptyp.value==1){
      TypeOfChange.innerHTML=DoctorChange.innerHTML
    } else {
      TypeOfChange.innerHTML=DoctorStdChange.innerHTML
    }
  }
  if (document.UpdateForm.trnsupty.value==5) {
     TypeOfChange.innerHTML=CareTypeChange.innerHTML
  }
  if (document.UpdateForm.trnsupty.value==6) {
     TypeOfChange.innerHTML=BedTypeChange.innerHTML
  }
  if (document.UpdateForm.trnsupty.value==7) {
     TypeOfChange.innerHTML=DateTimeChange.innerHTML
  }
  if (document.UpdateForm.trnsupty.value==8) {
     TypeOfChange.innerHTML=RegistrarChange.innerHTML
  }
  if (document.UpdateForm.trnsupty.value==9) {
     TypeOfChange.innerHTML=ResidentChange.innerHTML
  }
}
function SetRedirect() {

  if (document.UpdateForm.trntoclm != undefined) {
    var checkCLAM=document.UpdateForm.trntoclm.value.substr(3,1);

    if (checkCLAM=="D") {
     document.UpdateForm.redirect.value="patweb71.pbl?reportno=01&template=039"
     + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+")
     + "&pmext002=" + document.UpdateForm.trntoclm.value.replace(/ /g,"+")

      } else if (checkCLAM=="A") {
     document.UpdateForm.redirect.value="patweb71.pbl?reportno=01&template=040"
     + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+")
     + "&pmext002=" + document.UpdateForm.trntoclm.value.replace(/ /g,"+")

      } else if (checkCLAM=="O") {
     document.UpdateForm.redirect.value="patweb71.pbl?reportno=01&template=041"
     + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+")
     + "&pmext002=" + document.UpdateForm.trntoclm.value.replace(/ /g,"+")

      } else if (checkCLAM=="M") {
     document.UpdateForm.redirect.value="patweb71.pbl?reportno=01&template=042"
     + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+")
     + "&pmext002=" + document.UpdateForm.trntoclm.value.replace(/ /g,"+")

      } else if (checkCLAM=="F") {
     document.UpdateForm.redirect.value="patweb71.pbl?reportno=01&template=043"
     + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+")
     + "&pmext002=" + document.UpdateForm.trntoclm.value.replace(/ /g,"+")

      } else if (checkCLAM=="H") {
     document.UpdateForm.redirect.value="patweb71.pbl?reportno=01&template=044"
     + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+")
     + "&pmext002=" + document.UpdateForm.trntoclm.value.replace(/ /g,"+")

      } else if (checkCLAM=="S") {
     document.UpdateForm.redirect.value="patweb71.pbl?reportno=01&template=045"
     + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+")
     + "&pmext002=" + document.UpdateForm.trntoclm.value.replace(/ /g,"+")

      } else if (checkCLAM=="V") {
     document.UpdateForm.redirect.value="patweb71.pbl?reportno=01&template=046"
     + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+")
     + "&pmext002=" + document.UpdateForm.trntoclm.value.replace(/ /g,"+")

      } else if (checkCLAM=="W") {
     document.UpdateForm.redirect.value="patweb71.pbl?reportno=01&template=047"
     + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+")
     + "&pmext002=" + document.UpdateForm.trntoclm.value.replace(/ /g,"+")

      } else if (checkCLAM=="E") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=12&template=004"
     + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+")
     + "&pmext002=" + document.UpdateForm.trntoclm.value.replace(/ /g,"+")

      } else if (checkCLAM=="G") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=12&template=008"
     + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+")
     + "&pmext002=" + document.UpdateForm.trntoclm.value.replace(/ /g,"+")
    }
  }
}
function valDoctorUnit() {
  if(document.UpdateForm.ptcnhdps.value==6&&document.UpdateForm.chosptyp.value==1){
    validateCode(3,UpdateForm.trntodoc,UpdateForm.doctnam2);
  selectOptions4("45",UpdateForm.trntodoc,UpdateForm.dummy,UpdateForm.trntount);
    selectUnit();
    valDoctorUnitTeam();
  } else {
    validateCode(31,UpdateForm.trntodoc,UpdateForm.doctnam2);
    selectOptions("30",UpdateForm.trntodoc,UpdateForm.trntount);
  }
}
function valDoctorUnitTeam() {
  selectOptions4("46",UpdateForm.trntodoc,UpdateForm.trntount,UpdateForm.trntotem);
//UpdateForm.trntotem.selectedIndex=1
  selectTeam();
}
function selectUnit(){

  if (trim(document.UpdateForm.trntodoc.defaultValue) !=
      trim(document.UpdateForm.trntodoc.value))
  {
    document.UpdateForm.deftunit.value=" ";
  }
  else
  {
    document.UpdateForm.deftunit.value=
    document.UpdateForm.deftunit.defaultValue;
  }

  for (var i =0 ; i < document.UpdateForm.trntount.length; i++) {
    if (document.UpdateForm.trntount.options[i].value.substr(0,3)==
                 document.UpdateForm.deftunit.value.substr(0,3)) {
       document.UpdateForm.trntount.selectedIndex=i } };
    if (isWhitespace(document.UpdateForm.deftunit)) {
      if (UpdateForm.trntount.length==2) {
        UpdateForm.trntount.selectedIndex=1; } }
}

function selectTeam(){

  if (trim(document.UpdateForm.trntodoc.defaultValue) !=
      trim(document.UpdateForm.trntodoc.value))
  {
    document.UpdateForm.deftteam.value=" ";
  }
  else
  {
    document.UpdateForm.deftteam.value=
    document.UpdateForm.deftteam.defaultValue;
  }

  for (var i =0 ; i < document.UpdateForm.trntotem.length; i++) {
    if (document.UpdateForm.trntotem.options[i].value.substr(0,5)==
                 document.UpdateForm.deftteam.value.substr(0,5)) {
       document.UpdateForm.trntotem.selectedIndex=i } };
    if (isWhitespace(document.UpdateForm.deftteam)) {
      if (UpdateForm.trntotem.length==2) {
        UpdateForm.trntotem.selectedIndex=1; } }
      if (UpdateForm.trntotem.length>1) {
        UpdateForm.trntotem.className = "Mandatory"; }
      else { UpdateForm.trntotem.className = ""; }
}
function createSpecialtyArray() {

  var x;
  var option;

  for (x=0; x<document.getElementById("trntopat").options.length; x++) {
    specialtyArray[x]=document.getElementById("trntopat")[x].value + "|" +
                      document.getElementById("trntopat")[x].innerHTML;
  }

//  document.getElementById("trntopat").innerHTML="";
}
function getHCPSpecialtySelectList() {
  var x;
  var y;

//  document.getElementById("trntopat").innerHTML="";

  if (isWhitespace(document.getElementById("admndate").value) ||
      isWhitespace(document.getElementById("attddoct").value)) {
    return;
  }

  var serverURL = "../cgi-bin/comweb80.pbl?reportno=97" +
                  "&valddate=" +
                  document.getElementById("admndate").value.replace(/ /g,"+") +
                  "&valdcode=" +
                  document.getElementById("attddoct").value.replace(/ /g,"+");

  var returnValue = RSExecute(serverURL);

  if (returnValue.status!=0) {
    return;
  }

  document.getElementById("trntopat").innerHTML="";

  option = document.createElement("option");
  option.value="";
  option.innerHTML="";
  document.getElementById("trntopat").appendChild(option);

  ReturnValue=returnValue.return_value.split("|");

  for (x=0; x<specialtyArray.length; x++) {
    for (y=0; y<ReturnValue.length; y++) {
      if (specialtyArray[x].substr(0,3) == ReturnValue[y]) {
        option = document.createElement("option");
        option.value=specialtyArray[x].split("|")[0];
        option.innerHTML=specialtyArray[x].split("|")[1];
        document.getElementById("trntopat").appendChild(option);
      }
    }
  }
}
function defaultSpecialty() {

  var x;

  if (isWhitespace(document.getElementById("c_trntopat").value)) {return;}

  for (x=0; x<document.getElementById("trntopat").length; x++) {
    if (document.getElementById("trntopat")[x].value.substr(0,3) ==
        document.getElementById("c_trntopat").value) {
      document.getElementById("trntopat").selectedIndex=x;
    }
  }

}
