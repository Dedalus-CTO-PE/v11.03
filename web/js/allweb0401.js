//jsVersion  : V11.03.00
//========================================================================
// Program   : allweb0401.js
//
// Written   : 20.02.2004 Pat Dirito
//
// Function  : Standard Functions Used in allweb0401*
//
// Version   :
// V10.00.01 26.07.2010  Ebon Clements   149887
//           Added AddRecordRedirect()
// V9.11.02  03.04.2009  Saroeun Soeur   192750
//           added function to check for consumable 
//           items to disable expected return date
// V9.11.01  27.01.2009  Ebon Clements   184842
//           Added LoanDates()
// V9.04.01  13.12.2004  Peter Vela      55406
//           Added Serial Number and Supplier Code return parameters for 
//           sinweb0401002.html
// V9.03.00  20.02.2004  Pat Dirito      43997
//           Created js
//========================================================================
//------------------------------------------------------------
// Function : Equipment Code Validation
//------------------------------------------------------------
function validateEquip(ReturnCode,ReturnDesc,DepartDesc,Consumable,SerialN,Suppl,unitPrice) {
  if (isWhitespace(ReturnCode.value)) { return true; }
  var serverURL ="../cgi-bin/allweb01.pbl?reportno=8" +
                 "&functype=1" +
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
  checkConsumable();
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
  PopUpFrameDoc = DFrameStart();
  PopUpFrameDoc.location.href = "allweb01.pbl?reportno=1&template=4";
  SearchFrameShow();
}
function CheckDateRange(FromInput,ToInput) {
  if (isWhitespace(ToInput.value)) { return true; }
  if (SetDateYYYYMMDD(FromInput.value) > SetDateYYYYMMDD(ToInput.value)) {
    alert(ToInput.title + " must be > than " + FromInput.title);
    return false }
  else {
    return true }
}
function ValEquip() {
  p=document.AddForm;
  validateEquip(p.allon004,p.equpdesc,p.deptdesc,p.consumab,p.dummy,p.dummy1,p.dummy2) 
}
function AddRecord() {
  document.AddForm.nextpage.value="0";
  document.AddForm.redirect.value="";
  if(document.AddForm.consumab.value == "Yes")
  {
    document.AddForm.allon010.className="ReadOnly";
    document.AddForm.allon010.value="";

  }
  ans=CheckDateRange(AddForm.allon005,AddForm.allon010)
  if (!ans) {return}
  ans=CheckDateRange(AddForm.allon005,AddForm.allon011)
  if (!ans) {return}
  SubmitHiddenNew(AddForm);
}
function AddRecordRedirect() {
  document.AddForm.nextpage.value="4";
  document.AddForm.redirect.value="allweb04.pbl?reportno=01&template=002" +
         "&urnumber=" + document.AddForm.urnumber.value.replace(/ /g,"+") +
         "&allon001=" + document.AddForm.urnumber.value.replace(/ /g,"+") 
  if(document.AddForm.consumab.value == "Yes")
  {
    document.AddForm.allon010.className="ReadOnly";
    document.AddForm.allon010.value="";

  }
  ans=CheckDateRange(AddForm.allon005,AddForm.allon010)
  if (!ans) {return}
  ans=CheckDateRange(AddForm.allon005,AddForm.allon011)
  if (!ans) {return}
  SubmitHiddenNew(AddForm);
}
function LoanDates() {
  if(isWhitespace(document.AddForm.allon008.value)) {
    document.AddForm.allon010.className="";
    document.AddForm.allon011.className="";
  }
  if(document.AddForm.allon008.value.substr(3,1) == "1") {
    document.AddForm.allon010.className="Mandatory";
    document.AddForm.allon011.className="";
  } else if(document.AddForm.allon008.value.substr(3,1) == "2") {
    document.AddForm.allon010.className="";
    document.AddForm.allon011.className="Mandatory";
  } else {
    document.AddForm.allon010.className="";
    document.AddForm.allon011.className="";
  }

  if(document.AddForm.consumab.value == "Yes")
     document.AddForm.allon010.className="ReadOnly";

}
//*******************************************************
// check consumable items
//    disable the return date 
//*******************************************************
function checkConsumable()
{
	var item = document.AddForm.consumab;
	
	if(item.value=="Yes")
        { 
          document.AddForm.allon010.disabled=true; 
          document.AddForm.allon010.className="ReadOnly";
          document.AddForm.allon010.value="";
        }
        else
        {
          document.AddForm.allon010.disabled=false;
          
          if(document.AddForm.allon010.className == "ReadOnly")
             document.AddForm.allon010.className="";
         
	  LoanDates();
        } 
}




