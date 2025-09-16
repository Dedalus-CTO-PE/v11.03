.*******************************************************************************
.* System        : OPERATING ROOMS           (Release 5.01)
.* Include Name  : OPR001FD
.* Function      : The following is the list of data variables required by the
.*                 new theatre system based on small functions.
.* Modifications : 
.*       V11.03.01  28/02/2023 Ebon Clements  TSK 0909363
.*                  Added SESNHOSP - Current session hospital
.*       V10.07.01  04/01/2016 Ebon Clements  TSK 0294154
.*                  Added SVOSMS        
.*        V5.09.B02 01/02/2001  Greg Horvat
.*                  Removed Z variables
.*       V5.09.00   05/01/2001  Pat Dirito
.*                  Added variables SVTELEB & SVCELL
.*       V5.08.01   02/10/2000  J Habasque   509 Mods
.*                  Changed STRTDATE to be STRDATE
.*       V5.07.01   09/01/1999  J.Tan  635141
.*                  Added DATESTRT and DATESTOP
.*                           V5.01.01  03/04/92 i chung         SRF 113796
.*                           Increased EXPDURA (Duration calculation variable)
.*                           from FORM 4 to 5 to cater for negative results
.*       V5.01.02  12/06/92 Graeme Williams        SRF 114865
.*                 Changes for 9 character misc items
.*       V5.01.03  07/10/92 Graeme Williams        SRF 117603
.*                 Added new variables for allowing multipliers in OPINPMCH
.*       V5.01.04  11/01/93 Whirlpool                           
.*                 Added new variable SVADD4 for DUDLEY                    
.*                 Changed SVADD1,SVADD2,SVSUBRB,SVPOST,SVTELEP for dudley 
.*       V5.01.05  30/12/1993  Glenn Berry    
.*                 Removed some vars now defined in IBACOMM.INC
.*       V5.01.06  09/09/1994  Max White   Hawkes Bay Mods
.*                 Amended OPBOKREQ temporary files (BOKREQA1 & BOKREQB1)
.*                 New Doctor Code field added to key of each file to allow
.*                 Preferences & Requisitions to be recorded for Surgeon &  
.*                 Anaesthetist in each Team. 
.*       V5.03.B1  18/05/1995  Greg Horvat       SRF 134879
.*                 Changed the name for the misc. charges audit file to be in
.*                 lowercase instead of uppercase
.*
.*******************************************************************************
.
AMOUNT    FORM      5.2      * amount for OPINPMCH
AUDIFLAG  FORM      1        * Signals which audit type to write.
BATCHTOT  FORM      6.2      * batch total for OPINPMCH
.
CASETO    DIM       3        * new case number OPMVSBOK
CASEFROM  DIM       3        * Current case number OPMVSBOK
CURBKTYP  DIM       3        * Current booking type (Input bookings only)
CURPOS    FORM      2        * Current position on screen (1-NUMCASE)
SAVPOS    FORM      2        * Save Current position on screen (1-NUMCASE)
CURSESS   DIM       22       * Current session (Date/Time/Clinic)
.                            * = SESNDATE,SESNTIME,SESNCODE
CURCASE   FORM      3        * current case number in use
CURSTAT   DIM       1        * current status
CVERTSAV  FORM      2
CCOLSAV   FORM      2
.
.         Description variables for general use
.
DESC10    DIM       10
DESC15    DIM       15
DESC18    DIM       18
DESC20    DIM       20
DESC24    DIM       24
DESC25    DIM       25
DESC27    DIM       27
CDESC20A  DIM       20       * 20 Char desc
CDESC20B  DIM       20       * 20 Char desc
DESC30    DIM       30
CDESC30A  DIM       30       * 30 Char desc
CDESC30B  DIM       30       * 30 Char desc
.
DURATION  FORM      4
DATESTRT  DIM       8         * starting date
DATESTOP  DIM       8         * ending date
DESC31    DIM       31
DESC40    DIM       40
CDESC40A  DIM       40       * 40 char description
CDESC40B  DIM       40       * 40 char description
CDESC40C  DIM       40       * 40 char description
CMDLINE   DIM       50       * command line for execute command
DAMOUNT   DIM       9        * amount in key for INPUSETF (in OPINPUSE.PBL)
DIM2OPT   DIM       2        * keyin variable (Select Session)
DIM4      DIM       4        * for patdsmsc
DESC55    DIM       55
DOCTCODE  DIM       6        * doctor code for GDOCT000 (team allocation)
DOCTPERS  DIM       3        * doctor personnel code (team allocation)
.
.         These three variables are used as parameters to the time
.         manipulation routines.
.
DEFLSTRT  DIM       5        * default start time in OPINPUSE
EXPSTART  DIM       5        * Expected start time : Use to Recalculate starts
EXPEND    DIM       5        * Expected End time
EXPDURA   FORM      5        * Expected duration : Recalculate durations
ADDDURA   FORM      4        * Additions to expected duration
CALC4     FORM      4        * Variable needed for re-calculating times
COUNTER   FORM      2        * counter for previous screen
.
FIXCHRGE  FORM      1        * fixed charge item flag for OPINPMCH
FORM2OPT  FORM      2        * keyin option (select session)
FORM3     FORM      3
FORM4B    FORM      4        * used in time calculations in OPSESUSE
FORM6P2   FORM      6.2      * amount for use in OPINPMCH
FORM8     FORM      8        * for U/R numbers
.
HOMEPHON  DIM       12       * keyin variable for home phone number
HOMEPHO1  DIM       20
.
INMCHRGE  DIM       12       * input variable for misc. charges (OPINPMCH)
.
ISPREV    FORM      1        * 0 = There is a previous screen
.                              1 = No previous screen
ISNEXT    FORM      1        * 0 = There is a next screen
.                            * 1 = No next screen
.
LNO       FORM      3        * for patcmnts.pbl
MASK      DIM       20       * Use to store valid options for GOPTN000
MODEFLAG  FORM      1        * insert/change mode or mandatory Y/N
.
.         NEWS.... variables are used for new sessions (OPCRTSES)
.
NEWSCODE  DIM       6        * NEW Session clinic/surgeon CODE
NEWSHOSP  DIM       3        * NEW Session HOSPITAL
NEWSDATE  DIM       8        * NEW Session DATE
NEWSTIME  DIM       5        * NEW Session TIME
NEWSCASE  DIM       3        * NEW Case Number 
NGIVNAME  DIM       25       * New Given name(s)
NSURNAME  DIM       20       * New Surname
NUMCASE   FORM      2        * Number of cases displayed on screen (1-14)
NUMITEMS  FORM      2        * Multiplier for misc items (OPINPMCH)
NUMITEMD  DIM       3        * Display multiplier for misc items (OPINPMCH)
NURSCODE  DIM       6        * Nursing code (team allocation)
NURSPERS  DIM       3        * Nursing personnel code (team allocation)
OPERSURG  DIM       6        * operating surgeon
.
PATNAME   DIM       40       * Patients name
PMIDETS   FORM      1        * PMI details from MAS or PRA ?
PREFACOM  DIM       3        * Preferred Accommodation (Keyin change)
PREFCNT   FORM      2        * the number of preferences displayed (OPBOKREQ)
PREVCLSS  DIM       3        * previous class displayed (OPBOKREQ)
PROVITEM  DIM       9        * a provisional item code
PROVITM1  DIM       9        * temp prov item
PROVITM2  DIM       9        * temp prov item
PROVITM3  DIM       9        * temp prov item
PROVDESC  DIM       55       * a provisional item description
PRVYPOS   FORM      2        * line position for keyin provisional item
.
REFERNCE  DIM       8        * the reference item OPINPMCH
REPLY     DIM       3        * Used by GOPTN000 and just as a DIM3
.
SAVADMN   FORM      8        * save admission number
SAVED10   DIM       10       * save dim 10 use for saving codes
SAVEF10   FORM      10       * save form 10
SAVEXPD   FORM      4        * saved expected duration
SAVCVERT  FORM      2
SCRNFLAG  FORM      1        * Signal redisplay flag
SCCOL     FORM      3        * for kypatgpc
SESNCODE  DIM       6        * Current clinic/surgeon code
SESNHOSP  DIM       3        * Current session hospital
SESNDATE  DIM       8        * Current session date
SESNTIME  DIM       5        * Current session time
SESNDESC  DIM       30       * Current session description
SESNSTAT  DIM       1        * Current session status          
SKEY22    DIM       22       * save key of data for OPINPMCH
STATUSD   DIM       13       * Admission status
STRDATE   DIM       8 
SUBOPT1   FORM      2        * column for suboptions 2
SUBOPT2   FORM      2        * column for suboptions 2
SUPVCODE  DIM       3        * supervision code
SURINCH   DIM       6        * surgeon in charge of session
SVTRNBOK  DIM       80       * Save vars for OPTRNBOK calling other functions
.
TIMESTRT  DIM       5         * starting time
TIMESTOP  DIM       5         * ending time
TYPEFLAG  FORM      1
TEMPDATE  DIM       8        * session date validation
TEMPCLIN  DIM       6        * session clinic validation
TEMPTIME  DIM       5        * session time validation
TODAY     DIM       8        * todays date in ccyymmdd format
.
VERT      FORM      2        * for patcmnts.pbl
XPOS      FORM      2        * keyin routine screen positions
XPOS1     FORM      2        * keyin routine screen positions
XPOS2     FORM      2        * keyin routine screen positions
YPOS      FORM      2        * keyin routine screen positions
.
.    CONSTANTS
.
BOOKED    INIT      "Booked       "
CANCELLD  INIT      "Cancelled    "
DISCHARG  INIT      "Discharged   "
ONLEAVE   INIT      "On Leave     "
PREADMIS  INIT      "Pre-admission"
.
MISSCODE  INIT      "** Missing Code **          "
SEC1      FORM      "00001"
.
.    ARRAYS for Screen handling functions
.
CASE01    FORM      3         * 1st case number on display screen
CASE02    FORM      3         * 2nd case number on display screen
CASE03    FORM      3         * 3rd case number on display screen
CASE04    FORM      3         * 4th case number on display screen
CASE05    FORM      3         * 5th case number on display screen
CASE06    FORM      3         * 6th case number on display screen
CASE07    FORM      3         * 7th case number on display screen
CASE08    FORM      3         * 8th case number on display screen
CASE09    FORM      3         * 9th case number on display screen
CASE10    FORM      3         * 10th case number on display screen
CASE11    FORM      3         * 11th case number on display screen
CASE12    FORM      3         * 12th case number on display screen
CASE13    FORM      3         * 13th case number on display screen
CASE14    FORM      3         * 14th case number on display screen
.
DIMCAS01  DIM       3         * copy of the case numbers
DIMCAS02  DIM       3
DIMCAS03  DIM       3
DIMCAS04  DIM       3
DIMCAS05  DIM       3
DIMCAS06  DIM       3
DIMCAS07  DIM       3
DIMCAS08  DIM       3
DIMCAS09  DIM       3
DIMCAS10  DIM       3
DIMCAS11  DIM       3
DIMCAS12  DIM       3
DIMCAS13  DIM       3
DIMCAS14  DIM       3
.
LINE01    FORM      3         * Line on display screen of 1st case number 
LINE02    FORM      3         * Line on display screen of 2nd case number 
LINE03    FORM      3         * Line on display screen of 3rd case number 
LINE04    FORM      3         * Line on display screen of 4th case number 
LINE05    FORM      3         * Line on display screen of 5th case number 
LINE06    FORM      3         * Line on display screen of 6th case number 
LINE07    FORM      3         * Line on display screen of 7th case number 
LINE08    FORM      3         * Line on display screen of 8th case number 
LINE09    FORM      3         * Line on display screen of 9th case number 
LINE10    FORM      3         * Line on display screen of 10th case number 
LINE11    FORM      3         * Line on display screen of 11th case number 
LINE12    FORM      3         * Line on display screen of 12th case number 
LINE13    FORM      3         * Line on display screen of 13th case number 
LINE14    FORM      3         * Line on display screen of 14th case number 
.
DLIN01    DIM       3         * copy of the line numbers
DLIN02    DIM       3
DLIN03    DIM       3
DLIN04    DIM       3
DLIN05    DIM       3
DLIN06    DIM       3
DLIN07    DIM       3
DLIN08    DIM       3
DLIN09    DIM       3
DLIN10    DIM       3
DLIN11    DIM       3
DLIN12    DIM       3
DLIN13    DIM       3
DLIN14    DIM       3
.
PREF01    DIM       9         * preference number 1
PREF02    DIM       9         * preference number 2
PREF03    DIM       9         * preference number 3
PREF04    DIM       9         * preference number 4
PREF05    DIM       9         * preference number 5
PREF06    DIM       9         * preference number 6
PREF07    DIM       9         * preference number 7
PREF08    DIM       9         * preference number 8
PREF09    DIM       9         * preference number 9
PREF10    DIM       9         * preference number 10
PREF11    DIM       9         * preference number 11
PREF12    DIM       9         * preference number 12
PREF13    DIM       9         * preference number 13
PREF14    DIM       9         * preference number 14
PREF15    DIM       9         * preference number 15
PREF16    DIM       9         * preference number 16
PREF17    DIM       9         * preference number 17
PREF18    DIM       9         * preference number 18
PREF19    DIM       9         * preference number 19
PREF20    DIM       9         * preference number 20
.
SESS01    DIM       22        * 1st session displayed on screen 1
SESS02    DIM       22        * 1st session displayed on screen 2
SESS03    DIM       22        * 1st session displayed on screen 3
SESS04    DIM       22        * 1st session displayed on screen 4
SESS05    DIM       22        * 1st session displayed on screen 5
SESS06    DIM       22        * 1st session displayed on screen 6
SESS07    DIM       22        * 1st session displayed on screen 7
SESS08    DIM       22        * 1st session displayed on screen 8
SESS09    DIM       22        * 1st session displayed on screen 9
SESS10    DIM       22        * 1st session displayed on screen 10
SESS11    DIM       22        * 1st session displayed on screen 11
SESS12    DIM       22        * 1st session displayed on screen 12
SESS13    DIM       22        * 1st session displayed on screen 13
SESS14    DIM       22        * 1st session displayed on screen 14
SESS15    DIM       22        * 1st session displayed on screen 15
.
SESNUM01  DIM       22        * session no. 1 displayed on screen
SESNUM02  DIM       22        * session no. 2 displayed on screen
SESNUM03  DIM       22        * session no. 3 displayed on screen
SESNUM04  DIM       22        * session no. 4 displayed on screen
SESNUM05  DIM       22        * session no. 5 displayed on screen
SESNUM06  DIM       22        * session no. 6 displayed on screen
SESNUM07  DIM       22        * session no. 7 displayed on screen
SESNUM08  DIM       22        * session no. 8 displayed on screen
SESNUM09  DIM       22        * session no. 9 displayed on screen
SESNUM10  DIM       22        * session no. 10 displayed on screen
SESNUM11  DIM       22        * session no. 11 displayed on screen
SESNUM12  DIM       22        * session no. 12 displayed on screen
SESNUM13  DIM       22        * session no. 13 displayed on screen
SESNUM14  DIM       22        * session no. 14 displayed on screen
SESNUM15  DIM       22        * session no. 15 displayed on screen
SESNUM16  DIM       22        * session no. 16 displayed on screen
. 
.   The following SV------ variables are used for testing for changes in the 
.        basic PMI varibles so that the appropriate files can be updated
.
SVTITL    DIM       4          * Title varible
SVSNAME   DIM       20         * Surname
SVGNAME   DIM       25         * Given Names
SVADD1    DIM       35         * Address 1
SVADD2    DIM       35         * Address 2
SVSUBRB   DIM       35         * Suburb
SVADD4    DIM       35         * Address 4
SVPOST    DIM       8          * Postcode
SVTELEP   DIM       20         * Private Telephone Number
SVTELEB   DIM       20         * Private Business Telephone No. 
SVCELL    DIM       20         * Private Cellular Telephone No.
SVDOR     DIM       3          * District of Residence
SVSEX     DIM       1          * Sex
SVMSTAT   DIM       3          * Marital Status
SVBDATE   DIM       6          * Date
SVBYEAR   FORM      2          * Year
SVTYPE    DIM       3          * Type
SVREGP    DIM       8          * registered GP
SVGPPC    DIM       6          * registered GP Practice
SVGPPT    DIM       2          * registered GP Practice Count
SVOSMS    DIM       1          * opt-out of SMS
.
.         temp files for OPBOKREQ
.
BOKREQA1  IFILE     SQL, FIXED=41, KEY="U1-6,7-15"
PFIXTMPA  INIT      "OPRPRF"  * temp file prefix
XADCOD    DIM       6         * Doctor Code
XAPREF    DIM       9         * preference code
XADESC    DIM       25        * preference description
.
BOKREQB1  IFILE     SQL, FIXED=20, KEY="U1-6,7-9,10-10,11-16"
PFIXTMPB  INIT      "OPRTRY"  * temp file prefix
XBDCOD    DIM       6         * Doctor Code
XBCLASS   DIM       3         * class code
XBTYPE    DIM       1         * item type: 0=tray, 1=instrument
XBITEM    DIM       6         * tray/item code
XBQTY     FORM      3         * quantity
.
.         temp file for OPINPMCH
.
INPMCHTP  FILE      ASCII, FIXED=256
PXINPMCH  INIT      "inpmch"  * temp file prefix
PXPATAUM  INIT      "pataum"  * audit file for misc charges
.
.         temp file for OPINPREC
.
INPRECTP  FILE      ASCII, FIXED=256
+
.
.
NTCOL     FORM      2
NUCOL     FORM      2
NUDCOL    FORM      2
DESC11    DIM       11
