//jsVersion  : V11.03.01
//------------------------------------------------------------
// Utility functions for Discharge (patweb96) templates
//
function ShowUserDefinedFields(arrFields) {
  if (!arrFields || (arrFields == undefined))
    return;  // array of field no's to show??

  //
  // Use an associative array to store User Defined field settings
  // (ON/OFF and Mandatory/Normal)
  //
  // { fldNo : array (index 0 - ON/OFF; index 1 - Mandatory/Normal) }
  //
  var usrDefFlds = {};  
  var key = '';

  // Get controlf values for user defined fields and store
  for (var i in arrFields) {
    var fldOn = document.getElementById('ptcnusr' + arrFields[i]);
    var fldMand = document.getElementById('ptcnusm' + arrFields[i]);

    var isUse = 0;
    var isMand = 0;

    if (fldOn != undefined && parseInt(fldOn.value)) {
      isUse = parseInt(fldOn.value);
    }

    if (fldMand != undefined && parseInt(fldMand.value)) {
      isMand = parseInt(fldMand.value);
    }

    key = 'key' + arrFields[i];
    usrDefFlds[key] = [isUse,isMand];
  }

  // Show User Defined fields accordingly
  var bShow = false;
  for (var i in arrFields) {
    key = 'key' + arrFields[i];
    bShow = false;

    // User Defined field set to be used?
    if (usrDefFlds[key][0] == 1) {
      bShow = true;
      if (document.getElementById('ptcnacas') != undefined) {
        if (document.getElementById('ptcnacas').value == arrFields[i]) {
          bShow = false;  // don't show User Defined field since ACAS Status 
                          // field already being shown on the template.
        }
      }
    }

    if (bShow) {
      ShowField(arrFields[i], usrDefFlds[key][1]);
    }
  }
}

function ShowField(fldNo, fldMand) {

  if (fldNo == undefined || fldMand == undefined)
    return;

  var divLabel = document.getElementById('divUDF' + fldNo + 'Label');
  var divField = document.getElementById('divUDF' + fldNo + 'Field');
  var spLabel = document.getElementById('spUDF' + fldNo + 'Label');
  var spField = document.getElementById('spUDF' + fldNo + 'Field');

  if (!divLabel || !divField || !spLabel || !spField)
    return;

//  var oFld = spField.childNodes[0];
//  if (oFld) {
//    if (fldMand == 1) {
//      oFld.className = oFld.className + " Mandatory";
//    } 
//    else {
//      oFld.className = oFld.className.replace(/Mandatory/g,"");
//    }
//  }

  userDefFld = document.getElementById("dschusr"+fldNo);

  if (spField) {
    if (fldMand == 1) {
      userDefFld.className = userDefFld.className + " Mandatory"; }
    else {
      userDefFld.className = userDefFld.className.replace(/Mandatory/g,""); }
  }

  divLabel.innerHTML = spLabel.innerHTML;
  divField.innerHTML = spField.innerHTML;
}

function ShowFaxFields() {
  var state = document.getElementById("ptcnhdps").value;
  if(state != "3"){
    return;
  }
  if (!isWhitespace(document.pat96pdf.dschfaxt.value)) {
    var sVarName = 'SendDischargeSummary' +  trim(document.pat96pdf.mulhosid.value);
    if (VariableNameExists(sVarName) && (window[sVarName]==true)) {
      ShowInformGPFields();
    }
  }
}

function ToggleInformGP(oDDL) {
  if (oDDL==undefined)
    return;

  var sInformGP = oDDL.options[oDDL.selectedIndex].value;
  if (sInformGP == '0') {
    HideGPFields();
  }
  else if (sInformGP == '1') {
    if (isWhitespace(document.pat96pdf.refgpnam.value)) {
      // no Referring GP
      HideGPFields();
    }
    else if ( (document.pat96pdf.hcpactvs.value == "1") &&
              (document.pat96pdf.hcgactvs.value == "1") ) {
      // Inactive HCP and Practice
      HideGPFields();
    }
    else {
      ShowGPFields();
      ShowFaxPrinter();

      if (document.pat96pdf.hcpactvs.value == "0") {
        // There is an active HCP but no fax number
	if (isWhitespace(document.pat96pdf.refgpfax.value)) {
	  SetPrinterMandatory(true);

          // Get default printer code
          var sPrinterCode = document.pat96pdf.fxprintr.value;
          if (!isWhitespace(sPrinterCode)) {
            RemoveListOptions('ddlprntr',sPrinterCode);  // remove default
            ShowHideFaxBtn(false);  // hide Fax button
          }
	}
	else {
	  SetPrinterMandatory(false);
          ShowHideFaxBtn(true);  // show Fax button (if applicable)
	}
      }
    }
  }
}

function HideGPFields() {
  document.getElementById('divRefGP').innerHTML = "";
  document.getElementById('divFaxNo').innerHTML = "";
  document.getElementById('divFaxPrinter').innerHTML = "";
  ShowHideFaxBtn(false);  // hide fax button
}

function ShowGPFields() {
  document.getElementById('divRefGP').innerHTML =
      document.pat96pdf.refgpnam.value;
    document.getElementById('divFaxNo').innerHTML =
      document.pat96pdf.refgpfax.value;
}

