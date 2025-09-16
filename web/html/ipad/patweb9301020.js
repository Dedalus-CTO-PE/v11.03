//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/patweb9301020.js
//
// Modification 
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.02 06.08.2013 B.G.Ackland   CAR 289383
//                      Fixed to use createHttpObject() in place of XMLHttpRequest()
// V10.03.00 13/04/2012 Version change
// V10.01.00 13/04/2012 Version change
// V10.00.00 13/04/2012 Created for Mobility Suite
//

var s;
var h;
var currentLat;
var currentLon;
var defLat="-37.71102605123901";
var defLon="145.16477214199105";
var patientRowNo;

function InitTable() {
 PatientRecords = new Table("patient-list","patient-item");
 t=PatientRecords;
 el=document.SelectWard
 wardcode=el.wardcode.options[el.wardcode.selectedIndex].value;
 theURL="patweb93.php"+
        "?reportno=3" +
        "&wardcode="+wardcode
 var xmlHttp = createHttpObject();
 xmlHttp.open("GET", theURL, false);
 xmlHttp.send();
 if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
    h = document.getElementsByTagName("head")[0];
    s = document.createElement("script");
    s.type="text/javascript";
    h.appendChild(s);
    s.text=xmlHttp.responseText;
    AddRows();
 }
 SortOrderBy=23;
 PatientRecords.rows.sort(StringSort);
 CurrentDiv=document.getElementById("ListLocation");
 ShowWardList();
 MaxRowNo=t.rows.length;
}
function SortPatients(el) {
 SortOrderBy=el.options[el.selectedIndex].value;
 PatientRecords.rows.sort(StringSort);
 CurrentDiv=document.getElementById("ListLocation");
 RemovePatDiv();
 ShowWardList();
}
function ShowWardList() {
 var OS = "<div class=sectionDiv>" +
          "<ul class=sectionList>";
 for(var i = 0; i < PatientRecords.rows.length; i++) {
   BedStr="";
   if (!isWhitespace(PatientRecords.rows[i][15])) {
       BedStr='Bed : '+PatientRecords.rows[i][15]  }
   strFolder=FormatPatientIcon(PatientRecords.rows[i][2])
   OS += "<li class=sectionItem>" +
         "<span style='vertical-align:top;display:inline-block;width:80%;' onclick='LinkPatient(\""+i+"\");'>" + 
         strFolder + PatientRecords.rows[i][3]
   if (!isWhitespace(PatientRecords.rows[i][13])) OS +="<span class='showCondition_"+PatientRecords.rows[i][13]+"'></span>" 
   OS += "</span>"+
         "<span class=subscriptRight style='width:19%'><select title='Action' class=actionMenu onchange='SelectView(this);'>" +
         "<option value='1|"+i+"'>Action</option>" +
         "<option value='2|"+i+"'>View Map</option>" +
         "<option value='3|"+i+"'>Check In</option>" +
         "<option value='4|"+i+"'>Check Out</option>" +
         "</select></span>" +
         "</span>" +
         "<br><span class=subscriptLeft>Admitted :"   +FormatDate(PatientRecords.rows[i][5]) + "</span>" +
         "<span class=subscriptRight>Exp. Discharge :"+FormatDate(PatientRecords.rows[i][6]) + "</span>" +
         "<br>"+
         "<span class=subscriptLeft>Address : "+PatientRecords.rows[i][24] + "</span><br>" +
         "<span class=subscriptLeft>Diagnosis : "+PatientRecords.rows[i][4] + "</span>" +
         "</li>";
 }
 if (PatientRecords.rows.length==0) {
    OS+="<li style='text-align:center;color:darkred;' class=sectionItem>"+
        "No Patients Currently in this Ward."+
        "</li>";
 }
 OS += "</ul><div>";
 CurrentDiv.innerHTML=OS;
 
}
function FormatPatientIcon(Indicators) {
  ImageStr="<span class=PatientFolder"+ Indicators.substr(0,3) + "></span>"
  return ImageStr;
}
function SelectView(el) {
  opt=el.options[el.selectedIndex].value.split("|");
  switch (opt[0]) {
    case "1": return; break;
    case "2": ViewMap(opt[1]); break;
    case "3": CheckIn(opt[1]); break;
    case "4": CheckOut(opt[1]); break;
  }
}
function ViewMap(RowNo) {
  patientRowNo=RowNo;
  viewGPS();
}
function viewGPS() {
  if (navigator.geolocation) {
    navigator.geolocation.getCurrentPosition(showDirections, showLocation);
  } 
  else {
    location.href="https://maps.google.com.au/maps?output=embed&daddr="+PatientRecords.rows[patientRowNo][24]+"&saddr="+defLat+","+defLon;
  }
}
function showDirections(position) {
  currentLat=position.coords.latitude;
  currentLon=position.coords.longitude;
  location.href="https://maps.google.com.au/maps?output=embed&daddr="+PatientRecords.rows[patientRowNo][24]+"&saddr="+currentLat+","+currentLon
}
function showLocation() {
  location.href="https://maps.google.com.au/maps?output=embed&q="+PatientRecords.rows[patientRowNo][24]
}
function CheckIn(RowNo) {
  getGPS();
}
function CheckOut(RowNo) {
  getGPS();
}
function getGPS() {
  if (navigator.geolocation) {
    navigator.geolocation.getCurrentPosition(setGPS, gpsError);
  } 
  else {
    currentLat="00"
    currentLon="00"
  }
}
function gpsError(error) {
  alertify.alert("GPS Error: "+error.code+", "+error.message);
  currentLat="00"
  currentLon="00"
}
function setGPS(position) {
  currentLat=position.coords.latitude;
  currentLon=position.coords.longitude;
  alertify.alert("Logging Current Locaton "+currentLat+","+currentLon);
}
function ShowRoute() {
/*
  theURL="https://maps.google.com.au/maps?output=embed&f=d&source=s_d&saddr="+defLat+","+defLon+"&ll="+defLat+","+defLon
  theURL=theURL+"&daddr="+encodeURIComponent(PatientRecords.rows[0][24])
  for(var i = 1; i < PatientRecords.rows.length; i++) {
    theURL=theURL+encodeURIComponent(" to:"+PatientRecords.rows[i][24])
  }
  alertify.alert(theURL);
  window.open(theURL);
*/
  var rrobbin = document.getElementById('roundrobbin');
  var startlocation = document.getElementById('startlocation');
  var userdefinedused = document.getElementById('userdefinedused');
  var userdefinedroute = document.getElementById('userdefinedroute');
  var sortby = document.getElementById('orderby')
  userdefinedroute.value = "";

  if(parseInt(userdefinedused.value) === 1) {
   for(var i = 0; i < listLocation.childNodes.length; i++) {
     var tmp = document.getElementById('orderSelect_'+i);
     if(typeof tmp != 'undefined' && tmp != null) {
       userdefinedroute.value += tmp.value+"|";
     }
   }
 }
 
  linkurl = CGIPath+'patweb93.pbl?reportno=01&template=190&wardcode='
     +document.SelectWard.wardcode.options[document.SelectWard.wardcode.selectedIndex].value+
     "&roundrobbin="+rrobbin.value+"&startlocation="+startlocation.value+
     "&userdefinedused="+userdefinedused.value+"&userdefinedroute="+userdefinedroute.value+
     "&sortby="+sortby[sortby.selectedIndex].value;

  linktitle = "Map Route";
  openDocumentNonZoomable(linkurl,linktitle);
}

function showRouteError() {
    alertify.alert("Current Location Not Available");
}
function showRouteGPS(position) {
  currentLat=position.coords.latitude;
  currentLon=position.coords.longitude;
  theURL="https://maps.google.com.au/maps?output=embed&f=d&source=s_d&saddr="+currentLat+","+currentLon+"&ll="+currentLat+","+currentLon
  theURL=theURL+"&daddr="+PatientRecords.rows[0][24]
  for(var i = 1; i < PatientRecords.rows.length; i++) {
   theURL=theURL+"+to:"+PatientRecords.rows[i][24]
  }
  theURL=encodeURI(theURL);
  location.href=theURL
}
