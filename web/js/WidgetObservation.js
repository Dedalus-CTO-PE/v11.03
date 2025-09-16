//jsVersion  : V11.03.00
//------------------------------------------------------------
// Source Code  : WidgetObservation.js
//
// Function     :
//
// Modification :
//
// V10.03.04 05.03.2013 B.G.Ackland CAR 279466
//                      NSW Between the Flags Alert Icons for MUH
//                      Harmonise Changes for MUH 10.00
// V10.03.03 27/02/2013 Peter McMullen   CAR 271555
//                      remove redundant functions checkPassAdd, checkPassUpd           
// V10.00.03 16.01.2013 B.G.Ackland CAR 279466
//                      NSW Between the Flags Alert Icons for MUH
// V10.00.02 21.10.2011 B.G.Ackland
//                      Remove Cardiac Rythym from Notes Mouse Over.
// V10.00.01 07.09.2011 B.G.Ackland
//                      New Function for Height & Weight Observations
// V10.00.00 28/06/2010 Jill Parkinson CAR 224339
//                      New Include
//------------------------------------------------------------
var LastDateValue;
var categoryLabelws="";
var categoryLabelwu="";
//========================================================================
// Get Widget
//========================================================================
function GetWidget(WidgetNameID) {
 el=document.getElementsByTagName("div")
 for (i=0;i<el.length;i++) {
   if (el[i].id==WidgetNameID ) { break; }
   if (el[i].className=="Widget") { theWidget=el[i]; }
   if (el[i].className=="WidgetLarge") { theWidget=el[i]; }
 }
 return theWidget;
}
//========================================================================
// Observation shown in patient summary widget layout
//========================================================================
function EditType(linkurl) {
 ClickWidget=GetWidget("cliweb0201002");
 WidgetLeftPanel(ClickWidget);
 WidgetRightPanel(linkurl);
}
function EditLookup02() {
 alert("WIP");
 return;
//    SelectCode.template.value=2
//    SelectCode.obstyp01.value=SelectCode.startkey.value
//    Left=(document.body.clientWidth-390)/2
//    DFrameSubmit(SelectCode,0,Left,390,225)
}

