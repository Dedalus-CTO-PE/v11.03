//jsVersion  : V11.03.00
//========================================================================
// Program   : emrweb02.js
//
// Written   : 28.12.2000 Pat Dirito
//
// Function  : Standard Functions Used in emrweb0202005.html
//
// Version   : 
// V10.04.01 14.07.2014  Ebon Clements CAR 301581
//           Restored trim on location description validateLocation()
// V10.03.01 22.07.2013  Ebon Clements CAR 287151
//           Changed trim to substr validateLocation()
//
//             V9.04.01 18.10.2005  Ebon Clements CAR 80456
//                      Added Validateprecom001()
//             V9.04.00 29.08.2005 Ebon Clements CAR 57317
//                      Added validateLocation()
//             V9.02.10 23.04.2002  Bronko
//                      Mods for StV golive
//             V9.02.09 14.03.2002  Bronko                                    
//                      Changes for doctor/nurse incompleates
//             V9.02.08 07.03.2002 Bronko
//                      To integrate the inpatient module into the
//                      Emergency discharge screen
//             V9.02.07 28.02.2002 Bronko
//                      Intergration of the inpatient module with EMR
//             V9.02.06 24.02.2002 Bronko
//                      Intergration of the inpatient module with EMR
//             V9.02.05 07.02.2002 Bronko
//                      Changes for St V.
//             V9.02.04 31.01.2002 Bronko
//                      Changes to functionality of Map View
//             V9.02.03 10.01.2002 Bronko
//                      New functionality of Doctor & Nurse handover
//             V9.02.02 20.12.2001 Bronko
//                      changes for St.V. with emr
//             V9.02.01 15.12.2001 Bronko
//                      Refreshing Emergency map 
//             V5.09.00 28.12.2000 Pat Dirito
//
//========================================================================
//
//========================================================================
//  Report 2
//========================================================================
function setFormactn() {
  if (validateMandatory(UpdateForm)) {
     SetRedirect();
     document.UpdateForm.formactn.value="NU"
     document.UpdateForm.updttype.value="NEWUR"
     UpdateWin=window.open("","HideUpdateWindow",
     "width=10,height=10,top=1024,directories=no,location=no" +
     ",scrollbars=no,status=no,toolbar=no,menubar=no,resizeable=no")
     document.UpdateForm.target="HideUpdateWindow";
     document.UpdateForm.submit()
     }
}
function validateLocation(SearchField,SearchName) {
  if (isWhitespace(SearchField.value)) {
      SearchName.value="";
      return;;
  }
  SearchField.value=SearchField.value.toUpperCase()
  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=2" +
                    "&valdcode=" + SearchField.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    SearchName.value=trim(ReturnValue[1]);
    SearchField.value=ReturnValue[0].substr(0,3);
  }
  else {
     document.UpdateForm.emvis006.focus();
     document.UpdateForm.emvis006.value="";
     document.UpdateForm.name_emvis006.value="";
  }

}
function Validateprecom001() {
    onblurHandler()
    var formatedtext=formateText(UpdateForm.prcom001,'50')
    if ((formatedtext.split(/[\r\n]/).length>6) ||
        (UpdateForm.prcom001.value.length > 300)) {
      alert("Presenting Complaint comments - Max 6 lines."
          + "\nPlease remove extra lines to continue.");
      document.UpdateForm.prcom001.focus();
      return; }
}
function getPresentCom(SearchField,ReturnSelect,CatCode) {
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=32" +
                    "&valdcode=" + SearchField.value.replace(/ /g,"+") +
                    "&valdcatc=" + CatCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnSelect.options.length=0
    ReturnValue=returnValue.return_value.split("|");
    for (var j=0; j < ReturnValue.length; j++) {
       if (!isWhitespace(ReturnValue[j])) {
         SelectValue=ReturnValue[j].split(",");
         ReturnSelect.options[ReturnSelect.options.length]=
          new Option(SelectValue[1],SelectValue[0]); } } }
}
