. *****************************************************************************
. *                                                                           *
. * Include Name  : MRTCONFD.INC                                              *
. *                                                                           *
. * Function      : Medical Records Control file                              *
. *                                                                           *
. * File Type     : ASCII                                                     *
. *                                                                           *
. * File Name     : controlf.txt                                              *
. *                                                                           *
. * Sectors       : 60, 61, 97                                                *
. *                                                                           *
. * Modifications :                                                           *
. *****************************************************************************
. * V11.03.01 14/07/2023  Bella Turco       TSK 0901388                       *
. *           Edited comment for MRCNEACA                                     *
. * V11.02.02 07/03/2022  Ebon Clements     TSK 0905513                       *
. *           Added MRCNAUTG - Auto group via DRG Grouper when import         *
. *           codefinder returns codes                                        *
. * V11.02.01 01/03/2022  Thanh T           TSK 0901057                       *
. *           Added MRCNEACA Enable Attestation Coding Audit                  *
. * V11.01.01 05/05/2021  Ebon Clements     TSK 0902615                       *
. *           Added NWAU parameters MRCNUNWA and MRCNENWA                     *
. *****************************************************************************
. * V11.00.01 20/05/2020  Davin             TSK 0890603                       *
. *           Added option 2=Yes (public patients only) to MRCNRDSG           *
. *****************************************************************************
. * V10.15.02 03/12/2019  Ebon Clements     TSK 0881992                       *
. *           Added MRCNPCLD - Prompt to copy codes from the last discharge   *
. * V10.15.01 09/10/2019  Thanh T           TSK 0860841                       *
. *           Added MRCNROUN - Using round down for 0-29 mins and up for      *
. *           30-59 mins for ICU hrs (not only round up)                      *
. *****************************************************************************
. * V10.14.02 08/04/2019  Ebon Clements     TSK 0872901                       *
. *           Added MRCNTUSR - TurboGrouper Remote webPAS User ID             *
. * V10.14.01 14/03/2019  Peter Vela        TSK 0868836                       *
. *           Added MRCNDFPR - Default Proceduralist Clinician for the        *
. *           initial ICD Coding template                                     *
. *****************************************************************************
. *       V10.12.01 04/05/2018  Ebon Clements     TSK 0845772                 *
. *                 Added option 3 - TurboGrouper to MRCNGRUP                 *
. *       V10.11.01 01/08/2017  Davin             TSK 0842626                 *
. *                 Added MRCNRDSG - Restrict Diagnosis Codes sent to Grouper *
. *       V10.10.01 27/03/2017  Don Nguyen        TSK 0817797                 *
. *                 Added MRCNNBMN - Next Bulk Record Movement Number         *
. *       V10.08.01 14/09/2016  Davin             TSK 0307316                 *
. *                 Added MRCNWURL - Codefinder Web Interface URL (S.60/P.157)*
. *                 Added MRCNWSES - Codefinder Web Interface Session (P.237) *
. *       V10.07.01 16/02/2016  Ebon Clements     TSK 0809793                 *
. *                 Added MRCNREQC Copy Request Comments to Movement Comments *
. *       V10.06.01 23/09/2015  Davin             CAR 316612                  *
. *                 Added option 2 to MRCNGRUP - CCA Interface to webPAS      *
. *                 Added MRCNCCAP - CCA Interface Path (S.97/P.184)          *
. *       V10.04.02 13/03/2014  Don Nguyen        CAR 294888                  *
. *                 Added MRCNCFST - 3M Codefinder SYS Tag Value              *
. *       V10.04.01 28/02/2014  Ebon Clements     CAR 295416                  *
. *                 Added MRCNCCOD - Using centralised coding                 *
. *       V10.03.08 18/07/2013  Peter Vela        CAR 287221                  *
. *                 Changed Yes/No values around for MRCNDCUD                 *
. *       V10.03.07 09/07/2013  Peter Vela        CAR 287221                  *
. *                 Added MRCNDCUD "Check for uncoded visits in               *
. *                 Medical Records Morbidity Coding"                         *
. *       V10.03.06 09/11/2012  Mike Laming       CAR 270133                  *
. *                 Added MRCNDCDT "MR Default Coding Destination"            *
. *       V10.03.05 20/07/2012  Mike Laming       CAR 263691                  *
. *                 Added MRCNWIES "Using CodeFinder for NZ WIES" Yes/No      *
. *       V10.03.04 05/06/2012  Mike Laming       CAR 265259                  *
. *                 Added MRCNRCDT "Reset Coding Date (when changes)"         *
. *       V10.03.03 09/03/2012  Mike Laming       CAR 260916                  *
. *                 Added MRCNMORP "Cancer Reg - bypass Morphology checks"    *
. *       V10.03.02 19/12/2011  Mike Laming       CAR 257260                  *
. *                 Mod to MRCNOPDT description to add "No deflt Date" =2     *
. *       V10.03.01 07/11/2011  Mike Laming       CAR 253086                  *
. *                 Mod to MRCNLAYT - added 14 Zebra WA Health (BarCode)      *
. *       V10.02.05 27/10/2011  Mike Laming       CAR 245178                  *
. *                 Added MRCNECOD - Mand check "Additional Code Requirements"*
. *       V10.02.04 28/07/2011  Ebon Clements     CAR 243582                  *
. *                 Added MRCNTREC - Using tracking receipt functionality     *
. *       V10.02.03 24/05/2011  Mike Laming       CAR 240724                  *
. *                 Added MRCNBCHI - Using Hospital Id. on MR Barcode Labels  *
. *       V10.02.02 16/05/2011  Mike Laming       CAR 240716                  *
. *                 Added MRCNSRTO - Select MRT Tracking Sort Order           *
. *       V10.02.01 12/04/2011  Mike Laming       CAR 240103                  *
. *                 Added MRCNCLIN - Display Oper Clinician on ICD Coding Scr *
. *       V10.00.03 09/08/2010  Mike Laming       CAR 227073                  *
. *                 Added MRCNOPDT - Default Operation Date - DDATE or ADATE  *
. *       V10.00.02 03/08/2010  Ebon Clements     CAR 202256                  *
. *                 Added MRCNNOMR - Include patients with no MR on           *
. *                 pulling lists                                             *
. *       V10.00.01 19/04/2010  Ebon Clements     CAR 59880                   *
. *                 Added MRCNTDAY - Max days to search for tracking alerts   *
. *       V9.12.01  31/07/2009  Ebon Clements     CAR 202737                  *
. *                 Added Zebra with medical record barcode to MRCNLAYT       *
. *       V9.11.01  03/04/2009  Ebon Clements     CAR 188090                  *
. *                 Added MRCNEMRT - Auto track record to ED on registration  * 
. *       V9.10.02  01/07/2008  Ebon Clements     CAR 168718                  *
. *                 Changed MRCNLZER description - Remove hyphen from U/R Scan* 
. *       V9.10.01  01/07/2008  Ebon Clements     CAR 168718                  *
. *                 Added MRCNLZER - Remove leading zero's and hyphen from    * 
. *                 U/R scan                                                  * 
. *       V9.09.01  19/11/2007  Ebon Clements     CAR 150855                  *
. *                 Added MRCNCROS - Allow Cross Campus Record Tracking       *
. *       V9.08.02  12/12/2006  Peter Vela        CAR 127930                  *
. *                 Added MRCNRRED - Auto Record Request from ED              *
. *       V9.08.01  24/10/2006  Steve Armstrong   CAR 107236                  *
. *                 Added MRCNLAYT - layout 12 (Unformatted output)           *
. *****************************************************************************
. *       V9.07.01  14/09/2006  Ebon Clements     CAR 107236                  *
. *                 Added MRCNIBAP - Using IBA prefix and Allegra barcodes    *
. *****************************************************************************
. *       V9.05.B01 24/02/2006  Ebon Clements     CAR 60884                   *
. *                 Added MRCNUREQ - Updating request details                 *
. *****************************************************************************
. *       V9.04.08  24/11/2005  Ebon Clements     CAR 78032                   *
. *                 Added MRCNLINK - Using medical record linked visits       *
. *       V9.04.07  20/09/2005  Mike Laming       CAR 68672                   *
. *                 Added type 11 to MRCNLAYT (Datamax E-Class)               *
. *       V9.04.06  15/08/2005  Peter Vela        CAR 71973                   *
. *                 Added MRCNPBLK - Print Bulk Functionality                 *
. *       V9.04.05  29/06/2005  Ebon Clements     CAR 57100                   *
. *                 Added MRCNTRAK - Using medical records tracking system    *
. *       V9.04.04  27/06/2005  Ebon Clements     CAR 62766                   *
. *                 Added generate volume by options to MRCNAUTO              *
. *       V9.04.03  19/05/2005  Jill Habasque     CAR 59013                   *
. *                 Added MRCNDISA - Display all volumes in pulling lists?    *
. *       V9.04.02  27/04/2005  Peter Vela        CAR 55214                   *
. *                 Added MRCNALHL - Allergy Highlight Category parameter     *
. *       V9.04.01  30/03/2005  Steve Armstrong   CAR 60350                   *
. *                 Added new layout for BHS (MRCNLAYT = 10)                  *
. *****************************************************************************
. *       V9.03.06  10/06/2004  Pat Dirito     CAR 42437                      *
. *                 Added MRCNINCP - Checking Volume only Visits for          *
. *                 Incompletes                                               *
. *       V9.03.05  02/03/2004  Jill Habasque  CAR 47831                      *
. *                 Added MRCNCDOP - current date for pulling list            *
. *       V9.03.04  27/02/2004  Jill Habasque  CAR 43132                      *
. *                 Added MRCNAMTR - automatically move record on bed transfer*
. *       V9.03.03  23/01/2004  Ebon Clements  CAR 38490 and 46979            *
. *                 Added MRCNACRR - Auto create medical record on            *
. *                 registration and update of UR.                            *
. *                 Added MRCNACRV - Auto create medical record for all       *
. *                 visits.                                                   *
. *                 Added MRCNUSRD - Use user ID document type and home       *
. *                 location defaults when creating medical records           *
. *       V9.03.02  18/12/2003  Peter Vela     CAR 43134                      *
. *                 Added MRCNWNHL - Display Home Location Warning message    *
. *       V9.03.01  14/10/2003  Guomin Fu      CAR 41584                      *
. *                 Added MRCNSOMV - Send hrs of MV to grouper(Y/N)           *
. *       V9.02.08  26/11/2002  Lina Vo        CAR 18262                      *
. *                 Added MRCNTDAD                                            *
. *       V9.02.07  26/11/2002  Dean Cramer    srf 19735                      *
. *                 Added MRCNMSCD                                            *
. *       V9.02.06  11/11/2002  Dean Cramer    srf 19735                      *
. *                 Added MRCNUFTY                                            *
. *       V9.02.05  14/03/2002  Pat Dirito                                    *
. *                 Added MRCNGRUP and MRCNMECH                               *
. *       V9.02.04  19/02/2002  Steve Armstrong                               *
. *                 Added MRCNDGSI and MRCNDGSO                               *
. *       V9.02.03  05/02/2002  Jill Habasque                                 *
. *                 Added MRCNMOVT - Movement Reason for Transfers            *
. *       V9.02.02  10/01/2002  Ebon Clements                                 *
. *                 Added MRCNPDST - Default post discharge status            *
. *       V9.02.01  05/07/2001  Mike Lamingc                                  *
. *                 Added MRCNDGRM - Write Medical Records Movem't to Datagate*
. *       V5.09.B01 07/02/2001  Bronko Sosic                                  *
. *                 Added MRCNMOVR - Movement Reason Code for O/P             *
. *                 Added MRCNMOVP - Movement Reason Code for Pre-admission   *
. *****************************************************************************
. *       V5.08.B01 16/02/2000  Greg Horvat      SRF 645426 645438            *
. *                 Added MRCNBOAD - Default blank operation & accident dates *
. *       V5.07.02  05/02/1999  Steve Armstrong                               *
. *                 Added new layout for ACC (MRCNLAYT = 7)                   *
. *       V5.07.01  03/12/1998  Jim Stathopoulos   SRF 629244                 *
. *                 Added new sector - Sector 97                              *
. *                 Added new variables - MRCNIN1A,MRCNIN1B,MRCNIN1C          *
. *                 MRCNIN1D and MRCNIN1E                                     *
. *****************************************************************************
. *       V5.06.01  26/06/1998  Greg Horvat                                   *
. *                 Added MRCNSDOS - Single disease & operation keyin screen  *
. *                 Added MRCNEPSC - Episode coding in single dis/opr screen  *
. *****************************************************************************
. *       V5.01.02  27/11/92  DIG                                             *
. *                 Added MRCNREQB.                                           *
. *       V5.01.03  05/03/93  DWJ                                             *
. *                 Added MRCNAUTO                                            *
. *       V5.01.04  12/03/93  DWJ                                             *
. *                 Added MRCNSTFF                                            *
. *       V5.01.05  06/12/1993    Justin Coates                               *
. *                 Added MRCNNOHS,MRCNHDT1 - 5, MRCNHNM1-5                   *
. *       V5.01.06  12/01/1994    Whirlpool                                   *
. *                 Added  MRCNUCRG                                           *
. *       V5.01.07  31/01/1994    Justin Coates                               *
. *                 Removed MRCNHDT1 - 5, MRCNHNM1-5  (room at end of Sec 60) *
. *       V5.01.08  22/04/1994  Steve Armstrong                               *
. *                 Added new layout for Taranaki labels MRCNLAYT = 4         *
. *       V5.01.09  27/04/1994  Steve Armstrong                               *
. *                 Added new layout for Hawkes Bay (MRCNLAYT = 5)            *
. *       V5.02.01  09/12/1994  Graeme Williams                               *
. *                 Added system parameter to determine if a label should be  *
. *                 printed in change mode of IBAMRT11                        *
. *       V5.03.01  27/06/1995   Whirlpool                                    *
. *                 Added value to MRCNUCRG - 2 = NZ cancer register          *
. *       V5.03.02  04/01/1996  Greg Horvat                                   *
. *                 Commented out the menu program, security key, IBA screen  *
. *                 password & data directory variables                       *
. *       V5.07.01  02/12/1998  Jim Stathopoulos                              *
. *                 Added Sector 97                                           *
. *                                                                           *
. *****************************************************************************
.
.                ** SECTOR 60 **
.
.Name     Type      Length  Start  Description
.-------  ----      ------  -----  ----------------
.....HMENUMRT  DIM       8         1    Menu name (Refer to Patconfd)
.....HSECUMRT  DIM       6         9    Company Security Code
.....HDATAMRT  DIM       20       15    Data Directory
.....HSECRMRT  DIM       8        35    Passwd IBAMRT98
.
.        Note : AUDITS  1 = NOT REQUIRED 
.
MRCNAUDA  FORM      1        51    Tracking Attendees
MRCNAUDB  FORM      1        52    Tracking Bookings
MRCNAUDC  FORM      1        53    Audit C    
MRCNAUDD  FORM      1        54    Audit D
MRCNAUDE  FORM      1        55    Audit E
MRCNAUDF  FORM      1        56    Audit F
MRCNAUDG  FORM      1        57    Audit G
MRCNAUDH  FORM      1        58    Audit H 
MRCNAUDI  FORM      1        59    Tracking Clinic ID's
MRCNAUDJ  FORM      1        60    Audit J
MRCNAUDK  FORM      1        61    Audit K
MRCNAUDL  FORM      1        62    Audit L
MRCNAUDM  FORM      1        63    Tracking Clinic Master
MRCNAUDN  FORM      1        64    Tracking Non-Attendees
MRCNAUDO  FORM      1        65    Audit O
MRCNAUDP  FORM      1        66    Tracking Public Holidays
MRCNAUDQ  FORM      1        67    Audit Q
MRCNAUDR  FORM      1        68    Audit R
MRCNAUDS  FORM      1        69    Tracking Sites
MRCNAUDT  FORM      1        70    Tracking Clinic Types
MRCNAUDU  FORM      1        71    Audit U
MRCNAUDV  FORM      1        72    Audit V
MRCNAUDW  FORM      1        73    Audit W
MRCNAUDX  FORM      1        74    Audit X
MRCNAUDY  FORM      1        75    Audit Y
MRCNAUDZ  FORM      1        76    Audit Z
.
MRCNLPAG  FORM      1        77    (Spare - Not used anymore)
MRCNLSIZ  FORM      1        78    (Spare - Not used anymore)
MRCNLAYT  FORM      2        79    Label Layout
.                                    1 = Standard (40 columns 8 rows)
.                                    2 = W.A.H.B. (40 columns 5 rows)
.                                    3 = H.R.H.
.                                    4 = T.A.H.B
.                                    5 = Hawkes Bay
.                                    6 = CHC
.                                    7 = ACC
.                                    8 = STH
.                                    9 = SATO
.                                   10 = BHS (Zebra)
.                                   11 = Datamax E-Class
.                                   12 = Unformatted Output
.                                   13 = Zebra (Medical Record Barcode)
.                                   14 = Zebra WA Health (MR Barcode)
MRCNTLOC  DIM       3        81    Type code for temporary location
MRCNHLOC  DIM       4        84    Default home location
MRCNRCTY  DIM       3        88    Default record type
MRCNVOLM  DIM       2        91    Default volume
MRCNSPAC  DIM       2        93    Space
MRCNUKEY  FORM      10       95    Unique Key
MRCNHMTY  DIM       3        105   Type Code for Home Location
MRCNSTAT  DIM       3        108   Default Record Status
HTLNUM    FORM      3        111   No. Of Labels To Print
MRCNFUTD  FORM      1        114   Record Movement -Future Dates (Y/N) ?
.                                    0 = No 1 = Yes
HTNUMDAY  FORM      3        115   Record Movement -No. Of Days in Future
MRCNSLCM  FORM      1        118   Security level for Create Med Rec  0-9
MRCNOIDM  FORM      1        119   Operator Id Mandatory (Y/N)?
.                                    0=No,  1=Yes
MRCNMRES  FORM      1        120   Input Multiple Reasons in MRT14 (Y/N)?
.                                    0=No,  1=Yes
MRCNREQB  DIM       6        121   Default value for Requested By
MRCNAUTO  FORM      1        127   Auto-Generate Next volume number
.                                    0=No
.                                    1=Yes - By U/R and doc type
.                                    2=Yes - By U/R, Home loc and doc type
MRCNSTFF  FORM      1        128   Bypass search parameters in staff help
.                                    0=No, 1=Yes
MRCNNOHS  FORM      2        129   Number of Hospitals for data directories
MRCNCHGL  FORM      1        131   Print a label in change mode of MRT11 ?
.                                    0=No, 1=Yes
MRCNSDOS  FORM      1        132   Single disease & operation keyin screen
.                                    0=no, 1=Yes
MRCNEPSC  FORM      1        133   Episode coding in single dis/opr screen
.                                    0=no, 1=Yes
MRCNBOAD  FORM      1        134   Default blank operation & accident dates
.
MRCNMOVR  DIM       4        135   Movement Reason Code for O/P           
.
MRCNMOVP  DIM       4        139   Movement Reason Code for Pre-admission 
.
MRCNMOVT  DIM       4        143   Movement Reason Code for Transfers 
.
MRCNSOMV  FORM      1        147   Send Hours of MV to grouper(Y/N)
.                                     0=Yes, 1=No
MRCNWNHL  FORM      1        148   Display Home Location warning message?
.                                    0=No, 1=Yes
MRCNBCHI  DIM       1        149   Using Hospital Id. on MR Barcode Labels
.                                    0=No, 1=Yes
MRCNECOD  DIM       1        150   Mandatory check for "Additional Code 
.                                  Requirements" 0=No, 1=Yes
MRCNDCDT  DIM       4        151   Default Coding Destination location
.
MRCNDCUD  DIM       1        155   Check for uncoded visits in Medical Records
.                                  Morbidity Coding
.                                     0=No, 1=Yes
MRCNREQC  DIM       1        156   Copy Request Comments to Movement Comments
.                                     0=No, 1=Yes
MRCNWURL  DIM       80       157   3M Codefinder Web Interace URL
.
MRCNWSES  DIM       10       237   3M Codefinder Web Interace Session
.
MRCNAUTG  DIM       1        247   Auto Group via DRG Grouper when import 
.                                  Codefinder returns codes  0=No, 1=Yes
.End of Record               248
.
.            ** SECTOR 61 **
.
.Name     Type      Length  Start  Description
.-------  ----      ------  -----  ----------------------------------
MRCNUSR1  FORM      1          1   Using User Defined Field 1 for Attendees?
.                                          0 = No, 1 = Yes
MRCNDES1  DIM       15         2   Description for User Defined Field 1
MRCNMAN1  FORM      1         17   Is User Defined Field 1 Mandatory
MRCNUSR2  FORM      1         18   Using User Defined Field 2 for Attendees?
.                                          0 = No, 1 = Yes
MRCNDES2  DIM       15        19   Description for User Defined Field 2
MRCNMAN2  FORM      1         34   Is User Defined Field 2 Mandatory
MRCNUSR3  FORM      1         35   Using User Defined Field 3 for Attendees?
.                                          0 = No, 1 = Yes
MRCNDES3  DIM       15        36   Description for User Defined Field 3
MRCNMAN3  FORM      1         51   Is User Defined Field 3 Mandatory
MRCNUSR4  FORM      1         52   Using User Defined Field 4 for Attendees?
.                                          0 = No, 1 = Yes
MRCNDES4  DIM       15        53   Description for User Defined Field 4
MRCNMAN4  FORM      1         68   Is User Defined Field 4 Mandatory
MRCNxxxx  DIM       100       69   Spare places
MRCNyyyy  DIM       50       169   Spare places
MRCNUCRG  FORM      1        219   Using cancer registration
.                                          0 = No, 1 = Yes
.                                          1 = Australian Cancer Register
.                                          2 = New Zealand Cancer Register
MRCNNBMN  DIM       10       220   Next Bulk Record Movement Number
MRCNTUSR  DIM       10       230   TurboGrouper Remote webPAS User ID
MRCNUNWA  DIM       1        240   Using Grouping Products to return NWAU for
.                                  Victoria  0 = No, 1 = Yes
MRCNENWA  DIM       8        241   NWAU Effective Date (Discharged Visits)
.
.End of Record               249
.
.
.            ** SECTOR 97 **
.
.Name     Type      Length  Start  Description
.-------  ----      ------  -----  ----------------------------------
MRCNIN1A  DIM       20         1   Medical Record Status Desc for Cat RS Ind 1A
MRCNIN1B  DIM       20        21   Medical Record Status Desc for Cat RS Ind 1B
MRCNIN1C  DIM       20        41   Medical Record Status Desc for Cat RS Ind 1C
MRCNIN1D  DIM       20        61   Medical Record Status Desc for Cat RS Ind 1D
MRCNIN1E  DIM       20        81   Medical Record Status Desc for Cat RS Ind 1E
MRCNDGRM  FORM      1        101   Write Medical Records Movement to Datagate
MRCNPDST  DIM       3        102   Default post discharge status CAT CP
MRCNDGSI  DIM       20       105   Datagate Inbound Service Name - MRT
MRCNDGSO  DIM       20       125   Datagate Outbound Service Name - MRT
MRCNGRUP  FORM      1        145   Which Grouper to be used by webPAS
.                                  0 = Unix Grouper
.                                  1 = PC Grouper
.                                  2 = CCA Interface to webPAS
.                                  3 = TurboGrouper Interface to webPAS
MRCNMECH  FORM      1        146   Mechanical Ventilation Warning/Fatal Error? 
.                                  1 = Fatal Error (Proc code found and no hrs)
.                                  0 = Warning (Proc code found and no hrs) 
MRCNUFTY  FORM      1        147   Upload file format for Microfilm Address
.                                  1 = 8 character UR (RCH format)
.                                  2 = 6 character UR (SVM format)
MRCNMSCD  DIM       3        148   Record status when microfilmed CAT RS
MRCNTDAD  FORM      1        151   Use facility addr for Treating Doctor addr
.                                  1 = Use treating doctor address only
.                                  2 = Use facility address only
.                                  3 = Use facility addr if Doctor addr blank
MRCNACRR  FORM      1        152   Auto create medical record on registration
.                                  and update of UR.  0 = No, 1 = Yes
MRCNACRV  FORM      1        153   Auto create medical record for all visits
.                                  0 = No, 1 = Yes
MRCNUSRD  FORM      1        154   Use user id home location and document type
.                                  defaults when auto creating medical records
.                                  0 = No, 1 = Yes
MRCNAMTR  FORM      1        155   Automatically move records on bed transer  
.                                  (if the record is currently in the same 
.                                  location as the patient) 0 = No, 1 = Yes
MRCNCDOP  FORM      1        156   Use current date/time for movement from    
.                                  OP pulling list 0=No 1=Yes              
MRCNINCP  FORM      1        157   Checking Volume only Visits for Incompletes
.                                  0=No 1=Yes              
MRCNALHL  DIM       2        158   Highlight Category for Allergy      *I-55214
.                                  H1 - H9
MRCNDISA  DIM       1        160   Display all volumes in pulling list
.                                  0=No 1=Yes
MRCNTRAK  DIM       1        161   Using Medical Records Tracking System
.                                  0=No 1=Yes
MRCNPBLK  DIM       1        162   Print from Bulk Request?
                                   0=No 1=Yes
