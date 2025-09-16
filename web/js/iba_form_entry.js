//jsVersion  : V11.03.00
<!--
//========================================================================
// Program   : iba_form_entry.js
//
// Written   : 12.12.1997 B.G.Ackland
//
// Function  : Validate HTML Form Input 
//
// Version   : V0.00 12.12.1997 B.G.Ackland
//
//========================================================================
// Global Variables
//========================================================================
var whitespace = " \t\n\r";
var mPrefix = "You did not enter a value for "
var mSuffix = "\nThis is a required field.\nPlease enter it now."

//========================================================================
// Function  : prompt
//
// Operation : Display prompt string s in status bar.
//
//========================================================================
function prompt (s)
{   window.status = s
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
// Example   : 
//             <input type="text" name="patbdate" size="12" 
//                      onfocus="prompt('Enter Patients Date of Birth')"
//                      onchange="checkDate(this,'Date of Birth')"> </p>
//========================================================================
function checkDate(theField, labelString)
{       
if(theField.value=="") { return; }
 var err=0 
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
          return;
        }

        while (position < datelength) {
          chr = datevalue.substring(position, position+1)
          if (chr==" " || chr=="/" || chr==".") {
            if (flag==2) {
              if (position-start>2) {
  	        year = datevalue.substring(start+2, position)// year
	        cent = datevalue.substring(start, start+2)// Century
                }
              else {
                year = datevalue.substring(start, position)   
                var ccyy = Today.getFullYear();
                cent=ccyy.toString().substr(0,2);
                }
              flag = 3
              }
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
                if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon=12
                }
              else {
                mon = datevalue.substring(start, position)   
                }
              flag = 2
              start=position+1
              }
            if (flag==0) {
              day  = datevalue.substring(start, position)   
              flag = 1
              start=position+1
              }
            }
          position++
        } //End While
        if (flag==2) {
          if (position-start>2) {
	           cent = datevalue.substring(start, start+2)// Century
            year = datevalue.substring(start+2, position)// year
            }
          else {
            year = datevalue.substring(start, position)   
            var ccyy = Today.getFullYear();
            cent=ccyy.toString().substr(0,2);
            }
          }
        if (flag==0) {
          if (datelength==6) {
            day = datevalue.substring(0,2)   
            mon = datevalue.substring(2,4)   
            year= datevalue.substring(4,6)   
            var ccyy = Today.getFullYear();
            cent=ccyy.toString().substr(0,2);
            }
          else {
            if (datelength==8) {
              day = datevalue.substring(0,2)   
              mon = datevalue.substring(2,4)   
              cent= datevalue.substring(4,6)   
              year= datevalue.substring(6,8)   
              }
            }
          }
 	day=parseInt(day,10)
        if (isNaN(day))  err=1
        mon=parseInt(mon,10)
        if (isNaN(mon))  err=1
        year=parseInt(year,10)
        if (isNaN(year)) err=1
        if (err==0) { 
            //basic error checking 
      	    if (mon<1 || mon>12) err = 1
	    if (day<1 || day>31) err = 1
	    if (year<0 || year>99) err = 1
	
	    //advanced error checking

	    // months with 30 days
	    if (mon==4 || mon==6 || mon==9 || mon==11) {
              if (day==31) err=1
	      }

	// february, leap year
	    if (mon==2) {
	      if (day>29) err=1
	      if (day==29 && year % 4 !=0 ) err=1
              if (day==29 && year==0 && cent % 4 !=0 ) err=1
	      }

          } 
  	if (err==1) {
          alert('Invalid '+labelString)
          theField.focus()
          }
        else {
          if (year<10) year="0" + year
          if (day<10)  day ="0" + day
          dateValue=day + " " + monthname[mon-1] + " " + cent + year
          theField.value=dateValue 
  	  }
}

//======================================================================
//
// checkString (TEXTFIELD theField, STRING s, [, BOOLEAN emptyOK==false])
//
// Check that string theField.value is not all whitespace.
//
// For explanation of optional argument emptyOK,
// see comments of function isInteger.
//
//======================================================================
function checkString (theField, s, emptyOK)
{   // Next line is needed on NN3 to avoid "undefined is not a number" error
    // in equality comparison below.
    if (checkString.arguments.length == 2) emptyOK = false;
    if ((emptyOK == true) && (isEmpty(theField.value))) return true;
    if (isWhitespace(theField.value)) 
       return warnEmpty (theField, s);
    else return true;
}

// Check whether string s is empty.

function isEmpty(s)
{   return ((s == null) || (s.length == 0))
}

// Returns true if string s is empty or 
// whitespace characters only.

function isWhitespace (s)

{   var i;

    // Is s empty?
    if (isEmpty(s)) return true;

    // Search through string's characters one by one
    // until we find a non-whitespace character.
    // When we do, return false; if we don't, return true.

    for (i = 0; i < s.length; i++)
    {   
        // Check that current character isn't whitespace.
        var c = s.charAt(i);

        if (whitespace.indexOf(c) == -1) return false;
    }

    // All characters are whitespace.
    return true;
}
// Notify user that required field theField is empty.
// String s describes expected contents of theField.value.
// Put focus in theField and return false.

function warnEmpty (theField, s)
{   theField.focus()
    alert(mPrefix + s + mSuffix)
    return false
}

//Clear Doctor Input 

function clrDoc(code,name) {
  code.value="";
  name.value="";
}

//-->
