//jsVersion  : V11.03.01
//========================================================================
// Program   : allweb02.js
//========================================================================
//
//execute the function when allweb02.js is include to template after 1 sec

showActive = 0;

setTimeout(function() {
  setUpFormAddPract();
},1000);

//set up pract on template
function setUpFormAddPract() {
  if(typeof VINAH_SETUP_STV != 'undefined' && VINAH_SETUP_STV == true) {
      //get referred by hcp
      var alref022 = document.getElementById('alref022');
      var n_alref022 = document.getElementById('n_alref022');

      var alref034 = document.getElementById('alref034');

      if(typeof alref034 != 'undefined') {
        alref034.className = "SelectBig";
      }

      //not on template then exit function
      if(alref022 == null) {
        return;
      }

      //some templates have dispname instead of n_alref022
      if(n_alref022 == null) {
        n_alref022 = document.getElementById('dispname');
      }

      //get the next tag - we looking for <IMG>
      var img = alref022.nextSibling;

      //loop through next tag until we find <IMG onclick>
      while(typeof img != 'undefined') {
         if( img.nodeName != "IMG") {
           img = img.nextSibling;
         }else {
            if(img.onclick != "") {
                //function already what we want exit function
                if(img.onclick === GPHCPSearchFrame) {
                    return;
                }
                //not what we want exit loop
                break;
            }
            //next tag
            img = img.nextSibling;
        }        
      }

      var form = null ;

      for(var i =0; i < document.forms.length; i++) {
        if(document.forms[i].name == "UpdateForm") {
          form = document.forms[i];
          break;
        }
      }

      //we couldn't find UpdateForm on the template
      if(form == null){
        return;;
      }

      //add the hidden fields to the template
      var alref023 = document.createElement('input'); 
      var alref024 = document.createElement('input');
      var dummy1 = document.createElement('input');
      var dummy2= document.createElement('input');
      
      alref023.type = "hidden";
      alref024.type = "hidden";
      dummy1.type = "hidden";
      dummy2.type = "hidden";

      alref023.name = "alref023";
      alref024.name = "alref024";

      form.appendChild(alref023);
      form.appendChild(alref024);
      form.appendChild(dummy1);
      form.appendChild(dummy2);

     //we found our img lets change the onclick function to 
     //what we want
     img.onclick = function() {
       GPHCPSearchFrame(alref022,n_alref022,dummy1,alref023,dummy2,alref024);
     }

     img = img.nextSibling;
  
     while(typeof img != 'undefined') {
      if( img.nodeName != "IMG") {
        img = img.nextSibling
      }else {
        if(img.onclick != "") {
        //function already what we want exit function
          if(img.onclick === clrFields) {
           return;
          }

          break;
        }
        img = img.nextSibling
      }
    }

    //we found our img lets change the onclick function to 
    //to clrFields
    img.onclick = function() {
      clrFields(alref022,n_alref022,alref023,alref024);
    }
  }//end STV setup
   
}
//------------------------------------------------------------
// Set checkbox values
//------------------------------------------------------------
function SetCheckBox(Box,Field) {
  if(Box.checked==true) {
    Field.value="1";
  } else {
    Field.value="0";
  }
}

//------------------------------------------------------------
// Validate a visit number and check it is for this U/R
//------------------------------------------------------------
function ValidateVisit(ValidateV,ValidateUR,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=3; i < ValidateVisit.arguments.length; i++) {
    if (typeof(ValidateVisit.arguments[i]) == 'function') {
      ReturnFunction=ValidateVisit.arguments[i] }
    else {
      ValidateVisit.arguments[i].value=""; }  }
  if (isWhitespace(ValidateV.value)) return;;
  var serverURL = "../cgi-bin/allweb03.pbl?reportno=10&valdcode=" +
                    ValidateV.value.replace(/ /g,"+") +
                    "&valdurno=" + ValidateUR.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=ReturnValue[0];
    j=0
    for (var i=3; i < ValidateVisit.arguments.length; i++) {
       if (typeof(ValidateVisit.arguments[i]) != 'function') {
         j++
         ValidateVisiValidateVisit.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ValidateV.value="";
    ValidateV.focus();;
    return false;}
}

function setRedirect() {
  checkInd=document.UpdateForm.alref035.value.substr(3,5)
  checkCVT=document.UpdateForm.alref035.value.substr(8,1)
  if (checkInd.search(/M/g) >= 0) { 
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=006" 
     + "&urnumber=" + document.UpdateForm.urnumber.value 
     + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
   } else if (checkInd.search(/V/g) >= 0) { 
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=007"
     + "&urnumber=" + document.UpdateForm.urnumber.value
     + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
   } else if (checkInd.search(/W/g) >= 0) { 
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=005"
     + "&urnumber=" + document.UpdateForm.urnumber.value
     + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
   } else if (checkCVT.search(/C/g) >= 0) { 
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=021"
     + "&urnumber=" + document.UpdateForm.urnumber.value
     + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
   } else {
     document.UpdateForm.redirect.value="allweb02.pbl?reportno=02&template=001"
     + "&urnumber=" + document.UpdateForm.urnumber.value
     + "&admissno=";
   }
}
function MandatoryScreen(theForm) {
  if (theForm.firstenc.value != "1") {
    if(theForm.alref075!=undefined){
      theForm.alref075.className="";
    }
    if(theForm.alref077!=undefined){
      theForm.alref077.className="";
    }
    if(theForm.alref078!=undefined){
      theForm.alref078.className="";
    }
    if(theForm.alref132!=undefined){
      theForm.alref132.className="";
    }
  } else {
    if(theForm.alref075!=undefined){
      theForm.alref075.className="Mandatory";
    }
    if(theForm.alref077!=undefined){
      theForm.alref077.className="Mandatory";
    }
    if(theForm.alref078!=undefined){
      theForm.alref078.className="Mandatory";
    }
    if(theForm.alref132!=undefined){
      theForm.alref132.className="Mandatory";
    }
  }
}
function DisplayTrnSrc() {
  i=document.UpdateForm.alref034.selectedIndex;
  ind=document.UpdateForm.alref034.options[i].value.substring(4,5)
  if (ind!="1") {
    TranSrc.innerHTML=transferblank.innerHTML;
    TranSrcHeading.innerHTML="";
    document.UpdateForm.aldad001.value="";
  } else {
    TranSrcHeading.innerHTML=transferhd.innerHTML;
    TranSrc.innerHTML=transfersrc.innerHTML;
  }
}
//
function SetPrinter(Nolabel,SelectList) {
 if (SelectList.className=="Mandatory SelectBig") {
     SelectList.className="SelectBig" }
 else {
     SelectList.className="Mandatory SelectBig" }

 if(Nolabel!=undefined) {
   if (Nolabel.className=="Mandatory") {
       Nolabel.className="" }
   else {
       Nolabel.className="Mandatory" }
   }
}
function checkTable(theForm) {
  if(!isWhitespace(theForm.ptmas036.value)) {
    theForm.ptmas037.className="Mandatory";
  } else {
    theForm.ptmas037.value="";
    theForm.ptmas037.className="";
    theForm.tabldesc.value="";
  }
}

