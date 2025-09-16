//jsVersion  : V11.03.01
//========================================================================
// Program   : outweb0201016.js
//
// Written   : 17/07/2012
//
// Function  : Standard Functions Used in outweb0201016 templates
//========================================================================
var h;
var s;
var t;  // the Table
var outputCount=0;
var SearchInputField=null;
var SearchTimeoutId=null;
var setRemoteTimeSeen=false;
var OrderColumn;
var AscDsc;
var counter=0;
var ReturnExitFunction;
var ReturnFunction;
var ReturnUrn;
var ReturnNam;
var ReturnAdm;
var printOrder;
var printFormat=false;
var printWidth = new Array();
var SearchName;
var FilterColumn = new Array();
var FilterValue = new Array();
var UseSprites = false;
var colOBAVISIT = 3;
var colFORMATNM = 5;
var colOBAURNO  = 6;
var colOUTPATE  = 7;
var colOTBBASTM = 10;
var colOTBBCITM = 11;
var colOTBBDPTM = 12;
var colOBASTAT  = 13;
var colALERTSTR = 16;
var colCASEKEYS = 20;
var colINTERNAM = 21;
var colSPECANAM = 22;
var colSTATNAME = 23;
var colPATFOLDR = 24;
var colHIGHCOLR = 29;
var colCHARTREV = 36;
var colALERTST2 = 38;
var colCONFRPMI = 40;
var colOTHECPAG = 41;
var colOPDMFLAG = 42;
var colALREVISN = 43;
var colALREDEPT = 44;
var colDISPCLMN = 45;
var colUMEDFLAG = 46;
var colOTHEADEP = 47;
var colOTHECENC = 48;
var colALENENCT = 49;
var colSLOTDURN = 52;
var colCURRINEM = 53;
var colHEALTHFUND = 54;
var colREFEXPIRY = 55;
//
var CompatibilityMode = false;  // IE Browser Compatibility Mode
var scrollTableBody = true;     // set option to scroll table body
//
function init() {
 SearchName=document.getElementById("PatientSearchName")

  if(SelectPeriod.ibcnmhos.value=="1") {
    SelectOptionsHospCatCode(SelectPeriod.ctcode,SelectPeriod.wbsehosp,SelectPeriod.srchltyp);
    SelectPeriod.srchltyp.options[0]=new Option("All Locations","  ");

    SelectPeriod.srchltyp.selectedIndex=0;
    if (!isWhitespace(SelectPeriod.defltype.value)) {
      for (var i =0 ; i < SelectPeriod.srchltyp.length; i++) {
        if (SelectPeriod.srchltyp.options[i].value.substr(0,3)==SelectPeriod.defltype.value) {
          SelectPeriod.srchltyp.selectedIndex=i
        }
      }
    }
  } else
  {
    SetCategoryCT(SelectPeriod.srchltyp,SelectPeriod.defltype.value);
  }

}
function RefreshPage() {
 ShowWaitScreen();
 SelectPeriod.searchfl.value="1";
 SelectPeriod.template.value="17";
 theURL=SelectPeriod.action+"?"+AJAXQueryString(SelectPeriod).replace(/ /g,"+");
 SelectPeriod.template.value="16";
 xmlHttp=createHttpObject();
 xmlHttp.open("GET", theURL, false);
 xmlHttp.send();
 if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
    if ((typeof h)=="object") {
      h.removeChild(s);
      s = document.createElement("script");
      s.type="text/javascript";
    }
    else {
      h = document.getElementsByTagName("head")[0];
      s = document.createElement("script");
      s.type="text/javascript";
    }
    h.appendChild(s);
    s.text=xmlHttp.responseText;
    InitTable();
 }
}
function RefreshPageWA() {
 ShowWaitScreen();
 SelectPeriod.searchfl.value="1";
 SelectPeriod.template.value="17";
 theURL=SelectPeriod.action+"?"+AJAXQueryString(SelectPeriod).replace(/ /g,"+");
 SelectPeriod.template.value="16";
 xmlHttp=createHttpObject();
 xmlHttp.open("GET", theURL, false);
 xmlHttp.send();
 if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
    if ((typeof h)=="object") {
      h.removeChild(s);
      s = document.createElement("script");
      s.type="text/javascript";
    }
    else {
      h = document.getElementsByTagName("head")[0];
      s = document.createElement("script");
      s.type="text/javascript";
    }
    h.appendChild(s);
    s.text=xmlHttp.responseText;
    InitTableWA();
 }
}
function RefreshPageNZ() {
 ShowWaitScreen();
 SelectPeriod.searchfl.value="1";
 SelectPeriod.template.value="17";
 theURL=SelectPeriod.action+"?"+AJAXQueryString(SelectPeriod).replace(/ /g,"+");
 SelectPeriod.template.value="16";
 xmlHttp=createHttpObject();
 xmlHttp.open("GET", theURL, false);
 xmlHttp.send();
 if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
    if ((typeof h)=="object") {
      h.removeChild(s);
      s = document.createElement("script");
      s.type="text/javascript";
    }
    else {
      h = document.getElementsByTagName("head")[0];
      s = document.createElement("script");
      s.type="text/javascript";
    }
    h.appendChild(s);
    s.text=xmlHttp.responseText;
    InitTableNZ();
 }
}
function AJAXQueryString(el) {
  parameters="";
  for (i=0;i<el.length;i++) {
    switch (el[i].type) {
     case 'radio': {
       if (el[i].checked) {
         parameters+=el[i].name+"="+el[i].value+"&";
       }
       break; }
     case 'checkbox': {
       if (el[i].checked) {
         parameters+=el[i].name+"="+el[i].value+"&";
       }
       break; }
     case 'hidden': {
       parameters+=el[i].name+"="+el[i].value+"&";
       break; }
     case 'select-one': {
       parameters+=el[i].name+"="+el[i].options[el[i].selectedIndex].value +"&";
       break; }
     case 'text': {
       parameters+=el[i].name+"="+el[i].value+"&";
       break; }
    }
  }
  parameters+='1=1';
  return parameters;
}
//----------------------------------------------------------------------------
// Create New Table Object
//----------------------------------------------------------------------------
// Add Columns in Order Required
//----------------------------------------------------------------------------
function InitTable() {
   document.title="Patient List"
   t = new Table(1,0,2,"100%","center",40,60);
   t.addColumn("Time","Time",1,1,"left","AppointmentIcon.gif","Slot",40)
   t.addColumn("Type","String",26,26,"left","","",25)
   t.addColumn("Patient","StringPatient",5,5,"left","PatientFolder","Patient",105)
   if (document.getElementById("showcpmi") != null &&
       document.getElementById("showcpmi").value == "1" ||
       document.getElementById("showcpmi") != null &&
       document.getElementById("showcpmi").value == "3") {
     t.addColumn("Confirm PMI","ButtonLinkWide",39,40,"left","","ConfirmPMI",55,"","","",59)
   }

   if (document.getElementById("showcpmi") != null &&
       document.getElementById("showcpmi").value == "2" ||
       document.getElementById("showcpmi") != null &&
       document.getElementById("showcpmi").value == "3") {
     t.addColumn("Health Fund","String",54,54,"left","","",40)
   }

   t.addColumn("Check- In","ButtonLink",11,-1,"left","","CheckIn",45)
   t.addColumn("Time Seen","ButtonLink",10,-1,"left","","TimeSeen",45)
   t.addColumn("Departure","ButtonLink",12,-1,"left","","Departure",45)
   t.addColumn("Follow Up","ButtonLink",14,-1,"left","","FollowUp",45)
   t.addColumn("Non Attend","ButtonLink",15,-1,"left","","NonAttend",45)

   if (document.getElementById("showcpmi") != null &&
       document.getElementById("showcpmi").value == "1") {
     t.addColumn("Alerts","Image",16,-1,"left","alert","",55,"","","",55)
   } else {
     t.addColumn("Alerts","Image",16,-1,"left","alert","",55)
   }

   if (document.getElementById("showcpmi") != null &&
       document.getElementById("showcpmi").value == "2" ||
       document.getElementById("showcpmi") != null &&
       document.getElementById("showcpmi").value == "3") { 
     t.addColumn(SelectPeriod.dummyclm.value,"String",28,28,"left","","",25)
   }

   t.addColumn("Clinic Type","String",34,34,"left","","",30)
   t.addColumn("Clinic","String",33,33,"left","","",100)
//   t.addColumn("Visit","String",31,31,"left","","",35)
   t.addColumn("Confirmed","String",35,35,"left","","",40)
   AddTableRows();
   t.sortTable(6,1);    // By Clinic Type
   OrderColumn=5;
   AscDsc=1;
   addStatusFilter(SelectPeriod.statusFilter,'12','null');     // Default Status Filter
   addStatusFilter(SelectPeriod.statusFilter,'15','null');     // Default Status Filter
   TableOutput(OrderColumn,AscDsc);    // Order Column,Asc Dsc
   ShowFilter("clinicFilter","33");
   ShowFilter("typeFilter","32");
   //ShowFilter("locationFilter","37");
   ShowFilter("indicatorFilter","50");
   window.setTimeout(function(){HideWaitScreen();},50);
}
//----------------------------------------------------------------------------
// Add Columns in Order Required
//----------------------------------------------------------------------------
function InitTableNZ() {
   document.title="Patient List"
   t = new Table(1,0,2,"100%","center",40,60);
   t.addColumn("Time","Time",1,1,"left","AppointmentIcon.gif","Slot",40)
   t.addColumn("Type","String",26,26,"left","","",25)
   t.addColumn("Patient","StringPatient",5,5,"left","PatientFolder","Patient",105)
   if (document.getElementById("showcpmi") != null &&
       document.getElementById("showcpmi").value == "1" ||
       document.getElementById("showcpmi") != null &&
       document.getElementById("showcpmi").value == "3") {
     t.addColumn("Confirm Demographics","ButtonLinkWide",39,40,"left","","ConfirmPMI",55,"","","",59)
   }

   if (document.getElementById("showcpmi") != null &&
       document.getElementById("showcpmi").value == "2" ||
       document.getElementById("showcpmi") != null &&
       document.getElementById("showcpmi").value == "3") {
     t.addColumn("Health Fund","String",54,54,"left","","",40)
   }

   t.addColumn("Check- In","ButtonLink",11,-1,"left","","CheckIn",45)
   t.addColumn("Time Seen","ButtonLink",10,-1,"left","","TimeSeen",45)
   t.addColumn("Departure","ButtonLink",12,-1,"left","","Departure",45)
   t.addColumn("Follow Up","ButtonLink",14,-1,"left","","FollowUp",45)
   t.addColumn("Non Attend","ButtonLink",15,-1,"left","","NonAttend",45)
   t.addColumn("Alerts","Image",16,-1,"left","alert","",55)

   if (document.getElementById("showcpmi") != null &&
       document.getElementById("showcpmi").value == "2" ||
       document.getElementById("showcpmi") != null &&
       document.getElementById("showcpmi").value == "3") {
     t.addColumn(SelectPeriod.dummyclm.value,"String",28,28,"left","","",25)
   }

   t.addColumn("Clinic Type","String",34,34,"left","","",30)
   t.addColumn("Clinic","String",33,33,"left","","",100)
//   t.addColumn("Visit","String",31,31,"left","","",35)
   t.addColumn("Confirmed","String",35,35,"left","","",40)
   AddTableRows();
   t.sortTable(6,1);    // By Clinic Type
   OrderColumn=5;
   AscDsc=1;
   addStatusFilter(SelectPeriod.statusFilter,'12','null');     // Default Status Filter
   addStatusFilter(SelectPeriod.statusFilter,'15','null');     // Default Status Filter
   TableOutput(OrderColumn,AscDsc);    // Order Column,Asc Dsc
   ShowFilter("clinicFilter","33");
   ShowFilter("typeFilter","32");
   //ShowFilter("locationFilter","37");
   ShowFilter("indicatorFilter","50");
   window.setTimeout(function(){HideWaitScreen();},50);
}
function InitTableWA() {
   document.title="Patient List"
   t = new Table(1,0,2,"100%","center",40,60);
   t.addColumn("Time","Time",1,1,"left","AppointmentIcon.gif","Slot",40)
   t.addColumn("SDM","String",58,58,"left","","",40)
   t.addColumn("Type","String",26,26,"left","","",25)
   t.addColumn("Patient","StringPatient",5,5,"left","PatientFolder","Patient",105)
   t.addColumn("Confirm PMI","ButtonLinkWide",39,40,"left","","ConfirmPMI",50)
   t.addColumn("Check- In","ButtonLink",11,-1,"left","","CheckIn",45)
   t.addColumn("Time Seen","ButtonLink",10,-1,"left","","TimeSeenOnly",45)
   t.addColumn("Departure","ButtonLinkText",51,-1,"left","","Departure",45)
   t.addColumn("Follow Up","ButtonLink",14,-1,"left","","FollowUp",45)
   t.addColumn("Non Attend","ButtonLink",15,-1,"left","","NonAttend",45)
   t.addColumn("Alerts","Image",16,-1,"left","alert","",55)
//   t.addColumn(SelectPeriod.dummyclm.value,"String",28,28,"left","","",25)
//   t.addColumn("Clinic Type","String",34,34,"left","","",30)
   t.addColumn("Clinic","String",33,33,"left","","",100)
//   t.addColumn("Visit","String",31,31,"left","","",35)
   t.addColumn("Confirmed","String",35,35,"left","","",40)
   AddTableRows();
   t.sortTable(0,1);    // By Time
   OrderColumn=0;
   AscDsc=1;
   if(GetContentCookie("FilterColumn")!="unknown") {
     FilterColumn=GetContentCookie("FilterColumn").split(",");
     FilterValue=GetContentCookie("FilterValue").split(",");
   }
   if (FilterColumn.length<1) {
     addStatusFilter(SelectPeriod.statusFilter,'12','null');     // Default Status Filter
     addStatusFilter(SelectPeriod.statusFilter,'15','null');     // Default Status Filter
     document.SelectPeriod.statusFilter.checked=true;
   } else {
     for (var i = 0; i<FilterColumn.length;i++) {
       if (FilterColumn[i]=="12"&&FilterValue[i]=="null") {
         document.SelectPeriod.statusFilter.checked=true;
       }
     }
   }
   TableOutput(OrderColumn,AscDsc);    // Order Column,Asc Dsc
   ShowFilter("clinicFilter","33");
   ShowFilter("typeFilter","32");
   //ShowFilter("locationFilter","37");
   ShowFilter("indicatorFilter","50");
   window.setTimeout(function(){HideWaitScreen();},50);
}
function UpdateConf(CheckBox){
  var UpdateConf=0;
  var searchChecked = new RegExp("checked","i");
  var casekey=CheckBox.value.replace(/\+/g,' ');
  var searchCase = new RegExp(casekey,"i");
  for (var i=0;i<t.rows.length;i++) {
    thiscase=t.rows[i][35].replace(/\+/g,' ');
    if (searchCase.test(thiscase)) {
      if (searchChecked.test(t.rows[i][35])) {
         t.rows[i][35]=t.rows[i][35].replace(/ checked/,"");
      }
      else {
         t.rows[i][35]=t.rows[i][35].replace(/\>/," checked>");
      }
    }
  }
  if(CheckBox.checked) {
     UpdateConf=1
  }
    var serverURL   = "../cgi-bin/outweb02.pbl?reportno=9&updatety=8" +
                      "&casekeys=" + CheckBox.value.replace(/ /g,"+") +
                      "&confappt=" + UpdateConf
  var returnValue = RSExecute(serverURL);
}
function TableSearch(e) { 
  var delayTime = 150; //delay 0.15 seconds
  if(!e){e = window.event;}
  if (e.srcElement)
    SearchInputField = e.srcElement;
  else if (e.target)
    SearchInputField = e.target;
  else { return; }
  clearTimeout(SearchTimeoutId);
  if (e.keyCode==9) { return; }
  if(e.keyCode== 13 || SearchInputField.value.length == 0 ) {
    SearchTimeoutId = setTimeout( function() { TableOutput(OrderColumn,AscDsc); },delayTime);
    return;
  }
  if(SearchInputField.value.length > 2) {
    if(e.keyCode == 8 || e.keyCode == 46) {
      SearchTimeoutId = setTimeout( function() { TableOutput(OrderColumn,AscDsc); },delayTime);
      return;
    }
    if(e.keyCode < 32 || (e.keyCode >= 33 && e.keyCode <= 47)||(e.keyCode >= 112 && e.keyCode <= 123)) {
      return;
    }
    SearchTimeoutId = setTimeout( function() { TableOutput(OrderColumn,AscDsc); },delayTime);
   }
}
//------------------------------------------------------------
// Dynamic Table Filter Processing
// Called on each row before output.
// Checks Search Name Filter and Column Select Filters
// colFORMATNM = Column Number in the table to search
//------------------------------------------------------------
function TableFilter(el) { 
  var ss=SearchName.value.toUpperCase();
  if (!isWhitespace(ss)) {
    // only try to search data table value if it's NOT a link URL
    if (!el[colFORMATNM].match(/pbl\?/ig)) {
      if(el[colFORMATNM].toUpperCase().search(ss)==-1) return false;
    }
  }
  for(var f = 0; f < FilterValue.length; f++) {
    if (FilterValue[f]!='') {
      if (FilterValue[f]!='null') {
        if (FilterValue[f]!=el[FilterColumn[f]]) {
          return false;
        }
      }
      else {
        if (!isWhitespace(el[FilterColumn[f]])) {
          return false;
        }
      }
    }
  }
  return true;
}
//------------------------------------------------------------
// Dynamic Filter Select List onChange Function Call
// Example:
// In Table Initialisation 
// ShowFilter("unitFilter","32");
// In Page HTML
// <select onchange="FilterList(this,'32');" title="Unit" id="unitFilter">
// <option value=''>All Units</option>
// </select>
//------------------------------------------------------------
function onFilterList(el,ColumnNo) {
  for(var f = 0; f < FilterColumn.length; f++) {
    if (FilterColumn[f]==ColumnNo) {
       FilterValue[f]=el.options[el.selectedIndex].value;
    }
  }
  TableOutput(OrderColumn,AscDsc);
}
function onActiveFilter(el) {
  addStatusFilter(el,'12','null');
  addStatusFilter(el,'15','null');
  TableOutput(OrderColumn,AscDsc);
}
function addStatusFilter(el,ColumnNo,MatchValue) {
  filterAdd=true;
  for(var f = 0; f < FilterColumn.length; f++) {
    if (FilterColumn[f]==ColumnNo) {
      filterAdd=false;
      if (el.checked) {
        FilterValue[f]=MatchValue;
      }
      else {
        FilterValue[f]="";
      }
    }
  }
  if (filterAdd) {
    FilterColumn[FilterColumn.length]=ColumnNo;
    FilterValue[FilterValue.length]=MatchValue;
  }
}
//------------------------------------------------------------
// Dynamic Filter Select List based on Unique Column Values
//------------------------------------------------------------
function ShowFilter(FilterName,ColumnNo) {
 var FilterList = new Array();
 var SetNew=true;
 for (var i=0;i<FilterColumn.length;i++) {
   if (FilterColumn[i]==ColumnNo) SetNew=false;
 }
 if (SetNew) {
   FilterColumn[FilterColumn.length]=ColumnNo;
   FilterValue[FilterValue.length]='';
 }
 for(var i = 0; i < t.rows.length; i++) {
   if (!isWhitespace(t.rows[i][ColumnNo])) {
     addItem=true;
     for(var j = 0; j < FilterList.length; j++) {
       if (t.rows[i][ColumnNo]==FilterList[j]) addItem=false;
     }
     if (addItem) FilterList[FilterList.length]=t.rows[i][ColumnNo];
   }
 }
 FilterList.sort();
 el=document.getElementById(FilterName)
 if (el.options.length>1) el.options.length=1;
 for(var j = 0; j < FilterList.length; j++) {
   el.options[el.options.length] = new Option(FilterList[j],FilterList[j])
   for (var i=0;i<FilterColumn.length;i++) {
     if (FilterColumn[i]==ColumnNo) {
       if (FilterValue[i]==FilterList[j]) el.selectedIndex=el.options.length-1;
     }
   }
 }
}
//------------------------------------------------------------ 
// Function : Specialised Table Sorting for Outpatient Checkin
//------------------------------------------------------------ 
function Table(Border,Cellspacing,Cellpadding,Width,Align,HHeight,RHeight) { 
   this.Border = Border; 
   this.Cellspacing = Cellspacing; 
   this.Cellpadding = Cellpadding; 
   this.Width = Width; 
   this.Align = Align; 
   this.HeadingHeight = HHeight; 
   this.RowHeight = RHeight; 
   this.rows = new Array(); 
   this.addRow = _addTableRow; 
   this.columns = new Array(); 
   this.addColumn = _addTableColumn; 
   this.sortTable = _sortTable; 
   this.tableTotals = new Array(); 
   this.addTotal = _addTableTotal; 
   AscDsc=1 
} 
function _addTableTotal() { 
  for(var i = 0; i < arguments.length; i++)  
     this.tableTotals[i] = arguments[i]; 
} 
function _sortTable(Column,AscDsc) { 
  SortOrderBy = t.columns[Column][3] 
  if (AscDsc == 1) { 
    switch(t.columns[Column][1]) { 
      case "Date"      :  t.rows.sort(NumericSort); break; 
      case "DateTime"  :  t.rows.sort(StringSort); break; 
      case "Time"      :  t.rows.sort(StringSort); break; 
      case "Number"    :  t.rows.sort(NumericSort); break; 
      case "Image"     :  t.rows.sort(StringSort); break; 
      case "ButtonLink":  t.rows.sort(StringSort); break; 
      case "ButtonLinkWide":  t.rows.sort(StringSort); break; 
      case "ButtonLinkText":  t.rows.sort(StringSort); break; 
      case "String"    :  t.rows.sort(StringSort); break; 
      case "StringPatient"    :  t.rows.sort(StringSort); break; 
    } 
  } 
  else { 
    switch(t.columns[Column][1]) { 
      case "Date"      :  t.rows.sort(RevNumericSort); break; 
      case "DateTime"  :  t.rows.sort(RevStringSort); break; 
      case "Time"      :  t.rows.sort(RevStringSort); break; 
      case "Number"    :  t.rows.sort(RevNumericSort); break; 
      case "Image"     :  t.rows.sort(RevStringSort); break; 
      case "ButtonLink":  t.rows.sort(RevStringSort); break; 
      case "ButtonLinkWide":  t.rows.sort(RevStringSort); break; 
      case "ButtonLinkText":  t.rows.sort(RevStringSort); break; 
      case "String"    :  t.rows.sort(RevStringSort); break; 
      case "StringPatient"    :  t.rows.sort(RevStringSort); break; 
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
  if (column[1] != "Image"  && column[5] != "") { 
    if (column[5].search(".")>0) {
      var ImageBuffer = new Image();
      ImageBuffer.src = "../images/" + column[5];
    }
  } 
} 
function _addTableRow() { 
  this.rows[this.rows.length] = new Array(); 
  var row = this.rows[this.rows.length-1]; 
  for(var i = 0; i < arguments.length; i++)  
     row[row.length] = arguments[i].replace(/\s*$/,""); 
} 
//
// Get Class for Row Highlights
//
function getRowClass(rowno,HIGHCOLR,CHARTREV) {
  
  val="TableRowEven"
  if (rowno%2==1)        { val="TableRowOdd" }
  if (HIGHCOLR=="0") { val="TableRowExpired" }
  if (HIGHCOLR=="2") { val="TableRowWarning" }
  if (HIGHCOLR=="3") { val="TableRowNote" }
  if (CHARTREV=="1") { val="TableRowChartReview" }
  return val;
}
function addAlertIcons(i) {
  alrtnew1=t.rows[i][colALERTST2].substr(1,1);
  alrtnew2=t.rows[i][colALERTST2].substr(2,1);
  alrtnew3=t.rows[i][colALERTST2].substr(3,1);
  alrtnew4=t.rows[i][colALERTST2].substr(5,1);
  alrtsprt=t.rows[i][colALERTSTR].substr(0,1);
  resulprt=t.rows[i][colALERTSTR].substr(1,1);
  clinnote=t.rows[i][colALERTSTR].substr(2,1);
  clindocm=t.rows[i][colALERTSTR].substr(3,1);
  spareflg=t.rows[i][colALERTSTR].substr(4,1);
  spearrng=t.rows[i][colALERTSTR].substr(5,1);
  intrfild=t.rows[i][colALERTSTR].substr(6,1);
  privaind=t.rows[i][colALERTSTR].substr(7,1);
  transprt=t.rows[i][colALERTSTR].substr(8,1);
  intrname=t.rows[i][colINTERNAM]
  specname=t.rows[i][colSPECANAM]
  opdmessg=t.rows[i][colOPDMFLAG]
  opdmessg_ur=t.rows[i][colOBAURNO]
  opdmessg_vis=t.rows[i][colOUTPATE]
  currIP=t.rows[i][colCURRINEM].substr(0,1);
  currED=t.rows[i][colCURRINEM].substr(1,1);
  if (alrtnew1==1){
    ImageString="AlertIconM.gif" 
    TableString[TableString.length] = FormatImage(ImageString,"Med Alerts");
  }
  if (alrtnew2==1){
    ImageString="AlertIconB.gif" 
    TableString[TableString.length] = FormatImage(ImageString,"Micro Alerts");
  }
  if (alrtnew3==1){
    ImageString="AlertIconR.gif" 
    TableString[TableString.length] = FormatImage(ImageString,"Risk Alerts");
  }
  if (alrtnew4==1){
    ImageString="AlertIconC.gif" 
    TableString[TableString.length] = FormatImage(ImageString,"Chronic Alerts");
  }
  ImageString="" 
  switch (alrtsprt) {
    case 1: 
      ImageString="AlertIcon.gif" 
      break;
    case 2: 
      ImageString="AlertIconBlack.gif" 
      break;
    case 3: 
      ImageString="AlertIconDelete.gif" 
      break;
    default:
      if (alrtsprt!=" " && alrtsprt!="") {
        ImageString="AlertIcon" + alrtsprt + ".gif" 
      }
  }
  if (ImageString!="") {
    TableString[TableString.length] = FormatImage(ImageString,"Alerts");
  } 
  if (resulprt==1) {
    ImageString="ResultIcon.gif"
    TableString[TableString.length] = FormatImage(ImageString,"Results");  
  }                               
  if (clinnote==1) {
    ImageString="NotesIcon.gif"
    TableString[TableString.length] = FormatImage(ImageString,"Notes");  
  }                               
  if (clindocm==1) {
    ImageString="DocumentsIcon.gif"
    TableString[TableString.length] = FormatImage(ImageString,"Documents");  
  }                               
  if (spearrng==1) {
    ImageString="ArrangeIcon.gif"
    TableString[TableString.length] = FormatImage(ImageString,specname);
  }
  if (intrfild==1) {
    ImageString="InterpretorIcon.gif"
    TableString[TableString.length] = FormatImage(ImageString,intrname);
  }
  if (privaind==1) {
    ImageString="PrivacyIcon.gif"
    TableString[TableString.length] = FormatImage(ImageString,"Privacy");
  }
  if (transprt==1){
    ImageString="Transport.gif"
    TableString[TableString.length] = FormatImage(ImageString,"Transport");
  }
  if (opdmessg==1){
    TableString[TableString.length] = "<a href='javascript:" +
                                      "OPDMessageLink(\"" +
                                      opdmessg_ur + "\",\"" +
                                      opdmessg_vis +
                                      "\");'>" 
    ImageString="Phone.png"
    TableString[TableString.length] = FormatImage(ImageString,"OPD Message");
    TableString[TableString.length] = "</a>"
  }
  if(currIP=="1" || currIP=="2") {
    ImageString="CurrentIP" + currIP + ".png"
    TableString[TableString.length] = FormatImage(ImageString,"Current Inpatient");
  }
  if(currED=="1" || currED=="2") {
    ImageString="CurrentED" + currED + ".png"
    TableString[TableString.length] = FormatImage(ImageString,"Current Emergency");
  }
} 

function FormatIcon(i,j) { 
  if (UseSprites) return newFormatIcon(i,j);
  return oldFormatIcon(i,j);
}
function oldFormatIcon(i,j) { 
  if (ImgString != "" ) { 
    switch(t.columns[j][1]){ 
      case "String" : 
        if (t.rows[i][colFORMATNM]!="") {       
          TableString[TableString.length] = "<img src=\"../images/" +
          ImgString + "\" class=ListIcon onclick=\"PatientTableLink(" + i + "," +j + ");\">";
        } 
        break; 
      case "StringPatient" : 
        if(t.rows[i][colFORMATNM]!=""){       
          if (typeof(t.rows[i][colPATFOLDR]) != "undefined"){
            ImgString = ImgString + t.rows[i][colPATFOLDR]
          }
          TableString[TableString.length] = "<img src=\"../images/" + 
          ImgString + ".gif" + "\" class=ListIcon onclick=\"PatientTableLink(" + i + "," +j + ");\">";
        } 
        break; 
      default : 
        TableString[TableString.length] = "<img src=\"../images/" + 
        ImgString + "\" class=ListIcon onclick=\"PatientTableLink(" + i + "," +j + ");\">"; 
      }    
   }  
} 
function newFormatIcon(i,j) { 
  if (ImgString != "" ) { 
    className=ImgString.replace(/\..*/,"")
    switch(t.columns[j][1]){ 
      case "String" : 
        if (t.rows[i][colFORMATNM]!="") {       
          TableString[TableString.length] = "<span class='SpriteIcon "+className+
                        "' onclick=\"PatientTableLink(" + i + "," +j + ");\"></span>";
        } 
        break; 
      case "StringPatient" : 
        if(t.rows[i][colFORMATNM]!=""){       
          if (typeof(t.rows[i][colPATFOLDR]) != "undefined"){
            ImgString = ImgString + t.rows[i][colPATFOLDR]
          }
          className=ImgString.replace(/\..*/,"")
          TableString[TableString.length] = "<span class='SpriteIcon "+className+
                        "' onclick=\"PatientTableLink(" + i + "," +j + ");\"></span>";
        } 
        break; 
      default : 
        TableString[TableString.length] = "<span class='SpriteIcon "+className+
                        "' onclick=\"PatientTableLink(" + i + "," +j + ");\"></span>";
      }    
   }  
} 
function PatientTableLink(RowNo,ColNo) { 
  Casekeys=t.rows[RowNo][colCASEKEYS];
  switch (t.columns[ColNo][6]) { 
    case "Slot" : 
        SlotLink(RowNo,ColNo,Casekeys); break;
    case "Patient" : 
        PatientLink(RowNo,ColNo,Casekeys); break;
    case "CheckIn" :  
        CheckInLink(RowNo,ColNo,Casekeys); break;
    case "TimeSeen" :  
        TimeSeenLink(RowNo,ColNo,Casekeys); break;
    case "TimeSeenOnly" :
        TimeSeenLink(RowNo,ColNo,Casekeys); break;
    case "Departure" : 
        DepartureLink(RowNo,ColNo,Casekeys); break;
    case "FollowUp" :
        FollowUpLink(RowNo,ColNo,Casekeys); break;
    case "NonAttend" :
        NonAttendLink(RowNo,ColNo,Casekeys); break;
    case "commlink" :
        CommLink(RowNo,ColNo,Casekeys); break;
    case "ConfirmPMI" :
        ConfirmLink(RowNo,ColNo,Casekeys); break;
     default : alert(t.columns[ColNo][6]);  
  } 
} 
function CommLink(RowNo,ColNo,Casekeys) {
  Urnumber=t.rows[RowNo][colOBAURNO];
  Admissno=t.rows[RowNo][colOUTPATE];
  linkurl="hicweb01.pbl?reportno=1&template=009" +
          "&admissno="+Admissno.replace(/ /g,"+") +
          "&urnumber="+Urnumber.replace(/ /g,"+");
  DFrameLink(linkurl,0,20,700,200)
}
function ConfirmLink(RowNo,ColNo,Casekeys) {
  Urnumber=t.rows[RowNo][colOBAURNO];
  Admissno=t.rows[RowNo][colOUTPATE];
  linkUrl="patweb89.pbl?reportno=1&template=002" +
          "&urnumber=" + Urnumber.replace(/ /g,"+") +
          "&admissno=" + Admissno.replace(/ /g,"+") +
          "&cpmiskey=" + Casekeys.substr(0,25);
  location.href=linkUrl;;
}
function NonAttendLink(RowNo,ColNo,Casekeys) {
  Urnumber=t.rows[RowNo][colOBAURNO];
  Admissno=t.rows[RowNo][colOUTPATE];
  if (t.rows[RowNo][colSTATNAME]=="Attended") {
    alert("Appointment has been Attended");
    return
  }
  linkurl="outweb02.pbl?reportno=03&template=002&urnumber="+Urnumber.replace(/ /g,"+")+
          "&admissno="+Admissno.replace(/ /g,"+");
  DFrameLink(linkurl,0,20,750,450); 
}
function FollowUpLink(RowNo,ColNo,Casekeys) {
  Urnumber=t.rows[RowNo][colOBAURNO];
  Admissno=t.rows[RowNo][colOUTPATE];
  ConfirmPMI=t.rows[RowNo][colCONFRPMI];
  if (ConfirmPMI == "1") {
    alert("Function not available\n" +
          "Confirm PMI date less than clinic date.");
    return;
  }
  linkurl="outweb02.pbl?reportno=03&template=004&urnumber="+ Urnumber.replace(/ /g,"+")+
          "&admissno="+Admissno.replace(/ /g,"+"); 
  DFrameLink(linkurl,0,20,930,550);
}
function DepartureLink(RowNo,ColNo,Casekeys) {
  Urnumber=t.rows[RowNo][colOBAURNO];
  Admissno=t.rows[RowNo][colOUTPATE];
  LinkedEnc=t.rows[RowNo][colALENENCT];
  ReferralNo=t.rows[RowNo][colALREVISN];
  ReferralDep=t.rows[RowNo][colALREDEPT];
  CollectingEnc=t.rows[RowNo][colOTHECENC];
  ConfirmPMI=t.rows[RowNo][colCONFRPMI];
  SlotDuration=t.rows[RowNo][colSLOTDURN];
  if (ConfirmPMI == "1") {
    alert("Function not available\n" +
          "Confirm PMI date less than clinic date.");
    return;
  }
  if (t.rows[RowNo][colSTATNAME]=="DNA") {
    alert("Departure Time Can't be Entered For DNA");
    return;
  }
  if(document.getElementById("show_refxwarn") && t.rows[RowNo][13]=="1" &&
     document.getElementById("showcpmi")) {
     if(document.getElementById("showcpmi").value=="1" ||
        document.getElementById("showcpmi").value=="2") {
        if(document.getElementById("show_refxwarn").value=="1") {
          if(t.rows[RowNo][56] == "RefExpired") {
             var exdat=GetFullDateString(t.rows[RowNo][57]);
             alert("Referral expired on " + exdat);
          }
          if(t.rows[RowNo][56] == "RefExpiring") {
             var exdat=GetFullDateString(t.rows[RowNo][57]);
             alert("Referral will expire on " + exdat);
          }
        }

     }
  }
  if (!isWhitespace(ReferralNo) && CollectingEnc=="1"){
    if (isWhitespace(LinkedEnc)) {
      SetCookie("SlotTimeAllocCookie",SlotDuration);
      SetCookie("CheckInTimeCookie",Urnumber + "|" +
                                       Admissno + "|" +
                                       RowNo + "|" +
                                       ColNo + "|" +
                                       Casekeys);
      SetCookie("TimeSeenOnlyCookie",Urnumber + "|" +
                                       Admissno + "|" +
                                       RowNo + "|" +
                                       ColNo + "|" +
                                       Casekeys);
      SetCookie("DepartureTimeCookie",Urnumber + "|" +
                                       Admissno + "|" +
                                       RowNo + "|" +
                                       ColNo + "|" +
                                       Casekeys);

      if (document.SelectPeriod.deprtred != undefined) {
        SetCookie("DeprtRedCookie",Admissno.replace(/ /g,"+"));
      }

      linkUrl="allweb03.pbl?reportno=13&template=001" +
              "&urnumber=" + Urnumber.replace(/ /g,"+") +
              "&admissno=" + ReferralNo.replace(/ /g,"+") +
              "&deptcode=" + ReferralDep.replace(/ /g,"+") +
              "&bulkenck=" + ReferralNo.replace(/ /g,"+") +
              Admissno.replace(/ /g,"+") +
              "&shwupdat=1";
      Left=(document.body.clientWidth-900)/2;
      DFrameLink(linkUrl,0,Left,930,550);
      return;
    } 
    else {
      if (confirm("Linked contacts exist for this appointment.\n" +
                 "OK to enter additional contacts, Cancel to abort")) {
          SetCookie("SlotTimeAllocCookie",SlotDuration);

            if (document.SelectPeriod.deprtred != undefined) {
              SetCookie("DepartureTimeCookie",Urnumber + "|" +
                                       Admissno + "|" +
                                       RowNo + "|" +
                                       ColNo + "|" +
                                       Casekeys);
            }

        linkUrl="allweb03.pbl?reportno=1&template=009" +
                "&urnumber=" + Urnumber.replace(/ /g,"+") +
                "&admissno=" + ReferralNo.replace(/ /g,"+") +
                "&deptcode=" + ReferralDep.replace(/ /g,"+") +
                "&bulkenck=" + ReferralNo.replace(/ /g,"+") +
                Admissno.replace(/ /g,"+")
        Left=(document.body.clientWidth-900)/2;
        DFrameLink(linkUrl,0,Left,930,550)
        return;
      } else {
        return;
      }
    }
  }
  linkurl="outweb02.pbl?reportno=03&template=003&deptflag=1" +
          "&urnumber=" + Urnumber.replace(/ /g,"+") +
          "&admissno="+Admissno.replace(/ /g,"+"); 
  DFrameLink(linkurl,0,20,930,500);
} 
function TimeSeenLink(RowNo,ColNo,Casekeys) {
  Urnumber=t.rows[RowNo][colOBAURNO];
  Admissno=t.rows[RowNo][colOUTPATE];
  Casekeys=t.rows[RowNo][colCASEKEYS];
  Status=t.rows[RowNo][colOBASTAT];
  ReferralNo=t.rows[RowNo][colALREVISN];
  ReferralDep=t.rows[RowNo][colALREDEPT];
  ClaimNo=t.rows[RowNo][colDISPCLMN];
  UsingMedClaims=t.rows[RowNo][colUMEDFLAG];
  CollectingEnc=t.rows[RowNo][colOTHECENC];
  LinkedEnc=t.rows[RowNo][colALENENCT];
  VisitType = t.rows[RowNo][colOBAVISIT];
  ConfirmPMI=t.rows[RowNo][colCONFRPMI];
  //UsingCheckInPage=t.rows[RowNo][colOTHECPAG];
  UsingCheckInPage='0';  // Not for Wa Health
  SlotDuration=t.rows[RowNo][colSLOTDURN];
  if (ConfirmPMI == "1") {
    alert("Function not available\n" +
          "Confirm PMI date less than clinic date.");
    return;
  }
  if(document.getElementById("show_refxwarn") && t.rows[RowNo][13]=="1" &&
     document.getElementById("showcpmi")) {
     if(document.getElementById("showcpmi").value=="1" ||
        document.getElementById("showcpmi").value=="2") {
        if(document.getElementById("show_refxwarn").value=="1") {
          if(t.rows[RowNo][56] == "RefExpired") {
             var exdat=GetFullDateString(t.rows[RowNo][57]);
             alert("Referral expired on " + exdat);
          }
          if(t.rows[RowNo][56] == "RefExpiring") {
             var exdat=GetFullDateString(t.rows[RowNo][57]);
             alert("Referral will expire on " + exdat);
          }
        }

     }
  }
  if (!isWhitespace(ReferralNo) && CollectingEnc=="1" && CollectContactOpTimeSeen){
    if (isWhitespace(LinkedEnc)) {
        SetCookie("SlotTimeAllocCookie",SlotDuration);
        SetCookie("CheckInTimeCookie",Urnumber + "|" +
                                       Admissno + "|" +
                                       RowNo + "|" +
                                       ColNo + "|" +
                                       Casekeys);
        SetCookie("TimeSeenOnlyCookie",Urnumber + "|" +
                                       Admissno + "|" +
                                       RowNo + "|" +
                                       ColNo + "|" +
                                       Casekeys);

        if (document.SelectPeriod.deprtred != undefined) {
          SetCookie("DeprtRedCookie",Admissno.replace(/ /g,"+"));

//        SetCookie("DepartureTimeCookie",Urnumber + "|" +
//                                     Admissno + "|" +
//                                     RowNo + "|" +
//                                     ColNo + "|" +
//                                     Casekeys);
           }

      linkUrl="allweb03.pbl?reportno=13&template=001" +
              "&urnumber=" + Urnumber.replace(/ /g,"+") +
              "&admissno=" + ReferralNo.replace(/ /g,"+") +
              "&deptcode=" + ReferralDep.replace(/ /g,"+") +
              "&bulkenck=" + ReferralNo.replace(/ /g,"+") +
              Admissno.replace(/ /g,"+") +
              "&shwupdat=1&visittyp="+VisitType.replace(/ /g,"+");
       Left=(document.body.clientWidth-900)/2
       DFrameLink(linkUrl,0,Left,930,550)
       return;
     } 
     else {
       if (confirm("Linked contacts exist for this appointment.\n" +
                   "OK to enter additional contacts, Cancel to attend")) {
         SetCookie("SlotTimeAllocCookie",SlotDuration);
         linkUrl="allweb03.pbl?reportno=1&template=009" +
                 "&urnumber=" + Urnumber.replace(/ /g,"+") +
                 "&admissno=" + ReferralNo.replace(/ /g,"+") +
                 "&deptcode=" + ReferralDep.replace(/ /g,"+") +
                 "&bulkenck=" + ReferralNo.replace(/ /g,"+") +
                 Admissno.replace(/ /g,"+")

          if (document.SelectPeriod.deprtred != undefined) {

//          SetCookie("DepartureTimeCookie",Urnumber + "|" +
//                                     Admissno + "|" +
//                                     RowNo + "|" +
//                                     ColNo + "|" +
//                                     Casekeys);

          }


         Left=(document.body.clientWidth-900)/2
         DFrameLink(linkUrl,0,Left,930,550)
         return;
       } else {
         if (document.SelectPeriod.deprtred != undefined) {
           SetCookie("DeprtRedCookie",Admissno.replace(/ /g,"+"));
         }

         linkurl="outweb02.pbl?reportno=03&template=003" +
                 "&urnumber=" + Urnumber.replace(/ /g,"+") +
                 "&admissno="+Admissno.replace(/ /g,"+"); 
         DFrameLink(linkurl,0,20,930,500);
         return;
       }
     }
  }
  if (t.rows[RowNo][colSTATNAME]=="DNA") {
    alert("Time Seen Can't be Entered For DNA");
    return;
  }
  if (setRemoteTimeSeen) {
    RemoteTimeSeen(Urnumber,Admissno,RowNo,ColNo,Casekeys);
  }
  else {
    if(t.columns[ColNo][6]=="TimeSeenOnly") {
      linkurl="outweb02.pbl?reportno=03&template=023" +
              "&urnumber=" + Urnumber.replace(/ /g,"+") +
              "&admissno="+Admissno.replace(/ /g,"+"); 
      DFrameLink(linkurl,0,20,730,250);
    } else {
      linkurl="outweb02.pbl?reportno=03&template=003" +
              "&urnumber=" + Urnumber.replace(/ /g,"+") +
              "&admissno="+Admissno.replace(/ /g,"+"); 
      DFrameLink(linkurl,0,20,930,500);
    }
  }
}
function CheckInLink(RowNo,ColNo,Casekeys) {
  Urnumber=t.rows[RowNo][colOBAURNO];
  Admissno=t.rows[RowNo][colOUTPATE];
  Casekeys=t.rows[RowNo][colCASEKEYS];
  ReferralNo=t.rows[RowNo][colALREVISN];
  CollectingEnc=t.rows[RowNo][colOTHECENC];
  ConfirmPMI=t.rows[RowNo][colCONFRPMI];
  UsingCheckInPage=t.rows[RowNo][colOTHECPAG];
  //UsingCheckInPage='0';  // Not for Wa Health
  if (isWhitespace(ReferralNo) && CollectingEnc=="1"){
    alert("No referral exists for this clinic.");
  }
  if (ConfirmPMI == "1") {
    alert("Function not available\n" +
          "Confirm PMI date less than clinic date.");
    return;
  }
  if (UsingCheckInPage=="1") {
    if (!isWhitespace(t.rows[RowNo][colOTBBASTM])) {
      alert("Error: Patient has already been seen");
      return;
    }
    if (t.rows[RowNo][colOBASTAT]=="5") {
      alert("Error: Appointment has been Non-Attended");
      return;
    }
  }
  if (t.rows[RowNo][colINTERNAM]=="DNA") {
    alert("Check In Time Can't be Entered For DNA");
    return;
  } 
  if(document.getElementById("show_refxwarn") && t.rows[RowNo][13]=="1" &&
     document.getElementById("showcpmi")) {
     if(document.getElementById("showcpmi").value=="1" ||
        document.getElementById("showcpmi").value=="2") {
        if(document.getElementById("show_refxwarn").value=="1") {
          if(t.rows[RowNo][56] == "RefExpired") {
             var exdat=GetFullDateString(t.rows[RowNo][57]);
             alert("Referral expired on " + exdat);
          }
          if(t.rows[RowNo][56] == "RefExpiring") {
             var exdat=GetFullDateString(t.rows[RowNo][57]);
             alert("Referral will expire on " + exdat);
          }
        }

     }
  }
  if (UsingCheckInPage=="1") {
    linkurl="outweb02.pbl?reportno=03&template=021" +
           "&urnumber=" + Urnumber.replace(/ /g,"+") +
           "&admissno="+Admissno.replace(/ /g,"+"); 
    DFrameLink(linkurl,0,20,930,500);
    return;
  } 
  el = document.getElementById("rv"+RowNo+"-"+ColNo)
  val =el.value
  el.value = updateTimeSlot(Urnumber,Admissno,3,val,Casekeys);
  t.rows[RowNo][colOTBBCITM]=el.value;  // Set check in time col value
  if (document.getElementById('chkinrld') != null) {
    SetCookie("checkInReloadCookie",
               document.getElementById("PatientSearchName").value);
    location.reload();
    return;
  }
}
function PatientLink(RowNo,ColNo,Casekeys){
  Urnumber=t.rows[RowNo][colOBAURNO];
  Admissno=t.rows[RowNo][colOUTPATE];
  Casekeys=t.rows[RowNo][colCASEKEYS];
  Status=t.rows[RowNo][colOBASTAT];
  ReferralNo=t.rows[RowNo][colALREVISN];
  ReferralDep=t.rows[RowNo][colALREDEPT];
  ClaimNo=t.rows[RowNo][colDISPCLMN];
  UsingMedClaims=t.rows[RowNo][colUMEDFLAG];
  CollectingEnc=t.rows[RowNo][colOTHECENC];
  LinkedEnc=t.rows[RowNo][colALENENCT];
  RefExpiry =t.rows[RowNo][colREFEXPIRY];

  if (Status==0)  { 
    location.href="outweb02.pbl?reportno=03&template=012&urnumber="+Urnumber;
    return;
  } 
  if (Status==7) { 
    alert("This slot is unavailable");
    return;
  }
  if(Status==1 || Status==4 || Status==5) { 
    if (isWhitespace(ReferralNo)) {
      location.href="outweb02.pbl?reportno=03&template=001&casekeys="+Casekeys;
      return;
    } 
    else {
      if (UsingMedClaims == 1 && CollectingEnc!="1") {
        linkUrl="hicweb01.pbl?reportno=3&template=001" +
                "&urnumber=" + Urnumber.replace(/ /g,"+") +
                "&admissno=" + Admissno.replace(/ /g,"+") +
                "&refrnumb=" + ReferralNo.replace(/ /g,"+") +
                "&deptcode=" + ReferralDep.replace(/ /g,"+") +
                "&clmnnumb=" + ClaimNo.replace(/ /g,"+");
      } 
      else {
        linkUrl="allweb02.pbl?reportno=2&template=003" +
                "&urnumber=" + Urnumber.replace(/ /g,"+") +
                "&admissno=" + ReferralNo.replace(/ /g,"+") +
                "&deptcode=" + ReferralDep.replace(/ /g,"+") +
                "&clmnnumb=" + ClaimNo.replace(/ /g,"+");

          if(document.getElementById("showcpmi").value == "1") {
            if(RefExpiry == "RefExpired") {
              linkUrl+="&exprflag=0";
            }
            if(RefExpiry == "RefExpiring") {
              linkUrl+="&exprflag=2";
            }
          }
      }
      Left=(document.body.clientWidth-900)/2;
      DFrameLink(linkUrl,0,Left,930,550);
      return;
    }
  } 
}
function PatientSelected() {
  ReturnFunction="";
  UpdateStatus.action="outweb02.pbl"
  UpdateStatus.reportno.value="5"
  UpdateStatus.template.value="1"
  UpdateStatus.submit()
}
function SlotPatientSearch() {
  ReturnFunction=PatientSelected
  ReturnExitFunction=AbortPatientSearch
  ReturnAdm=UpdateStatus.dummyadm
  ReturnNam=UpdateStatus.patfname
  ReturnUrn=UpdateStatus.urnumber
  link ='patweb90.pbl?reportno=1&template=200'
  height=document.body.clientHeight
  width=document.body.clientWidth - 50
  DFrameLink(link,0,25,width,height) 
} 
function AbortPatientSearch () {
     Casekeys=UpdateStatus.casekeys.value
     cancelSlot(Casekeys) 
} 
function SlotLink(RowNo,ColNo,Casekeys){
    SlotStat=t.rows[RowNo][colOBASTAT];
    if (SlotStat==1 || SlotStat==4 || SlotStat==5) {
       location.href="outweb02.pbl?reportno=3&template=1" +
                     "&casekeys=" + Casekeys.replace(/ /g,"+")     }  
    else {
       UpdateStatus.casekeys.value=Casekeys
       reserveSlot(Casekeys,"","","",SlotPatientSearch)
 } 
}
function RemoteCheckIn(Urnumber,Admissno,RowNo,ColNo,Casekeys) {
  if (!isWhitespace(t.rows[RowNo][colOTBBCITM])) {
    return;
  }
  if (t.rows[RowNo][colINTERNAM]=="DNA") {
    alert("Check In Time Can't be Entered For DNA");
  }
  el = document.getElementById("rv"+RowNo+"-"+ColNo)
  val =el.value
  el.value =  updateTimeSlot(Urnumber,Admissno,3,val,Casekeys);
}
function RemoteTimeSeen(Urnumber,Admissno,RowNo,ColNo,Casekeys) {
  if (!isWhitespace(t.rows[RowNo][colOTBBASTM])) {
    return;
  }
  else if (t.rows[RowNo][colINTERNAM]=="DNA") {
    alert("Check In Time Can't be Entered For DNA");
  }
  el = document.getElementById("rv"+RowNo+"-"+ColNo)
  val =el.value
  el.value =  updateTimeSlot(Urnumber,Admissno,4,val,Casekeys);
}
function RemoteDeparture(Urnumber,Admissno,RowNo,ColNo,Casekeys) {
  if (!isWhitespace(t.rows[RowNo][colOTBBDPTM])) {
    return;
  }
  el = document.getElementById("rv"+RowNo+"-"+ColNo)
  val =el.value
  el.value = updateTimeSlot(Urnumber,Admissno,5,val,Casekeys);
}
//------------------------------------------------------------------------
//             Function to Update Check-In,Time Seen
//------------------------------------------------------------------------
function updateTimeSlot(Urnumber,Admissno,Updttime,val,caseKeys) {
  var serverURL = "outweb02.pbl?reportno=9&urnumber="+Urnumber+
                   "&admissno="+Admissno+
                   "&updttime="+Updttime+
                   "&updatety=3"+
                   "&casekeys="+caseKeys;
  if(VariableNameExists('SetSMRFlag')) {
    if(SetSMRFlag==true) {
      serverURL += "&scannedm=1";
    }
  }
  serverURL=serverURL.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    j=0
    for (var i=3; i < updateTimeSlot.arguments.length; i++) {
       if (typeof(updateTimeSlot.arguments[i]) != 'function') {
        j++
        updateTimeSlot.arguments[i].value=ReturnValue[j] 
      } 
    }
    return ReturnValue[0];
  }
  else {
    return val;
  }
} 
//---------------------------------------------------------------
//                  Function for updating DNA
//----------------------------------------------------------------
function updateDNA(caseKeys)
{
var serverURL = "../cgi-bin/outweb02.pbl?reportno=9&"+
"&casekeys="+caseKeys+"&updatety=4";
serverURL=serverURL.replace(/ /g,"+")
var returnValue = RSExecute(serverURL);
var flag=returnValue.status
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|"); 
    j=0
    for (var i=3; i < updateDNA.arguments.length; i++) {
       if (typeof(updateDNA.arguments[i]) != 'function') {
         j++
         updateDNA.arguments[i].value=ReturnValue[j]
       }
    }
  }
  else {
//        alert("given parameters are not correct")
  }
  return flag;
}
 
