//jsVersion  : V11.03.03
//========================================================================
// Program   : oprweb06.js
//
// Written   : 07.07.2001 HPS BLR
//
// Function  : Standard Functions Used in OPRWEB06  
//=============================================================================
//                 Report 2  template:001 
//=============================================================================
var ItemNo=100;    // Need this to be 100 as the cgi var has to be 8 chars
var itemcont=0;    // start of coding section counter
//=============================================================================
//                   Function For Input Of CMBS Item Codes        
//=============================================================================

function AddItem02() {
  ItemNo++;
  var CodeLineHTML = "";
  CodeLineHTML += "<center>" +
                  "<input type=hidden name=dummy >" + 
                  "<input type=hidden name=count" + ItemNo +
                  " id=count" + ItemNo +
                  " value=" + ItemNo + ">" +
                  "<input type=text size=10 maxlength=9 " +
                  " name=mbscd" + ItemNo + " id=mbscd" + ItemNo +
                  " onblur=GetDesc(mbscd" + ItemNo +
                  ",mbsde" + ItemNo + ");>" + 
                  "<input type=text size=65 " +
                  " name=mbsde" + ItemNo + " id=mbsde" + ItemNo +
                  " class=Readonly readonly>" +
                  "<img src='../images/ClearIcon.gif' class='Icon'" +
                  " onclick=ClrItm(mbscd" + ItemNo + ",mbsde" +
                  ItemNo + ");>" +
                  "<br></center>";

//Cross Browser - Start
//NOTE:Cross browser changes to retain the values in the dynamic html on
//browsers eg. firefox/chrome
//Every time an append occurs, a new element has to be created, the append
//string assigned to the innerHTML of the new element, and an append child to
//the div. This will retain all values in the dynamic html being appended to.
  var node = document.createElement("RCElement");
  node.innerHTML=CodeLineHTML;
  document.getElementById("RecordCoding").appendChild(node);
//Cross Browser - End

  if (ItemNo==101) {
     document.AddForm.mbscd101.className="Mandatory"; 
     document.AddForm.mbscd101.title="MBS Item Code";
     document.AddForm.mbsde101.title="MBS Item Description";
     
  }
  for (var i=itemcont; i < document.AddForm.length; i++) {
     if (document.AddForm.elements[i].name.match(/mbscd/)) {
       if (document.AddForm.elements[i].value=="") {
          document.AddForm.elements[i].focus();
          document.AddForm.elements[i].select();
          itemcont=i;                      // Start of Coding Section counter
          break;
        }
     }
   }
} 
//=============================================================================
//        Function Calling Remote Scripting To clear MBS item code and desc.
//=============================================================================
function ClrItm() {
  if (document.AddForm.itemcont.value==0) { ItemNo=100; }

  if (arguments[0].value!="") {
    document.AddForm.itemcont.value--;
  }

  for (var i = 0; i < arguments.length; i++) {
    arguments[i].value="";
    arguments[i].className="";
  }
  arguments[0].focus(); // Set focus back to Item Code input field
}
//=============================================================================
//        Function Calling Remote Scripting To Get MBS Description 
//=============================================================================
function GetDesc(ReturnCode,ReturnName){
  caseKeys=AddForm.casekeys.value.replace(/ /g,"+");
  Miscdate=AddForm.miscdate.value.replace(/ /g,"+");
  teamNumb=AddForm.teamnumb.value
  ReturnCode.value=ReturnCode.value.replace(/ /g,"")
  ReturnName.value="";
  if (isWhitespace(ReturnCode.value))
    return;
  var Url =  "../cgi-bin/patweb80.pbl?reportno=4&valdcode="+ReturnCode.value +
                          "&casekeys=" + caseKeys + "&teamnumb=" + teamNumb +
                          "&valdedat=" + Miscdate;
  var returnValue = RSExecute(Url);    //Remote Script To Get MBS Description
  if (returnValue.status==0) {
   ReturnValue=returnValue.return_value.split("|");
   ReturnName.value=ReturnValue[0];
   ReturnName.value=ReturnName.value.toUpperCase()

   if (ReturnValue[5]==1) {
     alert("Warning: This is an Exclusion List Item.");
   }
 
   if (ReturnValue[6]==1) {
     alert("Warning: A Prosthetic may need to be entered.");
   }

   if (ReturnValue[7]==1) {
     i=ReturnValue[8];
     alert("Warning: Admission Type Should be " + i);
   }

   if (ReturnValue[7]==2) {
     alert("Warning: Invalid Suggested Admission Type.");
   }

   if (ReturnValue[7]==3) {
     alert("Warning: Item has been Entered in the Previous Invoice.");
   }

   if (ReturnValue[7]==4) {
     alert("Warning: Possible Admission Type Changed Required.");
   }

   if (ReturnValue[7]==5) {
     alert("Warning: Possible Admission Type Changed Required and Item " +
           "has been Entered in Previous Invoice.");
   }

   if (ReturnValue[7]==6) {
     i=ReturnValue[9];
     alert("Warning: Adm Type: " + i + " for this patient is excluded from " +
           "auto adm type update.");
   }

   document.AddForm.itemcont.value++;
   AddItem02();  
  }
 else {
   ReturnCode.select(); }   
}
// for upadate screen
function GetDesc1(ReturnCode,ReturnName,EffDate){
  ReturnCode.value=ReturnCode.value.replace(/ /g,"")
  ReturnName.value="";
  if (isWhitespace(ReturnCode.value))
    return;

  if(EffDate!=undefined){
  var Url = "../cgi-bin/patweb80.pbl?reportno=4&valdcode="+ReturnCode.value+
                    "&valdedat=" + EffDate.value.replace(/ /g,"+")

  } else {
  var Url = "../cgi-bin/patweb80.pbl?reportno=4&valdcode="+ReturnCode.value;
  }

  var returnValue = RSExecute(Url);    //Remote Script To Get MBS Description
  if (returnValue.status==0) {
   ReturnValue=returnValue.return_value.split("|");
   ReturnName.value=ReturnValue[0];
   ReturnName.value=ReturnName.value.toUpperCase()
  }
 else {
   ReturnCode.select();
}
}
//=============================================================================
//                  Function For Calling MBS Search Frame
//=============================================================================
function MbsProNext(EffDate) {
  for (var i=itemcont; i < document.AddForm.length; i++) {
     if (document.AddForm.elements[i].name.match(/mbscd/)) { 
       if (isWhitespace(document.AddForm.elements[i].value)) {
        Code=document.AddForm.elements[i]; 
       break; }
       }
    }

  window.ReturnSpecMbs="";    // Var to set onblur on UpdateParent()

  if(EffDate!=undefined){
    window.EffDate=EffDate ;
    MbsSearchFrame(Code,AddForm.dummy,EffDate);        // Custom MBS Search 
  } else { 
    MbsSearchFrame(Code,AddForm.dummy);                // Custom MBS Search 
  }

}
//=============================================================================
//                   Function Called Before Submitting Form
//============================================================================= 
function Warn() {
  if (validateMandatory(AddForm)) {
    DisButton(AddForm.addmbsbt);    // Disable button to avoid double clicking
    AddForm.submit();
  }
}
function DisButton(buttField) {
  buttField.disabled=true;
  setInterval('buttField.disabled=false',6000);
}
//=============================================================================
//                    Add Bulk Expensive Items
//=============================================================================
function AddItem04() {
  ItemNo++;
  document.AddForm.itemcont.value = ItemNo - 101;

  var CodeLineHTML = "";
  var userAgent = window.navigator.userAgent;
  var descFieldSize = (userAgent.indexOf("MSIE ") >= 1) ? 75 : 82; // IE5 & IE11

  if (userAgent.indexOf("Firefox") >= 1) {
    descFieldSize = 60;
  }
  else if (userAgent.indexOf("Chrome") >= 1) {
    descFieldSize = 70;
  }
    
  CodeLineHTML += "&nbsp;" +
                  "<input type=hidden name=count" + ItemNo + 
                  " id=count" + ItemNo + ">" +
                  "<input type=text size=10 maxlength=9 name=expit" +
                  ItemNo + " id=expit" + ItemNo +
                  " onblur=CheckExpItems(expit" + ItemNo +
                  ",mbsde" + ItemNo + ");>" +
                  "<input type=text size=" + descFieldSize + 
                  " name=mbsde" + ItemNo + " id=mbsde" + ItemNo +
                  " onblur=ExpProNext1(this," + "expit" + ItemNo + ");>" +
                  "<input type=text size=10 name=quant" + ItemNo +
                  " id=quant" + ItemNo +
                  " title='Quantity' maxlength=8 class=Integer>" +
                  "&nbsp;" +
                  "<input type=checkbox name=nchrg" + ItemNo +
                  " id=nchrg" + ItemNo + " value=1>" +
                  "&nbsp;" +
                  "&nbsp;" +
                  "&nbsp;" +
                  "&nbsp;" +
                  "&nbsp;" +
                  "<input type=checkbox name=brokn" + ItemNo +
                  " id=brokn" + ItemNo + " value=1><br>";

//Cross Browser - Start
//NOTE:Cross browser changes to retain the values in the dynamic html on
//browsers eg. firefox/chrome
//Every time an append occurs, a new element has to be created, the append
//string assigned to the innerHTML of the new element, and an append child to
//the div. This will retain all values in the dynamic html being appended to.
  var node = document.createElement("RCElement");
  node.innerHTML=CodeLineHTML;
  document.getElementById("RecordCoding").appendChild(node);
//Cross Browser - End

  // Make all lines except last one mandatory
  for (var i=0; i < document.AddForm.length-7 ; i++) {  
    if (document.AddForm.elements[i].name.match(/quant/)){
       document.AddForm.elements[i].className="Integer Mandatory";
       document.AddForm.elements[i].min=1;
    }  
    if (document.AddForm.elements[i].name.match(/expit/)){
       document.AddForm.elements[i].className="Mandatory";
       document.AddForm.elements[i].title="Expensive Item";
    }  
  }

  // if first line, set mandatory & focus
  if (ItemNo==101) {
    document.AddForm.expit101.title="Expensive Item Code";
    document.AddForm.mbsde101.title="Expensive Item Description";
    document.AddForm.expit101.className="Mandatory";
    document.AddForm.quant101.className="Integer Mandatory";
    document.AddForm.quant101.value="";
    document.AddForm.quant101.min=1;
    setTimeout('document.AddForm.expit101.focus();',1);
    return;
  }

  // set focus on quantity if blank
  for (var i=itemcont; i < document.AddForm.length; i++) {
    if (document.AddForm.elements[i].name.match(/quant/)) {
      if (isWhitespace(document.AddForm.elements[i].value)) {
        setTimeout('document.AddForm.elements['+i+' ].focus()',1);
        itemcont=i;           // Start of Coding Section counter
        break; 
      } 
    } 
  }
}
//=============================================================================
//     Function Calling Remote Scripting to Get Expensive Item Description 
//=============================================================================
function CheckExpItems(ReturnCode,ReturnName){
  if (isWhitespace(ReturnCode.value)) {
    ReturnName.value="";
    return; 
  }
  ReturnCode.value=ReturnCode.value.toUpperCase(); 
  ReturnCode.value=ReturnCode.value.replace(/ /g,"")
  ReturnName.value="";
  if (isWhitespace(ReturnCode.value))return;;
  Url=  "../cgi-bin/patweb80.pbl?reportno=21&valdcode="+ReturnCode.value;
  var returnValue = RSExecute(Url);
    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|");
      ReturnName.value=ReturnValue;
      var AddLine=1
      for (var i=0; i < document.AddForm.length; i++) {
       if (document.AddForm.elements[i].name.match(/expit/)) {
         if (isWhitespace(document.AddForm.elements[i].value)) {
           AddLine=0;
           break;
         } 
       }
      }
      if(AddLine) {
        AddItem04();
      }
    } else {
      ReturnCode.select(); 
    }
}
function FindBlank() {
  for (var i=itemcont; i < document.AddForm.length; i++) {
    if (document.AddForm.elements[i].name.match(/quant/)) {
      if (document.AddForm.elements[i].value=="") {
         document.AddForm.elements[i].focus();
         break; } } }
}
function ExpProNext() {
  for (var i=0; i < document.AddForm.length; i++) {
    if (document.AddForm.elements[i].name.match(/expit/)) {
       if (isWhitespace(document.AddForm.elements[i].value)) {
         ThisCode=document.AddForm.elements[i];
         break; 
       }
     } 
   }
  ExpItemSearchFrame(ThisCode); 
}
function ExpProNext1(ItemCodeDesc,ItemCode) {
 if(!isWhitespace(ItemCode.value)) {
   return;
 }
 AddForm.expcase.value=trim(ItemCodeDesc.value);
 if (!isWhitespace(AddForm.expcase.value)) {
   for (var i=0; i < document.AddForm.length; i++) {
     if (document.AddForm.elements[i].name.match(/expit/)) {
        if (isWhitespace(document.AddForm.elements[i].value)) {
         Code=document.AddForm.elements[i];
         break; 
        }
     } 
   }
  ExpItemSearchFrame01(Code); 
 }
}
//=============================================================================
//                  Function For validating EAN number	
//=============================================================================
function CheckEAN(FormName){
  var serverURL= "../cgi-bin/patweb80.pbl?reportno=22&valdcode=" + 
                 FormName.opthi001.value;
  ReturnValue=RSExecute(serverURL);

  if(ReturnValue.status==0){
    Value=ReturnValue.return_value.split("|");
    if (Value!=0){
      FormName.opthi001.readOnly=true;
      FormName.opthi001.className="Readonly";

      FormName.opthi002.value=Value[0];
      FormName.opthi002.readOnly=true;
      FormName.opthi002.className="Readonly";

      SetCombo3(FormName.opthi003,Value[1])
      FormName.opthi003.disabled=true;

//    SetCombo(FormName.opthi004,Value[2])
      FormName.opthi004.value=Value[2]; 
      FormName.opthi004.disabled=true;
      FormName.miscbutt.disabled=true;

      FormName.opthi005.value=Value[3];
      FormName.opthi005.readOnly=true;
      FormName.opthi005.className="Readonly";

      FormName.opthi006.value=Value[4];
      FormName.opthi006.readOnly=true;
      FormName.opthi006.className="Readonly";

      FormName.opthi007.value=Value[5];
      FormName.opthi007.readOnly=true;
      FormName.opthi007.className="Readonly";

      FormName.opthi008.value=Value[6];
      FormName.opthi008.readOnly=true;
      FormName.opthi008.className="Readonly";
      FormName.opthi008.value=FormName.opthi008.value.replace(/ /g,"");
 //   FormatDataFields(FormName);
    }
  }
  else{
    FormName.opthi001.select();
  }
}
//=============================================================================
//                  Function For validating Bcode 
//=============================================================================
function CheckBarcode(FormName){
  if(isWhitespace(FormName.opthi012.value)) { return; }
  var eanno= document.getElementById('eannumbr');
  var serverURL= "../cgi-bin/patweb80.pbl?reportno=22&valdcode=" + eanno.value +
                 "&valbcode=" + FormName.opthi012.value;
  ReturnValue=RSExecute(serverURL);

  if(ReturnValue.status==0){
    Value=ReturnValue.return_value.split("|");
    if (Value!=0){
      FormName.opthi012.readOnly=true;
      FormName.opthi012.className="Readonly";

      FormName.opthi002.value=Value[0];
      FormName.opthi002.readOnly=true;
      FormName.opthi002.className="Readonly";

      SetCombo3(FormName.opthi003,Value[1])
      FormName.opthi003.disabled=true;

//    SetCombo(FormName.opthi004,Value[2])
      FormName.opthi004.value=Value[2];
      FormName.opthi004.disabled=true;
      FormName.miscbutt.disabled=true;

      FormName.opthi005.value=Value[3];
      FormName.opthi005.readOnly=true;
      FormName.opthi005.className="Readonly";

      FormName.opthi006.value=Value[4];
      FormName.opthi006.readOnly=true;
      FormName.opthi006.className="Readonly";

      FormName.opthi007.value=Value[5];
      FormName.opthi007.readOnly=true;
      FormName.opthi007.className="Readonly";

      FormName.opthi008.value=Value[6];
      FormName.opthi008.readOnly=true;
      FormName.opthi008.className="Readonly";
      FormName.opthi008.value=AddForm.opthi008.value.replace(/ /g,"");
 //   FormatDataFields(FormName);
    }
  }
  else{
    FormName.opthi012.value="";
    FormName.opthi012.select();
  }
}
//=============================================================================
//        Function for getting Item Code Description
//=============================================================================
function GetItemDesc(fieldCode,errCode) {
  formName = fieldCode.form;
  itemCode=fieldCode.value;
  for(var i=0 ; i < formName.length ; i++) {
    if (formName.elements[i].name.match(fieldCode.name)) {
      break;
    }
  }
  if(itemCode.replace(/ /g,"") == "") {
    formName.elements[i+1].value = "";
    return;
  } 
  var serverURL=  "../cgi-bin/patweb80.pbl?reportno=23&valdcode="+itemCode;
  ReturnValue=RSExecute(serverURL);
  if (ReturnValue.status == 0) {
     errCode.value = 0;
     formName.elements[i+1].value = ReturnValue.return_value;
  }
  else {
    formName.elements[i+1].value = "";
    errCode.value = 1;
  }
}
//=============================================================================
//  Set option for a combo box   
//=============================================================================
function SetCombo(Combo,Value){
  for(i=0;i<Combo.length;i++){
     temp=Combo.options[i].value.replace(/ /g,"");
     Value=Value.replace(/ /g,"");
    if(temp==Value){
      Combo.options[i].selected=true;
      return true;
     }
  }
}
//=============================================================================
//  Set option for a combo box - match based on first 3 characters.
//=============================================================================
function SetCombo3(Combo,Value){
  for(i=0;i<Combo.length;i++){
     temp=Combo.options[i].value.substr(0,3).replace(/ /g,"");
     Value=Value.substr(0,3).replace(/ /g,"");
    if(temp==Value){
      Combo.options[i].selected=true;
      return true;
     }
  }
}
//------------------------------------------------------------
// Function : Standard Time Selection Frame
//            No Check for readonly Time field
//------------------------------------------------------------
function TimeLookupFrame2(Time) 
{
  var PopUpFrameDoc   = DFrameStart();
  var PatientMenu     = document.getElementById('PatientMenu');
  var PageBodySection = document.getElementById('PageBodySection');
  var top;
  var left; 
  window.TimeValue = Time;
  PopUpFrameDoc.location.href  = "../lookups/TimeLookupFrame.html";

  if (PatientMenu)
  {
    left = (document.body.clientWidth-310)/2; 
    if (PageBodySection == undefined) 
      top = PatientMenu.offsetTop+PatientMenu.offsetHeight;
    else 
      top = PageBodySection.scrollTop;
  }
  else 
  {
    top  = document.body.scrollTop;
    left = document.body.clientWidth-310;
  }

  PopUpScreen.style.top     = top   + 'px';
  PopUpScreen.style.left    = left  + 'px';
  PopUpScreen.style.width   = '300px';
  PopUpScreen.style.height  = '210px';
  PopUpScreen.style.display = "";
}
//------------------------------------------------------------
// Function : Get Current Date and Time     
//            No Check for readonly Date and Time field
//------------------------------------------------------------
function SetCurrentDateTime2(dateField,timeField) {
  if (dateField!=null) dateField.value="";
  if (timeField!=null) timeField.value="";
  var serverURL = "../cgi-bin/patweb80.pbl?reportno=1";
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValues=returnValue.return_value.split("|")
    if (dateField!=null) {
      dateField.value=ReturnValues[0];
      dateField.blur()
      dateField.focus() }
    if (timeField!=null) {
      timeField.value=ReturnValues[1]
      timeField.blur()
      timeField.focus() } }
}
//=============================================================================
//  Set option for a combo box
//=============================================================================
function SubForm11() {
  if(UpdateForm.rlegappl.value.replace(/:/g,"")!= "") {
    alert("Can't add Tourniquet before removing Last Tourniquet");
  }
  else {
  SetCurrentDateTime2(null,document.UpdateForm.rlegappl);
  var tourtime=trim(UpdateForm.rlegappl.value.replace(/:/g,""));
  if (ChkAnaes(tourtime)) {
       UpdateForm.recordty.value="1";
       UpdateForm.rcounter.value=UpdateForm.rcounter1.value
       UpdateForm.rlegremv.value="";
       UpdateForm.llegappl.value="";
       UpdateForm.llegremv.value="";
       UpdateForm.rarmappl.value="";
       UpdateForm.rarmremv.value="";
       UpdateForm.larmappl.value="";
       UpdateForm.larmremv.value="";
       UpdateForm.othrappl.value="";
       UpdateForm.othrremv.value="";
if (document.UpdateForm.cartappl!=undefined) {
       UpdateForm.cartappl.value="";
}
if (document.UpdateForm.cartremv!=undefined) {
       UpdateForm.cartremv.value="";
}
if (document.UpdateForm.aortappl!=undefined) {
       UpdateForm.aortappl.value="";
}
if (document.UpdateForm.aortremv=undefined) {
       UpdateForm.aortremv.value="";
}
       formSubmit();
      }
   else UpdateForm.rlegappl.value="";
  }
}
function SubForm12() {
if(!isEmpty(UpdateForm.rlegappl.value)){
SetCurrentDateTime2(null,UpdateForm.rlegremv);
if (trim(UpdateForm.rlegremv.value.replace(/:/g,""))<=trim(UpdateForm.rlegappl.value.replace(/:/g,""))) {
   alert("Removed time must be after the Applied time");
   UpdateForm.rlegremv.value=""
   return;
}
UpdateForm.recordty.value="1";
UpdateForm.rcounter.value=UpdateForm.rcounter1.value
UpdateForm.rlegappl.value="";
UpdateForm.llegappl.value="";
UpdateForm.llegremv.value="";
UpdateForm.rarmappl.value="";
UpdateForm.rarmremv.value="";
UpdateForm.othrappl.value="";
UpdateForm.othrremv.value="";
UpdateForm.larmappl.value="";
UpdateForm.larmremv.value="";
if (document.UpdateForm.cartappl!=undefined) {
UpdateForm.cartappl.value="";
}
if (document.UpdateForm.cartremv!=undefined) {
UpdateForm.cartremv.value="";
}
if (document.UpdateForm.aortappl!=undefined) {
UpdateForm.aortappl.value="";
}
if (document.UpdateForm.aortremv!=undefined) {
UpdateForm.aortremv.value="";
}
formSubmit();
}
else{
     alert("Applied time must be entered first");
}
}
function SubForm21() {
  if(UpdateForm.llegappl.value.replace(/ /g,"") != "") {
    alert("Can't add Tourniquet before removing Last Tourniqet");
  }
  else {
  SetCurrentDateTime2(null,UpdateForm.llegappl);
  var tourtime=trim(UpdateForm.llegappl.value.replace(/:/g,""));
  if (ChkAnaes(tourtime)) {
    UpdateForm.recordty.value="2";
    UpdateForm.rcounter.value=UpdateForm.rcounter2.value
    UpdateForm.rlegremv.value="";
    UpdateForm.rlegappl.value="";
    UpdateForm.llegremv.value="";
    UpdateForm.rarmappl.value="";
    UpdateForm.rarmremv.value="";
    UpdateForm.othrappl.value="";
    UpdateForm.othrremv.value="";
    UpdateForm.larmappl.value="";
    UpdateForm.larmremv.value="";
if (document.UpdateForm.cartappl!=undefined) {
    UpdateForm.cartappl.value="";
}
if (document.UpdateForm.cartremv!=undefined) {
    UpdateForm.cartremv.value="";
}
if (document.UpdateForm.aortappl!=undefined) {
    UpdateForm.aortappl.value="";
}
if (document.UpdateForm.aortremv!=undefined) {
    UpdateForm.aortremv.value="";
}
    formSubmit();
    }
   else UpdateForm.llegappl.value="";
  }
}
function SubForm22() {
if(!isEmpty(UpdateForm.llegappl.value)){ 
SetCurrentDateTime2(null,UpdateForm.llegremv);
if (trim(UpdateForm.llegremv.value.replace(/:/g,""))<=trim(UpdateForm.llegappl.value.replace(/:/g,""))) {
   alert("Removed time must be after the Applied time");
   UpdateForm.llegremv.value=""
   return;
}
UpdateForm.recordty.value="2";
UpdateForm.rcounter.value=UpdateForm.rcounter2.value
UpdateForm.rlegremv.value="";
UpdateForm.rlegappl.value="";
UpdateForm.llegappl.value="";
UpdateForm.rarmappl.value="";
UpdateForm.rarmremv.value="";
UpdateForm.othrappl.value="";
UpdateForm.othrremv.value="";
UpdateForm.larmappl.value="";
UpdateForm.larmremv.value="";
if (document.UpdateForm.cartappl!=undefined) {
UpdateForm.cartappl.value="";
}
if (document.UpdateForm.cartremv!=undefined) {
UpdateForm.cartremv.value="";
}
if (document.UpdateForm.aortappl!=undefined) {
UpdateForm.aortappl.value="";
}
if (document.UpdateForm.aortremv!=undefined) {
UpdateForm.aortremv.value="";
}
formSubmit();
}
else{
     alert("Applied time must be entered first");
    }
}
function SubForm31() {
  if(UpdateForm.rarmappl.value.replace(/ /g,"") != "") {
    alert("Can't add Tourniquet before removing Last Tourniqet");
  }
  else {
  SetCurrentDateTime2(null,UpdateForm.rarmappl);
  var tourtime=trim(UpdateForm.rarmappl.value.replace(/:/g,""));
  if (ChkAnaes(tourtime)) {
    UpdateForm.recordty.value="3";
    UpdateForm.rcounter.value=UpdateForm.rcounter3.value
    UpdateForm.rlegremv.value="";
    UpdateForm.rlegappl.value="";
    UpdateForm.llegappl.value="";
    UpdateForm.llegremv.value="";
    UpdateForm.rarmremv.value="";
    UpdateForm.othrappl.value="";
    UpdateForm.othrremv.value="";
    UpdateForm.larmappl.value="";
    UpdateForm.larmremv.value="";
if (document.UpdateForm.cartappl!=undefined) {
    UpdateForm.cartappl.value="";
}
if (document.UpdateForm.cartremv!=undefined) {
    UpdateForm.cartremv.value="";
}
if (document.UpdateForm.aortappl!=undefined) {
    UpdateForm.aortappl.value="";
}
if (document.UpdateForm.aortremv!=undefined) {
    UpdateForm.aortremv.value="";
}
    formSubmit();
    }
   else UpdateForm.rarmappl.value="";
  }
}
function SubForm32() {
if(!isEmpty(UpdateForm.rarmappl.value)){
SetCurrentDateTime2(null,UpdateForm.rarmremv);
if (trim(UpdateForm.rarmremv.value.replace(/:/g,""))<=trim(UpdateForm.rarmappl.value.replace(/:/g,""))) {
   alert("Removed time must be after the Applied time");
   UpdateForm.rarmremv.value=""
   return;
}
UpdateForm.recordty.value="3";
UpdateForm.rcounter.value=UpdateForm.rcounter3.value
UpdateForm.rlegremv.value="";
UpdateForm.rlegappl.value="";
UpdateForm.llegappl.value="";
UpdateForm.llegremv.value="";
UpdateForm.rarmappl.value="";
UpdateForm.othrappl.value="";
UpdateForm.othrremv.value="";
UpdateForm.larmappl.value="";
UpdateForm.larmremv.value="";
if (document.UpdateForm.cartappl!=undefined) {
UpdateForm.cartappl.value="";
}
if (document.UpdateForm.cartremv!=undefined) {
UpdateForm.cartremv.value="";
}
if (document.UpdateForm.aortappl!=undefined) {
UpdateForm.aortappl.value="";
}
if (document.UpdateForm.aortremv!=undefined) {
UpdateForm.aortremv.value="";
}
formSubmit();
}
else{
     alert("Applied time must be entered first");
}
}
function SubForm41() {
  if(UpdateForm.larmappl.value.replace(/ /g,"") != "") {
    alert("Can't add Tourniquet before removing Last Tourniqet");
  }
  else {
  SetCurrentDateTime2(null,UpdateForm.larmappl);
  var tourtime=trim(UpdateForm.larmappl.value.replace(/:/g,""));
  if (ChkAnaes(tourtime)) {
    UpdateForm.recordty.value="4";
    UpdateForm.rcounter.value=UpdateForm.rcounter4.value
    UpdateForm.rlegremv.value="";
    UpdateForm.rlegappl.value="";
    UpdateForm.llegappl.value="";
    UpdateForm.llegremv.value="";
    UpdateForm.rarmappl.value="";
    UpdateForm.rarmremv.value="";
    UpdateForm.othrappl.value="";
    UpdateForm.othrremv.value="";
    UpdateForm.larmremv.value="";
if (document.UpdateForm.cartappl!=undefined) {
    UpdateForm.cartappl.value="";
}
if (document.UpdateForm.cartremv!=undefined) {
    UpdateForm.cartremv.value="";
}
if (document.UpdateForm.aortappl!=undefined) {
    UpdateForm.aortappl.value="";
}
if (document.UpdateForm.aortremv!=undefined) {
    UpdateForm.aortremv.value="";
}
    formSubmit();
    }
   else UpdateForm.larmappl.value="";
  }
}
function SubForm42() {
if(!isEmpty(UpdateForm.larmappl.value)){
SetCurrentDateTime2(null,UpdateForm.larmremv);
if (trim(UpdateForm.larmremv.value.replace(/:/g,""))<=trim(UpdateForm.larmappl.value.replace(/:/g,""))) {
   alert("Removed time must be after the Applied time");
   UpdateForm.larmremv.value=""
   return;
}
UpdateForm.recordty.value="4";
UpdateForm.rcounter.value=UpdateForm.rcounter4.value
UpdateForm.rlegremv.value="";
UpdateForm.rlegappl.value="";
UpdateForm.llegappl.value="";
UpdateForm.llegremv.value="";
UpdateForm.rarmappl.value="";
UpdateForm.rarmremv.value="";
UpdateForm.othrappl.value="";
UpdateForm.othrremv.value="";
UpdateForm.larmappl.value="";
if (document.UpdateForm.cartappl!=undefined) {
UpdateForm.cartappl.value="";
}
if (document.UpdateForm.cartremv!=undefined) {
UpdateForm.cartremv.value="";
}
if (document.UpdateForm.aortappl!=undefined) {
UpdateForm.aortappl.value="";
}
if (document.UpdateForm.aortremv!=undefined) {
UpdateForm.aortremv.value="";
}
formSubmit();
}
else{
     alert("Applied time must be entered first");
    }
}

