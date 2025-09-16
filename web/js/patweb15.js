//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb15.js
//
// Written   : 28.08.2013
//
// Function  : Standard Functions Used in patweb15 templates
//
//========================================================================
function AddRequest01() {
  PatientLinkTo("patweb15.pbl",1,2,0,0,0);
}
function AddRequest01() {
  PatientLinkTo("patweb15.pbl",1,2,0,0,0);
}
function SubmitAddDraft01() {
  if(!CheckMandatoryComboOnPost(AddForm)) {
     return;
  }
  if(!CheckEditsOnPost(AddForm)) {
     return;
  }
  
  if (document.AddForm.pmarq058.value == "2") {  // Approval Required
    document.AddForm.pmarq058.disabled = false;  // to allow submit of value
    document.AddForm.pmarq057.value="7";  // Approval Required
  }
  else {
    document.AddForm.pmarq057.value="1";  // Draft
  }

  document.AddForm.pmarq064.disabled = false;
  SubmitHidden(AddForm);
  document.AddForm.pmarq064.disabled = true;
}
function SubmitAddSubmit01() {
  if(!CheckMandatoryComboOnPost(AddForm)) {
     return;
  }
  if(!CheckEditsOnPost(AddForm)) {
     return;
  }

  if (document.AddForm.pmarq058.value == "2") {  // Approval Required
    document.AddForm.pmarq058.disabled = false;  // to allow submit of value
    document.AddForm.pmarq057.value="7";  // Approval Required
  }
  else {
    document.AddForm.pmarq057.value="2";  // Submitted
  }
 
  document.AddForm.pmarq064.disabled = false;
  SubmitHidden(AddForm);
  document.AddForm.pmarq064.disabled = true;
}
function UpdRequest01(request) {
  document.PatientLinks.pmarq001.value=request;
  PatientLinkTo("patweb15.pbl",1,3,0,0,0);
}
function SaveDraft01() {
  if(!CheckMandatoryComboOnPost(UpdateForm)) {
     return;
  }
  if(!CheckEditsOnPost(UpdateForm)) {
     return;
  }

  if (document.UpdateForm.pmarq058.value == "2") {  // Approval Required
    document.UpdateForm.pmarq058.disabled = false;  // to allow submit of value
    document.UpdateForm.pmarq057.value="7";  // set status - Approval Required
  }
  else {
    document.UpdateForm.pmarq057.value="1";  // set status - Draft
  }

  document.UpdateForm.updttype.value="U";
  document.UpdateForm.nextpage.value="2";
  ClearHiddenFieldOnPost(UpdateForm);
  document.UpdateForm.pmarq064.disabled = false;
  SubmitHidden(UpdateForm);
  document.UpdateForm.pmarq064.disabled = true
}
function SaveSubmit01() {
  if(!CheckMandatoryComboOnPost(UpdateForm)) {
     return;
  }
  if(!CheckEditsOnPost(UpdateForm)) {
     return;
  }

  if (document.UpdateForm.pmarq058.value == "2") {  // Approval Required
    document.UpdateForm.pmarq058.disabled = false;  // to allow submit of value
  }

  document.UpdateForm.updttype.value="U";
  document.UpdateForm.nextpage.value="2";
  document.UpdateForm.pmarq057.value="2";
  ClearHiddenFieldOnPost(UpdateForm);
  SubmitHidden(UpdateForm);
}

function SubmitDelRequest01() {
  if(!confirm("Are you sure you want to fully delete this request?\n" +
              "Select ok to delete ALL request data or click Cancel.")) {
    return;
  }
  document.UpdateForm.updttype.value="D";
  document.UpdateForm.nextpage.value="1";
  document.UpdateForm.submit();
}
function LinkRemove01() {
  document.PatientLinks.pmarq001.value=document.UpdateForm.pmarq001.value;
  PatientLinkTo("patweb15.pbl",1,5,1,400,150);
}
function LinkReview01() {
  document.PatientLinks.pmarq001.value=document.UpdateForm.pmarq001.value;
  PatientLinkTo("patweb15.pbl",1,7,1,400,150);
}
function LinkReturn01() {
  document.PatientLinks.pmarq001.value=document.UpdateForm.pmarq001.value;
  PatientLinkTo("patweb15.pbl",1,6,1,400,150);
}
function LinkOtherWL01() {
  PatientLinkTo("watweb01.pbl",2,35,1,850,400);
}
function LinkPreAnaesthetic01() {
  document.PatientLinks.pmarv001.value=document.UpdateForm.pmarq001.value;
  PatientLinkTo("patweb15.pbl",3,1,1,900,500);
}
function LinkClinicalTriage01() {
  document.PatientLinks.pmarv001.value=document.UpdateForm.pmarq001.value;
  PatientLinkTo("patweb15.pbl",3,2,1,900,500);
}
function RequestComments01() {
  PatientLinkTo("patweb15.pbl",1,4,1,700,280);
}
function LinkAuthApprov01() {
  document.PatientLinks.pmarv001.value=document.UpdateForm.pmarq001.value;
  PatientLinkTo("patweb15.pbl",3,5,1,800,500);
}
function ClearResp01(theForm) {
  if(theForm.pmarq007.readOnly==true) {
    alert(theForm.pmarq007.title + " is a readonly field");
    return;
  }
  clrDoc(theForm.pmarq007,theForm.n_pmarq007)
  theForm.pmarq008.length=0;
  theForm.pmarq009.length=0;
  theForm.pmarq020.length=0;
  theForm.pmarq022.length=0;
  showPreferredHospital01(theForm);
}
function SearchResp01() {
  if(UpdateForm.pmarq007.readOnly==true) {
    alert(UpdateForm.pmarq007.title + " is a readonly field");
    return;
  }
  WaitConSearchFrameTMD(UpdateForm.pmarq007,UpdateForm.n_pmarq007,UpdateForm.pmarq008);
}
function SearchRefClinician01() {
  if(UpdateForm.pmarq042.readOnly==true) {
    alert(UpdateForm.pmarq042.title + " is a readonly field");
    return;
  }
  p=UpdateForm;
  GPHCPSearchFrame(p.pmarq042,p.genpname,p.genpprov,p.pmarq043,p.genpprac,p.pmarq044,0);
}

function ClearRefClinician01() {
  if(UpdateForm.pmarq042.readOnly==true) {
    alert(UpdateForm.pmarq042.title + " is a readonly field");
    return;
  }
  clrFields(UpdateForm.pmarq042,UpdateForm.genpname);
}
function SearchRefClinicianPrac1() {
  if(UpdateForm.pmarq042.readOnly==true) {
    alert(UpdateForm.pmarq042.title + " Practice is a readonly field");
    return;
  }
  p=UpdateForm;
  GPHCGSearchFrame(p.pmarq042,p.genpname,p.genpprov,p.pmarq043,p.genpprac,p.pmarq044)
}

