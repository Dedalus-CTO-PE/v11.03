//jsVersion  : V11.03.00
//=============================================================================
// Program   : priweb0206002.js
//
// Written   : 27.02.2004 J.Tan 
//
// Function  : Standard Functions Used in PRIWEB02  Report 6
//
// V10.05.01 05.11.2014 Ebon Clements CAR 307505
//           Fixed cgi names of testc101 and s4flg101
// V9.09.01  03.08.2007 Ebon Clements CAR 146075
//           Added replace(/ /g,"+") to GetDesc() serverURL
// V9.03.01  26.03.2004 Jeni Tan     CAR 44109
//           Modification for validating item date
// V9.03.00  27.02.2004 Jeni Tan     CAR 44109
//           Created js                      
//=============================================================================
//     Search item
//=============================================================================
function ItemSearch() {
        Itype=document.AddForm.pritm003;
         Code=document.AddForm.pritm004;
        Subit=document.AddForm.pritm005;
        Descp=document.AddForm.pritm006;
        dummy=" ";

  window.ReturnSpecMbs="";    // Var to set onblur on UpdateParent()
  InpType=Itype;
  PriMbsSearchFrame(Itype,Code,Subit,dummy,Descp,InpType,ValMBS);

}

//=============================================================================
//   Validating item code
//=============================================================================
function ValItm() {

  p=document.AddForm;

 if (p.pritm003.value==" 0") {
     p.dtype.selectedIndex=0;
     p.pritm003.value="M";
     }
   else {
     p.dtype.selectedIndex=1;
     p.pritm003.value="A";
     }

   ans=GetDesc(p.pritm003,p.pritm004,p.pritm005,p.pritm006,p.pritm001,p.pritm002,p.pritm007,p.pritm008,p.pritm009,p.pritm010,p.xamnt,p.testc101,p.s4flg101);

       setfo=p.pritm007;
       setTimeout('setfo.focus();',150);
  if (!ans) {
    return;
  }
}

//=============================================================================
//        Function Calling Remote Scripting To Get MBS Description 
//=============================================================================
function GetDesc(ReturnType,ReturnCode,ReturnSubn,ReturnDesc,DateField,TimeField,Quant,Amount,GstA,GstC,Iamnt,Testc,S4flg){
  code=ReturnType.name;

  if ((isWhitespace(ReturnCode.value))&&(isWhitespace(ReturnDesc.value))) {
     return; }

  ReturnCode.value=ReturnCode.value.replace(/ /g,"")
  ReturnDesc.value="";
  if (isWhitespace(ReturnCode.value)) { return; }
    
  serverURL = "../cgi-bin/priweb02.pbl?reportno=7" +
        "&valdtype=" + ReturnType.value.replace(/ /g,"+") +
        "&valdcode=" + ReturnCode.value +
        "&valdsubn=" + ReturnSubn.value.replace(/ /g,"+") +
        "&returndt=" + DateField.value.replace(/ /g,"+") +
        "&returntm=" + TimeField.value.replace(/ /g,"+") +
        "&claimcod=" + document.AddForm.claimcod.value.replace(/ /g,"+") +
        "&urnumber=" + document.AddForm.urnumber.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);    //Remote Script To Get MBS Description


  if (returnValue.status==0) {
   ReturnValue=returnValue.return_value.split("|");
   ReturnDesc.value=ReturnValue[0];
   ReturnDesc.value=ReturnDesc.value.toUpperCase()
   Amount.value=ReturnValue[1];
   Iamnt.value=ReturnValue[1];      // amount for single item
   justifyLeft(Amount);
   justifyLeft(Iamnt);

   GstA.value=ReturnValue[2];
   GstC.value=ReturnValue[3];

   ReturnCode.value=ReturnValue[5];
   ReturnCode.className="Mandatory";

   if (ReturnValue[7]==1) {
     ReturnDesc.className="Mandatory";  }
   else {
     ReturnDesc.className="ReadOnly"; 
     ReturnDesc.readOnly=true; 
     }

   if (ReturnValue[8]==1) {
     Amount.className="Number Mandatory"; }
   else {
     Amount.className="readonly";
     Amount.readOnly=true; 
     }

   Testc.value=ReturnValue[4];

   if ((ReturnValue[2]==2)&&(ReturnValue[4]==1)) {
        window.GstA=GstA;
        window.GstC=GstC;
        window.S4flg=S4flg;
        window.Quant=Quant;
        linkURL="priweb02.pbl?reportno=06&template=004" +
                "&urnumber=" + AddForm.urnumber.value.replace(/ /g,"+")

        Left=(document.body.clientWidth-350)/2
        DFrameLink(linkURL,120,Left,350,120) }

   else  {
      if (ReturnValue[2]==2) {
        window.GstA=GstA;
        window.GstC=GstC;
        window.Quant=Quant;
        linkURL="patweb75.pbl?reportno=01&template=002" +
                "&urnumber=" + AddForm.urnumber.value.replace(/ /g,"+")

        Left=(document.body.clientWidth-350)/2
        DFrameLink(linkURL,120,Left,350,120) }

   else {
       if (ReturnValue[4]==1) {
         window.S4flg=S4flg;
         window.Quant=Quant;
         linkURL="priweb02.pbl?reportno=01&template=018" +
                 "&urnumber=" + AddForm.urnumber.value.replace(/ /g,"+")

         Left=(document.body.clientWidth-350)/2
         DFrameLink(linkURL,120,Left,350,120) }
      }
   }
 }
 else {
   ReturnCode.select(); }

}


function ValMBS() {
  setTimeout('ValItm();',400);
}


function validatePMBS(ReturnCode,ReturnName,ReturnType,ReturnScod) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=4; i < validatePMBS.arguments.length; i++) {
    if (typeof(validatePMBS.arguments[i]) == 'function') {
      ReturnFunction=validatePMBS.arguments[i] }
    else {
      validatePMBS.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  if (isWhitespace(ReturnType.value)) return;;
  var serverURL   = "../cgi-bin/allweb01.pbl?reportno=9" +
                    "&valdtype=" + ReturnType.value.replace(/ /g,"+") +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&valdscod=" + ReturnScod.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")

//     ReturnName.value=trim(ReturnValue[0])

    j=0
    for (var i=4; i < validatePMBS.arguments.length; i++) {
       if (typeof(validatePMBS.arguments[i]) != 'function') {
         j++
         validatePMBS.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.select();
    return false;
     }
}

function setAmount(quantity,iamnt,amount) {
   amount.value=(quantity.value*iamnt.value);
   justifyLeft(amount)

}

