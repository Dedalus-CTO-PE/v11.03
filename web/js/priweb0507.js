//jsVersion  : V11.03.00
//========================================================================
var ItemNo=100;
var tabcnt1=1;
var tabcnt2=2;
var tabcnt3=3;
var tabcnt4=4;
var validMBS=true;
var validAMA=true;
var currnum;
//
// CheckBlank allows for tabing AMA Item and entering nothing
// while having a code in MBS field
//
function CheckBlank(test,mbs,ama) {
//  alert("CheckBlank");
  if (!validMBS) { return; }
  if (!validAMA) { return; }
  if ((!isWhitespace(mbs.value)) && (isWhitespace(ama.value))) {
    NextRow();  // Still want to tab across field
  } else if ((isWhitespace(mbs.value)) && (isWhitespace(ama.value))) {
    test.blur();      // Nothing entered in MBS or AMA fields
    test.focus();
  }
}
//
// Validate MBS Code after return from Search
//
function ValMBSSearch() {
  var namecod1="prmbs" + currnum;
  var namecod2="dscrp" + currnum;
  var namecod3="prsub" + currnum;
  p=document.AddForm;
  ans=validatePMBS(p[namecod1],p[namecod2],p.mbstype,p[namecod3]);
  if (!ans) { 
    return; 
  }
  ans=validateMult(p.mbstype,p[namecod1],p[namecod3],p[namecod2],AddForm);
  if (!ans) {
    return;
  }
  NextRow();
}
//
// Validate AMA Code after return from Search
//
function ValAMASearch() {
  var p=document.AddForm;
  if (isWhitespace(p.priml002.value)) {  // Effective cannot be blank
    alert("Effective Date must be entered before Items!");
    ReturnCode.value="";
    p.priml002.focus();
    validMBS=false;
    return false;
  }
  var namecod1="prama" + currnum;
  var namecod2="amdsc" + currnum;
  var namecod3="dmsub" + currnum;
  p=document.AddForm;
  ans=validatePMBS(p[namecod1],p[namecod2],p.amatype,p[namecod3]);
  if (!ans) { 
    return; 
  }
  ans=validateMult(p.amatype,p[namecod1],p[namecod3],p[namecod2],AddForm);
  if (!ans) {
    return;
  }
  NextRow();
}
function NextRow() {     // Decide if displaying next row
//  alert("ItemNo = " + ItemNo);
 
  var set="0";
  for (var i=0; i < document.AddForm.length; i++) {
    if (document.AddForm.elements[i].name.match(/pripr/)) {
      if ((document.AddForm.elements[i+1].value=="") &&
         (document.AddForm.elements[i+5].value=="")) {
        set="1";
        break;
      }
    }
  }
  if (set=="0") { AddItem() }
}
function AddItem() {    // Output Row 
  ItemNo++
  if (ItemNo==101) {
    tabcnt1=tabcnt1+3; 
    tabcnt2=tabcnt2+3;
    tabcnt3=tabcnt3+3;
    tabcnt4=tabcnt4+3;
  } else {
    tabcnt1=tabcnt1+4; 
    tabcnt2=tabcnt2+4;
    tabcnt3=tabcnt3+4;
    tabcnt4=tabcnt4+4;
  }
  RecordCoding.innerHTML += 
                          "<table width=100% border=0 align=center " +
                          "cellpadding=1 cellspacing=0>" +
                          "<tr><td width=8%>" +
                          "<input type=text size=3 maxlength=3 name=pripr" +
                          ItemNo + " id=pripr" + ItemNo + 
                          " tabindex=" + tabcnt1 + 
                          " min=0 max=999 onblur='checkNumber(this);'></td>" +
                          "<td width=40%>" +
                          "<input type=text size=8 maxlength=9 name=prmbs" +
                          ItemNo + " id=prmbs" + ItemNo +
                          " title='MBS Item' tabindex=" + tabcnt2 +
                          "><input type=text name=prsub" + ItemNo + 
                          " id=prsub" + ItemNo + " size=1" +
                          " maxlength=3 onblur='validateMBS(prmbs" + ItemNo + 
                          ",dscrp" + ItemNo + ",mbstype,prsub" + ItemNo + 
                          ");' tabindex=" + tabcnt3 + "> " +
                          "<input type=text class='ReadOnly' readonly size=30" +
                          " title='Item-Description' name=dscrp" + 
                          ItemNo + " id=dscrp" + ItemNo + ">" +
                          "<img src='../images/SearchIcon.gif' class=Icon" +
                          " name=stepicon onclick='PriMbsSearchFrame(dumrtype" +
                          ",prmbs" + ItemNo + ",prsub" + ItemNo + ",dumdate," +
                          "dscrp" + ItemNo + ",mbstype,AddForm," + 
                          "ValMBSSearch);'>" +
                          "<img src='../images/erase.gif' class=Icon" +
                          " onclick='clrFields(prmbs" + ItemNo +
                          ",prsub" + ItemNo + ",dscrp" + ItemNo + ");'>" +
                          "</td>" + 
                          "<td width=36%>" +
                          "<input type=hidden name=dmsub" + ItemNo + 
                          " id=dmsub" + ItemNo +
                          " value=''>" + 
                          "<input type=text size=8 maxlength=9 name=prama" +
                          ItemNo + " id=prama" + ItemNo +
                          " title='AMA-Item' tabindex=" + tabcnt4 + 
                          " onblur='validateAMA(prama" + ItemNo + 
                          ",amdsc" + ItemNo + ",amatype,dmsub" + ItemNo + 
                          ");CheckBlank(pripr" + ItemNo + ",prmbs" + 
                          ItemNo + ",prama" + ItemNo + ");'> " +
                          "<input type=text class='ReadOnly' readonly size=30" +
                          " title='Item-Description' name=amdsc" + 
                          ItemNo + " id=amdsc" + ItemNo + ">" +
                          "<img src='../images/SearchIcon.gif' class=Icon" +
                          " name=stepicon onclick='PriMbsSearchFrame(dumrtype" +
                          ",prama" + ItemNo + ",dmsub" + ItemNo + ",dumdate," +
                          "amdsc" + ItemNo + ",amatype,AddForm," + 
                          "ValAMASearch);'>" +
                          "<img src='../images/erase.gif' class=Icon " +
                          " onclick='clrFields(prama" + ItemNo +
                          ",dmsub" + ItemNo + ",amdsc" + ItemNo + ");'>" +
                          "&nbsp;<img src='../images/DeleteIcon.gif' " +
                          "class=Icon onclick='clrFields(pripr" +
                          ItemNo + ",prmbs" + ItemNo + ",prsub" + ItemNo +
                          ",dscrp" + ItemNo + ",prama" + ItemNo +
                          ",dmsub" + ItemNo + ",amdsc" + ItemNo + ");'>" +
                          "</td>" + 
                          "</tr></table>";

  setTimeout('SetFo()',350);
  if (ItemNo==101) {
    document.AddForm.pripr101.className="Mandatory";
  }

//  alert(RecordCoding.innerHTML);
}
function SetFo() {
   if (ItemNo==101) { return; }
   var namecod="pripr" + ItemNo;
   document.AddForm[namecod].focus();
}
function PostForm() {
  var p=document.AddForm;
  var ans=true;
  var set="0";
  for (var i=0; i < document.AddForm.length; i++) {
    if (document.AddForm.elements[i].name.match(/pripr/)) {
      if (((!isWhitespace(document.AddForm.elements[i+1].value)) ||
         (!isWhitespace(document.AddForm.elements[i+5].value))) &&
         (isWhitespace(document.AddForm.elements[i].value))) { 
        alert("No. of Tests is Mandatory where either AMA/MBS Item are found!");
        set="1";
        break;
      }
      if (((isWhitespace(document.AddForm.elements[i+1].value)) &&
         (isWhitespace(document.AddForm.elements[i+5].value))) &&
         (!isWhitespace(document.AddForm.elements[i].value))) {
        alert("AMA/MBS is Madandatory when No. of Tests is found");
        set="1";
        break;
      }
      if (((isWhitespace(document.AddForm.pripr101.value)) &&
         (isWhitespace(document.AddForm.prmbs101.value))) &&
         (isWhitespace(document.AddForm.prama101.value))) {
        alert("First Multiple Item record is Madandatory please include!");
        set="1";
        break;
      }
      //
      //  Validate Each code just in case Effective Date has changed
      //
      var ReturnCode=document.AddForm.elements[i+1];
      var ReturnScod=document.AddForm.elements[i+2];
      var ReturnName=document.AddForm.elements[i+3];
      ans=validateMult(p.mbstype,ReturnCode,ReturnScod,ReturnName,AddForm);
      if (!ans) {
        set="1";
        break;
      }
      var ReturnScod=document.AddForm.elements[i+4];
      var ReturnCode=document.AddForm.elements[i+5];
      var ReturnName=document.AddForm.elements[i+6];
      ans=validateMult(p.amatype,ReturnCode,ReturnScod,ReturnName,AddForm);
      if (!ans) {
        set="1";
        break;
      }
    }
  }
  if (set=="0") { SubmitForm(); }
}
function validateMBS(ReturnCode,ReturnName,ReturnType,ReturnScod) {
  var p=document.AddForm;
  if (isWhitespace(p.priml002.value)) {  // Effective cannot be blank
    alert("Effective Date must be entered before Items!");
    ReturnCode.value="";
    p.priml002.focus(); 
    validMBS=false;   
    return false;
  }
  if (isWhitespace(ReturnCode.value)) {
    validMBS=true;
    return;
  }
  validMBS=validatePMBS(ReturnCode,ReturnName,ReturnType,ReturnScod);
  if (!validMBS) { 
    validMBS=false;   
    return; 
  }
  validMBS=validateMult(ReturnType,ReturnCode,ReturnScod,ReturnName,AddForm);
  if (!validMBS) { 
    validMBS=false;   
    return; 
  }
}
function validateAMA(ReturnCode,ReturnName,ReturnType,ReturnScod) {
  var p=document.AddForm;
  if (isWhitespace(p.priml002.value)) {  // Effective cannot be blank
    alert("Effective Date must be entered before Items!");
    ReturnCode.value="";
    p.priml002.focus(); 
    validAMA=false;   
    return false;
  }
  if (isWhitespace(ReturnCode.value)) {
    validAMA=true;
    return;
  }
  validAMA=validatePMBS(ReturnCode,ReturnName,ReturnType,ReturnScod);
  if (!validAMA) { 
    validAMA=false;   
    return; 
  }
  validAMA=validateMult(ReturnType,ReturnCode,ReturnScod,ReturnName,AddForm);
  if (!validAMA) { 
    validAMA=false;   
    return; 
  }
  NextRow()
}
//--------------------------------------------------------------------
//  Validate AMA/MBS Codes for Multiple Services
//--------------------------------------------------------------------
function validateMult(ItemType,ItemCode,SubItem,ReturnName,theForm) {
  if (isWhitespace(ItemCode.value)) { return true; }
  var p=theForm;
  if (ItemType.value=="A") {
    var itmtype="1";
  } else {
    var itmtype="0";
  }
  var serverURL ="../cgi-bin/priweb05.pbl?reportno=8" +
                 "&valdtype=1" +
                 "&itemtype=" + itmtype +
                 "&itemnumb=" + ItemCode.value.replace(/ /g,"+") +
                 "&subitemn=" + SubItem.value.replace(/ /g,"+") +
                 "&priml002=" + p.priml002.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    var Returndummy=trim(ReturnValue[0])
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
//
//  Same as function in Standard.js except for added global var at bottom!
//
function PriMbsSearchFrame(ReturnType,ReturnCode,ReturnSitm,ReturnDate,ReturnName,ItemType,theForm) {
  var p=theForm;
  if (p.priml002!=undefined) {
    if (isWhitespace(p.priml002.value)) {  // Effective cannot be blank
      alert("Effective Date must be entered before Items!");
      ReturnCode.value="";
      p.priml002.focus(); 
      validAMA=false;   
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
  if (PriMbsSearchFrame.arguments.length > 6) {
    window.ReturnFunction=PriMbsSearchFrame.arguments[7] }
  PopUpFrameDoc.location.href = "../lookups/PriMbsSearchFrame.html";
  SearchFrameShow();
  currnum=ReturnCode.name.substring(5,8);
}
function showItem(linkurl) {
  location.href=linkurl;
}
function ShowDetail(linkurl) {
  Left=(document.body.clientWidth-810)/2
  DFrameLink(linkurl,0,Left,810,470)
}
function AddDetail(linkurl) {
  p=document.SelectCode;
  link=linkurl + "&priml001=" + p.priml001.value;
  Left=(document.body.clientWidth-880)/2
  DFrameLink(link,0,Left,880,470)
}