function ClearRefClinicianPrac1() {
  if(UpdateForm.pmarq042.readOnly==true) {
    alert(UpdateForm.pmarq042.title + " Practice is a readonly field");
    return;
  }
  clrFields(UpdateForm.pmarq043,UpdateForm.genpprac,UpdateForm.pmarq044,UpdateForm.genpprov);
}
function valUnit01(theForm) {
  if (theForm.pmarq007.value != "") {
    validateCode(31,theForm.pmarq007,theForm.n_pmarq007)
    if(!isWhitespace(theForm.pmarq008.value)) {
      theForm.unit.value=theForm.pmarq008.value
    }
    selectOptions4("45",theForm.pmarq007,theForm.dummy,theForm.pmarq008);
//
    for (var i =0 ; i < theForm.pmarq008.length; i++) {
    if(trim(theForm.unit.value.substr(0,3))==
       trim(theForm.pmarq008.options[i].value.substr(0,3))) {
       theForm.pmarq008.selectedIndex=i } };
//
    if(theForm.pmarq008.selectedIndex==0 && theForm.pmarq008.length=="2") {
      theForm.pmarq008.selectedIndex=1
      theForm.unit.value=theForm.pmarq008.value
    }
    valUnitTeam01(theForm);
    showPreferredHospital01(theForm);
  }
}
function valUnitTeam01(theForm) {
  selectOptions4("46",theForm.pmarq007,theForm.pmarq008,theForm.pmarq009);
  for (var i =0 ; i < theForm.pmarq009.length; i++) {
    if(trim(theForm.pmarq009.options[i].value)==
       trim(theForm.team.value)) {
       theForm.pmarq009.selectedIndex=i }
  }
  if(theForm.pmarq009.selectedIndex==0 && theForm.pmarq009.length=="2") {
    theForm.pmarq009.selectedIndex=1
  }
  if (theForm.pmarq009.length>1) {
      theForm.pmarq009.className = "Mandatory"; }
    else { theForm.pmarq009.className = ""; }
}

