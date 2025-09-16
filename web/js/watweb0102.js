//jsVersion  : V11.03.00
//========================================================================
// Program   : watweb0102.js
//
// Function  : Standard Functions Used in watweb0102 templates
//
// Version   : 
//             V11.02.01 29.04.2022 DA Sarkies     TSK 0896408
//                       Added functions to move the speciality list to an
//                       array and clear the specialities, and another function
//                       that displays the consultants specialities as a drop
//                       down list
//             V10.06.01 08/05/2015 Jill Parkinson CAR 316256
//                       Fixed ChgStat() to select correct nrfc default
//             V10.03.01 26/08/2013 Ebon Clements  CAR 275205
//                       Added showPreferredHospital()
//             V10.02.04 09/09/2011 Jill Parkinson CAR 248703
//                       Fixed checkSex()
//             V10.02.03 03/09/2011 Jill Parkinson CAR 249988
//                       Fixed setting of reportable checkbox
//             V10.02.02 24/08/2011 Davin          CAR 248501
//                       Mods to valUnit() and valUnitTeam()
//             V10.02.01 05/08/2011 Jill Parkinson CAR 247834
//                       Changed planned to default to 0 instead of 1 
//             V10.02.00 22/07/2011 Jill Parkinson CAR 243296
//                       Created include
//                       25/07/2011 Davin          CAR 240723
//                       Added valUnitTeam() and modified valUnit()
//
//========================================================================
function checkSex() {
 if(trim(document.getElementById('sex').value)!="Female"&&
    document.getElementById('wattx042').value!=""){
     alert("Expected Delivery Date invalid for this patient.");
     document.getElementById('wattx042').value="";
   }
}

function setReportable() {
 document.getElementById('reportable').checked=false;
 if(!isWhitespace(document.getElementById('wprhat').value)){
    if(trim(document.getElementById('wprhat').value)!='0'){
      document.getElementById('reportable').checked=true;
   }
 }
}
function valProc(thefield,thedesc) {
   validateCode(27,thefield,thedesc)
}
function showFundingSource() {
    i=document.AddForm.wattx026.selectedIndex;
    ind=document.AddForm.wattx026.options[i].value.substring(3,4)
    if (ind=="P") {
      FundingHeading.innerHTML=fundinghd.innerHTML;
      FundingId.innerHTML=fundingid.innerHTML;
      document.AddForm.wattx036.className="Mandatory";
    } else {
      FundingHeading.innerHTML=blanklabel.innerHTML;
      FundingId.innerHTML=blanklabel.innerHTML;
    }
}

function setPlanned() {
    if(document.AddForm.wattx040.value.substr(3,1)=="2"){
      document.AddForm.wattr013.value="0"
    }
}
function SubForm(AddForm) {
    var serverURL = "../cgi-bin/watweb01.pbl?reportno=12&valdtype=1" +
                "&urnumber="+document.AddForm.urnumber.value.replace(/ /g,"+") +
                "&proccode="+document.AddForm.wattr001.value.replace(/ /g,"+");
    var returnValue = RSExecute(serverURL);
    if (returnValue.return_value == -1) {
     if (!confirm("Waiting list entry already exists.\n"+
                  "OK will create a duplicate.")) {
       return false;
     }
   }
   if(validateMandatory(document.AddForm)) {
      document.AddForm.nextpage.value="7";
      document.AddForm.redirect.value="watweb01.pbl?reportno=2&template=10"+
              "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+");
     SubmitHidden(document.AddForm);
     return true;
    }
}


function UpdateUnit(){
//if(document.AddForm.wattr011.selectedIndex==0) {
for (var i =0 ; i < document.AddForm.wattr011.length; i++) {
if(trim(AddForm.unit.value.substr(0,3))==trim(AddForm.wattr011.options[i].value.substr(0,3))) {
       document.AddForm.wattr011.selectedIndex=i } };
// }
}
function setWardList(){
  selectOptions2("3",AddForm.wattr038,AddForm.wattx037);
}

function valUnit() {
  if (document.AddForm.wattr012.value != "") {
    validateCode(31,AddForm.wattr012,AddForm.name_wattr012)
    AddForm.unit.value=AddForm.wattr011.value
    selectOptions4("45",AddForm.wattr012,AddForm.dummy,AddForm.wattr011);
    UpdateUnit();
    if(document.AddForm.wattr011.length=="2") {
      AddForm.wattr011.selectedIndex=1
      AddForm.unit.value=AddForm.wattr011.value
    }
    valUnitTeam();
  }
}
function valUnitTeam() {
  selectOptions4("46",AddForm.wattr012,AddForm.wattr011,AddForm.wattx035);
  if(document.AddForm.wattx035.length=="2") {
    AddForm.wattx035.selectedIndex=1
  }
  if (AddForm.wattx035.length>1) {
      AddForm.wattx035.className = "Mandatory"; }
    else { AddForm.wattx035.className = ""; }
}
function valProc(thefield,thedesc) {
   validateCode(27,thefield,thedesc)
}

