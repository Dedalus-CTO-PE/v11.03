//jsVersion  : V11.03.02
//
// Source Code:  ./iphone/iphone.js
//
// Modification 
//
// Version         Date           Responsible/Changes Made
//------------------------------------------------------------------------------
// V11.03.02       16/02/2023     Don Nguyen     TSK 0898088
//                                Added ability to refresh data in a section if
//                                required; modified getSectionContent()
//                                Fixed code to set focus on an empty mandatory
//                                field after the warning message.
// V11.03.01       07/02/2023     Don Nguyen     TSK 0912141
//                                Added TextBlurHandler() for validating a text
//                                field value when focus moves away from it.
//                                Fixed 'null' js errors in toggleSection(),
//                                ShowRequestButton() & HidePatientRequestButton()
// V11.01.02       13/10/2021     Don Nguyen     TSK 0898088
//                                Added 'Request' functionality for
//                                'Clinical Results'; new AddOrder() function
// V11.01.01       29/06/2021     Don Nguyen     TSK 0898865
//                                Modified DocLink() to check for new custom
//                                variable 'UseWebPDFViewer' and display the
//                                document accordingly using the installed
//                                'WebPDFViewer'.
//                                Modified openDocument() to bypass PDF file
//                                download functionality if 'UseWebPDFViewer'.
// V11.00.03       19/01/2021     Don Nguyen     TSK 0898865
//                                Modified DocLink() to redirect to CGI path
//                                for 'DocumentView.php'.
// V11.00.02       12/01/2021     Don Nguyen     TSK 0894507
//                                Modified setResultHeight() and openDocument()
//                                to set the height values more accurately.
//                                Removed code in openDocument() that closes the
//                                'Document View' screen automatically (PDF doc)
// V11.00.01       09/12/2020     Don Nguyen     TSK 0898865
//                                Modified openDocument() to set width and
//                                height for 'Document View' window accordingly.
//                                Return document as an attachment for iPhone.
// V10.15.03       22/11/2019     Sunny          TSK 0883911
//                                Fixed sort order according to Right Date
//                                column in DocInitTable()
// V10.15.02       18/10/2019     Don Nguyen     TSK 0882653
//                                Fixed bug in openDocument() to allow document 
//                                frame to be visible.
// V10.15.01       14/10/2019     Don Nguyen     TSK 0882909
//                                Re-sized Patient Results Section accordingly
// V10.03.00       13/04/2012     Version change
// V10.01.00       13/04/2012     Version change
// V10.00.00       13/04/2012     Created for Mobility Suite
//

//
// iPhone Standard Function Set
// Cut Down version of Standard.js for performance and device customisation
//
var webRoot=window.location.pathname.replace(/\/html\/.*/,"").replace(/\/cgi-bin\/.*/,"").replace(/\/php\/.*/,"").replace(/\/forms\/.*/,"");
var PHPPath = webRoot+"/php/";
var CGIPath = webRoot+"/cgi-bin/";
var IMGPath = webRoot+"/images/";
var IPHONEPath = webRoot+"/html/iphone/";
var theReturnField;
var theReturnField2;
var startDate = new Date();
var startTime = startDate.getTime();
var globalDateType = "DD MMM YYYY";
var whitespace = " \t\n\r";
var URDescription="U/R";          // Patient Header UR Description
var ShowPatientImages=true;
var UseMedChartAllergies="N";            // MedChart Available for Patient Header
var HealthFundDescription="Health Fund " //Aus=Health Fund & NZ Priv=Contract
var medHttp;
var AlertsHTML;
var AddPageURL;
var AddPageTitle;
var PageSectionID;
var ListMoreLink;
var lastrow;
setTimeout(function(){ 
  setFrameSizes();
  top.scrollTo(0,0); }, 100); 
//
// Setup Menu
//
function MenuInit() {
  el=document.getElementById("HospitalName");
  el.innerHTML=theHospitalName;
  top.setCookie("PatientPageURL","","1");
  top.setCookie("PatientPageTitle","","1");
}
function NextPage(theURL) {
  location.href=theURL;
}
//
// Zoom Control
//
function allowZoom() {
  window.top.document.getElementById("viewport").setAttribute('content','width = 910, initial-scale=1.0 , minimum-scale = 0.25, maximum-scale = 4.0');
}
function disableZoom() {
  window.top.document.getElementById("viewport").setAttribute('content','width = device-width, initial-scale = 1.0 , minimum-scale = 1.0, maximum-scale = 1.0');
}