function ShowRelationship(carer) {
  if(carer.value.substr(14,1)=="1") {
    CarerRelHeading.innerHTML=ShowCarerRelHD.innerHTML;
    CarerRel.innerHTML=ShowCarerRel.innerHTML;
//
    CarerResHeading.innerHTML=ShowCarerResHD.innerHTML;
    CarerRes.innerHTML=ShowCarerRes.innerHTML;
  } else {
    CarerRelHeading.innerHTML="";
    CarerRel.innerHTML=ShowCarerRelBlank.innerHTML;
//
    CarerResHeading.innerHTML="";
    CarerRes.innerHTML=ShowCarerResBlank.innerHTML;
  }
}

function checkIfMainHealthExist() {
 var btnMainHealth = document.getElementById("btnMainHealth");
 var alref004 = document.getElementById("alref004");
 var d_alref004 = document.getElementById("d_alref004");
 var activref = document.getElementById("activref");
 var alref003 = document.getElementById("alref003");

 if(btnMainHealth.style.color != "red") {
   if(alref004) {
     if(alref004.value.replace(/ /g,"") != "") {
       return false;
     }
   }
   if(activref) {
     if(activref.checked == true) {
       return false;
     }
   }
   if(alref003) {
     if(alref003.checked == true) {
       return false;
     }
   }
   if(d_alref004) {
     if(d_alref004.value.replace(/ /g,"") != "") {
       return false;
     }
   }
 } 
 return true;
}

function openHealthCondition() {
  var deptcode = document.getElementById("deptcode");
  var admissno = document.getElementById("admissno");
  var linkUrl = "allweb02.pbl?reportno=03&template=005&admissno="+
                admissno.value+
                "&deptcode="+
                deptcode.value;

  displayDiagnosisPopupFrame(linkUrl);
}

function openHealthConditionAdd() {
  var deptcode = document.getElementById("deptcode");
  var linkUrl = "allweb02.pbl?reportno=03&template=004&deptcode="+
                 deptcode.value;

  displayDiagnosisPopupFrame(linkUrl);
}

function openHealthConditionV() {
  var deptcode = document.getElementById("deptcode");
  var admissno = document.getElementById("admissno");
  var alref090 = document.getElementById("alref090");
  var linkUrl = "allweb02.pbl?reportno=03&template=005&chkvinah=1&admissno="+
                admissno.value+
                "&deptcode="+ deptcode.value +
                "&valddate="+ alref090.value;

  displayDiagnosisPopupFrame(linkUrl);
}

function openHealthConditionAddV() {
  var deptcode = document.getElementById("deptcode");
  var alref090 = document.getElementById("alref090");
  var linkUrl = "allweb02.pbl?reportno=03&template=004&chkvinah=1&deptcode="+
                 deptcode.value +
                "&valddate="+ alref090.value;

  displayDiagnosisPopupFrame(linkUrl);
}


function displayDiagnosisPopupFrame(linkUrl) {
  var left = (document.body.clientWidth-780)/2;
  DFrameLink(linkUrl,25,left,800,550);
}

function openOtherFactorsAffectingHealth() {
  var deptcode = document.getElementById("deptcode");
  var admissno = document.getElementById("admissno");

  var linkUrl = "allweb02.pbl?reportno=03&template=007&admissno="+
                 admissno.value+
                "&deptcode="+
                 deptcode.value;

  displayDiagnosisPopupFrame(linkUrl);
}

function openOtherFactorsAffectingHealthAdd() {
  var deptcode = document.getElementById("deptcode");
  var linkUrl = "allweb02.pbl?reportno=03&template=006&deptcode="+
                deptcode.value;

  displayDiagnosisPopupFrame(linkUrl);
}

function openReferralDestination() {
  var deptcode = document.getElementById("deptcode");
  var admissno = document.getElementById("admissno");
  var linkUrl = "allweb02.pbl?reportno=03&template=009&admissno="+
                 admissno.value+
                "&deptcode="+
                 deptcode.value;

  displayDiagnosisPopupFrame(linkUrl);
}

function openReferralDestinationAdd() {
  var deptcode = document.getElementById("deptcode");
  var linkUrl = "allweb02.pbl?reportno=03&template=008&deptcode="+
                 deptcode.value;

  displayDiagnosisPopupFrame(linkUrl);

}
function openReferralInDestination() {
  var deptcode = document.getElementById("deptcode");
  var admissno = document.getElementById("admissno");
  var linkUrl = "allweb02.pbl?reportno=03&template=012&admissno="+
                 admissno.value+
                "&deptcode="+
                 deptcode.value;

  displayDiagnosisPopupFrame(linkUrl);
}

function openReferralInDestinationAdd() {
  var deptcode = document.getElementById("deptcode");
  var linkUrl = "allweb02.pbl?reportno=03&template=011&deptcode="+
                 deptcode.value;

  displayDiagnosisPopupFrame(linkUrl);

}

function checkIfReferralInDestinationExist() {
 var btnReferralInDestination =
     document.getElementById("btnReferralInDestination");

 if(btnReferralInDestination.style.color != "red") {
   return false;
 }
 return true;
}
//**************************************************************
//
//        getCaseTeamByHCP
//
//**************************************************************
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
//*****************************************************************************
//
//        getHCPByCaseTeam
//
//*****************************************************************************
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
//------------------------------------------------------------
// Show option to link internal referral to master referral
//------------------------------------------------------------
function ShowLinkToMaster() {
  if(!isWhitespace(document.UpdateForm.d_sacsvisn.value)) {
    LinkMaster.style.display='';
    LinkToMaster();
  } else {
    document.UpdateForm.sacsvisn.value="";
  }
}
//------------------------------------------------------------
// Link internal referral to master referral
//------------------------------------------------------------
function LinkToMaster() {
  if(document.UpdateForm.linkmast.checked==true){
    document.UpdateForm.sacsvisn.value=document.UpdateForm.d_sacsvisn.value;
  } else {
    document.UpdateForm.sacsvisn.value="";
  }
}
function openTransitionDates() {
  var deptcode = document.getElementById("deptcode");
  var admissno = document.getElementById("admissno");
  var linkUrl = "allweb02.pbl?reportno=03&template=015&admissno="+
                 admissno.value+
                "&deptcode="+
                 deptcode.value;

  displayDiagnosisPopupFrame(linkUrl);
}

