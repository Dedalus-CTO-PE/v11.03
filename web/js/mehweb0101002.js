//jsVersion  : V11.03.00
//========================================================================
// Program   : mehweb0101002.js
//
// Written   : 10.04.2013 Patrick Adair
//
// Function  : Functions Used in mehweb0101002 
//
// Version   :
//
// V10.10.01 13/06/2017  Richa Phogat  CAR 301799
//           Added functions for 'Responsible HCP' & 'Case Team'
// V10.04.01 27/03/2014 Ebon Clements  CAR 263127
//           Added validateAXIS()
// V10.03.00 10/04/2013 Patrick Adair  CAR 239859
//           Created js
//========================================================================
 function SubmitAdm() {
   setChkBoxs();
   if  (!chkPrevDiag()) {
       return; }
   MandatoryOk=validateMandatory(document.UpdateForm)
   if (MandatoryOk) {
      SubmitHidden(document.UpdateForm);
      }
 }
 function chkDiagDateMandatory() {
   if (!isWhitespace(UpdateForm.mehdi003.value)) {
      UpdateForm.mehdi006.className="Mandatory NotFuturEdate";
      UpdateForm.mehdi006.readOnly = false;
   } else {
      UpdateForm.mehdi006.value="";
      UpdateForm.mehdi006.readOnly = true;
      UpdateForm.mehdi006.className="Readonly"; }

   if (!isWhitespace(UpdateForm.mehdi007.value)) {
      UpdateForm.mehdi010.className="Mandatory NotFuturEdate";
      UpdateForm.mehdi010.readOnly = false;
   } else {
      UpdateForm.mehdi010.value="";
      UpdateForm.mehdi010.readOnly = true;
      UpdateForm.mehdi010.className="Readonly"; }

   if (!isWhitespace(UpdateForm.mehdi035.value)) {
      UpdateForm.mehdi038.className="Mandatory NotFuturEdate";
      UpdateForm.mehdi038.readOnly = false;
   } else {
      UpdateForm.mehdi038.value="";
      UpdateForm.mehdi038.readOnly = true;
      UpdateForm.mehdi038.className="Readonly"; }

   if (!isWhitespace(UpdateForm.mehdi039.value)) {
      UpdateForm.mehdi042.className="Mandatory NotFuturEdate";
      UpdateForm.mehdi042.readOnly = false;
   } else {
      UpdateForm.mehdi042.value="";
      UpdateForm.mehdi042.readOnly = true;
      UpdateForm.mehdi042.className="Readonly"; }

   if (!isWhitespace(UpdateForm.mehdi043.value)) {
      UpdateForm.mehdi046.className="Mandatory NotFuturEdate";
      UpdateForm.mehdi046.readOnly = false;
   } else {
      UpdateForm.mehdi046.value="";
      UpdateForm.mehdi046.readOnly = true;
      UpdateForm.mehdi046.className="Readonly"; }

   if (!isWhitespace(UpdateForm.mehdi047.value)) {
      UpdateForm.mehdi050.className="Mandatory NotFuturEdate";
      UpdateForm.mehdi050.readOnly = false;
   } else {
      UpdateForm.mehdi050.value="";
      UpdateForm.mehdi050.readOnly = true;
      UpdateForm.mehdi050.className="Readonly"; }
 }
