//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb7720.js
//
// Written   : 26/10/2020
//
// Function  : Standard Functions Used in patweb7720 templates
//========================================================================
function AddBillingDefaults() {
  linkurl = "../cgi-bin/patweb77.pbl?reportno=20&template=002"
  Left=(document.body.clientWidth-900)/2;
  DFrameLink(linkurl,100,Left,900,550);
}
function ShowLink(linkurl) {
  Left=(document.body.clientWidth-800)/2
  DFrameLink(linkurl,0,Left,900,550)
}
function SubmitForm(theForm) {
  if(validateMandatory(theForm)) {
    theForm.submit();
  }
}

//----------------------------------------------------------------------------
// Function : Display Program code and description
//----------------------------------------------------------------------------
function findPrgmdesc(theForm){
  Progcode=theForm.ptbde016.value;
  for(var i =0 ; i < theForm.d_ptbde016.length; i++) {
     if(trim(theForm.d_ptbde016.options[i].value)==trim(Progcode.substr(0,8))){
        theForm.prgmcode.selectedIndex=i;
        return;}}

   alert("Invalid Program code");
   theForm.ptbde016.value="";
   theForm.d_ptbde016.selectedIndex=0;
   theForm.ptbde016.focus();
}

//----------------------------------------------------------------------------
// Function : Save the Selected Program Code
//----------------------------------------------------------------------------
function savePrgmcode(theForm) {
  theForm.ptbde016.value=theForm.d_ptbde016.value;
}

//----------------------------------------------------------------------------
// Function : Set HF input as Mandatory if claim type is Private              
//----------------------------------------------------------------------------
function setHFMandatory(theForm){
  catCLInd5=theForm.ptbde005.value.substr(7,1);
  if (catCLInd5 == '1'){
    theForm.ptbde006.className="Mandatory";   //Claim Type is Private
    theForm.ptbde007.className="Mandatory";   //HF is mandatory input
  }else {
    theForm.ptbde006.className="";            //Claim type is NOT Private
    theForm.ptbde007.className="";            //HF is optional input
  }
}

//----------------------------------------------------------------------------
// Function : Validate Casepayment option input must be blank if casemix code  
//            is not selected                                                  
//----------------------------------------------------------------------------
function setCmxPayOpt(theForm){
 if (isWhitespace(theForm.ptbde010.value)){
   theForm.ptbde011.value="";
   theForm.ptbde011.selectedIndex=0;
   alert('Casepayment option must be blank if no Casemix Code is entered');
 }
}
//----------------------------------------------------------------------------
// Function : Validate Casepayment option is mandatory if Casemix code is 
//            selected
//----------------------------------------------------------------------------
function ValCmxPayOptMandatory(theForm,option){
  switch(option){
    case "1":
         if (validateCode(35,theForm.ptbde010,theForm.cmixdesc)){
            theForm.ptbde011.className="Mandatory";}
         else {theForm.ptbde011.className="";}
         break;
    case "2":
         CmixSearchFrame(theForm.ptbde010,theForm.cmixdesc)
         if (isWhitespace(theForm.cmixdesc.value)){
             theForm.ptbde011.className="";}
         else {theForm.ptbde011.className="Mandatory"; }
         break;
    case "3":
         clrFields(theForm.ptbde010,theForm.cmixdesc,theForm.ptbde011)
         theForm.ptbde011.className="";
         break;
    default:
         theForm.ptbde011.className="";
         break;
  }
}

//----------------------------------------------------------------------------
// Function : Set Default Intended Length of Stay (ILOS) from Target Length of
//            Stay (TLOS) entered
//            If TLOS=0 then select the first Cat VI 
//            If TLOS>0 then select the first Cat VI ind1=1
//----------------------------------------------------------------------------
function defaultILOS(theForm){
  if (isWhitespace(theForm.ptbde009.value)){
     return;}

  //If TLOS>0 then select the first Cat VI ind1=1
  if (theForm.ptbde009.value > 0){
     for (var i=0;i<theForm.ptbde008.length;i++){
       if (theForm.ptbde008.options[i].value.substr(3,1) == 1){
           theForm.ptbde008.selectedIndex=i;
           break;}
     }
     return;
  }

  //If TLOS=0 then select the first Cat VI
  if (theForm.ptbde009.value == 0){
     for (var i=0;i<theForm.ptbde008.length;i++){
       if (!isWhitespace(theForm.ptbde008.options[i].value)){ 
           theForm.ptbde008.selectedIndex=i;
           break;}
     }
     return;
  }

}
