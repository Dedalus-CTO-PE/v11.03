//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/ipadform.js
// Modification 
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V11.00.01 23.11.2020 Sunny         TSK 0891498
//                      Fixed alert message in function warnEmpty() 
// V10.06.01 01.07.2015 B.G.Ackland   CAR 318497
//                      Make Invalid date Clear Field Content to Avoid Looping 
// V10.03.02 06.08.2013 B.G.Ackland   CAR 289383
//                      Standardize AJAXPostString into ipad.js and remove from ipadform.js
// V10.03.01 02.07.2013 B.G.Ackland Align tran and Work Scripts
//
var optPrependCommentDate=false;    // prepend dates to comment textarea class="taAddDate"
var spinningwheelopen = false;
//============================================================
// Possible Next Release Function for beforeunload
//        if (el.className!="PMenuSelectList" && el.onChange==null) {
//          el.onchange=SetFormChanged; }
//------------------------------------------------------------
// Initialise Forms of the Page
//------------------------------------------------------------
function InitialiseForms() {
//  self.onbeforeunload=BeforePageUnload;
  FirstField=true
  for (var f = 0 ; f < document.forms.length; f++) {
    addFormHandler(document.forms[f])
    for (var e = 0; e < document.forms[f].elements.length; e++) {
      addHandler(document.forms[f].elements[e])
      var el=document.forms[f].elements[e] ;
      if (el.type == "text") { el.value=el.value.replace(/\s*$/,"") }
      if (el.className.match(/Integer/)) {el.value=el.value.replace(/\s/g,"") }
      if (el.className.match(/Number/)) {el.value=el.value.replace(/\s/g,"") }
      if (el.type == "textarea") { el.value=el.value.replace(/\s*$/,"") }
      if (el.type != "hidden" && !el.readOnly && !el.disabled
          && !el.className.match(/NoAutoFocus/)) {
        if (FirstField) {
          FirstField=false
          el.focus()
         } }
    }
  }
}
//------------------------------------------------------------
// Standard Template Page BeforeUnLoad Function (Possible Next Release)
//  window.onbeforeunload=BeforePageUnLoad
//------------------------------------------------------------
//function BeforePageUnload() {
//  if (formChangeIndicator) {
//    return "Some fields have been updated and not saved."; }
//}
//============================================================
// Add Form Handler
//============================================================
function addFormHandler(form) {
   if (window.onclickHandler) {
      if (form.onclick==null) {
        form.onclick = onclickHandler; }}
   if (window.ondblclickHandler) {
      if (form.ondblclick==null) {
        form.ondblclick = ondblclickHandler; }}
   if (window.onkeypressHandler) {
      if (form.onkeypress==null) {
        form.onkeypress = onkeypressHandler; }}
}
//============================================================
// Add Form Element Handler
//============================================================
function addHandler(formElement) {
   if (window.onblurHandler) { 
      if (formElement.onblur==null) {
        formElement.onblur = onblurHandler; }}
   if (window.onchangeHandler) {
      if (formElement.onchange==null) {
        formElement.onchange = onchangeHandler; }}
   if (window.onselectHandler) {
      if (formElement.onselect==null) {
        formElement.onselect = onselectHandler; }}
   if (window.onfocusHandler) {
      if (formElement.onfocus==null) {
        formElement.onfocus = onfocusHandler; }}
}
//========================================================================
// Standard onblur function call
//========================================================================
function onblurHandler(ev) {
  var el;                           // event element
  if (!ev) var ev = window.event;   // event is not passed ny IE
  if (!ev) return;                  // if still no event, leave
  if (ev.srcElement)
    el = ev.srcElement;
  else if (ev.target)
    el = ev.target;
  else
    return;

  switch (el.type)
  {
    case 'text':
           TextBlurHandler(el);
           break;
    case 'textarea':
           if ( optPrependCommentDate && 
               (   el.name == 'adcommnt'
                || el.name == 'blcommnt' 
                || el.name == 'urcommnt'
                || el.className.match(/taAddDate/))
               ) 
             onBlurTextareaPrependDate(el);
           TextareaBlurHandler(el);
           break;
  }

  if (window.formblurHandler)
    formblurHandler(el);

}
//========================================================================
// Standard onchange function call
//========================================================================
function onchangeHandler(ev) 
{
  var el;                           // event element
  if (!ev) var ev = window.event;   // event is not passed ny IE
  if (ev.srcElement)
    el = ev.srcElement;
  else if (ev.target)
    el = ev.target;
  else
    return;

   if (window.formchangeHandler)  formchangeHandler(el); 
}
//========================================================================
// Standard onselect function call
//========================================================================
function onselectHandler(ev) 
{
  var el;                           // event element
  if (!ev) var ev = window.event;   // event is not passed ny IE
  if (ev.srcElement)
    el = ev.srcElement;
  else if (ev.target)
    el = ev.target;
  else
    return;

   if (window.formselectHandler)  formselectHandler(el); 
}
//========================================================================
// Standard onfocus function call
//========================================================================
function onfocusHandler(ev)
{
  var el;                           // event element
  if (!ev) var ev = window.event;   // event is not passed ny IE
  if (ev.srcElement)
    el = ev.srcElement;
  else if (ev.target)
    el = ev.target;
  else
    return;

  if (  el.type == 'textarea'
     &&  optPrependCommentDate
     &&  (   el.name == 'adcommnt'
          || el.name == 'blcommnt'
          || el.name == 'urcommnt'
          || el.className.match(/taAddDate/)
         )
     )
  {
    onFocusTextareaPrependDate(el);
  }

  if (window.formfocusHandler)  formfocusHandler(el);
}