function openTransitionDatesAdd() {
  var deptcode = document.getElementById("deptcode");
  var linkUrl = "allweb02.pbl?reportno=03&template=014&deptcode="+
                 deptcode.value;

  displayDiagnosisPopupFrame(linkUrl);

}
function setRedirectXComAdd() {
  checkComp=document.UpdateForm.alref035.value.substr(3,1);
    if (checkComp=="D") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=084"
     + "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
     + "&admissno="
  } else if (checkComp=="A") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=440"
     + "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
     + "&admissno="
   } else if (checkComp=="O") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=441"
     + "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
     + "&admissno="
   } else if (checkComp=="M") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=442"
     + "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
     + "&admissno=" 
   } else if (checkComp=="F") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=443"
     + "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
     + "&admissno="
   } else if (checkComp=="H") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=444"
     + "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
     + "&admissno="
   } else if (checkComp=="S") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=445"
     + "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
     + "&admissno="
   } else if (checkComp=="V") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=446"
     + "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
     + "&admissno="
   } else if (checkComp=="W") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=447"
     + "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
     + "&admissno="
   } else if (checkComp=="E") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=448"
     + "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
     + "&admissno="
   } else if (checkComp=="G") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=449"
     + "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
     + "&admissno="
   }
}
function setRedirectXComUpd() {
  checkComp=document.UpdateForm.alref035.value.substr(3,1);
    if (checkComp=="D") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=084"
     + "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+")
     document.UpdateForm.nextpage.value="4"
  } else if (checkComp=="A") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=440"
     + "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+")
     document.UpdateForm.nextpage.value="4"
   } else if (checkComp=="O") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=441"
     + "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+")
     document.UpdateForm.nextpage.value="4"
   } else if (checkComp=="M") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=442"
     + "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+")
     document.UpdateForm.nextpage.value="4"
   } else if (checkComp=="F") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=443"
     + "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+")
     document.UpdateForm.nextpage.value="4"
   } else if (checkComp=="H") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=444"
     + "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+")
     document.UpdateForm.nextpage.value="4"
   } else if (checkComp=="S") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=445"
     + "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+")
     document.UpdateForm.nextpage.value="4"
   } else if (checkComp=="V") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=446"
     + "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+")
     document.UpdateForm.nextpage.value="4"
   } else if (checkComp=="W") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=447"
     + "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+")
     document.UpdateForm.nextpage.value="4"
   } else if (checkComp=="E") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=448"
     + "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+")
     document.UpdateForm.nextpage.value="4"
   } else if (checkComp=="G") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=449"
     + "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+")
     document.UpdateForm.nextpage.value="4"
   } else {
     document.UpdateForm.redirect.value=""
     document.UpdateForm.nextpage.value="0"
   }
}
function showFundingSource() {
   i=document.UpdateForm.alref035.selectedIndex;
   ind=document.UpdateForm.alref035.options[i].value.substring(3,4)
   if (ind=="A") {
     FundingHeading.innerHTML=offdutyhd.innerHTML;
     FundingId.innerHTML=offdutyid.innerHTML;
   } else {
     if (ind=="P") {
       FundingHeading.innerHTML=fundinghd.innerHTML;
       FundingId.innerHTML=fundingid.innerHTML;
       document.UpdateForm.pmsvx141.className="Mandatory";
     } else {
       FundingHeading.innerHTML=blanklabel.innerHTML;
       FundingId.innerHTML=blanklabel.innerHTML;
     }
   }
}


function DeptClinicTypeActive (ReturnDept,ReturnPSite,ReturnClinicType,
                               DeftClinicType){
   showActive = 1;
   DeptClinicType(ReturnDept,ReturnPSite,ReturnClinicType,DeftClinicType);

}

function DeptClinicType(ReturnDept,ReturnPSite,ReturnClinicType,DeftClinicType){

  if (isWhitespace(ReturnDept.value)) return;;
  if (isWhitespace(ReturnPSite.value)) return;;

  var serverURL   = "../cgi-bin/allweb02.pbl?reportno=6&updatety=5" +
                    "&deptcode=" + ReturnDept.value.replace(/ /g,"+") +
                    "&valdpsit=" + ReturnPSite.value.replace(/ /g,"+") +
                    "&showactv=" + showActive

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnClinicType.options.length=0
    ReturnClinicType.options[ReturnClinicType.options.length]=new Option("","");
    ReturnValue=returnValue.return_value.split("|");
    for (var j=0; j < ReturnValue.length; j++) {
       if (!isWhitespace(ReturnValue[j])) {
         SelectValue=ReturnValue[j].split(",");
         ReturnClinicType.options[ReturnClinicType.options.length]=
          new Option(SelectValue[1],SelectValue[0]); } } 
////
 for (var i =0 ; i < ReturnClinicType.length; i++) {
  if (ReturnClinicType.options[i].value==DeftClinicType.value.substr(0,6)) {
       ReturnClinicType.selectedIndex=i } };


////
  } else {
    ReturnPSite.select();  }
}

function WAReceivedDate(recv_date,entered_date) {
  checkDate(recv_date,recv_date.title);
  if(isWhitespace(recv_date.value)) {
    return;
  }
  if (SetDateYYYYMMDD(recv_date.value) > SetDateYYYYMMDD(entered_date.value)) {
    alert(recv_date.title + " must be less than or equal to the " + 
          entered_date.title);
    recv_date.select();
    recv_date.focus();
  }
}
//------------------------------------------------------------
// Activate SACS referral if Case Start Date populated
//------------------------------------------------------------
function CheckActivSACSRef(theForm) {
  if (!isWhitespace(theForm.alref004.value)) {
    theForm.alref003.value="1";
  } else {
    theForm.alref003.value="0";
  }
}
function validateUrInt(OptionNumber,ReturnCode,ReturnName) {
  ReturnFunction="";
  ReturnName.value="";
  for (var i=3; i < validateUrInt.arguments.length; i++) {
    if (typeof(validateUrInt.arguments[i]) == 'function') {
      ReturnFunction=validateUrInt.arguments[i] }
    else {
      validateUrInt.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)){
      document.UpdateForm.dummyint.value=="";
      DisplayInt();
      return;;
  }
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
                    "&returnfm=4" +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=3; i < validateUrInt.arguments.length; i++) {
       if (typeof(validateUrInt.arguments[i]) != 'function') {
         j++
         validateUrInt.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() }
    return true;
    }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    ReturnCode.focus();
    return false;
     }
}
function DisplayInt() {
 if(document.UpdateForm.dummyint.value != "1") {
   UpdateForm.d_pmsvx093.checked=false;
   UpdateForm.d_pmsvx093.disabled=true;
   document.getElementById("InterpreterSpan").innerHTML="";
 } else{
   UpdateForm.d_pmsvx093.disabled=false;
   UpdateForm.d_pmsvx093.checked=true;
   document.getElementById("InterpreterSpan").innerHTML=
   UpdateForm.dummylng.value;
 }
}
function ReadDoc(OptionNumber,OptionType,ReturnCode,ReturnName,ReturnPrac,ReturnPnam,ReturnPcnt,ReturnProv) {
  ReturnName.value="";
  ReturnPrac.value="";
  ReturnPnam.value="";
  ReturnPcnt.value="";
  ReturnProv.value="";
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL  = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
               "&returnfm=2" + "&valdtype=" + OptionType +
               "&valdcode=" + ReturnCode.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=trim(ReturnValue[0]);
    ReturnPrac.value=ReturnValue[1];
    ReturnPnam.value=ReturnValue[2];
    ReturnPcnt.value=ReturnValue[3];
    ReturnProv.value=ReturnValue[4]; }
 else {
    ReturnCode.value="";
    ReturnCode.select();
    return false; }
}

function ReadDoc2(OptionNumber,OptionType,ReturnCode,ReturnName,ReturnPrac,ReturnPnam,ReturnPcnt,ReturnProv) {
// Zero fill provider number if less than 8 characters
  if(ReturnProv.value!="") {
    LenPROV=ReturnProv.value.length
    if (LenPROV < 8) {
      Count= 8 - LenPROV ;
      Zero=""
      for (i=0; i < Count;i++) { Zero+="0";}
      ReturnProv.value=Zero + ReturnProv.value;
    }
  }
  ReturnName.value="";
  ReturnPrac.value="";
  ReturnPnam.value="";
  ReturnPcnt.value="";
  ReturnCode.value="";
  if (isWhitespace(ReturnProv.value)) return;;
  var serverURL  = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
               "&returnfm=3" + "&valdtype=" + OptionType +
               "&valdcode=" + ReturnProv.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=trim(ReturnValue[0]);
    ReturnPrac.value=ReturnValue[1];
    ReturnPnam.value=ReturnValue[2];
    ReturnPcnt.value=ReturnValue[3];
    ReturnCode.value=ReturnValue[4]; }
 else {
    ReturnProv.value="";
    ReturnProv.select();
    return false; }
}
function UpdateGP(){
    if(isWhitespace(UpdateForm.alref022.value)) {
        alert("Referring HCP is a required field");
        UpdateForm.rusualgp.checked=false;
        return;
    }
    if(UpdateForm.rusualgp.checked==true) {
      if(!confirm("This will update the PMI Usual GP field?")) {
        UpdateForm.rusualgp.checked=false;
        return;
      }
    }
}
function UpdateGP2(){
    if(isWhitespace(InternalReferral.alref022.value)) {
        alert("Referring HCP is a required field");
        InternalReferral.rusualgp.checked=false;
        return;
    }
    if(InternalReferral.rusualgp.checked==true) {
      if(!confirm("This will update the PMI Usual GP field?")) {
        InternalReferral.rusualgp.checked=false;
        return;
      }
    }
}