function SubForm51() {
  if(isWhitespace(UpdateForm.optqt001.value)) {
        alert("Tourniquet Text to be entered first")
        return;
        }
  if(UpdateForm.othrappl.value.replace(/ /g,"") != "") {
    alert("Can't add Tourniquet before removing Last Tourniqet");
  }
  else {
  SetCurrentDateTime2(null,UpdateForm.othrappl);
  var tourtime=trim(UpdateForm.othrappl.value.replace(/:/g,""));
  if (ChkAnaes(tourtime)) {
    UpdateForm.recordty.value="5";
    UpdateForm.rcounter.value=UpdateForm.rcounter5.value
    UpdateForm.rlegremv.value="";
    UpdateForm.rlegappl.value="";
    UpdateForm.llegappl.value="";
    UpdateForm.llegremv.value="";
    UpdateForm.rarmappl.value="";
    UpdateForm.rarmremv.value="";
    UpdateForm.larmappl.value="";
    UpdateForm.larmremv.value="";
    UpdateForm.othrremv.value="";
if (document.UpdateForm.cartappl!=undefined) {
    UpdateForm.cartappl.value="";
}
if (document.UpdateForm.cartremv!=undefined) {
    UpdateForm.cartremv.value="";
}
if (document.UpdateForm.aortappl!=undefined) {
    UpdateForm.aortappl.value="";
}
if (document.UpdateForm.aortremv!=undefined) {
    UpdateForm.aortremv.value="";
}
    formSubmit();
    }
   else UpdateForm.othrappl.value="";
  }
}
function SubForm52() {
if(!isEmpty(UpdateForm.othrappl.value)){
SetCurrentDateTime2(null,UpdateForm.othrremv);
if (trim(UpdateForm.othrremv.value.replace(/:/g,""))<=trim(UpdateForm.othrappl.value.replace(/:/g,""))) {
   alert("Removed time must be after the Applied time");
   UpdateForm.othrremv.value=""
   return;
}
UpdateForm.recordty.value="5";
UpdateForm.rcounter.value=UpdateForm.rcounter5.value
UpdateForm.rlegremv.value="";
UpdateForm.rlegappl.value="";
UpdateForm.llegappl.value="";
UpdateForm.llegremv.value="";
UpdateForm.rarmappl.value="";
UpdateForm.rarmremv.value="";
UpdateForm.larmappl.value="";
UpdateForm.larmremv.value="";
UpdateForm.othrappl.value="";
if (document.UpdateForm.cartappl!=undefined) {
UpdateForm.cartappl.value="";
}
if (document.UpdateForm.cartremv!=undefined) {
UpdateForm.cartremv.value="";
}
if (document.UpdateForm.aortappl!=undefined) {
UpdateForm.aortappl.value="";
}
if (document.UpdateForm.aortremv!=undefined) {
UpdateForm.aortremv.value="";
}
formSubmit();
}
else{
     alert("Applied time must be entered first");
    }
}
function ChkAnaes(tourtime) {
  var anastime=trim(UpdateForm.anaestim.value.replace(/:/g,""));
  if (tourtime<anastime) {
     Message ="Tourniquet Time should be greater/equal to Anaesthetic Time " +
                UpdateForm.anaestim.value
       alert(Message);
       return false;
  }
  else return true;
}
function SubForm61() {
  if(UpdateForm.cartappl.value.replace(/ /g,"") != "") {
    alert("Can't add Tourniquet before removing Last Tourniqet");
  }
  else {
  SetCurrentDateTime2(null,UpdateForm.cartappl);
  var tourtime=trim(UpdateForm.cartappl.value.replace(/:/g,""));
  if (ChkAnaes(tourtime)) {
    UpdateForm.recordty.value="6";
    UpdateForm.rcounter.value=UpdateForm.rcounter6.value
    UpdateForm.rlegremv.value="";
    UpdateForm.rlegappl.value="";
    UpdateForm.llegappl.value="";
    UpdateForm.llegremv.value="";
    UpdateForm.rarmappl.value="";
    UpdateForm.rarmremv.value="";
    UpdateForm.othrappl.value="";
    UpdateForm.othrremv.value="";
    UpdateForm.larmremv.value="";
    UpdateForm.larmappl.value="";
    UpdateForm.cartremv.value="";
    UpdateForm.aortappl.value="";
    UpdateForm.aortremv.value="";
    formSubmit();
    }
   else UpdateForm.cartappl.value="";
  }
}
function SubForm62() {
if(!isEmpty(UpdateForm.cartappl.value)){
SetCurrentDateTime2(null,UpdateForm.cartremv);
if (trim(UpdateForm.cartremv.value.replace(/:/g,""))<=trim(UpdateForm.cartappl.value.replace(/:/g,""))) {
   alert("Removed time must be after the Applied time");
   UpdateForm.cartremv.value=""
   return;
}
UpdateForm.recordty.value="6";
UpdateForm.rcounter.value=UpdateForm.rcounter6.value
UpdateForm.rlegremv.value="";
UpdateForm.rlegappl.value="";
UpdateForm.llegappl.value="";
UpdateForm.llegremv.value="";
UpdateForm.rarmappl.value="";
UpdateForm.rarmremv.value="";
UpdateForm.othrappl.value="";
UpdateForm.othrremv.value="";
UpdateForm.larmappl.value="";
UpdateForm.larmremv.value="";
UpdateForm.cartappl.value="";
UpdateForm.aortappl.value="";
UpdateForm.aortremv.value="";
formSubmit();
}
else{
     alert("Applied time must be entered first");
    }
}
function SubForm71() {
  if(UpdateForm.aortappl.value.replace(/ /g,"") != "") {
    alert("Can't add Tourniquet before removing Last Tourniqet");
  }
  else {
  SetCurrentDateTime2(null,UpdateForm.aortappl);
  var tourtime=trim(UpdateForm.aortappl.value.replace(/:/g,""));
  if (ChkAnaes(tourtime)) {
    UpdateForm.recordty.value="7";
    UpdateForm.rcounter.value=UpdateForm.rcounter7.value
    UpdateForm.rlegremv.value="";
    UpdateForm.rlegappl.value="";
    UpdateForm.llegappl.value="";
    UpdateForm.llegremv.value="";
    UpdateForm.rarmappl.value="";
    UpdateForm.rarmremv.value="";
    UpdateForm.othrappl.value="";
    UpdateForm.othrremv.value="";
    UpdateForm.larmremv.value="";
    UpdateForm.larmappl.value="";
    UpdateForm.cartappl.value="";
    UpdateForm.cartremv.value="";
    UpdateForm.aortremv.value="";
    formSubmit();
    }
   else UpdateForm.aortappl.value="";
  }
}
function SubForm72() {
if(!isEmpty(UpdateForm.aortappl.value)){
SetCurrentDateTime2(null,UpdateForm.aortremv);
if (trim(UpdateForm.aortremv.value.replace(/:/g,""))<=trim(UpdateForm.aortappl.value.replace(/:/g,""))) {
   alert("Removed time must be after the Applied time");
   UpdateForm.aortremv.value=""
   return;
}
UpdateForm.recordty.value="7";
UpdateForm.rcounter.value=UpdateForm.rcounter7.value
UpdateForm.rlegremv.value="";
UpdateForm.rlegappl.value="";
UpdateForm.llegappl.value="";
UpdateForm.llegremv.value="";
UpdateForm.rarmappl.value="";
UpdateForm.rarmremv.value="";
UpdateForm.othrappl.value="";
UpdateForm.othrremv.value="";
UpdateForm.larmappl.value="";
UpdateForm.larmremv.value="";
UpdateForm.cartappl.value="";
UpdateForm.cartremv.value="";
UpdateForm.aortappl.value="";
formSubmit();
}
else{
     alert("Applied time must be entered first");
    }
}
function formSubmit() {
  UpdateForm.updatety.value="T";
  UpdateForm.nextpage.value="0";
  UpdateForm.target="PopUpFrame";
  UpdateForm.submit();
}
function SessCaseList() {
  CaseList=GetContentCookie("CasePath");
  if (CaseList=="unknown") {
    location.href=document.PatientLinks.sesskeys.value
  } 
  else {
    location.href=CaseList 
  }
}
//============================================================
// Theatre Case Heading Section
//============================================================
function InsertTheatreCaseHead() {
  var InvMsg = " ";

  if (window.InvoiceMessage!=undefined) {
   InvMsg = window.InvoiceMessage;
  }

  if (window.JMPHFLAG!=undefined && window.JMPHFLAG=="1") {

  document.getElementById('TheatreCaseHeading').innerHTML =
    '<form name=ShowActionMenu style="margin:0">' +
    '<table border=0 cellpadding=1 cellspacing=0 width=100% align=center>' +
    '<tr><td class=HeadingCell width=15%>' +
    '  <td class=HeadingCell align=left width=5%>' +
    '  <img src="../images/ListIcon.gif" title="Theatre Session Case List" class=Icon onclick="SessCaseList();"></td>' +
    '  <td class=HeadingCell align=center>' + TheatreHeading + '</td>' +
    '  <td class=HeadingCell width=15%><font color=red>'+InvMsg+'</font></td>' +
    '</tr></table></form>';
    return;
  }

  document.getElementById('TheatreCaseHeading').innerHTML =
    '<form name=ShowActionMenu style="margin:0"> ' +
    '<table border=0 cellpadding=1 cellspacing=0 width=100% align=center>' +
    '<tr><td class=HeadingCell width=15%>' +
    '    <select name=sactions class=MenuSelectList onmouseover="MenuOver(this);"' +
    '     Onchange="ViewPage(this.value);">' +
    '    <option value=0>Actions</option>' +
    '    <option value=1>Anaesthetic</option>' +
    '    <option value=2>Theatre</option>' +
    '    <option value=3>Tourniquet</option>' +
    '    <option value=4>Implant</option>' +
    '    <option value=5>Other Theatre</option>' +
    '    <option value=6>Expensive Items</option>' +
    '    <option value=7>CMBS Items</option>' +
    '    <option value=8>Recovery</option>' +
    '    </select></td>' +
    '  <td class=HeadingCell align=left width=5%>' +
    '  <img src="../images/ListIcon.gif" title="Theatre Session Case List" class=Icon onclick="SessCaseList();"></td>' +
    '  <td class=HeadingCell align=center>' + TheatreHeading + '</td>' +
    '  <td class=HeadingCell width=15%><font color=red>'+InvMsg+'</font></td>' +
    '</tr></table></form>';

  if (window.CombinedCMBS!=undefined) {
    if (CombinedCMBS=="1") {
      document.ShowActionMenu.sactions.options[7].text="Input Charges";
    }
  }
}
//============================================================
// Theatre Case Heading Section
//============================================================
function InsertTheatreCaseHeadPacific() {
  document.getElementById('TheatreCaseHeading').innerHTML = 
    '<form name=ShowActionMenu style="margin:0">' +
    '<table border=0 cellpadding=1 cellspacing=0 width=100% align=center>' +
    '<tr><td class=HeadingCell width=15%>' +
    '    <select name=sactions class=MenuSelectList onmouseover="MenuOver(this);"' +
    '     Onchange="ViewPage(this.value);">' +
    '    <option value=0>Actions</option>' +
    '    <option value=1>Anaesthetic</option>' +
    '    <option value=2>Theatre</option>' +
    '    <option value=5>Other Theatre</option>' +
    '    <option value=8>Recovery</option>' +
    '    </select></td>' +
    '  <td class=HeadingCell align=left width=5%>' +
    '    <img src="../images/ListIcon.gif" title="Theatre Session Case List" class=Icon onclick="SessCaseList();"></td>' +
    '  <td class=HeadingCell align=center>' + TheatreHeading + '</td>' +
    '  <td class=HeadingCell width=15%></td>' +
    '</tr></table></form>';

  if (window.CombinedCMBS!=undefined) {
    if (CombinedCMBS=="1") {
      document.ShowActionMenu.sactions.options[7].text="Input Charges";
    }
  }
}
//============================================================
// Theatre Case Heading Section
//============================================================
function InsertTheatreCaseHeadSJOGWA() {
  var InvMsg = " ";

  if (window.InvoiceMessage!=undefined) {
    InvMsg = window.InvoiceMessage;
  }

  document.getElementById('TheatreCaseHeading').innerHTML =
    '<form name=ShowActionMenu style="margin:0">' +
    '<table border=0 cellpadding=1 cellspacing=0 width=100% align=center>' +
    '<tr><td class=HeadingCell width=15%>' +
    '    <select name=sactions class=MenuSelectList onmouseover="MenuOver(this);"' +
    '     Onchange="ViewPage(this.value);">' +
    '    <option value=0>Actions</option>' +
    '    <option value=1>Anaesthetic</option>' +
    '    <option value=2>Theatre</option>' +
    '    <option value=3>Tourniquet</option>' +
    '    <option value=4>Implant</option>' +
    '    <option value=5>Other Theatre</option>' +
    '    <option value=6>Expensive Items</option>' +
    '    <option value=7>CMBS Items</option>' +
    '    <option value=8>Recovery</option>' +
    '    <option value=9>Add Team</option>' +
    '    </select></td>' +
    '  <td class=HeadingCell align=left width=5%>' +
    '    <img src="../images/ListIcon.gif" title="Theatre Session Case List" class=Icon onclick="SessCaseList();"></td>' +
    '  <td class=HeadingCell align=center>' + TheatreHeading + '</td>' +
    '  <td class=HeadingCell width=15%><font color=red>'+InvMsg+'</font></td>' +
    '</tr></table></form>';

  if (window.CombinedCMBS!=undefined) {
    if (CombinedCMBS=="1") {
      document.ShowActionMenu.sactions.options[7].text="Input Charges";
    }
  }
}
//============================================================
// Action Select List Options for Theatre Case
//============================================================
function ViewPage(Selection) {
    caseKeys   = document.PatientLinks.casekeys.value.replace(/ /g,"+");
    teamNumber = document.PatientLinks.teamnumb.value;
    switch (Selection) {
      case "1" :  DFrameLink("oprweb01.pbl?reportno=04&template=004&" +
                              "casekeys=" + caseKeys,100,20,750,290);
                  break;
      case "2" :  location.href="oprweb06.pbl?reportno=01&template=001&" +
                          "casekeys=" + caseKeys + "&teamnumb=" + teamNumber;
                  break;
      case "3" :  location.href="oprweb06.pbl?reportno=09&template=001&" +
                          "casekeys=" + caseKeys + "&teamnumb=" + teamNumber;
                  break;
      case "4" :  location.href="oprweb06.pbl?reportno=07&template=001&"+
                          "casekeys=" + caseKeys + "&teamnumb=" + teamNumber;
                  break;
      case "5" :  location.href="oprweb06.pbl?reportno=08&template=001&"+
                          "casekeys=" + caseKeys + "&teamnumb=" + teamNumber;
                  break;
      case "6" :  location.href="oprweb06.pbl?reportno=05&template=001&" +
                            "casekeys=" + caseKeys + "&teamnumb=" + teamNumber;
                  break;
      case "7" :  if(window.CombinedCMBS!=undefined) {
                    if(CombinedCMBS=="1") { 
                      location.href="oprweb06.pbl?reportno=03&template=004&" +
                             "casekeys=" + caseKeys + "&teamnumb=" + teamNumber;
                       break;
                    }
                  }
                  location.href="oprweb06.pbl?reportno=03&template=001&" +
                            "casekeys=" + caseKeys + "&teamnumb=" + teamNumber;
                  break;
      case "8" :  if(window.NoDressingTime!=undefined) {
                    if(NoDressingTime=="1") { 
                      location.href="oprweb06.pbl?reportno=10&template=001&"+
                          "casekeys=" + caseKeys + "&teamnumb=" + teamNumber +
                          "&nodressg=1";
                          break;
                     }
                   }
                  location.href="oprweb06.pbl?reportno=10&template=001&"+
                          "casekeys=" + caseKeys + "&teamnumb=" + teamNumber;
                  break;
      case "9" :  AddTeam();
                  break;
  }
}
//=============================================================================
//              Refresh Page
//=============================================================================
function RefreshPage(){
  UpdateForm.method="get";
  UpdateForm.submit();
}
//=============================================================================
//        Function for getting Nurse  Code Description
//=============================================================================
function checkNurseCode(ReturnCode,ReturnName){
  if (((isWhitespace(ReturnCode.value))&&(isWhitespace(ReturnName.value))) ||
     ((!isWhitespace(ReturnCode.value))&&(!isWhitespace(ReturnName.value))))
  {
     return;
  }
  ReturnCode.value=ReturnCode.value.replace(/ /g,"")
  ReturnName.value="";
  if (isWhitespace(ReturnCode.value))return;;
  var Url =  "../cgi-bin/patweb80.pbl?reportno=24&valdcode="+ReturnCode.value;
  var returnValue = RSExecute(Url);
    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|");
      ReturnName.value=ReturnValue;
    }
    else {
      ReturnCode.select();
    }
}
//========================================================================
// Function  : ClearTourniquet
//
// Operation : Clear tourniquet fields that are not be submitted
//
// Parameters: field1   - field to be submitted
//             field2   - another field 
//========================================================================
function ClearTourniquet(field1,field2) {
    if (field1 == null || field2 == null) return;
    if (field1.name != field2.name) {
       field2.value="";
    }
}
//========================================================================
// Function  : CheckAfter
//
// Operation : Compare time, return error if field2 is less than field1
//
// Parameters: field1   - time field
//             field2   - another time field 
//========================================================================
function CheckAfter(field1,field2) {
    if (field1 == null || field2 == null) return;
    var time1=trim(field1.value.replace(/:/g,""))
    var time2=trim(field2.value.replace(/:/g,""))

    if (time2<=time1) {
      alert("Removed time must be after the Applied time");
      field2.value=""
      return false;
    }
    return true;
}
//------------------------------------------------------------
// Function : Theatre Implant Search Frame
//------------------------------------------------------------
function ImplantSearchFrame(returnCode,returnName) {
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=returnCode ;
  window.ReturnName=returnName ;
  norecord=0;
  for (var i=2; i < ImplantSearchFrame.arguments.length; i++) {
    norecord=ImplantSearchFrame.arguments[i];
  }
  PopUpFrameDoc.location.href = "../cgi-bin/oprweb06.pbl?reportno=6&template=4" +
                              "&norecord=" + norecord;
  SearchFrameShow();
}
//------------------------------------------------------------
// Function : Theatre Implant Search Frame - by Barcode
//------------------------------------------------------------
function ImplantSearchFrameBar(returnCode,returnName) {
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=returnCode ;
  window.ReturnName=returnName ;
  norecord=0;
  for (var i=2; i < ImplantSearchFrameBar.arguments.length; i++) {
    norecord=ImplantSearchFrameBar.arguments[i];
  }
  PopUpFrameDoc.location.href = "../cgi-bin/oprweb06.pbl?reportno=6&template=6" +
                              "&norecord=" + norecord;
  SearchFrameShow();
}
//------------------------------------------------------------
// Function : Theatre Implant Search Frame - by EAN / Barcode
//------------------------------------------------------------
function ImplantSearchFrameEANBar(returnCode,returnName) {
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=returnCode ;
  window.ReturnName=returnName ;
  norecord=0;
  for (var i=2; i < ImplantSearchFrameEANBar.arguments.length; i++) {
    norecord=ImplantSearchFrameEANBar.arguments[i];
  }
  PopUpFrameDoc.location.href = "../cgi-bin/oprweb06.pbl?reportno=6&template=9" +
                              "&norecord=" + norecord;
  SearchFrameShow();
}
//------------------------------------------------------------
// Report 15 : Joint Registry
//------------------------------------------------------------
function FormType(theForm) {
  var MultiJoint = document.getElementById('MultiJoint');
  var Computer   = document.getElementById('Computer');
  var Cement     = document.getElementById('Cement');
  var Screws     = document.getElementById('Screws');
  var Grip       = document.getElementById('Grip');

  if(theForm.opjrr003[2].checked==true) {
    MultiJoint.style.display="";
    MultiJoint.innerHTML=document.getElementById('InsertMultiJoint').innerHTML; 
  } else if(theForm.opjrr003[0].checked==true) {
    MultiJoint.style.display="";
    MultiJoint.innerHTML=document.getElementById('InsertMultiKnee').innerHTML; 
  } else {
    MultiJoint.style.display="none";
    MultiJoint.innerHTML="";
  } 
  if(theForm.opjrr003[2].checked==true) {
    Computer.style.display="";
    Computer.innerHTML=document.getElementById('ReOperation').innerHTML;
    Cement.style.display="";
    Cement.innerHTML=document.getElementById('MultiCement').innerHTML;
    Screws.style.display="none";
    Screws.innerHTML="";
    Grip.style.display="none"
    Grip.innerHTML="";
  } else if(theForm.opjrr003[1].checked==true) {
    Computer.style.display=""
    Computer.innerHTML=document.getElementById('ComputerAssisted').innerHTML;
    Cement.style.display="";
    Cement.innerHTML=document.getElementById('HipCement').innerHTML;
    Screws.style.display="";
    Screws.innerHTML=document.getElementById('ShowScrews').innerHTML;
    Grip.style.display="";
    Grip.innerHTML=document.getElementById('ShowGrip').innerHTML;
  } else if(theForm.opjrr003[0].checked==true) {
    Computer.style.display="";
    Computer.innerHTML=document.getElementById('ComputerAssisted').innerHTML;
    Cement.style.display="";
    Cement.innerHTML=document.getElementById('KneeCement').innerHTML;
    Screws.style.display="";
    Screws.innerHTML=document.getElementById('ShowScrews').innerHTML;
    Grip.style.display="none";
    Grip.innerHTML="";
  } else {
    Computer.style.display="none";
    Computer.innerHTML="";
    Cement.style.display="none";
    Cement.innerHTML="";
    Screws.style.display="none";
    Screws.innerHTML="";
    Grip.style.display="none";
    Grip.innerHTML="";
  }
  SetDiagnosis(theForm);
}
 
