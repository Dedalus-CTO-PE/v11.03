//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/patweb9603.js
//
// Modification 
//
// Version         Date                         Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.00       13/04/2012                   Version change
// V10.01.00       13/04/2012                   Version change
// V10.00.00       13/04/2012                   Created for Mobility Suite
//

function selectTransferType(el) {
  itemNo=el.options[el.selectedIndex].value;
  switch (parseInt(itemNo)) {
   case 1:
     theURL="patweb96.pbl?reportno=3&template=707"
     break;
   case 2:
     theURL="patweb96.pbl?reportno=3&template=708"
     break;
   case 3:
     theURL="patweb96.pbl?reportno=3&template=709"
     break;
   case 4:
     theURL="patweb96.pbl?reportno=3&template=710"
     break;
   case 5:
     theURL="patweb96.pbl?reportno=3&template=711"
     break;
   case 6:
     theURL="patweb96.pbl?reportno=3&template=712"
     break;
   }
  location.href=theURL + "&urnumber="+document.PatientLinks.urnumber.value +
                 "&admissno="+document.PatientLinks.admissno.value
}
//------------------------------------------------------------
// Get Select List Options
//------------------------------------------------------------
function getBeds(el) {
  ReturnSelect=document.getElementById("trntobed")
  var serverURL   = "../cgi-bin/comweb80.pbl?reportno=31" +
                    "&valdcode=" + el.options[el.selectedIndex].value.replace(/ /g,"+")
  xmlHttp = createHttpObject();
  xmlHttp.open("GET", serverURL, false);
  xmlHttp.send();
  var end_key = '</RETURN_VALUE>';
  var data = xmlHttp.responseText;
  data_start_index = data.indexOf('>',0) + 1;
  end_index = data.indexOf(end_key,data_start_index);
  returnValue=unescape(data.substring(data_start_index,end_index));
  if (xmlHttp.status==200) {
    ReturnSelect.options.length=0
    ReturnValue=returnValue.split("|");
    if (ReturnValue.length==1) {
         ReturnSelect.className="";
         ReturnSelect.options[ReturnSelect.options.length]=
          new Option('N/A',' '); }
    else {
    ReturnSelect.options[ReturnSelect.options.length]=new Option("","");
    for (var j=0; j < ReturnValue.length-1; j++) {
       if (!isWhitespace(ReturnValue[j])) {
         ReturnSelect.className="Mandatory";
         SelectValue=ReturnValue[j].split(",");
         ReturnSelect.options[ReturnSelect.options.length]=
          new Option(SelectValue[1],SelectValue[0]); } } } 
  }
  else {
    alertify.alert(xmlHttp.responseText);
  }
}
//-----------------------------------------------------------------
// Function To Check Bed Status
//
// NOTE: In addition to 'wardcode' and 'bedcode' this function receives the
//       following optional parameters:
//  admisdte       - Admission Date
//                   (This parameter has to be passed as the third parameter)
//  staydays       - Planned Length of Stay in the Hospital (in days)
//                   (This parameter has to be passed as the fourth parameter)
//  ReturnFunction - function that is executed after 'checkBedStatus()'
//                   completes it's execution.
//-----------------------------------------------------------------
function checkBedStatus(wardcode,beddcode) {
  if(PatientLinks.ptcnbman!=undefined){
    if(PatientLinks.ptcnbman.value=="1"){
       checkBedManagement(wardcode,beddcode);
       return;}
  }
  admissno=PatientLinks.admissno.value.replace(/ /g,"+")
//  if (isWhitespace(wardcode)) return;;
  ReturnFunction="" ;
  var admisdte="";
  var admistme="";
  var staydays="0";
  for (var i=2; i < checkBedStatus.arguments.length; i++) {
   if (typeof(checkBedStatus.arguments[i]) == 'function') {
     ReturnFunction=checkBedStatus.arguments[i] } }

  // Receive optional parameters
  if (checkBedStatus.arguments.length >= 4) {
    admisdte=checkBedStatus.arguments[2].replace(/ /g,"+");
    staydays=checkBedStatus.arguments[3].replace(/ /g,"+");
  }
  if (checkBedStatus.arguments.length >= 5) {
   if (typeof(checkBedStatus.arguments[4]) != 'function') {
     admistme=checkBedStatus.arguments[4].replace(/ /g,"+");
   }
  } 
  var serverURL = "../cgi-bin/patweb96.pbl?reportno=12&remoteno=1" +
                  "&wardcode="+wardcode.replace(/ /g,"+") +
                  "&beddcode="+beddcode.replace(/ /g,"+") +
                  "&admissno="+admissno.replace(/ /g,"+") +
                  "&admisdte="+admisdte.replace(/ /g,"+") +
                  "&admistme="+admistme.replace(/ /g,"+") +
                  "&staydays="+staydays.replace(/ /g,"+"); 
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction(wardcode,beddcode) } }
}
