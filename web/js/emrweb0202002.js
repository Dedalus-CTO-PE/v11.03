//jsVersion  : V11.03.00
//========================================================================
// Program   : emrweb02.js
//
// Written   : 28.12.2000 Pat Dirito
//
// Function  : Standard Functions Used in emrweb0202002.html 
//
//========================================================================
//
//========================================================================
//  Report 2
//========================================================================
function UpdateVisit() {
  if (validateMandatory(UpdateForm)) {
     if (document.UpdateForm.redirect.value.substr(0,12)!=="nhiweb99.pbl") {
       setRedirect();
     }
     document.UpdateForm.formactn.value="N3"
     document.UpdateForm.updttype.value="REGIS"
     UpdateWin=window.open("","HideUpdateWindow",
     "width=10,height=10,top=1024,directories=no,location=no" +
     ",scrollbars=no,status=no,toolbar=no,menubar=no,resizeable=no")
     document.UpdateForm.target="HideUpdateWindow";
     document.UpdateForm.submit()
     }
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
//-----------------------------------------------------------------
// Function to check for any visits for this ur on a date
//-----------------------------------------------------------------
function CheckEmrVisit(urnum,chkdat) {
  if (isWhitespace(urnum)) {
     return true;
  }
  var serverURL = "../cgi-bin/emrweb08.pbl?reportno=17" +
                  "&valddate=" + chkdat.replace(/ /g,"+") +
                  "&valdurno=" + urnum.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    if(!isWhitespace(ReturnValue[0])) {
      if(!confirm("Patient has already presented on.\n" +
                 "Date - \t" + ReturnValue[1] + "\n" +
                 "U/R - \t" + ReturnValue[0].replace(/ /g,"") + "\n" +
                 "Visit - \t" + ReturnValue[2].replace(/ /g,"") + "\n" +
                 "Select OK to continue with registration.\n" +
                 "Select Cancel to abort registration.")) {
         return false;
      }
    }
  }
  return true;
}
//-----------------------------------------------------------------
// Function to check for expected patients with the same name or ur
//-----------------------------------------------------------------
function checkExpectedPat(urnum) {
  if (isWhitespace(urnum)) return false;;
  var serverURL = "../cgi-bin/emrweb08.pbl?reportno=16" +
                  "&valdcode="+urnum.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")

    if(!isWhitespace(ReturnValue[0])) {
      if(confirm("Possible Expected Patient Match.\n" +
                 "U/R - \t\t" + ReturnValue[1].replace(/ /g,"") + "\n" +
                 "Surname - \t" + ReturnValue[2] + "\n" +
                 "Given Name - \t" + ReturnValue[3] + "\n" +
                 "Select OK to register U/R - " + urnum.replace(/ /g,"")  +
                 " using Expected Patient details \n" +
                 "Select Cancel to continue with this registration.")) {
         // Unique no
         top.content.UpdateForm.emexp001.value=ReturnValue[0]
         // Location
         top.content.UpdateForm.emvis006.value=ReturnValue[4]
         top.content.UpdateForm.emvis006.focus();
         top.content.UpdateForm.emvis006.blur();
         // Attendance source
         for (var i=0; i < top.content.UpdateForm.emvis061.length; i++) {
          if (top.content.UpdateForm.emvis061.options[i].value==ReturnValue[5]){
              top.content.UpdateForm.emvis061.selectedIndex=i;
          }
         }
         // Amb Case no
         if(!isWhitespace(ReturnValue[6])) {
           top.content.UpdateForm.emvis034.value=ReturnValue[6]
         }
         // Flag to default presenting complaint
         top.content.UpdateForm.pcomdeft.value="1";
         if(!isWhitespace(ReturnValue[7])) {
           top.content.UpdateForm.emexp007.value=ReturnValue[7]
         }
         if(!isWhitespace(ReturnValue[8])) {
           top.content.UpdateForm.emexp008.value=ReturnValue[8]
         }
         if(!isWhitespace(ReturnValue[9])) {
           top.content.UpdateForm.emexp009.value=ReturnValue[9]
         }
         if(!isWhitespace(ReturnValue[10])) {
           top.content.UpdateForm.emexp010.value=ReturnValue[10]
         }
         if(!isWhitespace(ReturnValue[11])) {
           top.content.UpdateForm.emexp011.value=ReturnValue[11]
         }
         if(!isWhitespace(ReturnValue[12])) {
           top.content.UpdateForm.emexp012.value=ReturnValue[12]
         }
         if(!isWhitespace(ReturnValue[13])) {
           top.content.UpdateForm.emexp013.value=ReturnValue[13]
         }
         if(top.content.UpdateForm.prcom001!=undefined) {
            top.content.UpdateForm.prcom001.value=trim(ReturnValue[8]) + "\n" +
                                                  trim(ReturnValue[9]) + "\n" +
                                                 trim(ReturnValue[10]) + "\n" +
                                                 trim(ReturnValue[11]) + "\n" +
                                                 trim(ReturnValue[12]) + "\n" +
                                                 trim(ReturnValue[13])
         }
         if(top.content.UpdateForm.prscompl!=undefined) {
            validateCatCode(top.content.UpdateForm.emrviscat,
                            top.content.UpdateForm.emexp007,
                            top.content.UpdateForm.prscompl);
            getPresentCom(top.content.UpdateForm.prscompl,
                          top.content.UpdateForm.emvis060,
                          top.content.UpdateForm.emrviscat);
         }
         return true;
      }
    }
  }
  return false;
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
    SearchName.value=trim(ReturnValue[1])
    SearchField.value=trim(ReturnValue[0])
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
