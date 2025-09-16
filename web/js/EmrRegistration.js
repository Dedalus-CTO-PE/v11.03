//jsVersion  : V11.03.06
//========================================================================
// Program   : EmrRegistration.js
//
// Written   : 28.12.2000 Pat Dirito
//
// Function  : Standard Functions Used in EmrRegistration templates
//
//========================================================================
function SetFields() {
 state = UpdateForm.ptmas085;
 suburb = UpdateForm.ptmas010;
 postcode = UpdateForm.ptmas011;
}
function CheckCode(code,selectlist)  {
  var found=0;
 if (isWhitespace(code.value)) {
    selectlist.selectedIndex=0;
    return; }
  strvar=code.value+"   ";        // format as three characters space filled
  code.value=strvar.substr(0,3)
  for (var i =0 ; i < selectlist.length; i++) {
    if (selectlist.options[i].value.substr(0,3)==code.value) {
      found=1
      selectlist.selectedIndex=i } }
  if (found==0) {
    alert("Invalid Code Entered")
    selectlist.selectedIndex=0
    //code.focus();
    FocusDelay(code);
  }
}
function UpdateCode(code,selectlist) {
  code.value=selectlist.value.substr(0,3);
}
function CheckGP(gp,selectlist)  {
 var found=0
 if (isWhitespace(gp.value)) {
    selectlist.selectedIndex=0;
    return; }
 strvar=gp.value+"        "         // format as eight characters space filled
 gp.value=strvar.substr(0,8)
 for (var i =0 ; i < selectlist.length; i++) {
   if (selectlist.options[i].value.substr(0,8)==gp.value) {
      found=1
      selectlist.selectedIndex=i
      //selectlist.focus();
      FocusDelay(selectlist);
   }
 }
 if (found==0) { alert("Invalid GP Entered")
    selectlist.selectedIndex=0
    //gp.focus();
    FocusDelay(gp);
 }
}
function UpdateGP(gp,selectlist) {
  gp.value=selectlist.value.substr(0,8);
}
function ChkIndicator() {
  i=document.UpdateForm.emvis061.selectedIndex
  ind=document.UpdateForm.emvis061.options[i].value.substr(5,1)
  if (ind!="1") {
    document.UpdateForm.emvis032.selectedIndex=0
    alert("Transfer Source Code not required for selected Referred By Code")
    document.UpdateForm.emvis061.focus()
  }
}
function CheckIndiStat(){
  // Check indicator for transfer destination
  i=document.UpdateForm.emvis061.selectedIndex
  ind=document.UpdateForm.emvis061.options[i].value.substr(5,1)
  if (ind=="1") {
    if (document.UpdateForm.emvis032.selectedIndex=="0") {
      alert("Please enter a Transfer Source.");
      document.UpdateForm.emvis032.focus()
      return; } }
}
function checkReferred() {
  if(VEMDHideFields()) {
    TranSrc.innerHTML=transferblank.innerHTML;
    TranSrcHeading.innerHTML="";
    if(document.UpdateForm.emvis019!=undefined){
       document.UpdateForm.emvis019.value="";
       document.UpdateForm.emvis019.readOnly=true;
       document.UpdateForm.emvis019.className="Readonly";
    }
    return;
  }
  i=document.UpdateForm.emvis061.selectedIndex;
  ind=document.UpdateForm.emvis061.options[i].value.substr(5,1)
  if(ind=="1") {
    TranSrcHeading.innerHTML=transferhd.innerHTML;
    TranSrc.innerHTML=transfersrc.innerHTML;
  } else {
    TranSrc.innerHTML=transferblank.innerHTML;
    TranSrcHeading.innerHTML="";
  }
  if(ind=="2") {
    if(document.UpdateForm.emvis019!=undefined){
      document.UpdateForm.emvis019.className="Mandatory";}
  } else {
    if(document.UpdateForm.emvis019!=undefined){
      document.UpdateForm.emvis019.className="";}
  }
}
function SetRedirect() {
  ind1=document.UpdateForm.emvis008.value.substr(3,1)
  ind2=document.UpdateForm.emvis008.value.substr(4,1)
  ind3=document.UpdateForm.emvis008.value.substr(5,1)
  ind4=document.UpdateForm.emvis008.value.substr(6,1)
  ind5=document.UpdateForm.emvis008.value.substr(7,1)

  if (document.UpdateForm.ptcnxcom != undefined) {
    if (document.UpdateForm.ptcnxcom.value == "1") {
      setRedirectXCom();
      return;
    }
  }

  if((ind1=="W")||(ind2=="W")||(ind3=="W")||(ind4=="W")||(ind5=="W")) {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=1&template=13";
  } else
  if((ind1=="V")||(ind2=="V")||(ind3=="V")||(ind4=="V")||(ind5=="V")) {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=1&template=17";
  } else
  if((ind1=="M")||(ind2=="M")||(ind3=="M")||(ind4=="M")||(ind5=="M")) {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=1&template=18";
  } else
  if((ind1=="C")||(ind2=="C")||(ind3=="C")||(ind4=="C")||(ind5=="C")) {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=1&template=29";
  } else
  if((ind1=="D")||(ind2=="D")||(ind3=="D")||(ind4=="D")||(ind5=="D")) {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=1&template=82";
  } else 
  if ((document.UpdateForm.ptcnueoc.value==1) && (ind3=="A")) {
     document.UpdateForm.redirect.value="eocweb01.pbl?reportno=1&template=006"
     + "&returncd=EMR";
  } else
  if(document.UpdateForm.ptcnnewc.value==1){
    document.UpdateForm.redirect.value="patweb07.pbl?reportno=06&template=004";
  } 
  else {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=1&template=14";
  }
}

