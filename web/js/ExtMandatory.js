//jsVersion  : V11.03.00
//========================================================================
// Global Variables
//========================================================================
var whitespace = " \t\n\r";
var mPrefix = "You did not enter a value for "
var mSuffix = "\nThis is a required field.\nPlease enter it now."
//
//
function extMandatory(theForm) {   
return (
      checkName(theForm.elements["extfilnm"],"VEMD File Name",theForm.elements["visfilnm"],"VISS File Name") &&
      checkString(theForm.elements["extfilnm"],"VEMD File Name") &&
      checkString(theForm.elements["visfilnm"],"VISS File Name") &&
      checkString(theForm.elements["startdat"],"Start Date") &&
      checkString(theForm.elements["finishdt"],"End Date") &&
      checkDates(theForm.elements["startdat"],"Start Date",theForm.elements["finishdt"],"End Date")
    )
}
function checkName (vemd,vemdname,viss,vissname) {
  if(vemd.value==viss.value) {
    alert(vemdname + " must differ from " + vissname);
    return false;
  }
  else {
     return true;
  }
}
function checkDates(start,s,end,e) {
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
  sdate = new Date();
  edate = new Date();
  monstr=start.value.substr(3,3);
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
  sdate.setDate(start.value.substr(0,2));
  sdate.setMonth(mon-1);
  sdate.setFullYear(start.value.substr(7,4));
  monstr=end.value.substr(3,3);
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
  edate.setDate(end.value.substr(0,2));
  edate.setMonth(mon-1);
  edate.setFullYear(end.value.substr(7,4));
  difference = edate.getTime() - sdate.getTime();
  if(difference<0) {
    alert(e + " is before " + s)
    return false;
  }
  else {
  return true;
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
