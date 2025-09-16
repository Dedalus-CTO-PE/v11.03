//jsVersion  : V11.03.00
//----------------------------------------------------------------------
// Functions : Print checked visits                                          
//----------------------------------------------------------------------
OutputArray = new Array();        // Create Array to Store Rows of Table
OldArray = new Array();           // Create Array to Store Rows of Table
function UpdateArray(ReturnCode) {
  var CLMKey="";
  var Flag=0;
  OldArray=OutputArray
  OutputArray = new Array();      // Create Array to Store Rows of Table
  j=0;
  for (i=0;i<OldArray.length;i++) {
    x = ReturnCode.substring(0,28)
    y = OldArray[i].substring(40,68)
    if (x!=y) {
      OutputArray[j]=OldArray[i]
      j++
    }
    else {
      Flag="1"                     // Remove record from array
    }
  }
  if (Flag == "1") {
    OutputDivision()
  }
  else {
    AddOutputArray(ReturnCode)    // Add new record to array
    OutputDivision()
  }
}
function OutputDivision() {
    OutputString=""
    for (i=0; i<OutputArray.length; i++) {
//  for (i=OutputArray.length-1;i>=0;i--) {
      OutputString+=OutputArray[i]
    }
    Results.innerHTML=OutputString
}
function AddOutputArray(CLMKey) {
    OutputArray[OutputArray.length] = "<input type=hidden name=clmprtno" +
                                      " value='" + CLMKey + "'>"
}
function PrintRecords() {
  if(OutputArray.length=="0") {
    alert("No visits have been selected to print.");
    return;
  }
  if (validateMandatory(PrintClaims)) {
     document.PrintClaims.redirect.value="outweb02.pbl?reportno=02" +
     "&template=011" +
     "&sesskeys=" + document.PrintClaims.sesskeys.value.replace(/ /g,"+")  +
     "&tablview=" +
      document.SelectPeriod.viewlink.value.replace(/ /g,"+")
   document.PrintClaims.submit();
  }
}
//----------------------------------------------------------------------
// Function : Post CMBS item template                                          
//----------------------------------------------------------------------
function PostCMBSItems() {
ans=confirm("Warning: Post CMBS template to all patients within clinic?")
  if (ans) {
    if (validateMandatory(PostCMBSTemp)) {
       document.PostCMBSTemp.redirect.value="outweb02.pbl?reportno=02" +
       "&template=011" +
       "&sesskeys=" + document.PostCMBSTemp.sesskeys.value.replace(/ /g,"+") +
       "&tablview=" +
       document.SelectPeriod.viewlink.value.replace(/ /g,"+")
     document.PostCMBSTemp.submit();
    }
  }
}

