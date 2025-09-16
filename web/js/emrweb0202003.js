//jsVersion  : V11.03.06
//======================================================================== 
//  Report 2
//========================================================================
function validateNurse() {
  //C-0825792 Use oprnuraf(emcnurse=0)/pmshcpaf(emcnurse=1) for Triage Nurse?
  var hcpnurse = chkHcpEDNurse();
  if  (hcpnurse==true){ 
     validateCode('18',document.UpdateForm.emvis127,
                       document.UpdateForm.dummy1);
  }
  else {
     validateCode('17',document.UpdateForm.emvis127,
                       document.UpdateForm.dummy1,
                       document.UpdateForm.gnm,
                       SetNurseName);
  }
}
function validateCode(OptionNumber,ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  ReturnCode.value=ReturnCode.value.replace(/\+/g," ")
  for (var i=3; i < validateCode.arguments.length; i++) {
    if (typeof(validateCode.arguments[i]) == 'function') {
      ReturnFunction=validateCode.arguments[i] }
    else {
      validateCode.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=3; i < validateCode.arguments.length; i++) {
       if (typeof(validateCode.arguments[i]) != 'function') {
         j++
         validateCode.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() }
    return true;
    }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    return false;
     }
}
function SetNurseName() {
UpdateForm.dummy1.value=UpdateForm.gnm.value.replace(/\s*$/g,"")+
                              " " +
                            UpdateForm.dummy1.value.replace(/\s*$/g,"")
}

function CheckMan() { }
function unCheck(){ }

