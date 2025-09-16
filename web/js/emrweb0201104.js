//jsVersion  : V11.03.06
//========================================================================
//-----------------------------------------------------------------
// Show VEMD Telehealth fields
//-----------------------------------------------------------------
function VEMDFields() {
  if(!document.getElementById("emvis177")) {
    return;
  }
  if (document.getElementById("disstvar").value == "2" ||
      document.getElementById("disstvar").value == "3") {
    visitdate=document.getElementById("disdtvar");
    statevar=document.getElementById("ptcnhdps");
    servicetype=document.getElementById("emvis177");
    if(SetDateYYYYMMDD(visitdate.value)< DOYR2019 || statevar.value != "3") {
      return;
    }
  }
  document.getElementById("servicename").style.display="";
  document.getElementById("servicefield").style.display="";
  document.getElementById("service1").style.display="";
  document.getElementById("service2").style.display="";
  document.getElementById("service3").style.display="";
  VEMDPatientLoc();
  VEMDPatientSource();
}
//-----------------------------------------------------------------
// Show VEMD Telehealth patient location
//-----------------------------------------------------------------
function VEMDPatientLoc() {
  servicetype=document.getElementById("emvis177");
  patlocation=document.getElementById("emvis178");
  if((servicetype.value.substr(14,1)=="2") ||
     (servicetype.value.substr(14,1)=="6")) { 
    document.getElementById("locationname").style.display="";
    document.getElementById("locationfield").style.display="";
    patlocation.className="SelectBig";
    if (servicetype.value.substr(14,1)=="2") {
      for (var i =0 ; i < patlocation.length; i++) {
        if (patlocation.options[i].value.substr(14,4)=="9996" &&
            patlocation.options[i].value.substr(4,1)=="V") {  // Home
          patlocation.options[i].hidden=true;
        }
        if (patlocation.options[i].value.substr(14,4)!="9996" &&
          patlocation.options[i].value.substr(4,1)!="V") {  // Home
          patlocation.options[i].hidden=false;
        }
      }
    } else {
      for (var i =0 ; i < patlocation.length; i++) {
          patlocation.options[i].hidden=false;
      }
    }
    patlocation.selectedIndex=0;
  } else {
    document.getElementById("locationname").style.display="none";
    document.getElementById("locationfield").style.display="none";
    patlocation.className="SelectBig";
    patlocation.selectedIndex=0;

    for (var i =0 ; i < patlocation.length; i++) {
      patlocation.options[i].hidden=false;
    }

  }
}
//-----------------------------------------------------------------
// Show VEMD Telehealth patient location source
//-----------------------------------------------------------------
function VEMDPatientSource() {
  patlocation=document.getElementById("emvis178");
  locsource=document.getElementById("trnsfsrc");
  locsource_name=document.getElementById("name_trnsfsrc");
  if(patlocation.value.substr(3,1)=="T") {
    document.getElementById("sourcename").style.display="";
    document.getElementById("sourcefield").style.display="";
    locsource.className="";
  } else {
    document.getElementById("sourcename").style.display="none";
    document.getElementById("sourcefield").style.display="none";
    locsource.className="";
    locsource.value="";
    locsource_name.value="";
  }
}
//-----------------------------------------------------------------
// VEMD Telehealth mandatory fields
//-----------------------------------------------------------------
function VEMDMandatory() {
  servicetype=document.getElementById("emvis177");
  patlocation=document.getElementById("emvis178");
  locsource=document.getElementById("trnsfsrc");

  servicetype.className="SelectBig Mandatory";
  if ((servicetype.value.substr(14,1)=="2") ||
    (servicetype.value.substr(14,1)=="6")) {
    patlocation.className="SelectBig Mandatory";
  } else { 
    patlocation.className="SelectBig";
  }
  if(patlocation.value.substr(3,1)=="T") {
    locsource.className="Mandatory";
  } else {
    locsource.className="";
  }
}
function VEMDFieldsOnload() {
  if(!document.getElementById("emvis177")) {
    return;
  }
  if (document.getElementById("disstvar").value == "2" ||
      document.getElementById("disstvar").value == "3") {
    visitdate=document.getElementById("disdtvar");
    statevar=document.getElementById("ptcnhdps");
    servicetype=document.getElementById("emvis177");
    if(SetDateYYYYMMDD(visitdate.value)< DOYR2019 || statevar.value != "3") {
      return;
    }
  }
  document.getElementById("servicename").style.display="";
  document.getElementById("servicefield").style.display="";
  document.getElementById("service1").style.display="";
  document.getElementById("service2").style.display="";
  document.getElementById("service3").style.display="";
  VEMDPatientLocOnload();
  VEMDPatientSource();
}
//-----------------------------------------------------------------
// Show VEMD Telehealth patient location
//-----------------------------------------------------------------
function VEMDPatientLocOnload() {
  servicetype=document.getElementById("emvis177");
  patlocation=document.getElementById("emvis178");
  if((servicetype.value.substr(14,1)=="2") ||
     (servicetype.value.substr(14,1)=="6")) {
    document.getElementById("locationname").style.display="";
    document.getElementById("locationfield").style.display="";
    patlocation.className="SelectBig";
    if (servicetype.value.substr(14,1)=="2") {
      for (var i =0 ; i < patlocation.length; i++) {
        if (patlocation.options[i].value.substr(14,4)=="9996" &&
            patlocation.options[i].value.substr(4,1)=="V") {  // Home
          patlocation.options[i].hidden=true;
        }
      }
    } else {
      for (var i =0 ; i < patlocation.length; i++) {
          patlocation.options[i].hidden=false;
        }
      }
  } else {
    document.getElementById("locationname").style.display="none";
    document.getElementById("locationfield").style.display="none";
    patlocation.className="SelectBig";
    patlocation.selectedIndex=0;

    for (var i =0 ; i < patlocation.length; i++) {
      patlocation.options[i].hidden=false;
    }

  }
}