MRCNLINK  DIM       1        163   Using Medical Record Linked Visits?
                                   0=Yes 1=No
MRCNUREQ  DIM       1        164   Using Update Request Details on Request List
                                   0=No  1=Yes
MRCNIBAP  DIM       1        165   Using IBA prefix and Allegra barcode labels 
                                   0=No  1=Yes
MRCNRRED  DIM       1        166   Using Record Request from ED
                                   0=No  1=Yes
MRCNCROS  DIM       1        167   Allow Cross Campus Record Tracking
                                   0=No  1=Yes
MRCNLZER  DIM       1        168   Remove hyphen from U/R scan
                                   0=No  1=Yes
MRCNEMRT  DIM       1        169   Auto track record to ED on registration
                                   0=No  1=Yes
MRCNTDAY  DIM       2        170   Max days to search for tracking alerts
MRCNNOMR  DIM       1        172   Include patients with no MR on pulling lists
.                                  0=No  1=Yes
MRCNOPDT  DIM       1        173   Default Operation Date 
.                                  (blnk/0=DDATE 1=ADATE 2="No default Date))
MRCNCLIN  DIM       1        174   Display Proc.Clinitian on ICD10 Coding -     
.                                  (0=No, 1=Yes, 2=Mandatory)
MRCNSRTO  DIM       1        175   Select MRT Tracking Sort Order (0=UR Number)
MRCNTREC  DIM       1        176   Using Tracking Receipt Functionality
.                                  0=No  1=Yes
MRCNMORP  DIM       1        177   Cancer Reg - bypass Morphology checks
.                                  0=No  1=Yes
MRCNRCDT  DIM       1        178   Reset Coding Date (on changes)          
.                                  0=No  1=Yes
MRCNWIES  DIM       1        179   Using CodeFinder for NZ WIES (Y/N)      
.                                  0=No  1=Yes
MRCNCCOD  DIM       1        180   Using Centralised Coding (Y/N)
.                                  0=No  1=Yes
MRCNCFST  DIM       3        181   3M Codefinder SYS Tag Value
MRCNCCAP  DIM       60       184   CCA Interface Path
MRCNRDSG  DIM       1        244   Restrict Diagnosis Codes sent to Grouper
.                                  0=No  1=Yes  2=Yes (public patients only)
MRCNDFPR  DIM       1        245    Default Proceduralist Clinician for the
.                                   initial ICD Coding template
MRCNROUN  DIM       1        246   Using round down for 0-29 mins and up for
.                                  30-59 minmins for ICU hrs (not only round
.                                  up)
.                                  1=Yes 0/Blank=No
MRCNPCLD  DIM       1        247   Prompt to copy codes from the last discharge
.                                  0=No  1=Yes
MRCNEACA  DIM       1        248   Enable Attestation Coding Audit
.                                  0=Disabled
.                                  1=Attestation Functionality
.                                  2=Attestation and Coding Audit Functionality
.End of Record               249
.