function setRedirectXCom() {
  if((ind1=="D")||(ind2=="D")||(ind3=="D")||(ind4=="D")||(ind5=="D")) {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=1&template=82";
  } else 
  if(ind1=="A") {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=1&template=140";
  } else
  if(ind1=="O") {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=1&template=141";
  } else
  if(ind1=="M") {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=1&template=142";
  } else
  if(ind1=="F") {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=1&template=143";
  } else
  if(ind1=="H") {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=1&template=144";
  } else
  if(ind1=="S") {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=1&template=145";
  } else
  if(ind1=="V") {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=1&template=146";
  } else
  if(ind1=="W") {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=1&template=147";
  } else
  if(ind1=="E") {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=1&template=148";
  } else
  if(ind1=="G") {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=1&template=149";
  } else
  if ((document.UpdateForm.ptcnueoc.value==1) && (ind3=="A")) {
     document.UpdateForm.redirect.value="eocweb01.pbl?reportno=1&template=006"
     + "&returncd=EMR";
  } else 
  if(document.UpdateForm.ptcnnewc.value==1){
    document.UpdateForm.redirect.value="patweb07.pbl?reportno=06&template=004"; 
  }
  else {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=1&template=14";
  }
}

function setRedirectAdm() {
  if (document.UpdateForm.ptcnxcom != undefined) {
    if (document.UpdateForm.ptcnxcom.value == "1") {
      setRedirectAdmXCom();
      return;
    }
  }

  if (document.UpdateForm.emvis008.value.substr(3,1) == "M") {
    MVARedirect("018");
  } else if (document.UpdateForm.emvis008.value.substr(3,1) == "V") {
    if(document.PatientLinks.regiflag!=undefined){
      document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=017"
      + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
      + "&regiflag=" + document.PatientLinks.regiflag.value.replace(/ /g,"+")
      + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
    } else {
      document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=017"
      + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
      + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
    }
  } else if (document.UpdateForm.emvis008.value.substr(3,1) == "W") {
    if(document.PatientLinks.regiflag!=undefined){
      document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=013"
      + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
      + "&regiflag=" + document.PatientLinks.regiflag.value.replace(/ /g,"+")
      + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
    } else {
      document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=013"
      + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
      + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
    }
  } else if (document.UpdateForm.emvis008.value.substr(3,1) == "D") {
    if(document.PatientLinks.regiflag!=undefined){
      document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=082"
      + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
      + "&regiflag=" + document.PatientLinks.regiflag.value.replace(/ /g,"+")
      + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
    } else {
      document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=082"
      + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
      + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
    }

  } else if ((document.UpdateForm.ptcnueoc.value==1) &&
              (document.UpdateForm.emvis008.value.substr(5,1)=='A')) {
     document.UpdateForm.redirect.value="eocweb01.pbl?reportno=1&template=006"
     + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
     + "&returncd=EMR" + "&admissno=";
//} else if (document.UpdateForm.emvis008.value.substr(3,1) == "C") {
//    document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=029"
//    + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
//    + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
  } else {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=014";
    if(document.getElementById('ptcnnewc')) {
      if(document.getElementById('ptcnnewc').value==1) {
      document.UpdateForm.redirect.value="patweb07.pbl?reportno=06&template=004"
      }
    }
     document.UpdateForm.redirect.value+=
       "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+") +
       "&admissno=" + document.PatientLinks.admissno.value;

     if(document.PatientLinks.regiflag!=undefined){
       document.UpdateForm.redirect.value+=
       "&regiflag=" + document.PatientLinks.regiflag.value
    }
  }

  //Checks if there is a redirect for recording the NDIS details
  if (document.UpdateForm.redrndis != undefined) {
    if (document.UpdateForm.redrndis.value == "1") {

     //Redirects to concession card screen
     UpdateForm.redirect.value="patweb07.pbl?reportno=4&template=004";
     UpdateForm.redirect.value += "&urnumber="+PatientURN;
     UpdateForm.redirect.value += "&admissno="+PatientVIS;
    }
  }
}

