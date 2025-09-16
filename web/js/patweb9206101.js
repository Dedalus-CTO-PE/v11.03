//jsVersion  : V11.03.00
//
var frstdate;
var lastdate;
var DateKey;
//------------------------------------------------------------
// Function : Init Page
//------------------------------------------------------------
function InitTable() {
 statusFilter=SelectPeriod.status
 for (i=0;i<statusFilter.options.length;i++) {
   if (trim(SelectPeriod.statnco1.value)==statusFilter.options[i].value) {
     statusFilter.selectedIndex=i;
   }
 }
 document.title="Online Pre-Admissions List";
 t = new Table(1,0,2,"100%","center",40,40);    // Create New Table Object
 t.addColumn("Entered","DateTime",5,5,"left","","","10%")
 t.addColumn("Name","String",2,2,"left","PatientFolder.gif","1","30%")
 t.addColumn("Exp Adm Date","DateTime",4,4,"left","","","10%")
 t.addColumn("Admitting Doctor","String",3,3,"left","","","20%")
 t.addColumn("Comments","String",6,6,"left","","","20%")
 t.addColumn("Status","String",7,7,"left","","",'10%')
 GetList();
 for (i=0;i<t.rows.length;i++) {
   t.rows[i][1]="javascript:LinkTo('"+ t.rows[i][1]+"')"
 }
 OrderColumn=2;
 AscDsc=1;
 lastOrderColumn=OrderColumn;
 TableOutput(OrderColumn,AscDsc);
}
function ChangeStatus(el) {
  SelectPeriod.statnco1.value=el.options[el.selectedIndex].value;
  SelectPeriod.submit();
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
    frstdate=el.lastdate.options[el.lastdate.selectedIndex].value;
    lastdate=el.lastdate.options[el.lastdate.selectedIndex].value;
    break;

  case '1':
    frstdate=el.lastdate.options[el.lastdate.selectedIndex].value;
    ld=new Date(GetDate(frstdate));
    ld.setDate(ld.getDate()+6);
    var ThisDay=ld.getDate();
    var ThisMth=parseInt(ld.getMonth(),10) +1;
    var ThisYrs=ld.getFullYear();
    if (ThisDay < 10) ThisDay="0" + ThisDay
    if (ThisMth < 10) ThisMth="0" + ThisMth
    lastdate=''+ThisYrs+ThisMth+ThisDay;
    break;

  case '2':
    yearmth=el.vyearmth.options[el.vyearmth.selectedIndex].value;
    frstdate=yearmth+'01'
    fd=new Date(yearmth.substr(0,4),parseInt(yearmth.substr(4,2),10),1);
    fd.setDate(fd.getDate()-1);
    var ThisDay=fd.getDate();
    var ThisMth=parseInt(fd.getMonth(),10) +1;
    var ThisYrs=fd.getFullYear();
    if (ThisDay < 10) ThisDay="0" + ThisDay
    if (ThisMth < 10) ThisMth="0" + ThisMth
    lastdate=''+ThisYrs + ThisMth + ThisDay;
    break;

  }
  statusFilter=el.status.options[el.status.selectedIndex].value;
  multihospital=el.multihsp.value
  if (multihospital==1) {
    facilityFilter=el.hospital.value;
  }
  else {
    facilityFilter=el.heathsrv.value;
  }
  theURL="preadm01.php"+
        "?reportno=1" +
        "&status="+statusFilter +
        "&frstdate="+frstdate +
        "&lastdate="+lastdate +
        "&facility="+trim(facilityFilter) +
        "&httprand="+Math.random();
  xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
    var h = document.getElementsByTagName("head")[0];
    var s = document.createElement("script");
    s.type="text/javascript";
    h.appendChild(s);
    s.text=xmlHttp.responseText;
    try {
      AddRows();
    }
    catch (err) {
     var text = "There was an error on this page.\n\n";
         text += "Error description: " + err.message + "\n\n";
         text += "Click OK to continue.\n\n";
     alert(text);
     alert("AJAX Response Error - "+xmlHttp.responseText);
    }
  }
}
function GetDate(date) {
   yyyy = date.substr(0,4)
   mm = date.substr(4,2)
   dd = date.substr(6,2)
   mth3=mth3Name(mm);
   return(dd + " " + mth3 + " " + yyyy  );
}
function mth3Name(mm) {
   switch(mm) {
     case "01": mth3="Jan"; break;
     case "02": mth3="Feb"; break;
     case "03": mth3="Mar"; break;
     case "04": mth3="Apr"; break;
     case "05": mth3="May"; break;
     case "06": mth3="Jun"; break;
     case "07": mth3="Jul"; break;
     case "08": mth3="Aug"; break;
     case "09": mth3="Sep"; break;
     case "10": mth3="Oct"; break;
     case "11": mth3="Nov"; break;
     case "12": mth3="Dec"; break;
   }
  return mth3;
}
function LinkTo(AdmissionID) {
  var t;
  var h;
  var w = getClientWidth()*.85;
  var l = (getClientWidth()/2) - w/2;
  h  = document.body.clientHeight*.975;
  t  = 0;
  SetCookie("AdmissionID",AdmissionID);

  if (document.getElementById('ptcnepis') != null &&
      document.getElementById('ptcnepis').value == '1') {
    SetCookie("sjogwaPortalCOOKIE","");
  }

  DFrameLink("patweb92.pbl?reportno=6&template=102",t,l,w,h);
}
