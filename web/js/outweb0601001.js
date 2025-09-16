//jsVersion  : V11.03.00
//========================================================================
// Program   : outweb0601001.js
//
// Function  : Standard Functions Used in outweb0601001 templates
//
// Version   : 
// V9.04.00 07.07.2005 Ebon Clements  CAR 62220
//          Added PrintLabels
// V9.03.01 04.03.2004 Davin Sloan    CAR 34825
//          Added function ValidateMRTS()
// V9.02.00 29.02.2002  BGA
//
//========================================================================
OutputArray = new Array();  // Create Array to Store Rows of Table
OldArray = new Array();  // Create Array to Store Rows of Table
var MKey="";
function OutputTable(ReturnCode) {
  var MKey="";
  var Flag=0;
  AddOutputArray(ReturnCode)
}
//
//  Next Set of Records when Clinic is set.
//
function NextRecordSet(key) {
  NextPage.innerHTML="<input type=button class=button value=Next " +
                     "onclick='NextRecords(\"" + key + "\");'>"
}
function NextRecords(Key) {
  document.SelectPeriod.booknkey.value=Key;
  document.SelectPeriod.submit();
}
//
//  Next Set of Records when 50 Sessions have been displayed.
//
function SetNextPage(sessionKey) {
  NextPage.innerHTML="<input type=button class=button value=Next " +
                     "onclick='GoNextPage(\"" + sessionKey + "\");'>"
}
function GoNextPage(sessionKey) {
  document.SelectPeriod.nextsess.value=sessionKey;
  document.SelectPeriod.submit();
}
function AddOutputArray(MKey) {
    OutputArray[OutputArray.length] = "<input type=hidden name=mrreckey" +
                                      " value='" + MKey + "'>"
}
function OutputDivision() {
    OutputString=""
    for (i=OutputArray.length-1;i>=0;i--) {
      OutputString+=OutputArray[i]
    }
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
      j++
    }
    else {
      Flag="1"
    }
  }
  if (Flag == "1") {
    OutputDivision()
  }
  else {
    AddOutputArray(ReturnCode)
    OutputDivision()
  }
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
    document.SelectPeriod.updatety.value="A";
    document.SelectPeriod.target="PopUpFrame"
    document.SelectPeriod.submit();
  }
}
function SubmitSearch() {
  document.SelectPeriod.submit();
}
function LimitReached() {
 alert("Limit Reached")
}
function ViewMicroFilm(microflm) {
  linkURL="outweb06.pbl?reportno=2&template=003" +
          "&microflm=" + microflm 
  Left=(document.body.clientWidth-300)/2
  DFrameLink(linkURL,100,Left,300,100);
}
// ------------------------------------------------------------
// Columns Available
//  0 - HTML Link    
//  1 - UR No  
//  2 - Patient's Name          
//  3 - App Time           
//  4 - Type of record
//  5 - Current Location
//  6 - Volume number    
//  7 - Clinic type desc 
//  8 - Clinic id desc   
//  9 - Multiple bookings per ur
// 10 - Adds  
// 11 - Filled Status
// ------------------------------------------------------------
function InitTable(TableView) {
OutputDivision()
switch (TableView) {
case 0: {
 t = new Table(1,0,1,"100%","center",30,30);
 t.addColumn("UR No.","String",1,10,"left","","",60)
 t.addColumn("Patient's Name","String",2,2,"left","","",156)
 t.addColumn("Clinic Id","String",8,8,"left","","",78)
 t.addColumn("Type","String",7,7,"left","","",39) 
 t.addColumn("Time","String",3,3,"left","","",30)
 t.addColumn("M.Book","String",9,9,"center","","",44)
 t.addColumn("Doc. Type","String",4,4,"left","","",79)
 t.addColumn("Current Loc","String",5,5,"left","","",79)
 t.addColumn("Vol.","String",6,6,"center","","",25)
 t.addColumn("Adds","String",11,11,"center","","",25)
 t.addColumn("Filled","String",12,12,"center","","",25)
 AddTableRows()
 TableOutput(1,1);    // Order Column,Asc Dsc
 break;
 }
 }
}
function PrintLabels() {
 Left=(document.body.clientWidth-300)/2
 linkurl="mrtweb01.pbl?reportno=15&template=002"
 DFrameLink(linkurl,50,Left,300,130)
}
