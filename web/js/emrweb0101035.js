//jsVersion  : V11.03.00
function InitList() {
  var p = document.ListForm;

  // Select previously saved Refresh Time
  refreshTime = GetCookieData("EMRWEB0101035RT");

  if (isNaN(refreshTime))
    refreshTime = 180;

  refreshTime = parseInt(refreshTime,10);

  el = p.ddlRefreshTime;
  for (var i=0; i < el.options.length; i++) {
    if (el.options[i].value == refreshTime)
      el.selectedIndex=i;
  }


  // Select previously saved ED Site
  SiteCode = GetCookieData("EMRWEB0101035ES");
  if (SiteCode == "unknown")
    SiteCode = "";

  el = p.ddlSite;
  for (var i=0; i < el.options.length; i++) {
    if (el.options[i].value == SiteCode)
      el.selectedIndex=i;
  }


  // Load previously saved Clinician
  ClinCode = GetCookieData("EMRWEB0101035CL");
  if (ClinCode == "unknown")
    ClinCode = "";

  p.clincian.value = ClinCode;
  validateCode(3,p.clincian,p.name_clincian);

  var DataRequestURL = "emrweb01.pbl?reportno=1&template=36&filtdoct=" + 
                       p.clincian.value + "&filtsite=" +
                       p.ddlSite.options[p.ddlSite.selectedIndex].value;

  // Now we set up the table
  document.title = "ETS Current Patients List";
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

  obj.addColumn("ATS","Image",5,5,"center","","",40)
  if (!document.getElementById("dswahlth")) {
    obj.addColumn("Patient","ImageText",39,39,"left","PatientFolder","1",180,37)
    obj.addColumn("Complaint/Diagnosis","String",70,70,"left","","",200)
  }
  else {
    obj.addColumn("Patient","ImageText",69,69,"left","PatientFolder","1",250,37)
    obj.addColumn("Complaint/Diagnosis","String",70,70,"left","","",150)
  }
  obj.addColumn("Hospital","String",77,77,"left","","",100)
  obj.addColumn("ED Site","String",79,79,"left","","",100)
  obj.addColumn("Senior Doctor","String",68,68,"left","","",100)
  obj.addColumn("Treating Doctor","String",35,35,"left","","",100)
  obj.addColumn("Nurse","String",36,36,"left","","",100)
  obj.addColumn("LOS","Minutes",31,31,"left","","",40)
  obj.addColumn("Arr","String",80,80,"center","","",30)

  OrderColumn = 1;
  AscDsc = 1;
  lastOrderColumn = OrderColumn;
   
  ShowWaitScreen();
  window.setTimeout(function() {
    AddTableRows();
    TableOutput(OrderColumn,AscDsc);

    if (initTblTimeout != null) {
      window.clearTimeout(initTblTimeout);
    }
    initTblTimeout = window.setTimeout(function() {
                       AJAXRefresh(DataRequestURL); }, (refreshTime * 1000));

    startDate = new Date();
    endTime = startDate.getTime();
    pb = document.getElementById("ProgressBar");
    pb.style.backgroundImage = 'url()';
    pb.innerHTML = 'Load Time: ' + ((endTime - startTime)/1000) + ' sec';
    HideWaitScreen();
  },50);
}

