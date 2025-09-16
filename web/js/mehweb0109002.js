//jsVersion  : V11.03.00
//========================================================================
// Program   : mehweb0109002.js
//
// Written   : 13.01.2006 J.Tan 
//
// Function  : Functions Used in mehweb0109002
//
// Version   :
//
//========================================================================
function CheckRef() {
  if (isWhitespace(AddForm.mhhls007.value)) {
    return;
  } else {
    var i=document.AddForm.mhhls007.selectedIndex;
    var ind=document.AddForm.mhhls007.options[i].value.substring(9,10)
    if (ind=="A") {
      ExtOrg.innerHTML=OrgnACode.innerHTML;
    } else {
      if (ind=="B") {
        ExtOrg.innerHTML=OrgnBCode.innerHTML;
      } else {
        if (ind=="P") {
          ExtOrg.innerHTML=OrgnPCode.innerHTML;
        } else {
          if (ind=="G") {
            ExtOrg.innerHTML=HCPCode.innerHTML;
            if (!isWhitespace(document.AddForm.d_mhhls017.value)) {
               document.AddForm.mhhls017.value =
                  document.AddForm.d_mhhls017.value;
               ValidateHCP(18,0,document.AddForm.mhhls017,AddForm.doctnam1)
            }
            document.AddForm.mhhls017.value = document.AddForm.d_mhhls017.value;
            GetRef();
          } else {
            ExtOrg.innerHTML="";
            GetRef();
          }
        }
      }
    }
  }
}

function GetRef() {
  var i=document.AddForm.mhhls007.selectedIndex;
  var ind=document.AddForm.mhhls007.options[i].value.substring(9,10)

  if (ind=="G" || ind=="N" || ind=="E" || ind=="R" || ind=="A" ||
      ind=="B" || ind=="P") {
    var serverURL="../cgi-bin/mehweb01.pbl?reportno=11" +
                  "&urnumber=" + AddForm.urnumber.value.replace(/ /g,"+") +
                  "&srefcode=" + AddForm.mhhls007.value.replace(/ /g,"+")

    if (ind=="G") {
      serverURL = serverURL +
                  "&valdcode=" + AddForm.mhhls017.value.replace(/ /g,"+")
    }

    if (ind=="A" || ind=="B" || ind=="P") {
      serverURL = serverURL +
                  "&valdcode=" + AddForm.mhhls016.value.replace(/ /g,"+")
    }

    var returnValue = RSExecute(serverURL);
    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|")
//    document.AddForm.mhhls008.value=trim(ReturnValue[0]);
//    document.AddForm.mhhls009.value=trim(ReturnValue[1]);
//    document.AddForm.mhhls010.value=trim(ReturnValue[2]);
//    document.AddForm.mhhls011.value=trim(ReturnValue[3]);
//    document.AddForm.mhhls012.value=trim(ReturnValue[4]);
//    document.AddForm.mhhls013.value=trim(ReturnValue[5]);
//    document.AddForm.mhhls014.value=trim(ReturnValue[6]);
    }
  }
}

function ChkDHB() {
  if(document.getElementById("mhcnrdhb").value=="1") {
    ResDHB.innerHTML=DHBCode.innerHTML;
  } else {
    ResDHB.innerHTML="";
  }
}

function DispSdate() {
  if(document.AddForm.refpris1.checked == true) {
    SenDate.innerHTML=Sentence.innerHTML;
  } else {
    SenDate.innerHTML="";
  }
}

function DispUdate() {
  if(document.AddForm.refnodrv.checked == true) {
    UtdDate.innerHTML=CantDriv.innerHTML;
  } else {
    UtdDate.innerHTML="";
  }
}

function FormSubmit() {
  strtDate = AddForm.mhhls002;
  strtTime = AddForm.mhhls003;
  endDate  = AddForm.mhhls004;
  endTime  = AddForm.mhhls005;
  if(!ChkDateTime(strtDate,strtTime,endDate,endTime)) {
     alert("Start Date/Time must be before End Date/Time");
     AddForm.mhhls002.select();
     return;
  }

//  if(document.AddForm.refstat1.checked == true) {
//     document.AddForm.mhhls006.value="0";
//  } else {
//     document.AddForm.mhhls006.value="1";
//  }
  document.AddForm.mhhls006.value="0";

//  if(document.AddForm.refcurr1.checked == true) {
//     document.AddForm.mhhls018.value="1";
//  } else {
//     document.AddForm.mhhls018.value="0";
//  }
  document.AddForm.mhhls018.value="1";

  if(document.AddForm.refnodrv.checked == true) {
     document.AddForm.mhhls026.value="1";
  } else {
     document.AddForm.mhhls026.value="0";
  }

  if(document.AddForm.refpris1.checked == true) {
     document.AddForm.mhhls019.value="1";
  } else {
     document.AddForm.mhhls019.value="0";
  }

  if(!isWhitespace(document.AddForm.mhhls004.value) &&
     !isWhitespace(document.AddForm.mhhls005.value)) {
        document.AddForm.mhhls018.value="0";
  }

  prevDate = document.AddForm.prevdate;
  prevTime = document.AddForm.prevtime;

 if(prevDate.value=="99999999") {
  if (!confirm("Warning: Current Referral is still Open.\n Ok to Continue ?")) {
    return;
  }
 }

 if(prevDate.value!="") {
  if(ChkDateTime(strtDate,strtTime,prevDate,prevTime)) {
    if (!confirm("Warning: New Start Date is overlap with Current Referral.\n Ok to Continue ?")) {
    return;
    }
  }
 }

 SubmitForm();
}