function PatientSearch() {
  PatientSearchFrame(UpdateForm.dummyadm,
                     UpdateForm.emvis118,
                     UpdateForm.dummyadm,PatientReturn,UpdateForm.dummsrch);
}
function PatientReturn() {

  detailsArray = [UpdateForm.emvis111,UpdateForm.emvis112,
                  UpdateForm.emexp004,UpdateForm.emexp005] 
  if(isWhitespace(UpdateForm.emvis118.value)){ 
    ToggleDetails(UpdateForm.emvis118,detailsArray);
    return;
  }

  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=34" +
                    "&valdcode=" + UpdateForm.emvis118.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);

  if(returnValue.status==0){
    if(returnValue.return_value==1){
      if(confirm("                WARNING\n"+
                 "  Expected Patient Match found\n\n"+
                 "       Do you want to use the\n"+
                 "       expected patient record?")){

        location.href="emrweb01.pbl?reportno=01&template=009";
        ToggleDetails(UpdateForm.emvis118,detailsArray);
        return;
      }
    }
  }

  validateUrMerge(8,
                  UpdateForm.emvis118,
                  UpdateForm.gname,
                  UpdateForm.selsex,
                  UpdateForm.emexp005,
                  UpdateForm.deceased,
                  UpdateForm.dummy,
                  UpdateForm.dummy,
                  UpdateForm.dummy,
                  UpdateForm.dummy,
                  UpdateForm.dummy,
                  UpdateForm.dummy,
                  UpdateForm.dummy,
                  UpdateForm.dummy,
                  UpdateForm.dummy,
                  UpdateForm.dummy,
                  UpdateForm.dummy,
                  UpdateForm.dummy,
                  UpdateForm.gname,
                  UpdateForm.sname);                                              

  if(UpdateForm.deceased.value=="1"){
     alert("Patient Deceased");
     UpdateForm.emvis111.value="";
     UpdateForm.gname.value="";
     UpdateForm.selsex.value="";
     UpdateForm.emvis118.value="";
     UpdateForm.emexp005.value="";
     ToggleDetails(UpdateForm.emvis118,detailsArray);
     return; 
  }

  checkExpectedPat(UpdateForm.emvis118.value)

  if(!CheckEmrVisit(UpdateForm.emvis118.value)){
    UpdateForm.emvis111.value="";
    UpdateForm.gname.value="";
    UpdateForm.sname.value="";
    UpdateForm.selsex.value="";
    UpdateForm.emvis112.value="";
    UpdateForm.emexp004.selectedIndex=0;
    UpdateForm.emvis118.value="";
    UpdateForm.emvis118.focus();
    UpdateForm.emexp005.value="";
    ToggleDetails(UpdateForm.emvis118,detailsArray);
    return;
  }

  UpdateForm.emvis111.value=UpdateForm.gname.value.replace(/,/g,"");
  UpdateForm.emvis112.value=UpdateForm.sname.value.replace(/,/g,"");

  if(isWhitespace(UpdateForm.emvis111.value)){
    UpdateForm.emvis118.focus();
    UpdateForm.emvis118.value=" ";
  }
  UpdateSex();
  ToggleDetails(UpdateForm.emvis118,detailsArray);
  return true;
}
function UpdateSex(){
 for (var i=0 ; i < document.UpdateForm.emexp004.length; i++) {
   if(trim(UpdateForm.emexp004.options[i].innerHTML)==
      trim(UpdateForm.selsex.value)) {
       document.UpdateForm.emexp004.selectedIndex=i; } }
}
function UpdateSexWA(){
  if (!isWhitespace(document.UpdateForm.emvis118.value)) {
    UpdateForm.d_emexp004.value=UpdateForm.selsex.value;
    }
   else {
    for (var i =0 ; i < document.UpdateForm.emexp004.length; i++) {
      if(UpdateForm.emexp004.options[i].value==
         UpdateForm.selsex.value.substr(0,1)) {
         document.UpdateForm.emexp004.selectedIndex=i 
      } 
    }
  }
}
function CheckCode(code,selectlist)  {
 var found=0
 strvar=code.value+"   "         // format as three characters space filled
 code.value=strvar.substr(0,3)
 for (var i =0 ; i < selectlist.length; i++) {
   if (selectlist.options[i].value.substr(0,3)==code.value) {
     found=1; selectlist.selectedIndex=i } }
 if (found==0) { alert("Invalid Code Entered");code.focus() }
}
function UpdateCode(code,selectlist) {
  code.value=selectlist.value.substr(0,3)
  UpdateForm.comptext.focus()
}
function setRedirect() {
  if (window.name == "content") {
     document.UpdateForm.redirect.value="emrweb02.pbl?reportno=2&template=3"
   }
  else {
     document.UpdateForm.redirect.value="emrweb02.pbl?reportno=2&template=3"
  }
}
function checkUR() {
  if (document.UpdateForm.emvis118.value=="") {
     document.UpdateForm.formactn.value="N1"
  } else {
     document.UpdateForm.formactn.value="N3"
     document.UpdateForm.urnumber.value=document.UpdateForm.emvis118.value
    }
}
function setFormactn() {
  var check=false;
  for(var i = 0; i < UpdateForm.emvis003.length; i++)
     if (UpdateForm.emvis003[i].checked==true) {
      check=true;
     }
  if (isWhitespace(UpdateForm.emvis060.value)) { 
    alert("Presenting Complaint Required") 
    return true;}
  if (check==false) {
    alert("Triage Category has not been selected !");
    return true;}
  if (isWhitespace(UpdateForm.emvis127.value)) {
    alert("Triaged By has not been Entered !");
    return true;}

//  if (validateMandatory(UpdateForm)) {
      if (isWhitespace(document.UpdateForm.emvis006.value)){
        document.UpdateForm.emvis006.value="WR"; }
      checkUR()
      document.UpdateForm.updttype.value="ARRIV"

      UpdateWin=window.open("","HideUpdateWindow",
      "width=500,height=200,top=0,directories=no,location=no" +
      ",scrollbars=no,status=no,toolbar=no,menubar=no,resizeable=no")
      document.UpdateForm.target="HideUpdateWindow";
//    document.UpdateForm.target="PopUpFrame";
      document.UpdateForm.submit()
      return false;
//    }
}
function setFormactnHidden() {
  var check=false;
  for(var i = 0; i < UpdateForm.emvis003.length; i++)
     if (UpdateForm.emvis003[i].checked==true) {
      check=true;
     }
  if (isWhitespace(UpdateForm.emvis060.value)) {
    alert("Presenting Complaint Required")
    return true;}
  if (check==false) {
    alert("Triage Category has not been selected !");
    return true;}
  if (isWhitespace(UpdateForm.emvis127.value)) {
    alert("Triaged By has not been Entered !");
    return true;}

  if (isWhitespace(document.UpdateForm.emvis006.value)){
    document.UpdateForm.emvis006.value="WR"; }
  checkUR()
  document.UpdateForm.updttype.value="ARRIV"
  SubmitHidden(UpdateForm);
  return false;
}
function setFormactnNZ() {
  var check=false;
  for(var i = 0; i < UpdateForm.emvis003.length; i++)
     if (UpdateForm.emvis003[i].checked==true) {
      check=true;
     }
  if (isWhitespace(UpdateForm.emvis060.value)) {
    alert("Presenting Complaint Required")
    return true;}
  if (check==false) {
    alert("Triage Category has not been selected !");
    return true;}
  if (isWhitespace(UpdateForm.emvis127.value)) {
    alert("Triaged By has not been Entered !");
    return true;}

   Indicator=document.UpdateForm.emvis060.value.substr(13,1);
   if (Indicator=="I") { // Injury data
     if (isWhitespace(UpdateForm.emvis021.value)) {
        alert("Place Where Injury Occurred is a required field");
        return true;}
     if (isWhitespace(UpdateForm.injur006.value)) {
        alert("Activity When Injured is a required field");
        return true;}
     if (isWhitespace(UpdateForm.injur004.value)) {
        alert("Injury Cause is a required field");
        return true;}
     if (isWhitespace(UpdateForm.injur005.value)) {
        alert("Human Intent is a required field");
        return true;}
     if (isWhitespace(UpdateForm.injur002.value)) {
        alert("Description of Injury Event is a required field");
        return true;}
   }

//  if (validateMandatory(UpdateForm)) {
      if (isWhitespace(document.UpdateForm.emvis006.value)){
        document.UpdateForm.emvis006.value="WR"; }
      checkUR()
      document.UpdateForm.updttype.value="ARRIV"

      UpdateWin=window.open("","HideUpdateWindow",
      "width=500,height=200,top=0,directories=no,location=no" +
      ",scrollbars=no,status=no,toolbar=no,menubar=no,resizeable=no")
      document.UpdateForm.target="HideUpdateWindow";
//    document.UpdateForm.target="PopUpFrame";
      document.UpdateForm.submit()
      return false;
//    }
}
function setFormactnPacific() {
  var check=false;
  for(var i = 0; i < UpdateForm.emvis003.length; i++)
     if (UpdateForm.emvis003[i].checked==true) {
      check=true;
     }
  if (isWhitespace(UpdateForm.emvis060.value)) {
    alert("Presenting Complaint Required")
    return true;}
  if (check==false) {
    alert("Triage Category has not been selected !");
    return true;}
  if (isWhitespace(UpdateForm.emvis127.value)) {
    alert("Triaged By has not been Entered !");
    return true;}

   if (isWhitespace(UpdateForm.emvis118.value)) {
      alert("U/R Number is a required field");
      return true;}

   if (isWhitespace(UpdateForm.emvis006.value)) {
      alert("Location is a required field");
      return true;}

   if (isWhitespace(UpdateForm.prcom001.value)) {
      alert("Presenting complaint comments are a required field");
      return true;}

   Indicator=document.UpdateForm.emvis060.value.substr(13,1);
   if (Indicator=="I") { // Injury data
     if (isWhitespace(UpdateForm.emvis021.value)) {
        alert("Place Where Injury Occurred is a required field");
        return true;}
     if (isWhitespace(UpdateForm.injur006.value)) {
        alert("Activity When Injured is a required field");
        return true;}
     if (isWhitespace(UpdateForm.injur004.value)) {
        alert("Injury Cause is a required field");
        return true;}
     if (isWhitespace(UpdateForm.injur005.value)) {
        alert("Human Intent is a required field");
        return true;}
     if (isWhitespace(UpdateForm.injur002.value)) {
        alert("Description of Injury Event is a required field");
        return true;}
   }

//  if (validateMandatory(UpdateForm)) {
      if (isWhitespace(document.UpdateForm.emvis006.value)){
        document.UpdateForm.emvis006.value="WR"; }
      checkUR()
      document.UpdateForm.updttype.value="ARRIV"

      UpdateWin=window.open("","HideUpdateWindow",
      "width=500,height=200,top=0,directories=no,location=no" +
      ",scrollbars=no,status=no,toolbar=no,menubar=no,resizeable=no")
      document.UpdateForm.target="HideUpdateWindow";
//    document.UpdateForm.target="PopUpFrame";
      document.UpdateForm.submit()
      return false;
//    }
}