//----------------------------------------------------------------------
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
    case "2": { TableDetails(OptionLink); break; }
    case "3": { TableDetails(OptionLink); break; }
    case "4": { SlotMaintenance(); break; }
    case "5": { RescheduleSession(); break; }
    case "6": { UpdateDNA(); break; }
    case "7": { updComment();break;}
    case "8": { SuspendSession();break;}
    case "9": { PrintGroupLabels();break;}
    case "10": { ClinicUsage();break;}
    case "11": { AttendAll();break;}
    case "12": { DepartAll();break;}
    case "13": { ReAppAll();break;}
    case "14": { ConfirmAll();break;}
    case "17": { DischargeAll();break;}
    case "18": { BulkEncounter();break;}
    case "19": { Refferaldetails("4");break;}
  }
}
function RescheduleSession() {
  UpdateStatus.reportno.value="2"
  UpdateStatus.template.value="6"
  key=UpdateStatus.sesskeys.value.replace(/ /g,"+")
  location.href="outweb02.pbl?reportno=02&template=006&"+"sesskeys="+key +
                "&redirflg=1"
}
function PrintGroupLabels() {
  UpdateStatus.reportno.value="2"
  UpdateStatus.template.value="9"
  location.href="outweb02.pbl?reportno=02&template=009" +
                "&sesskeys=" + UpdateStatus.sesskeys.value.replace(/ /g,"+") +
                "&redirflg=1"
}
function SlotMaintenance()  {
  UpdateStatus.reportno.value="2"
  UpdateStatus.template.value="5"
  location.href="outweb02.pbl?reportno=02&template=005" +
                "&sesskeys=" + UpdateStatus.sesskeys.value.replace(/ /g,"+") +
                "&redirflg=1"
}
function UpdateDNA() {
ans=confirm('This will update all patients that have not attended \n Continue?')

   if (ans) {
     var currLocation = "outweb02.pbl?reportno=02&template=011";
     var key = UpdateStatus.sesskeys.value.replace(/ /g,"+");
     UpdateStatus.redirect.value=currLocation + "&sesskeys=" + key;
     UpdateStatus.reportno.value="8"
     UpdateStatus.updatety.value="9"
     UpdateStatus.submit() }
}
function updComment() {
  linkvar="outweb02.pbl?reportno=02&template=007" +
          "&sesskeys=" + UpdateStatus.sesskeys.value.replace(/ /g,"+") +
          "&redirflg=1"
  DFrameLink(linkvar,25,50,350,200);
}
function SuspendSession() {
  key=UpdateStatus.sesskeys.value.replace(/ /g,"+")
  LinkURL="outweb02.pbl?reportno=02&template=008&"+"sesskeys="+key +
          "&redirflg=1"
  DFrameLink(LinkURL,100,250,300,150)
}
function ClinicUsage() {
  linkvar="outweb02.pbl?reportno=02&template=010" +
          "&sesskeys=" + UpdateStatus.sesskeys.value.replace(/ /g,"+") + 
          "&redirflg=1"
  DFrameLink(linkvar,25,50,350,250);
}
function TableDetails(TableView)  {
  UpdateStatus.reportno.value="2"
  UpdateStatus.template.value="011"
  location.href="outweb02.pbl?reportno=02&template=011" +
                "&sesskeys=" + UpdateStatus.sesskeys.value.replace(/ /g,"+") +
                "&tablview=" + TableView
}
function Refferaldetails(TableView)  {
  UpdateStatus.reportno.value="2"
  UpdateStatus.template.value="4"
  location.href="outweb02.pbl?reportno=02&template=004" +
                "&sesskeys=" + UpdateStatus.sesskeys.value.replace(/ /g,"+") +
                "&tablview=" + TableView
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
   t.addColumn("Type","String",34,34,"left","","",34)
   t.addColumn("U/R","String",6,6,"left","","",45)
   t.addColumn("Patient","StringPatient",5,5,"left","PatientFolder","Patient",165)
   t.addColumn(UpdateStatus.dummyclm.value,"String",37,37,"left","","",25)
   t.addColumn("Check In","ButtonLink",15,-1,"left","","CheckIn",45)
   t.addColumn("Time Seen","ButtonLink",14,-1,"left","","TimeSeen",45)
   t.addColumn("Departure","ButtonLink",16,-1,"left","","Departure",45)
   t.addColumn("Follow Up","ButtonLink",20,-1,"left","","FollowUp",45)
   t.addColumn("Non Attend","ButtonLink",21,-1,"left","","NonAttend",45)
   t.addColumn("CMBS Item/s","String",42,42,"left","","",42)
   t.addColumn("Claim Status","String",41,41,"left","","",45)
   t.addColumn("Expiry Date","Date",40,40,"left","","",64)
   t.addColumn("Comments","Comment",38,38,"center","MaintenanceIcon","commlink",45)
   t.addColumn("Alerts","Image",22,-1,"left","alert","",40)
   AddTableRows();
   TableOutput(0,1);	// Order Column,Asc Dsc
   break; }

  case "3": {
   t = new Table(1,0,2,"100%","center",40,40);
   t.addColumn("Time","Time",1,1,"left","AppointmentIcon.gif","Slot",50)
   t.addColumn("Type","String",34,34,"left","","",34)
   t.addColumn("U/R","String",6,6,"left","","",45)
   t.addColumn("Patient","StringPatient",5,5,"left","PatientFolder","Patient",165)
   t.addColumn("Attendance Status","String",31,31,"left","","",45)
   t.addColumn(UpdateStatus.dummyclm.value,"String",37,37,"left","","",25)
   t.addColumn("CMBS Item/s","String",42,42,"left","","",42)
   t.addColumn("Claim Status","String",41,41,"left","","",45)
   t.addColumn("Expiry Date","Date",40,40,"left","","",64)
   t.addColumn("Batch #","String",43,43,"left","","",40)
   t.addColumn("Comments","Comment",38,38,"center","MaintenanceIcon","commlink",45)
   t.addColumn("Print","String",44,44,"left","","",25)
   AddTableRows();
   TableOutput(0,1);    // Order Column,Asc Dsc
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
   TableOutput(0,1);    // Order Column,Asc Dsc
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
   TableOutput(0,1);    // Order Column,Asc Dsc
   break; }
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
    location.href="outweb02.pbl?reportno=2&template=011&sesskeys=" + 
                   document.UpdateStatus.sesskeys.value.replace(/ /g,"+") +
                  "&tablview=" +
                   document.SelectPeriod.viewlink.value.replace(/ /g,"+")
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
    document.SelectPeriod.viewlink.selectedIndex=2;
    return;
  } 
  if(tableview=="2") {
    InitTable("2"); 
    document.SelectPeriod.viewlink.selectedIndex=3;
    return;
  } 
  if(tableview=="3") {
    InitTable("3"); 
    document.SelectPeriod.viewlink.selectedIndex=1;
    return;
  } 
}
function TimeSeen(Urnumber,Admissno,RowNo,Casekeys) {

     var TextCheckIn = document.getElementsByName('TextCheckIn');

     if (t.rows[RowNo][31]=="DNA") {
         alert("Time Seen Can't be Entered For DNA");
     }
     else if (t.rows.length == 1) {
         val = TextCheckIn.value;
         linkurl="outweb02.pbl?reportno=03&template=003" +
                 "&urnumber=" + Urnumber.replace(/ /g,"+") +
                 "&admissno="+Admissno.replace(/ /g,"+");
         DFrameLink(linkurl,0,5,930,600);
     }
     else {
         val = TextCheckIn[RowNo].value;
         linkurl="outweb02.pbl?reportno=03&template=003" +
                 "&urnumber=" + Urnumber.replace(/ /g,"+") +
                 "&admissno="+Admissno.replace(/ /g,"+");
         DFrameLink(linkurl,0,5,930,600);
     }
}
function CheckIn(Urnumber,Admissno,RowNo,Casekeys) {

     var TextCheckIn = document.getElementsByName('TextCheckIn');

     if (t.rows[RowNo][29]=="DNA") {
         alert("Check In Time Can't be Entered For DNA");
     }
     else if (t.rows.length == 1) {
//       val = TextTimeSeen.value
         val = TextCheckIn.value;
         TextCheckIn.value = updateTimeSlot(Urnumber,Admissno,3,val,Casekeys);
         if(val != TextCheckIn.value) {
           UpdateClaim(); 
         }
     }
     else {
//       val = TextTimeSeen[RowNo].value;
         val = TextCheckIn[RowNo].value;
         TextCheckIn[RowNo].value = updateTimeSlot(Urnumber,Admissno,3,val,Casekeys);
         if(val != TextCheckIn[RowNo].value) {
           UpdateClaim();
         }
     }
}
function UpdateClaim() {
  if(!isWhitespace(ReferralNo)) {
    if(UsingMedClaims == 1) {
       linkUrl="hicweb01.pbl?reportno=3&template=001" +
               "&urnumber=" + Urnumber.replace(/ /g,"+") +
               "&admissno=" + Admissno.replace(/ /g,"+") +
               "&refrnumb=" + ReferralNo.replace(/ /g,"+") +
               "&deptcode=" + ReferralDep.replace(/ /g,"+") +
               "&clmnnumb=" + ClaimNo.replace(/ /g,"+");
       Left=(document.body.clientWidth-900)/2
       DFrameLink(linkUrl,0,Left,930,550)
    }
  }
}
function AttendAll()  {
  UpdateStatus.reportno.value="2"
  UpdateStatus.template.value="12"
  location.href="outweb02.pbl?reportno=02&template=012" +
                "&sesskeys=" + UpdateStatus.sesskeys.value.replace(/ /g,"+") +
                "&redirflg=1"
}
function DepartAll()  {
  UpdateStatus.reportno.value="2"
  UpdateStatus.template.value="13"
  location.href="outweb02.pbl?reportno=02&template=013" +
                "&sesskeys=" + UpdateStatus.sesskeys.value.replace(/ /g,"+") +
                "&redirflg=1"
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
                "&sesskeys=" + UpdateStatus.sesskeys.value.replace(/ /g,"+") +
                "&redirflg=1"
}
function ReAppAll()  {
  UpdateStatus.reportno.value="2"
  UpdateStatus.template.value="14"
  location.href="outweb02.pbl?reportno=02&template=014" +
                "&sesskeys=" + UpdateStatus.sesskeys.value.replace(/ /g,"+") +
                "&redirflg=1"
}
//------------------------------------------------------------
// Function : Set return path cookie for outpatient FFS clinic list
//------------------------------------------------------------
function SetFFSList() {
  document.cookie = "OutpatientFFSList" + "=" + escape(location.href) + ";"
}
function BulkEncounter()  {
    UpdateStatus.reportno.value="2"
    UpdateStatus.template.value="16"
    location.href="outweb02.pbl?reportno=02&template=016&redirflg=1" +
                  "&sesskeys=" + UpdateStatus.sesskeys.value.replace(/ /g,"+")
}
