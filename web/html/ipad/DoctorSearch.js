//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/PatientSearch.js
//
// Modification 
//
// Version         Date                         Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.01.00       13/04/2012                   Version change
// V10.00.00       13/04/2012                   Created for Mobility Suite
//

/******************************************************************************
 * Program : PatientSearch.js
 * Written : B.G Ackland
 * Function: Standard Patient Search throughout mobile clinical
 *
 * Version :
 * V10.00.02 19/01/2011 B.G Ackland
.            added search on patients gender and age
 * v10.00.01 17/01/2011 Saroeun Soeur 
 *           added example on case when patient match not found
 * v10.00.00 01/06/2010 B.G Ackland 
 *           created PatietSearch.js
 *
 *****************************************************************************/
//
// Ajax based Patient Search
//
var theURL, theField,theFieldValue, theStatus, thePosition,theCode,dSearchResult,searchText,timeoutCtr;
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
  dSearchTable=document.getElementById("RawData")
  if (xmlHttp.responseText=="") {
    dSearchResult.innerHTML="";
    dSearchTable.innerHTML="";
    dSearchResult.style.display="none";
  }
  else {
    var doctorSearchResults = eval("("+xmlHttp.responseText+")");
    SearchResults(doctorSearchResults);
 }
}
function removeBreaks(stringArray) {
  var str = ""; 
  for(var i = 0; i < stringArray.length;i++) {
    if(stringArray[i].replace(/ /g,"").length > 0) {
      str += stringArray[i]+"<br />";
    }
  }
  return str;
}
/***********************************************************
 *  
 **********************************************************/
function SearchResults(doctorSearchResults) {
  var rowCount=0;
  ListString="<ul class=sectionList>";
  for (i=0;i<doctorSearchResults.length;i++) {
    ListString+="<li class=sectionItem "+
        "onclick=\"DoctorViewFrame('"+doctorSearchResults[i].doctcode+"');\">"+
        "<span class='PatientDetails'>"+
        "<span class='listText'>"+doctorSearchResults[i].doctorName+"</span>"+
        "<span class='subscriptLeft style='vertical-align:top'>";
        if(doctorSearchResults[i].doctorType1.replace(/ /g,"").length != 0) {
          ListString += doctorSearchResults[i].doctorType1+",";
        }
        if(doctorSearchResults[i].doctorType2.replace(/ /g,"").length != 0) {
          ListString += doctorSearchResults[i].doctorType2;
        }
        if(doctorSearchResults[i].doctorType3.replace(/ /g,"").length != 0) {
          ListString += " "+doctorSearchResults[i].doctorType3;
        }
        if(doctorSearchResults[i].doctorType4.replace(/ /g,"").length != 0) {
          ListString += " "+doctorSearchResults[i].doctorType4;
        }
        if(doctorSearchResults[i].doctorType5.replace(/ /g,"").length != 0) {
          ListString += " "+doctorSearchResults[i].doctorType5;
        }
        ListString += "<br />"+doctorSearchResults[i].address1+
                      " "+doctorSearchResults[i].address2+
                      " "+doctorSearchResults[i].address3+
                      " "+doctorSearchResults[i].address4+
                      " "+doctorSearchResults[i].post
                       +"</span>"+
                      "<span class='subscriptRight' style='vertical-align:top'>"+
                      "<br />Phone:"+doctorSearchResults[i].telephone+
                      "<br />Mobile:"+doctorSearchResults[i].mobile+
                      "<br />Fax:"+doctorSearchResults[i].fax+
                      "<br />Pager:"+doctorSearchResults[i].pager+"</span>"+
                      "</span></li>";
        rowCount=rowCount+1;
    }
    ListString+="</ul>";
    MaxRowNo=rowCount;
    if (rowCount>0) {
      CurrentDiv=document.getElementById("ListScreen")
      CurrentDiv.innerHTML=ListString;
      CurrentDiv.style.display="";
    } else {
      ListString="<ul class=sectionList>"+
                 "<li class=sectionItem>"+
                 "<p style='font-weight:bold;text-align:center;'>"+
                 "No Matching Doctor Found"
      CurrentDiv=document.getElementById("ListScreen")
      CurrentDiv.innerHTML=ListString;
      CurrentDiv.style.display=""
    }
}
function DoctorViewFrame(DoctorCode) {
  if(DoctorCode.replace(/ /g,"").length  == 0 ) {
    return;
  }
  var LinkToUrl="patweb99.pbl?reportno=1&template=11&doctcode="+DoctorCode.replace(/ g/,"+");
  CurrentDiv = document.getElementById("currentDiv");
  openSection(LinkToUrl,"Doctor Details");
}
function openSection(linkurl,linktitle) {
  var sFormFrame        = GetFrameElement('sectionFormFrame');
  sFormFrame.src=IPADPath+"LoadingPage.html";
  sFormFrame.src = CGIPath+linkurl;
  sFormFrame.style.display = "block";
  CurrentDiv.style.display = "block";
  list = document.getElementById("ListScreen");
  list.style.display = "none";
  setTimeout(function(){ 
    top.scrollTo(0,0); 
  }, 100); 
}