function valDoc() {
   var serverURL = "../cgi-bin/watweb01.pbl?reportno=13&valdtype=1" +
          "&wattr011="+document.AddForm.wattr011.value +
          "&wattr012="+document.AddForm.wattr012.value;
    var returnValue = RSExecute(serverURL);
    if (returnValue.return_value == -1) {
       return true;
      }
     return false;
    }


  function DefStat(){
    ChgStat();
  }
  function ChgStat() {
    var ind=document.AddForm.wattx004.value.substr(3,1)
    if (ind == "C"|| ind =="D" || ind =="S") {
      NRFCLabel1.innerHTML="NRFC To Date";
      NRFCLabel2.innerHTML="Auto Update RFC";
      NRFCLabel3.innerHTML="NRFC Reason";
      NRFCField1.innerHTML=InNRFCField1.innerHTML
      NRFCField2.innerHTML=InNRFCField2.innerHTML
      NRFCField3.innerHTML=InNRFCField3.innerHTML
      AddForm.watsu002.className="Mandatory";
      AddForm.watsu003.className="Mandatory";
    }
    else {
      NRFCLabel1.innerHTML="";
      NRFCLabel2.innerHTML="";
      NRFCLabel3.innerHTML="";
      NRFCField1.innerHTML="";
      NRFCField2.innerHTML="";
      NRFCField3.innerHTML="";
    }
    if (ind == "S"){
    for (var i =0 ; i < document.AddForm.watsu003.length; i++) {
    if(trim(AddForm.watsu003.options[i].value.substr(4,1))=="S") {
       document.AddForm.watsu003.selectedIndex=i } };
    }
    if (ind == "C"){
    for (var i =0 ; i < document.AddForm.watsu003.length; i++) {
    if(trim(AddForm.watsu003.options[i].value.substr(4,1))=="C") {
       document.AddForm.watsu003.selectedIndex=i } };
    }
    if (ind == "D"){
    for (var i =0 ; i < document.AddForm.watsu003.length; i++) {
    if(trim(AddForm.watsu003.options[i].value.substr(4,1))=="D") {
       document.AddForm.watsu003.selectedIndex=i } };
    }
  }
//
function RemoveQuote(Field) {
    Field.value=Field.value.replace(/\"/g,"");
}
function valClaimCode() {
  validateCode(41,PatientLinks.urnumber,AddForm.claimc);
//alert(AddForm.claimc.value);
  for (var i =0 ; i < document.AddForm.wattx026.length; i++) {
//    alert(AddForm.wattx026.options[i].value.substr(0,3));
    if (document.AddForm.claimc.value==
        trim(document.AddForm.wattx026.options[i].value.substr(0,3))){
          document.AddForm.wattx026.selectedIndex=i;
    }
  }
}
function ReadDoc(OptionNumber,OptionType,ReturnCode,ReturnName,ReturnPrac,ReturnPnam,ReturnPcnt,ReturnProv) {
  ReturnName.value="";
  ReturnPrac.value="";
  ReturnPnam.value="";
  ReturnPcnt.value="";
  ReturnProv.value="";
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL  = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
               "&returnfm=2" + "&valdtype=" + OptionType +
               "&valdcode=" + ReturnCode.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=trim(ReturnValue[0]);
    ReturnPrac.value=ReturnValue[1];
    ReturnPnam.value=ReturnValue[2];
    ReturnPcnt.value=ReturnValue[3];
    ReturnProv.value=ReturnValue[4]; }
 else {
    ReturnCode.value="";
    ReturnCode.select();
    return false; }
}

function showPreferredHospital(theForm) {
   if(theForm.wattx048.value=="1") {
     defthosp="";
     if(theForm.wattx049!=undefined) {
       defthosp=theForm.wattx049.value;
     }
     document.getElementById('PreferredHospitalField').innerHTML=
     document.getElementById('ShowPreferredHospitalField').innerHTML;
     if(theForm.name=="AddForm") {
       selectOptions2(81,theForm.wattr012,theForm.wattx049);
       if(!isWhitespace(defthosp)) {
       for (var i=0; i < theForm.wattx049.length; i++) {
         if (theForm.wattx049.options[i].value.substr(0,3)==defthosp){
             theForm.wattx049.selectedIndex=i;
         }
       }
     }
     }
   } else {
     document.getElementById('PreferredHospitalField').innerHTML=
     document.getElementById('BlankPreferredHospitalField').innerHTML;
   }
}

//Fuction to create an array that stores all of the specialties
function createSpecialtyArray() {

  var x;
  var option;

  //Loops through the speciality options and places them in its own array
  for (x=0; x<document.getElementById("specialt").options.length; x++) {
    specialtyArray[x] = document.getElementById("specialt")[x].value+"|"+
                        document.getElementById("specialt")[x].innerHTML;

    //checks to see if the specialty has been selected, and records it
    if (document.getElementById("specialt")[x].selected == true) {
      selectedSpecialty = x;
    }
  }

  //Clears the contents of the dropdown box
  document.getElementById("specialt").innerHTML="";
}

//Displays the Doctor's Specialty as a select box
function buildDrSpecList(doctorName, doctorCode, startDate) {

 if (!isWhitespace(doctorName)) {

     //Retrieve's doctor's Specialties
     var serverURL = "../cgi-bin/comweb80.pbl?reportno=97"+
                     "&valddate="+
                     startDate.replace(/ /g,"+")+
                      "&valdcode="+
                     doctorCode.replace(/ /g,"+");
     var returnValue = RSExecute(serverURL);

     //If nothing is retrieved, returns
     if (returnValue.status!=0) {
       return;
     }

     //Blank option placed at top of select box
     option=document.createElement("option");
     document.getElementById("specialt").appendChild(option);

     ReturnValue = returnValue.return_value.split("|");

     //Cycles through the specialties and checks to see if the doctor has it 
     for (x=0;x<specialtyArray.length; x++) {
       for (y=0;y<ReturnValue.length; y++) {
         if (specialtyArray[x].substr(0,3) == ReturnValue[y]) {

           //If the doctor has the speciality the option is attached to the
           //select box.
           option=document.createElement("option");
           option.value=specialtyArray[x].split("|")[0];
           option.innerHTML = specialtyArray[x].split("|")[1];

           //checks if this specialty was selected, and marks the option as
           //selected
           if (selectedSpecialty == x) {
             option.selected = true;
           }

           document.getElementById("specialt").appendChild(option);
         }
       }
     }
  }

  return;

}

