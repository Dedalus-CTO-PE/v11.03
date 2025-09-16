.*****************************************************************************
.*                                                                           *
.*   Include         :   SAVPMIFD.INC                                        *
.*                                                                           *
.*   Function        :   Defines save variables for all PMI Details          *
.*                       Used in SVRSPMI.PBL Include                         *
.*                                                                           *
.*   Author          :   Whirlpool                                           *
.*                                                                           *
.*   Date            :   8/11/93                                             *
.*                                                                           *
.*   Modifications   :                                                       *
.*        V10.03.02 23/02/2012  Ebon Clements  CAR 260407                    *
.*                  Added demographics confirmed fields                      *
.*        V10.03.01 06/02/2012  Ebon Clements  CAR 257079                    *
.*                  Added patient surname PTMASNAM save var SVRSSNM2         *
.*        V10.00.01 09/12/2010  Jill Parkinson CAR 233088                    *
.*                  Increased size of SVRSFDMM                               *
.*        V9.03.01  15/07/2003  CAR 37193   Mike Laming                      *
.*                  Port V5.10 changes for PMS05 -                           *
.*                  Add SVRSRESI Results Indicator (for NHI Merge)           *
.*              18/07/2000    Jill Habasque SRF 646996                       *
.*                            Changed SVRSCDTE,SVRSDATE,SVRSLDDT,SVRSPNXD,   *
.*                            SVRSFNDC to be correct lengths                 *
.*              30/05/2000    Tonii                                          *
.*                            Added new save variable SVRSMREF for Medicare  *
.*                            Reference Number                               *
.*                                                                           *
.*****************************************************************************

. NAME     TYPE  LENGTH   DESCRIPTION
. ----     ----  ------   -----------
SVRSURNO  DIM      8     PATIENT U.R NO.
SVRSPORT  DIM      2     PORT CURRENTLY UPDATING U/R
SVRSCDTE  DIM      8     DATE OF LAST CHANGE (CCYYMMDD)
SVRSTITL  DIM      4     PATIENT TITLE
SVRSHOSP  FORM     1     HOSPITAL LAST 12 MONTHS
.                         1-YES,2-NO
SVRSLDAY  FORM     3     NO DAYS LAST IN HOSPITAL
SVRSBDBT  FORM     1     BAD DEBTOR INDICATOR 0-NO 1-YES
SVRSSNAM  DIM     20     PATIENT SURNAME
SVRSGNAM  DIM     25     PATIENTS GIVEN NAMES
SVRSPSNM  DIM     19     PATIENTS PREVIOUS SURNAME
SVRSPAD1  DIM     35     PATIENT ADDRESS LINE 1
SVRSPAD2  DIM     35     PATIENT ADDRESS LINE 2
SVRSPAD3  DIM     35     PATIENT ADDRESS LINE 3
SVRSPAD4  DIM     35     PATIENT ADDRESS LINE 4
SVRSPOST  DIM      8     PATIENT POSTCODE
SVRSTELP  DIM     20     TELEPHONE PRIVATE
SVRSTELB  DIM     20     TELEPHONE BUSINESS 
SVRSPSEX  DIM      1     PATIENTS SEX
SVRSMSTA  DIM      3     PATIENTS MARTIAL STATUS
SVRSDATE  DIM      8     PATIENTS BIRTH DATE
SVRSYEAR  FORM     4     FIRST TWO DIGITS OF DTE OF BIRTH
.                         Eg. 19 for 1963
SVRSPAGE  FORM     3     PATIENTS AGE
SVRSCONT  DIM      3     PATIENTS COUNTRY OF BIRTH
SVRSPREG  DIM      3     PATIENTS RELIGION
SVRSTYPE  DIM      3     PATIENTS TYPE
SVRSOCCU  DIM     14     PATIENTS OCCUPATION
SVRSLDDT  DIM      8     LAST PATIENT DISCHARGE DATE
SVRSMEDI  DIM     10     MEDICARE NUMBER
SVRSPENO  DIM     15     PENSION NUMBER
SVRSPNXD  DIM      6     PENSION NO EXPIRY DATE
SVRSRPAT  DIM     10     REPATRIATION NUMBER
SVRSSMOK  FORM      1     PATIENT SMOKER
.                         1 = YES
.                         2 = NO
SVRSSTAT  FORM     1     PATIENT STATUS
.                         0 - VALID U/R  (IN MASTER FILE)
.                         1 - CANCELLED U/R
.                         2 - ASSOCIATED U/R
.                         NOTE :- ASSOCIATED U/R IS NOW
.                                 PLACED IN THE PADMNO
.                         3 - NOT YET ALLOCATED
.                         ****** (IN PRAM FILE) ********
SVRSmicr  DIM     20     MICROFILM ADDRESS
.                         1 -  6  U.R. NO.
.                         7 - 10  ROLL NO.
.                         11 - 14  POSITION NO.
.                         15 - 16  YEAR
SVRSCEAS  FORM     1     DESEASED INDICATOR
.                         0 = NO
.                         1 = YES
SVRSCASE  FORM     1     CASE NOTES INDICATOR
SVRSAUTO  FORM     1     AUTOPSY INDICATOR
.                         0 = NO
.                         1 = YES