function FormatButton(i,j) { 
  slotstatus=t.rows[i][colOBASTAT];
  spc=t.rows[i][t.columns[2][2]];
  if (slotstatus==0 || slotstatus==1 || slotstatus==4 || slotstatus==5) { 
    if (spc==""){
      TableString[TableString.length] = "<input type=text size=0 name=Text" + t.columns[j][6] + " readonly"+
                     " style=\"border:0;background-color:transparent;\""+
                     " value=\" \">"; 
    }
    else {
      TableString[TableString.length] = "<input type=button name=in class=CheckButton "+
                     " onclick=\"PatientTableLink(" + i + "," + j + ");\">" +
                     "<input id=\"rv"+i+"-"+j+"\" type=text size=3 " +
                     "name=Text" + t.columns[j][6] + " readonly"+
                     " style=\"border:0;background-color:transparent;" +
                     "height:20px;width:35px;\""+
                     " value="+t.rows[i][t.columns[j][2]]+">"; 
    }
  }                      
} 
function FormatButtonWide(i,j) {
  slotstatus=t.rows[i][colOBASTAT];
  spc=t.rows[i][t.columns[2][2]];
  if (slotstatus==0 || slotstatus==1 || slotstatus==4 || slotstatus==5) {
    if (spc==""){
      TableString[TableString.length] = "<input type=text size=0 name=Text" + t.columns[j][6] + " readonly"+
                     " style=\"border:0;background-color:transparent;\""+
                     " value=\" \">"; 
    }
    else {
      TableString[TableString.length] = "<input type=button name=in class=CheckButton "+
                     " onclick=\"PatientTableLink(" + i + "," + j + ");\">"+
                     "<input id=\"rv"+i+"-"+j+"\" type=text size=3 " +
                     "name=Text" + t.columns[j][6] + " readonly"+
                     " style=\"border:0;background-color:transparent;";
      TableString[TableString.length] = "height:20px;width:65px;\""
//
     if(t.columns[j][11]!=undefined) {                     // Add a class
       if(!isWhitespace(t.rows[i][t.columns[j][11]])) {
         TableString[TableString.length] = " class=" +
                                           t.rows[i][t.columns[j][11]]  ;
       }
     }
//
     TableString[TableString.length] = " value='"+t.rows[i][t.columns[j][2]]+"'>"; 
    }
  }
}
function FormatButtonText(i,j) {
  slotstatus=t.rows[i][colOBASTAT];
  spc=t.rows[i][t.columns[2][2]];

  if (slotstatus==0 || slotstatus==1 || slotstatus==4 || slotstatus==5) {
    /*
    var background = "background-image: url('../images/paper.png')";

    if (CompatibilityMode) {
      background = "background: url('../images/paper.png')";
    }
    */
    var background = "background-color:transparent";

    if (spc==""){
      TableString[TableString.length] = "<input type=text size=0 name=Text" + t.columns[j][6] + " readonly"+
                     " style=\"border:0;background-color:transparent;\""+
                     " value=\" \">";
    }
    else {
      TableString[TableString.length] = "<input type=button name=in class=CheckButton "+
                     " onclick=\"PatientTableLink(" + i + "," + j + ");\">"
      TableString[TableString.length] = "<input type=text size=3 " +
                     "id=\"rv"+i+"-"+j+"\" " +
                     "name=Text" + t.columns[j][6] + " readonly"+
                     " style=\"border:0;" + background +
                     ";height:15px;width:30px;\""+
                     " value='"+t.rows[i][t.columns[j][2]].substr(0,5)+"'>" +
                     "<br>" + t.rows[i][t.columns[j][2]].substr(6)
    }
  }
}