function UpdFormType(theForm) {
  var MultiJoint = document.getElementById('MultiJoint');
  var Computer   = document.getElementById('Computer');
  var Cement     = document.getElementById('Cement');
  var Screws     = document.getElementById('Screws');
  var Grip       = document.getElementById('Grip');
  var tnode;

  if(theForm.d_opjrr003.value=="3") 
  {
    MultiJoint.style.display = "";
    MultiJoint.innerHTML     = document.getElementById('InsertMultiJoint').innerHTML; 
  }
  else if(theForm.d_opjrr003.value=="1") 
  {
    MultiJoint.style.display = "";
    MultiJoint.innerHTML = document.getElementById('InsertMultiKnee').innerHTML; 

    //copyInnerHTML(MultiJoint,document.getElementById('InsertMultiKnee'));
  } 
  else 
  {
    MultiJoint.style.display="none"
    MultiJoint.innerHTML="";
  }
 
  if(theForm.d_opjrr003.value=="3") {
    Computer.style.display="";
    Computer.innerHTML=document.getElementById('ReOperation').innerHTML;
    Cement.style.display="";
    Cement.innerHTML=document.getElementById('MultiCement').innerHTML;
    Screws.style.display="none";
    Screws.innerHTML="";
    Grip.style.display="none";
    Grip.innerHTML="";
  } else if(theForm.d_opjrr003.value=="2") {
    Computer.style.display="";
    Computer.innerHTML=document.getElementById('ComputerAssisted').innerHTML;
    Cement.style.display="";
    Cement.innerHTML=document.getElementById('HipCement').innerHTML;
    Screws.style.display="";
    Screws.innerHTML=document.getElementById('ShowScrews').innerHTML;
    Grip.style.display="";
    Grip.innerHTML=document.getElementById('ShowGrip').innerHTML;
  } else if(theForm.d_opjrr003.value=="1") {
    Computer.style.display="";
    Computer.innerHTML=document.getElementById('ComputerAssisted').innerHTML;
    Cement.style.display="";
    Cement.innerHTML=document.getElementById('KneeCement').innerHTML;
    Screws.style.display="";
    Screws.innerHTML=document.getElementById('ShowScrews').innerHTML;
    Grip.style.display="none";
    Grip.innerHTML="";
  } else {
    Computer.style.display="none";
    Computer.innerHTML="";
    Cement.style.display="none";
    Cement.innerHTML="";
    Screws.style.display="none";
    Screws.innerHTML="";
    Grip.style.display="none";
    Grip.innerHTML="";
  }
  SetFields();
}
 