//Checks specific fields entered for HEA Template
function setFormactnHEA() {

  if (isWhitespace(UpdateForm.secureid.value)) {
    alert("User Id has not been entered !");
    UpdateForm.secureid.focus();
    return true;
  }
 
  if (isWhitespace(UpdateForm.securepw.value)) {
    alert("Password has not been entered !");
    UpdateForm.securepw.focus();
    return true;
  }

  if (isWhitespace(UpdateForm.emvis060.value)) {
    alert("Presenting Complaint required !")
    UpdateForm.emvis060.focus();
    return true;
  }

  if (isWhitespace(UpdateForm.emvis006.value)) {
    alert("Location required !")
    UpdateForm.emvis006.focus();
    return true;
  }

  //Confirms one of the triage category has been selected
  var check=false;
  for(var i = 0; i < UpdateForm.emvis003.length; i++) {
    if (UpdateForm.emvis003[i].checked == true) {
      check=true;
    }
  }

  if (check==false) {
    alert("Triage Category has not been selected !");
    return true;
  }

  //Checks if Mode of care(category eu)field exists,and value has been entered.
  if (document.getElementById('emvis069') != undefined ){
    if (isWhitespace(UpdateForm.emvis069.value)) {  // 
      alert(trim(UpdateForm.emvis069.title) + " is a required field.");
      FocusDelay(UpdateForm.emvis069);
      return true;
    }
  }
  //Checks if Mode of Arrival field exists, and a value has been entered.
  if (document.getElementById('emvis013') != undefined ){
    if (isWhitespace(UpdateForm.emvis013.value)) {  // 'Mode of Arrival'
      alert(trim(UpdateForm.emvis013.title) + " is a required field.");
      FocusDelay(UpdateForm.emvis013);
      return true;
    }
    else {
      // Ambulance Case Number filled in if Mandatory?
      if ((UpdateForm.emvis034.className == "Mandatory") &&
          isWhitespace(UpdateForm.emvis034.value)) {
        alert("Ambulance Case Number is a required field.");
        UpdateForm.emvis034.focus();
        return true;
      }
    }
  }

//  if (validateMandatory(UpdateForm)) {

      //Collects the value of the location for storage in DB
      if (isWhitespace(document.UpdateForm.emvis006.value)){
       if(document.UpdateForm.emvis006.type=="select-one") {
         for (var i =0 ; i < document.UpdateForm.emvis006.length; i++) {
          if(document.UpdateForm.emvis006.options[i].value.substr(0,3)=="WR "){
            document.UpdateForm.emvis006.selectedIndex=i;
          }
         }
        } else {
          document.UpdateForm.emvis006.value="WR"; 
        }
      }

      checkUR()
      document.UpdateForm.updttype.value="ARRIV"

      UpdateWin=window.open("","HideUpdateWindow",
      "width=500,height=200,top=0,directories=no,location=no" +
      ",scrollbars=no,status=no,toolbar=no,menubar=no,resizeable=no")

      document.UpdateForm.target="HideUpdateWindow";

      //Creates frame to hold any errors from TBL code
      //document.UpdateForm.target="PopUpFrame";
      document.UpdateForm.submit()
      return false;
//    }
}
function setFormactnWA() {
  f = document.UpdateForm;
  var check=false;
  for(var i = 0; i < UpdateForm.emvis003.length; i++)
     if (UpdateForm.emvis003[i].checked==true) {
      check=true;
     }
  if (isWhitespace(UpdateForm.emvis060.value)) {
    alert("Presenting Complaint Required")
    return true;}
  if (check==false) {
    alert("Triage Category has not been selected !");
    return true;}

  if (validateMandatory(UpdateForm)) {
    if (isWhitespace(document.UpdateForm.emvis006.value)){
      document.UpdateForm.emvis006.value="WR"; }

    checkUR()
    document.UpdateForm.updttype.value="ARRIV"

    ShowFdvWarning();

    UpdateWin=window.open("","HideUpdateWindow",
        "width=500,height=200,top=0,directories=no,location=no" +
        ",scrollbars=no,status=no,toolbar=no,menubar=no,resizeable=no")
    document.UpdateForm.target="HideUpdateWindow";
    document.UpdateForm.submit()
    return false;
  }
}
function ShowFdvWarning() {
  f = document.UpdateForm;
  if (f.pmsvx122 == undefined) {return;} 
 
  i = f.pmsvx122.selectedIndex;
  if (i == -1) {return;}
   
  ind1 = f.pmsvx122.options[i].value.substr(3,1);
  if (ind1=='X') {
    alert("Please complete FDV Screening form (FDV950)");
  }
}
function refreshTop() {
    if (parent.menu.document.readyState=="complete") {
      parent.menu.location.reload(); }
}
function getPresentCom(SearchField,ReturnSelect,CatCode) {
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=32" +
                    "&valdcode=" + SearchField.value.replace(/ /g,"+") +
                    "&valdcatc=" + CatCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnSelect.options.length=0
    ReturnValue=returnValue.return_value.split("|");
    for (var j=0; j < ReturnValue.length; j++) {
       if (!isWhitespace(ReturnValue[j])) {
         SelectValue=ReturnValue[j].split(",");
         ReturnSelect.options[ReturnSelect.options.length]=
          new Option(SelectValue[1],SelectValue[0]); } } }
}
function validateLocation(SearchField,SearchName) {
  if (isWhitespace(SearchField.value)) {
      return;;
  }
  SearchField.value=SearchField.value.toUpperCase()
  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=2" +
                    "&valdcode=" + SearchField.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    SearchName.value=trim(ReturnValue[1]);
    SearchField.value=ReturnValue[0].substr(0,3);
  }
  else {
     document.UpdateForm.emvis006.focus();
     document.UpdateForm.emvis006.value="";
     document.UpdateForm.name_emvis006.value="";
  }
   
}
function blurPage() {
 if (!isWhitespace(UpdateForm.emvis127.value)) {
  setRedirect();
  setFormactn(); }
}
function chkFormSend(theForm) {
  if (IsDirty1(theForm)) {
    setRedirect(); 
    var check=false;
    var check1=true;
    for(var i = 0; i < UpdateForm.emvis003.length; i++) {
      if (UpdateForm.emvis003[i].checked==true) { check=true; }
    }
    if (check==false) {
           event.returnValue = "Triage Category has not been selected - Please select now !";}
    else if (isWhitespace(UpdateForm.emvis127.value)) {
      check1=false;  
  event.returnValue = "Triaged By has not been entered - Please select now !";}
    if (check && check1 == true) {
        if (isWhitespace(document.UpdateForm.emvis006.value)){
        document.UpdateForm.emvis006.value="WR"; }
        if(isWhitespace(document.UpdateForm.emvis118.value)) {
          document.UpdateForm.formactn.value="N1"
        }
        else {
          document.UpdateForm.formactn.value="N3"
          document.UpdateForm.urnumber.value=document.UpdateForm.emvis118.value
        }
        document.UpdateForm.updttype.value="REGIS"
        UpdateWin=window.open("","HideUpdateWindow",
        "width=500,height=200,top=0,directories=no,location=no" +
        ",scrollbars=no,status=no,toolbar=no,menubar=no,resizeable=no")
        document.UpdateForm.target="HideUpdateWindow";
        document.UpdateForm.submit();}
  }
}