//T0856503-start
 function chkDiagDateTypeMandatory() {
   chkDiagDateMandatory();

   if (!isWhitespace(UpdateForm.mehdi003.value)) {
      UpdateForm.mehdi059.className="Mandatory";
      UpdateForm.mehdi059.disabled = false
      UpdateForm.mehdi059.readOnly = false;
      var DefTypeB=chkTypeAPRecorded();
      if ((isWhitespace(UpdateForm.mehdi059.value)) &&
         (DefTypeB==0)){
          UpdateForm.mehdi059.value="A"; // Default to Principal
      }
   } else {
      UpdateForm.mehdi059.value="";
      UpdateForm.mehdi059.disabled = true;
      UpdateForm.mehdi059.readOnly = true;
      UpdateForm.mehdi059.className="Readonly"; }

   if (!isWhitespace(UpdateForm.mehdi007.value)) {
      UpdateForm.mehdi060.className="Mandatory";
      UpdateForm.mehdi060.disabled = false
      UpdateForm.mehdi060.readOnly = false;
      var DefTypeB=chkTypeAPRecorded();
      if ((isWhitespace(UpdateForm.mehdi060.value)) && 
         (DefTypeB==1)){
          UpdateForm.mehdi060.value="B"; // Default to Other Relevant
      }

   } else {
      UpdateForm.mehdi060.value="";
      UpdateForm.mehdi060.disabled = true
      UpdateForm.mehdi060.readOnly = true;
      UpdateForm.mehdi060.className="Readonly"; }

   if (!isWhitespace(UpdateForm.mehdi035.value)) {
      UpdateForm.mehdi061.className="Mandatory";
      UpdateForm.mehdi061.disabled = false;
      UpdateForm.mehdi061.readOnly = false;
      var DefTypeB=chkTypeAPRecorded();
      if ((isWhitespace(UpdateForm.mehdi061.value)) &&
         (DefTypeB==1)){
          UpdateForm.mehdi061.value="B"; // Default to Other Relevant
      }

   } else {
      UpdateForm.mehdi061.value="";
      UpdateForm.mehdi061.disabled = true;
      UpdateForm.mehdi061.readOnly = true;
      UpdateForm.mehdi061.className="Readonly"; }

   if (!isWhitespace(UpdateForm.mehdi039.value)) {
      UpdateForm.mehdi062.className="Mandatory";
      UpdateForm.mehdi062.disabled = false;
      UpdateForm.mehdi062.readOnly = false;
      var DefTypeB=chkTypeAPRecorded();
      if ((isWhitespace(UpdateForm.mehdi062.value)) &&
         (DefTypeB==1)){
          UpdateForm.mehdi062.value="B"; // Default to Other Relevant
      }

   } else {
      UpdateForm.mehdi062.value="";
      UpdateForm.mehdi062.disabled = true;
      UpdateForm.mehdi062.readOnly = true;
      UpdateForm.mehdi062.className="Readonly"; }

   if (!isWhitespace(UpdateForm.mehdi043.value)) {
      UpdateForm.mehdi063.className="Mandatory";
      UpdateForm.mehdi063.disabled = false;
      UpdateForm.mehdi063.readOnly = false;
      var DefTypeB=chkTypeAPRecorded();
      if ((isWhitespace(UpdateForm.mehdi063.value)) &&
         (DefTypeB==1)){
          UpdateForm.mehdi063.value="B"; // Default to Other Relevant
      }

   } else {
      UpdateForm.mehdi063.value="";
      UpdateForm.mehdi063.disabled = true;
      UpdateForm.mehdi063.readOnly = true;
      UpdateForm.mehdi063.className="Readonly"; }

   if (!isWhitespace(UpdateForm.mehdi047.value)) {
      UpdateForm.mehdi064.className="Mandatory";
      UpdateForm.mehdi064.disabled = false;
      UpdateForm.mehdi064.readOnly = false;
      var DefTypeB=chkTypeAPRecorded();
      if ((isWhitespace(UpdateForm.mehdi064.value)) &&
         (DefTypeB==1)){
          UpdateForm.mehdi064.value="B"; // Default to Other Relevant
      }

   } else {
      UpdateForm.mehdi064.value="";
      UpdateForm.mehdi064.disabled = true;
      UpdateForm.mehdi064.readOnly = true;
      UpdateForm.mehdi064.className="Readonly"; }
 }

function chkTypeRecorded(theField){
   var TypeAPRec=chkTypeAPRecorded();

//Check principal and provisional types
   if (TypeAPRec==0) {
      alert('There must be one "Principal" or "Provisional code recorded.');
      theField.value="";
      return false;
   }

   if (TypeAPRec==2){
      alert('There can only be one "Principal" code recorded.');
      theField.value="";
      return false;
   }

   if (TypeAPRec==3){
      alert('There can only be one "Provisional" code recorded.');
      theField.value="";
      return false;
   }
  
}