function SetDiagnosis(theForm) {
  if(theForm.opjrr006[0].checked==true) {            // Primary
    if(theForm.opjrr003[0].checked==true) {
      Diagnosis.style.display=""
      Diagnosis.innerHTML=KneePrimary.innerHTML;
    }
    if(theForm.opjrr003[1].checked==true) {
      Diagnosis.style.display=""
      Diagnosis.innerHTML=HipPrimary.innerHTML;
    }
    if(theForm.opjrr003[2].checked==true) {
      Diagnosis.style.display=""
      Diagnosis.innerHTML=MultiPrimary.innerHTML;
    }
  } else if(theForm.opjrr006[1].checked==true) {     // Revision
    if(theForm.opjrr003[0].checked==true) {
      Diagnosis.style.display=""
      Diagnosis.innerHTML=KneeRevision.innerHTML;
    }
    if(theForm.opjrr003[1].checked==true) {
      Diagnosis.style.display=""
      Diagnosis.innerHTML=HipRevision.innerHTML;
    }
    if(theForm.opjrr003[2].checked==true) {
      Diagnosis.style.display=""
      Diagnosis.innerHTML=MultiRevision.innerHTML;
    }
  } else {
    Diagnosis.style.display="none"
    Diagnosis.innerHTML="";
  }
}