// Validate the Post Code and set the state and postcode values for Surgery
// details
 function valSurgeryPostCode(theForm) {
  if (isWhitespace(theForm.alref111.value)) {
      return; }
  if (theForm.alref113.value == '8888') return true;

  //set expected globals
  state    = theForm.alref112;
  postcode = theForm.alref113;
  suburb   = theForm.alref111;
  LookupPostCode(theForm.alref111.value);
 }
//------------------------------------------------------------
// Common onload function called on all program 
// referral templates
//------------------------------------------------------------
function CommonProgramRef() {
  if(UpdateForm.deptlcod==undefined) return;; 
//
  if(UpdateForm.deptlcod.value.substr(10,1)=="O") { // SOP
    filterCatCodeList(UpdateForm.rfdtr001,"3","O","1"); // Exclude from SOP
  } else {
    filterCatCodeList(UpdateForm.rfdtr001,"2","O","1"); // Remove SOP options
  }
//
  showTriageStatus();                  // Show triage status          
  showPriority(UpdateForm);            // Show priority
  showPriorityTriage();                // Show priority triage status
  filterNDISPrgRef(UpdateForm);        // Filter NDIS claim codes
  displayCarePlan(UpdateForm)          // Show Care Plan Documented
//
  if(UpdateForm.intrvisn!=undefined) {  // Default details from episode ref
     if (isWhitespace(UpdateForm.intrvisn.value)) return;;
     var serverURL = "../cgi-bin/allweb02.pbl?reportno=6&updatety=8" +
                     "&admissno=" + UpdateForm.intrvisn.value.replace(/ /g,"+")
     var returnValue = RSExecute(serverURL);
     if (returnValue.status==0) {
       ReturnValue=returnValue.return_value.split("|")
       document.UpdateForm.alref019.value=GetFullDateString(ReturnValue[1]);
       document.UpdateForm.alref019.className="Readonly Date";
       document.UpdateForm.alref019.readOnly=true;
       ReFocusTo=document.activeElement;
       document.UpdateForm.alref019.focus();
       document.UpdateForm.alref019.blur();
       ReFocusTo.focus();
//
       if(document.UpdateForm.alref186!=undefined) {
         for (var i =0 ; i < document.UpdateForm.alref186.length; i++) {
         if (document.UpdateForm.alref186.options[i].value.substr(0,3)==
           ReturnValue[5]) {
           document.UpdateForm.alref186.selectedIndex=i } };
           document.UpdateForm.alref186.onchange();
       }
//
       if(document.UpdateForm.alref027!=undefined) {
         for (var i =0 ; i < document.UpdateForm.alref027.length; i++) {
         if (document.UpdateForm.alref027.options[i].value.substr(0,3)==
           ReturnValue[2]) {
           document.UpdateForm.alref027.selectedIndex=i } };
       }
//
       if(!isWhitespace(ReturnValue[3])) {
         document.UpdateForm.alref039.value=GetFullDateString(ReturnValue[3]);
       }
//
       for (var i =0 ; i < document.UpdateForm.rfdtr001.length; i++) {
       if (document.UpdateForm.rfdtr001.options[i].value.substr(0,3)==
         ReturnValue[4].substr(0,3)) {
         document.UpdateForm.rfdtr001.selectedIndex=i } };
     } else {
       UpdateForm.intrvisn.value="";
     }
  }
}
function filterNDISPrgRef(theForm) {
  if(theForm.deptlcod==undefined) return;;       // Department
  if(theForm.alref035==undefined) return;;       // Claim Code

  removeNDIS=false;

  program=theForm.deptlcod.value.substr(10,1);
  if(program != "I" && program != "A" && program != "R" && program != "S" &&
     program != "E" && program != "L" && program != "D" && program != "V") {
    removeNDIS=true;         // Not HARP or PAC or RIR or SACS HEN TPN HBD VALP
  }

  if(removeNDIS==true) {     // Remove NDIS claim code ind 12 = D
    filterCatCodeList(theForm.alref035,"12","D","1");
  }
}
function filterNDISEpsRefCL(theForm) {
  if(theForm.deptlcod==undefined) return;;       // Department
  if(theForm.alref035==undefined) return;;       // Claim Code
  if(theForm.CATEG_CL==undefined) return;;

  removeNDIS=false;

  program=theForm.deptlcod.value.substr(10,1);
  if(program != "I" && program != "A" && program != "R" && program != "S" &&
     program != "E" && program != "L" && program != "D" && program != "V") {
    removeNDIS=true;         // Not HARP or PAC or RIR or SACS HEN TPN HBD VALP
  }

  if(theForm.alcndevp!=undefined) {                    // Using event program
    if(theForm.alcndevp.value=="1") {                  // to determine program
      if(theForm.alref145!=undefined) {                // stream
        program=theForm.alref145.value.substr(10,1);
        if(program == "I" || program == "A" || program == "R" ||
           program == "S" || program == "E" || program == "L" ||
           program == "D" || program == "V") {
           removeNDIS=false;         // HARP PAC or RIR or SACS HEN TPN HBD VALP
        } else {
           if(!isWhitespace(program)) {
             removeNDIS=true;
           }
        }
      }
    }
  }
  saveCL=theForm.alref035.value.substr(0,3);
  theForm.alref035.length=1
  selectOptions3("15",theForm.CATEG_CL,theForm.alref035);

  filterCatCodeList(theForm.alref035,"10","X","1");

  if(removeNDIS==true) {     // Remove NDIS claim code ind 12 = D
    filterCatCodeList(theForm.alref035,"12","D","1");
  }
 for (var i=0; i < theForm.alref035.length; i++) {
  if (theForm.alref035.options[i].value.substr(0,3)==saveCL){
      theForm.alref035.selectedIndex=i;
  }
 }
}
function filterNDISEpsRef(theForm) {
  if(theForm.deptlcod==undefined) return;;       // Department
  if(theForm.alref035==undefined) return;;       // Claim Code

  removeNDIS=false;

  program=theForm.deptlcod.value.substr(10,1);
  if(program != "I" && program != "A" && program != "R" && program != "S" &&
     program != "E" && program != "L" && program != "D" && program != "V") {
    removeNDIS=true;         // Not HARP or PAC or RIR or SACS HEN TPN HBD VALP
  }

  if(theForm.alcndevp!=undefined) {                    // Using event program
    if(theForm.alcndevp.value=="1") {                  // to determine program
      if(theForm.alref145!=undefined) {                // stream
        program=theForm.alref145.value.substr(10,1);
        if(program == "I" || program == "A" || program == "R" ||
           program == "S" || program == "E" || program == "L" ||
           program =="D" || program =="V") {
           removeNDIS=false;         // HARP PAC or RIR or SACS HEN TPN HBD VALP
        } else {
           if(!isWhitespace(program)) {
             removeNDIS=true;
           }
        }
      }
    }
  }
  if(removeNDIS==true) {     // Remove NDIS claim code ind 12 = D
    filterCatCodeList(theForm.alref035,"12","D","1");
  }
}
//------------------------------------------------------------
// Common onload function called on all program
// referral templates
//------------------------------------------------------------
function CommonProgramRefComb() {
  if(MasterReferral.deptlcod==undefined) return;;
//
  if(MasterReferral.deptlcod.value.substr(10,1)=="O") { // SOP
    filterCatCodeList(MasterReferral.rfdtr001,"3","O","1"); //Exclude from SOP
  } else {
    filterCatCodeList(MasterReferral.rfdtr001,"2","O","1"); //Remove SOP options
  }
  showTriageStatus();                  // Show triage status
  showPriority(MasterReferral);        // Show priority
  showPriorityTriage();                // Show priority triage status
  showPriorityTriageEps();             // Show priority triage status
  filterNDISPrgRef(MasterReferral);    // Filter NDIS claim codes
  displayCarePlan(MasterReferral)      // Show Care Plan Documented
}
function ValidatePriority() {
  var ddlPriority = document.getElementById('alref027');
  var elDateAccepted = document.getElementById('alref090');

  if (ddlPriority == null || elDateAccepted == null) 
    return;

  var indc3 = ddlPriority.options[ddlPriority.selectedIndex].value.substr(5,1);

  if (indc3 == 'A') {
    // remove 'Mandatory' class from field (if applicable)
    elDateAccepted.className = elDateAccepted.className.replace("Mandatory","");

    // prevent 'Date Referral Accepted' field from being set/populated
    elDateAccepted.value = "";
    elDateAccepted.readOnly = true;
    elDateAccepted.className = elDateAccepted.className + " Readonly";
  }
  else {
    elDateAccepted.readOnly = false;
    elDateAccepted.className = elDateAccepted.className.replace("Readonly","");
  }
}