//
// The following function has been overridden from EmergencyTableFull.js to
// incorporate Telehealth Service data.
//
function TableBody() {
 filteredRows=0;
 RowClass="TableRowEven"

 for (var i = 0; i < obj.rows.length; i++) {
  if (TableFilter(obj.rows[i])){
   filteredRows++;
   if (RowClass=="TableRowEven") { RowClass="TableRowOdd" }
   else                          { RowClass="TableRowEven" }
   TableString[TableString.length] = "<tr class=" + RowClass + ">" ;

   for (var j = 0; j < obj.columns.length; j++) {
     if (CompatibilityMode) {
       TableString[TableString.length] = "<td align=" + obj.columns[j][4];
     } else {
       TableString[TableString.length] = "<td style='padding:0px 5px' align=" +
                                         obj.columns[j][4];
     }

     TableString[TableString.length] = " width=" + obj.columns[j][7] + ">";
     LinkColumn = obj.columns[j][6];
     LinkFlag = 0
     ImgString = obj.columns[j][5];
     if (LinkColumn != "") {
       LinkHref = obj.columns[j][6];
       if (LinkHref != ""){ 
           if(LinkHref=="1") {
             TableString[TableString.length] = "<a href='javascript:SelectPatient(\"" +
               obj.rows[i][3] + "\",\"" +
               obj.rows[i][4] + "\",\"" +
               obj.rows[i][82] + "\",\"" +  // Telehealth Site Code
               obj.rows[i][83] + "\",\"" +  // Telehealth Hospital
               obj.rows[i][84] + "\",\"" +  // Telehealth Location
               obj.rows[i][81] +            // Telehealth Record Counter
               "\");'>" ; }
           else if(LinkHref=="2") { 
             TableString[TableString.length] = "<a href='javascript:OpenLocation(\"" +
               obj.rows[i][3] + "\",\"" +
               obj.rows[i][4] +
               "\");'>" ; }
           else if(LinkHref=="3") {
             TableString[TableString.length] = "<a href='javascript:TriagePatient(\"" +
               obj.rows[i][3] + "\",\"" +
               obj.rows[i][4] + "\",\"" +
               obj.rows[i][5] +
               "\");'>" ; }
           else if(LinkHref=="4") {
             TableString[TableString.length] = "<a href='javascript:SelectPatient(\"" +
               obj.rows[i][3] + "\",\"" +
               obj.rows[i][4] + "\",\"" +
               obj.rows[i][82] + "\",\"" +  // Telehealth Site Code
               obj.rows[i][83] + "\",\"" +  // Telehealth Hospital
               obj.rows[i][84] + "\",\"" +  // Telehealth Location
               obj.rows[i][81] + "\",\"" +  // Telehealth Record Counter
               obj.rows[i][21] +            // Patient System Admission Number
               "\");'>" ; }
           else if(LinkHref=="5") {
             if (!isWhitespace(obj.rows[i][33])){
               TableString[TableString.length] =
               "<a href='javascript:ViewTreatingDoctorFrame(\"" +
               obj.rows[i][33] +
               "\");'>" ;
             }
           }
           else if(LinkHref=="6") {
             if (!isWhitespace(obj.rows[i][69])){
               TableString[TableString.length] =
               "<a href='javascript:ViewSeniorDoctorFrame(\"" +
               obj.rows[i][69] +
               "\");'>" ;
             }
           }

          LinkFlag = 1 }
     }
     switch(obj.columns[j][1]) {
       case "Date" :  
         FormatIcon(obj.rows[i][4]);
         TableString[TableString.length] = FormatDate(obj.rows[i][obj.columns[j][2]]);
         break;
       case "DateTime" :  
         FormatIcon(obj.rows[i][4]);
         TableString[TableString.length] = FormatDateTime(obj.rows[i][obj.columns[j][2]]);
         break;
       case "Time" :  
         FormatIcon(obj.rows[i][4]);
         TableString[TableString.length] = FormatTime(obj.rows[i][obj.columns[j][2]]);
         break;
       case "Minutes" :  
         FormatIcon(obj.rows[i][4]);
         TableString[TableString.length] = FormatMinutes(obj.rows[i][obj.columns[j][2]]);
         break;
       case "Name" :  
         FormatIcon(obj.rows[i][4]);
         TableString[TableString.length] = FormatName(obj.rows[i][obj.columns[j][2]]);
         break;
       case "Graph":  
         TableString[TableString.length] = FormatGraph(obj.rows[i][obj.columns[j][2]],obj.columns[j][5]);
         break;
       case "Image":  
         ClassString = TriageTime(obj.rows[i][obj.columns[j][2]],
                                  obj.rows[i][12],obj.rows[i][7],
                                  obj.rows[i][25],obj.rows[i][26],
                                  obj.rows[i][73]);
         tri=parseInt(obj.rows[i][obj.columns[j][2]]);
         if (tri==0) tri="?";
         oStr="<span class="+ClassString+">"+tri+"</span>"
         TableString[TableString.length] = oStr;
         break;
       case "ImageText":
         if (obj.columns[j][5]=="") {
           ImgString=obj.rows[i][obj.column[j][8]]; 
         }
         else {
           ImgString=obj.columns[j][5] +
                       obj.rows[i][obj.columns[j][8]] + ".gif";
         }
         FormatIcon(obj.rows[i][4]);
         TableString[TableString.length] = (obj.rows[i][obj.columns[j][2]]);
         break; 
       case "ImageOld":
         if (obj.columns[j][5] == "") {
           ImageString=t.rows[i][t.columns[j][2]];
         }
         else {
           ImageString=obj.columns[j][5] + obj.rows[i][obj.columns[j][2]] + ".gif"
         }
         ImageString=ImageString.replace(/ /g,"");
         TableString[TableString.length] = FormatImage(ImageString);
         break;
       default    :   
         FormatIcon(obj.rows[i][4]);
         TableString[TableString.length] = obj.rows[i][obj.columns[j][2]];
         TableString[TableString.length] = "&nbsp;"; 
         if ( LinkFlag ) { TableString[TableString.length] = "</a>"; }
         break;
     }
     obj.rows[i][obj.columns[j][2]] 
     TableString[TableString.length] = "</td>" ;
     }
   TableString[TableString.length] = "</tr>" ;
   }
  }
}

