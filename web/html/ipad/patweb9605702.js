//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/patweb9605702.js
//
// Modification
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.01 06.08.2013 B.G.Ackland CAR 289383
//                      New AJAXPostString2 to fix post encoding
// V10.01.01 04.12.2012 B.G.Ackland New Medical Record View Refresh
// V10.01.00 13/04/2012 Version change
// V10.00.00 13/04/2012 Created for Mobility Suite
//

function setButtons() {
 var actionBtn = parent.document.getElementById('actionButton');
 if(actionBtn) {
    actionBtn.className = actionBtn.className.replace(/SpanButton/g,"");
    actionBtn.className = actionBtn.className.replace(/Blue/g,"");
    actionBtn.className = actionBtn.className + " SpanButtonBlue";
    actionBtn.innerText = "Discharge";
    actionBtn.onclick = function() {
       discharge();
     }
  }
}
function chkDecPRFA() {
  var i=document.pat96pdf.dschdest.selectedIndex;
  var ind=document.pat96pdf.dschdest.options[i].value.substring(14,15);

  if (document.pat96pdf.ptcndees.value==1) {
    if (document.pat96pdf.patcse.value=="Yes") {
      alertify.alert("Patient discharged as deceased. PRFA will be changed and prefixed with the Description of Deceased Estates.");
    } else {
      if (ind=="D") {
      alertify.alert("Patient discharged as deceased. PRFA will be changed and prefixed with the Description of Deceased Estates.");
      }
    }
  }
}
function discharge() {
  chkDecPRFA();
  MandatoryOk=validateMandatory(document.pat96pdf)
  if (MandatoryOk) {
    SetHousekeeping();
    theURL=document.pat96pdf.action;
    var postStr=AJAXPostString2(document.pat96pdf)
    var xmlHttp = createHttpObject();
    xmlHttp.open("POST", theURL, false);
    xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
    xmlHttp.send(postStr);
    if (xmlHttp.status=="200") {
      if (xmlHttp.responseText.match(/location.href/i)) {
        parent.frames['PatFrame'].refreshScreen();
        parent.CloseDocument();
      }
      else {
        alertify.alert(xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,""));
      }
    }
    else {
      alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
    }
 }
}
function DisplayTrnSrc() {
  var i=document.pat96pdf.dschdest.selectedIndex;
  var ind=document.pat96pdf.dschdest.options[i].value.substring(4,5)
  var ind1=document.pat96pdf.dschdest.options[i].value.substring(3,4)
  if (ind!="1") {
    document.getElementById("tDest").innerHTML="";
    document.getElementById("tDest").style.display="none";
    document.getElementById("trnsfsrc").value=" ";
  } else {
    document.getElementById("tDest").innerHTML=document.getElementById("transferDestination").innerHTML;
    document.getElementById("tDest").style.display="";
  }
  if (ind1=="Z") {
     document.pat96pdf.dschsref.className=""
     document.pat96pdf.dschsref.readOnly= false;
   } else{
     document.pat96pdf.dschsref.value= "";
     document.pat96pdf.dschsref.className="ReadOnly";
     document.pat96pdf.dschsref.readOnly= true;
   }
}

function DisplayAutopsy() {
  i=document.pat96pdf.dschstat.selectedIndex
  ind=document.pat96pdf.dschstat.options[i].value.substring(3,4)
  if (ind=="D") {
    document.pat96pdf.dschdind.value="1"
    document.getElementById("tAuto").style.display="";
    document.getElementById("tAuto").innerHTML=document.getElmentById("autopsyDiv").innerHTML;
    document.getElementById("trnsfsrc").value=" ";
  }
  else {
    document.getElementById("tAuto").style.display="none";
    document.getElementById("tAuto").innerHTML="";
    document.pat96pdf.dschdind.value="0"}
}
function ShowHouse() {
  if(document.pat96pdf.ptcnchod.value=="1") {
    Housekeeping.outerHTML=Displayhousekeeping.innerHTML;
  }
}
function HouseMandatory() {
  if(document.pat96pdf.notifyhs.value=="1") {
     document.pat96pdf.pmhrd006.className="Mandatory"
     document.pat96pdf.pmhrd006.disabled=false;
  } else {
     document.pat96pdf.pmhrd006.selectedIndex=0;
     document.pat96pdf.pmhrd006.className="Readonly"
     document.pat96pdf.pmhrd006.disabled=true;
  }
}
function SetHousekeeping() {
  if(document.pat96pdf.ptcnchod.value=="1" &&
    document.pat96pdf.notifyhs.value=="1") {
    document.pat96pdf.pmhrd004.value=document.pat96pdf.trandate1.value;
    document.pat96pdf.pmhrd005.value=document.pat96pdf.trantime.value;
  }
}

