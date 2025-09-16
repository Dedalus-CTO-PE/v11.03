//jsVersion  : V11.03.00
//========================================================================
// Program   : outweb0201015.js
//
// Written   : 20.09.2012 Brian Ackland.
//
// Function  : Standard Functions Used in outweb0201015 templates
//========================================================================

function init() {
 SetClinicType(SelectPeriod.srchclty,SelectPeriod.defctype.value,SelectPeriod.usersite.value);
 SetCategoryCT(SelectPeriod.srchltyp,SelectPeriod.defltype.value);
 if(isWhitespace(SelectPeriod.srchclid.value)) {
   if(!isWhitespace(SelectPeriod.deftclid.value)) {
     SelectPeriod.srchclid.value=SelectPeriod.deftclid.value;
     validateCode(25,SelectPeriod.srchclid,SelectPeriod.clindesc);
   }
 }
 if(document.SelectPeriod.d_showempt.value=="1") {
   document.SelectPeriod.showempt.checked=true;
 }
}
function onClinicID(){
  validateCode(25,SelectPeriod.srchclid,SelectPeriod.clindesc);
}
function SubmitPage() {
  SelectPeriod.searchfl.value="1";
  SelectPeriod.submit();
}
//----------------------------------------------------------------------------
// Create New Table Object
// Border, Cellspacing, Cellpadding, Width, Align, Heading Height, Row Height
//----------------------------------------------------------------------------
// Add Columns in Order Required
// Heading,Type,Display Column,Sort Column, Align, Icon, Link Column
// Columns Available
//  0 - HTML Link
//  1 - date/time
//  2 - slot
//  3 - visit type code
//  4 - visit type desc
//  5 - formatted name
//  6 - ur
//  7 - outpatient visit number
//  8 - sex
//  9 - age
//  10- space
//  11- space
//  12- space
//  13- space
//  14- time actually seen
//  15- check in time
//  16- time of departure
//  17- slot status
//  18- space
//  19- space
//  20- follow up appointment made
//  21- DNA or spaces
//  22- visit extension user defined free format 1
//  23- diagnosis comments
//  24- alerts string
//  25- home phone
//  26- business phone
//  27- mobile phone
//  28- casekeys
//  29- language
//  30- special arrangements
//  31- status
//  32- patient folder extension
//  33- outcome code
//  34- coloured visit number
//  35- coloured visit type
//  36- diagnosis comments
//  37- claim code
//  38- claim comment flag
//  39- highlight colours
//  40- referral expiry
//  41- claim status
//  42- cmbs item
//  43- batch number
//  44- print checkbox disabled
//  45- print checkbox ticked
//  46- print checkbox unticked
//  47 - Referral Number
//  48 - Referral Number
//  49 - Referral Dept
//  50 - Using med claim
//  51 - A/H Departmetn
//  52 - Collect Enc
//  53 - Linked Enc
//  54 - source of ref
//  55 - update array javascript
//----------------------------------------------------------------------------
function InitTable(TableView) {
  document.title="Patient List";
  ShowWaitScreen();

  window.setTimeout(function() {
    switch (TableView) {
      case "0": {
       document.SelectPeriod.tablview.selectedIndex=0;
       t = new Table(1,0,2,"100%","center",40,60);
       t.addColumn("Time","Time",1,1,"left","AppointmentIcon.gif","Slot",40)
       t.addColumn("Type","String",34,34,"left","","",25)
       t.addColumn("U/R","String",6,6,"left","","",50)
    t.addColumn("Patient","StringPatient",5,5,"left","PatientFolder","Patient",105)
    //
       if (document.SelectPeriod.showcpmi.value=="1") {
         t.addColumn("Confirm PMI","ButtonLinkWide",65,66,"left","","ConfirmPMI",80)
       }
    //
       t.addColumn("Check-In","ButtonLink",15,-1,"left","","CheckIn",45)
       t.addColumn("Time Seen","ButtonLink",14,-1,"left","","TimeSeen",45)
       t.addColumn("Departure","ButtonLink",16,-1,"left","","Departure",45)
       t.addColumn("Follow Up","ButtonLink",20,-1,"left","","FollowUp",45)
       t.addColumn("Non Attend","ButtonLink",21,-1,"left","","NonAttend",45)
       t.addColumn("Alerts","Image",22,-1,"left","alert","",55)
       t.addColumn(SelectPeriod.dummyclm.value,"String",37,37,"left","","",25)
       t.addColumn("Clinic Type","String",56,56,"left","","",30)
       t.addColumn("Clinic","String",55,55,"left","","",40)
       t.addColumn("Visit","String",53,53,"left","","",35)
       t.addColumn("Confirmed","String",57,57,"left","","",50)
       AddTableRows();
       t.sortTable(6,1);    // By Clinic Type
       t.sortTable(5,1);    // By Clinic Date
       TableOutput(0,1);    // Order Column,Asc Dsc
       break; }
      case "1": {
       document.SelectPeriod.tablview.selectedIndex=1;
       t = new Table(1,0,2,"100%","center",40,50);
       t.addColumn("Time","Time",1,1,"left","AppointmentIcon.gif","Slot",60)
       t.addColumn("Type","String",34,34,"left","","",45)
       t.addColumn("U/R","String",6,6,"left","","",55)
    t.addColumn("Patient ","StringPatient",5,5,"left","PatientFolder","Patient",150)
    //
       if (document.SelectPeriod.showcpmi.value=="1") {
         t.addColumn("Confirm PMI","ButtonLinkWide",65,66,"left","","ConfirmPMI",80)
       }
    //
       t.addColumn("Check-In","ButtonLink",15,-1,"left","","CheckIn",50)
       t.addColumn("Time Seen","ButtonLink",14,-1,"left","","TimeSeen",50)
       t.addColumn("Diagnosis/Complaint","String",22,22,"","","",75)
       t.addColumn("Comments","String",36,36,"","","",75)
       t.addColumn("Alerts","Image",22,-1,"left","alert","",50)
       AddTableRows();
       TableOutputDynamicRow(0,1,63);    // Order Column,Asc Dsc
       break; }
      case "2": {
       document.SelectPeriod.tablview.selectedIndex=2;
       t = new Table(1,0,2,"100%","center",40,50);
       t.addColumn("Time","Time",1,1,"left","AppointmentIcon.gif","Slot",55)
       t.addColumn("Type","String",34,34,"left","","",45)
       t.addColumn("U/R","String",6,6,"left","","",55)
       t.addColumn("Patient ","StringPatient",5,5,"left","PatientFolder","Patient",180)
       t.addColumn("Private","String",25,25,"","","",75)
       t.addColumn("Business","String",26,26,"","","",75)
       t.addColumn("Mobile","String",27,27,"","","",75)
       AddTableRows();
       TableOutput(0,1);    // Order Column,Asc Dsc
       break; }
      case "3": {
       document.SelectPeriod.tablview.selectedIndex=3;
       t = new Table(1,0,2,"100%","center",40,50);
       t.addColumn("Time","Time",1,1,"left","AppointmentIcon.gif","Slot",60)
       t.addColumn("Type","String",34,34,"left","","",45)
       t.addColumn("High Risk","String",71,71,"left","","",45)
       t.addColumn("U/R","String",6,6,"left","","",55)
    t.addColumn("Patient ","StringPatient",5,5,"left","PatientFolder","Patient",130)
       t.addColumn("Patient Comments","String",36,36,"","","",70)
       t.addColumn("Clinic Comments","String",69,69,"","","",70)
       t.addColumn("Clinic Instructions","String",70,70,"","","",70)
       t.addColumn("Service Delivery Mode","String",72,72,"","","",45)
       t.addColumn("Alerts","Image",22,-1,"left","alert","",50)
       AddTableRows();
       TableOutputDynamicRow(0,1,63);    // Order Column,Asc Dsc
       break; }
    }
    HideWaitScreen();
  },50);
}
function ViewLink(OptionLink) {
  switch (OptionLink) {
    case "0": { InitTable("0"); break; }
    case "1": { InitTable("1"); break; }
    case "2": { InitTable("2"); break; }
    case "3": { InitTable("3"); break; }
  }
}

