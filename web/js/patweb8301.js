//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb8301.js
//
// Written   : ????
//
// Function  : Standard Functions Used in patweb8301 templates
//
// Version   :
//
//========================================================================
  function admitNewborn(){
    if (validateMandatory(document.UpdateForm)) {
       if (((!isWhitespace(UpdateForm.ptmas010.value)) &&
            (isWhitespace(UpdateForm.ptmas012.value))) ||
           ((!isWhitespace(UpdateForm.ptmas010.value)) &&
            (isWhitespace(UpdateForm.ptmas012.value))))
          { alert("Invalid Suburb/Post Code Combination for New Born");
            return; }
       if (!CheckValPostCodeNB())
          { return; }
       if (((!isWhitespace(UpdateForm.ptmas052.value)) &&
            (isWhitespace(UpdateForm.ptmas054.value))) ||
           ((!isWhitespace(UpdateForm.ptmas052.value)) &&
            (isWhitespace(UpdateForm.ptmas054.value))))
          { alert("Invalid Suburb/Post Code Combination for Next of Kin");
            return; }
       if (!CheckValPostCodeNOK())
          { return; }
    AdmitBaby();
    }
  }
  function CheckValPostCodeNB() {
    if ((isWhitespace(UpdateForm.ptmas010.value)) &&
        (isWhitespace(UpdateForm.ptmas012.value)))
       { return true; }
    suburb   = document.UpdateForm.ptmas010;
    state    = document.UpdateForm.ptmas011;
    postcode = document.UpdateForm.ptmas012;
    if (trim(postcode.value)=="8888") {
       if (confirm("Click OK to confirm an Overseas Address"))
          { return true; }
       }
    var fulladdress = trim(postcode.value) + "," +
                      trim(suburb.value) + "," +
                      trim(state.value);
    for (var i =0; i<PC.length ; i++) {
      if  (PC[i].match(fulladdress)) {
          SelectPC[SelectPC.length] = PC[i]
          return true;
      }
    }
    alert("Invalid Suburb/Post Code Combination for New Born");
    return false;
  }
  function CheckValPostCodeNOK() {
    if ((isWhitespace(UpdateForm.ptmas052.value)) &&
        (isWhitespace(UpdateForm.ptmas054.value)))
       { return true; }
    suburb   = document.UpdateForm.ptmas052;
    state    = document.UpdateForm.ptmas053;
    postcode = document.UpdateForm.ptmas054;
    if (trim(postcode.value)=="8888") {
       if (confirm("Click OK to confirm an Overseas Address"))
          { return true; }
       }
    var fulladdress = trim(postcode.value) + "," +
                      trim(suburb.value) + "," +
                      trim(state.value);
    for (var i =0; i<PC.length ; i++) {
      if  (PC[i].match(fulladdress)) {
          SelectPC[SelectPC.length] = PC[i]
          return true;
      }
    }
    alert("Invalid Suburb/Post Code Combination for Next of Kin");
    return false;
  }
  function lookSuburbNB() {
    if (isWhitespace(document.UpdateForm.ptmas012.value))
       { return; }
    suburb   = document.UpdateForm.ptmas010;
    state    = document.UpdateForm.ptmas011;
    postcode = document.UpdateForm.ptmas012;
    LookupSuburb(document.UpdateForm.ptmas012.value);
  }
  function valPostCodeNB() {
    if (isWhitespace(document.UpdateForm.ptmas010.value))
       { return; }
    UpCase(document.UpdateForm.ptmas010);
    suburb   = document.UpdateForm.ptmas010;
    state    = document.UpdateForm.ptmas011;
    postcode = document.UpdateForm.ptmas012;
    if (trim(document.UpdateForm.ptmas012.value)!="8888") {
        LookupPostCode(document.UpdateForm.ptmas010.value);
    }
  }
  function lookSuburbNOK() {
    if (isWhitespace(document.UpdateForm.ptmas054.value))
       { return; }
    suburb   = document.UpdateForm.ptmas052;
    state    = document.UpdateForm.ptmas053;
    postcode = document.UpdateForm.ptmas054;
    LookupSuburb(document.UpdateForm.ptmas054.value);
  }
  function valPostCodeNOK(){
    if (isWhitespace(document.UpdateForm.ptmas052.value))
       { return; }
    UpCase(document.UpdateForm.ptmas052);
    suburb   = document.UpdateForm.ptmas052;
    state    = document.UpdateForm.ptmas053;
    postcode = document.UpdateForm.ptmas054;
    if (trim(document.UpdateForm.ptmas054.value)!="8888") {
        LookupPostCode(document.UpdateForm.ptmas052.value);
    }
  }