function showPreferredHospital01(theForm) {
   if(theForm.pmarq021.value=="1") {
     document.getElementById('PreferredHospitalField').innerHTML=
     document.getElementById('ShowPreferredHospitalField').innerHTML;
       selectOptions2(81,theForm.pmarq007,theForm.pmarq020);
       selectOptions2(81,theForm.pmarq007,theForm.pmarq022);

       if(!isWhitespace(theForm.d_pmarq020.value)) {
         for (var i=0; i < theForm.pmarq020.length; i++) {
           if (theForm.pmarq020.options[i].value.substr(0,3)==
               theForm.d_pmarq020.value.substr(0,3)){
               theForm.pmarq020.selectedIndex=i;
           }
         }
       }
     if(!isWhitespace(theForm.d_pmarq022.value)) {
       for (var i=0; i < theForm.pmarq022.length; i++) {
         if (theForm.pmarq022.options[i].value.substr(0,3)==
             theForm.d_pmarq022.value.substr(0,3)){
             theForm.pmarq022.selectedIndex=i;
         }
       }
     }
   } else {
     document.getElementById('PreferredHospitalField').innerHTML=
     document.getElementById('BlankPreferredHospitalField').innerHTML;
     selectOptions2(81,theForm.pmarq007,theForm.pmarq020);
     if(!isWhitespace(theForm.d_pmarq020.value)) {
       for (var i=0; i < theForm.pmarq020.length; i++) {
         if (theForm.pmarq020.options[i].value.substr(0,3)==
             theForm.d_pmarq020.value.substr(0,3)){
             theForm.pmarq020.selectedIndex=i;
         }
       }
     }
   }
}
function CalculateBMI(Weight,Height,Bmi,Adult) {
  if(!isWhitespace(Weight.value)) {
    if(!checkNumber(Weight)) {
       Weight.value="";
       Bmi.value="";
       Weight.focus();
       return;
    }
    RoundNumber(Weight,2);
    BmiHighlight(Weight,Bmi,Adult);
  }
//
  if(!isWhitespace(Height.value)) {
    if(!checkNumber(Height)) {
       Height.value="";
       Bmi.value="";
       Height.focus();
       return;
    }
  }
  if(isWhitespace(Weight.value) || isWhitespace(Height.value)) {
     Bmi.value="";
     return;
  }
//  BMI= kg / height in meters squared
  weight=parseInt(Weight.value,10);
  height_meters=parseInt(Height.value,10) / 100;
  if(height_meters==0 || weight == 0) {
     Bmi.value="";
     return;
  }
  height_meters_squard=height_meters * height_meters;
  Bmi.value=weight/height_meters_squard;
  RoundNumber(Bmi,1);
  BmiHighlight(Weight,Bmi,Adult);
}
function BmiHighlight(Weight,Bmi,Adult) {
  if(Weight.value>150) {
    if(Adult.value=="1") {
      Weight.className="Mandatory Red";
    } else {
      Weight.className="Mandatory";
    }
  } else {
    if(Adult.value=="1") {
      Weight.className="Mandatory";
    } else {
      Weight.className="";
    }
  }
//
  if(Bmi.value>35) {
    Bmi.className="Red";
  } else {
    Bmi.className="Readonly";
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
function ClinicalView(theForm) {
  var view_type=theForm.clinical.value;
  var req_type="";
  for(var i = 0; i < theForm.pmarq006.length; i++)
  if (theForm.pmarq006[i].checked==true) {
   req_type=theForm.pmarq006[i].value;
  }
  ResetDisplayHiddenFields(); 
  if(view_type == "0" && req_type == "1"){  // Clerical WL
    document.getElementById('RecurringCare').style.display="none";
  }
  if(view_type == "1" && req_type == "1"){  // Clinician WL
    document.getElementById('PrincipalProcedure').style.display="none";
    document.getElementById('AdditionalProcedures').style.display="none";
    document.getElementById('RecurringCare').style.display="none";
  }
  if(view_type == "0" && req_type == "2"){  // Clerical Non WL - Surgical
    document.getElementById('PreAnaestheticReview').style.display="none";
    document.getElementById('ClinicalTriage').style.display="none";
    document.getElementById('ListingStatus').style.display="none";
    document.getElementById('ShortNotice').style.display="none";
    document.getElementById('RecurringCare').style.display="none";
  }
  if(view_type == "1" && req_type == "2"){  // Clinician Non WL - Surgical
    document.getElementById('PrincipalProcedure').style.display="none";
    document.getElementById('AdditionalProcedures').style.display="none";
    document.getElementById('ListingStatus').style.display="none";
    document.getElementById('IntendedStay').style.display="none";
    document.getElementById('ShortNotice').style.display="none";
    document.getElementById('PlannedLOS').style.display="none";
    document.getElementById('NonWAHospContact').style.display="none";
    document.getElementById('PreAnaestheticReview').style.display="none";
    document.getElementById('ClinicalTriage').style.display="none";
    document.getElementById('RecurringCare').style.display="none";
  }
  if(view_type == "0" && req_type == "3"){  // Clerical Non WL - Medical
    document.getElementById('PrincipalProcedure').style.display="none";
    document.getElementById('AdditionalProcedures').style.display="none";
    document.getElementById('PreAnaestheticReview').style.display="none";
    document.getElementById('ClinicalTriage').style.display="none";
    document.getElementById('EstimatedOpDuration').style.display="none";
    document.getElementById('AnaestheticType').style.display="none";
    document.getElementById('ShortNotice').style.display="none";
    document.getElementById('ListingStatus').style.display="none";
    document.getElementById('TheatreLocation').style.display="none";
    document.getElementById('ProcedureDate').style.display="none";
    document.getElementById('ImplantsRequired').style.display="none";
    document.getElementById('ImplantDescription').style.display="none";
    document.getElementById('ImplantsOrdered').style.display="none";
    document.getElementById('BoneGraft').style.display="none";
    document.getElementById('ExFixRemoval').style.display="none";
    document.getElementById('TheatreRequest').style.display="none";
  }
  if(view_type  && req_type == "3"){  // Clinician Non WL - Medical
    document.getElementById('PrincipalProcedure').style.display="none";
    document.getElementById('AdditionalProcedures').style.display="none";
    document.getElementById('PreAnaestheticReview').style.display="none";
    document.getElementById('ClinicalTriage').style.display="none";
    document.getElementById('EstimatedOpDuration').style.display="none";
    document.getElementById('AnaestheticType').style.display="none";
    document.getElementById('ShortNotice').style.display="none";
    document.getElementById('ListingStatus').style.display="none";
    document.getElementById('IntendedStay').style.display="none";
    document.getElementById('PlannedLOS').style.display="none";
    document.getElementById('NonWAHospContact').style.display="none";
    document.getElementById('TheatreLocation').style.display="none";
    document.getElementById('ProcedureDate').style.display="none";
    document.getElementById('ImplantsRequired').style.display="none";
    document.getElementById('ImplantDescription').style.display="none";
    document.getElementById('ImplantsOrdered').style.display="none";
    document.getElementById('BoneGraft').style.display="none";
    document.getElementById('ExFixRemoval').style.display="none";
    document.getElementById('TheatreRequest').style.display="none";
  }
  SetMandatoryFields(theForm);
}
function ResetDisplayHiddenFields() {
  document.getElementById('PrincipalProcedure').style.display="";
  document.getElementById('AdditionalProcedures').style.display="";
  document.getElementById('AnaestheticType').style.display="";
  document.getElementById('EstimatedOpDuration').style.display="";
  document.getElementById('ClinicalTriage').style.display="";
  document.getElementById('PreAnaestheticReview').style.display="";
  document.getElementById('ListingStatus').style.display="";
  document.getElementById('IntendedStay').style.display="";
  document.getElementById('ShortNotice').style.display="";
  document.getElementById('PlannedLOS').style.display="";
  document.getElementById('NonWAHospContact').style.display="";
  document.getElementById('TheatreLocation').style.display="";
  document.getElementById('ProcedureDate').style.display="";
  document.getElementById('ImplantsRequired').style.display="";
  document.getElementById('ImplantDescription').style.display="";
  document.getElementById('ImplantsOrdered').style.display="";
  document.getElementById('BoneGraft').style.display="";
  document.getElementById('ExFixRemoval').style.display="";
  document.getElementById('TheatreRequest').style.display="";
  document.getElementById('RecurringCare').style.display="";
}
function ClearHiddenFieldOnPost(theForm) {
  var req_type="";
  for(var i = 0; i < theForm.pmarq006.length; i++)
  if (theForm.pmarq006[i].checked==true) {
   req_type=theForm.pmarq006[i].value;
  }
  var ind  = theForm.pmarq041.value.substring(4,5);
  if(ind != "1") {
    theForm.pmarq063.value="";              // Transfer Source
  }
  if(req_type == "1"){  // WL
      theForm.pmarq060.value="";              // RecurringCare
      return;
  }

  if(req_type == "2"){  // Non WL - Surgical
    theForm.pmarq030.value=""               // Pre-Anaesthetic Review
    theForm.pmarq031.value=""               // ClinicalTriage 
    theForm.pmarq045.value=""               // ListingStatus
    theForm.pmarq047.value=""               // ShortNotice
    theForm.pmarq060.value="";              // RecurringCare
    return;
  }

  if(req_type == "3"){  //  Non WL - Medical
    theForm.pmarq012.value=""               // PrincipalProcedure
    theForm.pmarq014.value=""               // AdditionalProcedures
    theForm.pmarq015.value=""               // AdditionalProcedures
    theForm.pmarq030.value=""               // Pre-Anaesthetic Review
    theForm.pmarq031.value=""               // ClinicalTriage 
    theForm.pmarq029.value=""               // EstimatedOpDuration
    theForm.pmarq028.value=""               // AnaestheticType
    theForm.pmarq045.value=""               // ListingStatus
    theForm.pmarq047.value=""               // ShortNotice
    theForm.pmarq051.value=""               // TheatreLocation
    theForm.pmarq050.value=""               // ProcedureDateon
    theForm.pmarq052.value=""               // ImplantsRequired
    theForm.pmarq053.value=""               // ImplantDescription
    theForm.pmarq054.value=""               // ImplantsOrdered
    theForm.pmarq055.value=""               // BoneGraft
    theForm.pmarq056.value=""               // ExFixRemoval
    theForm.pmarq059.value=""               // TheatreRequest
    return;
  }
}
function CheckMandatoryComboOnPost(theForm) {
  var req_type="";
  for(var i = 0; i < theForm.pmarq006.length; i++)
  if (theForm.pmarq006[i].checked==true) {
   req_type=theForm.pmarq006[i].value;
  }
  if(req_type=="") {                      // Mandatory request type 
   alert("Request for is a required field.\nPlease enter it now.");
   return false;
  }
  if(req_type !="1" && req_type !="2") {  // WL and Non WL - Surgical
    return true;
  }
  var comorbidconditions=false;
  for (var e = 0; e < theForm.elements.length; e++) { // Co Morbid Conditions
    var el=theForm.elements[e] ;
    if(el.name.match(/pmamcode/) && el.checked==true) {
      if(el.value.substr(0,2)=="yk" || el.value.substr(0,2)=="Cyk") {
        comorbidconditions=true;
        break;
      }
    }
  }
  if(!comorbidconditions) {
   alert("Co-Morbidity Condition is a required field.\nPlease enter it now.");
   return false;
  }
  if(theForm.pmarq035.value=="1") {                   // Anti Coagulats = Yes
    var medicationadvice=false;
    for (var e = 0; e < theForm.elements.length; e++) { // Medication Advice
      var el=theForm.elements[e] ;
      if(el.name.match(/pmamcode/) && el.checked==true) {
        if(el.value.substr(0,2)=="yn" || el.value.substr(0,2)=="Cyn") {
          medicationadvice=true;
          break;
        }
      }
    }
    if(!medicationadvice) {
     alert("Medication Advice is a required field.\nPlease enter it now.");
     return false;
    }

  }
  if(theForm.pmarq037.value=="1") {                   // Anti Platelet = Yes
    var antiplatelet=false;
    for (var e = 0; e < theForm.elements.length; e++) { // Anti Platelet detail
      var el=theForm.elements[e] ;
      if(el.name.match(/pmamcode/) && el.checked==true) {
        if(el.value.substr(0,2)=="yo" || el.value.substr(0,2)=="Cyo") {
          antiplatelet=true;
          break;
        }
      }
    }
    if(!antiplatelet) {
     alert("Anti Platelet detail is a required field.\nPlease enter it now.");
     return false;
    }
  }
  return true;
}
function SetMandatoryFields(theForm) {
  var view_type=theForm.clinical.value;
  var req_type="";
  for(var i = 0; i < theForm.pmarq006.length; i++)
  if (theForm.pmarq006[i].checked==true) {
   req_type=theForm.pmarq006[i].value;
  }
//

  if(req_type == "1"){  // WL
    theForm.pmarq017.className="Mandatory"; //Consent Obtained
    theForm.pmarq019.className="Mandatory"; //Proc Can be performed by
    theForm.pmarq021.className="Mandatory"; //Suitable for another hosp 
    theForm.pmarq025.className="Mandatory"; //Adm night prior
    theForm.pmarq050.className="";          //Procedure date
    theForm.pmarq028.className="Mandatory"; //Anaesthetic Type
    theForm.pmarq029.className="Mandatory"; //Estimated Op Duration
    theForm.pmarq035.className="Mandatory"; //Anti Coagulants
    theForm.pmarq037.className="Mandatory"; //Anti Platelet 
    theForm.pmarq054.className="";             // Implants ordered
    theForm.pmarq055.className="";             // Bone graft
    theForm.pmarq056.className="";             // Ex Fix removal
    if(view_type == "1") { // Clinician
      theForm.pmarq045.className="Mandatory";//Listing Status
      theForm.pmarq047.className="Mandatory";//Short Notice
      MandatoryProcFields(theForm);       // Mandatory procedure fields
    }
    document.getElementById('CoMorbidityConditions').className="CheckBoxComboMandatory";
    MandatoryImplantDesc(theForm);        //Implant Descrption
  }

  if(req_type == "2"){  // Non WL - Surgical
    theForm.pmarq017.className="Mandatory"; //Consent Obtained
    theForm.pmarq019.className="Mandatory"; //Proc Can be performed by
    theForm.pmarq021.className="Mandatory"; //Suitable for another hosp 
    theForm.pmarq025.className="";          //Adm night prior
    theForm.pmarq045.className="";          //Listing Status
    theForm.pmarq050.className="";          //Procedure date
    theForm.pmarq047.className="";          //Short Notice
    theForm.pmarq028.className="Mandatory"; //Anaesthetic Type
    theForm.pmarq029.className="Mandatory"; //Estimated Op Duration
    theForm.pmarq035.className="Mandatory"; //Anti Coagulants
    theForm.pmarq037.className="Mandatory"; //Anti Platelet 
    document.getElementById('CoMorbidityConditions').className="CheckBoxComboMandatory";
    MandatoryImplantDesc(theForm);       //Implant Descrption
    theForm.pmarq054.className="";             // Implants ordered
    theForm.pmarq055.className="";             // Bone graft
    theForm.pmarq056.className="";             // Ex Fix removal
    if(view_type == "0") { // Clerical
      MandatoryProcFields(theForm);       // Mandatory procedure fields
    }
  }

  if(req_type == "3"){  //  Non WL - Medical
    theForm.pmarq017.className="";          //Consent Obtained
    theForm.pmarq019.className="";          //Proc Can be performed by
    theForm.pmarq021.className="";          //Suitable for another hosp 
    theForm.pmarq025.className="";          //Adm night prior
    theForm.pmarq037.className="";          //Anti Platelet 
    theForm.pmarq045.className="";          //Listing Status
    theForm.pmarq050.className="";          //Procedure date
    theForm.pmarq047.className="";          //Short Notice
    theForm.pmarq053.className="";          //Implant Description
    theForm.pmarq028.className="";          //Anaesthetic Type
    theForm.pmarq029.className="";          //Estimated Op Duration
    theForm.pmarq035.className="";          //Anti Coagulants
    document.getElementById('CoMorbidityConditions').className="CheckBoxCombo";
    theForm.pmarq054.className="";             // Implants ordered
    theForm.pmarq055.className="";             // Bone graft
    theForm.pmarq056.className="";             // Ex Fix removal
  }
  MandatoryConsent(theForm);                //Consent 
  MandatoryPrefAdmDate(theForm);            // Pref Adm Date
  MandatoryClinicalDetails(theForm);        //ClinicalDetails
  MandatoryMedicationAdvice(theForm);       //MedicationAdvice
  MandatoryAntiPlatelet(theForm);           //Antiplatelet detail
  if(theForm.adultflg.value=="1") {         //Age > child cut off
    theForm.pmarq032.className="Mandatory"; // Height
    theForm.pmarq033.className="Mandatory"; // Weight
  }
  CalculateBMI(theForm.pmarq033,theForm.pmarq032,theForm.pmarq034,theForm.adultflg);
}
function MandatoryConsent(theForm) {
  if(theForm.pmarq017.value=="0") {
    theForm.pmarq018.className="Mandatory";
  } else {
    theForm.pmarq018.className="";
  }
}
function MandatoryPrefAdmDate(theForm) {
//  var req_type="";
//  for(var i = 0; i < theForm.pmarq006.length; i++)
//  if (theForm.pmarq006[i].checked==true) {
//   req_type=theForm.pmarq006[i].value;
//  }
//
//  if(theForm.pmarq010.value.substr(14,1)=="1" ||
//     theForm.pmarq010.value.substr(3,1)=="U" ||
//     req_type=="3") {
//    theForm.pmarq023.className="Mandatory Date";
//  } else {
//    theForm.pmarq023.className="Date";
//  }
}
function MandatoryClinicalDetails(theForm) {
  if(theForm.pmarq026.value=="1") {
    theForm.pmatc003.className="Mandatory";
  } else {
    theForm.pmatc003.className="";
  }
}
function MandatoryImplantDesc(theForm) {
  if(theForm.pmarq052.value=="1") {
    theForm.pmarq053.className="Mandatory";
  } else {
    theForm.pmarq053.className="";
  }
}
function MandatoryMedicationAdvice(theForm){
 if(theForm.pmarq035.value=="1") {
   document.getElementById('MedicationAdvice').className="CheckBoxComboMandatory";
   theForm.pmarq036.className="Mandatory";
  } else {
   document.getElementById('MedicationAdvice').className="CheckBoxCombo";
   theForm.pmarq036.className="";
  }
}
function MandatoryAntiPlatelet(theForm){
 if(theForm.pmarq037.value=="1") {
   document.getElementById('AntiPlatelet').className="CheckBoxComboMandatory";
  } else {
   document.getElementById('AntiPlatelet').className="CheckBoxCombo";
  }
}
function MandatoryProcFields(theForm) {
  if(!isWhitespace(theForm.pmarq012.value)) {  // Procedure mandatory fields
    theForm.pmarq054.className="Mandatory";    // Implants ordered
    theForm.pmarq055.className="Mandatory";    // Bone graft
    theForm.pmarq056.className="Mandatory";    // Ex Fix removal
  } else { 
    theForm.pmarq054.className="";             // Implants ordered
    theForm.pmarq055.className="";             // Bone graft
    theForm.pmarq056.className="";             // Ex Fix removal
  }
}
function ShowButtons(theForm) {
  if (theForm.pmarq057.value=="1" || 
      theForm.pmarq057.value==" " ||
      theForm.pmarq057.value=="7" ) {   // Draft, Approval Required
    document.getElementById('DisplayDraftButton').style.display="";
    document.getElementById('pat15draft').value="Update";
    document.getElementById('DisplaySubmitButton').style.display="";
    if(theForm.wbseuid.value == theForm.createdby.value) {
      document.getElementById('DisplayDeleteButton').style.display="";
    }
  } 
  else if (theForm.pmarq057.value=="2") {     // Submitted
    document.getElementById('DisplaySubmitButton').style.display="";
    document.getElementById('pat15sub').value="Update";
    document.getElementById('DisplayRemoveButton').style.display="";
    document.getElementById('DisplayReturnButton').style.display="";
    if(theForm.d_pstat.value!="4") {
      document.getElementById('DisplayProcessButton').style.display="";
    }
  } 
  else if (theForm.pmarq057.value=="3") {     // Returned to Clinician
    document.getElementById('DisplayDraftButton').style.display="";
    document.getElementById('DisplaySubmitButton').style.display="";
    document.getElementById('DisplayReturnButton').style.display="";
  } 
  else if (theForm.pmarq057.value=="5") {     // Removed
    document.getElementById('DisplayRemoveButton').style.display="";
  } 
  else if (theForm.pmarq057.value=="6") {     // Review
    document.getElementById('DisplayRemoveButton').style.display="";
    document.getElementById('DisplayReturnButton').style.display="";
    document.getElementById('DisplaySubmitButton').style.display="";
  }
//
  if(theForm.d_pmarq006.value=="1") { // Elective WL
    document.getElementById('DisplayReviewButtons').style.display="";
  }
  if(theForm.d_pstat.value=="4") { // EBS Unknows U/R
    document.getElementById('DisplayAllocateUR').style.display="";
  }

  // Show 'Authorisation Approval' button if 'Medical Authorisation Status'
  // is not 'Not Required'.
  if (theForm.pmarq058.value != "0") {
    document.getElementById('spAuthApprovBtn').style.display="";
  }
}
function AllocateUR01() {
  PatientLinkTo("patweb98.pbl",2,7,0,0,0);
}

function ProcessRequest01() {
  if(document.UpdateForm.d_pmarq006.value=="1") { // Elective WL
    PatientLinkTo("watweb01.pbl",2,2,0,0,0);
  } else {
    PatientLinkTo("patweb89.pbl",3,1,0,0,0);      // Non WL surgical and medical
  }
}
function StatusEdits(theForm) {
  if (theForm.pmarq057.value=="1") {        // Draft

  }
  else if (theForm.pmarq057.value=="2") {   // Submitted
    theForm.pmarq004.className="Readonly";       // Request Date
    theForm.pmarq004.readOnly=true;
    theForm.pmarq005.className="Readonly";       // Request Time
    theForm.pmarq005.readOnly=false;
  }
  else if (theForm.pmarq057.value=="7") {   // Approval Required

  }
  else {  // Set fields to readonly due to status
    theForm.pmarq004.className="Readonly";        // Request Date
    theForm.pmarq004.readOnly=true;
    theForm.pmarq005.className="Readonly";        // Request Time
    theForm.pmarq005.readOnly=false;
    theForm.pmarq006[0].disabled=true;            // Request for
    theForm.pmarq006[1].disabled=true;
    theForm.pmarq006[2].disabled=true;
    theForm.pmarq007.className="Readonly";        // Responsible Clinician
    theForm.pmarq007.readOnly=true;
    theForm.pmarq008.disabled=true;               // Unit
    theForm.pmarq009.disabled=true;               // Team
    theForm.pmarq010.disabled=true;               // Priority
    theForm.pmarq011.disabled=true;               // Diagnosis
    theForm.pmarq012.readOnly=true;               // Principal Procedure
    theForm.pmarq012.className="Readonly";        // Principal Procedure
    theForm.pmarq012.readOnly=true;               // Principal Procedure
    theForm.pmarq013.className="Readonly";        // Procedure Description
    theForm.pmarq013.readOnly=true;               // Procedure Description
    theForm.pmarq014.className="Readonly";        // Additional Proc 1     
    theForm.pmarq014.readOnly=true;               // Additional Proc 1
    theForm.pmarq015.className="Readonly";        // Additional Proc 2     
    theForm.pmarq015.readOnly=true;               // Additional Proc 2
    theForm.pmarq016.disabled=true;               // Side of surgery
    theForm.pmarq017.disabled=true;               // Consent obtained
    theForm.pmarq018.disabled=true;               // Reason No Consent
    theForm.pmarq019.disabled=true;               // Proc Can Be Perf. by
    theForm.pmarq021.disabled=true;               // Suitable Another Hosp
    if(theForm.pmarq022!=undefined) {
      if(theForm.pmarq022.type=="select-one") {
        theForm.pmarq022.disabled=true;           // Preferred Hospital
      }
    }
    theForm.pmarq023.className="Readonly";        // Preferred Adm Date    
    theForm.pmarq023.readOnly=true;               // Preferred Adm Date
    if (theForm.pmarq058 != undefined) {
      theForm.pmarq058.disabled=true;             // Medical Auth. Approved
    }
    theForm.pmarq024.disabled=true;               // Type of Bed Required
    theForm.pmarq025.disabled=true;               // Adm. Night Prior
    theForm.pmarq026.disabled=true;               // Critical Care Bed Req
    theForm.pmatc003.readOnly=true;               // Clinical Details/Other Conditions
    theForm.pmarq028.disabled=true;               // Anaesthetic type
    theForm.pmarq029.className="Readonly";        // Estimated Op Duration
    theForm.pmarq029.readOnly=true;               // Estimated Op Duration
    theForm.pmarq030.disabled=true;               // Pre-Anaesthetic Review
    theForm.pmarq031.disabled=true;               // Clinical Triage
    theForm.pmarq039.disabled=true;               // Interpreter Required
    theForm.pmarq027.disabled=true;               // Preferred Language
    theForm.pmarq040.disabled=true;               // Claim Type
    theForm.pmarq041.disabled=true;               // Source Of Referral
    theForm.pmarq042.className="Readonly";        // Referring Clinician
    theForm.pmarq042.readOnly=true;               // Referring Clinician
    theForm.pmarq045.disabled=true;               // Listing Status
    theForm.pmarq046.disabled=true;               // Intended Stay
    theForm.pmarq047.disabled=true;               // Short Notice 
    theForm.pmarq048.className="Readonly";        // Planned LOS
    theForm.pmarq048.readOnly=true;               // Planned LOS
    theForm.pmarq049.disabled=true;               // No WA Hospital Contact
    theForm.pmarq050.className="Readonly";        // Procedure Date
    theForm.pmarq050.readOnly=true;               // Procedure Date
    theForm.pmarq051.disabled=true;               // Theatre Location
    theForm.pmarq052.disabled=true;               // Implants Required
    theForm.pmarq053.className="Readonly";        // Implant Description
    theForm.pmarq053.readOnly=true;               // Implant Description
    theForm.pmarq054.disabled=true;               // Implants Ordered
    theForm.pmarq055.disabled=true;               // Bone Graft
    theForm.pmarq056.disabled=true;               // Ex Fix Removal
    theForm.pmarq059.disabled=true;               // Theatre Request
    theForm.pmarq063.className="Readonly";        // Transfer Source
    theForm.pmarq063.readOnly=true;               // Transfer Source
    for (var e = 0; e < theForm.elements.length; e++) { // Tertiary Care Reason
      var el=theForm.elements[e] ;
      if(el.name.match(/pmamcode/) && el.value.substr(0,2)=="WH") {
         el.disabled=true;
      }
    }
    for (var e = 0; e < theForm.elements.length; e++) { // Patient Needs
      var el=theForm.elements[e] ;
      if(el.name.match(/pmamcode/) && el.value.substr(0,2)=="yq") {
         el.disabled=true;
      }
    }
  }

  // check Medical Authorisation Status
  if (theForm.pmarq058.value=="2") {   // 'Approval Required'?
    theForm.pmarq058.disabled = true;  // disable dropdown list
  } 
}
function SearchPrincipalProc01() {
  if(UpdateForm.pmarq012.readOnly==true) {
    alert(UpdateForm.pmarq007.title + " is a readonly field");
    return;
  }
  WaitProKeywordSearch(UpdateForm.pmarq012,UpdateForm.d_pmarq012,UpdateForm.dummy,UpdateForm.dummy,UpdateForm.dummy);
}
function ClearPrincipalProc01() {
  if(UpdateForm.pmarq012.readOnly==true) {
    alert(UpdateForm.pmarq012.title + " is a readonly field");
    return;
  }
  clrFields(UpdateForm.pmarq012,UpdateForm.d_pmarq012);
  MandatoryProcFields(UpdateForm);
}
function ClearTransferSource01() {
  if(UpdateForm.pmarq063.readOnly==true) {
    alert(UpdateForm.pmarq063.title + " is a readonly field");
    return;
  }
  clrFields(UpdateForm.pmarq063,UpdateForm.d_pmarq063);
}

function SearchAddProc1() {
  if(UpdateForm.pmarq014.readOnly==true) {
    alert(UpdateForm.pmarq014.title + " is a readonly field");
    return;
  }
  WaitProKeywordSearch(UpdateForm.pmarq014,UpdateForm.d_pmarq014,UpdateForm.dummy,UpdateForm.dummy,UpdateForm.dummy)
}
function ClearAddProc1() {
  if(UpdateForm.pmarq014.readOnly==true) {
    alert(UpdateForm.pmarq014.title + " is a readonly field");
    return;
  }
  clrFields(UpdateForm.pmarq014,UpdateForm.d_pmarq014);
}
function SearchAddProc2() {
  if(UpdateForm.pmarq015.readOnly==true) {
    alert(UpdateForm.pmarq015.title + " is a readonly field");
    return;
  }
  WaitProKeywordSearch(UpdateForm.pmarq015,UpdateForm.d_pmarq015,UpdateForm.dummy,UpdateForm.dummy,UpdateForm.dummy);
}

function ClearAddProc2() {
  if(UpdateForm.pmarq015.readOnly==true) {
    alert(UpdateForm.pmarq015.title + " is a readonly field");
    return;
  }
  clrFields(UpdateForm.pmarq015,UpdateForm.d_pmarq015);
}
function SearchClinicalCookie() {
  if(isWhitespace(SelectCode.clinical.value)) {  // Not called from menu
    if(GetCookieData("EBSClinicalView") != "unknown") { // Called from search
       ClinicalView=GetCookieData("EBSClinicalView");
       document.SelectCode.clinical.value=ClinicalView;
       document.PatientLinks.clinical.value=ClinicalView;
    }
  }
}
function UpdRequest02(req,ur,vis) {
  linkurl="patweb15.pbl?reportno=01&template=003" +
          "&pmarq001=" + req.replace(/ /g,"+") +
          "&urnumber=" + ur.replace(/ /g,"+") +
          "&admissno=" + vis.replace(/ /g,"+");
  if(GetCookieData("EBSClinicalView") != "unknown") {
     ClinicalView=GetCookieData("EBSClinicalView");
     linkurl+="&clinical=" + ClinicalView
  }
  location.href=linkurl;
}
function MandPreferredHospital03(theForm) {
  if(theForm.pmarv010.value=="1") {
     theForm.pmarv011.className="Mandatory";
  } else if(theForm.pmarv010.value=="0") {
     theForm.pmarv011.selectedIndex=0;
     theForm.pmarv011.className="";
  } else {
     theForm.pmarv011.className="";
  }
}
function UpdateReview03(req,type,count,ur) {
  if(type=="001") {
    template="003";
  } else if(type=="002"){
    template="004";
  } else{
    alert("Invalid review type");
    return;
  }
  linkurl="patweb15.pbl?reportno=03&template=" + template +
          "&pmarv001=" + req.replace(/ /g,"+") +
          "&pmarv002=" + type.replace(/ /g,"+") +
          "&pmarv003=" + count.replace(/ /g,"+") +
          "&urnumber=" + ur.replace(/ /g,"+");
  Left=(document.body.clientWidth-850)/2
  DFrameLink(linkurl,50,Left,850,300)

}
function ShowDeleteButton03(theForm) {
 if(theForm.wbseuid.value == theForm.createdby.value) {
   document.getElementById('DisplayDeleteButton').style.display="";
 }
}
function DisplayTrnSrc01(theForm) {
  var ind  = theForm.pmarq041.value.substring(4,5);
  if(ind == "1") {
    document.getElementById('ShowTransferSource').style.display="";
    theForm.pmarq063.className="Mandatory";
  } else {
    document.getElementById('ShowTransferSource').style.display="none";
    theForm.pmarq063.className="";
  }
}
function defaultAddFields01(theForm) {
  var req_type="";
  for(var i = 0; i < theForm.pmarq006.length; i++)
  if (theForm.pmarq006[i].checked==true) {
   req_type=theForm.pmarq006[i].value;
  }
  if(req_type == "1"){  // Clinician WL
    theForm.pmarq059.selectedIndex=2;
  }
  if(req_type == "2"){  // Clerical Non WL - Surgical
    theForm.pmarq059.selectedIndex=2;
  }
  if(req_type == "3"){  // Clerical Non WL - Medical
  }

 for (var i =0 ; i < theForm.pmarq039.length; i++) {
  if (theForm.pmarq039.options[i].value==theForm.d_pmpxintr.value) {
      theForm.pmarq039.selectedIndex=i } };
 ShowLanguage01(theForm.pmarq039);
 for (var i =0 ; i < theForm.pmarq045.length; i++) {
  if (theForm.pmarq045.options[i].value.substr(3,1)=="R") {
      theForm.pmarq045.selectedIndex=i } };

}
function ShowLanguage01(showoption) {
  if (showoption.value=="1") {
     document.getElementById('PreferredLanguageField').innerHTML=
     document.getElementById('ShowPreferredLanguageField').innerHTML;
  } else {
     document.getElementById('PreferredLanguageField').innerHTML=
     document.getElementById('BlankPreferredLanguageField').innerHTML;
  }
}
function CheckEditsOnPost(theForm) {
  if(isWhitespace(theForm.pmarq004.value)) {
    return true;
  }
  var req_type="";
  for(var i = 0; i < theForm.pmarq006.length; i++)
  if (theForm.pmarq006[i].checked==true) {
   req_type=theForm.pmarq006[i].value;
  }
  if(!isWhitespace(theForm.pmarq023.value)) {
    if(SetDateYYYYMMDD(theForm.pmarq023.value) < 
       SetDateYYYYMMDD(theForm.pmarq004.value)) {
      alert(theForm.pmarq023.title  + " can't be before the " + 
            theForm.pmarq004.title);
      return false ;
    }
  }
  if(req_type != "3"){ 
    if(!isWhitespace(theForm.pmarq050.value)) {
      if(SetDateYYYYMMDD(theForm.pmarq050.value) <
         SetDateYYYYMMDD(theForm.pmarq004.value)) {
        alert(theForm.pmarq050.title  + " can't be before the " +
              theForm.pmarq004.title);
        return false ;
      }
    }
  }
  return true;
}
function AnaeStatusEdit03(theForm) {
  if(theForm.d_pmarq057.value=="1" || 
     theForm.d_pmarq057.value=="2" || 
     theForm.d_pmarq057.value=="3" || 
     theForm.d_pmarq057.value=="6" ){
     return;
  }
  DisableForm(theForm); 
  theForm.pmarv004.className="Readonly";
  theForm.pmarv005.className="Readonly";
  document.getElementById('canbut').disabled=false;
}
function ClinRevStatusEdit03(theForm) {
  if(theForm.d_pmarq057.value=="1" || 
     theForm.d_pmarq057.value=="2" || 
     theForm.d_pmarq057.value=="3" || 
     theForm.d_pmarq057.value=="6" ){
     return;
  }
  DisableForm(theForm); 
  theForm.pmarv004.className="Readonly";
  theForm.pmarv005.className="Readonly";
  document.getElementById('canbut').disabled=false;
}
function UpdateClinicalRev03() {
  if(!isWhitespace(UpdateForm.pmarv004.value) &&
     !isWhitespace(UpdateForm.pmarv013.value)) {
    if(SetDateYYYYMMDD(UpdateForm.pmarv013.value) <
       SetDateYYYYMMDD(UpdateForm.pmarv004.value)) {
      alert(UpdateForm.pmarv013.title  + " can't be before the " +
            UpdateForm.pmarv004.title);
      return false ;
    }
  }
  setFormactn('U');
}
function AddClinicalRev03() {
  if(!isWhitespace(AddForm.pmarv004.value) &&
     !isWhitespace(AddForm.pmarv013.value)) {
    if(SetDateYYYYMMDD(AddForm.pmarv013.value) <
       SetDateYYYYMMDD(AddForm.pmarv004.value)) {
      alert(AddForm.pmarv013.title  + " can't be before the " +
            AddForm.pmarv004.title);
      return false ;
    }
  }
  SubmitHiddenNew(AddForm);
}
function LoadHead01() {
  CheckCount=0;
  IntervalID=setInterval('LoadHead01A();',500);
}
function LoadHead01A() {
  CheckCount++;
  if(CheckCount>40) {
    clearInterval(IntervalID);
  }
  if (typeof LoadHead == 'function') {
    LoadHead();
    clearInterval(IntervalID);
  }
}

var REQ_TYPE_EWL = 1;
var REQ_TYPE_NWL_S = 2;
var REQ_TYPE_NWL_M = 3;
var AUTH_STAT_NOT_REQ = 0;     // Not Required
var AUTH_STAT_APPROV_REQ = 2;  // Approval Required
var MinAgeLimit = null;
var MaxAgeLimit = null;
function GetHospAgeLimits(HospSel) {
  if (isWhitespace(HospSel.value)) {
    MinAgeLimit = null;
    MaxAgeLimit = null;
    return false;
  }

  var serverURL   = "../cgi-bin/patweb15.pbl?reportno=4&remoteno=3" +
                    "&hospcode=" + HospSel.value.replace(/ /g,"+");
  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    MinAgeLimit = parseInt(ReturnValue[0]);
    MaxAgeLimit = parseInt(ReturnValue[1]);
  }
  return true;
}
function ValidateAgeLimits(Age, ReqTypeFldName, MedAuthStatSel, ApprReqReaSel) {
  var patAge = parseInt(Age);

  if (isNaN(patAge) || isNaN(MinAgeLimit) || isNaN(MaxAgeLimit) ||
      MinAgeLimit==null || MaxAgeLimit==null) {
    MedAuthStatSel.disabled = false;
    MedAuthStatSel.selectedIndex = 0;  // default blank selection
    ValidateAuthStat(MedAuthStatSel,ApprReqReaSel);
    return false;
  }

  var reqTyp = GetRadioSelectValue(ReqTypeFldName);

  var authStatVal = AUTH_STAT_NOT_REQ;  // Not Required

  if (reqTyp == REQ_TYPE_EWL || reqTyp == REQ_TYPE_NWL_S) {
    if (patAge < MinAgeLimit || patAge > MaxAgeLimit) {
      authStatVal = AUTH_STAT_APPROV_REQ;  // Approval Required
    }
  }

  for (i=0; i < MedAuthStatSel.length; i++) {
    if (MedAuthStatSel.options[i].value == authStatVal) {
      MedAuthStatSel.selectedIndex = i;
    }
  }

  if (authStatVal == AUTH_STAT_APPROV_REQ) {
    MedAuthStatSel.disabled = true;
  }
  else {
    MedAuthStatSel.disabled = false;
  }

  ValidateAuthStat(MedAuthStatSel,ApprReqReaSel);
  return true;
}
function ValidateAgeLimitsWahLoad(Age,
                                  ReqTypeFldName,
                                  MedAuthStatSel,
                                  ApprReqReaSel,
                                  valpmarstat,
                                  valpmaraprr) {
  var patAge = parseInt(Age);
  MedAuthStatSel.disabled = false;
  ApprReqReaSel.disabled = false;

  if (isNaN(patAge) || isNaN(MinAgeLimit) || isNaN(MaxAgeLimit) ||
      MinAgeLimit==null || MaxAgeLimit==null) {
    MedAuthStatSel.disabled = false;
    MedAuthStatSel.selectedIndex = 0;  // default blank selection
    ValidateAuthStat(MedAuthStatSel,ApprReqReaSel);
    return false;
  }

  var reqTyp = GetRadioSelectValue(ReqTypeFldName);
  var authStatVal = MedAuthStatSel.value;

  if (valpmarstat == "7") {
    authStatVal = AUTH_STAT_APPROV_REQ;
    MedAuthStatSel.disabled = true;
  }

  if (reqTyp == REQ_TYPE_EWL || reqTyp == REQ_TYPE_NWL_S) {
    if (patAge < MinAgeLimit || patAge > MaxAgeLimit) {
      authStatVal = AUTH_STAT_APPROV_REQ;         // Approval Required
      MedAuthStatSel.disabled = true;
      ApprReqReaSel.className = "Mandatory";
    }
  }

  for (i=0; i < MedAuthStatSel.length; i++) {
    if (MedAuthStatSel.options[i].value == authStatVal) {
      MedAuthStatSel.selectedIndex = i;
    }
  }

  if (!isWhitespace(valpmaraprr)) {
    for (i=0; i < ApprReqReaSel.length; i++) {
      ApprReqRea = ApprReqReaSel.options[i].value.substr(0,3);
      if (ApprReqRea == valpmaraprr) {
        ApprReqReaSel.selectedIndex=i;         
      }
    }
  }
  else {
    ApprReqReaSel.selectedIndex=0;
  }

  if (reqTyp == REQ_TYPE_EWL || reqTyp == REQ_TYPE_NWL_S) {
    if (patAge < MinAgeLimit || patAge > MaxAgeLimit) {
      for (i=0; i < ApprReqReaSel.length; i++) {
        if(ApprReqReaSel.options[i].defaultSelected) {
          ApprReqReaSel.selectedIndex=i;          // Default value
          ApprReqReaSel.disabled = true;
        }
      }
    }
    else {
      ApprReqReaSel.className = "";
    }
  }
  else {
    ApprReqReaSel.className = "";
  }

  return true;
}
      
function ValidateAgeLimitsWah(Age,
                              ReqTypeFldName,
                              MedAuthStatSel,
                              ApprReqReaSel) {
  var patAge = parseInt(Age);
  MedAuthStatSel.disabled = false;
  ApprReqReaSel.disabled = false;

  if (isNaN(patAge) || isNaN(MinAgeLimit) || isNaN(MaxAgeLimit) ||
      MinAgeLimit==null || MaxAgeLimit==null) {
    MedAuthStatSel.disabled = false;
    MedAuthStatSel.selectedIndex = 0;  // default blank selection
    ValidateAuthStat(MedAuthStatSel,ApprReqReaSel);
    return false;
  }

  var reqTyp = GetRadioSelectValue(ReqTypeFldName);
  var authStatVal = AUTH_STAT_NOT_REQ;   // Not Required

  if (reqTyp == REQ_TYPE_EWL || reqTyp == REQ_TYPE_NWL_S) {
    if (patAge < MinAgeLimit || patAge > MaxAgeLimit) {
      authStatVal = AUTH_STAT_APPROV_REQ;         // Approval Required
      MedAuthStatSel.disabled = true;
      ApprReqReaSel.className = "Mandatory";
    }
  }

  for (i=0; i < MedAuthStatSel.length; i++) {
    if (MedAuthStatSel.options[i].value == authStatVal) {
      MedAuthStatSel.selectedIndex = i;
    }
  }

  if (reqTyp == REQ_TYPE_EWL || reqTyp == REQ_TYPE_NWL_S) {
    if (patAge < MinAgeLimit || patAge > MaxAgeLimit) {
      for (i=0; i < ApprReqReaSel.length; i++) {
        if(ApprReqReaSel.options[i].defaultSelected) {
          ApprReqReaSel.selectedIndex=i;          // Default value
          ApprReqReaSel.disabled = true;
        }
      }
    }
  }
  else {
    ApprReqReaSel.className = "";
    ApprReqReaSel.selectedIndex = 0;  // default blank selection
  }

  return true;
}

function ValidateAuthStat(MedAuthStatSel,ApprReqReaSel) {
  if (MedAuthStatSel.options[MedAuthStatSel.selectedIndex].value == AUTH_STAT_APPROV_REQ) {
    ApprReqReaSel.className = "Mandatory";
  }
  else {
    ApprReqReaSel.className = "";
    ApprReqReaSel.selectedIndex = 0;  // default blank selection
  }
}
function ValidateMedAuthStatus(MedAuthStatSel, CmntsFld) {
  if (MedAuthStatSel == undefined || CmntsFld == undefined)
    return;

  var val = MedAuthStatSel.options[MedAuthStatSel.selectedIndex].value;

  // Validate if Indicator 1 = D (denied)
  if (val.substr(3,1) == "D" || val.substr(3,1) == "P") {
    CmntsFld.className = "Mandatory";  // make comments field mandatory
  } else {
    CmntsFld.className = "";
  }
}
