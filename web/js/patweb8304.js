//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb8304.js
//
// Written   : ????
//
// Function  : Standard Functions Used in patweb8304 templates
//
// Version   :
//
// V10.03.00 14/01/2013  Patrick Adair     CAR 270734
//                       Created js
//========================================================================
  function admitTempBoarder(){
    if (validateMandatory(document.UpdateForm)) {
       if (((!isWhitespace(UpdateForm.ptmas010.value)) &&
            (isWhitespace(UpdateForm.ptmas012.value))) ||
           ((!isWhitespace(UpdateForm.ptmas010.value)) &&
            (isWhitespace(UpdateForm.ptmas012.value))))
          { alert("Invalid Suburb/Post Code Combination for New Born");
            return; }
       if (!CheckValPostCode())
          { return; }
    AdmitBoarder();
    }
  }
  function admitTempBoarderNB(){
    if (validateMandatory(document.UpdateForm)) {
       if (((!isWhitespace(UpdateForm.ptmas010.value)) &&
            (isWhitespace(UpdateForm.ptmas012.value))) ||
           ((!isWhitespace(UpdateForm.ptmas010.value)) &&
            (isWhitespace(UpdateForm.ptmas012.value))))
          { alert("Invalid Suburb/Post Code Combination for New Born");
            return; }
       if (!CheckValPostCode())
          { return; }
    AdmitBaby();
    }
  }
  function CheckValPostCode() {
    if ((isWhitespace(UpdateForm.ptmas010.value)) &&
        (isWhitespace(UpdateForm.ptmas012.value)))
       { return true; }
    suburb   = document.UpdateForm.ptmas010;
    state    = document.UpdateForm.ptmas011;
    postcode = document.UpdateForm.ptmas012;
    if (trim(postcode.value)=="8888") {
       if (confirm("Click OK to confirm an Overseas Address"))
          { return true; }
       }
    var fulladdress = trim(postcode.value) + "," +
                      trim(suburb.value) + "," +
                      trim(state.value);
    for (var i =0; i<PC.length ; i++) {
      if  (PC[i].match(fulladdress)) {
          SelectPC[SelectPC.length] = PC[i]
          return true;
      }
    }
    alert("Invalid Suburb/Post Code Combination for New Born");
    return false;
  }
  function lookSuburb() {
    if (isWhitespace(document.UpdateForm.ptmas012.value))
       { return; }
    suburb   = document.UpdateForm.ptmas010;
    state    = document.UpdateForm.ptmas011;
    postcode = document.UpdateForm.ptmas012;
    LookupSuburb(document.UpdateForm.ptmas012.value);
  }
  function valPostCode() {
    if (isWhitespace(document.UpdateForm.ptmas010.value))
       { return; }
    UpCase(document.UpdateForm.ptmas010);
    suburb   = document.UpdateForm.ptmas010;
    state    = document.UpdateForm.ptmas011;
    postcode = document.UpdateForm.ptmas012;
    if (trim(document.UpdateForm.ptmas012.value)!="8888") {
        LookupPostCode(document.UpdateForm.ptmas010.value);
    }
  }
