//jsVersion  : V11.03.00
//========================================================================
// Program   : allweb0407.js
//
// Written   : 06.02.2006 Ebon Clements
//
// Function  : Standard Functions Used in allweb0407*
//
// Version   :
//
// V9.05.B00 06.02.2006  Ebon Clements   CAR 87670
//           Created js
//========================================================================
function ShowEquipment() {
 location.href="allweb04.pbl?reportno=01&template=001" +
         "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
}
function validateEquip(ReturnCode,ReturnDesc,DepartDesc,Consumable,SerialN,Suppl,unitPrice) {
  if (isWhitespace(ReturnCode.value)) { return true; }
  var serverURL ="../cgi-bin/allweb01.pbl?reportno=8" +
                 "&functype=2" +
                 "&funccode=" + ReturnCode.value.replace(/ /g,"+");
    
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnDesc.value=trim(ReturnValue[0])
    DepartDesc.value=trim(ReturnValue[2])
    if (trim(ReturnValue[3])=="1") {
      Consumable.value="Yes";
    } else {
      Consumable.value="No";
    }
    SerialN.value=trim(ReturnValue[4])
    Suppl.value=trim(ReturnValue[5])
    unitPrice.value=trim(ReturnValue[6])
    linkurl="allweb04.pbl?reportno=07&template=002" +
           "&deptcode=" + ReturnValue[1].replace(/ /g,"+") +
           "&alequ001=" + document.UpdateForm.equipcod.value.replace(/ /g,"+")
    Left=(document.body.clientWidth-750)/2
    DFrameLink(linkurl,0,Left,750,500)
  } else {
    ReturnCode.focus();
    ReturnCode.value="";
    ReturnDesc.value="";
    DepartDesc.value="";
    Consumable.value="";
    SerialN.value="";
    Suppl.value="";
    unitPrice.value="";
    return false;
  }
  return true;
}
//------------------------------------------------------------
// Function : Equipment Search Frame
//------------------------------------------------------------
function EquipSearch(ReturnCode,ReturnDesc,DepartDesc,Consumable,SerialN,Suppl,unitPrice) {
  ReturnFunction="" ;
  for (var i=4; i < EquipSearch.arguments.length; i++) {
    if (typeof(EquipSearch.arguments[i]) == 'function') {
      ReturnFunction=EquipSearch.arguments[i] }
  }
  window.ReturnCode=ReturnCode;
  window.ReturnDesc=ReturnDesc;
  window.DepartDesc=DepartDesc;
  window.Consumable=Consumable;
  window.SerialN=SerialN;
  window.Suppl=Suppl;
  window.unitPrice=unitPrice;
  var PopUpFrameDoc = DFrameStart();
  PopUpFrameDoc.location.href = "allweb01.pbl?reportno=1&template=4";
  SearchFrameShow();
}
function ShowEquip() {
  d=UpdateForm
  validateEquip(d.equipcod,d.equpdesc,d.dum1,d.dum2,d.dum3,d.dum4,d.dum5);
}
