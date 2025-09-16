//jsVersion  : V11.03.01
//         
function delBkslot(CaseKey) {
  UpdateStatus.reportno.value="8"
  UpdateStatus.updatety.value="2"
  UpdateStatus.casekeys.value=CaseKey
  UpdateStatus.target="PopUpFrame";
  UpdateStatus.submit()
}
 
function ViewLink(OptionLink) {
  switch (OptionLink) {
    case "0": { TableDetails(OptionLink); break; }
    case "1": { TableDetails(OptionLink); break; }
    case "2": { ContactDetails(); break; }
    case "3": { SlotMaintenance(); break; }
    case "4": { RescheduleSession(); break; }
    case "5": { UpdateDNA(); break; }
    case "6": { updComment();break;}
    case "7": { SuspendSession();break;}
    case "8": { PrintGroupLabels();break;}
    case "9": { ClinicUsage();break;}
    case "10": { AttendAll();break;}
    case "11": { DepartAll();break;}
    case "12": { ReAppAll();break;}
    case "13": { ConfirmAll();break;}
    case "14": { BulkEncounter();break;}
    case "15": { AssignHCP();break;}
    case "16": { MultiTher();break;}
    case "17": { DischargeAll();break;}
    case "18": { TableDetails("3");break;}
    case "19": { TableDetails("4");break;}
    case "20": { BulkProcess();break;}
    case "21": { TableDetails("5"); break; }
  }
}
function ViewLinkInq(OptionLink) {
  switch (OptionLink) {
    case "0": { TableDetailsInq(OptionLink); break; }
    case "1": { TableDetailsInq(OptionLink); break; }
    case "2": { ContactDetailsInq(); break; }
  }
}
function TableDetails(TableView)  {
  UpdateStatus.reportno.value="2"
  UpdateStatus.template.value="4"
  location.href="outweb02.pbl?reportno=02&template=004" +
                "&sesskeys=" + UpdateStatus.sesskeys.value.replace(/ /g,"+") +
                "&tablview=" + TableView
}
function TableDetailsInq(TableView)  {
  UpdateStatus.reportno.value="2"
  UpdateStatus.template.value="4"
  location.href="outweb02.pbl?reportno=02&template=004" +
                "&sesskeys=" + UpdateStatus.sesskeys.value.replace(/ /g,"+") +
                "&tablview=" + TableView +
                "&viewopcl=1"
}
function ContactDetails()  {
  UpdateStatus.reportno.value="2"
  UpdateStatus.template.value="4"
  location.href="outweb02.pbl?reportno=02&template=004" +
                "&sesskeys=" + UpdateStatus.sesskeys.value.replace(/ /g,"+") +
                "&tablview=2&contview=1"
}
function ContactDetailsInq()  {
  UpdateStatus.reportno.value="2"
  UpdateStatus.template.value="4"
  location.href="outweb02.pbl?reportno=02&template=004" +
                "&sesskeys=" + UpdateStatus.sesskeys.value.replace(/ /g,"+") +
                "&tablview=2&contview=1" +
                "&viewopcl=1"
}
function PrintGroupLabels() {
  UpdateStatus.reportno.value="2"
  UpdateStatus.template.value="9"
  location.href="outweb02.pbl?reportno=02&template=009" +
                "&sesskeys=" + UpdateStatus.sesskeys.value.replace(/ /g,"+")
}
function SlotMaintenance()  {
  UpdateStatus.reportno.value="2"
  UpdateStatus.template.value="5"
  location.href="outweb02.pbl?reportno=02&template=005" + 
                "&sesskeys=" + UpdateStatus.sesskeys.value.replace(/ /g,"+")
}
function AttendAll()  {
  UpdateStatus.reportno.value="2"
  UpdateStatus.template.value="12"
  location.href="outweb02.pbl?reportno=02&template=012" +
                "&sesskeys=" + UpdateStatus.sesskeys.value.replace(/ /g,"+")
}
function DepartAll()  {
  UpdateStatus.reportno.value="2"
  UpdateStatus.template.value="13"
  location.href="outweb02.pbl?reportno=02&template=013" +
                "&sesskeys=" + UpdateStatus.sesskeys.value.replace(/ /g,"+")
}
function DischargeAll()  {
  UpdateStatus.reportno.value="2"
  UpdateStatus.template.value="18"
  location.href="outweb02.pbl?reportno=02&template=018" +
                "&sesskeys=" + UpdateStatus.sesskeys.value.replace(/ /g,"+")
}
function ConfirmAll()  {
  UpdateStatus.reportno.value="2"
  UpdateStatus.template.value="15"
  location.href="outweb02.pbl?reportno=02&template=015" +
                "&sesskeys=" + UpdateStatus.sesskeys.value.replace(/ /g,"+") 
}
function BulkEncounter()  {
    UpdateStatus.reportno.value="2"
    UpdateStatus.template.value="16"
    location.href="outweb02.pbl?reportno=02&template=016" +
                  "&sesskeys=" + UpdateStatus.sesskeys.value.replace(/ /g,"+") 
}
function ReAppAll()  {
  UpdateStatus.reportno.value="2"
  UpdateStatus.template.value="14"
  location.href="outweb02.pbl?reportno=02&template=014" +
                "&sesskeys=" + UpdateStatus.sesskeys.value.replace(/ /g,"+")
}
function RescheduleSession() {
  UpdateStatus.reportno.value="2"
  UpdateStatus.template.value="6"
  key=UpdateStatus.sesskeys.value.replace(/ /g,"+")
  location.href="outweb02.pbl?reportno=02&template=006&"+"sesskeys="+key
}
function SuspendSession() {
  key=UpdateStatus.sesskeys.value.replace(/ /g,"+")
  LinkURL="outweb02.pbl?reportno=02&template=008&"+"sesskeys="+key
  DFrameLink(LinkURL,100,250,300,150)
}
function UpdateDNA() {
ans=confirm('This will update all patients that have not attended \n Continue?') 
   if (ans) {
     var currLocation = "outweb02.pbl?reportno=02&template=004";
     var key = UpdateStatus.sesskeys.value.replace(/ /g,"+");
     UpdateStatus.redirect.value=currLocation + "&sesskeys=" + key; 
     UpdateStatus.reportno.value="8"
     UpdateStatus.updatety.value="9"
     UpdateStatus.submit() }
}
function UpdateSlot(A,B,C) {
   UpdateStatus.casekeys.value=A
   LinkURL='patweb90.pbl?reportno=1&template=200'
   DFrameLink(LinkURL,25,50,700,420)
}
function updChekin(Key) {
  UpdateStatus.reportno.value="7"
  UpdateStatus.template.value="4"
  UpdateStatus.updatety.value="1"
  UpdateStatus.casekeys.value=Key
  UpdateStatus.target="PopUpFrame";
  UpdateStatus.submit()
}
function updTmseen(Key) {
  UpdateStatus.reportno.value="7"
  UpdateStatus.template.value="4"
  UpdateStatus.updatety.value="2"
  UpdateStatus.casekeys.value=Key
  UpdateStatus.target="PopUpFrame";
  UpdateStatus.submit()
}
function updDepart(Key) {
  UpdateStatus.reportno.value="2"
  UpdateStatus.template.value="3"
  UpdateStatus.updatety.value="3"
  UpdateStatus.casekeys.value=Key
  alrtget="PopUpFrame";
  UpdateStatus.submit()
}
function updStatus(Key,Status) {
  if (Status==1) { UpdateStatus.template.value="8" } // Outcome Page
            else { UpdateStatus.template.value="7" } // General Page
  UpdateStatus.reportno.value="3"
  UpdateStatus.casekeys.value=Key
  DFrameSubmit(UpdateStatus,25,50,700,400)
}
function NoPatient()  {
  alert("No Patient for this Appointment")
}
function updComment() { 
  linkvar="outweb02.pbl?reportno=02&template=007" +
          "&sesskeys=" + UpdateStatus.sesskeys.value.replace(/ /g,"+")
  DFrameLink(linkvar,25,50,350,200); 
}
function ClinicUsage() {
  linkvar="outweb02.pbl?reportno=02&template=010" +
          "&sesskeys=" + UpdateStatus.sesskeys.value.replace(/ /g,"+")
  DFrameLink(linkvar,25,50,350,250);
}
function AssignHCP() {
  linkvar="outweb02.pbl?reportno=02&template=017" +
          "&sesskeys=" + UpdateStatus.sesskeys.value.replace(/ /g,"+")
  DFrameLink(linkvar,25,50,450,350);
}
function MultiTher()  {

//alert(UpdateStatus.mtvcckie.value+" | "+UpdateStatus.mtvlckie.value );

  if (isWhitespace(UpdateStatus.mtvcckie.value)&&
      isWhitespace(UpdateStatus.mtvlckie.value)) {
    location.href="outweb02.pbl?reportno=14&template=001"
  }

  if (!isWhitespace(UpdateStatus.mtvcckie.value)&&
      isWhitespace(UpdateStatus.mtvlckie.value)) {
    location.href="outweb02.pbl?reportno=14&template=001" +
          "&srchclty=" + UpdateStatus.mtvcckie.value.replace(/ /g,"+")
  }

  if (isWhitespace(UpdateStatus.mtvcckie.value)&&
      !isWhitespace(UpdateStatus.mtvlckie.value)) {
    location.href="outweb02.pbl?reportno=14&template=001" +
          "&lastdate=" + UpdateStatus.mtvlckie.value.replace(/ /g,"+")
  }

  if (!isWhitespace(UpdateStatus.mtvcckie.value)&&
      !isWhitespace(UpdateStatus.mtvlckie.value)) {
    location.href="outweb02.pbl?reportno=14&template=001" + 
          "&srchclty=" + UpdateStatus.mtvcckie.value.replace(/ /g,"+") +
          "&lastdate=" + UpdateStatus.mtvlckie.value.replace(/ /g,"+")
  }
}
//----------------------------------------------------------------------------
// Create New Table Object
// Border, Cellspacing, Cellpadding, Width, Align, Heading Height, Row Height
//----------------------------------------------------------------------------
// Add Columns in Order Required
// Heading,Type,Display Column,Sort Column, Align, Icon, Link Column
// Columns Available
//  0 - HTML Link
//  1 - Date & Time
//  2 - Slot
//  3 - Day
//  4 - Visit Type
//  5 - Patient
//  6 - UR
//  7 - Booking No
//  8 - Sex
//  9 - Age
// 10 - Check In Time
// 11 - Time Seen
// 12 - Departure Time
// 13 - Status Code
// 14 - Time Seen Link
// 15 - Check in Link
// 16 - Departure Link
// 17 - Status Link
// 18 - Delete Slot
// 19 - Status Name
// 20 - Follow Up Link
// 21 - Non-Attend Link
// 22 - Alerts
// 23 - Diagnosis/complaint
// 24 - Comments
// 25 - Private
// 26 - Business
// 27 - Mobile
// 28 - CaseKeys
//---------------------------------------------------------------------------
function InitTable(TableView) {
switch (TableView) {
  case "0": {
   t = new Table(1,0,2,"100%","center",40,40);

   t.addColumn("Time","Time",1,1,"left","AppointmentIcon.gif","Slot",50)
   t.addColumn("Type","String",35,35,"left","","",90)
   t.addColumn("U/R","String",6,6,"left","","",50)
   t.addColumn("Patient","StringPatient",5,5,"left","PatientFolder","Patient",165)
   t.addColumn("Check- In","ButtonLink",15,-1,"left","","CheckIn",45)
   t.addColumn("Time Seen","ButtonLink",14,-1,"left","","TimeSeen",45)
   t.addColumn("Departure","ButtonLink",16,-1,"left","","Departure",45)
   t.addColumn("Follow Up","ButtonLink",20,-1,"left","","FollowUp",45)
   t.addColumn("Non Attend","ButtonLink",21,-1,"left","","NonAttend",40)
   t.addColumn("Alerts","Image",22,-1,"left","alert","",40)
   t.addColumn(UpdateStatus.dummyclm.value,"String",37,37,"left","","",25)
   AddTableRows();
   TableOutput(0,1);	// Order Column,Asc Dsc
   break; }
  case "1": {
   t = new Table(1,0,2,"100%","center",40,40);
   t.addColumn("Time","Time",1,1,"left","AppointmentIcon.gif","Slot",55)
   t.addColumn("Type","String",35,35,"left","","",100)
   t.addColumn("U/R","String",6,6,"left","","",55)
   t.addColumn("Patient ","StringPatient",5,5,"left","PatientFolder","Patient",160)
   t.addColumn("Check- In","ButtonLink",15,-1,"left","","CheckIn",50)
   t.addColumn("Time Seen","ButtonLink",14,-1,"left","","TimeSeen",50)
   t.addColumn("Diagnosis/Complaint","String",22,22,"","","",60)
   t.addColumn("Comments","String",36,36,"","","",60)
   t.addColumn("Alerts","Image",22,-1,"left","alert","",40)
   AddTableRows();
   TableOutput(0,1);	// Order Column,Asc Dsc
   break; }
  case "2": {
   t = new Table(1,0,2,"100%","center",40,40);
   t.addColumn("Time","Time",1,1,"left","AppointmentIcon.gif","Slot",55)
   t.addColumn("Type","String",35,35,"left","","",110)
   t.addColumn("Patient ","StringPatient",5,5,"left","PatientFolder","Patient",180)
   t.addColumn("Private","String",25,25,"","","",100)
   t.addColumn("Business","String",26,26,"","","",100)
   t.addColumn("Mobile","String",27,27,"","","",90)
   AddTableRows();
   TableOutput(0,1);	// Order Column,Asc Dsc
   break; }
  case "4": {
   t = new Table(1,0,2,"100%","center",40,40);
   t.addColumn("Time","Time",1,1,"left","AppointmentIcon.gif","Slot",100);
   t.addColumn("Type","String",34,34,"left","","",100);
   t.addColumn("U/R","String",6,6,"left","","",100);
   t.addColumn("Patient","StringPatient",5,5,"left","PatientFolder","Patient",200);
   t.addColumn("Linked Referral","String",79,79,"left","","",100);
   AddTableRows();
   TableOutput(0,1);    // Order Column,Asc Dsc
   break;}
 }
}
//
//----------------------------------------------------------------------
// Function : Setup Page Refresh Page                                          
//----------------------------------------------------------------------
function SetPageRefreshOut(Seconds) {
  Refresh = Seconds + '000'
  window.setInterval("StdPageRefreshOut();",Refresh);
}
//----------------------------------------------------------------------
// Function : Refresh Page
//----------------------------------------------------------------------
function StdPageRefreshOut() {
  if (PopUpScreen.style.display=="none") {

    // IE browser?...
    if (window.navigator.userAgent.match(/MSIE [\d.]+/)) {
      var ver = parseInt(window.navigator.userAgent.match(/MSIE ([\d.]+)/)[1]);
      if (ver < 9) {
        // for versions before 9.0
        if (!document.hasFocus())
          return;  // browser window doesn't have focus; so don't refresh
      }
    }
    var viewopclpar=""; 
    var TableView="";
    if(document.SelectPeriod.viewopcl!=undefined) {
      viewopclpar="&viewopcl=" + 
          document.SelectPeriod.viewopcl.value.replace(/ /g,"+")
    }
    if(document.SelectPeriod.contview!=undefined) { 
      switch (document.SelectPeriod.viewlink.value.replace(/ /g,"+")) {
        case "18": { TableView = "3"; break; }
      }
      if(TableView=="") {
        location.href="outweb02.pbl?reportno=2&template=4&sesskeys=" + 
                     document.UpdateStatus.sesskeys.value.replace(/ /g,"+") +
                    "&tablview=" + 
                    document.SelectPeriod.viewlink.value.replace(/ /g,"+") +
                    "&contview=" +
                     document.SelectPeriod.contview.value.replace(/ /g,"+") +
                    viewopclpar 
      } else {
        location.href="outweb02.pbl?reportno=2&template=4&sesskeys=" +
                     document.UpdateStatus.sesskeys.value.replace(/ /g,"+") +
                    "&tablview=" + TableView +
                    "&contview=" +
                     document.SelectPeriod.contview.value.replace(/ /g,"+") +
                    viewopclpar
      }
    } else {
        if(TableView=="") {
          location.href="outweb02.pbl?reportno=2&template=4&sesskeys=" + 
                     document.UpdateStatus.sesskeys.value.replace(/ /g,"+") +
                    "&tablview=" +
                     document.SelectPeriod.viewlink.value.replace(/ /g,"+") +
                    viewopclpar
        } else {
          location.href="outweb02.pbl?reportno=2&template=4&sesskeys=" +
                     document.UpdateStatus.sesskeys.value.replace(/ /g,"+") +
                    "&tablview=" + TableView + viewopclpar
        }
    }
  }
}
function LoadTable(tableview) {
  if(tableview=="0") {
    InitTable("0"); 
    document.SelectPeriod.viewlink.selectedIndex=0;
    return;
  } 
  if(tableview=="1") {
    InitTable("1"); 
    document.SelectPeriod.viewlink.selectedIndex=1;
    return;
  } 
  if(tableview=="2") {
    InitTable("2"); 
    document.SelectPeriod.viewlink.selectedIndex=2;
    return;
  } 
  if(tableview=="3") {
    InitTable("3"); 
    document.SelectPeriod.viewlink.selectedIndex=3;
    return;
  } 
  if(tableview=="4") {
    InitTable("4");
    document.SelectPeriod.viewlink.selectedIndex=15;
    return;
  }
  if(tableview=="5") {
    InitTable("5");
    for (var i =0 ; i < document.SelectPeriod.viewlink.length; i++) {
    if (document.SelectPeriod.viewlink.options[i].value=="21") {
        document.SelectPeriod.viewlink.selectedIndex=i } };
     return;
  }
}
function LoadTableInq(tableview) {
  if(tableview=="0") {
    InitTableInq("0");
    document.SelectPeriod.viewlink.selectedIndex=0;
    return;
  }
  if(tableview=="1") {
    InitTableInq("1");
    document.SelectPeriod.viewlink.selectedIndex=1;
    return;
  }
  if(tableview=="2") {
    InitTableInq("2");
    document.SelectPeriod.viewlink.selectedIndex=2;
    return;
  }
}
function BulkProcess()  {
  UpdateStatus.reportno.value="2"
  UpdateStatus.template.value="22"
  location.href="outweb02.pbl?reportno=02&template=022" +
                "&sesskeys=" + UpdateStatus.sesskeys.value.replace(/ /g,"+")
}

