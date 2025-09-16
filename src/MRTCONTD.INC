.  ****************************************************************************
.  *                                                                          *
.  *     Include Name : MRTCONTD.INC                                          *
.  *                                                                          *
.  *     Function     : File Definition include for                           *
.  *                    Medical Records Control File cgi variables            *
.  *                                                                          *
.  *     Sector used  : 60, 61, 97                                            *
.  *                                                                          *
.  *     Modifications:                                                       *
.  *                                                                          *
.  *--------------------------------------------------------------------------*
.  *     V11.02.02 07/03/2022  Ebon Clements     TSK 0905513                  *
.  *               Added MRTCN057 - Auto group via DRG Grouper when import    *
.  *               codefinder returns codes                                   *
.  *     V11.02.01 01/03/2022  Thanh T           TSK 0901057                  *
.  *               Added MRTCN056 Enable Attestation Coding Audit             *
.  *     V11.01.01 05/05/2021  Ebon Clements     TSK 0902615                  *
.  *               Added NWAU parameters MRTCN054 and MRTCN055                *
.  *--------------------------------------------------------------------------*
.  *     V10.15.02 03/12/2019  Ebon Clements     TSK 0881992                  *
.  *               Added MRTCN053 - Prompt to copy codes from the last        *
.  *               discharge                                                  *
.  *     V10.15.01 09/10/2019  Thanh T           TSK 0860841                  *
.  *               Added MRTCN052 - Using round down for 0-29 mins and up for *
.  *               30-59 mins for ICU hrs (not only round up)                 *
.  *--------------------------------------------------------------------------*
.  *     V10.14.03 13/05/2019  Thanh T.          TSK 0872708                  *
.  *               Added MRTCN051 - Use current date/time for OP pulling list *
.  *     V10.14.02 08/04/2019  Ebon Clements     TSK 0872901                  *
.  *               Added MRTCN050 - TurboGrouper Remote webPAS User ID        *
.  *     V10.14.01 14/03/2019  Peter Vela        TSK 0868836                  *
.  *               Added MRTCN049 - Default Proceduralist Clinician for the   *
.  *               initial ICD Coding template                                * 
.  *--------------------------------------------------------------------------*
.  *     V10.12.01 15/03/2018  J.Tan             TSK 0854018                  *
.  *               Mod MRTCN041 to be DIM1 instead of FORM1                   *
.  *     V10.11.01 01/08/2017  Davin             TSK 0842626                  *
.  *               Added MRTCN048 - Restrict Diagnosis Codes sent to Grouper  *
.  *     V10.10.02 27/03/2017  Don Nguyen        TSK 0817797                  *
.  *               Added MRTCN047 - Next Bulk Record Movement Number          *
.  *     V10.10.01 07/03/2017  Richa Phogat      TSK 0834469                  *
.  *               Added MRTCN046 - Unique Key                                *
.  *     V10.08.01 14/09/2016  Davin             TSK 0307316                  *
.  *               Added MRTCN043 - Interface to 3M Codefinder (0/1/2)        *
.  *               Added MRTCN044 - Codefinder Web Interace URL               *
.  *               Added MRTCN045 - Codefinder Web Interace Session           *
.  *     V10.07.02 16/02/2016  Ebon Clements     TSK 0809793                  *
.  *               Added MRTCN042 Copy Request Comments to Movement Comments  *
.  *     V10.07.01 30/11/2015  Peter Vela        CAR 324247                   *
.  *               Added MRTCN041 - Checking for an ICU/NCU Bed Type?         *
.  *                                Transferred from IBAPAT98                 *
.  *     V10.06.01 23/09/2015  Davin             CAR 316612                   *
.  *               Added MRTCN039 - Which Grouper to be used by webPAS        *
.  *               Added MRTCN040 - CCA Interface Path (S.97/P.184)           *
.  *     V10.04.02 02/07/2014  Ebon Clements     CAR 302942                   *
.  *               Added MRTCN038 - Using Hospital Id on Unformatted Barcodes *
.  *     V10.04.01 13/03/2014  Don Nguyen        CAR 294888                   *
.  *               Added MRTCN037 - 3M Codefinder SYS Tag Value               *
.  *               28/02/2014  Ebon Clements     CAR 295416                   *
.  *               Added MRTCN036 - Using centralised coding                  *
.  *     V10.03.06 08/07/2013  Peter Vela        CAR 287221                   *
.  *               Added MRTCN035 - Check for uncoded visits in               *
.  *               Medical Records Morbidity Coding (MRCNDCUD)                * 
.  *     V10.03.05 09/11/2012  Mike Laming       CAR 270133                   *
.  *               Added MRTCN034 - MR Default Coding Destination (MRCNDCDT)  *
.  *     V10.03.04 20/07/2012  Mike Laming       CAR 263691                   *
.  *               Added MRTCN033 - Using CodeFinder for NZ WIES (MRCNWIES)   *
.  *     V10.03.03 05/06/2012  Mike Laming       CAR 265259                   *
.  *               Added MRTCN032 - Reset Coding Date (on change) (MRCNRCDT)  *
.  *     V10.03.02 01/05/2012  Mike Laming       CAR 263795                   *
.  *               Added MRTCN028 - MR Default Home Location (MRCNHLOC)       *
.  *               Added MRTCN029 - MR Default Record Type   (MRCNRCTY)       *
.  *               Added MRTCN030 - MR Default Volume No.    (MRCNVOLM)       *
.  *               Added MRTCN031 - MR Default Status        (MRCNSTAT)       *
.  *     V10.03.01 09/03/2012  Mike Laming       CAR 260916                   *
.  *               Added MRTCN027 - Bypass Morphology checks (MRCNMORP)       *
.  *     V10.02.06 27/10/2011  Mike Laming       CAR 245178                   *
.  *               Added MRTCN026 - Mand check "Additional Code Requirements" *
.  *     V10.02.05 05/08/2011  Ebon Clements     CAR 241939                   *
.  *               Corrected name of MRTCN024 - Using episode coding          *
.  *     V10.02.04 28/07/2011  Ebon Clements     CAR 243582                   *
.  *               Added MRTCN025 - Using tracking receipt functionality      *
.  *     V10.02.03 24/05/2011  Mike Laming       CAR 240724                   *
.  *               Added MRTCN022 (MRCNHMTY) - Location Typefor Home Location *
.  *               Added MRTCN023 (MRCNTLOC) - Location Typefor Temp Location *
.  *               Added MRTCN024 (MRCNBCHI) - Using Hosp Id. on Barcode Label*
.  *     V10.02.02 16/05/2011  Mike Laming       CAR 240716                   *
.  *               Added MRTCN021 (MRCNSRTO) - Select MRT Tracking Sort Order *
.  *     V10.02.01 04/04/2011  Mike Laming       CAR 240103                   *
.  *               Added MRTCN020 - Display Oper Clinician on ICD10 Coding    *
.  *     V10.00.03 09/08/2010  Mike Laming       CAR 227073                   *
.  *               Added MRTCN019 - Default Operation Date - DDATE or ADATE   *
.  *     V10.00.02 03/08/2010  Ebon Clements     CAR 202256                   *
.  *               Added MRTCN018 - Include patients with no MR on            *
.  *               pulling lists                                              *
.  *     V10.00.01 19/04/2010  Ebon Clements     CAR 59880                    *
.  *               Added MRTCN017 - Max days to search for tracking alerts    *
.  *     V9.12.01  16/10/2009  Mike Laming       CAR 207222                   *
.  *               Added MRTCN015 & MRTCN016 for Params. PTMORBDT & CMORBDTM  *
.  *     V9.11.01  06/04/2009  Ebon Clements     CAR 188090                   *
.  *               Added MRTCN014 - Auto track record to ED on registration   * 
.  *     V9.10.02  01/07/2008  Ebon Clements     CAR 168718                   *
.  *               Changed MRTCN013 description - Remove  hyphen from U/R Scan* 
.  *     V9.10.01  01/07/2008  Ebon Clements     CAR 168718                   *
.  *               Added MRTCN013 - Remove leading zero's and hyphen from     * 
.  *               U/R scan                                                   *
.  *     V9.09.01  19/11/2007  Ebon Clements  CAR 150855                      *
.  *               Added MRTCN012 - Allow Cross Campus Record Tracking        *
.  *     V9.08.01  23/01/2007  Peter Vela     CAR 127930                      *
.  *               Added MRTCN011 - Auto Record Request  from ED              *
.  *     V9.07.01  14/09/2006  Ebon Clements  CAR 107236                      *
.  *               Added MRTCN010 - Using IBA prefix and Allegra barcodes     *
.  *     V9.05.B01 24/02/2006  Ebon Clements  CAR 60884                       *
.  *               Added MRTCN009 - Updating request details                  *
.  *     V9.04.06  24/11/2005  Ebon Clements  CAR 78032                       *
.  *               Added MRCNLINK - Using medical record linked visits        *
.  *     V9.04.05  15/08/2005  Peter Vela     CAR 71973                       *
.  *               Added MRCNPBLK - Print Bulk Functionality                  *
.  *     V9.04.04  29/06/2005  Ebon Clements  CAR 57100                       *
.  *               Added MRCNTRAK - Using medical records tracking system     *
.  *     V9.04.03  27/06/2005  Ebon Clements  CAR 62766                       *
.  *               Added MRCNAUTO - Auto generate next volume number          *
.  *     V9.04.02  05/05/2005  Ebon Clements  CAR 61361                       *
.  *               Added MRCNLAYT - Medical record label layout               *
.  *     V9.04.01  27/04/2005  Peter Vela     CAR 55214                       *
.  *               Added MRCNALHL - MRTCN002 - Highlight Category for Allergy *
.  *     V9.03.00  10/06/2004  Pat Dirito     CAR 42437                       *
.  *               Created include                                            *
.  ****************************************************************************
.
.  ****************************************************************************
.  Sector 60
.  ****************************************************************************
.
.Name     Type   Length   Start   Description
.----     ----   ------   -----   -----------
MRTCN003  DIM       2        79    Label Layout
.                                    1 = Standard (40 columns 8 rows)
.                                    2 = W.A.H.B. (40 columns 5 rows)
.                                    3 = H.R.H.
.                                    4 = T.A.H.B
.                                    5 = Hawkes Bay
.                                    6 = CHC
.                                    7 = ACC
.                                    8 = STH
.                                    9 = SATO
.                                   10 = BHS
MRTCN046  DIM       10       95    Unique Key
.
.
.  ****************************************************************************
.  Sector 61
.  ****************************************************************************
.
.Name     Type   Length   Start   Description
.----     ----   ------   -----   -----------
...
MRTCN047  DIM    10       220     Next Bulk Record Movement Number
.
.
.  ****************************************************************************
.  Sector 97
.  ****************************************************************************
.
.Name     Type   Length   Start   Description
.----     ----   ------   -----   -----------
MRTCN001  DIM    1        157     Checking Volume only Visits for Incompletes
.                                 0=No 1=Yes
MRTCN002  DIM    2        158     Highlight Category for Allergy       *I-55214
.                                 H1 - H9
MRTCN004  DIM    1        160     Display all volumes in pulling list
.                                 0=No 1=Yes
MRTCN005  DIM    1        127     Auto-Generate Next volume number
.                                 0=No
.                                 1=Yes - By U/R and doc type
.                                 2=Yes - By U/R, Home loc and doc type
MRTCN006  DIM    1        161     Using Medical Records Tracking System
.                                 0=No 1=Yes
MRTCN007  DIM    1        162     Print from Bulk Request
.                                 0=No 1=Yes
MRTCN008  DIM    1        163     Using Medical Record Linked Visits?
                                  0=Yes 1=No