function SetPrinterMandatory(IsMandatory) {
  if ( (document.getElementById('ddlprntr') == undefined) ||
       (IsMandatory == undefined) )
    return;

  var ddlPrinter = document.getElementById('ddlprntr');
  if (IsMandatory) {
    ddlPrinter.readonly = false;
    ddlPrinter.disabled = false;
    ddlPrinter.className = "Mandatory";
  }
  else {
    ddlPrinter.readonly = true;
    ddlPrinter.disabled = true;
    ddlPrinter.className = "Readonly";
  }
}

function ShowHideFaxBtn(Visible) {
  if (Visible == undefined)
    return;

  var spFax = document.getElementById('spFax');
  if (spFax == undefined)
    return;

  if (Visible) {
    document.getElementById('spFax').style.display = "";
  }
  else {
    document.getElementById('spFax').style.display = "none";
  }
}

function ShowInformGPFields() {
  if (document.getElementById('divInformGP') == undefined)
    return;

  document.getElementById('divInformGP').innerHTML = 
    document.getElementById('spInformGP').innerHTML;

  var ddlInformGP = document.getElementById('ddlInformGP');
  if (ddlInformGP != undefined) {
    for (var i =0 ; i < ddlInformGP.length; i++) {
      if (ddlInformGP.options[i].value == document.pat96pdf.informgp.value) {
        ddlInformGP.selectedIndex=i;
      }
    }
  }

  ToggleInformGP(ddlInformGP);
}

function ShowFaxPrinter() {
  document.getElementById('divFaxPrinter').innerHTML =
    document.getElementById('spFaxPrinter').innerHTML;

  var ddlPrinter = document.getElementById('ddlprntr');
  if (ddlPrinter != undefined) {
    for (var i =0 ; i < ddlPrinter.length; i++) {
      if (ddlPrinter.options[i].value == document.pat96pdf.fxprintr.value) {
        ddlPrinter.selectedIndex=i;
      }
    }
  }
}

function PrinterSelect(oDDL) {
  if (oDDL==undefined)
    return;

  if (oDDL.selectedIndex == 0) {
    ShowHideFaxBtn(false);
  }
  else {
    ShowHideFaxBtn(true);
  }
}

function Fax() {
  if (!isWhitespace(document.getElementById('divFaxPrinter').innerHTML))
  {
    var ddlPrtr = document.getElementById('ddlprntr');
    if (ddlPrtr != undefined) {
      document.pat96pdf.faxitflg.value = "1";
      document.pat96pdf.faxprcod.value = ddlPrtr.options[ddlPrtr.selectedIndex].value;
      if (ddlPrtr.selectedIndex == 0) {
        alert("Please select a Printer");
        ddlPrtr.focus();
      }
      else {
        var serverURL = "../cgi-bin/patweb96.pbl?reportno=12&remoteno=13" +
          "&urnumber=" + document.pat96pdf.urnumber.value.replace(/ /g,"+") +
          "&admissno=" + document.pat96pdf.admissno.value.replace(/ /g,"+") +
          "&faxprcod=" + document.pat96pdf.faxprcod.value;

        var returnValue = RSExecute(serverURL);
        if (returnValue.status==0) {
          if (returnValue.return_value == 1) {
            window.location.reload();
          }
          else {
            alert("Scheduling of fax failed!");
          }
        }
        else {
          alert("Invalid server response. Please ensure PATWEB96 is running.");
        }
      }
    }
  }
}

//-----------------------------------------------------------------------------
//-                 Late Discharge Functions
//-----------------------------------------------------------------------------

function HideLateDischargeReason() {
  document.getElementById('LateDiscReason').style.display = "none";
  document.getElementById('LateDiscReasonComm1').style.display = "none";
  document.getElementById('LateDiscReasonComm2').style.display = "none";
  RemoveClassName(f.ltdsresn,"Mandatory");
  RemoveClassName(f.ltdscom1,"Mandatory");
}

function ShowHideLateDischargeReason() {
  f = document.pat96pdf;
  if (PromptLateDischargeReason()) {
    document.getElementById('LateDiscReason').style.display = "";
    document.getElementById('LateDiscReasonComm1').style.display = "";
    document.getElementById('LateDiscReasonComm2').style.display = "";
    AddClassName(f.ltdsresn,"Mandatory");
    LateDischargeReasonChanged();
  }
  else {
    document.getElementById('LateDiscReason').style.display = "none";
    document.getElementById('LateDiscReasonComm1').style.display = "none";
    document.getElementById('LateDiscReasonComm2').style.display = "none";
    RemoveClassName(f.ltdsresn,"Mandatory");
    RemoveClassName(f.ltdscom1,"Mandatory");
  }
}

function PromptLateDischargeReason() {
  f = document.pat96pdf;

  if (isWhitespace(f.ptcndptm.value)) {return false};
  if (SetDateYYYYMMDD(f.trandate1.value) ==
      SetDateYYYYMMDD(f.d_adate.value)) {return false};
  if (compareTimes(f.ptcndptm.value,f.trantime.value)) {return false};
  if (f.BTInd11.value == 'E' || f.BTInd11.value == 'M') {return false};
  if (f.RTInd07.value == 'N') {return false};
  if (f.DDind01.value == 'D') {return false};

  return true;
}

function LateDischargeReasonChanged() {
  f = document.pat96pdf;
  var i = f.ltdsresn.selectedIndex;
  var ind04 = f.ltdsresn.options[i].value.substr(6,1)

  if (ind04 == 'O') {
    AddClassName(f.ltdscom1,"Mandatory");
  }
  else {
    RemoveClassName(f.ltdscom1,"Mandatory");
  }
}
