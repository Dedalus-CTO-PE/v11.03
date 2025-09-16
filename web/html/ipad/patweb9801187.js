//jsVersion  : V11.03.00
//
/******************************************************************************
 * Program : patweb9801187.js
 * Written : B.G Ackland
 * Function: Patient Medical Record View
 * Version :
 * V10.07.01 17.02.2016 Davin       CAR 0310749
 *           Added xdiet to open new diet screen in nutritionUpdate()
 * V10.03.04 23.07.2013 B.G.Ackland   CAR 288223
 *           Change No Color Tabs to TA01 Class
 * V10.03.03 16.07.2013 B.G.Ackland   CAR 288223
 *           Enable Default Left Position for medical Record Tab
 * V10.03.02 01.07.2013 B.G.Ackland   CAR 286325
 *           Remove medicalViewStyle from standard
 * V10.03.01 05.06.2013 Saroeun Soeur CAR 286325
 *           medicalViewStyle loadStyleSheet based on param
 ******************************************************************************/
//------------------------------------------------------------
// Initialise Medical Records View
//------------------------------------------------------------
function init() {
  var elFrame=window.top.document.getElementById("iphone-frame")
  el=elFrame.contentDocument.getElementById("PatientTabMenu");
  var tabLocation=document.getElementById('tabMenuLocation');
  var actionBtn=parent.document.getElementById('actionPatient');
  if(typeof(Storage)!=="undefined") {
    ProcessKeyName=top.getCookie("ProcessKey");
    var tabPosition=localStorage.getItem(ProcessKeyName+"-tabPosition");
    var tabColor=localStorage.getItem(ProcessKeyName+"-tabColor");
    var tabClass=el.getElementsByTagName("UL");
    for (i=0;i<tabClass.length;i++) {   //  Set Default Position Based on UL element
      if (tabClass[i].className=="tabMenuLeft") {
        if (tabPosition == null) { tabPosition="L"; }
      }
    }
    tabMenuClass="tabMenu"
    
    if (tabPosition =="L") {
      ml=document.getElementById("MRMenu");
      ml.style.float="left";
      ml.style.borderLeft="0";
      ml.style.borderRight="1px solid silver";
      ml.style.marginRight='auto';
      ml.style.marginLeft='0';
      ml.style.float='left';
      ml=document.getElementById("MRPatient");
      ml.style.marginRight='auto';
      ml.style.marginLeft='225px';
      tabMenuClass="tabMenuLeft"
    }

    OS = "<ul class="+tabMenuClass+">";
    var firstTabAction="";
    var tabs=el.getElementsByTagName("LI");
    for (i=0;i<tabs.length;i++) {
      tabClass="tabRight"
      if (firstTabAction=="") firstTabAction=tabs[i].getAttribute("onclick");
      if (tabPosition=="L") tabClass="tabLeft"
      if (tabColor!="N") { 
        tabColorClass=localStorage.getItem(ProcessKeyName+"-"+tabs[i].id);
        if (tabColorClass)  { tabClass+=" "+tabColorClass;}
        else  { tabClass+=" "+tabs[i].className.replace(/ TA01/,"").replace(/tabLeft/,"").replace(/tabRight/,""); }
      } else {
        tabClass+=' TA01';
      }
      tabs[i].className=tabClass;
      OS+=tabs[i].outerHTML;
    }
    OS += "</ul>";
    tabLocation.innerHTML = OS;
  } else {
    tabLocation.innerHTML = el.innerHTML;
  }
  ml=document.getElementById("MRMenu");
  ml.style.display="";
  PatientURN=document.PatientLinks.urnumber.value;
  PatientVIS=document.PatientLinks.admissno.value;
  PatientALT=document.PatientLinks.alternat.value;
  xdiet=document.PatientLinks.ptcnutom.value;
  parent.PatientURN=document.PatientLinks.urnumber.value;
  parent.PatientVIS=document.PatientLinks.admissno.value;
  parent.PatientALT=document.PatientLinks.alternat.value;
  parent.xdiet=document.PatientLinks.ptcnutom.value;
  CurrentDiv=document;
  if(actionBtn) {
    el=elFrame.contentDocument.getElementById("PatientActions");
    actionBtn.innerHTML = el.innerHTML;
  }
  if (firstTabAction!="") {
    eval(firstTabAction);
  }
  else {
    ShowPatientAlerts();
  }
  checkDocExist(); //recheck alert icons
  setTimeout(function() { AddAlertIcons()},100);
}
//------------------------------------------------------------
// Add Alert Icons to the Patient Header
//------------------------------------------------------------
function AddAlertIcons() {
  PatientALT=document.PatientLinks.alternat.value;
  el=document.getElementsByTagName("SPAN")
  for (i=0;i<el.length;i++) {
    if (el[i].id=="FlagDoc") { 
      if (PatientALT.substr(3,1)==1)       { el[i].className = 'showAlertClinDoc';} }
    if (el[i].id=="FlagDec") { 
      if (PatientALT.substr(6,1)=="1")     { el[i].innerHTML ='<font color=red>(Deceased)</font>';} }
    if (el[i].id=="FlagDef") { 
      if (PatientALT.substr(18,1)=="1")    { el[i].className = 'showDeaf'; } }
    if (el[i].id=="FlagInt") { 
      if (PatientALT.substr(12,1) == "1" ) { el[i].className = 'showInterpretor'; } }
    if (el[i].id=="FlagNfr") { 
      if (PatientALT.substr(14,1)=="1")    { el[i].className = 'showNFR'; } }
    if (el[i].id=="FlagNot") { 
      if (PatientALT.substr(2,1)==1)       { el[i].className = 'showAlertNote'; } }
    if (el[i].id=="FlagOrg") { 
      if (PatientALT.substr(13,1)=="1")    { el[i].className = 'showDonor'; } }
    if (el[i].id=="FlagAlt") { 
      if (PatientALT.substr(0,1)==1) { el[i].className = 'showAlert'; }
      if (PatientALT.substr(0,1)==2) { el[i].className = 'showAlertBlack'; }
      if (PatientALT.substr(0,1)==3) { el[i].className = 'showAlertDelete'; }
      if (PatientALT.substr(0,1)!=0&&PatientALT.substr(0,1)!=1&&
          PatientALT.substr(0,1)!=2&&PatientALT.substr(0,1)!=3) {
           el[i].className = 'showAlert'+ PatientALT.substr(0,1);
         }
      }
    if (el[i].id=="FlagRes") { 
      if (PatientALT.substr(1,1)==1) {  el[i].className = 'showResults'; }
      if (PatientALT.substr(1,1)==2) {  el[i].className = 'showNewResults'; }
      }
    if (el[i].id=="FlagMon") { 
      checkMonitorLink(); }
  }
}