function UpdateConf(CheckBox){
  var UpdateConf=0
  if(CheckBox.checked) {
     UpdateConf=1
  }
    var serverURL   = "../cgi-bin/outweb02.pbl?reportno=9&updatety=8" +
                      "&casekeys=" + CheckBox.value.replace(/ /g,"+") +
                      "&confappt=" + UpdateConf
  var returnValue = RSExecute(serverURL);
}
function InitTableWA(TableView) {
  document.title="Patient List";
  ShowWaitScreen();

  window.setTimeout(function() {
    switch (TableView) {
      case "0": {
        document.SelectPeriod.tablview.selectedIndex=0;
        t = new Table(1,0,2,"100%","center",40,90);
        t.addColumn("Time","Time",1,1,"left","AppointmentIcon.gif","Slot",40)
        t.addColumn("Type","String",34,34,"left","","",25)
        t.addColumn("U/R","String",6,6,"left","","",50)
        t.addColumn("Patient","StringPatient",5,5,"left","PatientFolder","Patient",180)
        if (document.SelectPeriod.showcpmi.value=="1") {
          t.addColumn("Confirm PMI","ButtonLinkWide",65,66,"left","","ConfirmPMI",80)
        }
        t.addColumn("Check-In","ButtonLink",15,-1,"left","","CheckIn",50)
        t.addColumn("Time Seen","ButtonLink",14,-1,"left","","TimeSeenOnly",50)
        t.addColumn("Departure","ButtonLinkText",75,-1,"left","","Departure",50)
        t.addColumn("Follow Up","ButtonLink",20,-1,"left","","FollowUp",50)
        t.addColumn("Non Attend","ButtonLink",21,-1,"left","","NonAttend",50)
        t.addColumn("Alerts","Image",22,-1,"left","alert","",55)
        t.addColumn(SelectPeriod.dummyclm.value,"String",37,37,"left","","",25)
        t.addColumn("Clinic Type","String",56,56,"left","","",40)
        t.addColumn("Clinic","String",55,55,"left","","",110)
        t.addColumn("Visit","String",53,53,"left","","",35)
        t.addColumn("Confirmed","String",57,57,"left","","",50)
        AddTableRows();
        t.sortTable(6,1);    // By Clinic Type
        t.sortTable(5,1);    // By Clinic Date
        TableOutput(0,1);    // Order Column,Asc Dsc
        break;
      }
      case "1": {
        document.SelectPeriod.tablview.selectedIndex=1;
        t = new Table(1,0,2,"100%","center",40,90);
        t.addColumn("Time","Time",1,1,"left","AppointmentIcon.gif","Slot",60)
        t.addColumn("Type","String",34,34,"left","","",45)
        t.addColumn("U/R","String",6,6,"left","","",50)
        t.addColumn("Patient ","StringPatient",5,5,"left","PatientFolder","Patient",150)
        if (document.SelectPeriod.showcpmi.value=="1") {
          t.addColumn("Confirm PMI","ButtonLinkWide",65,66,"left","","ConfirmPMI",80)
        }
        t.addColumn("Check-In","ButtonLink",15,-1,"left","","CheckIn",50)
        t.addColumn("Time Seen","ButtonLink",14,-1,"left","","TimeSeenOnly",50)
        t.addColumn("Diagnosis/Complaint","String",22,22,"","","",75)
        t.addColumn("Appointment Comments","String",36,36,"","","",75)
        t.addColumn("Alerts","Image",22,-1,"left","alert","",50)
        AddTableRows();
        TableOutputDynamicRow(0,1,63);    // Order Column,Asc Dsc
        break;
      }
      case "2": {
        document.SelectPeriod.tablview.selectedIndex=2;
        t = new Table(1,0,2,"100%","center",40,50);
        t.addColumn("Time","Time",1,1,"left","AppointmentIcon.gif","Slot",55)
        t.addColumn("Type","String",34,34,"left","","",45)
        t.addColumn("U/R","String",6,6,"left","","",50)
        t.addColumn("Patient ","StringPatient",5,5,"left","PatientFolder","Patient",180)
        t.addColumn("Private","String",25,25,"","","",75)
        t.addColumn("Business","String",26,26,"","","",75)
        t.addColumn("Mobile","String",27,27,"","","",75)
        AddTableRows();
        TableOutput(0,1);    // Order Column,Asc Dsc
        break;
      }
      case "3": {
        document.SelectPeriod.tablview.selectedIndex=3;
        t = new Table(1,0,2,"100%","center",40,90);
        t.addColumn("Time","Time",1,1,"left","AppointmentIcon.gif","Slot",60)
        t.addColumn("Type","String",34,34,"left","","",45)
        t.addColumn("High Risk","String",71,71,"left","","",45)
        t.addColumn("U/R","String",6,6,"left","","",50)
        t.addColumn("Patient ","StringPatient",5,5,"left","PatientFolder","Patient",130)
        t.addColumn("Appointment  Comments","String",36,36,"","","",70)
        t.addColumn("Clinic Comments","String",69,69,"","","",70)
        t.addColumn("Clinic Instructions","String",70,70,"","","",70)
        t.addColumn("Service Delivery Mode","String",72,72,"","","",45)
        t.addColumn("Alerts","Image",22,-1,"left","alert","",50)
        AddTableRows();
        TableOutputDynamicRow(0,1,63);    // Order Column,Asc Dsc
        break;
      }
    }
    HideWaitScreen();
  },50);
}