function checkContactCorrespondenceHEA(theForm) {

//T0888175-start
//Removed check for email option since the email address field have
//been made mandatory on HEA Add/Update PMI screens for T0879283
//if (theForm.pmpxi095.value.substring(3,4)=='E') {
//   theForm.pmpxi005.className="Mandatory";
//} else {
//   theForm.pmpxi005.className="";
//}
//T0888175-end

  if (theForm.pmpxi095.value.substring(3,4)=='H') {
     //theForm.ptmas013.className="Mandatory Phonenumber";
     AddClassName(theForm.ptmas013,"Mandatory");
  } else {
     //theForm.ptmas013.className="Phonenumber";
     RemoveClassName(theForm.ptmas013,"Mandatory");
  }

  if (theForm.pmpxi095.value.substring(3,4)=='M') {
     //theForm.ptmsx039.className="Mandatory MobilePhone";
     AddClassName(theForm.ptmsx039,"Mandatory");
  } else {
     //theForm.ptmsx039.className="MobilePhone";
     RemoveClassName(theForm.ptmsx039,"Mandatory");
  }

  if (theForm.pmpxi095.value.substring(3,4)=='W') {
     //theForm.ptmas014.className="Mandatory Phonenumber";
     AddClassName(theForm.ptmas014,"Mandatory");
  } else {
     //theForm.ptmas014.className="Phonenumber";
     RemoveClassName(theForm.ptmas014,"Mandatory");
  }
}
function ShowFundAlias2(theForm) {
  if(theForm.fndalias.checked==true) {
    document.getElementById('HealthFundAlias').style.display="";
    document.getElementById('HealthFundAlias1').style.display="";
    document.getElementById('HealthFundAlias2').style.display="";
    document.getElementById('HealthFundAlias3').style.display="";
    document.getElementById('HealthFundAlias4').style.display="";
    document.getElementById('HealthFundAlias5').style.display="";
    //theForm.pmpxi086.className="Mandatory";
    //theForm.pmpxi087.className="Mandatory";
    AddClassName(theForm.pmpxi086,"Mandatory");
    AddClassName(theForm.pmpxi087,"Mandatory");
  } else {
    document.getElementById('HealthFundAlias').style.display="none";
    document.getElementById('HealthFundAlias1').style.display="none";
    document.getElementById('HealthFundAlias2').style.display="none";
    document.getElementById('HealthFundAlias3').style.display="none";
    document.getElementById('HealthFundAlias4').style.display="none";
    document.getElementById('HealthFundAlias5').style.display="none";
    theForm.pmpxi086.value="";
    //theForm.pmpxi086.className="";
    RemoveClassName(theForm.pmpxi086,"Mandatory");
    theForm.pmpxi087.value="";
    //theForm.pmpxi087.className="";
    RemoveClassName(theForm.pmpxi087,"Mandatory");
    theForm.pmpxi088.value="";
  }
}
function MandLocalGPUpd() {
  if (isWhitespace(document.UpdateForm.genpname.value) &&
     isWhitespace(document.UpdateForm.genpprac.value)) {
     //document.UpdateForm.genpname.className="Mandatory";
     //document.UpdateForm.genpprac.className="Mandatory";
     AddClassName(document.UpdateForm.genpname,"Mandatory");
     AddClassName(document.UpdateForm.genpprac,"Mandatory");
     return;
  }
  if (!isWhitespace(document.UpdateForm.genpname.value)) {
     //document.UpdateForm.genpname.className="Mandatory";
     //document.UpdateForm.genpprac.className="";
     AddClassName(document.UpdateForm.genpname,"Mandatory");
     RemoveClassName(document.UpdateForm.genpprac,"Mandatory");
     return;
  }
  if (!isWhitespace(document.UpdateForm.genpprac.value)) {
     //document.UpdateForm.genpprac.className="Mandatory";
     //document.UpdateForm.genpname.className="";
     AddClassName(document.UpdateForm.genpprac,"Mandatory");
     RemoveClassName(document.UpdateForm.genpname,"Mandatory");
     return;
  }
}
function defaultRelationshipNok() {
  if (document.UpdateForm.ptcnnewc.value=="0") {
    var NOKRel=document.UpdateForm.pnkrelp.value;
    for (var i =0 ; i < document.UpdateForm.ptmas057.length; i++) {
      if (document.UpdateForm.ptmas057.options[i].value==NOKRel) {
          document.UpdateForm.ptmas057.selectedIndex=i
      }
    }
  }
}