function MandatoryAccepted() {
  var elref159 = document.getElementById('alref159');
  var elref090 = document.getElementById('alref090');

  if (!elref159 || !elref090)
    return;

  if (isWhitespace(elref159.value)) {
    elref090.className="PastDate";
  } else {
    if (!elref090.className.match(/Readonly/))
      elref090.className="Mandatory PastDate";
  }
}

function defaultDHB() {
  if (document.getElementById('alcncdhb').value!="1") {return;}
    ShowOutofArea();
    DHBtitleDIV.innerHTML=DHBtitleSPAN.innerHTML;
    DHBcodeDIV.innerHTML=DHBcodeSPAN.innerHTML;
}

function ShowOutofArea() {
  if (document.getElementById('alcncdhb').value!="1") {return;}
  if (isWhitespace(document.getElementById('alref107').value)) { return; }
    var serverURL = "../cgi-bin/allweb02.pbl?reportno=6&updatety=7" +
                  "&alref107=" +
                  document.getElementById('alref107').value.replace(/ /g,"+") +
                  "&valdpdhb=" +
                  document.getElementById('nhdmdhb').value.replace(/ /g,"+")
    var returnValue = RSExecute(serverURL);
    ReturnValue=returnValue.return_value.split("|");
    if (returnValue.status==0) {
      if (ReturnValue[0] == 1) {    // Patient's DHB <> Hospital DHB
        document.getElementById('DHBcode').className = "DataField RedText";
        outofareatitleDIV.style.display="";
        outofareacodeDIV.style.display="";
        outofareatitleDIV.innerHTML=outofareatitleSPAN.innerHTML;
        outofareacodeDIV.innerHTML=outofareacodeSPAN.innerHTML; }
      else {
        document.getElementById('DHBcode').className = "DataField";
        outofareatitleDIV.style.display="none";
        outofareacodeDIV.style.display="none";
        outofareatitleDIV.innerHTML=Blank.innerHTML;
        outofareacodeDIV.innerHTML=outofareacodeBLANK.innerHTML;
      }
    }
}
function DisplayTrnSrcOut(theForm) {
  i=theForm.alref141.selectedIndex;
  ind=theForm.alref141.options[i].value.substring(13,14)
  if (ind!="T") {
    TranSrcOut.innerHTML=transferblankout.innerHTML;
    TranSrcHeadingOut.innerHTML="";
    theForm.aldad002.value="";
  } else {
    TranSrcHeadingOut.innerHTML=transferhdout.innerHTML;
    TranSrcOut.innerHTML=transfersrcout.innerHTML;
  }
}
function validateCodeTransfer(OptionNumber,ReturnCode,ReturnName,DestType) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=4; i < validateCodeTransfer.arguments.length; i++) {
    if (typeof(validateCodeTransfer.arguments[i]) == 'function') {
      ReturnFunction=validateCodeTransfer.arguments[i] }
    else {
      validateCodeTransfer.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&filtdtyp=1" +
                    "&desttype=" + DestType.value.substr(28,1).replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=4; i < validateCodeTransfer.arguments.length; i++) {
       if (typeof(validateCodeTransfer.arguments[i]) != 'function') {
         j++
         validateCodeTransfer.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() }
    return true;
    }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    ReturnCode.focus();
    return false;
     }
}
function validateTransferSource(OptionNumber,ReturnCode,ReturnName,DestType) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=4; i < validateTransferSource.arguments.length; i++) {
    if (typeof(validateTransferSource.arguments[i]) == 'function') {
      ReturnFunction=validateTransferSource.arguments[i] }
    else {
      validateTransferSource.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&filtdtyp=1" +
                    "&desttype=" + DestType.value.substr(9,1).replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=4; i < validateTransferSource.arguments.length; i++) {
       if (typeof(validateTransferSource.arguments[i]) != 'function') {
         j++
         validateTransferSource.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() }
    return true;
    }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    ReturnCode.focus();
    return false;
     }
}
function showACC(theForm) {
  checkInd=theForm.alref035.value.substr(3,5)
  if (checkInd.search(/W/g) >= 0) {
      ACCHeading.innerHTML=acchd.innerHTML;
      ACCId.innerHTML=accorderid.innerHTML;
    } else {
      ACCHeading.innerHTML=blanklabel.innerHTML;
      ACCId.innerHTML=blanklabel.innerHTML;
    }
}
function setEpisodePriority() {
  if(document.InternalReferral.alref027==undefined) return;;
  if(document.MasterReferral.alref027==undefined) return;;
//
  document.InternalReferral.alref027.value=
  document.MasterReferral.alref027.value;
}
function setEpisodeTriage() {
  if(document.InternalReferral.alref186==undefined) return;;
  if(document.MasterReferral.alref186==undefined) return;;
//
  document.InternalReferral.alref186.value=
  document.MasterReferral.alref186.value;
  showPriorityTriageEps();
}
//-------------------------------------------------------------------
// Show Triage Status and Triage Date accoding to department setup
//-------------------------------------------------------------------
function showTriageStatus() {
  if(!document.getElementById("d_aldeutrs")) {
    return;
  }
  var showtriage=false;
  if(document.getElementById("d_aldeutrs").value == "1") {
    showtriage=true;
  }
  if(showtriage) {
    if(document.getElementById("tsHeading")) {
      document.getElementById("tsHeading").innerHTML=
      document.getElementById("showtsHeading").innerHTML;
      document.getElementById("tsField").innerHTML=
      document.getElementById("showtsField").innerHTML;
      window.setTimeout(function () {
        document.getElementById("alref186").focus();
      }, 200);
    }

    if(document.getElementById("tsHeadingEps")) {
      document.getElementById("tsHeadingEps").innerHTML=
      document.getElementById("showtsHeadingEps").innerHTML;
      document.getElementById("tsFieldEps").innerHTML=
      document.getElementById("showtsFieldEps").innerHTML;
    }
  
    document.getElementById("tdHeading").innerHTML=
    document.getElementById("showtdHeading").innerHTML;
    document.getElementById("tdField").innerHTML=
    document.getElementById("showtdField").innerHTML;
    if(document.getElementById("tdHeadingEps")) {
      document.getElementById("tdHeadingEps").innerHTML=
      document.getElementById("showtdHeadingEps").innerHTML;
      document.getElementById("tdFieldEps").innerHTML=
      document.getElementById("showtdFieldEps").innerHTML;
    }
  } else {
    if(document.getElementById("tsHeading")) {
      document.getElementById("tsHeading").innerHTML="";
      document.getElementById("tsField").innerHTML="";
    }
    if(document.getElementById("tsHeadingEps")) {
      document.getElementById("tsHeadingEps").innerHTML="";
      document.getElementById("tsFieldEps").innerHTML="";
    }
    document.getElementById("tdHeading").innerHTML="";
    document.getElementById("tdField").innerHTML="";
    if(document.getElementById("tdHeadingEps")) {
      document.getElementById("tdHeadingEps").innerHTML="";
      document.getElementById("tdFieldEps").innerHTML="";
    }
  }
  filterTriageStatus();
  filterTriageStatusEps();
}
//------------------------------------------------------------------
//  Common onLoad function to filter triage status
//------------------------------------------------------------------
function filterTriageStatus() {
  if(!document.getElementById("deptlcod")) {
    return;
  }
  if(!document.getElementById("d_alrestat")) {
    return;
  }
  if(!document.getElementById("alref186")) {
    return;
  }
// If not Palliative Care
  if(document.getElementById("deptlcod").value.substr(10,1)!="P") {
    filterCatCodeList(document.getElementById("alref186"),"1","P","1");
  }
//
  if(document.getElementById("d_alrestat").value != " " &&
     document.getElementById("d_alrestat").value != "0") {
    return;
  }
//
  TriageStatus=document.getElementById("alref186");
//
  if(document.getElementById("deptlcod").value.substr(10,1)=="O") { // SOP
     for(var i=0;i<TriageStatus.length;i++) {
        Ind1=trim(TriageStatus.options[i].value.substr(3,1));
        if(Ind1 != "S" && Ind1 != "B" && Ind1 !="" 
           && TriageStatus.selected!=true){
          TriageStatus.remove(i);
          i--;
        }
     }
  }
//
  if(document.getElementById("deptlcod").value.substr(10,1)!="O") { // Not SOP
     for(var i=0;i<TriageStatus.length;i++) {
        Ind1=trim(TriageStatus.options[i].value.substr(3,1));
        if(Ind1 != "N" && Ind1 != "B" && Ind1 !="" 
           && TriageStatus.selected!=true){
          TriageStatus.remove(i);
          i--;
        }
     }
  }
}
function filterTriageStatusEps() {
  if(!document.getElementById("deptlcod")) {
    return;
  }
  if(!document.getElementById("d_alrestat")) {
    return;
  }
  if(!document.getElementById("alref186Eps")) {
    return;
  }
// If not Palliative Care
  if(document.getElementById("deptlcod").value.substr(10,1)!="P") {
    filterCatCodeList(document.getElementById("alref186EPS"),"1","P","1");
  }
//

  if(document.getElementById("d_alrestat").value != " " &&
     document.getElementById("d_alrestat").value != "0") {
    return;
  }
//
  TriageStatus=document.getElementById("alref186Eps");
//
  if(document.getElementById("deptlcod").value.substr(10,1)=="O") { // SOP
     for(var i=0;i<TriageStatus.length;i++) {
        Ind1=trim(TriageStatus.options[i].value.substr(3,1));
        if(Ind1 != "S" && Ind1 != "B" && Ind1 !=""
           && TriageStatus.selected!=true){
          TriageStatus.remove(i);
          i--;
        }
     }
  }
//
  if(document.getElementById("deptlcod").value.substr(10,1)!="O") { // Not SOP
     for(var i=0;i<TriageStatus.length;i++) {
        Ind1=trim(TriageStatus.options[i].value.substr(3,1));
        if(Ind1 != "N" && Ind1 != "B" && Ind1 !=""
           && TriageStatus.selected!=true){
          TriageStatus.remove(i);
          i--;
        }
     }
  }
}
//------------------------------------------------------------------
//  Check the triage date is after the referral date
//------------------------------------------------------------------
function checkTriageDate() {
  if(!document.getElementById("alref187")) {  // Triage Date
    return;
  }  
  triageD=document.getElementById("alref187");
  if(isWhitespace(triageD.value)) {
    return;
  }
  if(!checkDate(triageD,triageD.title)) {
    return;
  }
  if(!document.getElementById("alref019")) {   // Referral Date
    return;
  }
  referralD=document.getElementById("alref019");
  if (SetDateYYYYMMDD(referralD.value) > SetDateYYYYMMDD(triageD.value)) {
    alert("Triage date must be after the referral date");
    triageD.value="";
    triageD.focus();
  }
}
//------------------------------------------------------------------
//  Check the triage date is after the referral date
//------------------------------------------------------------------
function checkTriageDateEpisode() {
  if(!document.getElementById("alref187eps")) {  // Triage Date
    return;
  }
  triageD=document.getElementById("alref187eps");
  if(isWhitespace(triageD.value)) {
    return;
  }
  if(!checkDate(triageD,triageD.title)) {
    return;
  }
  if(!document.getElementById("alref019eps")) {   // Referral Date
    return;
  }
  referralD=document.getElementById("alref019eps");
  if (SetDateYYYYMMDD(referralD.value) > SetDateYYYYMMDD(triageD.value)) {
    alert("Triage date must be after the referral date");
    triageD.value="";
    triageD.focus();
  }
}