function InitTableInqWA(TableView) {
  document.title="Patient List";
  ShowWaitScreen();

  window.setTimeout(function() {
    switch (TableView) {
      case "0": {
        document.SelectPeriod.tablview.selectedIndex=0;
        t = new Table(1,0,2,"100%","center",40,90);
        t.addColumn("Time","Time",1,1,"left","","",40)
        t.addColumn("Type","String",34,34,"left","","",25)
        t.addColumn("U/R","String",6,6,"left","","",40)
        t.addColumn("Patient","StringPatient",5,5,"left","","",200)
        if(document.SelectPeriod.showcpmi.value=="1") {
          t.addColumn("Confirm PMI","String",65,65,"left","","",80)
        }
        t.addColumn("Check-In","String",15,-1,"left","","",40)
        t.addColumn("Time Seen","String",14,-1,"left","","",40)
        t.addColumn("Departure","String",75,-1,"left","","",65)
        t.addColumn("Follow Up","String",20,-1,"left","","",40)
        t.addColumn("Non Attend","String",21,-1,"left","","",40)
        t.addColumn("Alerts","Image",22,-1,"left","alert","",55)
        t.addColumn(SelectPeriod.dummyclm.value,"String",37,37,"left","","",25)
        t.addColumn("Clinic Type","String",56,56,"left","","",40)
        t.addColumn("Clinic","String",55,55,"left","","",110)
        t.addColumn("Visit","String",53,53,"left","","",35)
        t.addColumn("Confirmed","String",57,57,"left","","",50)
        AddTableRows();
        t.sortTable(6,1);    // By Clinic Type
        t.sortTable(5,1);    // By Clinic Date
        TableOutput(0,1);    // Order Column,Asc Dsc
        break; 
      }
      case "1": {
        document.SelectPeriod.tablview.selectedIndex=1;
        t = new Table(1,0,2,"100%","center",40,90);
        t.addColumn("Time","Time",1,1,"left","","",60)
        t.addColumn("Type","String",34,34,"left","","",45)
        t.addColumn("U/R","String",6,6,"left","","",55)
        t.addColumn("Patient","StringPatient",5,5,"left","","",150)
        if(document.SelectPeriod.showcpmi.value=="1") {
          t.addColumn("Confirm PMI","String",65,66,"left","","",80)
        }
        t.addColumn("Check-In","String",15,-1,"left","","",50)
        t.addColumn("Time Seen","String",14,-1,"left","","",50)
        t.addColumn("Diagnosis/Complaint","String",22,22,"","","",75)
        t.addColumn("Appointment Comments","String",36,36,"","","",75)
        t.addColumn("Alerts","Image",22,-1,"left","alert","",50)
        AddTableRows();
        TableOutputDynamicRow(0,1,63);    // Order Column,Asc Dsc
        break; 
      }
      case "2": {
        document.SelectPeriod.tablview.selectedIndex=2;
        t = new Table(1,0,2,"100%","center",40,50);
        t.addColumn("Time","Time",1,1,"left","","",55)
        t.addColumn("Type","String",34,34,"left","","",45)
        t.addColumn("U/R","String",6,6,"left","","",55)
        t.addColumn("Patient","StringPatient",5,5,"left","","",180)
        t.addColumn("Private","String",25,25,"","","",75)
        t.addColumn("Business","String",26,26,"","","",75)
        t.addColumn("Mobile","String",27,27,"","","",75)
        AddTableRows();
        TableOutput(0,1);    // Order Column,Asc Dsc
        break;
      }
      case "3": {
        document.SelectPeriod.tablview.selectedIndex=3;
        t = new Table(1,0,2,"100%","center",40,90);
        t.addColumn("Time","Time",1,1,"left","","",60)
        t.addColumn("Type","String",34,34,"left","","",45)
        t.addColumn("High Risk","String",71,71,"left","","",45)
        t.addColumn("U/R","String",6,6,"left","","",55)
        t.addColumn("Patient","StringPatient",5,5,"left","","",130)
        t.addColumn("Appointment  Comments","String",36,36,"","","",70)
        t.addColumn("Clinic Comments","String",69,69,"","","",70)
        t.addColumn("Clinic Instructions","String",70,70,"","","",70)
        t.addColumn("Service Delivery Mode","String",72,72,"","","",45)
        t.addColumn("Alerts","Image",22,-1,"left","alert","",50)
        AddTableRows();
        TableOutputDynamicRow(0,1,63);    // Order Column,Asc Dsc
        break; 
      }
    }
    HideWaitScreen();
  },50);
}
function ViewLinkWA(OptionLink) {
  switch (OptionLink) {
    case "0": { InitTableWA("0"); break; }
    case "1": { InitTableWA("1"); break; }
    case "2": { InitTableWA("2"); break; }
    case "3": { InitTableWA("3"); break; }
  }
}
function ViewLinkInqWA(OptionLink) {
  switch (OptionLink) {
    case "0": { InitTableInqWA("0"); break; }
    case "1": { InitTableInqWA("1"); break; }
    case "2": { InitTableInqWA("2"); break; }
    case "3": { InitTableInqWA("3"); break; }
  }
}

