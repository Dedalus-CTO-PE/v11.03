// Source Code:  ./iphone/iphone-form.js
//
// Modification 
//
// Version         Date                         Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.00       13/04/2012                   Version change
// V10.01.00       13/04/2012                   Version change
// V10.00.00       13/04/2012                   Created for Mobility Suite
//

//------------------------------------------------------------
// Function : setFormactn  Post Update Delete Formaction
//------------------------------------------------------------
function setFormactn(type) {
  document.UpdateForm.updttype.value=type;
  if (type=="U") {
    if (validateMandatory(UpdateForm))
       AJAXPostForm(document.UpdateForm); 
  } else {
    if (type=="D") {
       alertify.confirm("Are you sure you want to Delete ?", function (e) {    
         if (e) { document.UpdateForm.submit(); }});
    } else { 
      AJAXPostForm(document.UpdateForm); 
    }
  }
}
function AJAXPostForm(el) {
  parameters="";
  for (i=0;i<el.length;i++) {
    switch (el[i].type) {
     case 'hidden': {
       parameters+=el[i].name+"="+el[i].value+"&";
       break; }
     case 'select-one': {
       parameters+=el[i].name+"="+el[i].options[el[i].selectedIndex].value +"&"
       break; }
     case 'text': {
       parameters+=el[i].name+"="+el[i].value+"&";
       break; }
    }
  }
  xmlHttp = createHttpObject();
  xmlHttp.open("POST", el.action, false);
  xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
  xmlHttp.send(encodeURI(parameters));
  if (xmlHttp.status=="200") {
    if (xmlHttp.responseText.match(/Invalid/)) {
      alertify.alert("Invalid Ward Bed Allocation");
      alertify.alert(xmlHttp.responseText);
    }
    else {
      parent.location.href=top.getCookie('PatientList');
    }
  }
  else {
    alertify.alert("Update Failed");
    alertify.alert(xmlHttp.responseText);
  }
 
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

if(theField.value=="Start"){return true;}
if(theField.value=="Finish"){return true;}

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
// -------- change case to stop "FutureDate" from clashing with "NotFuturEdate"
   if (theField.className.match(/NotFuturEdate/))   {
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