function MVARedirect(template) {
  if(document.PatientLinks.regiflag!=undefined){
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template="
    + template
    + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
    + "&regiflag=" + document.PatientLinks.regiflag.value.replace(/ /g,"+")
    + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
  } else {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template="
    + template
    + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
    + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
  }
}

function setRedirectAdmXCom() {
  if (document.UpdateForm.emvis008.value.substr(3,1) == "D") {
    if(document.PatientLinks.regiflag!=undefined){
      document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=082"
      + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
      + "&regiflag=" + document.PatientLinks.regiflag.value.replace(/ /g,"+")
      + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
    } else {
      document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=082"
      + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
      + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
    }
  } else if (document.UpdateForm.emvis008.value.substr(3,1) == "A") {
    if(document.PatientLinks.regiflag!=undefined){
      document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=140"
      + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
      + "&regiflag=" + document.PatientLinks.regiflag.value.replace(/ /g,"+")
      + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
    } else {
      document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=140"
      + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
      + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
    }
  } else if (document.UpdateForm.emvis008.value.substr(3,1) == "O") {
    if(document.PatientLinks.regiflag!=undefined){
      document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=141"
      + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
      + "&regiflag=" + document.PatientLinks.regiflag.value.replace(/ /g,"+")
      + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
    } else {
      document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=141"
      + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
      + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
    }
  } else if (document.UpdateForm.emvis008.value.substr(3,1) == "M") {
    MVARedirect("142");
  } else if ((document.UpdateForm.pmext049 != undefined) &&
             (document.UpdateForm.pmext049.value == "Y")) {
    MVARedirect("142"); 
  } else if (document.UpdateForm.emvis008.value.substr(3,1) == "F") {
    if(document.PatientLinks.regiflag!=undefined){
      document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=143"
      + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
      + "&regiflag=" + document.PatientLinks.regiflag.value.replace(/ /g,"+")
      + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
    } else {
      document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=143"
      + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
      + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
    }
  } else if (document.UpdateForm.emvis008.value.substr(3,1) == "H") {
    if(document.PatientLinks.regiflag!=undefined){
      document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=144"
      + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
      + "&regiflag=" + document.PatientLinks.regiflag.value.replace(/ /g,"+")
      + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
    } else {
      document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=144"
      + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
      + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
    }
  } else if (document.UpdateForm.emvis008.value.substr(3,1) == "S") {
    if(document.PatientLinks.regiflag!=undefined){
      document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=145"
      + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
      + "&regiflag=" + document.PatientLinks.regiflag.value.replace(/ /g,"+")
      + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
    } else {
      document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=145"
      + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
      + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
    }
  } else if (document.UpdateForm.emvis008.value.substr(3,1) == "V") {
    if(document.PatientLinks.regiflag!=undefined){
      document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=146"
      + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
      + "&regiflag=" + document.PatientLinks.regiflag.value.replace(/ /g,"+")
      + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
    } else {
      document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=146"
      + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
      + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
    }
  } else if (document.UpdateForm.emvis008.value.substr(3,1) == "W") {
    if(document.PatientLinks.regiflag!=undefined){
      document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=147"
      + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
      + "&regiflag=" + document.PatientLinks.regiflag.value.replace(/ /g,"+")
      + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
    } else {
      document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=147"
      + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
      + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
    }
  } else if (document.UpdateForm.emvis008.value.substr(3,1) == "E") {
    if(document.PatientLinks.regiflag!=undefined){
      document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=148"
      + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
      + "&regiflag=" + document.PatientLinks.regiflag.value.replace(/ /g,"+")
      + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
    } else {
      document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=148"
      + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
      + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
    }
  } else if (document.UpdateForm.emvis008.value.substr(3,1) == "G") {
    if(document.PatientLinks.regiflag!=undefined){
      document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=149"
      + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
      + "&regiflag=" + document.PatientLinks.regiflag.value.replace(/ /g,"+")
      + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
    } else {
      document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=149"
      + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
      + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
    }
  } else if ((document.UpdateForm.ptcnueoc.value==1) &&
              (document.UpdateForm.emvis008.value.substr(5,1)=='A')) {
     document.UpdateForm.redirect.value="eocweb01.pbl?reportno=1&template=006"
     + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
     + "&returncd=EMR" + "&admissno=";
//} else if (document.UpdateForm.emvis008.value.substr(3,1) == "C") {
//    document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=029"
//    + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
//    + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
  } else {
     document.UpdateForm.redirect.value="emrweb02.pbl?reportno=01" +
                                        "&template=017" +
     "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+") +
     "&admissno=" + document.PatientLinks.admissno.value;
     if(document.PatientLinks.regiflag!=undefined){
     document.UpdateForm.redirect.value="emrweb02.pbl?reportno=01&template=012"
     + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
     + "&admissno=" + document.PatientLinks.admissno.value
     + "&regiflag=" + document.PatientLinks.regiflag.value
    }
  }
}