function FormatImage(Value,Name) { 
   if (UseSprites) return newFormatImage(Value,Name)
   return oldFormatImage(Value,Name)
}
function oldFormatImage(Value,Name) { 
     return("<img border=0 src='../images/" + Value + "' alt='" + Name + "'" +
            " title='" + Name + "'>"); 
} 
function newFormatImage(Value,Name) { 
     className=Value.replace(/\..*/,"")
     return("<span class='SpriteIcon " + className + "' title='" + Name + "'></span>"); 
} 
function FormatTime(datetime) { 
   time = datetime.substr(8,5); 
   return(time); 
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
   if (yyyy!="    ") { 
     return(dd + " " + mth3 + " " + yyyy + " at " + time); } 
   else { 
     return(""); } 
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
   return(dd + " " + mth3 + " " + yyyy ); 
} 
function TableOutput(OrderColumn,AscDsc) { 
  var sAgentString = window.navigator.userAgent;

  if ( (sAgentString.indexOf("MSIE 6.0") >= 1 ||
        sAgentString.indexOf("MSIE 7.0") >= 1)
       && sAgentString.indexOf("compatible") >= 1 )
  {
    CompatibilityMode = true;
  }

  lastOrderColumn=OrderColumn; 
  if (t.rows.length != 0 ) { 
    t.sortTable(OrderColumn,AscDsc); 
    TableHeading(OrderColumn); 
    TableBody(); 
    TableEnding(); 
  } 
  else {
    TableEmpty();
    TableEnding();
  }
}
function TableEmpty() {
  TableString = [];
  TableString[TableString.length] = "<div id=HeadingDivision style='overflow-x:hidden'>" +
             "<table style=\"table-layout:fixed\"" +
             " border=" + t.Border +
             " cellspacing=" + t.Cellspacing +
             " cellpadding=" + t.Cellpadding +
             " width=" + t.Width +
             " align=" + t.Align + " >"+
             "<tr style='height:30px'>" +
             "<td class=HeadingCell style='width:100px;'>" +
             "Selected : <span id=RecordCount>" + t.rows.length + "</span></td>" +                        
             "<td class=HeadingCell align=center style='border-left:0px;border-left:0px;'>" +
             "No Matching Appointments</td>" +
             "<td class=HeadingCell align=center style='width:30px;'>" +
             "<a href='javascript:SortTablePrint()'>" +
             "<img src='../images/PrinterIcon.gif' border=0 align=absmiddle"+
             " alt='Print Page'>"+
             "</a>" +
             "</td></tr></table></div>"+
             "<div id=BodyDivision style='overflow-x:hidden'></div>" 
}
function TableHeading(OrderColumn) {
  TableString = [];
  TableString[TableString.length] = "<div id=HeadingDivision style='overflow-x:hidden'>"; 
  TableString[TableString.length] = "<table style=\"table-layout:fixed\"" + 
                 " border=" + t.Border + 
                 " cellspacing=" + t.Cellspacing + 
                 " cellpadding=" + t.Cellpadding + 
                 " width=" + t.Width + 
                 " align=" + t.Align + " >"; 
 
  TableString[TableString.length] = "<tr style='height:30px'>" +  
             "<td class=HeadingCell style='width:100px;'>" + 
             "Selected : <span id=RecordCount>" + t.rows.length + "</span></td>" +                        
             "<td class=HeadingCell align=center style='border-left:0px;border-left:0px;'>" + 
             document.title + "</td>" + 
             "<td class=HeadingCell align=center style='width:30px;'>" + 
             "<a href='javascript:SortTablePrint()'>" + 
             "<img src='../images/PrinterIcon.gif' border=0 align=absmiddle"+ 
             " alt='Print Page'>"+ 
             "</a>" + 
             "</td></tr></table>" 
  
  if (printWidth.length==0) {  // Save the widths on the first pass for printing
    for(var i = 0; i < t.columns.length; i++) {
       printWidth[i]=t.columns[i][7] }
  }
  if (isFinite(t.columns[0][7])) {
    TotalWidth=0;
    for(var i = 0; i < t.columns.length; i++) {
       TotalWidth+=parseInt(t.columns[i][7],10) }
    for(var i = 0; i < t.columns.length; i++) {
       t.columns[i][7]=(Math.round(1000*(parseInt(t.columns[i][7],10)/TotalWidth))/10)+'%' }
  }

  TableString[TableString.length] = "<table style=\"table-layout:fixed\"" + 
                " border=" + t.Border + 
                " cellspacing=" + t.Cellspacing + 
                " cellpadding=" + t.Cellpadding + 
                " width=" + t.Width + 
                " align=" + t.Align + " >"; 
  TableString[TableString.length] = "<tr height=" + t.HeadingHeight + ">"; 
  for(var i = 0; i < t.columns.length; i++) { 
    if (printFormat) t.columns[i][7]=printWidth[i];
    TableString[TableString.length] = "<td class=HeadingCell align=" + t.columns[i][4] +  
                   " width=" + t.columns[i][7] + " >" ; 
    if (t.columns[i][3] == -1) { 
      if (OrderColumn == i) { TableString[TableString.length] = "<b>" } 
      TableString[TableString.length] = t.columns[i][0] + "</td>"; } 
    else { 
      TableString[TableString.length] = "<a href='javascript:onClick=TableSort(" + i + ")'>";  
      if (OrderColumn == i) { TableString[TableString.length] = "<b>" } 
      TableString[TableString.length] = t.columns[i][0] + "</a></td>"; } 
  } 
  TableString[TableString.length] = "</tr>"; 
  TableString[TableString.length] = "</table>"; 
  TableString[TableString.length] = "</div>"; 
  TableString[TableString.length] = "<div id=BodyDivision style='overflow-x:hidden'>"; 
  TableString[TableString.length] = "<table style=\"table-layout:fixed\" border=" + t.Border + 
                 " cellspacing=" + t.Cellspacing + 
                 " cellpadding=" + t.Cellpadding + 
                 " width=" + t.Width + 
                 " align=" + t.Align + " >"; 
}
function TableBody() {
 outputCount=0;
 for(var i = 0; i < t.rows.length; i++) { 
  if (TableFilter(t.rows[i])){
   outputCount++;
   RowClass=getRowClass(outputCount,t.rows[i][colHIGHCOLR],t.rows[i][colCHARTREV]);
   TableString[TableString.length] = "<tr height=" + t.RowHeight + " class=" + RowClass + ">" ;
   for(var j = 0; j < t.columns.length; j++) { 
     if (CompatibilityMode) {
       TableString[TableString.length] = "<td align='" + t.columns[j][4] + "'";
     } else {
       TableString[TableString.length] = "<td align='" + t.columns[j][4] + "'" +
         " style='padding:0px 5px'";
     }
     TableString[TableString.length] = " width=" + t.columns[j][7]; 
//
     if(t.columns[j][11]!=undefined) {
       if(!isWhitespace(t.rows[i][t.columns[j][11]])) {
         TableString[TableString.length] = " class=" +
                                           t.rows[i][t.columns[j][11]]  ;
       }
     }
//
     TableString[TableString.length] = ">" ; 
     ImgString = t.columns[j][5]; 
     spc=t.rows[i][t.columns[2][2]];  
     switch(t.columns[j][1]) { 
       case "Date" :   
         FormatIcon(i,j); 
         TableString[TableString.length] = FormatDate(t.rows[i][t.columns[j][2]]); 
         break; 
       case "DateTime" :   
         FormatIcon(i,j); 
         TableString[TableString.length] = FormatDateTime(t.rows[i][t.columns[j][2]]); 
         break; 
       case "Time" :   
         FormatIcon(i,j); 
         TableString[TableString.length] = FormatTime(t.rows[i][t.columns[j][2]]); 
         break; 
       case "ButtonLink":   
         FormatButton(i,j); 
         break; 
       case "ButtonLinkWide":   
         FormatButtonWide(i,j); 
         break; 
       case "ButtonLinkText":
         FormatButtonText(i,j);
         break;
       case "Image":   
         if (t.columns[j][5] == "") { 
           ImageString=t.rows[i][t.columns[j][2]]; 
         } 
         else if(t.rows[i][colFORMATNM] != ""){       
           addAlertIcons(i)
           TableString[TableString.length] = "&nbsp;"
         }
         break; 
       default    :    
         FormatIcon(i,j); 
         TableString[TableString.length] = t.rows[i][t.columns[j][2]]; 
         break; 
     } 
     if (isWhitespace(t.rows[i][t.columns[j][2]])) { 
       TableString[TableString.length] = "&nbsp;" } 
     TableString[TableString.length] = "</td>" ; 
     } 
   TableString[TableString.length] = "</tr>" ; 
   } 
  } 
}
function TableEnding() {
  TableString[TableString.length] = "</table></div>"; 

  // The following are defined in the html
  var HeadingSection = document.getElementById('HeadingSection');
  var TableLocation = document.getElementById('TableLocation');

  // unload the array into continuous html render
  if (TableString.join) {  // if join method is available
    TableLocation.innerHTML = TableString.join("");
  }
  else {
    var TableStringX="";
    for (var i=0; i < TableString.length; i++) TableStringX+=TableString[i];
    TableLocation.innerHTML = TableStringX;
  }

  document.getElementById('RecordCount').innerHTML=outputCount;

  var HeadingDivision = document.getElementById('HeadingDivision');
  var BodyDivision    = document.getElementById('BodyDivision');

  if (!scrollTableBody) {
     HeadingDivision.style.overflow="auto";
     BodyDivision.style.overflow="visible";
     BodyDivision.style.height="";
     return;
  }

  _setListHeight();

  _setVerticalScrollbar();
}
function _setListHeight() {
  var HeadingSection = document.getElementById('HeadingSection');
  var HeadingDivision = document.getElementById('HeadingDivision');
  var BodyDivision    = document.getElementById('BodyDivision');
  var height = document.body.clientHeight;

  if (HeadingSection) {
    var secHeight = HeadingSection.clientHeight || HeadingSection.offsetHeight;
    height -= secHeight;
  }
  else {
    TableLocation.style.top = '0px';
  }

  height -= HeadingDivision.clientHeight;

  // Set the height of the table rows section (<div id=BodyDivision>)
  if (window.navigator.userAgent.indexOf("MSIE") != -1) {  // IE Compatibility
    BodyDivision.style.height = height - 2 + 'px';
  }
  else {  // Chrome, Firefox, Edge & other browsers
    BodyDivision.style.height = height - 20 + 'px';
  }
}
function _setVerticalScrollbar() {
  var HeadingDivision = document.getElementById('HeadingDivision');
  var BodyDivision    = document.getElementById('BodyDivision');

  // Show the vertical scrollbar accordingly

  if (BodyDivision.scrollHeight > BodyDivision.clientHeight) {
    // List overflows (i.e. vertical scrollbar visible)
    HeadingDivision.style.overflowY = 'scroll';  // force vertical scrollbar
                                                 // on list heading section
  }
  else {
    // List does NOT overflow (i.e. no vertical scrollbar in BodyDivision)
    if (window.navigator.userAgent.indexOf("MSIE 7.0") >= 1) {
      // Since IE 8 will always show the vertical scrollbar for the BodyDivision
      // (even when scrolling is not needed) we need to also show the
      // vertical scrollbar for HeadingDivision so columns line up.
      HeadingDivision.style.overflowY = 'scroll';
    }
    else {
      HeadingDivision.style.overflowY = 'hidden';
    }
  }
}