//========================================================================
// Standard onblur functions for textarea input fields
//========================================================================
function TextareaBlurHandler(el) 
{
  if (el.value.match(/\"/)) {
        el.value=el.value.replace(/\"/g,"'"); }
}

//========================================================================
// onfocus function for textarea with class 'taAddDate'
// will add current date at the beginning of new entry.
// needs companion function onBlurTextareaPrependDate
//========================================================================
function onFocusTextareaPrependDate(el)
{
  if (!optPrependCommentDate) return;
  var today = new Date();
  var newline = "";
  el.dstamp = today.getDate() + '/' + eval(today.getMonth() +1 )+ '/' + today.getFullYear() + ": ";

  if (!isWhitespace(el.value)) newline = "\n";  //set linefeed if necessary
  el.textoriginal = el.value;
  el.value = el.dstamp + newline + el.value;
  setCaretPosition(el, el.dstamp.length)
  el.textstart = el.value;
}

//========================================================================
// onblur function for textarea with class 'taAddDate'
// will add current date at the beginning of new entry.
// needs companion function onFocusTextareaPrependDate
//========================================================================
function onBlurTextareaPrependDate(el)
{
  var i,  line1, line2plus;

  if (!optPrependCommentDate) return;

  if (isWhitespace(el.value)) return;

  if (el.value == el.textstart)
  {
    el.value = el.textoriginal;
    return;
  }

  i = el.value.search(/\n/g);  // find first linebreak
  if (i > 0)
  {
    line1     = el.value.substr(0,i);
    line2plus = el.value.substr(++i);
  }
  else
  {
    line1     = el.value;
    line2plus = "";
  }

  if (el.dstamp!=undefined) {

    // if first line is whitespace we have some thinking to do
    if (isWhitespace(line1.substr(el.dstamp.length)))
    {
      if (line2plus == el.textoriginal)
      {
        // no real change - restore original
        el.value = el.textoriginal;
        return;
      }
      else
      {
        // update is in older lines - scrap line 1
        el.value = line2plus;
      }
    }

  }
}
//========================================================================
// Standard onblur functions for text input fields
//========================================================================
function TextBlurHandler(el) {
  if (el.value.match(/\"/)) {
        el.value=el.value.replace(/\"/g,"'"); } 
  if (el.title.match(/Date/)) {
        checkDate(el,el.title); return; }
  if (el.title.match(/Time/)) {
        checkTime(el,el.title); return; }
  if (el.className.match(/Integer/)) {
        checkInteger(el,el.title); }
  if (el.className.match(/Number/)) {
        checkNumber(el); }
  if (el.className.match(/JustifyLeft/)) {
        justifyLeft(el); }
  if (el.className.match(/JustifyRight/)) {
        justifyRight(el); }
  if (el.className.match(/ZeroFill/)) {
        zeroFill(el); }
  if (el.className.match(/AlphaNum/)) {
        checkAlphaNum(el); }
  if (el.className.match(/AlphanumDesc/)) {
       checkAlphanumDesc(el); }
}
//========================================================================
// Check Number <input type=text name=xxxxxxx class=Number min=10 max=100>
//========================================================================
function checkNumber(theField) {
 if (isWhitespace(theField.value)) { return true }

 if (theField.value.match(/\+/g)) {
     alertify.alert( theField.title + " Must be Numeric")
     theField.focus()
     return false }

 if (isFinite(theField.value)) {
   if(isFinite(theField.max)) {
      if (parseFloat(theField.value)>parseFloat(theField.max)) {
         alertify.alert( theField.title + " Must be Less Than or = " + theField.max)
         theField.focus()
         return false } }
   if(isFinite(theField.min)) {
      if (parseFloat(theField.value)<parseFloat(theField.min)) {
         alertify.alert( theField.title + " Must be Greater Than or = " + theField.min)
         theField.focus()
         return false } }
   return true }
 else {
   alertify.alert( theField.title + " Must be Numeric")
   theField.focus()
   return false }
}
//========================================================================
// Check AlphaNum <input type=text name=xxxxxxx class=AlphaNum                
//========================================================================
function checkAlphaNum(theField) {
 checkid=theField.value.search('[^a-zA-Z0-9]')
 if (checkid >= 0) {
   alertify.alert( theField.title + " can only be alphanumeric")
   theField.value=""
   theField.focus()
   return false }
}
//========================================================================
// Validates Alpha-numeric field excluding spaces
// Check AlphanumDesc <input type=text name=xxxxxxx class=AlphanumDesc
//========================================================================
function checkAlphanumDesc(theField) {
 checkid=theField.value.search('[^a-zA-Z0-9 ]')
 if (checkid >= 0) {
   alertify.alert( theField.title + " can only be alphanumeric")
   theField.value=""
   theField.focus()
   return false }
}
//========================================================================
// Standard click function call
//========================================================================
function onclickHandler(ev) 
{
  var el;                           // event element
  if (!ev) var ev = window.event;   // event is not passed ny IE
  if (ev.srcElement)
    el = ev.srcElement;
  else if (ev.target)
    el = ev.target;
  else
    return;

  if (el.onclick!=null) return;
  if (el.src!=undefined) {
      ImageClickHandler(el) }
  if (window.formclickHandler) {
        formclickHandler(el)  }
}
//========================================================================
// Standard click functions for Images/Icons on a form
//========================================================================
function ImageClickHandler(el) {
  if (el.src.match(/DateTimeStamp/)) {
     SetCurrentDateTime(eval(el.date),eval(el.time));return; }
  if (el.src.match(/TimeLookup/)) {
     TimeLookupFrame(eval(el.time));return }
  if (el.src.match(/DateLookup/)) {
     DateLookupFrame(eval(el.date));return }
}
//========================================================================
// Standard ondblclick function call
//========================================================================
function ondblclickHandler(ev) 
{
  var el;                           // event element
  if (!ev) var ev = window.event;   // event is not passed ny IE
  if (ev.srcElement)
    el = ev.srcElement;
  else if (ev.target)
    el = ev.target;
  else
    return;

   if (el.ondblclick!=null) return;
   if (window.formondblclickHandler) {
       formondblclickHandler(el)  }
}
//========================================================================
// Standard onkeypress function call
//========================================================================
function onkeypressHandler(ev) 
{
  var el;                           // event element
  if (!ev) var ev = window.event;   // event is not passed ny IE
  if (ev.srcElement)
    el = ev.srcElement;
  else if (ev.target)
    el = ev.target;
  else
    return;

   if (el.onkeypress!=null) return;
   if (window.formonkeypressHandler) {
       formonkeypressHandler(el)  }
}
//========================================================================
// Limit Size of textarea by Rows and Characters
//  eg <textarea onkeypress="LimitText(this,9,450);" ></textarea>
//========================================================================
function LimitText(fieldObj,maxRows,maxChars) {
  var result = true;
  if (fieldObj.value.split("\n").length > maxRows) {
    alertify.alert("Maximum Rows "+maxRows+"<br>Please remove extra rows to continue")
    result = false; }
  if (fieldObj.value.length >= maxChars) {
      alertify.alert("Maximum Characters "+maxChars)
    result = false; }
  if (window.event)
    window.event.returnValue = result;
  return result;
}
//========================================================================
// Disable Form Functionality
//========================================================================
function DisableForm(theForm) {
  for (var e = 0; e < theForm.elements.length; e++) {                          
    var el=theForm.elements[e] ;                                               
    switch(el.type) {                                                          
      case "text":                                                             
          el.disabled = true; break;
      case "select-one":                                                       
          el.disabled = true; break;
      case "textarea":                                                         
          el.disabled = true; break;
      case "button":                                                           
          el.disabled = true; break;
      case "hidden":                                                           
          break;
     } 
  } 
}

function openTime(theField) {
 theReturnField=theField;
 var now = new Date();
 var hours = { };
 var minutes = { };
 var seconds = { };
 for( i = 0; i < 24; i += 1 ) {
   if ( i<10 ) hours['0'+i] = '0'+i;
   else hours[i] = i;
 }
 for( i = 0; i < 60; i += 1 ) {
   if ( i<10 ) minutes['0'+i] = '0'+i;
   else minutes[i] = i;
 }

 if(spinningwheelopen == false) {
   SpinningWheel.addSlot(hours, 'right', theField.value.substring(0,2));
   SpinningWheel.addSlot(minutes, '', theField.value.substring(3,5));
   SpinningWheel.setCancelAction(spinInputCancel);
   SpinningWheel.setDoneAction(timeInputDone);
   SpinningWheel.open();
   spinningwheelopen = true;
 }

}
function timeInputDone() {
  spinningwheelopen = false;
  var results = SpinningWheel.getSelectedValues();
  theReturnField.value= results.values.join(':')
}


//------------------------------------------------------------
// Date Input for iPad using Spinning Wheels
//------------------------------------------------------------
function openDate(theField) {
 theReturnField=theField;
 var now = new Date();
 var days = { };
 var years = { };
 var months = {1:'Jan',2:'Feb',3:'Mar',4:'Apr',5:'May',6:'Jun',7:'Jul',8:'Aug',9:'Sep',10:'Oct',11:'Nov',12:'Dec' };
 for( var i = 1; i < 32; i += 1 ) {
   if ( i<10 ) days['0'+i] = '0'+i;
   else days[i] = i;
 }
 if (theField.className.match(/Past/)) {
   for( i = now.getFullYear()-120*6; i < now.getFullYear()+1; i += 1 ) {
     years[i] = i;
   }
 }
 else {
   for( i = now.getFullYear()-1; i < now.getFullYear()+5; i += 1 ) {
     years[i] = i;
   }
 }
 if (isWhitespace(theField.value)) {
   curDay=now.getDate();
   curMthNo=now.getMonth()+1;
   curYear=now.getFullYear();
 }
 else { 
   curDay=theField.value.substring(0,2);
   curMth=theField.value.substring(3,6);
   switch (curMth) {
    case "Jan": curMthNo="1";break;
    case "Feb": curMthNo="2";break;
    case "Mar": curMthNo="3";break;
    case "Apr": curMthNo="4";break;
    case "May": curMthNo="5";break;
    case "Jun": curMthNo="6";break;
    case "Jul": curMthNo="7";break;
    case "Aug": curMthNo="8";break;
    case "Sep": curMthNo="9";break;
    case "Oct": curMthNo="10";break;
    case "Nov": curMthNo="11";break;
    case "Dec": curMthNo="12";break;
   }
   curYear=theField.value.substring(7,11);
 }
 
 if(spinningwheelopen == false) {
   SpinningWheel.addSlot(days, 'center', curDay);
   SpinningWheel.addSlot(months, '', curMthNo);
   SpinningWheel.addSlot(years, 'right', curYear);
   SpinningWheel.setCancelAction(spinInputCancel);
   SpinningWheel.setDoneAction(dateInputDone);
   SpinningWheel.open();
   spinningwheelopen = true;

 }
}
function dateInputDone() {
  spinningwheelopen = false;
  var results = SpinningWheel.getSelectedValues();
  theReturnField.value= results.values.join(' ') 
}
function spinInputCancel() {
  spinningwheelopen = false;
  return;
}
//------------------------------------------------------------
// Blood Pressure Input for iPad using Spinning Wheels
//------------------------------------------------------------
function openBP(Systolic,Diastolic) {
 theReturnField=Systolic;
 theReturnField2=Diastolic;
 var systolic = { };
 var diastolic = { };
 for( i = 50; i < 300; i += 2 ) {
   diastolic[i] = i;
   systolic[i] = i;
 }
 defSys=trim(Systolic.value);
 defDia=trim(Diastolic.value);
 if (defSys=="") defSys=120
 if (defDia=="") defDia=80
 SpinningWheel.addSlot(systolic, 'right', defSys);
 SpinningWheel.addSlot(diastolic, '', defDia);
 SpinningWheel.setCancelAction(spinInputCancel);
 SpinningWheel.setDoneAction(bpInputDone);
 SpinningWheel.open();
}
function bpInputDone() {
  var results = SpinningWheel.getSelectedValues();
  theReturnField.value= results.values[0];
  theReturnField2.value= results.values[1];
}
//========================================================================
// Function  : validateMandatory
//
// Operation : Check a each form input field
//             Mandatory Fields Defined with
//             class=Mandatory
//             title=string describing the field
// Example   :
// <select name=pattitle tabindex=1 class=Mandatory title="Patient Title">
//
//========================================================================
function validateMandatory(theForm) {
  for (i=0; i<theForm.elements.length; i++) {
    el=theForm.elements[i]
    if (el.className.match(/Integer/) && el.type=="text") {
      if (!checkInteger(el,el.title)) {
         return false } }
    if (el.className.match(/Number/) && el.type=="text") {
      if (!checkNumber(el)) {
         return false } }
    if (el.title.match(/Date/) && el.type=="text") {
      if (!checkDate(el,el.title)) {
         return false } }
    if (el.title.match(/Time/) && el.type=="text") {
      if (!checkTime(el,el.title)) {
         return false } }
    if (el.className.match(/Mandatory/)) {
      if (!checkString(el,el.title)) {
         return false } }
    }
  return true;
}
//========================================================================
// SelectNumber - Generate Select List Options for Numeric Values
//========================================================================
function SelectNumbers(ListItem,Min,Max,Increment,SelectedValue) {
  i=Min
  do {
    ListItem.options[ListItem.options.length]=new Option(i,i);
    i=i+Increment }
  while (i<Max);
  if (SelectedValue!="") {
    for (var i =0 ; i < ListItem.length; i++) {
      if (ListItem.options[i].value==parseFloat(SelectedValue)) {
        ListItem.selectedIndex=i } } }
}
//----------------------------------------------------------------------
// Function : Rounds and formats a number with/without decimal places 
//----------------------------------------------------------------------
function RoundNumber(number,decimal) {
  if (isWhitespace(number.value)) { return ;}
  if (checkNumber(number)) {
   Number = Math.round(number.value*Math.pow(10,decimal))/Math.pow(10,decimal);
   decimal = (decimal<0?0:decimal); // if decimal places < 0 then set decimal=0
                                    // else decimal = decimal places entered.

   var x = Number;            // save Number
   if (x<0)                   // negative value entered?
   {
     var y = x*(-1);          // yes, make the value positive
     var r = "" + Math.round(y * Math.pow(10,decimal));
   }
   else
   {
     var r = "" + Math.round(Number * Math.pow(10,decimal));
   }

   if (r.length < decimal)    // is the value of r < 1 eg. r = 0.05?
   {
      number.value=Number;    // yes, return the value of Number
      return;
   }

   if (decimal==0)
   {
      if (x<0)                // negative value entered?
      {
        number.value=r*(-1);  // yes,make the return value negative
      }
      else
      {
        number.value=r;
      }
      return;
   }
   else
   {
      if (x<0)                // negative value entered?
      {
        number.value = "-"
                     + r.substring(0,r.length-decimal)
                     + "."
                     + r.substring(r.length-decimal,r.length);
      }
      else
      {
        number.value = r.substring(0,r.length-decimal)
                     + "."
                     + r.substring(r.length-decimal,r.length);
      }
      return;
   }
 }
}
//========================================================================
// Check Number <input type=text name=xxxxxxx class=Number min=10 max=100>
//========================================================================
function checkNumber(theField) {
 if (isWhitespace(theField.value)) { return true }

 if (theField.value.match(/\+/g)) {
     alertify.alert( theField.title + " Must be Numeric")
     theField.value="";
     theField.focus()
     return false }

 if (isFinite(theField.value)) {
   if(isFinite(theField.max)) {
      if (parseFloat(theField.value)>parseFloat(theField.max)) {
         alertify.alert( theField.title + " Must be Less Than or = " + theField.max)
         theField.value="";
         theField.focus()
         return false } }
   if(isFinite(theField.min)) {
      if (parseFloat(theField.value)<parseFloat(theField.min)) {
         alertify.alert( theField.title + " Must be Greater Than or = " + theField.min)
         theField.value="";
         theField.focus()
         return false } }
   return true }
 else {
   alertify.alert( theField.title + " Must be Numeric")
   theField.value="";
   theField.focus();
   return false }
}
//========================================================================
// Check AlphaNum <input type=text name=xxxxxxx class=AlphaNum
//========================================================================
function checkAlphaNum(theField) {
 checkid=theField.value.search('[^a-zA-Z0-9]')
 if (checkid >= 0) {
   alertify.alert( theField.title + " can only be alphanumeric")
   theField.value=""
   theField.focus()
   return false }
}
//========================================================================
// Validates Alpha-numeric field excluding spaces
// Check AlphanumDesc <input type=text name=xxxxxxx class=AlphanumDesc
//========================================================================
function checkAlphanumDesc(theField) {
 checkid=theField.value.search('[^a-zA-Z0-9 ]')
 if (checkid >= 0) {
   alertify.alert( theField.title + " can only be alphanumeric")
   theField.value=""
   theField.focus()
   return false }
}
//========================================================================
// Function : JustifyRight
//            Right Justification  of a input field to maxLength
//========================================================================
function justifyRight(theField) {
  if (theField.maxLength==undefined) { return }
  theField.value=theField.value.replace(/\s/g,"")
  if (theField.value.length == 0) { return }
  Count=theField.maxLength - theField.value.length
  Blanks=""
  for (i=0; i < Count;i++) { Blanks+=" ";}
  theField.value=Blanks+theField.value
}
//========================================================================
// Function : ZeroFill
//            Zero Fill of a input field to maxLength
//========================================================================
function zeroFill(theField) {
  if (theField.maxLength==undefined) { return }
  if (theField.value.length == 0) { return }
  theField.value=theField.value.replace(/ /g,"0")
}
//========================================================================
// Function : JustifyLeft
//            Left Justification of a input field, Also checks for Integer
//            Class Name!
//========================================================================
function justifyLeft(theField) {
  if (theField.className.match(/Integer/)) {
        checkInteger(theField,theField.title); }
  if (theField.maxLength==undefined) { return }
  theField.value=theField.value.replace(/\s/g,"")
  if (theField.value.length == 0) { return }
  theField.value=theField.value
}
//========================================================================
// Function  : checkDate 
//
// Operation : Validate Date Input
//             Date May be entered in any of the following formats
//                      ddmmyy
//                      ddmmccyy
//                      dd.mm.yy
//                      dd.mm.ccyy
//                      dd/mm/yy
//                      dd/mm/ccyy
//                      dd mm yy
//                      dd mm ccyy
//                      dd mmm yy
//                      dd mmm ccyy
//             The field will be checked and display in a dd mmm ccyy format.
//
// Parameters: theField    - The item on the form ie this
//             labelString - Description of Date
//             hiddenField - Hidden Date Field output format CCYYMMDD
// Example   :
//             <input type="text" name="patbdate" size="12"
//              onchange="checkDate(this,'Date of Birth')"> </p>
//========================================================================
function checkDate() {
switch (checkDate.arguments.length) {
  case 0: {
     theField=this;
     labelString=this.title;
     hiddenField=null
     break; }
  case 1: {
     theField=checkDate.arguments[0]
     labelString=theField.title;
     hiddenField=null
     break; }
  case 2: {
     theField=checkDate.arguments[0]
     labelString=checkDate.arguments[1]
     hiddenField=null
    break; }
  case 3: {
     theField=checkDate.arguments[0]
     labelString=checkDate.arguments[1]
     hiddenField=checkDate.arguments[2]
     break; }
   }
if(theField.value=="") { return true; }
 var ErrorFound;
 ErrorFound=false ;
 var day=0
 var mon=0
 var year=0
 var cent=0
 var Today = new Date()
 var monthname = new Array(12)
 monthname[0]="Jan"
 monthname[1]="Feb"
 monthname[2]="Mar"
 monthname[3]="Apr"
 monthname[4]="May"
 monthname[5]="Jun"
 monthname[6]="Jul"
 monthname[7]="Aug"
 monthname[8]="Sep"
 monthname[9]="Oct"
 monthname[10]="Nov"
 monthname[11]="Dec"
 datevalue=theField.value
 datelength=datevalue.length
 position=0
 start=0
 flag=0
 if (datevalue.match(/^\s+/)) {
   chr = datevalue.substring(position, position+1)
   while (chr == " ") {
     datevalue = datevalue.substring(position+1,datevalue.length)
     chr = datevalue.substring(position, position+1)
   }
   position=0
   datelength=datevalue.length
 }

 var cM= Today.getMonth()
 var cY= Today.getFullYear()
 if (datelength < 3) { datevalue=datevalue+' '+monthname[cM]+' '+cY; datelength=datelength+9}
 if (datelength == 4 ) { datevalue=datevalue+cY; datelength=datelength+4}
 if (datelength < 6) { datevalue=datevalue+' '+cY; datelength=datelength+5}
 if (datelength == 6 && datevalue.match(/ /)) { datevalue=datevalue+' '+cY; datelength=datelength+5}

 while (position < datelength) {
   chr = datevalue.substring(position, position+1)
   if (chr==" " || chr=="/" || chr==".") {
     if (flag==2) {
       if (position-start>2) {
         year = datevalue.substring(start+2, position)
         cent = datevalue.substring(start, start+2) }
       else {
         year = datevalue.substring(start, position)
         var ccyy = Today.getFullYear();
         cent=ccyy.toString().substr(0,2);
         ThisYear=ccyy.toString().substr(2,2);
         if (parseInt(parseFloat(year),10) >  parseInt(parseFloat(ThisYear),10) + 3) { cent="19" } }
     flag = 3 }
     if (flag==1) {
       test=parseInt(datevalue.substring(start, position),10)
       if (isNaN(test))  {
         monstr= datevalue.substring(start, start+3)
         if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon=1
         if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon=2
         if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon=3
         if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon=4
         if (monstr=="May" || monstr=="MAY" || monstr=="may") mon=5
         if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon=6
         if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon=7
         if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon=8
         if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon=9
         if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon=10
         if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon=11
         if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon=12 }
       else {
         mon = datevalue.substring(start, position)   }
       flag = 2
       start=position+1 }
       if (flag==0) {
         day  = datevalue.substring(start, position)
         flag = 1
         start=position+1 } }
   position++
 } //End While
 if (flag==2) {
   if (position-start>2) {
     cent = datevalue.substring(start, start+2)    // Century
     year = datevalue.substring(start+2, position) }
   else {
     year = datevalue.substring(start, position)
     var ccyy = Today.getFullYear();
     cent=ccyy.toString().substr(0,2)
     ThisYear=ccyy.toString().substr(2,2);
     if (parseInt(parseFloat(year),10) >  parseInt(parseFloat(ThisYear),10) + 3 ) { cent="19" }}} 
 if (flag==0) {
   if (datelength==6) {
     day = datevalue.substring(0,2)
     mon = datevalue.substring(2,4)
     year= datevalue.substring(4,6)
     var ccyy = Today.getFullYear();
     cent=ccyy.toString().substr(0,2);
     ThisYear=ccyy.toString().substr(2,2);
     if (parseInt(parseFloat(year),10) >  parseInt(parseFloat(ThisYear),10) + 3 ) { cent="19" } }
   else {
     if (datelength==8) {
       day = datevalue.substring(0,2)
       mon = datevalue.substring(2,4)
       cent= datevalue.substring(4,6)
       year= datevalue.substring(6,8)   } }
}  

 day=parseInt(day,10)
 if (isNaN(day))  ErrorFound=true
 mon=parseInt(mon,10)
 if (isNaN(mon))  ErrorFound=true

 if (isNaN(year)) ErrorFound=true
 year=parseInt(year,10)
 if (isNaN(cent)) ErrorFound=true
 if (!ErrorFound) {
   if (mon<1 || mon>12) ErrorFound = true
   if (day<1 || day>31) ErrorFound = true
   if (year<0 || year>99) ErrorFound = true
   if (mon==4 || mon==6 || mon==9 || mon==11) {
     if (day==31) ErrorFound=true }
   if (mon==2) {
     if (day>29) ErrorFound=true
     if (day==29 && year % 4 !=0 ) ErrorFound=true
     if (day==29 && year==0 && cent % 4 !=0 ) ErrorFound=true } }
 if (ErrorFound) {
   alertify.alert('Invalid '+labelString)
   theField.select()
   theField.value="";
   return false }
 else {
   if (year<10) year="0" + year
   if (day<10)  day ="0" + day
   if (globalDateType == "DD MMM YYYY") {
     dateValue=day + " " + monthname[mon-1] + " " + cent + year
     theField.value=dateValue  }
   else {
     if (globalDateType == "DD/MM/YYYY") {
       month = mon; if (mon<10)  month ="0" + mon;
       dateValue=day + "/" + month + "/" + cent + year;
       theField.value=dateValue  } }
   if (hiddenField != null) {
       month = mon; if (mon<10)  month ="0" + mon;
       dateValue=cent + year + month + day;
       hiddenField.value=dateValue  }
   var InputDay=day
   var InputMth=mon
   var InputYrs=cent + year
   if (InputMth < 10) InputMth="0" + InputMth
   InputDate="";
   InputDate=InputDate.concat(InputYrs,InputMth,InputDay)
   if (theField.className.match(/FutureDate/)) {
     if (!CheckFuture(InputDate)) {
      alertify.alert(labelString + " must be in the Future.")
      theField.select()
      theField.value="";
      return false }
    }
   if (theField.className.match(/NotFutureDate/))   {
     if (!CheckPast(InputDate)) {
      alertify.alert(labelString + " cannot be in the Future.")
      theField.select()
      theField.value="";
      theField.focus()
      return false }
    }
   if (theField.className.match(/PastDate/))   {
     if (!CheckPast(InputDate)) {
      alertify.alert(labelString + " must be in the Past.")
      theField.select()
      theField.value="";
      theField.focus()
      return false }
    }
   if (theField.className.match(/BackDate/))   {
     if (!CheckPast(InputDate)) {
      alertify.alert(labelString + " must be in the Past.")
      theField.select()
      var Sp=" ";
      var Today = new Date()
      var ThisDay=Today.getDate();
      var ThisMth=parseInt(Today.getMonth(),10) +1;
      var ThisYrs=Today.getFullYear();
      if (ThisDay < 10) ThisDay="0" + ThisDay
      if (ThisMth < 10) ThisMth="0" + ThisMth
      ThisMth = ThisMth.toString();
      var MonthName=GetMonthName(ThisMth); 
      ThisDate="";
      ThisDate=ThisDate.concat(ThisDay,Sp,MonthName,Sp,ThisYrs)
      theField.value=ThisDate;
      return false }
    }
   if (theField.className.match(/PastMonth/))   {
     if (!CheckPastMonth(InputDate)) {
      alertify.alert(labelString + " must be less than current Month.")
      theField.select()
      theField.value="";
      return false }
    }
//HPS Emer Defect 70
   if (theField.className.match(/CurrentDate/)) {
     if (CheckCurrent(InputDate)) {
      alertify.alert(labelString + " must be the current date.")
      theField.select()
      theField.value="";
      return false }
    }

// HPS added for Bug no. 72
    ccyy = Today.getFullYear();
    var currentAge=  ccyy-(cent+year);
    if (currentAge >119 ) {
    alertify.alert("Warning: Invalid date");
  }
    return true }
}
function CheckFuture(InputDate) {
 var Today = new Date()
 var ThisDay=Today.getDate();
 var ThisMth=parseInt(Today.getMonth(),10) +1;
 var ThisYrs=Today.getFullYear();
 if (ThisDay < 10) ThisDay="0" + ThisDay
 if (ThisMth < 10) ThisMth="0" + ThisMth
 ThisDate="";
 ThisDate=ThisDate.concat(ThisYrs,ThisMth,ThisDay)
 if (InputDate < ThisDate) { return false }
                      else { return true }
}
function CheckPast(InputDate) {
 var Today = new Date()
 var ThisDay=Today.getDate();
 var ThisMth=parseInt(Today.getMonth(),10) +1;
 var ThisYrs=Today.getFullYear();
 if (ThisDay < 10) ThisDay="0" + ThisDay
 if (ThisMth < 10) ThisMth="0" + ThisMth
 ThisDate="";
 ThisDate=ThisDate.concat(ThisYrs,ThisMth,ThisDay)

 if (InputDate > ThisDate) { return false }
                      else { return true }
}
function CheckPastMonth(InputDate) {
 var Today = new Date()
 var ThisDay=Today.getDate();
 var ThisMth=parseInt(Today.getMonth(),10) + 1;
 var ThisYrs=Today.getFullYear();
 if (ThisMth < 10) ThisMth="0" + ThisMth
 ThisDate="";
 ThisDate=ThisDate.concat(ThisYrs,ThisMth,"00")
 if (InputDate > ThisDate) { return false }
                      else { return true }
}
function CheckCurrent(InputDate) {
 var Today = new Date()
 var ThisDay=Today.getDate();
 var ThisMth=parseInt(Today.getMonth(),10) +1;
 var ThisYrs=Today.getFullYear();
 if (ThisDay < 10) ThisDay="0" + ThisDay
 if (ThisMth < 10) ThisMth="0" + ThisMth
 ThisDate="";
 ThisDate=ThisDate.concat(ThisYrs,ThisMth,ThisDay)
 if (InputDate == ThisDate) { return false }                                   
                      else { return true }
}
//========================================================================
// Function  : checkTime
//
// Operation : Validate Time Input
//             Time May be entered in any of the following formats
//                      hhmm
//                      hh:mm
//                      hh.mm
//                      hhmmss
//                      hh:mm:ss
//                      hh.mm.ss
//             The field will be checked and display in a hh:mm:ss format.
//
// Parameters: theField    - The item on the form ie this
//             labelString - Description of Time
// Example   :
//             <input type="text" name="patbtime" size="12"
//              onchange="checkTime(this,'Time of Birth')"> </p>
//========================================================================
function checkTime() {
theField=this
labelString=this.title
if (checkTime.arguments.length > 0 ) {
  theField=checkTime.arguments[0]
  labelString=checkTime.arguments[1]
}
 if(theField.value=="") { return true; }
 if (isWhitespace(theField.value)) { return true; }
 var ErrorFound=false
 var hour=0
 var min=0
 var sec=0
 timevalue=theField.value
 timelength=timevalue.length
 if (timevalue.match(/\./)) {
    var x=timevalue.split(".")
    hour=x[0]
    min=x[1]
    if (x[2]==undefined) { sec="0" }
                    else { sec=x[2] }}
 else {
   if (timevalue.match(/\:/)) {
      var x=timevalue.split(":")
      hour=x[0]
      min=x[1]
      if (x[2]==undefined) { sec="0" }
                      else { sec=x[2] }}
   else {
     if (timelength<3) {
       hour=timevalue; min="0"; sec="0" }
     else {
       switch (timelength) {
       case 3: {
         hour=timevalue.substr(0,1); min=timevalue.substr(1,2); sec="0";
         break; }
       case 4: {
         hour=timevalue.substr(0,2); min=timevalue.substr(2,2); sec="0";
         break; }
       case 6: {
         hour=timevalue.substr(0,2);
         min=timevalue.substr(2,2);
         sec=timevalue.substr(4,2);
         break; }
       default: {
         ErrorFound=true ;
         break; }
       }
     }
   }
 }
 if (isNaN(hour)){ ErrorFound=true }
 if (isNaN(min)) { ErrorFound=true }
 if (isNaN(sec)) { ErrorFound=true }
 if (isWhitespace(hour)){ ErrorFound=true }
 if (isWhitespace(min)) { ErrorFound=true }
 if (isWhitespace(sec)) { ErrorFound=true }
 hour=parseInt(hour,10)
 min=parseInt(min,10)
 sec=parseInt(sec,10)
 if (!ErrorFound) {
   if (min<0 || min>59) { ErrorFound = true }
     if (hour<0 || hour>23) { ErrorFound = true }
       if (sec<0 || sec>59) { ErrorFound = true }
 }
 if (!ErrorFound) {
   if (hour==0 && min==0 && sec==0) { ErrorFound = true }
 }

 if (ErrorFound) {
   alertify.alert('Invalid '+labelString)
   theField.select()
   return false; }
 else {
   if (sec<10) { sec="0" + sec }
   if (hour<10){ hour ="0" + hour }
   if (min<10) { min ="0" + min }
   theField.value=hour + ":" + min + ":" + sec
   return true; }
}
//======================================================================
// checkString (TEXTFIELD theField, STRING s, [, BOOLEAN emptyOK==false])
//
// Check that string theField.value is not all whitespace.
//
// For explanation of optional argument emptyOK,
// see comments of function isInteger.
//
//======================================================================
function checkString (theField, s, emptyOK) {
if (checkString.arguments.length == 2) emptyOK = false;
 if ((emptyOK == true) && (isEmpty(theField.value))) return true;
 if (isWhitespace(theField.value))
   return warnEmpty (theField, s);
 else return true;
}

function checkInteger(theField, s) {
 var Vflag = "0"
 if ( (theField.value.match(/\./g)) || (theField.value.match(/\+/g)) ) {
     alertify.alert( s + " Must be an Integer")
     theField.focus()
     return false }
//
 if (isFinite(theField.value)) {
   if (isWhitespace(theField.value)) {
     theField.value="0"; }
   if(isFinite(theField.max)) {
      if (parseInt(theField.value,10)>parseInt(theField.max,10)) {
         alertify.alert( theField.title + " Must be Less Than or = " + theField.max)
         Vflag = "1"  
         theField.focus()} }
   if(isFinite(theField.min)) {
      if (parseInt(theField.value,10)<parseInt(theField.min,10)) {
         alertify.alert( theField.title + " Must be Greater Than or = " + theField.min)
         Vflag = "1"
         theField.focus()} }
 } else {
   alertify.alert( s + " Must be Numeric")
   Vflag = "1" }
//
 if (Vflag == "1") {
   theField.focus()
   theField.select()
   return false; }
return true;
}
//------------------------------------------------------------
// Notify user that required field theField is empty.
// String s describes expected contents of theField.value.
// Put focus in theField and return false.
//------------------------------------------------------------
function warnEmpty (theField, s) {
 alertify.alert( s + " is a required field. <br>Please enter it now." )
 theField.focus()
 return false
}
//------------------------------------------------------------
// Validate Code to a Table Using Remote Scripting
//   OptionNumber =  3 - Doctor Code        (patdo1af)
//                   4 - Item Code          (patitemf)
//                   5 - DRG Code           (patdgwaf)
//                   6 - ICD Disease Code   (patic???)
//                   7 - ICD Operation Code (patic???)
//                   8 - Patient U/R        (patma1af)
//                   9 - Transfer Source    (patvadaf)
//                  20 - Nurse code         (oprnuraf)
//                  18 - HCP code           (pmshcpaf)  ** See also ValidateHCP
//                  27 - Theatre Expensive Items (oprexpaf)
//                  28 - Theatre Implant Code(oprthiaf) 
//                  29 - Surgical Table Item Code(oprsesaf)
//                  30 - Nurse Code(oprnuraf)
//                  31 - Default Discharge Date/Time (pattranf)  	 
//------------------------------------------------------------
function validateCode(OptionNumber,ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=3; i < validateCode.arguments.length; i++) {
    if (typeof(validateCode.arguments[i]) == 'function') {
      ReturnFunction=validateCode.arguments[i] }
    else {
      validateCode.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=3; i < validateCode.arguments.length; i++) {
       if (typeof(validateCode.arguments[i]) != 'function') {
         j++
         validateCode.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } 
    return true;
    }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    ReturnCode.focus();
    return false;
     }
}
//------------------------------------------------------------
// Get Select List Options
//------------------------------------------------------------
function selectOptions(OptionNumber,ReturnCode,ReturnSelect) {
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnSelect.options.length=0
    ReturnSelect.options[ReturnSelect.options.length]=new Option("","");
    ReturnValue=returnValue.return_value.split("|");
    for (var j=0; j < ReturnValue.length; j++) {
       if (!isWhitespace(ReturnValue[j])) {
         SelectValue=ReturnValue[j].split(",");
         ReturnSelect.options[ReturnSelect.options.length]=
          new Option(SelectValue[1],SelectValue[0]); } } }
  else {
    ReturnCode.select();  }
}
//------------------------------------------------------------
// Get Select List Options - same as selectOptions2 but sends valdcod2
//------------------------------------------------------------
function selectOptions4(OptionNumber,ReturnCode,ReturnCd2,ReturnSelect) {
  var serverURL   = "../cgi-bin/comweb80.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&valdcod2=" + ReturnCd2.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnSelect.options.length=0
    ReturnSelect.options[ReturnSelect.options.length]=new Option("","");
    ReturnValue=returnValue.return_value.split("|");
    for (var j=0; j < ReturnValue.length; j++) {
       if (!isWhitespace(ReturnValue[j])) {
         SelectValue=ReturnValue[j].split(",");
         ReturnSelect.options[ReturnSelect.options.length]=
          new Option(SelectValue[1],SelectValue[0]); } } }
  else {
    ReturnCode.select();  }
}
function validateHFT(OptionNumber,ReturnFund,ReturnTable,FundName,TableName) {
  ReturnFunction="" ;
  FundName.value="";
  TableName.value="";
  for (var i=5; i < validateHFT.arguments.length; i++) {
    if (typeof(validateHFT.arguments[i]) == 'function') {
      ReturnFunction=validateHFT.arguments[i] }
    else {
      validateHFT.arguments[i].value=""; }  }
  if (isWhitespace(ReturnFund.value)) return;;
  if (isWhitespace(ReturnTable.value)) return;;
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
                    "&valdfund=" + ReturnFund.value.replace(/ /g,"+") +
                    "&valdtabl=" + ReturnTable.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    FundName.value=trim(ReturnValue[0])
    TableName.value=trim(ReturnValue[1])
    j=0
    for (var i=5; i < validateHFT.arguments.length; i++) {
       if (typeof(validateHFT.arguments[i]) != 'function') {
         j++
         validateHFT.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() }
    return true;
  }
  else {
    ReturnTable.select();
    return false;
     }
}
function limitText(limitField, limitNum) {
  if (limitField.value.length > limitNum) {
    limitField.value = limitField.value.substring(0, limitNum);
    alertify.alert(limitField.title+" only allows "+limitNum+" character to be entered.");
  } 
}
// 
//------------------------------------------------------------
// This procedure breaks a paragraph into lines according to carriage returns.
//------------------------------------------------------------
// 
function formateText(ReturnText,column) {
  var line=ReturnText.value.split(/[\r\n]/);
  var endofline = "\n";
  var ReturnTextAll = "";
  for (var i=0;i< line.length;i++) {
    var returntext=formateLine(line[i],column);
    if (returntext.match(/[\r\n]$/) !=null) {
      ReturnTextAll+=returntext  }
    else {
      ReturnTextAll+=returntext + endofline } }
  return ReturnTextAll;
}

//
//------------------------------------------------------------
// This procedure splits a line of text into words and attempts to rebuild 
// (wrap) the text according to maximum column length, and breaking the lines 
// with '/n' characters. 
// NOTE: Procedure changed to count by new wrap line rather than original line
//------------------------------------------------------------
//
function formateLine(ReturnLine,column) {
  var endofline = "\n";
  var space = " ";
// important note: variable-0 to make the variable integer
  var position=column-0;
  var testsize
  var textarray=ReturnLine.split(" ");
  var text=textarray[0] + space
  var thisline=textarray[0] + space
  for (var i=1;i< textarray.length;i++) {
     text+=textarray[i] + space
     thisline+=textarray[i] + space;
     testsize=thisline + textarray[i+1];
     if (testsize.length >= position+1) {
       text+=endofline;
       thisline="";
     } }
  return text;
}
//------------------------------------------------------------
// This function will validate a HCP and Status        
// OptionNumber = 18
// OptionType 0 = No validation
//            1 = Validate Attending HCP
//            2 = Validate Referring HCP
//            3 = Validate Attending and Referring HCP
//            4 = Validate GP
//            5 = Validate Attending Doctor and GP
//            6 = Validate Doctor and GP
//            7 = Validate Attending, Referring and GP
//            8 = Validate Other
//            9 = Validate Other Attending
//           10 = Validate Other Referring
//           11 = Validate Other Attending & Referring
//           12 = Validate all except GP
//           13 = Validate Active Other
//           14 = Validate Active Attending (+ Referring Doc & GP)
//           15 = Validate Active Attending &/or Referring 
//           16 = Validate related provider type
//           18 = Validate Mental Health HCP
//------------------------------------------------------------
function ValidateHCP(OptionNumber,OptionType,ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=4; i < ValidateHCP.arguments.length; i++) {
    if (typeof(ValidateHCP.arguments[i]) == 'function') {
      ReturnFunction=ValidateHCP.arguments[i] }
    else {
      ValidateHCP.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL  = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
               "&valdtype=" + OptionType +
               "&valdcode=" + ReturnCode.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=4; i < ValidateHCP.arguments.length; i++) {
       if (typeof(ValidateHCP.arguments[i]) != 'function') {
         j++
         ValidateHCP.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.value="";
    ReturnCode.select(); 
    return false; }
}