function setRedirectAdmNZ() {
     if (document.UpdateForm.emvis008.value.substr(3,1) == "M") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=018"
     + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
     + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
   } else if (document.UpdateForm.emvis008.value.substr(3,1) == "V") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=017"
     + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
     + "&mvmedrec=" + document.UpdateForm.mvmedrec.value + "&admissno=";
   } else if (document.UpdateForm.emvis008.value.substr(3,1) == "W") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=005"
     + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
     + "&mvmedrec=" + document.UpdateForm.mvmedrec.value 
     + "&systflag=1" + "&admissno=";
   } else if (document.UpdateForm.emvis008.value.substr(3,1) == "D") {
     document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=082"
     + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
     + "&mvmedrec=" + document.UpdateForm.mvmedrec.value 
     + "&systflag=1" + "&admissno=";
   } else if ((document.UpdateForm.ptcnueoc.value==1) &&
              (document.UpdateForm.emvis008.value.substr(5,1)=='A')) {
     document.UpdateForm.redirect.value="eocweb01.pbl?reportno=1&template=006"
     + "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+")
     + "&returncd=EMR" + "&admissno=";
   } else {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=014";
    if(document.getElementById('ptcnnewc')) {
     if(document.getElementById('ptcnnewc').value==1) {
      document.UpdateForm.redirect.value="patweb07.pbl?reportno=6&template=004"}
    }
    document.UpdateForm.redirect.value+=
       "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+") +
       "&admissno=" + document.PatientLinks.admissno.value;

    if(document.PatientLinks.regiflag!=undefined){
       document.UpdateForm.redirect.value+=
       "&regiflag=" + document.PatientLinks.regiflag.value }
   }
}
function chgName() {
  if (document.UpdateForm.chckname.value=="0") {
  ans=confirm("Save old Name as Alias ?");
    if (ans) {
      document.UpdateForm.chckname.value="1";
    }
  }
}
function ValidateAmbCase() {
  i=document.UpdateForm.emvis013.selectedIndex
  hdp=trim(document.UpdateForm.emvis013.options[i].value.substr(14,4));
  if (hdp==1 || hdp==2){

  }
  if (hdp==3 || hdp==4 || hdp==10){

  }
}
function CheckAmbType() {
  if(VEMDHideFields()) {
    document.UpdateForm.emvis034.value="";
    document.UpdateForm.emvis034.className="ReadOnly";
    document.UpdateForm.emvis034.readOnly=true;
    return;
  }
  if(document.UpdateForm.emvis013.value.substr(3,1)=="A") {
    document.UpdateForm.emvis034.readOnly=false;
    if(document.UpdateForm.emvis013.value.substr(4,1)=="N") {
      document.UpdateForm.emvis034.className="";
    } else {
      document.UpdateForm.emvis034.className="Mandatory";
    }
  } else {
    document.UpdateForm.emvis034.value="";
    document.UpdateForm.emvis034.className="ReadOnly";
    document.UpdateForm.emvis034.readOnly=true;
  }
}
function CheckAmbTypeHDH() {
  if(document.UpdateForm.emvis013.value.substr(3,1)=="A") {
    document.UpdateForm.emvis034.readOnly=false;
    document.UpdateForm.emvis086.readOnly=false;
    if(document.UpdateForm.emvis013.value.substr(4,1)=="N") {
      document.UpdateForm.emvis034.className="";
      document.UpdateForm.emvis086.className="";
    } else {
      document.UpdateForm.emvis034.className="Mandatory";
      document.UpdateForm.emvis086.className="Mandatory";
    }
  } else {
    document.UpdateForm.emvis034.value="";
    document.UpdateForm.emvis086.value="";
    document.UpdateForm.emvis034.readOnly=true;
    document.UpdateForm.emvis086.readOnly=true;
    document.UpdateForm.emvis034.className="ReadOnly";
    document.UpdateForm.emvis086.className="ReadOnly";
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
function ValMedicare01() {
  ans="True"
  Input=document.UpdateForm.ptmas016.value
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

  Today = new Date();
  Bday = new Date();
  Bday.setFullYear(year);
  Bday.setMonth(mon);
  Bday.setDate(day);
  difference = "0";

  if (Today.getTime() > Bday.getTime()) {
    difference = Today.getTime() - Bday.getTime();
    difference = Math.floor(difference / (1000 * 60 * 60 * 24));
  }
  i=document.UpdateForm.ptmas020.selectedIndex
  ind=document.UpdateForm.ptmas020.options[i].value.substring(3,4)
  if (difference > "180") {
    if (!isWhitespace(document.UpdateForm.ptmas022.value)) {
      if (document.UpdateForm.ptmsx048.value=="0" ||
          document.UpdateForm.ptmsx048.value==" 0") {
      ans=confirm("Warning : patient greater than 6 months, zero medicare reference");
      if (ans==false) {
          document.UpdateForm.ptmsx048.value="";
          document.UpdateForm.ptmsx048.focus();
          return false; }
        }
      }
   }
      if (!isWhitespace(document.UpdateForm.ptmas022.value)) {
        if (isWhitespace(document.UpdateForm.ptmsx048.value)) {
          ans=confirm("Warning : no medicare reference number entered");
          if (ans==false) {
          document.UpdateForm.ptmsx048.focus();
          return false;
          } else {
            if (document.UpdateForm.ptcnhdps!=undefined) {
              if (document.UpdateForm.ptcnhdps.value=="4") {
                document.UpdateForm.ptmsx048.value=0
              } else {
                if (DefaultMedicareReferenceto9=="1") {
                  document.UpdateForm.ptmsx048.value=" "
                } else {
                  document.UpdateForm.ptmsx048.value=9
                }
              }
            }
            defaultMedicareIRN(document.UpdateForm.ptmsx048); 
          }
        }
      }
// Residents only
  if (ind=="1") {
// Less than 180 days old
    if (difference <= "180") {
      if (isWhitespace(document.UpdateForm.ptmas022.value)) {
        if (isWhitespace(document.UpdateForm.ptmsx048.value)) {
          ans=confirm("Warning : Resident with no medicare details");
          if (ans==false) {
             return false;
           }
        } else {
          ans=confirm("Warning : Resident with no medicare number");
          if (ans==false) {
             return false;
          }
        }
      }
    }
// Older than 180 days
    if (difference > "180") {
      if (isWhitespace(document.UpdateForm.ptmas022.value)) {
        if (isWhitespace(document.UpdateForm.ptmsx048.value)) {
          ans=confirm("Warning : Resident with no medicare details");
          if (ans==false) {
             return false;
          }
        } else {
          ans=confirm("Warning : Resident with no medicare number");
          if (ans==false) {
             return false;
          }
        }
      }
    }
  }
return true;
}
function CheckLocalGP() {
  ValidateHCPShow(18,0,UpdateForm.pmpxi059,UpdateForm.genpname,UpdateForm.shwlocgp)
  ShowLocalGP();
}
function ShowLocalGP() {
  if(UpdateForm.shwlocgp.value=="1") {
    LocGPHeading.innerHTML=localgphead.innerHTML;
    LocGPName.innerHTML=localgp.innerHTML;
  } else {
    LocGPHeading.innerHTML="";
    LocGPName.innerHTML=localgpblank.innerHTML;
  }
}
function CheckValPostCode() {
  if(document.UpdateForm.oseasflg != undefined) {
    if(document.UpdateForm.oseasflg.checked == true) {
      return true;
    }
  }

  var fulladdress = trim(postcode.value) + "," +
                   trim(suburb.value) + "," +
                   trim(state.value);
    tmp1 = fulladdress.replace(/[-[\]{}()*+?.,\\^$|#\s]/g, " ");
    for (var i =0; i<PC.length ; i++) {
      tmp2 = PC[i].replace(/[-[\]{}()*+?.,\\^$|#\s]/g, " ");
      if  (tmp2.match(tmp1)) {
          SelectPC[SelectPC.length] = PC[i]
          return true;
    }
  }
  alert("Invalid Suburb/Post Code Combination ");
  return false;
}
function CheckAccom() {
  if(UpdateForm.ptcnhdps.value!="3" ||
     UpdateForm.ptmas020.value.substr(3,1)!="3"){  // Victoria and Prisoner
     return;
  }
  if(!isWhitespace(UpdateForm.pmsvx091.value)){ // Usual Accom
    return;
  }
  for (var i=0; i < UpdateForm.pmsvx091.length; i++) {
   if (UpdateForm.pmsvx091.options[i].value.substr(14,2)=="11"){
       UpdateForm.pmsvx091.selectedIndex=i; } }
}
function CheckEmrOverlap(ur,adate,atime) {
  ReturnFunction="" ;
  for (var i=2; i < CheckEmrOverlap.arguments.length; i++) {
   if (typeof(CheckEmrOverlap.arguments[i]) == 'function') {
     ReturnFunction=CheckEmrOverlap.arguments[i] } }

  var serverURL = "../cgi-bin/emrweb08.pbl?reportno=28" +
                  "&valdurno=" + ur.value.replace(/ /g,"+") +
                  "&valddate=" + adate.value.replace(/ /g,"+") +
                  "&valdtime=" + atime.value.replace(/ /g,"+") 
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
}
function CheckAmbTypeArrival() {
  if(VEMDHideFields()) {
    document.UpdateForm.emvis034.value="";
    document.UpdateForm.emvis034.className="ReadOnly";
    document.UpdateForm.emvis034.readOnly=true;
    AmbArrivalLabel.innerHTML="";
    AmbArrivalField.innerHTML=BlankAmbArrival.innerHTML;
    document.UpdateForm.emvis154.className="PastDate";
    document.UpdateForm.emvis155.className="";
    return;
  }
  if(document.UpdateForm.emvis013.value.substr(3,1)=="A") {
    document.UpdateForm.emvis034.readOnly=false;
    if(document.UpdateForm.emvis013.value.substr(4,1)=="N") {
      document.UpdateForm.emvis034.className="";
    } else {
      document.UpdateForm.emvis034.className="Mandatory";
    }
    AmbArrivalLabel.innerHTML=ShowAmbArrivalLabel.innerHTML;
    AmbArrivalField.innerHTML=ShowAmbArrivalField.innerHTML;
    document.UpdateForm.emvis154.className="Mandatory PastDate";
    document.UpdateForm.emvis155.className="Mandatory";
  } else {
    document.UpdateForm.emvis034.value="";
    document.UpdateForm.emvis034.className="ReadOnly";
    document.UpdateForm.emvis034.readOnly=true;
    AmbArrivalLabel.innerHTML="";
    AmbArrivalField.innerHTML=BlankAmbArrival.innerHTML;
    document.UpdateForm.emvis154.className="PastDate";
    document.UpdateForm.emvis155.className="";
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
function DefaultInformGP(InformGPField, DefaultVal) {
  if (DefaultVal == "3") {
    DefaultVal = "0";
  }
  if (DefaultVal == "4") {
    DefaultVal = "1";
  }
  if (DefaultVal == "5") {
    DefaultVal = "2";
  }

  for (var i=0 ; i < InformGPField.length; i++) {
    if (InformGPField.options[i].value == DefaultVal)
      InformGPField.selectedIndex=i;
  }
}
//-----------------------------------------------------------------
// Hide VEMD Telehealth fields
//-----------------------------------------------------------------
function VEMDHideFields() {
  
  if(!document.getElementById("emvis177")) {
    return false;
  }
  visitdate=document.getElementById("emvis001");
  statevar=document.getElementById("ptcnhdps");
  servicetype=document.getElementById("emvis177");
//  if(SetDateYYYYMMDD(visitdate.value)< DOYR2019 || statevar.value != "3" ||
//     servicetype.value.substr(14,1)!="2") {
//    return false;
//  }
  if(SetDateYYYYMMDD(visitdate.value)< DOYR2023 || statevar.value != "3" ||
     ((servicetype.value.substr(14,1)!="2") &&
      (servicetype.value.substr(14,1)!="6"))) {
    return false;
  }
  return true;     // Hide VEMD Telehealth fields
}
//--------------------------------------------------------------------
// grey-out Arrival Transport if Service Type Telehealth or Virtual
//--------------------------------------------------------------------
function CheckVirtualVisit() {
  if(VEMDTeleVirt()) {
    document.UpdateForm.emvis034.value="";
    document.UpdateForm.emvis034.className="ReadOnly";
    document.UpdateForm.emvis034.readOnly=true;
    return;
  }
}
//--------------------------------------------------------------------
// Verify Service Type Telehealth or Virtual or ????
//--------------------------------------------------------------------
function VEMDTeleVirt() {
  T1="Telehealth";
  G6="Virtual Care";
  if(!document.getElementById("emvis177")) {
    return false;
  }
  visitdate=document.getElementById("emvis001");
  statevar=document.getElementById("ptcnhdps");
  servicetype=document.getElementById("emvis177");
  
  if(SetDateYYYYMMDD(visitdate.value) >= DOYR2023 &&
     servicetype.value.substr(14,1) != "6") {
    return false;
  }
 
  if(statevar.value != "3"){ 
    return false;
  }
  if ((servicetype.value.substr(14,1) == "2") || 
      (servicetype.value.substr(14,1) == "6")) {
    return true;     // Hide Arrival Transport
    }
    else {
    return false;
    }
}
//-----------------------------------------------------------------
// Disable VEMD Telehealth Fields
//-----------------------------------------------------------------
function VEMDDisable() {

  if((!VEMDHideFields()) && (!VEMDTeleVirt())) {
    return;
  }


  document.getElementById("emvis013").selectedIndex=0;     // Arrival Transport
  document.getElementById("emvis013").className="SelectMed Readonly";
  document.getElementById("emvis013").disabled=true;
//
//document.getElementById("emvis061").selectedIndex=0;     // Referred By      
//document.getElementById("emvis061").className="SelectMed Readonly";
//document.getElementById("emvis061").disabled=true;
//
  checkReferred();
  displayReferralFields();
}
//--------------------------------------------------------------------------
//
//When the User enters onto the Attendance Source field, 
//check Service Type = 6 and ref Cat = em and Indicator 2* = V 
//display AMB code in the dropdown
//   filterCatCodeList('AMB',"2","V","5");
////--------------------------------------------------------------------------
//function rmAMBOption(SelectObject,FiltField,FiltValue,FiltOption) {
