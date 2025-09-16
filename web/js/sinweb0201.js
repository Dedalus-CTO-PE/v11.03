//jsVersion  : V11.03.00
//========================================================================
// Program   : sinweb0201.js
//
// Written   : 03.02.2005 Lina Vo    
//
// Function  : Standard Functions Used in sinweb0201 templates
//
// Version   : 
//
// V9.04.01  22.02.2005  Lina Vo         56406
//           Changed SubmitRec() to include validation for FMS
// V9.04.00  03.02.2005  Lina Vo         56406
//           Javascript created
//
//========================================================================
function AddRec(thisForm) {
 thisForm.redirect.value="sinweb02.pbl?reportno=1&template=2"
 thisForm.nextpage.value=1;
 SubmitRec(thisForm) 
}
function SubmitRec(thisForm) {
  if (validateMandatory(thisForm)) {
//
//  Check FMS before submit
//
    var serverURL = "../cgi-bin/sinweb02.pbl?reportno=4" 
                  + "&sipoc007=" + thisForm.sipoc007.value.replace(/ /g,"+")
                  + "&sipoc003=" + thisForm.sipoc003.value.replace(/ /g,"+")
                  + "&sipoc004=" + thisForm.sipoc004.value.replace(/ /g,"+");
    var returnValue = RSExecute(serverURL);
    if (returnValue.status!=0) {
      thisForm.redirect.value="sinweb02.pbl?reportno=1&template=1" //reset
      thisForm.nextpage.value=4;
      return;
    }
//
    if (thisForm.updttype.value=="A") {
      thisForm.sipoc001.value=parent.AddForm.sipoa001.value;
      thisForm.sipoa002.value=parent.AddForm.sipoa002.value;
      thisForm.sipoa003.value=parent.AddForm.sipoa003.value;
      thisForm.sipoa004.value=parent.AddForm.sipoa004.value;
      thisForm.sipoa005.value=parent.AddForm.sipoa005.value;
      thisForm.sipoa007.value=parent.AddForm.sipoa007.value;
      thisForm.sipoa008.value=parent.AddForm.sipoa008.value;
      thisForm.sipoa012.value=parent.AddForm.sipoa012.value;
      thisForm.sipoa024.value=parent.AddForm.sipoa024.value;
      thisForm.sipoa025.value=parent.AddForm.sipoa025.value;
    }
    if (parent.AddForm.printfax[0].checked==true) {
      thisForm.printfax.value=0;
    }
    else {
      thisForm.printfax.value=1;
    }
    thisForm.selprint.value=parent.AddForm.selprint.value;
    thisForm.sipoc003.disabled=false;
    thisForm.submit();
  }
  else {
    thisForm.redirect.value="sinweb02.pbl?reportno=1&template=1" //reset
    thisForm.nextpage.value=4;
  }
}
function CloseRec(thisForm) {
  if (isWhitespace(thisForm.sipoa001.value)) {
    if (confirm("Are you sure you want to Close?")) { 
      parent.AddForm.sipoa002.readOnly=false;         // Supplier
      parent.AddForm.sipoa002.className="Mandatory";  // Supplier Name
      parent.AddForm.s_sipoa002.disabled=false;       // Supplier search button
      parent.AddForm.c_sipoa002.disabled=false;       // Supplier clear button
      parent.PopUpScreen.style.display="none"; 
    }
  }
  else {
    if (confirm("Are you sure you want to Close?")) {
      parent.location.href="sinweb02.pbl?reportno=1&template=1&sipoa001="
                          + thisForm.sipoa001.value;
    }
  }
}
function ExitRec(thisForm) {
  if (isWhitespace(thisForm.sipoa001.value)) {
    parent.AddForm.sipoa002.readOnly=false;         // Supplier
    parent.AddForm.sipoa002.className="Mandatory";  // Supplier Name
    parent.AddForm.s_sipoa002.disabled=false;       // Supplier search button
    parent.AddForm.c_sipoa002.disabled=false;       // Supplier clear button
    DFrameExit();
  }
  else {
    parent.location.href="sinweb02.pbl?reportno=1&template=1&sipoa001="
                        + thisForm.sipoa001.value;
  }
}
function DeleteRec(thisForm) {
  thisForm.updttype.value="D";
  if (parent.AddForm.printfax[0].checked==true) {
    thisForm.printfax.value=0;
  }
  else {
    thisForm.printfax.value=1;
  }
  thisForm.selprint.value=parent.AddForm.selprint.value;
  thisForm.submit();
}
//------------------------------------------------------------------------
// Update Item Screen 
//------------------------------------------------------------------------
function UpdateItem(orderno,itemno) {
    linkurl="sinweb02.pbl?reportno=1&template=003" 
            + "&sipoa001=" + orderno.replace(/ /g,"+")
            + "&sipoc002=" + itemno.replace(/ /g,"+");
    Left=(document.body.clientWidth-600)/2
    DFrameLink(linkurl,100,Left,600,400)
}
//------------------------------------------------------------------------
// Add Item Screen 
//------------------------------------------------------------------------
function AddItems() {
  if (validateMandatory(AddForm)) {
    AddForm.sipoa002.readOnly=true;         // Supplier
    AddForm.sipoa002.className="Readonly";  // Supplier Name
    AddForm.s_sipoa002.disabled=true;       // Supplier search button
    AddForm.c_sipoa002.disabled=true;       // Supplier clear button
    linkurl="sinweb02.pbl?reportno=1&template=002&sipoa001=" 
            + AddForm.sipoa001.value.replace(/ /g,"+");
    Left=(document.body.clientWidth-600)/2
    DFrameLink(linkurl,100,Left,600,400)
  }
}
//------------------------------------------------------------------------
// Finish Purchase Order
//------------------------------------------------------------------------
function FinishOrder(thisForm) {
  if(validateMandatory(thisForm)) {
    thisForm.updttype.value="F";
    thisForm.submit();
  }
}
//------------------------------------------------------------------------
// Cancel Purchase Order    
//------------------------------------------------------------------------
function CancelOrder(thisForm) {
  if (confirm('Are you sure you want Delete this Order?')) {
    thisForm.updttype.value="C";
    thisForm.submit(); 
  } 
}
//------------------------------------------------------------------------
// Remote Script - Get Supplier Description and Contact
//------------------------------------------------------------------------
function ValidateSupplier(ReturnCode,ReturnName,ReturnContact) {
  ReturnName.value="";
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/allweb01.pbl?reportno=11" +
                    "&valdsupl=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    ReturnContact.value=trim(ReturnValue[1])
  }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    return false;
  }
}
//------------------------------------------------------------------------
// Remote Script - Get Cost Centre Description 
//------------------------------------------------------------------------
function ValidateCC(ReturnCode,ReturnCat,ReturnName) {
  ReturnName.value="";
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/comweb80.pbl?reportno=12" +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&valdcod2=" + ReturnCat.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    WarnMesg=trim(ReturnValue[1])
    if (!isWhitespace(WarnMesg)) {
      alert(WarnMesg);
    }
  }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    return false;
  }
}
//------------------------------------------------------------------------
// Catalog Search Screen based on supplier
//------------------------------------------------------------------------
function CatalogSearch(ReturnCode,ReturnName,ReturnUnit,ReturnProc) {
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.ReturnUnit=ReturnUnit ;
  window.ReturnFunction=ReturnProc ;
  if (parent.AddForm.sipoa002!=undefined) {
    supplier=parent.AddForm.sipoa002.value;
  }
  else {
    alert("Cannot find supplier code.");
    return;
  }
  PopUpFrameDoc.location.href = "../cgi-bin/sinweb02.pbl?reportno=2&template=1" +
                              "&supplier=" + supplier;
  SearchFrameShow();
}
//------------------------------------------------------------------------
// Validate for Catalog Field
//------------------------------------------------------------------------
function GetCatalog(thisForm) {
  a=thisForm;
  ValidateCatalog(a.sipoc007,a.d_sipoc007,a.sipoc004,a.sipoc027,a.sipoc010,
                  a.sipoc011,a.sipoc012,a.sipoc003,a.d_sipoc003,a.s_sipoc003,
                  a.c_sipoc003); 
  ValidateCatSupply(a.sipoc007,a.sipoc012,a.sipoc008,a.sipoc009,
                    a.sipoc013,a.sipoc018);
  GetGST(a.sipoc027,a.sipoc018,a.sipoc019,a.GSTPerct);
}
//------------------------------------------------------------------------
// Validate for Supply Unit Field
//------------------------------------------------------------------------
function GetSuppUnit(thisForm) {
  a=thisForm;
  ValidateCatSupply(a.sipoc007,a.sipoc012,a.sipoc008,a.sipoc009,
                   a.sipoc013,a.sipoc018);
  GetGST(a.sipoc027,a.sipoc018,a.sipoc019,a.GSTPerct);
  if (isWhitespace(a.sipoc007.value)) {
    a.sipoc013.value=a.currdate.value;
    CalcExpDel(a.sipoc013);
    a.sipoc018.className="Mandatory Number";
    a.sipoc018.readOnly=false;
    a.sipoc018.tabIndex=0;
  }
  else {
    a.sipoc018.className="Readonly Number";
    a.sipoc018.readOnly=true;
    a.sipoc018.tabIndex=-1;
  }
}
//------------------------------------------------------------------------
// Validate for Expected Cost + GST Field
//------------------------------------------------------------------------
function GetAmount(thisForm) {
  a=thisForm;
  GetGST(a.sipoc027,a.sipoc018,a.sipoc019,a.GSTPerct);
  CalcAmount(a.sipoc015,a.sipoc018,a.sipoc019,a.totalcst,a.totalgst);
}
//------------------------------------------------------------------------
// Remote script - Get Catalog Default values 
//       returns - Catalog Description, Product Group, GST Code
//------------------------------------------------------------------------
function ValidateCatalog(ReturnCode,ReturnName,ReturnProd,ReturnGST,ReturnContr,
                         ReturnCDate,ReturnSUnit,CCCode,CCName,SearchCC,ClearCC) {
  ReturnName.value="";
  ReturnContr.value="";
  ReturnCDate.value="";
  if (isWhitespace(ReturnCode.value)) return false;;

  justifyRight(ReturnCode);
  if ((parent.AddForm.sipoa002!=undefined) &&
      (!isWhitespace(parent.AddForm.sipoa002.value))) {
    supplier=parent.AddForm.sipoa002.value;
  }
  else {
    alert("Cannot find supplier code.");
    return false;
  }

  var serverURL   = "../cgi-bin/comweb80.pbl?reportno=10&valdcode=" 
                    + ReturnCode.value.replace(/ /g,"+") 
                    + "&supplier=" + supplier.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
// Set catalog name
    ReturnName.value=trim(ReturnValue[0])
// Set product group
    for (var i =0 ; i < ReturnProd.length; i++) {
      if (ReturnProd.options[i].value==trim(ReturnValue[1])) {
        ReturnProd.selectedIndex=i; 
      } 
    }
// Set GST Code
    for (var i =0 ; i < ReturnGST.length; i++) {
      if (ReturnGST.options[i].value==trim(ReturnValue[2])) {
        ReturnGST.selectedIndex=i; 
      } 
    }
// Set Cost Centre = Stock
    nonStock=trim(ReturnValue[3]);
    if (nonStock!=1) {
      CCCode.value="Stock";
      CCCode.className="Readonly";
      CCCode.disabled=true;
      CCName.value="Stock";
      SearchCC.disabled=true;
      ClearCC.disabled=true;
    }
    else {
      if (CCCode.value=="Stock") {
        CCCode.value="";
        CCName.value="";
      }
      CCCode.className="Mandatory";
      CCCode.disabled=false;
      SearchCC.disabled=false;
      ClearCC.disabled=false;
    }
// Set Contract           
    ReturnContr.value=trim(ReturnValue[4]);
// Set Contract Date            
    ReturnCDate.value=trim(ReturnValue[5]);
// Set Supply Unit if only one for that catalog
    if (isWhitespace(ReturnSUnit.value)) {
      ReturnSUnit.value=trim(ReturnValue[6]);
    }
// Display Warning Message - Preferred Supplier Code 
    if (!isWhitespace(trim(ReturnValue[7]))) {
      alert(trim(ReturnValue[7]));
    }
// Display Warning Message - Already on Order for this W/h. 
    if (!isWhitespace(trim(ReturnValue[8]))) {
      alert(trim(ReturnValue[8]));
    }
// Display Warning Message - Contracted on Supplier/Contract
    if (!isWhitespace(trim(ReturnValue[9]))) {
      alert(trim(ReturnValue[9]));
    }
// Display Warning Message - Supplier Not Available for this Catalog. Add New?
    if (!isWhitespace(trim(ReturnValue[10]))) {
      if (confirm(trim(ReturnValue[10]))) {
        AddCatSupp(ReturnCode.value,supplier);
      }
      else {
        ReturnCode.value="";
        ReturnName.value="";
        ReturnCode.select();
        ReturnCode.focus();
      }
    }
    return true;
  }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    return false;
  }
}
//------------------------------------------------------------------------
// Add Catalog Supplier Details
//------------------------------------------------------------------------
function AddCatSupp(Catalog,Supplier) {
  linkurl="sinweb02.pbl?reportno=3&template=001&sicic001=" 
         + Catalog.replace(/ /g,"+") 
         + "&sicic002=" + Supplier.replace(/ /g,"+")
  Left=(document.body.clientWidth-570)/2
  DFrameLink(linkurl,0,Left,570,380)
}
//------------------------------------------------------------------------
// Remote script - Get Catalog & Supply Default values 
//       returns - Part number, Part Description,  
//                 Exp. Delivery Date, Unit Cost                
//------------------------------------------------------------------------
function ValidateCatSupply(ReturnCode,ReturnUnit,ReturnPNum,ReturnPDsc,
                          ReturnDate,ReturnCost) {
  if (isWhitespace(ReturnCode.value) || (isWhitespace(ReturnUnit.value))) {
    return false;
  }

  justifyRight(ReturnCode);
  if ((parent.AddForm.sipoa002!=undefined) &&
      (!isWhitespace(parent.AddForm.sipoa002.value))) {
    supplier=parent.AddForm.sipoa002.value;
  }
  else {
    alert("Cannot find supplier code.");
    return false;
  }

  var serverURL   = "../cgi-bin/comweb80.pbl?reportno=13&valdcode="
                    + ReturnCode.value.replace(/ /g,"+")
                    + "&supplier=" + supplier.replace(/ /g,"+")
                    + "&suppunit=" + ReturnUnit.value.replace(/ /g,"+");
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnPNum.value=trim(ReturnValue[0])
    ReturnPDsc.value=trim(ReturnValue[1])
    ReturnDate.value=trim(ReturnValue[2])
    ReturnCost.value=trim(ReturnValue[3])
    return true;
  }
  else {
    ReturnUnit.value="";
    ReturnUnit.select();
    return false;
  }
}
//------------------------------------------------------------------------
// Cost Centre Search Screen                                
//------------------------------------------------------------------------
function CostCentreSearch(ReturnCode,ReturnName) {
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../cgi-bin/sinweb02.pbl?reportno=2&template=2"; 
  SearchFrameShow();
}
//------------------------------------------------------------------------
// Remote script - Get Gst Rate then Calculate GST amount
//------------------------------------------------------------------------
function GetGST(GSTCode,UnitAmount,GSTAmount,GSTPercent) {
  GSTAmount.value="";
  GSTPercent.value="";
  if (isWhitespace(GSTCode.value)) {
    return;
  }
  if (isWhitespace(UnitAmount.value)) {
    return;
  }
  var serverURL   = "../cgi-bin/comweb80.pbl?reportno=11&valdcode=" 
                    + GSTCode.value.replace(/ /g,"+");
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    GSTPercent.value=trim(ReturnValue[0])
    GSTPercent.value=parseFloat(GSTPercent.value);
    GSTAmount.value=(parseFloat(UnitAmount.value) * (GSTPercent.value/100));
    RoundNumber(GSTAmount,'2');
  }
  else {
    GSTCode.focus();
    return;
  }
}
//------------------------------------------------------------------------
// Calculate Total Cost and GST                             
//------------------------------------------------------------------------
function CalcAmount(Quantity,UnitAmount,GSTAmount,TotalUnit,TotalGST) {
  TotalGST.value="";
  TotalUnit.value="";
  if ( (isWhitespace(Quantity.value)) || (isWhitespace(UnitAmount.value)) ) {
    return;
  }
  if (!checkInteger(Quantity,Quantity.title)) {
    return; 
  }
  if (!checkNumber(UnitAmount)) {
    return 
  }
//
// Calculate Total Amount
//
  TotalUnit.value=(parseFloat(UnitAmount.value) * parseInt(Quantity.value,10));
  RoundNumber(TotalUnit,'2');
//
  if (isWhitespace(GSTAmount.value) ) {
    return;
  }
  if (!checkNumber(GSTAmount)) {
    return 
  }
//
// Calculate Total GST
//
  TotalGST.value=(parseFloat(GSTAmount.value) * parseInt(Quantity.value,10));
  RoundNumber(TotalGST,'2');
}
//
// Get Expected Delivery Date - Add 7 days to Current Date
//
function CalcExpDel(ExpDDate) {
  if (isWhitespace(ExpDDate.value)) { 
    return;
  }
  var serverURL   = "../cgi-bin/comweb80.pbl?reportno=14&valddate="
                    + ExpDDate.value.replace(/ /g,"+")
                    + "&numbdays=7";
  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ExpDDate.value=trim(ReturnValue[0])
  }
  else {
    return;
  }
}
