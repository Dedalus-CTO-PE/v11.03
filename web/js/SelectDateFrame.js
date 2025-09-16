//jsVersion  : V11.03.00
function setToday() {
    // SET DAY MONTH AND YEAR TO TODAY'S DATE
    var now   = new Date();
    var day   = now.getDate();
    var month = now.getMonth();
    var year  = now.getFullYear();
    this.focusDay                           = day;
    document.calControl.month.selectedIndex = month;
    document.calControl.year.value          = year;
    displayCalendar(day, month, year);
}
function isFourDigitYear(year) {
    if (year.length != 4) {
        alert ("Sorry, the year must be four-digits in length.");
        document.calControl.year.select();
        document.calControl.year.focus();
    }
    else {
        return true;
    }
}
function selectDate() {
    var year  = document.calControl.year.value;
    if (isFourDigitYear(year)) {
        var day   = 0;
        var month = document.calControl.month.selectedIndex;
        displayCalendar(day, month, year);
    }
}
function setPreviousTenYear() {
    var year  = document.calControl.year.value;
    if (isFourDigitYear(year)) {
        var day   = 0;
        var month = document.calControl.month.selectedIndex;
        year = parseInt(year,10)-10
        document.calControl.year.value = year;
        displayCalendar(day, month, year);
    }
}
function setPreviousYear() {
    var year  = document.calControl.year.value;
    if (isFourDigitYear(year)) {
        var day   = 0;
        var month = document.calControl.month.selectedIndex;
        year--;
        document.calControl.year.value = year;
        displayCalendar(day, month, year);
    }
}
function setPreviousMonth() {
    var year  = document.calControl.year.value;
    if (isFourDigitYear(year)) {
        var day   = 0;
        var month = document.calControl.month.selectedIndex;
        if (month == 0) {
            month = 11;
            if (year > 1000) {
                year--;
                document.calControl.year.value = year;
            }
        }
        else {
            month--;
        }
        document.calControl.month.selectedIndex = month;
        displayCalendar(day, month, year);
    }
}
function setNextMonth() {
    var year  = document.calControl.year.value;
    if (isFourDigitYear(year)) {
        var day   = 0;
        var month = document.calControl.month.selectedIndex;
        if (month == 11) {
            month = 0;
            year++;
            document.calControl.year.value = year;
        }
        else {
            month++;
        }
        document.calControl.month.selectedIndex = month;
        displayCalendar(day, month, year);
    }
}
function setNextYear() {
    var year  = document.calControl.year.value;
    if (isFourDigitYear(year)) {
        var day   = 0;
        var month = document.calControl.month.selectedIndex;
        year++;
        document.calControl.year.value = year;
        displayCalendar(day, month, year);
    }
}
function setNextTenYear() {
    var year  = document.calControl.year.value;
    if (isFourDigitYear(year)) {
        var day   = 0;
        var month = document.calControl.month.selectedIndex;
        year = parseInt(year,10)+10
        document.calControl.year.value = year;
        displayCalendar(day, month, year);
    }
}
function displayCalendar(day, month, year) {

    day     = parseInt(day,10);
    month   = parseInt(month,10);
    year    = parseInt(year,10);
    var i   = 0;
    var now = new Date();

    if (day == 0) {
        var nowDay = now.getDate();
    }
    else {
        var nowDay = day;
    }
    var days         = getDaysInMonth(month+1,year);
    var firstOfMonth = new Date (year, month, 1);
    var startingPos  = firstOfMonth.getDay();
    days += startingPos;

    // MAKE BEGINNING NON-DATE buttonS BLANK
    for (i = 0; i < startingPos; i++) {
        document.calbuttons.elements[i].value = "   ";
        document.calbuttons.elements[i].style.backgroundColor="#CCCCCC";
    }

    // SET VALUES FOR DAYS OF THE MONTH
    for (i = startingPos; i < days; i++)
    {
        document.calbuttons.elements[i].value = i-startingPos+1;
        document.calbuttons.elements[i].onClick = "returnDate"
        document.calbuttons.elements[i].style.color="black";
        document.calbuttons.elements[i].style.backgroundColor="";
    }

    // MAKE REMAINING NON-DATE buttonS BLANK
    for (i=days; i<42; i++)  {
        document.calbuttons.elements[i].value = "   ";
        document.calbuttons.elements[i].style.backgroundColor="#CCCCCC";
    }

    // GIVE FOCUS TO CORRECT DAY
    document.calbuttons.elements[focusDay+startingPos-1].focus();
    document.calbuttons.elements[focusDay+startingPos-1].style.color="red";
}
//
// GET NUMBER OF DAYS IN MONTH
//
function getDaysInMonth(month,year)  {
    var days;
    if (month==1 || month==3 || month==5 || month==7 || month==8 ||
        month==10 || month==12)  days=31;
    else if (month==4 || month==6 || month==9 || month==11) days=30;
    else if (month==2)  {
        if (isLeapYear(year)) {
            days=29;
        }
        else {
            days=28;
        }
    }
    return (days);
}
//
// CHECK TO SEE IF YEAR IS A LEAP YEAR
//
function isLeapYear (Year) {
    if (((Year % 4)==0) && ((Year % 100)!=0) || ((Year % 400)==0)) {
        return (true);
    }
    else {
        return (false);
    }
}
//
// SET FORM FIELD VALUE TO THE DATE SELECTED
//
function returnDate(inDay,SubmitParent) {
  var mthnam = new Array(13);
  mthnam[1]  = "Jan";
  mthnam[2]  = "Feb";
  mthnam[3]  = "Mar";
  mthnam[4]  = "Apr";
  mthnam[5]  = "May";
  mthnam[6]  = "Jun";
  mthnam[7]  = "Jul";
  mthnam[8]  = "Aug";
  mthnam[9]  = "Sep";
  mthnam[10] = "Oct";
  mthnam[11] = "Nov";
  mthnam[12] = "Dec";

  var day   = inDay;
  var month = (document.calControl.month.selectedIndex)+1;
  var mthval = (document.calControl.month.selectedIndex)+1;
  var year  = document.calControl.year.value;

  if ((""+day).length == 1) { day="0"+day; }
  if ((""+mthval).length == 1) { mthval="0"+mthval; }

  if (day != "   ") {

    if(parent.SelectDateFramePreCheck != undefined) {
      if(typeof(parent.SelectDateFramePreCheck) == 'function') {
        if(!parent.SelectDateFramePreCheck()) {
          parent.PopUpScreen.style.display="none"
          return;
        }
      }
    }

    var oDate = new Date(year + "/" + mthval + "/" + day);
    var sDateStr = "";

    if (SubmitParent != undefined && !SubmitParent) {
      sDateStr = oDate.toLocaleDateString();
    }

    if (parent.SelectPeriod.lastdate!=undefined) {
      parent.SelectPeriod.lastdate.options[0].text = sDateStr;
      parent.SelectPeriod.lastdate.options[0].value = year+mthval+day;
      parent.SelectPeriod.lastdate.selectedIndex = 0;
    }
    else {
      parent.SelectPeriod.vyearmth.options[0].text = sDateStr;
      parent.SelectPeriod.vyearmth.options[0].value = year+mthval;
      parent.SelectPeriod.vyearmth.selectedIndex = 0;
    }

    // We remove the other date options in our dropdown list; since first opiton
    // currently selected.
    if (parent.SelectPeriod.lastdate != undefined &&
	SubmitParent != undefined && !SubmitParent &&
	parent.SelectPeriod.lastdate.options.length > 1)
    {
      var node = parent.SelectPeriod.lastdate.options[1];
      do {
	nextNode = node.nextSibling;
	parent.SelectPeriod.lastdate.options.removeChild(node);
	node = nextNode;
      } while (node != null);
    }
     
    var bSubmit = (SubmitParent != undefined) ? SubmitParent : true;

    if (bSubmit) {
      parent.SelectPeriod.submit()
    }
    parent.PopUpScreen.style.display="none" 

    if (parent.CalendarDateSelected != undefined) {
      parent.CalendarDateSelected(year + mthval + day);
    }
  }
}
function selectDateonkeyup() {
    var year  = document.calControl.year.value;
    if (year.length==4) {
        var day   = 0;
        var month = document.calControl.month.selectedIndex;
        displayCalendar(day, month, year);
    }
}