function SelectPatient(urnumber, admissno, site, hosp, locatn, counter) {
  if (clickedOnPatient == true) {
    return;
  }
  if (ValidOG()) {  // validate Occupational Group
    if (!isWhitespace(hosp)) {
      if (!ChangeHospSite(hosp,site)) {
        alert("Failed to change user Hospital and Site");
        return;
      }
    }
    else {
      if (!ChangeSite(site)) {
        alert("Failed to change user Site");
        return;
      }
    }

    if (ChangeLogin()) {
      // reload top frame
      getTop().menu.location.href = getTop().menu.location.href;
    }

    clickedOnPatient = true;
    var sURL = "emrweb02.pbl?reportno=1&template=013&urnumber=" + urnumber +
               "&admissno=" + admissno + "&telecntr=" + counter +
               "&telesite=" + site + "&telelocn=" + locatn;

    top.content.location.href = sURL.replace(/ /g,"+");

    window.setTimeout(function(){ clickedOnPatient=false }, 2000);
  }
}

function PatientAlerts(hosp,site) {
  if (ValidOG()) {  // validate Occupational Group
    if (!isWhitespace(hosp)) {
      if (!ChangeHospSite(hosp,site)) {
        alert("Failed to change user Hospital and Site");
        return;
      }
    }
    else {
      if (!ChangeSite(site)) {
        alert("Failed to change user Site");
        return;
      }
    }

    if (ChangeLogin()) {
      // reload top frame
      getTop().menu.location.href = getTop().menu.location.href;
    }

    linkurl="patweb98.pbl?reportno=1&template=003" +
            "&urnumber=" + document.HiddenFields.alrturno.value +
            "&admissno=" + document.HiddenFields.alrtadmn.value
    location.href=linkurl
  }
}

function AddClinNote(hosp, site) {

  if (ValidOG()) {  // validate Occupational Group
    if (!isWhitespace(hosp)) {
      if (!ChangeHospSite(hosp,site)) {
        alert("Failed to change user Hospital and Site");
        return;
      }
    }
    else {
      if (!ChangeSite(site)) {
        alert("Failed to change user Site");
        return;
      }
    }

    if (ChangeLogin()) {
      // reload top frame
      getTop().menu.location.href = getTop().menu.location.href;
    }

    if (document.HiddenFields.acnestat.value != "1") {
      SetCookie("acnEmergencyDischargeCookie","1");
    }

    linkurl = "../cgi-bin/cliweb06.pbl?reportno=06&template=010" +
      "&admissno=" + document.HiddenFields.alrtadmn.value.replace(/ /g,"+") +
      "&urnumber=" + document.HiddenFields.alrturno.value.replace(/ /g,"+");

    Left = (document.body.clientWidth-900)/2;
    DFrameLink(linkurl,0,Left,900,400);
  }
}

function ChangeSite(SiteCode) {
  if (!SiteCode || isWhitespace(SiteCode))
    return false;

  var theURL = "websec01.pbl";
  var p = document.ChangeSiteForm;
  
  p.wbsec010.value = SiteCode;
  var postStr = AJAXPostString(p);

  xmlHttp = createHttpObject();
  xmlHttp.open("POST", theURL, false);
  xmlHttp.setRequestHeader("Content-Type","application/x-www-form-urlencoded;");
  xmlHttp.send(postStr);

  if (xmlHttp.status=="200") {
    return true;
  }
  else {
    return false;
  }
}

function ChangeHospSite(HospCode, SiteCode) {
  if (!HospCode || !SiteCode ||
      isWhitespace(HospCode) || isWhitespace(SiteCode))
    return false;

  var theURL = "websec01.pbl";
  var p = document.ChangeHospForm;
  
  p.wbsec031.value = HospCode;
  p.wbsec010.value = SiteCode;
  var postStr = AJAXPostString(p);

  xmlHttp = createHttpObject();
  xmlHttp.open("POST", theURL, false);
  xmlHttp.setRequestHeader("Content-Type","application/x-www-form-urlencoded;");
  xmlHttp.send(postStr);

  if (xmlHttp.status=="200") {
    return true;
  }
  else {
    return false;
  }
}

function ChangeLogin() {
  var theURL = "websec01.pbl";
  var p = document.ChangeLoginForm;

  var postStr = AJAXPostString(p);

  xmlHttp = createHttpObject();
  xmlHttp.open("POST", theURL, false);
  xmlHttp.setRequestHeader("Content-Type","application/x-www-form-urlencoded;");
  xmlHttp.send(postStr);

  if (xmlHttp.status=="200") {
    return true;
  }
  else {
    return false;
  }
}

