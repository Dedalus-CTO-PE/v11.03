//jsVersion  : V11.03.00
//========================================================================
// Program   : comweb04.js
//
// Function  : Standard Functions Used in comweb04  
//
// Version   :
//
// V9.03.00    20/05/2004 Davin   CAR 49527
//             Created new.
//
//========================================================================
//
//========================================================================
//   Report 1
//========================================================================
function ShowDetail01(linkurl,admin) {
  Left=(document.body.clientWidth-400)/2
  DFrameLink(linkurl,0,Left,400,250)
}
function EditChrgtyp01() {
  if (isWhitespace(SelectCode.startkey.value)) return;
  SelectCode.template.value=3
  SelectCode.chtyp001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-400)/2
  DFrameSubmit(SelectCode,0,Left,400,250)
}
function StartList01() {
  location.href="comweb04.pbl?reportno=01&template=001"
}
function CheckType(type,selectlist)  {
  var found=0;
 if (isWhitespace(type.value)) {
    selectlist.selectedIndex=0;
    return; }
  for (var i =0 ; i < selectlist.length; i++) {
    if (selectlist.options[i].value.substr(0,3)==type.value) {
      found=1
      selectlist.selectedIndex=i } }
  if (found==0) {
    alert("Invalid Charge Type Entered")
    selectlist.selectedIndex=0
    type.focus() }
}
function UpdateType(type,selectlist) {
  type.value=selectlist.value.substr(0,3);
}

//========================================================================
//   Report 2
//========================================================================
function ShowDetail02(linkurl,admin) {
  Left=(document.body.clientWidth-550)/2
  DFrameLink(linkurl,0,Left,550,350)
}
function EditExtNum02() {
  if (isWhitespace(SelectCode.startkey.value)) return;
  SelectCode.template.value=3
  SelectCode.ibext001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-550)/2
  DFrameSubmit(SelectCode,0,Left,550,350)
}
function StartList02() {
  location.href="comweb04.pbl?reportno=02&template=001"
}

function SetDebtorFld(thisForm) {
  var extType = thisForm.ibext004.value;
  if (extType == 3) {     // Accounts Receivable - Debtor is required
    thisForm.ibext005.disabled = false;
    thisForm.debtname.disabled = false;
    thisForm.debtsrch.disabled = false;
    thisForm.debtclr.disabled = false;
    thisForm.ibext005.className = "Mandatory";
  }
  else {
    thisForm.ibext005.value = "";
    thisForm.debtname.value = "";
    thisForm.ibext005.className = "";
    thisForm.ibext005.disabled = true;
    thisForm.debtname.disabled = true;
    thisForm.debtsrch.disabled = true;
    thisForm.debtclr.disabled = true;
  }
}

//========================================================================
//   Report 3
//========================================================================
function getDebtorDesc(elCode,elDesc) {
  if (isWhitespace(elCode.value)) {
    elDesc.options.selectedIndex=0;
    return;
  }

  var sPad = "    ";
  var sCode = elCode.value + sPad.substr(0,(4 - elCode.value.length));
  for (i=0;i<elDesc.options.length;i++) {
    if (elDesc.options[i].value == sCode) {
      elDesc.options.selectedIndex=i;
      return;
    }
  }

  // The code below is executed only if the CLinic Id code is not balnk
  // and the specified code was not found inisde the selection list.
  alert("Invalid Extension Number.");
  elDesc.options.selectedIndex=0;
  elCode.focus();
  elCode.select();
}

function getDebtorCode(elDesc,elCode) {
  elCode.value = elDesc.value;
}

function FilterSubmit() {
  if (isWhitespace(Filter.fltrextn.value) && 
      isWhitespace(Filter.fltrdebt.value) &&
      isWhitespace(Filter.fltradmn.value)) {
    alert("Please Enter Extension or Debtor or Admission Number.");
    return;
  }

  if (!isWhitespace(Filter.fltrfrdt.value) && 
      !isWhitespace(Filter.fltrtodt.value) &&
      Filter.fltrfrdt.value > Filter.fltrtodt.value) {
    alert("Invalid Date Range Entered. From Date is greater than To Date." );
    return;
  }

  Filter.submit();
}

