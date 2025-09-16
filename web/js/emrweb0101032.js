//jsVersion  : V11.03.01
//-----------------------------------------------------------------------------
var startDate = new Date();
var startTime = startDate.getTime();

var filtChgTimeout = null;
var selViewTimeout = null;
var refreshTimeout = null;
var initTblTimeout = null;
var ajaxRefreshTimeout = null;
var filtMltTimeout = null;

var ClickedOnPatient = false;
function SelectPatient(urnumber,admissno) { 
  if(ClickedOnPatient == true) {
    return;
  }

  ClickedOnPatient = true;

  location.href="emrweb02.pbl?reportno=1&template=004&urnumber=" +
               urnumber + "&admissno=" + admissno

  setTimeout(function(){ClickedOnPatient=false},2000);
}
function OpenLocation(urnumber,admissno) { 
  linkURL="emrweb02.pbl?reportno=1&template=107&urnumber=" +
          urnumber + "&admissno=" + admissno;
  DFrameLink(linkURL,57,465,410,270);
}
function SetReturnPathCookie() {
  document.cookie = "ReturnPath=" + escape(location.href) + ";"
}
function RemPatientRows() { 
  var h = document.getElementsByTagName("head")[0];
  h.removeChild(document.getElementById("AddTableRows"));
}
function GetPatientRows() { 
  filterStream=GetCookieData("EMRWEB0101032FS");
  el=document.SelectFilter.filtstrm;
  for (var i=0;i<el.options.length;i++) {
    if (el.options[i].value==filterStream) el.selectedIndex=i;
  }
     
  if(document.getElementById("multstrm")) {
    filterMS=GetCookieData("EMRWEB0101032MFS");
    if(filterMS=="unknown") {
      filterMS="   |";
    }
    streams=filterMS.split("|");
    ms=document.getElementById("multstrm");
    for (var i=0;i<ms.options.length;i++) {
      for (var j=0;j<streams.length-1;j++) {
        if(ms.options[i].value.substr(0,3) == streams[j].substr(0,3)) {
          ms.options[i].selected=true;
        }
      }
    }
  }
    
  var h = document.getElementsByTagName("head")[0];
  var s = document.createElement("script");
  el= document.getElementById("filtstrm");
  filterStream=el.options[el.selectedIndex].value;
//--T0836547 - Added display ED short stay unit flag - template 37 tag
  if ((document.getElementById("disedssu")) &&
      (document.getElementById("disedssu").value=="1")) {
    ssu=document.getElementById("disedssu").value;
    theURL="emrweb01.pbl?reportno=1&template=37&filtstrm="+filterStream;
    theURL+="&disedssu="+ssu;
  }
  else {
    theURL="emrweb01.pbl?reportno=1&template=33&filtstrm="+filterStream;
  }

  if(document.getElementById("multstrm")) {
    ms=document.getElementById("multstrm");
    for (var i=0;i<ms.options.length;i++) {
    if (ms.options[i].selected==true) 
      theURL+="&multstrm=" + ms.options[i].value.substr(0,3);
    } 
  }

  xmlHttp = createHttpObject();
  theURL = theURL + '&httprand='+Math.random();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
    s.type="text/javascript";
    s.id="AddTableRows";
    h.appendChild(s);
    s.text=xmlHttp.responseText;
  } else {
    alert("Web Service Not Available. Please Try Again.");
  }
}
function InitPage() {
  StartProgressBar() 
  GetPatientRows();
  initTable();
}
function FilterChange(el) { 
  StartProgressBar() 
  SetCookie("EMRWEB0101032FS",el.options[el.selectedIndex].value);
  if (filtChgTimeout != null) {
    window.clearTimeout(filtChgTimeout);
  }
  filtChgTimeout = window.setTimeout(function() {RemPatientRows();GetPatientRows();initTable();},100);
}
function FilterMultiple(el) {
  if(!document.getElementById("multstrm")) {
    return;
  }
  var noselected=0;
  ms=document.getElementById("multstrm");
  for (var i=0;i<ms.options.length;i++) {
    if (ms.options[i].selected==true) {
      noselected++;
    }
  }
  if(noselected>1 && ms.options[0].selected==true) {
    alert("All can't be used with multiple selections");
     ms.options[0].selected=false;
  }
  StartProgressBar()
  var streams="";
  var allselected=false;
  for (var i=0;i<ms.options.length;i++) {
  if (ms.options[i].selected==true)
    streams+= ms.options[i].value.substr(0,3) + "|";
  }
 
  SetCookie("EMRWEB0101032MFS",streams);
  if (filtMltTimeout != null) {
    window.clearTimeout(filtMltTimeout);
  }
  filtMltTimeout = window.setTimeout(function() {RemPatientRows();GetPatientRows();initTable();},100);
}

