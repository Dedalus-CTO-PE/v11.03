//jsVersion  : V11.03.00
//------------------------------------------------------------
// Source Code  : patweb9801018.js
//
// Function     : 
//
// Modification :
//
// V10.00.00 28/06/2010 Jill Parkinson CAR 224339
//                      New Include
//----------------------------------------------------------------------------
// Referral Table Widget
//---------------------------------------------------------------------------
function ReferralInitTable1() {
 t = new Table(1,0,2,"100%","center",22,22);
 t.addColumn("Date","Date",2,2,"left","DocumentIcon.gif","0","15%")
 t.addColumn("Department","String",1,1,"left","","","30%")
 t.addColumn("Problem","String",5,5,"left","","","40%")
 t.addColumn("Status","String",3,3,"left","","","15%")
 ReferralTableRows()
 t.sortTable(1,1);    // By Department
 TableOutput(0,2);    // By Date Order Column,Asc Dsc
 TableLocation.innerHTML+="<div id=allweb0202015></div>"
}
//----------------------------------------------------------------------------
// Referral Table Widget
//---------------------------------------------------------------------------
function ReferralInitTable2() {
 t = new Table(1,0,2,"100%","center",22,22);
 t.addColumn("Date","Date",2,2,"left","DocumentIcon.gif","0","10%")
 t.addColumn("Department","String",1,1,"left","","","20%")
 t.addColumn("Problem","String",5,5,"left","","","20%")
 t.addColumn("Referred By","String",4,4,"left","","","20%")
 t.addColumn("Responsible HCP","String",26,26,"left","","","20%")
 t.addColumn("Case Team","String",23,23,"left","","","20%")
// t.addColumn(PatientLinks.claimcode.value,"String",22,22,"left","","",30)
// t.addColumn("Type/Link","String",21,21,"left","","",60)
// t.addColumn("Type/Link","ImageText",21,21,"left","UpdateLink","27",90,28)
 t.addColumn("Status","String",3,3,"left","","","10%")
 ReferralTableRows()
 t.sortTable(1,1);    // By Department
 TableOutput(0,2);    // By Date Order Column,Asc Dsc
 TableLocation.innerHTML+="<div id=allweb0202015></div>"
}
function ReferralLink(ReferralKey,ReferralDep) {
  var uno=PatientLinks.urnumber.value.replace(/ /g,"+");
  var rno=ReferralKey.replace(/ /g,"+");
  var dep=ReferralDep.replace(/ /g,"+");
  linkurl="../cgi-bin/allweb02.pbl?reportno=02&template=016&urnumber="+uno+"&admissno="+rno+"&deptcode="+dep;
  ClickWidget=GetWidget("allweb0202015");
  WidgetLeftPanel(ClickWidget);
  WidgetRightPanel(linkurl);
}
//----------------------------------------------------------------------------
// Appointments Table Widget
//---------------------------------------------------------------------------
function AppointInitTable() {
 t = new Table(1,0,2,"100%","center",22,22);
 t.addColumn("Date","DateTime2",2,2,"left","AppointmentIcon.gif","0","20%")
 t.addColumn("Day","String",1,1,"left","","","10%")
 t.addColumn("Clinic","String",4,4,"left","","","30%")
 t.addColumn("Clinic Type","String",3,3,"left","","","20%")
 t.addColumn("Type","String",6,6,"left","","","10%")
 t.addColumn("Status","String",7,7,"left","","","10%")
// t.addColumn("Outcome","String",5,5,"left","","","10%")
 AddAppointments();
 TableOutput(0,2);    // Order Column,Asc Dsc
 TableLocation.innerHTML+="<div id=patweb9801136></div>"
}
function AppointLink(CaseKeys) {
 CASEKEYS=CaseKeys.replace(/ /g,"+")
 linkurl="outweb02.pbl?reportno=3&template=1&casekeys="+CASEKEYS
 if (ClickWidget==undefined) { 
   el=document.getElementsByTagName("div")
   for (i=0;i<el.length;i++) {
     if (el[i].id=="patweb9801136") { break; }
     if (el[i].className=="Widget") { ClickWidget=el[i] }
   }
 }
 WidgetLeftPanel(ClickWidget);
 WidgetRightPanel(linkurl);
}
//----------------------------------------------------------------------------
// Medical Records Table Widget
//---------------------------------------------------------------------------
function MedRecInitTable1() {
 document.title="Medical Record Details"
 t = new Table(1,0,2,"100%","center",22,22);
 t.addColumn("Document Type","String",1,1,"left","DocumentIcon.gif","0",140)
 t.addColumn("Volume","String",2,2,"center","","",30)
 t.addColumn("Location","String",3,3,"left","","",150)
 t.addColumn("Status","String",4,4,"left","","",80)
 t.addColumn("Comments","String",5,5,"left","","",90)
// t.addColumn("Movement Date","Date",6,6,"left","","",65)
// t.addColumn("Microfilm","String",7,7,"left","","",85)
 AddMedRecs()
 TableOutput(0,2);    // Order Column,Asc Dsc
 TableLocation.innerHTML+="<div id=patweb9801133></div>"
// TableSort(1);
// TableSort(1);
// TableSort(0); 
}
function MedRecInitTable2() {
 document.title="Medical Record Details"
 t = new Table(1,0,2,"100%","center",22,22);
 t.addColumn("Document Type","String",1,1,"left","DocumentIcon.gif","0",140)
 t.addColumn("Volume","String",2,2,"center","","",30)
 t.addColumn("Location","String",3,3,"left","","",150)
 t.addColumn("Status","String",4,4,"left","","",80)
 t.addColumn("Comments","String",5,5,"left","","",90)
 t.addColumn("Movement Date","Date",6,6,"left","","",65)
 t.addColumn("Microfilm","String",7,7,"left","","",85)
 AddMedRecs()
 TableOutput(0,2);    // Order Column,Asc Dsc
 TableLocation.innerHTML+="<div id=patweb9801133></div>"
// TableSort(1);
// TableSort(1);
// TableSort(0); 
}
function RequestReport(UrNo,doc,Check) {
 if (ClickWidget==undefined) { 
   el=document.getElementsByTagName("div")
   for (i=0;i<el.length;i++) {
     if (el[i].id=="patweb9801133") { break; }
     if (el[i].className=="Widget") { ClickWidget=el[i] }
   }
 }
 LinkURL="patweb85.pbl?reportno=1&template=1" +
         "&urnumber=" + UrNo.replace(/ /g,"+") +
         "&medrr001=" + doc.replace(/ /g,"+") +
         "&showchek=" + Check
 WidgetLeftPanel(ClickWidget);
 WidgetRightPanel(LinkURL);
}
//----------------------------------------------------------------------------
// Visit Table Widget
//---------------------------------------------------------------------------
function VisitInitTable1() {
 t = new Table(1,0,2,"100%","center",22,22);
 t.addColumn("Date","DateTime2",2,2,"left","AppointmentIcon.gif","0","15%")
 t.addColumn("Type","String",16,16,"left","","","5%")
 t.addColumn("HCP","String",6,6,"left","","","35%")
 t.addColumn("Diagnosis/Procedure","String",21,21,"left","","","35%")
 t.addColumn("Status","String",19,19,"left","","","15%")
 AddTableRows()
 TableOutput(0,2);    // Order Column,Asc Dsc
 TableLocation.innerHTML+="<div id=patweb9801019></div>"
}
//----------------------------------------------------------------------------
// Visit Table Widget
//---------------------------------------------------------------------------
function VisitInitTable2() {
 t = new Table(1,0,2,"100%","center",25,25);
 t.addColumn("Date","DateTime",2,2,"left","AppointmentIcon.gif","0","15%")
 t.addColumn("Day","String",15,15,"left","","","5%")
 t.addColumn("Type","String",16,16,"center","","","5%")
 t.addColumn("Diagnosis/Procedure","String",21,21,"left","","","25%")
 t.addColumn("Unit","String",14,14,"left","","","10%")
 t.addColumn("Ward","String",5,5,"center","","","5%")
 t.addColumn("HCP","String",6,6,"left","","","25%")
 t.addColumn("Status","String",19,19,"left","","","5%")
 AddTableRows()
 TableOutput(0,2);    // Order Column,Asc Dsc
 TableLocation.innerHTML+="<div id=patweb9801019></div>"
}
//----------------------------------------------------------------------------
// Results Table Widget
//---------------------------------------------------------------------------
function ResultsInitTable1() {
 t = new Table(1,0,1,"100%","center",22,22);
 t.addColumn("Date","ResultDate",1,1,"left nowrap","pathology.gif","0","18%","","","","","ResultLink")
 t.addColumn("Result","String",2,2,"left nowrap","","","30%")
 t.addColumn("Lab","String",10,10,"left nowrap","","","22%")
// t.addColumn("Diagnostic Group","String",11,11,"left nowrap","","",100)
 t.addColumn("Status","String",5,5,"center nowrap","","","10%")
 t.addColumn("Normal","Image",3,3,"center","ResultStatus","","10%")
 t.addColumn("Read","Image",8,8,"center","ResultRead","","10%")
 OrderColumn=0; 
 AscDsc=2;
 lastOrderColumn=OrderColumn;
 AddResults()
 TableOutput(OrderColumn,AscDsc);
 TableLocation.innerHTML+="<div id=cliweb0301008></div>"
}
function ResultsInitTable2() {
 t = new Table(1,0,1,"100%","center",22,22);
 t.addColumn("Date","ResultDateTime",1,1,"left nowrap","pathology.gif","0","15%","","","","","ResultLink")
 t.addColumn("Result","String",2,2,"left nowrap","","","30%")
 t.addColumn("Lab","String",10,10,"left nowrap","","","20%")
 t.addColumn("Diagnostic Group","String",11,11,"left nowrap","","","20%")
 t.addColumn("Status","String",5,5,"center nowrap","","","5%")
 t.addColumn("Normal","Image",3,3,"center","ResultStatus","","5%")
 t.addColumn("Read","Image",8,8,"center","ResultRead","","5%")
 OrderColumn=0; 
 AscDsc=2;
 lastOrderColumn=OrderColumn;
 AddResults()
 TableOutput(OrderColumn,AscDsc);
 TableLocation.innerHTML+="<div id=cliweb0301008></div>"
}
//------------------------------------------------------------
// Note Functions (Show, Add, Select Filter)
//------------------------------------------------------------
function ShowNote(linkurl) {
  if (ClickWidget==undefined) { 
    el=document.getElementsByTagName("div")
    for (i=0;i<el.length;i++) {
      if (el[i].id=="patweb9801105") { break; }
      if (el[i].className=="Widget") { ClickWidget=el[i] }
    }
  }
  WidgetLeftPanel(ClickWidget);
  WidgetRightPanel(linkurl);
}
function CreateNote() {
  NewNote.clnote.size=NewNote.clnote.length
  NewNote.clnote.onclick=AddNote;
}
function AddNote() {
  if (ClickWidget==undefined) { 
    el=document.getElementsByTagName("div")
    for (i=0;i<el.length;i++) {
      if (el[i].id=="patweb9801105") { break; }
      if (el[i].className=="Widget") { ClickWidget=el[i] }
    }
  }
   if(NewNote.notetype.value.substr(0,3)=="006" && NewNote.clinsumm.value=="1"){
      alert("Clinical Summary already exists")
      return;}
   if(NewNote.notetype.value.substr(0,3)=="007" && NewNote.hospsumm.value=="1"){
      alert("In Hospital Summary already exists")
      return;}
   if(NewNote.notetype.value.substr(0,3)=="008" && NewNote.dischmed.value=="1"){
      alert("Discharge Medication details already exist")
      return;}

  ltemplate=NewNote.notetype.value.substr(3,6);
  linkurl="cliweb06.pbl?reportno=01&template="+ltemplate.replace(/ /g,"+")+
          "&urnumber=" + document.NewNote.urnumber.value.replace(/ /g,"+") +
          "&admissno=" + document.NewNote.admissno.value.replace(/ /g,"+")
  WidgetLeftPanel(ClickWidget);
  WidgetRightPanel(linkurl);
}
//------------------------------------------------------------
// Filter Notes List
//------------------------------------------------------------
function SelectForm() {
  el=document.getElementsByTagName("div")
  for (i=0;i<el.length;i++) {
    if (el[i].id=="patweb9801105") { break; }
    if (el[i].className=="WidgetTable") { WidgetTable=el[i] }
  }

  for (var i = 0; i < NewNote.clnote.length; i++) {
    if (NewNote.clnote.options[i].selected == true) {
       NewNote.clnot001.value = NewNote.clnote.options[i].value.substr(0,3);
    }
  }

  LinkURL=NewNote.action +"?"
  for (i=0;i<NewNote.length;i++) {
    if (NewNote[i].type=='hidden') {
      LinkURL+=NewNote[i].name+"="+NewNote[i].value.replace(/ /g,"+")+"&" }
    if (NewNote[i].type=='select-one') {
      LinkURL+=NewNote[i].name+"="+NewNote[i].options[NewNote[i].selectedIndex].value.replace(/ /g,"+")+"&" }
  }
  xmlHttp = createHttpObject();
  xmlHttp.open("GET", LinkURL, false);
  xmlHttp.send();
  WidgetTable.innerHTML=xmlHttp.responseText;
  var sel=NewNote.SELECTED.value;
  for (var i = 0; i < NewNote.clnote.length; i++) {
      if (NewNote.clnote.options[i].value.substr(0,3) == sel) {
          NewNote.clnote.selectedIndex=i;
      }
   }
}
//------------------------------------------------------------
// Clinical Document Link Add/Update
//------------------------------------------------------------
function ViewDoc(LinkURL) {
  if (ClickWidget==undefined) { 
    el=document.getElementsByTagName("div")
    for (i=0;i<el.length;i++) {
      if (el[i].id=="cliweb0801025") { break; }
      if (el[i].className=="Widget") { ClickWidget=el[i] }
    }
  }
  WidgetLeftPanel(ClickWidget);
  WidgetRightPanel(LinkURL);
  
}
//------------------------------------------------------------
// Result Table Links
//------------------------------------------------------------
function ResultLink(LinkUrl,DSS,Panel,Widget) {
  LinkToUrl=LinkUrl
  if ( DSS.substr(0,2) == "HM" ) {
    if ( Panel.substr(0,3) == "FRH" ) {
      LinkToUrl=LinkUrl.substr(0,22) + "01" +
		LinkUrl.substr(24,10) + "101" +
		LinkUrl.substr(37,27)
    } else {
      LinkToUrl=LinkUrl.substr(0,22) + "03" +
  	        LinkUrl.substr(24,10) + "101" +
	        LinkUrl.substr(37,27)
    }
  }

   if ( DSS.substr(0,2) == "CH" ) {
    if ( Panel.substr(0,3) == "FRB" ) {
        LinkToUrl=LinkUrl.substr(0,22) + "01" +
  		LinkUrl.substr(24,10) + "101" +
  		LinkUrl.substr(37,27)
    } else {
        LinkToUrl=LinkUrl.substr(0,22) + "03" +
                  LinkUrl.substr(24,10) + "102" +
                  LinkUrl.substr(37,27) 
    }
  }
  ClickWidget=GetWidget("cliweb0301008");
  WidgetLeftPanel(ClickWidget);
  WidgetRightPanel(LinkToUrl);
}
//------------------------------------------------------------
// Medications
//------------------------------------------------------------
function MedInitTable1() {
 t = new Table(1,0,1,"100%","center",22,35);
 t.addColumn("Start","Date2",1,1,"left nowrap","MedicationIcon.gif","","10%","","","","","","1","NewDocument","LaunchPrescribing()","Medication Management")
 t.addColumn("Medication","String",3,3,"left","","","45%")
 t.addColumn("Dose","String",4,4,"left nowrap","","","45%")
// t.addColumn("Prescriber","String",5,5,"left nowrap","","","10%")
 AddMedRows();
 TableOutput(0,1);
}
//------------------------------------------------------------
// Medications
//------------------------------------------------------------
function MedInitTable2() {
 t = new Table(1,0,1,"100%","center",22,40);
 t.addColumn("Start","Date",1,1,"left nowrap","MedicationIcon.gif","","10%","","","","","","1","NewDocument","LaunchPrescribing()","Medication Management")
 t.addColumn("Medication","String",3,3,"left","","","20%")
 t.addColumn("Dose","String",4,4,"left","","","30%")
 t.addColumn("Prescriber","String",5,5,"left","","","10%")
 t.addColumn("Duration","String",6,6,"right","","","10%")
 t.addColumn("End","Date",7,7,"center","","","10%")
 AddMedRows();
 TableOutput(0,1);
}
function LaunchPrescribing() {
// patient,prescribe,administration,review
// allergies, healthissues, currentmedications, wardsummary
// var theParas = 'xml='+
  SetCookie("IBAMedChartOption","patient");
  URL="patweb98.pbl?reportno=1&template=905"+
              "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
              "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") 
  window.open(URL,"MedChart","location=no,menubar=no,resizable=yes,scrollbars=no,status=yes,toolbar=no,top=0,left=0,width=" + (window.screen.availWidth - 20)+ ",height=" + (window.screen.availHeight - 60), true);
}
//----------------------------------------------------------------------------
// Problems
//----------------------------------------------------------------------------
function ProblemInitTable1() {
 t = new Table(1,0,2,"100%","center",25,25);
 t.addColumn("Established","Date",1,1,"left nowrap","DocumentIcon.gif","0","15%","","","","","","1","NewDocument","AddProblem()","Add New Problem")
 t.addColumn("Problem","String",2,2,"left","","","50%")
 t.addColumn("Type","String",3,3,"left","","","25%")
 t.addColumn("Status","String",4,4,"left","","","10%")
 AddProblems()
 TableOutput(0,2);    // Order Column,Asc Dsc
 TableLocation.innerHTML+="<div id=patweb0301011></div>"
}
function ProblemInitTable2() {
 t = new Table(1,0,2,"100%","center",25,25);
 t.addColumn("Established","Date",1,1,"left nowrap","DocumentIcon.gif","0","15%","","","","","","1","NewDocument","AddProblem()","Add New Problem")
 t.addColumn("Problem","String",2,2,"left","","","50%")
 t.addColumn("Type","String",3,3,"left","","","25%")
 t.addColumn("Status","String",4,4,"left","","","10%")
 AddProblems()
 TableOutput(0,2);    // Order Column,Asc Dsc
 TableLocation.innerHTML+="<div id=patweb0301011></div>"
}
function AddProblem() {
 linkurl="patweb03.pbl?reportno=1&template=12" +
              "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
              "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") 
 ClickWidget=GetWidget("patweb0301011");
 WidgetLeftPanel(ClickWidget);
 WidgetRightPanel(linkurl);
}
function UpdateItem(urnumber,problemn,admissno) {
 linkurl="patweb03.pbl?reportno=1&template=13" +
              "&urnumber=" + urnumber.replace(/ /g,"+") +
              "&problemn=" + problemn.replace(/ /g,"+") +
              "&admissno=" + admissno.replace(/ /g,"+") 
 ClickWidget=GetWidget("patweb0301011");
 WidgetLeftPanel(ClickWidget);
 WidgetRightPanel(linkurl);
}
//----------------------------------------------------------------------------
// Theatre
//----------------------------------------------------------------------------
function TheatreInitTable() {
 t = new Table(1,0,2,"100%","center",25,25);
 t.addColumn("Procedure","DateTime2",1,1,"left","AppointmentIcon.gif","2","20%","","","","","TheatreLink")
 t.addColumn("Operation Desc.","String",3,3,"left","","","35%")
 t.addColumn("Surgeon","String",4,4,"left","","","30%")
//    t.addColumn("Implant","String",5,5,"left","","",35)
//    t.addColumn("Expensive","String",6,6,"left","","",40)
//    t.addColumn("Unique ID","String",8,8,"left","","",55)
 t.addColumn("Status","String",7,7,"left","","","%15")
 AddTheatreRows()
 TableOutput(1,1);    // Order Column,Asc Dsc
 TableLocation.innerHTML+="<div id=oprweb0611011></div>"
}
function TheatreLink(linkurl) {
 ClickWidget=GetWidget("oprweb0611011");
 WidgetLeftPanel(ClickWidget);
 WidgetRightPanel(linkurl);
}