//-------------------------------------------------------------------
// Show Priority accoding to department setup
//-------------------------------------------------------------------
function showPriority(theForm) {
  if(!document.getElementById("d_aldeuprt")) {
    return;
  }
  var showpriority=false;
  if(document.getElementById("d_aldeuprt").value == "1") {
     showpriority=true;
  }
  if(showpriority) {
    document.getElementById("prHeading").innerHTML=
    document.getElementById("showprHeading").innerHTML;
    document.getElementById("prField").innerHTML=
    document.getElementById("showprField").innerHTML;
    if(document.getElementById("prHeadingEps")) {
      document.getElementById("prHeadingEps").innerHTML=
      document.getElementById("showprHeadingEps").innerHTML;
      document.getElementById("prFieldEps").innerHTML=
      document.getElementById("showprFieldEps").innerHTML;
    }
    showPriorityOption(theForm); 
  } else {
    document.getElementById("prHeading").innerHTML="";
    document.getElementById("prField").innerHTML="";
    if(document.getElementById("prHeadingEps")) {
      document.getElementById("prHeadingEps").innerHTML="";
      document.getElementById("prFieldEps").innerHTML="";
    }
  }
}
function showPriorityOption(theForm) {
  if(theForm.alref027!=undefined) {
    if(theForm.palcarpg==undefined) {
      pallcare=0;
    }
    else {  
      pallcare=theForm.palcarpg.value;
    }
    if(pallcare=="1") {
      filterCatCodeList(theForm.alref027,"5","D","3");
    }
    else {
      filterCatCodeList(theForm.alref027,"5","D","1");
    }
  }
}
//-------------------------------------------------------------------
// Show Priority accoding to department setup
//-------------------------------------------------------------------
function showPriorityTriage() {
  if(!document.getElementById("d_aldeuprt")) {
    return;
  }
  if(document.getElementById("d_aldeuprt").value != "1") {
    return;
  }
  if(!document.getElementById("deptlcod")) {
    return;
  }
  if(!document.getElementById("alref186")) {
    return;
  }
  if(document.getElementById("alref027")) {
     HDP=trim(document.getElementById("alref186").value.substr(14,4));
     if(HDP=="99" || HDP=="98") {
       document.getElementById("alref027").selectedIndex=0;
       document.getElementById("alref027").className="selectBig";
       document.getElementById("alref027").disabled=true;
     } else {
       document.getElementById("alref027").className="Mandatory selectBig";
       document.getElementById("alref027").disabled=false;
     }
  }
//
// Mandatory referral in first triage score for Palliative care
//
  if(document.getElementById("alref192") &&
     document.getElementById("d_aldeprgs")) {
     RefAccepted="";
     if(document.getElementById("alref192")) {
       RefAccepted=trim(document.getElementById("alref186").value.substr(14,4));
     }
     HDP=trim(document.getElementById("d_aldeprgs").value.substr(14,4));
     if(HDP=="41" && RefAccepted=="1") {
       document.getElementById("alref192").className="Mandatory";
     } else {
      document.getElementById("alref192").className="";
     }
   }
//
// Mandatory referral reason on episode referral - (Used for Referral in reason)
//
   if(document.getElementById("d_aldeuprt").value == "1" &&
      document.getElementById("alref028") &&
      document.getElementById("deptlcod").value.substr(30,1)  == "3") {
     HDP=trim(document.getElementById("alref186").value.substr(14,4));
     if(HDP=="010" || HDP=="020" || HDP=="1" || HDP=="3") {
       document.getElementById("alref028").className="Mandatory SelectBig";
     } else {
       document.getElementById("alref028").className="SelectBig";
     }
   }
}
function mandReasonForRefEPS() {
//
// Mandatory referral reason on episode referral - (Used for Referral in reason)
//
   if(document.InternalReferral.alref186 != undefined &&
      document.InternalReferral.alref028 != undefined &&
      document.InternalReferral.deptlcod.value.substr(30,1)  == "3") {
     HDP=trim(document.InternalReferral.alref186.value.substr(14,4));
     if(HDP=="010" || HDP=="020" || HDP=="1" || HDP=="3") {
       document.InternalReferral.alref028.className="Mandatory SelectBig";
     } else {
       document.InternalReferral.alref028.className="SelectBig";
     }
   }
}
function showPriorityTriageEps() {
  if(!document.getElementById("deptlcod")) {
    return;
  }
//
// Mandatory referral reason on episode referral - (Used for Referral in reason)
//
   mandReasonForRefEPS();
//
  if(!document.getElementById("d_aldeuprt")) {
    return;
  }
  if(document.getElementById("d_aldeuprt").value != "1") {
    return;
  }
  if(!document.getElementById("alref186Eps")) {
    return;
  }
  if(document.getElementById("alref027Eps")) {
     HDP=trim(document.getElementById("alref186Eps").value.substr(14,4));
     if(HDP=="99" || HDP=="98") {
       document.getElementById("alref027Eps").selectedIndex=0;
       document.getElementById("alref027Eps").className="selectBig";
       document.getElementById("alref027Eps").disabled=true;
     } else {
       document.getElementById("alref027Eps").className="Mandatory selectBig";
       document.getElementById("alref027Eps").disabled=false;
     }
  }
}

