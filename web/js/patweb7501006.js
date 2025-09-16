//jsVersion  : V11.03.00
//=============================================================================
// Program   : patweb7501006.js
//
// Written   : 05.06.2007 
//
// Function  : Standard Functions Used in PATWEB75  Report 1
//             Template:006
//
// Version   :
//
// V10.05.01  05/08/2014  Peter Vela   CAR 302164
//            Added GetPriceCAB()
// V10.03.03  24/07/2013  Don Nguyen   CAR 288747
//            Added GetPrice() and called it in ValItm()
// V10.03.02  24/07/2013  Don Nguyen   CAR 288747
//            Fixed js error in GetDesc()
// V10.03.01  24/05/2012  J.Tan        CAR 264163
//            Mods checking for keyinamt/fixed charge
// V9.09.01   12/11/2007  J.Tan        CAR 151803
//            Added AMA Fee for Cabrini
//
//=============================================================================

//------------------------------------------------------------
// Function : Private Practice AMA/MBS Code Search Frame
//------------------------------------------------------------
function PriMbsSearchFrame(ReturnType,ReturnCode,ReturnSitm,ReturnDate
                          ,ReturnName) {

  window.ReturnFunction="";
  for (var i=4; i < PriMbsSearchFrame.arguments.length; i++) {
    if (typeof(PriMbsSearchFrame.arguments[i]) == 'function') {
      window.ReturnFunction=PriMbsSearchFrame.arguments[i];
    }
    else {
      var ItemType = new Object();
      ItemType=PriMbsSearchFrame.arguments[i];
    }
  }
  var PopUpFrameDoc = DFrameStart();

  window.ReturnType=ReturnType;
  window.ReturnCode=ReturnCode;
  window.ReturnSitm=ReturnSitm;
  window.ReturnDate=ReturnDate;
  window.ReturnName=ReturnName;
  window.ItemType=ItemType;

  PopUpFrameDoc.location.href = "../lookups/PriMbsSearchFrame.html";
  SearchFrameShow();
}
function ItemNext() {
  window.ReturnSpecMbs="";
  PriMbsSearchFrame(document.AddForm.itmtyp,
                    document.AddForm.proci001,
                    document.AddForm.sitem001,
                    document.AddForm.dummy,
                    document.AddForm.itemdesc,
                    document.AddForm.itype001,ValMBS);
}
function ValMBS() {
  setTimeout('ValItm();',400);
}