function moveMREC() {
  var confirmMsg="Do you want to move Medical Record?";
  alertify.confirm(confirmMsg, function (e) {    
    if (e) {
      document.pat96pdf.movemrec.value=1;
    } else {
      document.pat96pdf.movemrec.value=0;
    }
  });
  theURL=document.pat96pdf.action;
  var postStr=AJAXPostString2(document.pat96pdf)
  var xmlHttp = createHttpObject();
  xmlHttp.open("POST", theURL, false);
  xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
  xmlHttp.send(postStr);
  if (xmlHttp.status=="200") {
    if (xmlHttp.responseText.match(/location.href/i)) {
        parent.frames['PatFrame'].refreshScreen();
        parent.CloseDocument();
    }
    else {
      alertify.alert(xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,""));
    }
  }
  else {
    alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
  }
}
//------------------------------------------------------------
// Separation Referral Alert
//------------------------------------------------------------
function SeparationAlert() {
  alertify.alert("Valid Separation Referral Character<br><br>" +
"A - Referral to ACAS, arranged before discharge<br>" +
"K - Referral to ATSI, arranged before discharge<br>" +
"F - Domiciliary postnatal care, arranged before discharge<br>" +
"P - Post acute care program services, arranged before discharge<br>" +
"M - Referral to a community rehabilitation centre, arranged before discharge<br>" +
"B - Community palliative care support, arranged before discharge<br>" +
"U - Home nursing support, arranged before disc (name change from dis nursing)<br>" +
"C - Mental health community services, arranged before discharge<br>" +
"S - Referral to private psychiatrist, arranged before discharge<br>" +
"D - Psychiatric disability support service, arranged before discharge<br>" +
"G - Referral to general practitioner, arranged before discharge<br>" +
"R - Other clinical care &/or support services, arranged before discharge<br>" +
"X - No referral or support services, arranged before discharge<br>" +
"L - Alcohol and drug treatment service, arranged before discharge<br>" +
"T - Referral to Transition Care home based program, arranged before discharge")
}
//------------------------------------------------------------
// Validate Separation Referral Characters
// Modifications: 
// V10.01.00 07.04.2010 Jill Parkinson CAR 215709
//           Removed I - Home based interim care
// V9.11.01  03.12.2008 Ebon Clements CAR 174065
//           Added ShowHouse() and HouseMandatory()
// V9.04.02  30.05.2005 Peter Vela   CAR 60167
//           Added code T
// V9.03.02  22.06.2004 Peter Vela   CAR 49016
//           Added codes L and I
// V9.03.01  23.06.2003 Jill Habasque    40587
//           Added codes A and K
//           25/10/2001 Jill Habasque
//           Fixed spelling of separation
//           27/09/2001 Ebon Clements
//           Java script changes for patweb96 templates
//------------------------------------------------------------
function SeparationRef(Separation,Sex,patage) {
  var ValidCodes = "AKFPMBUCSDGRXLT "
  var ValidCodes2 = " "
  Separation.value=Separation.value.toUpperCase()

  Char1=Separation.value.substr(0,1)
  Char2=Separation.value.substr(1,1)
  Char3=Separation.value.substr(2,1)
  Char4=Separation.value.substr(3,1)
  PatSex=Sex.substr(0,1)

  if(Separation.value.length == 2 ) {                                        
    if (Char1==Char2) 
        {
         alertify.alert("Duplicate codes not allowed")
        }                                                                 
  }
  if(Separation.value.length == 3 ) {                                        
    if (Char1==Char2 || Char1==Char3 || Char2==Char3) 
        {
         alertify.alert("Duplicate codes not allowed")
        }                                                                
  }
  if(Separation.value.length == 4 ) {                                        
    if (Char1==Char2 || Char1==Char3 || Char1==Char4 ||
        Char2==Char3 || Char2==Char4 || Char3==Char4) 
        {
         alertify.alert("Duplicate codes not allowed")
        }                                            //HPS Code ends here
  }
// No other codes can be used with code X
  if (Char1 == "X") {
    if (Char2!="" && ValidCodes2.indexOf(Char2)==-1) {
        alertify.alert("Incompatible Separation Referral Characters")
        SeparationAlert()
        Separation.focus() 
        return;}
    if (Char3!="" && ValidCodes2.indexOf(Char3)==-1) {
        alertify.alert("Incompatible Separation Referral Characters")
        SeparationAlert()
        Separation.focus() 
        return;}
    if (Char4!="" && ValidCodes2.indexOf(Char4)==-1) {
        alertify.alert("Incompatible Separation Referral Characters")
        SeparationAlert()
        Separation.focus() 
        return;}
  }
// No other codes can be used with code X
  if (Char2 == "X") {
    if (Char1!="" && ValidCodes2.indexOf(Char2)==-1) {
        alertify.alert("Incompatible Separation Referral Characters")
        SeparationAlert()
        Separation.focus() 
        return;}
    if (Char3!="" && ValidCodes2.indexOf(Char3)==-1) {
        alertify.alert("Incompatible Separation Referral Characters")
        SeparationAlert()
        Separation.focus() 
        return;}
    if (Char4!="" && ValidCodes2.indexOf(Char4)==-1) {
        alertify.alert("Incompatible Separation Referral Characters")
        SeparationAlert()
        Separation.focus() 
        return;}
  }
// No other codes can be used with code X
  if (Char3 == "X") {
    if (Char1!="" && ValidCodes2.indexOf(Char2)==-1) {
        alertify.alert("Incompatible Separation Referral Characters")
        SeparationAlert()
        Separation.focus() 
        return;}
    if (Char2!="" && ValidCodes2.indexOf(Char3)==-1) {
        alertify.alert("Incompatible Separation Referral Characters")
        SeparationAlert()
        Separation.focus() 
        return;}
    if (Char4!="" && ValidCodes2.indexOf(Char4)==-1) {
        alertify.alert("Incompatible Separation Referral Characters")
        SeparationAlert()
        Separation.focus() 
        return;}
  }
// No other codes can be used with code X
  if (Char4 == "X") {
    if (Char1!="" && ValidCodes2.indexOf(Char2)==-1) {
        alertify.alert("Incompatible Separation Referral Characters")
        SeparationAlert()
        Separation.focus() 
        return;}
    if (Char2!="" && ValidCodes2.indexOf(Char3)==-1) {
        alertify.alert("Incompatible Separation Referral Characters")
        SeparationAlert()
        Separation.focus() 
        return;}
    if (Char3!="" && ValidCodes2.indexOf(Char4)==-1) {
        alertify.alert("Incompatible Separation Referral Characters")
        SeparationAlert()
        Separation.focus() 
        return;}
  }
// Check for male with Post Natal Care

  if (PatSex == "M") {
     if (Char1=="F" || Char2=="F" || Char3=="F" || Char4=="F"){
        alertify.alert("Invalid Separation Referral Character for a male")
     }
}
       
//
  if (Char1!="" && ValidCodes.indexOf(Char1)==-1) {
      alertify.alert("Invalid Separation Referral Character \"" + Char1 + "\"")
      SeparationAlert()
      Separation.focus() }
  if (Char2!="" && ValidCodes.indexOf(Char2)==-1) {
      alertify.alert("Invalid Separation Referral Character \"" + Char2 + "\"")
      SeparationAlert()
      Separation.focus() }
  if (Char3!="" && ValidCodes.indexOf(Char3)==-1) {
      alertify.alert("Invalid Separation Referral Character \"" + Char3 + "\"")
      SeparationAlert()
      Separation.focus() }
  if (Char4!="" && ValidCodes.indexOf(Char4)==-1) {
      alertify.alert("Invalid Separation Referral Character \"" + Char4 + "\"")
      SeparationAlert()
      Separation.focus() }
//      SeprefChk(Separation);

}