//========================================================================
// cliweb0201001 - Observation Summary Filter by Type
//========================================================================
function Filter(SelectItem) {
 alert("WIP");
 return;
//  for (var i = 0; i < SelectItem.length; i++) {
//    if (SelectItem.options[i].selected == true) {
//        SelectOption=SelectItem.options[i].value }   }
//  PatientLinks.action="cliweb02.pbl"
//  PatientLinks.reportno.value="1"
//  PatientLinks.template.value="1"
//  PatientLinks.obsvtype.value=SelectOption
//  PatientLinks.submit()
}
//========================================================================
// cliweb0201001 - Observation Summary Insert by Type
//========================================================================
function Insert(SelectItem) {
 alert("WIP");
 return;
//  for (var i = 0; i < SelectItem.length; i++) {
//    if (SelectItem.options[i].selected == true) {
//        SelectOption=SelectItem.options[i].value }   }
//  SelectItem.options[0].selected = true
//  if (!isWhitespace(SelectOption)) {
//    PatientLinks.action="cliweb02.pbl"
//    PatientLinks.reportno.value="2"
//    PatientLinks.template.value=SelectOption.substr(3,3)
//    DFrameSubmit(PatientLinks,25,25,750,420)
//  }
}
//========================================================================
// cliweb0201001 - Observation Summary Update/View Observation
//========================================================================
function AddObs(obsvtype) {
 switch (obsvtype) {
 case 'B':
    ClickWidget=GetWidget("cliweb0201002");
    linkURL="cliweb02.pbl?reportno=2&template=101"
    break;
 case 'F':
    ClickWidget=GetWidget("cliweb0201003");
    linkURL="cliweb02.pbl?reportno=2&template=103"
    break;
 case 'N':
    ClickWidget=GetWidget("cliweb0201004");
    linkURL="cliweb02.pbl?reportno=2&template=102"
    break;
 }
 linkURL+="&obsvtype="+obsvtype
 linkURL+="&urnumber="+document.PatientLinks.urnumber.value.replace(/ /g,"+");
 linkURL+="&admissno="+document.PatientLinks.admissno.value.replace(/ /g,"+");
 WidgetLeftPanel(ClickWidget);
 WidgetRightPanel(linkURL);
}
function UpdateObs(linkURL) {
linkURL+="&urnumber="+document.PatientLinks.urnumber.value.replace(/ /g,"+");
linkURL+="&admissno="+document.PatientLinks.admissno.value.replace(/ /g,"+");
 if (linkURL.match(/template=201/)) {
   ClickWidget=GetWidget("cliweb0201002"); }
 if (linkURL.match(/template=202/)) {
   ClickWidget=GetWidget("cliweb0201004"); }
 if (linkURL.match(/template=203/)) {
   ClickWidget=GetWidget("cliweb0201003"); }
 WidgetLeftPanel(ClickWidget);
 WidgetRightPanel(linkURL);
}
function Observation(linkURL) {
 if (linkURL.match(/template=201/)) {
   ClickWidget=GetWidget("cliweb0201002"); }
 if (linkURL.match(/template=202/)) {
   ClickWidget=GetWidget("cliweb0201004"); }
 if (linkURL.match(/template=203/)) {
   ClickWidget=GetWidget("cliweb0201003"); }
 WidgetLeftPanel(ClickWidget);
 WidgetRightPanel(linkURL);
}
//========================================================================
// cliweb0201001 - Table Formating by Type 
//========================================================================
// Columns 
// 0. HTML Link        1. Date & Time       2. Type
// 3. Abnormal Flag    4. Pulse             5. Temp
// 6. Resp             7. BP                8. Pulse/Ox
// 9. F1O2            10. Peak Flow        11. Fluids Out Type
//12. Fluids Output   13. Fluid Input Type 14. Fluids Input
//15. Eyes            16. Verbal           17. Motor           
//18. Total Neuro     19. Action/Comment   20. Comment
//
var SortWidgetName;
var HWObs;
var BasicObs;
var FluidObs;
var NeuroObs;
function ObsHWInitTable() {
  t = new Table(1,0,1,"100%","center",22,22);
  t.addColumn("Date","DateTime3",1,1,"left nowrap","","0","20%","","","","","","1","NewDocument","AddObs('B')","Add New Basic Observation")
  t.addColumn("Height","Number",41,-8,"right","","","10%")
  t.addColumn("Weight","Number",40,-8,"right","","","10%")
  t.addColumn("BMI","Number",38,-8,"right","","","10%")
  t.addColumn("BSA","Number",39,-8,"right","","","10%")
  t.addColumn("Notes","TitleIcon",20,20,"left","TableNotesIcon","","5%")
  t.addColumn("Sign","Initials",23,23,"center","","","5%")
  t.addColumn("Status","WarningIcon",24,24,"center","ResultStatus","","5%",3)
  AddObservations() 
//
//  Square Root BSA Numbers.
//===========================
  for(var i = 0; i < t.rows.length; i++) {
    if (trim(t.rows[i][39])!="") {
      t.rows[i][39]=" "+trim(Math.round(Math.sqrt(trim(t.rows[i][39]))*100)/100);
    }
  }
  SortWidgetName="HWObs"
  HWObs= new Table()
  HWObs=t
  ObsTableOutput(0,2)
  TableLocation.innerHTML+="<div id=cliweb0201005></div>"
}
function ObsBasicInitTable() {
  t = new Table(1,0,1,"100%","center",22,22);
  t.addColumn("Date","DateTime3",1,1,"left nowrap","","0","20%","","","","","","1","NewDocument","AddObs('B')","Add New Basic Observation")
  t.addColumn("F1O2","Number",9,-6,"right","","","10%")
  t.addColumn("SaO2%","Number",8,-6,"right","","","10%")
  t.addColumn("Pulse","Number",4,-5,"right","","","10%")
  t.addColumn("Temp.","Number",5,-5,"right","","","10%")
  t.addColumn("Resp.","Number",6,-5,"right","","","10%")
  t.addColumn("BP","String",7,-3,"right","","","10%")
  t.addColumn("Notes","TitleIcon",20,20,"left","TableNotesIcon","","5%")
  t.addColumn("Sign","Initials",23,23,"center","","","5%")
  t.addColumn("Status","WarningIcon",24,24,"center","ResultStatus","","5%",3)
  AddObservations() 
  for(var i = 0; i < t.rows.length; i++) {
    if (!isWhitespace(t.rows[i][20])) t.rows[i][20] =  "\nComments:" + t.rows[i][20];
    if (!isWhitespace(t.rows[i][27])) t.rows[i][20] +=  "\n"+ categoryLabelwu +'\t' + t.rows[i][27];
    if (!isWhitespace(t.rows[i][19])) t.rows[i][20] +=  "\n"+ categoryLabelws +'\t' + t.rows[i][19];
    if (!isWhitespace(t.rows[i][20])) t.rows[i][20] +=  "\n\t\t\t\t\t\t\t\t";
  }
  SortWidgetName="BasicObs"
  BasicObs= new Table()
  BasicObs=t
  ObsTableOutput(0,2)
  TableLocation.innerHTML+="<div id=cliweb0201002></div>"
}
function ObsBasicInitTable1() {
  t = new Table(1,0,1,"100%","center",22,22);
  t.addColumn("Date","DateTime3",1,1,"left nowrap","","0","15%","","","","","","1","NewDocument","AddObs('B')","Add New Basic Observation")
  t.addColumn("SaO2%","Number",8,-6,"right","","","10%")
  t.addColumn("Pulse","Number",4,-5,"right","","","10%")
  t.addColumn("Temp.","Number",5,-5,"right","","","10%")
  t.addColumn("Resp.","Number",6,-5,"right","","","10%")
  t.addColumn("BP","String",7,-3,"right","","","10%")
  t.addColumn("Cardiac","String",19,19,"left","","","15%")
  t.addColumn("Notes","TitleIcon",20,20,"left","TableNotesIcon","","5%")
  t.addColumn("Sign","Initials",23,23,"center","","","5%")
  t.addColumn("Status","WarningIcon",24,24,"center","ResultStatus","","5%",3)
  AddObservations() 
  for(var i = 0; i < t.rows.length; i++) {
    if (!isWhitespace(t.rows[i][20])) t.rows[i][20] =  "\nComments:" + t.rows[i][20];
    if (!isWhitespace(t.rows[i][27])) t.rows[i][20] +=  "\n"+ categoryLabelwu +'\t' + t.rows[i][27];
    if (!isWhitespace(t.rows[i][20])) t.rows[i][20] +=  "\n\t\t\t\t\t\t\t\t";
  }
  SortWidgetName="BasicObs"
  BasicObs= new Table()
  BasicObs=t
  ObsTableOutput(0,2)
  TableLocation.innerHTML+="<div id=cliweb0201002></div>"
}
function ObsBasicInitTable2() {
  t = new Table(1,0,1,"100%","center",22,22);
  t.addColumn("Date","DateTime3",1,1,"left nowrap","","0","9%","","","","","","1","NewDocument","AddObs('B')","Add New Basic Observation")
  t.addColumn("F1O2","Number",9,-6,"right","","","9%")
  t.addColumn("SaO2%","Number",8,-6,"right","","","9%")
  t.addColumn("Pulse","Number",4,-5,"right","","","9%")
  t.addColumn("Temp.","Number",5,-5,"right","","","9%")
  t.addColumn("Resp.","Number",6,-5,"right","","","9%")
  t.addColumn("BP","String",7,-3,"right","","","9%")
  t.addColumn("Cardiac","String",19,19,"left","","","9%")
  t.addColumn("Bowel","String",27,27,"left","","","9%")
  t.addColumn("Notes","TitleIcon",20,20,"left","TableNotesIcon","","5%")
  t.addColumn("Sign","Initials",23,23,"center","","","5%")
  t.addColumn("Status","WarningIcon",24,24,"center","ResultStatus","","5%",3)
  AddObservations() 
  for(var i = 0; i < t.rows.length; i++) {
    if (!isWhitespace(t.rows[i][20])) t.rows[i][20] =  "\nComments:" + t.rows[i][20];
    if (!isWhitespace(t.rows[i][27])) t.rows[i][20] +=  "\n"+ categoryLabelwu +'\t' + t.rows[i][27];
    if (!isWhitespace(t.rows[i][20])) t.rows[i][20] +=  "\n\t\t\t\t\t\t\t\t";
  }
  SortWidgetName="BasicObs"
  BasicObs= new Table()
  BasicObs=t
  ObsTableOutput(0,2)
  TableLocation.innerHTML+="<div id=cliweb0201002></div>"
}
function ObsFluidInitTable() {
  t = new Table(1,0,1,"100%","center",22,22);
  t.addColumn("Date","DateTime3",1,1,"left nowrap","","0","20%","","","","","","1","NewDocument","AddObs('F')","Add New Fluid balance")
  t.addColumn("Input Type","String",13,13,"left","","","15%")
  t.addColumn("Input","Number",14,-7,"right","","","15%")
  t.addColumn("Output Type","String",11,11,"left","","","15%")
  t.addColumn("Output","Number",12,-7,"right","","","15%")
  t.addColumn("Act","TitleIcon",19,19,"left","TableNotesIcon","","5%")
  t.addColumn("Sign","Initials",23,23,"center","","","5%")
  AddObservations() 
  t.addTotal("1")
  SortWidgetName="FluidObs"
  FluidObs= new Table()
  FluidObs=t
  FluidTableOutput(0,2)
  TableLocation.innerHTML+="<div id=cliweb0201003></div>"
}
function ObsNeuroInitTable() {
  t = new Table(1,0,1,"100%","center",22,22);
  t.addColumn("Date","DateTime3",1,1,"left nowrap","","0","20%","","","","","","1","NewDocument","AddObs('N')","Add New Neurological Observation")
  t.addColumn("Eyes","Number",15,-2,"right","","","10%")
  t.addColumn("Verbal","Number",16,-2,"right","","","10%")
  t.addColumn("Motor","Number",17,-2,"right","","","10%")
  t.addColumn("GCS","Number",18,-4,"right","","","10%")
  t.addColumn("Pupil Test","String",21,21,"center","","","10%")
  t.addColumn("Limb Test","String",22,22,"center","","","10%")
  t.addColumn("Com","TitleIcon",20,20,"left","TableNotesIcon","","5%")
  t.addColumn("Sign","Initials",23,23,"center","","","5%")
  t.addColumn("Status","Image",3,3,"center","ResultStatus","","10%")
  AddObservations()
  SortWidgetName="NeuroObs"
  NeuroObs= new Table()
  NeuroObs=t
  ObsTableOutput(0,2)
  TableLocation.innerHTML+="<div id=cliweb0201004></div>"
}
//========================================================================
// cliweb0201001 - Display Fluid
//========================================================================
function FluidTableOutput(OrderColumn,AscDsc) {
 lastOrderColumn=OrderColumn;
 if (t.rows.length != 0 ) {
   t.sortTable(OrderColumn,AscDsc);
   ObsTableHeading(OrderColumn);
   FluidTableBody();
   if (t.tableTotals.length != 0 ) { 
      FluidTotals(); }
   TableEnding();
 }
 else {
   ObsTableHeading(OrderColumn);
   TableEnding();
 }
}
//========================================================================
// cliweb0201001 - Display Observation Tables & Graphs
//========================================================================
function ObsTableOutput(OrderColumn,AscDsc) {
 lastOrderColumn=OrderColumn;
 if (t.rows.length != 0 ) {
   t.sortTable(OrderColumn,AscDsc);
   ObsTableHeading(OrderColumn);
   TableBody();
   if (t.tableTotals.length != 0 ) { 
      TableTotals(); }
   TableEnding();
 }
 else {
   ObsTableHeading(OrderColumn);
   TableEnding();
 }
}
function ObsTableHeading(OrderColumn) {
  TableString = [];
  TableString[TableString.length] = "<table style=\"table-layout:fixed\"" +
                " border=" + t.Border +
                " cellspacing=" + t.Cellspacing +
                " cellpadding=" + t.Cellpadding +
                " width=" + t.Width +
                " align=" + t.Align + " >";
  TableString[TableString.length] = "<tr height=" + t.HeadingHeight + ">";
  for(var i = 0; i < t.columns.length; i++) {
    TableString[TableString.length] = "<td class=HeadingCell align=" + t.columns[i][4] + 
                   " width=" + t.columns[i][7] + " >" ;
    switch (t.columns[i][3]) {
      case -1 :
         if (OrderColumn == i) { TableString[TableString.length] = "<b>" }
         TableString[TableString.length] = t.columns[i][0] + "</td>"; 
         break; 
      case -2 :
         TableString[TableString.length] = "<a href='javascript:GraphColumn(\"" + 
                         SortWidgetName  + "\",\"" +
                         t.columns[i][0] + "\"," +
                         t.columns[i][2] + ")'>"; 
         TableString[TableString.length] = "<img src=\"../images/GraphIcon.gif\" border=0 " +
                        " hspace=4 align=absmiddle></a>";
         TableString[TableString.length] = t.columns[i][0] + "</td>"; 
         break; 
      case -3 :
         TableString[TableString.length] = "<a href='javascript:GraphBP(\""+SortWidgetName+"\")'>"; 
         TableString[TableString.length] = "<img src=\"../images/GraphIcon.gif\" border=0 " +
                        " hspace=4 align=absmiddle></a>";
         TableString[TableString.length] = t.columns[i][0] + "</td>"; 
         break; 
      case -4 :
         TableString[TableString.length] = "<a href='javascript:GraphNeuro(\""+SortWidgetName+"\")'>"; 
         TableString[TableString.length] = "<img src=\"../images/GraphIcon.gif\" border=0 " +
                        " hspace=4 align=absmiddle></a>";
         TableString[TableString.length] = t.columns[i][0] + "</td>"; 
         break; 
      case -5 :
         TableString[TableString.length] = "<a href='javascript:GraphBasic(\"" + 
                         SortWidgetName  + "\",\"" +
                         t.columns[i][0] + "\"," +
                         t.columns[i][2] + ")'>"; 
         TableString[TableString.length] = "<img src=\"../images/GraphIcon.gif\" border=0 " +
                        " hspace=4 align=absmiddle></a>";
         TableString[TableString.length] = t.columns[i][0] + "</td>"; 
         break; 
      case -6 :
         TableString[TableString.length] = "<a href='javascript:GraphSaO2(\"" +
                         SortWidgetName  + "\",\"" +
                         t.columns[i][0] + "\"," +
                         t.columns[i][2] + ")'>";
         TableString[TableString.length] = "<img src=\"../images/GraphIcon.gif\" border=0 " +
                        " hspace=4 align=absmiddle></a>";
         TableString[TableString.length] = t.columns[i][0] + "</td>";
         break;
      case -7 :
         TableString[TableString.length] = "<a href='javascript:GraphFluids(\""+SortWidgetName+"\")'>"; 
         TableString[TableString.length] = "<img src=\"../images/GraphIcon.gif\" border=0 " +
                        " hspace=4 align=absmiddle></a>";
         TableString[TableString.length] = t.columns[i][0] + "</td>"; 
         break; 
      case -8 :
         TableString[TableString.length] = "<a href='javascript:GraphHW(\"" + 
                         SortWidgetName  + "\",\"" +
                         t.columns[i][0] + "\"," +
                         t.columns[i][2] + ")'>"; 
         TableString[TableString.length] = "<img src=\"../images/GraphIcon.gif\" border=0 " +
                        " hspace=4 align=absmiddle></a>";
         TableString[TableString.length] = t.columns[i][0] + "</td>"; 
         break; 
      default :
        if (t.columns[i][13] == 1) {
           HeadIcon=t.columns[i][14].split("|");
           HeadJS=t.columns[i][15].split("|");
           HeadTitle=t.columns[i][16].split("|");
           for (k=0;k<HeadIcon.length;k++) { 
               TableString[TableString.length] = "<img src=\"../images/"+HeadIcon[k]+".gif\" " +
                            " title='"+HeadTitle[k]+"' class='DocumentAdd'  onclick="+HeadJS[k]+";>";
           }
           TableString[TableString.length] = t.columns[i][0] + "</td>";
        }
        else {
           TableString[TableString.length] = "<a href='javascript:TableSort(" + i + ")'>"; 
           if (OrderColumn == i) { TableString[TableString.length] = "<b>" }
           TableString[TableString.length] = t.columns[i][0] + "</a></td>"; 
       }
      break;
    }
  }
  TableString[TableString.length] = "</tr>";
  TableString[TableString.length] = "</table>";
  TableString[TableString.length] = "<table style=\"table-layout:fixed\" border=" + t.Border +
                 " cellspacing=" + t.Cellspacing +
                 " cellpadding=" + t.Cellpadding +
                 " width=" + t.Width +
                 " align=" + t.Align + " >";
}
//------------------------------------------------------------
// Single Line Graph
//------------------------------------------------------------
function GraphNeuro(theTable) {
 SortWidgetName=theTable
 t=eval(SortWidgetName)
 GraphHead()
 Dataset0dateValue = ""
 Dataset0yValue = ""
 Dataset1dateValue = ""
 Dataset1yValue = ""
 Dataset2dateValue = ""
 Dataset2yValue = ""
 Dataset3dateValue = ""
 Dataset3yValue = ""
 DelimiterField = ""
 ReferenceRangeType=0
 for(var i = 0; i < t.rows.length; i++) {
   if (!(isWhitespace(t.rows[i][15])&&isWhitespace(t.rows[i][16])&&isWhitespace(t.rows[i][17]))) {
     Dataset0dateValue += DelimiterField + DateTimeFormat(t.rows[i][1])
     Dataset0yValue += DelimiterField + t.rows[i][18]
     if (!isWhitespace(t.rows[i][15])){
       Dataset1dateValue += DelimiterField + DateTimeFormat(t.rows[i][1])
       Dataset1yValue += DelimiterField + t.rows[i][15] }
     if (!isWhitespace(t.rows[i][16])){
       Dataset2dateValue += DelimiterField + DateTimeFormat(t.rows[i][1])
       Dataset2yValue += DelimiterField + t.rows[i][16] }
     if (!isWhitespace(t.rows[i][17])){
       Dataset3dateValue += DelimiterField + DateTimeFormat(t.rows[i][1])
       Dataset3yValue += DelimiterField + t.rows[i][17] }
     DelimiterField = ","
   }
 }
 GraphString += '<param name=titleString value="Neurological Observations">' +
        '<param name=dataset0name value="GCS">' +
        '<param name=dataset1name value="Eyes">' +
        '<param name=dataset2name value="Verbal">' +
        '<param name=dataset3name value="Motor">' +
        '<param name=dataset0Image value="images/GraphTickBlue.gif">' +
        '<param name=dataset1Image value="images/GraphTickRed.gif">' +
        '<param name=dataset2Image value="images/GraphTickGreen.gif">' +
        '<param name=dataset3Image value="images/GraphTickCyan.gif">' +
        '<param name=dataset0dateValues value="' + Dataset0dateValue + '">' +
        '<param name=dataset0yValues value="' + Dataset0yValue + '">' +
        '<param name=dataset1dateValues value="' + Dataset1dateValue + '">' +
        '<param name=dataset1yValues value="' + Dataset1yValue + '">' +
        '<param name=dataset2dateValues value="' + Dataset2dateValue + '">' +
        '<param name=dataset2yValues value="' + Dataset2yValue + '">'  +
        '<param name=dataset3dateValues value="' + Dataset3dateValue + '">' +
        '<param name=dataset3yValues value="' + Dataset3yValue + '">' 
  EndNeuro();
}
function EndNeuro() {
 GraphString += '<param name=yAxisOptions value="gridOn tickOn noAutoScale">'+
        '<param name=yAxisStart value="0.0">' +
        '<param name=yAxisEnd value="15.0">' +
        '</applet></td></tr>' +
        '<tr><td bgcolor=#cccccc align=center>' +
        '<table width=100% border=0>' +
        '<tr><td width=25%>' +
        '<img src=../images/GraphIcon.gif onclick=GraphNeuro("'+SortWidgetName+'") ' +
        ' hspace=4 align=absmiddle> GCS' +'</td>' +
        '<td width=25%>' +
       '<img src=../images/GraphIcon.gif onclick=GraphColumn("'+SortWidgetName+'","Eyes",15)'+
        ' hspace=4 align=absmiddle> Eyes' +'</td>' +
        '<td width=25%>' +
       '<img src=../images/GraphIcon.gif onclick=GraphColumn("'+SortWidgetName+'","Verbal",16)'+
        ' hspace=4 align=absmiddle> Verbal' + '</td>' +
        '<td width=25%>' +
       '<img src=../images/GraphIcon.gif onclick=GraphColumn("'+SortWidgetName+'","Motor",17)'+
        ' hspace=4 align=absmiddle> Motor' +
        '</td></tr></table>';
        '</td></tr></table>';
 GraphLocation.innerHTML = GraphString;
 GraphLocation.style.display="";
}
//------------------------------------------------------------
// Single Line Graph
//------------------------------------------------------------
function GraphO2SaO2() {
 GraphHead()
 Dataset0dateValue = ""
 Dataset0yValue = ""
 Dataset1dateValue = ""
 Dataset1yValue = ""
 DelimiterField0 = ""
 DelimiterField1 = ""
 ReferenceRangeType=0
 for(var i = 0; i < t.rows.length; i++) {
   if (!isWhitespace(t.rows[i][8])){
     Dataset0dateValue += DelimiterField0 + DateTimeFormat(t.rows[i][1])
     Dataset0yValue += DelimiterField0 + t.rows[i][8]
     DelimiterField0 = "," }
   if (!isWhitespace(t.rows[i][9])){
     Dataset1dateValue += DelimiterField1 + DateTimeFormat(t.rows[i][1])
     Dataset1yValue += DelimiterField1 + t.rows[i][9]
     DelimiterField1 = "," }
 }
 GraphString += '<param name=titleString value="F1O2 and SaO2%">' +
        '<param name=yAxisOptions value="gridOn minTickOn">'+
        '<param name=dataset0name value="SaO2%">' +
        '<param name=dataset1name value="F1O2">' +
        '<param name=dataset0Image value="images/GraphTickBlue.gif">' +
        '<param name=dataset1Image value="images/GraphTickRed.gif">' +
        '<param name=dataset0dateValues value="' + Dataset0dateValue + '">' +
        '<param name=dataset0yValues value="' + Dataset0yValue + '">' +
        '<param name=dataset1dateValues value="' + Dataset1dateValue + '">' +
        '<param name=dataset1yValues value="' + Dataset1yValue + '">' 
 EndSaO2()
}
//------------------------------------------------------------
// Single Line Graph
//------------------------------------------------------------
function GraphBP(theTable) {
 SortWidgetName=theTable
 t=eval(SortWidgetName)
 GraphHead()
 Dataset0dateValue = ""
 Dataset0yValue = ""
 Dataset1dateValue = ""
 Dataset1yValue = ""
 Dataset2dateValue = ""
 Dataset2yValue = ""
 DelimiterField0 = ""
 DelimiterField1 = ""
 DelimiterField2 = ""
 ReferenceRangeType=0
 for(var i = 0; i < t.rows.length; i++) {
   if (!isWhitespace(t.rows[i][4])){
     Dataset0dateValue += DelimiterField0 + DateTimeFormat(t.rows[i][1])
     Dataset0yValue += DelimiterField0 + t.rows[i][4]
     DelimiterField0 = "," }
   if (!isWhitespace(t.rows[i][7])){
     Dataset1dateValue += DelimiterField1 + DateTimeFormat(t.rows[i][1])
     Dataset2dateValue += DelimiterField1 + DateTimeFormat(t.rows[i][1])
     bp=t.rows[i][7].split("/")
     Dataset1yValue += DelimiterField1 + bp[0]
     Dataset2yValue += DelimiterField1 + bp[1]
     DelimiterField1 = "," }
 }
 GraphString += '<param name=titleString value="Blood Pressure">' +
        '<param name=yAxisOptions value="gridOn tickOn noAutoScale">'+
        '<param name=yAxisStart value="0.0">' +
        '<param name=yAxisEnd value="240.0">' +
        '<param name=yAxisLabelCount value="12">' +
        '<param name=yAxisTickCount value="12">' +
        '<param name=yAxisGridCount value="12">' +
        '<param name=scrollWindows value="2">' +
        '<param name=dataset0name value="Pulse">' +
        '<param name=dataset1name value="Systolic">' +
        '<param name=dataset2name value="Diastolic">' +
        '<param name=dataset0Image value="images/GraphTickBlue.gif">' +
        '<param name=dataset1Image value="images/GraphTickRed.gif">' +
        '<param name=dataset2Image value="images/GraphTickGreen.gif">' +
        '<param name=dataset0dateValues value="' + Dataset0dateValue + '">' +
        '<param name=dataset0yValues value="' + Dataset0yValue + '">' +
        '<param name=dataset1dateValues value="' + Dataset1dateValue + '">' +
        '<param name=dataset1yValues value="' + Dataset1yValue + '">' +
        '<param name=dataset2dateValues value="' + Dataset2dateValue + '">' +
        '<param name=dataset2yValues value="' + Dataset2yValue + '">' 
 EndBasic()
}
function EndBasic() {
 GraphString += '</applet></td></tr>' +
        '<tr><td bgcolor=#cccccc align=center>' +
        '<table width=100% border=0>' +
        '<tr><td width=20%>' +
        '<img src=../images/GraphIcon.gif onclick=GraphAll("'+SortWidgetName+'") ' +
        ' hspace=4 align=absmiddle> All' +'</td>' +
        '<td width=20%>' +
        '<img src=../images/GraphIcon.gif onclick=GraphBP("'+SortWidgetName+'") ' +
        ' hspace=4 align=absmiddle> Blood Pressure' +'</td>' +
        '<td width=20%>' +
       '<img src=../images/GraphIcon.gif onclick=GraphBasic("'+SortWidgetName+'","Pulse",4)'+
        ' hspace=4 align=absmiddle> Pulse' + '</td>' +
        '<td width=20%>' +
       '<img src=../images/GraphIcon.gif onclick=GraphBasic("'+SortWidgetName+'","Temperature",5)'+
        ' hspace=4 align=absmiddle> Temperature' + '</td>' +
        '<td width=20%>' +
       '<img src=../images/GraphIcon.gif onclick=GraphBasic("'+SortWidgetName+'","Respiration",6)'+
        ' hspace=4 align=absmiddle> Respiration' +
        '</td></tr></table>';
 GraphLocation.innerHTML = GraphString;
 GraphLocation.style.display="";
}
function EndSaO2() {
 GraphString += '</applet></td></tr>' +
        '<tr><td bgcolor=#cccccc align=center>' +
        '<table width=100% border=0>' +
        '<tr><td width=20%>' +
        '<img src=../images/GraphIcon.gif onclick=GraphO2SaO2("'+SortWidgetName+'") ' +
        ' hspace=4 align=absmiddle> Both' +'</td>' +
        '<td width=20%>' +
        '<img src=../images/GraphIcon.gif onclick=GraphSaO2("'+SortWidgetName+'","O2_Flow",9) ' +
        ' hspace=4 align=absmiddle> F1O2' +'</td>' +
        '<td width=20%>' +
       '<img src=../images/GraphIcon.gif onclick=GraphSaO2("'+SortWidgetName+'","SaO2%",8)'+
        ' hspace=4 align=absmiddle> SaO2%' + '</td>' +
        '</td></tr></table>';
        '</td></tr></table>';
 GraphLocation.innerHTML = GraphString;
 GraphLocation.style.display="";
}
//------------------------------------------------------------
// Single Line Graph
//------------------------------------------------------------
function GraphSaO2(theTable,GraphTitle,ColumnNo) {
 SortWidgetName=theTable
 t=eval(SortWidgetName)
 GraphHead()
 Dataset0dateValue = ""
 Dataset0yValue = ""
 DelimiterField = ""
 ReferenceRangeType=0
 if (GraphTitle=="O2_Flow") {
   GraphTitle="F1O2";
 }
 for(var i = 0; i < t.rows.length; i++) {
   if (!isWhitespace(t.rows[i][ColumnNo])){
     Dataset0dateValue += DelimiterField + DateTimeFormat(t.rows[i][1])
     Dataset0yValue += DelimiterField + t.rows[i][ColumnNo]
     DelimiterField = ","
   }
 }
 GraphString += '<param name=titleString value="' + GraphTitle + '">' +
        '<param name=yAxisOptions value="gridOn minTickOn">'+
        '<param name=dataset0Image value="images/GraphTickBlue.gif">'+
        '<param name=dataset0Name value="' + GraphTitle + '">' +
        '<param name=dataset0dateValues value="' + Dataset0dateValue + '">' +
        '<param name=dataset0yValues value="' + Dataset0yValue + '">'
 EndSaO2()
}
//------------------------------------------------------------
// Single Line Graph
//------------------------------------------------------------
function GraphBasic(theTable,GraphTitle,ColumnNo) {
 SortWidgetName=theTable
 t=eval(SortWidgetName)
 GraphHead()
 Dataset0dateValue = ""
 Dataset0yValue = ""
 DelimiterField = ""
 ReferenceRangeType=0
 for(var i = 0; i < t.rows.length; i++) {
   if (!isWhitespace(t.rows[i][ColumnNo])){
     Dataset0dateValue += DelimiterField + DateTimeFormat(t.rows[i][1])
     Dataset0yValue += DelimiterField + t.rows[i][ColumnNo]
     DelimiterField = ","
   }
 }
 if (GraphTitle.substr(0,4)=="Temp") {
   GraphString += '<param name=yAxisOptions value="gridOn tickOn noAutoScale">'+
        '<param name=yAxisLabelCount value="9">' +
        '<param name=yAxisTickCount value="9">' +
        '<param name=yAxisGridCount value="9">' +
        '<param name=yAxisStart value="36.0">' +
        '<param name=yAxisEnd value="40.5">' 
 }
 else {
   if (GraphTitle.substr(0,4)=="Puls") {
     GraphString += '<param name=yAxisOptions value="gridOn tickOn noAutoScale">'+
        '<param name=yAxisLabelCount value="14">' +
        '<param name=yAxisTickCount value="14">' +
        '<param name=yAxisGridCount value="14">' +
        '<param name=yAxisStart value="0.0">' +
        '<param name=yAxisEnd value="140.0">' 
   }
   else {
     if (GraphTitle.substr(0,4)=="Resp") {
       GraphString += '<param name=yAxisOptions value="gridOn tickOn noAutoScale">'+
        '<param name=yAxisLabelCount value="14">' +
        '<param name=yAxisTickCount value="14">' +
        '<param name=yAxisGridCount value="14">' +
        '<param name=yAxisStart value="0.0">' +
        '<param name=yAxisEnd value="140.0">' 
     }
     else {
       GraphString += '<param name=yAxisOptions value="gridOn minTickOn">'
     }
   }
 }
 GraphString += '<param name=titleString value="' + GraphTitle + '">' +
        '<param name=dataset0Image value="images/GraphTickBlue.gif">'+
	'<param name=dataset0Name value="' + GraphTitle + '">' +
        '<param name=dataset0dateValues value="' + Dataset0dateValue + '">' +
        '<param name=dataset0yValues value="' + Dataset0yValue + '">' 
 EndBasic()
}
//------------------------------------------------------------
// Single Line Graph
//------------------------------------------------------------
function GraphColumn(theTable,GraphTitle,ColumnNo) {
 SortWidgetName=theTable
 t=eval(SortWidgetName)
 GraphHead()
 Dataset0dateValue = ""
 Dataset0yValue = ""
 DelimiterField = ""
 ReferenceRangeType=0
 for(var i=0; i < t.rows.length; i++) {
   if (!isWhitespace(t.rows[i][ColumnNo])){
     Dataset0dateValue += DelimiterField + DateTimeFormat(t.rows[i][1])
     Dataset0yValue += DelimiterField + t.rows[i][ColumnNo]
     DelimiterField = ","
   }
 }
 GraphString += '<param name=titleString value="' + GraphTitle + '">' +
        '<param name=dataset0Image value="images/GraphTickBlue.gif">'+
	'<param name=dataset0Name value="' + GraphTitle + '">' +
        '<param name=dataset0dateValues value="' + Dataset0dateValue + '">' +
        '<param name=dataset0yValues value="' + Dataset0yValue + '">' 
 if (theTable.match(/Neuro/)) {
   EndNeuro() }
 else {
   if (theTable.match(/Fluid/)) {
     GraphString += '<param name=yAxisOptions value="gridOn minTickOn">' 
     EndFluids() }
   else {
     if (theTable.match(/HW/)) {
       GraphString += '<param name=yAxisOptions value="gridOn minTickOn">' 
       EndHW() }
     else {
       GraphString += '<param name=yAxisOptions value="gridOn minTickOn">' 
       GraphEnd() }
   }
 }
}
function GraphEnd() {
 GraphString += '</applet></td></tr></table>';
 GraphLocation.innerHTML = GraphString;
 GraphLocation.style.display="";
}
function GraphHead() {
 switch (SortWidgetName) {
 case 'BasicObs':
    ClickWidget=GetWidget("cliweb0201002");
    break;
 case 'FluidObs':
    ClickWidget=GetWidget("cliweb0201003");
    break;
 case 'NeuroObs':
    ClickWidget=GetWidget("cliweb0201004");
    break;
 case 'HWObs':
    ClickWidget=GetWidget("cliweb0201005");
    break;
 }

 WidgetLeftPanel(ClickWidget);
 GraphLocation=WidgetRightPanelGraph();

 gw=GraphLocation.style.width
 gh=GraphLocation.style.height
 GraphWidth=parseInt(gw.replace(/px/,""))-4
 GraphHeight=parseInt(gh.replace(/px/,""))-50
 var GraphBase = 'codebase=../../';
 if (top.document.location.pathname.match(/cgi-bin/)) GraphBase = 'codebase=../';
 GraphString='<span class=DFrameTitleBar>' +
  '<div class="x-tool x-tool-exit" onmousedown="CloseJavaChart();"></div>'+
  'Observations' +
  '</span>'  +
  '<table cellspacing=0 cellpadding=0 border=1>' +
  '<tr><td>' +
  '<applet code=javachart.applet.dateLineApp.class ' +
  GraphBase + 
  ' width=' + GraphWidth +
  ' height=' + GraphHeight + '>' +
  '<param name=CopyrightNotification ' +
  'value="JavaChart is a copyrighted work, and subject to full legal protection">' +
  '<param name=xAxisLabelFont value="Arial,10,1">' +
  '<param name=xAxisOptions value="gridOn">'+
  '<param name=yAxisColor value="lightgray">'+
  '<param name=xAxisColor value="lightgray">'+
  '<param name=plotAreaTop value="0.90">'+
  '<param name=plotAreaRight value="0.80">'+
  '<param name=plotAreaBottom value="0.20">'+
  '<param name=plotAreaLeft value="0.10">'+
  '<param name=titleFont value="TimesRoman,14,1">' +
  '<param name=legendOn value="True">' +
  '<param name=legendVertical value="True">' +
  '<param name=legendllX value=".85">' +
  '<param name=legendllY value=".10">' +
  '<param name=iconWidth value=".02">' 
}
function CloseJavaChart() {
 GraphLocation.style.display="none";
 WidgetLeftClose(ClickWidget);
}
function DateTimeFormat(datetime) {
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
   return(dd + " " + mth3 + " " + yyyy + " " + time );
}
//------------------------------------------------------------
// Single Line Graph
//------------------------------------------------------------
function GraphAll() {
 GraphHead()
 Dataset0dateValue = ""
 Dataset0yValue = ""
 Dataset1dateValue = ""
 Dataset1yValue = ""
 Dataset2dateValue = ""
 Dataset2yValue = ""
 Dataset3dateValue = ""
 Dataset3yValue = ""
 Dataset4dateValue = ""
 Dataset4yValue = ""
 DelimiterField0 = ""
 DelimiterField1 = ""
 DelimiterField2 = ""
 DelimiterField3 = ""
 ReferenceRangeType=0
 for(var i = 0; i < t.rows.length; i++) {
   if (!isWhitespace(t.rows[i][4])){
     Dataset0dateValue += DelimiterField0 + DateTimeFormat(t.rows[i][1])
     Dataset0yValue += DelimiterField0 + t.rows[i][4]
     DelimiterField0 = "," }
   if (!isWhitespace(t.rows[i][5])){
     Dataset1dateValue += DelimiterField1 + DateTimeFormat(t.rows[i][1])
     Dataset1yValue += DelimiterField1 + t.rows[i][5]
     DelimiterField1 = "," }
   if (!isWhitespace(t.rows[i][6])){
     Dataset2dateValue += DelimiterField2 + DateTimeFormat(t.rows[i][1])
     Dataset2yValue += DelimiterField2 + t.rows[i][6]
     DelimiterField2 = "," }
   if (!isWhitespace(t.rows[i][7])){
     Dataset3dateValue += DelimiterField3 + DateTimeFormat(t.rows[i][1])
     Dataset4dateValue += DelimiterField3 + DateTimeFormat(t.rows[i][1])
     bp=t.rows[i][7].split("/")
     Dataset3yValue += DelimiterField3 + bp[0]
     Dataset4yValue += DelimiterField3 + bp[1]
     DelimiterField3 = ","
   }
 }
 GraphString += '<param name=titleString value="All Basic Observations">' +
        '<param name=yAxisOptions value="gridOn tickOn noAutoScale">'+
        '<param name=yAxisLabelCount value="12">' +
        '<param name=yAxisTickCount value="12">' +
        '<param name=yAxisGridCount value="12">' +
        '<param name=yAxisStart value="0.0">' +
        '<param name=yAxisEnd value="240.0">' +
        '<param name=dataset0name value="Pulse">' +
        '<param name=dataset1name value="Temperature">' +
        '<param name=dataset2name value="Respiration">' +
        '<param name=dataset3name value="Systolic">' +
        '<param name=dataset4name value="Diastolic">' +
        '<param name=dataset0Image value="images/GraphTickBlue.gif">' +
        '<param name=dataset1Image value="images/GraphTickRed.gif">' +
        '<param name=dataset2Image value="images/GraphTickGreen.gif">' +
        '<param name=dataset3Image value="images/GraphTickCyan.gif">' +
        '<param name=dataset4Image value="images/GraphTickYellow.gif">' +
        '<param name=dataset0dateValues value="' + Dataset0dateValue + '">' +
        '<param name=dataset0yValues value="' + Dataset0yValue + '">' +
        '<param name=dataset1dateValues value="' + Dataset1dateValue + '">' +
        '<param name=dataset1yValues value="' + Dataset1yValue + '">' +
        '<param name=dataset2dateValues value="' + Dataset2dateValue + '">' +
        '<param name=dataset2yValues value="' + Dataset2yValue + '">' +
        '<param name=dataset3dateValues value="' + Dataset3dateValue + '">' +
        '<param name=dataset3yValues value="' + Dataset3yValue + '">' +
        '<param name=dataset4dateValues value="' + Dataset4dateValue + '">' +
        '<param name=dataset4yValues value="' + Dataset4yValue + '">' 
 EndBasic()
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
      alert(numField.title + " must be between " + minNumb + " and " + maxNumb);
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
//------------------------------------------------------------
// Graph Fluids
//------------------------------------------------------------
function GraphFluids(theTable) {
 SortWidgetName=theTable
 t=eval(SortWidgetName)
 GraphHead()
 Dataset0dateValue = ""
 Dataset0yValue = ""
 Dataset1dateValue = ""
 Dataset1yValue = ""
 DelimiterField = ""
 ReferenceRangeType=0
 for(var i = 0; i < t.rows.length; i++) {
   if (!isWhitespace(t.rows[i][18])){
     Dataset0dateValue += DelimiterField + DateTimeFormat(t.rows[i][1])
     Dataset1dateValue += DelimiterField + DateTimeFormat(t.rows[i][1])
     if (isWhitespace(t.rows[i][14])){
       Dataset0yValue += DelimiterField + "0.0" }
     else {
       Dataset0yValue += DelimiterField + t.rows[i][14] }
     if (isWhitespace(t.rows[i][12])){
       Dataset1yValue += DelimiterField + "0.0" }
     else {
       Dataset1yValue += DelimiterField + t.rows[i][12] }
     DelimiterField = ","
   }
 }
 GraphString += '<param name=titleString value="Fluid Observations">' +
        '<param name=yAxisOptions value="gridOn minTickOn">'+
        '<param name=dataset0name value="Input">' +
        '<param name=dataset1name value="Output">' +
        '<param name=dataset0Image value="images/GraphTickBlue.gif">' +
        '<param name=dataset1Image value="images/GraphTickRed.gif">' +
        '<param name=dataset0dateValues value="' + Dataset0dateValue + '">' +
        '<param name=dataset0yValues value="' + Dataset0yValue + '">' +
        '<param name=dataset1dateValues value="' + Dataset1dateValue + '">' +
        '<param name=dataset1yValues value="' + Dataset1yValue + '">' 
  EndFluids();
}
function EndFluids() {
 GraphString += '</applet></td></tr>' +
        '<tr><td bgcolor=#cccccc align=center>' +
        '<table width=100% border=0>' +
        '<tr><td width=33%>' +
        '<img src=../images/GraphIcon.gif onclick=GraphFluids("'+SortWidgetName+'") ' +
        ' hspace=4 align=absmiddle> Summary' +'</td>' +
        '<td width=33%>' +
       '<img src=../images/GraphIcon.gif onclick=GraphColumn("'+SortWidgetName+'","Input",14)'+
        ' hspace=4 align=absmiddle> Input' +'</td>' +
        '<td width=33%>' +
       '<img src=../images/GraphIcon.gif onclick=GraphColumn("'+SortWidgetName+'","Output",12)'+
        ' hspace=4 align=absmiddle> Output' + 
        '</td></tr></table>';
        '</td></tr></table>';
 GraphLocation.innerHTML = GraphString;
 GraphLocation.style.display="";
}
function FluidTotals() {
   TableString[TableString.length] = "<tr height=" + t.RowHeight + " class=TableRowTotal>" ;
   TableString[TableString.length] = "<td align=" + t.columns[0][4] ;
   TableString[TableString.length] = " width=" + t.columns[0][7] + "><b>Total " ;
   TableString[TableString.length] = FormatShortDate(LastDateValue);
   TableString[TableString.length] = "</td>" ;
   for(var j = 1; j < t.columns.length; j++) {
     TableString[TableString.length] = "<td align=" + t.columns[j][4] ;
     TableString[TableString.length] = " width=" + t.columns[j][7] + "><b>" ;
     switch(t.columns[j][1]) {
       case "Number" :
         TableString[TableString.length] = t.totals[j];
         break;
       default    :
         TableString[TableString.length] = "&nbsp;"
         break;
     }
     TableString[TableString.length] = "</td>" ;
     }
   TableString[TableString.length] = "</tr>" ;
}
function FluidTableBody() {
 for(var j = 0; j < t.columns.length; j++) { t.totals[j] = 0; }
 LastDateValue=t.rows[0][1].substring(0,8)
 for(var i = 0; i < t.rows.length; i++) {
   if (LastDateValue != t.rows[i][1].substring(0,8)) {
     FluidTotals(); 
     LastDateValue=t.rows[i][1].substring(0,8)
     for(var k = 0; k < t.columns.length; k++) { t.totals[k] = 0; }
   }
   RowClass="TableRowEven"
   if (i%2==1) { RowClass="TableRowOdd" }
   TableString[TableString.length] = "<tr height=" + t.RowHeight + " class=" + RowClass + ">" ;
   for(var j = 0; j < t.columns.length; j++) {
     TableString[TableString.length] = "<td align=" + t.columns[j][4]  ;
     if(t.columns[j][11]!=undefined) {
       if(!isWhitespace(t.rows[i][t.columns[j][11]])) {
         TableString[TableString.length] = " class=" + 
                                           t.rows[i][t.columns[j][11]]  ;
       }
     }
     TableString[TableString.length] = " width=" + t.columns[j][7] + ">" ;
     LinkColumn = t.columns[j][6];
     LinkFlag = 0
     ImgString = t.columns[j][5];
     jsFunction = ""
     if(t.columns[j][12]!=undefined) { jsFunction = t.columns[j][12]; }
     if (LinkColumn != "") {
       LinkHref = t.rows[i][t.columns[j][6]];
       if (LinkHref != ""){ 
         if (jsFunction == "ResultLink"){ 
             TableString[TableString.length] = "<a href='javascript:ResultLink(\"" + LinkHref +
                 "\",\"" + t.rows[i][6] + "\",\"" + t.rows[i][7] + "\",\""+TableLocation.id+"\")'>" ; 
             LinkFlag = 1 }
         else {
           if (jsFunction != ""){ 
             TableString[TableString.length] = "<a href='javascript:" + jsFunction + "(\"" +
                                                LinkHref.replace(/\s*$/,"") + "\");'>"  
             LinkFlag = 1 }
           else {
             TableString[TableString.length] = "<a href=\"" + LinkHref.replace(/\s*$/,"") + "\">"  
             LinkFlag = 1 }
         }
       }
     }
     switch(t.columns[j][1]) {
       case "MaxLimit" :  
         FormatIcon();
         ThisValue=t.rows[i][t.columns[j][2]];
         MaxValue=t.columns[j][8];
         HighLightColor=t.columns[j][9];
         if (ThisValue>MaxValue) {
            TableString[TableString.length] = "<font color="+HighLightColor+"><b>"
            TableString[TableString.length] = t.rows[i][t.columns[j][2]];
            TableString[TableString.length] = "</font><b>" }
         else {
            TableString[TableString.length] = t.rows[i][t.columns[j][2]]; }
         if ( LinkFlag ) { TableString[TableString.length] = "</a>"; }
         break;
       case "MinLimit" :  
         FormatIcon();
         ThisValue=t.rows[i][t.columns[j][2]];
         MaxValue=t.columns[j][8];
         HighLightColor=t.columns[j][9];
         if (ThisValue<MaxValue) {
            TableString[TableString.length] = "<font color="+HighLightColor+"><b>"
            TableString[TableString.length] = t.rows[i][t.columns[j][2]];
            TableString[TableString.length] = "</font><b>" }
         else {
            TableString[TableString.length] = t.rows[i][t.columns[j][2]]; }
         if ( LinkFlag ) { TableString[TableString.length] = "</a>"; }
         break;
       case "Date" :  
         FormatIcon();
         TableString[TableString.length] = FormatDate(t.rows[i][t.columns[j][2]]);
         break;
       case "Date2" :  
         FormatIcon();
         TableString[TableString.length] = FormatShortDate(t.rows[i][t.columns[j][2]]);
         break;
       case "DateTime" :  
         FormatIcon();
         TableString[TableString.length] = FormatDateTime(t.rows[i][t.columns[j][2]]);
         break;
       case "DateTime2" :  
         FormatIcon();
         TableString[TableString.length] = FormatDate(t.rows[i][t.columns[j][2]]);
         break;
       case "DateTime3" :  
         FormatIcon();
         TableString[TableString.length] = FormatShortDateTime(t.rows[i][t.columns[j][2]]);
         break;
       case "ResultDate" :  
         FormatResultIcon(t.rows[i][6]);
         TableString[TableString.length] = FormatDate(t.rows[i][t.columns[j][2]]);
         break;
       case "ResultDateTime" :  
         FormatResultIcon(t.rows[i][6]);
         TableString[TableString.length] = FormatDateTime(t.rows[i][t.columns[j][2]]);
         break;
       case "DateTimeImg" :
         if (t.columns[j][5] == "") {
           ImgString=t.rows[i][t.columns[j][8]];
         }
         else {
           ImgString=t.columns[j][5] +
                       t.rows[i][t.columns[j][8]] + ".gif"
         }
         FormatIcon();
         TableString[TableString.length] = FormatDateTime(t.rows[i][t.columns[j][2]]);
         break;
       case "Time" :  
         FormatIcon();
         TableString[TableString.length] = FormatTime(t.rows[i][t.columns[j][2]]);
         break;
       case "Name" :  
         FormatIcon();
         TableString[TableString.length] = FormatName(t.rows[i][t.columns[j][2]]);
         break;
       case "Initials" :  
         FormatIcon();
         TableString[TableString.length] = FormatInitials(t.rows[i][t.columns[j][2]]);
         break;
       case "ImageText" :
         if (t.columns[j][5] == "") {
           ImgString=t.rows[i][t.columns[j][8]];
         }
         else {
           ImgString=t.columns[j][5] +
                       t.rows[i][t.columns[j][8]] + ".gif"
         }
         FormatIcon();
         TableString[TableString.length] = (t.rows[i][t.columns[j][2]]);
         break;
       case "NameAll" :  
         FormatIcon();
         TableString[TableString.length] = FormatNameAll(t.rows[i][t.columns[j][2]]);
         break;
       case "Graph":  
         TableString[TableString.length] = FormatGraph(t.rows[i][t.columns[j][2]],t.columns[j][5]);
         break;
       case "IconLink":  
         FormatIcon();
         break;
       case "Image":  
         if (t.columns[j][5] == "") {
           ImageString=t.rows[i][t.columns[j][2]];
         }
         else {
           ImageString=t.columns[j][5] + t.rows[i][t.columns[j][2]] + ".gif"
         }
         TableString[TableString.length] = FormatImage(ImageString);
         break;
       case "TitleIcon":  
         ImageString=t.columns[j][5] + ".gif"
         FormatTitleIcon(t.rows[i][t.columns[j][2]]);
         if ( LinkFlag ) { TableString[TableString.length] = "</a>"; }
         break;
       case "Patient":   
         FormatPatientIcon(t.rows[i][t.columns[j][8]])
         TableString[TableString.length] = t.rows[i][t.columns[j][2]];
         if ( LinkFlag ) { TableString[TableString.length] = "</a>"; }
         break;
       case "Number"    :   
         FormatIcon();
         if (!isWhitespace(t.rows[i][t.columns[j][2]])) {
           t.totals[j] += parseInt(t.rows[i][t.columns[j][2]],10); }
         TableString[TableString.length] = t.rows[i][t.columns[j][2]];
         if ( LinkFlag ) { TableString[TableString.length] = "</a>" }
         break;
       default    :   
         FormatIcon();
         TableString[TableString.length] = t.rows[i][t.columns[j][2]];
         if ( LinkFlag ) { TableString[TableString.length] = "</a>"; }
         break;
     }
     if (isWhitespace(t.rows[i][t.columns[j][2]])) {
       TableString[TableString.length] = "&nbsp;" }
     TableString[TableString.length] = "</td>" ;
     }
   TableString[TableString.length] = "</tr>" ;
   }
}
function EndHW() {
 GraphString += '</applet></td></tr>' +
        '<tr><td bgcolor=#cccccc align=center>' +
        '<table width=100% border=0>' +
        '<tr><td width=20%>' +
        '<img src=../images/GraphIcon.gif onclick=GraphAllHW("'+SortWidgetName+'") ' +
        ' hspace=4 align=absmiddle> All' +'</td>' +
        '<td width=20%>' +
        '<img src=../images/GraphIcon.gif onclick=GraphHW("'+SortWidgetName+'","Height",41) ' +
        ' hspace=4 align=absmiddle> Height' +'</td>' +
        '<td width=20%>' +
       '<img src=../images/GraphIcon.gif onclick=GraphHW("'+SortWidgetName+'","Weight",40)'+
        ' hspace=4 align=absmiddle> Weight' + '</td>' +
        '<td width=20%>' +
       '<img src=../images/GraphIcon.gif onclick=GraphHW("'+SortWidgetName+'","BMI",38)'+
        ' hspace=4 align=absmiddle> BMI' + '</td>' +
        '<td width=20%>' +
       '<img src=../images/GraphIcon.gif onclick=GraphHW("'+SortWidgetName+'","BSA",39)'+
        ' hspace=4 align=absmiddle> BSA' +
        '</td></tr></table>';
 GraphLocation.innerHTML = GraphString;
 GraphLocation.style.display="";
}
//------------------------------------------------------------
// Single Line Graph
//------------------------------------------------------------
function GraphBMI(theTable,GraphTitle,ColumnNo) {
 SortWidgetName=theTable
 t=eval(SortWidgetName)
 GraphHead()
 Dataset0dateValue = ""
 Dataset1dateValue = ""
 Dataset2dateValue = ""
 Dataset3dateValue = ""
 Dataset4dateValue = ""
 Dataset5dateValue = ""
 Dataset0yValue = ""
 Dataset1yValue = ""
 Dataset2yValue = ""
 DelimiterField = ""
 ReferenceRangeType=0
 for(var i = 0; i < t.rows.length; i++) {
   if (!isWhitespace(t.rows[i][ColumnNo])){
     Dataset0dateValue += DelimiterField + DateTimeFormat(t.rows[i][1])
     Dataset1dateValue += DelimiterField + DateTimeFormat(t.rows[i][1])
     Dataset2dateValue += DelimiterField + DateTimeFormat(t.rows[i][1])
     Dataset0yValue += DelimiterField + t.rows[i][ColumnNo]
     Dataset1yValue += DelimiterField + "18"
     Dataset2yValue += DelimiterField + "25"
     DelimiterField = ","
   }
 }
 GraphString += '<param name=yAxisOptions value="gridOn tickOn noAutoScale">'+
        '<param name=yAxisLabelCount value="10">' +
        '<param name=yAxisTickCount value="10">' +
        '<param name=yAxisGridCount value="10">' +
        '<param name=yAxisStart value="10">' +
        '<param name=yAxisEnd value="40">' +
        '<param name=titleString value="' + GraphTitle + '">' +
        '<param name=dataset0Image value="images/GraphTickBlue.gif">'+
	'<param name=dataset0Name value="' + GraphTitle + '">' +
	'<param name=dataset1Name value="Normal Min">' +
	'<param name=dataset2Name value="Normal Max">' +
        '<param name=dataset0dateValues value="' + Dataset0dateValue + '">' +
        '<param name=dataset0yValues value="' + Dataset0yValue + '">' +
        '<param name=dataset1dateValues value="' + Dataset1dateValue + '">' +
       '<param name=dataset1Color value="darkred">' +
        '<param name=dataset1yValues value="' + Dataset1yValue + '">' +
        '<param name=dataset2dateValues value="' + Dataset2dateValue + '">' +
       '<param name=dataset2Color value="darkred">' +
        '<param name=dataset2yValues value="' + Dataset2yValue + '">' 
 EndHW()
}
//------------------------------------------------------------
// Single Line Graph
//------------------------------------------------------------
function GraphHW(theTable,GraphTitle,ColumnNo) {
 if (GraphTitle=="BMI") { GraphBMI(theTable,GraphTitle,ColumnNo);return; }
 SortWidgetName=theTable
 t=eval(SortWidgetName)
 GraphHead()
 Dataset0dateValue = ""
 Dataset0yValue = ""
 DelimiterField = ""
 ReferenceRangeType=0
 for(var i = 0; i < t.rows.length; i++) {
   if (!isWhitespace(t.rows[i][ColumnNo])){
     Dataset0dateValue += DelimiterField + DateTimeFormat(t.rows[i][1])
     Dataset0yValue += DelimiterField + t.rows[i][ColumnNo]
     DelimiterField = ","
   }
 }
 if (GraphTitle=="Weight") {
   GraphString += '<param name=yAxisOptions value="gridOn tickOn noAutoScale">'+
        '<param name=yAxisLabelCount value="10">' +
        '<param name=yAxisTickCount value="10">' +
        '<param name=yAxisGridCount value="10">' +
        '<param name=yAxisStart value="0">' +
        '<param name=yAxisEnd value="200">' 
 }
 if (GraphTitle=="Height") {
   GraphString += '<param name=yAxisOptions value="gridOn tickOn noAutoScale">'+
        '<param name=yAxisLabelCount value="10">' +
        '<param name=yAxisTickCount value="10">' +
        '<param name=yAxisGridCount value="10">' +
        '<param name=yAxisStart value="0">' +
        '<param name=yAxisEnd value="250">' 
 }
 if (GraphTitle=="BSA") {
   GraphString += '<param name=yAxisOptions value="gridOn tickOn noAutoScale">'+
        '<param name=yAxisLabelCount value="10">' +
        '<param name=yAxisTickCount value="10">' +
        '<param name=yAxisGridCount value="10">' +
        '<param name=yAxisStart value="0">' +
        '<param name=yAxisEnd value="5">' 
 }
 GraphString += '<param name=titleString value="' + GraphTitle + '">' +
        '<param name=dataset0Image value="images/GraphTickBlue.gif">'+
	'<param name=dataset0Name value="' + GraphTitle + '">' +
        '<param name=dataset0dateValues value="' + Dataset0dateValue + '">' +
        '<param name=dataset0yValues value="' + Dataset0yValue + '">' 
 EndHW()
}
//------------------------------------------------------------
// Single Line Graph
//------------------------------------------------------------
function GraphAllHW() {
 GraphHead()
 Dataset0dateValue = ""
 Dataset0yValue = ""
 Dataset1dateValue = ""
 Dataset1yValue = ""
 Dataset2dateValue = ""
 Dataset2yValue = ""
 Dataset3dateValue = ""
 Dataset3yValue = ""
 DelimiterField0 = ""
 DelimiterField1 = ""
 DelimiterField2 = ""
 DelimiterField3 = ""
 ReferenceRangeType=0
 for(var i = 0; i < t.rows.length; i++) {
   if (!isWhitespace(t.rows[i][41])){
     Dataset0dateValue += DelimiterField0 + DateTimeFormat(t.rows[i][1])
     Dataset0yValue += DelimiterField0 + t.rows[i][41]
     DelimiterField0 = "," }
   if (!isWhitespace(t.rows[i][40])){
     Dataset1dateValue += DelimiterField1 + DateTimeFormat(t.rows[i][1])
     Dataset1yValue += DelimiterField1 + t.rows[i][40]
     DelimiterField1 = "," }
   if (!isWhitespace(t.rows[i][38])){
     Dataset2dateValue += DelimiterField2 + DateTimeFormat(t.rows[i][1])
     Dataset2yValue += DelimiterField2 + t.rows[i][38]
     DelimiterField2 = "," }
   if (!isWhitespace(t.rows[i][39])){
     Dataset3dateValue += DelimiterField3 + DateTimeFormat(t.rows[i][1])
     Dataset3yValue += DelimiterField3 + t.rows[i][39]
     DelimiterField3 = "," }
 }
 GraphString += '<param name=titleString value="Height and Weight Observations">' +
        '<param name=yAxisOptions value="gridOn tickOn noAutoScale">'+
        '<param name=yAxisLabelCount value="10">' +
        '<param name=yAxisTickCount value="10">' +
        '<param name=yAxisGridCount value="10">' +
        '<param name=yAxisStart value="0.0">' +
        '<param name=yAxisEnd value="250.0">' +
        '<param name=dataset0name value="Weight">' +
        '<param name=dataset1name value="Height">' +
        '<param name=dataset2name value="BMI">' +
        '<param name=dataset3name value="BSA">' +
        '<param name=dataset0Image value="images/GraphTickBlue.gif">' +
        '<param name=dataset1Image value="images/GraphTickRed.gif">' +
        '<param name=dataset2Image value="images/GraphTickGreen.gif">' +
        '<param name=dataset3Image value="images/GraphTickCyan.gif">' +
        '<param name=dataset0dateValues value="' + Dataset0dateValue + '">' +
        '<param name=dataset0yValues value="' + Dataset0yValue + '">' +
        '<param name=dataset1dateValues value="' + Dataset1dateValue + '">' +
        '<param name=dataset1yValues value="' + Dataset1yValue + '">' +
        '<param name=dataset2dateValues value="' + Dataset2dateValue + '">' +
        '<param name=dataset2yValues value="' + Dataset2yValue + '">' +
        '<param name=dataset3dateValues value="' + Dataset3dateValue + '">' +
        '<param name=dataset3yValues value="' + Dataset3yValue + '">' 
 EndHW()
}
function FormatWarningIcon(t,i) {
  var IconType="0";
  var IconTitle="";
  if (!isWhitespace(t.rows[i][5])) { /* Temperature */
    if (t.rows[i][5]<35.5) {
       IconType="1";IconTitle="Temperature Low - Clinical Review Required"
    }
    if (t.rows[i][5]>38.5) {
       IconType="1";IconTitle="Temperature High - Clinical Review Required"
    }
  }
  if (!isWhitespace(t.rows[i][6])) { /* Resps */
    if (parseInt(t.rows[i][6],10)<10) {
       IconType="1";IconTitle="Respiration Low - Clinical Review Required"
    }
    if (parseInt(t.rows[i][6],10)>25) {
       IconType="1";IconTitle="Respiration High - Clinical Review Required"
    }
  }
  if (!isWhitespace(t.rows[i][8])) { /* O2 Sats */
    if (parseInt(t.rows[i][8],10)<95) {
       IconType="1";IconTitle="Oxygen Sats Low - Clinical Review Required"
    }
  }
  if (!isWhitespace(t.rows[i][4])) { /* Pulse */
    if (parseInt(t.rows[i][4],10)<50) {
       IconType="1";IconTitle="Heart Rate Low - Clinical Review Required"
    }
    if (parseInt(t.rows[i][4],10)>120) {
       IconType="1";IconTitle="Heart Rate High - Clinical Review Required"
    }
  }
  if (!isWhitespace(t.rows[i][7].replace(/\/.*/,""))) { /* BP */
    if (parseInt(t.rows[i][7].replace(/\/.*/,""),10)<100) {
       IconType="1";IconTitle="BP Low - Clinical Review Required"
    }
    if (parseInt(t.rows[i][7].replace(/\/.*/,""),10)>180) {
       IconType="1";IconTitle="BP High - Clinical Review Required"
    }
  }
  if (t.rows[i][28]>0) {              /* BSL */
    if (t.rows[i][28]<4) {
       IconType="1";IconTitle="Blood Sugar Low - Clinical Review Required"
    }
  }
  if (!isWhitespace(t.rows[i][29])) { /* Neuro Status Code */
    if (parseInt(t.rows[i][29])==2) {
       IconType="1";IconTitle="Neurological Status Pain - Clinical Review Required"
    }
  }
  if (!isWhitespace(t.rows[i][6])) { /* Resps */
    if (parseInt(t.rows[i][6],10)<5)  {
       IconType="2";IconTitle="Respiration Very Low - Rapid Response Required"
    }
    if (parseInt(t.rows[i][6],10)>30) {
       IconType="2";IconTitle="Respiration Very High - Rapid Response Required"
    }
  }
  if (!isWhitespace(t.rows[i][8])) { /* O2 Sats */
    if (parseInt(t.rows[i][8],10)<90) {
       IconType="2";IconTitle="Oxygen Sats Very Low - Rapid Response Required"
    }
  }
  if (!isWhitespace(t.rows[i][9])) { /* O2 Flow */
    if (!isWhitespace(t.rows[i+1][9])) { /* Previous O2 Flow */
      if (parseFloat(t.rows[i][9])>parseFloat(t.rows[i+1][9])) {
       IconType="2";IconTitle="Increased Oxygen Flow - Rapid Response Required"
      }
    }
  }
  if (!isWhitespace(t.rows[i][4])) { /* Pulse */
    if (parseInt(t.rows[i][4],10)<40) {
       IconType="2";IconTitle="Heart Rate Very Low - Rapid Response Required"
    }
    if (parseInt(t.rows[i][4],10)>140) {
       IconType="2";IconTitle="Heart Rate Very High - Rapid Response Required"
    }
  }
  if (!isWhitespace(t.rows[i][7].replace(/\/.*/,""))) { /* BP */
    if (parseInt(t.rows[i][7].replace(/\/.*/,""),10)<90) {
       IconType="2";IconTitle="BP Very Low - Rapid Response Required"
    }
    if (parseInt(t.rows[i][7].replace(/\/.*/,""),10)>200) {
       IconType="2";IconTitle="BP Very High - Rapid Response Required"
    }
  }
  if (t.rows[i][28]>0) { /* BSL */
    if (t.rows[i][28]<1) {
       IconType="2";IconTitle="Blood Sugar Very Low - Rapid Response Required"
    }
  }
  if (!isWhitespace(t.rows[i][29])) { /* Neuro Status Code */
    if (parseInt(t.rows[i][29])==1) {
       IconType="2";IconTitle="Neurological Status Unresponsive - Rapid Response Required"
    }
  }
  //ImageString="StatusIcon" + IconType + ".png"
  //TableString[TableString.length] = FormatImage(ImageString);
  TableString[TableString.length] = "<span title='"+IconTitle+"' class=StatusIcon"+IconType+"></span>";
}