MRTCN009  DIM    1        164     Using Update Request Details on Request List
.                                 0=No 1=Yes
MRTCN010  DIM    1        165     Using IBA prefix and Allegra barcode labels
.                                 0=No  1=Yes
MRTCN011  DIM    1        166     Auto Record Request from ED
.                                 0=No  1=Yes
MRTCN012  DIM    1        167     Allow Cross Campus Record Tracking
                                  0=No  1=Yes
MRTCN013  DIM    1        168     Remove hyphen from U/R scan
                                  0=No  1=Yes
MRTCN014  DIM    1        169     Auto track record to ED on registration
                                  0=No  1=Yes
MRTCN015  DIM    1                Operation Date on ICD10 Coding screenn
                                  0=Date Available, 1=No Date, 2=Date Mandatory
MRTCN016  DIM    1                Operation Times on ICD10 Coding screenn
                                  0=Times Mandatory, 1=Times Availab,2=No Times
MRTCN017  DIM    2        170     Max days to search for tracking alerts
MRTCN018  DIM    1        172     Include patients with no MR on pulling lists
MRTCN019  DIM    1        173     Default Operation Date (blnk/0=DDATE 1=ADATE)
MRTCN020  DIM    1        174     Display Proc Clinician on Codeing(0=No, 1=Yes)
MRTCN021  DIM    1        175     Select MRT Tracking Sort Order
.
MRTCN022  DIM    3        105     Location Type Code for Home Location (Cat LT)
MRTCN023  DIM    3        81      Location Type Code for Temp Location (Cat LT)
MRTCN024  DIM    1        133     Using Episode Coding 
MRTCN025  DIM    1        176     Using Tracking Receipt Functionality
MRTCN026  DIM    1        150     Mand check "Additional Code Requirements"
MRTCN027  DIM    1        177     Cancer Reg - bypass Morphology checks MRCNMORP
MRTCN028  DIM    4        178     Medical Records Default Home Location MRCNHLOC
MRTCN029  DIM    3        182     Medical Records Default Record Type   MRCNRCTY
MRTCN030  DIM    2        185     Medical Records Default Volume No.    MRCNVOLM
MRTCN031  DIM    3        187     Medical Records Default Status        MRCNSTAT
MRTCN032  DIM    1        190     Reset Coding Dates (on change)       MRCNRCDT
MRTCN033  DIM    1        190     Using CodeFinder for NZ WIES (Y/N)   MRCNWIES
MRTCN034  DIM    4        151     MR Default Coding Destination        MRCNDCDT
MRTCN035  DIM    1        155     Check for uncoded visits in
.                                 Medical Records Morbidity Coding     MRCNDCUD
MRTCN036  DIM    1        180     Using Centralised Coding (Y/N)
MRTCN037  DIM    3        181     3M Codefinder SYS Tag Value
MRTCN038  DIM    1        149     Using Hospital Id on Unformatted Barcodes
MRTCN039  DIM    1        145     Which Grouper to be used by webPAS
MRTCN040  DIM    60       184     CCA Interface Path
MRTCN041  DIM    1        185     Checking for an ICU/NCU Bed Type?
MRTCN042  DIM    1        156     Copy Request Comments to Movement Comments
MRTCN043  DIM    1        92      Interface to 3M Codefinder (0/1/2)
MRTCN044  DIM    80       157     3M Codefinder Web Interace URL
MRTCN045  DIM    10       237     3M Codefinder Web Interface Session
MRTCN048  DIM    1                Restrict Diagnosis Codes being sent to Grouper
MRTCN049  DIM    1                Default Proceduralist Clinician
MRTCN050  DIM    10               TurboGrouper Remote webPAS User ID
MRTCN051  DIM    1                Use current date/time for OP pulling list
MRTCN052  DIM    1                Using round down for 0-29 mins and up for
.                                 30-59 mins for ICU hrs (not only round up)
MRTCN053  DIM    1                Prompt to copy codes from the last discharge
MRTCN054  DIM    1                Using Grouping Products to return NWAU for Vic
MRTCN055  DIM    8                NWAU Effective Date (Discharged Visits)
MRTCN056  DIM    1                Enable Attestation Coding Audit
MRTCN057  DIM    1                Auto group DRG Grouper when import codefinder
