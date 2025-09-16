//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb8305.js
//
// Written   : ????
//
// Function  : Standard Functions Used in patweb8305 templates
//
// Version   :
//
// V10.05.01 05/12/2014  Ebon Clements  CAR 309501
//                       Remove special characters from CheckValPostCode()
// V10.03.02 15/01/2013  Patrick Adair  CAR 270734
//                       Added Postcode/Suburb validation
// V10.03.01 01/10/2012  Peter Vela     CAR 270657
//                       Created js 
//========================================================================
function validateTime(dateField,timeField) {

  if (!checkDate(dateField,dateField.title)) {
    return false;
  }
  if (!checkTime(timeField,timeField.title)) {
    return false;
  }

  SetCurrentDateTimeNoFocus(UpdateForm.currdate,UpdateForm.currtime);
  if (!isWhitespace(dateField.value) &
      !isWhitespace(timeField.value) &
      !isWhitespace(document.UpdateForm.currdate.value) &
      !isWhitespace(document.UpdateForm.currtime.value)) {


    if (dateField.value ==
        document.UpdateForm.currdate.value) {

      if (timeField.value >
          document.UpdateForm.currtime.value) {
        alert(timeField.title + " cannot be in the future");
        timeField.value="";
        timeField.select();
        timeField.focus();
        return false;
      }
    }
  }
  return true;
}
  function CopyToCurrent() {
    document.UpdateForm.updatety.value="C";
    document.UpdateForm.submit();
  }
  function DeleteBoarder() {
    document.UpdateForm.updatety.value="E";
    document.UpdateForm.submit();
  }
  function lookSuburb(){
    if (isWhitespace(UpdateForm.ptbrd014.value))
       { return true; }
    LookupSuburb(UpdateForm.ptbrd014.value)
  }
  function valPostCode(){
    if (isWhitespace(UpdateForm.ptbrd012.value))
       { return true; }
    UpCase(UpdateForm.ptbrd012);
    if (trim(UpdateForm.ptbrd014.value)!="8888") {
        LookupPostCode(UpdateForm.ptbrd012.value);
    }
  }
  function CheckValPostCode() {
    if ((isWhitespace(UpdateForm.ptbrd014.value)) &&
        (isWhitespace(UpdateForm.ptbrd012.value)))
       { return true; }
    if (trim(postcode.value)=="8888") {
       if (confirm("Click OK to confirm an Overseas Address"))
          { return true; }
       }
    var fulladdress = trim(postcode.value) + "," +
                     trim(suburb.value) + "," +
                     trim(state.value);
    var tmp1 = fulladdress.replace(/[-[\]{}()*+?.,\\^$|#\s]/g, " ");
    for (var i =0; i<PC.length ; i++) {
        var tmp2 = PC[i].replace(/[-[\]{}()*+?.,\\^$|#\s]/g, " ");
        if (tmp2.match(tmp1)) {
           SelectPC[SelectPC.length] = PC[i]
           return true;
        }
    }
    alert("Invalid Suburb/Post Code Combination");
    return false;
  }
// N.B. This function is used by patweb8305003 (Add Boarder) 
//                           and patweb8305007 (Update Boarder) ! 
  function UpdateSubmit() {
    if (!validateMandatory(document.UpdateForm))
        {return;}
    if (!isWhitespace(UpdateForm.ptbrd020.value)&&
        !isWhitespace(UpdateForm.ptbrd022.value)) {
        if (!CheckDateRange(UpdateForm.ptbrd020,UpdateForm.ptbrd022))
            {return;}}
     if (!isWhitespace(UpdateForm.ptbrd020.value)&&
         !isWhitespace(UpdateForm.admndate.value)) {
         if (!CheckDateRange(UpdateForm.admndate,UpdateForm.ptbrd020))
             {return;}}
    if (((!isWhitespace(UpdateForm.ptbrd012.value)) &&
          (isWhitespace(UpdateForm.ptbrd014.value))) ||
        ((!isWhitespace(UpdateForm.ptbrd014.value)) &&
          (isWhitespace(UpdateForm.ptbrd012.value))))
         { alert("Invalid Suburb/Post Code Combination");
           return; }
     if (!CheckValPostCode())
            { return; }
     if (validateTime(UpdateForm.ptbrd020,UpdateForm.ptbrd021)) {
         document.UpdateForm.submit(); }
  }

