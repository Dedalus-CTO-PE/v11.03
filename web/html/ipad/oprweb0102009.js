//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/oprweb0102009.js
//
// Modification 
//
// Version         Date                         Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.10.01 07.03.2017 B.G.Ackland   
//                      Rename Diagnosis to Operation to Reflect what is returned
// V10.03.03 18.12.2013 B.G.Ackland   CAR 272973
//                      Fix Date Rage Issue in Nov/Dec 
// V10.03.02 06.08.2013 B.G.Ackland   CAR 289383
//                      Fixed to use createHttpObject() in place of XMLHttpRequest()
// V10.03.01 04/09/2012 Saroeun Soeur CAR 272404
//                      changed date filter GetList to week of +7
// V10.03.00 13/04/2012 Version change
// V10.01.00 13/04/2012 Version change
// V10.00.00 13/04/2012 Created for Mobility Suite
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
 document.SelectPeriod.SelectView.selectedIndex=document.SelectPeriod.viewtype.value;
 if (document.SelectPeriod.viewtype==0) {
   el=document.SelectPeriod.lastdate;
   el.onchange=SelectDate;
 }
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
  el=document.SelectPeriod
  switch (el.viewtype.value) {
  case '0':
    frstdate=el.lastdate.options[0].value;
    lastdate=el.lastdate.options[el.lastdate.length-1].value;
    DateKey=el.lastdate.options[el.lastdate.selectedIndex].value;
    MonthKey=el.lastdate.options[el.lastdate.selectedIndex].value.substr(0,6);
    break;

  case '1':
    lastdate=el.lastdate.options[el.lastdate.selectedIndex].value;
    ld=new Date(FormatDate(lastdate));
    var ThisDay=ld.getDate();
    var ThisMth=parseInt(ld.getMonth(),10) +1;
    var ThisYrs=ld.getFullYear();
    if (ThisDay < 10) ThisDay="0" + ThisDay
    if (ThisMth < 10) ThisMth="0" + ThisMth
    frstdate=''+ThisYrs+ThisMth+ThisDay;
    ld.setDate(ld.getDate()+7);
    var ThisDay=ld.getDate();
    var ThisMth=parseInt(ld.getMonth(),10) +1;
    var ThisYrs=ld.getFullYear();
    if (ThisDay < 10) ThisDay="0" + ThisDay
    if (ThisMth < 10) ThisMth="0" + ThisMth
    lastdate=''+ThisYrs+ThisMth+ThisDay;
    break;
  case '2':
    yearmth=el.vyearmth.options[el.vyearmth.selectedIndex].value;
    frstdate=yearmth+'00'
    lastdate=yearmth+'99'
    break;

  }
  theURL="oprweb01.php"+
        "?reportno=5" +
        "&frstdate="+frstdate +
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
 SortOrderBy=3;
 PatientRecords.rows.sort(StringSort);
 var sr=document.getElementById("ListLocation");
 var nr=document.getElementById("noResults");
 ShowPatientList();
}
function ShowPatientList() {
 RemovePatDiv();
 CurrentDiv=document.getElementById("ListContent");
 var OS = "<ul class=sectionList>";
 RowCount=0;
 MinRowNo=-1;
 for(var i = 0; i < PatientRecords.rows.length; i++) {
   if (document.SelectPeriod.viewtype.value>0||PatientRecords.rows[i][4]==DateKey) {
    RowCount++;
    MaxRowNo=i+1;
    if (MinRowNo==-1) MinRowNo=i;
    strFolder=FormatPatientIcon(PatientRecords.rows[i][2])
    OS += "<li class=sectionItem onclick='LinkPatient(\""+i+"\");'>" +
          strFolder + PatientRecords.rows[i][3] +
          "<br><span class=subscriptLeft>Expected: " + FormatDate(PatientRecords.rows[i][4]) + "</span>" +
          "<span class=subscriptRight>"+PatientRecords.rows[i][5] + "</span>" +
          "<br><span class=subscriptLeft> "+PatientRecords.rows[i][7] + "</span>" +
          "<span class=subscriptRight> "+PatientRecords.rows[i][8] + "</span>" +
          "<br><span class=subscriptLeft>Operation: "+ PatientRecords.rows[i][6]+ "</span>" +
          "</li>";
   }
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