function ValItm() {
  if (document.AddForm.itmtyp.value==" 0") {
      document.AddForm.itype001.selectedIndex=0;
      document.AddForm.itmtyp.value="M";
      }
    else {
      document.AddForm.itype001.selectedIndex=1;
      document.AddForm.itmtyp.value="A";
      }

  GetDesc(document.AddForm.itype001,document.AddForm.proci001,
          document.AddForm.sitem001,document.AddForm.itemdesc,
          document.AddForm.procdate,document.AddForm.proctime,
          document.AddForm.pquan001,document.AddForm.itemamnt,
          document.AddForm.prc75per,document.AddForm.prc85per,
          document.AddForm.amafamnt,document.AddForm.keyinamt);

  GetPrice();
}
function GetPrice() {
  if (document.AddForm.schdf001[0].checked==true) {
    document.AddForm.pamnt001.value=
    (1*document.AddForm.amafamnt.value)*document.AddForm.pquan001.value;
  }
  if (document.AddForm.schdf001[1].checked==true) {
    document.AddForm.pamnt001.value=
    document.AddForm.prc85per.value*document.AddForm.pquan001.value;
    justifyLeft(document.AddForm.pamnt001);
  }
  if (document.AddForm.schdf001[2].checked==true) {
    document.AddForm.pamnt001.value=
    (1*document.AddForm.itemamnt.value)*document.AddForm.pquan001.value;
  }
  if (document.AddForm.schdf001[3].checked==true) {
    document.AddForm.pamnt001.value=
    document.AddForm.prc75per.value*document.AddForm.pquan001.value;
    justifyLeft(document.AddForm.pamnt001);
  }
  if (document.AddForm.schdf001[4].checked==true) {
    document.AddForm.pamnt001.value=
    (0.50*document.AddForm.itemamnt.value)*document.AddForm.pquan001.value;
  }

  if (document.AddForm.keyinamt.value==1) {
   document.AddForm.pamnt001.className="";
   document.AddForm.pamnt001.readOnly=false;
  } else {
   document.AddForm.pamnt001.className="ReadOnly";
   document.AddForm.pamnt001.readOnly=true;
  }

}
function GetPriceCAB() {
  if (document.AddForm.schdf001[0].checked==true) {
    document.AddForm.pamnt001.value=
    (1*document.AddForm.amafamnt.value)*document.AddForm.pquan001.value;
  }
  if (document.AddForm.schdf001[1].checked==true) {
    document.AddForm.pamnt001.value=
    (1*document.AddForm.itemamnt.value)*document.AddForm.pquan001.value;
  }
  if (document.AddForm.schdf001[2].checked==true) {
    document.AddForm.pamnt001.value=
    document.AddForm.prc75per.value*document.AddForm.pquan001.value;
    justifyLeft(document.AddForm.pamnt001);
  }

  if (document.AddForm.schdf001[3].checked==true) {
    document.AddForm.pamnt001.value=
    (1*document.AddForm.itemamnt.value)*document.AddForm.pquan001.value;
  }

  if (document.AddForm.schdf001[4].checked==true) {
    document.AddForm.pamnt001.value=
    (1*document.AddForm.itemamnt.value)*document.AddForm.pquan001.value;
  }

  if (document.AddForm.schdf001[5].checked==true) {
    document.AddForm.pamnt001.value=
    document.AddForm.prc85per.value*document.AddForm.pquan001.value;
    justifyLeft(document.AddForm.pamnt001);
  }
}
//=============================================================================
//        Function Calling Remote Scripting To Get MBS Description
//=============================================================================
function GetDesc(ReturnType,ReturnCode,ReturnSubn,ReturnDesc,DateField,TimeField
                ,Quant,Iamount,Prc75per,Prc85per,AMAFamnt,KeyinAmt){
  code=ReturnType.name;

//   alert(ReturnType.value);
//   alert(ReturnCode.value);

 var blankflag=false;
  if ((isWhitespace(ReturnCode.value))&&(isWhitespace(ReturnDesc.value))) {
     return; }

    for (var i=0; i < document.AddForm.length; i++) {
      if (document.AddForm.elements[i].name.match(/proci/)) {

        if (isWhitespace(document.AddForm.elements[i].value)) {
          setpos=i; // If editing already entered codes need to set position.
          blankflag=true;   // Found a blank row set true
          break; }}}

//    if (isWhitespace(ReturnDesc)) {
//     setpos=ItemNo; // If editing already entered codes need to set position.
//   }

  ReturnCode.value=ReturnCode.value.replace(/ /g,"")
  ReturnDesc.value="";
  if (isWhitespace(ReturnCode.value)) { return; }

  serverURL = "../cgi-bin/priweb02.pbl?reportno=7" +
        "&valdtype=" + ReturnType.value.replace(/ /g,"+") +
        "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
        "&valdsubn=" + ReturnSubn.value.replace(/ /g,"+") +
        "&returndt=" + DateField.value.replace(/ /g,"+") +
        "&returntm=" + TimeField.value.replace(/ /g,"+") +
        "&urnumber=" + document.AddForm.urnumber.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL); //Remote Script To Get MBS Description

  if (returnValue.status==0) {
   ReturnValue=returnValue.return_value.split("|");
   ReturnDesc.value=ReturnValue[0];
//   ReturnDesc.value=ReturnDesc.value.toUpperCase()

   ReturnCode.value=ReturnValue[5];
   ReturnCode.className="Mandatory";

   ReturnDesc.className="ReadOnly";
   ReturnDesc.readOnly=true;

   Iamount.value=ReturnValue[1];      // amount for single item
   justifyLeft(Iamount);

   Prc75per.value=ReturnValue[10]

   Prc85per.value=ReturnValue[11]

   AMAFamnt.value=ReturnValue[12]

   KeyinAmt.value=ReturnValue[8]

  }
 else {
   ReturnCode.select(); }

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
function setAmount(quantity,itemamnt,amount,percentage,Prc75per,Prc85per,AMAFamnt) {
  for(x=0;x<4;x++) {
    if(percentage[x].checked==true) {
      if(percentage[x].value==1.00 || percentage[x].value==0.50) {
        amount.value=(percentage[x].value*itemamnt.value)*quantity.value;
      } else {
        if (percentage[x].value==0.75) {
          amount.value=Prc75per.value*quantity.value;
        }

        if (percentage[x].value==0.85) {
          amount.value=Prc85per.value*quantity.value;
        }

        if (percentage[x].value==0) {
          amount.value=AMAFamnt.value*quantity.value;
        }
      }
      RoundNumber(amount,2);
      justifyLeft(amount);
      return;
    }
  }
  amount.value=(itemamnt.value)*quantity.value;
  RoundNumber(amount,2);
  justifyLeft(amount);
}
function subItems() {
//  document.AddForm.pamnt001.value=document.AddForm.itemamnt.value;
  document.AddForm.urnumber.value=
  document.AddForm.urnumber.value.replace(/ /g,"+");
  document.AddForm.admissno.value=
  document.AddForm.admissno.value.replace(/ /g,"+");
//  SubmitHidden(AddForm);
  SubmitFormNew();
}
function DisButton() {
  AddForm.PostButton.disabled=true;
  setInterval('AddForm.PostButton.disabled=false',6000);
}