SVRSHIH1  DIM      3     HIGHLIGHT CODE 1
SVRSHIH2  DIM      3     HIGHLIGHT CODE 2
SVRSHIG3  DIM      3     HIGHLIGHT CODE 3
.
SVRSLDOC  DIM     30     LOCAL DOCTOR
.
SVRSFNDH  DIM      6     HEALTH FUND TABLE
SVRSFDTB  DIM      8     HEALTH FUND TABLE
SVRSFDMM  DIM     19     FUND MEMBERSHIP NUMBER
.
SVRSUSR1  DIM      3     USER DEFINED FIELD 1 (CAT P1)
SVRSUSR2  DIM      3     USER DEFINED FIELD 2 (CAT P2)
SVRSUSR3  DIM      3     USER DEFINED FIELD 3 (CAT P3)
SVRSUSR4  DIM      3     USER DEFINED FIELD 4 (CAT P4)
SVRSUSR5  DIM      3     USER DEFINED FIELD 5 (CAT P5)
SVRSUSR6  DIM      3     USER DEFINED FIELD 6 (CAT P6)
SVRSUYN1  FORM     1     USER DEFINED Y/N FIELD 1
.                         (1=Y,0=N)
SVRSUYN2  FORM     1     USER DEFINED Y/N FIELD 2
.                         (1=Y,0=N)
SVRSUYN3  FORM     1     USER DEFINED Y/N FIELD 3
.                         (1=Y,0=N)
SVRSYRES  FORM     2     NUMBER OF YEARS RESIDENT
.
.              NEXT OF KIN DATA
.
SVRSNKNM  DIM     20     NEXT OF KIN 1 NAME
SVRSNKA1  DIM     35     N.O.K 1 ADDRESS LINE 1
SVRSNKA2  DIM     35     N.O.K 1 ADDRESS LINE 2
SVRSNKA3  DIM     35     N.O.K 1 ADDRESS LINE 3
SVRSNKA4  DIM     35     N.O.K 1 ADDRESS LINE 4
SVRSNKPC  DIM      8     N.O.K 1 POSTCODE
SVRSNKTP  DIM     20     N.O.K 1 PRIVATE TELEPHONE 
SVRSNKTB  DIM     20     N.O.K 1 BUSINESS TELEPHONE 
SVRSNKRL  DIM     10     N.O.K 1 RELATIONSHIP
.
SVRSLINP  FORM     8     LAST INPATIENT  VISIT NUMBER
SVRSLOUT  FORM     8     LAST OUTPATIENT VISIT NUMBER
SVRSXRAY  FORM     3     NUMBER OF PREVIOUS X-RAYS
.
.          Additional Health Fund details
.
SVRSFDYY  DIM      2     YRS OF FUND MEMBERSHIP (JR,DE)
SVRSFNDC  DIM      6     FUND COVER CHANGE (CCYYMM)
.
SVRSDDTE  DIM      8     DATE OF DEATH (CCYYMMDD)
SVRSNOTE  DIM     20     CASE NOTES INDICATORS
SVRSDIET  DIM      3     DEFAULT DIET CODE
SVRSIHOS  DIM      2     HOSPITAL U/R INITIATED FROM
SVRSHKAU  DIM     10     HONG KONG UNIQUE ADDRESS ID
.

