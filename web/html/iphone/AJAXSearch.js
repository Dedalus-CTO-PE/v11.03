// Source Code:  ./iphone/AJAXSearch.js
//
// Modification 
//
// Version         Date                         Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.00       13/04/2012                   Version change
// V10.01.00       13/04/2012                   Version change
// V10.00.00       13/04/2012                   Created for Mobility Suite
//

var theURL, theField, theStatus, thePosition,theCode,dSearchResult,theWidth,theHeight,searchText;

function updateParent(name,code,prov,desc,prac,cntr,localgp) {
    searchText.value="";
    theField.value=name;
    theCode.value=code;
    dSearchResult=xGetElementById("DivSearchResult");
    dSearchResult.innerHTML="";
    dSearchResult.style.visibility="hidden";
    if (typeof(window.ReturnFunction) == 'function'){
      window.ReturnFunction();
    }
}
//
// ICD10 Procedure  Search
//
function ICD10PROSearch(SearchText,proCode,proName) {
  //if (document.getElementById("DivSearchResult")==null) {
  if (xGetElementById("DivSearchResult")==null) {
    document.body.insertAdjacentHTML('BeforeEnd','<div id=DivSearchResult name=DivSearchResult class=DivSearchResult></div>')
  }
  if (SearchText.value.length<3){ 
    dSearchResult=xGetElementById("DivSearchResult");
    //dSearchResult=document.getElementById("DivSearchResult");
    dSearchResult.innerHTML="";
    dSearchResult.style.visibility="hidden";
    return false;
  }
    dSearchResult=xGetElementById("DivSearchResult");
  //dSearchResult=document.getElementById("DivSearchResult");
  if (event.keyCode<44||event.keyCode>127) { return true;}  
  timeoutCtr    = new Date().getTime();
  thePosition   = findPos(proName);
  searchText    = SearchText;
  theField      = proName;
  theFieldValue = proName.value;
  theCode       = proCode;
  theHeight     ='250px';
  theURL        = "../cgi-bin/patweb94.pbl?reportno=04&template=005&norecord=10&keywords="+SearchText.value
  keycode       = event.keyCode;
  setTimeout("AJAXSearch()", 5);
}
//
// ICD10 Disease Search
//
function ICD10DISSearch(SearchText,proCode,proName) {
  //if (document.getElementById("DivSearchResult")==null) {
  if (xGetElementById("DivSearchResult")==null) {
    document.body.insertAdjacentHTML('BeforeEnd','<div id=DivSearchResult name=DivSearchResult class=DivSearchResult></div>')
  }
  if (SearchText.value.length<3){ 
    dSearchResult=xGetElementById("DivSearchResult");
    //dSearchResult=document.getElementById("DivSearchResult");
    dSearchResult.innerHTML="";
    dSearchResult.style.visibility="hidden";
    return false;
  }
    dSearchResult=xGetElementById("DivSearchResult");
  //dSearchResult=document.getElementById("DivSearchResult");
  if (event.keyCode<44||event.keyCode>127) { return true;}  
  timeoutCtr    = new Date().getTime();
  thePosition   = findPos(SearchText);
  searchText    = SearchText;
  theField      = proName;
  theFieldValue = proName.value;
  theCode       = proCode;
  theHeight     ='250px';
  theURL        = "../cgi-bin/patweb94.pbl?reportno=03&template=005&norecord=10&keywords="+SearchText.value
  keycode       = event.keyCode;
  setTimeout("AJAXSearch()", 5);
}
//
// Doctor Search
//
function DoctorSearch(docCode,docName) {
  if (xGetElementById("DivSearchResult")==null) {
    document.body.insertAdjacentHTML('BeforeEnd','<div id=DivSearchResult name=DivSearchResult class=DivSearchResult></div>')
  }
  if (docName.value.length<3){ 
    dSearchResult=xGetElementById("DivSearchResult");
    //dSearchResult=document.getElementById("DivSearchResult");
    dSearchResult.innerHTML="";
    dSearchResult.style.visibility="hidden";
    return false;
  }
    dSearchResult=xGetElementById("DivSearchResult");
  //dSearchResult=document.getElementById("DivSearchResult");
  if (event.keyCode<44||event.keyCode>127) { return true;}  
  if (DoctorSearch.arguments.length > 1) {
    window.ReturnFunction=DoctorSearch.arguments[2]; }
  timeoutCtr    = new Date().getTime();
  thePosition   = findPos(docName);
  searchText    = docName;
  theField      = docName;
  theFieldValue = docName.value;
  theCode       = docCode;
  theHeight     ='250px';
  theURL        = "../cgi-bin/patweb99.pbl?reportno=02&template=011&norecord=10&doctstat=0&"+
                  "&keywords="+theFieldValue
  keycode       = event.keyCode;
  setTimeout("AJAXSearch()", 5);
}
//
// HCP Search
//
function HCPSearch(docCode,docName,docStatus) {
  if (xGetElementById("DivSearchResult")==null) {
  //if (document.getElementById("DivSearchResult")==null) {
    document.body.insertAdjacentHTML('BeforeEnd','<div id=DivSearchResult name=DivSearchResult class=DivSearchResult></div>')
  }
  if (docName.value.length<3){ 
    dSearchResult=xGetElementById("DivSearchResult");
    //dSearchResult=document.getElementById("DivSearchResult");
    dSearchResult.innerHTML="";
    dSearchResult.style.visibility="hidden";
    return false;
  }
    dSearchResult=xGetElementById("DivSearchResult");
  //dSearchResult=document.getElementById("DivSearchResult");
  if (event.keyCode<44||event.keyCode>127) { return true;}  
  timeoutCtr    = new Date().getTime();
  thePosition   = findPos(docName);
  searchText    = docName;
  theField      = docName;
  theFieldValue = docName.value;
  theHeight     ='250px';
  theCode       = docCode;
  theURL        = "../cgi-bin/patweb99.pbl?reportno=06&template=015&norecord=10&tmotfrst=20&tmotnext=20"+
                  "&hcpsstat="+docStatus+
                  "&keywords="+theFieldValue
  keycode       = event.keyCode;
  setTimeout("AJAXSearch()", 5);
}
//
// Submit AJAX Search
//
function AJAXSearch() {
  if (new Date().getTime() - timeoutCtr < 0) return false;
  var SearchString = "";
  SearchString = theFieldValue
  xmlHttp = createHttpObject();
  theURL = theURL + '&httprand='+Math.random();
  xmlHttp.open("GET", theURL, true);
  xmlHttp.onreadystatechange=function() {
     if (theField.value==SearchString) {
       if (xmlHttp.readyState==4) {
         AJAXResults(); }
       }
     }
  xmlHttp.setRequestHeader("Content-type","text/html");
  xmlHttp.setRequestHeader("Cache-Control", "no-cache"); 
  xmlHttp.send();
  return false;
  theField.focus()
}
//
// Display Search Results
//
function AJAXResults() {
  if (xmlHttp.responseText=="") {
    dSearchResult.innerHTML="";
    dSearchResult.style.visibility="hidden";
  }
  else {
    sHTMLOutput               = xmlHttp.responseText;
    sHTMLOutput               = sHTMLOutput.replace(/a href/g,"a class=SearchRow href");
    sHTMLOutput               = sHTMLOutput.replace(/class=HeadingCell/g,"style='display:none';");
    dSearchResult.style.left  = "0px";
    dSearchResult.style.width = "298px";
    dSearchResult.style.overflow="";
    dSearchResult.style.height = "";
    dSearchResult.style.top   = 27+parseInt(thePosition[1])+"px";
    dSearchResult.innerHTML   = sHTMLOutput 
    dSearchResult.style.visibility="visible";
  } 
}
function AJAXMoreResults() {
  if (xmlHttp.responseText!="") {
    sHTMLOutput         = xmlHttp.responseText;
    sHTMLOutput         = sHTMLOutput.replace(/a href/g,"a class=SearchRow href");
    sHTMLOutput         = sHTMLOutput.replace(/class=HeadingCell/g,"style='display:none';");
    sHTMLOutput         = sHTMLOutput.replace(/\<table.*width=....\>/,"");
    cHTML               = dSearchResult.innerHTML;
    cHTML               = cHTML.replace(/\n/gm,"");
    cHTML               = cHTML.replace(/\<\/table\>.*/gim,"");
    dSearchResult.innerHTML= cHTML+sHTMLOutput
  } 
}
function AJAXShowMore(theURL) {
  if (new Date().getTime() - timeoutCtr < 0) return false;
  var SearchString = "";
  SearchString = theFieldValue
  xmlHttp = createHttpObject();
  theURL = theURL + '&httprand='+Math.random();
  xmlHttp.open("GET", theURL, true);
  xmlHttp.onreadystatechange=function() {
     if (theField.value==SearchString) {
       if (xmlHttp.readyState==4) {
         AJAXMoreResults(); }
       }
     }
  xmlHttp.setRequestHeader("Content-type","text/html");
  xmlHttp.setRequestHeader("Cache-Control", "no-cache");
  xmlHttp.send();
  return false;
  theField.focus()
}
function AJAXSearchClose() {
    searchText.value="";
    dSearchResult.innerHTML="";
    dSearchResult.style.visibility="hidden";
}
//
// Find Position of Search
//
function findPos(obj) {
  var curleft = curtop = 0;
  if (obj.offsetParent) {
    do { curleft += obj.offsetLeft;
         curtop += obj.offsetTop;
       } while (obj = obj.offsetParent);
  }
  return [curleft,curtop];
}
function xGetElementById(e) {
  if(typeof(e)!='string') return e;
  if(document.getElementById) e=document.getElementById(e);
  else if(document.all) e=document.all[e];
  else if(document.layers) e=xLayer(e);
  else e=null;
  return e;
}
function xLayer(id,root) {
  var i,layer,found=null;
  if (!root) root=window;
  for(i=0; i<root.document.layers.length; i++) {
    layer=root.document.layers[i];
    if(layer.id==id) return layer;
    if(layer.document.layers.length) found=xLayer(id,layer);
    if(found) return found;
  }
  return null;
}
//
// AJAX Date 
//
function AJAXDateSearch(theDate) {
  if (xGetElementById("DivSearchResult")==null) {
    document.body.insertAdjacentHTML('BeforeEnd','<div id=DivSearchResult name=DivSearchResult class=DivSearchResult></div>')
  }
  dSearchResult=xGetElementById("DivSearchResult");
  dSearchResult.style.overflow='hidden';
  thePosition   = findPos(theDate);
  theField      = theDate;
  theWidth = '180px';
  theHeight ='190px';
  theFieldValue = theDate.value;
  window.dateField = theDate;
  theURL        = "../lookups/AJAXDateLookup.html";
  keycode       = event.keyCode;
  AJAXLookup();
  setToday();
}
//
// AJAX Date Filter Select
//
function AJAXDateSelect(theDate) {
  if (xGetElementById("DivSearchResult")==null) {
    document.body.insertAdjacentHTML('BeforeEnd','<div id=DivSearchResult name=DivSearchResult class=DivSearchResult></div>')
  }
  dSearchResult=xGetElementById("DivSearchResult");
  dSearchResult.style.overflow='hidden';
  thePosition   = findPos(theDate);
  theField      = theDate;
  theWidth = '180px';
  theHeight ='190px';
  theFieldValue = theDate.value;
  window.dateField = theDate;
  theURL        = "../lookups/AJAXDateSelect.html";
  keycode       = event.keyCode;
  AJAXLookup();
  setToday();
}
//
//
// AJAX Time
//
function AJAXTimeSearch(theTime) {
  if (xGetElementById("DivSearchResult")==null) {
    document.body.insertAdjacentHTML('BeforeEnd','<div id=DivSearchResult name=DivSearchResult class=DivSearchResult></div>')
  }
  dSearchResult=xGetElementById("DivSearchResult");
  dSearchResult.style.overflow='hidden';
  thePosition   = findPos(theTime);
  theField      = theTime;
  theWidth = '165px';
  theHeight ='40px';
  theFieldValue = theTime.value;
  window.TimeValue = theTime;
  theURL        = "../lookups/AJAXTimeLookup.html";
  keycode       = event.keyCode;
  AJAXLookup();
  TimeCurrent();
}
//
// Submit AJAX Search
//
function AJAXLookup() {
  var SearchString = "";
  SearchString = theFieldValue
  xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.onreadystatechange=function() {
     if (theField.value==SearchString) {
       if (xmlHttp.readyState==4) {
         AJAXLookupResults(); }
       }
     }
  xmlHttp.setRequestHeader("Content-type","text/html");
  xmlHttp.setRequestHeader("Cache-Control", "no-cache"); 
  xmlHttp.send();
  return false;
  theField.focus()
}
//
// Display Search Results
//
function AJAXLookupResults() {
  if (xmlHttp.responseText=="") {
    dSearchResult.innerHTML="";
    dSearchResult.style.visibility="hidden";
  }
  else {
    sHTMLOutput               = xmlHttp.responseText;
    dSearchResult.style.left  = thePosition[0];
    dSearchResult.style.width = theWidth;
    dSearchResult.style.height = theHeight;
    dSearchResult.style.top   = thePosition[1]+theField.offsetHeight; 
    dSearchResult.innerHTML   = sHTMLOutput;
    dSearchResult.style.visibility="visible";
  } 
}
//
// Functions for Date Lookup Frame
//
function setToday() {
    // SET DAY MONTH AND YEAR TO TODAY'S DATE
    var now   = new Date();
    var day   = now.getDate();
    var month = now.getMonth();
    var year  = now.getFullYear();
    SelectYear.style.display="none";
    SelectMonth.style.display="none";
    SelectDate.style.display="";
    document.calControl.year.style.width='60px';
    document.calControl.year.style.textAlign='left';
    document.calControl.monthDisplay.style.display='';
    this.focusDay                           = day;
    this.focusMonth                         = month;
    this.focusYear                          = year;
    document.calControl.month.selectedIndex = month;
    document.calControl.monthDisplay.value  = document.calControl.month.options[document.calControl.month.selectedIndex].text
    document.calControl.year.value          = year;
    displayCalendar(day, month, year);
}
function isFourDigitYear(year) {
    if (year.length != 4) {
        alertify.alert("Sorry, the year must be four-digits in length.");
        document.calControl.year.select();
        document.calControl.year.focus();
    }
    else {
        return true;
    }
}
function showMonth() {
    SelectDate.style.display="none";
    SelectMonth.style.display="";
    SelectYear.style.display="none";
    document.calControl.monthDisplay.style.display='none';
    document.calControl.year.style.width='120px';
    document.calControl.year.style.textAlign='center';
    var year = document.calControl.year.value;
    var month = document.calControl.month.selectedIndex;
    for (i = 0; i < 12; i++) {
        document.MonthButtons.elements[i].style.color = 'black';
        document.MonthButtons.elements[i].style.fontWeight = 'normal';
        if (focusMonth==i&&focusYear==year) { 
          document.MonthButtons.elements[i].style.color = 'red';
          document.MonthButtons.elements[i].style.fontWeight = 'bold';
        }
    }
}
function showYear() {
    SelectDate.style.display="none";
    SelectMonth.style.display="none";
    SelectYear.style.display="";
    var year  = document.calControl.year.value.substr(0,2)*100
    document.calControl.year.value=year.toString() +' - ' + (year+19).toString()
    document.calControl.monthDisplay.style.display='none';
    document.calControl.year.style.width='120px';
    document.calControl.year.style.textAlign='center';
    displayYears(year);
}
function selectYear(yrr) {
  document.calControl.year.value=yrr;
  document.calControl.year.style.width='60px';
  document.calControl.year.style.textAlign='left';
  document.calControl.monthDisplay.style.display='';
  var year  = document.calControl.year.value;
  var month = document.calControl.month.selectedIndex;
  var day   = 0;
  SelectDate.style.display="";
  SelectMonth.style.display="none";
  SelectYear.style.display="none";
  displayCalendar(day, month, year);
}
function selectMonth(mth) {
  var year  = document.calControl.year.value;
  var month = document.calControl.month.selectedIndex;
  var day   = 0;
  document.calControl.year.style.width='60px';
  document.calControl.year.style.textAlign='left';
  document.calControl.monthDisplay.style.display='';
  switch(mth) {
    case 'Jan':month=0;break; 
    case 'Feb':month=1;break; 
    case 'Mar':month=2;break; 
    case 'Apr':month=3;break; 
    case 'May':month=4;break; 
    case 'Jun':month=5;break; 
    case 'Jul':month=6;break; 
    case 'Aug':month=7;break; 
    case 'Sep':month=8;break; 
    case 'Oct':month=9;break; 
    case 'Nov':month=10;break; 
    case 'Dec':month=11;break; };
  document.calControl.month.selectedIndex = month;
  SelectDate.style.display="";
  SelectMonth.style.display="none";
  SelectYear.style.display="none";
  displayCalendar(day, month, year);
}
function selectDate() {
    var year  = document.calControl.year.value;
    if (isFourDigitYear(year)) {
        var day   = 0;
        var month = document.calControl.month.selectedIndex;
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
    showMonth()
}
function setNext() {
  if (SelectDate.style.display=="")  { setNextMonth(); }
  if (SelectMonth.style.display=="") { setNextYear(); }
  if (SelectYear.style.display=="")  { setNextDecade(); }
}
function setPreviousDecade() {
    var year  = parseInt(document.calControl.year.value.substr(0,4))-20
    document.calControl.year.value=year.toString() +' - ' + (year+19).toString()
    displayYears(year);
}
function setNextDecade() {
    var year  = parseInt(document.calControl.year.value.substr(0,4))+20
    document.calControl.year.value=year.toString() +' - ' + (year+19).toString()
    displayYears(year);
}
function setPrevious() {
  if (SelectDate.style.display=="")  { setPreviousMonth(); }
  if (SelectMonth.style.display=="") { setPreviousYear(); }
  if (SelectYear.style.display=="")  { setPreviousDecade(); }
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
    showMonth()
}
function displayYears(year) {
    theYear=year;
    for (i = 0; i < 20; i++)
    {
        document.YearButtons.elements[i].value = theYear
        document.YearButtons.elements[i].style.color = 'black';
        document.YearButtons.elements[i].style.fontWeight = 'normal';
        if (focusYear==theYear) { 
          document.YearButtons.elements[i].style.color = 'red';
          document.YearButtons.elements[i].style.fontWeight = 'bold';
        }
        theYear = theYear+1
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
        document.calbuttons.elements[i].style.fontWeight="normal";
    }

    // MAKE REMAINING NON-DATE buttonS BLANK
    for (i=days; i<42; i++)  {
        document.calbuttons.elements[i].value = "   ";
        document.calbuttons.elements[i].style.backgroundColor="#CCCCCC";
    }

    // GIVE FOCUS TO CORRECT DAY
    if (focusMonth==month&&focusYear==year) {
      if (SelectDate.style.display!="none") {
        document.calbuttons.elements[focusDay+startingPos-1].focus();}
      document.calbuttons.elements[focusDay+startingPos-1].style.color="red";
      document.calbuttons.elements[focusDay+startingPos-1].style.fontWeight="bold";
    }
    document.calControl.monthDisplay.value  = document.calControl.month.options[document.calControl.month.selectedIndex].text
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
function returnDate(inDay) {
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
  window.dateField.value=day + " " + mthnam[parseInt(month,10)] + " " + year;
  window.dateField.focus();
  AJAXSearchClose(); }
}
//
// Submit Date to Form
//
function submitDate(inDay) {
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
  if (SelectPeriod.lastdate!=undefined) {
    SelectPeriod.lastdate.options[0].text=""
    SelectPeriod.lastdate.options[0].value=year+mthval+day
    SelectPeriod.lastdate.selectedIndex=0 }
  else {
    SelectPeriod.vyearmth.options[0].text=""
    SelectPeriod.vyearmth.options[0].value=year+mthval
    SelectPeriod.vyearmth.selectedIndex=0 }
  SelectPeriod.submit()
  }
}
//========================================================================
// Functions for Time Lookup Frame
//
// V9.10.01  31/07/2008 Ebon Clements  CAR 174606
//           Added current seconds to TimeCurrent() 
//========================================================================
function SetTime() {
  var hr = document.SelectTime.TimeHour
  var theHour = hr.options[hr.selectedIndex].text
  var mn = document.SelectTime.TimeMinute
  var theMin = mn.options[mn.selectedIndex].text
  var sc = document.SelectTime.TimeSecond
  var theSec = sc.options[sc.selectedIndex].text
  var ap = document.SelectTime.TimeAMPM
  var theAMPM = ap.options[ap.selectedIndex].text
  if (theAMPM=='PM'&&theHour!="12") theHour=parseInt(theHour)+12
  if (theAMPM=='AM'&&theHour=="12") theHour="00"
  window.TimeValue.value=theHour.toString()+":"+theMin+":"+theSec
}
function TimeCurrent() {
  var serverURL = "../cgi-bin/patweb80.pbl?reportno=1";
  var returnValue = RSExecute(serverURL);
  var now;
  if (returnValue.status==0) 
  {
    ReturnValues=returnValue.return_value.split("|")
    now=ReturnValues[1]
  }

  var ThisHour = now.substr(0,2);
  var ThisMinute = now.substr(3,2);
  window.TimeValue.value=ThisHour+":"+ThisMinute+":00"
  if (parseInt(ThisHour)>12) {
    document.SelectTime.TimeAMPM.selectedIndex=1;
    ThisHour=parseInt(ThisHour)-12 
  }
  if (parseInt(ThisHour)==12) {
    document.SelectTime.TimeAMPM.selectedIndex=1;
  }
  document.SelectTime.TimeHour.selectedIndex=parseInt(ThisHour)-1;
  document.SelectTime.TimeMinute.selectedIndex=Math.round(parseInt(ThisMinute)/5);
}