function SelectViewType(el) { 
  TableSortOrder="";
  SetCookie("EMRWEB0101032VT",el.options[el.selectedIndex].value);
  StartProgressBar() 
  if (selViewTimeout != null) {
    window.clearTimeout(selViewTimeout);
  }
  selViewTimeout = window.setTimeout(function() { initTable() },100);
}
function SelectRefreshTime(el) { 
  StartProgressBar() 
  SetCookie("EMRWEB0101032RT",el.options[el.selectedIndex].value);

  if (refreshTimeout != null) {
    window.clearTimeout(refreshTimeout);
  }
  refreshTimeout = window.setTimeout(function() {RemPatientRows();GetPatientRows();initTable();},100);
}
function initTable() {
  RefreshTime=GetCookieData("EMRWEB0101032RT");
  if (isNaN(RefreshTime)) RefreshTime=180;
  RefreshTime=parseInt(RefreshTime,10)
  el=document.SelectFilter.RefreshTime
  for (var i=0;i<el.options.length;i++) {
    if (el.options[i].value==RefreshTime) el.selectedIndex=i;
  }

  TableView=GetCookieData("EMRWEB0101032VT");
  if (isNaN(TableView)) TableView=0;
  TableView=parseInt(TableView,10)
  el=document.SelectFilter.TableView
  for (var i=0;i<el.options.length;i++) {
    if (el.options[i].value==TableView) el.selectedIndex=i;
  }

  document.title="Current Patient List"
  immediate = 0
  emergency = 0
  urgent = 20
  semi = 50
  non = 110
  template = 32
  obj = new Table(1,0,1,"100%","center",25,30,immediate,emergency,urgent,semi,non);
//
// Add Columns in Order Required
// Heading,Type,Display Column,Sort Column,Align
//
  
  switch (TableView) {
   case 0: {
    obj.addColumn("ATS","Image",5,5,"center","","",40)

    if (!document.getElementById("dswahlth")) {
      obj.addColumn("Next","Number",62,62,"left","","",50)
    obj.addColumn("Patient","ImageText",39,39,"left","PatientFolder","1",180,37)
    } else {
      obj.addColumn("Next","Number",62,62,"left","","",50)
    obj.addColumn("Patient","ImageText",69,69,"left","PatientFolder","1",250,37)
    }

    obj.addColumn("Arrival","DateTime",7,7,"center","","",100)
    obj.addColumn("LOS","Minutes",31,31,"left","","",40)

    if (document.getElementById("dswahlth")) {
      obj.addColumn("Senior Doctor","String",68,68,"left","","",100)
      obj.addColumn("Treating Doctor","String",35,35,"left","","",100)
      obj.addColumn("Complaint/Diagnosis","String",70,70,"left","","",150)
    } else {
      obj.addColumn("Doc","String",35,35,"left","","",200)
      obj.addColumn("Complaint/Diagnosis","String",57,57,"left","","",200)
    }

    //T0836547 - No link to change location 
    if ((document.getElementById("disedssu")) &&
        (document.getElementById("disedssu").value == "1")){
      obj.addColumn("Loc","String",2,2,"left","","7",100)
      obj.addColumn("Exp. Ward","String",22,22,"left","","",35)
    } else {
      obj.addColumn("Loc","String",2,2,"left","","2",100)
    }

    obj.addColumn(document.HiddenFields.emvistrm.value,"String",60,60,"left","","",100)
    if ((document.getElementById("disedssu")) &&
       (document.getElementById("disedssu").value == "1")) {
       if (document.getElementById("dswahlth")) {
          TableSortOrder="1,1|9,1|"    // Next and Expected ward
       } else {
          TableSortOrder="1,1|8,1|"
       }
    }
    OrderColumn=1;
    AscDsc=1;
    lastOrderColumn=OrderColumn;
    break;
   }
   case 1: {
    obj.addColumn("ATS","Image",5,5,"center","","",50)

    if (!document.getElementById("dswahlth")) {
    obj.addColumn("Patient","ImageText",39,39,"left","PatientFolder","1",180,37)
    } else {
    obj.addColumn("Patient","ImageText",69,69,"left","PatientFolder","1",250,37)
    }

    obj.addColumn("Age","String",9,45,"right","","",40)
    obj.addColumn("Sex","String",8,8,"center","","",40)
    obj.addColumn("Arrival","DateTime",7,7,"center","","",100)
    obj.addColumn("LOS","Minutes",31,31,"left","","",50)

    if (document.getElementById("dswahlth")) {
      obj.addColumn("Senior Doctor","String",68,68,"left","","",100)
      obj.addColumn("Treating Doctor","String",35,35,"left","","",100)
    } else {
      obj.addColumn("Doc","String",35,35,"left","","",100)
    }

    obj.addColumn("Nur","String",36,36,"left","","",100)

    if (document.getElementById("dswahlth")) {
      obj.addColumn("Complaint/Diagnosis","String",70,70,"left","","",150)
    } else {
      obj.addColumn("Complaint/Diagnosis","String",57,57,"left","","",200)
    }
    //T0836547 - No link to change location
    if ((document.getElementById("disedssu")) &&
        (document.getElementById("disedssu").value == "1")){
      obj.addColumn("Loc","String",2,2,"left","","7",100)
      obj.addColumn("Exp. Ward","String",22,22,"left","","",40)
    } else {
      obj.addColumn("Loc","String",2,2,"left","","2",100)
    }
    obj.addColumn(document.HiddenFields.emvistrm.value,"String",60,60,"left","","",100)
    obj.addColumn("Unit","String",32,32,"left","","",100)
    if ((document.getElementById("disedssu")) &&
       (document.getElementById("disedssu").value == "1")) {
       if (document.getElementById("dswahlth")) {
          TableSortOrder="0,1|11,1|"    // Next and Expected ward
       } else {
          TableSortOrder="0,1|10,1|"
       }
    }
    OrderColumn=0;
    AscDsc=1;
    lastOrderColumn=OrderColumn;
    break;
   }
   case 2: {
    obj.addColumn("ATS","Image",5,5,"center","","",50)

    if (!document.getElementById("dswahlth")) {
    obj.addColumn("Patient","ImageText",39,39,"left","PatientFolder","1",180,37)
      obj.addColumn("Complaint/Diagnosis","String",57,57,"left","","",200)
    } else {
    obj.addColumn("Patient","ImageText",69,69,"left","PatientFolder","1",250,37)
      obj.addColumn("Complaint/Diagnosis","String",70,70,"left","","",150)
    }


    if (document.getElementById("dswahlth")) {
      obj.addColumn("Senior Doctor","String",68,68,"left","","",100)
      obj.addColumn("Treating Doctor","String",35,35,"left","","",100)
    } else {
      obj.addColumn("Doc","String",35,35,"left","","",100)
    }

    obj.addColumn("Nur","String",36,36,"left","","",100)
    obj.addColumn("LOS","Minutes",31,31,"left","","",50)
    obj.addColumn("Arr","Time",7,7,"center","","",50)

    //T0836547 - No link to change location
    if ((document.getElementById("disedssu")) &&
        (document.getElementById("disedssu").value == "1")){
      obj.addColumn("Location","String",2,2,"left","","7",100)
      obj.addColumn("Exp. Ward","String",22,22,"left","","",35)
    } else {
      obj.addColumn("Location","String",2,2,"left","","2",100)
    }

    obj.addColumn(document.HiddenFields.emvistrm.value,"String",60,60,"left","","",100)
    if ((document.getElementById("disedssu")) &&
       (document.getElementById("disedssu").value == "1")) {
       if (document.getElementById("dswahlth")) {
          TableSortOrder="3,1|9,1|"    // Next and Expected ward
       } else {
          TableSortOrder="3,1|8,1|"
       }
    } else {
      TableSortOrder="3,1|"
    }
    OrderColumn=3;
    AscDsc=1;
    lastOrderColumn=OrderColumn;
    break;
   }
   case 3: {
    obj.addColumn("ATS","Image",5,5,"center","","",50)

    if (!document.getElementById("dswahlth")) {
    obj.addColumn("Patient","ImageText",39,39,"left","PatientFolder","1",180,37)
      obj.addColumn("Complaint/Diagnosis","String",57,57,"left","","",200)
    } else {
    obj.addColumn("Patient","ImageText",69,69,"left","PatientFolder","1",250,37)
      obj.addColumn("Complaint/Diagnosis","String",70,70,"left","","",150)
    }

    obj.addColumn("Nur","String",36,36,"left","","",100)

    if (document.getElementById("dswahlth")) {
      obj.addColumn("Senior Doctor","String",68,68,"left","","",100)
      obj.addColumn("Treating Doctor","String",35,35,"left","","",100)
    } else {
      obj.addColumn("Doc","String",35,35,"left","","",100)
    }

    obj.addColumn("LOS","Minutes",31,31,"left","","",50)
    obj.addColumn("Arr","Time",7,7,"center","","",50)

    //T0836547 - No link to change location
    if ((document.getElementById("disedssu")) &&
        (document.getElementById("disedssu").value == "1")){
      obj.addColumn("Location","String",2,2,"left","","7",100)
      obj.addColumn("Exp. Ward","String",22,22,"left","","",35)
    } else {
      obj.addColumn("Location","String",2,2,"left","","2",100)
    }

    obj.addColumn(document.HiddenFields.emvistrm.value,"String",60,60,"left","","",100)
    if ((document.getElementById("disedssu")) &&
       (document.getElementById("disedssu").value == "1")) {
       if (document.getElementById("dswahlth")) {
          TableSortOrder="3,1|9,1|"    // Next and Expected ward
       } else {
          TableSortOrder="3,1|8,1|"
       }
    } else {
      TableSortOrder="3,1|"
    }
    OrderColumn=3;
    AscDsc=1;
    lastOrderColumn=OrderColumn;
    break;
   }
   case 4: {
    obj.addColumn("ATS","Image",5,5,"center","","",50)
    obj.addColumn("Next","Number",62,62,"left","","",50)
    if (!document.getElementById("dswahlth")) {
    obj.addColumn("Patient","ImageText",39,39,"left","PatientFolder","1",180,37)
      obj.addColumn("Complaint/Diagnosis","String",57,57,"left","","",200)
    } else {
    obj.addColumn("Patient","ImageText",69,69,"left","PatientFolder","1",250,37)
      obj.addColumn("Complaint/Diagnosis","String",70,70,"left","","",150)
    }

    if (document.getElementById("dswahlth")) {
      obj.addColumn("Senior Doctor","String",68,68,"left","","",100)
      obj.addColumn("Treating Doctor","String",35,35,"left","","",100)
    } else {
      obj.addColumn("Doc","String",35,35,"left","","",100)
    }

    obj.addColumn("Nur","String",36,36,"left","","",100)


    obj.addColumn("LOS","Minutes",31,31,"left","","",50)
    obj.addColumn("Arr","Time",7,7,"center","","",50)

    //T0836547 - No link to change location
    if ((document.getElementById("disedssu")) &&
        (document.getElementById("disedssu").value == "1")){
      obj.addColumn("Location","String",2,2,"left","","7",100)
      obj.addColumn("Exp. Ward","String",22,22,"left","","",35)
    } else {
      obj.addColumn("Location","String",2,2,"left","","2",100)
    }

    obj.addColumn(document.HiddenFields.d_emviuc28.value,"String",44,44,"left","","",90)
    obj.addColumn("Bed Request","String",74,74,"left","","",90)
    obj.addColumn("Exp. Discharge Details","String",75,75,"left","","",110)
    obj.addColumn(document.HiddenFields.emvistrm.value,"String",60,60,"left","","",100)
    if ((document.getElementById("disedssu")) &&
       (document.getElementById("disedssu").value == "1")) {
       if (document.getElementById("dswahlth")) {
          TableSortOrder="1,1|10,1|"    // Next and Expected ward
       } else {
          TableSortOrder="1,1|9,1|"
       }
    }
    OrderColumn=1;
    AscDsc=1;
    lastOrderColumn=OrderColumn;
    break;
   }
  }

  ShowWaitScreen();
  window.setTimeout(function() {
    AddTableRows()
    TableOutput(OrderColumn,AscDsc)
    if (initTblTimeout != null) {
      window.clearTimeout(initTblTimeout);
    }
    initTblTimeout = window.setTimeout(function() { AJAXRefresh() },RefreshTime * 1000);
    startDate = new Date();
    endTime = startDate.getTime();
    pb=document.getElementById("ProgressBar")
    pb.style.backgroundImage='url()';
    pb.innerHTML='Load Time: '+((endTime-startTime)/1000)+' sec';
    HideWaitScreen();
  },50);
}
function StartProgressBar() {
  startDate = new Date();
  startTime = startDate.getTime();
  pb=document.getElementById("ProgressBar")
  pb.innerHTML='Loading Page ....';
  pb.style.backgroundImage='url(../images/ProgressBar.gif)';
}
function AJAXRefresh() {
  StartProgressBar();
  if (ajaxRefreshTimeout != null) {
    window.clearTimeout(ajaxRefreshTimeout);
  }
  ajaxRefreshTimeout = window.setTimeout(function() {RemPatientRows();GetPatientRows();initTable();},100);
}
function PatientAlerts() {
  linkurl="patweb98.pbl?reportno=1&template=003" +
          "&urnumber=" + document.HiddenFields.alrturno.value +
          "&admissno=" + document.HiddenFields.alrtadmn.value
  location.href=linkurl
}
function AddClinNote() {

  if (document.HiddenFields.acnestat.value!="1") {
    SetCookie("acnEmergencyDischargeCookie","1");
  }

  linkurl = "../cgi-bin/cliweb06.pbl?reportno=06&template=010" +
         "&admissno=" + document.HiddenFields.alrtadmn.value.replace(/ /g,"+") +
         "&urnumber=" + document.HiddenFields.alrturno.value.replace(/ /g,"+")
  Left=(document.body.clientWidth-900)/2
  DFrameLink(linkurl,0,Left,900,400);
}