. *                 NEW PATIENT MASTER EXTENSION FILE                         *
.
SVRSRDAT  DIM       8    Registration Date
SVRSMEAL  DIM       30   Special Meal Requirements
SVRSLGA   DIM       4    LGA Code
SVRSLS    DIM       3    Current Legal status (Cat LS)
SVRSLSDT  DIM       8    Date of legal status (ccyymmdd)
SVRSFHMD  DIM       1    Familial history of mental disorder ?
.                          1 = Yes ; 2 = No
SVRSMHU1  DIM       3    M.H. User defined field 1 (Cat V6)
SVRSMHU2  DIM       3    M.H. User defined field 2 (Cat V7)
SVRSMHU3  DIM       3    M.H. User defined field 3 (Cat V8)
SVRSECNM  DIM       20   Emergency contact name
SVRSECA1  DIM       35   Emergency contact address line 1
SVRSECA2  DIM       35   Emergency contact address line 2
SVRSECA3  DIM       35   Emergency contact address line 3
SVRSECA4  DIM       35   Emergency contact address line 4
SVRSECPC  DIM       8    Emergency contact postcode
SVRSECPP  DIM       20   Emergency contact private phone
SVRSECBP  DIM       20   Emergency contact business phone
SVRSECRE  DIM       10   Emergency contact relationship
SVRSNRNM  DIM       20   Nearest relative name
SVRSNRA1  DIM       35   Nearest relative address line 1
SVRSNRA2  DIM       35   Nearest relative address line 2
SVRSNRA3  DIM       35   Nearest relative address line 3
SVRSNRA4  DIM       35   Nearest relative address line 4
SVRSNRPC  DIM       8    Nearest relative postcode
SVRSNRPP  DIM       20   Nearest relative private phone
SVRSNRBP  DIM       20   Nearest relative business phone
SVRSNRRE  DIM       10   Nearest relative relationship
SVRS3BEX  DIM       8    3B certificate expiry date
SVRSCARD  DIM       20   Card number (NZ billing)
SVRSCEXP  DIM       8    Card expiry date (NZ billing)
SVRSCXMP  DIM       3    Card exemption type (Cat XM)
SVRSFMLY  DIM       12   Family id
SVRSCHNM  DIM       20   Chinese Name
SVRSDOFR  DIM       3    District of Residence (Cat DR)
SVRSREGP  DIM       8    Registered GP
SVRSGPPC  DIM       6    GP Practice Code
SVRSSPID  DIM       20   Supplementary Id
SVRSMREF  DIM       2    Medicare Reference Number
SVRSRESI  DIM       1    Results Indicator (1 = Yes)                    I-90301
SVRSSNM2  DIM      40    Patient Surname
SVRSDCDT  DIM      8     Demographics Conf Date CCYYMMDD
SVRSDCUD  DIM      8     Demog. Conf Upd Date (CCYYMMDD)
SVRSDCUT  DIM      8     Demog. Conf Upd Time (HH:MM:SS)
SVRSDCUU  DIM      10    Demog. Conf Upd User (websecaf)
SVRSCELL  DIM      20    Patient's Mobile Phone No.
.
.
