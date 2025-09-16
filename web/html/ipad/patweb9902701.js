//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/patweb9902701.js
//
// Modification 
//
// Version   Date       Responsible/Changes Made
//--------------------------------------------------------------------------------------
// V10.03.02 06.08.2013 B.G.Ackland   CAR 289383
//                      Fixed to use createHttpObject() in place of XMLHttpRequest()
// V10.03.01 24.07.2013 B.G.Ackland CAR 288223
//                      Remove old framework components
// V10.01.00 13/04/2012 Version change
// V10.00.00 13/04/2012 Created for Mobility Suite
//
/******************************************************************************
 * Program : patweb9902701.js
 * Written : B.G Ackland
 * Function: Standard Patient Search throughout mobile clinical
 *
 * Version :
 * v10.01.00 22/01/2011 Saroeun Soeur 
 *           create doctor search
 *
 *****************************************************************************/
//
// Ajax based Patient Search
//
var theURL, theField,theFieldValue, theStatus, thePosition,theCode,dSearchResult,searchText,timeoutCtr;
var xmlHttp;
function DoctorSearch(el) {  
  if (el.value.match(/\d/)&&el.value.length<6) return;
  if (el.value.length<3) return;
  timeoutCtr    = new Date().getTime();
  searchText    = el;
  theField      = el;
  theFieldValue = el.value;
  theURL        = CGIPath+"patweb99.pbl?reportno=2&template=702"
  theURL = theURL + '&keywords='+theFieldValue;
  theURL = theURL + '&norecord=10';
  keycode       = event.keyCode;
  setTimeout(function(){
           AJAXSearch();
           theField.focus();
           }, 100);
  el.focus();
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
         AJAXResults(); 
       }
     }
  }
  xmlHttp.setRequestHeader("Content-type","text/html");
  xmlHttp.setRequestHeader("Cache-Control", "no-cache");
  if (theField.value==SearchString) {
    xmlHttp.send();
  }
  theField.focus()
  return false;
}
//
// Display Search Results
//
function AJAXResults() {
  dSearchResults=document.getElementById("ListScreen")
  if (xmlHttp.responseText=="") {
    dSearchResult.innerHTML="<ul class=sectionList>"+
       "<li class=sectionItem>"+
       "<p style='font-weight:bold;text-align:center;'>"+
       "No Matching Records Found.</p>"+
       "<p style='text-align:center;'>"+
       "Please Enter Key Words to Search Again.<br>"+
       "Key words can include surname, given name and speciality"+
       "</p></li></ul>"
  } else {
    var doctorSearchResults = eval("("+xmlHttp.responseText+")");
    var rowCount=0;
    ListString="<ul class=sectionList>";
    for (i=0;i<doctorSearchResults.length;i++) {
      ListString+="<li class=sectionItem style='line-height:20px;' "+
                  "onclick=\"DoctorViewFrame('"+doctorSearchResults[i].doctcode+"');\">"+
      doctorSearchResults[i].doctorName+"<br/>"
      ListString+="<span class='subscriptLeft'>"+
                    " "+doctorSearchResults[i].address1+
                    " "+doctorSearchResults[i].address2+
                    " "+doctorSearchResults[i].address3+
                    " "+doctorSearchResults[i].address4+
                    " "+doctorSearchResults[i].post+"</span>"+
                    "<span class='subscriptRight'>"+
                    "Phone:"+doctorSearchResults[i].telephone+"</span></br>"
      Oth=""
      if (!isWhitespace(doctorSearchResults[i].doctorType2)) { 
        Oth+=doctorSearchResults[i].doctorType2 +", " }
      if (!isWhitespace(doctorSearchResults[i].doctorType3)) { 
        Oth+=doctorSearchResults[i].doctorType3 +", " }
      if (!isWhitespace(doctorSearchResults[i].doctorType4)) { 
        Oth+=doctorSearchResults[i].doctorType4 +", " }
      if (!isWhitespace(doctorSearchResults[i].doctorType5)) { 
        Oth+=doctorSearchResults[i].doctorType5 +", " }
      Oth=Oth.substr(0,Oth.length-2)
      ListString += "<span class='subscriptLeft'>"+doctorSearchResults[i].doctorType1+"</span>"+
                    "<span class='subscriptRight'>"+
                    "Mobile:"+doctorSearchResults[i].mobile+"</span><br>"+
                    "<span class='subscriptLeft'>"+Oth+"</span>"+
                    "</li>";
         rowCount=rowCount+1;
    }
    ListString+="</ul>";
    MaxRowNo=rowCount;
    if (rowCount>0) {
       el=document.getElementById("ListScreen")
       el.innerHTML=ListString;
    } else {
      ListString="<ul class=sectionList>"+
        "<li class=sectionItem>"+
        "<p style='font-weight:bold;text-align:center;'>"+
        "No Matching Records Found.</p>"+
        "<p style='text-align:center;'>"+
        "Please Enter Key Words to Search Again.<br>"+
        "Key words can include surname, given name and speciality"+
        "</p></li></ul>"
      el=document.getElementById("ListScreen")
      el.innerHTML=ListString;
    }
  }
}
function DoctorViewFrame(DoctorCode) {
  if(DoctorCode.replace(/ /g,"").length  == 0 ) { return; }
  var LinkToUrl="patweb99.pbl?reportno=1&template=12&doctcode="+DoctorCode.replace(/ g/,"+");
  openDocumentNonZoomable(CGIPath+LinkToUrl,"Doctor Details");
}