function SetComment(checkb,comm) {
  if(checkb.checked==true) {
    comm.className="Mandatory";
    comm.readOnly=false;
  } else {
    comm.className="Readonly";
    comm.value="";
    comm.readOnly=true;
  }
}

function SetScrews(checkb,numb) {
  if(checkb.checked==true) {
    numb.className="Mandatory Number Integer JustifyRight";
    numb.readOnly=false;
  } else {
    numb.className="Readonly";
    numb.value="";
    numb.readOnly=true;
  }
}

function SetCement(checkb,compname) {
  if(checkb.checked==true) {
    compname.className="Mandatory";
    compname.readOnly=false;
  } else {
    compname.className="Readonly";
    compname.value="";
    compname.readOnly=true;
  }
}

function SetCement2(checka,checkb,compname) {
  if(checka.checked==true || checkb.checked==true) {
    compname.className="Mandatory";
    compname.readOnly=false;
  } else {
    compname.className="Readonly";
    compname.value="";
    compname.readOnly=true;
  }
}

function SetSelect(checkb,sel) {
  if(checkb.checked==true) {
    sel.className="Mandatory";
    sel.disabled=false;
  } else {
    sel.className="Readonly";
    sel.selectedIndex=0;
    sel.disabled=true;
  }
}

function SetBreakage(theForm) {
  if(theForm.d_opjrr028.checked==true) {
     theForm.opjrr028[0].disabled=false;
     theForm.opjrr028[1].disabled=false;
     if(theForm.opjrr028[2]!=undefined) {
       theForm.opjrr028[2].disabled=false;
     }
  } else {
     theForm.opjrr028.selectedIndex="0";
     theForm.opjrr028[0].disabled=true;
     theForm.opjrr028[0].checked=false;
     theForm.opjrr028[1].disabled=true;
     theForm.opjrr028[1].checked=false;
     if(theForm.opjrr028[2]!=undefined) {
       theForm.opjrr028[2].disabled=true;
       theForm.opjrr028[2].checked=false;
     }
  }
}

function AddDetails() {
  if (!CheckMandRadio(document.AddForm)) {
    return;
  }
  if (!CheckMandDiag(document.AddForm)) {
    return;
  }
  if (document.AddForm.opjrr060!=undefined) {
    justifyRight(document.AddForm.opjrr060)
  }
  if (validateMandatory(document.AddForm)) {
    document.AddForm.submit();
  }
}

function CheckMandRadio(theForm) {
 var check=false;
  for(var i = 0; i < theForm.opjrr003.length; i++){     // Form Type
     if(theForm.opjrr003[i].checked==true) { 
       check=true;
     } 
  }
  if(check==false) {
     alert("Registration form type is a required field.\nPlease enter it now.");
     return false;
  }
  if(theForm.opjrr003[0].checked==true) {                 // Knee
    check=false;
    if(theForm.opjrr037.checked==true ||
       theForm.opjrr038.checked==true) {
      check=true;
    }
    if(check==false) {
      alert("Medial and/or Lateral are/is required.\nPlease enter it now.");
      return false;
    }
  }
  if(theForm.opjrr003[2].checked==true) {
    check=false;
    for(var i = 0; i < theForm.opjrr004.length; i++){     // Joint
       if(theForm.opjrr004[i].checked==true) {
         check=true;
       }
    }
    if(check==false) {
      alert("Joint is a required field.\nPlease enter it now.");
      return false;
    }
  }
  check=false;
  for(var i = 0; i < theForm.opjrr005.length; i++){     // Left Right
     if(theForm.opjrr005[i].checked==true) {
       check=true;
     }
  }
  if(check==false) {
    alert("Anatomical Side is a required field.\nPlease enter it now.");
    return false;
  }
  check=false;
  for(var i = 0; i < theForm.opjrr006.length; i++){     // Primary Revision
     if(theForm.opjrr006[i].checked==true) {
       check=true;
     }
  }
  if(check==false) {
    alert("Primary/Revision is a required field.\nPlease enter it now.");
    return false;
  }
  return true;
}