//
// Bed Request functions
//
function SetDateDDMMMYYYY(YYYYMMDD){
  if(!Number(YYYYMMDD)||arguments[0].length!=8){
     return "";
  }
  day = YYYYMMDD.substr(6,2);
  month = GetMonthName(YYYYMMDD.substr(4,2),10);
  year = YYYYMMDD.substr(0,4);

  return day+" "+month+" "+year;
}
function Alloc(vis,dat,tim,ur) {
  linkurl="patweb10.pbl?reportno=08&template=003" +
          "&urnumber=" + ur.replace(/ /g,"+") +
          "&admissno=" + vis.replace(/ /g,"+") +
          "&pmbrq001=" + vis.replace(/ /g,"+") +
          "&pmbrq002=" + SetDateDDMMMYYYY(dat).replace(/ /g,"+") +
          "&pmbrq003=" + tim.replace(/ /g,"+")
  Left=(document.body.clientWidth-950)/2
  DFrameLink(linkurl,50,Left,950,500)
}
function ViewNotes(vis,dat,tim,ur) {
  linkurl="patweb10.pbl?reportno=08&template=004" +
          "&urnumber=" + ur.replace(/ /g,"+") +
          "&admissno=" + vis.replace(/ /g,"+") +
          "&pmbrq001=" + vis.replace(/ /g,"+") +
          "&pmbrq002=" + SetDateDDMMMYYYY(dat).replace(/ /g,"+") +
          "&pmbrq003=" + tim.replace(/ /g,"+")
  Left=(document.body.clientWidth-750)/2
  DFrameLink(linkurl,50,Left,750,200)
}
function ProcessMenuOptions() {
  ProcessDefViews();
  ProcessViewTypes();
}
function ProcessDefViews() {
  if(!document.getElementById("deftview")) { // Default view not definded
    return; 
  }

  if(isWhitespace(document.getElementById("deftview").value)) {
    return;                                 // No default view supplied
  }

  ExpireCookiePath("EMRWEB0101032VT");      // View Type
  SetCookie("EMRWEB0101032VT",document.getElementById("deftview").value);
  ExpireCookiePath("EMRWEB0101032RT");      // Refresh Time
  ExpireCookiePath("EMRWEB0101032FS");      // Single Stream Filter
  ExpireCookiePath("EMRWEB0101032MFS");     // Mult Stream Filter
  ExpireCookiePath("EMRWEB0101032SHOWVT");  //Show View Type
}
function ProcessViewTypes() {
  if(!document.getElementById("slctvtyp")) { // Select view type not definded
    return;
  }

  if(isWhitespace(document.getElementById("slctvtyp").value)) {
    return;                                 // No select view type supplied
  }

  SetCookie("EMRWEB0101032SHOWVT",document.getElementById("slctvtyp").value);
}
function RemoveViewTypes() {
  RV=GetCookieData("EMRWEB0101032SHOWVT");
  if(RV=="unknown") {
    return;
  }

  View1=RV.substr(0,1);
  View2=RV.substr(1,1);
  View3=RV.substr(2,1);
  View4=RV.substr(3,1);
  View5=RV.substr(4,1);

  var tv=document.getElementById("TableView")
  for(var i=0;i<tv.length;i++) {
     remove=false;
     if(tv.options[i].value.substr(0,1)=="0" && View1 != "1") {
       remove=true;
     }
     if(tv.options[i].value.substr(0,1)=="1" && View2 != "1") {
       remove=true;
     }
     if(tv.options[i].value.substr(0,1)=="2" && View3 != "1") {
       remove=true;
     }
     if(tv.options[i].value.substr(0,1)=="3" && View4 != "1") {
       remove=true;
     }
     if(tv.options[i].value.substr(0,1)=="4" && View5 != "1") {
       remove=true;
     }
     if(remove) {
        tv.remove(i);
        i--;
     }
  }
}
function openStream(urnumber,admissno) {
  linkURL="emrweb02.pbl?reportno=1&template=212&urnumber=" +
          urnumber + "&admissno=" + admissno;
  DFrameLink(linkURL,57,465,300,106);
}