function ClearForm() {
  var form=document.Filter;
  form.fltrextn.value = "";
  form.extndesc.selectedIndex = 0;
  form.fltradmn.value = "";
  form.patnname.value = "";
  form.fltrdebt.value = "";
  form.debtname.value = "";
  form.fltrfrdt.value = "";
  form.fltrtodt.value = "";
  form.fromdate.value = "Start";
  form.todate.value = "Finish";
  form.fltrbill.selectedIndex = 0;
  SetAdmFilter();
  SetFilters();
}


function valStrDate(dispDate,dateTitle,numDate) {
  if (dispDate.value != "Start")
    checkDate(dispDate,dateTitle,numDate);
}

function valEndDate(dispDate,dateTitle,numDate) {
  if (dispDate.value != "Finish")
    checkDate(dispDate,dateTitle,numDate);
}

function SetStartDate() {
  if (isWhitespace(document.Filter.fromdate.value)) {
    document.Filter.fromdate.value = "Start";
    document.Filter.fltrfrdt.value ="";
  }
}
function SetFinishDate() {
  if (isWhitespace(document.Filter.todate.value)) {
    document.Filter.todate.value = "Finish";
    document.Filter.fltrtodt.value ="";
  }
}

function valAdmission() {
  var form=document.Filter;
  justifyRight(form.fltradmn);
  validateCode(45,form.fltradmn,form.patnname) 
  SetFilters();
}  

function SetFilters() {
  var form=document.Filter;
  if (isWhitespace(form.fltradmn.value)) { 
    form.fltrdebt.disabled = false;
    form.debtname.disabled = false;
    form.debtsrch.disabled = false;
    form.debtclr.disabled = false;
    form.fromdate.disabled = false;
    form.frdtstmp.disabled = false;
    form.frdtlook.disabled = false;
    form.todate.disabled = false;
    form.todtstmp.disabled = false;
    form.todtlook.disabled = false;
    form.fltrbill.disabled = false;
  }
  else {
    form.fltrdebt.value = "";
    form.debtname.value = "";
    form.fltrdebt.disabled = true;
    form.debtname.disabled = true;
    form.debtsrch.disabled = true;
    form.debtclr.disabled = true;
    form.fromdate.value = "Start";
    form.fltrfrdt.value ="";
    form.fromdate.disabled = true;
    form.frdtstmp.disabled = true;
    form.frdtlook.disabled = true;
    form.todate.value = "Finish";
    form.fltrtodt.value ="";
    form.todate.disabled = true;
    form.todtstmp.disabled = true;
    form.todtlook.disabled = true;
    form.fltrbill.selectedIndex = 0;
    form.fltrbill.disabled = true;
  }
}

function SetAdmFilter() {
  var form=document.Filter;
  if (isWhitespace(form.fltrdebt.value)) {
    form.fltradmn.disabled = false;
    form.patnname.disabled = false;
  }
  else {
    form.fltradmn.value = "";
    form.patnname.value = "";
    form.fltradmn.disabled = true;
    form.patnname.disabled = true;
  }
}

//-----------------------------------------------------------------------------
// Function : Accounts Receivable Debtor Search Frame
//-----------------------------------------------------------------------------
function ARDebtorSearch(ReturnUR,ReturnName)
{
  ReturnFunction="" ;
  window.ReturnName=ReturnName ;
  window.ReturnUR=ReturnUR ;
  var PopUpFrameDoc = DFrameStart();
  PopUpFrameDoc.location.href = "priweb01.pbl?reportno=4&template=5";
  SearchFrameShow();
}

//-----------------------------------------------------------------------------
// Function : Remote validation for Accounts Receivable Debtor field
//-----------------------------------------------------------------------------
function validateARDebtor(debtcode,debtdesc) {
  debtdesc.value="";
  if (isWhitespace(debtcode.value)) 
    return;
  var serverURL = "../cgi-bin/patweb80.pbl?reportno=60&valdcode=" +
                  debtcode.value.replace(/ /g,"+");
  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    debtdesc.value = ReturnValue[0];
  }
  else
    debtcode.select();
}
