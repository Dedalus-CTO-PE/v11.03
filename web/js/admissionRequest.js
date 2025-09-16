//jsVersion  : V11.03.00
//========================================================================
var PMARREQN;  // Admission Request Number
var PMARURNO;  // U/R Number
var PMARVISN;  // Visit Number
var PMARREQD;  // Request Date (CCYYMMDD)
var PMARREQT;  // Request Time (HH:MM:SS)
var PMARRTYP;  // Request Type
var PMARRESC;  // Responsible Clinicial (pmshcpaf)
var PMARUNIT;  // Unit (Cat WU)
var PMARTEAM;  // Team (pmstemaf)
var PMARPRTY;  // Priority (Cat ye)
var PMARDIAG;  // Diagnosis
var PMARPROC;  // Principal Procedure (watproaf)
var PMARPROD;  // Procedure Description Comments
var PMARPRO1;  // Additional Procedure 1 (watproaf)
var PMARPRO2;  // Additional Procedure 2 (watproaf)
var PMARSIDE;  // Side of Surgery (Cat ye)
var PMARCONO;  // Consent Obtained
var PMARCONF;  // Consent Obtained Reason (Cat yg)
var PMARPPBY;  // Proc. Can Be Performed By (Cat yh)
var PMARIHOS;  // Intended Hospital (pathspaf)
var PMARPSAH;  // Patient Suitable For Another Hospit
var PMARPHOS;  // Preferred Hospital (pathspaf)
var PMARPPAD;  // Preferred/Proposed Admission Date
var PMARBTYP;  // Type of Bed Required (Cat yj)
var PMARANPR;  // Admit Night Prior
var PMARCCBR;  // Critical Care Bed Required
var PMARUDF1;  // User Defined Field 1
var PMARANTY;  // Anaesthetic Type (Cat OA)
var PMARODUR;  // Operation Duration
var PMARPARC;  // Pre-Anaesth. Review Code (Cat ym)
var PMARCLTR;  // Clinical Triage Code (Cat yl)
var PMARHGHT;  // Height
var PMARWGHT;  // Weight
var PMARCBMI;  // Calculated BMI
var PMARCOAG;  // Anti-Coagulants
var PMARRACG;  // Referral to Anti-Coagulant Clinic
var PMARAPLT;  // Anti-Platelet
var PMARITCR;  // Initial Tertiary Care Reason Cat WH
var PMARINTR;  // Interpreter Required
var PMARCLAM;  // Financial Class (Cat CL)
var PMARSRCR;  // Source of Referral (Cat S)
var PMARREFC;  // Referring Clinician (pmshcpaf)
var PMARPRAC;  // Practice (pmshcgaf)
var PMARPCNT;  // Practice Count
var PMARLSTS;  // Listing Status (Cat VL)
var PMARINTS;  // Intended Stay (Cat VI)
var PMARSHTN;  // Short Notice (Cat WS)
var PMARPLOS;  // Planned Length of Stay
var PMARNWHC;  // Non WA Hospital Contact (Cat cw)
var PMARPRDT;  // Procedure Date (CCYYMMDD)
var PMARTHLC;  // Theatre Location (Cat yp)
var PMARIMPR;  // Implants Required
var PMARIMPD;  // Implants Description
var PMARIMPO;  // Implants Ordered
var PMARBNGR;  // Bone Graft
var PMAREXFX;  // Ex Fix Removal
var PMARSTAT;  // Request Status
var PMARMAPR;  // Medical Authorisation App.(Cat yi)
var PMARTHRQ;  // Theatre Required
var PMARRECC;  // Recurring Care
var PMARRRCL;  // Reason Returned to Clinician Cat yr
var PMARRREM;  // Reason For Removal (Cat ys)
var PMARTSRC;  // Transfer Source (patvadaf)
var PMAVASAS;  // ASA Score