function AddCmnts() {
  linkurl="mehweb01.pbl?reportno=09&template=007" +
           "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+");
  Left=(document.body.clientWidth-900)/2
  DFrameLink(linkurl,100,Left,900,300);
}
//this function is a onchange emulator when a search frame is
//used
function caseTeamOnChange(mhhls022,n_mhhls022,mhhls021,n_mhhls021,mhhls002)
{
 var oldValue = mhhls022.value;

 TeamSearchFrame(mhhls022,n_mhhls022,function()
 {
   if(mhhls022.value != oldValue)
   {
      setTimeout(function()
      {
         getHCPbyCaseTeam(mhhls022,mhhls021,n_mhhls021,mhhls002);
      },100);
   }
 });
}

function hcpOnChange(mhhls021,n_mhhls021,mhhls022,n_mhhls022,mhhls002)
{
  var oldValue = mhhls021.value;

  HCPSearchFrame(mhhls021,n_mhhls021,1,function()
  {
     if(mhhls021.value != oldValue)
     {
       setTimeout(function()
       {
         getCaseTeamByHCP(mhhls021,mhhls022,n_mhhls022,mhhls002);
       },100);
     }
  });
}
//**************************************************************
//
//        getCaseTeamByHCP
//
//**************************************************************
function getCaseTeamByHCP(hcp,caseCode,caseDescription,mhhlStartDate)
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
  validateCaseTeam(92,hcpCode,returnObject,mhhlStartDate);

  arr = returnObject.value.split("|");

  if(arr.length != 0 )
  {
    //hcp is in more then one Case Team
    if(arr.length > 2 )
    {
       //popup a list to choose from
       ShowCaseTeamHCPFrame("allweb02.pbl?reportno=02&template=016"+
                             "&valdrdate="+mhhlStartDate.value+
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
//*****************************************************************************
//
//        getHCPByCaseTeam
//
//*****************************************************************************
function getHCPbyCaseTeam(caseCode,hcp,hcpDescription,mhhlStartDate)
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
  validateCaseTeam(93,caseTeamCode,returnObject,mhhlStartDate);

  arr = returnObject.value.split("|");
  if(arr.length != 0 )
  {
    //hcp is in more then one Case Team
    if(arr.length > 2 )
    {
       //popup a list to choose from
        ShowCaseTeamHCPFrame("allweb02.pbl?reportno=02&template=017"+
                             "&valdrdat="+mhhlStartDate.value+
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
//*****************************************************************************
//
//        ShowCaseTeamHCPFrame
//
//*****************************************************************************
function ShowCaseTeamHCPFrame(linkurl,code,name) {
  window.ReturnCode=code
  window.ReturnName=name
  Left=(document.body.clientWidth-580)/2
  DFrameLink(linkurl,0,Left,580,435)
}

function ChkEndDate(strtdate,enddate,strttime,endtime) {
  if(!isWhitespace(enddate.value)) {
    if (SetDateYYYYMMDD(enddate.value) < SetDateYYYYMMDD(strtdate.value)) {
      alert("End Date must be After Start Date");
      enddate.value="";
      enddate.focus();
      return;
    }
    endtime.className="Mandatory";
  } else {
    endtime.value="";
    endtime.className="";
  }
}

function ChkEndTime(strtdate,enddate,strttime,endtime) {
 if (!isWhitespace(endtime.value)) {
  if (SetDateYYYYMMDD(strtdate.value) == SetDateYYYYMMDD(enddate.value)) {
   var currtime=trim(strttime.value.replace(/:/g,"")) - 0
   var newrtime=trim(endtime.value.replace(/:/g,"")) - 0
   if(newrtime<currtime){
     alert("End Time must be After Start Time");
     endtime.value="";
     endtime.focus();
   }
  }
 }
}

function validateTime(dateField,timeField) {

  if (!checkDate(dateField,dateField.title)) {
    return false;
  }
  if (!checkTime(timeField,timeField.title)) {
    return false;
  }

  SetCurrentDateTimeNoFocus(AddForm.currdate,AddForm.currtime);
  if (!isWhitespace(dateField.value) &
      !isWhitespace(timeField.value) &
      !isWhitespace(document.AddForm.currdate.value) &
      !isWhitespace(document.AddForm.currtime.value)) {


    if (dateField.value ==
        document.AddForm.currdate.value) {

      if (timeField.value >
          document.AddForm.currtime.value) {
        alert(timeField.title + " cannot be in the future");
        timeField.value="";
        timeField.select();
        timeField.focus();
        return false;
      }
    }
  }
  return true;
}

