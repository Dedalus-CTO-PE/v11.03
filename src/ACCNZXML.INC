.
.         Variables and Tags for XML for ACC NZ Extract (PATWEB89)       
.
EXTFILE1  FILE      ASCII,FIXED=256              * XML Extract file
.
ACCCLMNO  DIM       20
CLMDONE   FORM      1
.DIM1A     DIM       1
DIM1B     DIM       1
DIM1C     DIM       1
DIM1D     DIM       1
DIM2A     DIM       2
DIM4A     DIM       4
DIM4B     DIM       4
DIM4C     DIM       4
DIM10A    DIM       10
DIM10B    DIM       10
DIM10C    DIM       10
DIM20A    DIM       20
DIM20B    DIM       20
DIM20C    DIM       20
DIM25A    DIM       25
DIM25B    DIM       25
..DIM30A    DIM       30
DIM30B    DIM       30
DIM35A    DIM       35
DIM36A    DIM       36
DIM50     DIM       50

EXTFNAME  DIM       80
PATHNAME  DIM       60
TXT250A   DIM       255
TXT250B   DIM       250
.
ACC45     INIT      "ACC45"
CATDT     INIT      "DT"
CATHA     INIT      "HA"
CATP      INIT      "P"
CATIB     INIT      "IB"
CATIF     INIT      "IF"
CATIH     INIT      "IH"
CATIM     INIT      "IM"
CATIP     INIT      "IP"
CATIQ     INIT      "IQ"
CATIX     INIT      "IX"
CATIW     INIT      "IW"
CATUI     INIT      "UI"
.
RR        INIT      "#""
ST        INIT      "<"
STS       INIT      "</"
EN        INIT      ">"
SLSH      INIT      "/"
XML       INIT      "xml"
.
HED0001   INIT      "<?xml version=#"1.0#" encoding=#"UTF-8#" ?>"
HED0002   INIT      "<!DOCTYPE EClaim_Message SYSTEM "
HED0003   INIT      "#"http://emgweb.acc.org.nz/accemg/acc45-0.8.dtd#">"
.HED0003   INIT      "#"acc45-0.8.dtd#">"
HED0004   INIT      "<EClaim_Message>"
.
DOC0000   INIT      "Message_Info"
DOC0001   INIT      "Document_Creation_Date"
DOC0002   INIT      "Document_Sender"
DOC0003   INIT      "Document_Source_App"
DOC0004   INIT      "Document_Source_App_Version"
DOC0005   INIT      "Document_Receiver" 
DOC0006   INIT      "Document_Identifier"
DOC0007   INIT      "Document_Version"  
.
CLM0000   INIT      "Claim"
CLM1001   INIT      "Claim_Form_Number"
CLM1002   INIT      "PMS_Claim_Identifier"
CLM1003   INIT      "Claim_Type_Code"
.
PRV1000   INIT      "Claim_Treatment_Provider"
PRV2001   INIT      "ACC_Provider_Number"
PRV2002   INIT      "Professional_Id"
PRV2003   INIT      "Facility"
PRV2004   INIT      "Agency"
PRV2005   INIT      "Provider_Title_Code"
PRV2006   INIT      "Provider_Surname"
PRV2007   INIT      "Provider_First_Name"
PRV2008   INIT      "Provider_Middle_Names_Initials"
PRV2009   INIT      "Provider_Address_Type_Code"
PRV2010   INIT      "Provider_Address_Line1"
PRV2011   INIT      "Provider_Address_Line2"
PRV2012   INIT      "Provider_Address_Suburb"
PRV2013   INIT      "Provider_Address_Town_City"
PRV2014   INIT      "Provider_Address_Post_Code"
PRV2015   INIT      "Provider_Address_Country"
PRV2016   INIT      "Provider_Type_Code"
PRV2017   INIT      "Provider_Decl_Date"
.
PAT1000   INIT      "Claim_Patient"
PAT2000   INIT      "ACC_Patient_Identifier"
PAT2001   INIT      "NHI"
PAT2002   INIT      "Title_Code"
PAT2003   INIT      "Surname"
PAT2004   INIT      "First_Name"
PAT2005   INIT      "Middle_Names_Initials"
PAT2006   INIT      "Date_Of_Birth"
PAT2007   INIT      "Gender_Code"
PAT2008   INIT      "Occupation_Code"
PAT2009   INIT      "Work_Phone"
PAT2010   INIT      "Home_Phone"
PAT2011   INIT      "Ethnicity_Code"
PAT2012   INIT      "Ethnicity_Other"
PAT2013   INIT      "Auth_Rep_Title_Code"
PAT2014   INIT      "Auth_Rep_Surname"
PAT2015   INIT      "Auth_Rep_First_Name"
PAT2016   INIT      "Auth_Rep_Middle_Names_Initials"
PAT2017   INIT      "Auth_Rep_Relationship"
PAT2018   INIT      "Patient_Decl_Date"
.
ADD2000   INIT      "Claim_Patient_Address"      * up to 2
ADD3001   INIT      "Address_Type_Code"
ADD3002   INIT      "Address_Line1"
ADD3003   INIT      "Address_Line2"
ADD3004   INIT      "Address_Suburb"
ADD3005   INIT      "Address_Town_City"
ADD3006   INIT      "Address_Post_Code"
ADD3007   INIT      "Address_Country"
.
EMP1000   INIT      "Employment"
EMP2001   INIT      "Paid_Employment_Ind"
EMP2002   INIT      "Employment_Status_Code"
EMP2003   INIT      "Employment_Status_Other"
EMP2004   INIT      "Employer_Name"
EMP2005   INIT      "Employer_Address_Type_Code"
EMP2006   INIT      "Employer_Address_Line1"
EMP2007   INIT      "Employer_Address_Line2"
EMP2008   INIT      "Employer_Address_Suburb"
EMP2009   INIT      "Employer_Address_Town_City"
EMP2010   INIT      "Employer_Address_Post_Code"
EMP2011   INIT      "Employer_Address_Country"
EMP2012   INIT      "Type_Of_Work_Code"
.
INJ1000   INIT      "Injury"
INJ2001   INIT      "Date_Of_Accident"
INJ2002   INIT      "Time_Of_Accident"
INJ2003   INIT      "Accident_Scene_Code"
INJ2004   INIT      "Accident_Location_Code"
INJ2005   INIT      "Accident_In_NZ_Ind"
INJ2006   INIT      "Cause_Of_Injury"
INJ2007   INIT      "Involves_Vehicle_Ind"
INJ2008   INIT      "Work_Accident_Ind"
INJ2009   INIT      "Work_Dept_Area"
INJ2010   INIT      "Sporting_Injury_Ind"
INJ2011   INIT      "Sport_Name_Code"
INJ2012   INIT      "Recurring_Injury_Ind"
.
IDI1000   INIT      "Injury_Diagnosis"
IDI2001   INIT      "Injury_Comments"
IDI2002   INIT      "Misadventure_Ind"
IDI2003   INIT      "Previous_Claim_Ind"
IDI2004   INIT      "Rehabilitation_Code"
IDI2005   INIT      "Care_Ind"
IDI2006   INIT      "Assistance_Required_Ind"
IDI2007   INIT      "Gradual_Process_Injury"
IDI2008   INIT      "Admitted_To_Hospital"
.
DIA2000   INIT      "Diagnosis_Info"             * up to 20
DIA3001   INIT      "Diagnosis_Code_System"
DIA3002   INIT      "Diagnosis_Code"
DIA3003   INIT      "Diagnosis_Side_Code"
DIA3004   INIT      "Diagnosis_Severity_Code"
DIA3005   INIT      "Diagnosis_Description"
.
WRK1000   INIT      "Work_Capacity"
WRK2001   INIT      "Continue_Normal_Work_Ind"
WRK2002   INIT      "Alternative_Work_Ind"
WRK2003   INIT      "Type_Of_Alt_Work_Code"
WRK2004   INIT      "Hours_Per_Day_Alt_Work"
WRK2005   INIT      "Alt_Work_Start_Date"
WRK2006   INIT      "Alt_Work_Restrictions"
WRK2007   INIT      "Full_Incapacity_Period"
WRK2008   INIT      "Full_Incapacity_Period_Type_Code"
WRK2009   INIT      "Full_Incapacity_Start_Date"
WRK2010   INIT      "Return_To_Normal_Work_Date"
.
REF1000   INIT      "Referral"                   * up to 10
REF2001   INIT      "Referral_Provider_Type_Code"
REF2002   INIT      "Referral_Effective_Date"
REF2003   INIT      "Referral_Expiry_Date"
REF2004   INIT      "Referral_Reason"
REF2005   INIT      "Suggested_Treatment"
