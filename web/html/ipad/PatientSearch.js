//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/PatientSearch.js
//
// Modification 
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.04 15.01.2014 B.G.Ackland   CAR 289383
//                      Fix search link with 0 admission number to use srchtype=4
// V10.03.03 26.08.2013 B.G.Ackland   CAR 289383
//                      Show Full Address and Date of Birth
// V10.03.02 06.08.2013 B.G.Ackland   CAR 289383
//                      Fixed to use createHttpObject() in place of XMLHttpRequest()
// V10.03.00 13/04/2012 Version change
// V10.01.00 13/04/2012 Version change
// V10.00.00 13/04/2012 Created for Mobility Suite
//
//
// Ajax based Patient Search
//
var theURL, theField,theFieldValue, theStatus, thePosition,theCode,dSearchResult,searchText,timeoutCtr;
function PatientSearch(el) {  
  if (el.value.match(/\d/)&&el.value.length<6) return;
  if (el.value.length<3) return;
  timeoutCtr    = new Date().getTime();
  searchText    = el;
  theField      = el;
  theFieldValue = el.value;
  theURL        = "../../cgi-bin/patweb90.pbl?reportno=1&template=902"
  if (el.value.substr(0,3).match(/\d/)) {
    altID = "++++++++++++++++++++";
    altID = altID.substr(0,(20-el.value.length))
    theURL = theURL + '&alternid=' + altID + el.value.toUpperCase();
    theURL = theURL + '&srchtype=4';
  }
  else {
    SearchName=el.value.split(",");
    theURL = theURL + '&srchsnam='+SearchName[0].toUpperCase();
    if (SearchName.length>1) theURL = theURL + '&srchgnam='+SearchName[1].toUpperCase();
    if (SearchName.length>2) {
      if (SearchName[2].toUpperCase()=="M") theURL = theURL + '&srchpsex=M'
      if (SearchName[2].toUpperCase()=="F") theURL = theURL + '&srchpsex=F'
    }
    if (SearchName.length>3) {
      if (SearchName[3].match(/\d/)) { 
        theURL = theURL + '&srchpdob=&srcharan=5&srchpage='+SearchName[3].toUpperCase(); 
      }
    }
    theURL = theURL + '&srchtype=1'
  }
  theURL = theURL + '&norecord=10';
  keycode       = event.keyCode;
  setTimeout("AJAXSearch()", 100);
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
  if (theField.value==SearchString) {
    xmlHttp.send();
  }
  return false;
  theField.focus()
}
//
// Display Search Results
//
function AJAXResults() {
  el=document.getElementById("content")
  el.style.display='none';
  dSearchResults=document.getElementById("ListScreen")
  dSearchTable=document.getElementById("RawData")
  if (xmlHttp.responseText=="") {
    dSearchResult.innerHTML="";
    dSearchTable.innerHTML="";
    dSearchResult.style.display="none";
  }
  else {
    sHTMLOutput              = xmlHttp.responseText;
    dSearchTable.innerHTML   = sHTMLOutput;
    SearchResults();
 }
}
function SearchResults() {
    var rowCount=0;
    PatientRecords = new Table("","");
    ListString="<ul class=sectionList>"
    var ttable=document.getElementById("RawData");
    var trows=ttable.getElementsByTagName("tr");
    for (i=1;i<trows.length;i++) {
     if (trows[i].innerHTML.match(/\<table/i)) {
      var tcells=trows[i].getElementsByTagName("td")
        for (j=0;j<tcells.length;j++) {
        switch (j) {
          case 0 :
           pimg=tcells[j].innerHTML.replace(/\n/,"").replace(/\<br\>.*/i,"")
           pimg=pimg.replace(/.*\>\<img .*PatientFolder/i,"<span class=PatientFolder").replace(/.gif.*/i,"></span>");
           break;
          case 1 :
           purn=tcells[j].innerHTML
           purn=purn.replace(/.*urnumber=/i,"")
           purn=purn.replace(/\&.*/i,"").replace(/\+/g," ")
           pvis=tcells[j].innerHTML.replace(/.*admissno=/i,"")
           pvis=pvis.replace(/\".*/i,"").replace(/\+/g," ")
           break;
          case 2 :
           padd=tcells[j].innerHTML.replace(/\n/,"").replace(/\<br\>/i,"XXXX");
           padd=padd.replace(/.*XXXX/,"").replace(/\<br\>/gi,",");
           pnam=tcells[j].innerHTML.replace(/\n/,"").replace(/\<br\>.*/i,"").replace(/onclick.*/,">")
           pnam=pnam.replace(/\<b\>/i,"").replace(/\<\/b\>/i,"")
           pnam=pnam.replace(/class=.Icon./i,"class=AlertIcon")
           pnam=pnam.replace(/\.\.\/images/i,"../../images")
           break;
          case 4 :
           psex=tcells[j].innerHTML.replace(/.*\<br\>/i,"")
           psex1=psex.substr(0,1);
           pdob=tcells[j].innerHTML.replace(/\<br\>.*/i,"")
           page=pdob.replace(/\(/,",").replace(/\)/,"");
           break;
         }
        }
        PatientRecords.addRow(purn,pvis,pnam,padd,pdob,psex)
        ListString+="<li class=sectionItem "+
        "onclick=\"searchLinkPatient('"+rowCount+"');\">"+
        "<span class='PatientDetails'>"+
        "<span class='listText'>"+pimg+pnam+" ("+page+","+psex1+","+purn+")</span>"+
        "<span class='subscriptCenter'>"+padd+"</span>"+
//        "<span class='subscriptLeft'> "+pdob+"</span>"+
//        "<span class='subscriptRight'>"+psex+"</span>"+
        "</span></li>"
        rowCount=rowCount+1
     }
    }
    ListString+="</ul>"
//    if (rowCount>9) {
//      ListString+="<input type=button class=green onclick='Next10();' value='Show More'>"
//  }
  MaxRowNo=rowCount;
  if (rowCount>0) {
    CurrentDiv=document.getElementById("ListScreen")
    CurrentDiv.innerHTML=ListString;
    CurrentDiv.style.display="";
  }
  else {
    ListString="<ul class=sectionList>"+
               "<li class=sectionItem>"+
               "<p style='font-weight:bold;text-align:center;'>"+
               "No Matching Patients Found</p> " +
               "<p style='text-align:center;'>Search by"+
               "<br />surname and given name, sex, age example:<b><i>Doe,John,M,45</i></b>"+
               "<br />patient UR, example:<b><i>12345678</i></b></p></li></ul>"
    CurrentDiv=document.getElementById("ListScreen")
    CurrentDiv.innerHTML=ListString;
    CurrentDiv.style.display=""
  }
}
function searchLinkPatient(rowNo) {
  var elFrame=window.top.document.getElementById("iphone-frame")
  if(elFrame.contentDocument.getElementById("PatientTabMenu")!= null) {
     PatientURN=PatientRecords.rows[rowNo][0]
     PatientVIS=PatientRecords.rows[rowNo][1]
     if (PatientVIS.replace(/ /g,"")!="0") {
       theURL = CGIPath+ "patweb98.pbl?reportno=1&template=187" +
                         "&urnumber="+PatientURN.replace(/ /g,"+") +
                         "&admissno="+PatientVIS.replace(/ /g,"+");
     } else {
       theURL = CGIPath+ "patweb98.pbl?reportno=1&template=187" +
                         "&urnumber="+PatientURN.replace(/ /g,"+") +
                         "&srchtype=4";
     }
     openMedicalRecord(theURL)
     return;
 }
 alertify.alert("Invalid Menu Configuration.");
}
