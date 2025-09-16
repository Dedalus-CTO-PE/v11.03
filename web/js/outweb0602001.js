//jsVersion  : V11.03.00
//========================================================================
// Program   : outweb0602001.js
//
// Function  : Standard Functions Used in outweb0602001 templates
//
// Version   : 
//
// V9.04.00 07.07.2005 Ebon Clements  CAR 62220
//          Added PrintLabels
// V9.03.01 04.03.2004 Davin Sloan    CAR 34825
//          Added function ValidateMRTS()
// V9.02.02 02.08.2002  Ebon Clements
//          Fixed size of Dframe for medical records move
// V9.02.01 02.07.2002  Pat Dirito
//          Fixed Function moveRecords
// V9.02.00 29.02.2002  BGA
//========================================================================
OutputArray = new Array();  // Create Array to Store Rows of Table
OldArray = new Array();  // Create Array to Store Rows of Table
var MKey="";
function OutputTable(ReturnCode) {
  var MKey="";
  var Flag=0;
  AddOutputArray(ReturnCode)
}
function AddOutputArray(MKey) {
  OutputArray[OutputArray.length] = "<input type=hidden name=mrreckey" +
                                    " value='" + MKey + "'>"
}
function OutputDivision() {
    OutputString=""
    for (i=OutputArray.length-1;i>=0;i--) {
      OutputString+=OutputArray[i] }
    Results.innerHTML=OutputString
}
function RemoveTable(ReturnCode) {
  var MKey="";
  var Flag=0;
  OldArray=OutputArray
  OutputArray = new Array();  // Create Array to Store Rows of Table
  j=0;
  for (i=0;i<OldArray.length;i++) {
    x = ReturnCode.substring(0,20)
    y = OldArray[i].substring(40,60)
    if (x!=y) {
      OutputArray[j]=OldArray[i]
      j++ }
    else {
      Flag="1" }
  }
  if (Flag == "1") {
    OutputDivision() }
  else {
    AddOutputArray(ReturnCode)
    OutputDivision() }
}

function ValidateMRTS() {
  var serverURL = "../cgi-bin/mrtweb04.pbl?reportno=6" +
                  "&valdmrts=" + SelectPeriod.mrtsecno.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    SelectPeriod.mrtsecid.value=ReturnValue[0];
    return true;
  } else {
    SelectPeriod.mrtsecno.select();
    return false }
}

function moveRecords() {
  if (validateMandatory(SelectPeriod)) {

    if (SelectPeriod.mrtsecno!=undefined) {
      ans=ValidateMRTS();
      if (ans==false) { return; }
    }
    if (isWhitespace(Results.innerHTML)) { 
       alert("No Records Selected");  
       return }
    linkURL="outweb06.pbl?reportno=2&template=002";
    Left=(document.body.clientWidth-500)/2
    DFrameLink(linkURL,100,Left,500,300);
//  document.SelectPeriod.updatety.value="A";
//  document.SelectPeriod.target="PopUpFrame"
//  document.SelectPeriod.submit();
  }
}
function ViewMicroFilm(microflm) {
  linkURL="outweb06.pbl?reportno=2&template=003" +
          "&microflm=" + microflm 
  Left=(document.body.clientWidth-300)/2
  DFrameLink(linkURL,100,Left,300,100);
}
function LimitReached() {
 alert("Limit Reached")
}
// ------------------------------------------------------------
// Columns Available
//  0 - HTML Link    
//  1 - UR No  
//  2 - Visit No
//  3 - Patient's Name          
//  4 - App Time           
//  5 - Admitting Point
//  6 - Current Location
//  7 - Type of document
//  8 - Filled Status
// ------------------------------------------------------------
function InitTable(TableView) {
OutputDivision()
switch (TableView) {
case 0: {
 t = new Table(1,0,1,"100%","center");
 t.addColumn("UR No.","String",1,1,"left","","",50)
 t.addColumn("Visit No.","String",2,2,"left","","",50)
 t.addColumn("Patient's Name","String",3,3,"left","","",140)
 t.addColumn("Adm.Book Time","String",4,4,"left","","",100)
 t.addColumn("Admitting Point","String",5,5,"left","","",60)
 t.addColumn("Current Location","String",6,6,"left","","",140)
 t.addColumn("Document Type","String",7,7,"left","","",60)
 t.addColumn("Filled","String",8,8,"center","","",40)
 AddTableRows()
 TableOutput(0,1);    // Order Column,Asc Dsc
 break;
 }
 }
}
function PrintLabels() {
 Left=(document.body.clientWidth-300)/2
 linkurl="mrtweb01.pbl?reportno=15&template=002"
 DFrameLink(linkurl,50,Left,300,130)
}