//------------------------------------------------------------
// Common onload function called on all episode
// referral templates
//------------------------------------------------------------
function CommonEpisodeRef() {
  if(UpdateForm.deptlcod==undefined) return;;
//
  showTriageStatus();                  // Show triage status
  showPriority(UpdateForm);            // Show priority
  showPriorityTriage();                // Show priority triage status
  filterNDISEpsRef(UpdateForm);        // Filter NDIS claim codes
  displayCarePlan(UpdateForm)          // Show Care Plan Documented
}
function InitDeptDDL(Form) {
  if (!Form || Form == undefined)
    return;

  if (Form.ovrddept.value == "1") {
    var ddlDept = Form.deptcode;
    ddlDept.options[0].value = "   ";
    ddlDept.options[0].text = "All";
    DeptChange(Form,ddlDept);
  }
}
function DeptChange(Form, DeptDDL) {
  if (!DeptDDL || DeptDDL == undefined)
    return;

  if (Form.ovrddept.value != "1")
    return;

  if (isWhitespace(DeptDDL.options[DeptDDL.selectedIndex].value)) {
    Form.doctcode.className = 'Mandatory';
  }
  else {
    Form.doctcode.className = '';
  }
}
//------------------------------------------------------------
// Enable disabled fields prior to form post
//------------------------------------------------------------
function enablePostField() {
  if(document.getElementById("alref027")) {
    document.getElementById("alref027").disabled=false;
  }
}
function FilterReferralSource(TheForm) {
  if (TheForm == undefined || TheForm.d_depcod == undefined)
    return;

  var indc3 = TheForm.d_depcod.value.substr(5,1);
  var indc4 = TheForm.d_depcod.value.substr(6,1);

  var bIsMH = (indc3 == "A" && indc4 == "M") ? true : false;

  if (bIsMH) {  // Is a MH referral
    // remove Non Mental Health code
    filterCatCodeList(TheForm.alref034,"13","G","1");  // Referral Source
  }
  else {  // Not a MH visit
    // remove Mental Health code
    filterCatCodeList(TheForm.alref034,"13","M","1");  // Referral Source
  }
}
function displayCarePlan(theForm) {
  if(theForm.deptlcod==undefined) {
    return;
  }
  if(theForm.deptlcod.value.substr(28,1) != "1") {
    return;
  }
  if(!document.getElementById("careplantitlespan")) {
    return;
  }
  if(!document.getElementById("careplanfieldspan")) {
    return;
  }
  document.getElementById("careplantitlespan").style.display="";
  document.getElementById("careplanfieldspan").style.display="";
}
function displayCarePlan2(theForm) {
  if(theForm.deptlcod==undefined) {
    return;
  }
  if(theForm.deptlcod.value.substr(28,1) != "1") {
    return;
  }
  if(!document.getElementById("careplantitlespan2")) {
    return;
  }
  if(!document.getElementById("careplanfieldspan2")) {
    return;
  }
  document.getElementById("careplantitlespan2").style.display="";
  document.getElementById("careplanfieldspan2").style.display="";
}
//T0881801-Start
function LinkToVisitMan(reffunc) {
  if (document.getElementById('alcnlkvm') == undefined){
     return; }

  if (document.getElementById('alcnlkvm').value != "1"){
      document.getElementById('alref005').className="DataField NoAutoFocus"
      return; }

  document.getElementById('alref005').className = "Mandatory";

  if (reffunc == 'U' || reffunc == ''){
  // If Update Referral no details will default from the Current IP visit
      return;}

  // Call remote script to get Current IP details
  urno=document.getElementById('urnumber');
  if (urno == undefined || isWhitespace(urno.value)){
     return; }     // URNUMBER is not available

  var serverURL="../cgi-bin/allweb02.pbl?reportno=17&remotsno=2" +
                "&urnumber=" + urno.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {
      return;}     // script failed

  ReturnValue=returnValue.return_value.split("|");
  if(isWhitespace(ReturnValue[0])){
     return;}     // Current IP visit not found

  if (reffunc == 'A' || reffunc == 'C'){
  // If Add Referral OR Copy Referral then:
  // If the patient is a Current Inpatient (patmi1af.dastat = "2") then:
  // a) Default in the Current Inpatient Visit Number (patmi1af.daadmno) into
  //    the "Link to Visit" field (allrefaf.alrelink).
      document.getElementById('alref005').value=ReturnValue[0];
  }
  if (reffunc =='A'){
  // If Add Referral then:
  // b) Default the Current Inpatient Attending Doctor code (patmi1af.adocta)
  //    into the "Referred By" field (allrefaf.alrerhcp).
      document.getElementById('alref022').value=ReturnValue[1];
      catCL=ReturnValue[2];

      alref022=document.getElementById('alref022');
      n_alref022=document.getElementById('n_alref022');
      alref023=document.getElementById('alref023');
      n_alref023=document.getElementById('n_alref023');
      alref024=document.getElementById('alref024');
      dummy=document.getElementById('dummy');
      ReadDoc(18,0,alref022,n_alref022,alref023,n_alref023,alref024,dummy);

  // c) Default the Current Inpatient Claim Type code (patmi1af.aclaim) into
  //    the "Claim Code" field (allrefaf.alrecomp).
      alref035=document.getElementById('alref035');
      for (var i =0 ; i < alref035.length; i++) {
        if (alref035.options[i].value.substr(0,3)==catCL){
            alref035.selectedIndex=i;
            break;
        }
      }
  }
}
//T0881801-End

