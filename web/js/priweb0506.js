//jsVersion  : V11.03.00
//========================================================================
// Program   : priweb0506.js
//
// Written   : 17.02.2004 Pat Dirito   
//
// Function  : Standard Functions Used in priweb0506
//
// Version   : 
//
// V9.09.01  04.10.2007  Davin           151459
//           Fix for item validation:
//           Added replace ' ' with '+' to prits002 in validatePath()
//           Added replace ' ' with '+' to prits002 in validateMultServ()
// V9.03.00  17.02.2004  Pat Dirito      44123
//           Created js
//========================================================================
function MBAVal() {
  var p=document.AddForm;
  ans=validatePath(p.mbstype,p.prits004,p.prits005,p.descript,p);
  if (!ans) { return; }
}
function AMAVal() {
  var p=document.AddForm;
  ans=validatePath(p.amatype,p.prits006,p.dumasub,p.amadesc,p);
  if (!ans) { return; }
}
function MBSUpd() {
  var p=document.UpdateForm;
  ans=validatePath(p.mbstype,p.prits004,p.prits005,p.descript,p);
  if (!ans) { return; }
}
function AMAUpd() {
  var p=document.UpdateForm;
  ans=validatePath(p.amatype,p.prits006,p.dumasub,p.amadesc,p);
  if (!ans) { return; }
}
function PriMbsSearch(ReturnType,ReturnCode,ReturnSitm,ReturnDate,ReturnName,ItemType,theForm) {
  var p=theForm;
  if (p.prits002!=undefined) {
    if (isWhitespace(p.prits002.value)) {  // Effective cannot be blank
      alert("Effective Date must be entered before Items!");
      ReturnCode.value="";
      p.prits002.focus();
      return false;
    }
  }
  var PopUpFrameDoc = DFrameStart();
  window.ReturnType=ReturnType;
  window.ReturnCode=ReturnCode;
  window.ReturnSitm=ReturnSitm;
  window.ReturnDate=ReturnDate;
  window.ReturnName=ReturnName;
  window.ItemType=ItemType;
  window.ReturnFunction="";
  if (PriMbsSearch.arguments.length > 6) {
    window.ReturnFunction=PriMbsSearch.arguments[7] }
  PopUpFrameDoc.location.href = "../lookups/PriMbsSearchFrame.html";
  SearchFrameShow();
}
function validatePath(ItemType,ItemCode,SubItem,ReturnName,theForm) {
  var p=theForm;
  if (isWhitespace(ItemCode.value)) { return true; }     
  if (isWhitespace(p.prits002.value)) {  // Effective cannot be blank
    alert("Effective Date must be entered before Items!");
    ItemCode.value="";
    p.prits002.focus();
    return false;
  }
  if (ItemType.value=="A") {
    var itmtype="1";
  } else {
    var itmtype="0";
  }
  var serverURL ="../cgi-bin/priweb05.pbl?reportno=8" +
                 "&valdtype=2" +
                 "&itemtype=" + itmtype +
                 "&itemnumb=" + ItemCode.value.replace(/ /g,"+") +
                 "&subitemn=" + SubItem.value.replace(/ /g,"+") +
                 "&prits002=" + p.prits002.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
  } else {
    if (itmtype=="1") {
      ItemCode.focus();
      ItemCode.value="";
      ReturnName.value="";
    } else {
      ItemCode.focus();
      ItemCode.value="";
      SubItem.value="";
      ReturnName.value="";
    }
    return false;
  }
  return true;
}
//------------------------------------------------------------
// Function : Multiple Services Search Frame
//------------------------------------------------------------
function MultSearch(ReturnCode,ReturnDesc,EffctDate) {
  if (isWhitespace(EffctDate.value)) {  // Effective cannot be blank
    alert("Effective Date must be entered before Items!");
    ReturnCode.value="";
    ReturnCode.value="";
    EffctDate.focus();
    return false;
  }
  ReturnFunction="" ;
  for (var i=3; i < MultSearch.arguments.length; i++) {
    if (typeof(MultSearch.arguments[i]) == 'function') {
      ReturnFunction=MultSearch.arguments[i] }
  }
  window.ReturnCode=ReturnCode;
  window.ReturnDesc=ReturnDesc;
  var PopUpFrameDoc = DFrameStart();
  PopUpFrameDoc.location.href = "priweb05.pbl?reportno=7&template=8";
  SearchFrameShow();
}
function validateService() {
  var p=document.AddForm;
  validateMultServ(p.prits007,p.prits002,p.servdesc);
}
function validateServiceUpd() {
  var p=document.UpdateForm;
  validateMultServ(p.prits007,p.prits002,p.servdesc);
}
//------------------------------------------------------------
// Function : Multiple Services Code Validation
//------------------------------------------------------------
function validateMultServ(ReturnCode,EffctDate,ReturnDesc) {
  if (isWhitespace(ReturnCode.value)) { return true; }     
  if (isWhitespace(EffctDate.value)) {  // Effective cannot be blank
    alert("Effective Date must be entered before Items!");
    ReturnCode.value="";
    ReturnCode.value="";
    EffctDate.focus();
    return false;
  }
  var serverURL ="../cgi-bin/priweb05.pbl?reportno=8" +
                 "&valdtype=3" +
                 "&prits007=" + ReturnCode.value.replace(/ /g,"+") +
                 "&prits002=" + EffctDate.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnDesc.value=trim(ReturnValue[0])
  } else {
    ReturnCode.focus();
    ReturnCode.value="";
    ReturnDesc.value="";
    return false;
  }
  return true;
}
function PostForm() {
  var p=document.AddForm;
  if ((isWhitespace(p.prits004.value)) && (isWhitespace(p.prits006.value))) { 
     alert("An MBS or AMA Item must be entered!");
     return; 
  }     

  var p=document.AddForm;
  var ans=true;

  ans=validatePath(p.mbstype,p.prits004,p.prits005,p.descript,p);
  if (!ans) { return; }
  ans=validatePath(p.amatype,p.prits006,p.dumasub,p.amadesc,p);
  if (!ans) { return; }
  ans=validateMultServ(p.prits007,p.prits002,p.servdesc);
  if (!ans) { return; }

  SubmitForm();
}
function UpdatePath() {
  var p=document.UpdateForm;
  if ((isWhitespace(p.prits004.value)) && (isWhitespace(p.prits006.value))) { 
     alert("An MBS or AMA Item must be entered!");
     return; 
  }     

  var p=document.UpdateForm;
  var ans=true;

  ans=validatePath(p.mbstype,p.prits004,p.prits005,p.descript,p);
  if (!ans) { return; }
  ans=validatePath(p.amatype,p.prits006,p.dumasub,p.amadesc,p);
  if (!ans) { return; }
  ans=validateMultServ(p.prits007,p.prits002,p.servdesc);
  if (!ans) { return; }

  setFormactn('U');
}
