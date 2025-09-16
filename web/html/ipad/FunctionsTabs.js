//jsVersion  : V11.03.02
//
//------------------------------------------------------------------------
// V11.03.02 25/01/2023  Don Nguyen    TSK 0893674
//           Added new function to launch MedChart into a non-patient screen
//           (e.g. 'Monitor Clinical Reviews'); added LaunchMedchartNonPatient()
// V11.03.01 13/01/2023 Don Nguyen     TSK 0928137
//           Fixed code for processing MedChart Allergies to cater for the
//           updated JSON Allergies schema returned in V10 of MedchartServices.
//           Fixed error when selecting a MedChart Allergy from the list of
//           Alerts & Allergies.
// V11.00.01 01/10/2020 Don Nguyen     TSK 0897964
//           Modified ResultsInitTable1(), PatientMoreResults()
//           and NoteShowTable() to work with apostrophes.
// V10.14.01 08.07.2019 B.G.Ackland 
//           Pass Emergency Location (monEmr) in calls to bedmon01.php 
// V10.13.01 23.07.2018 Peter Vela  TSK 0852218
//           Validated special characters in SubmitNote()
// V10.12.01 08.05.2018 B.G.Ackland TSK 0856695
//           Fix DocumentView Link in LinkDoc() Function
// V10.10.02 09.05.2017 B.G.Ackland TSK 0834731 
//           Change Link to Philips Clinical Monitoring to enable Multiple Philips Systems
// V10.10.01 07.03.2017 B.G.Ackland               
//           Spelling Anaesthetist
// V10.08.05 22.11.2016 B.G.Ackland               
//           Spelling All Visit to All Visits
// V10.08.05 14.11.2016 Ebon Clements TSK 0322699
//           Added mandatory disgnosis test to SubmitDiagnosis
// V10.08.03 24.10.2016 Ebon Clements TSK 0320084
//           Added ShowAdmittingDoctor()
// V10.08.02 26.07.2016 Ebon Clements TSK 0807990
//           Sort alerts by reverse date AlertsInitTable()
// V10.08.01 25.05.2016 B.G.Ackland CAR
//                      Fix Anae Name Display in Theatre History (Req OPRWEB06 v10.08.04)
// V10.07.04 13.11.2015 B.G.Ackland CAR
//                      Fix Document Type Filter
// V10.07.03 12.11.2015 B.G.Ackland CAR
//                      Fix Change Launch of MedChart to cater for Safari on Mac
// V10.07.02 11.11.2015 B.G.Ackland CAR
//                      Change Launch of MedChart to cater for Safari on Mac
// V10.07.01 15.10.2015 B.G.Ackland CAR
//                      Change onkeyup to oninput for IOS bluetooth keyboard support
//  Version 10.06.02 24.07.2015 Davin       CAR 308063
//                   Check notetype security against userid server level
//                   security (webstlev) in AddNote()
//  Version 10.06.01 16.03.2015 B.G.Ackland CAR 307632
//                   Remove PatientID from Link to Clinical Monitor View
//                   Align Clinical Document Filter Buttons
//  Version 10.05.02 17.02.2015 B.G.Ackland CAR 307632
//                   Change for Admin/Clinical Documents
//  Version 10.05.01 09.02.2015 B.G.Ackland CAR 307632
//                   Added options for Admin/Clinical Documents
//                   Added New Philips Monitor Access.
//  Version 10.04.04 03.07.2014 B.G.Ackland CAR 289383
//                   Fix DIV/IFRAME for MedChart launch
//  Version 10.04.03 18.06.2014 B.G.Ackland CAR 289383
//                   Fix DIV/IFRAME for MedChart launch
//  Version 10.04.02 18.06.2014 B.G.Ackland CAR 289383
//                   Set DIV hieght to 768px in openMedchartFrame
//  Version 10.04.01 13.06.2014 B.G.Ackland CAR 289383
//                   Ignore inactive Allergies from MedChart
//  Version 10.03.13 26.02.2014 B.G.Ackland CAR 289383
//                   Collapse Orders Wrap Description to aviod horizonal scrolling
//  Version 10.03.12 21.02.2014 B.G.Ackland CAR 289383
//                   Collapse Orders into a Single Row with Expand Option
//  Version 10.03.11 25.09.2013 B.G.Ackland CAR 289383
//                   Change Outpatient Summary to Template 31 for consistency
//  Version 10.03.10 04.09.2013 B.G.Ackland CAR 289383
//                   Implement Clinical Summary Based on Visit Type
//  Version 10.03.09 06.08.2013 B.G.Ackland CAR 289383
//                   New AJAXPostString2 to fix post encoding
//  Version 10.03.08 B.G.Ackland CAR 288223
//                   Fix Link to Alerts for V10.03 changes
//  Version 10.03.07 B.G.Ackland CAR 288223
//                   Reset Select to Start and not End of List
//  Version 10.03.06 B.G.Ackland CAR 288223
//                   Alternative Patient Visit List Configuration
//  Version 10.03.05 B.G.Ackland CAR TESTING
//                   Error handling for Clinical Summary View
//  Version 10.03.04 B.G.Ackland CAR 284098
//                   Fix Theatre List and Case Summary View
//  Version 10.03.03 B.G.Ackland
//                   Update for Clinical Summary View
//                   Update for Clinical Summary View
//                   Observation Grid View
//                   Add Health Issues (Problems)
//  Version 10.03.02 Saroeun Soeur CAR 279968 
//                   changed LinkDoc to use urllink1 for pdf and html
//  Version 10.03.01 B.G.Ackland
//------------------------------------------------------------------------
var OS;
function openResultsGrid() {
 url="cliweb10.pbl?reportno=6&template=7"+
     '&urnumber='+PatientURN.replace(/ /g,"+") +
     '&admissno='+PatientVIS.replace(/ /g,"+")
 title = 'Result Summary';
 openDocument(CGIPath+url,title);
}
//
// Community/Allied Health pages
//
function mapsLink(el) {
  var addressLine=(el.innerText)
  var url="http://www.maps.google.com?q="+addressLine+"&output=embed";
  openDocument(url,"Google Maps");
}
//-----------------------------------------------------------------------
// Medical Record Tab Functions
// Version 10.01.01 B.G.Ackland
//                  Revised javascript includes for menu configuration
//-----------------------------------------------------------------------
// Tab Link to Work In Progress
// This is to allow functions to be added to users menus in anticipation
// of features being available in the coming release.  Allow users to 
// understand that components of the system are yet to be configured.
//-----------------------------------------------------------------------
function WIP() {
  alertify.alert("WIP: Option Not Yet Available.");
}
//------------------------------------------------------------
// Tab Functions Patient Demographics
//------------------------------------------------------------
function ShowPatientAddress() {
 wtitle="<span class=AddItem></span>Address and Contact";
 wscript="";
 wurl="patweb98.pbl?reportno=1&template=184";
 ShowScreen(wtitle,wscript,wurl);
}
//------------------------------------------------------------
// Tab Functions Patient Problems
//------------------------------------------------------------
function ShowPatientProblems() {
  ShowScreen(ProblemTitle(),"ProblemList()","patweb03.pbl?reportno=01&template=025");
}
function ProblemTitle() {
    wtitle="<span class=AddItem onclick='addProblem();'></span> Health Issues/Problems"+
           "<span class='stdButton RightAlign' onclick='addProblem();'>Add</span>";
    return wtitle;
}
function openProblem(urnumber,problemn,admissno) {
  url="patweb03.pbl?reportno=01&template=027"+
      "&urnumber=" + urnumber.replace(/ /g,"+") +
      "&problemn=" + problemn.replace(/ /g,"+") +
      "&admissno=" + admissno.replace(/ /g,"+")
  title = "Update Patient Problem";
  openDocumentNonZoomable(CGIPath+url,title);
}
function addProblem() {
  url="patweb03.pbl?reportno=01&template=026"+
      "&urnumber="+PatientURN.replace(/ /g,"+")+
      "&admissno="+PatientVIS.replace(/ /g,"+");
  title = "Add Patient Problem";
  openDocumentNonZoomable(CGIPath+url,title);
}
function ProblemList() {
 t = new Table(PatientURN);
 AddProblems();
 SortOrderBy=1;
 t.rows.sort(RevStringSort);
 OS='<ul class=ListRes>'
 for(var i = 0; i < t.rows.length; i++) {
  ProblemDate=t.rows[i][1]
  ProblemDesc=t.rows[i][2].replace(/\s*$/,"");
  ProblemType=t.rows[i][5].replace(/\s*$/,"");
  ProblemStatus=t.rows[i][7].replace(/\s*$/,"");
  ProblemCode=t.rows[i][6].replace(/\s*$/,"");
  ProblemLink=t.rows[i][0].replace(/\s*$/,"").replace(/javascript:UpdateItem/i,"");
  EnteredBy=t.rows[i][13].replace(/\s*$/,"");
  if (ProblemDesc=="") ProblemDesc=ProblemCode
  if (ProblemDesc=="") ProblemDesc=ProblemType
  if (ProblemDesc=="") ProblemDesc="not recorded"
  OS+='<li class=ItemRes onclick="openProblem'+ProblemLink+'">'+ ProblemDesc+"<br>"+
               '<span class=subscriptLeft> '+ProblemType+'</span>' +
               '<span class=subscriptRight>'+ ProblemStatus+'</span><br>'+
               '<span class=subscriptLeft> '+EnteredBy+'</span><br>' +
               '<span class=ntTimeFrame> '+FormatCommentAge(ProblemDate)+'</span>' +
               '<span class=ntWhen> '+FormatDate(ProblemDate)+'</span>' +
               '</li>'
 }
 OS+='</ul>'
 ListLocation.innerHTML = OS;

 if (t.rows.length == 0) {
   ListLocation.innerHTML += "<ul class=ListRes>" +
                             "<li class=ItemRes style='text-align:center;'>" +
                             "No Health Issues or Problems Recorded for this Patient"+
                             "</li><li class=ItemRes></li></ul>"
 }
}
//------------------------------------------------------------
// Tab Functions Patient Clinical Summary
//------------------------------------------------------------
function ShowClinicalSummary() {
  var MenuType = document.PatientLinks.menutype.value.substr(0,1);
  var VisitType = document.PatientLinks.visittyp.value;
  switch (MenuType) {
    case "1": /* Emergency */
      ShowScreen(EmergencyTitle(),"","emrweb02.pbl?reportno=01&template=401");
      break;
    case "2": /* Outpatient */
      ShowScreen(AppointmentTitle(),"","outweb02.pbl?reportno=03&template=031");
      break;
    case "3": /* Inpatient */
      ShowScreen(SummaryTitle(),"","patweb98.pbl?reportno=04&template=015");
      break;
    default:
    switch (VisitType) {
      case "9": /* Referral*/
        ShowReferralSummary();
        break;
      default:
        ShowPatientAddress();
    }
  }
}
function SummaryTitle() {
  wtitle="<span class=AddItem></span> Clinical Summary"
  return wtitle;
}
function AppointmentTitle() {
  wtitle="<span class=AddItem></span> Appointment Summary"
  return wtitle;
}
//------------------------------------------------------------
// Tab Functions Diagnostic Results
//------------------------------------------------------------
function ShowPatientResults() {
 wtitle=ClinicalResultsTitle();
 wscript="ResultsInitTable1('true')";
 wurl="cliweb03.pbl?reportno=1&template=708&viewtype=1&reslnkyr=ally&norecord=50";
 ShowScreen(wtitle,wscript,wurl);
}
function AddOrder() {
  url="patweb98.pbl?reportno=01&template=209"+
      "&urnumber="+PatientURN.replace(/ /g,"+")+
      "&admissno="+PatientVIS.replace(/ /g,"+");
  title = "Clinical Orders";
  openDocumentNonZoomable(CGIPath+url,title);
}
function ClinicalResultsTitle() {
   if(clinicalResultsViewOnly != true) {
    wtitle="<span class=AddItem onclick='AddOrder();'></span> Clinical Results"+
           "<span class='stdButton RightAlign' onclick='AddOrder();'>Request</span>";
     if(clinicalResultsGridView) {
       wtitle+="<span class='stdButton RightAlign' onclick='openResultsGrid();'>Grid</span>";
     }
   } else {
     wtitle="<span class=AddItem></span> Clinical Results"
     if(clinicalResultsGridView) {
       wtitle+="<span class='stdButton RightAlign' onclick='openResultsGrid();'>Grid</span>";
     }
  }
  return wtitle;
}
function ResultsInitTable1(collapseScheduled) {
 t = new Table(PatientURN);
 AddResults();
 SortOrderBy=1;
 t.rows.sort(RevStringSort);
 var OrderCount=0;
 var OrderTests="";
 var OS='';
 var Orders='';
 for (var i = 0; i < t.rows.length; i++) {
   resText=t.rows[i][2].replace(/ *$/,"");

   if (t.rows[i][3].replace(/ *$/,"")=="2"&&collapseScheduled=='true') {
     OrderCount++
     OrderTests+=resText+", ";
   } else {
     OS += "<li class=ItemRes onclick=\"LinkRes('" + t.rows[i][0] + "','" +
           t.rows[i][6] + "','" + t.rows[i][7] + "','" +
           resText.replace(/'/g, "\\'") + "','" + t.rows[i][5] + "');\">" +
           "<span class='showResultIcon" + t.rows[i][6].substr(0,2) +
           "' style='float:left;' ></span>" +
           resText +
           "<span style='float:right' class='showResultStatus" +
           t.rows[i][3].replace(/ *$/,"") + "' ></span><br />" +
           "<span class=subscriptLeft >Status : " + t.rows[i][5] + "</span>" +
           "<span class='showResultReadStatus" +
           t.rows[i][8].replace(/ *$/,"") + "' style='float:right'></span><br>"+
           "<span class=ntTimeframe>"+FormatCommentAge(t.rows[i][1])+"</span>" +
           "<span class=ntWhen>" + FormatDateTime(t.rows[i][1]) + "</span>" +
           "</li>";
   }
 }
 if (OrderCount>0) {
   OS="<ul class=ListRes>"+
      "<li class=ItemRes style='white-space:normal' onclick=\"ResultsInitTable1('false');\">"+
           "<span class='showResultIconZZ' style='float:left;' ></span>"+
            OrderTests.replace(/, $/,"")+"</span>"+
           "<span style='float:right;' class='showResultStatus2'></span><br>" +
           "<span class=subscriptLeft >Scheduled  : " + OrderCount + "</span><br>"+
           "<span class=ntTimeframe>Touch to View</span>"  +
           "<span class=ntWhen>Orders</span>"  +
           "</li>"+OS+'</ul>';
 } else {
   OS='<ul class=ListRes>'+OS+'</ul>';
 }
 ListLocation.innerHTML = OS;
 if (lastrow==1) {
   ListLocation.innerHTML += "<ul class=ListRes>" +
                     "<li class=ListMore onclick=PatientMoreResults('"+ListMoreLink+"',this);>"+
                     "Show More Results</li></ul><br><br>"
 }
 else {
   if (t.rows.length == 0) {
     ListLocation.innerHTML += "<ul class=ListRes>" +
                               "<li class=ItemRes style='text-align:center;'>" + 
                               "No Clinical Results Recorded for this Patient</li>"+
                               "<li class=ItemRes></li></ul>"
   }
   else {
     if (t.rows.length != -1) {
       ListLocation.innerHTML += "<ul class=ListRes>" +
                                 "<li class=ListMore>End of List</li></ul><br><br>"
     }
   }
  }
}

function PatientMoreResults(theURL,ThisList) {
 ListLocation=ThisList.parentNode.parentNode;
 if (PatientURN!=t.PatientID) {
   ShowPatientResults();
 }
 var xmlHttp = createHttpObject();
 var h  = document.getElementsByTagName("head")[0];
 xmlHttp.open("GET", CGIPath+theURL, false);
 xmlHttp.send();
 if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
   var s = document.createElement("script");
   s.type="text/javascript";
   h.appendChild(s);
   s.text=xmlHttp.responseText;
   AddResults()
   SortOrderBy=1;
   t.rows.sort(RevStringSort);
   OS='<ul class=ListRes>'
   for (var i = 0; i < t.rows.length; i++) {
     resText=t.rows[i][2].replace(/ *$/,"");

     OS += "<li class=ItemRes onclick=\"LinkRes('" + t.rows[i][0] + "','" +
           t.rows[i][6] + "','" + t.rows[i][7] + "','" +
           resText.replace(/'/g, "\\'") + "','" + t.rows[i][5] + "');\">" +
           "<span class='showResultIcon" + t.rows[i][6].substr(0,2) +
           "' style='float:left;' ></span>" +
           resText +
           "<span style='float:right' class='showResultStatus" +
           t.rows[i][3].replace(/ *$/,"") + "' ></span><br />" +
           "<span class=subscriptLeft >Status : " + t.rows[i][5] + "</span>" +
           "<span class='showResultReadStatus" +
           t.rows[i][8].replace(/ *$/,"") + "' style='float:right'></span><br>"+
           "<span class=ntTimeframe>"+FormatCommentAge(t.rows[i][1])+"</span>" +
           "<span class=ntWhen>" + FormatDateTime(t.rows[i][1]) + "</span>" +
           "</li>";
   }
   OS+='</ul>'
   ListLocation.innerHTML = OS;

   if (lastrow==1) {
     ListLocation.innerHTML += "<ul class=ListRes>" +
                               "<li class=ListMore onclick=PatientMoreResults('"+ListMoreLink+"',this);>"+
                               "Show More Results</li></ul>"
    }
   else {
     ListLocation.innerHTML += "<ul class=ListRes>" +
                               "<li class=ListMore>End of List</li></ul>"
    }
  }
}
//------------------------------------------------------------
// Result Table Links
//------------------------------------------------------------
function LinkRes(LinkUrl,DSS,Panel,title,State) {
  linkurl= getResultLink(LinkUrl,DSS,Panel,State);
  theURL = CGIPath+linkurl + '&httprand='+Math.random();
  openDocumentNonZoomable(theURL,title+" Results");
}
//------------------------------------------------------------
// Tab Functions Bed Side Monitor
//------------------------------------------------------------
function BedMonitorView() {
  monWard=document.getElementById("monitorWard").value ;
  monBed=document.getElementById("monitorBed").value;
  monEmr=document.getElementById("monitorEmr").value;
  theURL = CGIPath + "bedmon01.php?reportno=5"+
             "&wardcode="+monWard+"&bedcode="+monBed+"&emrlocn="+monEmr;
  xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.responseText=="false"||xmlHttp.status!=200) {
    alertify.alert("Bed side monitor not configured for this location :"+monWard+"/"+monBed+".");
  } else {
    var PhilipsHost    =xmlHttp.responseText.split(",")[0].replace(/'/g,"");
    var PhilipsBed     =xmlHttp.responseText.split(",")[1].replace(/'/g,"");
    var PhilipsUserName=xmlHttp.responseText.split(",")[2].replace(/'/g,"");
    var PhilipsPassword=xmlHttp.responseText.split(",")[3].replace(/'/g,"");
    var PhilipsTimeout =xmlHttp.responseText.split(",")[4].replace(/'/g,"");
    var PhilipsApp     =xmlHttp.responseText.split(",")[5].replace(/'/g,"");
    var PhilipsPage    =xmlHttp.responseText.split(",")[6].replace(/'/g,"");
    bed=xmlHttp.responseText.split(",")[1].replace(/'/g,"");
    theURL= "/"+PhilipsHost+"-philips/"+PhilipsPage+
            "?UserName="+PhilipsUserName.replace(/ /g,"+")+
            "&Password="+PhilipsPassword.replace(/ /g,"+")+
            "&BedLabel="+PhilipsBed.replace(/ /g,"+")+
            "&Timeout="+PhilipsTimeout+
            "&App="+PhilipsApp.replace(/ /g,"+")
    openDocument(theURL,"Patient Monitor Bed : "+PhilipsBed);
  }
}
function checkMonitorLink(el) {
  monWard=document.getElementById("monitorWard").value ;
  monBed=document.getElementById("monitorBed").value;
  monEmr=document.getElementById("monitorEmr").value;
  theURL = CGIPath + "bedmon01.php?reportno=5"+
             "&wardcode="+monWard +
             "&bedcode="+monBed +
             "&emrlocn="+monEmr;
  xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.responseText!="false") {
    el=document.getElementById("FlagMon");
    if (el) el.className="showMonitor";
  }
}
//------------------------------------------------------------
// Tab Functions Equipment Loan
//------------------------------------------------------------
function ShowPatientEquipment() {
  wtitle=EquipmentTitle();
  wscript="EquipmentInitTable()";
  wurl="allweb04.pbl?reportno=01&template=007";
  ShowScreen(wtitle,wscript,wurl);
}
function equipmentLoan() {
   var  url="allweb04.pbl?reportno=01&template=006"+
           '&urnumber='+PatientURN.replace(/ /g,"+") +
           '&admissno='+PatientVIS.replace(/ /g,"+");
   var title = 'Patient Loan Equipment';
   openDocumentNonZoomable(CGIPath+url,title);
}
function EquipmentTitle() {
  wtitle="<span class=AddItem onclick='equipmentLoan();'></span> Equipment Loan Details"
  return wtitle;
}
function EquipmentInitTable() {
 t = new Table();
 AddRows();
 SortOrderBy=0;
 SortSequence=0;
 t.rows.sort(RevStringSort);
 OS='<ul class=ListRes>'
 for(var i = 0; i < t.rows.length; i++) {
     OS += "<li class=ItemRes onclick=\""+t.rows[i][0].replace(/ShowDetail/,"equipmentUpdate")+";\">" +
           "<span style='width:70%;display:inline-block'>" + t.rows[i][2]+ " (" + t.rows[i][3]+ ")</span>"+
           "<span class=subscriptRight style='width:29%'>"+t.rows[i][6]+"</span><br/>" +
           "<span class=subscriptLeft>Expected Return Date:"+t.rows[i][5]+"</span>"
     if (isWhitespace(t.rows[i][7].replace(/&nbsp;/gi,""))) {
       OS += "<span class=subscriptRight></span><br>"
     }
     else {
       OS += "<span class=subscriptRight>Returned:"+t.rows[i][7]+"</span><br>"
     }
     OS += "<span class=ntTimeframe>"+FormatCommentAge(t.rows[i][8])+"</span>"  +
           "<span class=ntWhen>"+FormatDateTime(t.rows[i][8])+"</span>"   +
           "</li>"
 }
 OS+='</ul></form>'
 ListLocation.innerHTML=OS;
 if (t.rows.length == 0) {
   ListLocation.innerHTML += "<ul class=ListRes>" +
                             "<li class=ItemRes style='text-align:center;'>" +
                             "No Equipment Recorded for this Patient</li><li class=ItemRes></li></ul>"
 }
}
//------------------------------------------------------------
// Tab Functions Alerts
//------------------------------------------------------------
function ShowPatientAlerts(num) {
  wtitle=AlertTitle(num);
  AlertsHTML = "";
  if(typeof num != 'undefined' && num == 2 ) {
    wscript="AlertsInitTable(2)";
    wurl="patweb98.pbl?reportno=1&template=773&cauda1=0";
  }else {
    wscript="AlertsInitTable()";
    wurl="patweb98.pbl?reportno=1&template=84";
  }
  ShowScreen(wtitle,wscript,wurl);
}
function AlertTitle(num) {
  var selected1="selected";
  var selected2="";
  if (top.getCookie("AlertTypes") == ""){
     SetMenuOptions('comweb01.php?reportno=2','AlertTypes');
  }
  var DeletedTitle="";
  if (typeof num != 'undefined') {
     if (num == 2 ){
       var DeletedTitle=" <span style='color:red;'>Deleted</span>";
       selected2="";
       selected2="selected";
     }
  }
  if(alertsViewOnly != true) {
    var MedChartAllergies="<span class='stdButton RightAlign' "+
                          " onclick='LaunchMedchart(\"patient\");'>Allergies</span>";
    if (UseMedChartAllergies=="N") MedChartAllergies="";
    if (navigator.userAgent.match(/MSIE/i) ) {
      wtitle="<span class=AddItem></span> Alerts &amp; Allergies "+DeletedTitle+
             "<span style='float:right;'>"+
             "<select title='Show Alerts' onchange='ShowPatientAlerts(this.value)' class='stdButton'>"+
             "<option>View</option>"+
             "<option value='1' >Current</option>"+
             "<option value='2' >Deleted</option>"+
             "</select>"+MedChartAllergies+
             "<select class=stdButton title='Type of Alert' onchange='AddAlert(this);'>"+
             "<option>Add</option>"+
             top.getCookie("AlertTypes") +
             "</select></span>";
    } else {
      wtitle="<select class=selectMenuAdd title='Type of Alert' onchange='AddAlert(this);'>"+
             "<option selected></option>"+
             top.getCookie("AlertTypes") +
             "</select> Alerts &amp; Allergies"+DeletedTitle+
             "<span style='float:right;'>"+
             "<select title='Show Alerts' onchange='ShowPatientAlerts(this.value)' class='stdButton'>"+
             "<option value='1' "+selected1+">Current</option>"+
             "<option value='2' "+selected2+">Deleted</option>"+
             "</select>"+MedChartAllergies+
             "<select class=stdButton title='Type of Alert' onchange='AddAlert(this);'>"+
             "<option>Add</option>"+
             top.getCookie("AlertTypes") +
             "</select></span>";
    }
  } else {
    wtitle = "Alerts &amp; Allergies"+DeletedTitle+
             "<span style='float:right;'>"+
             "<select title='Show Alerts' onchange='ShowPatientAlerts(this.value)' class='stdButton'>"+
             "<option value='1' "+selected1+">Current Alerts</option>"+
             "<option value='2' "+selected2+">Deleted Alerts</option>"+
             "</select>"+
             "</span>";
  }
  return wtitle;
}
//----------------------------------------------------------------------------
// Alerts & Allergies
//---------------------------------------------------------------------------
function AlertsInitTable(num) {
  AlertsHTML="<ul class=ListRes>" 
  Alerts = new Table();
  t = new Table();
  AddAlertRows();
  GetAllergies();
  SortOrderBy=6;
  t.rows.sort(RevNumericSort);
  Alerts=t;
  AddAlertDetails(num)
  AlertsHTML+="<li class=ItemRes></li>" + 
             "</ul>" 
  ListLocation.innerHTML = AlertsHTML;
}
function LinkAlt(urnumber,admissno,alrtcat,alrtcod,altcnt) {
 theURL = "cliweb01.pbl?reportno=1&template=23&httprand="+Math.random() +
          "&urnumber=" + urnumber.replace(/ /g,"+") +
          "&admissno=" + admissno.replace(/ /g,"+") +
          "&alert001=" + alrtcat.replace(/ /g,"+") +
          "&alert002=" + alrtcod.replace(/ /g,"+") +
          "&alert013=" + altcnt.replace(/ /g,"+");
 UpdatePageTitle="Update Alert / Allergy";
 openDocumentNonZoomable(CGIPath+theURL,UpdatePageTitle);
}
function AddAlertDetails(num) {
  if (Alerts.rows.length > 0) {
    for (var i = 0; i < Alerts.rows.length; i++) {
      AlertsHTML += "<li class=ItemRes style='clear:right' ";
      
      if (Alerts.rows[i][0].indexOf("LaunchMedchart") != -1) {
        AlertsHTML += "onclick=\"" + Alerts.rows[i][0] + ";\">";
      }
      else {
        AlertsHTML += "onclick=\"LinkAlt('" + PatientURN + "','" +
                      PatientVIS + "'," +
                      Alerts.rows[i][0].replace(/.*\(/,"").replace(/\).*/,"") +
                      ");\">";
      }
      AlertsHTML += "<span style='width:70%;display:inline-block'>" +
        Alerts.rows[i][2]+" ("+Alerts.rows[i][1] + ")</span>" +
        "<span class=subscriptRight style='width:29%'>"+Alerts.rows[i][5]+"</span><br>" +
        "<span class=subscriptLeft>"+Alerts.rows[i][4]+"</span>" +
        "<span class=subscriptRight>"+Alerts.rows[i][3]+"</span><br>" +
        "<span class=ntTimeframe>"+FormatCommentAge(t.rows[i][6])+"</span>" +
        "<span class=ntWhen>"+FormatDateTime(t.rows[i][6])+"</span>" +
        "</li>";
    }
  } else {
    if (typeof num != 'undefined' && num == 2) {
      AlertsHTML += "<li class=ItemRes style='text-align:center;clear:right'>" +
                "No Deleted Alerts or Allergies Recorded for this Patient</li>";
    } else {
      AlertsHTML += "<li class=ItemRes style='text-align:center;clear:right'>" +
                    "No Alerts or Allergies Recorded for this Patient</li>";
    }
  }
}
function AddAlert(el) {
  if ( isWhitespace(el.options[el.selectedIndex].value) ) return;
  alert001 = el.options[el.selectedIndex].value.substr(0,2);
  theURL = 'cliweb01.pbl?reportno=1&template=022'+
           '&alert001='+alert001.replace(/ /g,"+") +
           '&urnumber='+PatientURN.replace(/ /g,"+") +
           '&admissno='+PatientVIS.replace(/ /g,"+");
  UpdatePageTitle="Add Alert / Allergy";
  el.selectedIndex=0;
  openDocumentNonZoomable(CGIPath+theURL,UpdatePageTitle);
}
//------------------------------------------------------------
// Tab Functions Clinical Notes
//------------------------------------------------------------
function ShowPatientNotes() {
  wtitle=NoteTitle();
  wscript="NoteInitTable()";
  if (notesViewAll) wurl="cliweb06.pbl?reportno=1&template=16";
  else wurl="cliweb06.pbl?reportno=1&template=17";
  ShowScreen(wtitle,wscript,wurl);
}
function LinkNote(urnumber,admissno,noteno,template,title) {
  if (template=="EMG") return;
  if (template=="REF") return;
  template=parseInt(template,10)+700;
  theURL = 'cliweb06.pbl?reportno=1&template='+template+
           '&urnumber='+urnumber.replace(/ /g,"+") +
           '&admissno='+admissno.replace(/ /g,"+") +
           '&nzteskey='+admissno.replace(/ /g,"+") + noteno.replace(/ /g,"+") +
           '&httprand='+Math.random();
  openDocumentNonZoomable(CGIPath+theURL,title);
}
function ShowAllNotes() {
  wtitle=NoteTitleAll();
  wscript="NoteInitTable()";
  wurl="cliweb06.pbl?reportno=1&template=16";
  ShowScreen(wtitle,wscript,wurl);
}
function NoteTitle() {
  if (notesViewAll) {
    return NoteTitleAll();
  }
  if (top.getCookie("NoteTypes") == ""){
    SetMenuOptions('comweb01.php?reportno=1','NoteTypes');
  }

  if(notesViewOnly != true) {
   if(navigator.userAgent.match(/MSIE/i) ) {
    wtitle="<span class=AddItem></span> Notes - Current Visit"+
           "<span style='float:right;'>"+
           "<span class=stdButton onclick='ShowAllNotes();'>Show All</span>"+
           "<select class=stdButton title='Type of Note' onchange='AddNote(this);'>"+
           "<option>New</option>"+
           top.getCookie("NoteTypes") +
           "</select></span>";
   } else {
    wtitle="<select class=selectMenuAdd title='Type of Note' onchange='AddNote(this);'>"+
            top.getCookie("NoteTypes") +
           "<option selected></option>"+
           "</select> Notes - Current Visit"+
           "<span style='float:right;'>"+
           "<span class=stdButton onclick='ShowAllNotes();'>Show All</span>"+
           "<select class=stdButton title='Type of Note' onchange='AddNote(this);'>"+
           "<option>New</option>"+
           top.getCookie("NoteTypes") +
           "</select></span>";
   }
  }else {
    wtitle = "Notes";
  }

  return wtitle;
}

function NoteTitleAll() {
  if (top.getCookie("NoteTypes") == ""){
    SetMenuOptions('comweb01.php?reportno=1','NoteTypes');
  }
  if(notesViewOnly != true) {
   if(navigator.userAgent.match(/MSIE/i) ) {
    wtitle="<span class=AddItem></span> Notes - All Visits"+
           "<span style='float:right;'>"+
           "<span class=stdButton onclick='ShowPatientNotes();'>Show Current</span>"+
           "<select class=stdButton title='Type of Note' onchange='AddNote(this);'>"+
           "<option>New</option>"+
           top.getCookie("NoteTypes") +
           "</select></span>";
   } else {
    wtitle="<select class=selectMenuAdd title='Type of Note' onchange='AddNote(this);'>"+
            top.getCookie("NoteTypes") +
           "<option selected></option>"+
           "</select> Notes - All Visits"+
           "<span style='float:right;'>"+
           "<span class=stdButton onclick='ShowPatientNotes();'>Show Current</span>"+
           "<select class=stdButton title='Type of Note' onchange='AddNote(this);'>"+
           "<option>New</option>"+
           top.getCookie("NoteTypes") +
           "</select></span>";
   }
  }else {
    wtitle = "Notes";
  }
  return wtitle;
}
function NoteInitTable(TableView) {
 t = new Table();
 AddNoteRows();
 SortOrderBy=0;
 SortSequence=0;
 t.rows.sort(RevStringSort);
 clearFilters();
 filterBlock = makeFilter(t,"filterWho","Everyone","1")+
               makeFilter(t,"filterGroup","All Groups","4")+
               makeFilter(t,"filterType","All Types","9")+
               "<span class=stdButton onclick=sortList()>Sort</span>";
 NoteShowTable();
}
function NoteShowTable() {
 if(notesViewOnly != true) {
   OS='<ul class=ListRes>'+
      '<li class=ItemRes>'+
      '<form name="NewNote" id="NewNote" action="cliweb06.pbl" method="post" onsubmit="return false;">' +
      '<input type="hidden" name="reportno" value="1">' +
      '<input type="hidden" name="template" value="1">' +
      '<input type="hidden" name="urnumber" value="'+PatientURN+'">' +
      '<input type="hidden" name="admissno" value="'+PatientVIS+'">' +
      '<input type="hidden" name="updatety" value="A">' +
      '<input type="hidden" name="notetype" value="001">' +
      '<input type="hidden" name="formactn" id="formactn" value="A0">' +
      '<input type="hidden" name="clnot001" id="clnot001" value="'+defaultProgressNoteType+'">' +
      '<input type="hidden" name="nextpage" value="2">' +
      '<input type="hidden" id="dummy" name="dummy" value="">' +
      '<textarea placeholder="Progress Note/Comment..." name=notetext class=progressNote' +
      ' rows=1 cols=50 id=notetext onfocus="this.rows=5;CheckVisitStatus()"'+
      ' onblur="this.rows=1"></textarea>'+
      '<span class=stdButton onclick="SubmitNote(document.NewNote);">Add Note</span>'+
      '</form>'+filterBlock+'</li>'
 }
 else {
   OS='<form name=dummy><ul class=ListRes>'
   OS += "<li class=ItemFilter>" + filterBlock + "</li>"
 }

 for (var i = 0; i < t.rows.length; i++) {
   if (listFilter(t.rows[i])) {
     var title = t.rows[i][9].replace(/'/g, "\\'");

     OS += "<li class=ItemRes onclick=\"LinkNote('" + t.rows[i][13] +
                        "','" + t.rows[i][2] +
                        "','" + t.rows[i][3] +
                        "','" + t.rows[i][11] +
                        "','" + title + "');\">" +
           "<span class=ntWho>" + t.rows[i][1] + "</span>" +
           "<span class=ntType>" + t.rows[i][9] + "</span><br/>";

     if (!isWhitespace(t.rows[i][5]))  OS += "<span class=ntBullet>"+t.rows[i][5]+"</span><br>"
     if (!isWhitespace(t.rows[i][6]))  OS += "<span class=ntBullet>"+t.rows[i][6]+"</span><br>"
     if (!isWhitespace(t.rows[i][7]))  OS += "<span class=ntBullet>"+t.rows[i][7]+"</span><br>"
     if (!isWhitespace(t.rows[i][8]))  OS += "<span class=ntBullet>"+t.rows[i][8]+"</span><br>"
     if (!isWhitespace(t.rows[i][10])) OS += "<span class=ntText>"+ t.rows[i][10] + "</span><br>"  
     OS += "<span class=ntTimeframe>"+FormatCommentAge(t.rows[i][0])+"</span>"  +
           "<span class=ntWhen>"+FormatDateTime(t.rows[i][0])+"</span>"   +
           "</li>"
   }
 }
 OS+='</ul></form>'
 ListLocation.innerHTML=OS;
 if (t.rows.length == 0) {
   ListLocation.innerHTML += "<ul class=ListRes>" +
                             "<li class=ItemRes style='text-align:center;'>" + 
                             "No Notes Recorded for this Patient</li><li class=ItemRes></li></ul>"
 }
}
function AddNote(el) {
  if (isWhitespace(el.options[el.selectedIndex].value)) return;
  if (el.options[el.selectedIndex].value=="New") return;
  var clnot001=el.options[el.selectedIndex].value.substr(0,3)
  var notetype=clnot001.replace(/ /g,"");
  var usersecl=document.getElementById("webstlev").value;
  var notesecl=el.options[el.selectedIndex].value.substr(6,2)
  var template=parseInt(el.options[el.selectedIndex].value.substr(3,3),10)+700
  var theURL='cliweb06.pbl?reportno=1&template='+template+
           '&clnot001='+clnot001.replace(/ /g,"+") +
           '&urnumber='+PatientURN.replace(/ /g,"+") +
           '&admissno='+PatientVIS.replace(/ /g,"+") +
           '&nzteskey='+PatientVIS.replace(/ /g,"+")+ "++++" ;
  if(usersecl < notesecl) {
    alertify.alert("Invalid Security Level for this Note Type");
    el.selectedIndex=0;
    return;
  }
  if(notetype == "006" || notetype == "007" || notetype == "008" || notetype == "009") {
     if(!doesNoteTypeExist(notetype,el.options[el.selectedIndex].innerText)) {
       openDocumentNonZoomable(CGIPath+theURL,'Add '+el.options[el.selectedIndex].innerText);
       el.selectedIndex=0;
     } else {
       el.selectedIndex=0;
     }     
  } else {
   openDocumentNonZoomable(CGIPath+theURL,'Add '+el.options[el.selectedIndex].innerText);
   el.selectedIndex=0;
  }
}
function SubmitNote(el) {

  el.notetext.value = el.notetext.value.replace(/[^\x00-\x7F]/g, "");

  if (isWhitespace(el.notetext.value)) {
    return;
  }
  if (isWhitespace(el.admissno.value)) {
    alertify.alert('Please select a visit before adding notes.')
    return;
  }
  var theURL = el.action;
  if (top.visitProgressNote=="1") {
    el.reportno.value="6";
    el.notetype.value="001";
    el.notetext.name="visnotes";
  }
  if (top.visitProgressNote=="8") {
    el.reportno.value="7";
    el.notetype.value="008";
    el.notetext.name="visnotes";
  }
  var postStr = AJAXPostString2(el);
  var xmlHttp = createHttpObject();
  xmlHttp.open("POST", theURL, false);
  xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
  xmlHttp.send(postStr);
  if (xmlHttp.status == "200") {
    if (xmlHttp.responseText.match(/location.href/i)){
      ShowPatientNotes();
    }
    else{
      alertify.alert( xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,"") );
    }
  }
  else{
    alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
  }
}
//------------------------------------------------------------
// Tab Functions emergency patient Summary
//------------------------------------------------------------
function ShowEmergencySummary() {
  ShowScreen(EmergencyTitle(),"","emrweb02.pbl?reportno=01&template=401");
}
function EmergencyTitle() {
  wtitle="<span class=AddItem></span> Emergency Visit Summary"+
         "<span class='stdButton RightAlign' onclick='emergencyPrint();'>Print</span>"+
         "<span class='stdButton RightAlign' onclick='emergencyAllocation();'>See Now</span>";
  return wtitle;
}
//------------------------------------------------------------
// Tab Functions Clinical History (Emergency)
//------------------------------------------------------------
function ShowPatientHistory() {
 wtitle="Past Medical History"
 wscript="HistoryInitTable()";
 wurl="cliweb08.php?reportno=9&template=1";
 ShowScreen(wtitle,wscript,wurl);
}
function HistoryInitTable(TableView) {
 t = new Table();
 AddNoteRows();
 SortOrderBy=0;
 t.rows.sort(RevStringSort);
 if(notesViewOnly != true) {
   OS='<ul class=ListRes>'+
      '<li class=ItemRes>'+
      '<form name="NewNote" id="NewNote" action="emrweb02.pbl" method="post" onsubmit="return false;">' +
      '<input type="hidden" name="reportno" value="10">' +
      '<input type="hidden" name="template" value="1">' +
      '<input type="hidden" name="urnumber" value="'+PatientURN+'">' +
      '<input type="hidden" name="admissno" value="'+PatientVIS+'">' +
      '<input type="hidden" name="updttype" id="updttype" value="A">' +
      '<input type="hidden" name="nextpage" value="2">' +
      '<input type="hidden" id="dummy" name="dummy" value="">' +
      '<textarea placeholder="Past Medical History..." name=getnotes class=progressNote' +
      ' rows=1 cols=50 id=getnotes onfocus="this.rows=5" onblur="this.rows=1"></textarea>'+
      '<span class=stdButton onclick="SubmitHistory(document.NewNote);">Add History</span>'+
      '</form></li>'
 }
 else {
   OS='<ul class=ListRes>'
 }
 for(var i = 0; i < t.rows.length; i++) {
   OS += "<li class=ItemRes>" +
         "<span class=ntWho>"+t.rows[i][1]+"</span><br/>" 
   if (!isWhitespace(t.rows[i][4])) OS += "<span class=ntText>"+ t.rows[i][4] + "</span><br>"  
   OS += "<span class=ntTimeframe>"+FormatCommentAge(t.rows[i][0])+"</span>"  +
         "<span class=ntWhen>"+FormatDateTime(t.rows[i][0])+"</span>"  
   OS += "</li>"
 }
 OS+='</ul>'
 ListLocation.innerHTML=OS;
 if (t.rows.length == 0) {
   ListLocation.innerHTML += "<ul class=ListRes>" +
                             "<li class=ItemRes style='text-align:center;'>" + 
                             "No Past Medical History Recorded for this Patient</li><li class=ItemRes></li></ul>"
 }
}
function SubmitHistory(el) {
  if (isWhitespace(el.getnotes.value)) {
    return;
  }
  var theURL = el.action;
  var postStr = AJAXPostString2(el);
  var xmlHttp = createHttpObject();
  xmlHttp.open("POST", theURL, false);
  xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
  xmlHttp.send(postStr);
  if (xmlHttp.status == "200") {
    if ( xmlHttp.responseText.match(/location.href/i) ){
         ShowPatientHistory();
    }
    else{
      alertify.alert( xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,"") );
    }
  }
  else{
    alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
  }
}
//------------------------------------------------------------
// Tab Functions Diagnosis (Emergency)
//------------------------------------------------------------
function ShowPatientDiagnosis() {
  wtitle=DiagnosisTitle();
  wscript="DiagnosisInitTable()";
  wurl="emrweb06.pbl?reportno=2&template=041";
  ShowScreen(wtitle,wscript,wurl);
}
function DiagnosisTitle() {
  wtitle="<span class=AddItem onclick='AddDiagnosis();'></span> Diagnosis Details";
  return wtitle;
}
function DiagnosisInitTable() {
 t = new Table(PatientURN);
 AddResults();
 SortOrderBy=1;
 t.rows.sort(RevStringSort);
 OS='<ul class=ListRes>'+
      '<li class=ItemRes>'+
      '<form name="AddDiagnosis" id="AddDiag" action="emrweb06.pbl" method="post" onsubmit="return false;">' +
      '<input type=hidden name=reportno value="2">' +
      '<input type=hidden name=template value="002">' +
      '<input type=hidden name=updatety value="A">' +
      '<input type=hidden name=nextpage value="1">' +
      '<input type=hidden name=redirect value="AJAXPost">' +
      '<input type=hidden name=urnumber value="'+PatientURN+'">' +
      '<input type=hidden name=admissno value="'+PatientVIS+'">' +
      '<input type=hidden name=emvcd001 value="'+PatientVIS+'">' +
      '<input type=hidden name=emvcd002 value="005">' +
      '<input type=hidden name=emvcd004 value="5">' +
      '<input type=hidden name=emuty001 value="EMRD">' +
      '<input type=hidden name=emvcd005 value="">' +
      '<input type=hidden name=emvcd006 value="   ">' +
      '<input type=hidden name=emvcd031 value="1">' +
      '<input type=hidden name=emvcd033 value="">' +
      '<input type=hidden name=diagselt value="">' +
      '<span class="labelText">Diagnosis Search</span>' +
      '<br>' +
      '<input type="search" size="40" id="n_diagselt" name="n_diagselt" ' +
      ' placeholder="Diagnosis Search..." class="searchFormInput"' +
      ' onblur="diagosisFree();" ' +
      ' value="" oninput="getDiagnosis(this,this.form.diagselt);">' +
      '<div id="-suggestion-panel-wrapper" style="display:none;">' +
      ' <div id="-suggestion-panel-wrapper2" style="width:100%">' +
      '  <ul id="-suggestion-table" style="width:100%"></ul>' +
      ' </div>' +
      '</div>' +
      '<span class="stdButton RightAlign" '+
      'onclick="SubmitDiagnosis(document.AddDiagnosis);">Add</span>' +
      '<br><br>' +
      '<span class="labelText">Diagnosis Free Format Description</span>' +
      '<br>' +
      '<input type=text maxlength=100 size=50 name="d_emvcd033" ' +
      'id="d_emvcd033" placeholder="Diagnosis Free Format Description" ' +
      'value="">' +
      '</form></li>'
 for(var i = 0; i < t.rows.length; i++) {
   resText=t.rows[i][2].replace(/ *$/,"")
   diaDate=t.rows[i][8]+t.rows[i][9]
   OS += "<li class=ItemRes>" + t.rows[i][3] + "<br/>" +
         "<span class=subscriptLeft>"+t.rows[i][7]+"</span>" +
         "<span class=subscriptRight>"+t.rows[i][0]+"</span><br/>" +
         "<span class=ntTimeframe>"+FormatCommentAge(diaDate)+"</span>"  +
         "<span class=ntWhen>"+FormatDateTime(diaDate)+"</span><br/>"  +
         "</li>"
 }
 OS+='</ul>'
 ListLocation.innerHTML = OS;
 if (t.rows.length == 0) {
   ListLocation.innerHTML += "<ul class=ListRes>" +
                             "<li class=ItemRes style='text-align:center;'>" + 
                             "No Diagnosis Details Recorded for this Visit</li>"+
                             "<li class=ItemRes></li></ul>"
  }
}
function popDiagnosis(Code,Name) {
  var autoSuggest = document.getElementById("-suggestion-panel-wrapper");
  autoSuggest.style.display="none";
  AddDiagnosis.n_diagselt.value=Name;
  AddDiagnosis.diagselt.value=Code;
  AddDiagnosis.d_emvcd033.value=Name;
}
function diagosisFree() {
  if(isWhitespace(AddDiagnosis.n_diagselt.value)) {
    AddDiagnosis.d_emvcd033.value="";
  }
}
function getDiagnosis(SearchField,ReturnSelect) {
  var autoSuggest = document.getElementById("-suggestion-panel-wrapper");
  var contentPlaceHolder = document.getElementById("-suggestion-table");
  var suggestionPanel    = document.getElementById("-suggestion-panel-wrapper2");
  var contentString = ""
  var theURL   = CGIPath+"emrweb08.pbl?reportno=1" +
                 "&valdcode=" + SearchField.value.replace(/ /g,"+")
  var returnValue = RSExecute(theURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    for (var j=0; j < ReturnValue.length; j++) {
      if (!isWhitespace(ReturnValue[j])) {
        SelectValue=ReturnValue[j].split(",");
        contentString += "<li onclick=\"popDiagnosis('"+
                            SelectValue[0]+"','"+ SelectValue[1]+"');\">"+
                            SelectValue[1] + "</li>";
      } 
    } 
  }
  if (contentString == "" ) {
    autoSuggest.style.display="none";
  }else {
    contentPlaceHolder.innerHTML = contentString;
    autoSuggest.style.display="";
  }
}
function SubmitDiagnosis(el) {
  if(isWhitespace(el.diagselt.value) && !isWhitespace(el.d_emvcd033.value)) {
    alertify.alert("Diagnosis Selection field is mandatory.");
  }
  if (isWhitespace(el.diagselt.value)) {
    return;
  }
  el.emvcd005.value=el.diagselt.value.substring(0,9)
  if (el.emvcd005.value.substr(0,4)=="Z099") {
      alertify.alert("Please enter an additional diagnosis for this patient !");
  }
  el.emvcd033.value=el.d_emvcd033.value;
  var theURL = el.action;
  var postStr = AJAXPostString2(el);
  var xmlHttp = createHttpObject();
  xmlHttp.open("POST", theURL, false);
  xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
  xmlHttp.send(postStr);
  if (xmlHttp.status == "200") {
    if ( xmlHttp.responseText.match(/AJAXPost/i) ){
         ShowPatientDiagnosis();
    }
    else{
      alertify.alert( xmlHttp.responseText)
      alertify.alert( xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,"") );
    }
  }
  else{
    alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
  }
}
//------------------------------------------------------------
// Tab Functions Billing Procedures (Emergency)
//------------------------------------------------------------
function ShowPatientBilling() {
 wtitle=ProcedureTitle();
 wscript="ProcedureInitTable()";
 wurl="emrweb06.pbl?reportno=2&template=042";
 ShowScreen(wtitle,wscript,wurl);
}
function ProcedureTitle() {
  wtitle="<span class=AddItem onclick='AddProcedure();'></span> Billing Details"+
         "<span class='stdButton RightAlign' onclick='AddProcedure();'>Add</span>";
  return wtitle;
}
function ProcedureInitTable() {
 t = new Table(PatientURN);
 AddResults();
 SortOrderBy=4;
 t.rows.sort(RevStringSort);
 OS='<ul class=ListRes>'
 for(var i = 0; i < t.rows.length; i++) {
   resText=t.rows[i][2].replace(/ *$/,"")
   diaDate=t.rows[i][8]+t.rows[i][9]
   proDate=t.rows[i][4]+t.rows[i][5]
   OS += "<li class=ItemRes>"+FormatDateTime(proDate)+" " + t.rows[i][3]+" ("+ t.rows[i][2] + ")<br>" +
         "<span class=subscriptLeft>Performed By:"+t.rows[i][16]+"</span>" +
         "<span class=subscriptRight>Entered By:"+t.rows[i][7]+"</span><br/>" +
         "<span class=ntTimeframe>"+FormatCommentAge(proDate)+"</span>"  +
         "<span class=ntWhen>"+FormatDateTime(diaDate)+"</span><br/>"  +
         "</li>"
 }
 OS+='</ul>'
 ListLocation.innerHTML = OS;
 if (t.rows.length == 0) {
   ListLocation.innerHTML += "<ul class=ListRes>" +
                             "<li class=ItemRes style='text-align:center;'>" + 
                             "No Procedure Billing Details Recorded for this Visit</li>"+
                             "<li class=ItemRes></li></ul>"
  }
}
function AddProcedure() {
  url="emrweb06.pbl?reportno=02&template=43"+
      "&urnumber="+PatientURN.replace(/ /g,"+")+
      "&admissno="+PatientVIS.replace(/ /g,"+");
  title = "Add Procedure Billing";
  openDocumentNonZoomable(CGIPath+url,title);
}
//------------------------------------------------------------
// Tab Functions Referrals
//------------------------------------------------------------
function ShowReferralList() {
 wtitle="<span class=AddItem onclick='WIP();'></span> Referrals"+
        "<span class='stdButton RightAlign' onclick='WIP();'>Add</span>";
 wscript="ReferralInitTable()";
 wurl="allweb02.pbl?reportno=2&template=715"
 ShowScreen(wtitle,wscript,wurl);
}
function ReferralInitTable() {
 t = new Table();
 ReferralTableRows();
 SortOrderBy=2;
 t.rows.sort(RevStringSort);
 OS='<ul class=ListRes>';
 for(var i = 0; i < t.rows.length; i++) {
   OS += "<li class=ItemRes onclick=\""+t.rows[i][0].replace(/javascript:/i,"")+";\">" +
         "<span style='width:70%;display:inline-block'>" +  t.rows[i][1]+ "</span>"+
         "<span class=subscriptRight style='width:29%'>"+t.rows[i][3]+"</span><br/>" +
         "<span class=subscriptCenter>Main Health Condition : "+t.rows[i][33]+"</span>" +
         "<span class=subscriptLeft>Referred By : "+t.rows[i][4]+"</span>" +
         "<span class=subscriptRight>HCP:"+t.rows[i][26]+"</span><br>"+
         "<span class=ntTimeframe>"+FormatCommentAge(t.rows[i][2])+"</span>"  +
         "<span class=ntWhen>"+FormatDateTime(t.rows[i][2])+"</span>"   +
         "</li>"
 }
 OS+='</ul>';
 ListLocation.innerHTML=OS;
}
function ReferralLink(admissno,department) {
  if(admissno.replace(/ /g,"").lenght == 0) { return; }
  if(department.replace(/ /g,"").length == 0){ return; }
  var titleString = "Referral Details";
  var uno=PatientURN.replace(/ /g,"+");
  var ano=admissno.replace(/ /g,"+");
  var dep=department.replace(/ /g,"+");
  var theURL = "allweb02.pbl?reportno=02&template=802&urnumber="+uno+"&admissno="+ano+"&deptcode="+dep;
  openDocumentNonZoomable(CGIPath+theURL,titleString);
}
function ShowReferralSummary() {
  wtitle="<span class=AddItem></span> Referral Summary"
  ShowScreen(wtitle,"","allweb02.pbl?reportno=2&template=801");
}
//------------------------------------------------------------
// Tab Functions Patient Encounters
//------------------------------------------------------------
function ShowEncounterList() {
  ShowScreen(EncounterTitle(),"EncounterInitTable()","allweb03.pbl?reportno=1&template=120");
}
function EncounterTitle() {
  wtitle="<span class=AddItem onclick='AddEncounter();'></span> Contacts "+
         "<span class='stdButton RightAlign' onclick='AddEncounter();'>Add</span>";
  return wtitle;
}
function AddEncounter() {
  url="allweb03.pbl?reportno=01&template=802"+
      "&urnumber="+PatientURN.replace(/ /g,"+")+
      "&admissno="+PatientVIS.replace(/ /g,"+");
  title = "Add Contact";
  openDocumentNonZoomable(CGIPath+url,title);
}
function EditContact(el) {
  url="allweb03.pbl?reportno=01&template=015"+
      "&urnumber="+PatientURN.replace(/ /g,"+")+
      "&admissno="+PatientVIS.replace(/ /g,"+")+
      t.rows[el][0].replace(/ /g,"+");
  title = "Edit Contact";
  openDocumentNonZoomable(CGIPath+url,title);
}
function EncounterInitTable() {
 t = new Table();
 EncounterTableRows();
 SortOrderBy=2;
 t.rows.sort(RevStringSort);
 OS='<ul class=ListRes>';
 for(var i = 0; i < t.rows.length; i++) {
   if (t.rows[i][2]!=1) {
     OS += "<li class=ItemRes onclick='EditContact(\""+i+"\");'>" +
           "<span style='display:inline-block;width:49%;margin-left:3px'>"+ t.rows[i][4]+"</span><br>" +
           "<span class=subscriptLeft>HCP : "+t.rows[i][3]+"</span>" +
           "<span class=subscriptRight> : "+t.rows[i][5]+"</span><br>" +
           "<span class=ntTimeframe>"   + FormatCommentAge(t.rows[i][1])+"</span>" +
           "<span class=ntWhen>Date : " + FormatDate(t.rows[i][1])+"</span>" +
           "</li>";
   }
 }
 OS+='</ul>';
 ListLocation.innerHTML=OS;
}
//------------------------------------------------------------
// Tab Functions Patient Referral Actions
//------------------------------------------------------------
function ShowActionList() {
  ShowScreen(ActionsTitle(),"ActionstInitTable()","allweb02.pbl?reportno=2&template=802");
}
function ActionsTitle() {
  if (navigator.userAgent.match(/MSIE/i) ) {
    wtitle="<div id=addControl display:none></div>"+
           "<span class=AddItem></span> Actions"
  }
  else {
    wtitle="<select class=selectMenuAdd title='Type of Action' onchange='AddAction(this);'>"+
            top.getCookie("ActionTypes") +
           "<option selected></option>"+
           "</select> Actions"
  }
  wtitle +="<span style='float:right;'>"+
           "<select class=stdButton title='Type of Action' onchange='AddAssessment(this);'>"+
           "<option>Add</option>"+
           top.getCookie("ActionTypes") +
           "</select></span>";
  return wtitle;
}
//------------------------------------------------------------
// Tab Functions Patient Assessments
//------------------------------------------------------------
function ShowAssessmentList() {
  ShowScreen(AssessmentsTitle(),"AssessmentsInitTable()","allweb06.pbl?reportno=5&template=2");
}
function AssessmentsTitle() {
  if (navigator.userAgent.match(/MSIE/i) ) {
    wtitle="<div id=addControl display:none></div>"+
           "<span class=AddItem></span> Assessments"
  }
  else {
    wtitle="<select class=selectMenuAdd title='Assessment Type' onchange='AddAssessment(this);'>"+
            top.getCookie("AssessmentTypes") +
           "<option selected></option>"+
           "</select> Assessments"
  }
  wtitle +="<span style='float:right;'>"+
           "<select class=stdButton title='Type of Assessment' onchange='AddAssessment(this);'>"+
           "<option>Add</option>"+
           top.getCookie("AssessmentTypes") +
           "</select></span>";
  return wtitle;
}
function AssessmentsInitTable() {
 t = new Table();
 AssessmentTableRows();
 SortOrderBy=2;
 t.rows.sort(RevStringSort);
 OS='<ul class=ListRes>';
 for(var i = 0; i < t.rows.length; i++) {
   OS += "<li class=ItemRes>" +
         "<span style='display:inline-block;width:49%;margin-left:3px'>"+ t.rows[i][3]+"</span><br>" +
         "<span class=subscriptLeft>HCP : "+t.rows[i][4]+"</span>" +
         "<span class=subscriptRight> : "+t.rows[i][5]+"</span><br>" +
         "<span class=ntTimeframe>"   + FormatCommentAge(t.rows[i][2])+"</span>" +
         "<span class=ntWhen>Date : " + FormatDate(t.rows[i][2])+"</span>" +
         "</li>";
 }
 OS+='</ul>';
 ListLocation.innerHTML=OS;
}
//------------------------------------------------------------
// Tab Functions Patient Medications
//------------------------------------------------------------
function ShowPatientMedications() {
 wtitle="<span class=AddItem onclick='LaunchMedchart(\"patient\");'></span> Current Medications"+
  "<span class='stdButton RightAlign' onclick='LaunchMedchart(\"patient\");'>Chart</span>";
//  "<span class='stdButton RightAlign' onclick='LaunchMedchart(\"prescribe\");'>Prescribe</span>"+
//  "<span class='stdButton RightAlign' onclick='LaunchMedchart(\"administration\");'>Administer</span>";
 wscript="MedicationListView()";
 wurl="patweb98.pbl?reportno=1&template=172";
 ShowScreen(wtitle,wscript,wurl);
}
//----------------------------------------------------------------------------
// Dispensed Medications
//----------------------------------------------------------------------------
function VisitMedicationTable() {
 t = new Table();
 AddMedRows();
 SortOrderBy=1;
 t.rows.sort(RevStringSort);
 OS='<ul class=ListRes>'
 for(var i = 0; i < t.rows.length; i++) {
   OS += "<li class=ItemRes onclick=\"EditMedication('"+t.rows[i][0]+"');\">" +
         "<span>"+t.rows[i][1]+" "+t.rows[i][3]+"</span><br/>"  +
         "<span class='Dose'>"+
         "<span class='DoseLabel'>Dose : </span>"+
         "<span class='DoseValue'>"+t.rows[i][4]+"</span>"+
         "<span class='DoseROA'> - "+t.rows[i][6]+"</span>" +
         "<span class='DoseFreq'> - "+t.rows[i][7]+"</span>" +
         "<br><span class='DoseQual'>"+t.rows[i][9]+"</span></span>" +
         "</li>"
 }
 OS+='</ul>'
 ListLocation.innerHTML = OS;

 if (t.rows.length == 0) {
   ListLocation.innerHTML += "<ul class=ListRes>" +
                             "<li class=ItemRes style='text-align:center;'>" + 
                             "No Medications Recorded for this Patient Visit"+
                             "</li><li class=ItemRes></li></ul>"
 }

}
function EditMedication(MedLine) {
  alertify.alert(MedLine);
}
function AddMedication() {
  url="patweb98.pbl?reportno=01&template=208"+
      "&urnumber="+PatientURN.replace(/ /g,"+")+
      "&admissno="+PatientVIS.replace(/ /g,"+");
  title = "Medications";
  openDocumentNonZoomable(CGIPath+url,title);
}
function MedicationTitle() {
   if(medicationsViewOnly != true) {
    wtitle="<span class=AddItem onclick='AddMedication();'></span> Medications";
  }else {
    wtitle = "Medications";
  }

  return wtitle;
}
//----------------------------------------------------------------------------
// Dispensed Medications
//----------------------------------------------------------------------------
function DispenseInitTable() {
 t = new Table();
 AddMedRows();
 SortOrderBy=1;
 t.rows.sort(RevStringSort);
 OS='<ul class=ListRes>'
 for(var i = 0; i < t.rows.length; i++) {
   OS += "<li class=ItemRes>" +
         "<span>"+t.rows[i][3]+"</span><br/>"  +
         "<span class=subscriptLeft> "+t.rows[i][4]+"</span>"+
         "<span class=subscriptRight> "+t.rows[i][9]+"</span><br/>"+
         "<span class=subscriptLeft> "+FD(t.rows[i][1])+"</span>"+
         "<span class=subscriptRight> "+t.rows[i][5]+"</span><br/>"+
         "<span class=subscriptLeft> "+t.rows[i][11]+"</span>"+
         "<span class=subscriptRight> "+t.rows[i][10]+"</span>"+
         "</li>"
 }
 OS+='</ul>'
 ListLocation.innerHTML = OS;

 if (t.rows.length == 0) {
   ListLocation.innerHTML += "<ul class=ListRes>" +
                             "<li class=ItemRes style='text-align:center;'>" + 
                             "No Dispensed Medications Recorded for this Patient"+
                             "</li><li class=ItemRes></li></ul>"
 }
}
//------------------------------------------------------------
// Tab Functions Patient Observations
//------------------------------------------------------------
function ShowObservations() {
 wtitle=ObservationTitle();
 wscript="ObservationInitGrid()";
 wurl="cliweb02.pbl?reportno=01&template=702";
 ShowScreen(wtitle,wscript,wurl);
}
function UpdateObs(linkURL) {
 el=document.getElementsByTagName("div")
 for (i=0;i<el.length;i++) {
   if (el[i].id.match(/section.*row/)) {
     el[i].style.display="none";
   }
   if (el[i].id==PageSectionID) {     //  Clinical Results Section
     el[i].style.display="none";
   }
 }
 UpdatePageTitle="Update Observation";
 openDocumentNonZoomable(CGIPath+linkURL,UpdatePageTitle);
}
function ObservationTitle() {
  if (top.getCookie("ObservationTypes") == ""){
    SetMenuOptions('comweb01.php?reportno=3','ObservationTypes');
  }
  
  if(observationsViewOnly != true) {
   if(navigator.userAgent.match(/MSIE/i) ) {
    wtitle="<span class=AddItem></span> Observations"
   }
   else {
    wtitle="<select class=selectMenuAdd title='Type of Observations' onchange='AddObservation(this);'>"+
           top.getCookie("ObservationTypes") +
           "<option selected></option>"+
           "</select> Observations";
   }
  }else {
    wtitle = "Observations";
  }

  wtitle +="<span style='float:right;'>"+
           "<select title='View' class='stdButton' onchange='chartObservations(this)'>"+
           "<option value='1'>Chart Basics</option>"+
           "<option value='2'>Chart Fluids</option>"+
           "<option value='3'>Chart Neuros</option>"+
           "<option value='4'>Grid View</option>"+
           "<option value='5'>List View</option>"+
           "<option value='6'>Grid Full Screen</option>"+
           "<option selected value='99' >View</option>"+
           "</select>"
  if(!observationsViewOnly) {
    wtitle+="<select class=stdButton title='Type of Observations' onchange='AddObservation(this);'>"+
            "<option value=''>Add</option>"+
            top.getCookie("ObservationTypes") +
            "</select>";
  }
  wtitle+= "</span>";
  return wtitle;
}
function AddObservation(el) {
  if (isWhitespace(el.options[el.selectedIndex].value)) return;
  template=parseInt(el.options[el.selectedIndex].value,10)+600;
  theURL='cliweb02.pbl?reportno=2&template='+template+
           '&urnumber='+PatientURN.replace(/ /g,"+") +
           '&admissno='+PatientVIS.replace(/ /g,"+")
  openDocumentNonZoomable(CGIPath+theURL,el.options[el.selectedIndex].innerHTML);
  el.selectedIndex=0;
}
function chartObservations(el) {
  num=el.options[el.selectedIndex].value
  el.selectedIndex=el.options.length-1
  if(typeof num != 'undefined' && num == 99){
    return;
  }else{ 
     showChart(num);
  }
}
function showChart(value) {
  wtitle='Observation Charts';
  switch (value) {
    case "1" :
      url="cliweb02.pbl?reportno=01&template=711"+
          '&urnumber='+PatientURN.replace(/ /g,"+") +
          '&admissno='+PatientVIS.replace(/ /g,"+")+
          '&obsvtype=B';
      title = 'Basic Chart';
      openDocumentNonZoomable(CGIPath+url,title);
      break;
    case "2" :
      url="cliweb02.pbl?reportno=01&template=712"+
          '&urnumber='+PatientURN.replace(/ /g,"+") +
          '&admissno='+PatientVIS.replace(/ /g,"+")+
          '&obsvtype=F';
      title = 'Fluid Chart';    
      openDocumentNonZoomable(CGIPath+url,title);
      break;
    case "3" :
      url="cliweb02.pbl?reportno=01&template=713"+
          '&urnumber='+PatientURN.replace(/ /g,"+") +
          '&admissno='+PatientVIS.replace(/ /g,"+")+
          '&obsvtype=N';
      title = 'Neuro Chart';
      openDocumentNonZoomable(CGIPath+url,title);
      break;
    case "4" :
      ObservationInitGrid();
      break;
    case "5" :
      ObservationInitTable();
      break;
    case "6" :
      url="cliweb02.pbl?reportno=01&template=714"+
           '&urnumber='+PatientURN.replace(/ /g,"+") +
           '&admissno='+PatientVIS.replace(/ /g,"+")
      title = 'Observations Grid View';
      openDocumentNonZoomable(CGIPath+url,title);
      break;
  }
}
function ObservationInitTable() {
  t = new Table();
  if(typeof AddObservationRows != 'undefined') {
    AddObservationRows();
  }else {
          ListLocation.innerHTML = "<ul class=ListRes>" +
                                "<li class=ItemRes style='text-align:center;'>" +
                                "No Observations Recorded for this Patient</li>"+
                                "<li class=ItemRes></li></ul>"
    return;;
  }

  SortOrderBy=1;
  t.rows.sort(RevStringSort);
  OS='<ul class=ListRes>';
  
  for(var i = 0; i < t.rows.length; i++) {

    var template = t.rows[i][0].indexOf("template");
    template = t.rows[i][0].substr(template,12);
    template = template.replace(/template=/g,"");
    template = parseInt(template,10) + 510;  //template number: 711,712,713
    if (template==614) template=704;
    OS += "<li class=ItemRes style='clear:right' onclick=\""+
          t.rows[i][0].replace(/javascript:/i,"").replace(/template=...&/i,"template="+
          template+"&")+";\">" +
         "<span class=ntTimeframe style='font-weight:bold;font-size:17px'>"+FormatDateTime(t.rows[i][1])+"</span>"  +
         "<span class=ntWhen style='line-height:20px;vertical-align:top'>"+
         "<span class='showResultStatus"+ t.rows[i][3]+"' style='display:inline-block'></span>" +
          t.rows[i][2]+" "  +
         "</span>";

    if(t.rows[i][25].replace(/ /g,"") == "B") {
       OS += "<span class=subscriptCenter><table border='0'>"+
           "<tr style='font-weight:bold;color:black;'><td>"+t.rows[i][4]+"</td><td>"+t.rows[i][5]+
	   "</td><td>"+t.rows[i][6]+"</td><td>"+t.rows[i][7]+"</td>"+
	   "<td>"+t.rows[i][8]+"</td><td>"+t.rows[i][9]+"</td></tr>"+
           "<tr><td>Pulse</td><td>Temp.</td><td>Resp.</td><td>BP</td>"+
	   "<td>SaO<sub>2</sub></td><td>F<sub>1</sub>O<sub>2</sub></td></tr>"+
	   "</table></span>";
     }else if(t.rows[i][25].replace(/ /g,"") == "N") {
         OS += "<span class=subscriptCenter><table border='0'>"+
           "<tr style='font-weight:bold;color:black;'><td>"+t.rows[i][15]+"</td><td>"+t.rows[i][16]+
           "</td><td>"+t.rows[i][17]+"</td><td>"+t.rows[i][18]+"</td>"+
           "<td>"+t.rows[i][21]+"</td><td>"+t.rows[i][22]+"</td></tr>"+
           "<tr><td>Eye</td><td>Verbal</td><td>Motor</td><td>Total</td>"+
           "<td>Pupil</td><td>Limbs</td></tr>"+
           "</table></span>" ;
     }else if(t.rows[i][25].replace(/ /g,"") == "P") {
         con=""
         switch (trim(t.rows[i][27])) {
         case "1": con = "Voice"; break;
         case "2": con = "Agitation/Confusion"; break;
         case "3": con = "Pain"; break;
         case "8": con = "Unresponsive"; break; }
         nfr=""
         nfma=""
         if (t.rows[i][32]=="1") nfma ="Not For Med Alert";
         if (t.rows[i][33]=="1") nfr = "Not For Resusitation";
         OS += "<span class=subscriptCenter><table width='100%' border='0'>"+
           "<tr style='font-weight:bold;color:black;'>" +
           "<td align=center>"+t.rows[i][28].replace(/\.00/,"")+" to "+t.rows[i][29].replace(/\.00/,"")+"</td>"+
           "<td align=center>"+t.rows[i][7].replace(/\//," to ")+"</td>"+
           "<td align=center>"+t.rows[i][30].replace(/\.00/,"")+" to "+t.rows[i][31].replace(/\.00/,"")+"</td>"+
           "<td align=center>"+t.rows[i][14]+"</td><td>"+con+"</td>"+
           "<td style='font-weight:bold;color:blue;text-align:right'>&nbsp;"+nfma+"</td></tr>"+
           "<tr><td align=center>Resp</td><td align=center>BP</td>"+
           "<td align=center>Pulse</td><td align=center>Urine</td>"+
           "<td>Consciousness</td>     "+
           "<td style='font-weight:bold;color:blue;text-align:right'>&nbsp;"+nfr+"</td></tr>"+
           "</table></span>" ;
    }else if(t.rows[i][25].replace(/ /g,"") == "F") {
         OS += "<span class=subscriptCenter><table width='100%' border='0'>"+
           "<tr style='font-weight:bold;color:black;'>";

           if(t.rows[i][14].replace(/ /g,"") != "") {
             OS += "<td style='width:20%;'>&nbsp;</td><td style='width:20%;'>" +
                    t.rows[i][13] +"</td><td style='font-weight:bold;width:20%'>" +
                    t.rows[i][14]+" mL</td>";
           }
           else {
             OS += "<td style='width:20%;'>&nbsp;</td><td style='width:20%;'>&nbsp;</td><td style='width:20%;'>&nbsp;</td>";
           }

           if(t.rows[i][12].replace(/ /g,"") != "") {
             OS += "<td style='font-weight:bold;color:red;width:20%'>" + t.rows[i][11] +
                   "</td><td style='font-weight:bold;color:red;width:20%'>"+t.rows[i][12]+" mL</td>";
           }
           else {
             OS += "<td style='width:20%;'>&nbsp;</td><td style='width:20%;'>&nbsp;</td>";
           }

          if(t.rows[i][19].replace(/ /g,"") != "") {
             OS += "<tr><td>Action Taken: </td><td>" + t.rows[i][19] +"</td></tr>";
           }

           OS += "</table></span>";

     }

     OS += "<span class=subscriptCenter>Comment : "+t.rows[i][20]+"</span>" +
           "<span class=ntTimeframe>"+FormatCommentAge(t.rows[i][1])+"</span>"  +
           "<span class=ntWhen>"+t.rows[i][23]+"</span>"  +
           "</span></li>";

  }

  OS +=   "</ul>";
  ListLocation.innerHTML=OS;
  
  if (t.rows.length == 0) {
      ListLocation.innerHTML += "<ul class=ListRes>" +
                                "<li class=ItemRes style='text-align:center;'>" +
                                "No Observations Recorded for this Patient</li>"+
                                "<li class=ItemRes></li></ul>"
  }

}
//------------------------------------------------------------
// Tab Functions Clinical Documents
//------------------------------------------------------------
function ShowPatientDocuments(filter03) {
 if (typeof filter03 === 'undefined') { filter03 = ''; }
 wtitle=ClinicalDocumentsTitle(filter03);
 wscript="DocInitTable('')";
 wurl="cliweb08.php?reportno=1&template=1&filter03="+filter03;
 ShowScreen(wtitle,wscript,wurl);
}
function ClinicalDocumentsTitle(filter03) {
  var SectionName="Correspondence/Documents";
  if (filter03=='A') SectionName='Administrative Documents';
  if (filter03=='C') SectionName='Clinical Documents';
  if(clinicalDocumentsViewOnly != true) {
    wtitle="<span class=AddItem></span> "+SectionName+
           "<span style='float:right;'>"+
           "<select class=stdButton title='Add Document' onchange='AddDocumentType(this);'>"+
           "<option>Add </option>"+
           "<option value=1>Create Document</option>"+
           "<option value=2>Upload Document</option>"+
           "</select></span>";
  } else {
    wtitle="<span class=AddItem></span> "+SectionName;
  }
  return wtitle;
}
function DocumentAddTypeFilter(typeFilter) {
 var clinicDocRecordFound = false;
 var newFilter=true;
 var markAsDeleted = 1;
 var markAsDraft = 2;
 var markAsCurrentDraft = 3;
 var filterArray = new Array();
 for(var i = 0; i < t.rows.length; i++) {
   if(!(t.rows[i][16] == markAsDeleted||t.rows[i][16] == markAsDraft)||showAllDocuments) {
     newFilter=true;
     for(var j = 0; j<filterArray.length;j++) {
       if (filterArray[j][0]==t.rows[i][4]) {
         filterArray[j][2]++;
         newFilter=false;
       }
     }
     if (newFilter) {
      filterArray[filterArray.length] = new Array();
      filterArray[filterArray.length-1][0] = t.rows[i][4];
      filterArray[filterArray.length-1][1] = t.rows[i][11];
      if (isWhitespace(t.rows[i][11])) filterArray[filterArray.length-1][1] = t.rows[i][4];
      filterArray[filterArray.length-1][2] = 1;
     }
   }
 }
 OS="";
 for(var j = 0; j< filterArray.length;j++) {
   OS+="<span class='stdButton' " +
       " style='vertical-align:top;height:35px;width:100px;margin-top:3px;margin-left:3px;' "+
       "onclick='DocInitTable(\""+filterArray[j][0]+"\");'>"+
          filterArray[j][1]+"("+filterArray[j][2]+")</span>";
 }
 if (!isWhitespace(typeFilter)) {
   OS+="<span class='stdButton' " +
       " style='vertical-align:top;height:35px;width:100px;margin-top:3px;margin-left:3px;' "+
       "onclick='DocInitTable(\"\");'>Show<br>All</span>";
 }
 return "<div style='width:100%;margin-top:5px;'>"+ OS +"</div>";
}
function DocInitTable(typeFilter) {
 top.setCookie('ClinicalDocument','');
 var markAsDeleted = 1;
 var markAsDraft = 2;
 var markAsCurrentDraft = 3;
 var clinicDocRecordFound = false;
 t = new Table();
 AddDocRows();
 SortOrderBy=3;
 t.rows.sort(RevStringSort);
 var FilterCode=DocumentAddTypeFilter(typeFilter);
 OS='<ul class=ListRes>'
 for(var i = 0; i < t.rows.length; i++) {
   if(!(t.rows[i][16] == markAsDeleted||t.rows[i][16] == markAsDraft)||showAllDocuments) {
     if(isWhitespace(typeFilter)||t.rows[i][4] == typeFilter) {
       clinicDocRecordFound = true;
       DocType="DEF"
       if (t.rows[i][0].match(/\.pdf/i)) DocType="PDF";
       if (t.rows[i][0].match(/\.gif/i)) DocType="IMG";
       if (t.rows[i][0].match(/\.jpg/i)) DocType="IMG";
       if (t.rows[i][0].match(/\.png/i)) DocType="IMG";
       if (t.rows[i][0].match(/\.doc/i)) DocType="OFF";
       if (t.rows[i][0].match(/\.xls/i)) DocType="OFF";
       OS += "<li class=ItemRes onclick=\"LinkDoc('"+
             t.rows[i][0]+"','"+
             t.rows[i][1]+"','"+
             t.rows[i][16]+"','"+
             t.rows[i][2]+"');\">" +
             "<span class='showDocumentIcon"+DocType+
             "' style='float:left;' ></span>"+ t.rows[i][11]
       if (t.rows[i][16] == markAsCurrentDraft) OS += "  (Current Draft)"
       if (t.rows[i][16] == markAsDraft) OS += "  (Draft)"
       if (t.rows[i][16] == markAsDeleted) OS += "  (Deleted)"
       OS += "<span class=ntWhen style='float:right'>"+t.rows[i][12]+"</span><br>" 
       if (!isWhitespace(t.rows[i][8]+t.rows[i][9])) {
         OS+= "<span class=subscriptLeft>From : "+t.rows[i][8]+"</span>" 
         if (!isWhitespace(t.rows[i][9])) {
           OS += "<span class=subscriptRight style='float:right'>To : "+t.rows[i][9]+"</span>"
         }
         OS += "<br>";
       }
       if (!isWhitespace(t.rows[i][6]))  {
          OS += "<span  class=listNotes>Subject : "+t.rows[i][6]+"</span>"
       }
       OS += "<span class=ntTimeframe>"+FormatCommentAge(t.rows[i][3])+"</span>"  +
             "<span class=ntWhen>"+FormatDateTime(t.rows[i][3])+"</span>"  +
             "</li>";
     }
   }
 }
 OS+='</ul>'
 ListLocation.innerHTML=FilterCode+OS;

 if (!clinicDocRecordFound) {
   ListLocation.innerHTML += "<ul class=ListRes>" +
                             "<li class=ItemRes style='text-align:center;'>" + 
                             "No Clinical Documents Recorded for this Patient"+
                             "</li><li class=ItemRes></li></ul>"
 }
}

function LinkDoc(linkurl1,linkurl2,docStatus,detailky) {
  var actionBtn = top.document.getElementById('actionButton');
  actionBtn.className = "SpanButton RightAlign";
  actionBtn.innerText = "Done";
  actionBtn.onclick = function() { top.CloseDocument() }
  if (docStatus == '3') {
    top.setCookie('ClinicalDocument',detailky);
    linkurl = CGIPath + "patweb98.pbl?reportno=1&template=302"
    linkurl = linkurl + "&urnumber="+PatientURN;
    linkurl = linkurl + "&admissno="+PatientVIS;
    openDocument(linkurl,"Edit Clinical Document") ;
  }
  else {
    if (linkurl2.match(/\.pdf/i)&&pdfViewerPHP) {
       linkurl= PHPPath+ "pdfview.php?path="+linkurl2;
       openDocument(linkurl,"PDF Document Viewer") ;
       return;
    }
    if (linkurl1.match(/DocumentView.php/)) {
       linkurl1= CGIPath+linkurl1;
    }
    openDocument(linkurl1,"Document Details") ;
  }
}

function AddDocument(el) {
  url="patweb98.pbl?reportno=01&template=302"+
      "&urnumber="+PatientURN.replace(/ /g,"+")+
      "&admissno="+PatientVIS.replace(/ /g,"+");
  title = "Create Clinical Document";
  openDocumentNonZoomable(CGIPath+url,title);
}
function AddDocumentType(el) {
  value=el.options[el.selectedIndex].value
  el.selectedIndex=0;
  if(typeof value != 'undefined') {
    switch(parseInt(value,10)) {
      case 1:
        url="patweb98.pbl?reportno=01&template=302"+
            "&urnumber="+PatientURN.replace(/ /g,"+")+
            "&admissno="+PatientVIS.replace(/ /g,"+");
        title = "Create Document";
        openDocumentNonZoomable(CGIPath+url,title);
        break;
      case 2:
        url="cliweb08.pbl?reportno=01&template=022"+
            "&urnumber="+PatientURN.replace(/ /g,"+")+
            "&admissno="+PatientVIS.replace(/ /g,"+");
        title = "Upload Document";
        openDocumentNonZoomable(CGIPath+url,title);
        break;
      case 3:
        url="patweb98.pbl?reportno=01&template=304"+
            "&urnumber="+PatientURN.replace(/ /g,"+")+
            "&admissno="+PatientVIS.replace(/ /g,"+");
        title = "Diagnostic Image";
        openDocumentNonZoomable(CGIPath+url,title);
        break;
      default:
        break;
    }
  }
}
//----------------------------------------------------------------------------
// Theatre
//----------------------------------------------------------------------------
function ShowPatientTheatre() {
 wtitle="<span class=AddItem></span> Theatre History";
 wscript="TheatreInitTable()";
 wurl="oprweb06.pbl?reportno=11&template=711";
 ShowScreen(wtitle,wscript,wurl);
}
function TheatreInitTable() {
 t = new Table();
 AddTheatreRows();
 SortOrderBy=1;
 t.rows.sort(RevStringSort);
 OS='<ul class=ListRes>'
 for(var i = 0; i < t.rows.length; i++) {
   OS += "<li class=ItemRes onclick=\"LinkThe('"+t.rows[i][2]+"');\">" +
         "<span class=ntTimeframe style='font-weight:bold;font-size:17px'>"
   if (!isWhitespace(t.rows[i][3])) {
     OS+=t.rows[i][3]+"</span>"  
   } else {
     OS+="No Description Available</span>"  
   }
   OS += "<br/>"
   OS += "<span class=subscriptLeft>Surgeon : "+t.rows[i][4]+"</span>"
   OS += "<span class=subscriptRight>Status: "+t.rows[i][7]+"</span><br>"
   OS += "<span class=subscriptLeft>Anaesthetist : "+t.rows[i][13]+"</span>"
   OS += "<span class=subscriptRight>Anae Type : "+t.rows[i][9]+"</span><br>"
   OS += "<span class=ntTimeframe>"+FormatCommentAge(t.rows[i][1])+"</span>"  +
         "<span class=ntWhen>"+FormatDateTime(t.rows[i][1])+"</span>"  +
         "</li>"
 }
 OS+='</ul>'
 ListLocation.innerHTML = OS;

 if (t.rows.length == 0) {
   ListLocation.innerHTML += "<ul class=ListRes>" +
                             "<li class=ItemRes style='text-align:center;'>" + 
                             "No Theatre Events Recorded for this Patient"+
                             "</li><li class=ItemRes></li></ul>"
 }
}
function LinkThe(linkurl) {
  openDocumentNonZoomable(CGIPath+linkurl,"Theatre Procedure Details");
}
//----------------------------------------------------------------------------
// Visits
//----------------------------------------------------------------------------
function ShowPatientVisits() {
 wtitle="<span class=AddItem></span> Visit History";
 wscript="VisitInitTable1()";
 wurl="patweb98.pbl?reportno=1&template=719";
 ShowScreen(wtitle,wscript,wurl);
}
function ShowPatientVisits2() {
 wtitle="<span class=AddItem></span> Visit History";
 wscript="VisitInitTable2()";
 wurl="patweb98.pbl?reportno=1&template=719";
 ShowScreen(wtitle,wscript,wurl);
}
function VisitInitTable1() {
 t = new Table();
 AddTableRows()
 SortOrderBy=2;
 t.rows.sort(RevStringSort);
 OS='<ul class=ListRes>'
 for(var i = 0; i < t.rows.length; i++) {
   visitType=t.rows[i][14]
   if (isWhitespace(visitType)) {
     visitType=t.rows[i][16];
     if (t.rows[i][16]=="Unkwn") visitType="Unknown";
     if (t.rows[i][16]=="AH   ") visitType="Allied Health";
     if (t.rows[i][16]=="EV   ") visitType="Event";
     if (t.rows[i][16]=="RF   ") visitType="Referral";
     if (t.rows[i][16]=="COM  ") visitType="Community";
     if (t.rows[i][16]=="OP   ") visitType="Outpatient";
     if (t.rows[i][16]=="WL   ") visitType="Waitlist";
     if (t.rows[i][16]=="W/L  ") visitType="Waitlist";
     if (t.rows[i][16]=="Book ") visitType="Booking";
     if (t.rows[i][16]=="EMG  ") visitType="Emergency";
     if (t.rows[i][16]=="IP   ") visitType="Inpatient";
   }
   OS += "<li class=ItemRes onclick=\""+t.rows[i][0].replace(/javascript:/i,"")+";\">" +
         "<span class=ntTimeframe style='font-weight:bold;font-size:17px'>"+FormatDate(t.rows[i][2])+"</span>"  +
         "<span class=subscriptRight style='float:right'>Status : "+t.rows[i][19]+"</span><br>" +
         "<span class=subscriptLeft>Type : "+visitType+"</span>" +
         "<span class=subscriptRight style='float:right'>"+t.rows[i][14]+"</span><br>" +
         "<span class=subscriptCenter>"+t.rows[i][6]+"</span>" +
         "<span class=subscriptCenter>"+t.rows[i][21]+"</span>" +
         "<span class=ntTimeframe>"+FormatCommentAge(t.rows[i][2])+"</span></li>"  
 }
 OS+='</ul>';
 ListLocation.innerHTML=OS;

 if (t.rows.length == 0) {
      ListLocation.innerHTML += "<ul class=ListRes>" +
                                "<li class=ItemRes style='text-align:center;'>" +
                                "No Visits Recorded for this Patient</li><li class=ItemRes></li></ul>"
 }
}
function VisitInitTable2() {
 t = new Table();
 AddTableRows()
 SortOrderBy=2;
 t.rows.sort(RevStringSort);
 OS='<ul class=ListRes>'
 for(var i = 0; i < t.rows.length; i++) {
   visitType=t.rows[i][14]
   visitType1=t.rows[i][16];
   if (t.rows[i][16].replace(/ /g,"")=="Unkwn") visitType1="Unknown";
   if (t.rows[i][16].replace(/ /g,"")=="AH")    visitType1="Allied Health";
   if (t.rows[i][16].replace(/ /g,"")=="EV")    visitType1="Event";
   if (t.rows[i][16].replace(/ /g,"")=="RF")    visitType1="Referral";
   if (t.rows[i][16].replace(/ /g,"")=="COM")   visitType1="Community";
   if (t.rows[i][16].replace(/ /g,"")=="OP")    visitType1="Outpatient";
   if (t.rows[i][16].replace(/ /g,"")=="WL")    visitType1="Waitlist";
   if (t.rows[i][16].replace(/ /g,"")=="W/L")   visitType1="Waitlist";
   if (t.rows[i][16].replace(/ /g,"")=="Book")  visitType1="Booking";
   if (t.rows[i][16].replace(/ /g,"")=="EMG")   visitType1="Emergency";
   if (t.rows[i][16].replace(/ /g,"")=="IP")    visitType1="Inpatient";
   OS += "<li class=ItemRes onclick=\""+t.rows[i][0].replace(/javascript:/i,"")+";\">" +
         "<span class=ntTimeframe style='font-weight:bold;font-size:17px'>"+visitType1+"</span>"  +
         "<span class=subscriptRight style='float:right'>Status : "+t.rows[i][19]+"</span><br>" +
         "<span class=subscriptLeft>Unit : "+visitType+"</span>" +
         "<span class=subscriptRight>Doctor : "+t.rows[i][6]+"</span><br>" +
         "<span class=subscriptCenter>"+t.rows[i][21]+"</span>" +
         "<span class=ntTimeframe>"+FormatCommentAge(t.rows[i][2])+"</span>"+
         "<span class=ntWhen>"+FormatDate(t.rows[i][2])+"</span></li>"
 }
 OS+='</ul>';
 ListLocation.innerHTML=OS;

 if (t.rows.length == 0) {
      ListLocation.innerHTML += "<ul class=ListRes>" +
                                "<li class=ItemRes style='text-align:center;'>" +
                                "No Visits Recorded for this Patient</li><li class=ItemRes></li></ul>"
 }
}
/*******************************************************************************
 *	linkPatient - link to the patient's visits
 *******************************************************************************/
function linkPatient(Urnumber,VisitNo,VisitType,SecOpt,Casekeys,Site,AAEFlag,EVNTFlag) {
  var titleString = "";
  var theURL = "";
  var outpsite = document.getElementById("outpsite").innerText;
  
  switch(VisitType) {
    case "1":
      titleString = "Emergency Visit Details";
      theURL = "emrweb02.pbl?reportno=1&template=401&urnumber="+Urnumber.replace(/ /g,"+") +
               "&admissno="+VisitNo.replace(/ /g,"+");
      break;
    case "2":
      titleString = "Appointment Details";
      theURL = "outweb02.pbl?reportno=3&template=701&urnumber="+Urnumber.replace(/ /g,"+") +
               "&admissno="+VisitNo.replace(/ /g,"+") +
               "&outpsite="+outpsite.replace(/ /g,"+") +
               "&casekeys="+Casekeys.replace(/ /g,"+");
      break;
    case "3":
      titleString = "Visit Details";
      theURL = "patweb98.pbl?reportno=1&template=785&urnumber="+Urnumber.replace(/ /g,"+") +
               "&admissno="+VisitNo.replace(/ /g,"+");

   /*   if(outpsite != Site){
        alertify.alert("Invalid Outpatient Site Security.");
        return;
      } */
      break;
    case "4":
      titleString = "Appointment Details";
      theURL = "outweb02.pbl?reportno=3&template=715&urnumber="+Urnumber.replace(/ /g,"+") +
               "&admissno="+VisitNo.replace(/ /g,"+") +
               "&casekeys="+Casekeys.replace(/ /g,"+")+
               "&outpsite="+outpsite.replace(/ /g,"+");
 
      if(outpsite != Site) {
        alertify.alert("Invalid Outpatient Site Security.");
        return;
      }
      break;
    case "5":
      break;
    case "6":
      alertify.alert("This is a community health visit.  Details not available");
      return;
      break;
    case "7":
      titleString = "Visit Details";
      theURL = "patweb89.pbl?reportno=1&template=720&urnumber="+Urnumber.replace(/ /g,"+")+
               "&admissno="+VisitNo.replace(/ /g,"+");
      break;
    case "8":
      titleString = "Waiting List Details";
      theURL = "watweb01.pbl?reportno=2&template=701&urnumber="+Urnumber.replace(/ /g,"+") +
               "&admissno="+VisitNo.replace(/ /g,"+") +
               "&casekeys="+Casekeys.replace(/ /g,"+");
      break;
    case "9":
      titleString = "Visit Details";
      theURL = checkEventFlag(Urnumber,VisitNo,outpsite,Casekeys,EVNTFlag,SecOpt);
      break;
    default:
      break;
  }
  
  if(theURL != "") {
    openSection(theURL,titleString);
  }

}
function checkEventFlag(Urnumber,VisitNo,outpsite,Casekeys,evntNo,SecOpt) {
  switch(evntNo) {
    case "1":
      theURL = "patweb81.pbl?reportno=1&template=708&urnumber="+Urnumber.replace(/ /g,"+") +
               "&admissno="+VisitNo.replace(/ /g,"+");
      return theURL;
      break;
    case "2":
      theURL = "patweb81.pbl?reportno=1&template=705&urnumber="+Urnumber.replace(/ /g,"+") +
               "&admissno="+VisitNo.replace(/ /g,"+");
      return theURL;
      break;
    case "3":
      theURL = "patweb81.pbl?reportno=1&template=703&urnumber="+Urnumber.replace(/ /g,"+") +
               "&admissno="+VisitNo.replace(/ /g,"+");
      return theURL;
      break;
    default:
      break;
  }
  if(SecOpt == "2") {
    theURL = "patweb81.pbl?reportno=1&template=801&urnumber="+Urnumber.replace(/ /g,"+") +
             "&admissno="+VisitNo.replace(/ /g,"+");
  } else if(SecOpt=="0") {
      theURL="allweb02.pbl?reportno=2&template=801&urnumber="+Urnumber.replace(/ /g,"+") +
             "&admissno="+VisitNo.replace(/ /g,"+") +
             "&outpsite="+outpsite.replace(/ /g,"+") +
             "&casekeys="+Casekeys.replace(/ /g,"+");
  } else {
      alertify.alert("Screen is not viewable by all departments");
      return "";
  }
  return theURL;
}
//------------------------------------------------------------
// Tab Functions Forms Link
//------------------------------------------------------------
function ShowPatientForms(FormTypeID,FormName) {
 wtitle=FormTitle(FormTypeID,FormName)
 wscript="FormInitTable()";
 wurl="../forms/PatientFormsAJAX.php?FormTypeID="+FormTypeID;
 ShowScreen(wtitle,wscript,wurl);
}
function FormInitTable() {
 t = new Table();
 AddTableRows();
 SortOrderBy=3;
 t.rows.sort(RevStringSort);
 OS='<ul class=ListRes>'
 for(var i = 0; i < t.rows.length; i++) {
   OS += "<li class=ItemRes onclick=\"onRowClick('"+i+"');\">" +
           "<span class=ntWho><span class='showFormIcon style='float:left;'></span>"+
           t.rows[i][4] +"</span>" +
           "<span class=ntType >Status : "+t.rows[i][6]+ "</span><br>" +
           "<span class=subscriptLeft >Created By : "+t.rows[i][5]+ "</span><br>" +
           "<span class=summaryDisplay> "+t.rows[i][10]+ "</span>" +
           "<span class=ntTimeframe>"+FormatCommentAge(t.rows[i][3])+"</span>"  +
           "<span class=ntWhen>"+FormatDateTime(t.rows[i][3])+"</span>"  +
           "</li>"
 }
 OS+='</ul>'
 ListLocation.innerHTML = OS;

 if (t.rows.length == 0) {
   ListLocation.innerHTML += "<ul class=ListRes>" +
                             "<li class=ItemRes style='text-align:center;'>" + 
                             "No Records for this Patient"+
                             "</li><li class=ItemRes></li></ul>"
 }
}
function FormTitle(FormTypeID,FormName) {
  wtitle="<span class=AddItem></span> "+FormName+
         "<span style='float:right;'>"+
         "<select class=stdButton title='Form'id=idFormClass onchange='AddForm(this);' onclick='this.selectedIndex=0;'>"+
         "<option>New</option>"+
         "</select></span>";
  return wtitle;
}
function getFluidsTable() {
  var FluidsDates  = new Array();
  var FluidsSummary = new Array();
  for (var i=0;i<t.rows.length;i++) {
    datevalue = FormatGridDateTime(t.rows[i][1].substr(0,8))
    outputVol=parseInt(t.rows[i][12].replace(/\s/g,""),10);
    inputVol=parseInt(t.rows[i][14].replace(/\s/g,""),10);
    if (isNaN(outputVol)) outputVol=0;
    if (isNaN(inputVol)) inputVol=0;
    NewDate=true;
    for(var j = 0; j < FluidsDates.length; j++) {
      if (FluidsDates[j]==datevalue) {
         FluidsSummary[j]=FluidsSummary[j]+inputVol-outputVol;
         NewDate=false;
      }
    }
    if (NewDate==true) {
      FluidsDates[FluidsDates.length]=datevalue;
      FluidsSummary[FluidsSummary.length]=inputVol-outputVol;
    }
  }
  var returnString = "<h4>Fluid Balance</h4><table class=CumulativeResults><tr><td>Date</td>"
  for (var i=0;i < FluidsDates.length; i++) {
    returnString += "<td align=right class=GridHeadingCell>"+FluidsDates[i]+"</td>"
  }
  returnString += "</tr><tr><td>Total</td>"
  for (var i=0;i < FluidsDates.length; i++) {
    if (FluidsSummary[i]<0) {
      returnString += "<td style='color:darkred' class=GridCellRight>"+FluidsSummary[i]+"</td>"
    } else {
      returnString += "<td class=GridCellRight>"+FluidsSummary[i]+"</td>"
    }
  }
  returnString += "</tr></table>"
  return returnString;
}
function ObservationInitGrid() {
  t = new Table();
  if(typeof AddObservationRows != 'undefined') {
    AddObservationRows();
  }else {
          ListLocation.innerHTML = "<ul class=ListRes>" +
                                "<li class=ItemRes style='text-align:center;'>" +
                                "No Observations Recorded for this Patient</li>"+
                                "<li class=ItemRes></li></ul>"
    return;;
  }

  SortOrderBy=1;
  t.rows.sort(StringSort);
  startRow=t.rows.length-10;
  if (startRow<0) startRow=0
  DisplayObservationGrid(startRow);
}
function DisplayObservationGrid(sr) {
  OS='';
  startRow=sr;
  endRow=parseInt(startRow,10)+10;
  if (endRow>t.rows.length) endRow=t.rows.length;
  OS+='<br><table class="CumulativeResults">'+
     '<tr><td class=GridHeadingCell>'+
//     '<input type=button style="width:25px;" value="<" onclick=ShowOlder()>'+
     '&nbsp;Date' +
     '<br>'+
//     '<input type=button style="width:25px;" value=">" onclick=ShowNewer()>'+
     '&nbsp;Time</td>';
  var colCount=0;
  for(var i = startRow; i < endRow; i++) {
      colCount++;
      var template = t.rows[i][0].indexOf("template");
      template = t.rows[i][0].substr(template,12);
      template = template.replace(/template=/g,"");
      template = parseInt(template,10) + 510;  //template number: 711,712,713
      if (template==614) template=704;
      OS+="<td align=right class=GridHeadingCell "+
          "onclick=\""+ t.rows[i][0].replace(/javascript:/i,"").replace(/template=...&/i,"template="+
          template+"&")+";\">" +FormatGridDateTime(t.rows[i][1])+"</td>"
  }
  for(var i = colCount; i < 10 ; i++) {
    OS+="<td class=HeadingCell>&nbsp;</td>";
  }
  OS+="</tr>"
  GridOutputRow(0,'Basic','GridRowHeading','GridCellRight','Blank')
  GridOutputRow(4,'Pulse','GridRowEven','GridCellRight','Pulse')
  GridOutputRow(5,'Temp.','GridRowOdd','GridCellRight','Temp')
  GridOutputRow(6,'Resp.','GridRowEven','GridCellRight','Resp')
  GridOutputRow(7,'BP','GridRowOdd','GridCellRight','BP')
  GridOutputRow(8,'O<sup>2</sup> Sats. ','GridRowEven','GridCellRight','OxySat')
  GridOutputRow(9,'O<sup>2</sup> Flow. ','GridRowOdd','GridCellRight','OxyFlow')
  GridOutputRow(28,'Blood Sugar ','GridRowEven','GridCellRight','BSL')
  GridOutputRow(36,'Pain Level ','GridRowOdd','GridCellRight','Pain')
  GridOutputRow(30,'Level of Con. ','GridRowEven','GridCellRight','Neuro')
//  GridOutputRow(19,'Cardiac Rhythm','GridRowOdd','GridCellRight','')
//  GridOutputRow(27,'Bowel Action','GridRowOdd','GridCellRight','')
  GridOutputRow(0,'Height/Weight','GridRowHeading','GridCellRight','Blank')
  GridOutputRow(40,'Weight ','GridRowOdd','GridCellRight','HW')
  GridOutputRow(41,'Height ','GridRowEven','GridCellRight','HW')
  GridOutputRow(38,'BMI ','GridRowOdd','GridCellRight','HW')
  GridOutputRow(39,'BSA ','GridRowEven','GridCellRight','HW')
  GridOutputRow(0,'Neurological','GridRowHeading','GridCellRight','Blank')
  GridOutputRow(15,'Eyes ','GridRowOdd','GridCellRight','GCS')
  GridOutputRow(16,'Verbal ','GridRowEven','GridCellRight','GCS')
  GridOutputRow(17,'Motor ','GridRowOdd','GridCellRight','GCS')
  GridOutputRow(18,'GCS ','GridRowEven','GridCellRight','GCS')
  GridOutputRow(23,'Entered By','GridRowEven','GridCellCenter','Initials')
  GridOutputRow(0,'Fluids','GridRowHeading','GridCellRight','Blank')
  GridOutputRow(11,'Output Type','GridRowOdd','GridCellRight','')
  GridOutputRow(12,'Volume','GridRowOdd','GridCellRight','')
  GridOutputRow(13,'Input Type','GridRowOdd','GridCellRight','')
  GridOutputRow(14,'Volume','GridRowOdd','GridCellRight','')
  GridOutputRow(20,'Comment','GridRowOdd','GridCellRight','')
  OS += "</table>"
  OS += getFluidsTable();
  ListLocation.innerHTML=OS;
}
function GridOutputRow(columnNo,rowTitle,tableRowClass,tableCellClass,rowFormat) {
  OS+='<tr class='+tableRowClass+'><td>'+rowTitle+'</td>';
  var colCount=0;
  for(var i = startRow; i < endRow ; i++) {
    colCount++;
    switch(rowFormat) {
     case "HW": 
       if (t.rows[i][2].replace(/ /g,"")=="Basic") {
         OS+="<td class="+tableCellClass+">"+t.rows[i][columnNo]+"</td>";
       } else {
         OS+="<td class="+tableCellClass+">&nbsp;</td>";
       }
       break;
     case "Blank": 
       OS+="<td class="+tableCellClass+">&nbsp;</td>";
       break;
     case "DateTime": 
       OS+="<td class="+tableCellClass+">"+FormatDateTime(t.rows[i][columnNo])+"</td>";
       break;
     case "Initials": 
       OS+="<td class="+tableCellClass+">"+FormatInitials(t.rows[i][columnNo])+"</td>";
       break;
     case "Pulse": 
       alertClass=CheckPulse(t.rows[i][columnNo]);
       OS+="<td class='"+alertClass+" "+tableCellClass+"'>"+t.rows[i][columnNo]+"</td>";
       break;
     case "Resp": 
       alertClass=CheckResp(t.rows[i][columnNo]);
       OS+="<td class='"+alertClass+" "+tableCellClass+"'>"+t.rows[i][columnNo]+"</td>";
       break;
     case "Temp": 
       alertClass=CheckTemp(t.rows[i][columnNo]);
       OS+="<td class='"+alertClass+" "+tableCellClass+"'>"+t.rows[i][columnNo]+"</td>";
       break;
     case "BP": 
       alertClass=CheckBP(t.rows[i][columnNo]);
       OS+="<td class='"+alertClass+" "+tableCellClass+"'>"+t.rows[i][columnNo]+"</td>";
       break;
     case "Neuro": 
       alertClass=CheckNeuro(t.rows[i][columnNo]);
       NeuroName="";
       var val=t.rows[i][columnNo].replace(/ /g,"");
       if (val==".00") val="0"
       switch (parseInt(val,10)) {
         case 8: NeuroName="Unresponsive";break;
         case 3: NeuroName="Pain";break;
         case 2: NeuroName="Confused";break;
         case 1: NeuroName="Voice";break;
         case 0: NeuroName="";break;
       }
       OS+="<td class='"+alertClass+" "+tableCellClass+"'>"+NeuroName+"</td>";
       break;
     case "BSL": 
       if (t.rows[i][columnNo]>0) {
         alertClass=CheckBSL(t.rows[i][columnNo]);
         OS+="<td class='"+alertClass+" "+tableCellClass+"'>"+t.rows[i][columnNo]+"</td>";
       } else {
         OS+="<td class="+tableCellClass+">&nbsp;</td>";
       }
       break;
     case "OxySat": 
       alertClass=CheckOxySat(t.rows[i][columnNo]);
       OS+="<td class='"+alertClass+" "+tableCellClass+"'>"+t.rows[i][columnNo]+"</td>";
       break;
     default:
       OS+="<td class="+tableCellClass+">"+t.rows[i][columnNo]+"</td>";
    }
  }
  for(var i = colCount; i < 10 ; i++) {
    OS+="<td class="+tableCellClass+">&nbsp;</td>";
  }
  OS+="</tr>"
}
function CheckNeuro(thisValue) {
  if (!isWhitespace(thisValue)) {
    if (parseInt(thisValue)==8) {
       return "AlertLevel2";
    }
    if (parseInt(thisValue)==3) {
       return "AlertLevel1";
    }
    if (parseInt(thisValue)==2) {
       return "AlertLevel1";
    }
  }
  return "";
}
function CheckPulse(thisValue) {
  if (!isWhitespace(thisValue)) {
    if (parseInt(thisValue,10)<40) {
       return "AlertLevel2";
    }
    if (parseInt(thisValue,10)>140) {
       return "AlertLevel2";
    }
    if (parseInt(thisValue,10)<50) {
       return "AlertLevel1";
    }
    if (parseInt(thisValue,10)>120) {
       return "AlertLevel1";
    }
  }
  return "";
}
function CheckResp(thisValue) {
  if (!isWhitespace(thisValue)) {
    if (parseInt(thisValue,10)<5) {
       return "AlertLevel2";
    }
    if (parseInt(thisValue,10)>30) {
       return "AlertLevel2";
    }
    if (parseInt(thisValue,10)<10) {
       return "AlertLevel1";
    }
    if (parseInt(thisValue,10)>25) {
       return "AlertLevel1";
    }
  }
  return "";
}
function CheckTemp(thisValue) {
  if (!isWhitespace(thisValue)) {
    if (thisValue<35.5) {
      return "AlertLevel1";
    }
    if (thisValue>38.5) {
      return "AlertLevel1";
    }
  }
  return "";
}

function CheckBSL(thisValue) {
  if (!isWhitespace(thisValue)) {
    if (thisValue<1) {
       return "AlertLevel2";
    }
    if (thisValue<4) {
       return "AlertLevel1";
    }
  }
  return "";
}
function CheckBP(thisValue) {
  if (!isWhitespace(thisValue.replace(/\/.*/,""))) { /* BP */
    if (parseInt(thisValue.replace(/\/.*/,""),10)<90) {
       return "AlertLevel2";
    }
    if (parseInt(thisValue.replace(/\/.*/,""),10)>200) {
       return "AlertLevel2";
    }
    if (parseInt(thisValue.replace(/\/.*/,""),10)<100) {
       return "AlertLevel1";
    }
    if (parseInt(thisValue.replace(/\/.*/,""),10)>180) {
       return "AlertLevel1";
    }
  }
  return "";
}
function CheckOxySat(thisValue) {
  if (!isWhitespace(thisValue)) { /* Pulse */
    if (parseInt(thisValue,10)<90) {
       return "AlertLevel2";
    }
    if (parseInt(thisValue,10)<95) {
       return "AlertLevel1";
    }
  }
  return "";
}
function FormatInitials(Name) {
 NameFields=Name.split(" ");
 Initials=""
 for (i=0;i<NameFields.length;i++) {
   Initials+=NameFields[i].substr(0,1)
 }
 return( "<p title=\""+Name+"\">" + Initials + "</p>");
}
//------------------------------------------------------------
// Tab Functions Patient Care Plan Actions
//------------------------------------------------------------
function ShowPatientActions() {
  ShowScreen(ActionTitle(),"","patweb98.pbl?reportno=04&template=016");
}
function ActionTitle() {
    wtitle="<span class=AddItem onclick='addAction();'></span> Care Plan Actions"+
           "<span class='stdButton RightAlign' onclick='addAction();'>Add</span>";
    return wtitle;
}
//------------------------------------------------------------
// MedChart Services Calls
//------------------------------------------------------------
function GetAllergies() {
  if (UseMedChartAllergies=="N") return;
  if (GetAllergyStatus()) {
    var xmlHttp = createHttpObject();
    theURL = "MedchartServices.php?reportno=4&urnumber="+PatientURN+
             "&admissno="+PatientVIS+
             "&httprand="+Math.random();
    xmlHttp.open("GET", theURL, false);
    xmlHttp.send();
    if (xmlHttp.status == 200) {
      if (xmlHttp.responseText.substr(0,5)=="ERROR") {
        return;
      } else {
        if (xmlHttp.responseText!="") {
          jsonAllergies = eval("("+xmlHttp.responseText+")"); //convert text to javascript object
          ProcessAllergies()
        }
      }
    }
  }
}
function GetAllergyStatus() {
  var xmlHttp = createHttpObject();
  allergyStatus="Allergy Status Unknown";
  theURL = "MedchartServices.php?reportno=7&urnumber="+PatientURN+
           "&admissno="+PatientVIS+
           "&httprand="+Math.random();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.status == 200) {
    if (xmlHttp.responseText.substr(0,5)=="ERROR") {
      return false;
    } else {
      allergyStatus=xmlHttp.responseText;
      if (allergyStatus.match(/No Known Allergies/i)) {
        return false;
      }
      if (allergyStatus.match(/Allergy Status Unknown/i)) {
        return false;
      }
      return true;
    }
  }
}
function ProcessAllergies() {
  if (!jsonAllergies) return;

  var bIsLegacyAllergy = true;
  var sMedChartVer = VariableNameExists('MedChartVersion') ? MedChartVersion : '';
  if (!isWhitespace(sMedChartVer)) {
    if (parseInt(sMedChartVer) > 8) { bIsLegacyAllergy = false };
  }

  if (bIsLegacyAllergy) {  // LEGACY Allergies schema
    for (var Allergy in jsonAllergies) {
      var Description=jsonAllergies[Allergy]['Description'];
      var StartDate=jsonAllergies[Allergy]['StartDate'];
      var DiagnosisDate=jsonAllergies[Allergy]['DiagnosisDate'];
      var CertaintyDescription=jsonAllergies[Allergy]['Certainty']['Description'];
      var StatusId=jsonAllergies[Allergy]['Status']['StatusId'];
      var StatusDescription=jsonAllergies[Allergy]['Status']['Description'];
      var TypeDescription=jsonAllergies[Allergy]['AllergyType']['Description'];
      var ModifiedBy=jsonAllergies[Allergy]['ModifiedByName']['DisplayName'];

      var StatusComment=jsonAllergies[Allergy]['Comment'];
      if (StatusComment==undefined) StatusComment="";

      StartDate=netDate(StartDate,"date");
      DiagnosisDate=netDate(DiagnosisDate,"date");

      if (StatusId==1) {
        t.addRow("javascript:LaunchMedchart('patient')",TypeDescription,
                 Description,StatusDescription,StatusComment,ModifiedBy,
                 StartDate,'9');
      }
    }
  }
  else {  // NEW Allergies schema
    for (var Allergy in jsonAllergies['Allergies']) {
      if (typeof jsonAllergies['Allergies'][Allergy] == 'object') {
        var Description=jsonAllergies['Allergies'][Allergy]['Description'];
        var StartDate=jsonAllergies['Allergies'][Allergy]['StartDate'];
        var DiagnosisDate=jsonAllergies['Allergies'][Allergy]['DiagnosisDate'];
        var CertaintyDescription=jsonAllergies['Allergies'][Allergy]['Certainty']['Description'];
        var StatusId=jsonAllergies['Allergies'][Allergy]['Status']['StatusId'];
        var StatusDescription=jsonAllergies['Allergies'][Allergy]['Status']['Description'];
        var TypeDescription=jsonAllergies['Allergies'][Allergy]['AllergyType']['Description'];
        var ModifiedBy=jsonAllergies['Allergies'][Allergy]['ModifiedByName']['DisplayName'];
        var StatusComment=jsonAllergies['Allergies'][Allergy]['Comment'];

        if (StatusComment==undefined) StatusComment="";

        StartDate=netDate(StartDate,"date");
        DiagnosisDate=netDate(DiagnosisDate,"date");

        if (StatusId==1) {
          t.addRow("javascript:LaunchMedchart('patient')",TypeDescription,
                   Description,StatusDescription,StatusComment,ModifiedBy,
                   StartDate,"9");
        }
      }
    }
  }
}
function LaunchMedchart(fn) {
// Function Name	 Launch to
// patient	         Patient Summary screen for requested patient
// prescribe	         Patient Medication screen for requested patient
// administration	 Medication administration chart for the requested patient
// review        	 Pharmacy review chart for the requested patient
// desktop	         MedChart Desktop
// user                	 Update user details without display anything in MedChart
// wardsummary        	 Administration ward overview screen
// managepatient	 Edit details for the requested patient
// pharmacyreviewmonitor Pharmacy review monitor
// clinicalreviewmonitor Clinical review monitor
  var PageTitle="Medication Management";
  wurl="MedchartServices.php?reportno=10"+
       "&urnumber=" + PatientURN  +
       "&admissno=" + PatientVIS +
       "&function=" + fn +
       "&httprand=" + Math.random();
  var xmlHttp = createHttpObject();
  xmlHttp.open("GET", wurl, false);
  xmlHttp.send();
  if (xmlHttp.status == 200) {
    if (xmlHttp.responseText.substr(0,5)=="ERROR") {
      alertify.alert(xmlHttp.responseText);
    } else {
      openMedchartFrame(xmlHttp.responseText,PageTitle);
    }  
  } else {
    alertify.alert("ERROR: MedChart Web Services Not Available.");
  }
}
function LaunchMedchartNonPatient(fn) {
  if (fn == undefined || isWhitespace(fn)) return;

  var PageTitle="Medication Management";
  wurl="MedchartServices.php?reportno=10" +
       "&function=" + fn +
       "&httprand=" + Math.random();
  var xmlHttp = createHttpObject();
  xmlHttp.open("GET", wurl, false);
  xmlHttp.send();
  if (xmlHttp.status == 200) {
    if (xmlHttp.responseText.substr(0,5)=="ERROR") {
      alertify.alert(xmlHttp.responseText);
    } else {
      openMedchartFrame(xmlHttp.responseText,PageTitle);
    }
  } else {
    alertify.alert("ERROR: MedChart Web Services Not Available.");
  }
}
function openMedchartFrame(linkurl,linktitle) {
  var mainScreen=top.document.getElementById("mainScreen");  // Hide Mobility Application View
  mainScreen.style.display='none';
  var patScreen=top.document.getElementById("patScreen");    // Hide Mobility Patient View
  patScreen.style.display='none';
  var medChartFrame=top.document.getElementById("medFrame")  // Show MedChart Frame View Loading Page
  medChartDiv=top.document.getElementById("medScreen")
  medChartDiv.style.display = "";
  top.setReceiver();
  if(navigator.userAgent.match(/Mobile/i)) {
    var object = '<object id="medFrame" type="text/html" name="medFrame" data=' +
                 linkurl + '  width="100%" height="100%"></object> ';
    medChartDiv.innerHTML = object;
  } else {
    var object='<iframe style="border:0;width:100%;height:100%" src="'+linkurl+
               '" frameborder="0" name="MedFrame" id="medFrame"></iframe>';
    medChartDiv.innerHTML = object;
  }
}
//------------------------------------------------------------
// Tab Functions Admitting Doctor (Emergency)
//------------------------------------------------------------
function ShowAdmittingDoctor() {
//  alert("Will show admitting Dr screen");
// wtitle="<span class=AddItem></span>Maintain Admitting Doctor";
// wscript="";
// wurl="emrweb02.pbl?reportno=1&template=406";
// ShowScreen(wtitle,wscript,wurl);


  url="emrweb02.pbl?reportno=01&template=406"+
      "&urnumber="+PatientURN.replace(/ /g,"+")+
      "&admissno="+PatientVIS.replace(/ /g,"+");
  title = "Maintain Admitting Doctor";
  openDocumentNonZoomable(CGIPath+url,title);
}