//----------------------------------------------------------------------------
//-              Functions to set up automatic reject referral               -
//----------------------------------------------------------------------------

//Requests whether user wishes to reject the referral
function askReject(f,category) {

   reasonReject = category.options[category.selectedIndex].text;

   rejectQuery = "Outcome of Priority = "+reasonReject + "\n\n";

   rejectQuery = rejectQuery + "Do you want to Reject the Referral?";

   if (confirm(rejectQuery)) {
     setReject(f);
   }
}

//Sets the rejectReferral flag
function setReject(f) {

   f.refrejct.value = 1;

}

//Checks to see the referral and priority status, and then either asks, or
//sets the automatric reject referral flag
function checkReject(catCG, catAO, f) {

  if (catAO == undefined) {
    return;
  }

  if (catCG[5] == 'A' && catCG[6] == 'M') {
    if (catAO.value[4] == 'B') {
      askReject(f, catAO);

      if (f.refrejct.value == 0) {
         return;
      }

    } else if (catAO.value[4] == 'C') {
      askReject(f,catAO);

      if (f.refrejct.value == 0) {
         return;
      }

    } else if (catAO.value[4] == 'E') {
      setReject(f);
    } else if (catAO.value[4] == 'F') {
      setReject(f);
    }
  }

  rejectReferral = f.refrejct.value;

  if (catCG[5] == 'A'  && rejectReferral == 0) {
    if (catAO.value[4] == 'A') {
      askReject(f,catAO);
    } else if (catAO.value[4] == 'C') {
      askReject(f,catAO);
    } else if (catAO.value[4]  == 'D') {
      setReject(f);
    } else if (catAO.value[4] == 'F') {
      setReject(f);
    }
  }
}
//
// Automatically Populate Health Purchaser 
// for Accident Related Claim Codes
// when Adding or Updating a Referral
//
function expPurchDef(theForm) {
  checkInd=theForm.alref035.value.substr(3,5)
  
  if (checkInd.search(/W/g) >= 0 &&
      !isWhitespace(theForm.d_depcod.value.substr(179,3))) {

      for (var i=0;i<theForm.alref140.length;i++){

       if (theForm.alref140.options[i].value.substr(0,3)==
        theForm.d_depcod.value.substr(179,3)){
        theForm.alref140.selectedIndex=i;
       }
      }
    }
}
  
// Indicator 29 =1 Priority field only mandatory
// Indicator 29 =2 Priority and Outcome-of-Priority  mandatory

function defPriorityOutOfPriority(theForm) {
 if ((theForm.d_depcod.value.substr(76,1))== '1') {
      AddClassName(theForm.alref027,'Mandatory');
   }
 else if ((theForm.d_depcod.value.substr(76,1))== '2') {
      AddClassName(theForm.alref027,'Mandatory');
      AddClassName(theForm.alref141,'Mandatory');
   }

 }

function defDateOfPriority(theForm) {
 RemoveClassName(theForm.alref127,'Mandatory');
 if (theForm.d_depcod.value.substr(5,1)== 'A'  &&     // CG IND3 
     theForm.d_depcod.value.substr(6,1)!= 'M'  &&     // CG IND4
     theForm.alref027.value.substr(12,1)=='G') {      // PR IND10
        AddClassName(theForm.alref127,'Mandatory');
        return;
 }
 if (theForm.d_depcod.value.substr(5,1)== 'A'  &&     // CG IND3 
     theForm.d_depcod.value.substr(6,1)== 'M'  &&     // CG IND4
     theForm.alref027.value.substr(12,1)=='M') {      // PR IND10
        AddClassName(theForm.alref127,'Mandatory');
        return;
 }
 if (theForm.d_depcod.value.substr(5,1)== 'A'  &&     // CG IND3 
     theForm.alref027.value.substr(12,1)=='A') {      // PR IND10
        AddClassName(theForm.alref127,'Mandatory');
        return;
 }
}

function defPrioritsingHCP(theForm) {
 RemoveClassName(theForm.alref084,'Mandatory');
 if (theForm.d_depcod.value.substr(5,1)== 'A'  &&     // CG IND3
     theForm.d_depcod.value.substr(6,1)!= 'M'  &&     // CG IND4
     theForm.alref027.value.substr(12,1)=='G') {      // PR IND10
        AddClassName(theForm.alref084,'Mandatory');
        return;
 }
 if (theForm.d_depcod.value.substr(5,1)== 'A'  &&     // CG IND3
     theForm.d_depcod.value.substr(6,1)== 'M'  &&     // CG IND4
     theForm.alref027.value.substr(12,1)=='M') {      // PR IND10
        AddClassName(theForm.alref084,'Mandatory');
        return;
 }
 if (theForm.d_depcod.value.substr(5,1)== 'A'  &&     // CG IND3
     theForm.alref027.value.substr(12,1)=='A') {      // PR IND10
        AddClassName(theForm.alref084,'Mandatory');
        return;
 }
}

function defSuspCancer(theForm) {
 RemoveClassName(theForm.alref061,'Mandatory');
 if (theForm.d_depcod.value.substr(5,1)== 'A'  &&     // CG IND3
     theForm.d_depcod.value.substr(6,1)!= 'M'  &&     // CG IND4
     theForm.alref141.value.substr(5,1)=='G') {       // AO IND3
        AddClassName(theForm.alref061,'Mandatory');
        return;
 }
}

