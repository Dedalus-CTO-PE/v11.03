//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/patweb0202010.js
//
// Modification 
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.01 06.08.2013 B.G.Ackland CAR 289383
//                      New AJAXPostString2 to fix post encoding
// V10.03.00 13/04/2012 Version change
// V10.01.00 13/04/2012 Version change
// V10.00.00 13/04/2012 Created for Mobility Suite
//

function InitTable() {
 rawData=document.getElementById("RawData");
 theURL="patweb07.pbl?reportno=02&template=003";
 var xmlHttp = createHttpObject();
 xmlHttp.open("GET", theURL, false);
 xmlHttp.send();
 if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
    rawData.innerHTML=xmlHttp.responseText;
    GetPatients();
 }
}
function GetPatients() {
 var OS = "<div class=sectionDiv>" +
          "<ul class=sectionList>";
  elTable=document.getElementById("PatientTable");
  elRows=elTable.getElementsByTagName("TR");
  for (i=0;i<elRows.length;i++) {
   elCols=elRows[i].getElementsByTagName("TD")
   AddLink=elCols[0].innerHTML.replace(/.*javascript:/i,"");
   AddLink=AddLink.replace(/Show/,"Add");
   AddLink=AddLink.replace(/>.*/,"");
   OS += "<li class=sectionItem onclick='"+AddLink+"'>" +
         "<span style='display:inline-block;width:70%;'>" + elCols[1].innerHTML+
         "</span>"+
         "<span class=subscriptRight style='width:29%;font-weight:bold;'>"+
         "<span class=AddItem></span>"+
         "</span>" +
         "</li>";
  }
 OS += "</ul><div>";
 el=document.getElementById("ListLocation")
 el.innerHTML=OS;
}
function AddPatient(urnumber,admissno) {
  document.AddForm.webpt003.value=urnumber;
  theURL=document.AddForm.action;
  var postStr=AJAXPostString2(document.AddForm)
  var xmlHttp = createHttpObject();
  xmlHttp.open("POST", theURL, false);
  xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
  xmlHttp.send(postStr);
  if (xmlHttp.status=="200") {
    if (xmlHttp.responseText.match(/location.href/i)) {
      location.href="patweb02.pbl?reportno=2&template=9&webpd002="+
                    document.AddForm.webpd002.value+"&webpt003="+urnumber
    }
    else {
      alertify.alert(xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,""));
    }
  }
  else {
    alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
  }
}