function CheckMandDiag(theForm) {
  if(theForm.opjrr007!=undefined) {
    if(theForm.opjrr007.checked==true) {
      return true;
    }
  }
  if(theForm.opjrr008!=undefined) {
    if(theForm.opjrr008.checked==true) {
      return true;
    }
  }
  if(theForm.opjrr009!=undefined) {
    if(theForm.opjrr009.checked==true) {
      return true;
    }
  } 
  if(theForm.opjrr010!=undefined) {
    if(theForm.opjrr010.checked==true) {
      return true;
    }
  } 
  if(theForm.opjrr011!=undefined) {
    if(theForm.opjrr011.checked==true) {
      return true;
    }
  } 
  if(theForm.opjrr012!=undefined) {
    if(theForm.opjrr012.checked==true) {
      return true;
    }
  } 
  if(theForm.opjrr013!=undefined) {
    if(theForm.opjrr013.checked==true) {
      return true;
    }
  } 
  if(theForm.opjrr014!=undefined) {
    if(theForm.opjrr014.checked==true) {
      return true;
    }
  } 
  if(theForm.opjrr015!=undefined) {
    if(theForm.opjrr015.checked==true) {
      return true;
    }
  } 
  if(theForm.opjrr016!=undefined) {
    if(theForm.opjrr016.checked==true) {
      return true;
    }
  } 
  if(theForm.opjrr017!=undefined) {
    if(theForm.opjrr017.checked==true) {
      return true;
    }
  } 
  if(theForm.opjrr018!=undefined) {
    if(theForm.opjrr018.checked==true) {
      return true;
    }
  } 
  if(theForm.opjrr019!=undefined) {
    if(theForm.opjrr019.checked==true) {
      return true;
    }
  } 
  if(theForm.opjrr020!=undefined) {
    if(theForm.opjrr020.checked==true) {
      return true;
    }
  } 
  if(theForm.opjrr021!=undefined) {
    if(theForm.opjrr021.checked==true) {
      return true;
    }
  } 
  if(theForm.opjrr022!=undefined) {
    if(theForm.opjrr022.checked==true) {
      return true;
    }
  } 
  if(theForm.opjrr023!=undefined) {
    if(theForm.opjrr023.checked==true) {
      return true;
    }
  } 
  if(theForm.opjrr024!=undefined) {
    if(theForm.opjrr024.checked==true) {
      return true;
    }
  } 
  if(theForm.opjrr025!=undefined) {
    if(theForm.opjrr025.checked==true) {
      return true;
    }
  } 
  if(theForm.opjrr026!=undefined) {
    if(theForm.opjrr026.checked==true) {
      return true;
    }
  } 
  if(theForm.opjrr027!=undefined) {
    if(theForm.opjrr027.checked==true) {
      return true;
    }
  } 
  if(theForm.opjrr028!=undefined) {
    if(theForm.opjrr028.type=="checkbox" &&
       theForm.opjrr028.checked==true) {
       return true;
    }
    for(var i = 0; i < theForm.opjrr028.length; i++){ 
       if(theForm.opjrr028[i].checked==true) {
         return true;
       }
    } 
  } 
  if(theForm.opjrr029!=undefined) {
    if(theForm.opjrr029.checked==true) {
      return true;
    }
  } 
  if(theForm.opjrr030!=undefined) {
    if(theForm.opjrr030.checked==true) {
      return true;
    }
  } 
  if(theForm.opjrr031!=undefined) {
    if(theForm.opjrr031.checked==true) {
      return true;
    }
  } 
  alert("Diagnosis details are mandatory.");
}
function ImplantLink() {
  linkURL="oprweb06.pbl?reportno=15&template=004" +
          "&casekeys=" + UpdateForm.casekeys.value.replace(/ /g,"+") +
          "&opjrr001=" + UpdateForm.opjrr001.value.replace(/ /g,"+") +
          "&opjrr002=" + UpdateForm.opjrr002.value.replace(/ /g,"+") +
          "&teamnumb=" + UpdateForm.teamnumb.value.replace(/ /g,"+")
  parent.location.href=linkURL;
}
function UpdateLink(casekeys,Uniq,Cntr) {
  linkURL="oprweb06.pbl?reportno=15&template=003" +
          "&casekeys=" + casekeys.replace(/ /g,"+") +
          "&opjrr001=" + Uniq.replace(/ /g,"+") +
          "&opjrr002=" + Cntr.replace(/ /g,"+") +
          "&teamnumb=" + document.PatientLinks.teamnumb.value.replace(/ /g,"+")
  //Left=(document.body.clientWidth-750)/2
  Left=(getClientWidth()-750)/2;
  DFrameLink(linkURL,100,Left,750,600);
}
function AddLink() {
  linkURL="oprweb06.pbl?reportno=15&template=002" +
          "&casekeys=" + document.PatientLinks.casekeys.value.replace(/ /g,"+") +
          "&teamnumb=" + document.PatientLinks.teamnumb.value.replace(/ /g,"+")
  Left=(document.body.clientWidth-750)/2
  DFrameLink(linkURL,100,Left,750,600);
}
function UpdateDetails() {
  if(!CheckMandRadio(UpdateForm)) {
    return;
  }
  if(!CheckMandDiag(UpdateForm)) {
    return;
  }
  if(UpdateForm.opjrr060!=undefined) {
    justifyRight(UpdateForm.opjrr060)
  }
  if(validateMandatory(UpdateForm)) {
    document.UpdateForm.updatety.value="U";
    document.UpdateForm.submit();
  }
}
function DeleteDetails() {
  if(validateMandatory(UpdateForm)) {
    document.UpdateForm.updatety.value="D";
    if(confirm("Are you sure you want to Delete ?")) {
      document.UpdateForm.submit();
    }
  }
}
function PrintRegForm() {
  linkURL="oprweb01.pbl?reportno=04&template=023" +
          "&casekeys=" + parent.document.PatientLinks.casekeys.value.replace(/ /g,"+") +
          "&admissno=" + parent.document.PatientLinks.admissno.value.replace(/ /g,"+") +
          "&urnumber=" + parent.document.PatientLinks.urnumber.value.replace(/ /g,"+") +
          "&teamnumb=" + parent.document.PatientLinks.teamnumb.value.replace(/ /g,"+") +
          "&jregform=" + UpdateForm.opjrr002.value.replace(/ /g,"+")
  Left=(document.body.clientWidth-450)/2
  DFrameLink(linkURL,100,Left,450,200);
}

function SetFields() 
{
  var i;
  var opjrr003 = document.getElementsByName('opjrr003');

  for (i = 0; i < opjrr003.length; i++)     // Form Type
  {
    if (opjrr003[i].value == document.UpdateForm.d_opjrr003.value) 
       opjrr003[i].checked  = true;
    else 
       opjrr003[i].disabled = true;
  }

  if (opjrr003[0].checked == true)       // Knee
  {
    if (document.UpdateForm.d_opjrr037.value == "1") 
      document.UpdateForm.opjrr037.checked = true;
    
    if (document.UpdateForm.d_opjrr038.value == "1") 
      document.UpdateForm.opjrr038.checked = true;
  }

  if (opjrr003[2].checked == true)      // Joint
  {
    var opjrr004 = document.getElementsByName('opjrr004');

    for (i = 0; i < opjrr004.length; i++)
    {  
       if (opjrr004[i].value == document.UpdateForm.d_opjrr004.value) 
         opjrr004[i].checked = true;
    }

    if (document.UpdateForm.d_opjrr046.value=="1") 
    {
      document.UpdateForm.opjrr046.checked=true;
      SetComment(document.UpdateForm.opjrr046,document.UpdateForm.opjrr047);
    }
  }

  if (opjrr003[0].checked == true || opjrr003[1].checked == true) 
  {
     if (document.UpdateForm.d_opjrr044.value=="1") 
     {
       document.UpdateForm.opjrr044.checked=true;
       SetSelect(document.UpdateForm.opjrr044,document.UpdateForm.opjrr045);
     }
  }

  var opjrr005 = document.getElementsByName('opjrr005');

  for (i = 0; i < opjrr005.length; i++)     // Left Right
  {
     if (opjrr005[i].value == document.UpdateForm.d_opjrr005.value) 
       opjrr005[i].checked=true;
  }

  if (document.UpdateForm.opjrr061 != undefined) 
  {
    if (document.UpdateForm.d_opjrr061.value == "1") 
       document.UpdateForm.opjrr061.checked=true;
  }

  if (document.UpdateForm.opjrr062 != undefined) 
  {
    if (document.UpdateForm.d_opjrr062.value == "1") 
    {
       document.UpdateForm.opjrr062.checked=true;
       SetComment(document.UpdateForm.opjrr062,document.UpdateForm.opjrr063);
    }
  }

  if (document.UpdateForm.opjrr064 != undefined) 
  {
    if (document.UpdateForm.d_opjrr064.value=="1") 
    {
       document.UpdateForm.opjrr064.checked = true;
       SetComment(document.UpdateForm.opjrr064,document.UpdateForm.opjrr065);
       SetScrews(document.UpdateForm.opjrr064,document.UpdateForm.opjrr066);
    }
  }

  var opjrr006 = document.getElementsByName('opjrr006');
  for (i = 0; i < opjrr006.length; i++)     // Primary Revision
  {
     if (opjrr006[i].value == document.UpdateForm.d_opjrr006.value) 
        opjrr006[i].checked=true;
  }

  SetDiagnosisUpd(document.UpdateForm);
  SetComments(document.UpdateForm);
  SetCementUpd(document.UpdateForm);
}

function SetCementUpd(theForm) {
  if(theForm.opjrr048!=undefined) {
    if(theForm.d_opjrr048.value=="1") {
       theForm.opjrr048.checked=true;
       SetCement(theForm.opjrr048,theForm.opjrr049);
    } 
  }
  if(theForm.opjrr050!=undefined) {
    if(theForm.d_opjrr050.value=="1") {
       theForm.opjrr050.checked=true;
       SetCement(theForm.opjrr050,theForm.opjrr051);
    } 
  }
  if(theForm.opjrr052!=undefined) {
    if(theForm.d_opjrr052.value=="1") {
       theForm.opjrr052.checked=true;
       SetCement(theForm.opjrr052,theForm.opjrr053);
    } 
  }
  if(theForm.opjrr054!=undefined) {
    if(theForm.d_opjrr054.value=="1") {
       theForm.opjrr054.checked=true;
       SetCement(theForm.opjrr054,theForm.opjrr055);
    } 
  }
  if(theForm.opjrr056!=undefined) {
    if(theForm.d_opjrr056.value=="1") {
       theForm.opjrr056.checked=true;
       SetCement2(theForm.opjrr056,theForm.opjrr058,theForm.opjrr057);
    } 
  }
  if(theForm.opjrr058!=undefined) {
    if(theForm.d_opjrr058.value=="1") {
       theForm.opjrr058.checked=true;
       SetCement2(theForm.opjrr056,theForm.opjrr058,theForm.opjrr057);
    } 
  }
  if(theForm.opjrr059!=undefined) {
    if(theForm.d_opjrr059.value=="1") {
       theForm.opjrr059.checked=true;
       SetScrews(theForm.opjrr059,theForm.opjrr060);
    } 
  }
}

