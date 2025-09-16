//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/cliweb0308011.js
//
// Modification 
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.03 18.02.2014 B.G.Ackland 
//                      Remove Surplus Code Commented Out
// V10.03.02 06.08.2013 B.G.Ackland   CAR 289383
//                      Fixed to use createHttpObject() in place of XMLHttpRequest()
// V10.01.00 13/04/2012 Version change
// V10.00.00 13/04/2012 Created for Mobility Suite
//

var MoreResults;
var MoreStartKey;
var ResultsDiv;
//------------------------------------------------------------
// Function : Init Page
//------------------------------------------------------------
function init(){
 if (document.SelectPeriod.status!=undefined) {
 if (isWhitespace(document.SelectPeriod.status.value)){
                 (document.SelectPeriod.status.value="07")}
 }
 if (document.SelectPeriod.viewtype!=undefined) {
 for (var i =0 ; i < document.SelectPeriod.viewtype.length; i++) {
  if (document.SelectPeriod.viewtype.options[i].value==document.SelectPeriod.view.value) {
     document.SelectPeriod.viewtype.selectedIndex=i } };
 }
 if (document.SelectPeriod.docttype!=undefined) {
 for (var i =0 ; i < document.SelectPeriod.docttype.length; i++) {
  if (document.SelectPeriod.docttype.options[i].value==document.SelectPeriod.status.value) {
       document.SelectPeriod.docttype.selectedIndex=i } };
 }
 InitTable();
}
function InitTable() {
 ResultsDiv = document.getElementById("ListContent");
 PatientRecords = new Table();
 t=PatientRecords;
 AddResults();
 MaxRowNo = t.rows.length;
 var sr=document.getElementById("ListLocation");
 var nr=document.getElementById("noResults");
 if (PatientRecords.rows.length>0) {
    ResultList();
    if (MoreResults) {
     ResultsDiv.innerHTML += "<input type=button class=green onclick='ListMoreResults(MoreStartKey,this);' "+
                             " style='margin-left:2.5%;' value='List More Results'>"
    }
    else {
      ResultsDiv.innerHTML += "<ul class=ListRes>" +
                             "<li class=ListMore>No More Results</li></ul>"
    }
    ResultsDiv.style.display="block";
    nr.style.display="none"
  }
  else {
    sr.style.display="none"
    nr.style.display=""
  }
}
function ResultList() {
 //var OS = "<div class=sectionDiv>" +
 SortOrderBy=1;
 PatientRecords.rows.sort(RevStringSort);
 var OS = "<ul class=sectionList>";
 for(var i = 0; i < PatientRecords.rows.length; i++) {
   resText=PatientRecords.rows[i][2].replace(/ *$/,"").replace(/\, \(.*\)$/,"")
   OS += "<li class=sectionItem onclick=\"PatientResultLink('"+ PatientRecords.rows[i][0] +
          "','" + PatientRecords.rows[i][8] + "','" + PatientRecords.rows[i][9] + "','" + PatientRecords.rows[i][10] + "','" + i + "')\">" +
         "<span class='showResultIcon"+PatientRecords.rows[i][8].substr(0,2)+"' style='float:left;' ></span>"+ 
         "<span class='patient-result'>"+ resText + "</span>" +
         "<span style='float:right' class='showResultStatus"+
           PatientRecords.rows[i][4].replace(/ *$/,"")+"' ></span><br />"+
         "<span class=subscriptCenter>"+PatientRecords.rows[i][3]+"</span>" +
         "<span class=ntTimeframe>"+FormatCommentAge(PatientRecords.rows[i][1])+"</span>"  +
         "<span class=ntWhen>"+FormatDateTime(PatientRecords.rows[i][1])+
         " (Status:"+PatientRecords.rows[i][7]+ ")</span>" +
         "<span class='showResultReadStatus"+
         PatientRecords.rows[i][5].replace(/ *$/,"")+"' style='float:right'></span>"+
         "</li>";
 }
 OS += "</ul>";
 ResultsDiv.innerHTML=OS;
}
function ListMoreResults(StartKey,el) {
 el.outerHTML="<div><img src="+IPADPath+"loading.gif "+
              "style='text-align:center;'></div>"
 setTimeout(GetMoreResults(StartKey),100);
}
function GetMoreResults(StartKey) {
 el=document.SelectPeriod
 MoreTemp='18';
 if (el.template.options[el.template.selectedIndex].value=='10') {
   MoreTemp='19';
 }
 theURL="cliweb03.pbl"+
        "?reportno="+el.reportno.value +
        "&template=" + MoreTemp +
        "&startkey="+StartKey.replace(/ /g,"+");
  if (el.lastdate!=undefined) {
    theURL+="&lastdate="+el.lastdate.options[el.lastdate.selectedIndex].value }
  if (el.vyearmth!=undefined) {
    theURL+="&vyearmth="+el.vyearmth.options[el.vyearmth.selectedIndex].value }
  if (el.viewtype!=undefined) {
    theURL+="&viewtype="+el.viewtype.options[el.viewtype.selectedIndex].value }
  if (el.docttype!=undefined) {
    theURL+="&docttype="+el.docttype.options[el.docttype.selectedIndex].value }

 var xmlHttp = createHttpObject();
 var h  = document.getElementsByTagName("head")[0];
 xmlHttp.open("GET", theURL, false);
 xmlHttp.send();
 if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
   var s = document.createElement("script");
   s.type="text/javascript";
   h.appendChild(s);
   s.text=xmlHttp.responseText;
   t=PatientRecords;
   AddResults();
   ResultList();
   if (MoreResults) {
     ResultsDiv.innerHTML += "<input type=button class=green onclick='ListMoreResults(MoreStartKey,this);' "+
                             " style='margin-left:2.5%;' value='List More Results'>"
    }
    else {
      ResultsDiv.innerHTML += "<ul class=ListRes>" +
                                "<li class=ListMore>No More Results</li></ul>"
    }
  }
}
