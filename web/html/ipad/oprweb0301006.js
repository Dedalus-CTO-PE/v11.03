//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/oprweb0301006.js
//
// Modification 
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.02 06.08.2013 B.G.Ackland   CAR 289383
//                      Fixed to use createHttpObject() in place of XMLHttpRequest()
// V10.03.00 01/07/2013 B.G.Ackland  CAR
//                      New Theatre Session List for Healthscope
var frstdate;
var lastdate;
var DateKey;
//------------------------------------------------------------
// Function : Init Page
//------------------------------------------------------------
function init(){
 InitTable();
}
function NextDay() {
  el=document.SelectPeriod.lastdate;
  el.selectedIndex=el.selectedIndex+1;
  DateKey=el.options[el.selectedIndex].value;
  document.SelectPeriod.submit();
}
function PrevDay() {
  el=document.SelectPeriod.lastdate;
  el.selectedIndex=el.selectedIndex-1;
  DateKey=el.options[el.selectedIndex].value;
  document.SelectPeriod.submit();
}

function GetList() {
  el=document.SelectPeriod
  lastdate=el.lastdate.options[el.lastdate.selectedIndex].value;
  unitcode=SelectPeriod.unitcode.options[SelectPeriod.unitcode.selectedIndex].value
  surgtype=SelectPeriod.surgtype.options[SelectPeriod.surgtype.selectedIndex].value
  theURL="oprweb03.pbl"+
        "?reportno=1" +
        "&template=7"+
        "&viewtype=0"+
        "&unitcode="+ unitcode +
        "&surgtype="+surgtype +
        "&lastdate="+lastdate;
  var xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
    var h = document.getElementsByTagName("head")[0];
    var s = document.createElement("script");
    s.type="text/javascript";
    h.appendChild(s);
    s.text=xmlHttp.responseText;
    AddRows();
  }
}
function SortPatients(el) {
 SortOrderBy=el.options[el.selectedIndex].value;
 TableRecords.rows.sort(StringSort);
 ShowPatientList();
}
function InitTable() {
 t = new Table();
 TableRecords = t;
 GetList();
 SortOrderBy=18;
 TableRecords.rows.sort(StringSort);
 var sr=document.getElementById("ListLocation");
 var nr=document.getElementById("noResults");
 ShowPatientList();
}
function LinkSession(linkURL) {
  var returnPage=location.href;
  setCookie("SessionListPage",returnPage,1);
  location.href=linkURL;
}
function ShowPatientList() {
 RemovePatDiv();
 CurrentDiv=document.getElementById("ListContent");
 var OS = "<ul class=sectionList>";
 RowCount=0;
 MinRowNo=-1;
 for(var i = 0; i < TableRecords.rows.length; i++) {
    RowCount++;
    MaxRowNo=i+1;
    if (MinRowNo==-1) MinRowNo=i;
    OS += "<li class=sectionItem onclick='LinkSession(\""+TableRecords.rows[i][0]+"\");'>" +
          FormatDateTime(TableRecords.rows[i][2]) +
          " Theatre: "+TableRecords.rows[i][14] + 
          "<br><span class=subscriptLeft>Surgeon: "+TableRecords.rows[i][3] + "</span>" +
          "<span class=subscriptRight>Anaesthetist: "+TableRecords.rows[i][4] + "</span>" +
          "<br><span class=subscriptLeft>Type: "+TableRecords.rows[i][3] + "</span>" +
          "<span class=subscriptRight>Unit: "+TableRecords.rows[i][10] + "</span>" +
          "<br><span class=subscriptLeft>Available/Booked: "+
          TableRecords.rows[i][5] + " / "+ TableRecords.rows[i][6]+" minutes</span>" +
          "<span class=subscriptRight>Patients: "+TableRecords.rows[i][12]+ "</span>" +
          "</li>";
 }
 if (RowCount==0) { 
    OS+="<li style='text-align:center;color:darkred;' class=sectionItem>"+
        "No Results for Search Criteria"+
        "</li>";
 }
 OS += "</ul>";
 CurrentDiv.innerHTML=OS;
 CurrentDiv.style.display="block";
}
