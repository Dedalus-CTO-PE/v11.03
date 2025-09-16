//jsVersion  : V11.03.00
//========================================================================
function UGInitSelect(selectID) {
  if (!UGVisitInterface) { return }
  var select=document.getElementById(selectID);
  var opt = new Option("All Care Logistics Appointments", "13"); 
  select.options[select.options.length] = opt ; 
}
function UGAppointmentLink(AppointmentID) {
  if (!UGVisitInterface) { return }
  var url=UGLaunchURL +"?OrderAppointmentId="+AppointmentID+
                       "&SelectContextInfoPane=Appointment"+
                       "&OrderFunctionAbbreviation=SELECT";
  top.UGWindow = top.window.open(
             url, 
             "UGWindow",
             "width=1024,height=768,location=no,resizable=no,scrollbars=yes,status=no,toolbar=no,menubar=no");
  top.UGWindow.focus();
}
function UGAppointmentList(PatientID,WpPage) {
  if (!UGVisitInterface) { return }
  PatientID=trim(PatientID);
  var theURL   = UGAppointmentListURL + 
                 "?wppage=" + encodeURIComponent(WpPage) + 
                 "&PatientId=" + encodeURIComponent(PatientID);
  if (arguments.length > 2) {
    if (!isWhitespace(arguments[2])) {
      theURL  +=  "&filterByDate="+encodeURIComponent(arguments[2]); 
    }
  }
  if (arguments.length > 3) {
     theURL  +=  "&filterByReferral="+encodeURIComponent(arguments[3]); 
  }
  var xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.status == 200) {
    if (isWhitespace(xmlHttp.responseText)) return;
    if (xmlHttp.responseText.substr(0,8)!="t.addRow") {
      if (trim(xmlHttp.responseText.substr(0,12))=="CURL Failed") {
DFrameMessage("Care Logistics Returned Error : \n"+xmlHttp.responseText,500,120);
        setTimeout(function() { PopUpScreen.style.display="none"; }, 5000);

      }

    } else {
      UGData  = eval(xmlHttp.responseText);
    }
  } else {
    alert("Can't Access UltraGenda Web Services Status : " + xmlHttp.status);
  }
}
//----------------------------------------------------------------------------
// Create New Table Object
// Border, Cellspacing, Cellpadding, Width, Align, Heading Height, Row Height
//----------------------------------------------------------------------------
function UGVisitTable() {
 if (!UGVisitInterface) { return }
 showTableFilterSearch = false;
 showTableFilter = false;
 showTableSearch = false;
 showTablePrint = false;
 scrollTableBody = false;
 sortTableHeading = "Care Logistic Appointments"
 document.body.style.overflowY="auto";
 var ug=document.getElementById("UGSection");
 ug.style.display="";
 setTimeout(UGTableLoad,100)
}
function UGTableLoad() {
 t = new Table(1,0,2,"100%","center",30,30);
 t.addColumn("Adm/Visit Date","DateTime",2,2,"left","AppointmentIcon.gif","0",110)
 t.addColumn("Day","String",15,15,"left","","",25)
 t.addColumn("Type","String",16,16,"left","","",35)
 t.addColumn("Unit","String",28,28,"left","","",40)
 t.addColumn("HCP","String",6,6,"left","","",200)
 t.addColumn("Location","String",18,18,"left","","",100)
 t.addColumn("Status","String",19,19,"left","","",110)
 t.addColumn("Visit No.","String",1,1,"left","","",50)
 UGAppointmentList(PatientURN,"PATWEB98.01.301");
 TableOutput(0,2);    // Order Column,Asc Dsc
}
//----------------------------------------------------------------------------
// Create New Table Object
// Border, Cellspacing, Cellpadding, Width, Align, Heading Height, Row Height
//----------------------------------------------------------------------------
function UGLinkedVisitTable() {
 if (!UGVisitInterface) { return }
 showTableFilterSearch = false;
 showTableFilter = false;
 showTableSearch = false;
 showTablePrint = false;
 scrollTableBody = false;
 sortTableHeading = "Care Logistic Appointments"
 document.body.style.overflowY="auto";
 var ug=document.getElementById("UGSection");
 ug.style.display="";
 setTimeout(UGLinkedTableLoad,100)
}
function UGLinkedTableLoad() {
 t = new Table(1,0,2,"100%","center",30,30);
 t.addColumn("Adm/Visit Date","DateTime",2,2,"left","AppointmentIcon.gif","0",110)
 t.addColumn("Day","String",15,15,"left","","",25)
 t.addColumn("Type","String",16,16,"left","","",35)
 t.addColumn("Unit","String",28,28,"left","","",40)
 t.addColumn("HCP","String",6,6,"left","","",200)
 t.addColumn("Location","String",18,18,"left","","",100)
 t.addColumn("Status","String",19,19,"left","","",110)
 t.addColumn("Visit No.","String",1,1,"left","","",50)
 UGAppointmentList(PatientURN,"PATWEB98.01.301","",PatientVIS);
 TableOutput(0,2);    // Order Column,Asc Dsc
}
