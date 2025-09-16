//jsVersion  : V11.03.01
//         
//----------------------------------------------------------------------
// Functions : Send OEC request for selected visits                     
//----------------------------------------------------------------------
OutputArray = new Array();        // Create Array to Store Rows of Table
OldArray = new Array();           // Create Array to Store Rows of Table
function UpdateArray(ReturnCode) {
  var OECKey="";
  var Flag=0;
  OldArray=OutputArray
  OutputArray = new Array();      // Create Array to Store Rows of Table
  j=0;
  for (i=0;i<OldArray.length;i++) {
    x = ReturnCode.substring(0,9)
    y = OldArray[i].substring(40,49)
    if (x!=y) {
      OutputArray[j]=OldArray[i]
      j++
    }
    else {
      Flag="1"                     // Remove record from array
    }
  }
  if (Flag == "1") {
    OutputDivision()
  }
  else {
    AddOutputArray(ReturnCode)    // Add new record to array
    OutputDivision()
  }
}
function OutputDivision() {
    OutputString=""
    for (i=0; i<OutputArray.length; i++) {
//  for (i=OutputArray.length-1;i>=0;i--) {
      OutputString+=OutputArray[i]
    }
    Results.innerHTML=OutputString
}
function AddOutputArray(OECKey) {
    OutputArray[OutputArray.length] = "<input type=hidden name=oecreqno" +
                                      " value='" + OECKey + "'>"
}
function RequestRecords() {
  if(OutputArray.length=="0") {
    alert("No visits have been selected.");
    return;
  }
  document.SelectPeriod.updttype.value="R";

  if (document.SelectPeriod.ibcnmhos.value==1) {
  document.SelectPeriod.redirect.value="patweb92.pbl?reportno=19&template=001" +
           "&filthosp=" + SelectPeriod.filthosp.value.replace(/ /g,"+") +
           "&requstat=" + SelectPeriod.requstat.value.replace(/ /g,"+") +
           "&viewtype=" + SelectPeriod.viewtype.value.replace(/ /g,"+") +
           "&lastdate=" + SelectPeriod.lastdate.value.replace(/ /g,"+") +
           "&hospcomp=" + SelectPeriod.hospcomp.value.replace(/ /g,"+")
  } else {
  document.SelectPeriod.redirect.value="patweb92.pbl?reportno=19&template=001" +
           "&requstat=" + SelectPeriod.requstat.value.replace(/ /g,"+") +
           "&viewtype=" + SelectPeriod.viewtype.value.replace(/ /g,"+") +
           "&lastdate=" + SelectPeriod.lastdate.value.replace(/ /g,"+") +
           "&hospcomp=" + SelectPeriod.hospcomp.value.replace(/ /g,"+")
  }

  if (validateMandatory(SelectPeriod)) {
    SelectSubmit();
  }
}
function RequestRecordsBooking() {
  if(OutputArray.length=="0") {
    alert("No visits have been selected.");
    return;
  }
  document.SelectPeriod.updttype.value="R";

  if (document.SelectPeriod.ibcnmhos.value==1) {
  document.SelectPeriod.redirect.value="patweb92.pbl?reportno=19&template=003" +
           "&filthosp=" + SelectPeriod.filthosp.value.replace(/ /g,"+") +
           "&requstat=" + SelectPeriod.requstat.value.replace(/ /g,"+") +
           "&viewtype=" + SelectPeriod.viewtype.value.replace(/ /g,"+") +
           "&hospcomp=" + SelectPeriod.hospcomp.value.replace(/ /g,"+")
  } else {
  document.SelectPeriod.redirect.value="patweb92.pbl?reportno=19&template=003" +
           "&requstat=" + SelectPeriod.requstat.value.replace(/ /g,"+") +
           "&viewtype=" + SelectPeriod.viewtype.value.replace(/ /g,"+") +
           "&hospcomp=" + SelectPeriod.hospcomp.value.replace(/ /g,"+")
  }

  if (validateMandatory(SelectPeriod)) {
    SelectSubmit();
  }
}
function RequestRecordsBookingDBC() {
  if(OutputArray.length=="0") {
    alert("No visits have been selected.");
    return;
  }
  document.SelectPeriod.updttype.value="R";

  if (document.SelectPeriod.ibcnmhos.value==1) {
  document.SelectPeriod.redirect.value="patweb92.pbl?reportno=19&template=004" +
           "&filthosp=" + SelectPeriod.filthosp.value.replace(/ /g,"+") +
           "&requstat=" + SelectPeriod.requstat.value.replace(/ /g,"+") +
           "&viewtype=" + SelectPeriod.viewtype.value.replace(/ /g,"+") +
           "&hospcomp=" + SelectPeriod.hospcomp.value.replace(/ /g,"+")
  } else {
  document.SelectPeriod.redirect.value="patweb92.pbl?reportno=19&template=004" +
           "&requstat=" + SelectPeriod.requstat.value.replace(/ /g,"+") +
           "&viewtype=" + SelectPeriod.viewtype.value.replace(/ /g,"+") +
           "&hospcomp=" + SelectPeriod.hospcomp.value.replace(/ /g,"+")
  }

  if (validateMandatory(SelectPeriod)) {
    SelectSubmit();
  }
}
function GetBokTypCookieName() {
  win=parent.content;
  var sCookieName = "BookingType-" + trim(win.TemplateFile.content).replace("\.html","");
  return sCookieName;
}
function SaveBokTypFiltCookie() {
  var sCookieName = GetBokTypCookieName();
  var ddlBokFil = document.getElementById('bktypfil');
  if (ddlBokFil == undefined)
    return;

  SetCookie(sCookieName,ddlBokFil.options[ddlBokFil.selectedIndex].value);
}
function LoadBokTypFiltCookie() {
  var sCookieName = GetBokTypCookieName();
  var sBookType = GetContentCookie(sCookieName);
  if (sBookType != "unknown") {
    var ddlBokFil = document.getElementById('bktypfil');
    if (ddlBokFil == undefined)
      return;

    for (var i=0; i < ddlBokFil.length; i++) {
      if (ddlBokFil.options[i].value == sBookType) {
        ddlBokFil.selectedIndex=i;
        onFilterList(ddlBokFil,'79');
      }
    }
  }
  ExpireCookiePath(sCookieName);
}
function ShowHideBookTypeFilter(Visible) {
  if (Visible) {
    document.getElementById('divBokTypLbl').innerHTML =
      document.getElementById('spBokTypLbl').innerHTML;

    document.getElementById('divBokTypFld').innerHTML =
      document.getElementById('spBokTypFld').innerHTML;
  }
  else {
    document.getElementById('divBokTypLbl').innerHTML = "";
    document.getElementById('divBokTypFld').innerHTML = "";
  }
}