function chkTypeAPRecorded(){
   p=document.UpdateForm;
   typeA=0; //Type Principal
   typeP=0; //Type Provisional

// Diagnosis Type 1
   if (p.mehdi059.value=="A"){
       typeA=typeA+1;}

   if (p.mehdi059.value=="P"){
       typeP=typeP+1;}

// Diagnosis Type 2
   if (p.mehdi060.value=="A"){
       typeA=typeA+1;}

   if (p.mehdi060.value=="P"){
       typeP=typeP+1;}

// Diagnosis Type 3
   if (p.mehdi061.value=="A"){
       typeA=typeA+1;}

   if (p.mehdi061.value=="P"){
       typeP=typeP+1;}

// Diagnosis Type 4
   if (p.mehdi062.value=="A"){
       typeA=typeA+1;}

   if (p.mehdi062.value=="P"){
       typeP=typeP+1;}

// Diagnosis Type 5
   if (p.mehdi063.value=="A"){
       typeA=typeA+1;}

   if (p.mehdi063.value=="P"){
       typeP=typeP+1;}

// Diagnosis Type 6
   if (p.mehdi064.value=="A"){
       typeA=typeA+1;}

   if (p.mehdi064.value=="P"){
       typeP=typeP+1;}

// Check if Principal/Provisional type has been entered
   if (typeA==0&&typeP==0){
       return 0;} //alert no Principal/Provisional entered

   if ((typeA==1&&typeP==1) ||
       (typeA==1&&typeP==0) ||
       (typeA==0&&typeP==1)){
       return 1;}

   if (typeA>1){
       return 2;} //alert more than 1 Principal entered

   if (typeP>1){
       return 3;} //alert more than 1 Provisional entered
   
}
//T0856503-end

 function chkPrevDiag() {
  if (!isWhitespace(UpdateForm.mehdi007.value)) {
     if (isWhitespace(UpdateForm.mehdi003.value)) {
        alert('Diagnosis Code Entry must be Sequential');
        UpdateForm.mehdi007.value="";
        UpdateForm.mehdi008.value="";
        UpdateForm.mehdi010.value="";
        UpdateForm.mehdi010.readOnly = true;
        UpdateForm.mehdi010.className="Readonly";
        return false; }
     }
  if (!isWhitespace(UpdateForm.mehdi035.value)) {
     if (isWhitespace(UpdateForm.mehdi003.value) ||
         isWhitespace(UpdateForm.mehdi007.value)) {
        alert('Diagnosis Code Entry must be Sequential');
        UpdateForm.mehdi035.value="";
        UpdateForm.mehdi036.value="";
        UpdateForm.mehdi038.value="";
        UpdateForm.mehdi038.readOnly = true;
        UpdateForm.mehdi038.className="Readonly";
        return false; }
     }
  if (!isWhitespace(UpdateForm.mehdi039.value)) {
     if (isWhitespace(UpdateForm.mehdi003.value) ||
         isWhitespace(UpdateForm.mehdi007.value) ||
         isWhitespace(UpdateForm.mehdi035.value)) {
        alert('Diagnosis Code Entry must be Sequential');
        UpdateForm.mehdi039.value="";
        UpdateForm.mehdi040.value="";
        UpdateForm.mehdi042.value="";
        UpdateForm.mehdi042.readOnly = true;
        UpdateForm.mehdi042.className="Readonly";
        return false; }
     }
  if (!isWhitespace(UpdateForm.mehdi043.value)) {
     if (isWhitespace(UpdateForm.mehdi003.value) ||
         isWhitespace(UpdateForm.mehdi007.value) ||
         isWhitespace(UpdateForm.mehdi035.value) ||
         isWhitespace(UpdateForm.mehdi039.value)) {
        alert('Diagnosis Code Entry must be Sequential');
        UpdateForm.mehdi043.value="";
        UpdateForm.mehdi044.value="";
        UpdateForm.mehdi046.value="";
        UpdateForm.mehdi046.readOnly = true;
        UpdateForm.mehdi046.className="Readonly";
        return false; }
     }
  if (!isWhitespace(UpdateForm.mehdi047.value)) {
     if (isWhitespace(UpdateForm.mehdi003.value) ||
         isWhitespace(UpdateForm.mehdi007.value) ||
         isWhitespace(UpdateForm.mehdi035.value) ||
         isWhitespace(UpdateForm.mehdi039.value) ||
         isWhitespace(UpdateForm.mehdi043.value)) {
        alert('Diagnosis Code Entry must be Sequential');
        UpdateForm.mehdi047.value="";
        UpdateForm.mehdi048.value="";
        UpdateForm.mehdi050.value="";
        UpdateForm.mehdi050.readOnly = true;
        UpdateForm.mehdi050.className="Readonly";
        return false; }
     }
  return true;
 }
function validateAXIS(OptionNumber,ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=3; i < validateAXIS.arguments.length; i++) {
    if (typeof(validateAXIS.arguments[i]) == 'function') {
      ReturnFunction=validateAXIS.arguments[i] }
    else {
      validateAXIS.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
                    "&actvonly=1" +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=3; i < validateAXIS.arguments.length; i++) {
       if (typeof(validateAXIS.arguments[i]) != 'function') {
         j++
         validateAXIS.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() }
    return true;
    }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    ReturnCode.focus();
    return false;
     }
}

