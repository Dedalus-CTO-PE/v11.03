//jsVersion  : V11.03.00
//
//============================================================
// V10.14.01 29/05/2019 Don Nguyen     TSK 0872140
//                      Added BypassStandaloneCheck
// V10.07.01 17.02.2016 Davin       CAR 0310749
//                      Added ExternalSupplementsURL and ChefMaxHosp variables
// V10.04.01 02.04.2014 B.G.Ackland   
//                      Implement Result Viewing Configuration Parameters 
// V10.03.05 02.07.2013 B.G.Ackland   
//                      Configuration Change for webRoot for php and form directories
// V10.03.04 05.06.2013 Saroeun Soeur CAR 286325
//                      Added medicalViewStyle param to switch medical tabs record on/off
// V10.03.03 16.01.2013 B.G.Ackland CAR-279467 
//                      Added smsMessageEnabled Parameter
// V10.01.02 03/12/2012 B.G.Ackland CAR-
//                      Remove TurnOn Parameters - Now Down Via Menu Configuration
// V10.01.01 06/11/2012 B.G.Ackland CAR-
//                      Dynamic Determination of webRoot             
//                      Multi Site Hospital Name Example Implementation
//============================================================
var webRoot=window.location.pathname.replace(/\/html\/.*/,"").replace(/\/cgi-bin\/.*/,"").replace(/\/php\/.*/,"").replace(/\/forms\/.*/,"");
var logoutTime=60;
var logoutURL="";
var pdfViewerPHP=true;
var theHospitalName="Canterbury Hospital";
var PHPPath = webRoot+"/php/";
var CGIPath = webRoot+"/cgi-bin/";
var IMGPath = webRoot+"/images/";
var IPADPath = webRoot+"/html/ipad/";
var IPADFullPath = IPADPath;
var TouchOn=false;
var smsMessageEnabled=true;
var PatientLinkType=0;
var PatientURN;
var PatientVIS;
var PatientALT;
var PatientAge;
var PatientDOB;
var PatientSex;
var PatientGName;
var PatientSName;
var clinicDocExist = false;
var medicationsExist = false;
var observationExist = false;
var theatreExist = false;
var visitExist = false;
var dischargeExist = false;
var ShowPatientImages= false;    //switch patients photo off set to false
var theReturnField;
var theReturnField2;
var startDate = new Date();
var serverDateTime;
var clientDateTime;
var clientOffsetTime = ' ';
var serverDate;
var serverTime;
var startTime = startDate.getTime();
var globalDateType = "DD MMM YYYY";
var URDescription="U/R";          // Patient Header UR Description
var UseMedChartAllergies="N";            // MedChart Available for Patient Header
var HealthFundDescription="Health Fund " //Aus=Health Fund & NZ Priv=Contract
var medHttp;
var AlertsHTML;
var AddPageURL;
var AddPageTitle;
var PageSectionID;
var ListMoreLink;
var lastrow;
var PatientRecord = new Array();
var PatientID = new Array();
var CurrentRowNo;
var CurrentDiv;
var MinRowNo=0;
var MaxRowNo;
var CachePatientNo=0;
var ListLocation;
var homePageTitle;
var homePageURL;
var homePageJS;
var refreshURL;
var refreshScript;
var refreshLocation;
var usingSMS = true;
var ExternalSupplementsURL="http://IP:Port/external/patientprofile.aspx";
var ChefMaxHosp="BPUAT";
//****************************************************************************/
//  Default to Hide Deleted and Draft Document in Clinical Documents
//****************************************************************************/
var ContactName1='Contact 1';
var ContactName2='Contact 2';
var ContactName3='Contact 3';
var ContactName4='Contact 4';
//****************************************************************************/
//  switch view mode only for modules
//****************************************************************************/
var alertsViewOnly              = false;
var notesViewOnly               = false;
var observationsViewOnly        = false;
var clinicalResultsViewOnly     = false;
var clinicalResultsGridView     = true;
var clinicalDocumentsViewOnly   = false;
var defaultProgressNoteType     = "001";
var visitProgressNote=0;                    // Menu JS to set for Emergency or Referral Notes
var medicationsViewOnly         = false;
var notesViewAll                = false;
var referralsViewOnly           = false;
//****************************************************************************/
//  Default to Hide Deleted and Draft Document in Clinical Documents
//****************************************************************************/
var showAllDocuments = false;
//****************************************************************************/
//  Diagnostic Result View Configuration
//****************************************************************************/
var PACSLinkType= "1";   /* 1=Embedded, 2=Launch Inteleview, 3=URL Link */
var resultOpenDocument=true;
var resultDefaultView = "cliweb10.pbl?reportno=01&template=021";
var resultDSSView     = new Array();
var resultDSSCode     = new Array();
var resultPanelView   = new Array();
var resultPanelCode   = new Array();
resultDSSCode[0] = "HEAM";
resultDSSView[0] = "cliweb10.pbl?reportno=03&template=021";   /* Cumulative View Heamatology  */
resultDSSCode[1] = "HM";
resultDSSView[1] = "cliweb10.pbl?reportno=03&template=021";   /* Cumulative View Heamatology  */
resultDSSCode[2] = "BIO";
resultDSSView[2] = "cliweb10.pbl?reportno=03&template=022";   /* Cumulative View Biochemistry */
resultDSSCode[3] = "CH";
resultDSSView[3] = "cliweb10.pbl?reportno=03&template=022";   /* Cumulative View Biochemistry */
resultPanelCode[0] = "FRH";
resultPanelView[0] = "cliweb10.pbl?reportno=01&template=021";/* Panel Code FRH as Non Cumulative */
resultPanelCode[1] = "FRB";
resultPanelView[1] = "cliweb10.pbl?reportno=01&template=021";/* Panel Code FRB as Non Cumulative */
setUserNameCase='lower';

//var BypassStandaloneCheck = true;

//****************************************************************************/
//  HospitalName - Multi Site Hospital - Return Hospital Name
//  Map webRoot to Hospital Name Display
//****************************************************************************/
function getHospitalName() {
  if (webRoot=='/devwork/v10.14') theHospitalName='Neo Work 10.14';
  if (webRoot=='/devtran/v10.14') theHospitalName='Neo Tran 10.14';
  if (webRoot=='/mntprd') theHospitalName='The Mount Hospital';
  if (webRoot=='/pkwprd') theHospitalName='Parkwynd Private';
  if (webRoot=='/dwnprd') theHospitalName='Darwin Private';
  return theHospitalName;
}
//****************************************************************************/
//  HospitalName - Multi Hospital - Return Hospital Name
//****************************************************************************/
/*function getHospitalName() {
  HospitalNameStr="All Hospitals";
  LoginHosp=top.getCookie("IBAUserHosp")
  if(LoginHosp == "1" ) {
    HospitalNameStr="Demonstration Hospital";
  } else if(LoginHosp == "2") {
    HospitalNameStr="Testing NCF Hospital";
  } else if(LoginHosp == "JEN") {
    HospitalNameStr="Jeni's Hospital";
  }
  return HospitalNameStr;
}
*/

