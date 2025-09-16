//jsVersion  : V11.03.00
//========================================================================
// Program   : CaseTeamSelect.js
//
// Function  : Standard utility functions used for Case Team (allcasaf) select
//
// Version   :
//---------------------------------------------------------------
// V10.07.00 19/10/2015  Don Nguyen     CAR 316625
//           Created new.
//---------------------------------------------------------------
//
function getCaseTeamByHCP(hcp,caseCode,caseDescription,refrlDate)
{
  //Responsible HCP field
  var hcpCode = hcp;

  //Case Team field
  var teamCode = caseCode
  var teamDescription = caseDescription;

  returnObject = new Object();//remote script server return server
  var arr = new Array(); //temp array

  //set object properties
  returnObject.value = "";
  returnObject.name = "";

  //remote script call to patweb80 server
  validateCaseTeam(92,hcpCode,returnObject,refrlDate);

  arr = returnObject.value.split("|");

  if(arr.length != 0 )
  {
    //hcp is in more then one Case Team
    if(arr.length > 2 )
    {
       //popup a list to choose from
       ShowCaseTeamHCPFrame("allweb02.pbl?reportno=02&template=016"+
                             "&valdrdate="+refrlDate.value+
                             "&hcpCode="+hcpCode.value,caseCode,caseDescription);
    }
    else
    {
      //one hcp - populate the Case Team fields
      teamCode.value = (arr[0].split(":"))[0] == undefined ?
                                       teamCode.value : (arr[0].split(":"))[0];
      teamDescription.value = (arr[0].split(":"))[1] == undefined ?
                                       teamCode.value : (arr[0].split(":"))[1];
    }
  }
}

function getHCPbyCaseTeam(caseCode,hcp,hcpDescription,refrlDate)
{
  //Responsible HCP field
  var caseTeamCode = caseCode;

  if(caseTeamCode.value.replace(/ /g,"") == "")
     return;;

  //Case Team field
  var hcpCode = hcp;
  var hcpDescription = hcpDescription;

  returnObject = new Object();//remote script server return server
  var arr = new Array(); //temp array

  //set object properties
  returnObject.value = "";
  returnObject.name = "";

  //remote script call to patweb80 server

  validateCaseTeam(93,caseTeamCode,returnObject,refrlDate);

  arr = returnObject.value.split("|");
  if(arr.length != 0 )
  {
    //hcp is in more then one Case Team
    if(arr.length > 2 )
    {
       //popup a list to choose from

        ShowCaseTeamHCPFrame("allweb02.pbl?reportno=02&template=017"+
                             "&valdrdat="+refrlDate.value+
                             "&caseCode="+caseTeamCode.value,hcp,hcpDescription);
    }
    else
    {
      //one hcp - populate the Case Team fields
      hcpCode.value = (arr[0].split(":"))[0] == undefined ?
                                    hcpCode.value : (arr[0].split(":"))[0];

      hcpDescription.value = (arr[0].split(":"))[1] == undefined ?
                                    hcpCode.value : (arr[0].split(":"))[1];
    }
  }
}

function ShowCaseTeamHCPFrame(linkurl,code,name) {
  window.ReturnCode=code
  window.ReturnName=name
  Left=(document.body.clientWidth-580)/2
  DFrameLink(linkurl,0,Left,580,435)
}

function HCPSelectOnClick(HCPCode,HCPName,TeamCode,TeamName,RefDate) {
  var oldValue = HCPCode.value;
  DoctorSearchFrame(HCPCode,HCPName,function() {
     if(HCPCode.value != oldValue) {
       setTimeout(function() {
         getCaseTeamByHCP(HCPCode,TeamCode,TeamName,RefDate);
       },100);
     }
  });
}

function CaseTeamOnClick(CaseTeamCode,CaseTeamName,HCPCode,HCPName,RefDate) {
 var oldValue = CaseTeamCode.value;
 TeamSearchFrame(CaseTeamCode,CaseTeamName,function() {
   if(CaseTeamCode.value != oldValue) {
      setTimeout(function() {
         getHCPbyCaseTeam(CaseTeamCode,HCPCode,HCPName,RefDate);
      },100);
   }
 });
}