function textareaGrow(el) {  
  var newHeight = el.scrollHeight;  
  var currentHeight = el.clientHeight;  
  if (newHeight > currentHeight) {     
     el.style.height = newHeight + 20 + 'px';  
  }
  var parentEl = el.parentElement;
  while (parentEl.tagName!="BODY") {
     parentEl = parentEl.parentElement }
  if (el.cols!=25&&parentEl.offsetWidth<480) {
    el.cols = 25; 
  }
  if (parentEl.offsetWidth>320) {
    el.cols = 40;
  }
  if (parentEl.offsetWidth>480) {
    el.cols = 60;
  }
}        
function openBP(Systolic,Diastolic) {
 theReturnField=Systolic;
 theReturnField2=Diastolic;
 var systolic = { };
 var diastolic = { };
 for( i = 50; i < 300; i += 2 ) {
   diastolic[i] = i;
   systolic[i] = i;
 }
 defSys=trim(Systolic.value);
 defDia=trim(Diastolic.value);
 if (defSys=="") defSys=120
 if (defDia=="") defDia=80
 SpinningWheel.addSlot(systolic, 'right', defSys);
 SpinningWheel.addSlot(diastolic, '', defDia);
 SpinningWheel.setCancelAction(spinInputCancel);
 SpinningWheel.setDoneAction(bpInputDone);
 SpinningWheel.open();
}
function bpInputDone() {
  var results = SpinningWheel.getSelectedValues();
  theReturnField.value= results.values[0];
  theReturnField2.value= results.values[1];
}
function openTime(theField) {
 theReturnField=theField;
 var now = new Date();
 var hours = { };
 var minutes = { };
 for( i = 0; i < 24; i += 1 ) {
   if ( i<10 ) hours['0'+i] = '0'+i;
   else hours[i] = i;
 }
 for( i = 0; i < 60; i += 1 ) {
   if ( i<10 ) minutes['0'+i] = '0'+i;
   else minutes[i] = i;
 }
 SpinningWheel.addSlot(hours, 'right', theField.value.substring(0,2));
 SpinningWheel.addSlot(minutes, '', theField.value.substring(3,5));
 SpinningWheel.setCancelAction(spinInputCancel);
 SpinningWheel.setDoneAction(timeInputDone);
 SpinningWheel.open();
}
function openDate(theField) {
 theReturnField=theField;
 var now = new Date();
 var days = { };
 var years = { };
 var months = {1:'Jan',2:'Feb',3:'Mar',4:'Apr',5:'May',6:'Jun',7:'Jul',8:'Aug',9:'Sep',10:'Oct',11:'Nov',12:'Dec' };
 for( var i = 1; i < 32; i += 1 ) {
   if ( i<10 ) days['0'+i] = '0'+i;
   else days[i] = i;
 }
 if (theField.className.match(/Past/)) {
   for( i = now.getFullYear()-120; i < now.getFullYear()+1; i += 1 ) {
     years[i] = i;
   }
 }
 else {
   for( i = now.getFullYear()-1; i < now.getFullYear()+5; i += 1 ) {
     years[i] = i;
   }
 }
 if (isWhitespace(theField.value)) {
   curDay=now.getDate();
   curMthNo=now.getMonth()+1;
   curYear=now.getFullYear();
 }
 else { 
   curDay=theField.value.substring(0,2);
   curMth=theField.value.substring(3,6);
   switch (curMth) {
    case "Jan": curMthNo="1";break;
    case "Feb": curMthNo="2";break;
    case "Mar": curMthNo="3";break;
    case "Apr": curMthNo="4";break;
    case "May": curMthNo="5";break;
    case "Jun": curMthNo="6";break;
    case "Jul": curMthNo="7";break;
    case "Aug": curMthNo="8";break;
    case "Sep": curMthNo="9";break;
    case "Oct": curMthNo="10";break;
    case "Nov": curMthNo="11";break;
    case "Dec": curMthNo="12";break;
   }
   curYear=theField.value.substring(7,11);
 }
 SpinningWheel.addSlot(days, 'right', curDay);
 SpinningWheel.addSlot(months, '', curMthNo);
 SpinningWheel.addSlot(years, 'right', curYear);
 SpinningWheel.setCancelAction(spinInputCancel);
 SpinningWheel.setDoneAction(dateInputDone);
 SpinningWheel.open();
}
function dateInputDone() {
  var results = SpinningWheel.getSelectedValues();
  theReturnField.value= results.values.join(' ') 
}
function timeInputDone() {
  var results = SpinningWheel.getSelectedValues();
  theReturnField.value= results.values.join(':') 
}
function spinInputCancel() {
 return;
}
function backButton() {
  el=document.getElementsByTagName("div")
  var openSection="";
  var openFormSection="";
  for (i=0;i<el.length;i++) {
    if (el[i].id.match(/sectionFormContent/)) {  
      if (el[i].style.display!="none") {
          openFormSection=el[i]
      }
   }
    if (el[i].id.match(/section.$/)) {  
      if (el[i].style.display!="none") {
        if (el[i].style.height!="0px") {
          openSection=el[i]
        }
      }
    }
  }
  if (openFormSection=="") {
    if (openSection=="") {
      top.hidePatient();
    }
    else {
      toggleSection(openSection);
    }
  }
  else {
    restoreSections();
  }
}
//------------------------------------------------------------
// iPhone List (Derived from Original Table Sort JS)
//------------------------------------------------------------
function Table(ListClass,ItemClass) {
   this.ListClass = ListClass
   this.ItemClass = ItemClass
   this.rows      = new Array();
   this.addRow    = _addTableRow;
   this.AddPatient= _addTableRow;
   this.columns   = new Array();
   this.links     = new Array();
   this.addColumn = _addTableColumn;
   this.addLink   = _addTableLink;
   this.addTotal  = _addTableTotal;
   this.sortTable = _sortTable;
   AscDsc=1
}
function _addTableTotal() {
}
function _addTableLink() {
  this.links[this.links.length] = new Array();
  var links = this.links[this.links.length-1];
  for(var i = 0; i < arguments.length; i++) 
     links[links.length] = arguments[i];
}
function _sortTable(Column,AscDsc) {
  SortOrderBy = t.columns[Column][3]
  if (AscDsc == 1) {
    switch(t.columns[Column][1]) {
      case "Number"    :  t.rows.sort(NumericSort); break;
      case "Graph"     :  t.rows.sort(NumericSort); break;
      default          :  t.rows.sort(StringSort); break;
    }
  }
  else {
    switch(t.columns[Column][1]) {
      case "Number"    :  t.rows.sort(RevNumericSort); break;
      case "Graph"     :  t.rows.sort(RevNumericSort); break;
      default          :  t.rows.sort(RevStringSort); break;
    }
  }
}
function NumericSort(a,b) {
  return a[SortOrderBy] - b[SortOrderBy];
}
function StringSort(a,b) {
  if (a[SortOrderBy] < b[SortOrderBy] ) { x = -1 }
  if (a[SortOrderBy] == b[SortOrderBy] ) { x = 0  }
  if (a[SortOrderBy] > b[SortOrderBy] ) { x = 1  }
  return x ;
}
function RevNumericSort(a,b) {
  return b[SortOrderBy] - a[SortOrderBy];
}
function RevStringSort(a,b) {
  if (a[SortOrderBy] < b[SortOrderBy] ) { x = 1 }
  if (a[SortOrderBy] == b[SortOrderBy] ) { x = 0  }
  if (a[SortOrderBy] > b[SortOrderBy] ) { x = -1  }
  return x ;
}
function _addTableColumn() {
  this.columns[this.columns.length] = new Array();
  var column = this.columns[this.columns.length-1];
  for(var i = 0; i < arguments.length; i++) 
     column[column.length] = arguments[i];
  //if (column[1] != "Image"  && column[5] != "") {
  //  var ImageBuffer = new Image();
  //  ImageBuffer.src = "../images/" + column[5]
 // }
}
function _addTableRow() {
  this.rows[this.rows.length] = new Array();
  var row = this.rows[this.rows.length-1];
  for(var i = 0; i < arguments.length; i++) 
     row[row.length] = arguments[i];
}
function TableBody() {
 for(var i = 0; i < t.rows.length; i++) {
   if (isWhitespace(t.ItemClass)) {
     TableString[TableString.length] = "<li>"; 
   }
   else {
     TableString[TableString.length] = "<li class="+t.ItemClass+">";
   }
   for(var j = 0; j < t.columns.length; j++) {
     switch(t.columns[j][1]) {
       case "Date" :  
         InsertLinks(t.columns[j],t.rows[i])
         TableString[TableString.length] = FormatDate(t.rows[i][t.columns[j][2]]);
         break;
       case "DateTime" :  
         InsertLinks(t.columns[j],t.rows[i])
         TableString[TableString.length] = FormatDateTime(t.rows[i][t.columns[j][2]]);
         break;
       case "Name" :  
         InsertLinks(t.columns[j],t.rows[i])
         TableString[TableString.length] = FormatName(t.rows[i][t.columns[j][2]]);
         break;
       case "EmrPatient" :  
         Link=t.columns[j][6]
         TableString[TableString.length] = "<span class=PatientDetails>"
         TableString[TableString.length] = "<span class=patientName>"
         if (Link=="") {
           TableString[TableString.length] = "<a class=ListLink href='javascript:SelectPatient(\"" +
                                           t.rows[i][3] + "\",\"" + t.rows[i][4] + "\");'>"; }
         else {
           TableString[TableString.length] = '<a class=ListLink href="' + t.rows[i][Link] + '";>'; }
         TableString[TableString.length] = t.rows[i][t.columns[j][2]] +"</a></span>";
         break;
       case "TriageImage":  
         ClassString= TriageTime(t.rows[i][t.columns[j][2]],t.rows[i][12],t.rows[i][7],
                                 immediate,emergency,urgent,semi,non,
                                 t.rows[i][25],t.rows[i][26]);
         TableString[TableString.length] = "<span class=TriageDiv>"
         TableString[TableString.length] = "<span class='triage "+ClassString+"'>"+
                                           t.rows[i][t.columns[j][2]].substring(0,1).replace(/0/,"?") 
         TableString[TableString.length] = "</span></span>"
         break;
       case "TriageImage1":  
         if (t.rows[i][t.columns[j][2]].substring(0,1)==" "){
             t.rows[i][t.columns[j][2]]="0"}
         arrvdttm=t.rows[i][4]+t.rows[i][5]
         ClassString= TriageTime(t.rows[i][t.columns[j][2]],"",arrvdttm,
                                 immediate,emergency,urgent,semi,non,"","");
         TableString[TableString.length] = "<span class=TriageDiv>"
         TableString[TableString.length] = "<span class='triage "+ClassString+"'>"+
                                           t.rows[i][t.columns[j][2]].substring(0,1).replace(/0/,"?") 
         TableString[TableString.length] = "</span></span>"
         break;
       case "StatusImage":  
         if (t.columns[j][5] == "") {
           ImageString=t.rows[i][t.columns[j][2]];
           TableString[TableString.length] = FormatImage(ImageString);
         }
         else {
           SpanClass=t.columns[j][5] + t.rows[i][t.columns[j][2]].replace(/ *$/,"") 
           TableString[TableString.length] = "<span class='"+SpanClass+"'></span>"
         }
         break;
       case "PatientStatusImage":  
         TableString[TableString.length] = "<span class='status-img-right'>"
         if (t.columns[j][5] == "") {
           ImageString=t.rows[i][t.columns[j][2]];
         }
         else {
           ImageString=t.columns[j][5] + t.rows[i][t.columns[j][2]].replace(/ *$/,"") + ".gif"
         }
         TableString[TableString.length] = FormatImage(ImageString);
         TableString[TableString.length] = "</span>"
         break;
       case "Image":  
         TableString[TableString.length] = "<span class='list-img'>"
         if (t.columns[j][5] == "") {
           ImageString=t.rows[i][t.columns[j][2]];
         }
         else {
           ImageString=t.columns[j][5] + t.rows[i][t.columns[j][2]].replace(/ *$/,"") + ".gif"
         }
         TableString[TableString.length] = FormatImage(ImageString);
         TableString[TableString.length] = "</span>"
         break;
       case "LeftSubscript"    :   
         TableString[TableString.length] = "<span class='subscriptLeft'>"
         strRes=t.rows[i][t.columns[j][2]].replace(/ *$/,"");
         if (parseInt(t.columns[j][4])>0) { 
           strLen=parseInt(t.columns[j][4])
           if (strRes.length>strLen) {
             strRes=strRes.substr(0,strLen)+" ...."
           }
         }

         if (t.columns[j][0]!="") {
           TableString[TableString.length] = t.columns[j][0]+":"; }
         TableString[TableString.length] = strRes;
         TableString[TableString.length] = "</span>"
         break;
       case "RightSubscript"    :   
         TableString[TableString.length] = "<span class='subscriptRight'>"
         if (t.columns[j][0]!="") {
           TableString[TableString.length] = t.columns[j][0]+":"; }
         TableString[TableString.length] = t.rows[i][t.columns[j][2]].replace(/ *$/,"");
         TableString[TableString.length] = "</span>"
         if (t.columns[j][4]=="wrap") { TableString[TableString.length] = "<br>" }
         break;
       case "CenterSubscript"    :   
         TableString[TableString.length] = "<span class='subscriptCenter'>"
         if (t.columns[j][0]!="") {
           TableString[TableString.length] = t.columns[j][0]+":"; }
         TableString[TableString.length] = t.rows[i][t.columns[j][2]].replace(/ *$/,"")+"&nbsp;";
         TableString[TableString.length] = "</span>"
         break;
       case "RightDate"    :   
         TableString[TableString.length] = "<span class='subscriptRight'>"
         if (t.columns[j][0]!="") {
           TableString[TableString.length] = t.columns[j][0]+":"; }
         TableString[TableString.length] = FormatDate(t.rows[i][t.columns[j][2]]);
         TableString[TableString.length] = "</span>"
         break;
       case "RightDateTime"    :   
         TableString[TableString.length] = "<span class='subscriptRight'>"
         if (t.columns[j][0]!="") {
           TableString[TableString.length] = t.columns[j][0]+":"; }
         TableString[TableString.length] = FormatDateTime(t.rows[i][t.columns[j][2]]);
         TableString[TableString.length] = "</span>"
         break;
       case "LeftDate"    :   
         TableString[TableString.length] = "<span class='subscriptLeft'>"
         if (t.columns[j][0]!="") {
           TableString[TableString.length] = t.columns[j][0]+":"; }
         TableString[TableString.length] = FormatDate(t.rows[i][t.columns[j][2]]);
         TableString[TableString.length] = "</span>"
         break;
       case "LeftDateTime"    :   
         TableString[TableString.length] = "<span class='subscriptLeft'>"
         if (t.columns[j][0]!="") {
           TableString[TableString.length] = t.columns[j][0]+":"; }
         TableString[TableString.length] = FormatDateTime(t.rows[i][t.columns[j][2]]);
         TableString[TableString.length] = "</span>"
         break;
       case "ReqDateTime"    :   
         TableString[TableString.length] = "<span class='subscript'>"
         if (t.columns[j][0]!="") {
           TableString[TableString.length] = t.columns[j][0]+":"; }
         TableString[TableString.length] = FormatDateTime(t.rows[i][t.columns[j][2]]);
         TableString[TableString.length] = "</span>"
         break;
       case "Subscript"    :   
         TableString[TableString.length] = "<span class='subscript'>"
         TableString[TableString.length] = t.rows[i][t.columns[j][2]].replace(/ *$/,"");
         TableString[TableString.length] = "</span>"
         break;
       case "PatientImage"    :   
         ur=t.rows[i][0]
         ad=t.rows[i][1]
         gender=t.rows[i][6]
         path=t.columns[j][4]
         TableString[TableString.length] = "<span class=PatientImageDiv>"+
               "<img src='"+path+"patientPhoto.php?urnumber="+
               ur.replace(/ /g,"+")+
               "&gender="+gender+"' "+
               " class=PatientImage"+
               "></span>"
         break;
       case "Dose"    :   
         TableString[TableString.length] = "<span class='Dose'>"
         TableString[TableString.length] = t.rows[i][t.columns[j][2]]
         TableString[TableString.length] = "</span>"
         break;
       case "PatientName"    :   
         strRes= t.rows[i][t.columns[j][2]].replace(/\(.*/,"").replace(/<b>/,"").replace(/<.b>/,"").replace(/ *$/,"");
         if (parseInt(t.columns[j][4])>0) { 
           strLen=parseInt(t.columns[j][4])
           if (strRes.length>strLen) {
             strRes=strRes.substr(0,strLen)+" ...."
           }
         }
         TableString[TableString.length] = "<span class=patientName>"
         TableString[TableString.length] = strRes 
         TableString[TableString.length] = "</span>"
         break;
       case "PatientBlock"    :   
         strRes= t.rows[i][t.columns[j][2]].replace(/\(.*/,"").replace(/<b>/,"").replace(/<.b>/,"").replace(/ *$/,"");
         TableString[TableString.length] = "<span class=PatientDetails><span class=listText>"
         InsertPatientLink(t.columns[j],t.rows[i])
         TableString[TableString.length] = strRes 
         TableString[TableString.length] = "</a>"
         TableString[TableString.length] = "</span>"
         break;
       case "CloseBlock"    :   
         TableString[TableString.length] = "</span>"
         break;
       case "listText"    :   
         TableString[TableString.length] = "<span class='listText'>" + t.rows[i][t.columns[j][2]] +"</span>"
         break;
       case "WardName"    :   
         strRes= t.rows[i][t.columns[j][2]]
         if (parseInt(t.columns[j][4])>0) { 
           strLen=parseInt(t.columns[j][4])
           if (strRes.length>strLen) {
             strRes=strRes.substr(0,strLen)+" ...."
           }
         }
         TableString[TableString.length] = "<span class='WardDetails'>"
         TableString[TableString.length] = strRes
         TableString[TableString.length] = "</span>"
         break;
       case "LinkOnly"    :   
         InsertLinks(t.columns[j],t.rows[i])
         break;
       case "LinkClose"    :   
         TableString[TableString.length] = "</a>"
         break;
       case "NameOnly"    :   
         InsertLinks(t.columns[j],t.rows[i])
         TableString[TableString.length] = t.rows[i][t.columns[j][2]].replace(/\(.*/,"") + "</a>";
         //TableString[TableString.length] = "<span class='showArrow secondaryWArrow'>&nbsp;</span></a>"
         break;
       case "DocumentLink"    :   
         InsertDocLink(t.columns[j],t.rows[i])
         TableString[TableString.length] = "<span class=DocumentType>"
         TableString[TableString.length] = t.rows[i][t.columns[j][2]]
         TableString[TableString.length] = "</span>"
         break;
       case "DocumentComment"    :   
         $strRes = t.rows[i][t.columns[j][2]].replace(/ *$/,"");
         if ($strRes!="") {
           TableString[TableString.length] = "<span style='width:300px;clear:right' class='subscript'>"
           if (t.columns[j][0]!="") {
             TableString[TableString.length] = t.columns[j][0]+":"; }
           TableString[TableString.length] = t.rows[i][t.columns[j][2]].replace(/ *$/,"");
           TableString[TableString.length] = "</span>"
         }
         break;
       case "PatientLinkOnly"    :   
         InsertPatientLink(t.columns[j],t.rows[i])
         break;
       case "PatientLink"    :   
         InsertPatientLink(t.columns[j],t.rows[i])
         TableString[TableString.length] = t.rows[i][t.columns[j][2]] + "</a>";
         //TableString[TableString.length] = "<span class='showArrow secondaryWArrow'>&nbsp;</span></a>"
         break;
       case "Result"    :   
         InsertResultLinks(t.columns[j],t.rows[i])
         FormatResultIcon(t.rows[i][6]);
         resText=t.rows[i][t.columns[j][2]].replace(/ *$/,"")
         if (resText.length<31 ) {
           TableString[TableString.length] = resText; }
         else {
           TableString[TableString.length] = resText.substr(0,30)+"..."; }
         TableString[TableString.length] = "</a>"
         //TableString[TableString.length] = "<span class='showArrow secondaryWArrow'>&nbsp;</span></a>"
         break;
       case "PatientResult"    :   
         PatientResultLinks(t.columns[j],t.rows[i])
         FormatResultIcon(t.rows[i][8]);
         resText=t.rows[i][t.columns[j][2]].replace(/ *$/,"").replace(/\, \(.*\)$/,"")
         resText=t.rows[i][t.columns[j][2]].replace(/ *$/,"").replace(/\, \(.*\)$/,"")
         TableString[TableString.length] = "<span class='patient-result'>"
         TableString[TableString.length] = resText.substr(0,35); 
         TableString[TableString.length] = "</span>"
         break;
       case "ObsDateTime" :  
         InsertLinks(t.columns[j],t.rows[i])
         TableString[TableString.length] = FormatObsDateTime(t.rows[i][t.columns[j][2]]);
         break;
       case "NoteDateTime" :  
         InsertLinks(t.columns[j],t.rows[i])
         TableString[TableString.length] = "<span class='note-datetime'>"
         TableString[TableString.length] = FormatDateTime(t.rows[i][t.columns[j][2]]);
         TableString[TableString.length] = "</span>"
         break;
       case "ObsValue" :  
         if (isWhitespace(t.rows[i][t.columns[j][2]])) { 
           TableString[TableString.length] = "<span class=ObsValue>&nbsp;<br>"; }
         else {
           TableString[TableString.length] = "<span class=ObsValue>"+t.rows[i][t.columns[j][2]]+"<br>"; }
         TableString[TableString.length] = "<span class=ObsLabel>"+t.columns[j][0]+"</span></span>";
         break;
       case "ObsValueBP" :  
         if (isWhitespace(t.rows[i][t.columns[j][2]])) { 
           TableString[TableString.length] = "<span class=ObsValueBP>&nbsp;<br>"; }
         else {
           TableString[TableString.length] = "<span class=ObsValueBP>"+t.rows[i][t.columns[j][2]]+"<br>"; }
         TableString[TableString.length] = "<span class=ObsLabel>"+t.columns[j][0]+"</span></span>";
         break;
       case "ObsFluidIn" :  
         if (isWhitespace(t.rows[i][t.columns[j][2]])) { 
           TableString[TableString.length] = "<span class=ObsFluidIn>&nbsp;</span>";}
         else {
           TableString[TableString.length] = "<span class=ObsFluidIn>"+t.rows[i][t.columns[j][2]]+" mL</span>";}
         break;
       case "ObsFluidOut" :  
         if (isWhitespace(t.rows[i][t.columns[j][2]])) { 
           TableString[TableString.length] = "<span class=ObsFluidOut>&nbsp;</span>";}
         else {
           TableString[TableString.length] = "<span class=ObsFluidOut>"+t.rows[i][t.columns[j][2]]+" mL</span>";}
         break;
       case "ObsFluidLabelIn" :  
         if (isWhitespace(t.rows[i][t.columns[j][2]])) { 
           TableString[TableString.length] = "<span class=ObsFluidLabelIn>&nbsp;</span>";}
         else {
           TableString[TableString.length] = "<span class=ObsFluidLabelIn>"+t.rows[i][t.columns[j][2]]+"</span>";}
         break;
       case "ObsFluidLabelOut" :  
         if (isWhitespace(t.rows[i][t.columns[j][2]])) { 
           TableString[TableString.length] = "<span class=ObsFluidLabelOut>&nbsp;</span>";}
         else {
           TableString[TableString.length] = "<span class=ObsFluidLabelOut>"+t.rows[i][t.columns[j][2]]+"</span>";}
         break;
       case "Initials" :  
         TableString[TableString.length] = "<span class=ObsInit>"+FormatInitials(t.rows[i][t.columns[j][2]])+"</span>";
         break;
       case "EndAnchor"    :   
         TableString[TableString.length] = "</a>"
         break;
       case "linkText"    :   
         InsertLinks(t.columns[j],t.rows[i])
         TableString[TableString.length] = "<span class=linkText>"+t.rows[i][t.columns[j][2]]+"</span></a>";
         //TableString[TableString.length] = "<span class='showArrow secondaryWArrow'>&nbsp;</span></a>"
         break;
       default    :   
         InsertLinks(t.columns[j],t.rows[i])
         TableString[TableString.length] = "&nbsp;"+t.rows[i][t.columns[j][2]] +"</a>";
         //TableString[TableString.length] = "<span class='showArrow secondaryWArrow'>&nbsp;</span></a>"
         break;
     }
     }
     TableString[TableString.length] = "</li>"  ;
   }
}
function CalcTime(datetime) {
   today = new Date();
   yyyy = datetime.substr(0,4)
   mm = datetime.substr(4,2)
   mm = mm - 1
   dd = datetime.substr(6,2)
   hh = datetime.substr(8,2)
   mi = datetime.substr(11,2)
   ss = datetime.substr(14,2)
   cdate = new Date(yyyy,mm,dd,hh,mi,ss);
   difference = today.getTime() - cdate.getTime();
   difference = Math.floor(difference / (1000 * 60));
   return(difference);
}
//
function TriageTime(triagecode,doctdttm,arrvdttm,immediate,emergency,urgent,semi,non,status,dest) {
  if (status=="2  ") {
    if (dest=="2") {
      theclass = "AdmitIcon"; } 
    else {
      theclass = "HomeIcon"; }
    return(theclass);
   }
   tcode= new String(triagecode)
   if ((doctdttm == "                ")||(doctdttm == "")) {
     datetime = arrvdttm;
     CalcTime(datetime);
     if ((triagecode == 1) & (difference >= immediate)) {
       theclass = "triage1 flash";
     }
     else { 
       if ((triagecode == 2) & (difference >= emergency)) {
         theclass = "triage2 flash";
       }
       else { 
         if ((triagecode == 3) & (difference >= urgent)) {
           theclass = "triage3 flash";
         }
         else { 
           if ((triagecode == 4) & (difference >= semi)) {
             theclass = "triage4 flash";
           }
           else { 
             if ((triagecode == 5) & (difference >= non)) {
               theclass = "triage5 flash";
             }
             else { 
               if (triagecode == 6) {
                 theclass = "triage6";
               }
               else {
                 theclass = "triage" + tcode.substr(0,1);
               }
             }
           }
         }
       }
     }
   }
   else {
      theclass = "triage" + tcode.substr(0,1);
   }
   return(theclass);
}
function FormatInitials(Name) {
 NameFields=Name.split(" ");
 Initials=""
 for (i=0;i<NameFields.length;i++) {
   if (NameFields[i].substr(0,1).match(/[A-z]/)) {
     Initials+=NameFields[i].substr(0,1) }
 }
 return(Initials);
}
function FormatIcon() {
 if (ImageString != "" ) {
   TableString[TableString.length] = "<img src=\"../../images/" + ImageString +
                  "\" border=0 hspace=4 align=absmiddle>";
   TableString[TableString.length] = "</a>"; 
 }
}
function FormatResultIcon(ResCD) {
  ImgString="showResultIcon" + ResCD.substr(0,2) 
  TableString[TableString.length] = "<span class='ListIcon " + ImgString + "'></span>";
  //TableString[TableString.length] = "<img class=ListIcon src=../images/" + ImgString + ">";
}
function InsertResultLinks(Column,Row) {
  Link=Column[6]
  if (Link=="") { return(0) }
  TableString[TableString.length] = "<a class=ListLink href=\"javascript:ResultLink('" + Row[Link] +
                 "','" + Row[6] + "','" + Row[7] + "')\">" ;
}
function PatientResultLinks(Column,Row) {
  Link=Column[6]
  if (Link=="") { return(0) }
  TableString[TableString.length] = "<a class=ListLink href=\"javascript:PatientResultLink('" + Row[Link] +
             "','" + Row[8] + "','" + Row[9] + "','" + Row[10] + "','" + Row[11] + "')\">" ;
}
function InsertLinks(Column,Row) {
  Link=Column[6]
  if (Link=="") { return(0) }
  if (Row[Link].match(/javascript/)) {
    TableString[TableString.length] = "<a class=ListLink href=\""+Row[Link]+"\">"
  }
  else {
    TableString[TableString.length] = "<a class=ListLink href=\"javascript:location.href='"+Row[Link]+"';\">"
  }
}
function InsertPatientLink(Column,Row) {
  var Link=Column[6];
  if (Link=="") { 
    TableString[TableString.length] = "<a class=ListLink href=\"javascript:PatientLink('"+Row[0]+"','"+Row[1]+"');\">" }
  else {
    if (Row[Link].match(/javascript/)) {
      TableString[TableString.length] = "<a class=ListLink href=\""+Row[Link]+"\">"
//                                        " ontouchend=\""+Row[Link].replace(/javascript:/i,"")+"\">"
    }
    else {
      TableString[TableString.length] = "<a class=ListLink href=\"javascript:location.href='"+Row[Link]+"';\">"
    }
  }
}
function InsertDocLink(Column,Row) {
  TableString[TableString.length] = "<a class=ListLink href=\"javascript:DocLink('"+Row[0]+"','"+Row[1]+"');\">"
}
function FormatName(Name) {
 Title="";
 Surname=""
 Given=""
 Initial=""
 NameFields=""
 NameFields=Name.split(",");
 if (NameFields.length > 1) {
   Title=","+NameFields[2].substr(0,1) + NameFields[2].substr(1,5).toLowerCase()
   Given=NameFields[1].substr(0,1) + NameFields[1].substr(1,25).toLowerCase()
   Initial=NameFields[1].substr(0,1);
   Surname=NameFields[0].toUpperCase()
 }
 else {
   Title="";
   Surname=Name;
   Initials="";
 }
 return( "<b>" + Surname + "</b> " + Title + " " + Initial  );
}
function FormatGraph(Value,Image) {
     return("<img src=../../images/" + Image + " height=10 " +
             "width=" + Value + " align=absbottom>");
}
function FormatImage(Value) {
     return("<img border=0 class=iphone-list-icon src=../images/" + Value + ">");
}
function FormatDateTime(datetime) {
   yyyy = datetime.substr(0,4);
   mm = datetime.substr(4,2);
   dd = datetime.substr(6,2);
   time = datetime.substr(8,5);
   mth3=mm;
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
   if (isWhitespace(time)) {
      return(dd + " " + mth3 + " " + yyyy); }
   else {
     return(dd + " " + mth3 + " " + yyyy + " at " + time); }
}
function FormatObsDateTime(datetime) {
   yyyy = datetime.substr(0,4);
   mm = datetime.substr(4,2);
   dd = datetime.substr(6,2);
   time = datetime.substr(8,5);
   mth3=mm;
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
//   return("<span class=ObsDateTime><span class=ObsDate>" + dd + " " + mth3 + " " + yyyy + "</span><span class=ObsTime>" + time +"</span></span>" );
   return("<span class=ObsDateTime>" + dd + " " + mth3 + " " + yyyy + " at " + time +"</span>" );
}
function FormatResDateTime(datetime) {
   yyyy = datetime.substr(0,4);
   yy = datetime.substr(2,2)
   mm = datetime.substr(4,2);
   dd = datetime.substr(6,2);
   time = datetime.substr(8,5);
   mth3=mm;
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
   return("<span class=ResDateTime>" + dd + " " + mth3 + " " + yy + 
          "<br><span class=ResultLabel>" + time +"</span></span>" );
}
function FormatDate(date) {
   yyyy = date.substr(0,4)
   mm = date.substr(4,2)
   dd = date.substr(6,2)
   mth3=mm
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
   return(dd + " " + mth3 + " " + yyyy  );
}
function TableOutput(OrderColumn,AscDsc) {
 lastOrderColumn=OrderColumn;
 if (t.rows.length != 0 ) {
   t.sortTable(OrderColumn,AscDsc);
   TableHeading(OrderColumn);
   TableBody();
   TableEnding();
  }
 else {
   TableString = [];
   TableString[TableString.length] = "<ul class=ListRes><li class=ListMore>No Information Recorded</li></ul>"; 
   TableEnding();
 }
}
function TableHeading(OrderColumn) {
  TableString = [];
  if (isWhitespace(t.ListClass)) {
    TableString[TableString.length] = "<ul>";
  }
  else {
    TableString[TableString.length] = "<ul class="+t.ListClass+">";
  }
}
function TableEnding() {
  TableString[TableString.length] = "</ul>";
  if (TableString.join) // if join method is available;
  {
    ListLocation.innerHTML = TableString.join("");
  }
  else
  {
    TableStringX="";
    for (i=0;i < TableString.length; i++)
    {
       TableStringX+=TableString[i];
    }
    ListLocation.innerHTML = TableStringX;
  }

}
function TableSort(OrderColumn) {
 if ( lastOrderColumn == OrderColumn ) { 
   if (AscDsc==1) {AscDsc=2;} else {AscDsc=1;} }
 else { 
   AscDsc=1; }
 lastOrderColumn=OrderColumn;
 TableOutput(OrderColumn,AscDsc);
}

function isWhitespace (s) {
 var i;
 if (isEmpty(s)) return true;
 for (i = 0; i < s.length; i++) {
   var c = s.charAt(i);
   if (whitespace.indexOf(c) == -1) return false;
 }
    return true; // All characters are whitespace.
}
function isEmpty(s) {
 return ((s == null) || (s.length == 0))
}
function showImage(image) {
  image.style.display="";       // image exists so display
}

//------------------------------------------------------------
//  RSExecute: execute host procedure using Ajax
//------------------------------------------------------------
function RSExecute(url) {
  xmlHttp = createHttpObject();
  // Note: this is a Synchronous Ajax call. and Firefox does NOT
  //  triggeer the onreadystatechange event on synchronour calls
  //  so the return analysis code is now inline after the send();
  //xmlHttp.onreadystatechange=RSExecuteStateChange;
  RSExecuteResult              = new Object();
  RSExecuteResult.status       = -1;
  RSExecuteResult.return_value = '';
  RSExecuteResult.message      = '';
  url = url + '&httprand='+Math.random();
  xmlHttp.open("GET",url,false);
  xmlHttp.send(null);
  RSExecuteStateChange();
  return RSExecuteResult;
}

function createHttpObject()
{
  try
  {
    xmlHttp=new XMLHttpRequest(); // Firefox, Opera 8.0+, Safari
  }
  catch (e)
  {
    // Internet Explorer in newer or older form
    try
    {
      xmlHttp=new ActiveXObject("Msxml2.XMLHTTP");
    }
    catch (e)
    {
      try
      {
        xmlHttp=new ActiveXObject("Microsoft.XMLHTTP");
      }
      catch (e)
      {
        alertify.alert("Your browser does not support AJAX!");
        return false;
      }
    }
  }
  return xmlHttp;
}

//------------------------------------------------------------
//  RSExecuteStateChange - get data back from Ajax_RSExecute call
//------------------------------------------------------------
function RSExecuteStateChange() {
  var data = '';
  var start_index = 0;
  var data_start_index = 0;
  var end_index = 0;
  var start_key = '<RETURN_VALUE';
  var end_key = '</RETURN_VALUE>';
  var metatag = '';
  if (xmlHttp.readyState==4) {
    if (xmlHttp.status == 200) {
      RSExecuteResult.message      = '';
      RSExecuteResult.return_value = '';
      RSExecuteResult.status       =  0;
      data = xmlHttp.responseText;
      if ((start_index = data.indexOf(start_key)) != -1) {
        data_start_index = data.indexOf('>',start_index) + 1;
        end_index = data.indexOf(end_key,data_start_index);
        if (end_index == -1)
          end_index = data.length;
        metatag = data.substring(start_index,data_start_index);
        if (metatag.indexOf('TYPE=SIMPLE') != -1) {
          RSExecuteResult.return_value=
            unescape(data.substring(data_start_index,end_index));
        }
        else if (metatag.indexOf('TYPE=ERROR') != -1) {
          RSExecuteResult.message     =
            unescape(data.substring(data_start_index,end_index));
          alertify.alert('Error Message<br>' + RSExecuteResult.message)
          RSExecuteResult.status  = -1;
        }
        else if (metatag.indexOf('TYPE=WARNING') != -1) {
          RSExecuteResult.message     = unescape(data.substring(data_start_index,end_index));
          alertify.confirm("Warning Message<br>"+ RSExecuteResult.message, function (e) {
            if (e) {
                RSExecuteResult.status=RSExecuteResult.status;
            } else {
                RSExecuteResult.status=-1;
            }});
        }
      }
    } else {
      RSExecuteResult.status       = -1;
    }
  }
}

function getTextarea(el) {
  textareaValue=""
  lines=el.value.split("\n")
  for (var j=0;j<lines.length;j++) {
    if (lines[j].length>el.cols) {
      textareaValue+=breakLine(lines[j],el.cols);
    }
    else {
      textareaValue+=lines[j]+"\n";
    }
  }
  return textareaValue;
}
function breakLine(textValue,colLength) {
  returnValue="";
  while (textValue.length>colLength) {
    if (textValue.lastIndexOf(" ",colLength)>0) {
      returnValue+=textValue.substr(0,textValue.lastIndexOf(" ",colLength)) +"\n";
      textValue=textValue.substr(textValue.lastIndexOf(" ",colLength)+1);
    }
    else {
      returnValue+=textValue.substr(0,colLength) +"\n";
      textValue=textValue.substr(colLength+1);
    }
  }
  returnValue+=textValue
  return returnValue;
}

//=============================================================================
//       Function to Change MonthNumbername to respective Name   
//=============================================================================
function GetMonthName(monNum) {
  switch (monNum) {
    case "01" : return "Jan";
    case "02" : return "Feb";
    case "03" : return "Mar";
    case "04" : return "Apr";
    case "05" : return "May";
    case "06" : return "Jun";
    case "07" : return "Jul";
    case "08" : return "Aug";
    case "09" : return "Sep";
    case "10" : return "Oct";
    case "11" : return "Nov";
    case "12" : return "Dec";
  }
}
function setCookie(c_name,value,expiredays) {
 var exdate=new Date();
 exdate.setDate(exdate.getDate()+expiredays);
 document.cookie=c_name+ "=" +escape(value)+ ((expiredays==null) ? "" : ";expires="+exdate.toGMTString());
}
function getCookie(c_name) {
if (document.cookie.length>0) {
  c_start=document.cookie.indexOf(c_name + "=");
  if (c_start!=-1) {
    c_start=c_start + c_name.length+1;
    c_end=document.cookie.indexOf(";",c_start);
    if (c_end==-1) c_end=document.cookie.length;
    return unescape(document.cookie.substring(c_start,c_end));
    }
  }
return "";
}
//
// Patient Summary View - iPhone
//
function getSectionContent(content,refresh) {
  PageSectionID=content.id;
  AddPageURL="";
  AddPageTitle="";
  wrefresh="0";

  if (refresh != undefined) {
    wrefresh=refresh;
  }

  HidePatientRequestButton();

  switch (content.id) {
   case "section1": 
      return;
   case "section2": 
      wurl="patweb98.pbl?reportno=1&template=84";
      //AddPageURL="patweb98.pbl?reportno=01&template=085";
      //AddPageTitle="New Alert / Allergies";
      AddPageURL="";
      AddPageTitle="";
      wscript="AlertsInitTable()";
      wtype="2";
      break;
   case "section3": 
      wurl="cliweb03.pbl?reportno=1&template=8&viewtype=1&reslnkyr=ally&norecord=10";
      wscript="ResultsInitTable1()";
      wtype="2";
      ShowRequestButton();
      break;
   case "section4": 
      wurl="medchart1.pbl?reportno=1&template=1";
      wscript="MedInitTable1()";
      wtype="2";
      break;
   case "section5": 
      wurl="cliweb08.php?reportno=1&template=1";
      wscript="DocInitTable()";
      wtype="2";
      break;
   case "section6": 
      wurl="cliweb06.pbl?reportno=1&template=17";
      wscript="NoteInitTable()";
      wtype="2";
      break;
   case "section7": 
      wurl="cliweb02.pbl?reportno=01&template=002&obsvtype=B";
      AddPageURL="cliweb02.pbl?reportno=02&template=111";
      AddPageTitle="New Basic Observations";
      wscript="ObsBasicInitTable()";
      wtype="2";
      break;
   case "section8": 
      wurl="cliweb02.pbl?reportno=01&template=002&obsvtype=F";
      AddPageURL="cliweb02.pbl?reportno=02&template=113";
      AddPageTitle="New Fluids Observations";
      wscript="ObsFluidInitTable()";
      wtype="2";
      break;
   case "section9": 
      wurl="cliweb02.pbl?reportno=01&template=002&obsvtype=N";
      AddPageURL="cliweb02.pbl?reportno=02&template=112";
      AddPageTitle="New Neuro Observations";
      wscript="ObsNeuroInitTable()";
      wtype="2";
      break;
   case "sectionA": 
      wurl="patweb03.pbl?reportno=01&template=011";
      AddPageURL="patweb03.pbl?reportno=01&template=022";
      AddPageTitle="New Problem";
      wscript="ProblemInitTable1()";
      wtype="2";
      break;
   case "sectionB": 
      wurl="allweb02.pbl?reportno=02&template=015";
      wscript="ReferralInitTable1()";
      wtype="2";
      break;
   case "sectionC": 
      wurl="oprweb06.pbl?reportno=11&template=011";
      wscript="TheatreInitTable()";
      wtype="2";
      break;
   case "sectionD": 
      wurl="patweb98.pbl?reportno=01&template=019";
      wscript="VisitInitTable1()";
      wtype="2";
      break;
   case "sectionE": 
      wurl="emrweb02.pbl?reportno=01&template=301";
      wscript="WorkFormInit()";
      wtype="1";
      wrefresh="1";
      break;
  }
  if (isWhitespace(content.innerHTML)||wrefresh=="1") {
    xmlHttp = createHttpObject();
    var h  = document.getElementsByTagName("head")[0];
    var dl = document.getElementsByTagName("div");
    var wl = document.widgetLayout
// Setup Output
    if (parseInt(wtype)!=0) {
      theURL = "../cgi-bin/"+ wurl;
      theURL = theURL + "&urnumber="+PatientURN;
      theURL = theURL + "&admissno="+PatientVIS;
      theURL = theURL + '&httprand='+Math.random();
      switch (parseInt(wtype)) {
      case 1:
        xmlHttp.open("GET", theURL, false);
        xmlHttp.send();
        if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
          content.innerHTML=xmlHttp.responseText;
          eval(wscript); 
        }
        else {
          content.innerHTML="<ul><li>Web Service Not Available<br>" +
                              "Please Contact System Administrators</li></ul>"
        }
        break;
      case 2:
        xmlHttp.open("GET", theURL, false);
        xmlHttp.send();
        if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
          var s = document.createElement("script");
          s.type="text/javascript";
          h.appendChild(s);
          s.text=xmlHttp.responseText;
          ListLocation = content;
          eval(wscript); 
        }
        else {
          content.innerHTML="<ul><li>Web Service Not Available<br>" +
                              "Please Contact System Administrators</li></ul>"
        }
        break;
      case 3:
        TableLocation = content
        eval(wl[wno].getAttribute("wscript"));
        break;
      }
    }
  }
}
function restoreSections() {
  setTimeout(function(){ top.scrollTo(0,0); }, 100); 
  var sRow = document.getElementById(PageSectionID+'row');
  var sSection = document.getElementById(PageSectionID);
  var sForm = document.getElementById('sectionForm');
  var sFormTitle   = document.getElementById('sectionFormTitle');
  var sFormContent = document.getElementById('sectionFormContent');
  var sFormFrame   = document.getElementById('sectionFormFrame');
  sFormFrame.src=webRoot+"/html/iphone/LoadingPage.html";
  sFormFrame.style.backgroundColor="white";
  sRow.style.display="block";
  sSection.style.display="block";
  sForm.style.display="none";
  sFormTitle.style.display="none";
  sFormContent.style.display= "none";

  if (PageSectionID == "section3") {  // Clinical Results
    ShowRequestButton();
  }
}
function openSection(linkurl,linktitle) {
  setTimeout(function(){ top.scrollTo(0,0); }, 100); 
  var sForm = document.getElementById('sectionForm');
  var sFormTitle   = document.getElementById('sectionFormTitle');
  var sFormContent = document.getElementById('sectionFormContent');
  var sFormFrame   = document.getElementById('sectionFormFrame');
  sFormTitle.innerHTML=linktitle;
  sForm.style.display="block";
  sFormTitle.style.display="block";
  sFormContent.style.display= "block";

  // Set 'Results' section height
  setResultHeight();

  sFormFrame.src=linkurl;  // load section content
}
function setResultHeight() {
  var sFormContent = document.getElementById('sectionFormContent');

  var Heading = document.getElementsByClassName('HeadingDiv')[0];
  var PatientHeading = document.getElementById('PatientHeading');
  var SectionForm = document.getElementById('sectionForm');

  var BodyHeight = window.innerHeight;

  var HeadingHeight = (Heading != undefined) ? Heading.clientHeight : 0;
  var PatientHeadingHeight = (PatientHeading != undefined) ? PatientHeading.clientHeight : 0;
  var SectionHeight = (SectionForm != undefined) ? SectionForm.clientHeight : 0;

  sFormContent.style.height = (BodyHeight - HeadingHeight - PatientHeadingHeight - SectionHeight) + 'px';
}
function AddItem() {
 el=document.getElementsByTagName("div")
 for (i=0;i<el.length;i++) {
   if (el[i].id.match(/section.*row/)) {
     el[i].style.display="none";
   }
   if (el[i].id==PageSectionID) {    
     el[i].style.display="none";
   }
 }
   theURL = AddPageURL + '&httprand='+Math.random() +
            "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
            "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") 
   openSection(theURL,AddPageTitle);
}
function openDocument(linkurl,linktitle) {
  allowZoom();

  pScreen=top.document.getElementById("patientScreen")
  pScreen.style.display = "none";

  width=window.innerWidth;
  height=window.innerHeight;

  // Set the 'Document View' screen size
  dScreen=top.document.getElementById("docScreen")
  dScreen.style.position = "absolute";
  dScreen.style.top = "0px";
  dScreen.style.left = "0px";
  //dScreen.style.width = "100%";
  //dScreen.style.height = "100%";
  dScreen.style.width = width + "px";
  dScreen.style.height = height + "px";
  dScreen.style.display = "";

  // Set the document content frame size
  PageHeading = top.document.getElementsByClassName("PageHeadingDiv")[0];

  dFrame=top.document.getElementById("docFrame")
  dFrame.style.width = width + "px";
  dFrame.style.height = height - PageHeading.offsetHeight + "px";
  dFrame.src=webRoot+"/html/iphone/LoadingPage.html";

  // PDF document?
  var isPDF = (linkurl.match(/filename=.*\.pdf/i) != null) ? true : false;

  // Download as attachment instead; to fix a bug in Safari (on iPhone) when
  // viewing a PDF document with multiple pages (in an embedded iframe)
  if (isPDF && 
      navigator.userAgent.match(/iPhone/i) &&
      typeof window['UseWebPDFViewer'] === 'undefined') {
    linkurl = linkurl + "&attachment=1";  // download as attachment instead
  }

  // show "Loading ..." icon while document loads
  window.setTimeout(function() { dFrame.src = linkurl; },500);

/*
  // close off 'Document View' window
  if (isPDF && navigator.userAgent.match(/iPhone/i)) {
    window.setTimeout(function() { parent.CloseDocument(); },500);
  }
*/
}
function openFormSection(section,linkurl,linktitle) {
  setTimeout(function(){ top.scrollTo(0,0); }, 100); 
  var content= document.getElementById(section);
  toggleSection(content);
  el=document.getElementsByTagName("div")
  for (i=0;i<el.length;i++) {
   if (el[i].id.match(/section.*row/)) {
     el[i].style.display="none";
   }
   if (el[i].id==PageSectionID) {     //  Clinical Results Section
     el[i].style.display="none";
   }
 }
  var sForm = document.getElementById('sectionForm');
  var sFormContent = document.getElementById('sectionFormContent');
  var sFormTitle   = document.getElementById('sectionFormTitle');
  var sFormFrame   = document.getElementById('sectionFormFrame');
  sFormTitle.innerHTML=linktitle;
  sFormTitle.style.display="block";
  sFormContent.style.display= "block";
  sFormFrame.src=linkurl;
  sForm.style.display="block";

  // Set 'Results' section height
  setResultHeight();
}
function toggleSection(content) {
  if (content == undefined) return;

  setTimeout(function(){ top.scrollTo(0,0); }, 100); 
  if (content.style.height == "0px"||content.style.height == "") {
    getSectionContent(content); }
  var arrow = document.getElementById(content.id + 'arrow');
  var row = document.getElementById(content.id + 'row');
  var expand = arrow.style.opacity == "0.99" || content.style.display == "none";
  var max_height = content.getAttribute("max_height");
  if (!max_height) {
    content.style.display = "block";
    var max_height = content.offsetHeight;
    content.setAttribute("max_height", max_height);
    content.style.overflow="hidden";
    if (!expand) {
      content.style.overflow="visible";
//      content.style.height = max_height + "px";
    }
  }
  el=document.getElementsByTagName("div")
  for (i=0;i<el.length;i++) {
     if (el[i].id.match(/section.*row/) && el[i].id!=content.id+"row") {  
       if (el[i].style.display!="none") {
         el[i].style.overflow="hidden";
         el[i].style.display="none";
       }
       else {
         el[i].style.overflow="visible";
         el[i].style.display="block"
       }
     }
  }
  setHeight(content, expand ? 0 : max_height, expand ? max_height : 0);
  toggleArrow(arrow, expand);
}
function setHeight(section, fromValue, toValue) {
  if (toValue==0) {
    section.style.display = "none";
  }
  else {
    section.style.display = "block";
  }
  //section.style.height = toValue + "px";
}
function toggleArrow(arrow, up) {
  var pa=document.getElementById("patientActions");
  var sa=document.getElementById("sectionAction");
  if (up) {
    arrow.style.webkitTransform = 'rotate(-180deg)';
    arrow.style.opacity = "0.8";
    if (pa != undefined) pa.style.display="none";
    if (AddPageURL != "" && sa != undefined) sa.style.display="";
  } 
  else {
    arrow.style.webkitTransform = 'rotate(0deg)';
    arrow.style.opacity = "0.99";
    if (pa != undefined) pa.style.display="";
    if (sa != undefined) sa.style.display="none";

    HidePatientRequestButton();
  }
  arrow.width = 12
}
//----------------------------------------------------------------------------
// Referral Table Widget
//---------------------------------------------------------------------------
function ReferralInitTable1() {
 t = new Table("ListRes","ItemRes");
// t.addColumn("Date","Date",2,2,"left","DocumentIcon.gif","0","")
 t.addColumn("Date","Date",2,2,"","","","")
 t.addColumn("Status","RightSubscript",3,3,"","","","")
 t.addColumn("","CenterSubscript",1,1,"","","","")
 t.addColumn("","CenterSubscript",5,5,"","","","")
// t.addColumn("","EndAnchor",5,5,"left","","","")
 ReferralTableRows()
 t.sortTable(1,1);    // By Department
 TableOutput(0,2);    // By Date Order Column,Asc Dsc
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
 t = new Table(1,0,2,"100%","center",25,25);
 t.addColumn("Date","DateTime2",2,2,"left","AppointmentIcon.gif","0","20%")
 t.addColumn("Day","String",1,1,"left","","","10%")
 t.addColumn("Clinic","String",4,4,"left","","","35%")
// t.addColumn("Clinic Type","String",3,3,"left","","","10%")
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
 t = new Table(1,0,2,"100%","center",25,25);
 t.addColumn("Document Type","String",1,1,"left","DocumentIcon.gif","0","30%")
 t.addColumn("Volume","String",2,2,"center","","","10%")
 t.addColumn("Location","String",3,3,"left","","","30%")
 t.addColumn("Status","String",4,4,"left","","","10%")
// t.addColumn("Comments","String",5,5,"left","","",90)
// t.addColumn("Movement Date","Date",6,6,"left","","",65)
// t.addColumn("Microfilm","String",7,7,"left","","",85)
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
// Alerts & Allergies
//---------------------------------------------------------------------------
function AlertsInitTable() {
  AlertsHTML="";
  Alerts = new Table(1,0,1,"100%","center",35);
  t = new Table(1,0,1,"100%","center",35);
  AddAlertRows();
  Alerts=t;
  if (UseMedChartAllergies=="Y") {
    t = new Table(1,0,1,"100%","center",35);
    Allergies = new Table(1,0,1,"100%","center",35);
    AddAllergies();
    Allergies=t;
  }
 if (UseMedChartAllergies=="Y") {
   if (Allergies.rows.length>0) {
     if (Allergies.rows[0][8]=="999") {
      AlertsHTML+="<div class=ind style='color:red;'>Medication "+Allergies.rows[0][1]+"</div>" }
   }
   else {
     AlertsHTML+="<div class=ind style='color:red;font-weight:bold;'>Medication Allergy Status Unknown</div>"
   }
 }
 if (UseMedChartAllergies=="Y") {
   AddAllergyDetails()
   AddAlertDetails()
 }
 else {
   AddAlertDetails()
 }
 ListLocation.innerHTML = AlertsHTML;
}
function AddAllergies() {
  xmlHttp = createHttpObject();
  theURL = "medchart1.pbl?reportno=2&template=1"
  theURL = theURL + "&urnumber="+PatientURN;
  theURL = theURL + "&admissno="+PatientVIS;
  theURL = theURL + '&httprand='+Math.random();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.responseText!="") {
    var h  = document.getElementsByTagName("head")[0];
    var s  = document.createElement("script");
    s.type = "text/javascript";
    s.text = xmlHttp.responseText;
    h.appendChild(s);
    eval('AddAlgRows();')
  }
}
function ShowAlert01(alrtcat,alrtcod) {
 el=document.getElementsByTagName("div")
 for (i=0;i<el.length;i++) {
   if (el[i].id.match(/section.*row/)) {
     el[i].style.display="none";
   }
   if (el[i].id==PageSectionID) {     //  Clinical Results Section
     el[i].style.display="none";
   }
 }
 theURL = "cliweb01.pbl?reportno=1&template=13&httprand="+Math.random() +
          "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
          "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") +
          "&alert001=" + alrtcat +
          "&alert002=" + alrtcod
 UpdatePageTitle="Update Alert / Allergy";
 openSection(theURL,UpdatePageTitle);
}
function AddAlertDetails() {
  if (Alerts.rows.length>0) {
    for(var i = 0; i < Alerts.rows.length; i++) {
      AlertsHTML+="<div class=ind><a class=ListLink href=\""+Alerts.rows[i][0]+";\">" + 
            Alerts.rows[i][2]+" ("+Alerts.rows[i][1] + ")<br>"+
           "<span class=subscriptLeft>"+FD(Alerts.rows[i][6])+"</span>" +
           "<span class=subscriptRight>"+Alerts.rows[i][5]+"</span></a></div>"
    }
  } else {
      AlertsHTML+="<div style='text-align:center' class=ind>" + 
           "<span>No Alerts Information Recorded</span></div>";
  }
}
function AddAllergyDetails() {
  if (Allergies.rows.length>0) {
    for(var i = 0; i < Allergies.rows.length; i++) {
      if (Allergies.rows[i][8]!="999") {
        AlertsHTML+="<div class=ind>" + Allergies.rows[i][1]+" (" + Allergies.rows[i][6] + ")<br>" +
           "<span class=LeftSubscript>"+FD(Allergies.rows[i][2])+"</span>" +
           "<span class=RightSubscript>"+Allergies.rows[i][11]+"</span></div>"
      }
    }
  } else {
      AlertsHTML+="<div style='text-align:center' class=ind>" + 
           "<span>No Allergies Information Recorded</span></div>";
  }
}
//----------------------------------------------------------------------------
// Visit Table Widget
//---------------------------------------------------------------------------
function ResultsInitTable1() {
 t = new Table("ListRes","ItemRes");
 t.addColumn("Result","Result",2,2,"left nowrap","pathology.gif","0","");
 t.addColumn("","LeftDateTime",1,1,"left nowrap","","","");
 t.addColumn("Flag","StatusImage",8,8,"","showResultReadStatus","","");
 t.addColumn("Flag","StatusImage",3,3,"","ResultStatus","","");
 t.addColumn("&nbsp;Status","LeftSubscript",5,5,"center nowrap","","","");
 AddResults()
 TableOutput(1,2);
 if (lastrow==1) {
   ListLocation.innerHTML += "<ul class=ListRes>" +
                             "<li class=ListMore onclick=ListMoreResults('"+ListMoreLink+"');>"+
                             "Next 10 Results</li></ul>"
 }
 else {
   if (t.rows.length != -1) {
     ListLocation.innerHTML += "<ul class=ListRes>" +
                               "<li class=ListMore>No More Results</li></ul>"
   }
 }
}
function ShowRequestButton() {
  var btnAction = document.getElementById("patientAction");
  if (btnAction != undefined) {
    btnAction.innerHTML = "Request";
    btnAction.style.display = "";
    btnAction.style.width = "50px";

    btnAction.onclick=AddOrder;
  }
}
function HidePatientRequestButton() {
  var btnAction = document.getElementById("patientAction");
  if (btnAction != undefined) {
    btnAction.style.display = "none";
  }
}
function AddOrder() {
  HidePatientRequestButton();

  el=document.getElementsByTagName("div")
  for (i=0;i<el.length;i++) {
    if (el[i].id.match(/section.*row/)) {
      el[i].style.display="none";
    }
    if (el[i].id=="section3") {     //  Clinical Results Section
      el[i].style.display="none";
    }
  }

  theURL = "patweb98.pbl?reportno=1&template=309&httprand="+Math.random() +
          "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
          "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+")

  UpdatePageTitle="Clinical Orders";
  openSection(theURL,UpdatePageTitle);
}
function ListMoreResults(theURL) {
 xmlHttp = createHttpObject();
 var h  = document.getElementsByTagName("head")[0];
 xmlHttp.open("GET", theURL, false);
 xmlHttp.send();
 if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
   var s = document.createElement("script");
   s.type="text/javascript";
   h.appendChild(s);
   s.text=xmlHttp.responseText;
//alert(s.text);
   AddResults()
   TableOutput(1,2);
   if (lastrow==1) {
     ListLocation.innerHTML += "<ul class=ListRes>" +
                               "<li class=ListMore onclick=ListMoreResults('"+ListMoreLink+"');>"+
                               "Next 10 Results</li></ul>"
    }
   else {
     ListLocation.innerHTML += "<ul class=ListRes>" +
                               "<li class=ListMore>No More Results</li></ul>"
    }
  }
}
//----------------------------------------------------------------------------
// Visit Table Widget
//---------------------------------------------------------------------------
function VisitInitTable1() {
 t = new Table("ListRes","ItemRes");
// t.addColumn("Date","DateTime",2,2,"left nowrap","AppointmentIcon.gif","0","")
 t.addColumn("Date","NoteDateTime",2,2,"","","","")
 t.addColumn("","CenterSubscript",21,21,"","","","")
 t.addColumn("","CenterSubscript",6,6,"","","","")
 t.addColumn("Type","LeftSubscript",14,14,"","","","")
 t.addColumn("Status","RightSubscript",19,19,"left","","")
// t.addColumn("","EndAnchor",6,6,"","","","")
 AddTableRows()
 TableOutput(0,2);    // Order Column,Asc Dsc
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
      alertify.alert("Clinical Summary already exists")
      return;}
   if(NewNote.notetype.value.substr(0,3)=="007" && NewNote.hospsumm.value=="1"){
      alertify.alert("In Hospital Summary already exists")
      return;}
   if(NewNote.notetype.value.substr(0,3)=="008" && NewNote.dischmed.value=="1"){
      alertify.alert("Discharge Medication details already exist")
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
function ResultLink(LinkUrl,DSS,Panel) {
  linkurl=LinkUrl.substr(0,22) + "01" +
          LinkUrl.substr(24,10) + "011" +
          LinkUrl.substr(37,27)

  if ( DSS.substr(0,2) == "HM" ) {
    if ( Panel.substr(0,3) == "FRH" ) {
      linkurl=LinkUrl.substr(0,22) + "01" +
		LinkUrl.substr(24,10) + "011" +
		LinkUrl.substr(37,27)
    } 
    else {
      linkurl=LinkUrl.substr(0,22) + "01" +
  	        LinkUrl.substr(24,10) + "012" +
	        LinkUrl.substr(37,27)
    }
  }
  if ( DSS.substr(0,2) == "CH" ) {
    if ( Panel.substr(0,3) == "FRB" ) {
        linkurl=LinkUrl.substr(0,22) + "01" +
  		LinkUrl.substr(24,10) + "011" +
  		LinkUrl.substr(37,27)
    } 
    else {
        linkurl=LinkUrl.substr(0,22) + "01" +
                  LinkUrl.substr(24,10) + "012" +   
                  LinkUrl.substr(37,27) 
    }
  }
  el=document.getElementsByTagName("div")
  for (i=0;i<el.length;i++) {
    if (el[i].id.match(/section.*row/)) {
      el[i].style.display="none";
    }
    if (el[i].id=="section3") {     //  Clinical Results Section
      el[i].style.display="none";
    }
  }
  theURL = linkurl + '&httprand='+Math.random();
  openSection(theURL,"Clinical Result");
}
//------------------------------------------------------------
// Result Table Links
//------------------------------------------------------------
function PatientResultLink(LinkUrl,DSS,Panel,urnumber,admissno) {
  linkurl=LinkUrl.substr(0,22) + "01" +
          LinkUrl.substr(24,10) + "011" +
          LinkUrl.substr(37,27)

  if ( DSS.substr(0,2) == "HM" ) {
    if ( Panel.substr(0,3) == "FRH" ) {
      linkurl=LinkUrl.substr(0,22) + "01" +
		LinkUrl.substr(24,10) + "011" +
		LinkUrl.substr(37,27)
    } 
    else {
      linkurl=LinkUrl.substr(0,22) + "01" +
  	        LinkUrl.substr(24,10) + "012" +
	        LinkUrl.substr(37,27)
    }
  }
  if ( DSS.substr(0,2) == "CH" ) {
    if ( Panel.substr(0,3) == "FRB" ) {
        linkurl=LinkUrl.substr(0,22) + "01" +
  		LinkUrl.substr(24,10) + "011" +
  		LinkUrl.substr(37,27)
    } 
    else {
        linkurl=LinkUrl.substr(0,22) + "01" +
                  LinkUrl.substr(24,10) + "012" +   
                  LinkUrl.substr(37,27) 
    }
  }

  top.setCookie("PatientPageSection","section3","1")
  top.setCookie("PatientPageURL",linkurl,"1")
  top.setCookie("PatientPageTitle","Result Details","1")

  mScreen=top.document.getElementById("mainScreen")
  mScreen.style.display = "none";
  pFrame=top.document.getElementById("patientFrame")
  pScreen=top.document.getElementById("patientScreen")
  pScreen.style.position = "absolute";
  pScreen.style.top = "0px";
  pScreen.style.left = "0px";
  pScreen.style.width = "100%";
//  pScreen.style.height = "800px";
  pFrame.src=webRoot+"/html/iphone/LoadingPage.html";
  pScreen.style.display = "";
  pFrame.src = "../../cgi-bin/patweb98.pbl?reportno=1&template=081"+
                                "&urnumber="+urnumber.replace(/ /g,"+") +
                                "&admissno="+admissno.replace(/ /g,"+")
}
//------------------------------------------------------------
// Clinical Documents
//------------------------------------------------------------
function NoteInitTable(TableView) {
 t = new Table("ListNote","ItemNote");
 t.addColumn("Note Date","NoteDateTime",0,0,"","","","")
// t.addColumn("","CenterSubscript",4,4,"","","","")
 t.addColumn("","LeftSubscript",9,9,"","","","")
 t.addColumn("","RightSubscript",1,1,"","","","")
 t.addColumn("","CenterSubscript",10,10,"","","","")
// t.addColumn("","CenterSubscript",6,6,"","","","")
// t.addColumn("","CenterSubscript",7,7,"","","","")
// t.addColumn("","CenterSubscript",8,8,"","","","")
// t.addColumn("","RightSubscript",12,12,"","","","")
// t.addColumn("","EndAnchor",11,11,"","","0","")
 AddNoteRows();
 TableOutput(0,2);
}
//------------------------------------------------------------
// Clinical Documents
//------------------------------------------------------------
function DocNoteInitTable(TableView) {
 t = new Table("ListMed","ItemMed");
 t.addColumn("Type","String",1,1,"","","","")
 t.addColumn("","LeftSubscript",5,5,"","","","")
 t.addColumn("","RightDate",4,4,"","","","")
 t.addColumn("","CenterSubscript",11,11,"11","","","")
 t.addColumn("","CenterSubscript",12,12,"11","","","")
 t.addColumn("","CenterSubscript",13,13,"11","","","")
 t.addColumn("","CenterSubscript",14,14,"11","","","")
 t.addColumn("","CenterSubscript",12,12,"","","","")
 AddDocNotRows();
 TableOutput(2,2);
}
//------------------------------------------------------------
// Clinical Documents
//------------------------------------------------------------
function DocInitTable(TableView) {
 t = new Table("ListMed","ItemMed");
 t.addColumn("Type","DocumentLink",11,11,"","","","")
 t.addColumn("","CenterSubscript",6,6,"11","","","")
 t.addColumn("","LeftSubscript",8,8,"","","","")
 t.addColumn("","RightDate",3,3,"","","","")
 t.addColumn("","CenterSubscript",12,12,"","","","")
 t.addColumn("","EndAnchor",11,11,"","","","")
 AddDocRows();
 TableOutput(3,2);
}
function DocLink(url1,url2) {
  // PDF document?
  var isPDF = (url1.match(/^.*\.pdf$/i) != null) ? true : false;

  if ( isPDF && 
       (typeof window['UseWebPDFViewer'] !== 'undefined') &&
       (window['UseWebPDFViewer'] == true) ) {
    if (typeof window['WebPDFViewer'] !== 'undefined' &&
        !isWhitespace(window['WebPDFViewer'])) {
      url1 = window['WebPDFViewer'] + url1;
    }
    else {
      alertify.alert("Web PDF Viewer not installed!\nPlease contact your system administrator.");
      return;
    }
  }
  else {
    if (url1.match(/DocumentView.php/)) {
      url1 = CGIPath + url1;
    }
  }

  openDocument(url1,"Document Details");
}
//------------------------------------------------------------
// Medications
//------------------------------------------------------------
function MedInitTable1(TableView) {
 t = new Table("ListMed","ItemMed");
 t.addColumn("Medication","listText",3,3,"left","","0","30%")
 t.addColumn("","Dose",4,4,"left nowrap","","","50%")
 t.addColumn("","LeftDate",1,1,"left nowrap","","","")
 t.addColumn("","RightSubscript",5,5,"left nowrap","","","")
// t.addColumn("Prescriber","String",5,5,"left","","","20%")
 AddMedRows();
 TableOutput(0,1);
}
//----------------------------------------------------------------------------
// Problems
//----------------------------------------------------------------------------
function ProblemInitTable1() {
 t = new Table("ListMed","ItemMed");
 t.addColumn("Established","Date",1,1,"","","0","")
 t.addColumn("","CenterSubscript",2,2,"","","","")
 t.addColumn("Type","LeftSubscript",3,3,"","","","")
 t.addColumn("Status","RightSubscript",4,4,"","","","")
 t.addColumn("","EndAnchor",3,3,"","","","")
 AddProblems()
 TableOutput(0,2);    // Order Column,Asc Dsc
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
 theURL="patweb03.pbl?reportno=1&template=23" +
        "&urnumber=" + urnumber.replace(/ /g,"+") +
        "&problemn=" + problemn.replace(/ /g,"+") +
        "&admissno=" + admissno.replace(/ /g,"+") 
 el=document.getElementsByTagName("div")
 for (i=0;i<el.length;i++) {
   if (el[i].id.match(/section.*row/)) {
     el[i].style.display="none";
   }
   if (el[i].id==PageSectionID) {  
     el[i].style.display="none";
   }
 }
 UpdatePageTitle="Update Problem";
 openSection(theURL,UpdatePageTitle);
}
//----------------------------------------------------------------------------
// Theatre
//----------------------------------------------------------------------------
function TheatreInitTable() {
 t = new Table("ListRes","ItemMed");
// t.addColumn("Procedure","DateTime",1,1,"left","AppointmentIcon.gif","2","20%","","","","","TheatreLink")
 t.addColumn("Procedure","DateTime",1,1,"","","","")
 t.addColumn("","RightSubscript",7,7,"","","","")
 t.addColumn("","CenterSubscript",3,3,"","","","")
 t.addColumn("","CenterSubscript",4,4,"","","","")
// t.addColumn("Status","EndAnchor",7,7,"","","","")
 AddTheatreRows()
 TableOutput(1,1);    // Order Column,Asc Dsc
}
function TheatreLink(linkurl) {
 ClickWidget=GetWidget("oprweb0611011");
 WidgetLeftPanel(ClickWidget);
 WidgetRightPanel(linkurl);
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
 theURL = linkURL.replace(/template=201/,"template=121").replace(/template=202/,"template=122").replace(/template=203/,"template=123")
 UpdatePageTitle="Update Observation";
 openSection(theURL,UpdatePageTitle);
}
function ObsBasicInitTable() {
  t = new Table("ListObs","ItemObs");
  t.addColumn("Date","ObsDateTime",1,1,"","","0","")
  t.addColumn("Status","StatusImage",3,3,"","ResultStatus","","") 
  t.addColumn("Pulse","ObsValue",4,4,"","","","")
  t.addColumn("Temp.","ObsValue",5,5,"","","","")
  t.addColumn("Resp.","ObsValue",6,6,"","","","")
  t.addColumn("BP","ObsValueBP",7,7,"","","","")
  t.addColumn("SaO2%","ObsValue",8,8,"","","","")
  t.addColumn("F1O2","ObsValue",9,9,"right","","","") 
  t.addColumn("","CenterSubscript",20,20,"","","","") 
/*    t.addColumn("","Initials",23,23,"","","","")  */
  t.addColumn("","EndAnchor",0,0,"","","","")     
  AddObservations()
  TableOutput(0,2)
}
function ObsFluidInitTable() {
  t = new Table("ListObs","ItemFld");
  t.addColumn("Date","ObsDateTime",1,1,"","","0","")
  t.addColumn("Input Type","ObsFluidLabelIn",13,13,"","","","")
  t.addColumn("Input","ObsFluidIn",14,14,"","","","")
  t.addColumn("Output Type","ObsFluidLabelOut",11,11,"","","","")
  t.addColumn("Output","ObsFluidOut",12,12,"","","","")
  t.addColumn("","CenterSubscript",20,20,"","","","") 
/*  t.addColumn("Act","TitleIcon",19,19,"left","TableNotesIcon","","") */
/*  t.addColumn("Sign","Initials",23,23,"","","","")  */
  t.addColumn("","EndAnchor",0,0,"","","","") 
  AddObservations()
  TableOutput(0,2)
}
function ObsNeuroInitTable() {
  t = new Table("ListObs","ItemObs");
  t.addColumn("Date","ObsDateTime",1,1,"","","0","")
  t.addColumn("Status","StatusImage",3,3,"","ResultStatus","","")
  t.addColumn("Eyes","ObsValue",15,15,"","","","")
  t.addColumn("Verbal","ObsValue",16,16,"","","","")
  t.addColumn("Motor","ObsValue",17,17,"","","","")
  t.addColumn("Total","ObsValue",18,18,"","","","")
  t.addColumn("Pupil","ObsValue",21,21,"","","","")
  t.addColumn("Limb","ObsValue",22,22,"","","","")
  t.addColumn("","CenterSubscript",20,20,"","","","") 
/*  t.addColumn("Sign","Initials",23,23,"","","","") */
  t.addColumn("","EndAnchor",0,0,"","","","") 
  AddObservations()
  TableOutput(0,2)
}
function AddPhoto(urnumber,admissno) {
  mScreen=top.document.getElementById("mainScreen")
  mScreen.style.display = "none";
  pFrame=top.document.getElementById("patientFrame")
  pScreen=top.document.getElementById("patientScreen")
  pScreen.style.position = "absolute";
  pScreen.style.top = "0px";
  pScreen.style.left = "0px";
  pScreen.style.width = "100%";
//  pScreen.style.height = "480px";
  pFrame.src=webRoot+"/html/iphone/LoadingPage.html";
  pScreen.style.display = "";

 $path="../../cgi-bin/"
 $url=location.href
 if ($url.match(/cgi-bin/)) { $path=""; }
 loc="patweb07.pbl?reportno=5&template=002"+
     "&urnumber="+urnumber.replace(/ /g,"+") +
     "&admissno="+admissno.replace(/ /g,"+") 
 top.setCookie("PatientPageURL",loc,"1")
 top.setCookie("PatientPageTitle","Photo ID","1")
 pFrame.src = "../../cgi-bin/patweb98.pbl?reportno=1&template=181"+
                                "&urnumber="+urnumber.replace(/ /g,"+") +
                                "&admissno="+admissno.replace(/ /g,"+")
}
//------------------------------------------------------------
// Convert Date Field from DD MMM YYYY to YYYYMMDD
//------------------------------------------------------------
function SetDateYYYYMMDD(DateString) {
 if (DateString!="") {
 day=DateString.substr(0,2)
 mthnam=DateString.substr(3,3)
 yrr=DateString.substr(7,4)
 switch (mthnam) {
  case "Jan": mon="01";break;
  case "Feb": mon="02";break;
  case "Mar": mon="03";break;
  case "Apr": mon="04";break;
  case "May": mon="05";break;
  case "Jun": mon="06";break;
  case "Jul": mon="07";break;
  case "Aug": mon="08";break;
  case "Sep": mon="09";break;
  case "Oct": mon="10";break;
  case "Nov": mon="11";break;
  case "Dec": mon="12";break;
  }
 ReturnString=yrr+mon+day
 ReturnString.replace(/ /g,"0")
 return ReturnString
 }
 else {
 return ""
 }
}
//========================================================================
// cliweb0202101 & cliweb0202201 - basic observation functions
//========================================================================
function checkMinMax(numField,minNumb,maxNumb) {
  if (numField.value!=0) {
    if (numField.className.match(/Integer/)) {
      if (!checkInteger(numField,numField.title)) return;;
      thisNumber=parseInt(numField.value,10);
      minNumber=parseInt(minNumb,10);
      maxNumber=parseInt(maxNumb,10);
    }
    if (numField.className.match(/Number/)) {
      if (!checkNumber(numField,numField.title)) return;;
      thisNumber=parseFloat(numField.value);
      minNumber=parseFloat(minNumb);
      maxNumber=parseFloat(maxNumb);
    }
    if ((thisNumber < minNumber) ||
        (thisNumber > maxNumber)) {
      alertify.alert(numField.title + " must be between " + minNumb + " and " + maxNumb);
      numField.select();
      return;
    }
  }
}
function checkRoomAir(type,flow) {
  if (type.value.substr(3,1)=="O") {
    flow.className="Integer";
    flow.readOnly=false;
  }
  else {
    flow.value="";
    flow.className="Readonly";
    flow.readOnly=true;
  }
}
function checkBSL(high,level) {
  if (high.checked==true) {
    level.value="";
    level.className="Readonly";
    level.readOnly=true;
  }
  else {
    level.className="Number";
    level.readOnly=false;
  }
}
function checkPassAdd() {
  if (isWhitespace(document.AddForm.securety.value)) { return;; }
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=11" +
                    "&secureid=" + AddForm.secureid.value.replace(/ /g,"+") +
                    "&securepw=" + AddForm.securepw.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
  }
  else {
    document.AddForm.secureid.value="";
    document.AddForm.securepw.value="";
    document.AddForm.secureid.focus();

  }
}
function checkPassUpd() {
  if (isWhitespace(document.UpdateForm.securety.value)) { return;; }
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=11" +
                    "&secureid=" + UpdateForm.secureid.value.replace(/ /g,"+") +
                    "&securepw=" + UpdateForm.securepw.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
  }
  else {
    document.UpdateForm.secureid.value="";
    document.UpdateForm.securepw.value="";
    document.UpdateForm.secureid.focus();

  }
}
//========================================================================
// SelectNumber - Generate Select List Options for Numeric Values
//========================================================================
function SelectNumbers(ListItem,Min,Max,Increment,SelectedValue) {
  i=Min
  do {
    ListItem.options[ListItem.options.length]=new Option(i,i);
    i=i+Increment }
  while (i<Max);
  if (SelectedValue!="") {
    for (var i =0 ; i < ListItem.length; i++) {
      if (ListItem.options[i].value==parseFloat(SelectedValue)) {
        ListItem.selectedIndex=i } } }
}
//----------------------------------------------------------------------
// Function : Rounds and formats a number with/without decimal places 
//----------------------------------------------------------------------
function RoundNumber(number,decimal) {
  if (isWhitespace(number.value)) { return ;}
  if (checkNumber(number)) {
   Number = Math.round(number.value*Math.pow(10,decimal))/Math.pow(10,decimal);
   decimal = (decimal<0?0:decimal); // if decimal places < 0 then set decimal=0
                                    // else decimal = decimal places entered.

   var x = Number;            // save Number
   if (x<0)                   // negative value entered?
   {
     var y = x*(-1);          // yes, make the value positive
     var r = "" + Math.round(y * Math.pow(10,decimal));
   }
   else
   {
     var r = "" + Math.round(Number * Math.pow(10,decimal));
   }

   if (r.length < decimal)    // is the value of r < 1 eg. r = 0.05?
   {
      number.value=Number;    // yes, return the value of Number
      return;
   }

   if (decimal==0)
   {
      if (x<0)                // negative value entered?
      {
        number.value=r*(-1);  // yes,make the return value negative
      }
      else
      {
        number.value=r;
      }
      return;
   }
   else
   {
      if (x<0)                // negative value entered?
      {
        number.value = "-"
                     + r.substring(0,r.length-decimal)
                     + "."
                     + r.substring(r.length-decimal,r.length);
      }
      else
      {
        number.value = r.substring(0,r.length-decimal)
                     + "."
                     + r.substring(r.length-decimal,r.length);
      }
      return;
   }
 }
}
//========================================================================
// Standard onblur functions for text input fields
//========================================================================
function TextBlurHandler(el) {
  if (el.value.match(/\"/)) {
        el.value=el.value.replace(/\"/g,"'"); }
  if (el.title.match(/Date/)) {
        checkDate(el,el.title); return; }
  if (el.title.match(/Time/)) {
        checkTime(el,el.title); return; }
  if (el.className.match(/Integer/)) {
        checkInteger(el,el.title); }
  if (el.className.match(/Number/)) {
        checkNumber(el); }
  if (el.className.match(/JustifyLeft/)) {
        justifyLeft(el); }
  if (el.className.match(/JustifyRight/)) {
        justifyRight(el); }
  if (el.className.match(/ZeroFill/)) {
        zeroFill(el); }
  if (el.className.match(/AlphaNum/)) {
        checkAlphaNum(el); }
  if (el.className.match(/AlphanumDesc/)) {
       checkAlphanumDesc(el); }
}
//========================================================================
// Check Number <input type=text name=xxxxxxx class=Number min=10 max=100>
//========================================================================
function checkNumber(theField) {
 if (isWhitespace(theField.value)) { return true }

 if (theField.value.match(/\+/g)) {
     alertify.alert( theField.title + " must be Numeric")
     theField.value="";
     theField.focus()
     return false }

 if (isFinite(theField.value)) {
   if(isFinite(theField.max)) {
      if (parseFloat(theField.value)>parseFloat(theField.max)) {
         alertify.alert( theField.title + " must be Less Than or = " + theField.max)
         theField.value="";
         theField.focus()
         return false } }
   if(isFinite(theField.min)) {
      if (parseFloat(theField.value)<parseFloat(theField.min)) {
         alertify.alert( theField.title + " must be Greater Than or = " + theField.min)
         theField.value="";
         theField.focus()
         return false } }
   return true }
 else {
   alertify.alert( theField.title + " must be Numeric")
   theField.value="";
   theField.focus();
   return false }
}
//========================================================================
// Check AlphaNum <input type=text name=xxxxxxx class=AlphaNum
//========================================================================
function checkAlphaNum(theField) {
 checkid=theField.value.search('[^a-zA-Z0-9]')
 if (checkid >= 0) {
   alertify.alert( theField.title + " can only be alphanumeric")
   theField.value=""
   theField.focus()
   return false }
}
//========================================================================
// Validates Alpha-numeric field excluding spaces
// Check AlphanumDesc <input type=text name=xxxxxxx class=AlphanumDesc
//========================================================================
function checkAlphanumDesc(theField) {
 checkid=theField.value.search('[^a-zA-Z0-9 ]')
 if (checkid >= 0) {
   alertify.alert( theField.title + " can only be alphanumeric")
   theField.value=""
   theField.focus()
   return false }
}
//========================================================================
// Function  : validateMandatory
//
// Operation : Check a each form input field
//             Mandatory Fields Defined with
//             class=Mandatory
//             title=string describing the field
// Example   :
// <select name=pattitle tabindex=1 class=Mandatory title="Patient Title">
//
//========================================================================
function validateMandatory(theForm) {
  for (i=0; i<theForm.elements.length; i++) {
    el=theForm.elements[i]
    if (el.className.match(/Integer/) && el.type=="text") {
      if (!checkInteger(el,el.title)) {
         return false } }
    if (el.className.match(/Number/) && el.type=="text") {
      if (!checkNumber(el)) {
         return false } }
    if (el.title.match(/Date/) && el.type=="text") {
      if (!checkDate(el,el.title)) {
         return false } }
    if (el.title.match(/Time/) && el.type=="text") {
      if (!checkTime(el,el.title)) {
         return false } }
    if (el.className.match(/Mandatory/)) {
      if (!checkString(el,el.title)) {
         return false } }
    }
  return true;
}
//========================================================================
// Function : JustifyRight
//            Right Justification  of a input field to maxLength
//========================================================================
function justifyRight(theField) {
  if (theField.maxLength==undefined) { return }
  theField.value=theField.value.replace(/\s/g,"")
  if (theField.value.length == 0) { return }
  Count=theField.maxLength - theField.value.length
  Blanks=""
  for (i=0; i < Count;i++) { Blanks+=" ";}
  theField.value=Blanks+theField.value
}
//========================================================================
// Function : ZeroFill
//            Zero Fill of a input field to maxLength
//========================================================================
function zeroFill(theField) {
  if (theField.maxLength==undefined) { return }
  if (theField.value.length == 0) { return }
  theField.value=theField.value.replace(/ /g,"0")
}
//========================================================================
// Function : JustifyLeft
//            Left Justification of a input field, Also checks for Integer
//            Class Name!
//========================================================================
function justifyLeft(theField) {
  if (theField.className.match(/Integer/)) {
        checkInteger(theField,theField.title); }
  if (theField.maxLength==undefined) { return }
  theField.value=theField.value.replace(/\s/g,"")
  if (theField.value.length == 0) { return }
  theField.value=theField.value
}
//========================================================================
// Function  : checkDate 
//
// Operation : Validate Date Input
//             Date May be entered in any of the following formats
//                      ddmmyy
//                      ddmmccyy
//                      dd.mm.yy
//                      dd.mm.ccyy
//                      dd/mm/yy
//                      dd/mm/ccyy
//                      dd mm yy
//                      dd mm ccyy
//                      dd mmm yy
//                      dd mmm ccyy
//             The field will be checked and display in a dd mmm ccyy format.
//
// Parameters: theField    - The item on the form ie this
//             labelString - Description of Date
//             hiddenField - Hidden Date Field output format CCYYMMDD
// Example   :
//             <input type="text" name="patbdate" size="12"
//              onchange="checkDate(this,'Date of Birth')"> </p>
//========================================================================
function checkDate() {
switch (checkDate.arguments.length) {
  case 0: {
     theField=this;
     labelString=this.title;
     hiddenField=null
     break; }
  case 1: {
     theField=checkDate.arguments[0]
     labelString=theField.title;
     hiddenField=null
     break; }
  case 2: {
     theField=checkDate.arguments[0]
     labelString=checkDate.arguments[1]
     hiddenField=null
    break; }
  case 3: {
     theField=checkDate.arguments[0]
     labelString=checkDate.arguments[1]
     hiddenField=checkDate.arguments[2]
     break; }
   }
if(theField.value=="") { return true; }
 var ErrorFound;
 ErrorFound=false ;
 var day=0
 var mon=0
 var year=0
 var cent=0
 var Today = new Date()
 var monthname = new Array(12)
 monthname[0]="Jan"
 monthname[1]="Feb"
 monthname[2]="Mar"
 monthname[3]="Apr"
 monthname[4]="May"
 monthname[5]="Jun"
 monthname[6]="Jul"
 monthname[7]="Aug"
 monthname[8]="Sep"
 monthname[9]="Oct"
 monthname[10]="Nov"
 monthname[11]="Dec"
 datevalue=theField.value
 datelength=datevalue.length
 position=0
 start=0
 flag=0
 if (datevalue.match(/^\s+/)) {
   chr = datevalue.substring(position, position+1)
   while (chr == " ") {
     datevalue = datevalue.substring(position+1,datevalue.length)
     chr = datevalue.substring(position, position+1)
   }
   position=0
   datelength=datevalue.length
 }

 var cM= Today.getMonth()
 var cY= Today.getFullYear()
 if (datelength < 3) { datevalue=datevalue+' '+monthname[cM]+' '+cY; datelength=datelength+9}
 if (datelength == 4 ) { datevalue=datevalue+cY; datelength=datelength+4}
 if (datelength < 6) { datevalue=datevalue+' '+cY; datelength=datelength+5}
 if (datelength == 6 && datevalue.match(/ /)) { datevalue=datevalue+' '+cY; datelength=datelength+5}

 while (position < datelength) {
   chr = datevalue.substring(position, position+1)
   if (chr==" " || chr=="/" || chr==".") {
     if (flag==2) {
       if (position-start>2) {
         year = datevalue.substring(start+2, position)
         cent = datevalue.substring(start, start+2) }
       else {
         year = datevalue.substring(start, position)
         var ccyy = Today.getFullYear();
         cent=ccyy.toString().substr(0,2);
         ThisYear=ccyy.toString().substr(2,2);
         if (parseInt(parseFloat(year),10) >  parseInt(parseFloat(ThisYear),10) + 3) { cent="19" } }
     flag = 3 }
     if (flag==1) {
       test=parseInt(datevalue.substring(start, position),10)
       if (isNaN(test))  {
         monstr= datevalue.substring(start, start+3)
         if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon=1
         if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon=2
         if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon=3
         if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon=4
         if (monstr=="May" || monstr=="MAY" || monstr=="may") mon=5
         if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon=6
         if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon=7
         if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon=8
         if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon=9
         if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon=10
         if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon=11
         if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon=12 }
       else {
         mon = datevalue.substring(start, position)   }
       flag = 2
       start=position+1 }
       if (flag==0) {
         day  = datevalue.substring(start, position)
         flag = 1
         start=position+1 } }
   position++
 } //End While
 if (flag==2) {
   if (position-start>2) {
     cent = datevalue.substring(start, start+2)    // Century
     year = datevalue.substring(start+2, position) }
   else {
     year = datevalue.substring(start, position)
     var ccyy = Today.getFullYear();
     cent=ccyy.toString().substr(0,2)
     ThisYear=ccyy.toString().substr(2,2);
     if (parseInt(parseFloat(year),10) >  parseInt(parseFloat(ThisYear),10) + 3 ) { cent="19" }}} 
 if (flag==0) {
   if (datelength==6) {
     day = datevalue.substring(0,2)
     mon = datevalue.substring(2,4)
     year= datevalue.substring(4,6)
     var ccyy = Today.getFullYear();
     cent=ccyy.toString().substr(0,2);
     ThisYear=ccyy.toString().substr(2,2);
     if (parseInt(parseFloat(year),10) >  parseInt(parseFloat(ThisYear),10) + 3 ) { cent="19" } }
   else {
     if (datelength==8) {
       day = datevalue.substring(0,2)
       mon = datevalue.substring(2,4)
       cent= datevalue.substring(4,6)
       year= datevalue.substring(6,8)   } }
}  

 day=parseInt(day,10)
 if (isNaN(day))  ErrorFound=true
 mon=parseInt(mon,10)
 if (isNaN(mon))  ErrorFound=true

 if (isNaN(year)) ErrorFound=true
 year=parseInt(year,10)
 if (isNaN(cent)) ErrorFound=true
 if (!ErrorFound) {
   if (mon<1 || mon>12) ErrorFound = true
   if (day<1 || day>31) ErrorFound = true
   if (year<0 || year>99) ErrorFound = true
   if (mon==4 || mon==6 || mon==9 || mon==11) {
     if (day==31) ErrorFound=true }
   if (mon==2) {
     if (day>29) ErrorFound=true
     if (day==29 && year % 4 !=0 ) ErrorFound=true
     if (day==29 && year==0 && cent % 4 !=0 ) ErrorFound=true } }
 if (ErrorFound) {
   alertify.alert('Invalid '+labelString)
   theField.select()
   return false }
 else {
   if (year<10) year="0" + year
   if (day<10)  day ="0" + day
   if (globalDateType == "DD MMM YYYY") {
     dateValue=day + " " + monthname[mon-1] + " " + cent + year
     theField.value=dateValue  }
   else {
     if (globalDateType == "DD/MM/YYYY") {
       month = mon; if (mon<10)  month ="0" + mon;
       dateValue=day + "/" + month + "/" + cent + year;
       theField.value=dateValue  } }
   if (hiddenField != null) {
       month = mon; if (mon<10)  month ="0" + mon;
       dateValue=cent + year + month + day;
       hiddenField.value=dateValue  }
   var InputDay=day
   var InputMth=mon
   var InputYrs=cent + year
   if (InputMth < 10) InputMth="0" + InputMth
   InputDate="";
   InputDate=InputDate.concat(InputYrs,InputMth,InputDay)
   if (theField.className.match(/FutureDate/)) {
     if (!CheckFuture(InputDate)) {
      alertify.alert(labelString + " must be in the Future.")
      theField.select()
      theField.value="";
      return false }
    }
   if (theField.className.match(/NotFutureDate/))   {
     if (!CheckPast(InputDate)) {
      alertify.alert(labelString + " cannot be in the Future.")
      theField.select()
      theField.value="";
      theField.focus()
      return false }
    }
   if (theField.className.match(/PastDate/))   {
     if (!CheckPast(InputDate)) {
      alertify.alert(labelString + " must be in the Past.")
      theField.select()
      theField.value="";
      theField.focus()
      return false }
    }
   if (theField.className.match(/BackDate/))   {
     if (!CheckPast(InputDate)) {
      alertify.alert(labelString + " must be in the Past.")
      theField.select()
      var Sp=" ";
      var Today = new Date()
      var ThisDay=Today.getDate();
      var ThisMth=parseInt(Today.getMonth(),10) +1;
      var ThisYrs=Today.getFullYear();
      if (ThisDay < 10) ThisDay="0" + ThisDay
      if (ThisMth < 10) ThisMth="0" + ThisMth
      ThisMth = ThisMth.toString();
      var MonthName=GetMonthName(ThisMth); 
      ThisDate="";
      ThisDate=ThisDate.concat(ThisDay,Sp,MonthName,Sp,ThisYrs)
      theField.value=ThisDate;
      return false }
    }
   if (theField.className.match(/PastMonth/))   {
     if (!CheckPastMonth(InputDate)) {
      alertify.alert(labelString + " must be less than current Month.")
      theField.select()
      theField.value="";
      return false }
    }
//HPS Emer Defect 70
   if (theField.className.match(/CurrentDate/)) {
     if (CheckCurrent(InputDate)) {
      alertify.alert(labelString + " must be the current date.")
      theField.select()
      theField.value="";
      return false }
    }

// HPS added for Bug no. 72
    ccyy = Today.getFullYear();
    var currentAge=  ccyy-(cent+year);
    if (currentAge >119 ) {
    alertify.alert("Warning: Invalid date");
  }
    return true }
}
function CheckFuture(InputDate) {
 var Today = new Date()
 var ThisDay=Today.getDate();
 var ThisMth=parseInt(Today.getMonth(),10) +1;
 var ThisYrs=Today.getFullYear();
 if (ThisDay < 10) ThisDay="0" + ThisDay
 if (ThisMth < 10) ThisMth="0" + ThisMth
 ThisDate="";
 ThisDate=ThisDate.concat(ThisYrs,ThisMth,ThisDay)
 if (InputDate < ThisDate) { return false }
                      else { return true }
}
function CheckPast(InputDate) {
 var Today = new Date()
 var ThisDay=Today.getDate();
 var ThisMth=parseInt(Today.getMonth(),10) +1;
 var ThisYrs=Today.getFullYear();
 if (ThisDay < 10) ThisDay="0" + ThisDay
 if (ThisMth < 10) ThisMth="0" + ThisMth
 ThisDate="";
 ThisDate=ThisDate.concat(ThisYrs,ThisMth,ThisDay)

 if (InputDate > ThisDate) { return false }
                      else { return true }
}
function CheckPastMonth(InputDate) {
 var Today = new Date()
 var ThisDay=Today.getDate();
 var ThisMth=parseInt(Today.getMonth(),10) + 1;
 var ThisYrs=Today.getFullYear();
 if (ThisMth < 10) ThisMth="0" + ThisMth
 ThisDate="";
 ThisDate=ThisDate.concat(ThisYrs,ThisMth,"00")
 if (InputDate > ThisDate) { return false }
                      else { return true }
}
function CheckCurrent(InputDate) {
 var Today = new Date()
 var ThisDay=Today.getDate();
 var ThisMth=parseInt(Today.getMonth(),10) +1;
 var ThisYrs=Today.getFullYear();
 if (ThisDay < 10) ThisDay="0" + ThisDay
 if (ThisMth < 10) ThisMth="0" + ThisMth
 ThisDate="";
 ThisDate=ThisDate.concat(ThisYrs,ThisMth,ThisDay)
 if (InputDate == ThisDate) { return false }                                   
                      else { return true }
}
//========================================================================
// Function  : checkTime
//
// Operation : Validate Time Input
//             Time May be entered in any of the following formats
//                      hhmm
//                      hh:mm
//                      hh.mm
//                      hhmmss
//                      hh:mm:ss
//                      hh.mm.ss
//             The field will be checked and display in a hh:mm:ss format.
//
// Parameters: theField    - The item on the form ie this
//             labelString - Description of Time
// Example   :
//             <input type="text" name="patbtime" size="12"
//              onchange="checkTime(this,'Time of Birth')"> </p>
//========================================================================
function checkTime() {
theField=this
labelString=this.title
if (checkTime.arguments.length > 0 ) {
  theField=checkTime.arguments[0]
  labelString=checkTime.arguments[1]
}
 if(theField.value=="") { return true; }
 var ErrorFound=false
 var hour=0
 var min=0
 var sec=0
 timevalue=theField.value
 timelength=timevalue.length
 if (timevalue.match(/\./)) {
    var x=timevalue.split(".")
    hour=x[0]
    min=x[1]
    if (x[2]==undefined) { sec="0" }
                    else { sec=x[2] }}
 else {
   if (timevalue.match(/\:/)) {
      var x=timevalue.split(":")
      hour=x[0]
      min=x[1]
      if (x[2]==undefined) { sec="0" }
                      else { sec=x[2] }}
   else {
     if (timelength<3) {
       hour=timevalue; min="0"; sec="0" }
     else {
       switch (timelength) {
       case 3: {
         hour=timevalue.substr(0,1); min=timevalue.substr(1,2); sec="0";
         break; }
       case 4: {
         hour=timevalue.substr(0,2); min=timevalue.substr(2,2); sec="0";
         break; }
       case 6: {
         hour=timevalue.substr(0,2);
         min=timevalue.substr(2,2);
         sec=timevalue.substr(4,2);
         break; }
       default: {
         ErrorFound=true ;
         break; }
       }
     }
   }
 }
 if (isNaN(hour)){ ErrorFound=true }
 if (isNaN(min)) { ErrorFound=true }
 if (isNaN(sec)) { ErrorFound=true }
 if (isWhitespace(hour)){ ErrorFound=true }
 if (isWhitespace(min)) { ErrorFound=true }
 if (isWhitespace(sec)) { ErrorFound=true }
 hour=parseInt(hour,10)
 min=parseInt(min,10)
 sec=parseInt(sec,10)
 if (!ErrorFound) {
   if (min<0 || min>59) { ErrorFound = true }
     if (hour<0 || hour>23) { ErrorFound = true }
       if (sec<0 || sec>59) { ErrorFound = true }
 }
 if (!ErrorFound) {
   if (hour==0 && min==0 && sec==0) { ErrorFound = true }
 }

 if (ErrorFound) {
   alertify.alert('Invalid '+labelString)
   theField.select()
   return false; }
 else {
   if (sec<10) { sec="0" + sec }
   if (hour<10){ hour ="0" + hour }
   if (min<10) { min ="0" + min }
   theField.value=hour + ":" + min + ":" + sec
   return true; }
}
//======================================================================
// checkString (TEXTFIELD theField, STRING s, [, BOOLEAN emptyOK==false])
//
// Check that string theField.value is not all whitespace.
//
// For explanation of optional argument emptyOK,
// see comments of function isInteger.
//
//======================================================================
function checkString (theField, s, emptyOK) {
if (checkString.arguments.length == 2) emptyOK = false;
 if ((emptyOK == true) && (isEmpty(theField.value))) return true;
 if (isWhitespace(theField.value))
   return warnEmpty (theField, s);
 else return true;
}

function checkInteger(theField, s) {
 var Vflag = "0"
 if ( (theField.value.match(/\./g)) || (theField.value.match(/\+/g)) ) {
     alertify.alert( s + " must be an Integer")
     theField.focus()
     return false }
//
 if (isFinite(theField.value)) {
   if (isWhitespace(theField.value)) {
     theField.value="0"; }
   if(isFinite(theField.max)) {
      if (parseInt(theField.value,10)>parseInt(theField.max,10)) {
         alertify.alert( theField.title + " must be Less Than or = " + theField.max)
         Vflag = "1"  
         theField.focus()} }
   if(isFinite(theField.min)) {
      if (parseInt(theField.value,10)<parseInt(theField.min,10)) {
         alertify.alert( theField.title + " must be Greater Than or = " + theField.min)
         Vflag = "1"
         theField.focus()} }
 } else {
   alertify.alert( s + " must be Numeric")
   Vflag = "1" }
//
 if (Vflag == "1") {
   theField.focus()
   theField.select()
   return false; }
return true;
}
//------------------------------------------------------------
// Notify user that required field theField is empty.
// String s describes expected contents of theField.value.
// Put focus in theField and return false.
//------------------------------------------------------------
function warnEmpty (theField, s) {
 theField.focus();
 alertify.alert(s + " is a required field.\nPlease enter it now.");
 return false
}
function FD(ccyymmdd) {
  yrr=ccyymmdd.substring(0,4);
  mth=GetMonthName(ccyymmdd.substring(4,6));
  day=ccyymmdd.substring(6,8);
  ret = day+ " "+ mth+ " "+ yrr;
  return ret
}
//------------------------------------------------------------
// trim - following function to remove the spaces from 
//        the starting and ending of the given string. 
//------------------------------------------------------------
function trim(str) {
  var strln = str.length
  if (strln>0) {
    for (var i=0;i<=strln;i++) {
      if (str.substring(0,1)==' ') str=str.substring(1,str.length);
      if (str.substring(str.length-1,str.length)==' ') str=str.substring(0,str.length-1);
    }
  }
  return str;
}
//------------------------------------------------------------
// findPos - following function returns the position of a object
//------------------------------------------------------------
function findPos(obj) {
  var curleft = curtop = 0;
  if (obj.offsetParent) {
    do { curleft += obj.offsetLeft;
         curtop += obj.offsetTop;
       } while (obj = obj.offsetParent);
  }
  return [curleft,curtop];
}
function expandMe(area){
  while (area.scrollHeight > area.offsetHeight)
    area.rows=area.rows+1;
}
function MarkResult() {
  xmlHttp = createHttpObject();
  var theURL   = "cliweb10.pbl"
  parameters  ="reportno="+encodeURI(document.MarkSeen.reportno.value)
  parameters+="&template="+encodeURI(document.MarkSeen.template.value)
  parameters+="&markalll="+encodeURI(document.MarkSeen.markalll.value)
  parameters+="&auditkey="+encodeURI(document.MarkSeen.auditkey.value)
  xmlHttp.open("POST", theURL, false);
  xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
  xmlHttp.send(parameters);
  resultText=xmlHttp.responseText
  if (resultText.match(/Invalid/i)) {
    alertify.alert(resultText.replace(/.*alert\(\"/i,"").replace(/\".*/,""));
  }
  parent.restoreSections();
}
function WIP() {
  alertify.alert("Work in Progress");
}
function setFrameSizes() {
 if(navigator.userAgent.match(/Windows/i)|| navigator.userAgent.match(/Macintosh/i) ) {
   setContentHeight()
   return;
 }
 var parentFrame = parent.document.getElementById('content');
 if(parentFrame) { parentFrame.height = "auto"; }
 var parentParentFrame = parent.parent.document.getElementById('iphone-frame');
 if(parentParentFrame) { parentParentFrame.height = "auto"; }
 var parentParentDocFrame = parent.parent.document.getElementById('docFrame');
 if(parentParentDocFrame) { parentParentDocFrame.height = "auto"; }
 h=document.body.scrollHeight;
 if (document.body.scrollHeight<1024) { h=1024; }
 if(parentFrame) { parentFrame.height = h+"px"; }
 if(parentParentFrame) { parentParentFrame.height = parseInt(50 + h,10)+"px"; }
 if(parentParentDocFrame) { parentParentDocFrame.height = parseInt(50 + h,10)+"px"; }
}
function setContentHeight() {
  var iframe=top.document.getElementById('iphone-frame')
  var parentFrame = parent.document.getElementById('content');
  if(parentFrame) {
    parentFrame.style.height=parseInt(iframe.style.height.replace(/px/,""),10)-41+"px";
  }
  var parentFrame = parent.document.getElementById('docFrame');
  if(parentFrame) {
    parentFrame.style.height=parseInt(iframe.style.height.replace(/px/,""),10)-41+"px";
  }
  var parentFrame = parent.document.getElementById('patFrame');
  if(parentFrame) {
    parentFrame.style.height=parseInt(iframe.style.height.replace(/px/,""),10)-41+"px";
  }
}

/**
 * alertify
 * An unobtrusive customizable JavaScript notification system
 *
 * @author Fabien Doiron <fabien.doiron@gmail.com>
 * @copyright Fabien Doiron 2013
 * @license MIT <http://opensource.org/licenses/mit-license.php>
 * @link http://fabien-d.github.com/alertify.js/
 * @module alertify
 * @version 0.3.10
 */
(function (global, undefined) {
	"use strict";

	var document = global.document,
	    Alertify;

	Alertify = function () {

		var _alertify = {},
		    dialogs   = {},
		    isopen    = false,
		    keys      = { ENTER: 13, ESC: 27, SPACE: 32 },
		    queue     = [],
		    $, btnCancel, btnOK, btnReset, btnFocus, elCallee, elCover, elDialog, elLog, form, input, getTransitionEvent;

		/**
		 * Markup pieces
		 * @type {Object}
		 */
		dialogs = {
			buttons : {
				holder : "<nav class=\"alertify-buttons\">{{buttons}}</nav>",
				submit : "<button type=\"submit\" class=\"alertify-button alertify-button-ok\" id=\"alertify-ok\">{{ok}}</button>",
				ok     : "<button class=\"alertify-button alertify-button-ok\" id=\"alertify-ok\">{{ok}}</button>",
				cancel : "<button class=\"alertify-button alertify-button-cancel\" id=\"alertify-cancel\">{{cancel}}</button>"
			},
			input   : "<div class=\"alertify-text-wrapper\"><input type=\"text\" class=\"alertify-text\" id=\"alertify-text\"></div>",
			message : "<p class=\"alertify-message\">{{message}}</p>",
			log     : "<article class=\"alertify-log{{class}}\">{{message}}</article>"
		};

		/**
		 * Return the proper transitionend event
		 * @return {String}    Transition type string
		 */
		getTransitionEvent = function () {
			var t,
			    type,
			    supported   = false,
			    el          = document.createElement("fakeelement"),
			    transitions = {
				    "WebkitTransition" : "webkitTransitionEnd",
				    "MozTransition"    : "transitionend",
				    "OTransition"      : "otransitionend",
				    "transition"       : "transitionend"
			    };

			for (t in transitions) {
				if (el.style[t] !== undefined) {
					type      = transitions[t];
					supported = true;
					break;
				}
			}

			return {
				type      : type,
				supported : supported
			};
		};

		/**
		 * Shorthand for document.getElementById()
		 *
		 * @param  {String} id    A specific element ID
		 * @return {Object}       HTML element
		 */
		$ = function (id) {
			return document.getElementById(id);
		};

		/**
		 * Alertify private object
		 * @type {Object}
		 */
		_alertify = {

			/**
			 * Labels object
			 * @type {Object}
			 */
			labels : {
				ok     : "OK",
				cancel : "Cancel"
			},

			/**
			 * Delay number
			 * @type {Number}
			 */
			delay : 5000,

			/**
			 * Whether buttons are reversed (default is secondary/primary)
			 * @type {Boolean}
			 */
			buttonReverse : true,

			/**
			 * Which button should be focused by default
			 * @type {String}	"ok" (default), "cancel", or "none"
			 */
			buttonFocus : "ok",

			/**
			 * Set the transition event on load
			 * @type {[type]}
			 */
			transition : undefined,

			/**
			 * Set the proper button click events
			 *
			 * @param {Function} fn    [Optional] Callback function
			 *
			 * @return {undefined}
			 */
			addListeners : function (fn) {
				var hasOK     = (typeof btnOK !== "undefined"),
				    hasCancel = (typeof btnCancel !== "undefined"),
				    hasInput  = (typeof input !== "undefined"),
				    val       = "",
				    self      = this,
				    ok, cancel, common, key, reset;

				// ok event handler
				ok = function (event) {
					if (typeof event.preventDefault !== "undefined") event.preventDefault();
					common(event);
					if (typeof input !== "undefined") val = input.value;
					if (typeof fn === "function") {
						if (typeof input !== "undefined") {
							fn(true, val);
						}
						else fn(true);
					}
					return false;
				};

				// cancel event handler
				cancel = function (event) {
					if (typeof event.preventDefault !== "undefined") event.preventDefault();
					common(event);
					if (typeof fn === "function") fn(false);
					return false;
				};

				// common event handler (keyup, ok and cancel)
				common = function (event) {
					self.hide();
					self.unbind(document.body, "keyup", key);
					self.unbind(btnReset, "focus", reset);
					if (hasInput) self.unbind(form, "submit", ok);
					if (hasOK) self.unbind(btnOK, "click", ok);
					if (hasCancel) self.unbind(btnCancel, "click", cancel);
				};

				// keyup handler
				key = function (event) {
					var keyCode = event.keyCode;
					if (keyCode === keys.SPACE && !hasInput) ok(event);
					if (keyCode === keys.ESC && hasCancel) cancel(event);
				};

				// reset focus to first item in the dialog
				reset = function (event) {
					if (hasInput) input.focus();
					else if (!hasCancel || self.buttonReverse) btnOK.focus();
					else btnCancel.focus();
				};

				// handle reset focus link
				// this ensures that the keyboard focus does not
				// ever leave the dialog box until an action has
				// been taken
				this.bind(btnReset, "focus", reset);
				// handle OK click
				if (hasOK) this.bind(btnOK, "click", ok);
				// handle Cancel click
				if (hasCancel) this.bind(btnCancel, "click", cancel);
				// listen for keys, Cancel => ESC
				this.bind(document.body, "keyup", key);
				// bind form submit
				if (hasInput) this.bind(form, "submit", ok);
				if (!this.transition.supported) {
					this.setFocus();
				}
			},

			/**
			 * Bind events to elements
			 *
			 * @param  {Object}   el       HTML Object
			 * @param  {Event}    event    Event to attach to element
			 * @param  {Function} fn       Callback function
			 *
			 * @return {undefined}
			 */
			bind : function (el, event, fn) {
				if (typeof el.addEventListener === "function") {
					el.addEventListener(event, fn, false);
				} else if (el.attachEvent) {
					el.attachEvent("on" + event, fn);
				}
			},

			/**
			 * Use alertify as the global error handler (using window.onerror)
			 *
			 * @return {boolean} success
			 */
			handleErrors : function () {
				if (typeof global.onerror !== "undefined") {
					var self = this;
					global.onerror = function (msg, url, line) {
						self.error("[" + msg + " on line " + line + " of " + url + "]", 0);
					};
					return true;
				} else {
					return false;
				}
			},

			/**
			 * Append button HTML strings
			 *
			 * @param {String} secondary    The secondary button HTML string
			 * @param {String} primary      The primary button HTML string
			 *
			 * @return {String}             The appended button HTML strings
			 */
			appendButtons : function (secondary, primary) {
				return this.buttonReverse ? primary + secondary : secondary + primary;
			},

			/**
			 * Build the proper message box
			 *
			 * @param  {Object} item    Current object in the queue
			 *
			 * @return {String}         An HTML string of the message box
			 */
			build : function (item) {
				var html    = "",
				    type    = item.type,
				    message = item.message,
				    css     = item.cssClass || "";

				html += "<div class=\"alertify-dialog\">";

				if (_alertify.buttonFocus === "none") html += "<a href=\"#\" id=\"alertify-noneFocus\" class=\"alertify-hidden\"></a>";

				if (type === "prompt") html += "<form id=\"alertify-form\">";

				html += "<article class=\"alertify-inner\">";
				html += dialogs.message.replace("{{message}}", message);

				if (type === "prompt") html += dialogs.input;

				html += dialogs.buttons.holder;
				html += "</article>";

				if (type === "prompt") html += "</form>";

				html += "<a id=\"alertify-resetFocus\" class=\"alertify-resetFocus\" href=\"#\">Reset Focus</a>";
				html += "</div>";

				switch (type) {
				case "confirm":
					html = html.replace("{{buttons}}", this.appendButtons(dialogs.buttons.cancel, dialogs.buttons.ok));
					html = html.replace("{{ok}}", this.labels.ok).replace("{{cancel}}", this.labels.cancel);
					break;
				case "prompt":
					html = html.replace("{{buttons}}", this.appendButtons(dialogs.buttons.cancel, dialogs.buttons.submit));
					html = html.replace("{{ok}}", this.labels.ok).replace("{{cancel}}", this.labels.cancel);
					break;
				case "alert":
					html = html.replace("{{buttons}}", dialogs.buttons.ok);
					html = html.replace("{{ok}}", this.labels.ok);
					break;
				default:
					break;
				}

				elDialog.className = "alertify alertify-" + type + " " + css;
				elCover.className  = "alertify-cover";
				return html;
			},

			/**
			 * Close the log messages
			 *
			 * @param  {Object} elem    HTML Element of log message to close
			 * @param  {Number} wait    [optional] Time (in ms) to wait before automatically hiding the message, if 0 never hide
			 *
			 * @return {undefined}
			 */
			close : function (elem, wait) {
				// Unary Plus: +"2" === 2
				var timer = (wait && !isNaN(wait)) ? +wait : this.delay,
				    self  = this,
				    hideElement, transitionDone;

				// set click event on log messages
				this.bind(elem, "click", function () {
					hideElement(elem);
				});
				// Hide the dialog box after transition
				// This ensure it doens't block any element from being clicked
				transitionDone = function (event) {
					event.stopPropagation();
					// unbind event so function only gets called once
					self.unbind(this, self.transition.type, transitionDone);
					// remove log message
					elLog.removeChild(this);
					if (!elLog.hasChildNodes()) elLog.className += " alertify-logs-hidden";
				};
				// this sets the hide class to transition out
				// or removes the child if css transitions aren't supported
				hideElement = function (el) {
					// ensure element exists
					if (typeof el !== "undefined" && el.parentNode === elLog) {
						// whether CSS transition exists
						if (self.transition.supported) {
							self.bind(el, self.transition.type, transitionDone);
							el.className += " alertify-log-hide";
						} else {
							elLog.removeChild(el);
							if (!elLog.hasChildNodes()) elLog.className += " alertify-logs-hidden";
						}
					}
				};
				// never close (until click) if wait is set to 0
				if (wait === 0) return;
				// set timeout to auto close the log message
				setTimeout(function () { hideElement(elem); }, timer);
			},

			/**
			 * Create a dialog box
			 *
			 * @param  {String}   message        The message passed from the callee
			 * @param  {String}   type           Type of dialog to create
			 * @param  {Function} fn             [Optional] Callback function
			 * @param  {String}   placeholder    [Optional] Default value for prompt input field
			 * @param  {String}   cssClass       [Optional] Class(es) to append to dialog box
			 *
			 * @return {Object}
			 */
			dialog : function (message, type, fn, placeholder, cssClass) {
				// set the current active element
				// this allows the keyboard focus to be resetted
				// after the dialog box is closed
				elCallee = document.activeElement;
				// check to ensure the alertify dialog element
				// has been successfully created
				var check = function () {
					if ((elLog && elLog.scrollTop !== null) && (elCover && elCover.scrollTop !== null)) return;
					else check();
				};
				// error catching
				if (typeof message !== "string") throw new Error("message must be a string");
				if (typeof type !== "string") throw new Error("type must be a string");
				if (typeof fn !== "undefined" && typeof fn !== "function") throw new Error("fn must be a function");
				// initialize alertify if it hasn't already been done
				if (typeof this.init === "function") {
					this.init();
					check();
				}

				queue.push({ type: type, message: message, callback: fn, placeholder: placeholder, cssClass: cssClass });
				if (!isopen) this.setup();

				return this;
			},

			/**
			 * Extend the log method to create custom methods
			 *
			 * @param  {String} type    Custom method name
			 *
			 * @return {Function}
			 */
			extend : function (type) {
				if (typeof type !== "string") throw new Error("extend method must have exactly one paramter");
				return function (message, wait) {
					this.log(message, type, wait);
					return this;
				};
			},

			/**
			 * Hide the dialog and rest to defaults
			 *
			 * @return {undefined}
			 */
			hide : function () {
				var transitionDone,
				    self = this;
				// remove reference from queue
				queue.splice(0,1);
				// if items remaining in the queue
				if (queue.length > 0) this.setup(true);
				else {
					isopen = false;
					// Hide the dialog box after transition
					// This ensure it doens't block any element from being clicked
					transitionDone = function (event) {
						event.stopPropagation();
						elDialog.className += " alertify-isHidden";
						// unbind event so function only gets called once
						self.unbind(elDialog, self.transition.type, transitionDone);
					};
					// whether CSS transition exists
					if (this.transition.supported) {
						this.bind(elDialog, this.transition.type, transitionDone);
						elDialog.className = "alertify alertify-hide alertify-hidden";
					} else {
						elDialog.className = "alertify alertify-hide alertify-hidden alertify-isHidden";
					}
					elCover.className  = "alertify-cover alertify-cover-hidden";
					// set focus to the last element or body
					// after the dialog is closed
					elCallee.focus();
				}
			},

			/**
			 * Initialize Alertify
			 * Create the 2 main elements
			 *
			 * @return {undefined}
			 */
			init : function () {
				// ensure legacy browsers support html5 tags
				document.createElement("nav");
				document.createElement("article");
				document.createElement("section");
				// cover
				elCover = document.createElement("div");
				elCover.setAttribute("id", "alertify-cover");
				elCover.className = "alertify-cover alertify-cover-hidden";
				document.body.appendChild(elCover);
				// main element
				elDialog = document.createElement("section");
				elDialog.setAttribute("id", "alertify");
				elDialog.className = "alertify alertify-hidden";
				document.body.appendChild(elDialog);
				// log element
				elLog = document.createElement("section");
				elLog.setAttribute("id", "alertify-logs");
				elLog.className = "alertify-logs alertify-logs-hidden";
				document.body.appendChild(elLog);
				// set tabindex attribute on body element
				// this allows script to give it focus
				// after the dialog is closed
				document.body.setAttribute("tabindex", "0");
				// set transition type
				this.transition = getTransitionEvent();
				// clean up init method
				delete this.init;
			},

			/**
			 * Show a new log message box
			 *
			 * @param  {String} message    The message passed from the callee
			 * @param  {String} type       [Optional] Optional type of log message
			 * @param  {Number} wait       [Optional] Time (in ms) to wait before auto-hiding the log
			 *
			 * @return {Object}
			 */
			log : function (message, type, wait) {
				// check to ensure the alertify dialog element
				// has been successfully created
				var check = function () {
					if (elLog && elLog.scrollTop !== null) return;
					else check();
				};
				// initialize alertify if it hasn't already been done
				if (typeof this.init === "function") {
					this.init();
					check();
				}
				elLog.className = "alertify-logs";
				this.notify(message, type, wait);
				return this;
			},

			/**
			 * Add new log message
			 * If a type is passed, a class name "alertify-log-{type}" will get added.
			 * This allows for custom look and feel for various types of notifications.
			 *
			 * @param  {String} message    The message passed from the callee
			 * @param  {String} type       [Optional] Type of log message
			 * @param  {Number} wait       [Optional] Time (in ms) to wait before auto-hiding
			 *
			 * @return {undefined}
			 */
			notify : function (message, type, wait) {
				var log = document.createElement("article");
				log.className = "alertify-log" + ((typeof type === "string" && type !== "") ? " alertify-log-" + type : "");
				log.innerHTML = message;
				// append child
				elLog.appendChild(log);
				// triggers the CSS animation
				setTimeout(function() { log.className = log.className + " alertify-log-show"; }, 50);
				this.close(log, wait);
			},

			/**
			 * Set properties
			 *
			 * @param {Object} args     Passing parameters
			 *
			 * @return {undefined}
			 */
			set : function (args) {
				var k;
				// error catching
				if (typeof args !== "object" && args instanceof Array) throw new Error("args must be an object");
				// set parameters
				for (k in args) {
					if (args.hasOwnProperty(k)) {
						this[k] = args[k];
					}
				}
			},

			/**
			 * Common place to set focus to proper element
			 *
			 * @return {undefined}
			 */
			setFocus : function () {
				if (input) {
					input.focus();
					input.select();
				}
				else btnFocus.focus();
			},

			/**
			 * Initiate all the required pieces for the dialog box
			 *
			 * @return {undefined}
			 */
			setup : function (fromQueue) {
				var item = queue[0],
				    self = this,
				    transitionDone;

				// dialog is open
				isopen = true;
				// Set button focus after transition
				transitionDone = function (event) {
					event.stopPropagation();
					self.setFocus();
					// unbind event so function only gets called once
					self.unbind(elDialog, self.transition.type, transitionDone);
				};
				// whether CSS transition exists
				if (this.transition.supported && !fromQueue) {
					this.bind(elDialog, this.transition.type, transitionDone);
				}
				// build the proper dialog HTML
				elDialog.innerHTML = this.build(item);
				// assign all the common elements
				btnReset  = $("alertify-resetFocus");
				btnOK     = $("alertify-ok")     || undefined;
				btnCancel = $("alertify-cancel") || undefined;
				btnFocus  = (_alertify.buttonFocus === "cancel") ? btnCancel : ((_alertify.buttonFocus === "none") ? $("alertify-noneFocus") : btnOK),
				input     = $("alertify-text")   || undefined;
				form      = $("alertify-form")   || undefined;
				// add placeholder value to the input field
				if (typeof item.placeholder === "string" && item.placeholder !== "") input.value = item.placeholder;
				if (fromQueue) this.setFocus();
				this.addListeners(item.callback);
			},

			/**
			 * Unbind events to elements
			 *
			 * @param  {Object}   el       HTML Object
			 * @param  {Event}    event    Event to detach to element
			 * @param  {Function} fn       Callback function
			 *
			 * @return {undefined}
			 */
			unbind : function (el, event, fn) {
				if (typeof el.removeEventListener === "function") {
					el.removeEventListener(event, fn, false);
				} else if (el.detachEvent) {
					el.detachEvent("on" + event, fn);
				}
			}
		};

		return {
			alert   : function (message, fn, cssClass) { _alertify.dialog(message, "alert", fn, "", cssClass); return this; },
			confirm : function (message, fn, cssClass) { _alertify.dialog(message, "confirm", fn, "", cssClass); return this; },
			extend  : _alertify.extend,
			init    : _alertify.init,
			log     : function (message, type, wait) { _alertify.log(message, type, wait); return this; },
			prompt  : function (message, fn, placeholder, cssClass) { _alertify.dialog(message, "prompt", fn, placeholder, cssClass); return this; },
			success : function (message, wait) { _alertify.log(message, "success", wait); return this; },
			error   : function (message, wait) { _alertify.log(message, "error", wait); return this; },
			set     : function (args) { _alertify.set(args); },
			labels  : _alertify.labels,
			debug   : _alertify.handleErrors
		};
	};

	// AMD and window support
	if (typeof define === "function") {
		define([], function () { return new Alertify(); });
	} else if (typeof global.alertify === "undefined") {
		global.alertify = new Alertify();
	}

}(this));