function TableSort(OrderColumn) {
 if ( lastOrderColumn == OrderColumn ) {
   if (AscDsc==1) {AscDsc=2;} else {AscDsc=1;}
 }
 else {
   AscDsc=1;
 }

 TableOutput(OrderColumn,AscDsc); 
} 
//------------------------------------------------------------ 
// Print Table from Window 
//------------------------------------------------------------ 
function SortTablePrint() { 
  if (window.navigator.userAgent.indexOf("MSIE") >=1 ) {  // IE6 and above
    HeadingDivision.style.overflowY = "hidden";
    BodyDivision.style.overflowY="hidden";
    print();
    HeadingDivision.style.overflowY = "scroll";
    BodyDivision.style.overflowY="scroll";
    TableSize();
  }
  else {
    SaveHeight=BodyDivision.style.height;
    BodyDivision.style.height="auto";
    print();
    BodyDivision.style.height=SaveHeight;
  }
} 
//========================================================================
// Functions for adding CMBS items
//========================================================================
function TypeDesc1() {
  var p=document.UpdateForm;
  if (p.otbit001.value==" 0") {
    p.otbit001.value="MBS";
  } else {
    p.otbit001.value="AMA";
  }
}
function TypeDesc2() {
  var p=document.UpdateForm;
  if (p.otbit004.value==" 0") {
    p.otbit004.value="MBS";
  } else {
    p.otbit004.value="AMA";
  }
}
function TypeDesc3() {
  var p=document.UpdateForm;
  if (p.otbit007.value==" 0") {
    p.otbit007.value="MBS";
  } else {
    p.otbit007.value="AMA";
  }
}
function TypeDesc4() {
  var p=document.UpdateForm;
  if (p.otbit010.value==" 0") {
    p.otbit010.value="MBS";
  } else {
    p.otbit010.value="AMA";
  }
}
function TypeDesc5() {
  var p=document.UpdateForm;
  if (p.otbit013.value==" 0") {
    p.otbit013.value="MBS";
  } else {
    p.otbit013.value="AMA";
  }
}
function DisplayXCmbs() {
  if (document.UpdateForm.clinindc.value=="P" &&
      document.UpdateForm.ibcnumci.value=="1" &&
      document.UpdateForm.otmaumci.value=="1") {
    ShowXCmbs.innerHTML=extracmbs.innerHTML;
  } else {
    ShowXCmbs.innerHTML="";
  }
}
function DisplayXCmbsAttend() {
  if (document.UpdateForm.clinindc.value=="P" &&
      document.UpdateForm.ibcnumci.value=="1" &&
      document.UpdateForm.otmaumci.value=="1") {
    ShowXCmbs.innerHTML=extracmbs.innerHTML;
  } else {
    ShowXCmbs.innerHTML=seenbydoctor.innerHTML;
    if(document.UpdateForm.othekdoc.value=="Y") {
      document.UpdateForm.outbb031.className="Mandatory";
      if(isWhitespace(UpdateForm.outbb031.value)) {
        if(document.UpdateForm.s_othedefd.value=="1") {
          alert("Seen By default doctor code on clinic master is invalid. \n" +
                "Clinic Master must be updated.");
          return;
        }
        UpdateForm.outbb031.value=UpdateForm.c_othedefd.value;
        UpdateForm.name_outbb031.value=UpdateForm.n_othedefd.value;
      }
    }
  }
}
function TemplateCmbs() {
  if (document.UpdateForm.cmbsload.checked==true) {
    OutputCMBSTemp(UpdateForm.cmbstemp,UpdateForm.dateclin);
  }
}
//------------------------------------------------------------------
//  Validate an MBS item from the private practice item file
//------------------------------------------------------------------
function validatePMBS(ReturnCode,ReturnName,ReturnType,ReturnScod,ReturnEfdt,ReturnAmnt) {
  ReturnFunction="" ;
  ReturnName.value="";
  ReturnAmnt.value="";
  for (var i=6; i < validatePMBS.arguments.length; i++) {
    if (typeof(validatePMBS.arguments[i]) == 'function') {
      ReturnFunction=validatePMBS.arguments[i] }
    else {
      validatePMBS.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) {
    if(!isWhitespace(ReturnScod.value)) {
      alert(ReturnCode.title + " is Mandatory for " + ReturnScod.title);
      ReturnScod.value="";
      ReturnScod.focus();
    }
   return;
  }
  if (isWhitespace(ReturnType.value)) return;;
  var serverURL   = "../cgi-bin/allweb01.pbl?reportno=14" +
                    "&valdtype=" + ReturnType.value.replace(/ /g,"+") +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&valdscod=" + ReturnScod.value.replace(/ /g,"+") +
                    "&valdefdt=" + ReturnEfdt.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    ReturnAmnt.value=(ReturnValue[1])
    j=0
    for (var i=6; i < validatePMBS.arguments.length; i++) {
       if (typeof(validatePMBS.arguments[i]) != 'function') {
         j++
         validatePMBS.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.value="";
    ReturnScod.value="";
    ReturnCode.select();
    ReturnCode.focus();
    return false;
     }
}
//------------------------------------------------------------------
//  Output common CMBS item template (from private practice)
//------------------------------------------------------------------
function OutputCMBSTemp(ReturnCode,ReturnEfdt) {
  ReturnFunction="" ;
  for (var i=2; i < OutputCMBSTemp.arguments.length; i++) {
    if (typeof(OutputCMBSTemp.arguments[i]) == 'function') {
      ReturnFunction=OutputCMBSTemp.arguments[i] }
    else {
      OutputCMBSTemp.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL ="../cgi-bin/priweb05.pbl?reportno=8" +
                    "&valdtype=5" +
                    "&cmbstemp=" + ReturnCode.value.replace(/ /g,"+") +
                    "&valdefdt=" + ReturnEfdt.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    UpdateForm.otbit001.value=ReturnValue[0];
    UpdateForm.otbit002.value=ReturnValue[1];
    UpdateForm.otbit003.value=ReturnValue[2];
    UpdateForm.mbsdesc1.value=ReturnValue[3];
    UpdateForm.mbsamnt1.value=ReturnValue[4];
    UpdateForm.otbit004.value=ReturnValue[5];
    UpdateForm.otbit005.value=ReturnValue[6];
    UpdateForm.otbit006.value=ReturnValue[7];
    UpdateForm.mbsdesc2.value=ReturnValue[8];
    UpdateForm.mbsamnt2.value=ReturnValue[9];
    UpdateForm.otbit007.value=ReturnValue[10];
    UpdateForm.otbit008.value=ReturnValue[11];
    UpdateForm.otbit009.value=ReturnValue[12];
    UpdateForm.mbsdesc3.value=ReturnValue[13];
    UpdateForm.mbsamnt3.value=ReturnValue[14];
    UpdateForm.otbit010.value=ReturnValue[15];
    UpdateForm.otbit011.value=ReturnValue[16];
    UpdateForm.otbit012.value=ReturnValue[17];
    UpdateForm.mbsdesc4.value=ReturnValue[18];
    UpdateForm.mbsamnt4.value=ReturnValue[19];
    UpdateForm.otbit013.value=ReturnValue[20];
    UpdateForm.otbit014.value=ReturnValue[21];
    UpdateForm.otbit015.value=ReturnValue[22];
    UpdateForm.mbsdesc5.value=ReturnValue[23];
    UpdateForm.mbsamnt5.value=ReturnValue[24];
    j=0
    for (var i=2; i < OutputCMBSTemp.arguments.length; i++) {
       if (typeof(OutputCMBSTemp.arguments[i]) != 'function') {
         j++
         OutputCMBSTemp.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.select();
    return false }
}
//
function validateSDoc(MediPrac,ReturnCode,ReturnDesc) {
  if (isWhitespace(ReturnCode.value)) {
    ReturnDesc.value="";       // Clear description (Doctor's name)
    return;
  }

  if (isWhitespace(MediPrac.value)) {
     alert("No Medical Practice set up for this clinic.");
     MediPrac.focus();
     return;;  }

  for (var i=3; i < validateSDoc.arguments.length; i++) {
    if (typeof(validateSDoc.arguments[i]) == 'function') {
      ReturnFunction=validateSDoc.arguments[i] }
    else {
      validateSDoc.arguments[i].value=""; }  }

  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=63" +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&mediprac=" + MediPrac.value

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnDesc.value=ReturnValue[0];
    if (ReturnValue[1]==1)  {
       alert("Doctor is Inactive.");
       ReturnCode.select();
       ReturnCode.focus();
       return false; }
    }
  else {
    ReturnDesc.value="";       // Clear description (Doctor's name)
    ReturnCode.select();
    ReturnCode.focus();
    return false;
     }
}
//
function MPDoctorSearch(MediPrac,ReturnCode,ReturnName) {
  var PopUpFrameDoc = DFrameStart();
  if (isWhitespace(MediPrac.value)) 
  {
     alert("No Medical Practice set up for this clinic.");
     MediPrac.focus();
     return;
  }

  window.MediPrac=MediPrac;
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href="../cgi-bin/" +
                              "priweb01.pbl?reportno=2&template=7&pridc001="+
                               MediPrac.value + "&norecord=20";
  SearchFrameShow();
}
function DisplayCarer() {
  if (document.UpdateForm.otheccar.value=="1"){
    ShowCarer.innerHTML=sendcarer.innerHTML;
    if(document.UpdateForm.outbb065.value=="1") {
      document.UpdateForm.d_outbb065.checked=true;
    }
  } else {
    ShowCarer.innerHTML="";
  }
}
function SetCare() {
  if(document.UpdateForm.d_outbb065.checked==true) {
    document.UpdateForm.outbb065.value="1";
  } else {
    document.UpdateForm.outbb065.value="0";
  }
}
function DisplayIntrp() {
  if (document.UpdateForm.intrpreq.value=="1") {
    ShowIntrp.innerHTML=dispintrp.innerHTML;
  } else {
    ShowIntrp.innerHTML="";
  }
}

//
function SendLetter(theForm) {
  if(theForm.outbb047.value.substr(10,1) == "C") { // Ind 8 - Chart Only
    theForm.outbb067.selectedIndex=3;              // set send letter to N/A
    theForm.outbb067.className="Readonly";
    theForm.outbb067.disabled=true;
    theForm.outbb036.checked=false;
    theForm.outbb036.disabled=true;
  } else {
    if(theForm.outbb067.disabled==true) {         // Defalut send letter to 
       theForm.outbb067.selectedIndex=0;          // Blank when re enabled
    }
    theForm.outbb067.className="";
    theForm.outbb067.disabled=false;
    theForm.outbb067.className="";
    theForm.outbb036.disabled=false;
  }
  SendLetterDate(theForm);
}
//
function SendLetterDate(theForm) {
  if(theForm.outbb067.value=="1") {                // Yes Send Letter
    theForm.outbb066.className="Mandatory Date";
    theForm.outbb066.readOnly=false;
    if(isWhitespace(theForm.outbb066.value)) {     // Calculate Letter Date
      CalculateLetterDate(theForm)
    }
  } else {
    theForm.outbb066.className="Readonly Date";
    theForm.outbb066.value="";
    theForm.outbb066.readOnly=true;
  }
}
//
function EnableLetterFields(theForm) {
  theForm.outbb036.disabled=false;
  theForm.outbb067.disabled=false;
}
//
function CalculateLetterDate(theForm) {
  theForm.outbb066.value=theForm.dateclin.value;
  if(isWhitespace(theForm.clindate.value.substr(4,11))) {
    return;
  }
  AddSubtractDate(theForm.outbb066,theForm.othendps.value,"S");
  if(SetDateYYYYMMDD(theForm.outbb066.value) <=
     SetDateYYYYMMDD(theForm.currdate.value)) {
     theForm.outbb066.value=theForm.currdate.value;
//   AddSubtractDate(theForm.outbb066,"1","A");
  }
}
//
function showFundingSource(theForm) {
    i=theForm.outbb002.selectedIndex;
    ind=theForm.outbb002.options[i].value.substring(3,4)
    if (ind=="A") {
      FundingHeading.innerHTML=offdutyhd.innerHTML;
      FundingId.innerHTML=offdutyid.innerHTML;
    } else {
      if (ind=="P") {
        FundingHeading.innerHTML=fundinghd.innerHTML;
        FundingId.innerHTML=fundingid.innerHTML;
        theForm.pmsvx141.className="Mandatory";
      } else {
        FundingHeading.innerHTML=blanklabel.innerHTML;
        FundingId.innerHTML=blanklabel.innerHTML;
      }
    }
}
function OPDMessageLink(ur,vis) {
   linkurl="outweb09.pbl?reportno=02&template=001" +
           "&urnumber=" + ur.replace(/ /g,"+") +
           "&admissno=" + vis.replace(/ /g,"+");
   Left=(document.body.clientWidth-800)/2
   DFrameLink(linkurl,50,Left,800,550)
}
//------------------------------------------------------------
// Function : Set return path cookie for outpatient clinic list
//------------------------------------------------------------
function SetFilterCookie() {
  document.cookie = "FilterColumn" + "=" + FilterColumn;
  document.cookie = "FilterValue" + "=" + FilterValue;
  document.cookie = "FilterLocation" + "=" +
                     document.SelectPeriod.srchltyp.value;
}
//------------------------------------------------------------
// Function : Clear dynamic filter cookies if current url
//            is not equal to the OutpatientList cookie
//------------------------------------------------------------
function FilterCookie() {
  var OutpatientList=GetContentCookie("OutpatientList");
  if (OutpatientList!="unknown") {
    var location = top.content.location.href;
    i = location.search(/rldrand/g);  // find first rldrang cgi and remove
    if (i > 0) {
       location = location.substr(0,i-1);
    }
    if(OutpatientList==location) {
      var Location=GetContentCookie("FilterLocation");

      if (Location!="unknown") {
//      if(isWhitespace(document.SelectPeriod.defltype.value)) {
          document.SelectPeriod.defltype.value=Location;
          for (var i =0 ; i < document.SelectPeriod.srchltyp.length; i++) {
          if(trim(document.SelectPeriod.srchltyp.options[i].value)==
             trim(document.SelectPeriod.defltype.value)) {
             document.SelectPeriod.srchltyp.selectedIndex=i } };
//      }
      }
      return;
    }
  }
  ExpireCookiePath("FilterColumn");
  ExpireCookiePath("FilterValue");
  ExpireCookiePath("FilterLocation");
}
function RemoteCheckInAH(Urnumber,Admissno,RowNo,ColNo,Casekeys,EncTime) {
  if (!isWhitespace(t.rows[RowNo][colOTBBCITM])) {
    return;
  }
  if (t.rows[RowNo][colINTERNAM]=="DNA") {
    alert("Check In Time Can't be Entered For DNA");
  }
  el = document.getElementById("rv"+RowNo+"-"+ColNo)
  val =el.value
  el.value =  updateTimeSlotAH(Urnumber,Admissno,3,val,Casekeys,EncTime);
}
function RemoteTimeSeenAH(Urnumber,Admissno,RowNo,ColNo,Casekeys,EncTime) {
  if (!isWhitespace(t.rows[RowNo][colOTBBASTM])) {
    return;
  }
  else if (t.rows[RowNo][colINTERNAM]=="DNA") {
    alert("Check In Time Can't be Entered For DNA");
  }
  el = document.getElementById("rv"+RowNo+"-"+ColNo)
  val =el.value
  el.value =  updateTimeSlotAH(Urnumber,Admissno,4,val,Casekeys,EncTime);
}
/*
Not Currently Used
function RemoteDepartureAH(Urnumber,Admissno,RowNo,ColNo,Casekeys,EncTime) {
  if (!isWhitespace(t.rows[RowNo][colOTBBDPTM])) {
    return;
  }
  el = document.getElementById("rv"+RowNo+"-"+ColNo)
  val =el.value
  el.value = updateTimeSlotAH(Urnumber,Admissno,5,val,Casekeys,EncTime);
}
*/
//------------------------------------------------------------------------
//             Function to Update Check-In,Time Seen
//------------------------------------------------------------------------
function updateTimeSlotAH(Urnumber,Admissno,Updttime,val,caseKeys,EncTime)
{
var serverURL = "../cgi-bin/outweb02.pbl?reportno=9&urnumber="+
Urnumber+"&admissno="+Admissno+"&updttime="+Updttime+"&updatety=3"+
"&casekeys="+caseKeys;
//
if(Updttime=="3") {
  serverURL+="&outbb032=" + EncTime;   // Set to Encounter time
}
if(Updttime=="4") {
  serverURL+="&outbb032=" + EncTime;
  serverURL+="&outbb033=" + EncTime;   // Set to Encounter Time
}
if(Updttime=="5") {
  serverURL+="&outbb032=" + EncTime;
  serverURL+="&outbb033=" + EncTime;
  serverURL+="&outbb034=" + EncTime;   // Set to Encounter Time
}
if(VariableNameExists('SetSMRFlag')) {
  if(SetSMRFlag==true) {
    serverURL += "&scannedm=1";
  }
}
serverURL=serverURL.replace(/ /g,"+")
var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    j=0
    for (var i=3; i < updateTimeSlotAH.arguments.length; i++) {
       if (typeof(updateTimeSlotAH.arguments[i]) != 'function') {
         j++
         updateTimeSlotAH.arguments[i].value=ReturnValue[j] } }
      return ReturnValue[0];}
  else {
 return val;
  }
}


//------------------------------------------------------------------------
// Function to set Cookies for outweb0201016.html/standard
// Keep filter selections on return to template
//------------------------------------------------------------------------
function setMSPCookies() {
  if (document.SelectPeriod.mspvckie.value=="1") {
    if (document.SelectPeriod.nodateck.value == "1") {
      SetCookie("lastdateMSPCookie",document.SelectPeriod.lastdate.value);
    }
    SetCookie("LocationMSPCookie",document.SelectPeriod.srchltyp.value);
    SetCookie("ClinIndMSPCookie",document.SelectPeriod.indicatorFilter.value);
    SetCookie("ClinTypMSPCookie",document.SelectPeriod.typeFilter.value);
    SetCookie("ClinicMSPCookie",document.SelectPeriod.clinicFilter.value);
    SetCookie("PatientMSPCookie",document.SelectPeriod.PatientSearchName.value);
    if (document.SelectPeriod.statusFilter.checked==true) {
      SetCookie("HDNAMSPCookie","1");
   } else {
      SetCookie("HDNAMSPCookie","0");
    }
  }
}
//------------------------------------------------------------------------
// Function to get Cookies for outweb0201016.html/standard
// Keep filter selections on return to template
//------------------------------------------------------------------------
function getMSPCookies() {

  if (GetCookieData("lastdateMSPCookie") != "unknown") {
    if (document.SelectPeriod.lastdate.value!=
         GetCookieData("lastdateMSPCookie")){
      for (var i=0; i < document.SelectPeriod.lastdate.length; i++) {
        if (document.SelectPeriod.lastdate.options[i].value==
            GetCookieData("lastdateMSPCookie")){
          document.SelectPeriod.lastdate.selectedIndex=i;
          ExpireCookiePath("lastdateMSPCookie");
          document.SelectPeriod.mspvckie.value="";
          document.SelectPeriod.submit();
          return;
        }
      }
    }
  }

  if (GetCookieData("LocationMSPCookie") != "unknown") {
    if(document.SelectPeriod.srchltyp.value!=
       GetCookieData("LocationMSPCookie")) {
      for (var i=0; i < document.SelectPeriod.srchltyp.length; i++) {
        if (document.SelectPeriod.srchltyp.options[i].value==
            GetCookieData("LocationMSPCookie")){
          document.SelectPeriod.srchltyp.selectedIndex=i;
          ExpireCookiePath("LocationMSPCookie");
          RefreshPage();
          break;
        }
      } 
    }
  }

  if (GetCookieData("ClinIndMSPCookie") != "unknown") {
    for (var i=0; i < document.SelectPeriod.indicatorFilter.length; i++) {
      if (document.SelectPeriod.indicatorFilter.options[i].value==
          GetCookieData("ClinIndMSPCookie")){
        document.SelectPeriod.indicatorFilter.selectedIndex=i;
        onFilterList(document.SelectPeriod.indicatorFilter,'50');
        ExpireCookiePath("ClinIndMSPCookie");
        break;
      }
    }
  }

  if (GetCookieData("ClinTypMSPCookie") != "unknown") {
    for (var i=0; i < document.SelectPeriod.typeFilter.length; i++) {
      if (document.SelectPeriod.typeFilter.options[i].value==
          GetCookieData("ClinTypMSPCookie")){
        document.SelectPeriod.typeFilter.selectedIndex=i;
        onFilterList(document.SelectPeriod.typeFilter,'32');
        ExpireCookiePath("ClinTypMSPCookie");
        break;
      }
    }
  }

  if (GetCookieData("ClinicMSPCookie") != "unknown") {
    for (var i=0; i < document.SelectPeriod.clinicFilter.length; i++) {
      if (document.SelectPeriod.clinicFilter.options[i].value==
          GetCookieData("ClinicMSPCookie")){
        document.SelectPeriod.clinicFilter.selectedIndex=i;
        onFilterList(document.SelectPeriod.clinicFilter,'33');
        ExpireCookiePath("ClinicMSPCookie");
        break;
      }
    }
  }

  if (GetCookieData("PatientMSPCookie") != "unknown") {
    document.SelectPeriod.PatientSearchName.value=
    GetCookieData("PatientMSPCookie")
    TableOutput(OrderColumn,AscDsc);
    ExpireCookiePath("PatientMSPCookie");
  }

  if (GetCookieData("HDNAMSPCookie") != "unknown") {
    if (GetCookieData("HDNAMSPCookie") == "1") {
      document.SelectPeriod.statusFilter.checked = true;
      onActiveFilter(document.SelectPeriod.statusFilter);
    } else {
      document.SelectPeriod.statusFilter.checked = false;
      onActiveFilter(document.SelectPeriod.statusFilter);
    }
    ExpireCookiePath("HDNAMSPCookie");
  }

}