//*****************************************************************************
//
//        caseTeamOnChange
//
//*****************************************************************************
function caseTeamOnChange(mehdi058,n_mehdi058,mehdi057,n_mehdi057,mehdi002)
{
 var oldValue = mehdi058.value;

 TeamSearchFrame(mehdi058,n_mehdi058,function()
 {
   if(mehdi058.value != oldValue)
   {
      setTimeout(function()
      {
         getHCPbyCaseTeam(mehdi058,mehdi057,n_mehdi057,mehdi002);
      },100);
   }
 });
}

//*****************************************************************************
//        getHCPByCaseTeam
//*****************************************************************************
function getHCPbyCaseTeam(caseCode,hcp,hcpDescription,mehdStartDate)
{

  //Responsible HCP field
  var caseTeamCode = caseCode;

  if(caseTeamCode.value.replace(/ /g,"") == "")
     return;;

  //Case Team field
  var hcpCode = hcp;
  var hcpDescription = hcpDescription;

  returnObject = new Object();//remote script server return server
  var arr = new Array(); //temp array

  //set object properties
  returnObject.value = "";
  returnObject.name = "";

  //remote script call to patweb80 server
  validateCaseTeam(93,caseTeamCode,returnObject,mehdStartDate);

  arr = returnObject.value.split("|");
  if(arr.length != 0 )
  {
    //hcp is in more then one Case Team
    if(arr.length > 2 )
    {
       //popup a list to choose from
        ShowCaseTeamHCPFrame("allweb02.pbl?reportno=02&template=017"+
                             "&valdrdat="+mehdStartDate.value+
                             "&caseCode="+caseTeamCode.value,hcp,hcpDescription);
    }
    else
    {
      //one hcp - populate the Case Team fields
      hcpCode.value = (arr[0].split(":"))[0] == undefined ?
                                    hcpCode.value : (arr[0].split(":"))[0];

      hcpDescription.value = (arr[0].split(":"))[1] == undefined ?
                                    hcpCode.value : (arr[0].split(":"))[1];
    }
  }
}
//*****************************************************************************
//
//        ShowCaseTeamHCPFrame
//
//*****************************************************************************
function ShowCaseTeamHCPFrame(linkurl,code,name) {
  window.ReturnCode=code
  window.ReturnName=name
  Left=(document.body.clientWidth-580)/2
  DFrameLink(linkurl,0,Left,580,435)
}
//*****************************************************************************
//
//        hcpOnChange
//
//*****************************************************************************
function hcpOnChange(mehdi057,n_mehdi057,mehdi058,n_mehdi058,mehdi002)
{
  var oldValue = mehdi057.value;

  HCPSearchFrame(mehdi057,n_mehdi057,1,function()
  {
     if(mehdi057.value != oldValue)
     {
       setTimeout(function()
       {
         getCaseTeamByHCP(mehdi057,mehdi058,n_mehdi058,mehdi002);
       },100);
     }
  });
}
//**************************************************************
//
//        getCaseTeamByHCP
//
//**************************************************************
function getCaseTeamByHCP(hcp,caseCode,caseDescription,mehdStartDate)
{
  //Responsible HCP field
  var hcpCode = hcp;

  //Case Team field
  var teamCode = caseCode
  var teamDescription = caseDescription;

  returnObject = new Object();//remote script server return server
  var arr = new Array(); //temp array

  //set object properties
  returnObject.value = "";
  returnObject.name = "";

  //remote script call to patweb80 server
  validateCaseTeam(92,hcpCode,returnObject,mehdStartDate);

  arr = returnObject.value.split("|");

  if(arr.length != 0 )
  {
    //hcp is in more then one Case Team
    if(arr.length > 2 )
    {
       //popup a list to choose from
       ShowCaseTeamHCPFrame("allweb02.pbl?reportno=02&template=016"+
                             "&valdrdate="+mehdStartDate.value+
                             "&hcpCode="+hcpCode.value,caseCode,caseDescription);
    }
    else
    {
      //one hcp - populate the Case Team fields
      teamCode.value = (arr[0].split(":"))[0] == undefined ?
                                       teamCode.value : (arr[0].split(":"))[0];
      teamDescription.value = (arr[0].split(":"))[1] == undefined ?
                                       teamCode.value : (arr[0].split(":"))[1];
    }
  }
}

