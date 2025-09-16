//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb83.js
//========================================================================
function AdmitBaby() 
{
  if(!validateMandatory(document.UpdateForm)) {
    return;
  }
  if((document.UpdateForm.ptmas023 !=undefined) &&
     (document.UpdateForm.ptmsx045 !=undefined) &&
     (!isWhitespace(document.UpdateForm.ptmas023.value))) {
    if (isWhitespace(document.UpdateForm.ptmsx045.value)) {
      ans=confirm("Warning : no medicare reference number entered");
      if (ans==false) {
      document.UpdateForm.ptmsx045.focus();
      return;
      } else {
        if (document.UpdateForm.ptcnhdps!=undefined) {
          if (document.UpdateForm.ptcnhdps.value=="4") {
            document.UpdateForm.ptmsx045.value=0
          } else {
            if (DefaultMedicareReferenceto9=="1") {
              document.UpdateForm.ptmsx045.value=" "
            } else {
              document.UpdateForm.ptmsx045.value=9
            }
          }
        }
        defaultMedicareIRN(document.UpdateForm.ptmsx045);
      }
    }
  }
  var PopUpScreen   = document.getElementById('PopUpScreen');
  var PatientMenu   = document.getElementById('PatientMenu');
  var PopUpFrameDoc = ibaGetIframeDoc('PopUpFrame');
  PopUpFrameDoc.location.href = "../lookups/BabyFrame.html";

  var top = PatientMenu.offsetTop + PatientMenu.offsetHeight;
  var left = (getClientWidth() - 300) / 2;
  PopUpScreen.style.top     = top  + 'px';
  PopUpScreen.style.left    = left + 'px';
  PopUpScreen.style.height  = '100px';
  PopUpScreen.style.width   = '300px';
  PopUpScreen.style.display = "";
  
}
function AdmitBoarder()
{
  if (validateMandatory(document.UpdateForm))
  {
    var PopUpScreen   = document.getElementById('PopUpScreen');
    var PatientMenu   = document.getElementById('PatientMenu');
    var PopUpFrameDoc = ibaGetIframeDoc('PopUpFrame');
    PopUpFrameDoc.location.href = "../lookups/BoarderFrame.html";

    var top = PatientMenu.offsetTop + PatientMenu.offsetHeight;
    var left = (getClientWidth() - 300) / 2;
    PopUpScreen.style.top     = top  + 'px';
    PopUpScreen.style.left    = left + 'px';
    PopUpScreen.style.height  = '100px';
    PopUpScreen.style.width   = '300px';
    PopUpScreen.style.display = "";
  }
}
function SetGivenName(theForm) {
  var firstname = trim(theForm.pmpxi084.value);
  var secondname = trim(theForm.pmpxi085.value);
  theForm.ptmas006.value = firstname + " " + secondname
  theForm.ptmas006.value = theForm.ptmas006.value.substr(0,25);
}
function ShowFundAlias(theForm) {
  if(theForm.fndalias.checked==true) {
    document.getElementById('HealthFundAlias').style.display="";
  } else {
    document.getElementById('HealthFundAlias').style.display="none";
    theForm.pmpxi086.value="";
    theForm.pmpxi087.value="";
    theForm.pmpxi088.value="";
  }
}
function checkAge(Input,maxage) {
  var mon;
  if (isWhitespace(Input)) {
     return;
  }
  day= Input.substring(0,2)
  year= Input.substring(6,11)
  monstr= Input.substring(3,6)
  if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon=00
  if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon=01
  if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon=02
  if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon=03
  if (monstr=="May" || monstr=="MAY" || monstr=="may") mon=04
  if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon=05
  if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon=06
  if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon=07
  if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon=08
  if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon=09
  if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon=10
  if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon=11

  var Today = new Date();
  var Bday = new Date();
  Bday.setFullYear(year);
  Bday.setMonth(mon);
  Bday.setDate(day);
  var difference = "0";

  if (Today.getTime() > Bday.getTime())
  {
    difference = Today.getTime() - Bday.getTime();
    difference = Math.floor(difference / (1000 * 60 * 60 * 24 * 365));
  }
  if (difference > maxage )
  {
   alert("Warning: Invalid permissible age");
  }
}
//
function callServiceNewborn() {
  var responseContext = "";
  var div = document.getElementById('loading');
  var table = document.getElementById('returnDiv');
  var divPanel = document.getElementById('panel');

  var strtDay  = UpdateForm.ptmas017.value.substring(0,2);
  var strtMon  = UpdateForm.ptmas017.value.substring(3,6);
  var strtYear = UpdateForm.ptmas017.value.substring(7,11);
  strtMon = GetMonthNumber(strtMon);
  var DOB = strtYear + '-' + strtMon + '-' + strtDay + 'T00:00:00';

  var gender = UpdateForm.ptmas015.value.replace(/ /g,"");

  if(gender == "M") {
        gender="MALE";
  }else if (gender  == "F") {
        gender="FEMALE";
  }else if (gender  == "U") {
       gender="NOT_STATED_INADEQUATELY_DESCRIBED";
  }else if (gender  == "I") {
        gender="INTERSEX_OR_INDETERMINATE";
  }else if (gender  == "R") {
        gender="INTERSEX_OR_INDETERMINATE";
  } else {
       gender="NOT_STATED_INADEQUATELY_DESCRIBED";
  }

  theURL =  "../php/empiservice.php?"+
            "&FamilyName="+UpdateForm.ptmas005.value+
            "&GivenName="+UpdateForm.ptmas006.value+
            "&Gender="+gender+
            "&DateOfBirth="+DOB+
            "&AddressLine1="+UpdateForm.ptmas008.value+
            "&AddressLine2="+UpdateForm.ptmas009.value+
            "&AddressLine3="+UpdateForm.ptmas010.value+
            "&AddressLine4="+UpdateForm.ptmas011.value+
            "&PostCode="+UpdateForm.ptmas012.value+
            "&MedicareNumber="+UpdateForm.ptmas023.value+
            "&IsUnknown=0"+
            "&IsNewBorn=1";

      xmlHttp = createHttpObject();
      xmlHttp.open("GET", theURL, true);
      xmlHttp.send(null);

      div.innerHTML = "<img src='../images/ajax-searcher.gif' />" ;
      table.innerHTML = "";
      divPanel.style.display = "none";

     //Timeout to abort in 10 seconds
     //var xmlHttpTimeout=setTimeout(timeoutFired,10000);

     //xmlHttp.ontimeout = function() {
     //   timeoutFired();
     //   return;
     //}

      xmlHttp.onreadystatechange = function () {
        var table = document.getElementById('returnDiv');
        var div = document.getElementById('loading');
        var divPanel = document.getElementById('panel');
        divPanel.style.display = "";

        table.innerHTML = "";

        if(xmlHttp.readyState == 4 && xmlHttp.status == "200") {
         div.innerHTML = "";
         if(xmlHttp.responseText.substring(0,8)==""||
            xmlHttp.responseText.substring(0,8)=="An error" ||
            xmlHttp.responseText.substring(10,21)=="Fatal error"){
            alert("Register New Patient Web Service is Unavailable \n "+
                 "Using webPAS generated UMRN");
                  AdmitBaby();
                  return;
         }
         if(xmlHttp.responseText.substring(0,10)==""||
            xmlHttp.responseText.substring(0,10)=="SOAP-ERROR"){
            alert("Register New Patient Web Service is Unavailable \n "+
                 "Using webPAS generated UMRN");
                  AdmitBaby();
         }else if( xmlHttp.responseText.match(/Exception/g) ) {
             alert("Register New Patient Web Service is Unavailable \n "+
                 "Using webPAS generated UMRN");
                  AdmitBaby();
        }

        try {
          responseContext = eval("("+ xmlHttp.responseText +")");

          if(typeof responseContext.NewUMRN != 'undefined') {
            if(responseContext.NewUMRN==true){

            alert("Registering UMRN - "+ responseContext.UMRN);
            document.getElementById('manalloc').value="1"
            document.getElementById('urnumber').value=responseContext.UMRN;
        //document.AddForm.submit();     T0870115 incorrect form id for template
            AdmitBaby();
// removed 2 lines below as admitbaby will submit the form
//       document.UpdateForm.submit();//T0870115 wahealth/patweb8301001.html
//       return;
            }
         }
       } catch(err) {
         alert("Service currently unavailable.");
         alert("Register New Patient Web Service is Unavailable \n "+
               "Using webPAS generated UMRN");
         AdmitBaby();
       }
     } if(xmlHttp.readyState == 4 && xmlHttp.status == "500") {

       timeoutFired(); 

     }
   }
}
function timeoutFired(){
        alert("Timed Out - Register New Patient Web Service is Unavailable \n "+
              "Using webPAS generated UMRN");
               AdmitBaby();
//             SubmitHidden05(document.AddForm);
}
function MandatoryNOK() {
  var NOKmobile = false;
  if(document.UpdateForm.pmcex014 != undefined) {
     if(!isWhitespace(document.UpdateForm.pmcex014.value)) {
       NOKmobile = true;
     }
  }
  if(!isWhitespace(document.UpdateForm.pmcex004.value) ||
     !isWhitespace(document.UpdateForm.pmcex005.value) ||
     !isWhitespace(document.UpdateForm.pmcex006.value) ||
     !isWhitespace(document.UpdateForm.pmcex007.value) ||
     !isWhitespace(document.UpdateForm.pmcex008.value) ||
     !isWhitespace(document.UpdateForm.pmcex009.value) ||
     !isWhitespace(document.UpdateForm.pmcex010.value) ||
     !isWhitespace(document.UpdateForm.pmcex011.value) ||
     !isWhitespace(document.UpdateForm.pmcex012.value) ||
     !isWhitespace(document.UpdateForm.pmcex013.value) ||
     !isWhitespace(document.UpdateForm.pmcex015.value) ||
     document.UpdateForm.oseasnok.checked==true ||
     NOKmobile == true) {
    document.UpdateForm.pmcex004.className="Mandatory";
    document.UpdateForm.pmcex005.className="Mandatory";
    document.UpdateForm.pmcex006.className="Mandatory";
    document.UpdateForm.pmcex015.className="Mandatory";
  } else {
    document.UpdateForm.pmcex004.className="";
    document.UpdateForm.pmcex005.className="";
    document.UpdateForm.pmcex006.className="";
    document.UpdateForm.pmcex015.className="";
  }
}
function SetPostCode01() {
 if (document.UpdateForm.oseasflg!=undefined) {
    if (trim(document.UpdateForm.ptmas012.value)=="8888") {
       document.UpdateForm.oseasflg.checked=true;
    } else {
       document.UpdateForm.oseasflg.checked=false;
    }
    setAddrLine4(UpdateForm)
 }
 SetPostVars();
}
function SetPostVars() {
 suburb   = document.UpdateForm.ptmas010;
 state    = document.UpdateForm.ptmas011;
 postcode = document.UpdateForm.ptmas012;
}
function setAddrLine4(theForm) {
  if (theForm.oseasflg.checked==1) {
     AddressLine4H.innerHTML=OseasCountryH.innerHTML
     AddressLine4.innerHTML=OseasCountry.innerHTML
   for (var i =0 ; i < theForm.ptmas011.length; i++) {
   if (theForm.ptmas011.options[i].text==theForm.d_ptmas011.value.substr(0,20)){
        theForm.ptmas011.selectedIndex=i } };

     if (trim(theForm.ptmas012.value)!="8888") {
         theForm.ptmas012.value="";
         theForm.ptmas012.value="8888";
     }
  } else {
     AddressLine4H.innerHTML=AustStateH.innerHTML
     AddressLine4.innerHTML=AustState.innerHTML
     if (trim(theForm.ptmas012.value)=="8888") {
         theForm.ptmas012.value="";
         theForm.ptmas012.value="";
     }
  }
  state = theForm.ptmas011;
}
function checkOverseas() {
  if (trim(document.UpdateForm.ptmas012.value)=="8888") {
    document.UpdateForm.oseasflg.checked=true;
  } else {
    document.UpdateForm.oseasflg.checked=false;
  }
  setAddrLine4(UpdateForm);
}
function SetPostCode01N() {
 if (document.UpdateForm.oseasnok!=undefined) {
    if (trim(document.UpdateForm.pmcex011.value)=="8888") {
       document.UpdateForm.oseasnok.checked=true;
    } else {
       document.UpdateForm.oseasnok.checked=false;
    }
    setAddrLine4N(UpdateForm)
 }
 SetPostVarsN();
}
function SetPostVarsN() {
 suburb   = document.UpdateForm.pmcex009;
 state    = document.UpdateForm.pmcex010;
 postcode = document.UpdateForm.pmcex011;
}
function setAddrLine4N(theForm) {
  if (theForm.oseasnok.checked==1) {
     AddressLine4HN.innerHTML=OseasCountryHN.innerHTML
     AddressLine4N.innerHTML=OseasCountryN.innerHTML
   for (var i =0 ; i < theForm.pmcex010.length; i++) {
   if (theForm.pmcex010.options[i].text==theForm.d_ptmas011.value.substr(0,20)){
        theForm.pmcex010.selectedIndex=i } };

     if (trim(theForm.pmcex011.value)!="8888") {
         theForm.pmcex011.value="";
         theForm.pmcex011.value="8888";
     }
  } else {
     AddressLine4HN.innerHTML=AustStateHN.innerHTML
     AddressLine4N.innerHTML=AustStateN.innerHTML
     if (trim(theForm.pmcex011.value)=="8888") {
         theForm.pmcex011.value="";
         theForm.pmcex011.value="";
     }
  }
  state = theForm.pmcex010;
}
function checkOverseasN() {
  if (trim(document.UpdateForm.pmcex011.value)=="8888") {
    document.UpdateForm.oseasnok.checked=true;
  } else {
    document.UpdateForm.oseasnok.checked=false;
  }
  setAddrLine4N(UpdateForm);
}
function MultipleBirth(ReturnAdmission) {
  if (isWhitespace(ReturnAdmission.value)) return;;
  var serverURL   = "../cgi-bin/comweb80.pbl?reportno=52" +
                    "&valdcode=" + ReturnAdmission.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    if(ReturnValue[0]=="1") {
      if(!confirm("Warning: Is this a multiple birth?" +
                  "\nClick OK to continue, Cancel to " +
                  "\nreturn to Inpatient previous screen ")){
        history.go(-1);
      }
    }
  }
}
function DisplayFieldsHEA() {
  if(document.getElementById("PMIDef1L")) {
    if(isWhitespace(document.getElementById("PMIDef1L").innerHTML)) {
      document.getElementById("PMIDef1L").innerHTML="";
      document.getElementById("PMIDef1F").innerHTML="";
    }
  }
  if(document.getElementById("PMIDef2L")) {
    if(isWhitespace(document.getElementById("PMIDef2L").innerHTML)) {
      document.getElementById("PMIDef2L").innerHTML="";
      document.getElementById("PMIDef2F").innerHTML="";
    }
  }
  if(document.getElementById("PMIDef3L")) {
    if(isWhitespace(document.getElementById("PMIDef3L").innerHTML)) {
      document.getElementById("PMIDef3L").innerHTML="";
      document.getElementById("PMIDef3F").innerHTML="";
    }
  }
  if(document.getElementById("PMIDef4L")) {
    if(isWhitespace(document.getElementById("PMIDef4L").innerHTML)) {
      document.getElementById("PMIDef4L").innerHTML="";
      document.getElementById("PMIDef4F").innerHTML="";
    }
  }
  if(document.getElementById("PMIDef5L")) {
    if(isWhitespace(document.getElementById("PMIDef5L").innerHTML)) {
      document.getElementById("PMIDef5L").innerHTML="";
      document.getElementById("PMIDef5F").innerHTML="";
    }
  }

  if(document.getElementById("PMIDef1L")) {
    if((document.getElementById("PMIDef1L").innerHTML=="") &&
       (document.getElementById("PMIDef2L").innerHTML=="") &&
       (document.getElementById("PMIDef3L").innerHTML=="") &&
       (document.getElementById("PMIDef4L").innerHTML=="") &&
       (document.getElementById("PMIDef5L").innerHTML==""))
      {
       document.getElementById("headerline").style.display="none";
      }
  }
}
function ShowOptOutSMS() {
  if(document.getElementById("ptcnsmsn").value == "1") {
    document.getElementById('DisplaySMS').style.display="";
    if(document.getElementById('ptmsx050').value=="1") {
      document.getElementById('d_ptmsx050').checked=true;
    }
  }
}
function SetOptOutSMS() {
  if(document.getElementById("ptcnsmsn").value == "1") {
    if(document.getElementById('d_ptmsx050').checked==true) {
      document.getElementById('ptmsx050').value="1";
    } else {
      document.getElementById('ptmsx050').value="0";
    }
  }
}