function SetDiagnosisUpd(theForm) {
  var Diagnosis = document.getElementById('Diagnosis');

  if(theForm.opjrr006[0].checked==true) {            // Primary
    if(theForm.opjrr003[0].checked==true) {          
      Diagnosis.style.display = "";
      Diagnosis.innerHTML = document.getElementById('KneePrimary').innerHTML;
    } 
    if(theForm.opjrr003[1].checked==true) {
      Diagnosis.style.display = "";
      Diagnosis.innerHTML = document.getElementById('HipPrimary').innerHTML;
    } 
    if(theForm.opjrr003[2].checked==true) {
      Diagnosis.style.display = "";
      Diagnosis.innerHTML = document.getElementById('MultiPrimary').innerHTML;
    } 
  } else if(theForm.opjrr006[1].checked==true) {     // Revision
    if(theForm.opjrr003[0].checked==true) {
      Diagnosis.style.display = "";
      Diagnosis.innerHTML = document.getElementById('KneeRevision').innerHTML;
    }
    if(theForm.opjrr003[1].checked==true) {
      Diagnosis.style.display = "";
      Diagnosis.innerHTML = document.getElementById('HipRevision').innerHTML;
    }
    if(theForm.opjrr003[2].checked==true) {
      Diagnosis.style.display = "";
      Diagnosis.innerHTML = document.getElementById('MultiRevision').innerHTML;
    }
  } else {
    Diagnosis.style.display = "none";
    Diagnosis.innerHTML = "";
  }

  if (document.UpdateForm.opjrr007!=undefined) {
    if (document.UpdateForm.d_opjrr007.value=="1") {
       document.UpdateForm.opjrr007.checked=true;
    }
  }
  if (document.UpdateForm.opjrr008!=undefined) {
    if (document.UpdateForm.d_opjrr008.value=="1") {
       document.UpdateForm.opjrr008.checked=true;
    }
  }
  if (document.UpdateForm.opjrr009!=undefined) {
    if (document.UpdateForm.d_opjrr009.value=="1") {
       document.UpdateForm.opjrr009.checked=true;
    }
  }
  if (document.UpdateForm.opjrr010!=undefined) {
    if (document.UpdateForm.d_opjrr010.value=="1") {
       document.UpdateForm.opjrr010.checked=true;
    }
  }
  if (document.UpdateForm.opjrr011!=undefined) {
    if (document.UpdateForm.d_opjrr011.value=="1") {
       document.UpdateForm.opjrr011.checked=true;
    }
  }
  if (document.UpdateForm.opjrr012!=undefined) {
    if (document.UpdateForm.d_opjrr012.value=="1") {
       document.UpdateForm.opjrr012.checked=true;
       SetComment(UpdateForm.opjrr012,UpdateForm.opjrr033);
    }
    if (document.UpdateForm.d_opjrr012.value=="2") {
        document.UpdateForm.opjrr012.checked=true;
    }
  }
  if (document.UpdateForm.opjrr013!=undefined) {
    if (document.UpdateForm.d_opjrr013.value=="1") {
       document.UpdateForm.opjrr013.checked=true;
    }
  }
  if (document.UpdateForm.opjrr014!=undefined) {
    if (document.UpdateForm.d_opjrr014.value=="1") {
       document.UpdateForm.opjrr014.checked=true;
    }
  }
  if (document.UpdateForm.opjrr015!=undefined) {
    if (document.UpdateForm.d_opjrr015.value=="1") {
       document.UpdateForm.opjrr015.checked=true;
    }
  }
  if (document.UpdateForm.opjrr016!=undefined) {
    if (document.UpdateForm.d_opjrr016.value=="1") {
       document.UpdateForm.opjrr016.checked=true;
       SetComment(document.UpdateForm.opjrr016,document.UpdateForm.opjrr034);
    }
  }
  if (document.UpdateForm.opjrr017!=undefined) {
    if (document.UpdateForm.d_opjrr017.value=="1") {
       document.UpdateForm.opjrr017.checked=true;
       SetComment(document.UpdateForm.opjrr017,document.UpdateForm.opjrr032);
    }
  }
  if (document.UpdateForm.opjrr018!=undefined) {
    if (document.UpdateForm.d_opjrr018.value=="1") {
       document.UpdateForm.opjrr018.checked=true;
    }
  }
  if (document.UpdateForm.opjrr019!=undefined) {
    if (document.UpdateForm.d_opjrr019.value=="1") {
       document.UpdateForm.opjrr019.checked=true;
    }
  }
  if (document.UpdateForm.opjrr020!=undefined) {
    if (document.UpdateForm.d_opjrr020.value=="1") {
        document.UpdateForm.opjrr020.checked=true;
    }
  }
  if (document.UpdateForm.opjrr021!=undefined) {
    if (document.UpdateForm.d_opjrr021.value=="1") {
        document.UpdateForm.opjrr021.checked=true;
    }
  }
  if (document.UpdateForm.opjrr022!=undefined) {
    if (document.UpdateForm.d_opjrr022.value=="1") {
        document.UpdateForm.opjrr022.checked=true;
    }
  }
  if (document.UpdateForm.opjrr023!=undefined) {
    if (document.UpdateForm.d_opjrr023.value=="1") {
        document.UpdateForm.opjrr023.checked=true;
    }
  }
  if (document.UpdateForm.opjrr024!=undefined) {
    if (document.UpdateForm.d_opjrr024.value=="1") {
        document.UpdateForm.opjrr024.checked=true;
    }
  }
  if (document.UpdateForm.opjrr025!=undefined) {
    if (document.UpdateForm.d_opjrr025.value=="1") {
        document.UpdateForm.opjrr025.checked=true;
    }
  }
  if (document.UpdateForm.opjrr026!=undefined) {
    if (document.UpdateForm.d_opjrr026.value=="1") {
        document.UpdateForm.opjrr026.checked=true;
    }
  }
  if (document.UpdateForm.opjrr027!=undefined) {
    if (document.UpdateForm.d_opjrr027.value=="1") {
        document.UpdateForm.opjrr027.checked=true;
    }
  }
  if (document.UpdateForm.opjrr028!=undefined) {
    if (document.UpdateForm.dd_opjrr028.value!="0" &&
        document.UpdateForm.dd_opjrr028.value!=" ") {
       if (document.UpdateForm.opjrr028.type=="checkbox" &&
          document.UpdateForm.dd_opjrr028.value=="5"){
          document.UpdateForm.opjrr028.checked=true;
       } else {
          document.UpdateForm.d_opjrr028.checked=true;
         SetBreakage(UpdateForm); 
         var opjrr028 = document.getElementsByName('opjrr028');
         for (var i = 0; i < opjrr028.length; i++){
            if (opjrr028[i].value == document.UpdateForm.dd_opjrr028.value) {
              opjrr028[i].checked=true;
            }
         }
       }
    }
  }

  if (document.UpdateForm.opjrr029!=undefined) {
    if (document.UpdateForm.d_opjrr029.value=="1") {
        document.UpdateForm.opjrr029.checked=true;
    }
  }
  if (document.UpdateForm.opjrr030!=undefined) {
    if (document.UpdateForm.d_opjrr030.value=="1") {
        document.UpdateForm.opjrr030.checked=true;
    }
  }
  if (document.UpdateForm.opjrr031!=undefined) {
    if (document.UpdateForm.d_opjrr031.value=="1") {
        document.UpdateForm.opjrr031.checked=true;
    }
  }
}

function SetComments(theForm) {
  var strg1= trim(theForm.d_opjrr039.value)
  var strg2= trim(theForm.d_opjrr040.value)
  var strg3= trim(theForm.d_opjrr041.value)
  var strg4= trim(theForm.d_opjrr042.value)
  var strg5= trim(theForm.d_opjrr043.value)
  if(isWhitespace(strg1) && isWhitespace(strg2) && 
     isWhitespace(strg3) && isWhitespace(strg4) &&
     isWhitespace(strg5)) {
     return;
  }
  theForm.comments.value=strg1+'\n'+strg2+'\n'+strg3+'\n'+strg4+'\n'+
                            strg5
}
//------------------------------------------------------------------------
// Link/Unlink an implant to a joint replacement registration form
//------------------------------------------------------------------------
function UpdateImplant(implantkey) {
  var regform
  if(implantkey.checked==false) {
     regform="  ";
  } else {
     regform=implantkey.value.substr(13,2).replace(/ /g,"+");
  }
  ReturnFunction="" ;
  for (var i=1; i < UpdateImplant.arguments.length; i++) {
  if (typeof(UpdateImplant.arguments[i]) == 'function') {
     ReturnFunction=UpdateImplant.arguments[i] } }

  var serverURL = "../cgi-bin/oprweb06.pbl?reportno=16&updatety=1"+
                "&implantk=" + implantkey.value.substr(0,13).replace(/ /g,"+") +
                "&linkregf=" + regform

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } 
  } else {
    location.reload();
  }
}
function RegFormLink() {
  linkURL="oprweb06.pbl?reportno=15&template=001" +
          "&casekeys=" + document.PatientLinks.casekeys.value.replace(/ /g,"+") +
          "&teamnumb=" + document.PatientLinks.teamnumb.value.replace(/ /g,"+")
  location.href=linkURL;
}
//
//
//========================================================================
// Check delay into recovery (sjog-standard oprweb0612001.html)
//========================================================================
function delayIntoRecovery() {
  var timeInRec ="";
  if(!isWhitespace(UpdateForm.opard071.value)) {          // Stage 1
    timeInRec = UpdateForm.opard071.value;
  } else if(!isWhitespace(UpdateForm.opard074.value)) {   // Stage 2
      timeInRec = UpdateForm.opard074.value;
  }
  var timeOprExit = UpdateForm.opsrg006.value;
  if ((isWhitespace(timeInRec)) || (isWhitespace(timeOprExit))) {
    UpdateForm.opard087.className="";
    UpdateForm.opard087.value="";
    return;
  }

  var recTime = new Date();
  var exitTime = new Date();

  // Set Recovery-Day Time
  recTime.setHours(timeInRec.substr(0,2));
  recTime.setMinutes(timeInRec.substr(3,2));
  recTime.setSeconds(timeInRec.substr(6,2));
  var recTimeSec = recTime.getTime();

  // Set Theatre Exit Time
  exitTime.setHours(timeOprExit.substr(0,2));
  exitTime.setMinutes(timeOprExit.substr(3,2));
  exitTime.setSeconds(timeOprExit.substr(6,2));
  var exitTimeSec = exitTime.getTime();

  // Calculate difference
  var timeDif = recTimeSec - exitTimeSec;
  // If time difference is greater than 15 mins then set 'Delay into Recovery
  // Reason' to be a mandatory field
  if (timeDif > 900000){             // 15 mins = 900000 miliseconds
    document.getElementById('ov_label').style.display="";
    document.getElementById('ov_data').style.display="";
    UpdateForm.opard087.className="Mandatory";
  } else {
    document.getElementById('ov_label').style.display="none";
    document.getElementById('ov_data').style.display="none";
    UpdateForm.opard087.className="";
    UpdateForm.opard087.value="";
  }
}
//========================================================================
// Set Stage 1 readonly if 'Straight to DPU' is ticked
//========================================================================
function setStage1(){
   if(document.UpdateForm.d_opsrg075.checked==true){
      document.UpdateForm.opard071.value="";
      document.UpdateForm.opard071.className="ReadOnly";
      document.UpdateForm.opard071.readOnly=true;
   } else {
      document.UpdateForm.opard071.className="";
      document.UpdateForm.opard071.readOnly=false;
   }
}
//========================================================================
// Recovery Screen - Set Stage 1 readonly if 'Straight to DPU' is set
//========================================================================
function setStage1Recovery(straightToDPU) {
   if(straightToDPU == "Yes"){
      document.UpdateForm.opard071.value="";
      document.UpdateForm.opard071.className="ReadOnly";
      document.UpdateForm.opard071.readOnly=true;
      setTimeout('document.UpdateForm.opard074.focus()',100);
   } else {
      document.UpdateForm.opard071.className="";
      document.UpdateForm.opard071.readOnly=false;
   }
}

function ValidateUR(InputField) {
  if (!InputField || InputField == undefined)
    return;

  InputField.value = InputField.value.toUpperCase();
  FormatURScan(InputField);
  justifyRight(InputField);
  CheckUR(InputField.value);
}

function CheckUR(URNum) {
  if (isWhitespace(URNum))
    return;

  ReturnFunction="" ;
  for (var i=1; i < CheckUR.arguments.length; i++) {
    if (typeof(CheckUR.arguments[i]) == 'function') {
      ReturnFunction = CheckUR.arguments[i];
    } 
  }

  var serverURL = "../cgi-bin/oprweb06.pbl?reportno=16&updatety=3"+
                "&valdcode=" + URNum.replace(/ /g,"+");

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction();
    }
  }
}

function SearchPatient(TheForm) {
  if (!TheForm || TheForm == undefined)
    return;

  PatientSearchFrame(TheForm.d1,TheForm.opcbd006,TheForm.d2);
}
function AuditDetails(opdauniq){
    LinkURL="oprweb06.pbl?reportno=11&template=005" +
        "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
        "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") +
        "&uniqueky=" + opdauniq.replace(/ /g,"+")
        location.href=LinkURL;
}

function ShowDefTeamWarnMsg() {
  alert("\t\t     WARNING\n\n" +
        "Default Team not completed, this case and the default team for the session may require update.");
}

function LoadDefTeam() {
  if (ShowDefaultTeamWarning != undefined) {
    if (ShowDefaultTeamWarning == 1) {
      CheckDefaultTeamCompleted();
    }
  }
}