function IsDirty1(eForm) {
  for (var i=0; i < eForm.length; i++) {
    var eElem = eForm.elements[i];
    if ("text" == eElem.type || "textarea" == eElem.tagName)
    {
      if (eElem.value != eElem.defaultValue)  {return true;}
    }
    else if ("checkbox" == eElem.type || "radio" == eElem.type)
    {
      if (eElem.checked != eElem.defaultChecked) return true;
    }
  }
  return false;
}
function DisplayDiv() 
{
  var Indicator=document.UpdateForm.emvis060.value.substr(13,1);
  var Triage = document.getElementById('Triage');
  if (Indicator=="I") 
  {
     Triage.style.display = "";
     Triage.innerHTML     = document.getElementById('EmergencyProc').innerHTML;
  }
  else 
  {
     Triage.style.display = "none";
     Triage.innerHTML     = "";
  }
}
//-----------------------------------------------------------------
// Function to check for any visits for this ur on todays date
//-----------------------------------------------------------------
function CheckEmrVisit(urnum) {
  if (isWhitespace(urnum)) {
     return true;
  }
  var serverURL = "../cgi-bin/emrweb08.pbl?reportno=17" +
                  "&valdurno=" + urnum.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    if(!isWhitespace(ReturnValue[0])) {
      if(!confirm("Patient has already presented on.\n" +
                 "Date - \t" + ReturnValue[1] + "\n" +
                 "U/R - \t" + ReturnValue[0].replace(/ /g,"") + "\n" +
                 "Visit - \t" + ReturnValue[2].replace(/ /g,"") + "\n" +
                 "Select OK to continue with triage.\n" +
                 "Select Cancel to abort triage.")) {
         return false;
      }
    }
  }
  return true;
}
//-----------------------------------------------------------------
// Function to check for expected patients with the same name or ur
//-----------------------------------------------------------------
function checkExpectedPat(urnum) {
  if (isWhitespace(urnum)) return false;;
  var serverURL = "../cgi-bin/emrweb08.pbl?reportno=16" +
                  "&valdcode="+urnum.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")

    if(!isWhitespace(ReturnValue[0])) {
      if(confirm("Possible Expected Patient Match.\n" +
                 "U/R - \t\t" + ReturnValue[1].replace(/ /g,"") + "\n" +
                 "Surname - \t" + ReturnValue[2] + "\n" +
                 "Given Name - \t" + ReturnValue[3] + "\n" +
                 "Select OK to register U/R - " + urnum.replace(/ /g,"")  +
                 " using Expected Patient details \n" +
                 "Select Cancel to continue with this registration.")) {
         // Unique no
         top.content.UpdateForm.emexp001.value=ReturnValue[0]
         return true;
      }
    }
  }
  return false;
}
//C-0825792 - Check parameter to Use pmshcpaf/oprnuraf for ED Nurse
function chkHcpEDNurse(){
  if (document.getElementById('emcnurse')) {
      if (document.getElementById('emcnurse').value == "1") {
        return true;
       }
      else {
        return false;
      }
  }
  else {
      return false;
  }
}
//C-0825792 - Search Nurse from pmshcpaf/oprnuraf for ED Nurse
function SearchEDNurse(NurseId,ReturnNurseName) {
  var hcpnurse = chkHcpEDNurse();
  if (hcpnurse==true){
     HCPSearchFrame(NurseId,ReturnNurseName,20);
  }
  else {
     NurseSearchFrame(NurseId,ReturnNurseName);
  }
}
//-----------------------------------------------------------------
// Show VEMD Telehealth fields
//-----------------------------------------------------------------
function VEMDFields() {
  if(!document.getElementById("emvis177")) {
    return;
  }
  visitdate=document.getElementById("currdate");
  state=document.getElementById("ptcnhdps");
  servicetype=document.getElementById("emvis177");
  if(visitdate.value < DOYR2019 || state.value != "3") {
    return;
  }
  document.getElementById("servicename").style.display="";
  document.getElementById("servicefield").style.display="";
  servicetype.className="SelectBig Mandatory";
}
//-----------------------------------------------------------------
// Show VEMD Patient Location - Telehealth or Virtual Care service type
//-----------------------------------------------------------------
function VEMDPatientLoc() {
  servicetype=document.getElementById("emvis177");
  patlocation=document.getElementById("emvis178");
  if((servicetype.value.substr(14,1)=="2") ||
     (servicetype.value.substr(14,1)=="6")) {
    document.getElementById("locationname").style.display="";
    document.getElementById("locationfield").style.display="";
    patlocation.className="SelectBig Mandatory";
    if (servicetype.value.substr(14,1)=="2") {
      for (var i =0 ; i < patlocation.length; i++) {
        if (patlocation.options[i].value.substr(14,4)=="9996" &&
            patlocation.options[i].value.substr(4,1)=="V") {  // Home
          patlocation.options[i].hidden=true;
        }
        if (patlocation.options[i].value.substr(14,4)!="9996" &&
          patlocation.options[i].value.substr(4,1)!="V") {  // Home
          patlocation.options[i].hidden=false;
        }
      }
    } else {
        for (var i =0 ; i < patlocation.length; i++) {
            patlocation.options[i].hidden=false;
        }
    }
    patlocation.selectedIndex=0;
  } else {
    document.getElementById("locationname").style.display="none";
    document.getElementById("locationfield").style.display="none";
    patlocation.className="SelectBig";
    patlocation.selectedIndex=0;

    for (var i =0 ; i < patlocation.length; i++) {
      patlocation.options[i].hidden=false;
    }
  }
}
//-----------------------------------------------------------------
// Show VEMD Telehealth patient location source
//-----------------------------------------------------------------
function VEMDPatientSource() {
  patlocation=document.getElementById("emvis178");
  locsource=document.getElementById("trnsfsrc");
  locsource_name=document.getElementById("name_trnsfsrc");
  if(patlocation.value.substr(3,1)=="T") {
    document.getElementById("sourcename").style.display="";
    document.getElementById("sourcefield").style.display="";
    locsource.className="Mandatory";
  } else {
    document.getElementById("sourcename").style.display="none";
    document.getElementById("sourcefield").style.display="none";
    locsource.className="";
    locsource.value=""
    locsource_name.value=""
  }
}
//-----------------------------------------------------------------
// VEMD Telehealth mandatory fields
//-----------------------------------------------------------------
function VEMDMandatory() {
  if(document.getElementById("emvis177")) {
    servicetype=document.getElementById("emvis177");
    if(servicetype.className.match(/Mandatory/)) {
       if(!checkString(servicetype,servicetype.title)) {
          return false ;
       } 
    }
  }
  if(document.getElementById("emvis178")) {
    patlocation=document.getElementById("emvis178");
    if(patlocation.className.match(/Mandatory/)) {
       if(!checkString(patlocation,patlocation.title)) {
          return false ;
       } 
    }
  }
  if(document.getElementById("trnsfsrc")) {
    locsource=document.getElementById("trnsfsrc");
    if(locsource.className.match(/Mandatory/)) {
       if(!checkString(locsource,locsource.title)) {
          return false ;
       } 
    }
  }
  return true;
}
//-----------------------------------------------------------------
// Show VEMD service type - Telehealth
//-----------------------------------------------------------------
function VEMDService() {
  if(!document.getElementById("emvis177")) {
    return;
  }
  servicetype=document.getElementById("emvis177");
  if(!servicetype.className.match(/Mandatory/)) {
    return;
  }
  for (var i =0 ; i < servicetype.length; i++) {
  if (servicetype.options[i].value.substr(14,1)=="2") {  // Telehealth
      servicetype.selectedIndex=i } };

  VEMDPatientLoc();
}
