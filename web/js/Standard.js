//jsVersion  : V11.03.72
//========================================================================
// Global Variables
//========================================================================
var DisplayDRG=false;          // Display DRG version Option on Invoice screen
var webRoot = '/';                 // path to virtual web root 
var xmlHttp=false;                // XmlHttpRequest object
var RSExecuteResult=false;        // RSExecute return object 
var ShowResultIcon="true";          // Show result icon on patient header
var UseNewInterface= true ;        // Use New Interface
var whitespace = " \t\n\r";
var MinPasswordLength=5;
var MaxPasswordLength=0;
var undefined;
var sexDesc = "Sex/Gender";
var startDate = new Date();
var startTime = startDate.getTime();
var globalDateType = "DD MMM YYYY";
var formChangeIndicator=false;
var ShowPatientImages=false;
var ShowDoctorImages=false;
var HospitalNameStr="iba PAS";
var EmergencySiteStr="iba PAS Emergency";
var OutpatientSiteStr="iba PAS Outpatient";
var ReferralDeptStr="iba PAS Referral";
var BrowserControlAvailable=false;// Browser Control for Logout Available
var IBATimeOut=false;
var secTimeOutWarning = 9999999   // Display Time Out Warning after 1200 seconds
var EmergencyFullScreens=false;   // Show full EMR clinical screens for NZ sites
var URDescription="U/R";          // Patient Header UR Description
var ResidentialAdmDescription="Residential Admissions"
                                  //Residential Admission Description
var AddressPostCodeFormat="0"     // 0=Separate Suburb & State Lines
//                                // 1=Combine Suburb & State
//                                // 2=Suburb Only
var TypeOfEmergencyHeader="0"     // 0=Use Standard Emergency Header
//                                // 1=Use SVHM Custom Emergency Header
//                                // 2=Use BHS Custom Emergency Header
//                                // 3=Use HEA Custom Emergency Header
var MBSItemDescription="MBS Item" // Australia = MBS  & NZ Priv = Procedure
var HealthFundDescription="Health Fund " //Aus=Health Fund & NZ Priv=Contract
var PracticeDescription="Practice" //Aus=Practice & Pacific=Village
var CasemixDescription="Case Mix " //Aus=Case Mix & NZ Priv=Contract
var MasterReferralDescription="VINAH" //Vic=VINAH & NZ=Primary
var MentalReferralDescription="Mental Health"
var CollectContactOpTimeSeen=true   // Collect AH Encounter on OP Time Seen
//
var ContactName1="Contact 1"       // Next of kin patma1af.pnkname
var ContactName2="Contact 2"       // Emergency Contact patmx1af.ptmxecnm
var ContactName3="Contact 3"       // Nearest relative name patmx1af.ptmxnrnm
var ContactName4="Contact 4"       // Mother pmspx2af.pmpxmsna
var ContactName5="Contact 5"       // Father pmspx2af.pmpxfsnsa
var ContactName6="Postal Address"  // Postal Address patmx1af.ptmxadd1
//
var DayProcedureName="Day Procedures"
//
var optPrependCommentDate=false;    // prepend dates to comment textarea class="taAddDate"
var optUsingSecurityGroups=false;  // Using security groups in menus
var TableSortPrintPreview=false;   // when selecting print icon in lists

var int_refreshSeconds = 60;   // refresh intervals in seconds
var NewSlotDesc="New";             // OP New Slot Description
var ReviewSlotDesc="Review";       // OP Review Slot Description
var SpecialSlotDesc="Special";     // OP Special Slot Description
var tempDisableDefaultTime=3.0     // tempDisable() default time
var HospitalStateforHDPExtracts=" " // Must be set in Custom.js same as PTCNHDPS
var FaxDischargeSummary = "0";
var ElectronicDischargeSummary = "0";
var DefaultMedicareReferenceto9="0";
var DefaultMedRecHospitalAll="0";// 1=All hospital selected from MedRecIcon
var PMIUserDefinedFields=false;
var appendNoteDescriptionInDischargeSummary="0"; // append note description
var MaximumYearsInThePast=500;
var notUsingAutoAgeing=false;           // Auto ageing on 
var showBMIHeader=true;
var showBMIHeaderNormal=false;
var showBMIHeaderOverweight=false;
var UsingResultIconSprite=false;   // pathologypatients.js will use css if true
var showPCEHRURL=true;
var NewWindowPCEHRURL=false;
var showIFCPrinter=false;
var CodingDischargeStatus=false;
var MinsDiffPrevDisch=0;     // Minutes difference b/n current admission and
                             // last discharge date/time for 'Copy Previous'
                             // button (Update Condition screen):
                             // 
                             //      0 - Never copy (button never visible)
                             // 999999 - Always copy (button always visible)
                             // NNNNNN - Number of minutes to trigger button.
                             //          Show button if mins b/n current
                             //          admission and last discharge is
                             //          less than or equal to this value.

var defaultProgressNoteType ="001";  //Clinical Notes 
var DescriptionPCEHR="PCEHR";
var ScreenLabelMyHRConsent="Consent to My HR Upload";
var EDArrivalTime="Arrival Time";    // ED arrival time default button name
var EDBreach="0";        // 0 to 9 hrs where 0 is not used
var EnableWardSearchFunctionality = "true";
var EMRAlcoholData=false;
var RFCDescription = "Ready for Surgery";
var NRFCDescription = "Not Ready for Surgery";
var RFCColDescription = "RFC";   
var NRFCColDescription = "NRFC"; 
var DoLDescription = "Date on List";
var DaKDescription = "Date Keyed";
var PHPViewSpool=true;
var ReferralMandatoryWL=false;
var PublicFacility=false;
var showGSTonAdjust = true;
var SetSMRFlag=false;                  // Set PMI Scanned Medical Record Flag
var SMRURL="";                         // Scanned Medical Record URL
var ShowCatvi = true;
var ShowCatTl = "NO";
var DefaultServiceDoctorAll = true;
var MyHealthRecDescription = "Consent MyHealthRecord Upload";
var MyHealthRecPatientDesc = "Consent MyHealthRecord Upload Patient Level";
var MyHealthRecVisitDesc = "Consent MyHealthRecord Visit Level";
var DefaultACCClaimFromEMRToTicked = false;
var DefaultAdmDiagToDisch = false;
var SaveElgHospStaffonUpdate = true;
var AllowPrintToPDF = false;
var DisableAddNewSlotReferral=false;
var DescriptionMOSAIQ="MOSAIQ";
var UpdateSessionDefaultTeamtoArrivedTheatreCases = false;
var EditDelMiscItems = false;
var DefaultFamilyWhanauInvolved="No"; //NZ Default Family/Whanau Involved field
var EMRClinicalScreenDrugAlcoholMand=false;
var EMRTriageUDF22Mand=false;
var EMRTriageUDF27Mand=false;
var CaseAbandonedGrey=true;
var ShowCabEdIpBedRequests=false;
var WBRFreeFormatDescDisplay=false;
var WBRFreeFormatDescDescription="Free Format Description";
var TelephoneCountryPrefix=""        //Set in Custom.js
var TelephoneAreaDefault=""          //Set in Custom.js
var DisplaySurgTypeFilter=false;
var MoveMedRec=false;              // checkbox Move Med Rec - UNCHECKED    
var CodefinderUniqueUser=true;     // Send unique user to Codefinder
var ESISDestinationLabel = "Destination";
var InsuranceKeywordSearch = true;
var IDGenderDesc = "Identifying Gender";
var PronounDesc = "Identifying Pronoun";
var WWPrefNameDOB = "No";                //Display Preferred Name on Whiteboard
var WWIDGenderPronoun = "No";            //Display Gender Pronouns on Whiteboard
var ExtendedTheatreSearch=false;         //Extended Theatre Search
var HCPPracticeStatefilter="ALL";        //Default HCP Practice Search by state
var SaveAliasToTicked=false;
//=============================================================================
// Variables for Theatre Hover Icons (moved from TheatreScreensHoverInfo.js)
//
var TimeToICUInfo = "Time To ICU hover information. Add variable to custom.js";
var TimeInRecoveryFrontInfo = "Time In Recovery Front hover information. Add variable to custom.js";
var TimeInRecoveryBackInfo = "Time In Recovery Back hover information. Add variable to custom.js";
var TimeInRecoveryDayInfo = "Time In Recovery-Day Procedure hover information. Add variable to custom.js";
var ReadyToDepartTimeInfo = "Ready To Depart Time hover information. Add variable to custom.js";
var ExitTheatreComplexInfo = "Exit Theatre Complex hover information. Add variable to custom.js";
var TimePatientDiedInfo = "Time Patient Died hover information. Add variable to custom.js";
var TimeCalledForInfo = "Time Called For hover information. Add variable to custom.js";
var TimeOfArrivalInfo = "Time Of Arrival hover information. Add variable to custom.js";
var AnaestheticCannulationInfo = "Anaesthetic Cannulation hover information. Add variable to custom.js";
var AnaestheticTimeOutInfo = "Anaesthetic Time Out hover information. Add variable to custom.js";
var AnaestheticAdministrationInfo = "Anaesthetic Administration hover information. Add variable to custom.js";
var SurgicalTimeOutInfo = "Surgical Time Out hover information. Add variable to custom.js";
var SurgeryStartInfo = "Surgery Start hover information. Add variable to custom.js";
var SurgeryEndInfo = "Surgery End hover information. Add variable to custom.js";
var ReadyForRecoveryInfo = "Ready For Recovery hover information. Add variable to custom.js";
var TimeInRecoveryDayInfo = "Time In Recovery-Day Procedure hover information. Add variable to custom.js";
var ReadyToDepartInfo = "Ready To Depart hover information. Add variable to custom.js";
var ExitTheatreComplexInfo = "Exit Theatre Complex hover information. Add variable to custom.js";
var TimeToICUInfo = "Time To ICU hover information. Add variable to custom.js";
var TimePatientDiedInfo = "Time Patient Died hover information. Add variable to custom.js";

var SiteIntact1 = "Site Intact 1";
var EqItemUsed1 = "Eq/Item Used 1";

var SiteIntact2 = "Site Intact 2";
var EqItemUsed2 = "Eq/Item Used 2";

var UnderstandingTheatreTimesInfo = "Understanding Theatre Times hover information. Add variable to custom.js";
var WheelsInTimeInfo = "Wheels In Time hover information. Add variable to custom.js";
var WheelsOutTimeInfo = "Wheels Out Time hover information. Add variable to custom.js";
var AddSessionMaint = "Add Session Maintainance hover information. Add variable to custom.js"
var UpdateSessionMaint = "Update Session Maintainance hover information. Add variable to custom.js"
var GlobalUpdate = "Global Update hover information. Add variable to custom.js"
var AddAdHoc = "Add Ad Hoc hover information. Add variable to custom.js"
var UpExistOpSess = "Update Existing Open Sessionhover information. Add variable to custom.js"
//
//=============================================================================
// Default Medicare Reference Number
// Set the value to default when no Medicare Reference Number recorded
// -1 = Use original state and DefaultMedicareReferenceto9 defaults.
//=============================================================================
var DefaultMedicareReference="-1";          // Ignore unless not -1
//****************************************************************************/
//  Diagnostic Result View Configuration
//****************************************************************************/
var resultDefaultView = "cliweb10.pbl?reportno=01&template=001";
var resultOpenDocument=true;         // Automate Open of first attached document on load of page.
var resultDSSView     = new Array();
var resultDSSCode     = new Array();
var resultPanelView   = new Array();
var resultPanelCode   = new Array();
resultDSSCode[0]   = "HEAM";
resultDSSView[0]   = "cliweb10.pbl?reportno=03&template=001";   /* Cumulative View Heamatology  */
resultDSSCode[1]   = "HM";
resultDSSView[1]   = "cliweb10.pbl?reportno=03&template=001";   /* Cumulative View Heamatology  */
resultDSSCode[2]   = "BIO";
resultDSSView[2]   = "cliweb10.pbl?reportno=03&template=002";   /* Collection View Biochemistry */
resultDSSCode[3]   = "CH";
resultDSSView[3]   = "cliweb10.pbl?reportno=03&template=002";   /* Collection View Biochemistry */
resultPanelCode[0] = "FRH";
resultPanelView[0] = "cliweb10.pbl?reportno=01&template=001";/* Panel Code FRH as Non Cumulative */
resultPanelCode[1] = "FRB";
resultPanelView[1] = "cliweb10.pbl?reportno=01&template=001";/* Panel Code FRB as Non Cumulative */
//****************************************************************************/
//new UI
//****************************************************************************/
var DragOut;
var HighestzIndex=9999;
var dragObject ;
var offsetX;
var offsetY;
var isDragging=false;
var Saveleft;
var Savetop;
var Savewidth;
var Saveheight;
var isResize=false;
var MedchartIntegration=false;
var AddItemsNoCharge=true;
//****************************************************************************/
//Emergency screen additional button links     
//****************************************************************************/
var EMRExtLink1DisplayButton=false;
var EMRExtLink1ButtonTitle="";
var EMRExtLink1URL="";
var EMRExtLink2DisplayButton=false;
var EMRExtLink2ButtonTitle="";
var EMRExtLink2URL="";
var EMRExtLink3DisplayButton=false;
var EMRExtLink3ButtonTitle="";
var EMRExtLink3URL="";
var EMRExtLink4DisplayButton=false;
var EMRExtLink4ButtonTitle="";
var EMRExtLink4URL="";
var EMRExtLink5DisplayButton=false;
var EMRExtLink5ButtonTitle="";
var EMRExtLink5URL="";
//=============================================================================
// EMR Clinical Screen buttons to display.
// Set the values to .false. if button is not to be displayed.
//=============================================================================
var EMRClinicalScreenButtonUpdate=true;
var EMRClinicalScreenButtonClinical=true;
var EMRClinicalScreenButtonWardBedRequest=true;
var EMRClinicalScreenButtonRegistration=true;
var EMRClinicalScreenButtonInjuryData=true;
var EMRClinicalScreenButtonOutstanding=true;
var EMRClinicalScreenButtonDischarge=true;
var EMRClinicalScreenButtonLabelsForms=true;
var EMRClinicalScreenButtonReturntoMap=true;
var EMRClinicalScreenButtonJumpQueue=true;
var EMRClinicalScreenButtonMHPractitioner=true;
var EMRClinicalScreenButtonBilling=true;
//****************************************************************************/
// Health Department Reporting Parameter Dates
//****************************************************************************/
var DOYR2019="20190701";
var DOYR2020="20200701";
var DOYR2021="20210701";
var DOYR2022="20220701";
var DOYR2023="20230701";
var DOYR2024="20240701";
var DOYR2025="20250701";
//****************************************************************************/
// Global Parameters for Theatre
//****************************************************************************/
// Show warning message if Default Team Completed not set
var ShowDefaultTeamWarning = 1;  // (0 = OFF, 1 = On page load, 2 = On Update)
//****************************************************************************/
// UltraGenda Interface parameters
//****************************************************************************/
var UGVisitInterface = false;
var UGAppointmentListURL = "";
var UGLaunchURL = "";
//=============================================================================
// Referral Management field defaults – BHS Customisations 
//=============================================================================
var RMRefOutServiceTypeDateMandatory=true;
var RMRefOutServiceTypeDateDefault=true;
var RMReferredByDefault=true;
var RMProviderNumberDefault=true;
var RMReferredByPracticeDefault=true;
var RMReferredByMandatory=false;
var RMLocationCodeMandatory=false;
var RMPtBeingDischargedText="The Patient is being discharged";
//=============================================================================
//Clinical Document Information Result Defaults
//=============================================================================
var CLIManualResultProviderLaboratory="P";
var CLIManualResultReferenceMand=true;
//=============================================================================
//=============================================================================
// Medical Record Coding Missing Details hover-over descriptions
//=============================================================================
var MRCodingMissingDetails1="Missing Details 1";
var MRCodingMissingDetails2="Missing Details 2";
var MRCodingMissingDetails3="Missing Details 3";
var MRCodingMissingDetails4="Missing Details 4";
var MRCodingMissingDetails5="Missing Details 5";
var MRCodingMissingDetails6="Missing Details 6";
//=============================================================================
// Medical Record Update Coding ‘Ok’ button description
//=============================================================================
var MRCodingOkButtonName="Ok";
//=============================================================================
// Include Visit Number on the Bulk Record Movement template
//=============================================================================
var MRTVisitNoonBulkRecMovement=true;
var MRTVisitNoonBulkRecRequest=false;
//=============================================================================
// Make the Surgery Telephone, National Registration Number and Primary 
// Specialty fields mandatory on Add/Update HCP Maintenance and also validate
//=============================================================================
var HCPSurgeryPhoneNumMand=false;
var HCPNationalRegNumMand=false;
var HCPPrimarySpecialtyMand=false;

var HCPSurgeryPhoneFaxNumValidation=false;

var HCPProviderNumValidation=false;
var HCPNationalRegNumValidation=false;
//=============================================================================
// WWCC Status Field
// 0 = non Mandatory
// 1 = Mandatory
//=============================================================================
var HCPWWCCStatusMand="0";
//=============================================================================
// Registration Status 
// 0 = do not Display(default)
// 1=Display - non-Mandatory
// 2=Display - Mandatory
//=============================================================================
var HCPRegistrationStatusDisplay="0";
//==============================================================================
// Display the NEWS2 (Category et) field on the EMR Triage templates
//         0=Field will not be displayed
//         1=Field will be displayed and will be non-mandatory
//         2=Field will be displayed and will be mandatory
//==============================================================================
var EMRTriageUDF28Display="0";
//=============================================================================
//Variables for Alert Icon Hover Over in the Patient Banner
//=============================================================================
var AlertIconMHoverDescription = "Med Alerts";
var AlertIconBHoverDescription = "Micro Alerts";
var AlertIconRHoverDescription = "Risk Alert";
var AlertIconCHoverDescription = "Chronic Alerts";
//=============================================================================
// Function prototypes for insertAdjacentElement(), insertAdjacentHTML() and
// insertAdjacentText().
///
if(typeof HTMLElement!="undefined" && !HTMLElement.prototype.insertAdjacentElement){
  HTMLElement.prototype.insertAdjacentElement = function(where,parsedNode) {
  switch (where.toLowerCase()){
    case 'beforebegin':
        this.parentNode.insertBefore(parsedNode,this)
        break;
    case 'afterbegin':
        this.insertBefore(parsedNode,this.firstChild);
        break;
    case 'beforeend':
        this.appendChild(parsedNode);
        break;
    case 'afterend':
        if (this.nextSibling)
          this.parentNode.insertBefore(parsedNode,this.nextSibling);
        else
          this.parentNode.appendChild(parsedNode);
        break;
    }
  }

  HTMLElement.prototype.insertAdjacentHTML = function(where,htmlStr) {
    var r = this.ownerDocument.createRange();
    r.setStartBefore(this);
    var parsedHTML = r.createContextualFragment(htmlStr);
    this.insertAdjacentElement(where,parsedHTML);
  }
  HTMLElement.prototype.insertAdjacentText = function (where,txtStr) {
    var parsedText = document.createTextNode(txtStr);
    this.insertAdjacentElement(where,parsedText);
  }
}

//------------------------------------------------------------
// Logo - Inserting IBA logo into header
//------------------------------------------------------------
function IBALogo() {
  if(UseNewInterface == true) {
    document.write("<img src='../../images/ibaworld.png'>");
  }else {
    document.write("<img src='../../images/ibaworld.jpg'>");
  }
}

function IBALogoSrc()
{
    if(UseNewnterface == true) {
      return 'images/ibaworld.png';
    }else {
      return 'images/ibaworld.jpg';
    }
}

// end new UI

var isIE11 = (!!window.MSInputMethodContext && !!document.documentMode)

var IECompatibilityMode = false;
var sAgentString = window.navigator.userAgent;

if ( (sAgentString.indexOf("MSIE 6.0") >= 1 || 
      sAgentString.indexOf("MSIE 7.0") >= 1 ||
      sAgentString.indexOf("MSIE 8.0") >= 1) &&
     sAgentString.indexOf("compatible") >= 1 )
{
  IECompatibilityMode = true;
}

var IEBrowser = (IECompatibilityMode || isIE11);


if (location.pathname.indexOf("cgi-bin") >= 1) {
  if (window.navigator.userAgent.indexOf("MSIE 6.0")>=1
    || window.navigator.userAgent.indexOf("MSIE 7.0")>=1) {
    document.createStyleSheet("../html/Standard6.css"); }
}

//------------------------------------------------------------
//  RSExecuteStateChange - get data back from Ajax_RSExecute call       
//------------------------------------------------------------
function RSExecuteStateChange()
{
  var data = '';
  var start_index = 0;
  var data_start_index = 0;
  var end_index = 0;
  var start_key = '<RETURN_VALUE';
  var end_key = '</RETURN_VALUE>';
  var metatag = '';

  if (xmlHttp.readyState==4)
  {
    if (xmlHttp.status == 200)
    {
      RSExecuteResult.message      = '';
      RSExecuteResult.return_value = '';
      RSExecuteResult.status       =  0;
      data = xmlHttp.responseText;

      if ((start_index = data.indexOf(start_key)) != -1)
      {
        data_start_index = data.indexOf('>',start_index) + 1;
        end_index = data.indexOf(end_key,data_start_index);
        if (end_index == -1)
          end_index = data.length;
        metatag = data.substring(start_index,data_start_index);
        if (metatag.indexOf('TYPE=SIMPLE') != -1)
        {
          RSExecuteResult.return_value=
            unescape(data.substring(data_start_index,end_index));
        }
        else if (metatag.indexOf('TYPE=ERROR') != -1)
        {
          RSExecuteResult.message     =
            unescape(data.substring(data_start_index,end_index));
          alert('Error Message\n' + RSExecuteResult.message)
          RSExecuteResult.status  = -1;
        }
        else if (metatag.indexOf('TYPE=WARNING') != -1)
        {
          RSExecuteResult.message     =
            unescape(data.substring(data_start_index,end_index));
          if(!confirm('Warning Message\n' + RSExecuteResult.message))
          {
            RSExecuteResult.status       =  -1;
          }
        }
      }
    }
    else
    {
      RSExecuteResult.status       = -1;
    }
  }
}

//------------------------------------------------------------
//  createHttpObject: set up object for Ajax_RSExecute calls       
//------------------------------------------------------------
function createHttpObject()
{
  try
  {
    xmlHttp=new XMLHttpRequest(); // Firefox, Opera 8.0+, Safari
  }
  catch (e)
  {
    // Internet Explorer in newer or older form
    try
    {
      xmlHttp=new ActiveXObject("Msxml2.XMLHTTP");
    }
    catch (e)
    {
      try
      {
        xmlHttp=new ActiveXObject("Microsoft.XMLHTTP");
      }
      catch (e)
      {
        alert("Your browser does not support AJAX!");
        return false;
      }
    }
  }
  return xmlHttp;
}
//------------------------------------------------------------
//  RSExecute: execute host procedure using Ajax
//------------------------------------------------------------
function RSExecute(url)
{
  // arg 1 manfatoru: url (and qry if this is the only argument)
  // arg 2 optional: qry (added to url for GET requests)
  // arg 3 optional: method GET ot POST. defaults to GET
  var method = "GET";
  var qry    = null;

  if (arguments.length > 1) qry    = arguments[1];
  if (arguments.length > 2) method = arguments[2];

  var qry_joiner = '&';

  if (url.indexOf("?") == -1) qry_joiner = '?';

  if ( method == "GET" && qry != null) {
    url += qry_joiner + qry;   // add query to url
    qry_joiner = '&';          // reset the query joiner
  }

  url += qry_joiner + 'httprand=' + Math.random();


  //
  // Synchronous AJAX (XMLHttpRequest)
  //
  if (method != "POST") method = "GET"; // method must be GET ot POST only

  xmlHttp = createHttpObject();

  // Note: this is a Synchronous Ajax call. and Firefox does NOT
  //  trigger the onreadystatechange event on synchronous calls
  //  so the return analysis code is now inline after the send();

  //xmlHttp.onreadystatechange=RSExecuteStateChange;

  RSExecuteResult              = new Object();
  RSExecuteResult.status       = -1;
  RSExecuteResult.return_value = '';
  RSExecuteResult.message      = '';


  if (method == "GET") {
    xmlHttp.open("GET",url,false);
    xmlHttp.send(null);
  } else {
    xmlHttp.open("POST",url,false);
    xmlHttp.setRequestHeader("Content-type","application/x-www-form-urlencoded");
    xmlHttp.send(qry);
  }

  RSExecuteStateChange(url);

  return RSExecuteResult;
}


//
// Asynchronous AJAX (using Fetch API); alternative for RSExecute() ...
//

//------------------------------------------------------------
//  RSExecuteFetch: execute host procedure using Fetch API
//------------------------------------------------------------
function RSExecuteFetch(url)
{
  // arg 1 manfatoru: url (and qry if this is the only argument)
  // arg 2 optional: discreet (ignore fetch errors; don't alert)
  // arg 3 optional: qry (added to url for GET requests)
  // arg 4 optional: method GET ot POST. defaults to GET
  var discreet = false;
  var method = "GET";
  var qry    = null;

  if (arguments.length > 1) discreet = arguments[1];
  if (arguments.length > 2) qry    = arguments[2];
  if (arguments.length > 3) method = arguments[3];

  var qry_joiner = '&';

  if (url.indexOf("?") == -1) qry_joiner = '?';

  if ( method == "GET" && qry != null) {
    url += qry_joiner + qry;   // add query to url
    qry_joiner = '&';          // reset the query joiner
  }

  url += qry_joiner + 'httprand=' + Math.random();

  return PromiseFetch(url,method,discreet);  // return a Promise (fulfilled)
}

// This function returns a single Promise (once all Promises are fulfilled;
// i.e. FetchData() is fulfilled)
function PromiseFetch(URL, Method, DiscreetMode)
{
  return Promise.all([FetchData(URL,Method,DiscreetMode)]);
}

// This function performs the fetch() and returns a Promise when fulfilled
function FetchData(URL, Method, DiscreetMode)
{
  return fetch(URL, {
      method: Method,
      keepalive: true
  }).then(
    function (response) {
      var bDisplayError=true;

      if (DiscreetMode != undefined && DiscreetMode) bDisplayError=false;

      if (bDisplayError) {
        if (response.status !== 200) {
          alert("Server Response Error - HTTP Status Code: " + response.status +
          "\n\nRequest Length: " + URL.length +
          "\n\nRequest URL: \n\n'" + URL + "'");
        }
      }

      return response.text();
    }
  );
}

// Parse the fetch() resolved data (text) and return a RSExecuteResult object
function ParseFetchData(Data) {
  var start_index = 0;
  var data_start_index = 0;
  var end_index = 0;
  var start_key = "<RETURN_VALUE";
  var end_key = "</RETURN_VALUE>";
  var metatag = '';

  Data += '';  // cast to make sure it's a string

  var RSExecuteResult          = new Object();
  RSExecuteResult.message      = '';
  RSExecuteResult.return_value = '';
  RSExecuteResult.status       =  0;
  RSExecuteResult.responseText = Data;

  if ((start_index = Data.indexOf(start_key)) != -1)
  {
    data_start_index = Data.indexOf('>',start_index) + 1;
    end_index = Data.indexOf(end_key,data_start_index);
    if (end_index == -1)
      end_index = Data.length;
    metatag = Data.substring(start_index,data_start_index);
    if (metatag.indexOf('TYPE=SIMPLE') != -1)
    {
      RSExecuteResult.return_value =
        unescape(Data.substring(data_start_index,end_index));
    }
    else if (metatag.indexOf('TYPE=ERROR') != -1)
    {
      RSExecuteResult.message =
        unescape(Data.substring(data_start_index,end_index));
      alert('Error Message\n' + RSExecuteResult.message)
      RSExecuteResult.status = -1;
    }
    else if (metatag.indexOf('TYPE=WARNING') != -1)
    {
      RSExecuteResult.message =
        unescape(Data.substring(data_start_index,end_index));
      if(!confirm('Warning Message\n' + RSExecuteResult.message))
      {
        RSExecuteResult.status =  -1;
      }
    }
  }

  return RSExecuteResult;
}

//------------------------------------------------------------
// Flush Users Login Credentials and Return to Home Page
//------------------------------------------------------------
function FlushCredentials()
{
  if (window.navigator.userAgent.indexOf("MSIE") != -1)
  {
    // IE can do this from the browser level 
    document.execCommand("ClearAuthenticationCache");
  }
  else
  {
    // all others need to be provoked - set up async unatorised call
    // this will fail with 401, prompting new authentication 
    var url= webRoot + "/cgi-bin/websec01.pbl?reportno=1&template=1&for=logoff";
    logoff = createHttpObject();
    logoff.open("GET",url,false,"nobody","");
    logoff.send(null);
    logoff.abort();
  }
  return;
}
//------------------------------------------------------------
// Flush Users Login Credentials and Return to Home Page
//------------------------------------------------------------
function Logout() 
{
  FlushCredentials()
  getTop().location.href= "/";          
  return;
}
//------------------------------------------------------------
// Flush Users Login Credentials and Re-Display Page
//------------------------------------------------------------
function ChangeUser() 
{
  FlushCredentials()
  getTop().location.href=webRoot + "/cgi-bin/websec01.pbl?reportno=1&template=1";
}
//------------------------------------------------------------
// Standard Hot Key Links                
//------------------------------------------------------------
function IEKeyPress() {
    if (window.event.ctrlKey) {
         // a - Select All
         // b -Organise Favourites
         // c - Copy
         // d -Add to Favourites
         // e -search the web 
         // f -Find (on this page)
         if (window.event.keyCode == 7 ) alert('Ctrl and g pressed');
         // h -History display 
         // i -Favourites                                             
         if (window.event.keyCode == 10) alert('Ctrl and j pressed');
         if (window.event.keyCode == 11) alert('Ctrl and k pressed');
         // l - Open
         if (window.event.keyCode == 13) alert('Ctrl and m pressed');
         // n - New Window
         // o - Open
         // p - Print
         if (window.event.keyCode == 17) alert('Ctrl and q pressed'); 
         // r - Reload
         // s - Save
         if (window.event.keyCode == 20) alert('Ctrl and t pressed');
         if (window.event.keyCode == 21) alert('Ctrl and u pressed');
         // v - Paste
         // w - Close
         // x -Cut
         if (window.event.keyCode == 25) alert('Ctrl and y pressed');
         if (window.event.keyCode == 26) alert('Ctrl and z pressed');
         event.returnValue = false
    }
}
//------------------------------------------------------------
// Standard Template Page Load Function
//------------------------------------------------------------
function PageLoad(e) 
{
  var evt = (e != undefined) ? e : window.event;

  var setfocus = true;  // set auto focus on first form element
  if (arguments.length > 1) setfocus = arguments[1];

  //prevents multiple PageLoads from loading
  if(typeof pageLoadExecuted == 'undefined' ) {
     //create the variable if it doesnt exist
     pageLoadExecuted = false;
  }

  if(pageLoadExecuted == true) {
    //if PageLoad has already been executed dont execute again
    return;
  }

  //we want to know that PageLoad was executed
  pageLoadExecuted = true;

  ResetTimeOutWarning();
  document.body.onkeydown=onKeyDown;

  window.tempDisabledControl = '';
  bindCheckBoxToHiddenCGI();
  if(UseNewInterface== true){
    DFrameDragInit(evt);
  }

  InitialiseForms(setfocus);
  InitialiseHiddenElements();

  var patMenu = document.getElementById('PatientMenu');
  if (patMenu) 
  {
    CreatePatientMenu();
    SetPatientMenuWidths();
  }

  
  if (window.init && typeof(window.init) == 'function')
  {
    init();
  }


  if (window.navigator.userAgent.indexOf("MSIE ") >= 1) {  // IE11 Compat. Mode
    var PageBodySection = document.getElementById('PageBodySection');

    if (PageBodySection &&
        isWhitespace(PageBodySection.style.height))
    {
      var height = document.body.clientHeight;
      PageBodySection.style.height = height - PageBodySection.offsetTop + "px";
    }
  }
  else {  // Other browsers (Chrome / Firefox / Edge / IE11 Non-Compat. Mode)

    // We need to set the sizes of our container DIV's for other browsers;
    // i.e. 'PatientHeading', 'PatientMenu' & 'PageBodySection'

    var w = window.innerWidth;
    var h = document.body.clientHeight;

    if (w == 0 || h == 0)
      return;


    //
    // Prevent a horizontal scrollbar appearing on the page
    //
    var PatientHeading = document.getElementById('PatientHeading');
    if (PatientHeading)
    {
      PatientHeading.style.width = w + "px";
    }
    var PatientMenu = document.getElementById('PatientMenu');
    if (PatientMenu)
    {
      PatientMenu.style.width = w - 1 + "px";
    }


    //
    // Prevent a vertical scrollbar appearing on the page
    //
    var PageBodySection = document.getElementById('PageBodySection');
    if (PageBodySection &&
        isWhitespace(PageBodySection.style.height))
    {
      PageBodySection.style.width = w + "px";

      var zoom = window.devicePixelRatio;
      var margin = 5;

      if (zoom > 1) {  // zoomed-in > 100%
        margin = Math.round(window.devicePixelRatio * 10) + 8;
      }

      var rect = PageBodySection.getBoundingClientRect();
      PageBodySection.style.height = h - Math.round(rect.top) - margin + "px";
    }
  }


  //
  // Add table row highlight on mouse hover in Parameter maintenance screens
  //
  if (document.querySelectorAll) {
    var tables = document.querySelectorAll('table');
    if (tables.length >= 2) {
      if (tables[0].querySelector('td') != null) {
        var clsName = tables[0].querySelector('td').className;
        var txt = tables[0].querySelector('td').innerText;
        var re = new RegExp("(Hospital Controlled|IBA Controlled|Parameter)","i");

        if (clsName.match(/HeadingCell/) != null &&
            !isWhitespace(txt) && re.test(txt)) {
          var head = document.getElementsByTagName('head')[0];

          //
          // Insert some custom styles to overwrite the Bootstrap default
          //
          var style = document.createElement("style");
          style.type = "text/css";
          style.innerHTML =
            ".table>tbody>tr>td,.table>tbody>tr>th {" +
            "  border-top:none;font-size:8pt;padding:2px; }" +
            ".table-hover tbody tr:hover {" +
            "  background-color: #ececec; }";

          head.insertBefore(style, head.firstChild);

          //
          // Insert Bootstrap stylesheet link
          //
          var bootstrapLink  = document.createElement("link");
          bootstrapLink.rel  = "stylesheet";
          bootstrapLink.type = "text/css";
          bootstrapLink.href  = "../html/bootstrap.min.css";  // v3.4.1

          head.insertBefore(bootstrapLink, head.firstChild);

          tables[1].className = "table table-hover";
          tables[1].style.width = "95%";
        }
      }
    }
  }
}

if (document.addEventListener) {
  document.addEventListener("DOMContentLoaded", SetHospMenuWidths, false);
}
function SetHospMenuWidths() {
  if (!document.querySelectorAll) return;

  var HospMenuList = document.querySelectorAll("select.MenuSelectList");
  SetMenuWidth(HospMenuList);
}
function SetPatientMenuWidths() {
  if (!document.querySelectorAll) return;

  var PatientMenuList = document.querySelectorAll("#PatientMenu select");
  SetMenuWidth(PatientMenuList);
}
function SetMenuWidth(MenuList) {
  if (MenuList==undefined) return;

  for (var i=0; i < MenuList.length; i++) {
    var menu = MenuList[i];
    var heading = menu.options[0].text;
    var padding = 66;

    var canv=document.createElement("canvas");
    var ctx = canv.getContext("2d");

    textwidth = ctx.measureText(heading).width;
    menu.style.width = textwidth + padding + "px";
  }
}

if (window.addEventListener) {
  // Resize DIV's in other browsers (not IE) when window is resized by the user
  window.addEventListener('resize', PageResize);
}
function PageResize() {
  // We need to set the sizes of our container DIV's for other browsers;
  // i.e. 'PatientHeading', 'PatientMenu' & 'PageBodySection'

  var w = window.innerWidth;
  var h = document.body.clientHeight;

  if (w == 0 || h == 0)
    return;


  //
  // Prevent a horizontal scrollbar appearing on the page
  //
  var PatientHeading = document.getElementById('PatientHeading');
  if (PatientHeading)
  {
    PatientHeading.style.width = w + "px";
  }
  var PatientMenu = document.getElementById('PatientMenu');
  if (PatientMenu)
  {
    PatientMenu.style.width = w - 1 + "px";
  }


  //
  // Prevent a vertical scrollbar appearing on the page
  //
  var PageBodySection = document.getElementById('PageBodySection');
  if (PageBodySection)
  {
    PageBodySection.style.width = w + "px";

    var zoom = window.devicePixelRatio;
    var margin = 16;

    if (zoom == 1) {
      margin = 18;
    }
    else if (zoom > 1) {  // zoomed-in > 100%
      margin = Math.round(window.devicePixelRatio * 10) + 8;
    }

    var rect = PageBodySection.getBoundingClientRect();
    PageBodySection.style.height = h - Math.round(rect.top) - margin + "px";
  }


  // Restore TableSort list height (if applicable)
  if ((document.getElementById('TableLocation') != undefined) &&
      window._setListHeight && window._setVerticalScrollbar) {
    window._setListHeight();
    window._setVerticalScrollbar();

    if (window.SetListHeight1 != undefined) {
      // Resize the TableSort1.js list (if one exists) at the bottom of the page
      window.SetListHeight1();
    }
  }
}


//
// Set up our container DIV's width for printing in other browsers
//
var SavePageBodySectionWidth;
var SavePageBodySectionHeight;

var SavePatientHeadingWidth;
var SavePatientMenuWidth;

window.onbeforeprint = function() {
  //var agentStr = window.navigator.userAgent;
  //if (agentStr.indexOf("MSIE") != -1) return;  // return if IE Compat. Mode

  if (getTop().content.PageBodySection!=undefined) {
    SavePageBodySectionWidth=getTop().content.PageBodySection.style.width;
    SavePageBodySectionHeight=getTop().content.PageBodySection.style.height;
    getTop().content.PageBodySection.style.width="auto";
    getTop().content.PageBodySection.style.height="auto";
  }

  if (getTop().content.PatientHeading!=undefined) {
    SavePatientHeadingWidth=getTop().content.PatientHeading.style.width;
    getTop().content.PatientHeading.style.width="auto";
  }

  if (getTop().content.PatientMenu!=undefined) {
    SavePatientMenuWidth=getTop().content.PatientMenu.style.width;
    getTop().content.PatientMenu.style.width="auto";
  }

  if (getTop().content.TableLocation!=undefined) {
    getTop().content.HeadingDivision.style.overflowY="hidden";
    getTop().content.BodyDivision.style.height="auto";
    //getTop().content.focus();
  }
  else {
    //getTop().content.focus();
  }
}

window.onafterprint = function() {
  //var agentStr = window.navigator.userAgent;
  //if (agentStr.indexOf("MSIE") != -1) return;  // return if IE Compat. Mode

  if (getTop().content.PageBodySection!=undefined) {
    getTop().content.PageBodySection.style.width=SavePageBodySectionWidth;
    getTop().content.PageBodySection.style.height=SavePageBodySectionHeight;
  }

  if (getTop().content.PatientHeading!=undefined) {
    getTop().content.PatientHeading.style.width=SavePatientHeadingWidth;
  }

  if (getTop().content.PatientMenu!=undefined) {
    getTop().content.PatientMenu.style.width=SavePatientMenuWidth;
  }

  if (getTop().content.TableLocation!=undefined &&
      getTop().content.TableRefresh!=undefined &&
      getTop().content.printFormat!=undefined) {
    getTop().content.printFormat=false;
    getTop().content.TableRefresh();
  }
  else {
    getTop().content.focus();
  }
}


//------------------------------------------------------------
// Time Out Authorization Routines
//------------------------------------------------------------
function SetTimeOutWarning() 
{
  if (secTimeOutWarning < 86400)
  { 
    if (IBATimeOut != undefined && IBATimeOut)
      window.clearTimeout(IBATimeOut);
    IBATimeOut = window.setTimeout('TimeOutWarning()',secTimeOutWarning * 1000);
  }
  return;
}
function ResetTimeOutWarning() 
{
  SetTimeOutWarning();
}


//----------------------------------------------------------------------
// Function : Time Out Warning
//----------------------------------------------------------------------
function TimeOutWarning() 
{

  // set up the inevitable
  timerHandle = window.setTimeout('Logout()',15000);

  // build and display a last chance frame 
  PopUpFrame.document.open();
  PopUpFrame.document.write( "" +
  '<link rel="stylesheet" href="../html/standard.css" type="text/css">' + "\n" +
  '<link rel="stylesheet" href="../html/custom.css" type="text/css">' + "\n" +
  '<script type="text/javascript" src="../js/Standard.js"></script>' + "\n" +
  "<style>\n" +
  ".logoff {" +
  "margin: 0;" +
  "background-color:#ff0000;" +
  "color: #ffffff; " +
  "font-style: sans serif;" +
  "font-size: 10pt;" +
  "text-align: center;" +
  "width:100%;" +
  "} \n" +
  "</style>\n</head>\n" +
  '<body class="logoff" ' +
  ' onclick="parent.location.reload();">' + "\n" +
  '<br /><strong>Message</strong>' + "\n" +
  '<br /><img src="../images/InformationStatus.gif" align="absmiddle" />  ' +
  'Automatic Logout Triggered<br />Click Here to Abort');

  PopUpFrame.document.close()
  PopUpScreen.style.height=100;
  PopUpScreen.style.width=250;
  PopUpScreen.style.top=100;
  PopUpScreen.style.left=100;
  PopUpScreen.style.display="";
}
function ResetTimeOut() {
  ResetTimeOutWarning();
}
//============================================================
// Possible Next Release Function for beforeunload
//        if (el.className!="PMenuSelectList" && el.onChange==null) {
//          el.onchange=SetFormChanged; }
//------------------------------------------------------------
// Initialise Forms of the Page
//------------------------------------------------------------
function InitialiseForms() {
  var setfocus = true;  // set auto focus on first form element
  if (arguments.length > 0) setfocus = arguments[0];

  var el;
  var FirstField = true; 
  for (var f = 0 ; f < document.forms.length; f++) 
  {
    addFormHandler(document.forms[f]);
    for (var e = 0; e < document.forms[f].elements.length; e++) 
    {
      addHandler(document.forms[f].elements[e]);

      el = document.forms[f].elements[e];

      if (el.type == "text") {
        el.value=el.value.replace(/\s*$/,"");
      }
      if (el.className.match(/Integer/)) {
        el.value=el.value.replace(/\s/g,"");
      }
      if (el.className.match(/Number/)) {
        el.value=el.value.replace(/\s/g,"");
      }
      if (el.type == "textarea") {
        el.value=el.value.replace(/\s*$/,"");

        if (!IEBrowser) {
          if (!el.readOnly && el.cols && (el.wrap == "hard")) {
            el.style.resize = "none";
            el.style.width = el.cols + 1 + "ch";
            el.style.wordWrap = "break-word";
          }
        }
      }
      if (el.type == "text") {
        if (el.className.match(/Date|PastDate/) ||
            el.title.match(/Date/)) {
          el.maxLength = 11;  // limit max length for Date input fields
        }

        if (el.title.match(/Time/)) {
          el.maxLength = 8;  // limit max length for Time input fields
        }
      }

      if (!setfocus) continue;  // no auto focus

      if (FirstField && el.type != "hidden" && !el.readOnly && !el.disabled &&
          !el.className.match(/NoAutoFocus/) ) {
        FirstField = false;
        el.focus();
      }
    }
  }
}
//------------------------------------------------------------
// Standard Template Page BeforeUnLoad Function (Possible Next Release)
//  window.onbeforeunload=BeforePageUnLoad
//------------------------------------------------------------
//function BeforePageUnload() {
//  if (formChangeIndicator) {
//    return "Some fields have been updated and not saved."; }
//}
//============================================================
// Add Form Handler
//============================================================
function addFormHandler(form) {
   if (window.navigator.userAgent.indexOf("MSIE ") >= 1)
   {
      addFormHandlerMSIE(form) 
   }
   else 
   {
      addFormHandlerOther(form) 
   }
}
function addFormHandlerOther(form) {
   if (window.onclickHandler) {
      if (document.onclick==null) {
        document.onclick=onclickHandler;
      }
      else {
        if (document.addEventListener) {
          document.addEventListener('click', onclickHandler, false);
        }
      }
   }
   if (window.ondblclickHandler) {
      if (document.ondblclick==null) {
        document.ondblclick = ondblclickHandler;
      }
      else {
        if (document.addEventListener) {
          document.addEventListener('dblclick', ondblclickHandler, false);
        }
      }
   }
   if (window.onkeypressHandler) {
      if (document.onkeypress==null) {
        document.onkeypress = onkeypressHandler;
      }
      else {
        if (document.addEventListener) {
          document.addEventListener('keypress', onkeypressHandler, false);
        }
      }
   }
}
function addFormHandlerMSIE(form) {
   if (window.onclickHandler) {
      if (form.onclick==null) {
        form.onclick = onclickHandler;
      }
      else {
        if (form.attachEvent) {
          form.attachEvent('onclick', onclickHandler);
        }
      }
   }
   if (window.ondblclickHandler) {
      if (form.ondblclick==null) {
        form.ondblclick = ondblclickHandler;
      }
      else {
        if (form.attachEvent) {
          form.attachEvent('ondblclick', ondblclickHandler);
        }
      }
   }
   if (window.onkeypressHandler) {
      if (form.onkeypress==null) {
        form.onkeypress = onkeypressHandler;
      }
      else {
        if (form.attachEvent) {
          form.attachEvent('onkeypress', onkeypressHandler);
        }
      }
   }
}
//============================================================
// Add Form Element Handler
//============================================================
function addHandler(formElement) {
   if (window.onblurHandler) { 
      if (formElement.onblur==null) {
        formElement.onblur = onblurHandler; }}
   if (window.onchangeHandler) {
      if (formElement.onchange==null) {
        formElement.onchange = onchangeHandler; }}
   if (window.onselectHandler) {
      if (formElement.onselect==null) {
        formElement.onselect = onselectHandler; }}
   if (window.onfocusHandler) {
      if (formElement.onfocus==null) {
        formElement.onfocus = onfocusHandler; }}
}
//========================================================================
// Standard onblur function call
//========================================================================
function onblurHandler(ev) {
  var el;                           // event element
  if (!ev) var ev = window.event;   // event is not passed ny IE
  if (!ev) return;                  // if still no event, leave
  if (ev.srcElement)
    el = ev.srcElement;
  else if (ev.target)
    el = ev.target;
  else
    return;

  switch (el.type)
  {
    case 'text':
           if (!TextBlurHandler(el)) {
             CancelEvent(ev);
           }
           break;
    case 'textarea':
           if ( optPrependCommentDate && 
               (   el.name == 'adcommnt'
                || el.name == 'blcommnt' 
                || el.name == 'ivcommnt' 
                || el.name == 'urcommnt'
                || el.className.match(/taAddDate/))
               ) 
             onBlurTextareaPrependDate(el);
           if (!TextareaBlurHandler(el)) {
             CancelEvent(ev);
           }
           break;
  }

  if (window.formblurHandler)
    formblurHandler(el);

}
//========================================================================
// Standard onchange function call
//========================================================================
function onchangeHandler(ev) 
{
  var el;                           // event element
  if (!ev) var ev = window.event;   // event is not passed ny IE
  if (ev.srcElement)
    el = ev.srcElement;
  else if (ev.target)
    el = ev.target;
  else
    return;

   if (window.formchangeHandler)  formchangeHandler(el); 
}
//========================================================================
// Standard onselect function call
//========================================================================
function onselectHandler(ev) 
{
  var el;                           // event element
  if (!ev) var ev = window.event;   // event is not passed ny IE
  if (ev.srcElement)
    el = ev.srcElement;
  else if (ev.target)
    el = ev.target;
  else
    return;

   if (window.formselectHandler)  formselectHandler(el); 
}
//========================================================================
// Standard onfocus function call
//========================================================================
function onfocusHandler(ev)
{
  var el;                           // event element
  if (!ev) var ev = window.event;   // event is not passed ny IE
  if (ev.srcElement)
    el = ev.srcElement;
  else if (ev.target)
    el = ev.target;
  else
    return;

  if (  el.type == 'textarea'
     &&  optPrependCommentDate
     &&  (   el.name == 'adcommnt'
          || el.name == 'blcommnt'
          || el.name == 'ivcommnt'
          || el.name == 'urcommnt'
          || el.className.match(/taAddDate/)
         )
     )
  {
    onFocusTextareaPrependDate(el);
  }

  if (window.formfocusHandler)  formfocusHandler(el);
}

//========================================================================
// onfocus function for textarea with class 'taAddDate'
// will add current date at the beginning of new entry.
// needs companion function onBlurTextareaPrependDate
//========================================================================
function onFocusTextareaPrependDate(el)
{
  if (!optPrependCommentDate) return;
  var today = new Date();
  var newline = "";
  el.dstamp = today.getDate() + '/' + eval(today.getMonth() +1 )+ '/' + today.getFullYear() + ": ";

  if (!isWhitespace(el.value)) newline = "\n";  //set linefeed if necessary
  el.textoriginal = el.value;
  el.value = el.dstamp + newline + el.value;
  setCaretPosition(el, el.dstamp.length)
  el.textstart = el.value;
}

//========================================================================
// onblur function for textarea with class 'taAddDate'
// will add current date at the beginning of new entry.
// needs companion function onFocusTextareaPrependDate
//========================================================================
function onBlurTextareaPrependDate(el)
{
  var i,  line1, line2plus;

  if (!optPrependCommentDate) return;

  if (isWhitespace(el.value)) return;

  if (el.value == el.textstart)
  {
    el.value = el.textoriginal;
    return;
  }

  i = el.value.search(/\n/g);  // find first linebreak
  if (i > 0)
  {
    line1     = el.value.substr(0,i);
    line2plus = el.value.substr(++i);
  }
  else
  {
    line1     = el.value;
    line2plus = "";
  }

  if (el.dstamp!=undefined) {

    // if first line is whitespace we have some thinking to do
    if (isWhitespace(line1.substr(el.dstamp.length)))
    {
      if (line2plus == el.textoriginal)
      {
        // no real change - restore original
        el.value = el.textoriginal;
        return;
      }
      else
      {
        // update is in older lines - scrap line 1
        el.value = line2plus;
      }
    }

  }
}

//========================================================================
// Validates the input characters and removes any invalid escape sequences
//========================================================================
function ValidateEscapeChars(el) {
  if (el.value.match(/\"/)) {
    el.value=el.value.replace(/\"/g,"'");
  }

  // Search for any invalid Unicode character escape sequences and remove
  // the preceding '\u' from it.
  // A valid Unicode escape sequence is any '\u' followed by 4 Hexadecimal
  // characters.
  if (el.value.match(/\\u(?![a-fA-F0-9]{4})/)) {
    alert("Invalid '\\u' character sequence detected." +
          "\nAll invalid instances of '\\u' will be removed.");
    // remove the \u from all invalid instances
   el.value = el.value.replace(/\\u(?![a-fA-F0-9]{4})([a-zA-Z0-9]{0,4})/g,"$1");
  }

  // Search for any invalid Hexadecimal character escape sequences and remove
  // the preceding '\x' from it.
  // A valid Hexadecimal escape sequence is any '\x' followed by 2 Hexadecimal
  // characters.
  if (el.value.match(/\\x(?![a-fA-F0-9]{2})/)) {
    alert("Invalid '\\x' character sequence detected." +
          "\nAll invalid instances of '\\x' will be removed.");
    // remove the \x from all invalid instances
   el.value = el.value.replace(/\\x(?![a-fA-F0-9]{2})([a-zA-Z0-9]{0,2})/g,"$1");
  }

  // Refer to the following for more details:
  // https://mathiasbynens.be/notes/javascript-escapes
}

//========================================================================
// Validates input text for XSS (Cross Site Scripting) vulnerabilities
//========================================================================
function ValidateXSSData(el) {
  var invalid = false; // invalid data flag
  var errMsg = "";

  // --------------------------------------------------------------------------
  // Scan for " onclick=", " onchange=", " onblur=", etc...
  // --------------------------------------------------------------------------
  /*
     We want to limit the match to keyword patterns that concern us;
     i.e. can be triggered from a data display context.

     Examples:
       onXXXclick= 
       onmouseXXX=
       onkeyXXX=
       onblur=
       onchange=
       onfocusXXX=
       onselectXXX=
  */
  if (el.value.match(/(\b)(on\S*click)(\s*)=/ig)) {
    errMsg = "Unsafe (XSS) data detected!" +
      "\n\nPlease remove any on-click keywords from the field." +
      "\n\nExamples: " +
      "\n'onclick=', 'ondblclick=', etc...";
    invalid = true;
  }

  if (el.value.match(/(\b)(onmouse\S*)(\s*)=/ig)) {
    errMsg = "Unsafe (XSS) data detected!" +
      "\n\nPlease remove any on-mouse keywords from the field." +
      "\n\nExamples: " +
      "\n'onmouseover=', 'onmouseout=', 'onmouseenter=', etc...";
    invalid = true;
  }

  if (el.value.match(/(\b)(onkey\S*)(\s*)=/ig)) {
    errMsg = "Unsafe (XSS) data detected!" +
      "\n\nPlease remove any on-key keywords from the field." +
      "\n\nExamples: " +
      "\n'onkeyup=', 'onkeydown=', 'onkeypress=', etc...";
    invalid = true;
  }

  if (el.value.match(/(\b)(onblur)(\s*)=/ig)) {
    errMsg = "Unsafe (XSS) data detected!" +
      "\n\nPlease remove any 'onblur=' keywords from the field.";
    invalid = true;
  }

  if (el.value.match(/(\b)(onchange)(\s*)=/ig)) {
    errMsg = "Unsafe (XSS) data detected!" +
      "\n\nPlease remove any 'onchange=' keywords from the field.";
    invalid = true;
  }

  if (el.value.match(/(\b)(onfocus\S*)(\s*)=/ig)) {
    errMsg = "Unsafe (XSS) data detected!" +
      "\n\nPlease remove any 'onfocus=' keywords from the field.";
    invalid = true;
  }

  if (el.value.match(/(\b)(onselect\S*)(\s*)=/ig)) {
    errMsg = "Unsafe (XSS) data detected!" +
      "\n\nPlease remove any 'onselect=' keywords from the field.";
    invalid = true;
  }

  // --------------------------------------------------------------------------
  // Scan for "<script>" for "</script>"
  // --------------------------------------------------------------------------
  if (el.value.match(/(<\s*)(\/*)script/ig)) {
    errMsg = "Unsafe (XSS) data detected!" +
      "\n\nPlease remove any instances of \"<script>\" or \"</script>\" from the field.";
    invalid = true;
  }

  // --------------------------------------------------------------------------
  // Scan for "javascript:"
  // --------------------------------------------------------------------------
  if (el.value.match(/(\b)javascript(\s*):.*/ig)) {
    errMsg = "Unsafe (XSS) data detected!" +
      "\n\nPlease remove any instances of \"javascript:\" from the field.";
    invalid = true;
  }

  // --------------------------------------------------------------------------
  // Scan for "eval("
  // --------------------------------------------------------------------------
  if (el.value.match(/(\b)eval(\s*)\(.*/ig)) {
    errMsg = "Unsafe (XSS) data detected!" +
      "\n\nPlease remove any instances of \"eval(\" from the field.";
    invalid = true;
  }


  // --------------------------------------------------------------------------
  // Scan for any HTML tags that contain the "onload" attribute
  // --------------------------------------------------------------------------
  if (el.value.match(/<\s?\w+\s+onload=\s?.+\s?>/ig)) {
    errMsg = "Unsafe (XSS) data detected!" +
      "\n\nPlease remove any HTML tag(s) that contain the 'onload' attribute." +
      "\n\nExamples: " +
      "\n   <svg onload=show()>, <img onload=alert(\"Image loaded\")>, etc.";
    invalid = true;
  }

  // --------------------------------------------------------------------------
  // Scan for any Base64 encoded data strings (embedded within HTML tags)
  // --------------------------------------------------------------------------
  if (el.value.match(/<\s?.+;base64,\s?.+>/ig)) {
    errMsg = "Unsafe (XSS) data detected!" +
      "\n\nPlease remove any HTML tag(s) with embedded Base64-encoded data strings." +
      "\n\nExample: " +
      "\n   <object data=\"data:text/html;base64,PHN2ZyBvbmxvYWQ9YW==...\">";
    invalid = true;
  }

  // --------------------------------------------------------------------------
  // Scan for any HTML tags that contain the "onpageshow" attribute
  // --------------------------------------------------------------------------
  if (el.value.match(/<\s?\w+\s+onpageshow=\s?.+\s?>/ig)) {
    errMsg = "Unsafe (XSS) data detected!" +
      "\n\nPlease remove any HTML tag(s) that contain the 'onpageshow' attribute." +
      "\n\nExamples: " +
      "\n   <svg onpageshow=show()>, <img onpageshow=alert(\"Image loaded\")>, etc.";
    invalid = true;
  }

  if (invalid) {
    alert(errMsg);
    el.value="";
    el.select();
    return false;
  }


  // --------------------------------------------------------------------------
  // Scan for any other potential XSS tags and perform ampersand encoding
  // --------------------------------------------------------------------------
//  var am = /&/g,
//      lt = /</g,
//      gt = />/g,
//      ap = /'/g,
//      ic = /"/g;

//  el.value = el.value.toString().replace(am, "&amp;").replace(lt, "&lt;").replace(gt, "&gt;").replace(ap, "&#39;").replace(ic, "&#34;");


  return true;
}

//========================================================================
// Validates text value only contains ASCII characters
//========================================================================
function checkASCIIOnly(el) {
  var regEx = new RegExp(/^[\u0000-\u007f]*$/);  // ASCII only; 0-127 decimal
  if (regEx.test(el.value)) {
    return true;
  }
  else {
    var ans = confirm("Non-ASCII (special) characters have been detected in the text which could cause errors with HL7 downstream messaging applications." +
     "\n\nClick 'OK' to remove the characters or 'Cancel' to edit.");

    if (ans) {
      el.value = el.value.replace(/[^\u0000-\u007f]*/gi,'');

      if (document.createEvent) {
        var evt = document.createEvent("HTMLEvents");
        evt.initEvent("change", false, true);
        el.dispatchEvent(evt);  // trigger the change event on the field
      }
    }
    else {
      FocusDelay(el);
    }

    return false;
  }
}

//========================================================================
// Standard onblur functions for textarea input fields
//========================================================================
function TextareaBlurHandler(el) 
{
  ValidateEscapeChars(el);

  if (!ValidateXSSData(el))  // validate XSS data
    return false;

  if (el.className.match(/AsciiOnly/) && !checkASCIIOnly(el)) {
    // contains non-ASCII characters
    return false;
  }

  return true;
}

//========================================================================
// Standard onblur functions for text input fields
//========================================================================
function TextBlurHandler(el) {
  ValidateEscapeChars(el);

  if (!ValidateXSSData(el))  // validate XSS data
    return false;
 
  if (el.title.match(/Date/) || el.className.match(/Date/)) {
    if (!checkDate(el,el.title))
      return false;
  }
  if (el.title.match(/Time/)) {
    if (!checkTime(el,el.title))
      return false;
  }
  if (el.className.match(/Integer/)) {
    checkInteger(el,el.title);
  }
  if (el.className.match(/Number/)) {
    checkNumber(el);
  }
  if (el.className.match(/JustifyLeft/)) {
    justifyLeft(el);
  }
  if (el.className.match(/JustifyRight/)) {
    justifyRight(el);
  }
  if (el.className.match(/ZeroFill/)) {
    zeroFill(el);
  }
  if (el.className.match(/AlphaNum/)) {
    checkAlphaNum(el);
  }
  if (el.className.match(/AlphanumDesc/)) {
    checkAlphanumDesc(el);
  }
  if (el.className.match(/AlphanumSpec1/)) {
    checkAlphanumSpec1(el);
  }
  if (el.className.match(/AlphanumSpec2/)) {
    checkAlphanumSpec2(el);
  }
  if (el.className.match(/AlphanumSpec3/)) {
    checkAlphanumSpec3(el);
  }
  if (el.className.match(/AlphanumSpec4/)) {
    checkAlphanumSpec4(el);
  }
  if (el.className.match(/AlphanumCode/)) {
    checkAlphanumCode(el);
  }
  if (el.className.match(/MobilePhone/)) {
    return checkMobilePhone(el);
  }
  if (el.className.match(/Phonenumber/)) {
    checkPhoneNumber(el);
  }
  if (el.className.match(/MobilePhnospaces/)) {
    if (trim(el.defaultValue) != trim(el.value)) {
      return checkMobilePhoneNoSpaces(el);
    }
  }
  if (el.className.match(/Phonenumnospaces/)) {
    if (trim(el.defaultValue) != trim(el.value)) {
      return checkPhoneNumberNoSpaces(el);
    }
  }
  if (el.className.match(/Email/)) {
    if (!emailCheck(el.value)) {
      el.select();
      return false;
    }
  }
  if (el.className.match(/AsciiOnly/) && !checkASCIIOnly(el)) {
    // contains non-ASCII characters
    return false;
  }

  return true;
}
//==========================================================================
// Check Indicator 'N' for Gender category to set Patient Title as Mandatory 
//==========================================================================
function checkGenderInd(indicator){
  var val = indicator.value.substring(12,13);
  if(val != 'N'){
    document.getElementById('ptmas001').className="Mandatory";
  } else {
    document.getElementById('ptmas001').className="";
  }
}
//========================================================================
// Check Number <input type=text name=xxxxxxx class=Number min=10 max=100>
//========================================================================
function checkNumber(theField) {
 if (isWhitespace(theField.value)) { return true }

 if (theField.value.match(/\+/g)) {
     alert( theField.title + " Must be Numeric")
     FocusDelay(theField);
     return false }

 if (isFinite(theField.value)) {
   if(isFinite(theField.max)) {
      if (parseFloat(theField.value)>parseFloat(theField.max)) {
         alert( theField.title + " Must be Less Than or = " + theField.max)
         FocusDelay(theField);
         return false } }
   if(isFinite(theField.min)) {
      if (parseFloat(theField.value)<parseFloat(theField.min)) {
         alert( theField.title + " Must be Greater Than or = " + theField.min)
         FocusDelay(theField);
         return false } }
   return true }
 else {
   alert( theField.title + " Must be Numeric")
   FocusDelay(theField);
   return false }
}
//========================================================================
// Check AlphaNumb <input type=text name=xxxxxxx class=AlphaNum                
//========================================================================
function checkAlphaNum(theField) {
 var ev = window.event;
 if (checkAlphaNum.arguments.length == 2) {
   ev = checkAlphaNum.arguments[0];            // 1st arg is the event object
   theField = checkAlphaNum.arguments[1];      // 2nd arg is the input field
 }

 checkid=theField.value.search('[^a-zA-Z0-9]')
 if (checkid >= 0) {
   alert( theField.title + " can only be alphanumeric")
   theField.value="";
   FocusDelay(theField);
   CancelEvent(ev);
 }
}
//========================================================================
// Validates Alpha-numeric field excluding spaces
// Check AlphanumDesc <input type=text name=xxxxxxx class=AlphanumDesc
//========================================================================
function checkAlphanumDesc(theField) {
 var ev = window.event;
 if (checkAlphanumDesc.arguments.length == 2) {
   ev = checkAlphanumDesc.arguments[0];        // 1st arg is the event object
   theField = checkAlphanumDesc.arguments[1];  // 2nd arg is the input field
 }

 checkid=theField.value.search('[^a-zA-Z0-9 ]')
 if (checkid >= 0) {
   alert( theField.title + " can only be alphanumeric")
   theField.value="";
   FocusDelay(theField);
   CancelEvent(ev);
 }  
}
//========================================================================
// Check AlphanumSpec1 <input type=text name=xxxxxxx class=AlphanumSpec1
//========================================================================
function checkAlphanumSpec1(theField) {
 checkid=theField.value.search('[^a-zA-Z0-9\-/.\r?\n]')
 if (checkid >= 0) {
   alert( theField.title + " can only be alphanumeric plus / - .")
   theField.value=""
   FocusDelay(theField);
   return false }
}
//========================================================================
// Validates Alpha-numeric field excluding spaces
// Check AlphanumSpec2 <input type=text name=xxxxxxx class=AlphanumSpec2
//========================================================================
function checkAlphanumSpec2(theField) {
 checkid=theField.value.search('[^a-zA-Z0-9\-/. % $\r?\n]')
 if (checkid >= 0) {
   alert( theField.title + " can only be alphanumeric plus / - . % $")
   theField.value=""
   FocusDelay(theField);
   return false }
}
//========================================================================
// Validates Alpha-numeric field - allowing . ~ ' - ( )
// Check AlphanumSpec3 <input type=text name=xxxxxxx class=AlphanumSpec3
// Used generally for patient name fields
//========================================================================
function checkAlphanumSpec3(theField) {
 checkid=theField.value.search("[^a-zA-Z0-9\-/. , ~ ' ( )\r?\n]")
 if (checkid >= 0) {
   alert( theField.title + " can only be alphanumeric plus / - . , ~ ' ( )")
   theField.value=""
   FocusDelay(theField);
   return false }
   return true;
}
//========================================================================
// Validates Alpha-numeric field - allowing . ~ ' - ( ) &
// Check AlphanumSpec4 <input type=text name=xxxxxxx class=AlphanumSpec4
// Used generally for patient address line 1 and line 2
//========================================================================
function checkAlphanumSpec4(theField) {
 checkid=theField.value.search("[^a-zA-Z0-9\-/. , ~ ' ( ) &\r?\n]")
 if (checkid >= 0) {
   alert( theField.title + " can only be alphanumeric plus / - . , ~ ' ( ) &")
   theField.value=""
   FocusDelay(theField);
   return false }
   return true;
}
//========================================================================
// Validates Alpha-numeric field - allowing . -
// Check AlphaNumCode <input type=text name=xxxxxxx class=AlphaNumCode
//========================================================================
function checkAlphanumCode(theField) {
 checkid=theField.value.search('[^a-zA-Z0-9\- . \r?\n]');
 if (checkid >= 0) {
   alert( theField.title + " can only be alphanumeric plus . -");
  setTimeout(function() { FocusDelay(theField); }, 100);
   return false; }
}
//========================================================================
// Validates Alpha-numeric field - allowing . ~ ' - ( )
// Check AlphanumSpec3 <input type=text name=xxxxxxx class=AlphanumSpec3
// Used generally for patient name fields
//========================================================================
function checkAlphanumSpec3NoClear(theField) {
 checkid=
   theField.value.search("[^a-zA-Z0-9\-/. , ~ ' @ ! # ( ) + = < > * & : %\r?\n]"); 
 if (checkid >= 0) {
   alert( theField.title + " can only be alphanumeric plus / - . , ~ ' @ ! # ( )"
                         + " + * = < > ? & : %");
   FocusDelay(theField);
   return false }
}
//========================================================================
// Validate a Mobile Phone Number (basic edit) - Only contain numbers & spaces.
// Can (optionally) start with a + followed by country code (up to 3 digits).
// Number without country code can be up to 13 digits long.
// <input type=text name=xxxxxxx class=MobilePhone
//========================================================================
function checkMobilePhone(theField) {

  if (isWhitespace(theField.value))
    return true;

   //match=theField.value.match(/^\+?[0-9 ]*$/);

   var theNum = trim(theField.value);  // trim any trailing spaces
   
   match=theNum.match(/^(?:\+[0-9]{1,3})?((?:[0-9]\s*){10,13}|(?:[0-9]\s*){9,13})$/);

  if (!match) {
    alert(theField.title + " is an invalid mobile phone number")
    theField.select();
    FocusDelay(theField);
    return false;
  }

  return true;
}
//========================================================================
// Validate a mobile phone number (basic edit) - Can start with a + and
// only contain numbers
// <input type=text name=xxxxxxx class=MobilePhnospaces
//========================================================================
function checkMobilePhoneNoSpaces(theField) {
  if (isWhitespace(theField.value))
    return true;

  var agentStr = window.navigator.userAgent;

  match=theField.value.match(/^\+?[0-9]*$/);
  if (!match) {
    alert(theField.title + " is an invalid mobile phone number; contains non-numerics or spaces.")

    // For Chrome use Focus Delay to prevent looping
    if (agentStr.indexOf("Chrome") != -1) {
      FocusDelay(theField);
    }
    else {
      theField.focus();
      CancelEvent();
    }
    return false;
  }

  if (theField.value.length < 10) {
    alert(theField.title + " is an invalid mobile phone number; length less than 10.")

    // For Chrome use Focus Delay to prevent looping
    if (agentStr.indexOf("Chrome") != -1) {
      FocusDelay(theField);
    }
    else {
      theField.focus();
      CancelEvent();
    }
    return false;
  }

  return true;
}
//========================================================================
// Validate a phone number (basic edit) - Can start with a + and
// only contain numbers and spaces
// <input type=text name=xxxxxxx class=PhoneNumber
//========================================================================
function checkPhoneNumber(theField) {
 match=theField.value.match(/^\+?[0-9 ]*$/);
 if (!match) {
   alert(theField.title + " is an invalid phone number")
   FocusDelay(theField);
   return false }
}
//========================================================================
// Validate a phone number (basic edit) - Can start with a + and
// only contain numbers
// <input type=text name=xxxxxxx class=Phonenumnospaces
//========================================================================
function checkPhoneNumberNoSpaces(theField) {
 if (isWhitespace(theField.value)) {
   return;}

 var agentStr = window.navigator.userAgent; 

 match=theField.value.match(/^\+?[0-9]*$/);
 if (!match) {
   alert(theField.title + " is an invalid phone number; contains non-numerics.")
 
   // For Chrome use Focus Delay to prevent looping
   if (agentStr.indexOf("Chrome") != -1) {
     FocusDelay(theField);
   }
   else {
     theField.focus(); 
     CancelEvent();
   }

   return false;
 }

 if (theField.value.length < 10) {
   alert(theField.title + " is an invalid phone number; length less than 10.")
   
   // For Chrome use Focus Delay to prevent looping
   if (agentStr.indexOf("Chrome") != -1) {
     FocusDelay(theField);
   }
   else {
     theField.focus();
     CancelEvent();
   }

   return false;
 }

 return true;
}
//========================================================================
// Standard click function call
//========================================================================
function onclickHandler(ev) 
{
  var el;                           // event element
  if (!ev) var ev = window.event;   // event is not passed ny IE
  if (ev.srcElement)
    el = ev.srcElement;
  else if (ev.target)
    el = ev.target;
  else
    return;

  if (el.onclick!=null) return;
  if (el.src!=undefined) {
      ImageClickHandler(el) }
  if (window.formclickHandler) {
        formclickHandler(el)  }
}
//========================================================================
// Standard click functions for Images/Icons on a form
//========================================================================
function ImageClickHandler(el) {
  if (el.src.match(/DateTimeStamp/)) {
     SetCurrentDateTime(eval(el.getAttribute("date")),eval(el.getAttribute("time")));return; }
  if (el.src.match(/TimeLookup/)) {
     TimeLookupFrame(eval(el.getAttribute("time")));return }
  if (el.src.match(/DateLookup/)) {
     DateLookupFrame(eval(el.getAttribute("date")));return }
}
//========================================================================
// Standard ondblclick function call
//========================================================================
function ondblclickHandler(ev) 
{
  var el;                           // event element
  if (!ev) var ev = window.event;   // event is not passed ny IE
  if (ev.srcElement)
    el = ev.srcElement;
  else if (ev.target)
    el = ev.target;
  else
    return;

   if (el.ondblclick!=null) return;
   if (window.formondblclickHandler) {
       formondblclickHandler(el)  }
}
//========================================================================
// Standard onkeypress function call
//========================================================================
function onkeypressHandler(ev) 
{
  var el;                           // event element
  if (!ev) var ev = window.event;   // event is not passed ny IE
  if (ev.srcElement)
    el = ev.srcElement;
  else if (ev.target)
    el = ev.target;
  else
    return;

   if (el.onkeypress!=null) return;
   if (window.formonkeypressHandler) {
       formonkeypressHandler(el)  }
}
//========================================================================
// Limit Size of textarea by Rows and Characters; no return value
//  eg <textarea onblur="CheckLimits(this,5,400);" ></textarea>
//========================================================================
function CheckLimits(TextArea,maxRows,maxChars) {
  if (!TextArea || isWhitespace(TextArea.value)) {return;}

  if (!LimitText1(TextArea,maxRows,maxChars)) {  // limit on max rows & chars
    SetCaretPosition(TextArea.id, "-1");  // set cursor at end of text
  }
}
//========================================================================
// Limit Size of textarea by Rows and Characters
// TextArea,5,400
// Return True/False
//========================================================================
function CheckLimits2(TextArea,maxRows,maxChars) {
  if (!TextArea) return true;

  if (isWhitespace(TextArea.value)) return true;

  if (!LimitText1(TextArea,maxRows,maxChars)) {  // limit on max rows & chars
    SetCaretPosition(TextArea.id, "-1");  // set cursor at end of text
    return false;
  }

  return true;
}
//========================================================================
// Limit Size of textarea by Rows and Characters
//  eg <textarea onkeypress="LimitText(this,9,450);" ></textarea>
//========================================================================
function LimitText(TextArea,maxLines,maxChars) {
  var result = true;
  var evt = window.event;

  // This function may also be called on a textarea without any key press
  // so therefore we only check the key code if applicable
  if (evt && evt.keyCode != undefined && evt.keyCode != 0) {  
    var bIsInputChar = false;

    // Check to see if it's a valid input key (character) before validating
    // KeyCode list: http://gcctech.org/csc/javascript/javascript_keycodes.htm
    if ((evt.keyCode > 46 && evt.keyCode < 91) || 
        (evt.keyCode >= 96 && evt.keyCode <= 111) ||
        (evt.keyCode >= 186)) {
      bIsInputChar = true;
    }

    if (evt.keyCode == 13) { bIsInputChar = true; }  // allow Enter key
    if (evt.keyCode == 9)  { bIsInputChar = true; }  // allow Tab key

    if (evt.ctrlKey) { bIsInputChar = false }  // ignore Ctrl key for paste

    // We also ignore some other key codes
    switch (evt.keyCode) {
      case  8:  // backspace
        bIsInputChar = false
        break;
      case 45:  // insert
        bIsInputChar = false
        break;
      case 46:  // delete
        bIsInputChar = false
        break;
    }

    if (!bIsInputChar) { return true; } // not a valid input character; bail
  }

  if (TextArea.value.split(/\r?\n/).length > maxLines) {
    alert(TextArea.title + " - Max " + maxLines + " lines." +
          "\nPlease remove the extra line(s) to continue.");
    result = false; 
  }

  if (result != false) {
    // get char count without the carriage return characters; i.e. "\r\n"
    var charcount = TextArea.value.replace(/\r?\n/g,"").length;

    if (evt && evt.keyCode != undefined) {
      if ((evt.keyCode > 46 && evt.keyCode < 91) ||
        (evt.keyCode >= 96 && evt.keyCode <= 111) ||
        (evt.keyCode >= 186)) {
        charcount++;
      }
    }

    if (charcount > maxChars) {
      alert(TextArea.title + " - Max " + maxChars + " characters." +
          "\nPlease remove the extra character(s) to continue.");
      result = false;
    }
  }

  if (result == false) {
    if (evt && evt.keyCode != undefined) {
      // cancel the event
      if (evt.preventDefault) {
        evt.preventDefault();
        evt.stopPropagation();
      }
      else {
        evt.returnValue = false;
        evt.cancelBubble = true;
      }
    }

    FocusDelay(TextArea);
  }

  return result;
}
function LimitText1(TextArea,maxLines,maxChars) {
  var result = true;
  var evt = window.event;

  // This function may also be called on a textarea without any key press
  // so therefore we only check the key code if applicable
  if (evt && evt.keyCode != undefined && evt.keyCode !=0) {
    var bIsInputChar = false;

    // Check to see if it's a valid input key (character) before validating
    // KeyCode list: http://gcctech.org/csc/javascript/javascript_keycodes.htm
    if ((evt.keyCode > 46 && evt.keyCode < 91) || 
        (evt.keyCode >= 96 && evt.keyCode <= 111) ||
        (evt.keyCode >= 186)) {
      bIsInputChar = true;
    }

    if (evt.keyCode == 13) { bIsInputChar = true; }  // allow Enter key
    if (evt.keyCode == 9)  { bIsInputChar = true; }  // allow Tab key

    if (evt.ctrlKey) { bIsInputChar = false }  // ignore Ctrl key for paste

    // We also ignore some other key codes
    switch (evt.keyCode) {
      case  8:  // backspace
        bIsInputChar = false
        break;
      case 45:  // insert
        bIsInputChar = false
        break;
      case 46:  // delete
        bIsInputChar = false
        break;
    }

    if (!bIsInputChar) { return true; } // not a valid input character; bail
  }

  if (TextArea.value.split(/\r?\n/).length > maxLines) {
    alert(TextArea.title + " - Max " + maxLines + " lines." +
          "\nPlease remove the extra line(s) to continue.");
    result = false;
  }

  if (result != false) {
    // get char count without the carriage return characters; i.e. "\r\n"
    var charcount = TextArea.value.replace(/\r?\n/g,"").length;

    if (evt && evt.keyCode != undefined) {
      if ((evt.keyCode > 46 && evt.keyCode < 91) ||
        (evt.keyCode >= 96 && evt.keyCode <= 111) ||
        (evt.keyCode >= 186)) {
        charcount++;
      }
    }

    if (charcount > maxChars) {
      alert(TextArea.title + " - Max " + maxChars + " characters." +
          "\nPlease remove the extra character(s) to continue.");
      result = false;
    }
  }

  if (result == false) {
    if (evt && evt.keyCode != undefined) {
      // cancel the event
      if (evt.preventDefault) {
        evt.preventDefault();
        evt.stopPropagation();
      }
      else {
        evt.returnValue = false;
        evt.cancelBubble = true;
      }
    }

    FocusDelay(TextArea);
  }

  return result;
}
//========================================================================
// Disable Form Functionality
//========================================================================
function DisableForm(theForm) {
  for (var e = 0; e < theForm.elements.length; e++) {                          
    var el=theForm.elements[e] ;                                               
    switch(el.type) {                                                          
      case "text":                                                             
          el.disabled = true; break;
      case "select-one":                                                       
          el.disabled = true; break;
      case "textarea":                                                         
          el.disabled = true; break;
      case "button":                                                           
          el.disabled = true; break;
      case "checkbox":
          el.disabled = true; break;
      case "hidden":                                                           
          break;
     } 
  } 
}
//========================================================================
// Function  : validateMandatory
//
// Operation : Check a each form input field
//             Mandatory Fields Defined with
//             class=Mandatory
//             title=string describing the field
// Example   :
// <select name=pattitle tabindex=1 class=Mandatory title="Patient Title">
//
//========================================================================
function validateMandatory(theForm) {
  for (i=0; i<theForm.elements.length; i++) {
    el=theForm.elements[i]
    if (el.className.match(/Integer/) && el.type=="text") {
      if (!checkInteger(el,el.title)) {
         return false } }
    if (el.className.match(/Number/) && el.type=="text") {
      if (!checkNumber(el)) {
         return false } }
    if (el.title.match(/Date/) && el.type=="text") {
      if (!checkDate(el,el.title)) {
         return false } }
    if (el.title.match(/Time/) && el.type=="text") {
      if (!checkTime(el,el.title)) {
         return false } }
    if (el.className.match(/Mandatory/)) {
      if (!checkString(el,el.title)) {
         return false } }
    }
  return true;
}
//========================================================================
// Function : JustifyRight
//            Right Justification  of a input field to maxLength
//========================================================================
function justifyRight(theField) {
  var MAX_LEN = '2147483647';  // IE reports this if maxLength not defined
                               // Firefox reports -1 if maxLength not defined
  if (theField.maxLength == undefined || theField.maxLength == MAX_LEN ||
      theField.maxLength == '-1') {
    return;
  }

  theField.value=theField.value.replace(/\s/g,"");

  if (theField.value.length == 0) { return }

  Count = theField.maxLength - theField.value.length;
  Blanks = "";

  for (i=0; i < Count; i++) {
    Blanks += " ";
  }

  theField.value = Blanks + theField.value;
}
//========================================================================
// Function : ZeroFill
//            Zero Fill of a input field to maxLength
//========================================================================
function zeroFill(theField) {
  if (theField.maxLength==undefined) { return }
  if (theField.value.length == 0) { return }
  theField.value=theField.value.replace(/ /g,"0")
}
//========================================================================
// Function : JustifyLeft
//            Left Justification of a input field, Also checks for Integer
//            Class Name!
//========================================================================
function justifyLeft(theField) {
  if (theField.className.match(/Integer/)) {
        checkInteger(theField,theField.title); }
  if (theField.maxLength==undefined) { return }
  theField.value=theField.value.replace(/\s/g,"")
  if (theField.value.length == 0) { return }
  theField.value=theField.value
}
//========================================================================
// Function  : checkDate 
//
// Operation : Validate Date Input
//             Date May be entered in any of the following formats
//                      ddmmyy
//                      ddmmccyy
//                      dd.mm.yy
//                      dd.mm.ccyy
//                      dd/mm/yy
//                      dd/mm/ccyy
//                      dd mm yy
//                      dd mm ccyy
//                      dd mmm yy
//                      dd mmm ccyy
//             The field will be checked and display in a dd mmm ccyy format.
//
// Parameters: theField    - The item on the form ie this
//             labelString - Description of Date
//             hiddenField - Hidden Date Field output format CCYYMMDD
// Example   :
//             <input type="text" name="patbdate" size="12"
//              onchange="checkDate(this,'Date of Birth')"> </p>
//========================================================================
function checkDate() {

  var theField, labelString;
  var hiddenField = null;

  switch (checkDate.arguments.length) 
  {
    case 0: {
       theField    = this;
       labelString = !isWhitespace(this.title) ? this.title : "date value";
       break; }
    case 1: {
       theField    = checkDate.arguments[0];
       labelString = !isWhitespace(theField.title) ? theField.title : "date value";
       break; }
    case 2: {
       theField    = checkDate.arguments[0];
       labelString = !isWhitespace(checkDate.arguments[1]) ? checkDate.arguments[1] : "date value";
       break; }
    case 3: {
       theField    = checkDate.arguments[0];
       labelString = !isWhitespace(checkDate.arguments[1]) ? checkDate.arguments[1] : "date value";
       hiddenField = checkDate.arguments[2];
       break; }
  }

  if (theField.value == "") { return true; }

  if (theField.value == "Start") {return true;}
  if (theField.value == "Finish"){return true;}

  var chr;
  var ErrorFound = false;
  var day  = 0;
  var mon  = 0;
  var year = 0;
  var cent = 0;
  var Today = new Date();
  var todayMM   = Today.getMonth();
  var todayYYYY = Today.getFullYear();
  var monthname = new Array("Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec");
  var datevalue = theField.value;
  var datelength = datevalue.length;
  var position = 0;
  var start = 0;
  var flag = 0;
  if (datevalue.match(/^\s+/)) 
  {
    chr = datevalue.substring(position, position+1);
    while (chr == " ") 
    {
     datevalue = datevalue.substring(position+1,datevalue.length);
     chr = datevalue.substring(position, position+1);
    }
    position   = 0;
    datelength = datevalue.length;
  }

  // default sme of the date from today if it's a bit  short
  if (datelength < 3)
  {
    datevalue = datevalue + ' ' + monthname[todayMM] + ' ' + todayYYYY;
    datelength += 9;
  }
  if ((datelength < 6) ||
      (datelength == 6 && datevalue.match(/ /)) )
  {
    datevalue = datevalue + ' '  + todayYYYY;
    datelength += 5;
  }

  while (position < datelength) 
  {
   chr = datevalue.substring(position, position+1)
   if (chr==" " || chr=="/" || chr==".") {
     if (flag==2) {
       if (position-start>2) {
         year = datevalue.substring(start+2, position)
         cent = datevalue.substring(start, start+2) }
       else {
         year = datevalue.substring(start, position)
         var ccyy = Today.getFullYear();
         cent=ccyy.toString().substr(0,2);
         ThisYear=ccyy.toString().substr(2,2);
         if (parseInt(parseFloat(year),10) >  parseInt(parseFloat(ThisYear),10) + 3) { cent="19" } }
     flag = 3 }
     if (flag==1) {
       test=parseInt(datevalue.substring(start, position),10)
       if (isNaN(test))  {
         monstr= datevalue.substring(start, start+3)
         if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon=1
         if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon=2
         if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon=3
         if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon=4
         if (monstr=="May" || monstr=="MAY" || monstr=="may") mon=5
         if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon=6
         if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon=7
         if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon=8
         if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon=9
         if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon=10
         if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon=11
         if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon=12 }
       else {
         mon = datevalue.substring(start, position)   }
       flag = 2
       start=position+1 }
       if (flag==0) {
         day  = datevalue.substring(start, position)
         flag = 1
         start=position+1 } }
   position++
 } //End While
 if (flag==2) {
   if (position-start>2) {
     cent = datevalue.substring(start, start+2)    // Century
     year = datevalue.substring(start+2, position) }
   else {
     year = datevalue.substring(start, position)
     var ccyy = Today.getFullYear();
     cent=ccyy.toString().substr(0,2)
     ThisYear=ccyy.toString().substr(2,2);
     if (parseInt(parseFloat(year),10) >  parseInt(parseFloat(ThisYear),10) + 5 ) { cent="19" }}} 
 if (flag==0) {
   if (datelength==6) {
     day = datevalue.substring(0,2)
     mon = datevalue.substring(2,4)
     year= datevalue.substring(4,6)
     var ccyy = Today.getFullYear();
     cent=ccyy.toString().substr(0,2);
     ThisYear=ccyy.toString().substr(2,2);
     if (parseInt(parseFloat(year),10) >  parseInt(parseFloat(ThisYear),10) + 5 ) { 
   if (theField.className.match(/FutureDate/)) {
     cent="20"
   } else {
     cent="19"
   }
} }
   else {
     if (datelength==8) {
       day = datevalue.substring(0,2)
       mon = datevalue.substring(2,4)
       cent= datevalue.substring(4,6)
       year= datevalue.substring(6,8)   } }
}  

 day=parseInt(day,10)
 if (isNaN(day))  ErrorFound=true
 mon=parseInt(mon,10)
 if (isNaN(mon))  ErrorFound=true
 year=parseInt(year,10)
 if (isNaN(year)) ErrorFound=true
 if (isNaN(cent)) ErrorFound=true
 if (!ErrorFound) {
   if (mon<1 || mon>12) ErrorFound = true
   if (day<1 || day>31) ErrorFound = true
   if (year<0 || year>99) ErrorFound = true
   if (mon==4 || mon==6 || mon==9 || mon==11) {
     if (day==31) ErrorFound=true }
   if (mon==2) {
     if (day>29) ErrorFound=true
     if (day==29 && year % 4 !=0 ) ErrorFound=true
     if (day==29 && year==0 && cent % 4 !=0 ) ErrorFound=true } }
 if (ErrorFound) {
   alert('Invalid '+labelString)
   theField.select()
   return false }
 else {
   if (year<10) year="0" + year
   if (day<10)  day ="0" + day
   if (globalDateType == "DD MMM YYYY") {
     dateValue=day + " " + monthname[mon-1] + " " + cent + year
     theField.value=dateValue  }
   else {
     if (globalDateType == "DD/MM/YYYY") {
       month = mon; if (mon<10)  month ="0" + mon;
       dateValue=day + "/" + month + "/" + cent + year;
       theField.value=dateValue  } }
   if (hiddenField != null) {
       month = mon; if (mon<10)  month ="0" + mon;
       dateValue=cent + year + month + day;
       hiddenField.value=dateValue  }
   var InputDay=day
   var InputMth=mon
   var InputYrs=cent + year
   if (InputMth < 10) InputMth="0" + InputMth
   InputDate="";
   InputDate=InputDate.concat(InputYrs,InputMth,InputDay)
   if (theField.className.match(/FutureDate/)) {
     if (!CheckFuture(InputDate)) {
      alert(labelString + " must be in the Future or Current Date.")
      theField.select()
      theField.value="";
      return false }
    }
// -------- change case to stop "FutureDate" from clashing with "NotFuturEdate"
   if (theField.className.match(/NotFuturEdate/))   {
     if (!CheckPast(InputDate)) {
      alert(labelString + " cannot be in the Future.")
      theField.select()
      theField.value="";
      FocusDelay(theField);
      return false }
    }
   if (theField.className.match(/PastDate/))   {
     if (!CheckPast(InputDate)) {
      alert(labelString + " must be in the Past or Current Date.")
      theField.select()
      theField.value="";
      FocusDelay(theField);
      return false }
    }
   if (theField.className.match(/BackDate/))   {
     if (!CheckPast(InputDate)) {
      alert(labelString + " must be in the Past.")
      theField.select()
      var Sp=" ";
      var Today = new Date()
      var ThisDay=Today.getDate();
      var ThisMth=parseInt(Today.getMonth(),10) +1;
      var ThisYrs=Today.getFullYear();
      if (ThisDay < 10) ThisDay="0" + ThisDay
      if (ThisMth < 10) ThisMth="0" + ThisMth
      ThisMth = ThisMth.toString();
      var MonthName=GetMonthName(ThisMth); 
      ThisDate="";
      ThisDate=ThisDate.concat(ThisDay,Sp,MonthName,Sp,ThisYrs)
      theField.value=ThisDate;
      return false }
    }
   if (theField.className.match(/PastMonth/))   {
     if (!CheckPastMonth(InputDate)) {
      alert(labelString + " must be less than current Month.")
      theField.select()
      theField.value="";
      return false }
    }
//HPS Emer Defect 70
   if (theField.className.match(/CurrentDate/)) {
     if (CheckCurrent(InputDate)) {
      alert(labelString + " must be the current date.")
      theField.select()
      theField.value="";
      return false }
    }
   if (theField.className.match(/PriorDate/))   {
     if (!CheckPrior(InputDate)) {
      alert(labelString + " must be in the Past.")
      theField.select()
      theField.value="";
      FocusDelay(theField);
      return false }
    }
// HPS added for Bug no. 72
    ccyy = Today.getFullYear();
    var currentAge=  ccyy-(cent+year);
    if (currentAge > MaximumYearsInThePast ) {
      alert("Error: Invalid date for " + labelString);
      theField.value="";
      return false
    }
    if (currentAge >130 ) {
    alert("Warning: Invalid date for " + labelString);
  }
    return true }
}



function CheckFuture(InputDate) {
 var Today = new Date()
 var ThisDay=Today.getDate();
 var ThisMth=parseInt(Today.getMonth(),10) +1;
 var ThisYrs=Today.getFullYear();
 if (ThisDay < 10) ThisDay="0" + ThisDay
 if (ThisMth < 10) ThisMth="0" + ThisMth
 ThisDate="";
 ThisDate=ThisDate.concat(ThisYrs,ThisMth,ThisDay)
 if (InputDate < ThisDate) { return false }
                      else { return true }
}
function CheckPast(InputDate) {
 var Today = new Date()
 var ThisDay=Today.getDate();
 var ThisMth=parseInt(Today.getMonth(),10) +1;
 var ThisYrs=Today.getFullYear();
 if (ThisDay < 10) ThisDay="0" + ThisDay
 if (ThisMth < 10) ThisMth="0" + ThisMth
 ThisDate="";
 ThisDate=ThisDate.concat(ThisYrs,ThisMth,ThisDay)

 if (InputDate > ThisDate) { return false }
                      else { return true }
}
function CheckPrior(InputDate) {
 var Today = new Date()
 var ThisDay=Today.getDate();
 var ThisMth=parseInt(Today.getMonth(),10) +1;
 var ThisYrs=Today.getFullYear();
 if (ThisDay < 10) ThisDay="0" + ThisDay
 if (ThisMth < 10) ThisMth="0" + ThisMth
 ThisDate="";
 ThisDate=ThisDate.concat(ThisYrs,ThisMth,ThisDay)

 if (InputDate >= ThisDate) { return false }
                      else { return true }
}
function CheckPastMonth(InputDate) {
 var Today = new Date()
 var ThisDay=Today.getDate();
 var ThisMth=parseInt(Today.getMonth(),10) + 1;
 var ThisYrs=Today.getFullYear();
 if (ThisMth < 10) ThisMth="0" + ThisMth
 ThisDate="";
 ThisDate=ThisDate.concat(ThisYrs,ThisMth,"00")
 if (InputDate > ThisDate) { return false }
                      else { return true }
}
function CheckCurrent(InputDate) {
 var Today = new Date()
 var ThisDay=Today.getDate();
 var ThisMth=parseInt(Today.getMonth(),10) +1;
 var ThisYrs=Today.getFullYear();
 if (ThisDay < 10) ThisDay="0" + ThisDay
 if (ThisMth < 10) ThisMth="0" + ThisMth
 ThisDate="";
 ThisDate=ThisDate.concat(ThisYrs,ThisMth,ThisDay)
 if (InputDate == ThisDate) { return false }                                   
                      else { return true }
}
//========================================================================
// Function  : checkDateSV     * CAR 40916 Taken and modified from standard.js
//
// Operation : Validate Date Input
//             Date May be entered in any of the following formats
//                      ddmmyy           mmyy           mmm yy
//                      ddmmccyy         mmccyy         mmm.ccyy
//                      dd.mm.yy         mm.yy          mmm/ccyy
//                      dd.mm.ccyy       mm/yy          mmm ccyy
//                      dd/mm/yy         mm yy
//                      dd/mm/ccyy       mm.ccyy
//                      dd mm yy         mm/ccyy
//                      dd mm ccyy       mm ccyy
//                      dd mmm yy        mmm.yy
//                      dd mmm ccyy      mmm/yy
//             The field will be checked and display in a dd mmm ccyy format.
//
// Parameters: theField    - The item on the form ie this
//             labelString - Description of Date
//             hiddenField - Hidden Date Field output format CCYYMMDD
// Example   :
//             <input type="text" name="patbdate" size="12"
//              onchange="checkDateSV(this,'Date of Birth')"> </p>
//========================================================================
function checkDateSV() {
switch (checkDateSV.arguments.length) {
  case 0: {
     theField=this;
     labelString=!isWhitespace(this.title) ? this.title : "date value";
     hiddenField=null
     break; }
  case 1: {
     theField=checkDateSV.arguments[0]
     labelString=!isWhitespace(theField.title) ? theField.title : "date value";
     hiddenField=null
     break; }
  case 2: {
     theField=checkDateSV.arguments[0]
     labelString=!isWhitespace(checkDateSV.arguments[1]) ? theField.title : "date value";
     hiddenField=null
     break; }
  case 3: {
     theField=checkDateSV.arguments[0]
     labelString=!isWhitespace(checkDateSV.arguments[1]) ? theField.title : "date value";
     hiddenField=checkDateSV.arguments[2]
     break; }
   }
if(theField.value=="") { return true; }
 var ErrorFound;
 ErrorFound=false ;
 var day=0
 var mon=0
 var year=0
 var cent=0
 var Today = new Date()
 var monthname = new Array(12)
 monthname[0]="Jan"
 monthname[1]="Feb"
 monthname[2]="Mar"
 monthname[3]="Apr"
 monthname[4]="May"
 monthname[5]="Jun"
 monthname[6]="Jul"
 monthname[7]="Aug"
 monthname[8]="Sep"
 monthname[9]="Oct"
 monthname[10]="Nov"
 monthname[11]="Dec"
 datevalue=theField.value
 datelength=datevalue.length
//alert(datelength);
 position=0
 start=0
 flag=0
 if (datevalue.match(/^\s+/)) {
   chr = datevalue.substring(position, position+1)
   while (chr == " ") {
     datevalue = datevalue.substring(position+1,datevalue.length)
     chr = datevalue.substring(position, position+1)
   }
   position=0
   datelength=datevalue.length
 }
                                             // I CAR 40916
 if (datelength==5 || datelength==7) {       // checks for mm(/. )yy
   if (datevalue.substring(1,2)!='/' &&
       datevalue.substring(1,2)!=' ' &&
       datevalue.substring(1,2)!='.') {
     if (datevalue.substring(4,5)!='/' &&
         datevalue.substring(4,5)!=' ' &&
         datevalue.substring(4,5)!='.') {
       if (datevalue.substring(5,6)!='/' &&
           datevalue.substring(5,6)!=' ' &&
           datevalue.substring(5,6)!='.') {
         flag = 1;                               // and mm(/. )ccyy
         if (datevalue.substring(0,2) == 1 ||    // depending on what month was
             datevalue.substring(0,2) == 3 ||    // entered, the javascript will
             datevalue.substring(0,2) == 5 ||    // default the last day of that
             datevalue.substring(0,2) == 7 ||    // month, into the day
             datevalue.substring(0,2) == 8 ||
             datevalue.substring(0,2) == 10 ||
             datevalue.substring(0,2) == 12 ) {
          day = 31
         } else {
           if (datevalue.substring(0,2) == 4 ||
               datevalue.substring(0,2) == 6 ||
               datevalue.substring(0,2) == 9 ||
               datevalue.substring(0,2) == 11 ) {
             day = 30
           } else {
             if (datelength==7 &&
                 datevalue.substring(5,7) % 4 == 0 ) {  // calculates for leap y
               day = 29
             } else {
               if (datelength==5 &&
                   datevalue.substring(3,5) % 4 == 0 ) {// calculates for leap y
                 day = 29
               } else {
                 day = 28
               }
             }
           }
         }
       }
     }
   }
 }

 if (datelength==6 || datelength==8) {     // checks for mmm(/. )yy
   if (datevalue.substring(3,4)=='/' ||    // and mmm(/. )ccyy
       datevalue.substring(3,4)==' ' ||
       datevalue.substring(3,4)=='.') {
     if (datevalue.substring(1,2)!='/' &&
         datevalue.substring(1,2)!=' ' &&
         datevalue.substring(1,2)!='.') {
       flag = 1;
       test=parseInt(datevalue.substring(start, position),10)
       if (isNaN(test))  {
         monstr= datevalue.substring(start, start+3)
         if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon=1
         if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon=2
         if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon=3
         if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon=4
         if (monstr=="May" || monstr=="MAY" || monstr=="may") mon=5
         if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon=6
         if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon=7
         if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon=8
         if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon=9
         if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon=10
         if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon=11
         if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon=12 } }
//     else {
//     mon = datevalue.substring(start, position)   }
     if (mon == 1 ||      // depending on what month was
         mon == 3 ||      // entered, the javascript will
         mon == 5 ||      // default the last day of that
         mon == 7 ||      // month, into the day
         mon == 8 ||
         mon == 10 ||
         mon == 12 ) {
       day = 31
     } else {
       if (mon == 4 ||
           mon == 6 ||
           mon == 9 ||
           mon == 11 ) {
         day = 30
       } else {
         if (datelength==8 &&
             datevalue.substring(6,8) % 4 == 0 ) {     // calculates for leap y
           day = 29
         } else {
           if (datelength==6 &&
               datevalue.substring(4,6) % 4 == 0 ) {   // calculates for leap y
             day = 29
           } else {
             day = 28
           }
         }
       }
     }
   }
 }
                                                      // end I CAR 40916
 while (position < datelength) {
   chr = datevalue.substring(position, position+1)
   if (chr==" " || chr=="/" || chr==".") {
     if (flag==2) {
       if (position-start>2) {
         year = datevalue.substring(start+2, position)
         cent = datevalue.substring(start, start+2) }
       else {
         year = datevalue.substring(start, position)
         var ccyy = Today.getFullYear();
         cent=ccyy.toString().substr(0,2);
         ThisYear=ccyy.toString().substr(2,2);
         if (parseInt(year,10) >  parseInt(ThisYear,10) + 99 ) { cent="19" } }
     flag = 3 }
     if (flag==1) {
       test=parseInt(datevalue.substring(start, position),10)
       if (isNaN(test))  {
         monstr= datevalue.substring(start, start+3)
         if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon=1
         if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon=2
         if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon=3
         if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon=4
         if (monstr=="May" || monstr=="MAY" || monstr=="may") mon=5
         if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon=6
         if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon=7
         if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon=8
         if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon=9
         if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon=10
         if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon=11
         if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon=12 }
       else {
         mon = datevalue.substring(start, position)   }
       flag = 2
       start=position+1 }
       if (flag==0) {
         day  = datevalue.substring(start, position)
         flag = 1
         start=position+1 } }
   position++
 } //End While
 if (flag==2) {
   if (position-start>2) {
     cent = datevalue.substring(start, start+2)    // Century
     year = datevalue.substring(start+2, position) }
   else {
     year = datevalue.substring(start, position)
     var ccyy = Today.getFullYear();
     cent=ccyy.toString().substr(0,2)
     ThisYear=ccyy.toString().substr(2,2);
     if (parseInt(year,10) >  parseInt(ThisYear,10) + 99) { cent="19" } } }
 if (flag==0) {
   if (datelength==6) {
     if (datevalue.substring(2,4)>18) {                // I CAR 40916
       mon = datevalue.substring(0,2)
       cent = datevalue.substring(2,4)
       year = datevalue.substring(4,6)
       if (mon == 1 ||      // depending on what month was
           mon == 3 ||      // entered, the javascript will
           mon == 5 ||      // default the last day of that
           mon == 7 ||      // month, into the day
           mon == 8 ||
           mon == 10 ||
           mon == 12 ) {
         day = 31
       } else {
         if (mon == 4 ||
             mon == 6 ||
             mon == 9 ||
             mon == 11 ) {
           day = 30
         } else {
           if (year % 4 == 0) {
             day = 29
           } else {
             day = 28
           }
         }
       }                                                // end I CAR 40916
     } else {
       day = datevalue.substring(0,2)
       mon = datevalue.substring(2,4)
       year= datevalue.substring(4,6)
       var ccyy = Today.getFullYear();
       cent=ccyy.toString().substr(0,2);
       ThisYear=ccyy.toString().substr(2,2);
       if (parseInt(year,10) >  parseInt(ThisYear,10) + 99) { cent="19" } }
     }
   else {
     if (datelength==8) {
       day = datevalue.substring(0,2)
       mon = datevalue.substring(2,4)
       cent= datevalue.substring(4,6)
       year= datevalue.substring(6,8)   }
     else {
       if (datelength==4) {                           // I CAR 40916
         mon = datevalue.substring(0,2)
         year= datevalue.substring(2,4)
         var ccyy = Today.getFullYear();
         cent=ccyy.toString().substr(0,2);
         ThisYear=ccyy.toString().substr(2,2);
         if (parseInt(year,10) >  parseInt(ThisYear,10) + 99) { cent="19" }
         if (mon == 1 ||      // depending on what month was
             mon == 3 ||      // entered, the javascript will
             mon == 5 ||      // default the last day of that
             mon == 7 ||      // month, into the day
             mon == 8 ||
             mon == 10 ||
             mon == 12 ) {
           day = 31
         } else {
           if (mon == 4 ||
               mon == 6 ||
               mon == 9 ||
               mon == 11 ) {
             day = 30
           } else {
             if (year % 4 == 0) {
               day = 29
             } else {
               day = 28
             }
           }
         }
       }                                              // end I CAR 40916
     }
   }
 }

 day=parseInt(day,10)
 if (isNaN(day))  ErrorFound=true
 mon=parseInt(mon,10)
 if (isNaN(mon))  ErrorFound=true
 year=parseInt(year,10)
 if (isNaN(year)) ErrorFound=true
 if (isNaN(cent)) ErrorFound=true
 if (!ErrorFound) {
   if (mon<1 || mon>12) ErrorFound = true
   if (day<1 || day>31) ErrorFound = true
   if (year<0 || year>99) ErrorFound = true
   if (mon==4 || mon==6 || mon==9 || mon==11) {
     if (day==31) ErrorFound=true }
   if (mon==2) {
     if (day>29) ErrorFound=true
     if (day==29 && year % 4 !=0 ) ErrorFound=true
     if (day==29 && year==0 && cent % 4 !=0 ) ErrorFound=true } }
 if (ErrorFound) {
   alert('Invalid '+labelString)
   theField.select()
   return false }
 else {
   if (year<10) year="0" + year
   if (day<10)  day ="0" + day
   if (globalDateType == "DD MMM YYYY") {
     dateValue=day + " " + monthname[mon-1] + " " + cent + year
     theField.value=dateValue  }
   else {
     if (globalDateType == "DD/MM/YYYY") {
       month = mon; if (mon<10)  month ="0" + mon;
       dateValue=day + "/" + month + "/" + cent + year;
       theField.value=dateValue  } }
   if (hiddenField != null) {
       month = mon; if (mon<10)  month ="0" + mon;
       dateValue=cent + year + month + day;
       hiddenField.value=dateValue  }
   var InputDay=day
   var InputMth=mon
   var InputYrs=cent + year
   if (InputMth < 10) InputMth="0" + InputMth
   InputDate="";
   InputDate=InputDate.concat(InputYrs,InputMth,InputDay)
   if (theField.className.match(/FutureDate/)) {
     if (!CheckFuture(InputDate)) {
      alert(labelString + " must be in the Future.")
      theField.select()
      theField.value="";
      return false }
    }
   if (theField.className.match(/PastDate/))   {
     if (!CheckPast(InputDate)) {
      alert(labelString + " must be in the Past.")
      theField.select()
      theField.value="";
      return false }
    }
   if (theField.className.match(/BackDate/))   {
     if (!CheckPast(InputDate)) {
      alert(labelString + " must be in the Past.")
      theField.select()
      var Sp=" ";
      var Today = new Date()
      var ThisDay=Today.getDate();
      var ThisMth=parseInt(Today.getMonth(),10) +1;
      var ThisYrs=Today.getFullYear();
      if (ThisDay < 10) ThisDay="0" + ThisDay
      if (ThisMth < 10) ThisMth="0" + ThisMth
      ThisMth = ThisMth.toString();
      var MonthName=GetMonthName(ThisMth);
      ThisDate="";
      ThisDate=ThisDate.concat(ThisDay,Sp,MonthName,Sp,ThisYrs)
      theField.value=ThisDate;
      return false }
    }
   if (theField.className.match(/PastMonth/))   {
     if (!CheckPastMonth(InputDate)) {
      alert(labelString + " must be less than current Month.")
      theField.select()
      theField.value="";
      return false }
    }
//HPS Emer Defect 70
   if (theField.className.match(/CurrentDate/)) {
     if (CheckCurrent(InputDate)) {
      alert(labelString + " must be the current date.")
      theField.select()
      theField.value="";
      return false }
    }

// HPS added for Bug no. 72
    ccyy = Today.getFullYear();
    var currentAge=  ccyy-(cent+year);
    if (currentAge >130 ) {
    alert("Warning: Invalid date for " + labelString);
  }
    return true }
}

//========================================================================
// Function  : checkTime
//
// Operation : Validate Time Input
//             Time May be entered in any of the following formats
//                      hhmm
//                      hh:mm
//                      hh.mm
//                      hhmmss
//                      hh:mm:ss
//                      hh.mm.ss
//             The field will be checked and display in a hh:mm:ss format.
//
// Parameters: theField    - The item on the form ie this
//             labelString - Description of Time
// Example   :
//             <input type="text" name="patbtime" size="12"
//              onchange="checkTime(this,'Time of Birth')"> </p>
//========================================================================
function checkTime() {
  theField=this
  labelString=this.title
  if (checkTime.arguments.length > 0 ) {
     theField=checkTime.arguments[0]
     labelString=checkTime.arguments[1]
  }

  if (isWhitespace(theField.value)) {
     theField.value="";}
  if (theField.value=="") { return true; }

  var ErrorFound=false
  var hour=0
  var min=0
  var sec=0
  timevalue=theField.value
  timelength=timevalue.length
  if (timevalue.match(/\./)) {
     var x=timevalue.split(".")
     hour=x[0]
     min=x[1]
     if (x[2]==undefined) { sec="0" }
                     else { sec=x[2] }}
  else {
    if (timevalue.match(/\:/)) {
       var x=timevalue.split(":")
       hour=x[0]
       min=x[1]
       if (x[2]==undefined) { sec="0" }
                       else { sec=x[2] }}
    else {
      if (timelength<3) {
        hour=timevalue; min="0"; sec="0" }
      else {
        switch (timelength) {
        case 3: {
          hour=timevalue.substr(0,1); min=timevalue.substr(1,2); sec="0";
          break; }
        case 4: {
          hour=timevalue.substr(0,2); min=timevalue.substr(2,2); sec="0";
          break; }
        case 6: {
          hour=timevalue.substr(0,2);
          min=timevalue.substr(2,2);
          sec=timevalue.substr(4,2);
          break; }
        default: {
          ErrorFound=true ;
          break; }
        }
      }
    }
  }
  if (isNaN(hour)){ ErrorFound=true }
  if (isNaN(min)) { ErrorFound=true }
  if (isNaN(sec)) { ErrorFound=true }
  if (isWhitespace(hour)){ ErrorFound=true }
  if (isWhitespace(min)) { ErrorFound=true }
  if (isWhitespace(sec)) { ErrorFound=true }
  hour=parseInt(hour,10)
  min=parseInt(min,10)
  sec=parseInt(sec,10)
  if (!ErrorFound) {
    if (min<0 || min>59) { ErrorFound = true }
      if (hour<0 || hour>23) { ErrorFound = true }
        if (sec<0 || sec>59) { ErrorFound = true }
  }

  if (ErrorFound) {
    alert('Invalid '+labelString)
    theField.select()
    return false; }
  else {
    if (sec<10) { sec="0" + sec }
    if (hour<10){ hour ="0" + hour }
    if (min<10) { min ="0" + min }
    theField.value=hour + ":" + min + ":" + sec
    return true; }
}
//========================================================================
// Function  : checkTimeMin - Five character time validation (No seconds)
//
// Operation : Validate Time Input
//             Time May be entered in any of the following formats
//                      hhmm
//                      hh:mm
//                      hh.mm
//                      hhmmss
//                      hh:mm:ss
//                      hh.mm.ss
//             The field will be checked and display in a hh:mm format.
//
// Parameters: theField    - The item on the form ie this
//             labelString - Description of Time
// Example   :
//             <input type="text" name="patbtime" size="12"
//              onchange="checkTimeMin(this,'Time of Birth')"> </p>
//========================================================================
function checkTimeMin() {
theField=this
labelString=this.title
if (checkTimeMin.arguments.length > 0 ) {
  theField=checkTimeMin.arguments[0]
  labelString=checkTimeMin.arguments[1]
}
 if(theField.value=="") { return true; }
 var ErrorFound=false
 var hour=0
 var min=0
 var sec=0
 timevalue=theField.value
 timelength=timevalue.length
 if (timevalue.match(/\./)) {
    var x=timevalue.split(".")
    hour=x[0]
    min=x[1]
    if (x[2]==undefined) { sec="0" }
                    else { sec=x[2] }}
 else {
   if (timevalue.match(/\:/)) {
      var x=timevalue.split(":")
      hour=x[0]
      min=x[1]
      if (x[2]==undefined) { sec="0" }
                      else { sec=x[2] }}
   else {
     if (timelength<3) {
       hour=timevalue; min="0"; sec="0" }
     else {
       switch (timelength) {
       case 3: {
         hour=timevalue.substr(0,1); min=timevalue.substr(1,2); sec="0";
         break; }
       case 4: {
         hour=timevalue.substr(0,2); min=timevalue.substr(2,2); sec="0";
         break; }
       case 6: {
         hour=timevalue.substr(0,2);
         min=timevalue.substr(2,2);
         sec=timevalue.substr(4,2);
         break; }
       default: {
         ErrorFound=true ;
         break; }
       }
     }
   }
 }
 if (isNaN(hour)){ ErrorFound=true }
 if (isNaN(min)) { ErrorFound=true }
 if (isNaN(sec)) { ErrorFound=true }
 if (isWhitespace(hour)){ ErrorFound=true }
 if (isWhitespace(min)) { ErrorFound=true }
 if (isWhitespace(sec)) { ErrorFound=true }
 hour=parseInt(hour,10)
 min=parseInt(min,10)
 sec=parseInt(sec,10)
 if (!ErrorFound) {
   if (min<0 || min>59) { ErrorFound = true }
     if (hour<0 || hour>23) { ErrorFound = true }
       if (sec<0 || sec>59) { ErrorFound = true }
 }
 if (!ErrorFound) {
   if (hour==0 && min==0 && sec==0) { ErrorFound = true }
 }

 if (ErrorFound) {
   alert('Invalid '+labelString)
   theField.select()
   return false; }
 else {
   if (sec<10) { sec="0" + sec }
   if (hour<10){ hour ="0" + hour }
   if (min<10) { min ="0" + min }
   theField.value=hour + ":" + min 
   return true; }
}
//======================================================================
// checkString (TEXTFIELD theField, STRING s, [, BOOLEAN emptyOK==false])
//
// Check that string theField.value is not all whitespace.
//
// For explanation of optional argument emptyOK,
// see comments of function isInteger.
//
//======================================================================
function checkString (theField, s, emptyOK) {
if (checkString.arguments.length == 2) emptyOK = false;
 if ((emptyOK == true) && (isEmpty(theField.value))) return true;
 if (isWhitespace(theField.value))
   return warnEmpty (theField, s);
 else return true;
}

function checkInteger(theField, s) {
 var Vflag = "0";
 var clearVal = 0;
 var arrClassNames = theField.className.split(" ");

 for (var i=0; i < arrClassNames.length; i++) {
   if (arrClassNames[i] == "DefaultBlank")
     clearVal = 1;
 }

 if ( (theField.value.match(/\./g)) || (theField.value.match(/\+/g)) ) {
     alert( s + " Must be an Integer")
     FocusDelay(theField);
     return false 
 }

 if (isFinite(theField.value)) {
   if (isWhitespace(theField.value)) {
     if (clearVal) {
       theField.value="";
     }
     else {
       theField.value="0";
     }
   }
   if(isFinite(theField.max)) {
      if (parseInt(theField.value,10)>parseInt(theField.max,10)) {
         alert( theField.title + " Must be Less Than or = " + theField.max)
         Vflag = "1"  
         FocusDelay(theField);
      }
   }
   if(isFinite(theField.min)) {
      if (parseInt(theField.value,10)<parseInt(theField.min,10)) {
         alert( theField.title + " Must be Greater Than or = " + theField.min)
         Vflag = "1"
         FocusDelay(theField);
      }
   }
 } else {
   alert( s + " Must be Numeric")
   Vflag = "1" }
//
 if (Vflag == "1") {
   FocusDelay(theField);
   theField.select()
   return false; }
return true;
}

function checkInteXXX (theField, s) {
 if ( (theField.value.match(/\./g)) ||
      (theField.value.match(/\+/g)) ) {
     alert( s + " Must be an Integer")
     FocusDelay(theField);
     return false }
 if (isFinite(theField.value)) {
   if(theField.value == ""){
     theField.value="0";}
   if(isFinite(theField.max)) {
      if (parseInt(theField.value,10)>parseInt(theField.max,10)) {
         alert( theField.title + " Must be Less Than or = " + theField.max)
         FocusDelay(theField);
         return false } }
   if(isFinite(theField.min)) {
      if (parseInt(theField.value,10)<parseInt(theField.min,10)) {
         alert( theField.title + " Must be Greater Than or = " + theField.min)
         FocusDelay(theField);
         return false } }
     return true }
 else {
   alert( s + " Must be Numeric")
   theField.select()
   FocusDelay(theField);
   return false }
return true;
}
//------------------------------------------------------------
// Check whether string s is empty.
//------------------------------------------------------------
function isEmpty(s) {
 return ((s == null) || (s.length == 0))
}
//------------------------------------------------------------
// Returns true if string s is empty or
// whitespace characters only.
// Searches through string's characters one by one
// until we find a non-whitespace character.
// When we do, return false; if we don't, return true.
//------------------------------------------------------------
function isWhitespace (s) {
 var i;
 if (isEmpty(s)) return true;
 for (i = 0; i < s.length; i++) {
   var c = s.charAt(i);
   if (whitespace.indexOf(c) == -1) return false;
 }
    return true; // All characters are whitespace.
}
//------------------------------------------------------------
// Function ChkForSpace
// Removes all spaces in between characters (including
// ones at the start and end of the characters)
// and packs it without spaces in between
//------------------------------------------------------------
function ChkForSpace (dc) {
var s=dc.value.replace(/\s+/g,'');   //Trims all spaces
dc.value=s;                          //Packs the value without spaces
}
//------------------------------------------------------------
// Notify user that required field theField is empty.
// String s describes expected contents of theField.value.
// Put focus in theField and return false.
//------------------------------------------------------------
function warnEmpty (theField, s) {
 alert( s + " is a required field.\nPlease enter it now." )
 FocusDelay(theField);
 return false
}
//------------------------------------------------------------
//Common clear input fields for Doctor/any field 
//------------------------------------------------------------
function clrDoc(code,name) {
  code.value="";
  name.value="";
}
//------------------------------------------------------------
//Clear readonly input fields
//------------------------------------------------------------
function clrFields() {
  ReturnFunction="";
  for(var i = 0; i < arguments.length; i++) {
    if (typeof(arguments[i]) == 'function') {
      arguments[i]() }
    else {
      arguments[i].value="" }
  }
}
//------------------------------------------------------------
// Function : Convert String to Upper Case
//------------------------------------------------------------
function UpCaseSearch(s){
  s.value=s.value.toUpperCase()
// s.value=s.value.replace(/\'/g," ")
// s.value=s.value.replace(/\-/g," ")
}
//------------------------------------------------------------
// Function : Convert String to Upper Case
//------------------------------------------------------------
function UpCase(s){
  s.value=s.value.toUpperCase()
}
//========================================================================
// SelectNumber - Generate Select List Options for Numeric Values
//========================================================================
function SelectNumbers(ListItem,Min,Max,Increment,SelectedValue) {
  i=Min
  do {
    ListItem.options[ListItem.options.length]=new Option(i,i);
    i=i+Increment }
  while (i<Max);
  if (SelectedValue!="") {
    for (var i =0 ; i < ListItem.length; i++) {
      if (ListItem.options[i].value==parseFloat(SelectedValue)) {
        ListItem.selectedIndex=i } } }
}
//------------------------------------------------------------
// Function : Insert Doctors Image Based on Doctor Code
//------------------------------------------------------------
function InsertDoctorImage(DoctorCode) {
  if (ShowDoctorImages) {
    ImageFile = DoctorImageURL(DoctorCode);
    ImageString="<a href=\"javascript:DFrameImgLink('"
    ImageString+= ImageFile + "',330,250)\">"
    ImageString+='<img name="docimage" height="50" src="' + ImageFile +
          '" style="display: none" ' +
          ' alt="Doctor Code ' + DoctorCode + '"' +
          ' title="Doctor Code ' + DoctorCode + '"' +
          ' onload="showImage(this);"></a>'
    document.write(ImageString) }
}
//------------------------------------------------------------
// Function : show the image if it loads ok
//------------------------------------------------------------
function showImage(image) 
{
  image.style.display="";       // image exists so display
}
//------------------------------------------------------------
// Function : Standard Time Selection Frame
//------------------------------------------------------------
function SetCurrentDateTime(dateField,timeField,RetFunc) 
{
  if (dateField!=null) 
  {
    if (dateField.readOnly == true) 
    {
      alert( dateField.title + " is a readonly field." );
      dateField.blur();
      FocusDelay(dateField);
      return;
    }
    if (dateField.disabled == true) 
    {
      alert( dateField.title + " is a disabled field." );
      return;
    }
    dateField.value="";
  }

  if (timeField!=null) 
  {
    if (timeField.readOnly == true) 
    {
      alert( timeField.title + " is a readonly field." );
      timeField.blur();
      FocusDelay(timeField);
      return;
    }
    if (timeField.disabled == true) 
    {
      alert( timeField.title + " is a disabled field." );
      return;
    }
    timeField.value="";
  }

  // get the time off the server 
  var serverURL = "../cgi-bin/patweb80.pbl?reportno=1";
  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0) 
  {
    ReturnValues=returnValue.return_value.split("|");

    if (dateField != null) 
    {
      dateField.value=ReturnValues[0];
      dateField.blur();
      FocusDelay(dateField);
    }

    if (timeField != null) 
    {
      timeField.value=ReturnValues[1];
      timeField.blur();
      FocusDelay(timeField);
    }

    // execute the return function; if specified
    if (RetFunc != undefined) {
      window.setTimeout(function () { RetFunc(); }, 100);
    }
  }
}
//------------------------------------------------------------
// Function : Standard Time Selection Frame (without focus)
//------------------------------------------------------------
function SetCurrentDateTimeNoFocus(dateField,timeField,RetFunc) {
  if (dateField!=null) {
    if(dateField.readOnly==true) {
      alert( dateField.title + " is a readonly field." )
      dateField.blur()
      return;
    }
    dateField.value="";
  }

  if (timeField!=null) {
    if(timeField.readOnly==true) {
      alert( timeField.title + " is a readonly field." )
      timeField.blur()
      return;
    }
    timeField.value="";
  }

  var serverURL = "../cgi-bin/patweb80.pbl?reportno=1";
  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0) {
    ReturnValues=returnValue.return_value.split("|");

    if (dateField!=null) {
      dateField.value=ReturnValues[0];
      dateField.blur();
    }

    if (timeField!=null) {
      timeField.value=ReturnValues[1];
      timeField.blur();
    }

    // execute the return function; if specified
    if (RetFunc != undefined) {
      window.setTimeout(function () { RetFunc(); }, 100);
    }
  }
}
//------------------------------------------------------------
// Function : Standard Time Selection Frame Time format HH:MM
//------------------------------------------------------------
function SetCurrentDateTimeMin(dateField,timeField,RetFunc) {
  if (dateField!=null) dateField.value="";
  if (timeField!=null) timeField.value="";

  var serverURL = "../cgi-bin/patweb80.pbl?reportno=1";
  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0) {
    ReturnValues=returnValue.return_value.split("|");

    if (dateField!=null) {
      dateField.value=ReturnValues[0];
      dateField.blur();
      dateField.focus();
    }

    if (timeField!=null) {
      timeField.value=ReturnValues[1].substr(0,5);
      timeField.blur();
      timeField.focus();
    }

    // execute the return function; if specified
    if (RetFunc != undefined) {
      window.setTimeout(function () { RetFunc(); }, 100);
    }
  }
}

//------------------------------------------------------------
// Function : Standard Time Selection Frame
//------------------------------------------------------------
function TimeLookupFrame(Time, TimeReturnFunction)
{
  if (Time!=null) 
  {
    if (Time.readOnly==true) 
    {
       alert( Time.title + " is a readonly field." );
       Time.blur();
       FocusDelay(Time);
       return;
    }
    if (Time.disabled==true) 
    {
       alert( Time.title + " is a disabled field." );
       return;
    }
  }

  var PopUpScreen     = document.getElementById('PopUpScreen');
  var PatientMenu     = document.getElementById('PatientMenu');
  var PageBodySection = document.getElementById('PageBodySection');
  var top = 0;
  var left = 0;

  DFrameStart();
  window.TimeValue = Time;
  window.TimeRetFunc = (TimeReturnFunction != undefined) ? TimeReturnFunction : null;

  var PopUpFrameDoc   = ibaGetIframeDoc('PopUpFrame');
  PopUpFrameDoc.location.href="../lookups/TimeLookupFrame.html";

  if (PatientMenu)
  {
    if (PageBodySection)
      top  = PageBodySection.scrollTop;
    else
      top  = PatientMenu.offsetTop + PatientMenu.offsetHeight;
    left = (document.body.clientWidth-310)/2; 
  }
  else
  {
    top  = document.body.scrollTop;
    left = document.body.clientWidth - 320;
  }
  PopUpScreen.style.top     = top  + 'px';
  PopUpScreen.style.left    = left + 'px';
  PopUpScreen.style.width   = '305px' ;
  PopUpScreen.style.height  = '210px' ;
  PopUpScreen.style.display = "";
}

//------------------------------------------------------------
// Function : Standard Time Selection Frame time format HH:MM
//------------------------------------------------------------
function TimeLookupFrameMin(Time, TimeReturnFunction) 
{
  var PopUpScreen     = document.getElementById('PopUpScreen');
  var PatientMenu     = document.getElementById('PatientMenu');
  var PageBodySection = document.getElementById('PageBodySection');
  var top  = 0;
  var left = 0;

  DFrameStart();
  window.TimeValue = Time;
  window.TimeRetFunc = (TimeReturnFunction != undefined) ? TimeReturnFunction : null;

  var PopUpFrameDoc   = ibaGetIframeDoc('PopUpFrame');
  PopUpFrameDoc.location.href = "../lookups/TimeLookupFrameMin.html";

  if (PatientMenu)
  {
    if (PageBodySection)
      top  = PageBodySection.scrollTop;
    else
      top  = PatientMenu.offsetTop + PatientMenu.offsetHeight;
    left = (document.body.clientWidth-310)/2; 
  }
  else
  {
    top  = document.body.scrollTop;
    left = document.body.clientWidth - 320;
  }

  PopUpScreen.style.top     = top  + 'px';
  PopUpScreen.style.left    = left + 'px';
  PopUpScreen.style.width   = '305px';
  PopUpScreen.style.height  = '210px';
  PopUpScreen.style.display = "";
}


//---------------------------------------------------------------
// Function : Calculates time duration b/w a start & end time.
//---------------------------------------------------------------
var LookupTime;
function CalcDura(startime,endtime,duration) {
   if (startime.value=="") { return; }
   if (endtime.value=="") { return; }
   stime = new Date();
   etime = new Date();
   stime.setHours(startime.value.substr(0,2));
   stime.setMinutes(startime.value.substr(3,2));
   stime.setSeconds(startime.value.substr(6,2));
   etime.setHours(endtime.value.substr(0,2));
   etime.setMinutes(endtime.value.substr(3,2));
   etime.setSeconds(endtime.value.substr(6,2));
   difference = etime.getTime() - stime.getTime();
   difference = Math.floor(difference / (1000 * 60));
   duration.value = difference;
}
//=============================================================================
//       Function for Checking Two Date/Time
//       Parameter1: Start Date (dd Mon yyyy)
//       Parameter2: Start Time (hh:mm:ss)
//       Parameter3: End Date   (dd Mon yyyy)
//       Parameter4: End Time   (hh:mm:ss)
//
//       Return Value: If (Start Date/Time) < (End Date/Time):true
//                     else : false
//=============================================================================
function ChkDateTime(strtDate,strtTime,endDate,endTime) {
  var strtDay  = strtDate.value.substring(0,2);
  var strtMon  = strtDate.value.substring(3,6);
  var strtYear = strtDate.value.substring(7,11);

  var endDay   = endDate.value.substring(0,2);
  var endMon   = endDate.value.substring(3,6);
  var endYear  = endDate.value.substring(7,11);

  var strtHH;
  var strtMM;
  var strtSS;
  var endHH;
  var endMM;
  var endSS;
  if(strtTime != null) {
    strtHH   = strtTime.value.substring(0,2);
    strtMM   = strtTime.value.substring(3,5);
    strtSS   = strtTime.value.substring(6,8);
  }
  else {
    strtHH = 0;
    strtMM = 0;
    strtSS = 0;
  }
  if(endTime != null) {
    endHH    = endTime.value.substring(0,2);
    endMM    = endTime.value.substring(3,5);
    endSS    = endTime.value.substring(6,8);
  }
  else {
    endHH = 0;
    endMM = 0;
    endSS = 0;
  }

  strtMon = GetMonthNumber(strtMon);
  endMon  = GetMonthNumber(endMon);

  var strtDateTime = strtYear + strtMon + strtDay + strtHH + strtMM + strtSS
  var endDateTime  = endYear + endMon + endDay + endHH + endMM + endSS
  if (endDateTime < strtDateTime) return false;
  return true;
}

//=============================================================================
//       Function to Change Month name to respective Number
//=============================================================================
function GetMonthNumber(monName) {
  switch (monName) {
    case "Jan" : return "01";
    case "Feb" : return "02";
    case "Mar" : return "03";
    case "Apr" : return "04";
    case "May" : return "05";
    case "Jun" : return "06";
    case "Jul" : return "07";
    case "Aug" : return "08";
    case "Sep" : return "09";
    case "Oct" : return "10";
    case "Nov" : return "11";
    case "Dec" : return "12";
  }
}
//=============================================================================
//       Function to Change MonthNumbername to respective Name   
//=============================================================================
function GetMonthName(monNum) {
  switch (monNum) {
    case "01" : return "Jan";
    case "02" : return "Feb";
    case "03" : return "Mar";
    case "04" : return "Apr";
    case "05" : return "May";
    case "06" : return "Jun";
    case "07" : return "Jul";
    case "08" : return "Aug";
    case "09" : return "Sep";
    case "10" : return "Oct";
    case "11" : return "Nov";
    case "12" : return "Dec";
  }
}

//------------------------------------------------------------
// Function : Standard Calendar Selection Frame
//------------------------------------------------------------
function DateLookupFrame(DateField, DateReturnFunction) 
{
  if (DateField!=null) 
  {
    if(DateField.readOnly==true) 
    {
      alert( DateField.title + " is a readonly field." );
      FocusDelay(DateField);
      return;
    }
    if(DateField.disabled==true) 
    {
      alert( DateField.title + " is a disabled field." );
      return;
    }
  }

  var PopUpScreen     = document.getElementById('PopUpScreen');
  var PatientMenu     = document.getElementById('PatientMenu');
  var PageBodySection = document.getElementById('PageBodySection');
  var top  = 0;
  var left = 0;

  var PopUpFrameDoc   = DFrameStart();
  PopUpFrameDoc.location.href="../lookups/DateLookupFrame.html";
  window.dateField = DateField;
  window.dateRetFunc = (DateReturnFunction != undefined) ? DateReturnFunction : null;

  if (PatientMenu)
  {
    if (PageBodySection)
      top  = PageBodySection.offsetTop;
    else
      top  = PatientMenu.offsetTop + PatientMenu.offsetHeight;
    left = (document.body.clientWidth-215)/2; 
  }
  else
  {
    top  = document.body.scrollTop;
    left = document.body.clientWidth - 220;
  }
  
  PopUpScreen.style.top     = top  + 'px';
  PopUpScreen.style.left    = left + 'px';
  PopUpScreen.style.width   = '205px';
  PopUpScreen.style.height  = '245px';
  PopUpScreen.style.display = '';
}
//------------------------------------------------------------
// Function : Standard Calendar Selection Frame
//------------------------------------------------------------
function DateLookupFrameSepFrame(DateField, DateReturnFunction)
{
  if (DateField!=null)
  {
    if(DateField.readOnly==true)
    {
      alert( DateField.title + " is a readonly field." );
      FocusDelay(DateField);
      return;
    }
    if(DateField.disabled==true)
    {
      alert( DateField.title + " is a disabled field." );
      return;
    }
  }

  var PopUpScreen     = parent.SearchResults.document.getElementById('PopUpScreen')
  var PatientMenu     = document.getElementById('PatientMenu');
  var PageBodySection = document.getElementById('PageBodySection');
  var top  = 0;
  var left = 0;

  var PopUpFrameDoc   = DFrameStartSepFrame();
  PopUpFrameDoc.location.href="../lookups/DateLookupFrame.html";
  window.dateField = DateField;
  window.dateRetFunc = (DateReturnFunction != undefined) ? DateReturnFunction : null;

  if (PatientMenu)
  {
    if (PageBodySection)
      top  = PageBodySection.offsetTop;
    else
      top  = PatientMenu.offsetTop + PatientMenu.offsetHeight;
    left = (document.body.clientWidth-215)/2;
  }
  else
  {
    top  = document.body.scrollTop;
    left = document.body.clientWidth - 215;
  }

  PopUpScreen.style.top     = top  + 'px';
  PopUpScreen.style.left    = left + 'px';
  PopUpScreen.style.width   = '205px';
  PopUpScreen.style.height  = '245px';
  PopUpScreen.style.display = '';
}
//------------------------------------------------------------
// Function : Standard Calendar Selection Frame
//------------------------------------------------------------
function SelectDateFrame(SubmitOnReturn) 
{
  var PatientMenu     = document.getElementById('PatientMenu');
  var PopUpFrameDoc   = ibaGetIframeDoc('PopUpFrame');
  var top  = 0;
  var left = 0;

  DFrameStart();

  if (SubmitOnReturn != undefined && SubmitOnReturn == false) {
    PopUpFrameDoc.location.href="../lookups/SelectDateFrame1.html";
  }
  else {
    PopUpFrameDoc.location.href="../lookups/SelectDateFrame.html";
  }
  
  if (PatientMenu) 
  {
    top  = PatientMenu.offsetTop+PatientMenu.offsetHeight;
    left = (document.body.clientWidth-210)/2;
  }
  else 
  {
    top  = document.body.scrollTop;
    left = document.body.clientWidth - 220;
  }

  var PopUpScreen = document.getElementById('PopUpScreen');
  PopUpScreen.style.top     = top  + 'px';
  PopUpScreen.style.left    = left + 'px';
  PopUpScreen.style.width   = '205px';
  PopUpScreen.style.height  = '245px';
  PopUpScreen.style.display ="";
}

//------------------------------------------------------------
// Function : Web User Search               
//------------------------------------------------------------
function WebUserSearch(ReturnCode,ReturnName) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href="../cgi-bin/" +
                              "websec01.pbl?reportno=3&template=4";
  SearchFrameShow();
}
//------------------------------------------------------------
// Function : Private Practice Search               
//------------------------------------------------------------
function PrivatePracSearch(ReturnCode,ReturnName) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href="../cgi-bin/" +
                              "priweb01.pbl?reportno=1&template=4&norecord=10";
  SearchFrameShow();
}
//------------------------------------------------------------
// Function : Standard Color Selection Frame
//------------------------------------------------------------
function ColorSearchFrame(ColorCode,ColorIcon) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ColorCode=ColorCode;
  window.ColorIcon=ColorIcon;
  PopUpFrameDoc.location.href="../lookups/ColorChartFrame.html";
  SearchFrameShow();
}

//------------------------------------------------------------
// Add PatientMenu from Menu to Content Frame
//------------------------------------------------------------
function CreatePatientMenu()
{
  // get the PatientMenu div 
  var PatientMenu = document.getElementById('PatientMenu');
  if ( PatientMenu == null ) return;

  if (PatientMenu.parentElement != undefined &&
      PatientMenu.parentElement.nodeName == "DIV") {
    PatientMenu.style.height = "auto";  // wrap vertically without overlapping
  }

  // The emergency map carries the patient menu in the top HTML
  // so search this first
  var MenuListColl = getTop().document.getElementsByTagName("SPAN");
  
  for (i=0; i<MenuListColl.length; i++) 
  {
    if (MenuListColl[i].id == "PatientMenuList") 
    {
       PatientMenu.innerHTML+=MenuListColl[i].innerHTML;
       return;
    } 
  }
  if (parent.menu == undefined) 
  {
    if(window.external == null) 
    {
       PatientMenu.style.display="none";
    } 
    return ;
  }
  
  // all other pages  carry the patient menu in the top frame
  MenuListColl = parent.menu.document.getElementsByTagName("SPAN");

  if (MenuListColl.length == 0) {
    // IE11 may take a while to render the contents of the top frame
    window.setTimeout(function () { CreatePatientMenu(); }, 500);
  }
 
  for (i=0; i<MenuListColl.length; i++) 
  {
     if (MenuListColl[i].id == "PatientMenuList") 
     {
       PatientMenu.innerHTML+=MenuListColl[i].innerHTML;
     } 
  }
  
  if (document.PatientLinks.MenuType!=undefined) 
  {
    VisitMenu="VisitMenu" + document.PatientLinks.MenuType.value.substr(0,1)
    for (i=0; i<MenuListColl.length; i++) 
    {
      if (MenuListColl[i].id == VisitMenu) 
      {
         PatientMenu.innerHTML+=MenuListColl[i].innerHTML;
      }
    }
  }
}

//============================================================
// PMenuLinkTo - Patient Navigation via Select Lists
//============================================================
function PMenuLinkTo(SelectItem) {
 ResetTimeOut()
 if (typeof(SelectItem) == 'string') {
   SelectOption = SelectItem.split("|"); 
 } else {
   SelectOption = SelectItem.value.split("|");
   SelectItem.selectedIndex="0" 
 }
//
// This is to ensure links to PBL web services goto cgi-bin
//
 if (location.pathname.indexOf("cgi-bin")<0) {
   if (SelectOption[0].indexOf("cgi-bin")<0) {
     if (SelectOption[0].indexOf("pbl")>0) {
       SelectOption[0]="../cgi-bin/"+SelectOption[0];
     }
   }
 }
 if (SelectOption.length>1) {
  switch (SelectOption[3]) {
   case "0" :
      UniCareContentLink(SelectOption);
      break;
   case "1" :
      UniCareDFrameLink(SelectOption);
      break;
   case "2" :
      PatientLinkToCIS(SelectOption);
      break;
   case "3" :
      MaxCareDFrameLink(SelectOption);
      break;
   case "4" :
      UniCareWinLink(SelectOption);
      break;
   case "5" :
      UniCareContentDemo(SelectOption);
      break;
   case "6" :
      HealthwareLink(SelectOption);
      break;
   case "7" :
      try {
        eval(SelectOption[0]);
      }
      catch(e) {
      }
      break;
   case "P" :
      UniCarePrintLink(SelectOption);
      break;
  }
 }
}
//------------------------------------------------------------
// Link to UltraGenda from Application Level Menu
//------------------------------------------------------------
function OpenCareLogistics() {
  var url = UGLaunchURL;
  url="UGLaunch.php?ActivatePatient=true&PatientId="+trim(PatientURN);
  NewWindow=window.open("../php/"+url,"NewWindow",
  "width=1024,height=768,top=10,left=10,location=no,toolbar=yes,scrollbars=yes");
}
//------------------------------------------------------------
// Link to UniCare Server in new Window
//------------------------------------------------------------
function UniCarePrintLink(SelectOption) {
  document.PatientLinks.action=SelectOption[0];
  document.PatientLinks.reportno.value=SelectOption[1];
  document.PatientLinks.template.value=SelectOption[2];
  NewWindow=window.open("../html/all/PrintWindow.html","NewWindow",
  "width=780,height=500,top=10,left=10,location=no,toolbar=yes,scrollbars=yes");
}
//---------------------------------------------------------------------
// dummy option not used in the real system just for direct link to page
//----------------------------------------------------------------------
function UniCareContentDemo(SelectOption)
{
  getTop().content.location.href=SelectOption[0]; 
}
//---------------------------------------------------------------------
// direct link to healthware CDM management
//----------------------------------------------------------------------
function HealthwareLink(SelectOption){
  getTop().content.location.href=SelectOption[0] +
  "urnumber=" + getTop().content.PatientLinks.urnumber.value.replace(/ /g,"")+
  "&visitnum=" + getTop().content.PatientLinks.admissno.value.replace(/ /g,"")
}


//------------------------------------------------------------
// Link to UniCare Server in Content Frame
//------------------------------------------------------------
function UniCareContentLink(SelectOption) {
  document.PatientLinks.action=SelectOption[0]
  document.PatientLinks.reportno.value=SelectOption[1]
  document.PatientLinks.template.value=SelectOption[2]
//
  if(document.PatientLinks.superlev!=undefined){
    document.PatientLinks.superlev.value="0"}
  if(SelectOption[6]!=undefined&&document.PatientLinks.superlev!=undefined){
      document.PatientLinks.superlev.value=SelectOption[6]
  }
  if(SelectOption[6]!=undefined&&document.PatientLinks.superlev==undefined){
    var the_field;
    var cgi_value=SelectOption[6];
    the_field=document.createElement('INPUT');
    the_field.setAttribute('name', 'superlev');
    the_field.setAttribute('value',  cgi_value);
    the_field.setAttribute("type", "hidden");
    PatientLinks.insertBefore(the_field, document.PatientLinks.template);
    document.PatientLinks.superlev=SelectOption[6];
  }
// 
  if(SelectOption[7]!=undefined && SelectOption[7].length >= 9) {
    var cgi_name=SelectOption[7].substr(0,8);
    var cgi_value=SelectOption[7].substr(9);
    if(document.PatientLinks[cgi_name] != undefined) {
      document.PatientLinks[cgi_name].value=cgi_value;
    } else {
      var the_field;
      the_field=document.createElement('INPUT');
      the_field.setAttribute('name',cgi_name);
      the_field.setAttribute('value',cgi_value);
      the_field.setAttribute("type", "hidden");
      PatientLinks.insertBefore(the_field, document.PatientLinks.template);
    }
  }
//
  document.PatientLinks.target=window.name 
  document.PatientLinks.submit()
}
//------------------------------------------------------------
// Link to UniCare Server in new Window
//------------------------------------------------------------
function UniCareWinLink(SelectOption) {
  document.PatientLinks.action=SelectOption[0];
  document.PatientLinks.reportno.value=SelectOption[1];
  document.PatientLinks.template.value=SelectOption[2];
  NewWindow=window.open("../html/all/enquirywindow.html","NewWindow",
  "width=780,height=500,top=10,left=10,location=no,toolbar=yes,scrollbars=yes");
}
//------------------------------------------------------------
// Link to UniCare Server in Dynamic Frame
//------------------------------------------------------------
function UniCareDFrameLink(SelectOption) 
{
  document.PatientLinks.action         = SelectOption[0];
  document.PatientLinks.reportno.value = SelectOption[1];
  document.PatientLinks.template.value = SelectOption[2];

  var patientForm = document.getElementById('PatientLinks');
  var superlev;
  for (var i=0; i<document.PatientLinks.elements.length;i++) {
     if(document.PatientLinks.elements[i].name == 'superlev') {
       superlev = document.PatientLinks.elements[i];
     }
  }

  if(typeof superlev != 'undefined'){
    if(typeof SelectOption[6] != "undefined") {
      superlev.value = SelectOption[6];
    }else {
      superlev.value = "0";
    }
  }else if (typeof SelectOption[6] != 'undefined') {
     var the_field = document.createElement('INPUT');
     the_field.setAttribute('value', '1');
     the_field.setAttribute('name', 'superlev');
     the_field.setAttribute('type','hidden');
     the_field.id = "superlev";
     the_field.value = 1;
//   patientForm.appendChild(the_field);
     PatientLinks.insertBefore(the_field, document.PatientLinks.template);
  }
//
  if(SelectOption[7]!=undefined && SelectOption[7].length >= 9) {
    var cgi_name=SelectOption[7].substr(0,8);
    var cgi_value=SelectOption[7].substr(9);
    if(document.PatientLinks[cgi_name] != undefined) {
      document.PatientLinks[cgi_name].value=cgi_value;
    } else {
      var the_field;
      the_field=document.createElement('INPUT');
      the_field.setAttribute('name',cgi_name);
      the_field.setAttribute('value',cgi_value);
      the_field.setAttribute("type", "hidden");
      PatientLinks.insertBefore(the_field, document.PatientLinks.template);
    }
  }
//
  DFrameStart();
  document.PatientLinks.target = "PopUpFrame";
  document.PatientLinks.submit();
//
  var MaxWidth  = document.body.clientWidth;
  var MaxHeight = document.body.clientHeight -
                  PatientMenu.offsetTop - PatientMenu.offsetHeight;
  
  var top = PatientMenu.offsetTop + PatientMenu.offsetHeight;

  var w = (SelectOption[4] > MaxWidth ) ? MaxWidth  : SelectOption[4];
  var h = (SelectOption[5] > MaxHeight) ? MaxHeight : SelectOption[5];
  var l = (MaxWidth - w) / 2;

  PopUpScreen.style.top     = top + 'px';
  PopUpScreen.style.left    = l + 'px';
  PopUpScreen.style.width   = w   + 'px';
  PopUpScreen.style.height  = h   + 'px';
  PopUpScreen.style.display = "";
}

//----------------------------------------------------------------------
// Function : Open a Dynamic Frame to a Form Submit
//----------------------------------------------------------------------
function DFrameHide(SubmitForm) 
{
  SubmitForm.target="PopUpFrame";
  SubmitForm.submit();
}

//----------------------------------------------------------------------
// Function : Open a Dynamic Frame to a Form Submit
//----------------------------------------------------------------------
function DFrameSubmit(SubmitForm,FrameTop,FrameLeft,FrameWidth,FrameHeight) 
{
  DFrameStart();
  SubmitForm.target="PopUpFrame";
  SubmitForm.submit();

  var PopUpScreen = document.getElementById('PopUpScreen');

  var MaxWidth  = document.body.clientWidth  - FrameLeft;
  var MaxHeight = document.body.clientHeight - FrameTop;
  var w = (FrameWidth  > MaxWidth)  ? MaxWidth  : FrameWidth;
  var h = (FrameHeight > MaxHeight) ? MaxHeight : FrameHeight;
  var top = FrameTop + document.body.scrollTop;

  PopUpScreen.style.top     = top + 'px';
  PopUpScreen.style.left    = FrameLeft + 'px';
  PopUpScreen.style.width   = w + 'px';
  PopUpScreen.style.height  = h + 'px';
  PopUpScreen.style.display = "";

  return PopUpScreen;
}

//----------------------------------------------------------------------
// Function : Open a Dynamic Frame to a Message String
//----------------------------------------------------------------------
function DFrameMessage(Message,FrameWidth,FrameHeight) {
  PopUpFrame.document.open()
  PopUpFrame.document.write( "" +
  '<link rel="stylesheet" href="../html/standard.css" type="text/css">' +
  '<link rel="stylesheet" href="../html/custom.css" type="text/css">' +
  '<body style="margin:0;">' +
  '<span style="width:100%;background-color:#ccccff;font-style:MS Sans Serif;' +
  'font-weight:bold;font-size:10pt;text-align:center;margin:0;padding:1;">' +
  'Message</span>' + 
  '<span style="height:100%;width:100%;' +
  'background-color:#cccccc;font-style:MS Sans Serif;' +
  'font-size:10pt;text-align:center;margin:0;padding:1;">' +
  '<br><img src=../images/InformationStatus.gif align=absmiddle>  ' +
  Message + '</span>');
   PopUpFrame.document.close()
  MaxWidth=document.body.clientWidth
  MaxHeight=document.body.clientHeight
  if (FrameWidth>MaxWidth)   { PopUpScreen.style.width=MaxWidth }
                             else { PopUpScreen.style.width=FrameWidth }
  if (FrameHeight>MaxHeight) { PopUpScreen.style.height=MaxHeight }
                            else { PopUpScreen.style.height=FrameHeight }
  PopUpScreen.style.top=(document.body.clientHeight -
                          PopUpScreen.style.posHeight)/2
  PopUpScreen.style.left=(document.body.clientWidth -
                          PopUpScreen.style.posWidth)/2
  PopUpScreen.style.display="";
}
//----------------------------------------------------------------------
// Function : Open a Dynamic Frame to a URL
//----------------------------------------------------------------------
function DFrameLink(LinkToUrl,FrameTop,FrameLeft,FrameWidth,FrameHeight) 
{
  var PopUpFrameDoc = DFrameStart();
  var PopUpScreen = document.getElementById('PopUpScreen');

  PopUpFrameDoc.location.href = LinkToUrl;
  var MaxWidth  = getClientWidth() - FrameLeft;
  var MaxHeight = getClientHeight() - FrameTop;

  var w   = (MaxWidth  > FrameWidth ) ? FrameWidth  : MaxWidth ;
  var h   = (MaxHeight > FrameHeight) ? FrameHeight : MaxHeight;
  var top = FrameTop + document.body.scrollTop;
 
  PopUpScreen.style.top     = top + 'px';
  PopUpScreen.style.left    = FrameLeft + 'px';
  PopUpScreen.style.width   = w + 'px';
  PopUpScreen.style.height  = h + 'px';
  PopUpScreen.style.display = "";
}
//----------------------------------------------------------------------
// Function : Close a Dynamic Frame
//----------------------------------------------------------------------
function DFrameClose()
{
  ans=confirm("Are you sure you want to Close?");
  if (ans) 
  {
    DFrameExit();
  }
}
//----------------------------------------------------------------------
// Function : Close a Dynamic Frame and Refresh Parent Frame
//----------------------------------------------------------------------
function DFrameCloseRefresh() 
{
  ans=confirm("Are you sure you want to Close?");
  if (ans) 
  {
    DFrameExitRefresh();
  }
}
//----------------------------------------------------------------------
// Function : Exit a Dynamic Frame
//----------------------------------------------------------------------
function DFrameExit()
{
  if(UseNewInterface== true){
    DFrameExitNewUI();
    return;
  }

  // Find owning document and hide PopUpScreen from display
  el=parent.document.getElementById('PopUpScreen');
  el.style.width   = "0px";
  el.style.height  = "0px";
  el.style.display = "none";
  HideDragOutline();
}
//----------------------------------------------------------------------
// Function : Exit a Dynamic Frame
//----------------------------------------------------------------------
function DFrameExitNewUI()
{
  // Find owning document and hide PopUpScreen from display
  try {
    el=parent.document.getElementById('PopUpScreen');

    if (el != null) {
      el.style.width   = "0px";
      el.style.height  = "0px";
      el.style.display = "none";
      HideDragOutline();
    }
    else {
      throw new Exception;
    }
  } catch (e) {
    el=parent.parent.document.getElementById('PopUpScreen');

    if (el != null) {
      el.style.width   = "0px";
      el.style.height  = "0px";
      el.style.display = "none";
      HideDragOutline();
    }
  }

  try {
    parent.document.getElementById('fadeout').style.display = "none";
  } catch(e) {};

  try {
    parent.parent.document.getElementById('fadeout').style.display = "none";
  } catch(e) {};
}
//----------------------------------------------------------------------
// Function : Exit a Dynamic Frame & Refresh
//----------------------------------------------------------------------
function DFrameExitRefresh() 
{
  if (window.name=="search") {
    top.TogglePanel();       // Emergency Map Bay of Plenty
  }
  else {
    DFrameExit();
    parent.location.reload();
  }
}

//----------------------------------------------------------------------
// Function : Hide the PopUpScreen DragOutline
//----------------------------------------------------------------------
function HideDragOutline() {
  // Find the PopUpScreen DragOutline and hide it
  try {
    el=parent.document.getElementById('DragOutline');

    if (el != null) {
      el.style.width   = "0px";
      el.style.height  = "0px";
      el.style.display = "none";
    } else {
      throw new Exception;
    }
  } catch (e) {
    el=parent.parent.document.getElementById('DragOutline');
    if (el != null) {
      el.style.width   = "0px";
      el.style.height  = "0px";
      el.style.display = "none";
    }
  }
}

//----------------------------------------------------------------------
// Function : Get the top window
//----------------------------------------------------------------------
function getTop() 
{
  var win = window;
  while (win.document.title != "iba//PAS" && win != top) 
  {
    win = win.parent;
  }
  return win;
}
//----------------------------------------------------------------------
// Function : Exit a Dynamic Frame & Refresh
//----------------------------------------------------------------------
function EmergencyDFrameExitRefresh() 
{
  if (EmergencyFullScreens) 
  {
    var MenuFrame    = getTop().document.getElementById('menu');
    var ContentFrame = getTop().document.getElementById('content');
    MenuFrame.style.height='521';
    ContentFrame.style.height='223';
    ContentFrame.location.href ='../cgi-bin/emrweb02.pbl?reportno=2&template=3';
  }
  parent.PopUpScreen.style.width   = "0px";
  parent.PopUpScreen.style.height  = "0px";
  parent.PopUpScreen.style.display = "none";
  parent.location.reload();
}
//----------------------------------------------------------------------
// Function : Lookup Page in a Content Page
//----------------------------------------------------------------------
function LookupPage(returnCode,returnName,Page,returnFocus) {
  window.Code=returnCode ;
  window.Name=returnName ;
  window.Name=returnName ;
  window.focusObj=returnFocus;

  var PopUpFrameDoc  = ibaGetIframeDoc('PopUpFrame');
  PopUpFrameDoc.location.href = "../lookups/" + Page + ".html";

  var PopUpScreen = document.getElementById('PopUpScreen');
  var PatientMenu = document.getElementById('PatientMenu');
  var h;
  var left = document.body.clientWidth - 370 ;

  if (PatientMenu)
  {
    h = document.body.clientHeight - 25 -
                             PatientMenu.offsetTop - PatientMenu.offsetHeight;
  }
  else 
  {
    h = document.body.clientHeight - 25;
  }

  PopUpScreen.style.top     = document.body.scrollTop + 'px';
  PopUpScreen.style.left    = left + 'px';
  PopUpScreen.style.height  = h + 'px';
  PopUpScreen.style.width   = '350px';
  PopUpScreen.style.display = "";
}
//----------------------------------------------------------------------
// Function : Open a lookup page in a dynamic frame passing in width/height
//----------------------------------------------------------------------
function LookupOpen(returnCode,returnName,LookupPage,FrameWidth,FrameHeight) {
  window.Code=returnCode ;
  window.Name=returnName ;
  var PopUpScreen = document.getElementById('PopUpScreen');
  var PatientMenu = document.getElementById('PatientMenu');
  var PopUpFrameDoc  = ibaGetIframeDoc('PopUpFrame');

  PopUpFrameDoc.location.href="../lookups/" + LookupPage + ".html";

  var top  = PatientMenu.offsetTop + PatientMenu.offsetHeight;
  var left = (getClientWidth() - FrameWidth) /2;
  

  PopUpScreen.style.top     = top + 'px';
  PopUpScreen.style.width   = FrameWidth + 'px';
  PopUpScreen.style.left    = left + 'px';
  PopUpScreen.style.height  = FrameHeight + 'px';
  PopUpScreen.style.display = "";
}
//------------------------------------------------------------
// Function : Clear any Sub Frames
//------------------------------------------------------------
function DFrameClear() 
{
  //PopUpFrame.document.open()
  //PopUpFrame.document.write("")
  //PopUpFrame.document.close()
  var PopUpFrameDoc = ibaGetIframeDoc('PopUpFrame');
  PopUpFrameDoc.open();
  PopUpFrameDoc.write("");
  PopUpFrameDoc.close();
}

//------------------------------------------------------------
// Function : Start Frame
//------------------------------------------------------------
function DFrameStart()
{
  var PopUpFrameDoc  = ibaGetIframeDoc('PopUpFrame');
  PopUpFrameDoc.open();
  PopUpFrameDoc.write( "" +
  '<link rel="stylesheet" href="../html/standard.css" type="text/css">' +
  '<link rel="stylesheet" href="../html/custom.css" type="text/css">' +
  '<script language="javascript">' +
  '  document.onunload = parent.PopUpScreen.style.display="none";'+
  '</script>' +
  '<body>' +
  '<span class="DFrameTitleBar">' +
  '<img border="0" align="right" src="../images/ExitIcon.gif" ' +
  ' onclick=parent.PopUpScreen.style.display="none";>' +
  'Loading Document...' +
  '</span>');
   PopUpFrameDoc.close();
   return PopUpFrameDoc;
}
//------------------------------------------------------------
// Function : Start Frame
//------------------------------------------------------------
function DFrameStartSepFrame()
{
  var contentFrame = parent.SearchResults.document;
  var PopUpFrameDoc  = ibaGetIframeDoc('PopUpFrame',contentFrame);
  PopUpFrameDoc.open();
  PopUpFrameDoc.write( "" +
  '<link rel="stylesheet" href="../html/standard.css" type="text/css">' +
  '<link rel="stylesheet" href="../html/custom.css" type="text/css">' +
  '<script language="javascript">' +
  '  document.onunload = parent.PopUpScreen.style.display="none";'+
  '</script>' +
  '<body>' +
  '<span class="DFrameTitleBar">' +
  '<img border="0" align="right" src="../images/ExitIcon.gif" ' +
  ' onclick=parent.PopUpScreen.style.display="none";>' +
  'Loading Document...' +
  '</span>');
   PopUpFrameDoc.close();
   return PopUpFrameDoc;
}
//------------------------------------------------------------
// Function : Standard Health Fund View Frame
//------------------------------------------------------------
function HFViewFrame(HFCode)
{
  if(HFCode=="" ) return;

  var PopUpScreen = document.getElementById('PopUpScreen');
  var PatientMenu = document.getElementById('PatientMenu');
  PopUpFrameDoc = DFrameStart();

  LinkToUrl="patweb87.pbl?reportno=2&template=7&hfund001=" + HFCode;

  PopUpFrameDoc.location.href=LinkToUrl;

  var top;
  var h;
  var w = getClientWidth() - 400;

  if (PatientMenu)
  {
    top  = PatientMenu.offsetTop+PatientMenu.offsetHeight;
    h    = document.body.clientHeight
           -  PatientMenu.offsetTop - PatientMenu.offsetHeight;
  }
  else
  {
    top  = document.body.scrollTop;
    h    = document.body.clientHeight;

  }

  PopUpScreen.style.top     = top + "px";
  PopUpScreen.style.left    = "50px";
  PopUpScreen.style.height  = h   + "px";
  PopUpScreen.style.width   = w   + "px";
  PopUpScreen.style.display = "";
}

//------------------------------------------------------------
// Function : Standard DRG View Frame
//------------------------------------------------------------
function DrgViewFrame(DrgCode) 
{
  if (DrgCode=="") { return; }
  LinkToUrl="patweb94.pbl?reportno=6&template=1&drgcodes=" + DrgCode;
  var PopUpFrameDoc = DFrameStart();
  PopUpFrameDoc.location.href=LinkToUrl;
  var PatientMenu = document.getElementById('PatientMenu');

  var h   = 0;
  var w   = getClientWidth() - 200;
  var top = 0;

  if (PatientMenu) 
  {
    top = PatientMenu.offsetTop+PatientMenu.offsetHeight;
    h   = document.body.clientHeight - 200 
          - PatientMenu.offsetTop - PatientMenu.offsetHeight;
  }
  else 
  {
    top = document.body.scrollTop;
    h   = document.body.clientHeight - 200;
  }

  PopUpScreen.style.top     = top + 'px';
  PopUpScreen.style.left    = '100px';
  PopUpScreen.style.width   = w + 'px';
  PopUpScreen.style.height  = h + 'px';
  PopUpScreen.style.display = "";
}
//------------------------------------------------------------
// Function : Standard HCP View Frame
//------------------------------------------------------------
function HCPViewFrame(GpCode,GpPrac,GpPcnt) 
{
  if(GpCode=="" & GpPrac=="") return; 

  var PopUpScreen = document.getElementById('PopUpScreen');
  var PatientMenu = document.getElementById('PatientMenu');
  PopUpFrameDoc = DFrameStart();

  if (GpPrac=="" | isWhitespace(GpPrac) | GpPrac==undefined) 
  {
    LinkToUrl="patweb99.pbl?reportno=4&template=1&genpcode=" + GpCode;
  }
  else 
  {
    if (GpCode=="" | isWhitespace(GpCode) | GpCode==undefined) 
    {
      LinkToUrl="patweb99.pbl?reportno=4&template=3&genpprac=" + GpPrac +
                "&genppcnt=" + GpPcnt;
    } 
    else 
    {
      LinkToUrl="patweb99.pbl?reportno=4&template=2&genpcode=" + GpCode +
                "&genpprac=" + GpPrac +
                "&genppcnt=" + GpPcnt;
    }
  }

  PopUpFrameDoc.location.href=LinkToUrl;

  var top;
  var h;
  var w = getClientWidth() - 100;

  if (PatientMenu)
  {
    top  = PatientMenu.offsetTop+PatientMenu.offsetHeight;
    h    = document.body.clientHeight 
           -  PatientMenu.offsetTop - PatientMenu.offsetHeight;
  }
  else 
  {
    top  = document.body.scrollTop;
    h    = document.body.clientHeight;

  }

  PopUpScreen.style.top     = top + "px";
  PopUpScreen.style.left    = "50px";
  PopUpScreen.style.height  = h   + "px";
  PopUpScreen.style.width   = w   + "px";
  PopUpScreen.style.display = "";
}
//------------------------------------------------------------
// Function : Standard Doctor Search Frame
//------------------------------------------------------------
function DoctorViewFrame(DoctorCode) 
{
  if (DoctorCode=="") return; 

  var LinkToUrl="patweb99.pbl?reportno=1&template=1&doctcode=" + DoctorCode;
  var PopUpFrameDoc = DFrameStart();
  PopUpFrameDoc.location.href=LinkToUrl;

  var PopUpScreen = document.getElementById('PopUpScreen');
  var PatientMenu = document.getElementById('PatientMenu');
  var top = 0;
  var h;
  var w = getClientWidth() - 100;

  if (PatientMenu) 
  {
    top = PatientMenu.offsetTop+PatientMenu.offsetHeight;
    h   = document.body.clientHeight 
          - PatientMenu.offsetTop - PatientMenu.offsetHeight;
  }
  else 
  {
    top = document.body.scrollTop;
    h   = document.body.clientHeight;
  }

  PopUpScreen.style.top     = top + "px";
  PopUpScreen.style.left    = "50px";
  PopUpScreen.style.height  = h   + "px";
  PopUpScreen.style.width   = w   + "px";
  PopUpScreen.style.display = "";
}
//------------------------------------------------------------
// Function : Standard Doctor Search Frame
//------------------------------------------------------------
function HCPEnquiryViewFrame(HCPCode)
{
  if (HCPCode=="") return;

  var LinkToUrl="patweb99.pbl?reportno=4&template=101&genpcode=" + HCPCode +
                "&pmhcp001=" + HCPCode;
  var PopUpFrameDoc = DFrameStart();
  PopUpFrameDoc.location.href=LinkToUrl;

  var PopUpScreen = document.getElementById('PopUpScreen');
  var PatientMenu = document.getElementById('PatientMenu');
  var top = 0;
  var h;
  var w = getClientWidth() - 150;

  if (PatientMenu)
  {
    top = PatientMenu.offsetTop+PatientMenu.offsetHeight;
    h   = document.body.clientHeight
          - PatientMenu.offsetTop - PatientMenu.offsetHeight - 30;
  }
  else
  {
    top = document.body.scrollTop;
    h   = document.body.clientHeight - 30;
  }

  PopUpScreen.style.top     = top + "px";
  PopUpScreen.style.left    = "50px";
  PopUpScreen.style.height  = h   + "px";
  PopUpScreen.style.width   = w   + "px";
  PopUpScreen.style.display = "";
}
//============================================================
// PatientLinkTo - Patient Link
//============================================================
function PatientLinkTo(Server,ServerOpt,ServerTmp,SubmitTo,FWidth,FHeight) 
{
  ResetTimeOut();
  if (!location.pathname.match(/cgi-bin/g)) { Server="../cgi-bin/"+Server; }

  if(PatientLinkTo.arguments.length>="7")
  {
    if(document.PatientLinks.superlev!=undefined){
      document.PatientLinks.superlev.value="0"}
    if(PatientLinkTo.arguments[6]!=undefined &&
       document.PatientLinks.superlev!=undefined){
      document.PatientLinks.superlev.value=PatientLinkTo.arguments[6]
    }
    if(PatientLinkTo.arguments[6]!=undefined &&
       document.PatientLinks.superlev==undefined){
      var the_field, the_form = document.getElementById('PatientLinks');
      var cgi_value=PatientLinkTo.arguments[6];
      the_field=document.createElement('INPUT');
      the_field.setAttribute('type','hidden');
      the_field.setAttribute('name','superlev');
      the_field.id = "superlev";
      the_field.value = cgi_value;
      PatientLinks.insertBefore(the_field, document.PatientLinks.template);
    }
  }
  if(PatientLinkTo.arguments.length>="8") {
    if(PatientLinkTo.arguments[7]!=undefined ) {
      if(!isWhitespace(PatientLinkTo.arguments[7])) {
        var cgi_name=PatientLinkTo.arguments[7].substr(0,8);
        var cgi_value=PatientLinkTo.arguments[7].substr(9);
        if(document.PatientLinks[cgi_name] != undefined) {
          document.PatientLinks[cgi_name].value=cgi_value;
        } else {
          var the_field;
          the_field=document.createElement('INPUT');
          the_field.setAttribute('name',cgi_name);
          the_field.setAttribute('value',cgi_value);
          PatientLinks.insertBefore(the_field, document.PatientLinks.template);
        }
      }
    }
  }
  if (getTop().content==undefined) 
  {
     PatientLinks.action=Server;
     PatientLinks.reportno.value=ServerOpt;
     PatientLinks.template.value=ServerTmp;
     if (SubmitTo=="0") {
        PatientLinks.submit(); }
     if (SubmitTo=="1") {
        PatientLinkDFrame(Server,ServerOpt,ServerTmp,SubmitTo,FWidth,FHeight); }
     if (SubmitTo=="2") 
     {
       NewWindow=window.open("","NewWindow","width=640,height=400,location=no");
       PatientLinks.target="NewWindow";
       PatientLinks.submit(); 
     }
     return;
  }

  if (getTop().location.pathname.match(/EmergencyMap/g)) 
  {
    if (getTop().content.PatientLinks!=undefined) {
      if(getTop().content.PatientLinks.admissno.value==PatientLinks.admissno.value) 
      {
        url="../cgi-bin/" + Server + "?reportno=" + ServerOpt +
                    "&template=" + ServerTmp +
                    "&urnumber=" +
                    getTop().content.PatientLinks.urnumber.value.replace(/ /g,"+") +
                    "&admissno=" + 
                    getTop().content.PatientLinks.admissno.value.replace(/ /g,"+") ;
      }
      else 
      {
        url="../cgi-bin/" + Server + "?reportno=" + ServerOpt +
                    "&template=" + ServerTmp +
                    "&urnumber=" +
                    getTop().content.PatientLinks.urnumber.value.replace(/ /g,"+") +
                    "&admissno=" + 
                    PatientLinks.admissno.value.replace(/ /g,"+") ;
      }
    } else {
      url="../cgi-bin/" + Server + "?reportno=" + ServerOpt +
                  "&template=" + ServerTmp +
                  "&urnumber=" +
                  PatientLinks.urnumber.value.replace(/ /g,"+") +
                  "&admissno=" +
                  PatientLinks.admissno.value.replace(/ /g,"+") ;
    }

    if (SubmitTo=="0") {
      if (getTop().location.pathname.match(/EmergencyMapFrameFS/g) ||
          getTop().TogglePanel)
      {
        document.PatientLinks.action=Server;
        document.PatientLinks.reportno.value=ServerOpt;
        document.PatientLinks.template.value=ServerTmp;
        document.PatientLinks.target="_self";
        document.PatientLinks.submit();
        return;
      }
    }
 
    if (SubmitTo=="1") {
      Left=(document.body.clientWidth-900)/2;
      document.PatientLinks.reportno.value = ServerOpt;
      document.PatientLinks.template.value = ServerTmp;
      document.PatientLinks.action = Server;
      DFrameSubmit(document.PatientLinks,100,Left,900,500);
    }
    else {
      getTop().menu.EmergencyFrameLink(url,0,0,1008,521);
    }
    return;
  }

  getTop().content.PatientLinks.action=Server;
  getTop().content.PatientLinks.reportno.value=ServerOpt;
  getTop().content.PatientLinks.template.value=ServerTmp;
  if (SubmitTo=="0") 
  {
    getTop().content.PatientLinks.target="content";
    getTop().content.PatientLinks.submit();
  }
  if (SubmitTo=="1") 
  {
    PatientLinkDFrame(Server,ServerOpt,ServerTmp,SubmitTo,FWidth,FHeight);
  }
  if (SubmitTo=="2") 
  {
    NewWindow=window.open("","NewWindow","width=640,height=400,location=no");
    getTop().content.PatientLinks.target="NewWindow";
    getTop().content.PatientLinks.submit();
  }
}

//============================================================
// PatientLinkDFrame
//============================================================
function PatientLinkDFrame(Server,ServerOpt,ServerTmp,SubmitTo,FWidth,FHeight) {
  DFrameStart();
  var PopUpScreen = document.getElementById('PopUpScreen');
  var PatientMenu = document.getElementById('PatientMenu');

  var MaxWidth  = getTop().content.clientWidth;
  var MaxHeight;
  var top = 0;

  if (PatientMenu) 
  {
    top = PatientMenu.offsetTop + PatientMenu.offsetHeight;

    MaxHeight = document.body.clientHeight
                - PatientMenu.offsetTop 
                - PatientMenu.offsetHeight;

  }
  else 
  {
    top       = document.body.scrollTop;
    MaxHeight = document.body.clientHeight;
  }

  var w    = (FWidth  > MaxWidth)  ? MaxWidth  : FWidth;
  var h    = (FHeight > MaxHeight) ? MaxHeight : FHeight;
  var left = (document.body.clientWidth - w) /2;

  PopUpScreen.style.display = "";
  PopUpScreen.style.top     = top  + "px";
  PopUpScreen.style.left    = left + "px";
  PopUpScreen.style.height  = h    + "px";
  PopUpScreen.style.width   = w    + "px";
  PopUpScreen.style.display = "";

  PatientLinks.target="PopUpFrame";
  PatientLinks.submit();
}
//----------------------------------------------------------------------
// Function : Called by DFrameImgLink - Resize image dynamic frame
//----------------------------------------------------------------------
function ResizePopUp(FrameWidth,FrameHeight) {
  var PopUpScreen = parent.document.getElementById('PopUpScreen');
  var windowWidth = parent.document.body.clientWidth;
  var imageSrc = document.getElementById('ImageSrc');
  var fw=imageSrc.width;
  var fh=imageSrc.height;
  var fl;
  if (fw>windowWidth) {
    fw=windowWidth-2;
    fl=1;
  } else {
    fl = (windowWidth - fw) /2;
  }
  if(FrameWidth>fw || FrameHeight >fh) {
   return;
  }
  PopUpScreen.style.left    = fl+'px';
  PopUpScreen.style.height  = fh+"px";
  PopUpScreen.style.width   = fw+"px";
}
//----------------------------------------------------------------------
// Function : Open a Dynamic Frame to a Image
//----------------------------------------------------------------------
function DFrameImgLink(LinkToImg,FrameWidth,FrameHeight)
{
  var PopUpFrame  = document.getElementById('PopUpFrame');
  
  var contents =
   '<link rel="stylesheet" href="../html/standard.css" type="text/css">' +
   '<link rel="stylesheet" href="../html/custom.css" type="text/css">' +
   '<script type="text/javascript" src="../js/Standard.js" ></script>' +
   '<script type="text/javascript" src="../js/Custom.js" ></script>' +
   '<body onload=\'PageLoad(event);ResizePopUp(' + 
    FrameWidth + ',' + FrameHeight+ ');\'>' +
   '<span class="DFrameTitleBar">' +
   '<div id=ExitIcon class="x-tool x-tool-close" title=Exit ' +
   ' onmousedown=DFrameExit(); alt="Exit"></div>' +
   '<div id=PrintIcon class="x-tool x-tool-print" title=Print ' +
   ' onmousedown="DFrameImgPrint(event);" alt="Print"></div>' +
   '</span><div id=ImageFrame style="width:100%">' +
   '<img id=ImageSrc src="' + LinkToImg + '"></div></body>';

  if (PopUpFrame.contentDocument) {
    PopUpFrame.contentDocument.open();
    PopUpFrame.contentDocument.write(contents);
    PopUpFrame.contentDocument.close();
  }
  else {
    PopUpFrame.contentWindow.document.open();
    PopUpFrame.contentWindow.document.write(contents);
    PopUpFrame.contentWindow.document.close();
  }

  var PopUpScreen = document.getElementById('PopUpScreen');
  var PatientMenu = document.getElementById('PatientMenu');
  var top  = 0;
  var left = (document.body.clientWidth - FrameWidth) /2;

  if (PatientMenu)
  {
    top = PatientMenu.offsetTop + PatientMenu.offsetHeight;
  }
  else
  {
    top = document.body.scrollTop;
  }

  PopUpScreen.style.top     = top + "px";
  PopUpScreen.style.left    = left + "px";
  PopUpScreen.style.height  = FrameHeight + "px";
  PopUpScreen.style.width   = FrameWidth  + "px";
  PopUpScreen.style.display = "";
}

//
// Polyfill for document.getElementsByClassName(); when IE11 Compatibility Mode
//
if (!document.getElementsByClassName) {
  document.getElementsByClassName = function(ClassName) {
    var a = [];
    var re = new RegExp("(^| )" + ClassName + "( |$)");
    var els = document.getElementsByTagName("*");

    for (var i=0, j = els.length; i < j; i++) {
      if (re.test(els[i].className)) { a.push(els[i]) };
    }

    return a;
  }
}
function DFrameImgPrint(e) {
  var BackgroundColor = document.body.style.backgroundColor;
  var BackgroundImage = document.body.style.backgroundImage;
  document.body.style.backgroundImage="url('')";
  document.body.style.backgroundColor="white";

  var DFrameTitleBar = document.getElementsByClassName('DFrameTitleBar')[0];

  DFrameTitleBar.style.display='none';
  document.body.focus();
  self.print();
  DFrameTitleBar.style.display='';

  document.body.style.backgroundImage=BackgroundImage;
  document.body.style.backgroundColor=BackgroundColor;

  var evt = (e != undefined) ? e : window.event;
  if (evt.preventDefault) {
    evt.preventDefault();
    evt.stopPropagation();
  }
  else {
    evt.returnValue = false;
    evt.cancelBubble = true;
  }

  isDragging = false;
  return false;
}
//--------------------------------------------------------------------
// Function : Display Search Frame in Center allowing for PatientMenu
//--------------------------------------------------------------------
function SearchFrameShow() 
{
  var PopUpScreen = document.getElementById('PopUpScreen');
  var PatientMenu = document.getElementById('PatientMenu');
  var top = 0;
  var w = getClientWidth() - 60;
  var h = 0;

  if (PatientMenu) 
  {
    top = PatientMenu.offsetTop - 2;
    h   = document.body.clientHeight - PatientMenu.offsetTop - 20;
  }
  else 
  {
    top = document.body.scrollTop;
    h   = document.body.clientHeight - 20;
  }

  PopUpScreen.style.top     = top + 'px';
  PopUpScreen.style.left    = '20px';                      
  PopUpScreen.style.width   = w + 'px';
  PopUpScreen.style.height  = h + 'px';
  PopUpScreen.style.display = "";
}

//------------------------------------------------------------
// Function : Standard Account Code Search Frame
//------------------------------------------------------------
function AccountSearchFrame(InputLedger,ReturnCode,ReturnName) 
{
  var PopUpFrameDoc = DFrameStart();
  window.InputLedger=InputLedger;
  window.ReturnCode=ReturnCode;
  window.ReturnName=ReturnName;
  PopUpFrameDoc.location.href="../lookups/AccountSearchFrame.html";
  SearchFrameShow();
}

//-------------------------------------------------------------------------
// Function : Standard Account Code Search Frame returning Acount Details
//-------------------------------------------------------------------------
function Income(InputLedger,ReturnCode,ReturnName,BankLed,BankLedDsc,ChqAcc,ChqAccDsc,DebAcc,DebAccDsc,Gst,GstDsc) 
{
  var PopUpFrameDoc = DFrameStart();

  ListType="0";  // Defualt to Zero
  for (var i=11; i < Income.arguments.length; i++) 
  {
    if (typeof(Income.arguments[i]) == 'function') 
      ReturnFunction=Income.arguments[i];
    else 
      ListType=Income.arguments[i];
  }

  window.ListType=ListType;

  window.InputLedger=InputLedger;
  window.ReturnCode=ReturnCode;
  window.ReturnName=ReturnName;
  window.BankLed=BankLed;
  window.BankLedDsc=BankLedDsc;
  window.ChqAcc=ChqAcc;
  window.ChqAccDsc=ChqAccDsc;
  window.DebAcc=DebAcc;
  window.DebAccDsc=DebAccDsc;
  window.Gst=Gst;
  window.GstDsc=GstDsc;
  PopUpFrameDoc.location.href="../lookups/IncomeAccountSearchFrame.html";
  SearchFrameShow();
}

//----------------------------------------------------------------------
// Function : Exit a Search Frame
//----------------------------------------------------------------------
function SearchFrameExit() 
{
  parent.parent.document.getElementById('PopUpScreen').style.display="none";
}

//------------------------------------------------------------
// Function : Standard Ward/Bed Search Frame
//------------------------------------------------------------
function WardBedSearchFrame(ReturnWard,ReturnName,ReturnBed,ReturnStatus,ReturnDate,ReturnTime) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnWard=ReturnWard;
  window.ReturnName=ReturnName;
  window.ReturnBed=ReturnBed;
  window.ReturnBedStatus=ReturnStatus;
  window.ReturnDate=ReturnDate;
  window.ReturnTime=ReturnTime;

  window.ReturnFunction="";
  if (WardBedSearchFrame.arguments.length==5) {
    if (typeof(WardBedSearchFrame.arguments[4]) == 'function') {
      window.ReturnFunction=WardBedSearchFrame.arguments[4]; 
    }
  }
  PopUpFrameDoc.location.href = "../lookups/WardBedSearchFrame.html";
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Standard Doctor Search Frame
//------------------------------------------------------------
function DoctorSearchFrame(ReturnCode,ReturnName) 
{
  if (ReturnCode!=null)
  {
    if(ReturnCode.readOnly==true)
    {
      alert( ReturnCode.title + " is a readonly field." );
      return;
    }
    if(ReturnCode.disabled==true)
    {
      alert( ReturnCode.title + " is a disabled field." );
      return;
    }
  }
  var PopUpFrameDoc = DFrameStart();
  window.ReturnFunction="";
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  if (DoctorSearchFrame.arguments.length > 1) {
    window.ReturnFunction=DoctorSearchFrame.arguments[2]; }
  PopUpFrameDoc.location.href = "../lookups/DoctorSearchFrame.html";
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Doctor Search Frame for a specific hospital
//------------------------------------------------------------
function DoctorHospitalSearchFrame(ReturnCode,ReturnName,MultHospital) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnFunction="";
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.ReturnHosp="" ;
  if (MultHospital!=undefined) {
    window.ReturnHosp=MultHospital ;
  }
  if (DoctorHospitalSearchFrame.arguments.length > 2) {
    window.ReturnFunction=DoctorHospitalSearchFrame.arguments[3] }
  PopUpFrameDoc.location.href = "../lookups/DoctorHospitalSearchFrame.html";
  SearchFrameShow();
}

//------------------------------------------------------------
// Function:Standard Doctor Search Frame Without MultiHospital Functionality
//------------------------------------------------------------
function DoctorSearchFrameWithoutMultiHosp(ReturnCode,ReturnName) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnFunction="";
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  if (DoctorSearchFrameWithoutMultiHosp.arguments.length > 1) {
    window.ReturnFunction=DoctorSearchFrameWithoutMultiHosp.arguments[2] }
  PopUpFrameDoc.location.href = "../lookups/DoctorSearchFrameWithoutMultiHosp.html"
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Standard Emergency Doctor Search Frame
//------------------------------------------------------------
function DoctorEmrSearchFrame(ReturnCode,ReturnName) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnFunction="";
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  if (DoctorEmrSearchFrame.arguments.length > 1) {
    window.ReturnFunction=DoctorEmrSearchFrame.arguments[2] }
  PopUpFrameDoc.location.href = "../lookups/DoctorEmrSearchFrame.html"
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Standard Doctor Search Frame Include Inactive
//------------------------------------------------------------
function DoctorSearchFrameAll(ReturnCode,ReturnName) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnFunction="";
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  if (DoctorSearchFrameAll.arguments.length > 1) {
    window.ReturnFunction=DoctorSearchFrameAll.arguments[2] }
  PopUpFrameDoc.location.href = "../lookups/DoctorSearchFrameAll.html"
  SearchFrameShow();
}
//------------------------------------------------------------
// Function : Doctor Search Frame for option 5 
//            Active and Active Outside with Nurse type
//------------------------------------------------------------
function DoctorSearchFrame5(ReturnCode,ReturnName)
{
  if (ReturnCode!=null)
  {
    if(ReturnCode.readOnly==true)
    {
      alert( ReturnCode.title + " is a readonly field." );
      return;
    }
    if(ReturnCode.disabled==true)
    {
      alert( ReturnCode.title + " is a disabled field." );
      return;
    }
  }
  var PopUpFrameDoc = DFrameStart();
  window.ReturnFunction="";
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  if (DoctorSearchFrame5.arguments.length > 1) {
    window.ReturnFunction=DoctorSearchFrame5.arguments[2]; }
  PopUpFrameDoc.location.href = "../lookups/DoctorSearchFrame5.html";
  SearchFrameShow();
}


//------------------------------------------------------------
// Function : Standard Nurse Search Frame
//------------------------------------------------------------
function NurseSearchFrame(ReturnCode,ReturnName) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../lookups/NurseSearchFrame.html";
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Standard Axis I Search Frame
//------------------------------------------------------------
function MehAxis1SearchFrame(ReturnCode,ReturnName) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../lookups/MehAxis1SearchFrame.html";
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Standard Axis II Search Frame
//------------------------------------------------------------
function MehAxis2SearchFrame(ReturnCode,ReturnName) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../lookups/MehAxis2SearchFrame.html"
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Standard Axis III Search Frame
//------------------------------------------------------------
function MehAxis3SearchFrame(ReturnCode,ReturnName) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../lookups/MehAxis3SearchFrame.html"
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Standard Casemix Key Word Search Frame
//------------------------------------------------------------
function CmixSearchFrame(ReturnCode,ReturnName) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnFunction="" ;
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  if (CmixSearchFrame.arguments.length > 1) {
    window.ReturnFunction=CmixSearchFrame.arguments[2] }
  PopUpFrameDoc.location.href = "../lookups/CmixSearchFrame.html";
  SearchFrameShow();
}
//------------------------------------------------------------
// Function : Standard Casemix Key Word Search Frame
//            with expected length of stay returned
//------------------------------------------------------------
function CmixSearchFrameLOS(ReturnCode,ReturnName,ReturnLOS) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnFunction="" ;
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.ReturnLOS=ReturnLOS ;
  if (CmixSearchFrameLOS.arguments.length > 1) {
    window.ReturnFunction=CmixSearchFrameLOS.arguments[2] }
  PopUpFrameDoc.location.href = "../lookups/CmixSearchFrame.html";
  SearchFrameShow();
}
//----------------------------------------------------------------------
// Function : Standard Casemix Key Word Search Frame based on parameter
//----------------------------------------------------------------------
function chkCmixSrchFrame() {
 if (document.UpdateForm.ptcnelos.value=="1") {
    CmixSearchFrame(UpdateForm.ptmis073,UpdateForm.cmixdesc1);
 } else {
    CmixSearchFrameLOS(UpdateForm.ptmis073,UpdateForm.cmixdesc1,UpdateForm.ptmis030);
 }
}
//------------------------------------------------------------
// Function : Standard LGA Key Word Search Frame
//------------------------------------------------------------
function LGASearchFrame(ReturnCode,ReturnName) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnFunction="" ;
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  if (LGASearchFrame.arguments.length > 1) {
    window.ReturnFunction=LGASearchFrame.arguments[2] }
  PopUpFrameDoc.location.href = "../lookups/LGASearchFrame.html";
  SearchFrameShow();
}
//------------------------------------------------------------
// Function : Transfer Source Search Frame
//------------------------------------------------------------
function TransferSourceFrame(ReturnCode,ReturnName,admsource) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.AdmSource=admsource ;
  PopUpFrameDoc.location.href = "../lookups/TransferSourceFrame.html";
  SearchFrameShow();
}
//------------------------------------------------------------
// Function : Transfer Source Search Frame Outcome cat AO
//------------------------------------------------------------
function TransferSourceFrameOutcome(ReturnCode,ReturnName,OutCPriority)
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.OutComePriority=OutCPriority ;
  PopUpFrameDoc.location.href = "../lookups/TransferSourceFrameOutcome.html";
  SearchFrameShow();
}
//------------------------------------------------------------
// Function : Transfer Source Search Frame Outcome cat OZ
//------------------------------------------------------------
function TransferSourceFrameOutcome2(ReturnCode,ReturnName,OutcomeCode)
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.Outcome=OutcomeCode ;
  PopUpFrameDoc.location.href = "../lookups/TransferSourceFrameOutcome.html";
  SearchFrameShow();
}
//------------------------------------------------------------
// Function : Transfer Source Search Frame with custom category
//------------------------------------------------------------
function TransferSourceFrameCategory(ReturnCode,ReturnName,admsource,category)
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.AdmSource=admsource ;
  window.AdmSourceCat=category ;
  PopUpFrameDoc.location.href = "../lookups/TransferSourceFrame.html";
  SearchFrameShow();
}
//------------------------------------------------------------
// Function : Private Practice AMA/MBS Code Search Frame
//------------------------------------------------------------
function PriMbsSearchFrame(ReturnType,ReturnCode,ReturnSitm,ReturnDate,ReturnName) 
{

  window.ReturnFunction="";
  for (var i=4; i < PriMbsSearchFrame.arguments.length; i++) 
  {
    if (typeof(PriMbsSearchFrame.arguments[i]) == 'function')
      ReturnFunction=PriMbsSearchFrame.arguments[i];
    else 
    {
      var ItemType = new Object();
      ItemType=PriMbsSearchFrame.arguments[i]; 
    } 
  }

  var PopUpFrameDoc = DFrameStart();

  window.ReturnType=ReturnType;
  window.ReturnCode=ReturnCode;
  window.ReturnSitm=ReturnSitm;
  window.ReturnDate=ReturnDate;
  window.ReturnName=ReturnName;
  window.ItemType=ItemType;

  PopUpFrameDoc.location.href = "../lookups/PriMbsSearchFrame.html";
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Standard Supplier Code Search Frame
//------------------------------------------------------------
function SuppSearchFrame(ReturnCode,ReturnName) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../lookups/SuppSearchFrame.html";
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Appointment Search Frame
//          : Optional Parameters
//            4 = Default Clinic Type
//            5 = Default Clinic ID
//            6 = Default Visit Type
//------------------------------------------------------------
function AppointmentSearchFrame(ReturnCode,ReturnName,ReturnDate) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.ReturnDate=ReturnDate ;
  window.ReturnFunction="";
  CriteriaLink="../cgi-bin/outweb01.pbl?reportno=2&template=2"
  switch (AppointmentSearchFrame.arguments.length) 
  {
  case 4: {
     CriteriaLink+="&clinicty=" +
                   AppointmentSearchFrame.arguments[3].value.replace(/ /g,"+")
     break; }
  case 5: {
     CriteriaLink+="&clinicty=" +
                   AppointmentSearchFrame.arguments[3].value.replace(/ /g,"+")
     CriteriaLink+="&clinicid=" +
                   AppointmentSearchFrame.arguments[4].value.replace(/ /g,"+")
     break; }
  case 6: {
     CriteriaLink+="&clinicty=" +
                   AppointmentSearchFrame.arguments[3].value.replace(/ /g,"+")
     CriteriaLink+="&clinicid=" +
                   AppointmentSearchFrame.arguments[4].value.replace(/ /g,"+")
     CriteriaLink+="&visittyp=" +
                   AppointmentSearchFrame.arguments[5].value.replace(/ /g,"+")
     CriteriaLink+="&srchvtyp=" +
                   AppointmentSearchFrame.arguments[5].value.replace(/ /g,"+")
     break; }
  case 7: {
     CriteriaLink+="&clinicty=" +
                   AppointmentSearchFrame.arguments[3].value.replace(/ /g,"+")
     CriteriaLink+="&clinicid=" +
                   AppointmentSearchFrame.arguments[4].value.replace(/ /g,"+")
     CriteriaLink+="&visittyp=" +
                   AppointmentSearchFrame.arguments[5].value.replace(/ /g,"+")
     CriteriaLink+="&srchvtyp=" +
                   AppointmentSearchFrame.arguments[5].value.replace(/ /g,"+")
     CriteriaLink+="&deftovrd=" +
                   AppointmentSearchFrame.arguments[6].value.replace(/ /g,"+")
     break; }
  case 8: {
     CriteriaLink+="&clinicty=" +
                   AppointmentSearchFrame.arguments[3].value.replace(/ /g,"+")
     CriteriaLink+="&clinicid=" +
                   AppointmentSearchFrame.arguments[4].value.replace(/ /g,"+")
     CriteriaLink+="&visittyp=" +
                   AppointmentSearchFrame.arguments[5].value.replace(/ /g,"+")
     CriteriaLink+="&srchvtyp=" +
                   AppointmentSearchFrame.arguments[5].value.replace(/ /g,"+")
     CriteriaLink+="&deftovrd=" +
                   AppointmentSearchFrame.arguments[6].value.replace(/ /g,"+")
     CriteriaLink+="&srchrefn=" +
                   AppointmentSearchFrame.arguments[7].value.replace(/ /g,"+")
     break; }
  }

  if(document.getElementById("mosaiqrs")) {
    if(document.getElementById("mosaiqrs").value == "1") {
      CriteriaLink+="&mosaiqrs=1"
    }
  }

  PopUpFrameDoc.write("<frameset name=SearchSet rows=\"100,*\"> " +
    "<frame name=SearchOptions src=\"" + 
    CriteriaLink + "\" " + " scrolling=no>" +
    "</frame>" +
    "<frame name=SearchResults src=../lookups/blank.html>" +
    "</frame></frameset>")
  PopUpFrameDoc.close();
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Clinic Search Frame
//          : Optional Parameters
//            4 = Default Clinic Type
//            5 = Default Clinic ID
//            6 = Default Visit Type
//------------------------------------------------------------
function ClinicSearchFrame(ReturnCode,ReturnName,ReturnDate) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.ReturnDate=ReturnDate ;
  window.ReturnFunction="";
  CriteriaLink="../cgi-bin/outweb02.pbl?reportno=1&template=2&viewtype=0"
  switch (ClinicSearchFrame.arguments.length) 
  {
   case 4: {
     CriteriaLink+="&srchclty=" +
                   ClinicSearchFrame.arguments[3].value.replace(/ /g,"+")
     break; }
   case 5: {
     CriteriaLink+="&srchclty=" +
                   ClinicSearchFrame.arguments[3].value.replace(/ /g,"+")
     CriteriaLink+="&srchclid=" +
                   ClinicSearchFrame.arguments[4].value.replace(/ /g,"+")
     break; }
   case 6: {
     CriteriaLink+="&srchclty=" +
                   ClinicSearchFrame.arguments[3].value.replace(/ /g,"+")
     CriteriaLink+="&srchclid=" +
                   ClinicSearchFrame.arguments[4].value.replace(/ /g,"+")
     CriteriaLink+="&visittyp=" +
                   ClinicSearchFrame.arguments[5].value.replace(/ /g,"+")
     CriteriaLink+="&srchvtyp=" +
                   ClinicSearchFrame.arguments[5].value.replace(/ /g,"+")
     break; }
   case 7: {
     CriteriaLink+="&srchclty=" +
                   ClinicSearchFrame.arguments[3].value.replace(/ /g,"+")
     CriteriaLink+="&srchclid=" +
                   ClinicSearchFrame.arguments[4].value.replace(/ /g,"+")
     CriteriaLink+="&visittyp=" +
                   ClinicSearchFrame.arguments[5].value.replace(/ /g,"+")
     CriteriaLink+="&srchvtyp=" +
                   ClinicSearchFrame.arguments[5].value.replace(/ /g,"+")
     CriteriaLink+="&deftovrd=" +
                   ClinicSearchFrame.arguments[6].value.replace(/ /g,"+")
     break; }
   case 8: {
     CriteriaLink+="&srchclty=" +
                   ClinicSearchFrame.arguments[3].value.replace(/ /g,"+")
     CriteriaLink+="&srchclid=" +
                   ClinicSearchFrame.arguments[4].value.replace(/ /g,"+")
     CriteriaLink+="&visittyp=" +
                   ClinicSearchFrame.arguments[5].value.replace(/ /g,"+")
     CriteriaLink+="&srchvtyp=" +
                   ClinicSearchFrame.arguments[5].value.replace(/ /g,"+")
     CriteriaLink+="&deftovrd=" +
                   ClinicSearchFrame.arguments[6].value.replace(/ /g,"+")
     CriteriaLink+="&srchrefn=" +
                   ClinicSearchFrame.arguments[7].value.replace(/ /g,"+")
     break; }
  }
  if(document.getElementById("mosaiqrs")) {
    if(document.getElementById("mosaiqrs").value == "1") {
      CriteriaLink+="&mosaiqrs=1"
    }
  }
  PopUpFrameDoc.location.href = CriteriaLink;
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Clinic Session Search Frame
//------------------------------------------------------------
function ClinicSessionSearchFrame(ReturnCode,ReturnName) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;

  window.ReturnFunction="" ;
  for (var i=2; i < ClinicSessionSearchFrame.arguments.length; i++) 
  {
    if (typeof(ClinicSessionSearchFrame.arguments[i]) == 'function')
      window.ReturnFunction=ClinicSessionSearchFrame.arguments[i];
  }

  PopUpFrameDoc.location.href = "../cgi-bin/outweb05.pbl?reportno=2&template=5";
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Clinic Session Search Frame
//------------------------------------------------------------
function ClinicSessionSearchFrameSite(Site,ReturnCode,ReturnName) 
{
  if(isWhitespace(Site.value)) {
    alert("Outpatient site is a required field.");
    return;
  }
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;

  window.ReturnFunction="" ;
  for (var i=3; i < ClinicSessionSearchFrameSite.arguments.length; i++) {
    if (typeof(ClinicSessionSearchFrameSite.arguments[i]) == 'function') {
      window.ReturnFunction=ClinicSessionSearchFrameSite.arguments[i]
    }
  }

  PopUpFrameDoc.location.href = "../cgi-bin/outweb05.pbl?reportno=2&template=5" +
                              "&checksit=" + Site.value.replace(/ /g,"+") ;
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Insurance Code Search
//------------------------------------------------------------
function InsuranceCodeSearch(ReturnCode,ReturnName) {
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../cgi-bin/" +
                              "patweb87.pbl?reportno=6&template=4";
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : HCP Practice Search
//------------------------------------------------------------
function HCPPracSearchFrame(ReturnCode,ReturnName) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../cgi-bin/" +
                              "patweb99.pbl?reportno=5&template=4&norecord=8";
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : HCP Practice Search with Count
//------------------------------------------------------------
function HCPPracCntSearchFrame(ReturnCode,ReturnCount,ReturnName) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnCount=ReturnCount ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../cgi-bin/" +
                              "patweb99.pbl?reportno=5&template=5&norecord=8";
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Category Code Search Frame
//------------------------------------------------------------
function CategorySearchFrame(ReturnCode,ReturnName) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../cgi-bin/patweb91.pbl?reportno=1&template=005";
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Emergency Location Search Frame
//------------------------------------------------------------
function LocationSearchFrame(ReturnCode,ReturnName) 
{
  var PopUpFrameDoc = DFrameStart();
  switch (LocationSearchFrame.arguments.length) 
  {
    case 3: {
       PopUpFrameDoc.location.href = LocationSearchFrame.arguments[2]
       break;
    }
    default:{
       PopUpFrameDoc.location.href = "../cgi-bin/emrweb01.pbl?reportno=1" +
                                  "&template=6"
    }
  }

  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Drg Search Frame
//------------------------------------------------------------
function DrgSearchFrame(ReturnCode,ReturnName) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.ReturnFunction="" ;
  for (var i=2; i < DrgSearchFrame.arguments.length; i++) 
  {
    if (typeof(DrgSearchFrame.arguments[i]) == 'function') 
      window.ReturnFunction=DrgSearchFrame.arguments[i]; 
  }
  PopUpFrameDoc.location.href = "../lookups/DrgSearchFrame.html";
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Drg Search Frame expanded - returns all details
//------------------------------------------------------------
function DrgSearchFrameExpanded(ReturnCode,ReturnName,RetVerCode,RetVerName)
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.RetVerCode=RetVerCode ;
  window.RetVerName=RetVerName ;
  window.ReturnFunction="" ;
  for (var i=4; i < DrgSearchFrameExpanded.arguments.length; i++)
  {
    if (typeof(DrgSearchFrameExpanded.arguments[i]) == 'function')
      window.ReturnFunction=DrgSearchFrameExpanded.arguments[i];
  }
  PopUpFrameDoc.location.href = "../lookups/DrgSearchFrameExpanded.html";
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Domicile Search Frame
//------------------------------------------------------------
function DomicileSearchFrame(ReturnCode) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  PopUpFrameDoc.location.href = "../lookups/DomicileSearchFrame.html";
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Clinic Type Diagnosis Search Frame
//------------------------------------------------------------
function CtypediagSearchFrame(ReturnCode,ReturnName) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnFunction="";
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../lookups/CtypediagSearchFrame.html";
  SearchFrameShow();
}
//------------------------------------------------------------
// Function : Clinic Type procedure Search Frame
//------------------------------------------------------------
function CtypeprocSearchFrame(ReturnCode,ReturnName)
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnFunction="";
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../lookups/CtypeprocSearchFrame.html";
  SearchFrameShow();
}
//------------------------------------------------------------
// Function : Clinic Type problem Search Frame
//------------------------------------------------------------
function CtypeprobSearchFrame(ReturnCode,ReturnName)
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnFunction="";
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../lookups/CtypeprobSearchFrame.html";
  SearchFrameShow();
}

//------------------------------------------------------------------------
// Function : HCP Search Frame
//------------------------------------------------------------------------
function HCPSearchFrame(ReturnCode,ReturnName) 
{
  var PopUpFrameDoc = DFrameStart();
  SearchType="" ;
  window.ReturnFunction="" ;
  window.ReturnProv="" ;
  window.ReturnPrac="" ;
  window.ReturnDesc="" ;
  window.ReturnCntr="" ;
  for (var i=2; i < HCPSearchFrame.arguments.length; i++) 
  {
    if (typeof(HCPSearchFrame.arguments[i]) == 'function')
      window.ReturnFunction=HCPSearchFrame.arguments[i];
    else
      SearchType=HCPSearchFrame.arguments[i];
  }

  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../lookups/HCPSearchFrame"+SearchType+".html";
  SearchFrameShow();
}


//------------------------------------------------------------------------
// Function : HCP Search Frame All Details 
// (returns: hcp code,hcp name,hcp provno,prac code,prac name,prac count)
//------------------------------------------------------------------------
function HCPSearchFrameExpanded(ReturnCode,ReturnName,ReturnProv,ReturnPrac,ReturnDesc,ReturnCntr)
{
  var PopUpFrameDoc = DFrameStart();
  SearchType="" ;
  window.ReturnFunction="" ;
  window.ReturnProv="" ;
  window.ReturnPrac="" ;
  window.ReturnDesc="" ;
  window.ReturnCntr="" ;
  for (var i=6; i < HCPSearchFrameExpanded.arguments.length; i++) 
  {
    if (typeof(HCPSearchFrameExpanded.arguments[i]) == 'function')
      window.ReturnFunction=HCPSearchFrameExpanded.arguments[i];
    else
      SearchType=HCPSearchFrameExpanded.arguments[i];
  }

  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.ReturnProv=ReturnProv ;
  window.ReturnPrac=ReturnPrac ;
  window.ReturnDesc=ReturnDesc ;
  window.ReturnCntr=ReturnCntr ;
  PopUpFrameDoc.location.href = "../lookups/HCPSearchFrame"+SearchType+".html";
  SearchFrameShow();
}

//------------------------------------------------------------------------
// Function : GP HCP Search Frame
// (returns: hcp code,hcp name,hcp provno,prac code,prac name,prac count)
//------------------------------------------------------------------------
function GPHCPSearchFrame(ReturnCode,ReturnName,ReturnProv,ReturnPrac,ReturnDesc,ReturnCntr) 
{
  var PopUpFrameDoc = DFrameStart();
  SearchType="" ;
  window.ReturnFunction="" ;
  for (var i=6; i < GPHCPSearchFrame.arguments.length; i++) 
  {
    if (typeof(GPHCPSearchFrame.arguments[i]) == 'function')
      window.ReturnFunction=GPHCPSearchFrame.arguments[i];
    else
      SearchType=GPHCPSearchFrame.arguments[i];
  }

  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.ReturnProv=ReturnProv ;
  window.ReturnPrac=ReturnPrac ;
  window.ReturnDesc=ReturnDesc ;
  window.ReturnCntr=ReturnCntr ;
  PopUpFrameDoc.location.href = "../lookups/HCPSearchFrame"+SearchType+".html";
  SearchFrameShow();
}
//------------------------------------------------------------------------
// Function : GP HCP Search Frame
// (returns: hcp code,hcp name,hcp provno,prac code,prac name,prac count,fax)
//------------------------------------------------------------------------
function GPHCPSearchFrameFax(ReturnCode,ReturnName,ReturnProv,ReturnPrac,ReturnDesc,ReturnCntr,ReturnFax) 
{
  var PopUpFrameDoc = DFrameStart();
  SearchType="" ;
  window.ReturnFunction="" ;
  for (var i=7; i < GPHCPSearchFrameFax.arguments.length; i++) 
  {
    if (typeof(GPHCPSearchFrameFax.arguments[i]) == 'function')
      window.ReturnFunction=GPHCPSearchFrameFax.arguments[i];
    else
      SearchType=GPHCPSearchFrameFax.arguments[i];
  }

  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.ReturnProv=ReturnProv ;
  window.ReturnPrac=ReturnPrac ;
  window.ReturnDesc=ReturnDesc ;
  window.ReturnCntr=ReturnCntr ;
  window.ReturnFax=ReturnFax ;
  PopUpFrameDoc.location.href = "../lookups/HCPSearchFrame"+SearchType+".html";
  SearchFrameShow();
}


//------------------------------------------------------------------------
// Function : GP HCG Search Frame
// (returns: hcp code,hcp name,hcp provno,prac code,prac name,prac count)
//------------------------------------------------------------------------
function GPHCGSearchFrame(ReturnCode,ReturnName,ReturnProv,ReturnPrac,ReturnDesc,ReturnCntr) 
{
  var PopUpFrameDoc = DFrameStart();
  SearchType="" ;
  window.ReturnFunction="" ;
  for (var i=6; i < GPHCGSearchFrame.arguments.length; i++) 
  {
    if (typeof(GPHCGSearchFrame.arguments[i]) == 'function')
      window.ReturnFunction=GPHCGSearchFrame.arguments[i];
    else
      SearchType=GPHCGSearchFrame.arguments[i];
  }

  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.ReturnProv=ReturnProv ;
  window.ReturnPrac=ReturnPrac ;
  window.ReturnDesc=ReturnDesc ;
  window.ReturnCntr=ReturnCntr ;
  PopUpFrameDoc.location.href = "../lookups/HCGSearchFrame"+SearchType+".html";
  SearchFrameShow();
}
//------------------------------------------------------------------------
// Function : GP HCG Search Frame
// (returns: hcp code,hcp name,hcp provno,prac code,prac name,prac count)
//------------------------------------------------------------------------
function GPHCGSearchFrameFax(ReturnCode,ReturnName,ReturnProv,ReturnPrac,ReturnDesc,ReturnCntr,ReturnFax) 
{
  var PopUpFrameDoc = DFrameStart();
  SearchType="" ;
  window.ReturnFunction="" ;
  for (var i=7; i < GPHCGSearchFrameFax.arguments.length; i++) 
  {
    if (typeof(GPHCGSearchFrameFax.arguments[i]) == 'function')
      window.ReturnFunction=GPHCGSearchFrameFax.arguments[i];
    else
      SearchType=GPHCGSearchFrameFax.arguments[i];
  }

  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.ReturnProv=ReturnProv ;
  window.ReturnPrac=ReturnPrac ;
  window.ReturnDesc=ReturnDesc ;
  window.ReturnCntr=ReturnCntr ;
  window.ReturnFax=ReturnFax ;
  PopUpFrameDoc.location.href = "../lookups/HCGSearchFrame"+SearchType+".html";
  SearchFrameShow();
}

//------------------------------------------------------------------------
// Function : Expensive Theatre Items Search
//------------------------------------------------------------------------
function ExpItemSearchFrame(ReturnCode,ReturnName) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../lookups/ExpItemSearchFrame.html";
  SearchFrameShow();
}

//------------------------------------------------------------------------
// Function : Miscellaneous Charge Code Search
//------------------------------------------------------------------------
function MiscChargeSearchFrame(ReturnCode,ReturnName,MultHosp) 
{
  window.ReturnFunction="";
  for (var i=3; i < MiscChargeSearchFrame.arguments.length; i++) 
  {
    if (typeof(MiscChargeSearchFrame.arguments[i]) == 'function')
      ReturnFunction=MiscChargeSearchFrame.arguments[i];
  }
  var PopUpFrameDoc = DFrameStart();
  window.ReturnHosp="" ;
  if (MultHosp!=undefined) 
  {
    window.ReturnHosp=MultHosp ;
  }
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../lookups/MiscChargeSearchFrame.html";
  SearchFrameShow();
}

//------------------------------------------------------------------------
// Function : Default Miscellaneous Charge Code Search    * I SRF 33349
//------------------------------------------------------------------------
function DefMiscChargeSearchFrame(ReturnCode,ReturnName,MultHosp) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnHosp="" ;
  if (MultHosp!=undefined) 
  {
    window.ReturnHosp=MultHosp ;
  }
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../lookups/DefMiscChargeSearchFrame.html";
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Theatre Session Search Frame
//------------------------------------------------------------
function SessionSearchFrame(ReturnCode,ReturnName,ReturnTCode,ReturnTName) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.ReturnTCode=ReturnTCode ;
  window.ReturnTName=ReturnTName ;
  PopUpFrameDoc.location.href = "../lookups/SessionSearchFrame.html";
  SearchFrameShow();
}

//------------------------------------------------------------------------
// Function : Expensive Theatre Items Search
//------------------------------------------------------------------------
function ExpItemSearchFrame01(ReturnCode,ReturnName) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../lookups/ExpItemSearchFrame0.html";
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Theatre Equipment Search Frame
//------------------------------------------------------------
function EquipmentSearchFrame(ReturnCode,ReturnName) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  norecord=0;
  for (var i=2; i < EquipmentSearchFrame.arguments.length; i++) {
    norecord=EquipmentSearchFrame.arguments[i];
  }
  PopUpFrameDoc.location.href = "../cgi-bin/oprweb04.pbl?reportno=14&template=4" +
                              "&norecord=" + norecord;
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Theatre Tray Search Frame
//------------------------------------------------------------
function TraySearchFrame(returnCode,returnName) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=returnCode ;
  window.ReturnName=returnName ;
  norecord=0;
  for (var i=2; i < TraySearchFrame.arguments.length; i++) {
    norecord=TraySearchFrame.arguments[i];
  }
  PopUpFrameDoc.location.href = "../cgi-bin/oprweb04.pbl?reportno=5&template=4" +
                              "&norecord=" + norecord;
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Theatre Item Search Frame
//------------------------------------------------------------
function TheatItemSearchFrame(ReturnCode,ReturnName) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  norecord=0;
  for (var i=2; i < TheatItemSearchFrame.arguments.length; i++) {
    norecord=TheatItemSearchFrame.arguments[i];
  }
  PopUpFrameDoc.location.href = "../cgi-bin/oprweb04.pbl?reportno=4&template=4" +
                              "&norecord=" + norecord;
  SearchFrameShow();
}

//------------------------------------------------------------------------
// Function : Theatre Items Search
//------------------------------------------------------------------------
function TheItemSearchFrame(ReturnCode,ReturnName) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../lookups/TheItemSearchFrame.html";
  SearchFrameShow();
}

//------------------------------------------------------------------------
// Function : Theatre Items Search Frame
//------------------------------------------------------------------------
function ItemSearchFrame(ReturnCode,ReturnName) 
{
  var PopUpFrameDoc = DFrameStart();
  SearchType="" ;
  window.ReturnFunction="" ;
  for (var i=2; i < ItemSearchFrame.arguments.length; i++) 
  {
    if (typeof(ItemSearchFrame.arguments[i]) == 'function')
      window.ReturnFunction=ItemSearchFrame.arguments[i];
    else
      SearchType=ItemSearchFrame.arguments[i];
  }
 
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../lookups/ItemSearchFrame"+SearchType+".html";
  SearchFrameShow();
}

//-------------------------------------------------------------------------
// Function : 2nd Gp Search Frame has extra code so that selection list
//            is populated correctly.
//            Should'nt need to do it this way!!!! Remember if you delete
//            this function then go and delete GpSearchFrameEmr.html
//            & patweb9906010.html
//-------------------------------------------------------------------------
function GpSearchFrameEmr(ReturnCode,ReturnName,ReturnCode2) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.ReturnCode2=ReturnCode2 ;
  PopUpFrameDoc.location.href = "../lookups/GpSearchFrameEmr.html";
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Health Fund Search Frame
//------------------------------------------------------------
function HealthFundSearchFrame(ReturnCode,ReturnName,ReturnTCode,ReturnTName) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.ReturnTCode=ReturnTCode ;
  window.ReturnTName=ReturnTName ;
  window.ReturnFunction="" ;
  if (HealthFundSearchFrame.arguments.length > 3) 
  {
    window.ReturnFunction=HealthFundSearchFrame.arguments[4]
  }
  PopUpFrameDoc.location.href = "../lookups/HealthFundSearchFrame.html";
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Health Fund Search Frame
//------------------------------------------------------------
function HealthFundSearchFrame1(ReturnCode,ReturnName,ReturnTCode,ReturnTName,Returnhfband,ReturnTtype,ReturnFunction)
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.ReturnTCode=ReturnTCode ;
  window.ReturnTName=ReturnTName ;
  window.Returnhfband=Returnhfband;
  window.ReturnTtype=ReturnTtype;
  window.ReturnFunction=ReturnFunction;
  if (HealthFundSearchFrame1.arguments.length > 5)
  {
    window.ReturnFunction=HealthFundSearchFrame1.arguments[6]
  }
  PopUpFrameDoc.location.href = "../lookups/HealthFundSearchFrame1.html";
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Health Fund Search Frame (No Health Fund Table)
//------------------------------------------------------------
function HFundSearchFrame(ReturnCode,ReturnName) 
{
  window.ReturnFunction="" ;
  for (var i=2; i < HFundSearchFrame.arguments.length; i++) {
    if (typeof(HFundSearchFrame.arguments[i]) == 'function')
      ReturnFunction=HFundSearchFrame.arguments[i];
  }
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../lookups/HFundSearchFrame.html";
  SearchFrameShow();
}




//------------------------------------------------------------
// Function : Health Fund Table Search Frame
//------------------------------------------------------------
function HFundTableSearchFrame(ReturnCode,ReturnName,ReturnTCode,ReturnTName) 
{
  if (isWhitespace(ReturnCode.value)) 
  {
    alert(HealthFundDescription + "is a required field.\n Please enter it now.");
    return;
  }
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.ReturnTCode=ReturnTCode ;
  window.ReturnTName=ReturnTName ;
  window.ReturnFunction="" ;
  PopUpFrameDoc.location.href = "../lookups/HFundTableSearchFrame.html";
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : MBS Item Search Frame
//------------------------------------------------------------
function MbsSearchFrame(ReturnCode,ReturnName,EffDate) 
{
  window.ReturnFunction="";
  for (var i=2; i < MbsSearchFrame.arguments.length; i++) 
  {
    if (typeof(MbsSearchFrame.arguments[i]) == 'function')
      ReturnFunction=MbsSearchFrame.arguments[i];
  }
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;

  if(EffDate!=undefined){
    window.EffDate=EffDate ;
  }

  PopUpFrameDoc.location.href = "../lookups/MbsSearchFrame.html";
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : MBS Item New File Search Frame (newitemn)
//------------------------------------------------------------
function MbsSearchNewFileFrame(ReturnCode,ReturnName) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../lookups/MbsSearchNFFrame.html";
  SearchFrameShow();
}









//------------------------------------------------------------
// Function : ICD9 Disease Search Frame
//------------------------------------------------------------
function Icd9DisSrchFrame(ReturnCode,ReturnName) 
{
  window.ReturnFunction="" ;
  for (var i=2; i < Icd9DisSrchFrame.arguments.length; i++) 
  {
    if (typeof(Icd9DisSrchFrame.arguments[i]) == 'function')
      window.ReturnFunction=Icd9DisSrchFrame.arguments[i];
    else
      window.ReturnICD9=Icd9DisSrchFrame.arguments[i];
  }
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../lookups/Icd9DisSrchFrame.html";
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : ICD9 Procedure Search Frame
//------------------------------------------------------------
function Icd9ProSrchFrame(ReturnCode,ReturnName) 
{
  window.ReturnFunction="" ;
  for (var i=2; i < Icd9ProSrchFrame.arguments.length; i++) 
  {
    if (typeof(Icd9ProSrchFrame.arguments[i]) == 'function')
      window.ReturnFunction=Icd9ProSrchFrame.arguments[i];
    else
      window.ReturnICD9=Icd9ProSrchFrame.arguments[i];
  }
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../lookups/Icd9ProSrchFrame.html";
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : ICD10 and ICD9 Disease Search Frame
//------------------------------------------------------------
function Icd10And9DisSrchFrame(ReturnCode,ReturnName)
{
  window.ReturnFunction="" ;
  for (var i=2; i < Icd10And9DisSrchFrame.arguments.length; i++) 
  {
    if (typeof(Icd10And9DisSrchFrame.arguments[i]) == 'function')
      window.ReturnFunction=Icd10And9DisSrchFrame.arguments[i];
    else 
      window.ReturnICD9=Icd10And9DisSrchFrame.arguments[i];
  }
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../lookups/Icd10And9DisSrchFrame.html";
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : ICD10 and ICD9 Procedure Search Frame
//------------------------------------------------------------
function Icd10And9ProSrchFrame(ReturnCode,ReturnName) 
{
  window.ReturnFunction="" ;
  for (var i=2; i < Icd10And9ProSrchFrame.arguments.length; i++) 
  {
    if (typeof(Icd10And9ProSrchFrame.arguments[i]) == 'function')
      window.ReturnFunction=Icd10And9ProSrchFrame.arguments[i];
    else
      window.ReturnICD9=Icd10And9ProSrchFrame.arguments[i];
  }
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../lookups/Icd10And9ProSrchFrame.html"
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : ICD10 Disease Search Frame
//------------------------------------------------------------
function Icd10DisSearchFrame(ReturnCode,ReturnName) 
{
  window.ReturnFunction="" ;
  for (var i=2; i < Icd10DisSearchFrame.arguments.length; i++) 
  {
    if (typeof(Icd10DisSearchFrame.arguments[i]) == 'function')
      window.ReturnFunction=Icd10DisSearchFrame.arguments[i];
    else
      window.ReturnICD9=Icd10DisSearchFrame.arguments[i]; 
  }
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../lookups/Icd10DisSearchFrame.html";
  SearchFrameShow()
}

//------------------------------------------------------------
// Function : ICD10 Procedure Search Frame
//------------------------------------------------------------
function Icd10ProSearchFrame(ReturnCode,ReturnName) {
  window.ReturnFunction="" ;
  for (var i=2; i < Icd10ProSearchFrame.arguments.length; i++) 
  {
    if (typeof(Icd10ProSearchFrame.arguments[i]) == 'function')
      window.ReturnFunction=Icd10ProSearchFrame.arguments[i];
    else
      window.ReturnICD9=Icd10ProSearchFrame.arguments[i]; 
  }
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../lookups/Icd10ProSearchFrame.html";
  SearchFrameShow();
}

//-------------------------------------------------------------------
// Function : Custom ICD10 Disease Search Frame for Medical Records
//-------------------------------------------------------------------
function Icd10DisSrchMedRec(ReturnCode,DischDte) 
{
  window.ReturnFunction="" ;
  if (Icd10DisSrchMedRec.arguments.length > 2)
    window.ReturnFunction=Icd10DisSrchMedRec.arguments[2];
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode;
  window.DischDte=DischDte;
  PopUpFrameDoc.location.href = "../lookups/Icd10DisSrchMedFrame.html";
  SearchFrameShow();
}

//-------------------------------------------------------------------
// Function : Custom ICD10 Procedure Search Frame for Medical Records
//-------------------------------------------------------------------
function Icd10ProSrchMedRec(ReturnCode,DischDte) 
{
  window.ReturnFunction="" ;
  if (Icd10ProSrchMedRec.arguments.length > 2)
    window.ReturnFunction=Icd10ProSrchMedRec.arguments[2];
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode;
  window.DischDte=DischDte;
  PopUpFrameDoc.location.href = "../lookups/Icd10ProSrchMedFrame.html";
  SearchFrameShow();
}








//------------------------------------------------------------
// Function : Patient Search Frame
//------------------------------------------------------------
function PatientSearchFrame(ReturnName,ReturnUR,ReturnVisit) 
{
  ReturnFunction="" ;
  SearchType="" ;
  for (var i=3; i < PatientSearchFrame.arguments.length; i++) 
  {
    if (typeof(PatientSearchFrame.arguments[i]) == 'function')
      ReturnFunction=PatientSearchFrame.arguments[i];
    else
      SearchType=PatientSearchFrame.arguments[i].value;
  }
  window.ReturnName=ReturnName ;
  window.ReturnUR=ReturnUR ;
  window.ReturnVisit=ReturnVisit ;
  var PopUpFrameDoc = DFrameStart();
  PopUpFrameDoc.location.href = "../lookups/PatientSearchFrame"+SearchType+".html";
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Debtor Search Frame
//------------------------------------------------------------
function DebtorPPSearchFrame(ReturnName,ReturnUR) 
{
  ReturnFunction="" ;
  for (var i=3; i < DebtorPPSearchFrame.arguments.length; i++) 
  {
    if (typeof(DebtorPPSearchFrame.arguments[i]) == 'function')
      ReturnFunction=DebtorPPSearchFrame.arguments[i];
  }
  window.ReturnName=ReturnName ;
  window.ReturnUR=ReturnUR ;
  var PopUpFrameDoc = DFrameStart();
  PopUpFrameDoc.location.href = "priweb01.pbl?reportno=4&template=2";
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Patient Search
//------------------------------------------------------------
function PatientSearch(LinkServer,LinkReport,LinkTemplate) {
  parent.menu.LinkServer=LinkServer ;
  parent.menu.LinkReport=LinkReport ;
  parent.menu.LinkTemplate=LinkTemplate ;
  location.href="../lookups/PatientSearch.html"
}

//------------------------------------------------------------
// Function : Waiting List Procedure Search Frame
//------------------------------------------------------------
function WaitProSearchFrame(ReturnCode,ReturnName,ReturnLos,ReturnGroup,
                            ReturnOpTime,ReturnPriority) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.ReturnLos=ReturnLos ;
  window.ReturnGroup=ReturnGroup ;
  if (ReturnOpTime!=undefined) {
    window.ReturnOpTime=ReturnOpTime ;
  }
  if(ReturnPriority!=undefined) {
    window.ReturnPriority=ReturnPriority;
  }
  PopUpFrameDoc.location.href = "../lookups/WaitProSearchFrame.html";
  SearchFrameShow();
}

//-------------------------------------------------------------------
// Function : Waiting List Procedure Search Frame For Specific Unit
//-------------------------------------------------------------------
function WaitProUnitSearchFrame(ReturnCode,ReturnName,ReturnLos,ReturnGroup,ReturnUnit) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.ReturnLos=ReturnLos ;
  window.ReturnGroup=ReturnGroup ;
//  window.ReturnUnit=ReturnUnit;

  ReturnFunction="" ;
  for (var i=5; i < WaitProUnitSearchFrame.arguments.length; i++) {
    if (typeof(WaitProUnitSearchFrame.arguments[i]) == 'function') {
      ReturnFunction=WaitProUnitSearchFrame.arguments[i] }
    }

  PopUpFrameDoc.location.href = "../lookups/WaitProUnitSearchFrame.html";
  SearchFrameShow();
}

//-------------------------------------------------------------------
// Function : Waiting List Procedure Search Frame for all units
//-------------------------------------------------------------------
function WaitProNoUnitSearchFrame(ReturnCode,ReturnName,ReturnLos,ReturnGroup) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.ReturnLos=ReturnLos ;
  window.ReturnGroup=ReturnGroup ;
  PopUpFrameDoc.location.href = "../lookups/WaitProNoUnitSearchFrame.html";
  SearchFrameShow();
}

//-------------------------------------------------------------------
// Function : Waiting List Procedure Search Frame for all units - Keyword
//-------------------------------------------------------------------
function WaitProNoUnitSearchFrameK(ReturnCode,ReturnName,ReturnLos,
                                   ReturnGroup,ReturnOpTime,ReturnPriority)
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.ReturnLos=ReturnLos ;
  window.ReturnGroup=ReturnGroup ;

  if (ReturnOpTime!=undefined) {
    window.ReturnOpTime=ReturnOpTime ;
  }
  if(ReturnPriority!=undefined) {
    window.ReturnPriority=ReturnPriority;
  }
  ReturnFunction="" ;
  for (var i=6; i < WaitProNoUnitSearchFrameK.arguments.length; i++) {
    if (typeof(WaitProNoUnitSearchFrameK.arguments[i]) == 'function') {
      ReturnFunction=WaitProNoUnitSearchFrameK.arguments[i] }
    }
  
  PopUpFrameDoc.location.href = "../lookups/WaitProNoUnitSearchFrameK.html";
  SearchFrameShow();
}
//-------------------------------------------------------------------
// Function : Waiting List Procedure Search Frame for all units - Keyword
//            and also returns wprhat
//-------------------------------------------------------------------
function WaitProKeywordSearch(ReturnCode,ReturnName,ReturnLos,ReturnGroup,ReturnWprhat)
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.ReturnLos=ReturnLos ;
  window.ReturnGroup=ReturnGroup ;
  window.ReturnWprhat=ReturnWprhat ;
  PopUpFrameDoc.location.href = "../lookups/WaitProNoUnitSearchFrameK.html";
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Waiting List Consultant Search Frame
//------------------------------------------------------------
function WaitConSearchFrameTMD(ReturnCode,ReturnName,ReturnUnit)
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.ReturnUnit=ReturnUnit ;
  PopUpFrameDoc.location.href = "../lookups/WaitConSearchFrameTMD.html";
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Waiting List Consultant Search Frame
//------------------------------------------------------------
function WaitConSearchFrame(ReturnCode,ReturnName,ReturnUnit) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.ReturnUnit=ReturnUnit ;
  PopUpFrameDoc.location.href = "../lookups/WaitConSearchFrame.html";
  SearchFrameShow();
}

function LookupUpdateParent(Code,Name) 
{
  if (parent.Code != undefined){
    if (parent.Code.type == "textarea") { 
      parent.Code.value += Code + "\n";
    }
    else { 
      parent.Code.value = Code;
    }
  }

  if (parent.Name != null){
    if (parent.Name.type == "textarea") { 
      parent.Name.value += Name + "\n";
    }
    else if (parent.Name.type.indexOf("select") != -1) {
      var objOption = document.createElement("option");
      objOption.text = Name;
      objOption.value = Code;
      if (parent.Name.hasChildNodes()) {
        // clear any existing option nodes (child)
        while (parent.Name.hasChildNodes()) {
	  parent.Name.removeChild(parent.Name.lastChild);
        }
      }
      parent.Name.add(objOption);
    }
    else { 
      parent.Name.value = Name;
    }
  }
  
  // added this bit to return focus
  if (parent.Code != undefined){
    if (parent.focusObj == undefined) { }
    else { parent.focusObj.focus(); }
  }

  DFrameExit();
}

function LookupUpdateCleanup()
{
  // This function gets called after LookupUpdateParent().
  // The page that calls LookupPage() should define LookupCleanup() for any
  // necessary cleanup tasks.
  if (parent.LookupCleanup) {
    parent.LookupCleanup();
  }
  return true;
}

function LookupUpdateStr() 
{
   parent.Code.value="";
   if (parent.Name.type=="textarea"){
       parent.Name.value+=UpdateString.value + "\n";
   } else {
       parent.Name.value=UpdateString.value;
   }
   DFrameExit();
}

function LookupCheckItem(check) 
{
  if (check.checked) 
  {
    UpdateString.value+=check.value+", "; 
  }
  else 
  {
    NewString=UpdateString.value.replace(check.value+", ","");
    UpdateString.value=NewString;
  }
}

//------------------------------------------------------------
// Function : SubmitForm Post Add Formaction in a hidden window
//------------------------------------------------------------
function SubmitFormNew() 
{
  DFrameClear();
  if (validateMandatory(AddForm)) 
  {
    AddForm.target="PopUpFrame1";
    AddForm.submit();
  }
}

function SubmitForm() 
{
  DFrameClear();
  if (validateMandatory(AddForm)) 
  {
    AddForm.target="PopUpFrame";
    AddForm.submit();
  }
}

function SubmitHidden(theForm) 
{
  DFrameClear();
  if (validateMandatory(theForm)) 
  {
    theForm.target="PopUpFrame";
    theForm.submit();
  }
}

function SubmitHiddenNew(theForm) 
{
  DFrameClear();
  if (validateMandatory(theForm)) 
  {
    theForm.target="PopUpFrame1";
    theForm.submit();
  }
}

//------------------------------------------------------------
// Function : setFormactn  Post Update Delete Formaction
//------------------------------------------------------------
function setFormactn(type) 
{
  document.UpdateForm.updttype.value=type;
  if (type=="U") 
  {
    if (validateMandatory(UpdateForm)) 
       document.UpdateForm.submit(); 
  }
  else 
  {
    if (type=="D") 
    {
       ans=confirm("Are you sure you want to Delete ?");
       if (ans) 
         document.UpdateForm.submit()
    }
    else 
       document.UpdateForm.submit(); 
  }
} 

//----------------------------------------------------------------------------
// Validate Medicare Number
//----------------------------------------------------------------------------
function checkMedicare(theField,validTo) 
{
  if (!checkMedicareSwipe(theField,validTo)) 
  {
      FocusDelay(theField);
      return false;
  }
  LenMedi=theField.value.length

  if (theField.value == '0000000000')
  { 
    window.setTimeout(function () { ResetOnBlurHandler(theField); }, 0);
    alert("Medicare number must not be zeros");
    FocusDelay(theField);
    return false; 
  }

  if (theField.value!=parseInt(theField.value) && trim(theField.value)!="") {
    window.setTimeout(function () { ResetOnBlurHandler(theField); }, 0);
    alert("Invalid Medicare Number");
    FocusDelay(theField);
    return false;
  }

  switch(LenMedi) 
  {
    case 0:
      return true;
    case 10:
      num1=parseInt(theField.value.substr(0,1),10)*1;
      num2=parseInt(theField.value.substr(1,1),10)*3;
      num3=parseInt(theField.value.substr(2,1),10)*7;
      num4=parseInt(theField.value.substr(3,1),10)*9;
      num5=parseInt(theField.value.substr(4,1),10)*1;
      num6=parseInt(theField.value.substr(5,1),10)*3;
      num7=parseInt(theField.value.substr(6,1),10)*7;
      num8=parseInt(theField.value.substr(7,1),10)*9;
      num9=parseInt(theField.value.substr(8,1),10);
      total=(num1+num2+num3+num4+num5+num6+num7+num8)
      divided=total/10
      divided=parseInt(divided,10);
      multiplied=divided*10
      diff=total-multiplied
      if(diff==num9) {
        return true;
      }
      else {
        window.setTimeout(function () { ResetOnBlurHandler(theField); }, 0);
        alert("Invalid Medicare Number")
        FocusDelay(theField);
        return false;
      }
    default:
      window.setTimeout(function () { ResetOnBlurHandler(theField); }, 0);
      alert("Medicare Number must be 10 numbers in length");
      FocusDelay(theField);
      return false;
  }
}

function checkIRN(IRNnumber) {
  var bAllowZeroIRN = VariableNameExists('AllowZeroMedicareIRN') ? AllowZeroMedicareIRN : false;

  if (trim(IRNnumber.value)=="") { //blank
     return true;
  }

  if (trim(IRNnumber.value) != trim(parseInt(IRNnumber.value))) {
    ResetOnBlurHandler(IRNnumber);
    alert("Invalid Medicare Reference Number");
    FocusDelay(IRNnumber);
    return false;
  }

  if (bAllowZeroIRN) {
    if (!(parseInt(IRNnumber.value) >= 0 && parseInt(IRNnumber.value) <= 9)) {
      ResetOnBlurHandler(IRNnumber);
      alert("Invalid Medicare Reference Number");
      FocusDelay(IRNnumber);
      return false;
    }
  }
  else {
    if (!(parseInt(IRNnumber.value) > 0 && parseInt(IRNnumber.value) <= 9)) {
      ResetOnBlurHandler(IRNnumber);
      alert("Invalid Medicare Reference Number");
      FocusDelay(IRNnumber);
      return false;
    }
  } 
}

function SetImage(triagecode) 
{
  var undefined;
  if (triagecode === undefined) 
    return (document.write("<img src='../images/triage0.gif'>"));
  else 
    return (document.write("<img src='../images/triage",triagecode,".gif'>"));
}
//======================================================================
// Standard Date Select View Functions
//  SelectView(ViewType)   0=by day 1 =by week 2=by month
//======================================================================
function SelectView(ViewType) 
{
  document.SelectPeriod.viewtype.value=ViewType
  if (document.SelectPeriod.lastdate!=undefined) {
    document.SelectPeriod.lastdate.selectedIndex = -1;
    document.SelectPeriod.lastdate.value="";
  }
  
  if (document.SelectPeriod.vyearmth!=undefined) {
    document.SelectPeriod.vyearmth.selectedIndex = -1;
    document.SelectPeriod.vyearmth.value="";
  }
  
  document.SelectPeriod.submit();
}

function SelectNextPeriod() 
{
 if (document.SelectPeriod.viewtype.value==0) {
   SelectNextDay() }
 if (document.SelectPeriod.viewtype.value==1) {
   SelectNextWeek() }
 if (document.SelectPeriod.viewtype.value==2) {
   SelectNextMonth() }
}

function SelectLastPeriod() 
{
 if (document.SelectPeriod.viewtype.value==0) {
   SelectLastDay() }
 if (document.SelectPeriod.viewtype.value==1) {
   SelectLastWeek() }
 if (document.SelectPeriod.viewtype.value==2) {
   SelectLastMonth() }
}

function SelectLastDay() 
{
  var num = document.SelectPeriod.lastdate.selectedIndex;
  var el = document.SelectPeriod.lastdate;
  if(num != 0) {
   document.SelectPeriod.lastdate.selectedIndex--;
  }else {
    var year = el[num].value.substring(0,4);
    var month = el[num].value.substring(4,6);
    var day = "24";
    
    month--;

    if(month == -1) {
      month = '01';
    }else if ( month == 0) {
      month = '12';
      year--;
    }
  
    if(month.toString().replace(/ /g,'').length == 1) {
       month = "0"+month;
    }
    //new Option(text, value, defaultSelected, selected)
    var tmp = GetMonthName(month);
    document.SelectPeriod.lastdate.options[num] = 
        new Option("Week of "+day+" "+tmp+" "+year,
                    year+""+month+""+day);
    document.SelectPeriod.lastdate.selectedIndex = num;
  }
  document.SelectPeriod.submit();
}

function SelectNextDay() 
{
var num = document.SelectPeriod.lastdate.selectedIndex;
  var el = document.SelectPeriod.lastdate;

  if(typeof el[num+1] !='undefined' && el[num+1] != null) {
   document.SelectPeriod.lastdate.selectedIndex++;
  }else {
    var year = el[num].value.substring(0,4);
    var month = el[num].value.substring(4,6);
    var day = "01";
     
    month = month % 12;
    month++;

    if(month == 1) {
      year++;
    }

    if(month.toString().replace(/ /g,'').length == 1) {
       month = "0"+month;
    }
    var tmp = GetMonthName(month);
    document.SelectPeriod.lastdate.options[num+2] = 
      new Option("Week of "+day+" "+tmp+" "+year,
                   year+""+month+""+day);
    document.SelectPeriod.lastdate.selectedIndex = num+2;
  }

  document.SelectPeriod.submit();
}

function SelectLastWeek() 
{
  document.SelectPeriod.lastdate.selectedIndex--;
  document.SelectPeriod.submit();
}

function SelectNextWeek() 
{
  document.SelectPeriod.lastdate.selectedIndex++;
  document.SelectPeriod.submit();
}

function SelectLastWeek5()
{
  document.SelectPeriod.lastdate.selectedIndex--;
  document.SelectPeriod.submit();
}

function SelectNextWeek5()
{
  document.SelectPeriod.lastdate.selectedIndex++;
  document.SelectPeriod.submit();
}

function SelectLastMonth() 
{
  document.SelectPeriod.vyearmth.selectedIndex--;
  document.SelectPeriod.submit();
}

function SelectNextMonth() 
{
  document.SelectPeriod.vyearmth.selectedIndex++;
  document.SelectPeriod.submit();
}

//============================================================
// HospitalName - Write Hospital Name to Document
//============================================================
function HospitalName() 
{
  document.write(HospitalNameStr);
}

function hospitalNameToString()
{
 return HospitalNameStr;
}

//============================================================
// MenuLinkTo - Navigation via Select Lists
//============================================================
function MenuOver(ev, SelectItem) 
{
  var evt = ev ? ev : window.event;
  var el = evt.srcElement ? evt.srcElement : evt.target;

  if (el != undefined) {
    if (el.tagName != "OPTION") {
      if (el.selectedIndex != 0) {
        el.selectedIndex = 0;
      }
    }
  }
  else {
    ev.selectedIndex = 0;  // ev = SelectItem
  }
}

function MenuLinkToImint(SelectItem) 
{
  var agentStr = window.navigator.userAgent;

  SelectOption = SelectItem.split("|");
  if (SelectOption.length>1) 
  {
  switch (SelectOption[1]) {
   case "top":     getTop().location.href=SelectOption[0];         break;
   case "content": getTop().content.location.href=SelectOption[0]; break;
   case "menu":    getTop().menu.location.href=SelectOption[0];    break;
   case "maxcare": LinkToCIS(SelectOption);                 break;
   case "fullscreen": {
        open(SelectOption[0],"",
        "fullscreen=yes,status=no,titlebar=no,resizable=no,toolbar=no,menubar=no,scrollbar=0");
        break; }

   case "fullscreen1": {
        var width=1024;
        var height=768;

        if (agentStr.indexOf("Chrome") != -1)  // Chrome, Edge, Opera
        {
          width=1040;
          height=840;
        }
        var win=open(SelectOption[0],"",
        "width="+width+",height="+height+",status=no,toolbar=no,titlebar=no,menubar=no,scrollbar=0");
        win.moveTo(-3,-3);
        
        break; }
   }
  }
}

function MenuLinkTo(SelectItem) 
{
  var agentStr = window.navigator.userAgent;

  ResetTimeOut();
  for (var i = 0; i < SelectItem.length; i++) 
  {
    if (SelectItem.options[i].selected == true) 
    {
      SelectOption=SelectItem.options[i].value.split("|") 
    }  
  }
  if (top.saveReturnPath != null ) top.saveReturnPath=false;
  if (SelectOption.length>2) {
    top.saveReturnPath=true;
    SelectOption[0]=top.getReturnPath(SelectOption[0]);
  }
  if (SelectOption.length>1) 
  {
    switch (SelectOption[1]) 
    {
     case "top":     getTop().location.href=SelectOption[0];         break;
     case "content": getTop().content.location.href=SelectOption[0]; break;
     case "cookiecontent": getTop().content.location.href=SelectOption[0];
                           tref = SelectItem.value.split("template=")[1];
                           tref = tref.split("&")[0];
                           tref = tref.split("|")[0];
                           tref = "fromtemplate="+tref + "; path/"
                           document.cookie=tref; break;
     case "menu":    getTop().menu.location.href=SelectOption[0];    break;
     case "maxcare": LinkToCIS(SelectOption);                 break;
     case "fullscreen": {
        open(SelectOption[0],"",
        "fullscreen=yes,status=no,titlebar=no,resizable=no,toolbar=no,menubar=no,scrollbar=0");
        break; }

     case "fullscreen1": {
        var width=1024;
        var height=768;

        if (agentStr.indexOf("Chrome") != -1)  // Chrome, Edge, Opera
        {
          width=1040;
          height=840;
        }
        var win=open(SelectOption[0],"",
        "width="+width+",height="+height+",status=no,toolbar=no,titlebar=no,menubar=no,scrollbar=0");
        win.moveTo(-3,-3);
        
        break; }
     case "fullscreen2": {
        var width=1024;
        var height=768;

        if (agentStr.indexOf("Chrome") != -1)  // Chrome, Edge, Opera
        {
          width=1040;
          height=840;
        }
        var win=open(SelectOption[0],"",
        "width="+width+",height="+height+",resizable=yes,toolbar=yes,titlebar=yes");
        break; }
     case "fullscreen3": {
        var width=1440;
        var height=870;

        if (agentStr.indexOf("Chrome") != -1)  // Chrome, Edge, Opera
        {
          width=1460;
          height=945;
        }
        var win=open(SelectOption[0],"",
        "width="+width+",height="+height+",status=no,toolbar=no,titlebar=no,menubar=no,scrollbar=0");
        win.moveTo(-3,-3);
        break; }
     case "fullscreen4": {
        var width=1280;
        var height=748;

        if (agentStr.indexOf("Chrome") != -1)  // Chrome, Edge, Opera
        {
          width=1290;
          height=830;
        }
        var win=open(SelectOption[0],"",
        "width="+width+",height="+height+",resizable=yes,status=no,toolbar=no,titlebar=no,menubar=no,scrollbar=0");
        win.moveTo(-3,-3);
        break; }
     case "fullscreen5": {
        var win=open(SelectOption[0],"",
        "fullscreen=no,status=yes,titlebar=yes,resizable=yes,toolbar=yes,menubar=yes,scrollbar=0");
        break; }
     case "fullscreen6": {
        var win=open(SelectOption[0],"_blank",
        "fullscreen=yes,status=no,titlebar=yes,resizable=yes,toolbar=yes,menubar=yes,scrollbar=0");
        break; }
     case "newtab": {
        var win=open(SelectOption[0]);
        break; }
     case "emergencymenu": {
        getTop().menu.EmergencyFrameLink(SelectOption[0],0,0,1008,521)
        break;
      }
     case "fullscreen3SR": {
        var width=1440;
        var height=870;

        if (agentStr.indexOf("Chrome") != -1)  // Chrome, Edge, Opera
        {
          width=1460;
          height=945;
        }
        var win=open(SelectOption[0],"",
        "width="+width+",height="+height+",status=no,toolbar=no,titlebar=no,menubar=no,scrollbars=1,resizable=yes");
        win.moveTo(-3,-3);
        break; }
    }
  }
}

function LinkTo(LinkStr) 
{
  SelectOption=LinkStr.split("|")
  if (SelectOption.length>1) 
  {
    switch (SelectOption[1]) 
    {
     case "maxcare": LinkToCIS(SelectOption);                 break;
     case "fullscreen": {
        open(SelectOption[0],"",
        "status=yes,fullscreen=yes,toolbar=yes,menubar=yes,scrollbar=0");
        break; }
    }
  }
}

//------------------------------------------------------------
// Get a Cookie Value
//------------------------------------------------------------
function GetCookieData(fieldName) 
{
  var pos = document.cookie.indexOf(fieldName + "=");
  if (pos == -1) { return("unknown") }
  else { var start=pos + fieldName.length + 1;
      var end = document.cookie.indexOf(";",start);
      if (end == -1) { end= document.cookie.length }
      return(unescape(document.cookie.substring(start,end))) }
}

function SetReturnPathCookie() 
{
  document.cookie = "ReturnPath=" + escape(location.href) + ";";
}

function fnReturnPath() 
{
  ReturnPath=GetCookieData("ReturnPath");
  if (isWhitespace(ReturnPath) || ReturnPath=="unknown")
    history.back();
  else 
    location.href=ReturnPath;
}

//------------------------------------------------------------
// Server Documentattion - Displays Server Info in Content Frame
//------------------------------------------------------------
function SupportDoc() {
 win=parent.content;
 if (win.PopUpScreen!=undefined) {
   if (win.PopUpScreen.style.display!="none") {
     if (parent.content.PopUpFrame.document.location.href.match(/lookups/)) {
       alert("This lookup page and does not have server documentation!" );
       return;
     } else {
       win=parent.content.PopUpFrame; 
     } 
   }
 } 
 else { 
   return; 
 }
 // If currently on home page with no parent module
 try{
   w = win.TemplateFile.content;
 }
 catch(e){
    alert("No documentation is available for this page. \n"+
          "Please choose a menu option before viewing documentation");
    return false;
 }
 url = "../../doc/" + win.TemplateFile.content.substring(0,10) + ".html"; 
 Server_Doc=window.open(url,"Server_Doc",
 "left=10,top=10,width=760,height=440,resizable=yes" +
 ",scrollbars=yes,status=yes,toolbar=yes,menubar=yes");
}

//------------------------------------------------------------
// ContentHelp - Help for IBA Server Program in Content Frame
//------------------------------------------------------------
function ContentHelp() 
{
  Help=window.open("../../newhelp/HelpIndex.htm","Help",
  "left=10,top=10,width=790,height=590,resizable=yes" +
  ",scrollbars=yes,status=yes,toolbar=yes,menubar=yes");
}

//------------------------------------------------------------
// SupportMail - Log a e-mail Support Problem
//------------------------------------------------------------
function SupportMail() {
  window.open("../../html/ErrorReport.html", "ErrorWindow",
      "top=10,left=10,width=600,height=500,menubar=no,status=no,scrollbar=no")
}

//------------------------------------------------------------
// SupportInformation - Display Support Information Alert
//------------------------------------------------------------
function SupportInformation() {
  // first find the content frame 
  var contentFrame = getTop().frames['content'].document;
  var context      = contentFrame;

  // find the PopUpScreen 
  var PopUpScreen = contentFrame.getElementById('PopUpScreen');

  if (PopUpScreen)
  {
    if (PopUpScreen.display != "none" && PopUpScreen.style.display != "none")
    {
      var PopUpFrame = ibaGetIframeDoc('PopUpFrame',contentFrame);
      if (PopUpFrame)
      {
        context = PopUpFrame;

        if (context.location.href.match('/lookups/')) 
        {
          alert("Search HTML     \t : " + context.location.pathname + "\n" )
          return 
        }
      }
    }
  }

  var ProgramID      = getMetaContents('ServerID',context);
  var ProgramName    = getMetaContents('ServerName',context);
  var ProgramVersion = getMetaContents('ServerVersion',context);
  var ProgramFile    = getMetaContents('TemplateFile',context);
  var TemplateVer    = getMetaContents('TemplateVersion',context);
  var TemplateHome   = getMetaContents('TemplateHome',context);
  var CrossBrowser   = getMetaContents('CrossBrowser',context);

  if (!IEBrowser) {
    GetCSSIncludeInfo(context);
    GetScriptIncludeInfo(context);

    ProcessIncludeInfo(ProgramID,ProgramName,ProgramVersion,ProgramFile,TemplateVer,TemplateHome,CrossBrowser);
  }
  else {
    ShowSupport(ProgramID,ProgramName,ProgramVersion,ProgramFile,TemplateVer,TemplateHome,CrossBrowser);
  }
}

//------------------------------------------------------------
// Get the version value from the first 300 chars of our Data
//------------------------------------------------------------
function GetVersionStr(Data) {
  var srchStr = Data.substr(0,300);  // only scan first 300 chars
  var version = "N/A";
  var matches = srchStr.match(/.*version\s*:\s*(.*)/i);

  if (matches != null) {
    version = trim(matches[1]);
  }
  return version;
}

//------------------------------------------------------------
// Read the file contents and execute a callback function
//------------------------------------------------------------
function ReadFile(File, ReturnFunction) {
  // IE11 browser not supported
  if (IEBrowser) return;

  var returnValue = RSExecuteFetch(File,true);  // discreet mode; ignore errors

  returnValue.then(
    function (returnValue) {
      returnValue = ParseFetchData(returnValue);  // parse fetch() result

      if (returnValue.status==0) {
        var filename = File.replace(/^.*[\\\/]/, '');
        var data = returnValue.responseText;

        if (typeof(ReturnFunction) == 'function') {
          ReturnFunction(filename,data);
        }
      }
    }
  );
}

function AppendTblRowToCookie(CookieName,Filename,Version) {
  var rows = GetCookieData(CookieName);
  if (rows == "unknown") rows = "";

  rows += "<tr><td class=Label width=80%>" + Filename + "</td>" +
          "<td class=Field>" + Version + "</td></tr>";

  SetCookie(CookieName,rows);
}

var CSSInclCount = 0;
var CSSInclRead = 0;

var ScriptInclCount = 0;
var ScriptInclRead = 0;

var assocArrCSSIncl;
var assocArrScriptIncl;

function GetCSSIncludeInfo(context) {
  if (context == null) context = document;  // default to current document

  // if the context parameter is NOT a document element, back up to the parent
  // note: IE does not indertant context.DOCUMENT_NODE
  if (context.nodeType != 9)
  {
    context = context.ownerDocument;
  }

  ExpireCookiePath('CSSInclTblData');
  CSSInclCount = 0;
  CSSInclRead = 0;
  assocArrCSSIncl = new Object();

  var links = context.getElementsByTagName('link');

  CSSInclCount = links.length;

  if (CSSInclCount == 0) return;

  for (var i in links)
  {
    if (links[i].rel == "stylesheet" && !isWhitespace(links[i].href))
    {
      ReadFile(links[i].href, UpdateCSSIncludeList);
    }
  }
}

function UpdateCSSIncludeList(Filename,Data) {
  var version = GetVersionStr(Data);

  assocArrCSSIncl[Filename] = version;
  CSSInclRead++;
}

function GetScriptIncludeInfo(context) {
  if (context == null) context = document;  // default to current document

  // if the context parameter is NOT a document element, back up to the parent
  // note: IE does not indertant context.DOCUMENT_NODE
  if (context.nodeType != 9)
  {
    context = context.ownerDocument;
  }

  ExpireCookiePath('ScriptInclTblData');
  ScriptInclCount = 0;
  ScriptInclRead = 0;
  assocArrScriptIncl = new Object();

  var scripts = context.getElementsByTagName('script');

  for (var i in scripts)
  {
    if (scripts[i].type == "text/javascript" && !isWhitespace(scripts[i].src)) {
      ScriptInclCount++;
    }
  }

  for (var i in scripts)
  {
    if (scripts[i].type == "text/javascript" && !isWhitespace(scripts[i].src))
    {
      ReadFile(scripts[i].src, UpdateScriptIncludeList);
    }
  }
}

function UpdateScriptIncludeList(Filename,Data) {
  var version = GetVersionStr(Data);

  assocArrScriptIncl[Filename] = version;
  ScriptInclRead++;
}

function SortAssocArray(AssocArr) {
 if (AssocArr == undefined || AssocArr == null) return null;

 var arr = [];
 for (key in AssocArr) {
   arr.push({name: key, val: AssocArr[key]});
 }

 //arr.sort((a, b) => a.name.localeCompare(b.name));
 arr.sort(function (a, b) {
   return a.name.localeCompare(b.name);
 });

 return arr;
}

function ProcessIncludeInfo(ProgramID,ProgramName,ProgramVersion,ProgramFile,TemplateVer,TemplateHome,CrossBrowser) {
  // We will wait until all the include files have been read in before showing
  // the Support page.

  if ((CSSInclRead != CSSInclCount) || (ScriptInclCount != ScriptInclRead)) {
    // not yet done

    window.setTimeout(function () {
      ProcessIncludeInfo(ProgramID,ProgramName,ProgramVersion,ProgramFile,TemplateVer,TemplateHome,CrossBrowser);
    }, 100);
  }
  else {
    // all done

    var arr = SortAssocArray(assocArrCSSIncl);
    if (arr != null) {
      for (var i in arr) {
        AppendTblRowToCookie('CSSInclTblData',arr[i].name,arr[i].val);
      }
    }

    var arr = SortAssocArray(assocArrScriptIncl);
    if (arr != null) {
      for (var i in arr) {
        AppendTblRowToCookie('ScriptInclTblData',arr[i].name,arr[i].val);
      }
    }

    ShowSupport(ProgramID,ProgramName,ProgramVersion,ProgramFile,TemplateVer,TemplateHome,CrossBrowser);
  }
}

function ShowSupport(ProgramID,ProgramName,ProgramVersion,ProgramFile,TemplateVer,TemplateHome,CrossBrowser) {
  var ans=true;
  if (trim(GetCookieData('IBAUserName'))=='iba') {
    ans=confirm("Server ID       \t : " + ProgramID + "\n" +
          "Server Name     \t : " + ProgramName + "\n" +
          "Server Version  \t : " + ProgramVersion + "\n" +
          "Template        \t : " + ProgramFile + "\n" +
          "Template Version\t : " + TemplateVer + "\n" + 
          "Template Home   \t : " + TemplateHome + "\n" +
          "Cross Browser   \t : " + CrossBrowser + "\n" );
  }
  if (ans) {
    SetCookie('SystemVersion',ProgramVersion.substr(0,6));
    SetCookie('ProgramID',ProgramID);
    SetCookie('ProgramName',ProgramName);
    SetCookie('ProgramVersion',ProgramVersion);
    SetCookie('ProgramFile',ProgramFile);
    SetCookie('TemplateVer',TemplateVer);
    SetCookie('TemplateHome',TemplateHome);
    SetCookie('CrossBrowser',CrossBrowser);
    var webRoot=window.location.pathname.replace(/\/html\/.*/,"").replace(/\/cgi-bin\/.*/,"").replace(/\/lookups\/.*/,"");
    var posLeft=(document.body.clientWidth-680)/2;
    SupportWindow=window.open(webRoot+"/html/Support.html","SupportWindow",
                      "left="+posLeft+",top=30,width=680,height=768,resizable=no"+
                      ",scrollbars=no,status=no,toolbar=no,menubar=no");
  }
}
//------------------------------------------------------------
// SupportInformationMap - Display Support Information Alert
//------------------------------------------------------------
function SupportInformationMap() {
  win=getTop().menu.EmergencyFrame
  menuFrame = getTop().menu.frames['EmergencyFrame'].document;

  if (win.PopUpScreen!=undefined) {
    if (win.PopUpScreen.style.display!="none") {
      if (win.PopUpFrame.document.location.href.match(/lookups/)) {
        SearchName=win.PopUpFrame.document.location.pathname;
        alert("Search HTML     \t : " + SearchName + "\t\n" );
        return;
      }
      else {
        win=getTop().menu.EmergencyFrame.PopUpFrame;
      }
    }
  } else {
    return;
  }

  var ProgramID      = win.ServerID.content
  var ProgramName    = win.ServerName.content
  var ProgramVersion = win.ServerVersion.content
  var ProgramFile    = win.TemplateFile.content
  var TemplateVer    = getMetaContents('TemplateVersion',menuFrame)
  var TemplateHome   = getMetaContents('TemplateHome',menuFrame)
  var CrossBrowser   = getMetaContents('CrossBrowser',menuFrame)

  if (!IEBrowser) {
    GetCSSIncludeInfo(menuFrame);
    GetScriptIncludeInfo(menuFrame);

    ProcessIncludeInfo(ProgramID,ProgramName,ProgramVersion,ProgramFile,TemplateVer,TemplateHome,CrossBrowser);
  }
  else {
    ShowSupport(ProgramID,ProgramName,ProgramVersion,ProgramFile,TemplateVer,TemplateHome,CrossBrowser);
  }
}
//----------------------------------------------------------------
// SupportInformationFS - Display Support Information Alert ED Map
//----------------------------------------------------------------
function SupportInformationFS() {
  // first find the content frame
  var contentFrame = top.content.document;
  var popupFrame = top.search.document;
  var context      = contentFrame;

  // find the popup frame
  var isPopup = (popupFrame.location.href.indexOf("about:blank") == -1);

  if (isPopup)
  {
    context = popupFrame;

    if (context.location.href.match('/lookups/'))
    {
      alert("Search HTML     \t : " + context.location.pathname + "\n" )
      return;
    }
  }

  var ProgramID      = getMetaContents('ServerID',context);
  var ProgramName    = getMetaContents('ServerName',context);
  var ProgramVersion = getMetaContents('ServerVersion',context);
  var ProgramFile    = getMetaContents('TemplateFile',context);
  var TemplateVer    = getMetaContents('TemplateVersion',context);
  var TemplateHome   = getMetaContents('TemplateHome',context);
  var CrossBrowser   = getMetaContents('CrossBrowser',context);

  if (!IEBrowser) {
    GetCSSIncludeInfo(context);
    GetScriptIncludeInfo(context);

    ProcessIncludeInfo(ProgramID,ProgramName,ProgramVersion,ProgramFile,TemplateVer,TemplateHome,CrossBrowser);
  }
  else {
    ShowSupport(ProgramID,ProgramName,ProgramVersion,ProgramFile,TemplateVer,TemplateHome,CrossBrowser);
  }
}
//------------------------------------------------------------
// Link to Patient using default server page from menu
//------------------------------------------------------------
function fnPatientLink() {
  if (getTop().menu==undefined) { return }
  admissno=PatientLinks.admissno.value.replace(/ /g,"+")
  urnumber=PatientLinks.urnumber.value.replace(/ /g,"+")
  if (getTop().menu.defPatientLink == undefined) {
    serverid="patweb98"
    reportno="01"
    template="001" }
  else {
    serverid=getTop().menu.defPatientLink.serverid.value
    reportno=getTop().menu.defPatientLink.reportno.value
    template=getTop().menu.defPatientLink.template.value }
  url=serverid + ".pbl?reportno=" + reportno +
                "&template=" + template +
                "&urnumber=" + urnumber +
                "&admissno=" + admissno
  location.href=url
}

//------------------------------------------------------------
// Validate Category Code using remote scripting
//
//------------------------------------------------------------
function validateCatCode(ReturnCatg,ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=3; i < validateCatCode.arguments.length; i++) {
    if (typeof(validateCatCode.arguments[i]) == 'function') {
      ReturnFunction=validateCatCode.arguments[i] }
    else {
      validateCatCode.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL = "../cgi-bin/patweb80.pbl?reportno=2&valdcode=" +
                  ReturnCatg.value.replace(/ /g,"+") +
                  ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=ReturnValue[0];
    j=0
    for (var i=3; i < validateCatCode.arguments.length; i++) {
       if (typeof(validateCatCode.arguments[i]) != 'function') {
         j++
         validateCatCode.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.select();  }
}

//-----------------------------------------------------------------
// Function To Reserve slot booking using remote scripting
//-----------------------------------------------------------------
function reserveSlot(casekeys,reserve1,reserve2,reserve3) {
  ReturnFunction="" ;
  for (var i=1; i < reserveSlot.arguments.length; i++) {
   if (typeof(reserveSlot.arguments[i]) == 'function') {
     ReturnFunction=reserveSlot.arguments[i] } }
  var serverURL = "../cgi-bin/outweb02.pbl?reportno=9&updatety=1" +
                  "&casekeys="+casekeys.replace(/ /g,"+") +
                  "&reserve1="+reserve1.replace(/ /g,"+") +
                  "&reserve2="+reserve2.replace(/ /g,"+") +
                  "&reserve3="+reserve3.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
}

//-----------------------------------------------------------------
// Function To Validate slot booking using remote scripting
//-----------------------------------------------------------------
function cancelSlot(casekeys) {
  ReturnFunction="" ;
  for (var i=1; i < cancelSlot.arguments.length; i++) {
   if (typeof(cancelSlot.arguments[i]) == 'function') {
     ReturnFunction=cancelSlot.arguments[i] } }
  var serverURL = "../cgi-bin/outweb02.pbl?reportno=9&updatety=2" +
                  "&casekeys="+casekeys.replace(/ /g,"+") 
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
}

//------------------------------------------------------------------------
// Function to Update Check-In,Time Seen
//------------------------------------------------------------------------
function updateTime(Admissno,Updttime) {
  ReturnFunction="" ;
  for (var i=1; i < updateTime.arguments.length; i++) {
  if (typeof(updateTime.arguments[i]) == 'function') {
     ReturnFunction=updateTime.arguments[i] } }
  var serverURL = "../cgi-bin/outweb02.pbl?reportno=9&updatety=3"+
                "&admissno=" + Admissno.replace(/ /g,"+") +
                "&updttime=" + Updttime.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
}

//---------------------------------------------------------------
//                  Function for updating DNA
//----------------------------------------------------------------
function updateDNA(casekeys) {
  ReturnFunction="" ;
  for (var i=1; i < updateDNA.arguments.length; i++) {
   if (typeof(updateDNA.arguments[i]) == 'function') {
     ReturnFunction=updateDNA.arguments[i] } }
  var serverURL = "../cgi-bin/outweb02.pbl?reportno=9&updatety=4"+
                  "&casekeys=" + casekeys.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
}

//------------------------------------------------------------
// Validate Category using remote scripting
//
//------------------------------------------------------------
function validateCat(ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=3; i < validateCat.arguments.length; i++) {
    if (typeof(validateCat.arguments[i]) == 'function') {
      ReturnFunction=validateCat.arguments[i] }
    else {
      validateCat.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL = "../cgi-bin/patweb80.pbl?reportno=2&valdcode=" +
                  ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=ReturnValue[0];
    j=0
    for (var i=3; i < validateCat.arguments.length; i++) {
       if (typeof(validateCat.arguments[i]) != 'function') {
         j++
         validateCat.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.select();  }
}
function valCasemix() {
 if (document.getElementById("ptcnelos").value=="2") {
   if (!isWhitespace(document.UpdateForm.ptmis073.value)) {
     var serverURL = "../cgi-bin/patweb80.pbl?reportno=35" +
        "&valdclmt=" +
          document.UpdateForm.ptmis027.value.substr(0,3).replace(/ /g,"+") +
        "&valdhlfn=" +
         document.UpdateForm.ptmis013.value.replace(/ /g,"+") +
        "&valdcode=" +
         document.UpdateForm.ptmis073.value.replace(/ /g,"+") +
        "&valbcode=" +
         document.UpdateForm.ptmis001.value.replace(/ /g,"+")
       var returnValue = RSExecute(serverURL);
       if (returnValue.status==0) {
         ReturnValue=returnValue.return_value.split("|");
         UpdateForm.cmixdesc1.value=ReturnValue[0];
         UpdateForm.ptmis030.value=ReturnValue[1];
         return;
       } else {
         document.UpdateForm.ptmis073.focus();
       }
    }
    document.UpdateForm.ptmis073.value="";
    document.UpdateForm.ptmis030.value="0";
    document.UpdateForm.cmixdesc1.value="";
 } else {
  if (document.getElementById("ptcnelos").value=="1") {
   validateCode(35,UpdateForm.ptmis073,UpdateForm.cmixdesc1);
   } else {
  validateCode(35,UpdateForm.ptmis073,UpdateForm.cmixdesc1,UpdateForm.ptmis030);
   }
 }
}
//------------------------------------------------------------
// Validate Code to a Table Using Remote Scripting
//   OptionNumber =  3 - Doctor Code        (patdo1af)
//                   4 - Item Code          (patitemf)
//                   5 - DRG Code           (patdgwaf)
//                   6 - ICD Disease Code   (patic???)
//                   7 - ICD Operation Code (patic???)
//                   8 - Patient U/R        (patma1af)
//                   9 - Transfer Source    (patvadaf)
//                  20 - Nurse code         (oprnuraf)
//                  18 - HCP code           (pmshcpaf)  ** See also ValidateHCP
//                  27 - Theatre Expensive Items (oprexpaf)
//                  28 - Theatre Implant Code(oprthiaf) 
//                  29 - Surgical Table Item Code(oprsesaf)
//                  30 - Nurse Code(oprnuraf)
//                  31 - Default Discharge Date/Time (pattranf)  	 
//------------------------------------------------------------
function validateCode(OptionNumber,ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  ArgCount=3;
  if(OptionNumber==4 && validateCode.arguments[3] != undefined){
    ArgCount=4;      // arguments[3] is the items effective date so don't clear
  }                  // or write over it
  for (var i=ArgCount; i < validateCode.arguments.length; i++) {
    if (typeof(validateCode.arguments[i]) == 'function') {
      ReturnFunction=validateCode.arguments[i] }
    else {
      validateCode.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;

   if(OptionNumber==4 && validateCode.arguments[3] != undefined){
    var serverURL   = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&valdedat=" +
                    validateCode.arguments[3].value.replace(/ /g,"+")
   } else {
    var serverURL   = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
   }

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=ArgCount; i < validateCode.arguments.length; i++) {
       if (typeof(validateCode.arguments[i]) != 'function') {
         j++
         validateCode.arguments[i].value=ReturnValue[j] } }
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

//-----------------------------------------------------------------------------
//        validateClinicEffectiveDate - returns a clinic description base on
//        the clinic id and effective date
//-----------------------------------------------------------------------------
function validateClinicEffectiveDate(clinicId,clinicEffectiveDate,ReturnName) 
{
  ReturnFunction="" ;
  ReturnName.value="";

  for (var i = 3; i < validateClinicEffectiveDate.arguments.length; i++) 
  {
    if (typeof(validateClinicEffectiveDate.arguments[i]) == 'function') 
      ReturnFunction=validateClinicEffectiveDate.arguments[i] 
    else 
      validateClinicEffectiveDate.arguments[i].value=""; 
  }

  if (isWhitespace(clinicId.value)) 
    return;;

  var serverURL = "../cgi-bin/patweb80.pbl?reportno=91"+
                    "&valdcode=" + clinicId.value.replace(/ /g,"+")+
                    "&lastdate=" + clinicEffectiveDate.value.replace(/ /g,"+");

  var returnValue = RSExecute(serverURL);

  if (returnValue.status == 0) 
  {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=trim(ReturnValue[0]);

    j=0;

    for (var i=3; i < validateClinicEffectiveDate.arguments.length; i++) 
    {
       if (typeof(validateClinicEffectiveDate.arguments[i]) != 'function') 
       {
         j++;
         validateClinicEffectiveDate.arguments[i].value=ReturnValue[j];
       } 
    }

    if (typeof(ReturnFunction) == 'function') 
       ReturnFunction() 

    return true;
  }
  else 
  {
    clinicId.value="";
    clinicId.select();
    clinicId.focus();

    return false;
  }
}

//------------------------------------------------------------
// Validate Code to a Table Using Remote Scripting
// Using COMWEB80.PBL
//------------------------------------------------------------
function validateCode2(OptionNumber,ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=3; i < validateCode2.arguments.length; i++) {
    if (typeof(validateCode2.arguments[i]) == 'function') {
      ReturnFunction=validateCode2.arguments[i] }
    else {
      validateCode2.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/comweb80.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=3; i < validateCode2.arguments.length; i++) {
       if (typeof(validateCode2.arguments[i]) != 'function') {
         j++
         validateCode2.arguments[i].value=ReturnValue[j] } }
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
//------------------------------------------------------------
// Validate Code to a Table Using Remote Scripting
// Using COMWEB81.PBL                               *C-0825792
//------------------------------------------------------------
function validateCode3(OptionNumber,ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=3; i < validateCode3.arguments.length; i++) {
    if (typeof(validateCode3.arguments[i]) == 'function') {
      ReturnFunction=validateCode3.arguments[i] }
    else {
      validateCode3.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/comweb81.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=3; i < validateCode3.arguments.length; i++) {
       if (typeof(validateCode3.arguments[i]) != 'function') {
         j++
         validateCode3.arguments[i].value=ReturnValue[j] } }
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

//------------------------------------------------------------
// Validate misc.item (NZ)
//------------------------------------------------------------
function validateNZItem(OptionNumber,ReturnCode,ReturnClmc,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=4; i < validateNZItem.arguments.length; i++) {
    if (typeof(validateNZItem.arguments[i]) == 'function') {
      ReturnFunction=validateNZItem.arguments[i] }
    else {
      validateNZItem.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&valdclmt=" + ReturnClmc.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=4; i < validateNZItem.arguments.length; i++) {
       if (typeof(validateNZItem.arguments[i]) != 'function') {
         j++
         validateNZItem.arguments[i].value=ReturnValue[j] } }
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

//------------------------------------------------------------
// Validate transfer source codes - (patvadaf)
//------------------------------------------------------------
function validateTransSrc(ReturnCode,ReturnDate,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=3; i < validateTransSrc.arguments.length; i++) {
    if (typeof(validateTransSrc.arguments[i]) == 'function') {
      ReturnFunction=validateTransSrc.arguments[i] }
    else {
      validateTransSrc.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=9" +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&trandate=" + ReturnDate.value.replace(/ /g,"+") 
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=3; i < validateTransSrc.arguments.length; i++) {
       if (typeof(validateTransSrc.arguments[i]) != 'function') {
         j++
         validateTransSrc.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() }
    return true;
    }
  else {
    ReturnCode.select();
    ReturnCode.focus();
    return false;
     }
}

//------------------------------------------------------------
// Validate transfer source with referral source
//------------------------------------------------------------
function validateTransSrcWithRef(ReturnCode,ReturnRef,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=3; i < validateTransSrcWithRef.arguments.length; i++) {
    if (typeof(validateTransSrcWithRef.arguments[i]) == 'function') {
      ReturnFunction=validateTransSrc.arguments[i] }
    else {
      validateTransSrc.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=86" +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&refrlsrc=" + ReturnRef.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=3; i < validateTransSrcWithRef.arguments.length; i++) {
       if (typeof(validateTransSrcWithRef.arguments[i]) != 'function') {
         j++
         validateTransSrcWithRef.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() }
    return true;
    }
  else {
    ReturnCode.value = "";
    ReturnCode.focus();
    return false;
     }
}
//------------------------------------------------------------

//------------------------------------------------------------
function validateTAC(OptionNumber,URNumber,AdmissionNumber,RetMABNo,
                     RetDat,RetLoc,RetOthDrv,RetPolRep,RetDet1,RetCRegInv,
                     RetDet2,RetDrvPas,RetMode,RetEng,RetInjWhn,RetMechInj,
                     RetRegInj,RetSoli,RetSNo,RetInd){
  ReturnFunction="";  RetMABNo.value="";
  RetDat.value="";    RetLoc.value="";
  RetOthDrv.value=""; RetPolRep.value="";
  RetDet1.value="";   RetCRegInv.value="";
  RetDet2.value="";   RetDrvPas.value="";
  RetMode.value="";   RetEng.value="";
  RetInjWhn.value=""; RetMechInj.value="";
  RetRegInj.value=""; RetSoli.value="";
  RetSNo.value="";    RetInd.value="";

  for (var i=20; i < validateTAC.arguments.length; i++){
    if (typeof(validateTAC.arguments[i]) == 'function') {
      ReturnFunction=validateTAC.arguments[i] }
    else {
      validateTAC.arguments[i].value=""; } }
  if (isWhitespace(URNumber.value)) return;;
  if (isWhitespace(AdmissionNumber.value)) return;;
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
                    "&valdurno=" + URNumber.value.replace(/ /g,"+") +
                    "&valdadno=" + AdmissionNumber.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    RetMABNo.value=trim(ReturnValue[0])
    RetDat.value=trim(ReturnValue[1])
    RetLoc.value=trim(ReturnValue[2])
    RetOthDrv.value=trim(ReturnValue[3])
    RetPolRep.value=trim(ReturnValue[4])
    RetDet1.value=trim(ReturnValue[5])
    RetCRegInv.value=trim(ReturnValue[6])
    RetDet2.value=trim(ReturnValue[7])
    RetDrvPas.value=trim(ReturnValue[8])
    RetMode.value=trim(ReturnValue[9])
    RetEng.value=trim(ReturnValue[10])
    RetInjWhn.value=trim(ReturnValue[11])
    RetMechInj.value=trim(ReturnValue[12])
    RetRegInj.value=trim(ReturnValue[13])
    RetSoli.value=trim(ReturnValue[14])
    RetSNo.value=trim(ReturnValue[15])
    RetInd.value=trim(ReturnValue[16])
    j=0
    for (var i=20; i < validateTAC.arguments.length; i++) {
       if (typeof(validateTAC.arguments[i]) != 'function') {
         j++
         validateTAC.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    AdmissionNumber.select();
    return false;
     }
}

//------------------------------------------------------------
function validateHFT(OptionNumber,ReturnFund,ReturnTable,FundName,TableName) {
  ReturnFunction="" ;
  FundName.value="";
  TableName.value="";
  for (var i=5; i < validateHFT.arguments.length; i++) {
    if (typeof(validateHFT.arguments[i]) == 'function') {
      ReturnFunction=validateHFT.arguments[i] }
    else {
      validateHFT.arguments[i].value=""; }  }
  if (isWhitespace(ReturnFund.value)) return;;
  if (isWhitespace(ReturnTable.value)) return;;
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
                    "&valdfund=" + ReturnFund.value.replace(/ /g,"+") +
                    "&valdtabl=" + ReturnTable.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    FundName.value=trim(ReturnValue[0])
    TableName.value=trim(ReturnValue[1])
    j=0
    for (var i=5; i < validateHFT.arguments.length; i++) {
       if (typeof(validateHFT.arguments[i]) != 'function') {
         j++
         validateHFT.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() }
    return true; 
  }
  else {
    ReturnTable.select();
    return false;
     }
}

//
//  This function accepts a parameter of 1 or 0. 0=ICD10 Code 1=ICD9 code 
//
function ValidateICD(OptionNumber,ReturnCode,ReturnName,UsingICD9) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=4; i < ValidateICD.arguments.length; i++) {
    if (typeof(ValidateICD.arguments[i]) == 'function') {
      ReturnFunction=ValidateICD.arguments[i] }
    else {
      ValidateICD.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&usngicd9=" + UsingICD9.value 
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=3; i < ValidateICD.arguments.length; i++) {
       if (typeof(ValidateICD.arguments[i]) != 'function') {
         j++
         ValidateICD.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } 
    return true;
    }
  else {
    ReturnCode.select();
    return false;
     }
}
//
//------------------------------------------------------------
//  This function accepts a parameter of 1 or 0. 0=ICD10 Code 1=ICD9 code
//  and if ICD10 will use ICDDate to ready the correct ICD10 edition
//------------------------------------------------------------
function ValidateICD10ED(OptionNumber,UsingICD9,ICDDate,ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=5; i < ValidateICD10ED.arguments.length; i++) {
    if (typeof(ValidateICD10ED.arguments[i]) == 'function') {
      ReturnFunction=ValidateICD10ED.arguments[i] 
    } else {
      ValidateICD10ED.arguments[i].value="";
    }
  }
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&usngicd9=" + UsingICD9.value.replace(/ /g,"+") +
                    "&icd10dat=" + ICDDate.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=5; i < ValidateICD10ED.arguments.length; i++) { 
       if (typeof(ValidateICD10ED.arguments[i]) != 'function') {
         j++
         ValidateICD10ED.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() }
    return true;
    }
  else {
    ReturnCode.select();
    return false;
  }
}
//------------------------------------------------------------
//------------------------------------------------------------
// Check if ASCII File Exists in DPATH on Server
//------------------------------------------------------------
function validateASCIIFile(ReturnCode) {
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=10" +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {
    ReturnCode.select();  }
}

//------------------------------------------------------------
// Get Select List Options
//------------------------------------------------------------
function selectOptions(OptionNumber,ReturnCode,ReturnSelect) {
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnSelect.options.length=0
    ReturnSelect.options[ReturnSelect.options.length]=new Option("","");
    ReturnValue=returnValue.return_value.split("|");
    for (var j=0; j < ReturnValue.length; j++) {
       if (!isWhitespace(ReturnValue[j])) {
         SelectValue=ReturnValue[j].split(",");
         ReturnSelect.options[ReturnSelect.options.length]=
          new Option(SelectValue[1],SelectValue[0]); } } }
  else {
    ReturnCode.select();  }
}

//------------------------------------------------------------
// Get Select List Options
//------------------------------------------------------------
function selectOptions2(OptionNumber,ReturnCode,ReturnSelect,openOnly) {
//  if (isWhitespace(ReturnCode.value)) return;;
// allow ReturnCode to be spaces to display all selections
//
  var serverURL   = "../cgi-bin/comweb80.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+")

  if(typeof openOnly != undefined){
     serverURL += "&openonly=1";
  }
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnSelect.options.length=0
    ReturnSelect.options[ReturnSelect.options.length]=new Option("","");
    ReturnValue=returnValue.return_value.split("|");
    for (var j=0; j < ReturnValue.length; j++) {
       if (!isWhitespace(ReturnValue[j])) {
         SelectValue=ReturnValue[j].split(",");
         ReturnSelect.options[ReturnSelect.options.length]=
          new Option(SelectValue[1],SelectValue[0]); } } }
  else {
    ReturnCode.select();  }
}
//------------------------------------------------------------
// Get Select List Options - same as selectOption but sends returnfm=1
//------------------------------------------------------------
function selectOptions3(OptionNumber,ReturnCode,ReturnSelect) {
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&returnfm=1"  
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnSelect.options.length=0
    ReturnSelect.options[ReturnSelect.options.length]=new Option("","");
    ReturnValue=returnValue.return_value.split("|");
    for (var j=0; j < ReturnValue.length; j++) {
       if (!isWhitespace(ReturnValue[j])) {
         SelectValue=ReturnValue[j].split(",");
         ReturnSelect.options[ReturnSelect.options.length]=
          new Option(SelectValue[1],SelectValue[0]); } } }
  else {
    ReturnCode.select();  }
}
//------------------------------------------------------------
// Get Select List Options - same as selectOptions2 but sends valdcod2
//------------------------------------------------------------
function selectOptions4(OptionNumber,ReturnCode,ReturnCd2,ReturnSelect) {
  var serverURL   = "../cgi-bin/comweb80.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&valdcod2=" + ReturnCd2.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnSelect.options.length=0
    ReturnSelect.options[ReturnSelect.options.length]=new Option("","");
    ReturnValue=returnValue.return_value.split("|");
    for (var j=0; j < ReturnValue.length; j++) {
       if (!isWhitespace(ReturnValue[j])) {
         SelectValue=ReturnValue[j].split(",");
         ReturnSelect.options[ReturnSelect.options.length]=
          new Option(SelectValue[1],SelectValue[0]); } } }
  else { 
    ReturnCode.select();  }
}
//------------------------------------------------------------
// Get Select List Options - same as selectOptions4 but sends valdcod3
//------------------------------------------------------------
function selectOptions5(OptionNumber,ReturnCode,ReturnCd2,ReturnCd3,ReturnSelect) {
  var serverURL   = "../cgi-bin/comweb80.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&valdcod2=" + ReturnCd2.value.replace(/ /g,"+") +
                    "&valdcod3=" + ReturnCd3.value.replace(/ /g,"+") +
                    "&valdtype=1"
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnSelect.options.length=0
    ReturnSelect.options[ReturnSelect.options.length]=new Option("","");
    ReturnValue=returnValue.return_value.split("|");
    for (var j=0; j < ReturnValue.length; j++) {
       if (!isWhitespace(ReturnValue[j])) {
         SelectValue=ReturnValue[j].split(",");
         ReturnSelect.options[ReturnSelect.options.length]=
          new Option(SelectValue[1],SelectValue[0]); } } }
  else {
    ReturnCode.select();  }
}
//------------------------------------------------------------
// Get selection list options for a category code for specific
// indicator values
//------------------------------------------------------------
// ReturnCode   = category code of selection list to generate
// ReturnSelect = cgi name of selection list to generate
// ReturnDeft   = default selected value of selection list to generate
// FiltCode     = parent category code value
// FiltInd      = indicator number (1 to 11)
// FiltTes      = 1 - Include option when indicators values match
//------------------------------------------------------------
function selectCatCodInd(ReturnCode,ReturnSelect,ReturnDeft,FiltCode,FiltInd,FiltTest){ 
  if (isWhitespace(ReturnCode.value)) return;;
  if (isWhitespace(FiltInd)) return;; 
  if (isWhitespace(FiltTest)) return;;
  
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=15" +
                    "&returnfm=1" +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var Pos = (FiltInd - 0)
  Pos= Pos + 2
  FiltVal = FiltCode.value.substr(Pos,1);
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnSelect.options.length=0
    ReturnSelect.options[ReturnSelect.options.length]=new Option("","");
    ReturnValue=returnValue.return_value.split("|");
    for (var j=0; j < ReturnValue.length; j++) {
      if (!isWhitespace(ReturnValue[j])) {
          SelectValue=ReturnValue[j].split(",");
          ReturnInd = SelectValue[0].substr(Pos,1);
          if(FiltVal == ReturnInd && FiltTest == 1) {
            if(ReturnDeft.value.substr(0,3) ==  SelectValue[0].substr(0,3)) {
              ReturnSelect.options[ReturnSelect.options.length]=
              new Option(SelectValue[1],SelectValue[0],0,1);
            } else {
              ReturnSelect.options[ReturnSelect.options.length]=
              new Option(SelectValue[1],SelectValue[0]);
            }
          }
      }
    }
  } else {
    ReturnCode.select();
  }
}

//------------------------------------------------------------
// Print Page with Divisions from Window
//------------------------------------------------------------
function PrintThisPage(e) 
{
  var evt = (e != undefined) ? e : window.event;
  if (evt.preventDefault) {
    evt.preventDefault();
    evt.stopPropagation();
  }
  else {
    evt.returnValue = false;
    evt.cancelBubble = true;
  }

  SaveHeight=PageBodySection.style.height
  PageBodySection.style.height="auto"
  print()
  PageBodySection.style.height=SaveHeight
}

//------------------------------------------------------------
// Print Page Content from Menu Frame
//------------------------------------------------------------
function PrintContentPage() 
{
  if (getTop().content.PageBodySection==undefined) {
    if (getTop().content.BodyDivision==undefined) {
      getTop().content.focus();
      getTop().content.print();
    }
    else {
      if (getTop().content.TableLocation!=undefined &&
          getTop().content.TableRefresh!=undefined &&
          getTop().content.printFormat!=undefined) {
        getTop().content.BodyDivision.style.height="auto";
        getTop().content.focus();
        getTop().content.printFormat=true;
        getTop().content.TableRefresh();
        getTop().content.HeadingDivision.style.overflowY="hidden";
        getTop().content.print();
        getTop().content.printFormat=false;
        getTop().content.TableRefresh();
      } else {
        SaveWidth=getTop().content.BodyDivision.style.width;
        SaveHeight=getTop().content.BodyDivision.style.height;
        SaveOverflowY=getTop().content.HeadingDivision.style.overflowY;
        getTop().content.BodyDivision.style.width="auto"
        getTop().content.BodyDivision.style.height="auto"
        getTop().content.HeadingDivision.style.overflowY="hidden";
        getTop().content.focus();
        getTop().content.print();
        getTop().content.BodyDivision.style.width=SaveWidth;
        getTop().content.BodyDivision.style.height=SaveHeight;
        getTop().content.HeadingDivision.style.overflowY=SaveOverflowY
      }
    }
  }
  else {
    if (window.navigator.userAgent.indexOf("MSIE 6.0")>=1
       || window.navigator.userAgent.indexOf("MSIE 7.0")>=1) {
        SaveWidth=getTop().content.PageBodySection.style.width;
        SaveHeight=getTop().content.PageBodySection.style.height;
        getTop().content.PageBodySection.style.width="auto";
        getTop().content.PageBodySection.style.height="auto";
        getTop().content.PageBodySection.style.overflow="hidden";
        getTop().content.focus();
        getTop().content.print();
        getTop().content.PageBodySection.style.overflow="auto";
        getTop().content.PageBodySection.style.width=SaveWidth; 
        getTop().content.PageBodySection.style.height=SaveHeight; 
    } else {
        SaveWidth=getTop().content.PageBodySection.style.width;
        SaveHeight=getTop().content.PageBodySection.style.height;
        getTop().content.PageBodySection.style.width="auto";
        getTop().content.PageBodySection.style.height="auto";
        getTop().content.focus();
        getTop().content.print();
        getTop().content.PageBodySection.style.width=SaveWidth; 
        getTop().content.PageBodySection.style.height=SaveHeight; 
    }
  }
}

//------------------------------------------------------------
// Print Menu frame ( Top Frame of Emergency Map)
//------------------------------------------------------------
function PrintMenuPage() {
  if (this.PageBodySection==undefined) {
    if (this.BodyDivision==undefined) {
      this.focus();
      this.print(); }
    else {
      SaveHeight=this.BodyDivision.style.height
      this.BodyDivision.style.height="auto"
      this.focus();
      this.print();
      this.BodyDivision.style.height=SaveHeight; } }
  else {
    if (window.navigator.userAgent.indexOf("MSIE 6.0")>=1
       || window.navigator.userAgent.indexOf("MSIE 7.0")>=1) {
        SaveHeight=this.PageBodySection.style.height;
        this.PageBodySection.style.height="auto";
        this.PageBodySection.style.overflow="hidden";
        this.focus();
        this.print();
        this.PageBodySection.style.overflow="auto";
        this.PageBodySection.style.height=SaveHeight;
    } else {
        SaveHeight=this.PageBodySection.style.height;
        this.PageBodySection.style.height="auto";
        this.focus();
        this.print();
        this.PageBodySection.style.height=SaveHeight;
    }
  }
}

//------------------------------------------------------------
// Insert Standard Patient Heading
//------------------------------------------------------------
function InsertPatientHeader() {
  PatientHeadingStr='<table class="PHeadingSection">' +
  '<tr><td class=PHeadingField>' +
  '    <img src="../images/PatientFolder' + PatientSTA + '.gif" ' +
  '     onclick=\'fnPatientLink();\'' +
  '     class="Icon" alt="Patient Details" title="Patient Details"> ' +
  PatientNAM;

  AddAlertIcons()
  AddCDMIcons()

  if (isWhitespace(PatientHFT)) {
    PatientHeadingStr+='<td></td><td></td>'
  }
  else {
    hfund=PatientHFT.substr(0,6);
    PatientHeadingStr+='<td class=DataLabel align=right>' +
          HealthFundDescription + '</td>' +
    '    <td class=DataField>' +
    '    <a href=\'javascript:HFViewFrame("'+ hfund + '");\'>' +
    '    ' + PatientHFT + '</a></td>'
  }

  ImageFile = PatientImageURL(PatientURN,PatientSEX);

  if (isWhitespace(PatientLOC)) {
    PatientHeadingStr+='<td></td><td class=DataField>' }
  else {
    PatientHeadingStr+='<td class=DataLabel align=right>Location</td>' +
    '    <td class=DataField>' + PatientLOC }

  var curIPHyperlinkVisit=PatientCUR.substr(0,8);
  var curIPHyperlinkParam=PatientCUR.substr(8,1);
  var curIPHyperlinkOpt=PatientCUR.substr(9,1);

  if (PatientCUR.substring(0,1)!="(") {
    PatientCUR=PatientCUR.substring(10,PatientCUR.length);}

  if (isWhitespace(PatientCUR)) {
    PatientHeadingStr+='</td>';
  } else if (curIPHyperlinkParam==1) { // show hyperlink
    if (curIPHyperlinkOpt==0) { // single hosp
      PatientHeadingStr+='<a class=CurrentIPLink href="../cgi-bin/patweb98.pbl?reportno=01&template=002&urnumber='+PatientURN+'&admissno='+curIPHyperlinkVisit+'" style="color:red;">'+PatientCUR+'</a></td>';
    } else if (curIPHyperlinkOpt==1) { // multi hosp - IP & user log hosp same
      PatientHeadingStr+='<a class=CurrentIPLink href="../cgi-bin/patweb98.pbl?reportno=01&template=002&urnumber='+PatientURN+'&admissno='+curIPHyperlinkVisit+'" style="color:red;">'+PatientCUR+'</a></td>';
    } else if (curIPHyperlinkOpt==2) { // multi hosp - IP & user log hosp diff
      PatientHeadingStr+="<a class=CurrentIPLink href='javascript:AdmissionEnquiryFrame(\""+curIPHyperlinkVisit+"&noreturn=1\");' style='color:red;'>"+PatientCUR+"</a></td>";
    } else {
      PatientHeadingStr+='<font color=red>'+PatientCUR+'</td>';  
    }
  } else { // no hyperlink
    PatientHeadingStr+='<font color=red>'+PatientCUR+'</td>';
  }

  if (isWhitespace(PatientUNT)) {
    PatientHeadingStr+='<td></td><td></td>' }
  else {
    PatientHeadingStr+='<td class=DataLabel align=right>Unit</td>' +
   '    <td class=DataField>' + PatientUNT + '</td>'}

  if (!isWhitespace(PatientVDH)) {
    PatientHeadingStr+='<td></td><td></td>';
  }

  var ePatientAID   = PatientAID.substr(0,20);
  if (!isWhitespace(ePatientAID)) {
    PatientHeadingStr+='<td class=DataLabel align=right>' +
         URDescription + '</td>' +
    '    <td class=PHeadingField align=right>' + ePatientAID}
  else {
    PatientHeadingStr+='<td class=DataLabel align=right>' +
          URDescription + '</td>' +
    '    <td class=PHeadingField align=right>' + PatientURN}

  if (ShowPatientImages) {
    PatientHeadingStr+='</td>' +
    '<td rowspan="2" align="right">' +
    '<a href=\'javascript:DFrameImgLink("' + ImageFile + '",330,250)\'>' +
    '<img name="patimage" height="50" src="' + ImageFile +
    '" style="display: none" ' +
    ' alt="Patient U/R ' + PatientURN + 
    ' title="Patient U/R ' + PatientURN +
    '" onload="showImage(this);"></a>' }

  PatientHeadingStr+='</td></tr>' +
  '<tr><td><table><tr><td class=DataLabel>Date of Birth</td>' +
  '    <td class=DataField >' + PatientDOB +
  '(Age  ' + PatientAGE + ')</td>' +
  '    <td class=DataLabel align=right>'+sexDesc+'</td>' +
  '    <td class=DataField>' + PatientSEX + '</td>';

  if (PatientALT.split("|")[1].length > 0) {
  PatientHeadingStr+='<td class=DataLabel align=right>' + IDGenderDesc +'</td>'+
    '<td class=DataField>' + PatientALT.split("|")[1] + '</td>';
  }

  if (PatientALT.split("|")[2].length > 0) {
  PatientHeadingStr+='<td class=DataLabel align=right>' + PronounDesc + '</td>'+
    '<td class=DataField>' + PatientALT.split("|")[2] + '</td>';
  }

  PatientHeadingStr+='</tr></table></td>';

  if (isWhitespace(PatientCLC)|PatientCLC==".1") {
    PatientHeadingStr+='<td></td><td></td>' }
  else {
    PatientHeadingStr+='<td class=DataLabel align=right>'+ PatientCLH+'</td>' +
    '    <td class=DataField>' + PatientCLC + '</td>'}

  if (isWhitespace(DoctorCOD)) {
    PatientHeadingStr+='<td></td><td></td>' }
  else {
    doctorCode=DoctorCOD.split("|")
    doctorName=DoctorNAM.split("|")
    PatientHeadingStr+='<td class=DataLabel align=right>Clinician</td>' +
    '    <td class=DataField>' +
    '    <a href=\'javascript:DoctorViewFrame("'+ doctorCode[0] + '");\'>' +
    '    ' + doctorName[0] + '</a>' 
    if (!isWhitespace(doctorCode[1])) {
   PatientHeadingStr+='/<a href=\'javascript:DoctorViewFrame("'+ doctorCode[1] +
    '");\'>' +
    '    ' + doctorName[1] + '</a></td>' }}

  if (!isWhitespace(PatientVDH)) {
    PatientHeadingStr+='<td class=DataLabel align=right>Visit Dates</td>'+
      '<td class=DataField>' + PatientVDH + '</td>';
  }

  if (isWhitespace(PatientPRI)) {
    PatientHeadingStr+='<td></td><td></td>';
  }
  else {
    PatientHeadingStr+='<td class=DataLabel align=right>Privacy</td>' +
    '    <td class=DataField>' + PatientPRI + '</td>'
  }

  if (isWhitespace(PatientVIS)||parseInt(PatientVIS,10)==0) {
    PatientHeadingStr+='<td></td><td></td>' }
  else {
    PatientHeadingStr+='<td class=DataLabel align=right>Visit No</td>' +
    '    <td class=PHeadingField align=right>' + PatientVIS + '</td>'  }
  PatientHeadingStr+='</tr></table>' ;
  document.getElementById('PatientHeading').innerHTML=PatientHeadingStr;
}

//------------------------------------------------------------
// Function : Admission Enquiry Frame
//------------------------------------------------------------
function AdmissionEnquiryFrame(i) {
  var LinkToUrl="patweb98.pbl?reportno=01&template=191&urnumber="+PatientURN+"&admissno="+i;
  var PopUpFrameDoc = DFrameStart();
  PopUpFrameDoc.location.href=LinkToUrl;

  var PopUpScreen = document.getElementById('PopUpScreen');
  var PatientMenu = document.getElementById('PatientMenu');
  var top = 0;
  var h;
  var w = getClientWidth() - 100;

  if (PatientMenu) 
  {
    top = PatientMenu.offsetTop+PatientMenu.offsetHeight;
    h   = document.body.clientHeight 
          - PatientMenu.offsetTop - PatientMenu.offsetHeight;
  }
  else 
  {
    top = document.body.scrollTop;
    h   = document.body.clientHeight;
  }

  PopUpScreen.style.top     = top + "px";
  PopUpScreen.style.left    = "50px";
  PopUpScreen.style.height  = h   + "px";
  PopUpScreen.style.width   = w   + "px";
  PopUpScreen.style.display = "";
}

//------------------------------------------------------------
// Return Patient Image URL 
//------------------------------------------------------------
function PatientImageURL(cd,sx) {
  var returnStr="../images/patients/" + cd.replace(/ /g,"") + ".jpg";
  return returnStr;
}
function DoctorImageURL(cd) {
  var returnStr="../images/doctors/" + cd.replace(/ /g,"") + ".jpg";
  return returnStr;
}
//------------------------------------------------------------
// Insert Standard Patient Heading (Small Single Line Version)
//------------------------------------------------------------
function InsertPatientHeaderSml() {
  PatientHeadingStr='<table class="PHeadingSection">' +
  '<tr><td class=PHeadingField>' +
  '    <img src="../images/PatientFolder' +
  PatientSTA.substr(4,1).replace(/ /g,"") + '.gif" ' +
  '     onclick=\'fnPatientLink();\'' +
  '     class="Icon" alt="Patient Details" title="Patient Details"> ' + 
  PatientNAM

  AddAlertIcons()

  PatientHeadingStr+='    <td class=DataLabel align=right>'+sexDesc+'</td>' +
  '    <td class=DataField>' + PatientSEX + '</td>' +
  '    <td class=DataLabel>Date of Birth</td>' +
  '    <td class=DataField>' + PatientDOB + '(Age  ' + PatientAGE + ')</td>' +
  '    <td class=DataLabel align=right>U/R</td>' +
  '    <td class=DataField align=right>' + PatientURN  + "</td>" +
  '    </td></tr>' +
  '</table>' ;
  PatientHeading.innerHTML=PatientHeadingStr;
}

//------------------------------------------------------------
// Add Alert Icons to the Patient Header
//------------------------------------------------------------
function AddAlertIcons() {
  if (typeof PatientHeadingStr == 'undefined') return;

    // Medical, Micro & Risk alert icons...
    if (PatientIND.substr(1,1)=="1") {
      PatientHeadingStr+='<img src="../images/AlertIconM.gif" class="Icon" ' +
                      'onclick=\'PatientLinkTo("patweb98.pbl",1,3,0,0,0);\' ' +
                      'alt="'+ AlertIconMHoverDescription  +
                      '" title="' + AlertIconMHoverDescription +'">'
    }
    if (PatientIND.substr(2,1)=="1") {
      PatientHeadingStr+='<img src="../images/AlertIconB.gif" class="Icon" ' +
                      'onclick=\'PatientLinkTo("patweb98.pbl",1,3,0,0,0);\' ' +
                      'alt="'+ AlertIconBHoverDescription  +
                      '" title="' + AlertIconBHoverDescription +'">'
    }
    if (PatientIND.substr(3,1)=="1") {
      PatientHeadingStr+='<img src="../images/AlertIconR.gif" class="Icon" ' +
                      'onclick=\'PatientLinkTo("patweb98.pbl",1,3,0,0,0);\' ' +
                      'alt="'+ AlertIconRHoverDescription + 
                      '" title="' + AlertIconRHoverDescription +'">'
    }
    if (PatientIND.substr(5,1)=="1") {
      PatientHeadingStr+='<img src="../images/AlertIconC.gif" class="Icon" ' +
                      'onclick=\'PatientLinkTo("patweb98.pbl",1,3,0,0,0);\' ' +
                      'alt="'+ AlertIconCHoverDescription +
                      '" title="' + AlertIconCHoverDescription +'">'
    }

  if (PatientALT.substr(23,1) == 2 || PatientALT.substr(23,1) == 0) {
    // Other Alert icons...
    if (PatientALT.substr(0,1)==1) {
      PatientHeadingStr+='<img src="../images/AlertIcon.gif" class="Icon" ' +
                      'onclick=\'PatientLinkTo("patweb98.pbl",1,3,0,0,0);\' ' +
                      'alt="Alerts" title="Alerts">'
    }
    if (PatientALT.substr(0,1)==2) {
    PatientHeadingStr+='<img src="../images/AlertIconBlack.gif" class="Icon" ' +
                      'onclick=\'PatientLinkTo("patweb98.pbl",1,3,0,0,0);\' ' +
                      'alt="Alerts" title="Alerts">'
    }
    if (PatientALT.substr(0,1)==3) {
    PatientHeadingStr+='<img src="../images/AlertIconDelete.gif" class="Icon" '+
                      'onclick=\'PatientLinkTo("patweb98.pbl",1,3,0,0,0);\' ' +
                      'alt="Alerts" title="Alerts">'
    }

    // 0-UR patient Alert icons...
    if ( PatientALT.substr(0,1) != 0 && PatientALT.substr(0,1) != 1 &&
         PatientALT.substr(0,1) != 2 && PatientALT.substr(0,1) != 3 ) {

      var alertTypeLtr = PatientALT.substr(0,1);

      PatientHeadingStr += '<img src="../images/AlertIcon' + alertTypeLtr +
        '.gif" class="Icon" ' +
        'onclick=\'PatientLinkTo("patweb98.pbl",1,3,0,0,0);\' ';

      if (alertTypeLtr == 'M') {
        PatientHeadingStr += 'alt="Med Alerts" title="Med Alerts">';
      }
      else if (alertTypeLtr == 'B') {
        PatientHeadingStr += 'alt="Micro Alerts" title="Micro Alerts">';
      }
      else if (alertTypeLtr == 'R') {
        PatientHeadingStr += 'alt="Risk Alerts" title="Risk Alerts">';
      }
      else {
        PatientHeadingStr += 'alt="Alerts" title="Alerts">';
      }
    }
  }
 
  // Disability Alert icons...
  if (PatientALT.substr(23,1) == 1 || PatientALT.substr(23,1) == 2) {
      PatientHeadingStr+='<img src="../images/AlertIconDIS.gif" class="Icon" ' +
                      'onclick=\'PatientLinkTo("patweb98.pbl",1,3,0,0,0);\' ' +
                      'alt="Disability Alerts" title="Disability Alerts">'
  }

  if (ShowResultIcon=="true") {
    if (PatientALT.substr(1,1)==1) {
     PatientHeadingStr+='<img src="../images/ResultIcon.gif" class="Icon" ' +
                       'onclick=\'PatientLinkTo("cliweb03.pbl",1,1,0,0,0);\' ' +
                       'alt="Results" title="Results"></a>'}
    if (PatientALT.substr(1,1)==2) {
     PatientHeadingStr+='<img src="../images/UnReadResults.gif" class="Icon" ' +
                       'onclick=\'PatientLinkTo("cliweb03.pbl",1,1,0,0,0);\' ' +
                       'alt="Results" title="Results"></a>'}
  }
  if (PatientALT.substr(2,1)==1) {
   PatientHeadingStr+='<img src="../images/NotesIcon.gif" class="Icon" ' +
                      'onclick=\'PatientLinkTo("patweb98.pbl",1,5,0,0,0);\' ' +
                      'alt="Clinical Notes" title="Clinical Notes"></a>'}
  if (PatientALT.substr(3,1)==1) {
   PatientHeadingStr+='<img src="../images/DocumentsIcon.gif" class="Icon" ' +
                      'onclick=\'PatientLinkTo("cliweb08.pbl",1,1,0,0,0);\' ' +
                     'alt="Clinical Documents" title="Clinical Documents"></a>'}
  if (PatientALT.substr(5,1)=="1") {
   if(DefaultMedRecHospitalAll=="1"){
    PatientHeadingStr+='<img src="../images/MedRecIcon.gif" class="Icon" ' +
      'onclick=\'PatientLinkTo("patweb98.pbl",1,33,0,0,0,0,"filtflag=2");\' ' +
      'alt="Medical Records" title="Medical Records"></a>'}
    else {
     PatientHeadingStr+='<img src="../images/MedRecIcon.gif" class="Icon" ' +
                      'onclick=\'PatientLinkTo("patweb98.pbl",1,33,0,0,0);\' ' +
                      'alt="Medical Records" title="Medical Records"></a>'}
  }
  if (PatientALT.substr(6,1)=="1") {
   PatientHeadingStr+='<font color=red>DECEASED</font>';}
  if (PatientALT.substr(7,1)=="1") {
   PatientHeadingStr+='<img src="../images/BadDebtIcon.gif" class="Icon" ' +
                      'onclick=\'PatientLinkTo("patweb76.pbl",1,5,0,0,0);\' ' +
                      'alt="Bad Debt" title="Bad Debt"></a>'}
  if (PatientALT.substr(8,1)=="1") {
   PatientHeadingStr+='<img src="../images/DebtsIcon.gif" class="Icon" ' +
                      'onclick=\'PatientLinkTo("patweb76.pbl",1,5,0,0,0);\' ' +
                      'alt="Outstanding Debt" title="Outstanding Debt">'}
  if (PatientIND.substr(6,1)=="1") {
   PatientHeadingStr+='<img src="../images/PatDebtOnly.gif" class="Icon" ' +
                      'onclick=\'PatientLinkTo("patweb76.pbl",1,5,0,0,0);\' ' +
                      'alt="Patient Debt Only" title="Patient Debt Only"></a>'}
  if (PatientIND.substr(7,1)=="1") {
   PatientHeadingStr+='<img src="../images/PaymentPlan.gif" class="Icon" ' +
                      'onclick=\'PatientLinkTo("patweb76.pbl",1,5,0,0,0);\' ' +
                      'alt="Set Payment Plan" title="Set Payment Plan"></a>'}
  if (PatientIND.substr(8,1)=="1") {
   PatientHeadingStr+='<img src="../images/DebtAgency.gif" class="Icon" ' +
                      'onclick=\'PatientLinkTo("patweb76.pbl",1,5,0,0,0);\' ' +
             'alt="Debt Collection Agency" title="Debt Collection Agency"></a>'}
  if (PatientALT.substr(12,1)=="1") {
   PatientHeadingStr+='<img src="../images/InterpretorIcon.gif" class="Icon" ' +
                      'onclick=\'PatientLinkTo("patweb92.pbl",12,1,0,0,0);\' ' +
                     'alt="Interpreter Required" title="Interpreter Required">'}
  if (PatientALT.substr(13,1)=="1") {
   PatientHeadingStr+='<img src="../images/OrganIcon.gif" class="Icon" ' +
                      'alt="Organ Donor" title="Organ Donor">'}
  if (PatientALT.substr(14,1)=="1") {
   PatientHeadingStr+='<img src="../images/nfr.gif" class="Icon" ' +
                   'alt="Not for Resuscitation" title="Not for Resuscitation">'}
  if (PatientALT.substr(15,1)=="1") {
  PatientHeadingStr+='<img src="../images/AlternateID_Icon.gif" class="Icon" ' +
                   'onclick=\'PatientLinkTo("patweb07.pbl",1,1,1,550,300);\' ' +
                   'alt="Alternate ID" title="Alternate ID">'}
  if (PatientALT.substr(16,1)=="1") {
   PatientHeadingStr+='<img src="../images/release.gif" class="Icon" ' +
                      'onclick=\'PatientLinkTo("patweb89.pbl",1,30,0,0,0);\' ' +
           'alt="Check Consent Information" title="Check Consent Information">'}
  if (PatientALT.substr(17,1)=="1") {
   PatientHeadingStr+='<img src="../images/suspended.gif" class="Icon" ' +
                   'onclick=\'PatientLinkTo("patweb10.pbl",3,3,0,0,0);\' ' +
                   'alt="Patient Suspended" title="Patient Suspended">'}
  if (PatientALT.substr(18,1)=="1") {
   PatientHeadingStr+='<img src="../images/deaf.gif" class="Icon" ' +
                      'alt="Deaf" title="Deaf">'}
  if (PatientALT.substr(19,1)=="1") {
   PatientHeadingStr+='<img src="../images/docbag1.gif" class="Icon" ' +
                      'onclick=\'HeaderReferralLink();\' ' +
                   'alt="Active ' + MasterReferralDescription + ' Referral" ' +
                   'title="Active ' + MasterReferralDescription + ' Referral">'}
  if (PatientALT.substr(27,1)=="1") {
   PatientHeadingStr+='<img src="../images/docbag2.gif" class="Icon" ' +
                      'onclick=\'HeaderReferralLink();\' ' +
        'alt="Active or Waiting ' + MentalReferralDescription + ' Referral" ' +
        'title="Active or Waiting ' + MentalReferralDescription + ' Referral">'}
  if (PatientALT.substr(20,1)=="1") {
   PatientHeadingStr+='<img src="../images/target1.gif" class="Icon" ' +
                      'onclick=\'if(document.PatientLinks.superlev!=undefined)'+
                      ' {document.PatientLinks.superlev.value=" "}' +
                      ' PatientLinkTo("mehweb01.pbl",9,1,0,0,0);\' ' +
                      'alt="Legal Status" title="Legal Status"></a>'}
  if (PatientALT.substr(20,1)=="2") {
   PatientHeadingStr+='<img src="../images/target2.gif" class="Icon" ' +
                      'onclick=\'if(document.PatientLinks.superlev!=undefined)'+
                      ' {document.PatientLinks.superlev.value=" "}' +
                      ' PatientLinkTo("mehweb01.pbl",9,1,0,0,0);\' ' +
                      'alt="Legal Status" title="Legal Status"></a>'}
  if (PatientALT.substr(21,1)=="1") {
   PatientHeadingStr+='<img src="../images/Transport1.gif" class="Icon" ' +
                      'alt="Transport Required" title="Transport Required">'}
  if (PatientALT.substr(4,1)==1) {
   PatientHeadingStr+='<img src="../images/legacy.gif" class="Icon" ' +
                      'onclick=\'LegacyEnquiryLink("1");\' ' +
                      'alt="Legacy Visits" title="Legacy Visits"></a>'}
  if (PatientALT.substr(4,1)==2) {
   PatientHeadingStr+='<img src="../images/legacy.gif" class="Icon" ' +
                      'onclick=\'LegacyEnquiryLink("2");\' ' +
                      'alt="Legacy Visits" title="Legacy Visits"></a>'}
  if (PatientALT.substr(22,1)=="1") {
   PatientHeadingStr+='<img src="../images/disaster.gif" class="Icon" ' +
                      'onclick=\'PatientLinkTo("disweb01.pbl",2,1,0,0,0);\' ' +
                      'alt="Disaster Codes" title="Disaster Codes"></a>'}
  if (PatientALT.substr(24,1)=="1"&&showBMIHeader) {
   PatientHeadingStr+='<img src="../images/bmi1.png" class="Icon" ' +
                  'onclick=\'PatientLinkTo("patweb07.pbl",17,1,1,700,400);\' ' +
                  'alt="Patient BMI" title="Patient BMI"></a>'}
  if (PatientALT.substr(24,1)=="2"&&showBMIHeader) {
   PatientHeadingStr+='<img src="../images/bmi2.png" class="Icon" ' +
                  'onclick=\'PatientLinkTo("patweb07.pbl",17,1,1,700,400);\' ' +
                  'alt="Patient BMI" title="Patient BMI"></a>'}
  if (PatientALT.substr(24,1)=="3"&&showBMIHeaderNormal) {
   PatientHeadingStr+='<img src="../images/bmi3.png" class="Icon" ' +
                  'onclick=\'PatientLinkTo("patweb07.pbl",17,1,1,700,400);\' ' +
                  'alt="Patient BMI" title="Patient BMI"></a>'}
  if (PatientALT.substr(24,1)=="4"&&showBMIHeaderOverweight) {
   PatientHeadingStr+='<img src="../images/bmi4.png" class="Icon" ' +
                  'onclick=\'PatientLinkTo("patweb07.pbl",17,1,1,700,400);\' '+
                  'alt="Patient BMI" title="Patient BMI"></a>'}
  if (PatientALT.substr(24,1)=="4"&&!showBMIHeaderOverweight&&showBMIHeaderNormal) {
   PatientHeadingStr+='<img src="../images/bmi3.png" class="Icon" ' +
                  'onclick=\'PatientLinkTo("patweb07.pbl",17,1,1,700,400);\' ' +
                  'alt="Patient BMI" title="Patient BMI"></a>'}
  if (PatientALT.substr(25,1)=="1") {
   PatientHeadingStr+='<img src="../images/PCEHR_grey.png" class="Icon" ' +
                  'alt="' + DescriptionPCEHR + 
                  ' is unknown" title="' + DescriptionPCEHR  + 
                  ' is unknown"></a>'}
  if (PatientALT.substr(25,1)=="2") {
   if (showPCEHRURL) {
     PatientHeadingStr+='<img src="../images/PCEHR_red.png" class="Icon" ' +
             'alt="' + DescriptionPCEHR  +
             ' is non-advertised" title="' + DescriptionPCEHR  +
             ' is non-advertised" onClick="getPCEHR()"></a>'
   } else {
     PatientHeadingStr+='<img src="../images/PCEHR_red.png" class="Icon" ' +
             'alt="' + DescriptionPCEHR  +
             ' is non-advertised" title="' + DescriptionPCEHR  +
             ' is non-advertised"></a>'
   }
  }
  if (PatientALT.substr(25,1)=="3") {
    if (showPCEHRURL) {
     PatientHeadingStr+='<a><img src="../images/PCEHR_green.png" class="Icon" '+
                    'alt="' + DescriptionPCEHR + 
                    ' is advertised" onClick="getPCEHR()" ' +
                    'title="Link to ' + DescriptionPCEHR + 
                    ' Summary"></a>'} else {
     PatientHeadingStr+='<a><img src="../images/PCEHR_green.png" class="Icon" '+
                   'alt="' + DescriptionPCEHR + 
                   ' is advertised" title="' +  DescriptionPCEHR + 
                   ' is advertised"></a>'}
  }
  if (PatientALT.substr(26,1)=="D") {
      PatientHeadingStr+='<img src="../images/AdvCareDirective.png" ' +
                      'class="Icon" ' +
                      'onclick=\'PatientLinkTo("patweb03.pbl",4,4,0,0,0);\' ' +
                      'alt="Advance Care Directive" ' +
                      'title="Advance Care Directive">'
  }
  if (PatientALT.substr(28,1)=="1") {
      PatientHeadingStr+='<img src="../images/SMR.png" ' +
                      'class="Icon" ' +
                      'onclick=\'ScannedMRLink();\' ' +
                      'alt="Scanned Medical Record exists" ' +
                      'title="Scanned Medical Record exists">'
  }

  // Multiple Birth icon
  if (PatientALT.substr(30,1)=="1") {
      PatientHeadingStr+='<img src="../images/MultipleBirthIcon.jpg" ' +
                      'class="Icon" ' +
                      'onclick=\'MultipleBirthLink();\' ' +
                      'title="Multiple Birth">'
  }
  
  // Aboriginality Icon
  if (PatientALT.substr(36,1)=='D') {
    PatientHeadingStr+='<img src="../images/aboriginality.png" class="Icon" ' +
                      'alt="Aboriginality" title="Aboriginality">'
  }
  // External Visit Number
  if(typeof PatientAID !=='undefined'){
  var ePatientEVS   = PatientAID.substr(20,20);
  var ePatientEVSNO = trim(ePatientEVS);
  if (ePatientEVSNO.length > 0) {
    PatientHeadingStr+='<small style="font-weight:normal;font-size: 8pt;">' +
                       '  (Ext Visit)&nbsp </small>'+
                       '<b style="color:blue;">('+ePatientEVS+')</b>';
  }
  }
}
//------------------------------------------------------------
// Show advertised PCEHR record in new iFrame           
//------------------------------------------------------------
function getPCEHR(){
  var url = "";
  var protocol  =  location.protocol + "//";
  var serverURL = "../cgi-bin/comweb80.pbl?reportno=98&urnumber=" +
      PatientURN.replace(/ /g,"+")+"&admissno="+PatientVIS.replace(/ /g,"+");
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    url = returnValue.return_value;
    if (url.substr(0,4) == "http") protocol = "";
      url = protocol+url;
  }
  else
    return;

 if(NewWindowPCEHRURL==false){
  var PatientMenu     = document.getElementById('PatientMenu');
  var PatientHeading  = document.getElementById('PatientHeading');
  var PageBodySection = document.getElementById('PageBodySection');

  var upper = PatientMenu.clientHeight + PatientHeading.clientHeight;
  var lower = PageBodySection.clientHeight - 30;
  var width=PageBodySection.clientWidth -20;


  var PopUpFrameDoc = DFrameStart();
  var PopUpScreen = document.getElementById('PopUpScreen');

  PopUpFrame.document.open();
  PopUpFrame.document.write( "<!DOCTYPE  html>\n<html>\n<head>\n" +
  '<link rel="stylesheet" href="../html/standard.css" type="text/css">' + "\n" +
  '<link rel="stylesheet" href="../html/custom.css" type="text/css">' + "\n" +
  '<script type="text/javascript" src="../js/Standard.js"></script>' + "\n" +
  '<script type="text/javascript" src="../js/Custom.js"></script>' + "\n" +
  '<style type="text/css">' + "\n" +
  'iframe.external {width:100%; height:'+lower+'px;margin:0;padding:0;}' + "\n" +
  '</style>' + "\n" +
  '</head>' + "\n" +
  '<span class="DFrameTitleBar">' + "\n" +
  '<img border="0" align="right" src="../images/ExitIcon.gif" ' +
  ' onclick=DFrameExit();>'+"\n"+
  '</span>'+
  '<body onload=PageLoad();>' + "\n" +
  '<div>' +
  '<iframe class="external"  ' +
  'src="' +url + '"></iframe></div>' + "\n" +
  '<div name="PopUpScreen" id="PopUpScreen" style="display: none;">' + "\n" +
  '<iframe scrolling="no" width="100%" height="100%" name="PopUpFrame" id="PopUpFrame"></iframe>' + "\n" +
  '<iframe scrolling="no" style="display: none;" name="PopUpFrame1" id="PopUpFrame1"></iframe>' + "\n" +
  '</div>' + "\n" +
  '</body></html> ');

  PopUpFrame.document.close()

  PopUpScreen.style.top     = upper + 'px';
  PopUpScreen.style.left    = '0px';
  PopUpScreen.style.width   = width + 'px';
  PopUpScreen.style.height  = lower + 'px';
  PopUpScreen.style.margin  = 0;
  PopUpScreen.style.padding = 0;
  PopUpScreen.style.display = "";
  return;
  }
 if(NewWindowPCEHRURL==true){
  url = url.replace("Embedded","");
  MyEHR = window.open(url,"MyEHR","width=1024,height=768,location=no,resizable=yes,scrollbars=yes,status=no,toolbar=no,menubar=no");
  MyEHR.focus();
  return;
  }


}

//------------------------------------------------------------
// Link to multiple birth details
//------------------------------------------------------------
function MultipleBirthLink() {
  PatientLinkTo("patweb07.pbl",21,4,0,0,0);
}
//------------------------------------------------------------
// Link to referral list from the patiet header. Add this
// function to Custom.js to set custom values
//------------------------------------------------------------
function HeaderReferralLink() {
  PatientLinkTo("allweb02.pbl",2,1,0,0,0);
}
//------------------------------------------------------------
// Add CDM Icons to the Patient Header
//------------------------------------------------------------
function AddCDMIcons() {
 if (PatientCDM.substr(0,1)=="1") {
   PatientHeadingStr+='<a href="http://healthware.ibahealth.com/showpatient?'+
                      'urnumber='+PatientURN.replace(/ /g,"")+
                      '&visitnum='+PatientVIS.replace(/ /g,"")+
                      '&showevt=1'+'">' +
                      '<img src="../images/CDM1.jpg" class="Icon" ' +
                      'alt="CDM1" title="CDM1">'}
  if (PatientCDM.substr(0,1)=="2") {
   PatientHeadingStr+='<a href="http://healthware.ibahealth.com/showpatient?'+
                      'urnumber='+PatientURN.replace(/ /g,"")+
                      '&visitnum='+PatientVIS.replace(/ /g,"")+
                      '&showevt=1'+'">' +
                      '<img src="../images/CDM2.jpg" class="Icon" ' +
                      'alt="CDM2" title="CDM2">'}
  if (PatientCDM.substr(1,5)!="     ") {
   PatientHeadingStr+='<a href="http://healthware.ibahealth.com/showpatient?'+
                      'urnumber='+PatientURN.replace(/ /g,"")+
                      '&showevt=1'+
                      '&pathway='+
                       trim(PatientCDM.substr(1,5))+'">' +
                      '<img src="../images/CDM'+ trim(PatientCDM.substr(1,5)) +
                       '.jpg" class="Icon" ' +
                       'alt="CDM'+trim(PatientCDM.substr(1,5))+'"></a>'}
  if (PatientCDM.substr(6,5)!="     ") {
   PatientHeadingStr+='<a href="http://healthware.ibahealth.com/showpatient?'+
                      'urnumber='+PatientURN.replace(/ /g,"")+
                      '&pathway='+
                       trim(PatientCDM.substr(6,5))+'">' +
                      '<img src="../images/CDM'+ trim(PatientCDM.substr(6,5)) +
                       '.jpg" class="Icon" ' +
                       'alt="CDM'+trim(PatientCDM.substr(6,5))+'"></a>'}
  if (PatientCDM.substr(11,5)!="     ") {
   PatientHeadingStr+='<a href="http://healthware.ibahealth.com/showpatient?'+
                      'urnumber='+PatientURN.replace(/ /g,"")+
                      '&pathway='+
                       trim(PatientCDM.substr(11,5))+'">' +
                      '<img src="../images/CDM'+ trim(PatientCDM.substr(11,5)) +
                       '.jpg" class="Icon" ' +
                       'alt="CDM'+trim(PatientCDM.substr(11,5))+'"></a>'}
  if (PatientCDM.substr(16,5)!="     ") {
   PatientHeadingStr+='<a href="http://healthware.ibahealth.com/showpatient?'+
                      'urnumber='+PatientURN.replace(/ /g,"")+
                      '&pathway='+
                       trim(PatientCDM.substr(16,5))+'">' +
                      '<img src="../images/CDM'+ trim(PatientCDM.substr(16,5)) +
                       '.jpg" class="Icon" ' +
                       'alt="CDM'+trim(PatientCDM.substr(16,5))+'"></a>'}
  if (PatientCDM.substr(21,5)!="     ") {
   PatientHeadingStr+='<a href="http://healthware.ibahealth.com/showpatient?'+
                      'urnumber='+PatientURN.replace(/ /g,"")+
                      '&pathway='+
                       trim(PatientCDM.substr(21,5))+'">' +
                      '<img src="../images/CDM'+ trim(PatientCDM.substr(21,5)) +
                       '.jpg" class="Icon" ' +
                       'alt="CDM'+trim(PatientCDM.substr(21,5))+'"></a>'}
  if (PatientCDM.substr(26,5)!="     ") {
   PatientHeadingStr+='<a href="http://healthware.ibahealth.com/showpatient?'+
                      'urnumber='+PatientURN.replace(/ /g,"")+
                      '&pathway='+
                       trim(PatientCDM.substr(26,5))+'">' +
                      '<img src="../images/CDM'+ trim(PatientCDM.substr(26,5)) +
                       '.jpg" class="Icon" ' +
                       'alt="CDM'+trim(PatientCDM.substr(26,5))+'"></a>'}
  if (PatientCDM.substr(31,5)!="     ") {
   PatientHeadingStr+='<a href="http://healthware.ibahealth.com/showpatient?'+
                      'urnumber='+PatientURN.replace(/ /g,"")+
                      '&pathway='+
                       trim(PatientCDM.substr(31,5))+'">' +
                      '<img src="../images/CDM'+ trim(PatientCDM.substr(31,5)) +
                       '.jpg" class="Icon" ' +
                       'alt="CDM'+trim(PatientCDM.substr(31,5))+'"></a>'}
  if (PatientCDM.substr(36,5)!="     ") {
   PatientHeadingStr+='<a href="http://healthware.ibahealth.com/showpatient?'+
                      'urnumber='+PatientURN.replace(/ /g,"")+
                      '&pathway='+
                       trim(PatientCDM.substr(36,5))+'">' +
                      '<img src="../images/CDM'+ trim(PatientCDM.substr(36,5)) +
                       '.jpg" class="Icon" ' +
                       'alt="CDM'+trim(PatientCDM.substr(36,5))+'"></a>'}
  if (PatientCDM.substr(41,5)!="     ") {
   PatientHeadingStr+='<a href="http://healthware.ibahealth.com/showpatient?'+
                      'urnumber='+PatientURN.replace(/ /g,"")+
                      '&pathway='+
                       trim(PatientCDM.substr(41,5))+'">' +
                      '<img src="../images/CDM'+ trim(PatientCDM.substr(41,5)) +
                       '.jpg" class="Icon" ' +
                       'alt="CDM'+trim(PatientCDM.substr(41,5))+'"></a>'}
  if (PatientCDM.substr(46,5)!="     ") {
   PatientHeadingStr+='<a href="http://healthware.ibahealth.com/showpatient?'+
                      'urnumber='+PatientURN.replace(/ /g,"")+
                      '&pathway='+
                       trim(PatientCDM.substr(46,5))+'">' +
                      '<img src="../images/CDM'+ trim(PatientCDM.substr(46,5)) +
                       '.jpg" class="Icon" ' +
                       'alt="CDM'+trim(PatientCDM.substr(46,5))+'"></a>'}
//
// Visit Based CDM Icons
//
  if (PatientCDM.substr(51,1)=="1") {
   PatientHeadingStr+='<a href="http://healthware.ibahealth.com/showpatient?'+
                      'urnumber='+PatientURN.replace(/ /g,"")+
                      '&visitnum='+PatientVIS.replace(/ /g,"")+
                      '&visittime='+trim(PatientCDM.substr(102,8))+
                      '&showevt=1'+'">' +
                      '<img src="../images/CDME1.jpg" class="Icon" ' +
                      'alt="CDME1" title="CDME1">'}
  if (PatientCDM.substr(51,1)=="2") {
   PatientHeadingStr+='<a href="http://healthware.ibahealth.com/showpatient?'+
                      'urnumber='+PatientURN.replace(/ /g,"")+
                      '&visitnum='+PatientVIS.replace(/ /g,"")+
                      '&visittime='+trim(PatientCDM.substr(102,8))+
                      '&showevt=1'+'">' +
                      '<img src="../images/CDME2.jpg" class="Icon" ' +
                      'alt="CDME2" title="CDME2">'}
  if (!isWhitespace(PatientCDM.substr(52,5))) {
   PatientHeadingStr+='<a href="http://healthware.ibahealth.com/showpatient?'+
                     'urnumber='+PatientURN.replace(/ /g,"")+
                     '&visitnum='+PatientVIS.replace(/ /g,"")+
                     '&visittime='+trim(PatientCDM.substr(102,8))+
                     '&showevt=1'+
                     '&pathways='+
                      trim(PatientCDM.substr(52,5))+'">' +
                     '<img src="../images/CDME'+ trim(PatientCDM.substr(52,5)) +
                      '.jpg" class="Icon" ' +
                      'alt="CDME'+trim(PatientCDM.substr(52,5))+'"></a>'}
  if (!isWhitespace(PatientCDM.substr(57,5))) {
   PatientHeadingStr+='<a href="http://healthware.ibahealth.com/showpatient?'+
                     'urnumber='+PatientURN.replace(/ /g,"")+
                     '&visitnum='+PatientVIS.replace(/ /g,"")+
                     '&visittime='+trim(PatientCDM.substr(102,8))+
                     '&showevt=1'+
                     '&pathways='+
                      trim(PatientCDM.substr(57,5))+'">' +
                     '<img src="../images/CDME'+ trim(PatientCDM.substr(57,5)) +
                     '.jpg" class="Icon" ' +
                     'alt="CDME'+trim(PatientCDM.substr(57,5))+'"></a>'}
  if (!isWhitespace(PatientCDM.substr(62,5))) {
   PatientHeadingStr+='<a href="http://healthware.ibahealth.com/showpatient?'+
                     'urnumber='+PatientURN.replace(/ /g,"")+
                     '&visitnum='+PatientVIS.replace(/ /g,"")+
                     '&visittime='+trim(PatientCDM.substr(102,8))+
                     '&showevt=1'+
                     '&pathways='+
                      trim(PatientCDM.substr(62,5))+'">' +
                     '<img src="../images/CDME'+ trim(PatientCDM.substr(62,5))+
                     '.jpg" class="Icon" ' +
                     'alt="CDME'+trim(PatientCDM.substr(62,5))+'"></a>'}
  if (!isWhitespace(PatientCDM.substr(67,5))) {
   PatientHeadingStr+='<a href="http://healthware.ibahealth.com/showpatient?'+
                     'urnumber='+PatientURN.replace(/ /g,"")+
                     '&visitnum='+PatientVIS.replace(/ /g,"")+
                     '&visittime='+trim(PatientCDM.substr(102,8))+
                     '&showevt=1'+
                     '&pathways='+
                      trim(PatientCDM.substr(67,5))+'">' +
                     '<img src="../images/CDME'+ trim(PatientCDM.substr(67,5))+
                     '.jpg" class="Icon" ' +
                     'alt="CDME'+trim(PatientCDM.substr(67,5))+'"></a>'}
  if (!isWhitespace(PatientCDM.substr(72,5))) {
   PatientHeadingStr+='<a href="http://healthware.ibahealth.com/showpatient?'+
                     'urnumber='+PatientURN.replace(/ /g,"")+
                     '&visitnum='+PatientVIS.replace(/ /g,"")+
                     '&visittime='+trim(PatientCDM.substr(102,8))+
                     '&showevt=1'+
                     '&pathways='+
                      trim(PatientCDM.substr(72,5))+'">' +
                     '<img src="../images/CDME'+ trim(PatientCDM.substr(72,5))+
                     '.jpg" class="Icon" ' +
                     'alt="CDME'+trim(PatientCDM.substr(72,5))+'"></a>'}
  if (!isWhitespace(PatientCDM.substr(77,5))) {
   PatientHeadingStr+='<a href="http://healthware.ibahealth.com/showpatient?'+
                     'urnumber='+PatientURN.replace(/ /g,"")+
                     '&visitnum='+PatientVIS.replace(/ /g,"")+
                     '&visittime='+trim(PatientCDM.substr(102,8))+
                     '&showevt=1'+
                     '&pathways='+
                      trim(PatientCDM.substr(77,5))+'">' +
                     '<img src="../images/CDME'+ trim(PatientCDM.substr(77,5))+
                     '.jpg" class="Icon" ' +
                     'alt="CDME'+trim(PatientCDM.substr(77,5))+'"></a>'}
  if (!isWhitespace(PatientCDM.substr(82,5))) {
   PatientHeadingStr+='<a href="http://healthware.ibahealth.com/showpatient?'+
                     'urnumber='+PatientURN.replace(/ /g,"")+
                     '&visitnum='+PatientVIS.replace(/ /g,"")+
                     '&visittime='+trim(PatientCDM.substr(102,8))+
                     '&showevt=1'+
                     '&pathways='+
                      trim(PatientCDM.substr(82,5))+'">' +
                     '<img src="../images/CDME'+ trim(PatientCDM.substr(82,5))+
                     '.jpg" class="Icon" ' +
                     'alt="CDME'+trim(PatientCDM.substr(82,5))+'"></a>'}
  if (!isWhitespace(PatientCDM.substr(87,5))) {
   PatientHeadingStr+='<a href="http://healthware.ibahealth.com/showpatient?'+
                     'urnumber='+PatientURN.replace(/ /g,"")+
                     '&visitnum='+PatientVIS.replace(/ /g,"")+
                     '&visittime='+trim(PatientCDM.substr(102,8))+
                     '&showevt=1'+
                     '&pathways='+
                      trim(PatientCDM.substr(87,5))+'">' +
                     '<img src="../images/CDME'+ trim(PatientCDM.substr(87,5))+
                     '.jpg" class="Icon" ' +
                     'alt="CDME'+trim(PatientCDM.substr(87,5))+'"></a>'}
//
  if (!isWhitespace(PatientCDM.substr(92,5))) {
   PatientHeadingStr+='<a href="http://healthware.ibahealth.com/showpatient?'+
                     'urnumber='+PatientURN.replace(/ /g,"")+
                     '&visitnum='+PatientVIS.replace(/ /g,"")+
                     '&visittime='+trim(PatientCDM.substr(102,8))+
                     '&showevt=1'+
                     '&pathways='+
                      trim(PatientCDM.substr(92,5))+'">' +
                     '<img src="../images/CDME'+ trim(PatientCDM.substr(92,5))+
                     '.jpg" class="Icon" ' +
                     'alt="CDME'+trim(PatientCDM.substr(92,5))+'"></a>'}
  if (!isWhitespace(PatientCDM.substr(97,5))) {
   PatientHeadingStr+='<a href="http://healthware.ibahealth.com/showpatient?'+
                     'urnumber='+PatientURN.replace(/ /g,"")+
                     '&visitnum='+PatientVIS.replace(/ /g,"")+
                     '&visittime='+trim(PatientCDM.substr(102,8))+
                     '&showevt=1'+
                     '&pathways='+
                      trim(PatientCDM.substr(97,5))+'">' +
                     '<img src="../images/CDME'+ trim(PatientCDM.substr(97,5))+
                     '.jpg" class="Icon" ' +
                     'alt="CDME'+trim(PatientCDM.substr(97,5))+'"></a>'}
}
function VisitCDM(record) {
  record=record.replace(/\+/g," ");
  linkurl="http://healthware.ibahealth.com/showpatient?"+
          "urnumber="+trim(record.substr(0,8))+
          "&visitnum="+trim(record.substr(8,8))+
          "&visittime="+trim(record.substr(16,8))+ "&showevt=11"
  location.href=linkurl
}
//----------------------------------------------------------------------------
// Function : Legacy Enquiry Link
// Opens the Legacy Visits List screen in a new browser window.
//----------------------------------------------------------------------------
function LegacyEnquiryLink(LegacyNo) {
 if(!optUsingSecurityGroups) {
   var path = "../html/all/legacy.html";
 } else {
  if(!getTop().location.pathname.match(/EmergencyMap/g)) {
    var path=getTop().menu.location.href;
    for (var j=path.length;j;j--) {
         if (path.substr((j-1),1) == "/") break;
    }
    path = path.substr(0,j) + "legacy.html";
  } else {
    UserIBALoginURL=GetCookieData("IBALoginURL");
    if(isWhitespace(UserIBALoginURL) || UserIBALoginURL=="unknown") {
      var serverURL   = "../cgi-bin/comweb80.pbl?reportno=37"
      var returnValue = RSExecute(serverURL);
      if (returnValue.status==0) {
        document.cookie = "IBALoginURL"+"="+escape(returnValue.return_value)+";"
        UserIBALoginURL=GetCookieData("IBALoginURL");
      }
    }
    var j=UserIBALoginURL.length;
    if(UserIBALoginURL.substr((j-1),1) != "/") {
      var path = UserIBALoginURL +"/legacy.html";
    } else {
      var path = UserIBALoginURL +"legacy.html";
    }
  }
 }
 window.LegacyNo=LegacyNo;
 var urlLoc = path;
 var winName = "legweb0" + LegacyNo + document.PatientLinks.urnumber.value.replace(/ /g,"_");

 LegacyWin = window.open(urlLoc,winName," width=1020 height=768 location=no resizable=yes");
 LegacyWin.focus();

 //setTimeout('ShowLegacyVisits(LegacyWin,LegacyNo)',1000);
}

function ShowLegacyVisits(winref,servno) {
  var Urnumber = document.PatientLinks.urnumber.value.replace(/ /g,"+");
  if (servno==2) {
    var hrefLoc = "legweb02.pbl?reportno=1&template=001&urnumber=" + Urnumber;}
  else {
    var hrefLoc = "legweb01.pbl?reportno=1&template=001&urnumber=" + Urnumber;}
  winref.content.location.href = hrefLoc;
}

//------------------------------------------------------------
// Function : Format Patient Icon
//------------------------------------------------------------
function FormatPatientIcon() {
  ImageStr='PatientFolder' + PatientSTA.substr(0,3) + '.gif'
  return ImageStr;
}

//------------------------------------------------------------
// Function : Visit Search Frame
//------------------------------------------------------------
function VisitSearchFrame(Urnumber,ReturnCode) 
{
  if (isWhitespace(Urnumber.value)) 
  {
     alert("Patient Not Identified");
     return; 
  }
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  PopUpFrameDoc.location.href = "patweb98.pbl?reportno=1&template=251"+
                                "&srchview=1" +
                                "&urnumber=" + Urnumber.value.replace(/ /g,"+")
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Visit Search Frame Out
//------------------------------------------------------------
function VisitSearchFrameOut(Urnumber,ReturnCode,ReturnSite) 
{
  if (isWhitespace(Urnumber.value)) 
  {
     alert("Patient Not Identified");
     return; 
  }
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnSite=ReturnSite ;
  PopUpFrameDoc.location.href = "patweb98.pbl?reportno=1&template=256"+
                                "&srchview=1" +
                                "&filtvtyp=3" +
                                "&urnumber=" + Urnumber.value.replace(/ /g,"+")
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Waiting/Active Referal by department & HCP Search Frame
//------------------------------------------------------------
function WaitActiveRefList(dp,doc,ReturnUR,ReturnREF) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnUR=ReturnUR ;
  window.ReturnREF=ReturnREF ;
  window.ReturnFunction="";
  if (WaitActiveRefList.arguments.length > 3) {
    window.ReturnFunction=WaitActiveRefList.arguments[4] }

  PopUpFrameDoc.location.href = "allweb02.pbl?reportno=01&template=020" +
          "&deptcode=" + dp.value.replace(/ /g,"+") +
          "&doctcode=" + doc.value.replace(/ /g,"+") +
          "&tmotfrst=10&tmotnext=10";

  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Visit Search Frame AlliedHealth
//------------------------------------------------------------
function VisitSearchFrameAll(Urnumber,ReturnCode,ReturnSite) 
{
  if (isWhitespace(Urnumber.value)) {
     alert("Patient Not Identified"); return; }
  DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnSite=ReturnSite ;
  document.getElementById('PopUpFrame').src ="patweb98.pbl?reportno=1&template=259"+
                              "&srchview=1" +
                              "&filtvtyp=6" +
                              "&urnumber=" + Urnumber.value.replace(/ /g,"+")
  SearchFrameShow();
}
//------------------------------------------------------------
// Function : Visit Search Frame AlliedHealth Waiting and Active
//------------------------------------------------------------
function VisitSearchFrameAll2(Urnumber,ReturnCode,ReturnSite)
{
  if (isWhitespace(Urnumber.value)) {
     alert("Patient Not Identified"); return; }
  DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnSite=ReturnSite ;
  document.getElementById('PopUpFrame').src ="patweb98.pbl?reportno=1&template=260"+
                              "&srchview=1" +
                              "&filtvtyp=11" +
                              "&urnumber=" + Urnumber.value.replace(/ /g,"+")
  SearchFrameShow();
}
//------------------------------------------------------------
// Insert Emergency Patient Heading
//------------------------------------------------------------
function InsertEmergencyHeader() 
{
  //  if(TypeOfEmergencyHeader==0){
  //    StandardEmergencyHeader();
  //  } else {
  //    SVHMEmergencyHeader();
  //  }
  switch(TypeOfEmergencyHeader) 
  {
    case "0": {StandardEmergencyHeader();break;}
    case "1": {SVHMEmergencyHeader();break;}
    case "2": {BHSEmergencyHeader();break;}
    case "3": {HEAEmergencyHeader();break;}
  }
}

//------------------------------------------------------------
// Standard Emergency Patient Heading
//------------------------------------------------------------
function StandardEmergencyHeader() {
  PatientHeadingStr='<table class="PHeadingSection">' +
  '<tr><td class=PHeadingField>' +
  '    <img src="../images/PatientFolder' + PatientSTA + '.gif" ' +
  '     onclick=\'fnPatientLink();\'' +
  '     class="Icon" alt="Patient Details" title="Patient Details"> ' +
  PatientNAM;

  AddAlertIcons()

  ImageFile = PatientImageURL(PatientURN,PatientSEX);

  if (isWhitespace(PatientLOC)) {
    PatientHeadingStr+='<td></td><td></td>' }
  else {
    PatientHeadingStr+='<td class=DataLabel align=right>Location</td>' +
    '    <td class=DataField>' + PatientLOC + '</td>'}

  if (isWhitespace(PatientARR)) {
    PatientHeadingStr+='<td></td><td></td>' }
  else {
    PatientHeadingStr+='<td class=DataLabel align=right>Arrival</td>' +
    '    <td class=DataField>' + PatientARR + '</td>'
  }

  PatientHeadingStr+='<td class=DataLabel align=right>' +
       URDescription + '</td>' +
  '    <td class=PHeadingField align=right>' + PatientURN

  if (ShowPatientImages) {
    PatientHeadingStr+='</td>' +
    '<td rowspan="2" align="right">' +
    '<a href=\'javascript:DFrameImgLink("' + ImageFile + '",330,250)\'>' +
    '<img name="patimage" height="50" src="' + ImageFile +
    '" style="display: none" ' +
    ' alt="Patient U/R ' + PatientURN + '"' +
    ' title="Patient U/R ' + PatientURN + '" onload="showImage(this);"></a>' }

  PatientHeadingStr+='</td></tr>' +
  '<tr><td><table><tr><td class=DataLabel>Date of Birth</td>' +
  '    <td class=DataField >' + PatientDOB +
  '(Age  ' + PatientAGE + ')</td>' +
  '    <td class=DataLabel align=right>'+sexDesc+'</td>' +
  '    <td class=DataField>' + PatientSEX + '</td>';

  if (PatientALT.split("|")[1].length > 0) {
  PatientHeadingStr+='<td class=DataLabel align=right>' + IDGenderDesc +'</td>'+
    '<td class=DataField>' + PatientALT.split("|")[1] + '</td>';
  }

  if (PatientALT.split("|")[2].length > 0) {
  PatientHeadingStr+='<td class=DataLabel align=right>' + PronounDesc + '</td>'+
    '<td class=DataField>' + PatientALT.split("|")[2] + '</td>';
  }

  PatientHeadingStr+='</tr></table></td>';

  if (isWhitespace(GpCOD)) {
    PatientHeadingStr+='<td></td><td></td>' }
  else {
    PatientHeadingStr+='<td class=DataLabel align=right>GP</td>' +
    '    <td class=DataField>' +
    '    <a href=\'javascript:HCPViewFrame("'+ GpCOD + '");\'>';
    
    if (GpNAM.length > 13) {
      PatientHeadingStr += GpNAM.substr(0,10)+"...";
    } else {
      PatientHeadingStr += GpNAM;
    }
    
    PatientHeadingStr += '</a></td>';
  }

  if (isWhitespace(PatientSEE)) {
    PatientHeadingStr+='<td></td><td></td>' }
  else {
    PatientHeadingStr+='<td class=DataLabel align=right>Seen</td>' +
    '    <td class=DataField>' + PatientSEE + '</td>'  }

  if (isWhitespace(PatientVIS)||parseInt(PatientVIS,10)==0) {
    PatientHeadingStr+='<td></td><td></td>' }
  else {
    PatientHeadingStr+='<td class=DataLabel align=right>Visit No</td>' +
    '    <td class=DataField align=right>' + PatientVIS + '</td>'  }

  PatientHeadingStr+='</tr></table>' ;
  PatientHeading.innerHTML=PatientHeadingStr;
}
//------------------------------------------------------------
// SVHM Emergency Patient Heading
//------------------------------------------------------------
function SVHMEmergencyHeader() {
  PatientHeadingStr='<table class="PHeadingSection">' +
  '<tr><td class=PHeadingField wrap>' +
  '    <img src="../images/PatientFolder' + PatientSTA + '.gif" ' +
  '     onclick=\'fnPatientLink();\'' +
  '     class="Icon" alt="Patient Details" title="Patient Details"> ' +
  PatientNAM;

  AddAlertIcons()

  ImageFile = PatientImageURL(PatientURN,PatientSEX);

  if (isWhitespace(PatientARR)) {
    PatientHeadingStr+='<td></td><td></td>' }
  else {
    PatientHeadingStr+='<td class=DataLabel align=right>Arrival</td>' +
    '    <td class=DataField wrap>' + PatientARR + '</td>' 
  }

  if (isWhitespace(PatientTRI.substr(3,1))) {
    PatientHeadingStr+='<td></td><td></td>' }
  else {
    PatientHeadingStr+='<td class=DataLabel align=right wrap>Triage Category</td>' +
    '    <td class=DataField>' + PatientTRI.substr(3,1) + '</td>' 
  }

  if (isWhitespace(GpCOD)) {
    if(!isWhitespace(GpPRAC)) {
      PatientHeadingStr+='<td class=DataLabel align=right>GP Practice</td>' +
      '    <td class=DataField wrap>' +
      '    <a href=\'javascript:HCPViewFrame("'+ GpCOD + '","' + GpPRAC +
                                             '","' + GpPRACCNT + '");\'>';
      if (GpPRACNAM.length > 13) {
        PatientHeadingStr += GpPRACNAM.substr(0,10)+"...";
      } else {
        PatientHeadingStr += GpPRACNAM;
      }

      PatientHeadingStr += '</a></td>';

    } else {
      PatientHeadingStr+='<td></td><td></td>'
    }
  } else {
    PatientHeadingStr+='<td class=DataLabel align=right>GP</td>' +
    '    <td class=DataField wrap>' +
    '    <a href=\'javascript:HCPViewFrame("'+ GpCOD + '","' + GpPRAC +
                                           '","' + GpPRACCNT + '");\'>';

    if (GpNAM.length > 13) {
      PatientHeadingStr += GpNAM.substr(0,10)+"...";
    } else {
      PatientHeadingStr += GpNAM;
    }

    PatientHeadingStr += '</a></td>';
  }

  PatientHeadingStr+='<td class=DataLabel align=right>' +
       URDescription + '</td>' +
  '    <td class=PHeadingField align=right>' + PatientURN

  if (ShowPatientImages) {
    PatientHeadingStr+='</td>' +
    '<td rowspan="2" align="right">' +
    '<a href=\'javascript:DFrameImgLink("' + ImageFile + '",330,250)\'>' +
    '<img name="patimage" height="50" src="' + ImageFile +
    '" style="display: none" ' +
    ' alt="Patient U/R ' + PatientURN + '"' +
    ' title="Patient U/R ' + PatientURN + '" onload="showImage(this);"></a>' }

  PatientHeadingStr+='</td></tr>' +
  '<tr><td><table><tr><td class=DataLabel wrap>Date of Birth</td>' +
  '    <td class=DataField wrap>' + PatientDOB +
  '(Age  ' + PatientAGE + ')</td>' +
  '    <td class=DataLabel align=right>'+sexDesc+'</td>' +
  '    <td class=DataField>' + PatientSEX + '</td>';

  if (PatientALT.split("|")[1].length > 0) {
  PatientHeadingStr+='<td class=DataLabel align=right>' + IDGenderDesc +'</td>'+
    '<td class=DataField>' + PatientALT.split("|")[1] + '</td>';
  }

  if (PatientALT.split("|")[2].length > 0) {
  PatientHeadingStr+='<td class=DataLabel align=right>' + PronounDesc + '</td>'+
    '<td class=DataField>' + PatientALT.split("|")[2] + '</td>';
  }

  PatientHeadingStr+='</tr></table></td>';

  if (isWhitespace(PatientSEE)) {
    PatientHeadingStr+='<td></td><td></td>' }
  else {
    PatientHeadingStr+='<td class=DataLabel align=right>Seen</td>' +
    '    <td class=DataField>' + PatientSEE + '</td>'  }

  if (isWhitespace(PatientLOC)) {
    PatientHeadingStr+='<td></td><td></td>' }
  else {
    PatientHeadingStr+='<td class=DataLabel align=right>Location</td>' +
    '    <td class=DataField wrap>' + PatientLOC + '</td>'}

  if (isWhitespace(PatientECLC)) {
    PatientHeadingStr+='<td class=DataLabel>&nbsp</td>' +
    '    <td class=DataField>&nbsp</td>'
  } else {
    PatientHeadingStr+='<td class=DataLabel>'+PatientCLH+'</td>' +
    '    <td class=DataField>'+PatientECLC+'</td>'
  }

  if (isWhitespace(PatientVIS)||parseInt(PatientVIS,10)==0) {
    PatientHeadingStr+='<td></td><td></td>' }
  else {
    PatientHeadingStr+='<td class=DataLabel align=right wrap>Visit No</td>' +
    '    <td class=DataField align=right>' + PatientVIS + '</td>'  }

  PatientHeadingStr+='</tr></table>' ;
  PatientHeading.innerHTML=PatientHeadingStr;
}
//------------------------------------------------------------
// BHS Emergency Patient Heading
//------------------------------------------------------------
function BHSEmergencyHeader() {
  PatientHeadingStr='<table class="PHeadingSection">' +
  '<tr><td class=PHeadingField nowrap>' +
  '    <img src="../images/PatientFolder' + PatientSTA + '.gif" ' +
  '     onclick=\'fnPatientLink();\'' +
  '     class="Icon" alt="Patient Details" title="Patient Details"> ' +
  PatientNAM;
  
  AddAlertIcons()
  
  ImageFile = PatientImageURL(PatientURN,PatientSEX);
  
  if (isWhitespace(PatientARR)) {
    PatientHeadingStr+='<td></td><td></td>' }
  else {
    PatientHeadingStr+='<td class=DataLabel align=right>Arrival</td>' +
    '    <td class=DataField nowrap>' + PatientARR + '</td>'
  }

  if (isWhitespace(PatientTRI.substr(3,1))) {
    PatientHeadingStr+='<td></td><td></td>' }
  else {
    PatientHeadingStr+='<td class=DataLabel align=right nowrap>Triage Category</td>' +
    '    <td class=DataField>' + PatientTRI.substr(3,1) + '</td>'
  }

  if (isWhitespace(GpCOD)) {
    PatientHeadingStr+='<td></td><td></td>' }
  else {
    PatientHeadingStr+='<td class=DataLabel align=right>GP</td>' +
    '    <td class=DataField nowrap>' +
    '    <a href=\'javascript:HCPViewFrame("'+ GpCOD + '");\'>' +
    '    ' + GpNAM + '</a></td>' }

  PatientHeadingStr+='<td></td><td></td>'

  PatientHeadingStr+='<td class=DataLabel align=right>' +
       URDescription + '</td>' +
  '    <td class=PHeadingField align=right>' + PatientURN

  if (ShowPatientImages) {
    PatientHeadingStr+='</td>' +
    '<td rowspan="2" align="right">' +
    '<a href=\'javascript:DFrameImgLink("' + ImageFile + '",330,250)\'>' +
    '<img name="patimage" height="50" src="' + ImageFile +
    '" style="display: none" ' +
    ' alt="Patient U/R ' + PatientURN + '"' +
    ' title="Patient U/R ' + PatientURN + '" onload="showImage(this);"></a>' }

  PatientHeadingStr+='</td></tr>' +
  '<tr><td><table><tr><td class=DataLabel nowrap>Date of Birth</td>' +
  '    <td class=DataField nowrap>' + PatientDOB +
  '(Age  ' + PatientAGE + ')</td>' +
  '    <td class=DataLabel align=right>'+sexDesc+'</td>' +
  '    <td class=DataField>' + PatientSEX + '</td>';

  if (PatientALT.split("|")[1].length > 0) {
  PatientHeadingStr+='<td class=DataLabel align=right>' + IDGenderDesc +'</td>'+
    '<td class=DataField>' + PatientALT.split("|")[1] + '</td>';
  }

  if (PatientALT.split("|")[2].length > 0) {
  PatientHeadingStr+='<td class=DataLabel align=right>' + PronounDesc + '</td>'+
    '<td class=DataField>' + PatientALT.split("|")[2] + '</td>';
  }

  PatientHeadingStr+='</tr></table></td>';

  if (isWhitespace(PatientSEE)) {
    PatientHeadingStr+='<td></td><td></td>' }
  else {
    PatientHeadingStr+='<td class=DataLabel align=right>Seen</td>' +
    '    <td class=DataField>' + PatientSEE + '</td>'  }

  if (isWhitespace(PatientECLC)) {
    PatientHeadingStr+='<td class=DataLabel>&nbsp</td>' +
    '    <td class=DataField>&nbsp</td>'
  } else {
    PatientHeadingStr+='<td class=DataLabel align=right>'+PatientCLH+'</td>' +
    '    <td class=DataField>'+PatientECLC+'</td>'
  }

  if (isWhitespace(PatientLOC)) {
    PatientHeadingStr+='<td></td><td></td>' }
  else {
    PatientHeadingStr+='<td class=DataLabel align=right>Location</td>' +
    '    <td class=DataField nowrap>' + PatientLOC + '</td>'}

  if (isWhitespace(PatientEHFT)) {
    PatientHeadingStr+='<td class=DataLabel>&nbsp</td>' +
    '    <td class=DataField>&nbsp</td>'
  } else {
    PatientHeadingStr+='<td class=DataLabel>HF/T</td>' +
    '    <td class=DataField>'+PatientEHFT+'</td>'
  }

  if (isWhitespace(PatientVIS)||parseInt(PatientVIS,10)==0) {
    PatientHeadingStr+='<td></td><td></td>' }
  else {
    PatientHeadingStr+='<td class=DataLabel align=right nowrap>Visit No</td>' +
    '    <td class=DataField align=right>' + PatientVIS + '</td>'  }

  PatientHeadingStr+='</tr></table>' ;
  document.getElementById('PatientHeading').innerHTML=PatientHeadingStr;
}
//------------------------------------------------------------
// HEA Emergency Patient Heading
//------------------------------------------------------------
function HEAEmergencyHeader() {
  PatientHeadingStr='<table class="PHeadingSection">' +
  '<tr><td class=PHeadingField nowrap>' +
  '    <img src="../images/PatientFolder' + PatientSTA + '.gif" ' +
  '     onclick=\'fnPatientLink();\'' +
  '     class="Icon" alt="Patient Details" title="Patient Details"> ' +
  PatientNAM;

  AddAlertIcons()

  ImageFile = PatientImageURL(PatientURN,PatientSEX);
  
  PatientHeadingStr+='</td>';
  if (isWhitespace(PatientEHFT)) {
    PatientHeadingStr+='<td class=DataLabel>&nbsp</td>' +
    '    <td class=DataField>&nbsp</td>'
  } else {
    PatientHeadingStr+='<td class=DataLabel>HF/T</td>' +
    '    <td class=DataField>'+PatientEHFT+'</td>'
  }
  if (isWhitespace(PatientARR)) {
    PatientHeadingStr+='<td></td><td></td>' }
  else {
    PatientHeadingStr+='<td class=DataLabel align=right>Arrival</td>' +
    '    <td class=DataField nowrap>' + PatientARR + '</td>'
  }

  if (isWhitespace(PatientTRI.substr(3,1))) {
    PatientHeadingStr+='<td></td><td></td>' }
  else {
    PatientHeadingStr+='<td class=DataLabel align=right nowrap>Triage' +
    '</td>' +
    '    <td class=DataField>' + PatientTRI.substr(3,1) + '</td>'
  }

  if (isWhitespace(GpCOD)) {
    if(!isWhitespace(GpPRAC)) {
      PatientHeadingStr+='<td class=DataLabel align=right>GP Practice</td>' +
      '    <td class=DataField nowrap>' +
      '    <a href=\'javascript:HCPViewFrame("'+ GpCOD + '","' + GpPRAC +
                                             '","' + GpPRACCNT + '");\'>';
      if (GpPRACNAM.length > 13) {
        PatientHeadingStr += GpPRACNAM.substr(0,10)+"...";
      } else {
        PatientHeadingStr += GpPRACNAM;
      }

      PatientHeadingStr += '</a></td>';

    } else {
      PatientHeadingStr+='<td></td><td></td>'
    }
  } else {
    PatientHeadingStr+='<td class=DataLabel align=right>GP</td>' +
    '    <td class=DataField nowrap>' +
    '    <a href=\'javascript:HCPViewFrame("'+ GpCOD + '","' + GpPRAC +
                                           '","' + GpPRACCNT + '");\'>';

    if (GpNAM.length > 13) {
      PatientHeadingStr += GpNAM.substr(0,10)+"...";
    } else {
      PatientHeadingStr += GpNAM;
    }

    PatientHeadingStr += '</a></td>';
  }

  PatientHeadingStr+='<td class=DataLabel align=right>' +
       URDescription + '</td>' +
  '    <td class=PHeadingField align=right>' + PatientURN

  if (ShowPatientImages) {
    PatientHeadingStr+='</td>' +
    '<td rowspan="2" align="right">' +
    '<a href=\'javascript:DFrameImgLink("' + ImageFile + '",330,250)\'>' +
    '<img name="patimage" height="50" src="' + ImageFile +
    '" style="display: none" ' +
    ' alt="Patient U/R ' + PatientURN + '"' +
    ' title="Patient U/R ' + PatientURN + '" onload="showImage(this);"></a>' }

  PatientHeadingStr+='</td></tr>' +
  '<tr><td><table><tr><td class=DataLabel nowrap>Date of Birth</td>' +
  '    <td class=DataField nowrap>' + PatientDOB +
  '(Age  ' + PatientAGE + ')</td>' +
  '    <td class=DataLabel align=right>'+sexDesc+'</td>' +
  '    <td class=DataField>' + PatientSEX + '</td>';

  if (PatientALT.split("|")[1].length > 0) {
  PatientHeadingStr+='<td class=DataLabel align=right>' + IDGenderDesc +'</td>'+
    '<td class=DataField>' + PatientALT.split("|")[1] + '</td>';
  }

  if (PatientALT.split("|")[2].length > 0) {
  PatientHeadingStr+='<td class=DataLabel align=right>' + PronounDesc + '</td>'+
    '<td class=DataField>' + PatientALT.split("|")[2] + '</td>';
  }

  PatientHeadingStr+='</tr></table></td>'

  if (isWhitespace(PatientECLC)) {
    PatientHeadingStr+='<td class=DataLabel>&nbsp</td>' +
    '    <td class=DataField>&nbsp</td>'
  } else {
    PatientHeadingStr+='<td class=DataLabel>'+PatientCLH+'</td>' +
    '    <td class=DataField>'+PatientECLC+'</td>'
  }

  if (isWhitespace(PatientSEE)) {
    PatientHeadingStr+='<td>&nbsp;</td><td>&nbsp;</td>' }
  else {
    PatientHeadingStr+='<td class=DataLabel align=right>Seen</td>' +
    '    <td class=DataField>' + PatientSEE + '</td>'  }

  if (isWhitespace(PatientLOC)) {
    PatientHeadingStr+='<td></td><td></td>' }
  else {
    PatientHeadingStr+='<td class=DataLabel align=right>Location</td>' +
    '    <td class=DataField nowrap>' + PatientLOC + '</td>'}

    PatientHeadingStr+='<td class=DataLabel>&nbsp</td>' +
                       '<td class=DataField>&nbsp</td>'

  if (isWhitespace(PatientVIS)||parseInt(PatientVIS,10)==0) {
    PatientHeadingStr+='<td></td><td></td>' }
  else {
    PatientHeadingStr+='<td class=DataLabel align=right nowrap>Visit No</td>' +
    '    <td class=DataField align=right>' + PatientVIS + '</td>'  }

  PatientHeadingStr+='</tr></table>' ;
  PatientHeading.innerHTML=PatientHeadingStr;
}
//------------------------------------------------------------
// following function to remove the spaces from the starting
// and ending of the given string. Added by Jagath Kumar, HPS
//------------------------------------------------------------
function trim(str)
{
  if (str==undefined)
    return "";

  str += "";  // make sure it's a string first
  str = str.replace(/^\s+|\s+$/g,'');

/*
  var strln = str.length
  if (strln>0) 
  {
    for (var i=0;i<=strln;i++) 
    {
      if (str.substring(0,1)==' ')
        str=str.substring(1,str.length);
      
      if (str.substring(str.length-1,str.length)==' ')
        str=str.substring(0,str.length-1);
      
    }
  }
*/
  return str;
}

//------------------------------------------------------------
// This function will validate a HCP and Status        
// OptionNumber = 18
// OptionType 0 = No validation
//            1 = Validate Attending HCP
//            2 = Validate Referring HCP
//            3 = Validate Attending and Referring HCP
//            4 = Validate GP
//            5 = Validate Attending Doctor and GP
//            6 = Validate Doctor and GP
//            7 = Validate Attending, Referring and GP
//            8 = Validate Other
//            9 = Validate Other Attending
//           10 = Validate Other Referring
//           11 = Validate Other Attending & Referring
//           12 = Validate all except GP
//           13 = Validate Active Other
//           14 = Validate Active Attending (+ Referring Doc & GP)
//           15 = Validate Active Attending &/or Referring 
//           16 = Validate related provider type
//           18 = Validate Mental Health HCP
//------------------------------------------------------------
function ValidateHCP(OptionNumber,OptionType,ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=4; i < ValidateHCP.arguments.length; i++) {
    if (typeof(ValidateHCP.arguments[i]) == 'function') {
      ReturnFunction=ValidateHCP.arguments[i] }
    else {
      ValidateHCP.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL  = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
               "&valdtype=" + OptionType +
               "&valdcode=" + ReturnCode.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=trim(ReturnValue[0]);
    j=0;
    for (var i=4; i < ValidateHCP.arguments.length; i++) {
       if (typeof(ValidateHCP.arguments[i]) != 'function') {
         j++;
         ValidateHCP.arguments[i].value=ReturnValue[j];
       }
    }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction();
    }
    return true;
  }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    return false;
  }
}
//------------------------------------------------------------
// Copy of ValidateHCP but checks date and hospital valid
// This function will validate a HCP and Status
// OptionNumber = 18
// OptionType 0 = No validation
//            1 = Validate Attending HCP
//            2 = Validate Referring HCP
//            3 = Validate Attending and Referring HCP
//            4 = Validate GP
//            5 = Validate Attending Doctor and GP
//            6 = Validate Doctor and GP
//            7 = Validate Attending, Referring and GP
//            8 = Validate Other
//            9 = Validate Other Attending
//           10 = Validate Other Referring
//           11 = Validate Other Attending & Referring
//           12 = Validate all except GP
//           13 = Validate Active Other
//           14 = Validate Active Attending (+ Referring Doc & GP)
//           15 = Validate Active Attending &/or Referring
//           16 = Validate related provider type
//           18 = Validate Mental Health HCP
//------------------------------------------------------------
function ValidateHCPDateHospital(OptionNumber,OptionType,ReturnCode,ReturnName,
                                 DateValid,HospitalRequired) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=6; i < ValidateHCPDateHospital.arguments.length; i++) {
    if (typeof(ValidateHCPDateHospital.arguments[i]) == 'function') {
      ReturnFunction=ValidateHCPDateHospital.arguments[i] }
    else {
      ValidateHCPDateHospital.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL  = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
               "&valdtype=" + OptionType +
               "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
               "&valdadat=" + DateValid.value.replace(/ /g,"+") +
               "&valdhosp=" + HospitalRequired.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=6; i < ValidateHCPDateHospital.arguments.length; i++) {
       if (typeof(ValidateHCPDateHospital.arguments[i]) != 'function') {
         j++
         ValidateHCPDateHospital.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } 
    return true;
  }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    return false; }
}
//------------------------------------------------------------
// This function will validate a HCP and Status but ignore 
// the multi hospital tests
// OptionNumber = 18
// OptionType 0 = No validation
//            1 = Validate Attending HCP
//            2 = Validate Referring HCP
//            3 = Validate Attending and Referring HCP
//            4 = Validate GP
//            5 = Validate Attending Doctor and GP
//            6 = Validate Doctor and GP
//            7 = Validate Attending, Referring and GP
//            8 = Validate Other
//            9 = Validate Other Attending
//           10 = Validate Other Referring
//           11 = Validate Other Attending & Referring
//           12 = Validate all except GP
//           13 = Validate Active Other
//           14 = Validate Active Attending (+ Referring Doc & GP)
//           15 = Validate Active Attending &/or Referring
//           16 = Validate related provider type
//           18 = Validate Mental Health HCP
//------------------------------------------------------------
function ValidateHCPAllHosp(OptionNumber,OptionType,ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=4; i < ValidateHCPAllHosp.arguments.length; i++) {
    if (typeof(ValidateHCPAllHosp.arguments[i]) == 'function') {
      ReturnFunction=ValidateHCPAllHosp.arguments[i] }
    else {
      ValidateHCPAllHosp.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL  = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
               "&valdallh=1" +
               "&valdtype=" + OptionType +
               "&valdcode=" + ReturnCode.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=4; i < ValidateHCPAllHosp.arguments.length; i++) {
       if (typeof(ValidateHCPAllHosp.arguments[i]) != 'function') {
         j++
         ValidateHCPAllHosp.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    return false; }
}
//  WA Health version where ADMISSNO is passed to PATWEB80 for date checking
//
function ValidateHCPX(OptionNumber,OptionType,ReturnCode,ReturnName,ReturnAdmn)
 {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=5; i < ValidateHCPX.arguments.length; i++) {
    if (typeof(ValidateHCPX.arguments[i]) == 'function') {
      ReturnFunction=ValidateHCPX.arguments[i] }
    else {
      ValidateHCPX.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;

  if (isWhitespace(ReturnAdmn.value)) {
      var serverURL  = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
                       "&valdtype=" + OptionType +
                       "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  } else {
      var serverURL  = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
                       "&valdtype=" + OptionType +
                       "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                       "&valdadno=" + ReturnAdmn.value.replace(/ /g,"+")
  }

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=5; i < ValidateHCPX.arguments.length; i++) {
       if (typeof(ValidateHCPX.arguments[i]) != 'function') {
         j++
         ValidateHCPX.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    return false; }
}

//------------------------------------------------------------
// This function will validate a HCP and Status.It will also return 
// a flag to show the local gp or not
// OptionNumber = 18
// OptionType 0 = No validation
//            1 = Validate Attending HCP
//            2 = Validate Referring HCP
//            3 = Validate Attending and Referring HCP
//            4 = Validate GP
//            5 = Validate Attending Doctor and GP
//            6 = Referring Doctor and GP
//            7 = Attending, Referring and GP
//            8 = Validate Other
//           12 = Validate Ex 3 GP
//------------------------------------------------------------
function ValidateHCPShow(OptionNumber,OptionType,ReturnCode,ReturnName,ReturnShow) {
  ReturnFunction="" ;
  ReturnName.value="";
  ReturnShow.value="";
  for (var i=5; i < ValidateHCPShow.arguments.length; i++) {
    if (typeof(ValidateHCPShow.arguments[i]) == 'function') {
      ReturnFunction=ValidateHCPShow.arguments[i] }
    else {
      ValidateHCPShow.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL  = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
               "&valdtype=" + OptionType +
               "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
               "&returnfm=4"

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    ReturnShow.value=trim(ReturnValue[1])
    j=0
    for (var i=5; i < ValidateHCPShow.arguments.length; i++) {
       if (typeof(ValidateHCPShow.arguments[i]) != 'function') {
         j++
         ValidateHCPShow.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    return false; }
}
//------------------------------------------------------------------------
// Function : Validate HCP Practice (and Linked HCP if valddctr populated)
//------------------------------------------------------------------------
function ValidateHCG(OptionNumber,OptionType,ReturnCode,ReturnCod2,ReturnName,ReturnPcnt) {
  ReturnName.value="";
  ReturnPcnt.value="";
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL  = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
               "&valdtype=" + OptionType +
               "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
               "&valddctr=" + ReturnCod2.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=trim(ReturnValue[0]);
    ReturnPcnt.value=ReturnValue[1]; }
 else {
    ReturnCode.value="";
    ReturnCode.select();
    return false; }
}
//------------------------------------------------------------------------
// Function : Debtor Search Frame
//------------------------------------------------------------------------
function DebtorSearchFrame(ReturnCode) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;  
  PopUpFrameDoc.location.href = "../lookups/DebtorSearchFrame.html";
  SearchFrameShow();
}

//-----------------------------------------------------------------
// Function To Validate slot 
//-----------------------------------------------------------------
function checkSlot(newslotk,urnumber) {
  if (isWhitespace(newslotk)) return;;
  ReturnFunction="" ;
  for (var i=1; i < checkSlot.arguments.length; i++) {
   if (typeof(checkSlot.arguments[i]) == 'function') {
     ReturnFunction=checkSlot.arguments[i] } }
  var serverURL = "../cgi-bin/outweb02.pbl?reportno=9&updatety=5" +
                  "&newslotk="+newslotk.replace(/ /g,"+") +
                  "&urnumber="+urnumber.replace(/ /g,"+") 

  if (checkSlot.arguments[3] != undefined) {

    serverURL = serverURL + "&newvisty=" +
                checkSlot.arguments[3].substring(0,3).replace(/ /g,"+");

  }

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
}
//-----------------------------------------------------------------
// Function To Validate slot
//-----------------------------------------------------------------
function checkSlotReschedule(newslotk,urnumber,admissno) {
  if (isWhitespace(newslotk)) return;;
  ReturnFunction="" ;
  for (var i=2; i < checkSlotReschedule.arguments.length; i++) {
   if (typeof(checkSlotReschedule.arguments[i]) == 'function') {
     ReturnFunction=checkSlotReschedule.arguments[i] } }
  var serverURL = "../cgi-bin/outweb02.pbl?reportno=9&updatety=5" +
                  "&newslotk="+newslotk.replace(/ /g,"+") +
                  "&urnumber="+urnumber.replace(/ /g,"+") +
                  "&admissno="+admissno.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
}
//-----------------------------------------------------------------
// Function To Check Bed Status
//
// NOTE: In addition to 'wardcode' and 'bedcode' this function receives the
//       following optional parameters:
//  admisdte       - Admission Date
//                   (This parameter has to be passed as the third parameter)
//  staydays       - Planned Length of Stay in the Hospital (in days)
//                   (This parameter has to be passed as the fourth parameter)
//  ReturnFunction - function that is executed after 'checkBedStatus()'
//                   completes it's execution.
//-----------------------------------------------------------------
function checkBedStatus(wardcode,beddcode) {
  if(PatientLinks.ptcnbman!=undefined){
    if(PatientLinks.ptcnbman.value=="1"){
       checkBedManagement(wardcode,beddcode);
       return;}
  }
  admissno=PatientLinks.admissno.value.replace(/ /g,"+")
//  if (isWhitespace(wardcode)) return;;
  ReturnFunction="" ;
  var admisdte="";
  var admistme="";
  var staydays="0";
  var preadmit="0";

  for (var i=2; i < checkBedStatus.arguments.length; i++) {
   if (typeof(checkBedStatus.arguments[i]) == 'function') {
     ReturnFunction=checkBedStatus.arguments[i] } }

  // Receive optional parameters
  if (checkBedStatus.arguments.length >= 4) {
    admisdte=checkBedStatus.arguments[2].replace(/ /g,"+");
    staydays=checkBedStatus.arguments[3].replace(/ /g,"+");
  }
  if (checkBedStatus.arguments.length >= 5) {
   if (typeof(checkBedStatus.arguments[4]) != 'function') {
     admistme=checkBedStatus.arguments[4].replace(/ /g,"+");
   }
  } 
  if (checkBedStatus.arguments.length >= 6) {
   if (typeof(checkBedStatus.arguments[5]) != 'function' &&
       checkBedStatus.arguments[5].type=="checkbox") {
     if(checkBedStatus.arguments[5].checked==false) {
       preadmit="1";     
     }
   }
  } 
// for healthscope screens with regime codes
  if (checkBedStatus.arguments.length >= 10) {
    if (typeof(checkBedStatus.arguments[9]) != 'function' &&
       checkBedStatus.arguments[9].type == "checkbox" &&
       checkBedStatus.arguments[9].name == "admitbox" &&
       checkBedStatus.arguments[9].checked == false) {
      preadmit="1";
    }
    if (typeof(checkBedStatus.arguments[9]) != 'function' &&
       checkBedStatus.arguments[9].type == "hidden" &&
       checkBedStatus.arguments[9].name == "admitbox" &&
       checkBedStatus.arguments[9].value == "0") {
      preadmit="1";
    }
  }
//
  var serverURL = "../cgi-bin/patweb96.pbl?reportno=12&remoteno=1&allowahs=1" +
                  "&wardcode="+wardcode.replace(/ /g,"+") +
                  "&beddcode="+beddcode.replace(/ /g,"+") +
                  "&admissno="+admissno.replace(/ /g,"+") +
                  "&admisdte="+admisdte.replace(/ /g,"+") +
                  "&admistme="+admistme.replace(/ /g,"+") +
                  "&staydays="+staydays.replace(/ /g,"+") +
                  "&preadmit="+preadmit.replace(/ /g,"+"); 
  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0) {
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction(wardcode,beddcode) } }
}

//-----------------------------------------------------------------
// Function To Check for Five Day Ward
//
// Parameters:
//  wardcode       - Ward code
//  beddcode       - Bed Code
//  admisdte       - Admission Date
//  staydays       - Planned Length of Stay in the Hospital (in days)
//  ReturnFunction - (optional) function that is executed after 
//                   'checkFiveDayWard()' completes it's execution.
//-----------------------------------------------------------------
function checkFiveDayWard(wardcode,beddcode,admisdte,staydays) {
  admissno=PatientLinks.admissno.value.replace(/ /g,"+")
//  if (isWhitespace(wardcode)) return;;
  ReturnFunction="" ;
  for (var i=2; i < checkFiveDayWard.arguments.length; i++) {
   if (typeof(checkFiveDayWard.arguments[i]) == 'function') {
     ReturnFunction=checkFiveDayWard.arguments[i] } }

  var serverURL = "../cgi-bin/patweb96.pbl?reportno=12&remoteno=3" +
                  "&wardcode="+wardcode.replace(/ /g,"+") +
                  "&beddcode="+beddcode.replace(/ /g,"+") +
                  "&admissno="+admissno.replace(/ /g,"+") +
                  "&admisdte="+admisdte.replace(/ /g,"+") +
                  "&staydays="+staydays.replace(/ /g,"+");
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
}

//-----------------------------------------------------------------
// Function To Check for Closed Beds (Swap Beds Functionality) 
//
// Parameters:
//  wardcode       - Swap From Ward
//  beddcode       - Swap From Bed
//  swptowrd       - Swap To Ward
//  swptobed       - Swap To Bed
//  ReturnFunction - (optional) function that is executed after 
//                   'checkFiveDayWard()' completes it's execution.
//-----------------------------------------------------------------
function checkClosedBeds(wardcode,beddcode,swptowrd,swptobed) {
  ReturnFunction="" ;
  for (var i=2; i < checkClosedBeds.arguments.length; i++) {
   if (typeof(checkClosedBeds.arguments[i]) == 'function') {
     ReturnFunction=checkClosedBeds.arguments[i] } }

  var serverURL = "../cgi-bin/patweb96.pbl?reportno=12&remoteno=4" +
                  "&wardcode="+wardcode.replace(/ /g,"+") +
                  "&beddcode="+beddcode.replace(/ /g,"+") +
                  "&swptowrd="+swptowrd.replace(/ /g,"+") +
                  "&swptobed="+swptobed.replace(/ /g,"+");
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
}

//----------------------------------------------------------------------
// Function : Setup Page Refresh Page                                          
//----------------------------------------------------------------------
function SetPageRefresh(Seconds) {
  Refresh = parseInt(Seconds,10)*1000;   
  if (Refresh<20000) { 
    alert('Page Refresh Set Too Low. Set to '+Seconds +' seconds. Refresh '+Refresh)
    Refresh=20000;
  }
  refreshTimer=setTimeout("StdPageRefresh();",Refresh);
}

//----------------------------------------------------------------------
// Function : Refresh Page
//----------------------------------------------------------------------
function StdPageRefresh() {
  if (PopUpScreen.style.display=="none") {                                     
    location.reload();
  }
}

//========================================================================
//  General Remote Script Validate UR and checks if merged with another UR
//========================================================================
function validateCodeMerge(OptionNumber,ReturnCode,ReturnName,ReturnMFlag,ReturnMur) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=3; i < validateCodeMerge.arguments.length; i++) {
    if (typeof(validateCodeMerge.arguments[i]) == 'function') {
      ReturnFunction=validateCodeMerge.arguments[i] }
    else {
      validateCodeMerge.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
                    "&returnfm=2" +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=3; i < validateCodeMerge.arguments.length; i++) {
       if (typeof(validateCodeMerge.arguments[i]) != 'function') {
         j++
         validateCodeMerge.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.select();
    return false;
  }
}

//========================================================================
//  EMR Map view function that is used for the discharge screen or update 
//========================================================================
function checkDisStatus(){                                                     
  if (getTop().content.UpdateForm.discstat.value=="1") {
    PMenuLinkTo('../cgi-bin/emrweb02.pbl|01|101|0|0|0') }
  else {
     PMenuLinkTo('../cgi-bin/emrweb02.pbl|01|109|0|0|0') }
}

//========================================================================
//  EMR Map view function that is used for the discharge screen or update 
//========================================================================
function EmergencyDischarge(){  
  if (getTop().content.document.HiddenFields!=undefined) {
    if (getTop().content.document.HiddenFields.DischargeComplete!=undefined) {
      EmergencyDischargeA();          // From content
      return;
    }
  }
  if (getTop().menu.EmergencyFrame.document.HiddenFields!=undefined) {
    if (getTop().menu.EmergencyFrame.document.HiddenFields.DischargeComplete
        !=undefined) {
      EmergencyDischargeB();          // From menu 
      return;
    }
  }
}

//========================================================================
//  EMR Map view function that is used for the discharge screen or update 
//  activated from the content screen
//========================================================================
function EmergencyDischargeA(){  
  if (getTop().content.document.HiddenFields.DischargeComplete.value=="1") {
    if(EmergencyFullScreens) { 
       getTop().content.EmergencyFullPatientLink('emrweb02.pbl',1,101)
    } else {
       getTop().content.PatientLink('emrweb02.pbl',1,101)
    }
  } else {
    if(EmergencyFullScreens) { 
       getTop().content.EmergencFullyPatientLink('emrweb02.pbl',1,109)
    } else {
       getTop().content.PatientLink('emrweb02.pbl',1,109)
    }
  }
}

//========================================================================
//  EMR Map view function that is used for the discharge screen or update 
//  activated from the menu screen
//========================================================================
function EmergencyDischargeB(){  
  if (getTop().menu.EmergencyFrame.document.HiddenFields.DischargeComplete.value
       =="1") {
    if(EmergencyFullScreens) { 
       PMenuLinkTo('../cgi-bin/emrweb02.pbl|01|101|0|1008|521')
    } else {
       PMenuLinkTo('../cgi-bin/emrweb02.pbl|01|101|0|0|0')
    }
  } else {
    if(EmergencyFullScreens) { 
       PMenuLinkTo('../cgi-bin/emrweb02.pbl|01|109|0|1008|521')
    } else {
       PMenuLinkTo('../cgi-bin/emrweb02.pbl|01|109|0|0|0')
    }
  }
}

//----------------------------------------------------------------
// Function to ignore backspace key press doing Page Back Function
// and ignore refresh key (F5) and do a force get instead on current location
//----------------------------------------------------------------
function onKeyDown(ev)
{
  var el;
  ResetTimeOut();
  if (!ev) var ev = window.event;

  if (ev.keyCode == 116) // Disable F5 key and force get instead
  {
     ev.returnValue = false;
     ev.keyCode = 0;
     location.reload(1);
     return;
  }

  if (ev.keyCode == 113) // F2 key
  {
     ev.returnValue = false;
  }

  if (ev.srcElement)
    el = ev.srcElement;
  else if (ev.target)
    el = ev.target;
  else
    return;

  //  restrict backspace key
  if ( (ev.keyCode == 8) && el.readOnly )
  {
     ev.keyCode = 0;
     ev.returnValue = false;
     return;
  }

  if ( (ev.keyCode == 8) &&
       (el.type != "text" &&
        el.type != "textarea" &&
        el.type != "password"))
  {
     ev.keyCode = 0;
     ev.returnValue = false;
  }

}

//------------------------------------------------------------
// Link to CIS Server in PopUpFrame Frame Hospital Level
//------------------------------------------------------------
function LinkToCIS(SelectOption) {
  LinkToUrl='interface/InterfaceServlet?appName=' + SelectOption[0] +
            '&action=' + SelectOption[2] 
  // alert("Linking to - " + LinkToUrl);
  getTop().content.PopUpFrame.document.location.href=LinkToUrl
//  getTop().content.PopUpScreen.style.top=100
//  getTop().content.PopUpScreen.style.width=205
//  getTop().content.PopUpScreen.style.height=245
//  getTop().content.PopUpScreen.style.display=""
}

//------------------------------------------------------------
// Link to CIS Server in PopUpFrame Frame Patient Level
//------------------------------------------------------------
function PatientLinkToCIS(SelectOption) {
  var test="00";
  LinkToUrl='interface/InterfaceServlet?appName=' + SelectOption[0] +
//            '&action=' + SelectOption[1] +
            '&PRN=' + test + document.PatientLinks.urnumber.value.replace(/ /g,"0") 
//            '&view=patient
//            '&VisitNo=' + document.PatientLinks.admissno.value.replace(/ /g,"+")
//  alert("Linking to - " + LinkToUrl);
  getTop().content.PopUpFrame.document.location.href=LinkToUrl
//  getTop().content.PopUpScreen.style.top=100
//  getTop().content.PopUpScreen.style.width=205
//  getTop().content.PopUpScreen.style.height=245
//  getTop().content.PopUpScreen.style.display=""
}

//------------------------------------------------------------
// Link to MaxCare Server in Content Frame
//------------------------------------------------------------
function MaxCareContentLink(SelectOption) {
  UserName=GetCookieData("IBAUserName");
  UserName="iba"
  //  UrNumber=PatientLinks.urnumber.value ;
  UrNumber=PatientLinks.urnumber.value;
  if (UrNumber=="35674336") {UrNumber="9235674336"}
  if (UrNumber==" 1000346") {UrNumber="12345680"}
  LinkToUrl='http://206.73.199.193/scripts/runisa.dll?' +
            'MaxCare:' + SelectOption[0] +
            '::Page=' +  SelectOption[1] +
            ',User=' + UserName +
            ',PRN=' + UrNumber +
            ',UCcallnk=' +  location.href ;
   location.href=LinkToUrl
}

//------------------------------------------------------------
// Link to MaxCare Server in Dynamic Frame
//------------------------------------------------------------
function MaxCareDFrameLink(SelectOption) {
  UserName=GetCookieData("IBAUserName");
  //UrNumber=PatientLinks.urnumber.value ;
  UrNumber=PatientLinks.urnumber.value;
  if (UrNumber=="35674336") {UrNumber="9235674336"}
  if (UrNumber==" 1000346") {UrNumber="12345680"}
  LinkToUrl='http://206.73.199.193/scripts/runisa.dll?' +
            'MaxCare:' + SelectOption[0] +
            '::Page=' +  SelectOption[1] +
            ',User=' + UserName +
            ',PRN=' + UrNumber +
            ',UCcallnk=' +  getTop().content.location.href ;
  alert(LinkToUrl)
  DFrameStart()
  PopUpFrame.document.location.href=LinkToUrl
//  PopUpFrame.document.open()
//  PopUpFrame.document.write('<link rel="stylesheet" ' +
//  'href="../html/standard.css" type="text/css">' +
//  '<script type="text/javascript" src="../js/Standard.js" ></script>' +
//  '<span class=DFrameTitleBar>' +
//  '<img border=0 align=right src=../images/ExitIcon.gif onclick=DFrameExit()>' +
//  'Max Care ...</span>' );
//  PopUpFrame.document.close()
//
  MaxWidth=document.body.clientWidth
  MaxHeight=document.body.clientHeight -
            PatientMenu.offsetTop-PatientMenu.offsetHeight
  if (SelectOption[4]>MaxWidth)   { PopUpScreen.style.width=MaxWidth }
                             else { PopUpScreen.style.width=SelectOption[4] }
  if (SelectOption[5]>MaxHeight) { PopUpScreen.style.height=MaxHeight }
                            else { PopUpScreen.style.height=SelectOption[5] }
  PopUpScreen.style.top=PatientMenu.offsetTop+PatientMenu.offsetHeight
  PopUpScreen.style.left=(document.body.clientWidth -
                          PopUpScreen.style.posWidth)/2
  PopUpScreen.style.display=""
}

//------------------------------------------------------------
// Link to MaxCare Server in Content Frame
//------------------------------------------------------------
function MaxCareLink(SelectOption) {
  UserName=GetCookieData("IBAUserName");
  LinkToUrl='http://206.73.199.193/scripts/runisa.dll?' +
            'MaxCare:pgUnicare' +
            '::Page=' +  SelectOption[0] +
            ',User=' + UserName +
            ',UCcallnk=' +  getTop().content.location.href ;
  getTop().content.location.href=LinkToUrl
}

//------------------------------------------------------------
// Set Cookie data
//------------------------------------------------------------
function SetCookiePath(fieldName) {

  // the optional second parameter is the expiry time in seconds

  var cookieexp = new Date();
  var cookiedata = fieldName + "=" + escape(location.href) + ";";
  if (arguments.length == 2)
  {
    cookieexp.setTime(cookieexp.getTime() + ( arguments[1] * 1000));
    cookiedata += " expires=" + cookieexp.toGMTString() + ";";
  } 	
  document.cookie = cookiedata;
}
//------------------------------------------------------------
// Set Cookie
//------------------------------------------------------------
function SetCookie(fieldName,fieldString) {

  // the optional second parameter is the expiry time in seconds

  var cookieexp = new Date();
  var cookiedata = fieldName + "=" + escape(fieldString) + ";";
  if (arguments.length == 3)
  {
    cookieexp.setTime(cookieexp.getTime() + ( arguments[2] * 1000));
    cookiedata += " expires=" + cookieexp.toGMTString() + ";";
  }
  document.cookie = cookiedata;
}
//------------------------------------------------------------
// Expire Cookie data
//------------------------------------------------------------
function ExpireCookiePath(fieldName) 
{
  var cookie_date = new Date ( );                // current date & time
  cookie_date.setTime ( cookie_date.getTime() - 1 );
  document.cookie = fieldName += "=; expires=" + cookie_date.toGMTString();
}

//------------------------------------------------------------
// Go to Cookie data
//------------------------------------------------------------
function GoCookiePath(fieldName) {
  Path=GetContentCookie(fieldName);
  if (isWhitespace(Path) || Path=="unknown") {
    history.back();
 }
  else {
    getTop().content.location.href=Path }
}

// 
//------------------------------------------------------------
// This procedure breaks a paragraph into lines according to carriage returns.
//------------------------------------------------------------
// 
function formateText(ReturnText,column) {
  var line=ReturnText.value.split(/\r?\n/);
  var endofline = "\n";
  var ReturnTextAll = "";
  for (var i=0;i< line.length;i++) {
    var returntext = formateLine(line[i],column);
    if (returntext.match(/\r?\n$/) != null) {
      ReturnTextAll += returntext;
    }
    else {
      ReturnTextAll += returntext;
      if (i < (line.length - 1)) {
        ReturnTextAll += endofline;
      }
    }
  }
  return ReturnTextAll;
}

//
//------------------------------------------------------------
// This procedure splits a line of text into words and attempts to rebuild 
// (wrap) the text according to maximum column length, and breaking the lines 
// with '\r\n' characters. 
// NOTE: Procedure changed to count by new wrap line rather than original line
//------------------------------------------------------------
//
function formateLine(ReturnLine,column) {
  var endofline = "\n";
  var space = " ";
// important note: variable-0 to make the variable integer
  var cols = column-0;  // convert string to numeric
  var testsize = "";
  var textarray = ReturnLine.split(" ");
  var text = textarray[0];
  var thisline = textarray[0];

  for (var i=1; i < textarray.length; i++) {
    if (textarray[i].length < column) {
      text += space + textarray[i];
      thisline += space + textarray[i];
    }

    if (textarray[i+1] != undefined) {
      testsize = thisline + space + textarray[i+1];
    }

    if (testsize.length > cols) {  // new line width > column count
      text += endofline;
      thisline = "";
      testsize = "";
    }
  }
  return text;
}

//------------------------------------------------------------
// This procedure breaks a paragraph into lines according to carriage returns.
//------------------------------------------------------------
// 
function formateTextBLANK(ReturnText,column) {
  var line=ReturnText.value.split(/[\n]/);
  var endofline = "\n";
  var ReturnTextAll = "";
  for (var i=0;i< line.length;i++) {
    var returntext = formateLine(line[i],column);
    if (returntext.match(/\r?\n$/) != null) {
      ReturnTextAll+=returntext;
    }
    else {
      ReturnTextAll+=returntext + endofline;
    }
  }
  return ReturnTextAll;
}

//------------------------------------------------------------
// Function : RCH Ward Lookup Frame
//------------------------------------------------------------
function RCHWardSearchFrame() {
 Help=window.open("../../lookups/RCHWardSearchFrame.html","Help",
 "left=10,top=10,width=760,height=550,resize=yes" +
 ",scrollbars=yes,status=yes,toolbar=no,menubar=no");
}

//------------------------------------------------------------
// Function : Set return path cookie for outpatient clinic list
//------------------------------------------------------------
function SetOutpatientList() {
  document.cookie = "OutpatientList" + "=" + escape(location.href) + ";"
}

//------------------------------------------------------------
// Function : Get return path cookie and redirect RCH View      
//------------------------------------------------------------
function GoOutpatientList() {
  OutpatientList=GetContentCookie("OutpatientList");
  if (isWhitespace(OutpatientList) || OutpatientList=="unknown") {
    getTop().content.location.href="../cgi-bin/outweb02.pbl?reportno=1&template=3"
 }
  else {
    getTop().content.location.href=OutpatientList }
}

//------------------------------------------------------------
// Get a Cookie Value
//------------------------------------------------------------
function GetOutCookie(redstring,redstring1,fieldName) {
  var pos = document.cookie.indexOf(fieldName + "=");
  if (pos == -1) { return("unknown") }
  else { var start=pos + fieldName.length + 1;
      var end = document.cookie.indexOf(";",start);
      if (end == -1) { end= document.cookie.length }
      var redir=trim(redstring); 
      var redir1=trim(redstring1); 
      return(redir + redir1 + unescape(document.cookie.substring(start,end))) }
}

//------------------------------------------------------------
// Function : Get return path cookie and redirect STV or Standard view
//------------------------------------------------------------
function GoOutpatientListSTV() {
  OutpatientList=GetContentCookie("OutpatientList");
  if (isWhitespace(OutpatientList) || OutpatientList=="unknown") {
    getTop().content.location.href="../cgi-bin/outweb02.pbl?reportno=1&template=7"
 }
  else {
    getTop().content.location.href=OutpatientList }
}

//------------------------------------------------------------
// Function : Get return path cookie
//------------------------------------------------------------
function GetContentCookie(fieldName) {
  var pos = getTop().content.document.cookie.indexOf(fieldName + "=");
  if (pos == -1) { return("unknown") }
  else { var start=pos + fieldName.length + 1;
      var end = getTop().content.document.cookie.indexOf(";",start);
      if (end == -1) { end= getTop().content.document.cookie.length }
      return(unescape(getTop().content.document.cookie.substring(start,end))) }
}

//----------------------------------------------------------------------
// Function : Rounds and formats a number with/without decimal places 
//----------------------------------------------------------------------
function RoundNumber(number,decimal)
{
  if (checkNumber(number)) {
   Number = Math.round(number.value*Math.pow(10,decimal))/Math.pow(10,decimal);
   decimal = (decimal<0?0:decimal); // if decimal places < 0 then set decimal=0
                                    // else decimal = decimal places entered.

   var x = Number;            // save Number
   if (x<0)                   // negative value entered?
   {
     var y = x*(-1);          // yes, make the value positive
     var r = "" + Math.round(y * Math.pow(10,decimal));
   }
   else
   {
     var r = "" + Math.round(Number * Math.pow(10,decimal));
   }

   if (r.length < decimal)    // is the value of r < 1 eg. r = 0.05?
   {
      number.value=Number;    // yes, return the value of Number
      return;
   }

   if (decimal==0)
   {
      if (x<0)                // negative value entered?
      {
        number.value=r*(-1);  // yes,make the return value negative
      }
      else
      {
        number.value=r;
      }
      return;
   }
   else
   {
      if (x<0)                // negative value entered?
      {
        number.value = "-"
                     + r.substring(0,r.length-decimal)
                     + "."
                     + r.substring(r.length-decimal,r.length);
      }
      else
      {
        number.value = r.substring(0,r.length-decimal)
                     + "."
                     + r.substring(r.length-decimal,r.length);
      }
      return;
   }
 }
}

//----------------------------------------------------------------------
// Function : Remote script to validate Common Categery Codes.        
// Parameters: ReturnCode - Category Code 
//             AllowInact - Allow Inactive code in validation flag
//                          0 - No, do not allow inactive codes
//                          1 - Yes, allow all code including inactive codes
//             CodeDate   - Date used to compare for inactive codes.  Only
//                          required when AllowInact=0.
//             ReturnName - Return Description.
//----------------------------------------------------------------------
function validateCommCC(ReturnCode,AllowInact,CodeDate,ReturnName) {
  ReturnFunction="";
  ReturnName.value="";

  for (var i=3; i < validateCommCC.arguments.length; i++) {
    if (typeof(validateCommCC.arguments[i]) == 'function') {
      ReturnFunction=validateCommCC.arguments[i];
    }
    else {
      validateCommCC.arguments[i].value="";
    }
  }

  if (isWhitespace(ReturnCode.value)) return;

  var serverURL   = "../cgi-bin/comweb01.pbl?reportno=3" +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&alwinact=" + AllowInact.value.replace(/ /g,"+") +
                    "&codedate=" + CodeDate.value.replace(/ /g,"+");

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|");
      ReturnName.value=trim(ReturnValue[0]);
      j=0;

      for (var i=3; i < validateCommCC.arguments.length; i++) {
        if (typeof(validateCommCC.arguments[i]) != 'function') {
          j++;
          validateCommCC.arguments[i].value=ReturnValue[j];
        }
      }

      if (typeof(ReturnFunction) == 'function') {
        ReturnFunction();
      }
      return true;
    }
    else {
      ReturnCode.select();
      return false;
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);
    var fnArgs = validateCommCC.arguments;

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status==0) {
          ReturnValue=returnValue.return_value.split("|");
          ReturnName.value=trim(ReturnValue[0]);
          j=0;

          for (var i=3; i < fnArgs.length; i++) {
            if (typeof(fnArgs[i]) != 'function') {
              j++;
              fnArgs[i].value=ReturnValue[j];
            }
          }

          if (typeof(ReturnFunction) == 'function') {
            ReturnFunction();
          }
          return true;
        }
        else {
          ReturnCode.select();
          return false;
        }
      }
    );
  }
}

//---------------------------------------------------------------------
// This function is used to search for a health fund table without 
// returning the focus to the parent window.  Usually in cases where
// the health fund code and table code are hidden fields and only the
// health fund name and table description are visibled (patweb8903001.html)
// Variable ReturnHFTNoFocus is used to set no focus on UpdateParent() 
// on exiting the HealthFundSearchFrame() (patweb8704002.html)
//---------------------------------------------------------------------
function HealthFundSearchFrameNoFocus(ReturnCode,ReturnName,
                                      ReturnTCode,ReturnTName){
  window.ReturnHFTNoFocus=""; // Var to set no focus on UpdateParent()
  HealthFundSearchFrame(ReturnCode,ReturnName,ReturnTCode,ReturnTName);
}

//---------------------------------------------------------------------
// This function is used to search for a health fund without returning 
// focus to the parent window.  Usually in cases where the health fund
// code is hidden and only the health fund name is displayed.
// Variable ReturnHFNoFocus is used to set no focus on UpdateParent()
// on exiting the HFundSearchFrame() (patweb8704004.html)
//---------------------------------------------------------------------
function HFundSearchFrameNoFocus(ReturnCode,ReturnName) {
  window.ReturnHFNoFocus=""; // Var to set no focus on UpdateParent()
  HFundSearchFrame(ReturnCode,ReturnName); 
}
 
//---------------------------------------------------------------------
// This function validate and Adds two number together 
//---------------------------------------------------------------------
function AddTotal(total,fee1,fee2) {
total.value=0;
  if(!isWhitespace(fee1.value)) {
    if (checkNumber(fee1)) {
      RoundNumber(fee1,2);
      total.value=parseFloat(total.value) +
                  parseFloat(fee1.value)
    }
    else {
      fee1.value="";
      fee1.focus();
      return;
    }
  }
  if(!isWhitespace(fee2.value)) {
    if (checkNumber(fee2)) {
      total.value=parseFloat(total.value) +
                  parseFloat(fee2.value)
    }
    else {
      fee2.value="";
      fee2.focus();      
      return;
    }
  }
  RoundNumber(total,2);
}

//----------------------------------------------------------------
// Function validateRCP() is used to validate code to a table using
// remote scripting from receipting server RCPWEB02.PBL
// OptionNumber =  1 - Cashier Code (rcpcshaf)

//----------------------------------------------------------------
function validateRCP(OptionNumber,ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=3; i < validateRCP.arguments.length; i++) {
    if (typeof(validateRCP.arguments[i]) == 'function') {
      ReturnFunction=validateRCP.arguments[i] }
    else {
      validateRCP.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  temp="../cgi-bin/rcpweb02.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var serverURL   = "../cgi-bin/rcpweb02.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=3; i < validateRCP.arguments.length; i++) {
       if (typeof(validateRCP.arguments[i]) != 'function') {
         j++
         validateRCP.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } 
    return true;
    }
  else {
    if (ReturnCode.select) ReturnCode.select();
    if (ReturnCode.focus)  ReturnCode.focus();
    return false;
     }
}

//------------------------------------------------------------
// Function : Remote script to validate Receipt Number
//------------------------------------------------------------
function valReceiptNo(ReturnRecp,ReturnResult) {
  if (isWhitespace(ReturnRecp.value)) return;;
  var serverURL   = "../cgi-bin/comweb80.pbl?reportno=38" +
                   "&receiptn=" + ReturnRecp.value.replace(/ /g,"+");
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnResult.value = ReturnValue[0];
  } else {
    ReturnResult.value="";
//  ReturnRecp.value="";
    ReturnRecp.select();
//  ReturnRecp.focus();
  }
}

//------------------------------------------------------------
// Function : Camix Type Search Frame CIAS
//------------------------------------------------------------
function CmixtSearchFrame(ReturnCode,ReturnName) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.ReturnFunction="";

  if (CmixtSearchFrame.arguments.length > 1)
    window.ReturnFunction=CmixtSearchFrame.arguments[2];

  PopUpFrameDoc.location.href = "../lookups/CmixtSearchFrame.html"
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Camix Type/Code Search Frame CIAS
//------------------------------------------------------------
function CmixcSearchFrame(ReturnType,ReturnCode,ReturnName) 
{
  if (isWhitespace(ReturnType.value)) 
  {
    alert("Please select a casemix type before searching");
    return;
  }
  var PopUpFrameDoc = DFrameStart();
  window.ReturnType=ReturnType ;
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../lookups/CmixcSearchFrame.html";
  SearchFrameShow();
}

//------------------------------------------------------------
// Insert Standard Casemix Heading
//------------------------------------------------------------
function InsertCasemixHeader() {
  CasemixHeadingStr='<table class="PHeadingSection">' +
  '<tr>'
//
  if (isWhitespace(CasemixLEV1)) {
    CasemixHeadingStr+='<td class=DataLabel align=left>' +
    'Level 1 Casemix Type</td>' +
    '<td></td>' }
  else {
    CasemixHeadingStr+='<td class=DataLabel align=left>' +
    'Level 1 Casemix Type</td>' +
    '    <td class=DataField>' + CasemixLEV1 + '</td>'}
  if (isWhitespace(CasemixDDATE)) {
    CasemixHeadingStr+='<td></td><td></td>' }
  else {
    CasemixHeadingStr+='<td class=DataLabel align=left>' +
    'Discharge Date Range </td>' +
    '    <td class=DataField>' + CasemixDDATE + '</td>'}
  if (isWhitespace(CasemixEXTRID)) {
    CasemixHeadingStr+='<td></td><td></td>' }
  else {
    CasemixHeadingStr+='<td class=DataLabel align=right>' +
    'Extract ID</td>' +
    '    <td class=PHeadingField align=right>' + CasemixEXTRID + '</td>'}
    CasemixHeadingStr+='</tr>'
//
  CasemixHeadingStr+='<tr>'
  if (isWhitespace(CasemixLEV2)) {
    CasemixHeadingStr+='<td class=DataLabel align=left>' +
    'Level 2 Casemix Type</td>' +
    '<td></td>' }
  else {
    CasemixHeadingStr+='<td class=DataLabel align=left>' +
    'Level 2 Casemix Type</td>' +
    '    <td class=DataField>' + CasemixLEV2 + '</td>'}
  if (isWhitespace(CasemixEXTR1)) {
    CasemixHeadingStr+='<td></td><td></td>' }
  else {
    CasemixHeadingStr+='<td class=DataLabel align=left>' +
    '1st Extraction Range</td>' +
    '    <td class=DataField>' + CasemixEXTR1 + '</td>'}

    CasemixHeadingStr+='<td class=PHeadingField colspan=2 align=right>' +
    CasemixEXTDES + '</td>'
    CasemixHeadingStr+='</tr>'
//
  CasemixHeadingStr+='<tr>'
  if (isWhitespace(CasemixLEV3)) {
    CasemixHeadingStr+='<td class=DataLabel align=left>' +
    'Level 3 Casemix Type</td>' +
    '<td></td>' }
  else {
    CasemixHeadingStr+='<td class=DataLabel align=left>' +
    'Level 3 Casemix Type</td>' +
    '    <td class=DataField>' + CasemixLEV3 + '</td>'}
    CasemixHeadingStr+='</tr>'
//
  CasemixHeadingStr+='</table>' ;
  CasemixHeading.innerHTML=CasemixHeadingStr;
}

//------------------------------------------------------------
// Function : Last 20 UR Search Frame
//------------------------------------------------------------
function Last10URViewFrame() {

  // This script is launched by an icon in the menu frame, but needs to
  // write it's output in the content frame PopUpFrame document.

  // find the document for the content frame (first one)
  var doc = ibaGetIframeDoc('content',getTop().document);

  // find all these elements within this document
  var PopUpFrameDoc  = ibaGetIframeDoc('PopUpFrame',doc);
  var PopUpScreen    = ibaGetElement('PopUpScreen',doc);
  var PatientMenu    = ibaGetElement('PatientMenu',doc);

  // write a primer
  PopUpFrameDoc.open();
  PopUpFrameDoc.write('' +
    '<link rel="stylesheet" href="../../html/standard.css" type="text/css">' +
    '<link rel="stylesheet" href="../../html/custom.css" type="text/css">' +
    '<script language="javascript">' +
    '  document.onunload = parent.PopUpScreen.style.display="none";'+
    '</script>' +
    '<body>' +
    '<span class="DFrameTitleBar">' +
    'Loading Document...' +
    '<img border="0" align=right src="../../images/ExitIcon.gif" ' +
    ' onclick="DFrameExit();" />' +
    '</span>');

  PopUpFrameDoc.close();

  // load url to frame
  LinkToUrl="../../cgi-bin/patweb07.pbl?reportno=2&template=1";
  PopUpFrameDoc.location.href=LinkToUrl;

  // set PopUpScreen size and position
  var w = getClientWidth();  // use document width
  if (w > 475) w -= 450;

  var h = 460;

  PopUpScreen.style.width = w + 'px';
  PopUpScreen.style.height = h + 'px';

  var top=document.body.scrollTop;
  PopUpScreen.style.top = top + 'px';
  PopUpScreen.style.left = getClientWidth() - w - 20 + 'px';

  // display the popup now
  PopUpScreen.style.display="";
}

//------------------------------------------------------------
// Function : Last 20 UR Search Frame MAP
//------------------------------------------------------------
function Last10URViewFrameMAP(mframe) {

  if (mframe=="menu") {
    win=getTop().menu.EmergencyFrame;
  } else if (mframe=="search") {
    win=parent.search;
  } else {
    win=parent.content;
  }

  win.PopUpFrame.document.open();
  win.PopUpFrame.document.write('' +
    '<link rel="stylesheet" href="../html/standard.css" type="text/css">' +
    '<link rel="stylesheet" href="../html/custom.css" type="text/css">' +
    '<script language="javascript">' +
    '  document.onunload = parent.PopUpScreen.style.display="none";'+
    '</script>' +
    '<body>' +
    '<span class="DFrameTitleBar">' +
    '<img border=0 align=right src="../../images/ExitIcon.gif" ' +
    ' onclick=parent.PopUpScreen.style.display="none";>' +
    'Loading Document...' +
    '</span>');

  win.PopUpFrame.document.close();

  LinkToUrl="../cgi-bin/patweb07.pbl?reportno=2&template=2";

  win.PopUpFrame.document.location.href=LinkToUrl;
  win.PopUpScreen.style.top=document.body.scrollTop;

  var w = document.body.clientWidth;
  if (w > 475) w -= 450;

  var h = 225;
  if (mframe=="menu") {
    h = 400;
  }
 
  win.PopUpScreen.style.width = w + 'px';
  win.PopUpScreen.style.height = h + 'px';

  if (mframe=="menu") {
    win.PopUpScreen.style.top = '80px';
  }

  win.PopUpScreen.style.left = document.body.clientWidth - w - 25 + 'px';

  // display the popup now
  win.PopUpScreen.style.display="";
}

//
//-----------------------------------------------------------------
// Remote script to cancel program locks
//-----------------------------------------------------------------
function CancelLock(UnlockType) {
  ReturnFunction="";

  for (var i=1; i < CancelLock.arguments.length; i++) {
    if (typeof(CancelLock.arguments[i]) == 'function') {
      ReturnFunction=CancelLock.arguments[i];
    }
  }

  var serverURL = "../cgi-bin/patweb62.pbl?reportno=2" +
                  "&updttype=" + UnlockType.replace(/ /g,"+");

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status==0) {
      if (typeof(ReturnFunction) == 'function') {
        ReturnFunction();
      }
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status==0) {
          if (typeof(ReturnFunction) == 'function') {
            ReturnFunction();
          }
        }
      }
    );
  }
}

//-----------------------------------------------------------------
// Remote script to validate a financial period
//-----------------------------------------------------------------
function validatePeriod(finperiod,finyear,description,startdate,enddate) {
  if (isWhitespace(finperiod.value) || isWhitespace(finyear.value)) {
    return;
  }
  var serverURL   = "../cgi-bin/comweb80.pbl?reportno=1" + 
                    "&valdperd=" + finperiod.value.replace(/ /g,"+")+
                    "&valdyear=" + finyear.value.replace(/ /g,"+");
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    description.value = ReturnValue[0];
    startdate.value = ReturnValue[1];
    enddate.value = ReturnValue[2];
    return true;
  }
  else {
    description.value = "";
    startdate.value = "";
    enddate.value = "";
    if(finperiod.type!="hidden") {
      finperiod.select();
      finperiod.focus();
    } else {
      if(finyear.type!="hidden") {
      finyear.select();
      finyear.focus();
      }
    }
  }
}

//-----------------------------------------------------------------
// Remote script to Get financial year for a keyin date
//-----------------------------------------------------------------
function getFinyear(ReturnDate,ReturnYear) {
   var serverURL   = "../cgi-bin/comweb80.pbl?reportno=30" +
                   "&valddate=" + ReturnDate.value.replace(/ /g,"+");
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnYear.value = ReturnValue[0];
  } else {
    ReturnYear.value="";
  }
}

//-----------------------------------------------------------------
// Remote script to validate Misc Charge passing Hospital id
// Multi Hospital requires use of PTHSDCLM instead of PTCNDCLM
//-----------------------------------------------------------------
function validateMisc(ReturnCode,ReturnName,MultHosp) {
  ReturnName.value="";
  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL = "../cgi-bin/patweb80.pbl?reportno=40"
                  + "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
                  + "&multhosp=" + MultHosp.value.replace(/ /g,"+");
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    return true;
  }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    ReturnCode.focus();
    return false;
  }
}

//-----------------------------------------------------------------
// Remote script to doctor code for a passed in hospital code
//-----------------------------------------------------------------
function validateDoctorHospital(ReturnCode,ReturnName,MultHosp) {
  ReturnName.value="";
  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL = "../cgi-bin/patweb80.pbl?reportno=77" 
                  + "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
                  + "&docthosp=1"
                  + "&multhosp=" + MultHosp.value.replace(/ /g,"+");
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    return true;
  }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    ReturnCode.focus();
    return false;
  }
}

//------------------------------------------------------------------------
// Function : Case Team Search Frame
//------------------------------------------------------------------------
function TeamSearchFrame(ReturnCode,ReturnName)
{
  var PopUpFrameDoc = DFrameStart();
  SearchType="" ;
  window.ReturnFunction="" ;
  for (var i=2; i < TeamSearchFrame.arguments.length; i++) 
  {
    if (typeof(TeamSearchFrame.arguments[i]) == 'function')
      window.ReturnFunction=TeamSearchFrame.arguments[i];
  }

  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../lookups/TeamSearchFrame.html";
  SearchFrameShow();
}

//------------------------------------------------------------------------
// Function : Fee Estimate Regime Search Frame
//------------------------------------------------------------------------
function RegimeSearchFrame(ReturnCode,ReturnName) 
{
  var PopUpFrameDoc = DFrameStart();
  SearchType="" ;
  window.ReturnFunction="" ;
  for (var i=2; i < RegimeSearchFrame.arguments.length; i++) {
    if (typeof(RegimeSearchFrame.arguments[i]) == 'function') {
      window.ReturnFunction=RegimeSearchFrame.arguments[i] }
    }

  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../lookups/RegimeSearchFrame.html";
  SearchFrameShow();
}

//------------------------------------------------------------------------
// Function : Fee Estimate Regime View Frame
//------------------------------------------------------------------------
function RegimeViewFrame(Regime) 
{
  if(isWhitespace(Regime.value)) 
  {
    alert("Regime code is a mandatory field");
    return;
  }
  linkurl="patweb61.pbl?reportno=06&template=008" +
           "&pmreg001=" + Regime.value.replace(/ /g,"+") +
           "&pmreg002=++0";
  Left=(document.body.clientWidth-720)/2;
  DFrameLink(linkurl,0,Left,720,420);
}

//------------------------------------------------------------
// Check Date Range Values
//------------------------------------------------------------
function CheckDateRange(FromInput,ToInput) 
{
  if (isWhitespace(FromInput.value) || isWhitespace(ToInput.value))
    return true;

  if (SetDateYYYYMMDD(FromInput.value) > SetDateYYYYMMDD(ToInput.value)) 
  {
    alert("Invalid date range entered for '" + 
          FromInput.title + "' - '" + ToInput.title + "'");

    ToInput.select();
    FocusDelay(ToInput);
    return false;
  }

  return true;
}

//------------------------------------------------------------
// Compare Time Values
//------------------------------------------------------------
function compareTimes(FromInput,ToInput) 
{

  FromInput = trim(FromInput.replace(/:/g,""))-0;
  ToInput = trim(ToInput.replace(/:/g,""))-0;

  if (FromInput < ToInput) 
  {
    return false;
  }

  return true;
}

//------------------------------------------------------------
// Convert Date Field from DD MMM YYYY to YYYYMMDD
//------------------------------------------------------------
function SetDateYYYYMMDD(DateString) {
 if ((typeof DateString != 'undefined') && (DateString!="")) {
   if (DateString.length < 11)
     return "";

   day=DateString.substr(0,2)
   mthnam=DateString.substr(3,3)
   yrr=DateString.substr(7,4)
   switch (mthnam) {
    case "Jan": mon="01";break;
    case "Feb": mon="02";break;
    case "Mar": mon="03";break;
    case "Apr": mon="04";break;
    case "May": mon="05";break;
    case "Jun": mon="06";break;
    case "Jul": mon="07";break;
    case "Aug": mon="08";break;
    case "Sep": mon="09";break;
    case "Oct": mon="10";break;
    case "Nov": mon="11";break;
    case "Dec": mon="12";break;
    }
   ReturnString=yrr+mon+day
   ReturnString.replace(/ /g,"0")
   return ReturnString
 }
 else {
   return ""
 }
}

//------------------------------------------------------------
// Reverse of function SetDateYYYYMMDD(DateString)
//------------------------------------------------------------
function SetDateDDMMMYYYY(YYYYMMDD){

  if(!Number(YYYYMMDD)||arguments[0].length!=8){
     return "";
  }
  day = ZeroPad(parseInt(YYYYMMDD.substr(6,2),10),2);
  month = GetMonthName(YYYYMMDD.substr(4,2),10);
  year = parseInt(YYYYMMDD.substr(0,4),10);

  return day+" "+month+" "+year;
}

//------------------------------------------------------------
// Check if time is in the future
//------------------------------------------------------------
function CheckFutureTime(theForm,checkdate,checktime) {
 SetCurrentDateTimeNoFocus(null,theForm.currtime);// UNIX time
 if (SetDateYYYYMMDD(checkdate)==(theForm.currdate.value)) {
   var newttime=trim(checktime.value.replace(/:/g,"")) - 0
   var currentt=trim(theForm.currtime.value.replace(/:/g,"")) - 0
   if(newttime>currentt){
     alert("Time is in the future");
     FocusDelay(checktime);
   }
 }
}

//------------------------------------------------------------
// Validate outpatient clinic with site code validation
//------------------------------------------------------------
function validateClinic(Site,ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  if(isWhitespace(Site.value)) {
    alert("Outpatient site is a required field.");
    ReturnCode.value="";
    return;
  }
  for (var i=3; i < validateClinic.arguments.length; i++) {
    if (typeof(validateClinic.arguments[i]) == 'function') {
      ReturnFunction=validateClinic.arguments[i] }
    else {
      validateClinic.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=25" +
                    "&checksit=" + Site.value.replace(/ /g,"+") +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=3; i < validateClinic.arguments.length; i++) {
       if (typeof(validateClinic.arguments[i]) != 'function') {
         j++
         validateClinic.arguments[i].value=ReturnValue[j] } }
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

function days_between(date1, date2) {
    date1=new Date(date1);
    date2=new Date(date2);

    // The number of milliseconds in one day
    var ONE_DAY = 1000 * 60 * 60 * 24

    // Convert both dates to milliseconds
    var date1_ms = date1.getTime()
    var date2_ms = date2.getTime()

    // Calculate the difference in milliseconds
    var difference_ms = Math.abs(date1_ms - date2_ms)
    
    // Convert back to days and return
    return Math.round(difference_ms/ONE_DAY)

}

//------------------------------------------------------------
// Validate patient suspension
//------------------------------------------------------------
function validateSuspension(ReturnCode,valdDate,ReturnFDate,ReturnTDate) {
  ReturnFunction="" ;
  ReturnFDate.value="";
  ReturnTDate.value="";
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/comweb80.pbl?reportno=17" +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&valddate=" + valdDate.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnFDate.value=trim(ReturnValue[0])
    j=0
    for (var i=3; i < validateSuspension.arguments.length; i++) {
       if (typeof(validateSuspension.arguments[i]) != 'function') {
         j++
         validateSuspension.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() }
    return true;
    }
  else {
    return false;
     }
}

//------------------------------------------------------------
// Validate WL suspension - with theatre unique key
//------------------------------------------------------------
function validateWLSuspension(ReturnCode,valdDate,ReturnFDate,ReturnTDate) {
  ReturnFunction="" ;
  ReturnFDate.value="";
  ReturnTDate.value="";
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/watweb04.pbl?reportno=6" +
                    "&valduniq=" + ReturnCode.value.replace(/ /g,"+") +
                    "&valddate=" + valdDate.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnFDate.value=trim(ReturnValue[0])
    j=0
    for (var i=3; i < validateWLSuspension.arguments.length; i++) {
       if (typeof(validateWLSuspension.arguments[i]) != 'function') {
         j++
         validateWLSuspension.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() }
    return true;
    }
  else {
    return false;
     }
}

//------------------------------------------------------------
// Validate WL suspension - with waiting list key
//------------------------------------------------------------
function validateWLKeySuspension(ReturnCode,valdDate,ReturnFDate,ReturnTDate) {
  ReturnFunction="" ;
  ReturnFDate.value="";
  ReturnTDate.value="";
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/watweb04.pbl?reportno=7" +
                    "&valdwtky=" + ReturnCode.value.replace(/ /g,"+") +
                    "&valddate=" + valdDate.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnFDate.value=trim(ReturnValue[0])
    j=0
    for (var i=3; i < validateWLKeySuspension.arguments.length; i++) {
       if (typeof(validateWLKeySuspension.arguments[i]) != 'function') {
         j++
         validateWLKeySuspension.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() }
    return true;
    }
  else {
    return false;
     }
}

//------------------------------------------------------------
// check if medicare card was swiped
//------------------------------------------------------------
function checkMedicareSwipe(theField,validTo){
 if(theField.value.length>10) {             // Assume swiped if length > 10
  if(theField.value.substr(0,6)=="610072"){      // Cherry Keyboard
     a=theField.value.substr(7,9)
     b=theField.value.substr(17,1)
     c=theField.value.substr(19,6)
     if(!isWhitespace(theField.defaultValue)) {
       medicarenum=theField.defaultValue.substr(0,9);
       issuenum=theField.defaultValue.substr(9,1);
       if(a != medicarenum) {
         ResetOnBlurHandler(theField);
         alert("Medicare number has changed.");
       } else if(b < issuenum) {
         ResetOnBlurHandler(theField);
         alert("ERROR - Issue number is less than the current issue number.");
         theField.value=theField.defaultValue;
         return false;
       }
     }
     theField.value=a+b
     if(validTo!=undefined){
     validTo.value=c
     checkDateSV(validTo,"valid to");}
  } else if(theField.value.substr(0,1)==";") {   // ASP Quick Strip
     a=theField.value.substr(8,9)
     b=theField.value.substr(18,1)
     c=theField.value.substr(20,6)
     if(!isWhitespace(theField.defaultValue)) {
       medicarenum=theField.defaultValue.substr(0,9);
       issuenum=theField.defaultValue.substr(9,1);
       if(a != medicarenum) {
         ResetOnBlurHandler(theField);
         alert("Medicare number has changed.");
       } else if(b < issuenum) {
         ResetOnBlurHandler(theField);
         alert("ERROR - Issue number is less than the current issue number.");
         theField.value=theField.defaultValue;
         return false;
       }
     }
     theField.value=a+b
     if(validTo!=undefined){
     validTo.value=c
     checkDateSV(validTo,"valid to");}
  } 
 } else {
     if(!isWhitespace(theField.defaultValue)) {
       if(!isWhitespace(theField.value)) {
         medicarenum=theField.defaultValue.substr(0,9);
         issuenum=theField.defaultValue.substr(9,1);
         a=theField.value.substr(0,9)
         b=theField.value.substr(9,1)
         if(a != medicarenum) {
           ResetOnBlurHandler(theField);
           alert("Medicare number has changed.");
         } else if(b < issuenum) {
           ResetOnBlurHandler(theField);
           alert("Issue number is less than the current issue number.");
         }
       }
     }
   }
  theField.defaultValue=theField.value;
  return true;
}

//------------------------------------------------------------
// Get pmsprdaf details for a hospital code
//------------------------------------------------------------
function getPRS2Details(ReturnCode,ReturnSDate,ReturnEDate,ReturnError) {
  ReturnFunction="" ;
  ReturnSDate.value="";
  ReturnEDate.value="";
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/comweb80.pbl?reportno=18" +
                    "&valdhosp=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnSDate.value=trim(ReturnValue[0])
    j=0
    for (var i=2; i < getPRS2Details.arguments.length; i++) {
       if (typeof(getPRS2Details.arguments[i]) != 'function') {
         j++
         getPRS2Details.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() }
    return true;
    }
  else {
    return false;
     }
}

//------------------------------------------------------------
// Function : Contract Procedure Fund Search Frame
//------------------------------------------------------------
function ContractProcedureCodeSearchFrame(ProcClmc,ProcCode,ProcSurg,ProcCntr,ProcHosp,ProcWard,ProcAdat,ReturnCode,ReturnName) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ProcClmc=ProcClmc;
  window.ProcCode=ProcCode;
  window.ProcSurg=ProcSurg;
  window.ProcCntr=ProcCntr;
  window.ProcHosp=ProcHosp;
  window.ProcWard=ProcWard;
  window.ProcAdat=ProcAdat;
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.ReturnFunction="" ;
  if (ContractProcedureCodeSearchFrame.arguments.length > 8) {
    window.ReturnFunction=ContractProcedureCodeSearchFrame.arguments[9] }
  PopUpFrameDoc.location.href ="../lookups/ContractProcedureCodeSearch.html";
  SearchFrameShow();
}

//-----------------------------------------------------------------
// Remote script to validate contract code 
//-----------------------------------------------------------------
function validateContract(ProcClmc,ProcCode,ProcSurg,ProcCntr,ProcHosp,
                          ProcWard,ProcAdat,ReturnCount,ReturnContract,
                          ReturnDesc) 
{
  ReturnCount.value="";
  ReturnContract.value="";
  ReturnDesc.value="";

  var serverURL = "../cgi-bin/comweb80.pbl?reportno=21"
                    + "&procclmc=" + ProcClmc.value.replace(/ /g,"+")
                    + "&cprocode=" + ProcCode.value.replace(/ /g,"+")
                    + "&procsurg=" + ProcSurg.value.replace(/ /g,"+")
                    + "&proccntr=" + ProcCntr.value.replace(/ /g,"+")
                    + "&prochosp=" + ProcHosp.value.replace(/ /g,"+")
                    + "&procward=" + ProcWard.value.replace(/ /g,"+")
                    + "&procadat=" + ProcAdat.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnCount.value=trim(ReturnValue[0])
    ReturnContract.value=trim(ReturnValue[1])
    ReturnDesc.value=trim(ReturnValue[2])
  }
  else {
    ReturnValue.value="";
    return false;
  }
}

//----------------------------------------------------------------------
// Display the MBS item description using js variable MBSItemDescription.      
// Australian = MBS Items
// NZ Private = Procedure Item
//----------------------------------------------------------------------
function MBSDescription() {
  document.write(MBSItemDescription);
}

//----------------------------------------------------------------------
// Display the master referral description using js variable 
// MasterReferralDescription.
// VIC = SACS
// NZ  = Master
//----------------------------------------------------------------------
function MRDescription() {
  document.write(MasterReferralDescription);
}

//
//----------------------------------------------------------------------
// Display the MBS item description using js variable MBSItemDescription.
// Australian = MBS Items
// NZ Private = Procedure Item
//----------------------------------------------------------------------
function HFDescription() {
  document.write(HealthFundDescription);
}

//----------------------------------------------------------------------
// Display the Practice description using js variable PracticeDescription
// Australian = Practice/NZ
// Pacific  = Village
//----------------------------------------------------------------------
function PractDescription() {
  document.write(PracticeDescription);
}

//
//-----------------------------------------------------------------
// Remote script to validate contract code
//-----------------------------------------------------------------
function validateContractProcedure(ProcClmc,ProcCode,ProcSurg,ProcCntr,ProcHosp,
                          ProcWard,ProcAdat,ContProc,ReturnContract) {
  ReturnContract.value="";
 
  var serverURL = "../cgi-bin/comweb80.pbl?reportno=25"
                    + "&procclmc=" + ProcClmc.value.replace(/ /g,"+")
                    + "&cprocode=" + ProcCode.value.replace(/ /g,"+")
                    + "&procsurg=" + ProcSurg.value.replace(/ /g,"+")
                    + "&proccntr=" + ProcCntr.value.replace(/ /g,"+")
                    + "&prochosp=" + ProcHosp.value.replace(/ /g,"+")
                    + "&procward=" + ProcWard.value.replace(/ /g,"+")
                    + "&procadat=" + ProcAdat.value.replace(/ /g,"+")
                    + "&contproc=" + ContProc.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnContract.value=trim(ReturnValue[0])
    return true; }
  else {
    ReturnContract.value="";
    return false;
  }
}

//------------------------------------------------------------
// Validate Allied Health Diagnosis Code using remote scripting
//------------------------------------------------------------
function validateAHDiag(ReturnDept,ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=3; i < validateAHDiag.arguments.length; i++) {
    if (typeof(validateAHDiag.arguments[i]) == 'function') {
      ReturnFunction=validateAHDiag.arguments[i] }
    else {
      validateAHDiag.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL = "../cgi-bin/allweb01.pbl?reportno=8&functype=3" + 
                  "&deptcode=" + ReturnDept.value.replace(/ /g,"+") +
                  "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=ReturnValue[0];
    j=0
    for (var i=3; i < validateAHDiag.arguments.length; i++) {
       if (typeof(validateAHDiag.arguments[i]) != 'function') {
         j++
         validateAHDiag.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    ReturnCode.focus();   }
}
//------------------------------------------------------------
// Validate Allied Health Diagnosis Code using remote scripting
// with VINAH version and episode start date test
//------------------------------------------------------------
function validateAHDiagV(ReturnDept,ReturnCode,ReturnName,AcceptedDate) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=4; i < validateAHDiagV.arguments.length; i++) {
    if (typeof(validateAHDiagV.arguments[i]) == 'function') {
      ReturnFunction=validateAHDiagV.arguments[i] }
    else {
      validateAHDiagV.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL = "../cgi-bin/allweb01.pbl?reportno=8&functype=3&chkvinah=1" +
                  "&deptcode=" + ReturnDept.value.replace(/ /g,"+") +
                  "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                  "&valddate=" + AcceptedDate.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=ReturnValue[0];
    j=0
    for (var i=4; i < validateAHDiagV.arguments.length; i++) {
       if (typeof(validateAHDiagV.arguments[i]) != 'function') {
         j++
         validateAHDiagV.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    ReturnCode.focus();   }
}
//------------------------------------------------------------
// Validate Allied Health Medication Code using remote scripting
//------------------------------------------------------------
function validateAHMed(ReturnCode,ReturnName,ReturnUnit,ReturnRoute,ReturnMtype) {
  ReturnFunction="" ;
  ReturnName.value="";
  ReturnUnit.value="";
  ReturnRoute.value="";
  ReturnMtype.value="";
  for (var i=2; i < validateAHMed.arguments.length; i++) {
    if (typeof(validateAHMed.arguments[i]) == 'function') {
      ReturnFunction=validateAHMed.arguments[i] }
    else {
      validateAHMed.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL = "../cgi-bin/allweb01.pbl?reportno=8&functype=4" +
                  "&valdmcod=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=ReturnValue[0];
    j=0
    for (var i=2; i < validateAHMed.arguments.length; i++) {
       if (typeof(validateAHMed.arguments[i]) != 'function') {
         j++
         validateAHMed.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    ReturnCode.focus();  }
}

//------------------------------------------------------------
// Validate Allied Health Intervention Code using remote scripting
//------------------------------------------------------------
function validateAHInt(ReturnDept,ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=3; i < validateAHInt.arguments.length; i++) {
    if (typeof(validateAHInt.arguments[i]) == 'function') {
      ReturnFunction=validateAHInt.arguments[i] }
    else {
      validateAHInt.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;

  var returncde = encodeURIComponent(ReturnCode.value);
  var serverURL = "../cgi-bin/allweb01.pbl?reportno=8&functype=5" +
                  "&deptcode=" + ReturnDept.value.replace(/ /g,"+") +
                  "&valdcode=" + returncde.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=ReturnValue[0];
    j=0
    for (var i=3; i < validateAHInt.arguments.length; i++) {
       if (typeof(validateAHInt.arguments[i]) != 'function') {
         j++
         validateAHInt.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    ReturnCode.focus();  }
}

//------------------------------------------------------------
// Function : Standard Allied Health Diagnosis Search Frame
//------------------------------------------------------------
function AHDiagSearchFrame(ReturnDept,ReturnCode,ReturnName) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnDept=ReturnDept ;
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../lookups/AHDiagSearchFrame.html";
  SearchFrameShow();
}
//------------------------------------------------------------
// Function : Standard Allied Health Diagnosis Search Frame
//            with VINAH version and episode start date test
//------------------------------------------------------------
function AHDiagSearchFrameV(ReturnDept,ReturnCode,ReturnName,ReturnDate)
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnDept=ReturnDept ;
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.ReturnDate=ReturnDate ;
  PopUpFrameDoc.location.href = "../lookups/AHDiagSearchFrameV.html";
  SearchFrameShow();
}
//------------------------------------------------------------
// Function : Standard Medication Search Frame
//------------------------------------------------------------
function MedicationSearchFrame(ReturnCode,ReturnName,ReturnUnit,ReturnRoute,ReturnMtype) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.ReturnUnit=ReturnUnit ;
  window.ReturnRoute=ReturnRoute ;
  window.ReturnMtype=ReturnMtype ;
  PopUpFrameDoc.location.href = "../lookups/MedicationSearchFrame.html";
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Standard Allied Health Intervention Search Frame
//------------------------------------------------------------
function InterventionSearchFrame(ReturnDept,ReturnCode,ReturnName) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnDept=ReturnDept ;
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../lookups/InterventionSearchFrame.html";
  SearchFrameShow();
}

//------------------------------------------------------------
// Function : Catalog Search Frame
//------------------------------------------------------------
function CatalogSearchFrame(ReturnCode,ReturnName,ReturnCost) 
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.ReturnCost=ReturnCost ;
  window.ReturnFunction="";
  PopUpFrameDoc.location.href = "../lookups/CatalogSearchFrame.html";
  SearchFrameShow();

  if (CatalogSearchFrame.arguments.length > 2) {
    window.ReturnFunction=CatalogSearchFrame.arguments[3] }
  PopUpFrameDoc.location.href = "../lookups/CatalogSearchFrame.html";
  SearchFrameShow();
}

//------------------------------------------------------------
// Validate Catalog Code using remote scripting
//------------------------------------------------------------
function validateCatalog(ReturnCode,ReturnName,ReturnCost) {
  ReturnFunction="" ;
  ReturnName.value="";
  ReturnCost.value="";
  for (var i=3; i < validateCatalog.arguments.length; i++) {
    if (typeof(validateCatalog.arguments[i]) == 'function') {
      ReturnFunction=validateCatalog.arguments[i] }
    else {
      validateCatalog.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL = "../cgi-bin/sinweb02.pbl?reportno=8&updatety=1" +
                  "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=ReturnValue[0];
    ReturnCost.value=ReturnValue[1];
    j=0
    for (var i=3; i < validateCatalog.arguments.length; i++) {
       if (typeof(validateCatalog.arguments[i]) != 'function') {
         j++
         validateCatalog.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.select();  }
}

//------------------------------------------------------------
// Validate Adverse Outcome Code using remote scripting
//------------------------------------------------------------
function validateOutcome(ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=2; i < validateOutcome.arguments.length; i++) {
    if (typeof(validateOutcome.arguments[i]) == 'function') {
      ReturnFunction=validateOutcome.arguments[i] }
    else {
      validateOutcome.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL = "../cgi-bin/comweb80.pbl?reportno=29" +
                  "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=ReturnValue[0];
    j=0
    for (var i=2; i < validateOutcome.arguments.length; i++) {
       if (typeof(validateOutcome.arguments[i]) != 'function') {
         j++
         validateOutcome.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    ReturnCode.focus();
    return false;
     }
}

//------------------------------------------------------------
// Validate the related provider (HCP) Using Remote Scripting
//------------------------------------------------------------
function validateRelProv(ReturnCode,ReturnName,ProvType) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=3; i < validateRelProv.arguments.length; i++) {
    if (typeof(validateRelProv.arguments[i]) == 'function') {
      ReturnFunction=validateRelProv.arguments[i] }
    else {
      validateRelProv.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  if (isWhitespace(ProvType.value)) {
    alert("Related provider type is a mandatory field.");
    ReturnCode.value="";
    FocusDelay(ReturnCode);
    return;
  }
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=18&valdtype=16" + 
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&valptype=" + ProvType.value.replace(/ /g,"+") 
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=3; i < validateRelProv.arguments.length; i++) {
       if (typeof(validateRelProv.arguments[i]) != 'function') {
         j++
         validateRelProv.arguments[i].value=ReturnValue[j] } }
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

//------------------------------------------------------------------------
// Function : Related Provider HCP Search Frame
//------------------------------------------------------------------------
function HCPSearchFrameProv(ReturnCode,ReturnName,ReturnPtype) 
{
  if (isWhitespace(ReturnPtype.value)) 
  {
    alert("Related provider type is a mandatory field.");
    return;
  }
  var PopUpFrameDoc = DFrameStart();
  SearchType="" ;
  window.ReturnFunction="" ;
  window.ReturnProv="" ;
  window.ReturnPrac="" ;
  window.ReturnDesc="" ;
  window.ReturnCntr="" ;
  for (var i=2; i < HCPSearchFrameProv.arguments.length; i++) 
  {
    if (typeof(HCPSearchFrameProv.arguments[i]) == 'function')
      window.ReturnFunction=HCPSearchFrameProv.arguments[i];
  } 
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.ReturnPtype=ReturnPtype ;
  PopUpFrameDoc.location.href = "../lookups/HCPSearchFrameProv.html";
  SearchFrameShow();
}

//-----------------------------------------------------------------
// Check for outstanding ward/bed requests. Update the status to
// completed and prompt any mismatch warnings
//-----------------------------------------------------------------
function WardbedreqUpdate(adm,ward,bed,upind) {
  ReturnFunction="" ;
  for (var i=1; i < WardbedreqUpdate.arguments.length; i++) {
   if (typeof(WardbedreqUpdate.arguments[i]) == 'function') {
     ReturnFunction=WardbedreqUpdate.arguments[i] } }
  if (upind==undefined) {
    var serverURL = "../cgi-bin/patweb10.pbl?reportno=10&remoteno=1" +
                    "&admissno="+adm.value.replace(/ /g,"+") +
                    "&validwrd="+ward.value.replace(/ /g,"+") +
                    "&validbed="+bed.value.replace(/ /g,"+")
  } else {
    var serverURL = "../cgi-bin/patweb10.pbl?reportno=10&remoteno=1" +
                    "&admissno="+adm.value.replace(/ /g,"+") +
                    "&validwrd="+ward.value.replace(/ /g,"+") +
                    "&validbed="+bed.value.replace(/ /g,"+") +
                    "&valdindc="+upind.value.replace(/ /g,"+")
  }
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    if(ReturnValue[0]=="1") {
      alert("Ward/Bed request mismatch - Please notify the" +
            " bed allocator");
    }
    if(ReturnValue[0]=="2") {
//      alert("Bed Must be Entered.");
    }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() 
    } 
  }
}

function RemoveQuote(Field) {
    Field.value=Field.value.replace(/\"/g,"");
}

function RemoveAmbersand(Field) {
    Field.value=Field.value.replace(/\&/g,"");
}

//------------------------------------------------------------------------
// Validate A nurse code and return the formatted name in ReturName
//------------------------------------------------------------------------
function validateNurseCode(OptionNumber,ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=3; i < validateNurseCode.arguments.length; i++) {
    if (typeof(validateNurseCode.arguments[i]) == 'function') {
      ReturnFunction=validateNurseCode.arguments[i] }
    else {
      validateNurseCode.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[1]) + " " + trim(ReturnValue[0])
    j=0
    for (var i=3; i < validateNurseCode.arguments.length; i++) {
       if (typeof(validateNurseCode.arguments[i]) != 'function') {
         j++
         validateNurseCode.arguments[i].value=ReturnValue[j] } }
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

//------------------------------------------------------------------------
// Read the document meta tags and return the contents for a specific name
//------------------------------------------------------------------------
function getMetaContents()
{ 
  // arguments for this function are :
  // metaName - the name on the meta tag.
  // context [optional] - the document root to search from i.e. top of frame etc. 
  var metaName;  // parameter 1 
  var context;   // parameter 2 (optonal)

  // get the arguments 
  if (arguments.length == 0) return null;
  if (arguments.length > 0) metaName = arguments[0];
  if (arguments.length > 1) context  = arguments[1];
  if (context == null) context = document;  // default to current document 

  // if the context parameter is NOT a document element, back up to the parent
  // note: IE does not indertant context.DOCUMENT_NODE
  if (context.nodeType != 9)
  {
    context = context.ownerDocument;
  }

  var metatags = context.getElementsByTagName('meta');
  for (var i in metatags)
  { 
    if (metatags[i].name == metaName)
    {
      return metatags[i].content;
    }
  }
  return "Not Specified";
}

//------------------------------------------------------------------------
// Get first occurence of a specified id (preferred) or name              
//------------------------------------------------------------------------
function ibaGetElement()
{
  // arguments for this function are :
  // idorname - the id or name of the entity being sought.
  // context [optional] - the document root to search from i.e. top of frame etc. 
  var idorname;  // parameter 1 
  var context = null;   // parameter 2 (optonal) defaults to curent doc.

  // get the arguments 
  if (arguments.length == 0) return null;
  if (arguments.length > 0) idorname = arguments[0];
  if (arguments.length == 2) context  = arguments[1];
  if (context == null) context = document;  // default to current document 

  //var objlist;
  var obj = context.getElementById(idorname);
  if (obj) return obj;

  var objlist = context.getElementsByName(idorname);
  if (objlist.length  == 0)  return null;
  return objlist[0];
}

//------------------------------------------------------------------------
// Get addressability to PopUpFrame or PopUpFrame1 
//------------------------------------------------------------------------
function ibaGetIframeDoc(iframe)
{

  var context = null;   // parameter 2 (optonal) defaults to curent doc.

  // get the arguments 
  if (arguments.length == 2) context  = arguments[1];
  if (context == null) context = document;  // default to current document 

  var iFrameDoc = null;

  // find the PopUpFrame
  var PopUpFrame = ibaGetElement(iframe,context);
  if (PopUpFrame)
  {
    if (PopUpFrame.contentDocument)                // W3C standards compliant
    {
      iFrameDoc = PopUpFrame.contentDocument;
    }
    else
    {
      iFrameDoc = PopUpFrame.contentWindow.document; // IE only
    }
  }
  return iFrameDoc;
}

//----------------------------------------------------------------------
// Display the emergency contact name descriptions
// ContactName(1) = ContactName1 
//            (2) = ContactName2
//            (3) = ContactName3
//            (4) = ContactName4
//            (5) = ContactName5
//            (6) = ContactName6
//----------------------------------------------------------------------
function ContactName(contact_number) {
  switch (contact_number) {
    case 1: {
       document.write(ContactName1);
       break; }
    case 2: {
       document.write(ContactName2);
       break; }
    case 3: {
       document.write(ContactName3);
       break; }
    case 4: {
       document.write(ContactName4);
       break; }
    case 5: {
       document.write(ContactName5);
       break; }
    case 6: {
       document.write(ContactName6);
       break; }
  }
}

function getClientWidth()
{
  var w;

  if (window.navigator.userAgent.indexOf("MSIE") >= 1) {
    if (document.innerWidth)
      w = document.innerWidth;
    else if (document.documentElement.clientWidth) 
      w = document.documentElement.clientWidth;
    else if (document.body)
      w = document.body.clientWidth; 
  }
  else {
    // Cross-browser value (Chrome/Edge/Firefox) 
    w = Math.max(document.body.clientWidth,
                 document.body.offsetWidth,
                 document.documentElement.clientWidth);
  }

  return w;
}

//----------------------------------------------------------------------
// Cross browser method of finding the Height of the client or a 
// named element object
//----------------------------------------------------------------------
function getClientHeight(element_object) {
  var h = 0;
  if (arguments.length == 1) {    // Height of a named element
    if (element_object != undefined) {
      h = element_object.clientHeight;
    }
  }
  else {                        // Height of the viewport
    if (window.navigator.userAgent.indexOf("MSIE") >= 1) {
      if (document.innerHeight)
	h = document.innerHeight;
      else if (document.documentElement.clientHeight)
	h = document.documentElement.clientHeight;
      else if (document.body)
	h = document.body.clientHeight;
    }
    else {
      // Cross-browser value (Chrome/Edge/Firefox)
      h = Math.max(document.body.clientHeight,
                   document.body.offsetHeight,
                   document.documentElement.clientHeight);
    }
  }

  return h;
}

//========================================================================
// Format the U/R number by removing any hyphens
//========================================================================
function FormatURScan(str) {
  var objlist = document.getElementsByName('mrcnlzer');
  if (objlist.length == 0 || objlist[0].value!="1")  return;

  var strln = str.value.length;
  if(strln>0){
//  for (var i=0;i<=strln;i++) {                    // Remove leading zero's
//    if (str.value.substring(0,1)=='0') {          // no longer required
//      str.value=str.value.substring(1,str.length)
//    } else {
//      break;
//    }
//  }
    str.value=str.value.replace(/-/g,"");
  }
}

//========================================================================
// Format the 8 character U/R number from a MRT long format
// barcode label when it's scanned in a UR field that's longer the 8.
//========================================================================
function FormatURScanMrtLf(str) {
  if(str.value.substr(0,2)=="LF" && str.value.length >= 8) {
      str.value=str.value.substr(2,8);
  }
}
//========================================================================
// Format the 8 character U/R number from a MRT long format
// barcode label when it's scanned in a UR field that's the 8 long.
//========================================================================
function TruncateMrtLf(str) {
  if(typeof(HospitalStateforHDPExtracts!=undefined)) {
    if(HospitalStateforHDPExtracts=="1") {  // NZ
      TruncateMrtLfNZ(str);
      return;
    }
  }
  if(str.value.substr(0,2)=="LF") {
    str.value=str.value.substr(2,8);
  }
}
//========================================================================
// NZ - Format the 8 character U/R number from a MRT long format
// barcode label when it's scanned in a UR field that's the 8 long.
//========================================================================
function TruncateMrtLfNZ(str) {
  if(str.value.substr(0,2)=="LF" && str.value.length==3) {
    checkur=str.value.substr(2,1).search('[a-zA-Z]');
    if(checkur>=0) {
      return;                     // NZ U/R ABC1234
    }
    str.value=str.value.substr(2,8);
  }
}
//------------------------------------------------------------------------
// Store 'theForm' cgi variables and values in a cookie called 'cookieName'
//------------------------------------------------------------------------
function SetPageCookies(theForm,cookieName) {
  storecookie=""
  for(var i = 0; i < theForm.elements.length; i++) {
    var el=theForm.elements[i] ;
    if(el.type != "hidden" && !el.readOnly && !el.disabled &&
       el.type != "textarea" && el.type != "button" && el.type !="checkbox") {
      if(!isWhitespace(el.value)) {
         storecookie+= el.name + el.value + "|"
      }
    }
  }
  document.cookie = cookieName + "=" + escape(storecookie) + ";"
}

//------------------------------------------------------------------------
// Read a cookie called 'cookieName' and default to values back to 'theForm'
//------------------------------------------------------------------------
function LoadPageCookies(theForm,cookieName, element, delegate) 
{
  CookieData=GetCookieData(cookieName);
  if (isWhitespace(CookieData) || CookieData=='unknown') {
    return;
  }
  CookieValues=CookieData.split("|");
  for (var i=0; i<CookieValues.length; i++) 
  {
    if(!isWhitespace(CookieValues[i]))
    {
      cginame=CookieValues[i].substr(0,8);
      cgivalue=CookieValues[i].substr(8);

      try
      {
        // Get all elements named cginame (from multiple form objects)
        rs = document.getElementsByName(cginame);
        for(rsEl=0; rsEl<rs.length; rsEl++){
          // Match the element who's parent formName = theForm
          if(rs[rsEl].form.name==theForm.name){
            rs[rsEl].value = cgivalue;
            // Manually trigger onchange event for element
            if(element && element==cginame){ delegate(); }
            if(rs[rsEl].type!="hidden"){ el.focus(); }
            break;  // Found correct element, no need to keep looping
          }
        }
      }catch(e){}
    }
  }
}
//-----------------------------------------------------------------------------
//-- reloadParentFrame  . force reload of PopUpScreen parent frame 
//----------------------------------------------------------------------------                   
function reloadParentFrame()
{
  // calls to this routine are in the TBL code - notably IBAWEBCD
  var parenturl;

  if (arguments.length > 0) 
    parenturl  = arguments[0];  // if given a URL, go there
  else
  {
     parenturl = parent.location.href;

    // This is the equivalent of parent.location.reload(true)
    // without the overhead of uncaching and re-loading all the javascript and css files.
    // The random number appended to the url will force a refresh from apache

    if (parenturl.indexOf('?') > -1)
      parenturl += '&';
    else
      parenturl += '?';
    parenturl += 'rldrand=' + Math.random();
  }

  parent.document.getElementById('PopUpScreen').style.display = "none";
  parent.location.href = parenturl;
}
//-----------------------------------------------------------------------------
//-- reload2ParentFrame  . force reload of PopUpScreen parent frame
//----------------------------------------------------------------------------
function reload2ParentFrame()
{
  // calls to this routine are in the TBL code - notably IBAWEBCD

  var parenturl;

  if (arguments.length > 0) 
    parenturl  = arguments[0];
  else
  {
     parenturl = parent.parent.location.href;

    // This is the equivalent of parent.location.reload(true)
    // without the overhead of uncaching and re-loading all the javascript and css files.
    // The random number appended to the url will force a refresh from apache

    if (parenturl.indexOf('?') > -1)
      parenturl += '&';
    else
      parenturl += '?';
    parenturl += 'rldrand=' + Math.random();
  }
  parent.parent.document.getElementById('PopUpScreen').style.display = "none";
  parent.parent.location.href = parenturl;
}

//-----------------------------------------------------------------------------
//-- reload3ParentFrame  . force reload of PopUpScreen parent frame
//----------------------------------------------------------------------------
function reload3ParentFrame()
{
  // calls to this routine are in the TBL code - notably IBAWEBCD

  var parenturl;

  if (arguments.length > 0) 
    parenturl  = arguments[0];
  else
  {
     parenturl = parent.parent.parent.location.href;

    // This is the equivalent of parent.location.reload(true)
    // without the overhead of uncaching and re-loading all the javascript and css files.
    // The random number appended to the url will force a refresh from apache

    if (parenturl.indexOf('?') > -1)
      parenturl += '&';
    else
      parenturl += '?';

    parenturl += 'rldrand=' + Math.random();
  }
  parent.parent.parent.document.getElementById('PopUpScreen').style.display = "none";
  parent.parent.parent.location.href = parenturl;
}


//-----------------------------------------------------------------------------
//-- redirectParentFrame  . redirect PopUpScreen  parent frame
//----------------------------------------------------------------------------
function redirectParentFrame(redirectURL)
{
  // calls to this routine are in the TBL code - notably IBAWEBCD
  parent.document.getElementById('PopUpScreen').style.display = "none";
  parent.location.href = redirectURL;
}
//-----------------------------------------------------------------------------
//-- redirectParentParentFrame  . redirect PopUpScreen  parent frame
//----------------------------------------------------------------------------
function redirectParentParentFrame(redirectURL)
{
  // calls to this routine are in the TBL code - notably IBAWEBCD
  parent.document.getElementById('PopUpScreen').style.display = "none";
  parent.parent.location.href = redirectURL;
}

//-----------------------------------------------------------------------------
//-- redirectTopContent   . redirect the Content frame              
//----------------------------------------------------------------------------
function redirectTopContent(redirectURL)
{
  // calls to this routine are in the TBL code                        
  // find the 'content' frame, fom the top
  var ContentFrame = getTop().frames['content'];
  //
  if(getTop().location.pathname.match(/EmergencyMapFrameFS/g) ||
     getTop().location.pathname.match(/EmergencyMapCabrini/g) ||
     getTop().location.pathname.match(/EmergencyMapView/g)) {
     if(getTop().frames['search'] != undefined) {
       ContentFrame = getTop().frames['search'];
     }
  }
  // load new URL
  if (ContentFrame.contentDocument)                // W3C standards compliant
  {
    ContentFrame.contentDocument.location.href = redirectURL;
  }
  else
  {
    ContentFrame.document.location.href = redirectURL; // IE only
  }
}


//-----------------------------------------------------------------------------
//-- redirectTopPopUpFrame  . redirect the Content PopUpFrame frame
//----------------------------------------------------------------------------
function redirectTopPopUpFrame(redirectURL)
{
  // calls to this routine are in the TBL code                        
  // find the 'content' frame, fom the top
  var ContentFrame = getTop().frames['content'];
  var context;

  if (top.search)
  {
    // new map layout (WA)
    if (top.search.document.getElementById('PopUpScreen')) {
      ContentFrame = top.frames['search'];
    }
  }

  if (ContentFrame.contentDocument)                // W3C standards compliant
  {
    context = ContentFrame.contentDocument;
  }
  else
  {
    context = ContentFrame.document;                         // IE only
  }

  // load URL in PopUpFrame
  ibaGetIframeDoc('PopUpFrame',context).location.href = redirectURL;
}

//------------------------------------------------------------------------
// Function : Insurance Key word Search Frame
//------------------------------------------------------------------------
function InsuranceSearchFrame(ReturnCode,ReturnName){
  var PopUpFrameDoc = DFrameStart();
  window.ReturnFunction="" ;
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../lookups/InsuranceSearchFrame.html";
  SearchFrameShow();
}

//------------------------------------------------------------------------
// Function : External Organisation Search Frame
//------------------------------------------------------------------------
function ExOrgSearchFrame(ReturnCode,ReturnName,orgntype,formaddr,regioncd)
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnFunction="" ;
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.OrgType=orgntype ;
  window.FormAddr=formaddr ;
  window.RegionCd=regioncd ;
  PopUpFrameDoc.location.href = "../lookups/ExOrgSearchFrame.html";
  SearchFrameShow();
}

//------------------------------------------------------------------------
// Function : External Organisation Search Frame
//------------------------------------------------------------------------
function ExOrgEmployerSearchFrame(ReturnCode,ReturnName,orgntype,addr1,addr2,addr3,addr4,postc,telpn,contact)
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnFunction="" ;
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.OrgType=orgntype ;
  window.Addr1=addr1 ;
  window.Addr2=addr2 ;
  window.Addr3=addr3 ;
  window.Addr4=addr4 ;
  window.Postc=postc ;
  window.Telpn=telpn ;
  window.Contact=contact ;
  PopUpFrameDoc.location.href = "../lookups/ExOrgSearchFrame.html";
  SearchFrameShow();
}

//-------------------------------------------------------------------
// Disable a web control briefly (to prevent double posts)
// parm1 : the object to be disabled
// parm2: (optional) the time in seconds to disable: 
//         default time store in var tempDisableDefaultTime
//-------------------------------------------------------------------
function tempDisable(obj)
{
  if (typeof(obj) != 'object') return;

  var sleep_seconds = 0;
  window.tempDisabledControl = '';

  // get the sleep time in seconds 
  if (arguments.length > 1) sleep_seconds = arguments[1];

  // the default time from system var
  if (sleep_seconds == 0) sleep_seconds = tempDisableDefaultTime;

  // get id (prefereably) or name of object so we can find it later
  if (obj.id == '') {
    if (obj.name =="" ) return;
    window.tempDisabledControl = obj.name;
  } else {
    window.tempDisabledControl = obj.id;
  }

  // disable object and setup re-enable function
  obj.disabled = true; 
  setTimeout(function(){reEnableControl(obj.id)},(sleep_seconds * 1000));
}

//-------------------------------------------------------------------
// reEnable - this is the companion to tempDisable
//-------------------------------------------------------------------
function reEnableControl(id)
{
  if (id == '') return;
  obj = document.getElementById(id);
  if (obj)
  {
    obj.disabled = false;
  }
  else
  {
    obj = document.getElementsByName(id);
    if (obj.length > 0) obj[0].disabled = false;
  }
  window.tempDisabledControl = '';
}

//------------------------------------------------------------
// Function : Trap an enter key to stop the auto page submit
// If you do not want a page with one input box to submit when
// you hit enter add this function to the field
// onKeyDown="return TrapEnterKey();"
//------------------------------------------------------------
function TrapEnterKey() 
{
  if (event.keyCode == 13) return false;   // 13 = Enter Key
  return true;
}

//------------------------------------------------------------
// Function : set the Caret position (insert point) in a text 
// or textarea field.
//------------------------------------------------------------
function setCaretPosition(elem, caretPos)
{
  if (elem == null) return;

  if (elem.createTextRange)
  {
    var range = elem.createTextRange();
    range.move('character', caretPos);
    range.select();
  }
  else if (elem.selectionStart)
  {
    elem.focus();
    elem.setSelectionRange(caretPos, caretPos);
  }
  else {
     elem.focus();
  }
}

//======================================================================
//
// SetCaretPosition (STRING ElemID, INTEGER CaretPos)
//
// Sets the cursor/caret position of an input field.
//
// Parameters:
//   CaretPos = 'undefined' -> cursor is set to the beginning of input field.
//   CaretPos = '-1' -> cursor is set to the end of input field.
//
// Returns:
//   true - if successful
//   false - if failed
//
//======================================================================
function SetCaretPosition(ElemID,CaretPos) {
  var el = document.getElementById(ElemID);

  if (el != undefined) {
    el.value = el.value;  // this is used to not only get "focus", but to make
                          // sure we don't have everything selected
                          // (it causes an issue in chrome, and having it
                          // doesn't hurt any other browser)

    if (CaretPos == undefined)
      CaretPos = 0;                // set caret pos at beginning of input
    else if (CaretPos == -1)
      CaretPos = el.value.length;  // set caret pos at end of input

    if (el.createTextRange) {
      var range = el.createTextRange();
      range.move('character', CaretPos);
      range.select();
      return true;
    }
    else {
      if (el.selectionStart || el.selectionStart == 0) {
        el.focus();
        el.setSelectionRange(CaretPos, CaretPos);
        return true;
      }
      else {
        // fail city; in theory should never get here...but just in case
        el.focus();
        return false;
      }
    }
  }

  return false;
}

//------------------------------------------------------------
// Function : Validate Eclipse Participant/Capability        
//------------------------------------------------------------
function validateParticipant(healthfund,capability) {
  var serverURL = "../cgi-bin/patweb80.pbl?reportno=85" +
                  "&valdhlfn=" + healthfund +
                  "&valdeccp=" + capability;

  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0) {
    if (returnValue.return_value==1) {
      return true;
    }
  }
  return false;
}
//------------------------------------------------------------
// Function :Remote script to test user url security groups
//------------------------------------------------------------
function CheckSecurityGroup() {
 if(!optUsingSecurityGroups) {
   return;
 }
 ValidURL=false;
 UserSecGroups=GetCookieData("IBASecGroup");
 if(isWhitespace(UserSecGroups) || UserSecGroups=="unknown") {
   var serverURL   = "../../cgi-bin/comweb80.pbl?reportno=32"
   var returnValue = RSExecute(serverURL);
   if (returnValue.status==0) {
     document.cookie = "IBASecGroup"+"="+escape(returnValue.return_value)+";"
     UserSecGroups=GetCookieData("IBASecGroup");
   } else {
     return;
   }
 }
 if(isWhitespace(UserSecGroups)) {
   if(UserSecGroups.length == 0) {
     ValidURL=false;
   } else {
     ValidURL=true;
   }
 } else {
   UserSecGroup=UserSecGroups.split("|");
   for (var i=0; i < UserSecGroup.length; i++) {
     if(!isWhitespace(UserSecGroup[i])) {
       if(getTop().menu.location.pathname.search(UserSecGroup[i]) != -1) {
          ValidURL=true;
          break;
       }
     }
   }
 }
 if(!ValidURL) {
   alert("Invalid Security Group for this URL");
   getTop().location.href="../../cgi-bin/websec01.pbl?reportno=1&template=1"
 }
}
//-----------------------------------------------------------------------
// check iba parameter to turn on second name textfield
//-----------------------------------------------------------------------
function turnOnSecondGivenName(isSecondNameParamON,gName,fName,secName)
{
        var str = gName.value
        
        // trim all start and trailing spaces
        if(str!="")
          gName.value = str.replace(/^\s+|\s+$/g,'');
        str = fName.value;
        if(str !="")
          fName.value = str.replace(/^\s+|\s+$/g,'');

        var item = document.getElementById("givenNameLabel");

        //on - allow first and second given name fields
        if(isSecondNameParamON==1)
        {
          item.innerHTML = "First Given Name";
          var secondGivenNameLabel = document.getElementById("secondGivenNameLabel");
          secondGivenNameLabel.style.visibility = "visible";
          secName.style.visibility = "visible";
          fName.maxLength = "40";
          fName.title = "First Given Name";
          secName.maxLength = "40";
          gName.value = fName.value+" "+secName.value;

        }
        //off - allow only 'Given Names' field
        else if(isSecondNameParamON==0)
        {
          item.innerHTML = "Given Names";
          var secondGivenNameLabel = document.getElementById("secondGivenNameLabel");
          secondGivenNameLabel.style.visibility = "hidden";
          secName.style.visibility = "hidden";
          fName.maxLength = "25";
          fName.value = gName.value;
          fName.title = "Given Names";
        }
}
//if param second name is turned off, make fname the gname
function checkSecondName(paramSecondName,gname,fname,secname)
{
 if(paramSecondName.value == 1) {
      if(!isWhitespace(secname.value)){
       gname.value=fname.value + " " + secname.value;
      } else {
       gname.value=fname.value;
      }
 } 
 else {
      gname.value=fname.value;
 }
}
//-----------------------------------------------------------------------
// Return the day of week for a date
//-----------------------------------------------------------------------
function DayOfWeek(datefield,returnday) {
  date = new Date();
  date.setFullYear(datefield.value.substring(6,11));
  monstr= datefield.value.substring(3,6)
  if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon=0
  if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon=1
  if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon=2
  if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon=3
  if (monstr=="May" || monstr=="MAY" || monstr=="may") mon=4
  if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon=5
  if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon=6
  if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon=7
  if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon=8
  if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon=9
  if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon=10
  if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon=11
  date.setMonth(mon);
  date.setDate(datefield.value.substring(0,2));
  daynumber=date.getDay()
  switch (daynumber) {
    case 0 : {returnday.value="Sun";break} 
    case 1 : {returnday.value="Mon";break} 
    case 2 : {returnday.value="Tue";break} 
    case 3 : {returnday.value="Wed";break} 
    case 4 : {returnday.value="Thu";break} 
    case 5 : {returnday.value="Fri";break} 
    case 6 : {returnday.value="Sat";break} 
  }
}
//-----------------------------------------------------------------------------
//--------------------------------------------------------------------
// boolean validateGreatestTime( 1, ..., N, N+1 )
//
// description     : takes a number of parameters and searches for the biggest value
//                   the parameter order should be least to greatest
//
// pre condition   : takes 1 to N+1 parameters
//                   the N+1 parameter is the greatest time value
//
//
// post condition  : returns false (success) if N+1 is the greatest time value
//                   returns true (failed) if 1 or N is the greatest time value
//
// example of usage: if(validateGreatestTime(time1,time2,time3))
//                   {
//                       doSomething();
//                   }
//--------------------------------------------------------------------
function validateGreatestTime()
{
  var timeArray = validateGreatestTime.arguments;
  var largestTime = 0;
  var index = 0;

  //loop through all arguments passed
  for(var i = 0; i < timeArray.length;i++)
  {
       var convertedTime = 0;

       //convert time from XX:XX:XX to XXXXXX
       if(timeArray[i].value != "")
          convertedTime = timeArray[i].value.replace(/:/g,"");

       //parseInt of base 10 for number with leading 0 to
       //default to base 10 instead of Octal
       convertedTime = parseInt(convertedTime,10);
       largestTime = parseInt(largestTime,10);

       //found a larger time value or equivalent
       if(convertedTime >= largestTime)
       {
          largestTime = timeArray[i].value.replace(/:/g,"");
          index = i;
       }
  }

  //is the last argument the greatest?
  if(index != (timeArray.length - 1))
  {
     //only display error if there is a valid value
     if(timeArray[index].value != 0)
     {
       alert( timeArray[timeArray.length-1].title+" can't be before "+
              timeArray[index].title );

       timeArray[timeArray.length-1].focus();
       timeArray[timeArray.length-1].select();

       return true;
     }
  }
  return false;
}
//-----------------------------------------------------------------
// Remote script to validate Misc Charge passing Hospital id
// Multi Hospital requires use of PTHSDCLM instead of PTCNDCLM
//-----------------------------------------------------------------
function validateMsc1(ReturnCode,ReturnClam,ReturnFund,ReturnTabl,ReturnName) {
  ReturnName.value="";
  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL = "../cgi-bin/patweb80.pbl?reportno=88"
                  + "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
                  + "&valdclmt=" + ReturnClam.value.replace(/ /g,"+")
                  + "&valdfund=" + ReturnFund.value.replace(/ /g,"+")
                  + "&valdtabl=" + ReturnTabl.value.replace(/ /g,"+");
//alert(serverURL);
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    return true;
  }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    ReturnCode.focus();
    return false;
  }
}
//---------------------------------------------------------------------
// checkTextFieldStringLength(element):
//
//           element - attach a counter to a inputfield (type text)
//           to provide feedback to the user while they type the counter counts down until the
//           maxlength is reached
//
// sample usage: <input type="text" maxlength="100" class="MaxLength" id="test"/>
//          in init() add checkTextFieldStringLength(getElementBy(test));
//---------------------------------------------------------------------
function checkTextFieldStringLength(element)
{
  if(element.type == "text")
  {
    if(element.className.search(/MaxLength/) != -1)
    {
      var counterSpan = element.nextSibling; // does an element already exist next to element

      if(counterSpan === null) // lets created one
      {
        counterSpan = document.createElement("span"); // create new element

        (element.parentNode).appendChild(counterSpan); // attach it next to element

        if(element.attachEvent) //setup event binding
        {
           element.attachEvent("onblur",function(){
             if(counterSpan)
             {
               counterSpan.innerText = "  ";
               counterSpan.innerText += "  "+ parseInt(element.getAttribute("maxlength"),10) - element.value.length;
               counterSpan.style.display = "none";
             }

           });

           element.attachEvent("onfocus",function(){
             if(counterSpan)
               counterSpan.style.display = "";
           });

           element.attachEvent("onkeypress",function(){
             var count = (parseInt(element.getAttribute("maxlength"),10) - element.value.length);
             if(count == 0)
               return;
             if(counterSpan)
             {
               counterSpan.innerText = "  ";
               counterSpan.innerText += count-1;
             }
           });
        }
      }
      else
        alert("you'll need to remove this: \\n or space char after "+element.name+
              " before checkTextFieldStringLength function will work.");
    }
  }
}
/*--------------------------------------------------------------------------------------
*
*         bindCheckBoxToHiddenCGI - this function scans through the template looking for
*         input tags of type hidden with the class name "CheckBox". When it finds this
*         tag it creates a dummy checkbox to interact with the user.
*
*         The value of the dummy checkbox is passed to the cgi hidden field when change
*         event is fired.
*
*
*         Assumption:
*
*         This method assumes that the value that is passed back and forth to cgi is a 1 or 0
*         anything else needs to be converted before use
*
*         Usage:
*
*         <input type="hidden"                   - mandatory or will fail
*                name="pmpmi006"                 - mandatory or will fail
*                id="pmpmi006"                   - optional
*                class="CheckBox"                - mandatory or will fail
*                value="%PATWEB89.01.086.006"    - optional, if no default value, state of
*                                                  dummy will always be
*                                                  unchecked on first load
*         />
*
*---------------------------------------------------------------------------------------*/

function bindCheckBoxToHiddenCGI()
{
  var _class = "CheckBox";
  var _prefix = "d_";
  var _tagName = "input";

  var _formCollection = document.forms;
  var _inputCollection = null;

  for(var i = 0;i < _formCollection.length; i++)
  {
      var form = _formCollection[i].getElementsByTagName(_tagName);
      _inputCollection = form;

      for(var j = 0; j < _inputCollection.length; j++)
      {
        var element = _inputCollection[j];
         
        if(element.type == "hidden"  && element.className == _class)
        {
          if(element.name === "")
          {
            alert("element missing name attribute"); 
            return;
          }

          var node = document.createElement(_tagName);
      
          node.type = "checkbox";
          node.name = _prefix + element.name;
          node.id = _prefix + element.name;

          (element.parentNode).appendChild(node);

          node.checked = element.value == 1 ? true : false;

          node.onchange = bindOnChangeEventToCheckBox;

          if(node.captureEvents)
            element.captureEvents(Event.CHANGE);
        }
      }
  }
}

function bindOnChangeEventToCheckBox(e)
{
  var evt = (e != undefined) ? e : window.event;

  if (evt.preventDefault) {
    evt.preventDefault();
    evt.stopPropagation();
  }
  else {
    evt.returnValue = false;
    evt.cancelBubble = true;
  }

  var target = evt.target || evt.srcElement;
  if (target == null)
    return;

  var cgiElement = document.getElementById(target.id.substring(2,target.id.length));
  target.checked === true ? cgiElement.value = 1 : cgiElement.value = 0;
}
//------------------------------------------------------------------
//  validate SAC patient by  department
//------------------------------------------------------------------
function validateSACDept(OptionNumber,ReturnCode,Dept,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=3; i < validateSACDept.arguments.length; i++) {
    if (typeof(validateSACDept.arguments[i]) == 'function') {
      ReturnFunction=validateSACDept.arguments[i] }
    else {
      validateSACDept.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+")+
                    "&deptcode=" + Dept.value.replace(/ /g,"+");

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=3; i < validateSACDept.arguments.length; i++) {
       if (typeof(validateSACDept.arguments[i]) != 'function') {
         j++
         validateSACDept.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() }

    if(ReturnValue[0] != "1")
       return false;
    return true;
    }
  else {
    if(ReturnCode.type=="text")
    {
      ReturnCode.value="";
      ReturnCode.select();
    }
    return false;
  }
}
//----------------------------------------------------------------------
// Display the day procedure screen title js variable DayProcedureName
//----------------------------------------------------------------------
function DayProcName() {
  document.write(DayProcedureName);
}

//------------------------------------------------------------
// Validate Allied Health Problem Code using remote scripting
//------------------------------------------------------------
function validateAHProb(ReturnDept,ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=3; i < validateAHProb.arguments.length; i++) {
    if (typeof(validateAHProb.arguments[i]) == 'function') {
      ReturnFunction=validateAHProb.arguments[i] }
    else {
      validateAHProb.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL = "../cgi-bin/allweb01.pbl?reportno=8&functype=6" +
                  "&deptcode=" + ReturnDept.value.replace(/ /g,"+") +
                  "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=ReturnValue[0];
    j=0
    for (var i=3; i < validateAHProb.arguments.length; i++) {
       if (typeof(validateAHProb.arguments[i]) != 'function') {
         j++
         validateAHProb.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    ReturnCode.focus();   }
}
//------------------------------------------------------------
// Validate Allied Health Other Factor Affecting Health
// which is an AH Problem Code using remote scripting
//------------------------------------------------------------
function validateAHProb2(ReturnDept,ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=3; i < validateAHProb2.arguments.length; i++) {
    if (typeof(validateAHProb2.arguments[i]) == 'function') {
      ReturnFunction=validateAHProb2.arguments[i] }
    else {
      validateAHProb2.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL = "../cgi-bin/allweb01.pbl?reportno=8&functype=6&otherfac=1" +
                  "&deptcode=" + ReturnDept.value.replace(/ /g,"+") +
                  "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=ReturnValue[0];
    j=0
    for (var i=3; i < validateAHProb2.arguments.length; i++) {
       if (typeof(validateAHProb2.arguments[i]) != 'function') {
         j++
         validateAHProb2.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    ReturnCode.focus();   }
}
//------------------------------------------------------------
// Function : Standard Allied Health Problem Search Frame
//------------------------------------------------------------
function AHProbSearchFrame(ReturnDept,ReturnCode,ReturnName)
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnDept=ReturnDept ;
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../lookups/AHProbSearchFrame.html";
  SearchFrameShow();
}
//------------------------------------------------------------
// Function : Standard Allied Health Other Factor Affecting Health
// Search Frame with is an AH Problem 
//------------------------------------------------------------
function AHProbSearchFrame2(ReturnDept,ReturnCode,ReturnName)
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnDept=ReturnDept ;
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../lookups/AHProbSearchFrame2.html";
  SearchFrameShow();
}

//-------------------------------------------------------------
// function : getQueryString(string) - get any param in a query string
//            by param string name.
//
// example:
// url = http://www.myhospital.com?ur=1231&pname=soeur&add=123
//
// var value = getQueryString("pname"); will return soeur 
// var value = getQueryString("add");  will return 123   
//-------------------------------------------------------------
function getQueryString(string)
{
 var queryString = window.location.search.substring(1);

 var queryParam = queryString.split("&");

 for (i=0;i<queryParam.length;i++)
 {
   var temp = queryParam[i].split("=");
   if (temp[0] == string)
     return decodeURIComponent(temp[1]);
 }

 return "";
}

//=============================================================
//        Refresh the page in intervals of seconds
//
//=============================================================
function refreshPage()
{
  var sec = 0;

  var go = function()
  {
     if (PopUpScreen.style.display=="none") {
       this.location.reload(true);
     }
  }

  sec = int_refreshSeconds * 1000;
  setInterval(go,sec);
}
//------------------------------------------------------------------------
// Function to Update theatre recovery full details
//------------------------------------------------------------------------
function RecoveryFull(Location,Status) {
  ReturnFunction="" ;
  for (var i=1; i < RecoveryFull.arguments.length; i++) {
  if (typeof(RecoveryFull.arguments[i]) == 'function') {
     ReturnFunction=RecoveryFull.arguments[i] } }
  var serverURL = "../cgi-bin/oprweb06.pbl?reportno=16&updatety=2"+
                "&surgtype=" + Location.value.replace(/ /g,"+") +
                "&recovful=" + Status.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
}
//------------------------------------------------------------
// Remote script to update emrvisaf user defined fields
//------------------------------------------------------------
function RemoteEmrUpdate(visit,field) {
  ReturnFunction="" ;
  for (var i=1; i < RemoteEmrUpdate.arguments.length; i++) {
  if (typeof(RemoteEmrUpdate.arguments[i]) == 'function') {
     ReturnFunction=RemoteEmrUpdate.arguments[i] } }
  var serverURL = "../cgi-bin/emrweb08.pbl?reportno=21" +
                  "&admissno=" + visit.value.replace(/ /g,"+") +
                  "&" + field.name + "=" + field.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|")
  if (returnValue.status==0) {
     if(typeof(ReturnFunction) == 'function') {
       ReturnFunction();
     }
  } else {
    field.focus();
  }
}

//----------------------------------------------------------------------------
// scanForFakeQuoteChar() prevents the quote char from
// interferring with HTML markup.
//
// Web server scans for single quotes and replaces them with
// fake quote(`)
//
// scanForfakeQuoteChar() then reverts it back to real quote(')
//-----------------------------------------------------------------------------
function scanForFakeQuoteChar(textPlaceHolder)
{
  var textOutput = document.getElementById(textPlaceHolder);

  if(textOutput)
    textOutput.innerText = textOutput.innerText.replace(/`/g,"'");

}
//-----------------------------------------------------------------
// Remote script to validate health fund program for an OP Visit
//-----------------------------------------------------------------
function HealthFundProgramOP(ur,atyp,clam,fund,tabt,edat,stype) {
  var serverURL = "../cgi-bin/patweb03.pbl?reportno=7&updttype=1" +
                     "&valdvtyp=2"+
                     "&valdurno=" + ur.value.replace(/ /g,"+") +
                     "&valdatyp=" + atyp.value.replace(/ /g,"+") +
                     "&valdclam=" + clam.value.replace(/ /g,"+") +
                     "&valdfund=" + fund.value.replace(/ /g,"+") +
                     "&valdtabt=" + tabt.value.replace(/ /g,"+") +
                     "&valdedat=" + edat.value.replace(/ /g,"+") +
                     "&valdstyp=" + stype.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")

    if(ReturnValue[2]!=0) {
      if(ReturnValue[2]>0) {
        alert("Extra funding will be required in " + trim(ReturnValue[2]) +
              " visit(s)");
      } else if(ReturnValue[2]<0){
        alert("Maximum funding has been reached");
      }
    }
    return true; }
  else {
    return false;
  }
}
//-----------------------------------------------------------------
// Remote script to validate health fund program for an IP Visit
//-----------------------------------------------------------------
function HealthFundProgramIP(ur,atyp,clam,fund,tabt,edat) {
  var serverURL = "../cgi-bin/patweb03.pbl?reportno=7&updttype=1" +
                     "&valdvtyp=3"+
                     "&valdurno=" + ur.value.replace(/ /g,"+") +
                     "&valdatyp=" + atyp.value.replace(/ /g,"+") +
                     "&valdclam=" + clam.value.replace(/ /g,"+") +
                     "&valdfund=" + fund.value.replace(/ /g,"+") +
                     "&valdtabt=" + tabt.value.replace(/ /g,"+") +
                     "&valdedat=" + edat.value.replace(/ /g,"+") 
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")

    if(ReturnValue[1]!=0) {
      if(ReturnValue[1]>0) {
        alert("Extra funding will be required in " + trim(ReturnValue[1]) +
              " visit(s)");
      } else if(ReturnValue[1]<0){
        alert("Maximum funding has been reached");
      }
    }
    return true; }
  else {
    return false;
  }
}
//-----------------------------------------------------------------
// Remote script to add a program to a patient for an IP or OP visit
//-----------------------------------------------------------------
function AddHealthFundProgram(ur,adm) {
  var serverURL = "../cgi-bin/patweb03.pbl?reportno=7&updttype=2" +
                     "&urnumber=" + ur.value.replace(/ /g,"+") +
                     "&admissno=" + adm.value.replace(/ /g,"+") 
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    location.reload();
    return true; }
  else {
    return false;
  }
}
//----------------------------------------------------------------------------
// Subroutines to check the maximum characters and maximum lines of a textarea
//----------------------------------------------------------------------------
function getLines(txtArea){
  var lineHeight = parseInt(txtArea.style.lineHeight.replace(/px/i,''));
  if (document.createRange) {     // all browsers, except IE before version 9
    var tr = document.createRange ();
    tr.selectNodeContents (txtArea);
  }
  else {
    var tr = txtArea.createTextRange();
  }
  return Math.ceil(tr.boundingHeight/lineHeight);
}
function checkLimits(txtArea,charCounter,lineCounter) {
  var maxLines = txtArea.rows;
  var maxChars = txtArea.rows * txtArea.cols;

  var countLines = txtArea.value.split("\n").length;

  charCounter.value = txtArea.value.length;
  lineCounter.value = countLines;

  document.PatCondPopup.maxLines.value = maxLines;
  document.PatCondPopup.maxChars.value = maxChars;

  if ((window.event.keyCode == 10 || window.event.keyCode == 13) &&
      (txtArea.value.length > maxChars || countLines > maxLines))
  {
    if (countLines > maxLines) {
      txtArea.value = txtArea.value.substr(0,txtArea.value.length-1);
    }
    else if (txtArea.value.length > maxChars) {
      txtArea.value = txtArea.value.substr(0,txtArea.value.length-1);
    }
    alert(maxChars+" characters and / or "+maxLines+" lines limit reached.");
    return false;
  }
  else if (txtArea.value.length - (txtArea.value.split('\n').length - 1) > maxChars) {
    alert(maxChars+" characters limit reached.");
    txtArea.value = txtArea.value.substring(0,txtArea.value.length-1)+"";
    return false;
  }
  else if (lineCounter.value > (maxLines + 1))
  {
    alert(maxLines+" lines limit reached.");
    return false;
  }

  return true;
}
/******************************************************************************
/         validateCaseTeam - check hcp is in a certain case team
/
/******************************************************************************/
function validateCaseTeam(OptionNumber,ReturnCode,ReturnName,rfrlDate)
{
  ReturnFunction = "";
  ReturnName.value = "";

  for (var i=4; i < validateCaseTeam.arguments.length; i++)
  {
    if (typeof( validateCaseTeam.arguments[i]) == 'function')
      ReturnFunction = validateCaseTeam.arguments[i]
    else
      validateCaseTeam.arguments[i].value = "";
  }

  if (isWhitespace(ReturnCode.value))
    return;;

  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&valdrdat=" + rfrlDate.value;

  var returnValue = RSExecute(serverURL);

  var j = 0;

  if (returnValue.status==0)
  {
    ReturnName.value = returnValue.return_value;

    for (var i=4; i < validateCaseTeam.arguments.length; i++)
    {
       if (typeof(validateCaseTeam.arguments[i]) != 'function')
       {
         j++
         validateCaseTeam.arguments[i].value=ReturnValue[j]
       }
    }
    if (typeof(ReturnFunction) == 'function')
       ReturnFunction()

    return true;
  }
  else
  {
    ReturnCode.value="";
    ReturnCode.select();
    ReturnCode.focus();
    return false;
  }
}

var ns = (navigator.appName.indexOf("Netscape") != -1);
var d = document;
function JSFX_FloatDivX(id, sx, sy)
{
  var x;
  var el=d.getElementById?d.getElementById(id):d.all?d.all[id]:d.layers[id];
  var px = document.layers ? "" : "px";
  window[id + "_obj"] = el;

  if(d.layers) {
    el.style=el;
  }

  el.cx = el.sx = sx;
  el.cy = el.sy = sy;

  el.sP=function(x,y) {
    this.style.left=x+px;this.style.top=y+px;
  };

  el.floatIt=function() {
    var pX, pY;

    pX = ns ? pageXOffset :
         document.documentElement && document.documentElement.scrollLeft ?
         document.documentElement.scrollLeft : document.body.scrollLeft;

    pY = (this.sy >= 0) ? 0 : ns ? innerHeight :
         document.documentElement && document.documentElement.clientHeight ?
         document.documentElement.clientHeight : document.body.clientHeight;

    if(this.sx<0) {
      pX += ns ? innerWidth :
            document.documentElement && document.documentElement.clientWidth ?
            document.documentElement.clientWidth : document.body.clientWidth;
    }

    if(this.sy<0) {
      pY += ns ? innerHeight :
            document.documentElement && document.documentElement.clientHeight ?
            document.documentElement.clientHeight : document.body.clientHeight;
    }

    this.cx += (pX + this.sx - this.cx);
    this.cy += (pY + this.sy - this.cy);
    this.sP(this.cx, this.cy);
    clearTimeout(x);
    x = setTimeout(this.id + "_obj.floatIt()", 0);
  }
        return el;
}
function JSFX_FloatDivY(id, sx, sy)
{
  var x;
  var el=d.getElementById?d.getElementById(id):d.all?d.all[id]:d.layers[id];
  var px = document.layers ? "" : "px";
  window[id + "_obj"] = el;

  if(d.layers) {
    el.style=el;
  }

  el.cx = el.sx = sx;
  el.cy = el.sy = sy;

  el.sP=function(x,y) {
    this.style.left=x+px;this.style.top=y+px;
  };

  el.floatIt=function() {
    var pX, pY;

    pX = (this.sx >= 0) ? 0 : ns ? innerWidth :
         document.documentElement && document.documentElement.clientWidth ?
         document.documentElement.clientWidth : document.body.clientWidth;

    pY = ns ? pageYOffset :
         document.documentElement && document.documentElement.scrollTop ?
         document.documentElement.scrollTop : document.body.scrollTop;

    if(this.sx<0) {
      pX += ns ? innerWidth :
            document.documentElement && document.documentElement.clientWidth ?
            document.documentElement.clientWidth : document.body.clientWidth;
    }

    if(this.sy<0) {
      pY += ns ? innerHeight :
            document.documentElement && document.documentElement.clientHeight ?
            document.documentElement.clientHeight : document.body.clientHeight;
    }

    this.cx += (pX + this.sx - this.cx);
    this.cy += (pY + this.sy - this.cy);
    this.sP(this.cx, this.cy);
    clearTimeout(x);
    x = setTimeout(this.id + "_obj.floatIt()", 0);
  }
        return el;
}
function JSFX_FloatDivXY(id, sx, sy)
{
  var x;
  var el=d.getElementById?d.getElementById(id):d.all?d.all[id]:d.layers[id];
  var px = document.layers ? "" : "px";
  window[id + "_obj"] = el;

  if(d.layers) {
    el.style=el;
  }

  el.cx = el.sx = sx;
  el.cy = el.sy = sy;

  el.sP=function(x,y) {
    this.style.left=x+px;this.style.top=y+px;
  };

  el.floatIt=function() {
    var pX, pY;

    pX = ns ? pageXOffset :
         document.documentElement && document.documentElement.scrollLeft ?
         document.documentElement.scrollLeft : document.body.scrollLeft;

    pY = ns ? pageYOffset :
         document.documentElement && document.documentElement.scrollTop ?
         document.documentElement.scrollTop : document.body.scrollTop;

    if(this.sx<0) {
      pX += ns ? innerWidth :
            document.documentElement && document.documentElement.clientWidth ?
            document.documentElement.clientWidth : document.body.clientWidth;
    }

    if(this.sy<0) {
      pY += ns ? innerHeight :
            document.documentElement && document.documentElement.clientHeight ?
            document.documentElement.clientHeight : document.body.clientHeight;
    }

    this.cx += (pX + this.sx - this.cx);
    this.cy += (pY + this.sy - this.cy);
    this.sP(this.cx, this.cy);
    clearTimeout(x);
    x = setTimeout(this.id + "_obj.floatIt()", 0);
  }
        return el;
}
function JSFX_FloatDivXDIV(id, sx, sy, divname)
{        
  var x;
  var el=d.getElementById?d.getElementById(id):d.all?d.all[id]:d.layers[id];
  var px = document.layers ? "" : "px";
  window[id + "_obj"] = el;

  if(d.layers) {
    el.style=el;
  }

  el.cx = el.sx = sx;
  el.cy = el.sy = sy;

  el.sP=function(x,y) {
    this.style.left=x+px;this.style.top=y+px;
  };

  el.floatIt=function() {
    var pX, pY;

    pX = divname.scrollLeft;

    pY = (this.sy >= 0) ? 0 : ns ? innerHeight :
         document.documentElement && document.documentElement.clientHeight ?
         document.documentElement.clientHeight : document.body.clientHeight;

    if(this.sx<0) {
      pX += ns ? innerWidth :
            document.documentElement && document.documentElement.clientWidth ?
            document.documentElement.clientWidth : document.body.clientWidth;
    }

    if(this.sy<0) {
      pY += ns ? innerHeight :
            document.documentElement && document.documentElement.clientHeight ?
            document.documentElement.clientHeight : document.body.clientHeight;
    }

    this.cx += (pX + this.sx - this.cx);
    this.cy += (pY + this.sy - this.cy);
    this.sP(this.cx, this.cy);
    clearTimeout(x);
    x = setTimeout(this.id + "_obj.floatIt()", 0);
  }
        return el;
}
function JSFX_FloatDivYDIV(id, sx, sy, divname)
{
  var x;
  var el=d.getElementById?d.getElementById(id):d.all?d.all[id]:d.layers[id];
  var px = document.layers ? "" : "px";
  window[id + "_obj"] = el;

  if(d.layers) {
    el.style=el;
  }

  el.cx = el.sx = sx;
  el.cy = el.sy = sy;

  el.sP=function(x,y) {
    this.style.left=x+px;this.style.top=y+px;
  };

  el.floatIt=function() {
    var pX, pY;

    pX = (this.sx >= 0) ? 0 : ns ? innerWidth :
         document.documentElement && document.documentElement.clientWidth ?
         document.documentElement.clientWidth : document.body.clientWidth;

    pY = divname.scrollTop;

    if(this.sx<0) {
      pX += ns ? innerWidth :
            document.documentElement && document.documentElement.clientWidth ?
            document.documentElement.clientWidth : document.body.clientWidth;
    }

    if(this.sy<0) {
      pY += ns ? innerHeight :
            document.documentElement && document.documentElement.clientHeight ?
            document.documentElement.clientHeight : document.body.clientHeight;
    }

    this.cx += (pX + this.sx - this.cx);
    this.cy += (pY + this.sy - this.cy);
    this.sP(this.cx, this.cy);
    clearTimeout(x);
    x = setTimeout(this.id + "_obj.floatIt()", 0);
  }
        return el;
}
function JSFX_FloatDivXYDIV(id, sx, sy, divname)
{        
  var x;
  var el=d.getElementById?d.getElementById(id):d.all?d.all[id]:d.layers[id];
  var px = document.layers ? "" : "px";
  window[id + "_obj"] = el;
    
  if(d.layers) {
    el.style=el;
  }

  el.cx = el.sx = sx;
  el.cy = el.sy = sy;

  el.sP=function(x,y) {
    this.style.left=x+px;this.style.top=y+px;
  };

  el.floatIt=function() {
    var pX, pY;

    pX = divname.scrollLeft;

    pY = divname.scrollTop;

    if(this.sx<0) {
      pX += ns ? innerWidth :
            document.documentElement && document.documentElement.clientWidth ?
            document.documentElement.clientWidth : document.body.clientWidth;
    }

    if(this.sy<0) {
      pY += ns ? innerHeight :
            document.documentElement && document.documentElement.clientHeight ?
            document.documentElement.clientHeight : document.body.clientHeight;
    }

    this.cx += (pX + this.sx - this.cx);
    this.cy += (pY + this.sy - this.cy);
    this.sP(this.cx, this.cy);
    clearTimeout(x);
    x = setTimeout(this.id + "_obj.floatIt()", 0);
  }
        return el;
}

//*****************************************************************************

//new UI
//----------------------------------------------------------------------
// Function : Set up a DFrame for drag
//----------------------------------------------------------------------
function DFrameDragInit(e) {
  var evt = (e != undefined) ? e : window.event;
  var sl = document.getElementsByTagName("SPAN");
  for (i=0; i<sl.length; i++) {
    if (sl[i].className == "DFrameTitleBar" || sl[i].className == "TitleBar") {
      var ob = sl[i];
      break;
    }
  }
  if (ob!=null) {
    if (isWhitespace(ob.id)) {
      ob.id="DFrameTitleBar";
    }

    ob.onmousedown=function(e){
      mD(ob,e); 
    };
   
    var sl = ob.getElementsByTagName("IMG");
    var ExitIcon=undefined;
    var ExitTest=undefined;

    for (i=0; i<sl.length; i++) {
      if (sl[i].src.match("ExitIcon")) {
        ExitTest=sl[i].onclick
        var ExitIcon=sl[i]
      }else if(sl[i].src.match("PrinterIcon")) {
        var printIcon = sl[i];
      }else if(sl[i].className.match("Image1")) {
        var Image1Icon = sl[i];
      }
    }

    if (ExitIcon!=undefined) {
      ExitIcon.insertAdjacentHTML('AfterEnd','<div class="x-tool x-tool-help"    onmousedown="DFrameHelp(event);" alt="Help" title="Help"></div>');
      ExitIcon.insertAdjacentHTML('AfterEnd','<div class="x-tool x-tool-min"     alt="Minimise" title="Minimise" onmousedown="DFrameMinMax(this);"></div>');
      ExitIcon.style.display='none';
      if(ExitTest.toString().search("DFrameExitRefresh")!=-1) {
        ExitIcon.insertAdjacentHTML('AfterEnd','<div class="x-tool x-tool-close" id="ExitIcon" onmousedown="DFrameExitRefresh();" alt="Exit" title="Exit"></div>');
      } else if (ExitTest.toString().search("DFrameExit")!=-1) {
        ExitIcon.insertAdjacentHTML('AfterEnd','<div class="x-tool x-tool-close" id="ExitIcon" onmousedown="DFrameExit();" alt="Exit" title="Exit"></div>');
      } else {
        var exit_icon ='<div id="dframe_exit_icon" class="x-tool x-tool-close"'+
            ' onmousedown="javascript:' + ExitTest + '"' +
            ' alt="Exit" title="Exit"></div>';
            ExitIcon.insertAdjacentHTML('AfterEnd',exit_icon);
            document.getElementById('dframe_exit_icon').onmousedown=ExitTest;
      }
    }
    if(typeof printIcon != 'undefined') {
        printIcon.insertAdjacentHTML('AfterEnd','<div class="x-tool x-tool-print"    onmousedown="PrintThisPage(event);" alt="Print" title="Print"></div>');
        printIcon.style.display="none";
    }
    if(typeof Image1Icon != 'undefined') {
        Image1Icon.insertAdjacentHTML('AfterEnd','<div><img align="left" alt="' + Image1Icon.alt + '"' +
        ' title="' + Image1Icon.alt + '" class="MenuIcon" src="' +
        Image1Icon.src + '" onmousedown="" name="ImageButton" id="ImageButton"></div>');
        document.getElementById('ImageButton').onmousedown=Image1Icon.onclick;
        Image1Icon.style.display="none";
    }

    var win = window.parent;
    var doc = win.document;

    while (ibaGetElement('PopUpScreen',doc)==null && win != top.window) {
       win = win.parent;
       doc = win.document;
    }

    DragOut    = ibaGetElement('DragOutline',doc);
 
    if (DragOut==null) {
      doc.body.insertAdjacentHTML('BeforeEnd','<div name="DragOutline" class="DragOutline" id="DragOutline"></div>');
      DragOut    = ibaGetElement('DragOutline',doc);
    }

    mD(ob,evt);
    mU();


//    document.body.insertAdjacentHTML('BeforeEnd','<div name="DragResize" class="DragResize" onmousedown="mR(this,event);" id="DragResize"></div>');
  }
}

function DFrameHelp(e) {
  var evt = (e != undefined) ? e : window.event;
  if (evt.preventDefault) {
    evt.preventDefault();
    evt.stopPropagation();
  }
  else {
    evt.returnValue = false;
    evt.cancelBubble = true;
  }
  //evt.cancelBubble=true;
  isDragging = false;
  if (location.href.match('/lookups/'))
  {
    alert("Search HTML     \t : " + location.pathname + "\n" )
    return
  }

  var ProgramID      = getMetaContents('ServerID',this.document);
  var ProgramName    = getMetaContents('ServerName',this.document);
  var ProgramVersion = getMetaContents('ServerVersion',this.document);
  var ProgramFile    = getMetaContents('TemplateFile',this.document);
  var TemplateVer    = getMetaContents('TemplateVersion',this.document);
  var TemplateHome   = getMetaContents('TemplateHome',this.document);
  var CrossBrowser   = getMetaContents('CrossBrowser',this.document);

  if (!IEBrowser) {
    GetCSSIncludeInfo(this.document);
    GetScriptIncludeInfo(this.document);

    ProcessIncludeInfo(ProgramID,ProgramName,ProgramVersion,ProgramFile,TemplateVer,TemplateHome,CrossBrowser);
  }
  else {
    ShowSupport(ProgramID,ProgramName,ProgramVersion,ProgramFile,TemplateVer,TemplateHome,CrossBrowser);
  }

  return false;
 }

//============================================================
// Drag DFrame
//============================================================
function mD(ob,e) {
  var evt = (e != undefined) ? e : window.event;
  window.status=ob.id
  //if (ob.id != "DFrameTitleBar") return;
  var win = window.parent;
  var doc = win.document;
  while (ibaGetElement('PopUpScreen',doc)==null && win!=top.window) {
    win = win.parent;
    doc = win.document;
  }
  document.body.ondrag=function(){return false};
  document.body.ondragstart=function(){
    return false;
  };
  
  document.body.onselectstart=function(){return false};
  document.onmousemove = mMD;
  document.onmouseup = mU;
  doc.onmouseup = mU;
  document.body.style.cursor="move";
  doc.body.style.cursor="move";
  dragObject    = ibaGetElement('PopUpScreen',doc);
  DragOut       = ibaGetElement('DragOutline',doc);
  if (window.event) evt=window.event;

  var dragX = 0;
  var dragY = 0;

  if(dragObject != null) { 
    dragObject.style.zIndex ="-99999";
    dragObject.style.opacity ="0";
    dragObject.style.visibility="hidden";
    var dragX = parseInt(dragObject.offsetLeft);
    var dragY = parseInt(dragObject.offsetTop);
    DragOut.style.left=dragObject.style.left
    DragOut.style.top=dragObject.style.top
    DragOut.style.width=dragObject.style.width
    DragOut.style.height=dragObject.style.height
  }

  if (DragOut) {
    DragOut.style.backgroundColor="#ccccff";
    DragOut.style.filter="alpha(opacity=60)";
    DragOut.style.opacity=".6";
    DragOut.style.visibility="visible";
  }
 
  var mouseX = evt.clientX;
  var mouseY = evt.clientY;
  offsetX = mouseX - dragX;
  offsetY = mouseY - dragY;
  isDragging = true;
  return false;
}

//============================================================
// Resize DFrame as Minimum/Maximum
//============================================================
function DFrameMinMax(obj) {
  var win = window.parent;
  var doc = win.document;

  while (ibaGetElement('PopUpScreen',doc)==null && win != top.window) {
     win = win.parent;
     doc = win.document;
  }

  dragObject    = ibaGetElement('PopUpScreen',doc);
  DragOut    = ibaGetElement('DragOutline',doc);
  popupFrame    = ibaGetElement('PopUpFrame',doc);


  if (dragObject == null) return false;

  if (obj.className.match("x-tool-min")) {  // Minimise the frame
    obj.className="x-tool x-tool-max";
    obj.title="Maximise";
    Saveleft=dragObject.style.left;
    Savetop=dragObject.style.top;
    Savewidth=dragObject.style.width;
    Saveheight=dragObject.style.height;
    dragObject.style.left = 0;
    dragObject.style.top = (doc.body.clientHeight-38) + "px";
    dragObject.style.width = "300px";
    dragObject.style.height = "32px";
    dragObject.style.overflow = "hidden";

    if (IEBrowser) {
      popupFrame.style.height = "99%";
    }
/*
    else {
      popupFrame.style.width = "290px";
      popupFrame.style.height = "22px";
    }
*/
  }
  else {  // Maximise the frame
    obj.className="x-tool x-tool-min";
    obj.title="Minimise";
    dragObject.style.left = Saveleft;
    dragObject.style.top = Savetop;
    dragObject.style.width = Savewidth;
    dragObject.style.height = Saveheight;

    if (IEBrowser) {
      popupFrame.style.height = "99%";
    }
/*
    else {
      popupFrame.style.width = parseInt(Savewidth) - 10 + "px";
      popupFrame.style.height = parseInt(Saveheight) - 10 + "px";
    }
*/
    //dragObject.style.overflow = "auto";
  }
}
//============================================================
// Resize DFrame
//============================================================
function mR(ob,e) {
  if (ob.id!="DragResize") return;
  var win = window.parent;
  var doc = win.document;
  while (ibaGetElement('PopUpScreen',doc)==null && win!=top.window) {
     win = win.parent;
     doc = win.document;
  }
  document.body.ondrag=function(){return false};
  document.body.ondragstart=function(){return false};
  document.body.onselectstart=function(){return false};
  document.onmousemove = mMR;
  document.onmouseup = mU;
  doc.onmouseup = mU;
  document.body.style.cursor="se-resize";
  doc.body.style.cursor="se-resize";
  dragObject    = ibaGetElement('PopUpScreen',doc);
  DragOut    = ibaGetElement('DragOutline',doc);
  if (window.event) e=window.event;
  var dragX = parseInt(dragObject.style.width);
  var dragY = parseInt(dragObject.style.height);
  if (DragOut) {
    DragOut.style.left=dragObject.style.left;
    DragOut.style.top=dragObject.style.top;
    DragOut.style.width=dragObject.style.width;
    DragOut.style.height=dragObject.style.height;
    DragOut.style.visibility="visible";
  }  
  var mouseX = e.clientX;
  var mouseY = e.clientY;
  offsetX = mouseX - dragX;
  offsetY = mouseY - dragY;
  isResize = true;
  e.cancelBubble = true;
  return false;
}
//
// Mouse Move Drag
//
function mMD(e) {
  if (!isDragging) return;
  if (window.event) e=window.event;
  if(dragObject == null)return false;

    dragObject.style.zIndex ="-99999";
    dragObject.style.opacity ="0";
    dragObject.style.visibility ="hidden";
  var newX = e.clientX - offsetX;
  var newY = e.clientY - offsetY; 

  if (DragOut) {
    DragOut.style.left = newX + "px";
    if (newY>0) { DragOut.style.top = newY + "px";}
  } 

  return false;
}
//
// Mouse Move Resize
//
function mMR(e) {
  if (!isResize) return false;
  if (window.event) e=window.event;
  var newX = e.clientX - offsetX;
  var newY = e.clientY - offsetY;

  if(newX > parent.document.documentElement.offsetWidth ||
     newY > parent.document.documentElement.offsetHeight) return false;

  if (DragOut) {
    if (newX>200) { DragOut.style.width = newX + "px";}
    if (newY>200) { DragOut.style.height = newY + "px";}
  }
  window.scrollTo(0,0);
  return false;
}

//
// Mouse Up
//
function mU() {
  if (!(isResize||isDragging)) return false;
  window.status='';
  isDragging = false;
  isResize = false;
  if (window.event) e=window.event;
  if(dragObject != null) {
    dragObject.style.left = DragOut.style.left;
    dragObject.style.top = DragOut.style.top;
    dragObject.style.width = DragOut.style.width;
    dragObject.style.height = DragOut.style.height;
  
    dragObject.style.zIndex ="99999";
    dragObject.style.opacity ="1";
    dragObject.style.visibility ="visible";
  }

  if (DragOut) DragOut.style.visibility="hidden";
  window.scrollTo(0,0);
  document.body.style.cursor="pointer";

  var win = window.parent;
  var doc = win.document;

  while (ibaGetElement('PopUpScreen',doc)==null && win!=top.window) {
     win = win.parent;
     doc = win.document;
  }

  doc.body.style.cursor="pointer";
  document.body.ondrag=function(){return true};
  document.body.ondragstart=function(){return true};
  document.body.onselectstart=function(){return true};
  document.onmousemove = null;
  document.onmouseup = null;
  doc.onmouseup = null;
  var tmp = document.getElementById("PopUpFrame");
  var inputs = null;

  if(dragObject == null)  return false;

  return false;
}

//end new UI

//-----------------------------------------------------------------
// Remote script to validate Contract ID
//-----------------------------------------------------------------
function validateCID(ReturnCode,ReturnName,MultHosp) {
  ReturnName.value="";
  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL = "../cgi-bin/patweb80.pbl?reportno=95"
                  + "&valdcode=" + ReturnCode.value.replace(/ /g,"+");
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    return true;
  }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    ReturnCode.focus();
    return false;
  }
}

//------------------------------------------------------------
// Function : Standard Supplier Code Search Frame
//------------------------------------------------------------
function CIDSearchFrame(linkurl,ReturnCode,ReturnName)
{
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
   Left=(document.body.clientWidth-600)/2
   DFrameLink(linkurl,90,Left,700,500);

}

//------------------------------------------------------------
//Clear readonly input fields for Contract ID Input
//------------------------------------------------------------
function clrCID(code,name) {
  code.value="";
  name.value="";
}

function LookupInit() {
  var sl = document.getElementsByTagName("SPAN");
  for (i=0; i<sl.length; i++) {
    if (sl[i].className == "DFrameTitleBar") {
      var ob = sl[i];
      break;
    }
  }
  if (ob!=null) {
    if (isWhitespace(ob.id)) {
      ob.id="DFrameTitleBar";
    }
    ob.onmousedown=function(e){ mD(ob,e); };
    var sl = ob.getElementsByTagName("IMG");
    var ExitIcon=undefined;
    for (i=0; i<sl.length; i++) {
      if (sl[i].src.match("ExitIcon")) {
        var ExitIcon=sl[i]} }
    if (ExitIcon!=undefined) {
      ExitIcon.insertAdjacentHTML('AfterEnd','<div class="x-tool x-tool-min"     onmousedown="DFrameMinMax(this);"></div>');
      ExitIcon.insertAdjacentHTML('AfterEnd','<div class="x-tool x-tool-close" onmousedown="DFrameExit();"></div>');
      ExitIcon.style.display='none';
    }
    var win = window.parent;
    var doc = win.document;
    while (ibaGetElement('PopUpScreen',doc)==null&&win!=top.window) {
      var win = win.parent;
      var doc = win.document;
    }
    DragOut    = ibaGetElement('DragOutline',doc);
    if (DragOut==null) {
      doc.body.insertAdjacentHTML('BeforeEnd','<div name="DragOutline" class="DragOutline" id="DragOutline"></div>');
      DragOut    = ibaGetElement('DragOutline',doc);
    }
  }
}

//-----------------------------------------------------------------
// nonPlussed. onkeypress routine for input fields. 
// will warn user if '+' key is pressed. 
//-----------------------------------------------------------------
function nonPlussed(e) {
  var ev = (e) ? e : window.event;
  var kc = (ev.charCode) ? ev.charcode : ev.keyCode;
  if (kc == 43)  // if '+' key     
  {
    alert("'+' character not permitted in this field");
    return false;
  }
  return true;
}  
//------------------------------------------------------------
// Get selection list of source of referral codes based on the
// OP sites category for source of referral
//------------------------------------------------------------
function SelectSourceOfReferral(ReturnSite,ReturnHosp,ReturnSelect) {
  if (isWhitespace(ReturnSite.value)) return;;
  var serverURL   = "../cgi-bin/comweb80.pbl?reportno=40" + 
                    "&valdcode=" + ReturnSite.value.replace(/ /g,"+") +
                    "&valdcod2=" + ReturnHosp.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnSelect.options.length=0
    ReturnSelect.options[ReturnSelect.options.length]=new Option("","");
    ReturnValue=returnValue.return_value.split("|");
    for (var j=0; j < ReturnValue.length; j++) {
       if (!isWhitespace(ReturnValue[j])) {
         SelectValue=ReturnValue[j].split(",");
         ReturnSelect.options[ReturnSelect.options.length]=
          new Option(SelectValue[1],SelectValue[0]); } } }
  else {
    ReturnSite.select();  }
}
//------------------------------------------------------------
// Add or subtract a number of days from a date object
// the_date = date object
// no_days = number of days to add or subtract
// add_sub = "A" for Add or "S" for subtract
//------------------------------------------------------------
function AddSubtractDate(the_date,no_days,add_sub) {
  if(isWhitespace(no_days) || trim(no_days) == "0") {
    return;
  }
  if(add_sub !="A" && add_sub !="S") {
    return;
  }
  var day_milliseconds = 86400000 - 0;
  var days=no_days - 0;

  var new_date = new Date();
  new_date.setDate(01);      // Set day to 01 as all months have day 01
  new_date.setFullYear(the_date.value.substring(6,11));
  monstr= the_date.value.substring(3,6)
  if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon=0
  if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon=1
  if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon=2
  if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon=3
  if (monstr=="May" || monstr=="MAY" || monstr=="may") mon=4
  if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon=5
  if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon=6
  if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon=7
  if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon=8
  if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon=9
  if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon=10
  if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon=11
  new_date.setMonth(mon);
  new_date.setDate(the_date.value.substring(0,2));
  if(add_sub=="A") {
    new_date.setTime(new_date.getTime() + (day_milliseconds * days));
  } else {
    new_date.setTime(new_date.getTime() - (day_milliseconds * days));
  }
  var ccyy=new_date.getFullYear();
  if(new_date.getMonth()=="0") mon="Jan"
  if(new_date.getMonth()=="1") mon="Feb"
  if(new_date.getMonth()=="2") mon="Mar"
  if(new_date.getMonth()=="3") mon="Apr"
  if(new_date.getMonth()=="4") mon="May"
  if(new_date.getMonth()=="5") mon="Jun"
  if(new_date.getMonth()=="6") mon="Jul"
  if(new_date.getMonth()=="7") mon="Aug"
  if(new_date.getMonth()=="8") mon="Sep"
  if(new_date.getMonth()=="9") mon="Oct"
  if(new_date.getMonth()=="10") mon="Nov"
  if(new_date.getMonth()=="11") mon="Dec"

  var dd=new_date.getDate();
  if (dd<10){
    dd ="0" + dd
  }
  the_date.value= dd + " " + mon + " " + ccyy;
}
//------------------------------------------------------------
// Add or subtract a number of minutes from a start date/time
// to return a new data/time
// startdate = start date
// starttime = start time
// no_mins = number of minutes add or subtracte
// add_sub = "A" for Add or "S" for subtract
// enddate = return end date
// endtime = return end time
//------------------------------------------------------------
function AddSubtractMinute(startdate,starttime,no_mins,add_sub,enddate,endtime) {
  if (startdate==undefined) {return;}
  if (starttime==undefined) {return;}
  if (no_mins==undefined) {return;}
  if (enddate==undefined) {return;}
  if (endtime==undefined) {return;}
  if(isWhitespace(no_mins.value) || trim(no_mins.value) == "0") {
    return;
  }
  if(add_sub !="A" && add_sub !="S") {
    return;
  }

  var ss_milliseconds = 1000;
  var mm_milliseconds = 60 * ss_milliseconds;        //    60000 millisec in a minute
  var hh_milliseconds = 60 * mm_milliseconds;        //  3600000 millisec in an hour
  var day_milliseconds = 24 * hh_milliseconds;       // 86400000 millisec in a day

  var mins_milliseconds = no_mins.value * mm_milliseconds;

  var new_date = new Date();
  new_date.setDate(01);      // Set day to 01 as all months have day 01
  new_date.setFullYear(startdate.value.substring(6,11));
  monstr= startdate.value.substring(3,6)
  if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon=0
  if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon=1
  if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon=2
  if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon=3
  if (monstr=="May" || monstr=="MAY" || monstr=="may") mon=4
  if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon=5
  if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon=6
  if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon=7
  if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon=8
  if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon=9
  if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon=10
  if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon=11
  new_date.setMonth(mon);
  new_date.setDate(startdate.value.substring(0,2));

  var hh = starttime.value.substring(0,2);
  var mm = starttime.value.substring(3,5);
  var ss = starttime.value.substring(6,8);
  new_date.setHours(hh);
  new_date.setMinutes(mm);
  new_date.setSeconds(ss);

  if(add_sub=="A") {
    new_date.setTime(new_date.getTime() +
                     mins_milliseconds);
  }
  else {
    new_date.setTime(new_date.getTime() -
                     mins_milliseconds);
  }
  var ccyy=new_date.getFullYear();
  if(new_date.getMonth()=="0") mon="Jan"
  if(new_date.getMonth()=="1") mon="Feb"
  if(new_date.getMonth()=="2") mon="Mar"
  if(new_date.getMonth()=="3") mon="Apr"
  if(new_date.getMonth()=="4") mon="May"
  if(new_date.getMonth()=="5") mon="Jun"
  if(new_date.getMonth()=="6") mon="Jul"
  if(new_date.getMonth()=="7") mon="Aug"
  if(new_date.getMonth()=="8") mon="Sep"
  if(new_date.getMonth()=="9") mon="Oct"
  if(new_date.getMonth()=="10") mon="Nov"
  if(new_date.getMonth()=="11") mon="Dec"

  var dd=new_date.getDate();
  if (dd < 10) {dd ="0" + dd}

  enddate.value = dd + " " + mon + " " + ccyy;

  hh = new_date.getHours();
  if (hh < 10) {hh ="0" + hh};
  mm = new_date.getMinutes();
  if (mm < 10) {mm ="0" + mm};
  ss = new_date.getSeconds();
  if (ss < 10) {ss ="0" + ss};

  endtime.value = hh + ":" + mm + ":" + ss;
}

function GetIns(ReturnCode,ReturnAdd1,ReturnAdd2,ReturnAdd3,ReturnAdd4,
                ReturnPost,ReturnCName,ReturnCTelp,ReturnCFaxn)
{ 
  if (isWhitespace(ReturnCode.value)) return;;
  
  var serverURL = "../cgi-bin/patweb80.pbl?reportno=36" +
        "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
        "&valdtype=1"

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnAdd1.value=ReturnValue[1];
    ReturnAdd2.value=ReturnValue[2];
    ReturnAdd3.value=ReturnValue[3];
    ReturnAdd4.value=ReturnValue[4];
    ReturnPost.value=ReturnValue[5];
    ReturnCName.value=ReturnValue[6];
    ReturnCTelp.value=ReturnValue[7];
    ReturnCFaxn.value=ReturnValue[8];
  }
}
//----------------------------------------------------------------
//  includeFile - this function is used when you want to include
//                a javascript file from within a js file.
//                It will create the script tag dynamically and
//                append it to the head tag.
//  usage:
//          in custom.js:
//          includeFile('../js/newjavascriptSrc.js');
//
//----------------------------------------------------------------
function includeFile(fileName,callback) {
    var headTag = document.getElementsByTagName('head');
    var scriptObject = document.createElement('script');
    scriptObject.setAttribute('type','text/javascript');
    scriptObject.src = fileName;
    headTag[0].appendChild(scriptObject);

   if(typeof callback != 'undefined' && typeof callback == 'function' ) {
        callback();
    }
}
//----------------------------------------------------------------
//  includeFileCSS - this function is used when you want to include
//                a Css file onload.
//  usage:
//          in custom.css:
//          includeFile('../html/newcss.css');
//
//----------------------------------------------------------------
function includeFileCSS(fileName,callback) {
    var headTag = document.getElementsByTagName('head');
    var scriptObject = document.createElement('link');
    var customStyle = null;
    scriptObject.setAttribute('type','text/css');
    scriptObject.setAttribute('rel','stylesheet');
    scriptObject.href = fileName;
    var node = headTag[0];
    styleNode = node.getElementsByTagName('link');

    for(var i = 0; i < styleNode.length; i++) {
      if(styleNode[i].href.match(/standard.css/)){
          customStyle = styleNode[i];
          insertAfter(headTag[0],scriptObject,customStyle);
          break;
      };
    }
  
    if(typeof callback != 'undefined' && typeof callback == 'function' ) {
        callback();
    }
};

function insertAfter(parent, node, referenceNode) {
  parent.insertBefore(node, referenceNode.nextSibling);
}
//------------------------------------------------------------
// Get Selection list of beds for a ward
// Inputs WardCode = Ward
//         BedCode = Bed
//         BedType = "E"mpty beds only (Active)
//                   "A"ll beds        (Active)
//                   "L"ist all beds for a ward
//------------------------------------------------------------
function WardBedSelection(WardCode,BedCode,BedType,DefaultBedCode) {
  ReturnFunction="";
  for (var i=4; i < WardBedSelection.arguments.length; i++) {
    if (typeof(WardBedSelection.arguments[i]) == 'function') {
      ReturnFunction=WardBedSelection.arguments[i] }
    else {
      WardBedSelection.arguments[i].value=""; }  }
  if(isWhitespace(WardCode.value)) {
    BedCode.options.length=0;
    BedCode.className="";
    return;
  }
  var serverURL   = "../cgi-bin/comweb80.pbl?reportno=49" +
                    "&valdcode=" + WardCode.value.replace(/ /g,"+") +
                    "&valdtype=" + BedType
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {

    BedCode.options.length=0
    BedCode.options[BedCode.options.length]=new Option("","");
    ReturnValue=returnValue.return_value.split("|");

    WardType=ReturnValue[0];
    if(WardType=="0") {                         // Ward/Bed Ward
      BedCode.className="Mandatory";
    } else {
      BedCode.className="";
    }
    for (var j=1; j < ReturnValue.length; j++) {
       if (!isWhitespace(ReturnValue[j])) {
         SelectValue=ReturnValue[j].split(",");
         BedCode.options[BedCode.options.length]=
          new Option(SelectValue[1],SelectValue[0]);
       }
    }
  if(!isWhitespace(DefaultBedCode.value)) {
   for (var i =0 ; i < BedCode.length; i++) {
    if (BedCode.options[i].value==DefaultBedCode.value.substr(0,3)) {
         BedCode.selectedIndex=i } };
  }
  if (typeof(ReturnFunction) == 'function') {
     ReturnFunction();
  }
  } else {
    BedCode.focus();  }
}
//------------------------------------------------------------------
// Get extract last run from and to dates
//-------------------------------------------------------------------
function ExtractRunDate(ProgramName,Hospital,LastRunFromDate,LastRunToDate) {
  LastRunFromDate.value="";
  LastRunToDate.value="";
  if (isWhitespace(ProgramName)) return;;

  var serverURL = "../cgi-bin/comweb80.pbl?reportno=54" +
                  "&valdcode=" + ProgramName.replace(/ /g,"+") +
                  "&valdhosp=" + Hospital.value.replace(/ /g,"+");
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    LastRunFromDate.value=ReturnValue[0];
    LastRunToDate.value=ReturnValue[1];
    return true;
  }
  else {
    LastRunFromDate.value="";
    LastRunToDate.value="";
    return false;
  }
}
//------------------------------------------------------------
// Get select list of category codes for a given category and
// hospital
//------------------------------------------------------------
function SelectOptionsHospCatCode(ReturnCat,ReturnHosp,ReturnSelect) {
  if (isWhitespace(ReturnCat.value)) return;;
  if (isWhitespace(ReturnHosp.value)) return;;
  var serverURL   = "../cgi-bin/comweb80.pbl?reportno=55" + 
                    "&valdcode=" + ReturnCat.value.replace(/ /g,"+") +
                    "&valdhosp=" + ReturnHosp.value.replace(/ /g,"+") +
                    "&returnfm=1"
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnSelect.options.length=0
    ReturnSelect.options[ReturnSelect.options.length]=new Option("","");
    ReturnValue=returnValue.return_value.split("|");
    for (var j=0; j < ReturnValue.length; j++) {
       if (!isWhitespace(ReturnValue[j])) {
         SelectValue=ReturnValue[j].split(",");
         ReturnSelect.options[ReturnSelect.options.length]=
          new Option(SelectValue[1],SelectValue[0]); } } }
  else {
    ReturnSelect.select();  }
}
//------------------------------------------------------------
// Get select list of category codes for a given category.
// This returns all the category codes without hospital filter
//------------------------------------------------------------
function SelectOptionsHospCatCode1(ReturnCat,ReturnHosp,ReturnSelect) {
  if (isWhitespace(ReturnCat.value)) return;;
  var serverURL   = "../cgi-bin/comweb80.pbl?reportno=55" +
                    "&valdcode=" + ReturnCat.value.replace(/ /g,"+") +
                    "&valdhosp=" + ReturnHosp.value.replace(/ /g,"+") +
                    "&returnfm=1"
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnSelect.options.length=0
    ReturnSelect.options[ReturnSelect.options.length]=new Option("","");
    ReturnValue=returnValue.return_value.split("|");
    for (var j=0; j < ReturnValue.length; j++) {
       if (!isWhitespace(ReturnValue[j])) {
         SelectValue=ReturnValue[j].split(",");
         ReturnSelect.options[ReturnSelect.options.length]=
          new Option(SelectValue[1],SelectValue[0]); } } }
  else {
    ReturnSelect.select();  }
}
//----------------------------------------------------------------
// Get select list of category codes for a given category. 
// This returns all the category codes without hospital filter
// All Active and Inactive will long description will be returned. 
//----------------------------------------------------------------
function SelectOptionsHospCatCode2(ReturnCat,ReturnHosp,ReturnSelect) {
  if (isWhitespace(ReturnCat.value)) return;;
  var serverURL   = "../cgi-bin/comweb80.pbl?reportno=55" +
                    "&valdcode=" + ReturnCat.value.replace(/ /g,"+") +
                    "&valdhosp=" + ReturnHosp.value.replace(/ /g,"+") +
                    "&returnfm=1" +
                    "&showiact=Y" +
                    "&showldsc=Y"
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnSelect.options.length=0
    ReturnSelect.options[ReturnSelect.options.length]=new Option("","");
    ReturnValue=returnValue.return_value.split("|");
    for (var j=0; j < ReturnValue.length; j++) {
       if (!isWhitespace(ReturnValue[j])) {
         SelectValue=ReturnValue[j].split(",");
         ReturnSelect.options[ReturnSelect.options.length]=
          new Option(SelectValue[1],SelectValue[0]); } } }
  else {
    ReturnSelect.select();  }
}
//-----------------------------------------------------------------
// Remote script to calculate the number of financial periods
// between the from and to period
//-----------------------------------------------------------------
function calcNumberPeriod(FromPeriod,ToPeriod,NumberofPeriods) {
  NumberofPeriods.value="0";
  if (isWhitespace(FromPeriod.value) || isWhitespace(ToPeriod.value)) {
    return;
  }
  var serverURL = "../cgi-bin/comweb80.pbl?reportno=57" +
                "&periodfr=" + FromPeriod.value.substr(2,4).replace(/ /g,"+") +
                               FromPeriod.value.substr(0,2).replace(/ /g,"+") +
                "&periodto=" + ToPeriod.value.substr(2,4).replace(/ /g,"+") +
                               ToPeriod.value.substr(0,2).replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    NumberofPeriods.value=ReturnValue[0];
  }
}
//------------------------------------------------------------------------------
// Function : Impairment Code Search Frame
//------------------------------------------------------------------------------
function ImpairmentCodeSearchFrame(ReturnCode,ReturnDesc)
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnFunction="" ;
  for (var i=2; i < ImpairmentCodeSearchFrame.arguments.length; i++)
  {
    if (typeof(ImpairmentCodeSearchFrame.arguments[i]) == 'function')
      window.ReturnFunction=ImpairmentCodeSearchFrame.arguments[i];
  }

  window.ReturnCode=ReturnCode ;
  window.ReturnDesc=ReturnDesc ;
  PopUpFrameDoc.location.href = "../lookups/ImpairmentCodeSearchFrame.html";
  SearchFrameShow();
}
//------------------------------------------------------------------------------
// Function : Remote script to validate Impairment Code
//------------------------------------------------------------------------------
function valImpairmentCode(ReturnCode,ReturnDesc) {
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/patweb13.pbl?reportno=2&remoteno=1" +
                   "&valdcode=" + ReturnCode.value.replace(/ /g,"+");
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnDesc.value = ReturnValue[0];
  } else {
    ReturnDesc.value="";
    ReturnCode.select();
  }
}
//------------------------------------------------------------------------------
// Function : AN-SNAP Classification Code Search Frame
//------------------------------------------------------------------------------
function ClassCodeSearchFrame(ReturnCode,ReturnVers,ReturnDesc)
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnFunction="" ;
  for (var i=3; i < ClassCodeSearchFrame.arguments.length; i++)
  {
    if (typeof(ClassCodeSearchFrame.arguments[i]) == 'function')
      window.ReturnFunction=ClassCodeSearchFrame.arguments[i];
  }

  window.ReturnCode=ReturnCode ;
  window.ReturnVers=ReturnVers ;
  window.ReturnDesc=ReturnDesc ;
  PopUpFrameDoc.location.href = "../lookups/ClassCodeSearchFrame.html";
  SearchFrameShow();
}
//------------------------------------------------------------------------------
// Function : Remote script to validate AN-SNAP Return Code
//------------------------------------------------------------------------------
function valANSNAPClassCode(ReturnCode,ReturnVers,ReturnDesc) {
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/patweb13.pbl?reportno=2&remoteno=2" +
                   "&classcde=" + ReturnCode.value.replace(/ /g,"+") +
                   "&classvrs=" + ReturnVers.value;
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnVers.value = ReturnValue[0];
    ReturnDesc.value = ReturnValue[1];
  } else {
    ReturnDesc.value="";
    ReturnCode.value="";
    ReturnVers.value="";
    ReturnCode.select();
    ReturnCode.focus();
  }
}
//========================================================================
// Format POST String for AJAX Form Post
//========================================================================
function AJAXPostString(el) {
  parameters="";
  for (i=0;i<el.length;i++) {
    switch (el[i].type) {
     case 'radio': {
       if (el[i].checked) {
         parameters+=el[i].name+"="+el[i].value+"&";
       }
       break; }
     case 'checkbox': {
       if (el[i].checked) {
         parameters+=el[i].name+"="+el[i].value+"&";
       }
       break; }
     case 'hidden': {
       parameters+=el[i].name+"="+el[i].value+"&";
       break; }
     case 'select-one': {
       if (el[i].selectedIndex!=-1) {
         parameters+=el[i].name+"="+el[i].options[el[i].selectedIndex].value +"&";
       }
       break; }
     case 'text': {
       parameters+=el[i].name+"="+encodeURIComponent(el[i].value)+"&";
       break; }
     case 'textarea': {
       if (el[i].className=="setLinefeeds") {
         textareaValue=setLinefeeds(el[i].value,el[i].cols);
         parameters+=el[i].name+"="+textareaValue+"&";
       }
       else {
         parameters+=el[i].name+"="+el[i].value+"&";
       }
       break; }
    }
  }
  parameters+='1=1';
  return parameters;
}
//------------------------------------------------------------------------------
// Function : Cursory email validation to check format is acceptable
//------------------------------------------------------------------------------
 function emailCheck(emailStr) {
   if (isWhitespace(emailStr)){ return true; }
   var emailRegEx=/^\w+[\+\.\w-]*@([\w-]+\.)*\w+[\w-]*\.([a-z]{2,4}|\d+)$/i
   if (emailStr.search(emailRegEx) == -1) {
       alert("Please enter a valid email address format.");
       return false; }
   return true;
 }
//
//------------------------------------------------------------------------------
// Function : Toggle other option input box for CheckBoxCombo
//------------------------------------------------------------------------------
function VisCodToggle(id) {
  cbox="C" + id
  tfield="T" + id
  var other_box=document.getElementById(cbox);
  var text_field=document.getElementById(tfield);
//
  if(other_box.checked==true) {
    text_field.style.display="";
    text_field.className="Mandatory";
    text_field.disabled=false;
    text_field.focus();
  } else {
    text_field.style.display="none";
    other_box.value=other_box.value.substr(0,7);
    text_field.value="";
    text_field.className="";
    text_field.disabled=true;
  }
}
//
//------------------------------------------------------------------------------
// Function : Toggle other option input box value update for CheckBoxCombo
//------------------------------------------------------------------------------
function VisCodField(id) {
  cbox="C" + id
  tfield="T" + id
  var other_box=document.getElementById(cbox);
  var text_field=document.getElementById(tfield);
//
  other_box.value=other_box.value.substr(0,7) + text_field.value;
}
//------------------------------------------------------------------------------
// EmergencySite - Write Emergency Site Name to document
//------------------------------------------------------------------------------
function EmergencySite() {
  document.write(EmergencySiteStr)
}
//------------------------------------------------------------------------------
// OutpatientSite - Write Outpatient Site Name to document
//------------------------------------------------------------------------------
function OutpatientSite() {
  document.write(OutpatientSiteStr)
}
//------------------------------------------------------------------------------
// ReferralDepartment - Write Referral Department Name to document
//------------------------------------------------------------------------------
function ReferralDept() {
  document.write(ReferralDeptStr)
}
//------------------------------------------------------------------------------
// Function: Validate Category CT multihospital links in mltcodaf
//------------------------------------------------------------------------------
function valMLTCODRecord(ReturnCode) {

  var serverURL   = "../cgi-bin/comweb80.pbl?reportno=62"

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")

    for(i=ReturnCode.options.length-1;i>=0;i--)
    {
      //alert(ReturnCode.options[i].value);
      var j=0;
      while (1) {

        if (j < ReturnValue.length) {
          if (trim(ReturnCode.options[i].value)==trim(ReturnValue[j])) {
            //alert(ReturnValue[j]);
            break;
          }
          j++
        } else {
          ReturnCode.remove(i);
          break;
        }
      }
    }
  }
}
//------------------------------------------------------------
// Validate U/R Using Remote Scripting and alert merg details
//                   8 - Patient U/R        (patma1af)
//------------------------------------------------------------
function validateUrMerge(OptionNumber,ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=3; i < validateUrMerge.arguments.length; i++) {
    if (typeof(validateUrMerge.arguments[i]) == 'function') {
      ReturnFunction=validateUrMerge.arguments[i] }
    else {
      validateUrMerge.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
//
    if(ReturnValue[15] == "1") {
      alert("U/R Number " + ReturnCode.value + " is merged with " +
            ReturnValue[4] + "\nUsing " + ReturnValue[4])
      ReturnCode.value=ReturnValue[4];
    }
//
    j=0
    for (var i=3; i < validateUrMerge.arguments.length; i++) {
       if (typeof(validateUrMerge.arguments[i]) != 'function') {
         j++
         validateUrMerge.arguments[i].value=ReturnValue[j] } }
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
function saveScrollPosition() {
  var Template = getTop().content.TemplateFile.content.substr(0,13);
  var BodyDiv = document.getElementById("BodyDivision");
  if (BodyDiv==null) { return; }
  var location = getTop().content.location.href;
  i = location.search(/rldrand/g);  // find first rldrang cgi and remove
  if (i > 0) {
     location = location.substr(0,i-1);
  }
  var tmpLen = location.substr(location.indexOf("template=") + 9).indexOf("&");
  var url = location.substr(0,location.indexOf("template=") + 9 + tmpLen);
  var cookie_value = url + "|" +
                     BodyDiv.scrollLeft + "|" +
                     BodyDiv.scrollTop + "|" +
                     document.body.scrollLeft + "|" +
                     document.body.scrollTop
  SetCookie(Template,cookie_value);
}
function getScrollPosition() {
  var Template = getTop().content.TemplateFile.content.substr(0,13);
  var BodyDiv = document.getElementById("BodyDivision");
  if (BodyDiv==null) { return; }

  var CookieString=GetCookieData(Template);
  if (!isWhitespace(CookieString) && CookieString!="unknown") {
     var Cookie_Detail=CookieString.split("|");
     var location = getTop().content.location.href;
     i = location.search(/rldrand/g);  // find first rldrang cgi and remove
     if (i > 0) {
        location = location.substr(0,i-1);
     }
     var tmpLen = location.substr(location.indexOf("template=") + 9).indexOf("&");
     var url = location.substr(0,location.indexOf("template=") + 9 + tmpLen);
     if(Cookie_Detail[0] == url) {
        BodyDiv.scrollLeft = Cookie_Detail[1];
        BodyDiv.scrollTop = Cookie_Detail[2];
        document.body.scrollLeft = Cookie_Detail[3];
        document.body.scrollTop = Cookie_Detail[4];
        ExpireCookiePath(Template);
     }
  }
}

//==============================================================================
// checkPass: common password verification routine                         
//==============================================================================
function checkPass(ev) {
  var theForm = null;
  var uid     = null;
  var pwd     = null;
  var i;

  var evt = ev ? ev : window.event;
  var el = evt.target || evt.srcElement;
  var bIsInForm = false;

  do {
    el = el.parentNode;

    if (el.tagName == 'FORM') {
      bIsInForm = true;
      break;
    }
  } while (el.parentNode);

  if (!bIsInForm) return;  // password field not in the form; i.e. not visible

  if (typeof document.forms['UpdateForm'] != "undefined") {
    theForm = document.forms['UpdateForm'];
  } else if (typeof document.forms['AddForm'] != "undefined") {
    theForm = document.forms['AddForm'];
  } else {
    for (i = 0; i < document.forms.length; i++) {
      if (   (typeof document.forms[i].secureid != "undefined") 
          || (typeof document.forms[i].username != "undefined")) {
        theForm = document.forms[i];
        break; 
      }  
    }
  }

  if (theForm == null) {
     alert('Standard.js:checkPass() cannot identify the form'); 
     return false;
  }

  if (typeof theForm.secureid != "undefined") { 
    uid = theForm.secureid;
    pwd = theForm.securepw;
   
  } else if (typeof theForm.username != "undefined") {
    uid = theForm.username;
    pwd = theForm.password;
  }
    
  if (uid == null) {
     alert('Standard.js:checkPass() cannot identify the user id field'); 
     return false;
  }

  // pwd is mandatory so form cannot be submitted without one. 
  // if it is blank, ignore for now and let vaiidateMandatory catch it. 
  if (isWhitespace(uid.value)) { return true; }
  if (isWhitespace(pwd.value)) { return true; }
  
  var rsurl = "../cgi-bin/patweb80.pbl";                                                                                                       
  var rsqry = "reportno=11" +
              "&secureid=" + encodeURIComponent(uid.value) + 
              "&securepw=" + encodeURIComponent(pwd.value);

  var returnValue = RSExecute(rsurl, rsqry, "POST");
                                                                                
  if (returnValue.status == 0) {
    return true;
  }
  else {
    pwd.value="";
    if (uid.readOnly) {
      pwd.focus();
    }
    else {
      uid.focus();
      SetCaretPosition(uid.name,-1);  // set cursor to end of input value
    }
    return false;
  }
}
//==============================================================================
// Return web user id for a user name                                      
//==============================================================================
function getUserIDForLoginName(username,userid) {
  if(isWhitespace(username.value)) {
    return;
  }
  var rsurl = "../cgi-bin/patweb80.pbl";
  var rsqry = "reportno=11&returnid=1" +
              "&secureid=" + encodeURIComponent(username.value)

  var returnValue = RSExecute(rsurl, rsqry, "POST");

  if(returnValue.status == 0) {
    ReturnValue=returnValue.return_value.split("|")
    userid.value=trim(ReturnValue[0])
  } else {
    userid.value="";
  }
}

//==============================================================================
// IsEditKeyPress - Returns true/false if keypress is for an edit event
//==============================================================================
function IsEditKeyPress(e) {
  var e = e ? e : window.event;
  var key = e.keyCode;

  // Is ctrl-v (paste)
  if (e.ctrlKey && (key == 86 )) {
    return true;
  }

  if ( (key == 8) || (key > 45 && key < 91) || (key > 95 && key < 112) ||
       (key > 185) )
  {
    // Is Backspace, Alpha-numeric or Delete, Numpad or other edit keypress
    return true;
  }

  return false;
}
//==============================================================================
// checkLastUpdate - returns true/false if a record exists on pmsupdaf
//                   after the open date/time of the page
//==============================================================================
function checkLastUpdate(ur,opendate,opentime) {
  var serverURL = "../cgi-bin/comweb80.pbl?reportno=78" +
                  "&valdcode=" + ur.value.replace(/ /g,"+") +
                  "&valddate=" + opendate.value.replace(/ /g,"+") +
                  "&valdtime=" + opentime.value.replace(/ /g,"+")
//
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|")
  if (returnValue.status==0) {
    return true;
  } else {
    location.reload();
    return false;

  }
}
//======================================================================
//
// AppendPatientLinksField (STRING Name, STRING Value)
//
// Appends a hidden INPUT field to 'PatientLinks' form (if the form exists).
// If the new field already exists then it simply sets the value of it.
//
// Parameters:
//    Name = name of the hidden field
//    Value = value of the hidden field
//
// Returns:
//   true - if successful
//   false - if failed (no 'PatientLinks' form)
//
//======================================================================
function AppendPatientLinksField(Name, Value) {
  var patientForm = document.getElementById('PatientLinks');
  if (patientForm == undefined) return false;
 
  var the_field = null;
  var inputs = patientForm.getElementsByTagName('INPUT');
  for (var i=0; i < inputs.length; i++ ) {
    if (inputs[i].name == Name) {
      the_field = inputs[i];
    }
  }

  if (the_field == null) {
    the_field = document.createElement('INPUT');
    the_field.setAttribute('type', 'hidden');
    the_field.setAttribute('name', Name);
    the_field.id = Name;
    the_field.setAttribute('value', Value);
    the_field.value = Value;
    patientForm.appendChild(the_field);
  }
  else {
    the_field.setAttribute('value', Value);
    the_field.value = Value;
  }

  return true;
}


var TYPE_ONBLUR = 1;
var TYPE_ONCHANGE = 2;
var TYPE_ONSELECT = 3;
var TYPE_ONFOCUS = 4;
function InitialiseHiddenElements()
{
  var spanNodes = document.getElementsByTagName("span");
  var divNodes = document.getElementsByTagName("div");

  if (spanNodes && spanNodes.length > 0) {
    for (var i=0; i < spanNodes.length; i++) {
      if (spanNodes[i].style.display == "none") {
        AddHandlerToChildNodes(spanNodes[i]);
      }
    }
  }

  if (divNodes && divNodes.length > 0) {
    for (var i=0; i < divNodes.length; i++) {
      if (divNodes[i].style.display == "none") {
        AddHandlerToChildNodes(divNodes[i]);
      }
    }
  }
}

function AddHandlerToChildNodes(Node) {
  if (Node) {
    if (Node.childNodes) {
      for (var i=0; i < Node.childNodes.length; i++) {
        el = Node.childNodes[i];

        // only add default event handlers if it's not textnode or <PRE>
        if (el.nodeType != 3 && el.nodeName != "PRE") {
          AddDefaultHandler(el, TYPE_ONBLUR);
          AddDefaultHandler(el, TYPE_ONCHANGE);
          AddDefaultHandler(el, TYPE_ONSELECT);
          AddDefaultHandler(el, TYPE_ONFOCUS);
        }
        StripWhitespace(el);

        if (el.childNodes) {
          AddHandlerToChildNodes(el);  // recursive call to child nodes
        }
      }
    }
    else if (Node.firstChild) {
      el = Node.firstChild;

      // only add default event handlers if it's not textnode or <PRE>
      if (el.nodeType != 3 && el.nodeName != "PRE") {
        AddDefaultHandler(el, TYPE_ONBLUR);
        AddDefaultHandler(el, TYPE_ONCHANGE);
        AddDefaultHandler(el, TYPE_ONSELECT);
        AddDefaultHandler(el, TYPE_ONFOCUS);

      }
      StripWhitespace(el);

      if (el.firstChild) {
        AddHandlerToChildNodes(el);    // recursive call to child nodes
      }
    }

  }
}

function AddDefaultHandler(Node, Type) {
  if (Node == undefined) return;
  switch (Type) {
    case TYPE_ONBLUR:
      if (Node.onblur == null || Node.onblur == '') {
        Node.onblur = 'onblurHandler();';
      }
      break;

    case TYPE_ONCHANGE:
      if (Node.onchange == null || Node.onchange == '') {
        Node.onchange = 'onchangeHandler();';
      }
      break;

    case TYPE_ONSELECT:
      if (Node.onselect == null || Node.onselect == '') {
        Node.onselect = 'onselectHandler();';
      }
      break;

    case TYPE_ONFOCUS:
      if (Node.onfocus == null || Node.onfocus == '') {
        Node.onfocus = 'onfocusHandler();';
      }
      break;
  }
}

function StripWhitespace(el) {
  if (el) {
    if (el.type == "text") {
      el.value=el.value.replace(/\s*$/,"");
    }
    if (el.type == "textarea") {
      el.value=el.value.replace(/\s*$/,"");
    }
    if (el.className) {
      if (el.className.match(/Integer/)) {
	el.value=el.value.replace(/\s/g,"");
      }
      if (el.className.match(/Number/)) {
	el.value=el.value.replace(/\s/g,"");
      }
    }
  }
}


function ValidateICD2(OptionNumber,ReturnCode,ReturnName,UsingICD9) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=4; i < ValidateICD2.arguments.length; i++) {
    if (typeof(ValidateICD2.arguments[i]) == 'function') {
      ReturnFunction=ValidateICD2.arguments[i] }
    else {
      ValidateICD2.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/comweb80.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&usngicd9=" + UsingICD9.value
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=3; i < ValidateICD2.arguments.length; i++) {
       if (typeof(ValidateICD2.arguments[i]) != 'function') {
         j++
         ValidateICD2.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() }
    return true;
    }
  else {
    ReturnCode.select();
    return false;
     }
}

//======================================================================
//
// GetDateObj(STRING dateStr, STRING timeStr)
//
// Returns a Date object for the specified date ("dd MMM yyyy") 
// and time ("hh:mm:ss").
// 
// Parameters:
//    dateStr = date string in format of "dd MMM yyyy"
//    timeStr = time string in format of "hh:mm:ss" (optional param)
//
// Returns:
//   obj - a valid Date object
//   null - if not a valid date/time
//
//======================================================================
function GetDateObj(dateStr,timeStr) {
  if (!dateStr)
    return null;

  var dateVal = SetDateYYYYMMDD(dateStr);

  if (dateVal == "")
    return null;

  var obj = new Date();
  var day, month, year = 0;

  year = dateVal.substr(0,4);
  month = dateVal.substr(4,2);
  day = dateVal.substr(6,2);

  month = (month.charAt(0) == "0") ? month.replace("0","") : month;
  day = (day.charAt(0) == "0") ? day.replace("0","") : day;

  obj.setFullYear(parseInt(year), (parseInt(month)-1), parseInt(day));

  obj.setHours(0);
  obj.setMinutes(0);
  obj.setSeconds(0);

  if (!timeStr || timeStr == "")
    return obj;  // return date object with default time set (midnight)

  var arrTime = timeStr.split(":");
  if (arrTime && arrTime.length < 3) {
    return obj;  // return date object with default time set (midnight)
  }

  obj.setHours(arrTime[0]);
  obj.setMinutes(arrTime[1]);
  obj.setSeconds(arrTime[2]);

  return obj;  // return full date object with time set
}

//======================================================================
// Open new window function used by WA Health. They override this 
// function in custom.js with the required options
//======================================================================
function openNewWindow(URL, WindowType) {
  return window.open(URL, WindowType);
}

//======================================================================
// Sets the DIV innerHTML with a SPAN's innerHTML
//======================================================================
function SetDivSpanContent(DivID, SpanID) {
  var div = document.getElementById(DivID);
  var span = document.getElementById(SpanID);

  if ( (div == undefined) || (span == undefined)) {
    return;
  }

  div.innerHTML = span.innerHTML;
}

//======================================================================
// Initialises the page layout to enable scrolling of 'BodyDivision' div
//======================================================================
function InitPageLayout() {
  var HeadingSection  = document.getElementById('HeadingSection');
  var HeadingDivision = document.getElementById('HeadingDivision');
  var BodyDivision    = document.getElementById('BodyDivision');

  if (BodyDivision == undefined)
    return;

  var th = getClientHeight(); // view frame height (start with this value)

  if (HeadingDivision)
  {
    th -= HeadingDivision.offsetHeight;
  }

  if (HeadingSection)
  {
    th -= HeadingSection.offsetHeight;
  }

  var SelectPeriod = document.getElementById('SelectPeriod');
  if (SelectPeriod)
  {
    th -= SelectPeriod.offsetHeight;
  }

  BodyDivision.style.height = th + 'px';  // table body height (rows section)
}
//======================================================================
// Enable/Disable the child elements of a span
//======================================================================
function ToggleDisabledChildElements(span_name, isDisabled) {
  var span=document.getElementById(span_name);
  if (span == undefined)
    return;

  var anchor=span.getElementsByTagName("A");
  for (var e = 0; e < anchor.length; e++) {
    if (isDisabled) {
      anchor[e].href="javascript: void(0)";
    }
  }

  var images=span.getElementsByTagName("IMG");
  for (var e = 0; e < anchor.length; e++) {
    images[e].onclick="";
    images[e].alt="";
    var imgClass = (isDisabled) ? "DisabledIcon" : "Icon";
    images[e].className = imgClass;
  }

  for (var e = 0; e < span.childNodes.length; e++) {
    var el=span.childNodes[e];
    switch(el.type) {
      case "text":
        el.disabled = isDisabled; break;
      case "select-one":
        el.disabled = isDisabled; break;
      case "textarea":
        el.disabled = isDisabled; break;
      case "button":
        el.disabled = isDisabled; break;
      case "checkbox":
        el.disabled = isDisabled; break;
      case "submit":
        el.disabled = isDisabled; break;
      case "hidden":
        break;
     }
  }
}
//======================================================================
// Disable the child elements of a span
//======================================================================
function DisableChildElements(span_name) {
  ToggleDisabledChildElements(span_name,true);
}
//======================================================================
// Enable the child elements of a span
//======================================================================
function EnableChildElements(span_name) {
  ToggleDisabledChildElements(span_name,false);
}
//======================================================================
// Show/Hide the child elements of a span
//======================================================================
function ShowHideChildElements(span_name, show) {
  var span=document.getElementById(span_name);
  if (span == undefined)
    return;
  
  var display = (show) ? "" : "none";
  for (var e = 0; e < span.childNodes.length; e++) {
    var el=span.childNodes[e];

    // only set the display if element is NOT a text node or <PRE>
    if (el.nodeType != 3 && el.nodeName != "PRE") {
      el.style.display = display;
    }
  }
}
//======================================================================
// Show the child elements of a span
//======================================================================
function ShowChildElements(span_name) {
  ShowHideChildElements(span_name, true);
}
//======================================================================
// Hide the child elements of a span
//======================================================================
function HideChildElements(span_name) {
  ShowHideChildElements(span_name, false);
}
//------------------------------------------------------------
// Filter selection list options
//------------------------------------------------------------
// SelectObject = selection list object name
// FiltField    = Field to filter
//                1 - 30 = Indicator 1 to 30
//                HDP - HDP Default
//                HCP = HCP Equivalent
//                HCP1 = Value of first space in HCP Equivalent
//                ASS = Associate No
//                ACTIVE = Active or Inactive
//                ACODE = Category Code Value
// FiltValue    = Value to filter
// FiltOption   = 1 - Remove option when field value matches and not selected
//                2 - Only display option with blank and matching field value
//                3 - Only display option with matching field value
//                4 - Only display options with more than one matching field 
//                5 - Remove option when field value matches
//                6 - As 4 however if selected value does not match displayed
//                    as blank
//------------------------------------------------------------
//------------------------------------------------------------
function filterCatCodeList(SelectObject,FiltField,FiltValue,FiltOption){
  if (SelectObject==undefined) return;;
  if (isWhitespace(FiltField)) return;;
  if (isWhitespace(FiltValue)) return;;
  if (isWhitespace(FiltOption)) return;;
  var field_value;
  for (var i=0;i<SelectObject.length;i++) {
     switch (FiltField) {
      case "ACODE":
           field_value=SelectObject.options[i].value.substr(0,3);break;
      case "1":
           field_value=SelectObject.options[i].value.substr(3,1);break;
      case "2":
           field_value=SelectObject.options[i].value.substr(4,1);break;
      case "3":
           field_value=SelectObject.options[i].value.substr(5,1);break;
      case "4":
           field_value=SelectObject.options[i].value.substr(6,1);break;
      case "5":
           field_value=SelectObject.options[i].value.substr(7,1);break;
      case "6":
           field_value=SelectObject.options[i].value.substr(8,1);break;
      case "7":
           field_value=SelectObject.options[i].value.substr(9,1);break;
      case "8":
           field_value=SelectObject.options[i].value.substr(10,1);break;
      case "9":
           field_value=SelectObject.options[i].value.substr(11,1);break;
      case "10":
           field_value=SelectObject.options[i].value.substr(12,1);break;
      case "11":
           field_value=SelectObject.options[i].value.substr(13,1);break;
      case "HDP":
           field_value=SelectObject.options[i].value.substr(14,4);break;
      case "HCP":
           field_value=SelectObject.options[i].value.substr(18,4);break;
      case "HCP1":
           field_value=SelectObject.options[i].value.substr(18,1);break;
      case "ASS":
           field_value=SelectObject.options[i].value.substr(22,6);break;
      case "12":
           field_value=SelectObject.options[i].value.substr(28,1);break;
      case "13":
           field_value=SelectObject.options[i].value.substr(29,1);break;
      case "14":
           field_value=SelectObject.options[i].value.substr(30,1);break;
      case "15":
           field_value=SelectObject.options[i].value.substr(31,1);break;
      case "16":
           field_value=SelectObject.options[i].value.substr(32,1);break;
      case "17":
           field_value=SelectObject.options[i].value.substr(33,1);break;
      case "18":
           field_value=SelectObject.options[i].value.substr(34,1);break;
      case "19":
           field_value=SelectObject.options[i].value.substr(35,1);break;
      case "20":
           field_value=SelectObject.options[i].value.substr(36,1);break;
      case "21":
           field_value=SelectObject.options[i].value.substr(37,1);break;
      case "22":
           field_value=SelectObject.options[i].value.substr(39,1);break;
      case "23":
           field_value=SelectObject.options[i].value.substr(40,1);break;
      case "24":
           field_value=SelectObject.options[i].value.substr(41,1);break;
      case "25":
           field_value=SelectObject.options[i].value.substr(42,1);break;
      case "26":
           field_value=SelectObject.options[i].value.substr(43,1);break;
      case "27":
           field_value=SelectObject.options[i].value.substr(44,1);break;
      case "28":
           field_value=SelectObject.options[i].value.substr(45,1);break;
      case "29":
           field_value=SelectObject.options[i].value.substr(46,1);break;
      case "30":
           field_value=SelectObject.options[i].value.substr(47,1);break;
      case "ACTIVE":
           field_value=SelectObject.options[i].value.substr(38,1);break;
     }
     if (FiltOption == "1" && (field_value == FiltValue)) {
      if(SelectObject.options[i].selected!=true) {  // Do not remove
          SelectObject.remove(i);                   // selected options
          i--;
      }
     }
     if (FiltOption == "5" && (field_value == FiltValue)) {
       SelectObject.remove(i);                   
       i--;
     }
     if (FiltOption == "2" && (field_value != FiltValue) &&
         !isWhitespace(field_value) &&
         !isWhitespace(SelectObject.options[i].value.substr(0,3))) {
      if(SelectObject.options[i].selected!=true) {  // Do not remove
          SelectObject.remove(i);                   // selected options
          i--;
      }
     }
     if (FiltOption == "3" && (field_value != FiltValue) &&
         !isWhitespace(SelectObject.options[i].value.substr(0,3))) {
      if(SelectObject.options[i].selected!=true) {  // Do not remove
          SelectObject.remove(i);                   // selected options
          i--;
      }
     }
     if (FiltOption == "4" &&
         !isWhitespace(SelectObject.options[i].value.substr(0,3))) {
         filtvalue = FiltValue.split("|");
         delete_option=true;
         for (var j=0; j < filtvalue.length; j++) {
           if(field_value == filtvalue[j]) {
             delete_option = false;
             break;
           }
         }
         if(delete_option == true) {
          SelectObject.remove(i);
          i--;
         }
     }

     //As option 4, but excludes selected value if does not match
     if (FiltOption == "6" && (field_value != FiltValue) &&
         !isWhitespace(SelectObject.options[i].value.substr(0,3))) {
          SelectObject.remove(i);                   
          i--;
     }
  }
}
//======================================================================
// Attaches a function (event handler) to an element's (specified) event
//======================================================================
function AttachEventHandler(elID, evName, handlerFn) {
  var el = document.getElementById(elID);
  if (!el || (el == undefined))
    return false;

  if (document.addEventListener) {
    el.addEventListener(evName, handlerFn, false);
  }
  else if (document.attachEvent) {
    el.attachEvent('on' + evName, handlerFn);
  }
  return true;
}
//=====================================================================
// Validate a NEHTA identifier using the Luhn modulus 10 algorithm
// usage:  validateNEHTA(this,'0')
// identifier_type = "0" - IHI
//                   "1" - HPI
//                   "2" - HPO
//=====================================================================
function validateNEHTA(identifier,identifier_type) {
  if(isWhitespace(identifier.value)) {     // Exit if no identifier
    return true;
  }
  if(identifier.value.substr(0,5) != 80036) {
    alert("Invalid " + identifier.title + "\nFirst five digits " +
          "must be 80036");
    FocusDelay(identifier);
    return false;
  }
  if(identifier_type != identifier.value.substr(5,1)) {
    alert("Invalid " + identifier.title + "\n6th digit must be a " +
          identifier_type);
    FocusDelay(identifier);
    return false;
  }
  var check = identifier.value.search('[^0-9]');
  if(identifier.value.length != 16) {
    alert("Invalid " + identifier.title + "\nLength must be 16 digits");
    FocusDelay(identifier);
    return false;
  }
  var check = identifier.value.search('[^0-9]');
  if (check >= 0) {
     alert("Invalid " + identifier.title + "\nMust be numeric");
     FocusDelay(identifier);
     return false;
  }
  var calc, totalsum = 0, multiply = 1;
  var length = identifier.value.length;
  while (length--) {
      calc = parseInt(identifier.value.charAt(length),10) * multiply;
      if(calc>9) {
        calc=calc-9;                        // if calc > 9 subtract 9
      }
      totalsum += calc;                     // Add to total
      if(multiply==1) {
        multiply=2;                         // Toggle multiply value
      } else {                              // between 1 and 2
        multiply=1;
      }
   };
   if(!(totalsum%10 === 0) && (totalsum > 0)) {
    alert("Invalid " + identifier.title);
    FocusDelay(identifier);
    return false;
   }
   return true;
}
//------------------------------------------------------------
// Schedule an identifer lookup via DHS Medicare
//------------------------------------------------------------
function scheduleDHSLookup(RequestType,RequestCode) {
  var serverURL ="../cgi-bin/comweb06.pbl?reportno=5&valdtype=4" +
                 "&valdcode=" + RequestType +
                                RequestCode.value.replace(/ /g,"+");
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    if(RequestType=="01" ) {
      alert("IHI - Lookup Request Sent");
    }
    if(RequestType=="02" ) {
      alert("HPI-I - Lookup Request Sent");
    }
    if(RequestType=="03" || RequestType=="04" || RequestType=="05"
       || RequestType=="06") {
      alert("HPI-0 - Lookup Request Sent");
    }
  } else {
    return false;
  }
  return true;
}
//------------------------------------------------------------//
// Function: StoreElemVals()
//
// Loops through the array (arrNames) of element id's and stores 
// that element's value in an associative array (arrVals).
//
// e.g. 
// var arrNames = ['el1','el2'];
// var arrVals = {};
//
// StoreElemVals(arrNames, arrVals);
//------------------------------------------------------------//
function StoreElemVals(arrNames, arrVals)
{
  var sID = '';
  var el = null;

  for (var i=0; i < arrNames.length; i++) {
    sID = arrNames[i];
    el = document.getElementById(sID);

    if (el != undefined) {
      if (el.tagName == "INPUT") {
        if (el.type == "text")
          arrVals[sID] = el.value;
        if (el.type == "checkbox")
          arrVals[sID] = el.checked;
      }
      if (el.tagName == "SELECT")
        arrVals[sID] = el.options[el.selectedIndex].value;
    }
  }
}
//------------------------------------------------------------//
// Function: VerifyElemValChange()
//
// Verifies that the value of an element (elID) is different 
// to that which was stored in the associative array 
// (arrOrigVals) for the same elID.
//
// e.g. VerifyElemValChange('el1', arrVals);
//------------------------------------------------------------//
function VerifyElemValChange(elID, arrOrigVals)
{
  var el = document.getElementById(elID);
  if (el == undefined) return false;

  var bChanged = false;

  if (arrOrigVals[el.name] != undefined) {
    if (el.tagName == "SELECT") {
      if (arrOrigVals[el.name] != el.options[el.selectedIndex].value)
        bChanged = true;
    }
    else {
      if (el.type == "checkbox") {
	if (arrOrigVals[el.name] != el.checked)
	  bChanged = true;
      }
      else if (el.type == "text") {
	if (arrOrigVals[el.name] != el.value)
	  bChanged = true;
      }
    }
  }
  return bChanged;
}
//======================================================================
// Checks that the DVA Number on various registration screens is valid.
//======================================================================
function CheckDVA(ptmas26){

  ptmas26.value = ptmas26.value.toUpperCase();
  if(ptmas26.value.length==8) ptmas26.value += " ";
  
  Reg = /[NQSTVW](([\sA-Z]{1}\d{6})|([A-Z]{2}\d{5})|([A-Z]{3}\d{4}))[$\sA-Z]/

  if(!Reg.test(ptmas26.value)&&ptmas26.value!=""){
    alert("Invalid DVA Number entered");
    FocusDelay(ptmas26);
  }
}
//------------------------------------------------------------
// Check Date Time Range Values
// Returns : true if from date/time < to date/time
//           false is from date/time > to date time
//------------------------------------------------------------
function CheckDateTimeRange(FromDate,FromTime,ToDate,ToTime) {
 FromDate=SetDateYYYYMMDD(FromDate.value);
 fyyyy = FromDate.substr(0,4);
 fmm = FromDate.substr(4,2);
 fdd = FromDate.substr(6,2);
 fhh = FromTime.value.substr(0,2);
 fmi = FromTime.value.substr(3,2);
 fse = FromTime.value.substr(6,2);
 from_date_time=new Date(fyyyy,parseInt(fmm,10)-1,fdd,fhh,fmi,fse);
//
 ToDate=SetDateYYYYMMDD(ToDate.value);
 tyyyy = ToDate.substr(0,4);
 tmm = ToDate.substr(4,2);
 tdd = ToDate.substr(6,2);
 thh = ToTime.value.substr(0,2);
 tmi = ToTime.value.substr(3,2);
 tse = ToTime.value.substr(6,2);
 to_date_time=new Date(tyyyy,parseInt(tmm,10)-1,tdd,thh,tmi,tse);
//
  if (from_date_time > to_date_time) {
    return false ;
  }
  return true;
}
//------------------------------------------------------------
// Open Referral Details from Inpatients' Visits view
//------------------------------------------------------------
function OpenAllRef(linkurl,secopt){
  if(secopt=="0"){
    Left=(document.body.clientWidth-1000)/2;
    DFrameLink(linkurl,0,Left,1000,700);
  }
  if(secopt=="1"){
     alert("Screen is not viewable by all departments");
  }
}

//------------------------------------------------------------
// Cancels an event (stops propagation)
//------------------------------------------------------------
function CancelEvent(e) {

  var evt = window.event? window.event : e;

  if (evt.preventDefault) {
    evt.stopPropagation();
    evt.preventDefault();
  }
  else {
    evt.cancelBubble = true;
    evt.returnValue = false;
  }

  return false;
}

//------------------------------------------------------------
// Returns the current caret/cursor position in the textarea
//------------------------------------------------------------
function GetCaretPos(el) {
  if (!el || el == undefined)
    return 0;

  if (document.selection) {
    // IE 11 support

    var c = "\001";
    var pos = 0;
    r = document.selection.createRange();

    if (r == null)
      return 0;

    dup = r.duplicate();

    dup.moveToElementText(el);
    r.text = c;
    pos = dup.text.indexOf(c);
    r.moveStart('character', -1);
    r.text = "";

    return pos;
  }
  else if (el.selectionStart != undefined) {
    return el.selectionStart;
  }

  return 0;
}

//------------------------------------------------------------
// Returns the line number (1-n) of the caret/cursor position 
// in the textarea.
//------------------------------------------------------------
function GetLineNo(el) {
  if (!el || el == undefined)
    return 0;

  var pos, line = 0;

  pos = GetCaretPos(el);

  if (pos == 0) return 1;

  if (pos == -1)
    pos = el.value.length;

  line = el.value.substr(0, pos).split("\n").length;

  return line;
}

//------------------------------------------------------------
// Returns whether or not the key pressed is valid (string input)
// for a text field.
//------------------------------------------------------------
function IsValidInputKey(e) {
  var evt = window.event? event : e;

  // Test if Alphanumeric, Numpad, Punctuation, or Space keycode
  if ( (evt.keyCode >= 48 && evt.keyCode <= 90) ||
       (evt.keyCode >= 96 && evt.keyCode <= 111) ||
       (evt.keyCode >= 186 && evt.keyCode <= 192) ||
       (evt.keyCode >= 219 && evt.keyCode <= 222) ||
       (evt.keyCode == 32) ) {
    return true;
  }
  else {
    return false;
  }
}

//-----------------------------------------------------------------------------
// Validate TEXTAREA limits (Edge/Chrome/Firefox) for copy & paste action
//-----------------------------------------------------------------------------
if (document.addEventListener) {
  document.addEventListener('paste', function (evt) {
    if (evt.target.tagName == 'TEXTAREA') {
      var txtArea = evt.target;

      // check to see if the textarea has the same validation on key press
      if (txtArea.onkeydown == null) {
        return;  // bail if no key press validation
      }
      else {
        var fnStr = txtArea.onkeydown.toString();
        if (fnStr.indexOf('CheckTextAreaLimits') == -1) return;  // not the same
      }

      var maxLines = txtArea.rows;
      var maxChars = txtArea.cols;

      clipboard = evt.clipboardData;

      var lines = txtArea.value.split(/\r?\n/);
      var lineCnt = lines.length;
      var lineNo = GetLineNo(txtArea);  // cursor line no.
      var clipData = "";
      var clipLineCnt = 0;

      clipData = clipboard.getData('text/plain');

      clipLineCnt = clipData.split(/\r?\n/).length;
      if (clipLineCnt > 1) {
        clipData = clipData.split(/\r?\n/)[0];  // we only care about 1st line
      }

      var msg = "";
      if (!isWhitespace(txtArea.title)) {
        msg = txtArea.title + " text area - ";
      }

      if ((lineCnt + (clipLineCnt-1)) > maxLines) {
        msg = msg + maxLines + " line(s) limit reached";
        alert(msg);

        ResetOnBlurHandler(txtArea);

        CancelEvent(evt);
        return false;
      }


      // Check the characters per line count
      var isOver = false;
      for (var i=0; i < lines.length; i++) 
      {
        if (i == (lineNo - 1))
        {
          lineLen = lines[i].length;

          // Clipboard data gone over max chars per line ?
          if ((lineLen + clipData.length) > maxChars) {
            isOver = true;
            break;
          }
        }
      }

      //
      // Gone over the text limit ?
      //
      if (isOver) {
        //
        // Example:
        //   <textarea rows=5 cols=40 wrap=hard DiscreetLimit=true> </textarea>
        //
        var bDiscreetMode = false;  // default behaviour

        if (txtArea.DiscreetLimit != undefined) {  // attribute exists ?
          bDiscreetMode = (txtArea.DiscreetLimit == 'true');  // convert to bool
        }

        if (bDiscreetMode) {
          // We'll insert a newline at the cursor pos to break up the data if
          // that will not cause us to exceed our line limit.
          var lines = txtArea.value.split(/\r?\n/);
          var lineCnt = lines.length - 1;

          if (lineCnt > maxLines) {
            msg = msg + maxLines + " line(s) limit reached";
            alert(msg);

            ResetOnBlurHandler(txtArea);

            CancelEvent(evt);
            return false;
          }
          else {
            InsertNewlineAtCurrentCaretPos(txtArea);
          }
        }
        else {
          msg = msg + maxChars + " character(s) per line limit reached.\nPlease use the ENTER key to continue on the next line.";
          alert(msg);

          ResetOnBlurHandler(txtArea);

          CancelEvent(evt);
          return false;
        }
      }
    }
  });
}

function ResetOnBlurHandler(Field) {
  var blurHandler = Field.onblur;
  Field.onblur = null;

  window.setTimeout(function() { Field.onblur = blurHandler; }, 0);
}

//------------------------------------------------------------
// Checks (and enforces) a limit on the number of lines and 
// characters per line for a textarea input.
// Prevents the key input from registering in the textarea if 
// limit reached.
//------------------------------------------------------------
function CheckTextAreaLimits(e, TextArea, MaxLines, MaxLineChars) {
  var evt = window.event? event : e;
  var el = evt.target ? evt.target : evt.srcElement;
  if (!TextArea || TextArea == undefined)
    return false;

  var KEY_ENTER = 13;
  var KEY_BACKSPACE = 8;
  var KEY_V = 86;
  var txtArea = TextArea;
  var maxLines = MaxLines ? MaxLines : txtArea.rows;
  var maxChars = MaxLineChars ? MaxLineChars : txtArea.cols;
  var msg = "";
  var countLines = 0;

  if (evt.keyCode == KEY_BACKSPACE)
    return true;

  if (!isWhitespace(TextArea.title)) {
    msg = TextArea.title + " text area - ";
  }

  if (evt.keyCode == KEY_ENTER)
  {
    countLines = txtArea.value.split("\n").length;
    if (countLines >= maxLines) {
      msg = msg + maxLines + " line(s) limit reached";
      alert(msg);
      CancelEvent(evt);
      return false;
    }
  }
  else if ( (evt.ctrlKey && evt.keyCode == KEY_V) ||
            (!evt.ctrlKey && !evt.altKey && IsValidInputKey(evt)) )
  {
    var lines = txtArea.value.split(/\r?\n/);
    var lineCnt = lines.length;
    var lineNo = GetLineNo(txtArea);  // cursor line no.
    var clipData = "";
    var clipLineCnt = 0;

    // Get the clipboard data & check line count
    if (evt.ctrlKey && evt.keyCode == KEY_V) {
      if (IEBrowser && window.clipboardData && window.clipboardData.getData) {
        clipData = window.clipboardData.getData('Text');

        if (!isWhitespace(clipData)) {
          clipLineCnt = clipData.split(/\r?\n/).length;
          if (clipLineCnt > 1) {
            clipData = clipData.split(/\r?\n/)[0];  // we only care about 1st line
          }
        }

        if ((lineCnt + clipLineCnt) > maxLines) {
          msg = msg + maxLines + " line(s) limit reached";
          alert(msg);
          CancelEvent(evt);
          return false;
        }
      }
    }

    // Check the characters per line count
    var isOver = false;
    for (var i=0; i < lines.length; i++) 
    {
      if (i == (lineNo - 1))
      {
        lineLen = lines[i].length;

        if (evt.ctrlKey && (evt.keyCode == KEY_V)) 
        {
          // Clipboard paste action
          if ((lineLen + clipData.length) > maxChars) {
            isOver = true;
            break;
          }
        } 
        else {
          // Any other valid keystroke input
          if (lineLen >= maxChars) {
            isOver = true;
            break;
          }
        }
      }
    }

    //
    // Gone over the text limit ?
    //
    if (isOver) {
      //
      // Example:
      //   <textarea rows=5 cols=40 wrap=hard DiscreetLimit=true> </textarea>
      //
      var bDiscreetMode = false;  // default behaviour

      if (txtArea.DiscreetLimit != undefined) {  // attribute exists ?
        bDiscreetMode = (txtArea.DiscreetLimit == 'true');  // convert to bool
      }

      if (bDiscreetMode) {
        // We'll insert a newline at the cursor pos to break up the data if
        // that will not cause us to exceed our line limit.
        var lines = txtArea.value.split(/\r?\n/);
        var lineCnt = lines.length;

        if (lineCnt > maxLines) {
          msg = msg + maxLines + " line(s) limit reached";
          alert(msg);
          CancelEvent(evt);
          return false;
        }
        else {
          InsertNewlineAtCurrentCaretPos(txtArea);
        }
      }
      else {
        msg = msg + maxChars + " character(s) per line limit reached.\nPlease use the ENTER key to continue on the next line.";
        alert(msg);
        CancelEvent(evt);
        return false;
      }
    }
  }

  return true;
}

//------------------------------------------------------------
// Remote script to write and emr history record to emrhisaf
//------------------------------------------------------------
function RemoteEmrHistory(visit,uptype) {
  ReturnFunction="" ;
  for (var i=1; i < RemoteEmrHistory.arguments.length; i++) {
  if (typeof(RemoteEmrHistory.arguments[i]) == 'function') {
     ReturnFunction=RemoteEmrHistory.arguments[i] } }
  var serverURL = "../cgi-bin/emrweb08.pbl?reportno=32" +
                  "&admissno=" + visit.value.replace(/ /g,"+") +
                  "&updttype=" + uptype
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|")
  if (returnValue.status==0) {
     if(typeof(ReturnFunction) == 'function') {
       ReturnFunction();
     }
  }
}
//------------------------------------------------------------
// Remote script to update emrvisaf user defined fields
//------------------------------------------------------------
function RemoteEmrValues(visit,doctdate,docttime) {
  ReturnFunction="" ;
  for (var i=1; i < RemoteEmrValues.arguments.length; i++) {
  if (typeof(RemoteEmrValues.arguments[i]) == 'function') {
     ReturnFunction=RemoteEmrValues.arguments[i] } }
  var serverURL = "../cgi-bin/emrweb08.pbl?reportno=33" +
                  "&admissno=" + visit.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|")
  if (returnValue.status==0) {
     doctdate.value=ReturnValue[1];
     docttime.value=ReturnValue[2];
     if(typeof(ReturnFunction) == 'function') {
       ReturnFunction();
     }
  }
}
function setPST(){
  var PST = document.getElementById("PST");
  if(document.UpdateForm.ptmis010.value.substring(5,6)=="P" ||
  document.UpdateForm.ptmis010.value.substring(14,15)=="3"){
     document.UpdateForm.ptvis134.className = "Mandatory";
     PST.style.visibility="visible";
     PST.style.display="";
  } else {
     document.UpdateForm.ptvis134.className = "";
     document.UpdateForm.ptvis134.value = "";
     PST.style.visibility="hidden";
     PST.style.display="none";
  }
// ptvis104=Category KD - employment status. Only required for Psych
  if(document.UpdateForm.ptmis010.value.substring(5,6)=="P"){
     if(document.UpdateForm.ptvis104!=undefined) {
        document.UpdateForm.ptvis104.className = "Mandatory";}
   } else { 
      if(document.UpdateForm.ptvis104!=undefined) {
        document.UpdateForm.ptvis104.className = "";
        document.UpdateForm.ptvis104.value = "";}
   }
}
//------------------------------------------------------------
// Validate Allied Health Procedure Code using remote scripting
//------------------------------------------------------------
function validateAHProc(ReturnDept,ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=3; i < validateAHProc.arguments.length; i++) {
    if (typeof(validateAHProc.arguments[i]) == 'function') {
      ReturnFunction=validateAHProc.arguments[i] }
    else {
      validateAHProc.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL = "../cgi-bin/allweb01.pbl?reportno=8&functype=8" +
                  "&deptcode=" + ReturnDept.value.replace(/ /g,"+") +
                  "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=ReturnValue[0];
    j=0
    for (var i=3; i < validateAHProc.arguments.length; i++) {
       if (typeof(validateAHProc.arguments[i]) != 'function') {
         j++
         validateAHProc.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    ReturnCode.focus();   }
}
//------------------------------------------------------------
// Function : Standard Allied Health Procedure Search Frame
//------------------------------------------------------------
function AHProcSearchFrame(ReturnDept,ReturnCode,ReturnName)
{
  var PopUpFrameDoc = DFrameStart();
  window.ReturnDept=ReturnDept ;
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../lookups/AHProcSearchFrame.html";
  SearchFrameShow();
}
//-----------------------------------------------------------------
// Function To Validate clinic type problem
//-----------------------------------------------------------------
function valCtypeProblem(ctype,problem,problemdesc) {
  if (isWhitespace(ctype.value) || isWhitespace(problem.value)){
      problemdesc.value="";
      return;
  }
  ReturnFunction="" ;
  for (var i=2; i < valCtypeProblem.arguments.length; i++) {
   if (typeof(valCtypeProblem.arguments[i]) == 'function') {
     ReturnFunction=valCtypeProblem.arguments[i] } }
  var serverURL = "../cgi-bin/outweb02.pbl?reportno=9&updatety=13" +
                  "&clintype="+ctype.value.replace(/ /g,"+") +
                  "&valdcode="+problem.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    problemdesc.value=trim(ReturnValue[0])
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() }
  } else {
    problem.value="";
    problemdesc.value="";
    problem.focus();
  }
}
//-----------------------------------------------------------------
// Function To Validate clinic type procedure
//-----------------------------------------------------------------
function valCtypeProcedure(ctype,procedure,proceduredesc) {
  if (isWhitespace(ctype.value) || isWhitespace(procedure.value)){
      proceduredesc.value="";
      return;
  }
  ReturnFunction="" ;
  for (var i=2; i < valCtypeProcedure.arguments.length; i++) {
   if (typeof(valCtypeProcedure.arguments[i]) == 'function') {
     ReturnFunction=valCtypeProcedure.arguments[i] } }
  var serverURL = "../cgi-bin/outweb02.pbl?reportno=9&updatety=12" +
                  "&clintype="+ctype.value.replace(/ /g,"+") +
                  "&valdcode="+procedure.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    proceduredesc.value=trim(ReturnValue[0])
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() }
  } else {
    procedure.value="";
    proceduredesc.value="";
    procedure.focus();
  }
}
//-----------------------------------------------------------------
// Remote script to validate a U/R number format
//-----------------------------------------------------------------
function validateNHIFormat(ReturnCode) {
  if (isWhitespace(ReturnCode.value)) return;;
  UpCase(ReturnCode);
  justifyRight(ReturnCode);
  var serverURL = "../cgi-bin/nhiweb99.pbl?reportno=5&updttype=1" +
                  "&urnumber=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
  } else {
    ReturnCode.value="";
    ReturnCode.select();
  }
}
//------------------------------------------------------------
// Open Link to Forms Toolkit List for Patient
//------------------------------------------------------------
function FormsLinkTo(FormPage,FormTypeId,FormClassId) {
  document.PatientLinks.action="../forms/"+FormPage;
  var the_field, the_form = document.getElementById('PatientLinks');
  if (!isWhitespace(FormTypeId)) {
    the_field=document.createElement('INPUT');
    the_field.setAttribute('name', 'FormTypeID');
    the_field.setAttribute('value',  FormTypeId);
    PatientLinks.insertBefore(the_field,document.PatientLinks.template);
  }
  if (!isWhitespace(FormClassId)) {
    the_field=document.createElement('INPUT');
    the_field.setAttribute('name', 'FormClassID');
    the_field.setAttribute('value',  FormClassId);
    PatientLinks.insertBefore(the_field,document.PatientLinks.template);
  }
  document.PatientLinks.target=window.name
  document.PatientLinks.submit()
}
//------------------------------------------------------------
// Open Window Link to Page
//------------------------------------------------------------
function ScreenLink(action,reportno,template,width,height) {
  document.PatientLinks.action=action;
  document.PatientLinks.reportno.value=reportno;
  document.PatientLinks.template.value=template;
  document.PatientLinks.method="POST";  /* Use Post to Hide Query String parameters in address bar  */
  var NewWindow=window.open("","ScreenLink",
  "width="+width+",height="+height+",location=no,resizable=yes,scrollbars=yes,titlebar=no");
  NewWindow.focus();
  document.PatientLinks.target="ScreenLink";
  document.PatientLinks.submit();
  document.PatientLinks.method="GET";  /* revert to get method after submit */
}
//------------------------------------------------------------
// Returns a full date string format given a date value
//------------------------------------------------------------
function GetFullDateString(ccyymmdd) {
  yrr=ccyymmdd.substring(0,4);
  mth=GetMonthName(ccyymmdd.substring(4,6));
  day=ccyymmdd.substring(6,8);
  ret = day + " " + mth + " " + yrr;
  return ret
}
function SetClinicIDList() {
  p=Filter;
  p.filtclid.options.length=1;
  SetTypeClinic(p.filtclid,p.deftclid.value,p.usersite.value,p.filtctyp.value);
}
function CreateProgramRef(ur,vis) {
  var dept="";
  var serverURL = "../cgi-bin/allweb02.pbl?reportno=6&updatety=9" +
              "&admissno=" + vis
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|");
  if (returnValue.status==0) {
    dept= ReturnValue[0];
  }
  if(isWhitespace(dept)) {
    alert("Program referral department not setup");
    return;
  }
  linkurl="allweb02.pbl?reportno=3&template=001" +
          "&urnumber=" + ur +
          "&intrvisn=" + vis +
          "&allrf001=" + dept
  Left=(document.body.clientWidth-900)/2
  DFrameLink(linkurl,50,Left,900,550)
}
function VariableNameExists(VarName) {
  if (VarName == undefined)
    return false;

  if (typeof window[VarName] != "undefined")
    return true;

  return false;
}

//-----------------------------------------------------------------
// Function to remove any selection list options (<option>) with a matching value
//-----------------------------------------------------------------
function RemoveListOptions(ListName, OptionValue) {
  if (OptionValue == undefined)
    return;

  var oList = document.getElementById(ListName);
  if ((oList == undefined) || (oList.childNodes.length == 0))
    return;

  var node = oList.firstChild;
  var nextNode = null;
  do {
    if ((node.nodeName == "OPTION") && (node.value == OptionValue)) {
      nextNode = node.nextSibling;
      oList.removeChild(node);
      node = nextNode;
    }
    else {
      node = node.nextSibling;
    }
  } while (node != null);
}

//-----------------------------------------------------------------
// Function to check if a U/R has an OP booking at any site
// for a given date
//-----------------------------------------------------------------
function checkSiteOpBooking(urnumber,bookdate) {
  if (isWhitespace(urnumber.value)) return true;
  if (isWhitespace(bookdate.value)) return true;
  var serverURL = "../cgi-bin/outweb02.pbl?reportno=9&updatety=14" +
                  "&urnumber=" + urnumber.value.replace(/ /g,"+") +
                  "&valddate=" + bookdate.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    return true;
  } else {
    return false;
  }
}

//-----------------------------------------------------------------
// This function applies a border style to all table data row cells (whereby the
// header row cells has a class of 'HeadingCell') so that it looks consistent
// with the border style for the header row cells.
//-----------------------------------------------------------------
function ApplyTableCellBorderStyle(tblID) {
  if (tblID == undefined)
    return;

  var tbl = document.getElementById(tblID);
  if (!tbl || tbl == undefined)
    return;

  var tbody = null;
  if (tbl.getElementsByTagName('tbody') != undefined)
    tbody = tbl.getElementsByTagName('tbody')[0];

  if (tbody == null)
    return;

  var className = '';
  if (tbody != undefined) {
    if (tbody.childNodes.length > 0 && tbody.childNodes[0].nodeName == 'TR') {
      if (tbody.childNodes[0].childNodes[0] != undefined) {
        // Get first row cell class name
        className = tbody.childNodes[0].childNodes[0].className;

        // See if it's of type header row cell
        if (!isWhitespace(className) && className.indexOf('HeadingCell') != -1){
          var trows = tbody.getElementsByTagName('tr');

          // Loop through the rest of the rows and apply matching border style
          // to each row cell.
          for (var i=1; i < trows.length; i++) {
            var row = trows[i];
            if (isWhitespace(row.childNodes[0].className)) {
              for (var j=0; j < row.childNodes.length; j++) {
                var cell = row.childNodes[j];
                if (cell.nodeName == 'TD') {
                  cell.style.border = "1px gray solid";
                  cell.style.borderCollapse = "collapse";
                }
              }
            }
          }
        }
      }
    }
  }
}

function PopulateBlankPopup(htmlContent,FrameWidth,FrameHeight,winTitle){

  PopUpFrame.document.open();
  PopUpFrame.document.write(''+

  '<html style="overflow:auto" scrolling="yes" scrollbars="yes">' +
  '<link rel="stylesheet" href="../html/standard.css" type="text/css">' +
  '<link rel="stylesheet" href="../html/custom.css" type="text/css">' +
  '<script type="text/javascript" src="../js/Standard.js"></script>' +
  '<body style="margin:0;">' +
  '<span class=DFrameTitleBar>' +
  '<img align="right" alt="Exit" class="MenuIcon" width=18 height=18 ' +
  'src="../images/ExitIcon.gif" onclick="DFrameExit();">'+winTitle+'</span>' +
  '<span>' + '<div style="overflow:auto; height:412px">'+
  '<table width=100% border=1>' +
  '<tr><td class=HeadingCell>User</td><td class=HeadingCell>Date / Time</td>'+
  '<td class=HeadingCell>Visit Number</td></tr>' + htmlContent +
  '</table></div><br>'+
  '<center><input type=button value="    Close    " onclick="DFrameExit();"></center>'+
  '<br></span></body></html>');
   PopUpFrame.document.close()
   MaxWidth=document.body.clientWidth
   MaxHeight=document.body.clientHeight
   if(FrameWidth>MaxWidth){
      PopUpScreen.style.width=MaxWidth;
   }
   else {
      PopUpScreen.style.width=FrameWidth ;
   }
   if(FrameHeight>MaxHeight) {
      PopUpScreen.style.height=MaxHeight;
   }
   else {
      PopUpScreen.style.height=FrameHeight;
   }
   PopUpScreen.style.top=(document.body.clientHeight - FrameHeight)/2;
   PopUpScreen.style.left=(document.body.clientWidth - FrameWidth)/2;
   PopUpScreen.style.display="";
}
//
// Returns the selected radio button value for the specified element name
//
function GetRadioSelectValue(elName) {
  var val = '';

  if (document.querySelector) {
    val = document.querySelector('input[name="' + elName + '"]:checked').value;
  }
  else {
    var el = document.getElementsByName(elName);
    if (el == undefined)
      return '';

    for (i=0; i < el.length; i++) {
      if (el[i].checked) {
        val = el[i].value;
        break;
      }
    }
  }

  return val;
}
//
// Checks that the User ID & Password fields have been filled in. 
//
function CheckUserIDPasswd(e, UserIDFld, PasswdFld) {
  if (UserIDFld == undefined || PasswdFld == undefined)
    return;

  var evt = (e != undefined) ? e : window.event;
  var userid = UserIDFld.value;
  var passwd = PasswdFld.value;

  if (isWhitespace(userid) || isWhitespace(passwd)) {
    alert("Please enter User ID and Password!");

    if (isWhitespace(userid)) {
      FocusDelay(UserIDFld);
    }
    if (isWhitespace(passwd)) {
      FocusDelay(PasswdFld);
    }

    CancelEvent(evt);  // cancel current event and subsequent ones
    return false;
  }
  return true;
}

//-----------------------------------------------------------------------------
// Inserts newline into a textarea field at the current cursor (caret) position
//-----------------------------------------------------------------------------
function InsertNewlineAtCurrentCaretPos(TextArea) {
  if (TextArea == undefined)
    return;

  if (document.selection || document.getSelection) {
    // IE browsers
    TextArea.focus();  // get cursor

    var sel = (document.selection)? document.selection : document.getSelection()
    var range = sel.createRange(); // get range obj
    range.text = "\r\n";  // insert newline at current caret pos
  }
  else if (TextArea.selectionStart || TextArea.selectionStart === 0) {
    // Mozilla Firefox and Other browsers
    var startPos = TextArea.selectionStart;
    var endPos = TextArea.selectionEnd;
    TextArea.value = TextArea.value.substring(0, startPos) + "\r\n" +
                     TextArea.value.substring(endPos, TextArea.value.length);
    TextArea.selectionStart = startPos + text.length;
    TextArea.selectionEnd = startPos + text.length;
  }
  else {
    TextArea.value += "\r\n";
  }
}

//-----------------------------------------------------------------------------
// Test if the char is a whitespace/line break
//-----------------------------------------------------------------------------
function isWhiteChar(x) {
  var regEx = new RegExp(/^\s$/);
  return regEx.test(x.charAt(0));
}

//-----------------------------------------------------------------------------
// Formats a text string by inserting line breaks (\n) at the nearest whitespace
// character from MaxLineLen (characters per line) to wrap long lines.
// The text string can be a long line or have multiple lines (with line breaks).
//-----------------------------------------------------------------------------
function formatTextStr(Str, MaxLineLen) {
  if (formatTextStr.arguments.length < 2) return Str;

  if (isWhitespace(Str)) return '';

  var newLineStr = "\n";
  var newStr = '';  // new result string with line breaks

  var lines = Str.split(/\r?\n/);

  for (var i=0; i < lines.length; i++) {
    var str = lines[i];
    var res = '';  // resulting (formatted) string

    // Find the nearest whitespace char in the line & insert a line break there

    while (str.length > MaxLineLen) {  // work backwards from MaxLineLen
      found = false;

      // Inserts a line break (\n) at the first whitespace character
      for (var j = MaxLineLen - 1; j >= 0; j--) {

        // If we're at MaxLineLen mark & next char is a whitespace/line break
        if (j == (MaxLineLen - 1) && isWhiteChar(str.charAt(MaxLineLen))) {
          // append the text up to MaxLineLen followed by a line break
          res = res + [str.slice(0, MaxLineLen), newLineStr].join('');

          str = str.slice(MaxLineLen + 1);  // leave remainder of string (str)
          found = true;
          break;
        }

        // Otherwise check if this char is a whitespace/line break
        if (isWhiteChar(str.charAt(j))) {
          // append the text up to this point followed by a line break
          res = res + [str.slice(0, j), newLineStr].join('');  

          str = str.slice(j + 1);  // leave remainder of string (str)
          found = true;
          break;
        }
      }

      // Insert a line break at MaxLineLen if no whitespace is found
      if (!found) {
        res += [str.slice(0, MaxLineLen), newLineStr].join('');

        str = str.slice(MaxLineLen);  // leave remainder of string (str)
      }
    }

    newStr += (res + str);

    if (i < lines.length-1) {
      newStr += newLineStr;
    }
  }

  return newStr;
}

//-----------------------------------------------------------------------------
// Validates textarea limits (max chars & max lines) and also formats the text
// accordingly with line breaks around the MaxCharsPerLine value.
//   - Uses formatTextStr() function to format the text with line breaks
//-----------------------------------------------------------------------------
function ValidateTextAreaLimits(TextArea,MaxChars,MaxLines,MaxCharsPerLine) {
  var str = TextArea.value.replace(/[\r\n]+/gm,"");  // remove line breaks

  if (str.length > MaxChars) {
    alert(TextArea.title + " - Max " + maxChars + " characters." +
          "\nPlease remove the extra character(s) to continue.");
    FocusDelay(TextArea);
    return false;
  }

  var formattedText = formatTextStr(TextArea.value,MaxCharsPerLine);
  var lineCount = formattedText.split(/\r?\n/).length;

  // Set textarea value with new formatted text
  TextArea.value = formattedText;

  if (lineCount > MaxLines) {
    alert(TextArea.title + " - Max " + maxLines + " lines." +
          "\nPlease remove the extra line(s) to continue.");
    FocusDelay(TextArea);
    return false;
  }

  return true;
}

//-----------------------------------------------------------------------------
// Validates the text limits (max lines & max chars) of a textarea based on the
// 'rows' & 'cols' values defined in the textarea.
//
// Formats the text accordingly based on the 'cols' (chars per line) value
//   - Uses formatTextStr() function to format the text with line breaks
//
// Optional params:
//   - MaxLines (maximum lines allowed)
//   - MaxChars (maximum chars allowed)
//-----------------------------------------------------------------------------
function ValidateTextLimits(TextArea,MaxLines,MaxChars) {
  if (TextArea == undefined) return true;

  var maxLines = TextArea.rows + 0;
  var maxChars = (TextArea.cols + 0) * maxLines;

  if (ValidateTextLimits.arguments.length == 2) { maxLines = MaxLines; }

  if (ValidateTextLimits.arguments.length == 3) {
    maxLines = MaxLines;
    maxChars = MaxChars;
  }

  var str = TextArea.value;
  var maxLineLen = TextArea.cols + 0;  // string to numeric

  var formattedText = formatTextStr(str,maxLineLen);

  TextArea.value = formattedText;  // update textarea with newly formatted text

  if (formattedText.split(/\r?\n/).length > maxLines) {
    alert(TextArea.title + " - Max " + maxLines + " lines." +
          "\nPlease remove the extra line(s) to continue.");

    // Now we clear the original onblur handler to avoid an infinite loop when
    // the focus is moved away from the TextArea.
    // Also re-attach a copy of the onblur handler to restore exising function.
    var evHndlBlur = TextArea.onblur;
    TextArea.onblur = null;
    setTimeout(function() { TextArea.onblur = evHndlBlur; TextArea.focus(); }, 0);
    return false;
  }
  else if (formattedText.replace(/\r?\n/gm,"").length > maxChars) {
    alert(TextArea.title + " - Max " + maxChars + " characters." +
          "\nPlease remove the extra character(s) to continue.");

    // Now we clear the original onblur handler to avoid an infinite loop when
    // the focus is moved away from the TextArea.
    // Also re-attach a copy of the onblur handler to restore exising function.
    var evHndlBlur = TextArea.onblur;
    TextArea.onblur = null;
    setTimeout(function() { TextArea.onblur = evHndlBlur; TextArea.focus(); }, 0);
    return false;
  }

  return true;
}

//-----------------------------------------------------------------------------
// Validates the text limits of a textarea with each key input (onkeydown)
// using the 'rows' (lines) & 'cols' (chars per line) values of the textarea.
// It also enforces a maximum chars (MaxChars) limit on the input text.
//
// Uses LimitText() function to ignore any character input if over the limit.
//
// Optional function params:
//   - MaxLines (maximum lines allowed) OR onblur function call
//   - MaxChars (maximum chars allowed)
//-----------------------------------------------------------------------------
function ValidateKeyInput(TextArea,MaxLines,MaxChars) {
  if (TextArea == undefined) return;

  var maxLines = TextArea.rows + 0;
  var maxChars = (TextArea.cols + 0) * maxLines;
  var onblurFunc = null;

  if (ValidateKeyInput.arguments.length == 2) {  // 2 function params

    if (typeof(ValidateKeyInput.arguments[1]) == 'function') {
      // 2nd function param is a function call for the TextArea's onblur
      onblurFunc = ValidateKeyInput.arguments[1];
    }
    else {
      // 2nd function param is a maximum lines value
      maxLines = MaxLines;
    }
  }

  if (ValidateKeyInput.arguments.length == 3) {  // 3 function params
    maxLines = MaxLines;
    maxChars = MaxChars;
  }

  if (!LimitText(TextArea,maxLines,maxChars)) {  // check limits (lines & chars)
    TextArea.onblur = null;  // clear to prevent infinite loop with error alerts

    // Restore the onblur event handling function(s)
    window.setTimeout(function () {
      if (onblurFunc == null) {
        // use our default onblur functions
        TextArea.onblur = function() {
          TextareaBlurHandler(TextArea);
          ValidateTextLimits(TextArea,maxLines,maxChars);
        }
      }
      else {
        // use the existing onblur function(s)
        TextArea.onblur = function() { onblurFunc(); };
      }
    },100);
  }
}

//------------------------------------------------------------------------
// Splits a long string into an array of fixed-length chunks (substrings)
//
// Params:
//   Str - The string to be split
//   LineLen - Line length of each substring (chunks)
//
// Returns:
//   - Array OR null
//------------------------------------------------------------------------
function ArraySplitTextString(Str, LineLen) {
  if (Str == undefined || LineLen == undefined) return null;

  var regex = new RegExp(".{1," + LineLen + "}","g");

  return Str.match(regex);  // returns an array of fixed-length substrings
}

//------------------------------------------------------------------------
// Calculate difference in minutes between from date/time and to date/time
//------------------------------------------------------------------------
function CalculateDuration(fromdate,fromtime,todate,totime,duration) {
  duration.value="0";
  if(isWhitespace(fromdate.value) || isWhitespace(fromtime.value) ||
     isWhitespace(todate.value) || isWhitespace(totime.value)) {
     return;
  }
  stime = new Date();
  stime.setFullYear(fromdate.value.substr(7,4));
  monstr= fromdate.value.substr(3,3)
  if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon=0
  if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon=1
  if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon=2
  if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon=3
  if (monstr=="May" || monstr=="MAY" || monstr=="may") mon=4
  if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon=5
  if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon=6
  if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon=7
  if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon=8
  if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon=9
  if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon=10
  if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon=11
  stime.setMonth(mon);
  stime.setDate(fromdate.value.substr(0,2));
  stime.setHours(fromtime.value.substr(0,2));
  stime.setMinutes(fromtime.value.substr(3,2));
  stime.setSeconds(fromtime.value.substr(6,2));

  etime = new Date();
  etime.setFullYear(todate.value.substr(7,4));
  monstr= todate.value.substr(3,3)
  if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon=0
  if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon=1
  if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon=2
  if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon=3
  if (monstr=="May" || monstr=="MAY" || monstr=="may") mon=4
  if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon=5
  if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon=6
  if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon=7
  if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon=8
  if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon=9
  if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon=10
  if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon=11
  etime.setMonth(mon);
  etime.setDate(todate.value.substr(0,2));
  etime.setHours(totime.value.substr(0,2));
  etime.setMinutes(totime.value.substr(3,2));
  etime.setSeconds(totime.value.substr(6,2));
  if(stime.getTime() > etime.getTime()) {
   duration.value="-1";
   return;
  }
  difference = (etime.getTime() - stime.getTime());;
  difference = Math.floor(difference / (1000 * 60));
  duration.value=difference;
}
function CheckValPostCode() {
  if (isWhitespace(suburb.value) && isWhitespace(postcode.value)) { 
      return true;
  }
  if (trim(postcode.value)=="8888") {
    if (confirm("Click OK to confirm an Overseas Address")) {
       return true;
    }
  }
  var fulladdress = trim(postcode.value) + "," +
                   trim(suburb.value) + "," +
                   trim(state.value);
  var tmp1 = fulladdress.replace(/[-[\]{}()*+?.,\\^$|#\s]/g, " ");
  for (var i =0; i<PC.length ; i++) {
      var tmp2 = PC[i].replace(/[-[\]{}()*+?.,\\^$|#\s]/g, " ");
      if (tmp2.match(tmp1)) {
         SelectPC[SelectPC.length] = PC[i]
         return true;
      }
  }
  if(isWhitespace(state.value))
  {
    alert("Invalid Suburb/Post Code Combination");
  }
  else
  {
    alert("Invalid Suburb/State/Post Code Combination");
  }
  return false;
}
function RFCDesc() {
  document.write(RFCDescription);
}
function NRFCDesc() {
  document.write(NRFCDescription);
}
function RFCColDesc() {
  document.write(RFCColDescription);
}
function NRFCColDesc() {
  document.write(NRFCColDescription);
}
function DoLDesc() {
  document.write(DoLDescription);
}
function DaKDesc() {
  document.write(DaKDescription);
}
function URDesc() {
  document.write(URDescription);
}
function ResidentialAdmDesc() {
  document.write(ResidentialAdmDescription);
}
function getPMILocalGP(URNum,HCPCod,HCPNam,PRACCod,PRACCnt,PRACName) {
  if (isWhitespace(URNum.value)) return;;
  var serverURL = "../cgi-bin/allweb02.pbl?reportno=6&updatety=G" +
                  "&urnumber=" + URNum.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    HCPCod.value=ReturnValue[0];
    HCPNam.value=ReturnValue[1];
    PRACCod.value=ReturnValue[2];
    PRACCnt.value=ReturnValue[3];
    PRACName.value=ReturnValue[4];
  }
}

//
//-----------------------------------------------------------------------------
// Function to zero-pad a number (prefix with 0's); returns a string
//-----------------------------------------------------------------------------
function ZeroPad(num,size) {
  var s = num + "";
  while (s.length < size) s = "0" + s;
  return s;
}

//
//-----------------------------------------------------------------------------
// Function to pad a string with a trailing character
//   s - String to be padded
//   c - Character used for padding
//   n - Number of characters in return string
//-----------------------------------------------------------------------------
function CharPadEnd(s, c, n) {
  if (!s || !c || s.length >= n || c.length > 1) {
    return s;
  }
  var max = n - s.length;
  for (var i = 0; i < max; i++) {
    s += c;
  }
  return s;
}

//
//-----------------------------------------------------------------------------
// Function to select text value in an input field
//-----------------------------------------------------------------------------
function SelectField(Field) {
  var agentStr = window.navigator.userAgent;
  if (agentStr.indexOf("MSIE") != -1)
  {
    Field.select();
  }
  else {
    Field.setSelectionRange(0, Field.value.length);  // select the text

    // Now we clear the original onblur handler to avoid an infinite loop in
    // Chrome when the focus is moved to a different screen; e.g. mouse-click.
    // We re-attach a copy of the onblur handler after our focus.
    var evHndlBlur = Field.onblur;
    Field.onblur = null;
    setTimeout(function() { Field.onblur = evHndlBlur; Field.focus(); }, 0);
  }
}

//
//-----------------------------------------------------------------------------
// We redefine the .select() function for an Input element here...
//-----------------------------------------------------------------------------
if (typeof HTMLInputElement != "undefined" && HTMLInputElement.prototype.select){
  HTMLInputElement.prototype.select = function () {
    SelectField(this);
  };
}

//
//-----------------------------------------------------------------------------
// Returns just the function name from a function definition string
//-----------------------------------------------------------------------------
function GetFuncName(FuncStr) {
  if (FuncStr == undefined) return "";

  var sFuncName = "";

  FuncStr = FuncStr.substr('function '.length);
  sFuncName = FuncStr.substr(0, FuncStr.indexOf('('));

  return sFuncName;
}

//
// This function is used in place of "theField.focus()" where an alert() is
// called before the call to focus() on a field.
// It will prevent an infinite loop with Chrome alert() & field focus() calls.
//    
// It re-applies the onblur handler function and applies a slight delay to 
// the focus() call, if the function is being called by an "onblur" or 
// "TextBlurHandler" type function.
//
function FocusDelay(Field) {
  var agentStr = window.navigator.userAgent;
  if (agentStr.indexOf("Chrome") != -1)  // Chrome
  {
    var sChild = "";
    var sParent = "";

    // We'll get the top (parent) caller function first...
    var obj = arguments.callee.caller;
    sChild = obj.toString();
    while (obj) {
      if (obj.caller) {
        sChild = obj.toString();
        obj = obj.caller;
        sParent = obj.toString();
      }
      else 
        break;
    }

    var sParentFn = GetFuncName(sParent);
    var sChildFn = GetFuncName(sChild);

    if ( ((sParentFn == "blur") || (sParentFn == "TextBlurHandler")) && 
         (sParent.indexOf(sChildFn) != -1) ) {
      var evHndlBlur = Field.blur;
      Field.blur = null;
      setTimeout(function() { Field.blur = evHndlBlur; Field.focus(); }, 0);
    }
    else {  // function not being called by an onblur function
      setTimeout(function() { Field.focus(); }, 0);
    }
  }
  else {  // Other browsers
    setTimeout(function() { Field.focus(); }, 0);
  }
}
//-----------------------------------------------------------------
// Check if HERO location id already in use
// arguments -HERO type, HERO location ID
//-----------------------------------------------------------------
function checkHeroId(herotype,heroward,herobed,heroid) {
  if (isWhitespace(herotype)) return true;
  if (isWhitespace(heroid.value)) return true;
  var serverURL = "../cgi-bin/patweb95.pbl?reportno=9&remoteno=1" + 
                  "&herotype=" + herotype.replace(/ /g,"+") + 
                  "&heroward=" + heroward.value.replace(/ /g,"+") + 
                  "&herobedd=" + herobed.value.replace(/ /g,"+") + 
                  "&heroloci=" + heroid.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    return true;
  } else {
    heroid.value="";
    return false;
  }
}
function ToggleDetails(compareField,DetailsArray){

  if(arguments.length!=2){
     return;
  }

  if(arguments[1].length==0){
    return;
  }

  //enable fields
  if(trim(compareField.value)==""){
     for(i=0; i<arguments[1].length; i++){
         if(arguments[1][i].tagName=="SELECT"){
            arguments[1][i].selectedIndex=0;
            arguments[1][i].disabled=false;            
            arguments[1][i].className="";
            arguments[1][i].readOnly=false;
         }
         else if(arguments[1][i].tagName=="INPUT"){
            arguments[1][i].value="";
            arguments[1][i].className=""
            arguments[1][i].readOnly = false;
         }
     }
  }
  //disable fields
  else{
     for(i=0; i<arguments[1].length; i++){
         if(arguments[1][i].tagName=="SELECT"){
            arguments[1][i].disabled=true;
            arguments[1][i].readOnly = true;
            arguments[1][i].className=="Readonly"
         }
         else if(arguments[1][i].tagName=="INPUT"){
            arguments[1][i].className="Readonly"
            arguments[1][i].readOnly = true;
         }
     }
  }
}

function DeleteChildNodes(Obj) {
  if (Obj == undefined)
    return false;

  while (Obj.hasChildNodes()) {
    Obj.removeChild(Obj.lastChild);
  }

  return true;
}

function ArraysIdentical(arr1, arr2) {
  if (arr1 == undefined || arr2 == undefined) return false;
  if (arr1 == null || arr2 == null) return false;

  var i = arr1.length;
  if (i != arr2.length) return false;

  while (i--) {
    if (arr1[i] !== arr2[i]) return false;
  }
  return true;
}

function ArrayValueExists(TheArray, Value) {
  for (i=0; i < TheArray.length; i++) {
    if (TheArray[i] == Value)
      return true;
  }
  return false;
}

//-----------------------------------------------------------------------------
// Function to re-format a text area so that no backslash ("\") characters
// appear at the end of a line; it uses the 'cols' attribute to determine where
// the end of the line occurs.
//-----------------------------------------------------------------------------
function FormatEOLText(TextArea) {
  if (TextArea == undefined || TextArea.cols == undefined)
    return;

  var sNewText = "";
  var aChars = TextArea.value.split('');
  var lineLen = TextArea.cols;
  var endLinePos = lineLen - 1;

  for (var i=0; i < aChars.length; i++) {
    if (i == endLinePos) {
      if (aChars[i] == '\\') {
        sNewText += ' ';
        endLinePos -= 1;
      }
      endLinePos += lineLen;
    }
    sNewText += aChars[i];
  }

  TextArea.value = sNewText;
}

//-----------------------------------------------------------------------------
// Function : DRG via MBS Item Search Frame 
//-----------------------------------------------------------------------------
function DrgViaMBSSearchFrame(ReturnCode, MBSField, IntendedStay, PSex, PAge)
{
  window.ReturnCode=ReturnCode;
  window.ReturnFunction="" ;
  for (var i=2; i < DrgViaMBSSearchFrame.arguments.length; i++)
  {
    if (typeof(DrgViaMBSSearchFrame.arguments[i]) == 'function')
      window.ReturnFunction = DrgViaMBSSearchFrame.arguments[i];
  }

  var Width = 700;
  var Height = 300;
  var Left = (document.body.clientWidth - Width)/2;
  var LinkURL = "patweb88.pbl?reportno=35&template=101" + 
                "&ptprd001=" + trim(MBSField.value) +
                "&ptprd004=" + trim(PSex.value) +
                "&ptprd005=" + IntendedStay.value.substr(3,1) +
                "&ptprd007=" + trim(PAge.value);

  DFrameLink(LinkURL,10,Left,Width,Height);
}

//-----------------------------------------------------------------------------
// Function to compare two integer number fields; Field2 > Field1
//-----------------------------------------------------------------------------
function CompareNumberFields(Field1, Field2) {
  if (isWhitespace(Field1.value) || isWhitespace(Field2.value))
    return;

  if (parseInt(Field2.value) <= parseInt(Field1.value)) {
    alert(Field2.title + " must be greater than " + Field1.title);
    FocusDelay(Field2);
    return false;
  }

  return true;
}

//=============================================================================
// Default Medicare Reference Number to var DefaultMedicareReference
// if not set to -1 (No default)
//=============================================================================
function defaultMedicareIRN(IRN) {
  if(!VariableNameExists('DefaultMedicareReference')) {
    return;
  }
  if(DefaultMedicareReference!="-1") {
    IRN.value=DefaultMedicareReference;
  }
}

//-----------------------------------------------------------------------------
// Inserts text into a text field at the cursor position
//-----------------------------------------------------------------------------
function InsertTextAtCursor(TextInputID, Text) {
  var input = document.getElementById(TextInputID);

  if (input == undefined) { return; }

  var scrollPos = input.scrollTop;
  var pos = 0;
  var browser = ((input.selectionStart || input.selectionStart == "0") ?
    "other" : (document.selection? "ie" : "unknown" ) );

  if (browser == "ie") {  // Older IE browsers (8,9,10)
    input.focus();
    var range = document.selection.createRange();
    range.text = Text;

    // Move cursor after the inserted text
    range.collapse(false); /* to the end */
    range.select();

    return;
  }
  else if (browser == "other") {  // Chrome & Firefox
    pos = input.selectionStart;
  }

  var front = input.value.substr(0, pos);
  var back = input.value.substr(pos, input.value.length);
  input.value = front + Text + back;
  pos = pos + Text.length;

  if (browser == "ie") {
    input.focus();
    var range = document.selection.createRange();
    range.moveStart ("character", -input.value.length);
    range.moveStart ("character", pos);
    range.moveEnd ("character", 0);
    range.select();
  }
  else if (browser == "other") {
    input.selectionStart = pos;
    input.selectionEnd = pos;
    input.focus();
  }

  input.scrollTop = scrollPos;
}

//------------------------------------------------------------
// Scanned Medical Record Link for patient header icon
//------------------------------------------------------------
function ScannedMRLink() {
  if(isWhitespace(SMRURL)) {
    return;
  }
  NewWindow=window.open(SMRURL,"NewWindow",
  "width=1024,height=768,top=10,left=10,location=no,toolbar=yes,scrollbars=yes");
}

//-----------------------------------------------------------------------------
// Returns the (HTML) contents between <pre> and </pre> tags
//-----------------------------------------------------------------------------
function GetHTMLPreTagContents(HTML) {
  if (isWhitespace(HTML))
    return "";

  // Return the contents between <pre> and </pre> tags (including newlines)
  return trim(HTML.replace(/<pre>/i,"").replace(/<\/pre>/i,""));
}
//------------------------------------------------------------
// Validate outpatient clinic type with site code validation
//------------------------------------------------------------
function validateClinicType(Site,ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  if(isWhitespace(Site.value)) {
    alert("Outpatient site is a required field.");
    ReturnCode.value="";
    return;
  }
  for (var i=3; i < validateClinicType.arguments.length; i++) {
    if (typeof(validateClinicType.arguments[i]) == 'function') {
      ReturnFunction=validateClinicType.arguments[i] }
    else {
      validateClinicType.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=49" +
                    "&checksit=" + Site.value.replace(/ /g,"+") +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=3; i < validateClinicType.arguments.length; i++) {
       if (typeof(validateClinicType.arguments[i]) != 'function') {
         j++
         validateClinicType.arguments[i].value=ReturnValue[j] } }
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
//------------------------------------------------------------
// Validate Bed Request Update
//------------------------------------------------------------
function validateBedRequestUpdate(ReturnCode,ReturnCod2,ReturnCod3,ReturnName) {

  if (isWhitespace(ReturnCode.value)) {return;}
  var serverURL   = "../cgi-bin/comweb81.pbl?reportno=19" +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&valdcod2=" + ReturnCod2.value.replace(/ /g,"+") +
                    "&valdcod3=" + ReturnCod3.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValues=returnValue.return_value.split("|")
    if (ReturnValues[0] == "1") {
      if (confirm("Warning: Ward Bed Request exists for this Visit.\n" +
                  "Request Date: " + ReturnValues[1] + 
                  " at " + ReturnValues[2] + "\n" +
                  "Type of Bed Required: " + ReturnValues[3] + "\n" +
                  "Press OK to Complete this Bed Request or Cancel " +
                  "to leave this Bed Request outstanding.")) {
       if (ReturnName!=undefined) {
         ReturnName.value="1";
       }
      }
    }
  }

  return;
}
function sortSelectionList(selElem) {
    var tmpAry = new Array();
    for (var i=0;i<selElem.options.length;i++) {
        tmpAry[i] = new Array();
        tmpAry[i][0] = selElem.options[i].text;
        tmpAry[i][1] = selElem.options[i].value;
        tmpAry[i][2] = selElem.options[i].selected;
    }
    tmpAry.sort();
    while (selElem.options.length > 0) {
        selElem.options[0] = null;
    }
    for (var i=0;i<tmpAry.length;i++) {
        var op = new Option(tmpAry[i][0], tmpAry[i][1]);
        selElem.options[i] = op;
        if(tmpAry[i][2]==true) {
           selElem.selectedIndex=i;
        }
    }
    return;
}
function setVisitTypeList(site,clintype,vistype,defvistype) {
  if(isWhitespace(site.value)) {
    return;
  }
  var serverURL   = "../cgi-bin/comweb80.pbl?reportno=61&valdcode=CV" +
                    "&valdsite=" + site.value.replace(/ /g,"+") +
                    "&valdctyp=" + clintype.value.replace(/ /g,"+")
   var returnValue = RSExecute(serverURL);
   if (returnValue.status!=0) {
     return;
   }
   patcodes = eval("("+returnValue.return_value+")");
   vistype.options.length=1;
   for (var i = 0; i < patcodes.length; i++) {
     if (typeof patcodes[i] != "undefined" && patcodes[i] != null) {
       if (trim(patcodes[i].indicators.substring(6,1)) != "U") {
         defselect=false;
         if(defvistype!=undefined) {
           if(trim(defvistype.value)==trim(patcodes[i].acode.substr(0,3))) {
             defselect=true;
           }
         }
         vistype.options[vistype.options.length]=
         new Option(patcodes[i].tdesc,
              patcodes[i].acode+patcodes[i].indicators,0,defselect);

       }
     }
   }
}
//---------------------------------------------------------------------
// Function : Validate Eclipse Participant/Capability no error messages
//---------------------------------------------------------------------
function validateParticipantNoErrors(healthfund,capability) {
  var serverURL = "../cgi-bin/comweb81.pbl?reportno=20" +
                  "&valdhlfn=" + healthfund +
                  "&valdeccp=" + capability;

  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0) {
    if (returnValue.return_value==1) {
      return true;
    }
  }
  return false;
}
function HealthFundSearchFrameNoFocusRF(ReturnCode,ReturnName,
                                         ReturnTCode,ReturnTName,ReturnFunc){
  window.ReturnHFTNoFocus=""; // Var to set no focus on UpdateParent()
  HealthFundSearchFrame(ReturnCode,ReturnName,ReturnTCode,
                        ReturnTName,ReturnFunc);
}
//---------------------------------------------------------------------
// ED presenting complaint codes that may be Methylamphetamine related
// for wahealth
//---------------------------------------------------------------------
function isMethComplaint(complaint) {
  if (!complaint) return false;

  // Pattern to match complaint codes that may be meth related
  pattern = /AAC|ABQ|ABZ|ACT|AEF|AEP|AEQ|AER/;

  return (complaint.match(pattern) != null);
}
//---------------------------------------------------------------------
// ED diagnosis codes that may be Methylamphetamine related
// for wahealth
//---------------------------------------------------------------------
function isMethDiagnosis(icdCode) {
  if (!icdCode) return false;

  // Pattern to match ICD10 codes that may be meth related
  // F00-F48, F60-F69, R40-R46, T36-T65
  pattern = /F[01236][0-9]|F4[0-8]|R4[0-6]|T3[6-9]|T[45][0-9]|T6[0-5]/;

  return (icdCode.match(pattern) != null);
}
//--------------------------------------------------------------------------
// Remove a CSS class from a NodeList of fields (retaining any other classes)
//--------------------------------------------------------------------------
function removeClass(fields,classStr) {
  var re = new RegExp("(?:^|\\s)" + classStr + "(?!\\S)");
  for (var i=0; i < fields.length; i++) {
   fields[i].className = fields[i].className.replace(re , "" );
  }
}

//---------------------------------------------------------------------
// Add a CSS class to a NodeList of fields (retaining any other classes)
//---------------------------------------------------------------------
function addClass(fields,classStr) {
  for (var i=0; i < fields.length; i++) {
    var classes = " " + fields[i].className + " ";
    if (classes.indexOf(" " + classStr + " ") == -1) {
        fields[i].className += " " + classStr;
    }
  }
}
//------------------------------------------------------------
// Open Window Link to Page (Method = Get)
//------------------------------------------------------------
function ScreenLinkGet(action,reportno,template,width,height) {
  document.PatientLinks.action=action;
  document.PatientLinks.reportno.value=reportno;
  document.PatientLinks.template.value=template;
  var NewWindow=window.open("","ScreenLink",
  "width="+width+",height="+height+",location=no,resizable=yes,scrollbars=yes,titlebar=no");
  NewWindow.focus();
  document.PatientLinks.target="ScreenLink";
  document.PatientLinks.submit();
}
//------------------------------------------------------------
// Check if a visit number has an alternate visit id. ibaalvaf
// Visitnum = Visit number
// VType   = "M" - Check for a MOSIAQ Visit
// PAction (Optional) = "E" - Show error message
// This function will return true if an alternate visit is
// found or false if no alternate visit is found
//------------------------------------------------------------
function checkMOSAIQVisit(Visitnum,VType,PAction) {
 if(isWhitespace(Visitnum.value) || isWhitespace(VType)) {
    return;
 }
 var serverURL = "../cgi-bin/comweb81.pbl?reportno=28" +
                  "&admissno=" + Visitnum.value.replace(/ /g,"+")
 var returnValue = RSExecute(serverURL);
 if(returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");

    if(ReturnValue[0] == " M" && VType == "M" && PAction == "E") {
      alert("This visit is sourced from " + DescriptionMOSAIQ + ". Please " +
           "amend \nbooking details in that system to update webPAS.");
      return true;
    }
    return false;
 } else {
   return false;
 }
}

//---------------------------------------------------------------------
// Function : Keyword search for Value Set Id against pmsvscaf         
//---------------------------------------------------------------------
function ValSetIdCodeSearchFrame(ValSetID, ReturnCode, ReturnName) {
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode;
  window.ReturnName=ReturnName;
  window.ReturnFunction="";
  if (ValSetIdCodeSearchFrame.arguments.length > 2) {
    window.ReturnFunction=ValSetIdCodeSearchFrame.arguments[3]; }
  norecord = 20;

  for (var i=3; i < ValSetIdCodeSearchFrame.arguments.length; i++) {
    norecord = ValSetIdCodeSearchFrame.arguments[i];
  }

  if (ValSetID == 'BRA'){ //Heading - (Billing)Reason For Admission Search
    PopUpFrameDoc.location.href = "../cgi-bin/patweb87.pbl?reportno=49" +
                                "&template=103&ptvsc001=" + ValSetID +
                                "&norecord=" + norecord;
  } else if (ValSetID == 'ECC'){ //Heading - ECDG Sub Cat Search 
    PopUpFrameDoc.location.href = "../cgi-bin/patweb87.pbl?reportno=49" +
                                "&template=104&ptvsc001=" + ValSetID +
                                "&norecord=" + norecord;
  } else if (ValSetID == 'MHC'){ //Heading - Australian Mental Health Care Class
    PopUpFrameDoc.location.href = "../cgi-bin/patweb87.pbl?reportno=49" +
                                "&template=105&ptvsc001=" + ValSetID +
                                "&norecord=" + norecord;
  } else {                //Heading - Value Set Codes Search
    PopUpFrameDoc.location.href = "../cgi-bin/patweb87.pbl?reportno=49" +
                                "&template=102&ptvsc001=" + ValSetID +
                                "&norecord=" + norecord;
  }
  SearchFrameShow();
}

//---------------------------------------------------------------------
// Function : Validate Value Set Code against pmsvscaf
//---------------------------------------------------------------------
function ValSetIdCode(ValSetId,ValCCode,RetCPtrm){
  if (isWhitespace(ValCCode.value)) return;

  var serverURL = "../cgi-bin/comweb81.pbl?reportno=29" +
                  "&valdcode=" + ValSetId +
                  "&valdcod2=" + ValCCode.value.replace(/ /g,"+");

  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0) {

    ReturnValue=returnValue.return_value.split("|");

    if (ValSetId == "ECC") {
      RetCPtrm[0].value = trim(ReturnValue[2]);
      RetCPtrm[1].value = trim(ReturnValue[2]);
    } else {
      RetCPtrm.value = trim(ReturnValue[1]);     // pmsvscaf.PMVCPTRM 
    }
  } else {
    RetCPtrm.value="";
    ValCCode.value="";
  }
}
//------------------------------------------------------------
// Get the value of a common system parameter from comparaf
// Usage = commonSystemParameter(Hospital-Obj,"PARAMATER",ReturnField-Obj)
//------------------------------------------------------------
function commonSystemParameter(Hosp,Parm,ReturnField) {
 if(isWhitespace(Parm)) {
    return;
 }
 var serverURL = "../cgi-bin/comweb81.pbl?reportno=31" +
                  "&valdhosp=" + Hosp.value.replace(/ /g,"+") +
                  "&valdcode=" + Parm.replace(/ /g,"+")

 var returnValue = RSExecute(serverURL);
 if(returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnField.value=trim(ReturnValue[0]);
 } else {
    ReturnField.value="";
 }
}

//-----------------------------------------------------------------------------
// Dynamically load the TinyMCE 5 script source (API Key defined in Custom.js)
// and initialise the editor via the function parameter (passed in).
//-----------------------------------------------------------------------------
function LoadTinyMCEResource(TinyMCEInitFn) {
  if ((TinyMCEInitFn == undefined) || (typeof(TinyMCEInitFn) != 'function')) {
    alert("TinyMCE init function not defined on this page !");
  }

  // API Key ('TINY_MCE_API_KEY') should be defined in Custom.js
  var APIKey = VariableNameExists('TINY_MCE_API_KEY') ? TINY_MCE_API_KEY : "";

  if (!isWhitespace(APIKey)) {
    var src = "https://cdn.tiny.cloud/1/"+APIKey+"/tinymce/5/tinymce.min.js";
    var script = document.createElement("script");

    script.setAttribute("src", src);
    script.setAttribute("type", "text/javascript");

    if (document.addEventListener) {
      script.addEventListener("load", function() {
        TinyMCEInitFn();
      }, false);
    }
    else if (document.attachEvent) {
      script.attachEvent('onload', function() {
        TinyMCEInitFn();
      });
    }
    else {
      script.onload = TinyMCEInitFn;
    }

    document.body.appendChild(script);
  }
  else {
    alert("TinyMCE API Key not defined !");
  }
}

function checkCheckBox(isChecked){

  var checkBoxValue="0";

  if (isChecked==true) {
    checkBoxValue="1";
  }

  return checkBoxValue;
}

//Returns values where Whanau is automatically no.
function getWhanauNo() {
  return ["T08","T10","T42"];
}

//Returns values where Whanau is automatically yes.
function getWhanauYes() {
  return ["T32","T36"];
}

//configures phone number and launches phone application to make call.
function makePhoneCall(phoneNumber) {

  //Strings whitespace from phone number
  phoneNumber = phoneNumber.replace(/\s/g,'');

  //checks if starts with 0, and replaces it with +61
  if ((phoneNumber.length == 10 || phoneNumber.length == 9)
       && phoneNumber.charAt(0) === '0') {
    phoneNumber = TelephoneCountryPrefix+phoneNumber.slice(1);
  }

  if (phoneNumber.length == 8 || phoneNumber.length == 7) {
    phoneNumber = TelephoneCountryPrefix+TelephoneAreaDefault+phoneNumber;
  }

  //Executes telephone client
  location.href = 'tel:'+phoneNumber;

}

//opens email client and prepares email to send
function sendEmail(email) {

  //Executes email client
  location.href = 'mailto:'+email;
}

//Checks to see which icons are displayed
function displayPhoneEmailIcons(ptcnemph) {

  //Gets the email and phone icons
  phimg = document.getElementsByName("phnimg");
  emimg = document.getElementsByName("emlimg");

  //Displays phone icon if value is set
  if (ptcnemph == "1" || ptcnemph == "3") {

    for (var x=0; x<phimg.length;x++) {

      //Checks to see if there is a phone number
      if(!isWhitespace(phimg[x].parentNode.innerText)){
        phimg[x].style.display="inline";
      }
    }
  }

  //Displays email icon if value is set
  if (ptcnemph == "2" || ptcnemph == "3") {

    for (var x=0; x<emimg.length;x++) {

      //Checks to see if there is an email address
      if(!isWhitespace(emimg[x].parentNode.innerText)){
        emimg[x].style.display="inline";
      }
    }
  }
}

//
// This function toggles the 'Foundation' Yes/No dropdown (FieldID) display
// style (disabled/Readonly) based on the checkbox ('Do Not Contact') value.
//
function ToggleDNC(ChkBox, FieldID) {
  if ((ChkBox == undefined) || (FieldID == undefined))
    return;

  var oFld = document.getElementById(FieldID);  // 'Foundation' field
  if (oFld == undefined)
    return;

  if (ChkBox.checked) {
    oFld.value = 1;  // default selection to 'No'
    oFld.disabled = true;
    oFld.className = oFld.className + " Readonly";
  }
  else {
    oFld.disabled = false;
    oFld.className = oFld.className.replace("Readonly","");
  }
}

//Display the cab specific fields 'Do Not Contact' and 'Foundation'
function displayCabFields(dischDate) {

    document.getElementById("doNtCnt").style.display = "";
    document.getElementById("fndField").style.display = "";
    document.getElementById("cabSpace").style.display = "";
    document.getElementById("cabHeaderLine").style.display = "";

    //Checks if discharge date is available, and displays it if it does
    if (dischDate) {
      document.getElementById("lstDischDate").style.display = "";
    }
}

//Display cab specific fields for admission templates
function displayCabAdmissionFields() {
   document.getElementById("cabFinancialFields1").style.display= "";       
   document.getElementById("cabFinancialFields2").style.display= "";       
   document.getElementById("cabVisitFields1").style.display = "";
   document.getElementById("cabVisitFields2").style.display = "";
   document.getElementById("cabVisitFields3").style.display = "";
}

//Function to check if theatre is available at the specific times.
function checkTheatreAvailability(theatreCode,valdDate,ReturnFTime,ReturnTTime) {

  //Extracts value and name of theatre.
  returnCode = theatreCode.value;
  index = theatreCode.selectedIndex;
  theatreName = theatreCode[index].text.replace(/^\s+|\s+$/g, '');

  ReturnFunction = "";

  //Makes sure that all of the required variables aren't blanks
  if (isWhitespace(returnCode) ||
      isWhitespace(valdDate) ||
      isWhitespace(ReturnFTime) ||
      isWhitespace(ReturnTTime)) {

      return true;
  }

  //Sets us the url and passes the variables to the back end
  var serverURL = "../cgi-bin/oprweb02.pbl?reportno=6&remoteno=3"+
                  "&valdcode=" + returnCode.replace(/ /g,"+") +
                  "&valddate=" +valdDate.replace(/ /g,"+") +
                  "&valdftim=" +ReturnFTime.replace(/ /g,"+") +
                  "&valdttim=" +ReturnTTime.replace(/ /g,"+");

  //Activates the remote script
  var returnValue = RSExecute(serverURL);

  //Checks that the script was successful
  if (returnValue.status==0) {

    //splits the return value into an array
    ReturnValues = returnValue.return_value.split("|");

    //Checks that if is unavailable, and displays the result
    if (ReturnValues[0] == "1") {
       if (confirm(theatreName+" is currently closed "+
                  ReturnValues[1] +", "+ReturnValues[2]+ " to "+ReturnValues[3]+
                  ".\nAre you sure you wish to continue?\n\n"+
                  "OK to continue or Cancel to review.")) {
           return true;
       } else {
           return false;
       }
    }
  }

  return true;
}

function ShowWaitScreen() {
  var WaitBox = document.getElementById("WaitBoxDisplay");
  var PageLayer = document.getElementById("PageLayer");

  if (WaitBox == undefined || PageLayer == undefined) return;

  WaitBox.style.display = "inline-block";

  PageLayer.style.display = "";
  PageLayer.style.width = document.body.clientWidth + "px";
  PageLayer.style.height = document.body.clientHeight + "px";
}
function HideWaitScreen() {
  var WaitBox = document.getElementById("WaitBoxDisplay");
  var PageLayer = document.getElementById("PageLayer");

  if (WaitBox == undefined || PageLayer == undefined) return;

  WaitBox.style.display = "none";
  PageLayer.style.display = "none"
}
function showMouseOverText(string,e)
{
  if(!e)
    e = event.srcElement || event.target;

  var popAlert = document.createElement("div");
  var span = document.createElement("span");
  var parent = e.parentNode;

  span.innerText = string;

  popAlert.appendChild(span);
  parent.appendChild(popAlert);

  popAlert.style.position = "absolute";
  popAlert.style.background = "#ffffcc";
  popAlert.style.color = "black";
  popAlert.style.border = "outset 1px grey";
  popAlert.style.padding = "5px 5px 5px 5px";
  popAlert.style.marginLeft ="2px";
  popAlert.style.marginTop = "15px";
  popAlert.style.width = "200px";

  e.onmouseout = function()
  {
    parent.removeChild(popAlert);
  }
}

//-----------------------------------------------------------------------------
// Add a CSS class name to a field
//   - the field can be specified by 'id' value or itself 
//-----------------------------------------------------------------------------
function AddClassName(field, classStr) {
  var el = (document.getElementById(field) != undefined) ? document.getElementById(field) : field;

  if (el == undefined || classStr == undefined) return;

  var re = new RegExp('(\\s|^)' + classStr + '(\\s|$)');

  if (!el.className.match(re)) {
    if (isWhitespace(el.className)) el.className += classStr;
    else el.className += " " + classStr;
  }
}
//--------------------------------------------------------------------------
// Remove a CSS class name from a field
//   - the field can be specified by 'id' value or itself 
//--------------------------------------------------------------------------
function RemoveClassName(field, classStr) {
  var el = (document.getElementById(field) != undefined) ? document.getElementById(field) : field;

  if (el == undefined || classStr == undefined) return;

  var re = new RegExp('(\\s|^)' + classStr + '(\\s|$)');

  el.className = el.className.replace(re,"");
}
//--------------------------------------------------------------------------
// Remove the options from selection list where indicator 26 value is basisCR
//--------------------------------------------------------------------------
function checkBasicCoverRate(claimCD){
   filterCatCodeList(claimCD,"26","X","5");
}
//--------------------------------------------------------------------------
// Removes the postcode from the address field and returns the address without
// the post code, and the post code separately
//--------------------------------------------------------------------------
function removePostCode(addressField) {

  pcindex = addressField.search(/[0-9]/);
  postcode = addressField.substr(pcindex,4);
  address = addressField.substr(0,pcindex)+addressField.substr(pcindex+4);

  return [postcode,address]
}

//--------------------------------------------------------------------------
//Checks to see if the care type is mental health, and if so, displays
//Mental Health fields.
//--------------------------------------------------------------------------
function DisplayCatLS() {

  MHCareType = trim(UpdateForm.ptmis012.value.substr(162,10));

  if (MHCareType == "11") {
    document.getElementById("catLStitle").innerHTML =
        document.getElementById("catLStitleSPAN").innerHTML;
    document.getElementById("catLSfield").innerHTML =
        document.getElementById("catLSfieldSPAN").innerHTML;
  } else {
    document.getElementById("catLStitle").innerHTML = "";
    document.getElementById("catLSfield").innerHTML = ""; 
  }
}

//---------------------------------------------------------------------------
// Limits number of characters in text box
// Takes the object - TextArea
// The Maximum Number of characters - maxChars
// The Maximum Number to be displaysed - charMax
// The difference exists due to where the field is being checked
//---------------------------------------------------------------------------
function LimitCharacters(TextArea,maxChars,charMax) {

  //Splits the contents of the text field
  var thisValue = TextArea.value.split(/\r?\n/);
  var totalChars = 0;
  var result = true;
  var display = "";

  count = "";
  count1 = "";

  //Strips trailing Spaces and counts the number of characters
  for (var i=0; i < thisValue.length; i++) {
     charNum = trim(thisValue[i]).replace(/\r?\n/g," ").length;
    
     if (charNum !=0) { 
       if (i<thisValue.length-1) {
         totalChars += charNum+1;
       } else {
         totalChars += charNum+1;
       }
     }
  }

  var evt = window.event;

  if ((evt.ctrlKey)) {  // ignore control key
      return true;
  }

  if (evt.keyCode != undefined) {
    if (evt.keyCode == 8) {  // ignore backspace
      return true;
    }
  }

  var bIsInputChar = false;

  if ((evt.keyCode > 46 && evt.keyCode < 91) ||
      (evt.keyCode >= 96 && evt.keyCode <= 111) ||
      (evt.keyCode >= 186)) {
    bIsInputChar = true;
  }

  if (!bIsInputChar) return true;  // not a valid input character; bail

  //Checks if length exceeds max characters
  if (totalChars > maxChars) {
    alert("Maximum "+charMax+" characters reached for "+TextArea.title+"!"+
          "\nPlease remove the extra characters to continue");
    result = false;
  }

//

  //IE Compatibility
  if (window.event) {
    window.event.returnValue = result;
  }

  return result;
}

//---------------------------------------------------------------------------
//  Default Date of Birth 
//---------------------------------------------------------------------------
function checkDefDOB(dispDDOB,DDOB) {

  if (isWhitespace(DDOB.value)){
    alert("Default DOB cannot be blank");
  return;
  }

  if (DDOB.value == '00000000'){
    alert("Default DOB cannot be zero")
  return;
  }

  dispDDOB.value =
           DDOB.value.substr(6,2) +
           DDOB.value.substr(4,2) +
           DDOB.value.substr(0,4);

}

//---------------------------------------------------------------------------
//  Adjust Strings to certain length
//
//  Takes a string and an integer being the length of the line
//  Readjusts the string so that the length of the string does not exeed
//  the integer, and the new lines cuts in at the previous space
//  Function returns a formatted string that retains the format of the original
//  string
//
//---------------------------------------------------------------------------
function reconfigureLines(str, maxLength) {

  //Splits the string at newlines, and new array to hold strings
  var lines = str.split('\n');
  var result = [];

  //cycles through the lines
  for (var i in lines) {
    var line = lines[i];

    while (line.length > maxLength) {

      //If the line is great than the max length looks for the previous space
      var cutOffIndex = maxLength;

      while (line[cutOffIndex] !== ' ' && cutOffIndex >= 0) {
        cutOffIndex--;
      }

      if (cutOffIndex === -1) {
        cutOffIndex = maxLength; // if no space found, cut at maxLength
      }

      result.push(line.slice(0, cutOffIndex));
      line = line.slice(cutOffIndex + 1); // start from the next character
    }

    result.push(line); // add the remaining part of the line
  }

  return result.join('\n');
}

//---------------------------------------------------------------------------
//  Strips leading and trailing Whitespaces from lines
//
//  Takes a string that consists of a series of lines. Splits the lines
//  and strips the whitespaces from the lines. Will then add a space at the
//  end of each line, except the last, or lines with just a newline
//
//---------------------------------------------------------------------------
function stripWhitespaces(str) {

  // Split the string into lines & strip the white spaces
  var lines = str.split('\n');
  var formattedLines = lines.map(function (line) { return trim(line); });

  // Add a space to the end of each line except the last,
  // or if the line is empty (consists only of whitespace)
  var lastIndex = formattedLines.length - 1;
  var result = formattedLines.map(function (line, index) {
    if (index === lastIndex || /^\s*$/.test(line)) {
      return line;
    } else {
      return line + ' ';
    }
  });

  // Join the lines back into a single string
  return result.join('\n');
}

//---------------------------------------------------------------------------
//   NDIS Participant Identifier validation
//   - Numeric
//   - 9 digits
//   - first two = 43 except when VIC and not known then must be 999999999
//
//---------------------------------------------------------------------------
function checkNdisNumber(NDISNum,NDISState) {
  VIC="3";
  NDISLength=9;
  NDISFirst2="43";
  NDISVICNotKnown="999999999";
  if (isWhitespace(NDISNum.value)){
    return false;}

  if (NDISNum.value.length != NDISLength){
    return false;}

  notnumeric=NDISNum.value.search('[^0-9]');
  if (notnumeric >= 0) {
     return false;    // non numeric value
  }

  tvalue = NDISNum.value;
  first2 = tvalue.substr(0,2);
  NState = NDISState.substr(0,1);

  if (first2 == NDISFirst2) {
    return true;}
    
  if ((NDISNum.value == NDISVICNotKnown ) && (NState == "3")){
    return true;}
  else {
    return false;}
}

//---------------------------------------------------------------------------
//   Attach Script
//   - Takes string which contains the location of a .js file
//   - Attaches it to the header
//   - attachScript("../js/eAdmission.js")
//---------------------------------------------------------------------------

function attachScript(src){
  var script = document.createElement("script");
               script.setAttribute("src", src);
               script.setAttribute("type", "text/javascript");
  document.getElementsByTagName("head")[0].appendChild(script);
}

//---------------------------------------------------------------------------
// GetInsName   
// - Takes Insurance code and use remote script to return insurnce description  
//---------------------------------------------------------------------------
function GetInsName(ReturnCode,ReturnName)
{
  if (isWhitespace(ReturnCode.value)){
    ReturnName.value="";
    return;
  }

  var serverURL = "../cgi-bin/patweb80.pbl?reportno=36" +
        "&valdcode=" + ReturnCode.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=ReturnValue[0];
  }
}
