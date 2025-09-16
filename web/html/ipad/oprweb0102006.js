//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/oprweb0102006.js
//
// Modification 
//
// Version         Date        Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.07.01 01.12.2015 Peter Vela    CAR 322118
//                      Swapped first date and last date around in GetList()
//                      case 1
// V10.03.02 06.08.2013 B.G.Ackland   CAR 289383
//                      Fixed to use createHttpObject() in place of XMLHttpRequest()
// V10.03.01 29.07.2013 B.G.Ackland CAR 288223
//                      Show Surgeon in Separate Field
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
    frstdate=el.lastdate.options[el.lastdate.selectedIndex].value;
    ld=new Date(FormatDate(frstdate));
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
        "?reportno=1" +
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
 SortOrderBy=18;
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
    strFolder=FormatPatientIcon(PatientRecords.rows[i][2]);
    strDateTime=PatientRecords.rows[i][4]+PatientRecords.rows[i][5];
    OS += "<li class=sectionItem onclick='LinkPatient(\""+i+"\");'>" +
          strFolder + PatientRecords.rows[i][3] +
          "<br><span class=subscriptLeft>Session: " + FormatDateTime(strDateTime)+
              "&nbsp;" + PatientRecords.rows[i][13] + "</span>" +
          "<span class=subscriptRight>Case No:"+PatientRecords.rows[i][8] + "</span>" +
          "<br><span class=subscriptLeft>Surgeon: "+
          PatientRecords.rows[i][20]+ "</span>" +
          "<span class=subscriptRight>Anaesthetist: "+PatientRecords.rows[i][14] + "</span>" +
          "<br><span class=subscriptLeft>Ward/Bed: "+PatientRecords.rows[i][15] + '  ' +
                                                 PatientRecords.rows[i][16] + "</span>" +
          "<span class=subscriptRight>Anaesthetic: "+PatientRecords.rows[i][17] + "</span>" +
          "<br><span class=subscriptLeft>Operation: "+
          PatientRecords.rows[i][9]+PatientRecords.rows[i][10]+ "</span>" +
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
