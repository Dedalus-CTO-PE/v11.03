.
.         Variables for Claim API (JSON file); ACC NZ Extract (PATWEB89)
.
.------------------------------------------------------------------------------
.                                                                              
.  Module        :  ACCEXTRA
.
.  Modifications :
.       V11.01.02  12/11/2021  Don Nguyen     TSK 0875549
.                  Added RNGTODTE, JPHYSRES and JRESTRNS for Work Capacity
.       V11.01.01  22/10/2021  Don Nguyen     TSK 0875549
.                  Added INPAIDEM for 'in paid employment' flag
.       V11.01.00  17/08/2021  Don Nguyen     TSK 0875549
.                  Created new
.------------------------------------------------------------------------------
JSONFIL1  FILE      ASCII,FIXED=4000              * JSON file for API submission
.
ISFIRST   FORM      1        * Flag to indicate whether is first item 
INPAIDEM  FORM      1        * Flag to indicate whether in paid employment
RTWDATE   DATE      8        * Return to Normal Work Date
RNGTODTE  DATE      8        * Range To Date
CMDLINE1  DIM       300
.
CATdh     INIT      "dh"
CATP6     INIT      "P6"
CATG      INIT      "G "
.
.
. JSON fields
JSON      INIT      "json"
JSBRKSTA  INIT      "{"
JSBRKEND  INIT      "}"
JSARRSTA  INIT      "["
JSARREND  INIT      "]"
.
. Software headers
JSOFTNAM  INIT      "#"pmsSoftwareName#""
JSOFTVER  INIT      "#"pmsSoftwareVersion#""
.
. Claim Number
JSCLAIMN  INIT      "#"claimNumber#""
.
. Vendor
JSVENDOR  INIT      "#"vendor#""
JSPRACNM  INIT      "#"practiceName#""
JSHPIORG  INIT      "#"hpiOrganisationNumber#""
JSHPIFAC  INIT      "#"hpiFacilityNumber#""
.
. Provider
JSPROVDR  INIT      "#"provider#""
JSPROVID  INIT      "#"providerId#""
JSPROVTC  INIT      "#"providerTypeCode#""
JSPROVDC  INIT      "#"providerDeclaration#""
.
. Patient
JPATIENT  INIT      "#"patient#""
.
. Common Fields
JSNHI     INIT      "#"nhi#""
JSTYPE    INIT      "#"type#""
JDETAILS  INIT      "#"details#""
JSTRUE    INIT      "#"True#""
JSFALSE   INIT      "#"False#""
JSFRDATE  INIT      "#"fromDate#""
JSTODATE  INIT      "#"toDate#""
.
. Personal
JFRSTNAM  INIT      "#"firstName#""
JMIDLNAM  INIT      "#"middleName#""
JSURNAME  INIT      "#"surname#""
JSDOB     INIT      "#"dateOfBirth#""
JSGENDER  INIT      "#"gender#""
JETHNICD  INIT      "#"ethnicityCode#""
JETHNIOT  INIT      "#"otherEthnicity#""
.
. Address
JADDRESS  INIT      "#"address#""
JADDLNE1  INIT      "#"line1#""
JADDLNE2  INIT      "#"line2#""
JADDSUBB  INIT      "#"suburb#""
JADDCITY  INIT      "#"city#""
JADDPCOD  INIT      "#"postCode#""
JADDCTRY  INIT      "#"country#""
.
. Contact
JCONTACT  INIT      "#"contact#""
JEMAILAD  INIT      "#"emailAddress#""
JMOBPHON  INIT      "#"mobilePhone#""
JHOMPHON  INIT      "#"homePhone#""
JWRKPHON  INIT      "#"workPhone#""
.
. Occupation / Employment
JOCCPCOD  INIT      "#"occupationCode#""
JEMPLMNT  INIT      "#"employment#""
JEMPLOYR  INIT      "#"employer#""
JEMPLNAM  INIT      "#"employerName#""
JEMPPAID  INIT      "#"inPaidEmployment#""
JEMPSTCD  INIT      "#"employmentStatusCode#""
JEMPOTHR  INIT      "#"otherEmployment#""
JWRKTYPC  INIT      "#"workTypeCode#""
JWRKCAPC  INIT      "#"workCapacity#""
JCANRESU  INIT      "#"canResumeNormalWork#""
JRTWDATE  INIT      "#"returnToNormalWorkDate#""
.
. Injury
JSINJURY  INIT      "#"injury#""
JINJCMNT  INIT      "#"injuryComments#""
JACCDATE  INIT      "#"accidentDate#""
JACCSCCD  INIT      "#"accidentSceneCode#""
JACCLOCD  INIT      "#"accidentLocationCode#""
JACCCAUS  INIT      "#"causeOfAccident#""
JINVLVEH  INIT      "#"involvesVehicle#""
JMEDTRMT  INIT      "#"medicalTreatmentInjury#""
JWRKINJR  INIT      "#"workInjury#""
JSPRTINJ  INIT      "#"sportingInjury#""
JSPRTNAM  INIT      "#"sportNameCode#""
JGRADINJ  INIT      "#"gradualProcessInjury#""
JADMTHOS  INIT      "#"admittedToHospital#""
JASSTREQ  INIT      "#"assistanceRequired#""
JCONPROV  INIT      "#"accContactProvider#""
.
. Diagnosis
JDIAGNOS  INIT      "#"diagnosis#""
JDIAGCOD  INIT      "#"diagnosisCode#""
JDIAGTYP  INIT      "#"diagnosisCodeType#""
JDIAGDES  INIT      "#"diagnosisDescription#""
JDIAGSID  INIT      "#"diagnosisSide#""
JSIDELEF  INIT      "#"left#""
JSIDERIG  INIT      "#"right#""
JNOTAPPL  INIT      "#"notApplicable#""
.
. Work Capacity
JINCAPCI  INIT      "#"incapacity#""
JINCAPTY  INIT      "#"incapacityType#""
JUNFITFW  INIT      "#"Fullyunfitforwork#""
JFITSELW  INIT      "#"Fitforselectedwork#""
JINCAPDR  INIT      "#"incapacityDateRange#""
JSELALTW  INIT      "#"selectedAlternativeWork#""
JALTWKTC  INIT      "#"alternativeWorkTypeCode#""
JREHOURS  INIT      "#"restrictedHoursPerDay#""
JRECOMNT  INIT      "#"restrictionComment#""
JPHYSRES  INIT      "#"physicalRestrictions#""
JRESTRTN  INIT      "#"restriction#""
.
. Referrals
JREFERAL  INIT      "#"referrals#""
JREFREAS  INIT      "#"referralReason#""
.
. Declaration
JDECLARN  INIT      "#"declaration#""
.