function CheckDefaultTeamCompleted() {
  if (ShowDefaultTeamWarning == undefined)
    return 0;

  // Default Team Completed?
  var defTeamComp = (document.getElementById('opsedtcm') != undefined) ?
                     document.getElementById('opsedtcm').value : '0';
  if (defTeamComp != '1') {
    switch (ShowDefaultTeamWarning) {
      case 1:
        ShowDefTeamWarnMsg();
        if(document.getElementById('d_teamdframe')) {
          DFrameExit();
        } else {
          window.history.back();
        }
        break;

      case 2:
        ShowDefTeamWarnMsg();
        break;
    }
  }
}
function checkRecoveryTime(theatretimefield) {
  if (isWhitespace(theatretimefield.value)) {return;}

  if (isWhitespace(document.UpdateForm.opard082.value) &&
      isWhitespace(document.UpdateForm.opard083.value) &&
      isWhitespace(document.UpdateForm.opard071.value) &&
      isWhitespace(document.UpdateForm.opard074.value) &&
      isWhitespace(document.UpdateForm.opard077.value)) {
    alert("Time in Recovery has not been entered");
  }
}
function showDelay() {
  if(isWhitespace(document.UpdateForm.opard071.value) &&
     isWhitespace(document.UpdateForm.opard074.value) &&
     isWhitespace(document.UpdateForm.opard077.value)) {
     document.getElementById('DelayReason').innerHTML=
     document.getElementById('NoDelayReason').innerHTML
  } else {
     document.getElementById('DelayReason').innerHTML=
     document.getElementById('ShowDelayReason').innerHTML
  }
}
function checkReviewTime(revdate,revtime) {
  if(!checkDate(revdate,revdate.title)) {
     return;
  }
  if(!checkTime(revtime,revtime.title)) {
     return;
  }
  if( (isWhitespace(revdate.value) && !isWhitespace(revtime.value))
   ||
  (!isWhitespace(revdate.value) && isWhitespace(revtime.value))
   ) {
    revdate.className="PastDate Mandatory";
    revtime.className="Mandatory";
  } else {
    revdate.className="PastDate";
    revtime.className="";
  }
  if(isWhitespace(revdate.value) || isWhitespace(revtime.value)) {
    return;
  }
  CheckFutureTime(UpdateForm,revdate.value,revtime);
}
function checkVisitDatesTimes() {
  if (!CheckDateRange(document.getElementById('admndate'),
                      document.getElementById('opsework'))) {
    return false;
  }

  if (document.getElementById('opard002') == undefined ){
      return true;
  }
  if (SetDateYYYYMMDD(document.getElementById('admndate').value) ==
      SetDateYYYYMMDD(document.getElementById('opsework').value)) {
    if (!isWhitespace(document.getElementById('opard002').value)) {
      if (document.getElementById('opard002').value <
          document.getElementById('admntime').value) {
        alert('Invalid Range Entered Admission Time and Time Arrived');
        return false;
      }
    }
  }

  if (!isWhitespace(document.getElementById('discdate').value)) {

    if (document.getElementById('ovrnight').checked==true) {
      AddSubtractDate(document.getElementById('opsework'),"1","A");
    }

    if (!CheckDateRange(document.getElementById('opsework'),
                        document.getElementById('discdate'))) {
      document.getElementById('opsework').value=
      document.getElementById('opsework').defaultValue;
      return false;
    }

    if (document.getElementById('ovrnight').checked==true) {
      document.getElementById('opsework').value=
      document.getElementById('opsework').defaultValue;
    }

    if (SetDateYYYYMMDD(document.getElementById('opsework').value) ==
        SetDateYYYYMMDD(document.getElementById('discdate').value)) {

      if (document.getElementById("opard077") != null) {
        if (!isWhitespace(document.getElementById("opard077").value)) {

          if (document.getElementById('disctime').value <
              document.getElementById('opard077').value) {
            alert('Invalid Range Entered Recovery - Day and Discharge Time');
            document.getElementById('opsework').value=
            document.getElementById('opsework').defaultValue;
            return false;
          }
        } else {

         if (!isWhitespace(document.getElementById('opsrg006').value)) {
             if (document.getElementById('disctime').value <
                document.getElementById('opsrg006').value) {
              alert('Invalid Range Entered Surgery End and Discharge Time');
              document.getElementById('opsework').value=
              document.getElementById('opsework').defaultValue;
              return false;
            }
          }

        }

      } else {

        if (!isWhitespace(document.getElementById('opsrg006').value)) {
          if (document.getElementById('disctime').value <
              document.getElementById('opsrg006').value) {
            alert('Invalid Range Entered Surgery End and Discharge Time');
            document.getElementById('opsework').value=
            document.getElementById('opsework').defaultValue;
            return false;
          }
        }
      }
    }
  }

  return true;
}
function checkVisitDatesTimesSTV() {
  if (!CheckDateRange(document.getElementById('admndate'),
                      document.getElementById('opsework'))) {
    return false;
  }

  if (document.getElementById('opard002') == undefined ){
      return true;
  }
  if (SetDateYYYYMMDD(document.getElementById('admndate').value) ==
      SetDateYYYYMMDD(document.getElementById('opsework').value)) {
    if (!isWhitespace(document.getElementById('opard002').value)) {
      if (document.getElementById('opard002').value <
          document.getElementById('admntime').value) {
        alert('Invalid Range Entered Admission Time and Check In Complete Time');
        return false;
      }
    }
  }

  if (!isWhitespace(document.getElementById('discdate').value)) {

    if (document.getElementById('ovrnight').checked==true) {
      AddSubtractDate(document.getElementById('opsework'),"1","A");
    }

    if (!CheckDateRange(document.getElementById('opsework'),
                        document.getElementById('discdate'))) {
      document.getElementById('opsework').value=
      document.getElementById('opsework').defaultValue;
      return false;
    }

    if (SetDateYYYYMMDD(document.getElementById('opsework').value) ==
        SetDateYYYYMMDD(document.getElementById('discdate').value)) {
      if (!isWhitespace(document.getElementById('opsrg006').value)) {
        if (document.getElementById('disctime').value <
            document.getElementById('opsrg006').value) {
          alert('Invalid Range Entered Surgery End and Discharge Time');
          document.getElementById('opsework').value=
          document.getElementById('opsework').defaultValue;
          return false;
        }
      }
    }
  }

  return true;
}
function showDelayHEA() {

  if (parseInt(document.getElementById('opcnsetr').value) == 0) {
    document.getElementById('DelayReason').innerHTML=
    document.getElementById('NoDelayReason').innerHTML
    return;
  }

  if(isWhitespace(document.UpdateForm.opard077.value)) {
     document.getElementById('DelayReason').innerHTML=
     document.getElementById('NoDelayReason').innerHTML
  } else {

    if (document.UpdateForm.opard084 != undefined &&
        !isWhitespace(document.UpdateForm.opard084.value)) {
      return;
    }

    var endtime = trim(UpdateForm.suentime.value.replace(/:/g,""));
    endtime=endtime.substr(0,4)
    endtime=endtime - 0;

    var rectime = trim(UpdateForm.opard077.value.replace(/:/g,""));
    rectime=rectime.substr(0,4)
    rectime=rectime - 0;

    var MaxDelay=(parseInt(endtime) +
                  parseInt(document.getElementById('opcnsetr').value))
    var Minutes=parseInt(MaxDelay) % 100
    var Hour=parseInt(MaxDelay) / 100
    if (Minutes>=60) {
        Minutes=Minutes - 60
      Hour=parseInt(Hour) + 1
      MaxDelay = (Hour*100) + Minutes
    }
    if (MaxDelay <= rectime) {
      document.getElementById('DelayReason').innerHTML=
      document.getElementById('ShowDelayReason').innerHTML
    } else {
      document.getElementById('DelayReason').innerHTML=
      document.getElementById('NoDelayReason').innerHTML
    }
  }
}
function showExitDelayHEA() {

  if (parseInt(document.getElementById('opcnvrrd').value) == 0 ||
      isWhitespace(document.UpdateForm.opard085.value) ||
      isWhitespace(document.UpdateForm.opard080.value)) {
    document.getElementById('DelayExitReasonTitleDIV').innerHTML="";
    document.getElementById('DelayExitReasonFieldDIV').innerHTML=
    document.getElementById('NoDelayExitReasonFieldSPAN').innerHTML
    return;
  }

  var rdytime = trim(UpdateForm.opard085.value.replace(/:/g,""));
  rdytime=rdytime.substr(0,4)
  rdytime=rdytime - 0;

  var exttime = trim(UpdateForm.opard080.value.replace(/:/g,""));
  exttime=exttime.substr(0,4)
  exttime=exttime - 0;

  var MaxDelay=(parseInt(rdytime) +
                parseInt(document.getElementById('opcnvrrd').value))
  var Minutes=parseInt(MaxDelay) % 100
  var Hour=parseInt(MaxDelay) / 100
  if (Minutes>=60) {
      Minutes=Minutes - 60
    Hour=parseInt(Hour) + 1
    MaxDelay = (Hour*100) + Minutes
  }
  if (MaxDelay <= exttime) {
    document.getElementById('DelayExitReasonTitleDIV').innerHTML=
    document.getElementById('DelayExitReasonTitleSPAN').innerHTML;
    document.getElementById('DelayExitReasonFieldDIV').innerHTML=
    document.getElementById('DelayExitReasonFieldSPAN').innerHTML;
  } else {
    document.getElementById('DelayExitReasonTitleDIV').innerHTML="";
    document.getElementById('DelayExitReasonFieldDIV').innerHTML=
    document.getElementById('NoDelayExitReasonFieldSPAN').innerHTML;
  }

}
//=============================================================================
// Show Category Tl dropdown on theatre details/day procedures if required (nz)
//=============================================================================
function ShowCATTl() {
  document.getElementById('CatTlLabel').innerHTML="";
  document.getElementById('CatTlField').innerHTML="";
  if (VariableNameExists('ShowCatTl')) {
    if(ShowCatTl=="YES"||ShowCatTl=="YMAND") {
      if(CheckRefWaitLink(UpdateForm.urnumber,UpdateForm.uniqueky)) {
        document.getElementById('CatTlLabel').innerHTML=
        document.getElementById('spCatTlLabel').innerHTML;
        document.getElementById('CatTlField').innerHTML=
        document.getElementById('spCatTlField').innerHTML;
      }
    }
    if(ShowCatTl=="YMAND") {
      document.getElementById('opsrg056').className="Mandatory";
    } else {
      document.getElementById('opsrg056').className="";
    }
  }
}
function CheckRefWaitLink(urno,uniq) {
  if (isWhitespace(urno.value) || isWhitespace(uniq.value)) {
   return false;
  }
  var serverURL = "../cgi-bin/oprweb06.pbl?reportno=16&updatety=L" +
                  "&urnumber=" + urno.value.replace(/ /g,"+") +
                  "&uniqueky=" + uniq.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|");
  if (returnValue.status==0) {
    if (ReturnValue[0] != 0) {    // Referral Waiting List Link exists
      document.getElementById('allrvisn').value=ReturnValue[0];
      document.getElementById('deptcode').value=ReturnValue[1];
      return true;
    }
    return false;
  }
}

//Function to turn a time to minutes and an integer
function stripTime(timeToStrip) {

   timeToStrip = timeToStrip.split(":");
   timeToStrip = (parseInt(timeToStrip[0])*60)+parseInt(timeToStrip[1]);

   return timeToStrip;
}

//Checks the difference between two times, and compares to an time span
function checkTimeDiff(dischargeTime,exitTime,referralLink) {

   //Turns discharge time into an integer of minutes
   dischargeTime = stripTime(dischargeTime);
    
   //Turns current time into an integer of minutes
   crtTm = new Date();
   currentTime = (crtTm.getHours()*60)+crtTm.getMinutes();

   //If the exit time exists gets the exit time in minutes
   if(!isWhitespace(exitTime)){
     currentTime = stripTime(exitTime);
   }

   //Gets the difference between two times
   diffTime = parseInt(currentTime)-(dischargeTime);

   //Compares the difference with the time span
   if(diffTime > parseInt(SelectPeriod.d_opcnvrrd.value)) {

      //If it is greater, opens a dFrame
      referralLink = referralLink.substr(0,34)+"3"+referralLink.substr(35);
      left=(document.body.clientWidth-985)/2;
      linkurl="../cgi-bin/"+referralLink.replace(/ /g,"+");
      DFrameLink(linkurl,0,left,985,650);

   } else {

      //Otherwise refreshes the screen 
      location.href = referralLink+"&dlyrsnrc="+
         document.SelectPeriod.dlyrsnrc.value;
   }
}

