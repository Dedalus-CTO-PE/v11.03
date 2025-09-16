. V5.07.001 01/09/1998 Glenn 507 Changes
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATMA1FD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for                     *
.  *                    NEW PATIENT MASTER FILE                         *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patma1af.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 8                                           *
.  *                                                                    *
.  * Modifications  :                                                   *
.  *  **** Programmer Note **************                               *
.  *       Any changes to this FD may also need to be made in PMSQPTFD. *
.  *       Please check this before proceeding.                         *
.  *                                                                    *
.  *      V10.08.01 05/04/2016 Steve Armstrong  TSK 0279181             *
.  *               Added PTMAUUID & PTMAUTIM                            *
.  **********************************************************************
.  *      V10.03.01 07/10/2013 Ebon Clements  CAR 275205                *
.  *               Added PSTAT = 4 - EBS created U/R                    *
.  **********************************************************************
.  *      V10.02.01 16/06/2011 Ebon Clements  CAR 239530                *
.  *               Added PTMADCUD, PTMADCUT and PTMADCUU                *
.  **********************************************************************
.  *      V10.01.02 06/01/2011 Jill Parkinson CAR 236279                *
.  *               Added PTMASNAM                                       *
.  *      V10.01.01 16/11/2010 Jill Parkinson CAR 233088                *
.  *               Moved HF membership number and added Demographics    *
.  *               Confirmed Date                                       *
.  **********************************************************************
.  *      V9.09.01 05/12/2007  Jill Habasque  CAR 154474                *
.  *               Added index 4                                        *
.  **********************************************************************
.  *      V9.02.01 14/11/2001  Steve Armstrong                          *
.  *               Changed PHOSP to use zero for "No"                   *
.  **********************************************************************
.  *      V5.09.01 20.12.2000  Sandra Barcham                           *
.  *               Added index 3                                        *
.  *      V5.08.01 15/08/2000  Caleb Sharman                            *
.  *               Changed Health Fund variables to be 8 chars          *
.  *      V5.03.01  24/10/1995    Justin Coates  (SUHT mods)            *
.  *                allow for unknown date of birth and death           *
.  **********************************************************************
.  *                  : V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                    V5.01 01.06.89 K.Peak      (IBA)                *
.  *                          Change U/R to 8 characters                *
.  *                    V5.02 16/08/89 Graeme Williams (I.B.A)          *
.  *                          Added CHCNOTES, expanded PTMASPAR to 43     *
.  *                 V5.01.01 14/10/89 S.Barcham       (I.B.A)          *
.  *                          Added PDEFDIET, PINITHOS, PTMASPAR to 38    *
.  *                 V5.01.02 01/03/90 S. O'Gorman                      *
.  *                          Added ALRTMASK for alerts                 *
.  *                 V5.01.03 08/11/92 S. O'Gorman                      *
.  *                          Created New File Layout From PATMA1FD     *
.  *                 V5.01.04 01/12/93 S. Barcham                       *
.  *                          Added PTMAEMPC,PTMANOKE,PTMANOKO,PTMADCNO *
.  *                 V5.01.05 12/01/94 S. O'Gorman                      *
.  *                          Modified for new SFORMAT compile          *
.  *                                                                    *
.  **********************************************************************
.
PATMA1A1   IFILE SQL, FIXED=1045, KEY="U1-8"
PATMA1A2   IFILE SQL, FIXED=1045, KEY="D286-293"
PATMA1A3   IFILE SQL, FIXED=1045, KEY="U328-337,1-8"
PATMA1A4   IFILE SQL, FIXED=1045, KEY="U75-93,1-8"
.
. NAME     TYPE  LENGTH  PHYSICAL  START LOC.   DESCRIPTION
. ----     ----  ------  --------  ----------   -----------
PURNO      DIM      8         8          1      PATIENT U.R NO.
PPORT      DIM      2         2          9      PORT CURRENTLY UPDATING U/R
PCHGDTE    DIM      8         8         11      date of last change   (ccyymmdd)
PTITL      DIM      4         4         19      PATIENT TITLE
PHOSP      FORM     1         2         23      HOSPITAL LAST 12 MONTHS
.                                               1-YES,0-NO
PLDAYS     FORM     3         3         25      NO DAYS LAST IN HOSPITAL
PBDEBT     FORM     1         2         28      BAD DEBTOR INDICATOR 0-NO 1-YES
PSNAME     DIM     20        20         30      PATIENT SURNAME
PGNAME     DIM     25        25         50      PATIENTS GIVEN NAMES
PPSNAME    DIM     19        19         75      PATIENTS PREVIOUS SURNAME /
.                                               New UR number for merged URs
PADD1      DIM     35        35         94      PATIENT ADDRESS LINE 1
PADD2      DIM     35        35        129      PATIENT ADDRESS LINE 2
PSUBRB     DIM     35        35        164      PATIENT ADDRESS LINE 3
PADD4      DIM     35        35        199      PATIENT ADDRESS LINE 4
PPOST      DIM      8         8        234      PATIENT POSTCODE
PTELEP     DIM     20        20        242      TELEPHONE PRIVATE
PTELEB     DIM     20        20        262      TELEPHONE BUSINESS 
PSEX       DIM      1         1        282      PATIENTS SEX
PMSTAT     DIM      3         3        283      PATIENTS MARTIAL STATUS (Cat M)
PBDATE     DIM      8         8        286      date of birth         (ccyymmdd)
PSAGE      FORM     3         3        294      PATIENTS AGE
PCONT      DIM      3         3        297      COUNTRY OF BIRTH (Cat C)
PREG       DIM      3         3        300      PATIENTS RELIGION (Cat R)
PTYPE      DIM      3         3        303      PATIENTS TYPE (Cat T)
POCCUP     DIM     14        14        306      PATIENTS OCCUPATION
PLDDATE    DIM      8         8        320      last discharge date   (ccyymmdd)
PMEDI      DIM     10        10        328      MEDICARE NUMBER
PPENNO     DIM     15        15        338      PENSION NUMBER
PPNDTE     DIM      6         6        353      pension no expiry date  (ccyymm)
PREPAT     DIM     10        10        359      REPATRIATION NUMBER
PSMOK     FORM      1         2        369      PATIENT SMOKER
.                                               1 = YES
.                                               2 = NO
PSTAT      FORM     1         2        371      PATIENT STATUS
.                                               0 - VALID U/R  (IN MASTER FILE)
.                                               1 - CANCELLED U/R
.                                               2 - ASSOCIATED U/R
.                                               NOTE :- ASSOCIATED U/R IS NOW
.                                                       PLACED IN THE PADMNO
.                                               3 - NOT YET ALLOCATED
.                                               ****** (IN PRAM FILE) ********
.                                               4 - EBS Created U/R   
PMICRO     DIM     20        20        373      MICROFILM ADDRESS
.                                               1 -  6  U.R. NO.
.                                               7 - 10  ROLL NO.
.                                               11 - 14  POSITION NO.
.                                               15 - 16  YEAR
PCEASE     FORM     1         2        393      DECEASED INDICATOR
.                                               0 = NO
.                                               1 = YES
PCASE      FORM     1         2        395      CASE NOTES INDICATOR
PAUTOPY    FORM     1         2        397      AUTOPSY INDICATOR
.                                               0 = NO
.                                               1 = YES
.
PHIGH1     DIM      3         3        399      HIGHLIGHT CODE 1 (Cat H1)
PHIGH2     DIM      3         3        402      HIGHLIGHT CODE 2 (Cat H2)
PHIGH3     DIM      3         3        405      HIGHLIGHT CODE 3 (Cat H3)
.
PLOCDOC    DIM     30        30        408      LOCAL DOCTOR
.
PFUNDH     DIM      6         6        438      HEALTH FUND
PFNDTB     DIM      8         8        444      HEALTH FUND TABLE
PTMASPAR   DIM     10        10        452      Spare - was HF membership no
.
PUSR1      DIM      3         3        462      USER DEFINED FIELD 1 (Cat P1)
PUSR2      DIM      3         3        465      USER DEFINED FIELD 2 (Cat P2)
PUSR3      DIM      3         3        468      USER DEFINED FIELD 3 (Cat P3)
PUSR4      DIM      3         3        471      USER DEFINED FIELD 4 (Cat P4)
PUSR5      DIM      3         3        474      USER DEFINED FIELD 5 (Cat P5)
PUSR6      DIM      3         3        477      USER DEFINED FIELD 6 (Cat P6)
PUYN1      FORM     1         2        480      USER DEFINED Y/N FIELD 1
.                                               (1=Y,0=N)
PUYN2      FORM     1         2        482      USER DEFINED Y/N FIELD 2
.                                               (1=Y,0=N)
PUYN3      FORM     1         2        484      USER DEFINED Y/N FIELD 3
.                                               (1=Y,0=N)
PYRRES     FORM     2         2        486      NUMBER OF YEARS RESIDENT
.
.              NEXT OF KIN DATA
.
PNKNAME    DIM     20        20        488      NEXT OF KIN 1 NAME
PNKADD1    DIM     35        35        508      N.O.K 1 ADDRESS LINE 1
PNKADD2    DIM     35        35        543      N.O.K 1 ADDRESS LINE 2
PNKSUBR    DIM     35        35        578      N.O.K 1 ADDRESS LINE 3
PNKADD4    DIM     35        35        613      N.O.K 1 ADDRESS LINE 4
PNKPOST    DIM      8         8        648      N.O.K 1 POSTCODE
PNKTELP    DIM     20        20        656      N.O.K 1 PRIVATE TELEPHONE 
PNKTELB    DIM     20        20        676      N.O.K 1 BUSINESS TELEPHONE 
PNKRELP    DIM     10        10        696      N.O.K 1 RELATIONSHIP
.
PLSTINP    FORM     8         5        706      LAST INPATIENT  VISIT NUMBER
PLSTOUT    FORM     8         5        711      LAST OUTPATIENT VISIT NUMBER
PNXRAY     FORM     3         3        716      NUMBER OF PREVIOUS X-RAYS
.
.          Additional Health Fund details
.
PFNDYY     DIM      2         2        719      YRS OF FUND MEMBERSHIP (JR,DE)
PFNDCG     DIM      6         6        721      fund cover change       (ccyymm)
.
PDECDTE    DIM      8         8        727      date of death         (ccyymmdd)
PHCNOTES   DIM     20        20        735      CASE NOTES INDICATORS
PDIET      DIM      3         3        755      DEFAULT DIET CODE (Cat DC)
PINITHOS   DIM      2         2        758      HOSPITAL U/R INITIATED FROM
PHKADUNI   DIM     10        10        760      HONG KONG UNIQUE ADDRESS ID
PTMAEMPC   DIM      6         6        770      PATIENT EMPLOYER CODE
PTMANOKO   DIM     14        14        776      NEXT OF KIN OCCUPATION
PTMANOKE   DIM      6         6        790      NEXT OF KIN EMPLOYER CODE
PTMADCNO   DIM     10        10        796      DEATH CERTIFICATE NUMBER 
PTMAUKDB   DIM      1         1        806      Unknown Date of Birth (Y/N)
PTMAUKDD   DIM      1         1        807      Unknown Date of Death (Y/N)
PFNDMM     DIM     19        19        808      Health Fund Membership no.
PTMADCDT   DIM      8         8        827      Demographics Conf Date CCYYMMDD
PTMAHCP1   DIM     10        10        835      HCP 1 (pmshcpaf)
PTMAHCL1   DIM     10        10        845      HCP 1 Practice (pmshclaf)
PTMAHCG1   DIM      2         2        855      HCP 1 Grp Count (pmshcgaf
PTMAHCP2   DIM     10        10        857      HCP 2 (pmshcpaf)
PTMAHCL2   DIM     10        10        867      HCP 2 Practice (pmshclaf)
PTMAHCG2   DIM      2         2        877      HCP 2 Grp Count (pmshcgaf
PTMAHCP3   DIM     10        10        879      HCP 3 (pmshcpaf)
PTMAHCL3   DIM     10        10        889      HCP 3 Practice (pmshclaf)
PTMAHCG3   DIM      2         2        899      HCP 3 Grp Count (pmshcgaf
PTMAHCP4   DIM     10        10        901      HCP 4 (pmshcpaf)
PTMAHCL4   DIM     10        10        911      HCP 4 Practice (pmshclaf)
PTMAHCG4   DIM      2         2        921      HCP 4 Grp Count (pmshcgaf
PTMAHCP5   DIM     10        10        923      HCP 5 (pmshcpaf)
PTMAHCL5   DIM     10        10        933      HCP 5 Practice (pmshclaf)
PTMAHCG5   DIM      2         2        943      HCP 5 Grp Count (pmshcgaf
PTMASNAM   DIM     40        40        945      Patient Surname
PTMADCUD   DIM      8         8        985      Demog. Conf Upd Date (CCYYMMDD)
PTMADCUT   DIM      8         8        993      Demog. Conf Upd Time (HH:MM:SS)
PTMADCUU   DIM      10       10       1001      Demog. Conf Upd User (websecaf)
PTMAUUID   DIM      10       10       1011      Web User Id who Last Updated
.                                               Record (websecaf)
PTMAUTIM   DIM      8         8       1021      Time Record Last Updated
.                                               (hh:mm:ss)
PTMASPA2   DIM     16        16       1029      Spare
.End of Record                        1045
.
.
.   Patient Alert Variables
.  -------------------------
.
ALRTMASK  INIT      "00000000"
.
          INC       PATMX1FD/INC
+
.

