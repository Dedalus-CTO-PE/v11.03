//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/patweb9311003.js
//
// Modification 
//
// Version   Date                         Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.02 06.08.2013 B.G.Ackland   CAR 289383
//                      Fixed to use createHttpObject() in place of XMLHttpRequest()
// V10.03.00 17.07.2013 B.G.Ackland CAR 288718   
//                      New Expected Discharge List for mobility
//
var frstdate;
var lastdate;
var DateKey;
//------------------------------------------------------------
// Function : Init Page
//------------------------------------------------------------
function ViewType(el) {
 document.SelectPeriod.viewtype.value=el.selectedIndex;
 if (document.SelectPeriod.lastdate!=undefined) {
   sl=document.SelectPeriod.lastdate;
   sl.options[sl.options.length]=new Option('        ','        ');
   sl.selectedIndex=sl.options.length-1;
 }
  
 if (document.SelectPeriod.vyearmth!=undefined) {
   sl=document.SelectPeriod.vyearmth;
   sl.options[sl.options.length]=new Option('      ','      ');
   sl.selectedIndex=sl.options.length-1;
 }
 document.SelectPeriod.submit();
}
function init(){
 el=document.SelectPeriod.lastdate;
 el.onchange=SelectDate;
 InitTable();
}
function SelectDate() {
  el=document.SelectPeriod.lastdate;
  DateKey=el.options[el.selectedIndex].value;
  if (DateKey>frstdate&&DateKey<lastdate) {
    ShowPatientList();
  }
  else {
    document.SelectPeriod.submit();
  }
}
function NextDay() {
  if (document.SelectPeriod.viewtype.value==1) {
    el=document.SelectPeriod.lastdate;
    el.selectedIndex=el.selectedIndex+1;
    document.SelectPeriod.submit();
    return;
  }
  if (document.SelectPeriod.viewtype.value==2) {
    el=document.SelectPeriod.vyearmth;
    el.selectedIndex=el.selectedIndex+1;
    document.SelectPeriod.submit();
    return;
  }
  el=document.SelectPeriod.lastdate;
  el.selectedIndex=el.selectedIndex+1;
  DateKey=el.options[el.selectedIndex].value;
  if (DateKey>frstdate&&DateKey<lastdate) {
    ShowPatientList();
  }
  else {
    document.SelectPeriod.submit();
  }
}
function PrevDay() {
  if (document.SelectPeriod.viewtype.value==1) {
    el=document.SelectPeriod.lastdate;
    el.selectedIndex=el.selectedIndex-1;
    document.SelectPeriod.submit();
    return;
  }
  if (document.SelectPeriod.viewtype.value==2) {
    el=document.SelectPeriod.vyearmth;
    el.selectedIndex=el.selectedIndex-1;
    document.SelectPeriod.submit();
    return;
  }
  el=document.SelectPeriod.lastdate;
  el.selectedIndex=el.selectedIndex-1;
  DateKey=el.options[el.selectedIndex].value;
  if (DateKey>frstdate&&DateKey<lastdate) {
    ShowPatientList();
  }
  else {
    document.SelectPeriod.submit();
  }
}

function GetList() {
  el=document.SelectPeriod;
  lastdate=el.lastdate.options[el.lastdate.selectedIndex].value;
  var filtdpst=el.filtdpst.options[el.filtdpst.selectedIndex].value;
  theURL="patweb93.pbl"+
        "?reportno=11" +
        "&template=2" +
        "&viewtype=0" +
        "&filtdpst="+filtdpst +
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
//    alertify.alert(xmlHttp.responseText);
    AddRows();
    for(var i = 0; i < t.rows.length; i++) {
     admissno=t.rows[i][8].replace(/.*admissno=/,"").substr(0,8).replace(/\+/g," "); 
     t.rows[i].unshift(admissno);  //* Shift Admissno to Column 1
     t.rows[i].unshift(t.rows[i][11]);  //* Shift U/R to Column 0
    }
  }
}
function SortPatients(el) {
 SortOrderBy=el.options[el.selectedIndex].value;
 PatientRecords.rows.sort(StringSort);
 ShowPatientList();
}
function InitTable() {
 t = new Table();
 PatientRecords = t;
 GetList();
 SortOrderBy=2;
 PatientRecords.rows.sort(StringSort);
 var sr=document.getElementById("ListLocation");
 var nr=document.getElementById("noResults");
 ShowPatientList();
}
function ShowPatientList() {
 CurrentDiv=document.getElementById("ListContent");
 var OS = "<ul class=sectionList>";
 RowCount=0;
 MinRowNo=-1;
 for(var i = 0; i < PatientRecords.rows.length; i++) {
    RowCount++;
    MaxRowNo=i+1;
    if (MinRowNo==-1) MinRowNo=i;
    strFolder=FormatPatientIcon(PatientRecords.rows[i][17])
    OS += "<li class=sectionItem onclick='LinkPatient(\""+i+"\");'>" +
          strFolder + PatientRecords.rows[i][2] +
          "<br><span class=subscriptLeft>Expected Discharge : " + FormatDate(PatientRecords.rows[i][11]) + "</span>" +
          "<span class=subscriptRight>Status : "+PatientRecords.rows[i][19] + "</span>" +
          "<br><span class=subscriptLeft>Condition : "+
                 PatientRecords.rows[i][15].replace(/  /g," ") + "</span>" +
          "<span class=subscriptRight>Ward/Bed : "+PatientRecords.rows[i][13] + "</span>" +
          "<br><span class=subscriptLeft>Diagnosis: "+ PatientRecords.rows[i][5]+ "</span>" +
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
function FormatPatientIcon(Indicators) {
  ImageStr="<span class=PatientFolder"+ Indicators.substr(0,3) + "></span>"
  return ImageStr;
}