//------------------------------------------------------------
// Remote script to get admission request details
//------------------------------------------------------------
function getAdmRequest(ReturnAdmReq) {
  ReturnFunction="" ;
  for (var i=1; i < getAdmRequest.arguments.length; i++) {
    if (typeof(getAdmRequest.arguments[i]) == 'function') {
      ReturnFunction=getAdmRequest.arguments[i] }
    }
  if (isWhitespace(ReturnAdmReq.value)) return;;

  var serverURL = "../cgi-bin/patweb15.pbl?reportno=4&remoteno=1" +
                  "&admreqno=" + ReturnAdmReq.value.replace(/ /g,"+");
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    PMARREQN=ReturnValue[0];   // Admission Request Number
    PMARURNO=ReturnValue[1];   // U/R Number
    PMARVISN=ReturnValue[2];   // Visit Number
    PMARREQD=ReturnValue[3];   // Request Date (CCYYMMDD)
    PMARREQT=ReturnValue[4];   // Request Time (HH:MM:SS)
    PMARRTYP=ReturnValue[5];   // Request Type
    PMARRESC=ReturnValue[6];   // Responsible Clinicial (pmshcpaf)
    PMARUNIT=ReturnValue[7];   // Unit (Cat WU)
    PMARTEAM=ReturnValue[8];   // Team (pmstemaf)
    PMARPRTY=ReturnValue[9];   // Priority (Cat ye)
    PMARDIAG=ReturnValue[10];  // Diagnosis
    PMARPROC=ReturnValue[11];  // Principal Procedure (watproaf)
    PMARPROD=ReturnValue[12];  // Procedure Description Comments
    PMARPRO1=ReturnValue[13];  // Additional Procedure 1 (watproaf)
    PMARPRO2=ReturnValue[14];  // Additional Procedure 2 (watproaf)
    PMARSIDE=ReturnValue[15];  // Side of Surgery (Cat ye)
    PMARCONO=ReturnValue[16];  // Consent Obtained
    PMARCONF=ReturnValue[17];  // Consent Obtained Reason (Cat yg)
    PMARPPBY=ReturnValue[18];  // Proc. Can Be Performed By (Cat yh)
    PMARIHOS=ReturnValue[19];  // Intended Hospital (pathspaf)
    PMARPSAH=ReturnValue[20];  // Patient Suitable For Another Hospit
    PMARPHOS=ReturnValue[21];  // Preferred Hospital (pathspaf)
    PMARPPAD=ReturnValue[22];  // Preferred/Proposed Admission Date
    PMARBTYP=ReturnValue[23];  // Type of Bed Required (Cat yj)
    PMARANPR=ReturnValue[24];  // Admit Night Prior
    PMARCCBR=ReturnValue[25];  // Critical Care Bed Required
    PMARUDF1=ReturnValue[26];  // User Defined Field 1
    PMARANTY=ReturnValue[27];  // Anaesthetic Type (Cat OA)
    PMARODUR=ReturnValue[28];  // Operation Duration
    PMARPARC=ReturnValue[29];  // Pre-Anaesth. Review Code (Cat ym)
    PMARCLTR=ReturnValue[30];  // Clinical Triage Code (Cat yl)
    PMARHGHT=ReturnValue[31];  // Height
    PMARWGHT=ReturnValue[32];  // Weight
    PMARCBMI=ReturnValue[33];  // Calculated BMI
    PMARCOAG=ReturnValue[34];  // Anti-Coagulants
    PMARRACG=ReturnValue[35];  // Referral to Anti-Coagulant Clinic
    PMARAPLT=ReturnValue[36];  // Anti-Platelet
    PMARITCR=ReturnValue[37];  // Initial Tertiary Care Reason Cat WH
    PMARINTR=ReturnValue[38];  // Interpreter Required
    PMARCLAM=ReturnValue[39];  // Financial Class (Cat CL)
    PMARSRCR=ReturnValue[40];  // Source of Referral (Cat S)
    PMARREFC=ReturnValue[41];  // Referring Clinician (pmshcpaf)
    PMARPRAC=ReturnValue[42];  // Practice (pmshcgaf)
    PMARPCNT=ReturnValue[43];  // Practice Count
    PMARLSTS=ReturnValue[44];  // Listing Status (Cat VL)
    PMARINTS=ReturnValue[45];  // Intended Stay (Cat VI)
    PMARSHTN=ReturnValue[46];  // Short Notice (Cat WS)
    PMARPLOS=ReturnValue[47];  // Planned Length of Stay
    PMARNWHC=ReturnValue[48];  // Non WA Hospital Contact (Cat cw)
    PMARPRDT=ReturnValue[49];  // Procedure Date (CCYYMMDD)
    PMARTHLC=ReturnValue[50];  // Theatre Location (Cat yp)
    PMARIMPR=ReturnValue[51];  // Implants Required
    PMARIMPD=ReturnValue[52];  // Implants Description
    PMARIMPO=ReturnValue[53];  // Implants Ordered
    PMARBNGR=ReturnValue[54];  // Bone Graft
    PMAREXFX=ReturnValue[55];  // Ex Fix Removal
    PMARSTAT=ReturnValue[56];  // Request Status
    PMARMAPR=ReturnValue[57];  // Medical Authorisation App.(Cat yi)
    PMARTHRQ=ReturnValue[58];  // Theatre Required
    PMARRECC=ReturnValue[59];  // Recurring Care
    PMARRRCL=ReturnValue[60];  // Reason Returned to Clinician Cat yr
    PMARRREM=ReturnValue[61];  // Reason For Removal (Cat ys)
    PMARTSRC=ReturnValue[62];  // Transfer Source
    PMAVASAS=ReturnValue[63];  // ASA Score

    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction()
    }
  }
}
function defaultWLFields() {
 for (var i=0; i < document.AddForm.wattx034.length; i++) { // Booking type
  if (document.AddForm.wattx034.options[i].value.substr(8,1)=="1"){
      document.AddForm.wattx034.selectedIndex=i;
  }
 }
 if(!isWhitespace(PMARRESC)) {
   AddForm.wattr012.value=PMARRESC;   // Responsible Clinicial
   ReFocusTo=document.activeElement;
   AddForm.wattr012.select();
   AddForm.wattr012.blur();
   ReFocusTo.focus();
 }
//
 for (var i=0; i < document.AddForm.wattr011.length; i++) { // Unit
  if (document.AddForm.wattr011.options[i].value.substr(0,3)==PMARUNIT){
      document.AddForm.wattr011.selectedIndex=i;
  }
 }
 AddForm.wattr011.onchange();
//
 for (var i=0; i < document.AddForm.wattx035.length; i++) { // Team
  if (document.AddForm.wattx035.options[i].value.substr(0,5)==PMARTEAM){
      document.AddForm.wattx035.selectedIndex=i;
  }
 }
//
 for (var i=0; i < document.AddForm.wattr014.length; i++) { // Priority
  if (document.AddForm.wattr014.options[i].value.substr(0,3)==PMARPRTY){
      document.AddForm.wattr014.selectedIndex=i;
  }
 }
//
 if(!isWhitespace(PMARDIAG)) {
   AddForm.wattr004.value=PMARDIAG; // Diagnosis
 }
//
 if(!isWhitespace(PMARPROC)) {
   AddForm.wattr001.value=PMARPROC; // Principal Procedure (watproaf)
   valProc1(AddForm.wattr001,AddForm.wattr003);
   setReportable();
 }
//
 if(!isWhitespace(PMARPROD)) {
   AddForm.wattr058.value=PMARPROD; // Procedure Description Comments
 }
//
 if(!isWhitespace(PMARPRO1)) {
   AddForm.wattr040.value=PMARPRO1; // Additional Procedure 1 (watproaf)
   valProc(AddForm.wattr040,AddForm.d_wattr040);
 }
//
 if(!isWhitespace(PMARPRO2)) {
   AddForm.wattr041.value=PMARPRO2; // Additional Procedure 2 (watproaf)
   valProc(AddForm.wattr041,AddForm.d_wattr041);
 }
//
  if(PMARCONO=="0") { // Consent Obtained
    document.AddForm.wattr054.selectedIndex=1;
  } else if (PMARCONO=="1") {
    document.AddForm.wattr054.selectedIndex=2;
  }
// Patient Suitable For Another Hospit
 for (var i=0; i < document.AddForm.wattx048.length; i++) {
  if (document.AddForm.wattx048.options[i].value.substr(0,1)==PMARPSAH){
      document.AddForm.wattx048.selectedIndex=i;
  }
 }
 showPreferredHospital(AddForm);
 if(AddForm.wattx048.value=="1") {
   for (var i=0; i < document.AddForm.wattx049.length; i++) { // Preferred Hosp
     if (document.AddForm.wattx049.options[i].value.substr(0,3)==PMARPHOS){
         document.AddForm.wattx049.selectedIndex=i;
     }
    }
 }
//
 for (var i=0; i < document.AddForm.wattx033.length; i++) { // Anaesthetic Type
  if (document.AddForm.wattx033.options[i].value.substr(0,3)==PMARANTY){
      document.AddForm.wattx033.selectedIndex=i;
  }
 }
//
 for (var i=0; i < document.AddForm.wattx026.length; i++) { // Claim Code
  if (document.AddForm.wattx026.options[i].value.substr(0,3)==PMARCLAM){
      document.AddForm.wattx026.selectedIndex=i;
  }
 }
 showFundingSource();
//
 for (var i=0; i < document.AddForm.wattr048.length; i++) { // Source of Ref
  if (document.AddForm.wattr048.options[i].value.substr(0,3)==PMARSRCR){
      document.AddForm.wattr048.selectedIndex=i;
  }
 }
 DisplayTrnSrc(AddForm.wattr048)
 if(document.AddForm.trnsfsrc.type=="text") {
   document.AddForm.trnsfsrc.value=PMARTSRC;                  // Transfer Source
   validateCode(9,AddForm.trnsfsrc,AddForm.trandesc);
 }
//
 if(!isWhitespace(PMARREFC)) {
   AddForm.wattx046.value=PMARREFC;  // Referring Clinician (pmshcpaf)
   AddForm.wattx047.value=PMARPRAC;  // Practice (pmshcgaf)
   AddForm.wattr035.value=PMARPCNT;  // Practice Count
   p=AddForm;
   ReadDoc(18,0,p.wattx046,p.genpname,p.wattx047,p.genpprac,p.wattr035,p.genpprov);
 }
//
 for (var i=0; i < document.AddForm.wattx004.length; i++) { // Listing Status
  if (document.AddForm.wattx004.options[i].value.substr(0,3)==PMARLSTS){
      document.AddForm.wattx004.selectedIndex=i;
  }
 }
 ChgStat();
//
 for (var i=0; i < document.AddForm.wattx040.length; i++) { // Intended Stay
  if (document.AddForm.wattx040.options[i].value.substr(0,3)==PMARINTS){
      document.AddForm.wattx040.selectedIndex=i;
  }
 }
//
 for (var i=0; i < document.AddForm.wattr015.length; i++) { // Short Notice
  if (document.AddForm.wattr015.options[i].value.substr(0,3)==PMARSHTN){
      document.AddForm.wattr015.selectedIndex=i;
  }
 }
//
 if(!isWhitespace(PMARPLOS)) {
   AddForm.wattr013.value=trim(PMARPLOS);  // Planned Length of Stay
 }
//
 for (var i=0; i < document.AddForm.wattx039.length; i++) { // Non WA Hosp Cont.
  if (document.AddForm.wattx039.options[i].value.substr(0,3)==PMARNWHC){
      document.AddForm.wattx039.selectedIndex=i;
  }
 }
// Procedure can be performed by (CAT yh)
 if (document.AddForm.wattx050 != undefined) {
   if (!isWhitespace(PMARPPBY)) {

     for (var i=0; i < document.AddForm.wattx050.length; i++) {
       if (document.AddForm.wattx050.options[i].value.substr(0,3)==PMARPPBY){
           document.AddForm.wattx050.selectedIndex=i;
       }
     }

     document.all.d_wattx050.value=
     document.AddForm.wattx050.options[document.AddForm.wattx050.selectedIndex].text;
     performDIV.innerHTML=performSPAN.innerHTML;
     document.AddForm.wattx050.value=PMARPPBY;
   }
 }
// Height
 if (document.AddForm.ptatr006 != undefined) {
   if (isWhitespace(PMARHGHT)) {
     //document.AddForm.ptatr006.value = 0;
   }
   else {
     if (parseInt(PMARHGHT) != 0) {
       document.AddForm.ptatr006.className="Readonly";
       document.AddForm.ptatr006.readOnly=true;
       document.AddForm.ptatr006.value=PMARHGHT;
     }
     else {
       document.AddForm.ptatr006.value = "";
     }
   }
 }
// Weight
 if (document.AddForm.ptatr007 != undefined) {
   if (isWhitespace(PMARWGHT)) {
     //document.AddForm.ptatr007.value=0;
   }
   else {
     if (parseInt(PMARWGHT) != 0) {
       document.AddForm.ptatr007.className="Readonly";
       document.AddForm.ptatr007.readOnly=true;
       document.AddForm.ptatr007.value=parseInt(PMARWGHT)/100;
     }
     else {
       document.AddForm.ptatr007.value = "";
     }
   }
 }
// Calculated BMI
 if (document.AddForm.ptatr006 != undefined &&
     !isWhitespace(document.AddForm.ptatr006.value) &&
     document.AddForm.ptatr007 != undefined &&
     !isWhitespace(document.AddForm.ptatr007.value) &&
     typeof validateAttribute == 'function')
 {
   document.AddForm.ptatr006.value=
   parseFloat(document.AddForm.ptatr006.value).toFixed(1);
   document.AddForm.ptatr007.value=
   parseFloat(document.AddForm.ptatr007.value).toFixed(1);
   validateAttribute();
 }
//
 if((document.AddForm.wattx051 != undefined)&&(!isWhitespace(PMAVASAS))){
     document.AddForm.wattx051.value=PMAVASAS.replace(/ /g,"");
 }

  var serverURL = "../cgi-bin/patweb15.pbl?reportno=4&remoteno=2" +
                  "&urnumber="+document.AddForm.urnumber.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
     ReturnValues=returnValue.return_value.split("|");
     if(ReturnValues[0]=="1") {
       if(!confirm("Patient has other active waiting list entries.\n" +
                   "Select OK to continue, " +
                   "Cancel to return to the previous page")) {
         PatientLinkTo("patweb15.pbl",1,1,0,0,0);
       }
     }
  }
}
function defaultPreAdmFields() {
 if(!isWhitespace(PMARRESC)) {
   UpdateForm.ptmis007.value=PMARRESC;   // Responsible Clinician
   valDoctorUnit();
 }
//
 for (var i=0; i < document.UpdateForm.ptmis024.length; i++) { // Unit
  if (document.UpdateForm.ptmis024.options[i].value.substr(0,3)==PMARUNIT){
      document.UpdateForm.ptmis024.selectedIndex=i;
  }
 }
 valDoctorUnitTeam();
//
 for (var i=0; i < document.UpdateForm.ptvis124.length; i++) { // Team
  if (document.UpdateForm.ptvis124.options[i].value.substr(0,5)==PMARTEAM){
      document.UpdateForm.ptvis124.selectedIndex=i;
  }
 }
//
 if(!isWhitespace(PMARDIAG)) {
   UpdateForm.ptmis020.value=PMARDIAG; // Diagnosis
 }
//
                               // Preferred/Proposed Admission Date
 if(!isWhitespace(PMARPPAD)) {
   UpdateForm.ptmis001.value= PMARPPAD.substr(6,2) +
                              PMARPPAD.substr(4,2) + 
                              PMARPPAD.substr(0,4);
   checkDate(UpdateForm.ptmis001,UpdateForm.ptmis001.title); 
 }
//
 for (var i=0; i < document.UpdateForm.ptmis027.length; i++) { // Claim Code
  if (document.UpdateForm.ptmis027.options[i].value.substr(0,3)==PMARCLAM){
      document.UpdateForm.ptmis027.selectedIndex=i;
  }
 }
 showFundingSource();
//
 for (var i=0; i < document.UpdateForm.ptmis009.length; i++) { // Source of Ref
  if (document.UpdateForm.ptmis009.options[i].value.substr(0,3)==PMARSRCR){
      document.UpdateForm.ptmis009.selectedIndex=i;
  }
 }
 DisplayTransfer();
 if(document.UpdateForm.trnsfsrc.type=="text") {
   document.UpdateForm.trnsfsrc.value=PMARTSRC;         // Transfer Source
   validateCode(9,UpdateForm.trnsfsrc,UpdateForm.trandesc);
 }
//
//
 if(!isWhitespace(PMARREFC)) {
   UpdateForm.ptvis028.value=PMARREFC;  // Referring Clinician (pmshcpaf)
   UpdateForm.ptvis029.value=PMARPRAC;  // Practice (pmshcgaf)
   UpdateForm.ptvis030.value=PMARPCNT;  // Practice Count
 }
 p=UpdateForm;
 ReadDoc(18,0,p.ptvis028,p.genpname,p.ptvis029,p.genpprac,p.ptvis030,p.genpprov);
//
 for (var i=0; i < document.UpdateForm.ptvis043.length; i++) { // Intended Stay
  if (document.UpdateForm.ptvis043.options[i].value.substr(0,3)==PMARINTS){
      document.UpdateForm.ptvis043.selectedIndex=i;
  }
 }
//
 if(!isWhitespace(PMARPLOS)) {
   UpdateForm.ptmis030.value=trim(PMARPLOS);  // Planned Length of Stay
   checkInteger(UpdateForm.ptmis030,UpdateForm.ptmis030.value);
 }
//
 for (var i=0; i < document.UpdateForm.ptvis125.length; i++) {//Non WA Hosp Cont
  if (document.UpdateForm.ptvis125.options[i].value.substr(0,3)==PMARNWHC){
      document.UpdateForm.ptvis125.selectedIndex=i;
  }
 }
//
  if(UpdateForm.wbsehosp.value!=PMARIHOS){ // Intended Hospital (pathspaf)
    alert("Warning - Intended hospital mismatch.");
  }
//
}