//---------------------------------------------------------------------------
//T0879283-start - HEA functions for PMI templates
function DefPatFolderHEA(){
  catT  = document.getElementById('ptmas021');
  catFS = document.getElementById('pmpxi077');

  if ((catT == undefined) || (catFS == undefined)){
      return;}

  if (catT.selectedIndex < 1){
      return;}

  i = catT.selectedIndex;

  // If Resident Status - Cat T ind4=R then
  // default Patient Folder Colour - Cat FS to the first code where ind1=8
  if (catT.options[i].value.substr(6,1) == "R") {
      for (var j =0 ; j < catFS.length; j++) {
        if (catFS.options[j].value.substr(3,1) == "8") {
            catFS.selectedIndex = j;
            return;} }
  }

  // If Resident Status - Cat T ind1=2 then
  // default Patient Folder Colour - Cat FS to the first code where ind1=6
  if (catT.options[i].value.substr(3,1) == "2") {
      for (var j =0 ; j < catFS.length; j++) {
        if (catFS.options[j].value.substr(3,1) == "6") {
            catFS.selectedIndex = j;
            return;} }
  }
}

function NoEmailOptOutHEA(){
  emailaddress = document.getElementById('pmpxi005');
  emailoptout = document.getElementById('d_ptmas045');

  if ((emailaddress == undefined) || (emailoptout == undefined )){
      return;}

  if (emailoptout.checked==true) {
    //emailaddress.className="";
    RemoveClassName(emailaddress,"Mandatory");
  }
  else {
    //emailaddress.className="Mandatory";
    AddClassName(emailaddress,"Mandatory");
  }
}

function SetNoEmailOptoutValHEA(){
  emailoptout = document.getElementById('d_ptmas045');
  emailoptoutField = document.getElementById('ptmas045');

  if ((emailoptout == undefined) || (emailoptoutField == undefined)){
      return;}

 //Set the value for patma1af.PUYN1
  if(emailoptout.checked==true){
     emailoptoutField.value="1"}
  else {
     emailoptoutField.value="0"}

}
function SetMedicardQHEA(deceased){
  catT  = document.getElementById('ptmas021');
  medicardQ = document.getElementById('medicard');

  if ((catT == undefined) || (medicardQ == undefined)){
      return;}

  // If patient is deceased then regardless of resident status then
  // do not prompt 'Does this patient have a Medicare Card?' question
  if (deceased=="Yes" || deceased=="true") {
    //medicardQ.className="";
    RemoveClassName(medicardQ,"Mandatory");
    return;
  }

  if (catT.selectedIndex < 1) {
    //medicardQ.className="Mandatory";
    AddClassName(medicardQ,"Mandatory");
    return;
  }

  i = catT.selectedIndex;

  // If Resident Status - Cat T ind1=2 (Non-resident) then
  // do not prompt 'Does this patient have a Medicare Card?' question
  if (catT.options[i].value.substr(3,1) == "2") {
    //medicardQ.className="";
    RemoveClassName(medicardQ,"Mandatory");
  }
  else {
    //medicardQ.className="Mandatory";
    AddClassName(medicardQ,"Mandatory");
  }
}

function valPatTypeHEA(deceased){
  SetMedicardQHEA(deceased);
  DefPatFolderHEA();
}

//T0879283-end
//---------------------------------------------------------------------------

