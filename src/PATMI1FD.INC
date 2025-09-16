. V5.07.001 21/08/1998 Glenn  507 Changes
. *****************************************************************************
. *                                                                           *
. * Include Name  : PATMI1FD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for                               *
. *                 NEW PATIENT ADMISSIONS FILE                               *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : patmi1af.dat                                              *
. *                                                                           *
. * Modification  :                                                           *
. *  **** Programmer Note **************                                      *
. *       Any changes to this FD may also need to be made in PMSQVIFD.        *
. *       Please check this before proceeding.                                *
. *                                                                           *
. *       V10.10.01 21/06/2017 Steve Armstrong                                *
. *                 Changed description for PTMSFHAN from "GPFH Approval      *
. *                 Number" to "eAdmission ID".                               *
. *****************************************************************************
. *       V10.06.02 28/07/2015 Steve Armstrong                                *
. *                 Fixed spelling mistakes in field descriptions for ACANCEL *
. *                 AELIG and PTMIPHPU                                        *
. *       V10.06.01 27/05/2015 Jill Parkinson CAR 313321                      *
. *                 Added NBDS Descriptions to AELIG                          *
. *       V10.05.01 11/08/2014 Steve Armstrong    CAR 304812                  *
. *                 Changed AINVPRT from FORM2 to FORM3                       *
. *       V10.03.02 18/04/2013 J.Tan              CAR 281636                  *
. *                 Added AVISIT = 3 (UNK)                                    *
. *       V10.03.01 11/11/2011 Mike Laming        CAR 251645                  *
. *                 Moved PTMILSDN & PTMIOGNO out of Spare                    *
. *       V10.02.01 13/10/2011 Mike Laming        CAR 251645                  *
. *                 Added "Linked Stat Disch No." & "Orig Admn No." in Spare  *
. *       V10.01.02 11/01/2011 Jill Parkinson     CAR 234014                  *
. *                 Added 3B days and date and increased adiag fields         *
. *       V10.01.01 24/11/2010 Jill Parkinson     CAR 233154                  *
. *                 Added continuous billing and created/updated fields       *
. *       V9.08.02  28/11/2006 Ebon Clements      CAR 120011                  *
. *                 Added field for follow-up for implant invoicing           *
. *       V9.08.01  03/10/2006 J.Tan              CAR 120004                  *
. *                 Added field for Credit Card details on file               *
. *       V9.02.04  22/11/2002 Sandra Barcham     SRF 33570 HOSClaims Phase#1 *
. *                 Added index 8 U/R, Status, Admission Number               *
. *       V9.02.03  24/10/2002 Tracey Nguyen      SRF 20135 HOSClaims Phase#1 *
. *                 Added PTMIDFAS - Date Patient First Aware of Symptoms     *
. *       V9.02.02  08/06/2002 J.Tan                                          *
. *                 Renamed pre-admission indicator                           *
. *       V9.02.01  18/10/2001  Jill Habasque                                 *
. *                 Added expected bed                                        *
. *       V9.00.B01 25/02/2001  Greg Horvat                                   *
. *                 Fixed the 4th & 7th indexes as they were defined          *
. *                 incorrectly                                               *
. *                                                                           *
. *                 V5.09.02 10/02/2002  Bronko Sosic                         *
. *                          Added Indicator                      dim 1       *
. *                 V5.09.01 15/02/2001  Jill Habasque                        *
. *                          Changed ADISC to form 6.2 and ABWGHT to dim 6    *
. *                 V5.09.00 28/11/2000  Tonii  509 mods                      *
. *                          Added new variable PTMICMXP, Casemix Payment(Y/N)*
. *                 V5.08.01 15/08/2000  Caleb Sharman                        *
. *                          Changed Health Fund variables to be 8 chars      *
. *                 24/01/2000  J Habasque                                    *
. *                 Added PTMIGSTA - is GST applicable to this event          *
. *                 Added PATMI1A7                                            *
. *                 24/02/99 J.Tan                                            *
. *                 Added provisional MBS                                     *
. *                                                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
PATMI1A1  IFILE     SQL, FIXED=832, KEY="U1-8"
PATMI1A2  IFILE     SQL, FIXED=832, KEY="U33-33,1-8"
PATMI1A3  IFILE     SQL, FIXED=832, KEY="U17-24,1-8"
PATMI1A4  IFILE     SQL, FIXED=832, KEY="U486-493,1-8"
PATMI1A5  IFILE     SQL, FIXED=832, KEY="U33-33,65-70,53-55,56-58,1-8"
PATMI1A6  IFILE     SQL, FIXED=832, KEY="U33-33,53-55,17-24,1-8"
PATMI1A7  IFILE     SQL, FIXED=832, KEY="U65-70,33-33,486-493,1-8"
PATMI1A8  IFILE     SQL, FIXED=832, KEY="U9-16,33-33,1-8"
.
.Name     Type      Length  Phys.  Start  Description
.-------  ----      ------  -----  -----  ----------------------------------
DAADMNO   DIM       8          8       1  PATIENT ADMISSION NO.
AURNO     DIM       8          8       9  PATIENT U.R NO.
ADATE     DIM       8          8      17  Admission Date (CCYYMMDD)
ATIME     DIM       8          8      25  PATIENT ADMISSION TIME
DASTAT    DIM       1          1      33  ADMISSION STATUS
.                                           1 = PRE-ADMISSION
.                                           2 = CURRENT ADMISSION
.                                           3 = DISCHARGED
.                                           4 = ON LEAVE
.                                           5 = CANCELLED
APORT     DIM       2          2      34  CURRENT PORT USING THIS RECORD
ATRANNO   FORM      3          3      36  NEXT TRANSACTION NUMBER
AINVPRT   FORM      3          3      39  NUMBER OF INVOICES PRINTED 
ALACDTE   DIM       8          8      42  last accom date invd (CCYYMMDD)
ACANCEL   DIM       3          3      50  REASON PRE-ADMISS CANCELATION
AWARD     DIM       3          3      53  PATIENT WARD NO.
ABED      DIM       3          3      56  PATIENT BED NO.
ADOCTR    DIM       6          6      59  DOCTOR REFERRED BY.
ADOCTA    DIM       6          6      65  DOCTOR ATTENDING PATIENT.
ADOCTL    DIM       30        30      71  LOCAL DOCTOR
ASRCE     DIM       3          3     101  PATIENT ADMISSIONS SOURCE  (CAT S )
ATYPE     DIM       3          3     104  PATIENT ADMISSIONS TYPE    (CAT A )
ACLSS     DIM       3          3     107  PATIENT ADMISSIONS CLASS   (CAT P )
ACARE     DIM       3          3     110  PATIENT CARE CLASS         (CAT CC)
AFUNDH    DIM       6          6     113  PATIENT HEALTH FUND
AFNDTB    DIM       8          8     119  PATIENT FUND TABLE
AFNDMM    DIM       10        10     127  PATIENT FUND MEMBERSHIP NO
AELIG     FORM      1          2     137  PATIENT ELIGIBILITY FOR GOV'T
.                                         REBATE. 1 = YES  2 = NO
.                                         STH - DISCHARGE DIAG.PRINTED
.                                         NZ NMDS FLAG
.                                         0=Not Submitted
.                                         1=Submitted
.                                         2=Warning Resubmit next extract
.                                         3=General Resubmit next extract
.                                         4=Visit Data Updated
.                                         5=Coding Data Updated
AVISIT    FORM      1          2     139  PATIENT RELIGIOUS VISIT
.                                                 1 = YES, 2 = NO, 3 = UNK
AALERG    FORM      1          2     141  PATIENT ALLERGIES (Y/N)
.                                                 1 = YES, 2 = NO
AILLN     FORM      1          2     143  PRE-EXISTING ILLNESS
.                                                 1 = YES, 2 = NO
ADIAG1    DIM       80        80     145  PATIENTS ADMITTING DIAG 1
ADIAG2    DIM       80        80     225   "   "     "   "     "  2
ADISC     FORM      6.2        5     305  PATIENT DISCOUNT PERCENTAGE
ADOCTT    DIM       6          6     310  TREATING DOCTOR
ACLSSFT   DIM       3          3     316  DEPARTMENT CODE (Cat AC)
AALLOW    DIM       2          2     319  PATIENT ALLOWANCE CODE
AMBS      DIM       9          9     321  ADMITTING MBS CODE
ACLAIM    DIM       3          3     330  CLAIM CODE (CAT CL)
ADIET     DIM       3          3     333  DIET CODE (CAT DC)
APLOCCR   DIM       3          3     336  PLACE OF OCCR (CATEGORY PO)
ASTAY     FORM      3          3     339  EXPECTED LENGTH OF STAY (DAYS)
ADYHOSP   FORM      3          3     342  No OF DAYS OF HOSPITALIZATION
AMEMB     FORM      1          2     345  DIAMOND VALLEY MEMBERSHIP
.                                                 1 = YES, 2 = NO
AMEMBNO   FORM      6          4     347  MEMBERSHIP NUMBER
ACOMM1    DIM       40        40     351  COMMENTS FIELD 1
ACOMM2    DIM       30        30     391  COMMENTS FIELD 2
APLUR     FORM      1          2     421  PLURALITY OF BABY (0=NORMAL)
APURGE    FORM      1          2     423  PURGE INDICATOR
.                                                 OTHER = NO PURGE
.                                                 1     = PARTIAL
.                                                 2     = FULLY
AUSR1     DIM       3          3     425  USER DEFINED FIELD 1 (CAT U1)
AUSR2     DIM       3          3     428  USER DEFINED FIELD 2 (CAT U2)
AUSR3     DIM       3          3     431  USER DEFINED FIELD 3 (CAT U3)
AUSR4     DIM       3          3     434  USER DEFINED FIELD 4 (CAT U4)
AUSR5     DIM       3          3     437  USER DEFINED FIELD 5 (CAT U5)
AUSR6     DIM       3          3     440  USER DEFINED FIELD 6 (CAT U6)
.                                                 - Clinic Unit No. for Publics
AUSR7     DIM       3          3     443  USER DEFINED FIELD 7 (CAT U7)
.                                                 - Coding status for Publics
ADSCHI    FORM      1          2     446  DISCHARGE INVOICE INDICATOR
.                                                 0 = Discharge inv not printed
.                                                 1 = Have printed discharge inv
ARDRNAM   DIM       22        22     448  FREE FORMAT REFERRING DOCTOR
AFNDYY    DIM       2          2     470  YRS OF FUND MEMBERSHIP (JR,DE)
AFNDCG    DIM       6          6     472  fund cover change (CCYYMM)
AOCCDTE   DIM       8          8     478  DATE OF OCCURRENCE (CCYYMMDD)
ACODDTE   DIM       8          8     486  DATE CODING COMPLETED
ARETDTE   DIM       8          8     494  EXPECTED RETURN DATE FROM LVE
AMUMADM   FORM      8          5     502  MOTHERS ADMSS NUMBER(IF BABY)
DPTMIPVI  DIM       3          3     507  No of prev. visits charged
ABWGHT    DIM       6          6     510  Baby's /Admission weight
PTMSRFGP  DIM       8          8     516  Referring GP.
PTMSGPPC  DIM       6          6     524  GP Practice Code
PTMSFHAN  DIM       20        20     530  eAdmission ID
PTMSECRA  DIM       20        20     550  ECR Approval Number
PTMSMGIN  DIM       3          3     570  Management Intent   (CAT MI)
DPTMIDDI  DIM       1          1     573  Discharged diagnosis printed?
PTMIGPPT  DIM       2          2     574  GP Practice count
PTMIDOFR  DIM       3          3     576  District of Residence (Cat DA)
PTMIREFD  DIM       8          8     579  Date of Referral (EDI nz)
PTMIDFCN  DIM       8          8     587  Date of 1st consultation (EDI nz)
PTMIPHPU  DIM       3          3     595  Principal Health Service Purchaser
.                                         (EDI nz) (CAT HP)
PTMIAGNC  DIM       3          3     598  Health Agency (EDI nz) (CAT HA)
PTMIESSF  DIM       1          1     601  Event Summary supress flag Y/N(EDI nz)
.                                         "Y" = Suppress event summary
.                                         "N" = Don't supress
PTMIUSR8  DIM       3          3     602  User defined field 8 (CAT U8)
PTMIUSR9  DIM       3          3     605  User defined field 9 (CAT U9)
PTMIUSR0  DIM       3          3     608  User defined field 0 (CAT U0)
PTMIPDRG  DIM       4          4     611  Provisional DRG 
PTMIOPER  DIM       4          4     615  Operator who pre-admitted patient
PTMIXWRD  DIM       3          3     619  Expected Ward for Pre-Admission
PTMIADOC  DIM       6          6     622  Associated Doctor          
PTMIREGS  DIM       6          6     628  Registrar                 
PTMIUYN1  FORM      1          2     634  User Defined Y/N Field (1=Yes, 0=No) 
PTMIUYN2  FORM      1          2     636  User Defined Y/N Field (1=Yes, 0=No) 
PTMIPANO  DIM       8          8     638  Previous admission number
PTMIPADT  DIM       8          8     646  Previous admission date (ccyymmdd)
PTMIPCMX  DIM       9          9     654  Casemix Code (Provisional MBS/DRG)
PTMIGSTA  DIM       1          1     663  Is GST applicable to this event
.                                         Y=Yes, N/Space=No, U=Unknown
PTMICMXP  DIM       1          1     664  Casemix Payment (Y/N)
.                                         NZ Billing - FFS has been charged(Y/N)
PTMIEBED  DIM       3          3     665  Expected Bed            
PTMIDMOV  DIM       1          1     668  Pre-admission movement indicator
PTMIDFAS  DIM       8          8     669  Date Patient First Aware of Symptoms
PTMICRCD  DIM       1          1     677  Credit Card Details on File (1=Yes)
PTMIFINV  DIM       1          1     678  Follow-up for implant invoicing(1=Yes)
PTMICONB  DIM       1          1     679  Continuous Billing Event (1=Yes)
PTMIDATC  DIM       8          8     680  Date Created CCYYMMDD
PTMITIMC  DIM       8          8     688  Time Created hh:mm:ss
PTMIWEBC  DIM      10         10     696  Web user Id Created
PTMIDATU  DIM       8          8     706  Date Updated CCYYMMDD
PTMITIMU  DIM       8          8     714  Time Updated hh:mm:ss
PTMIWEBU  DIM      10         10     722  Web user Id Updated
PTMI3BDY  DIM       3          3     732  3B certificate days
PTMI3BAD  DIM       8          8     735  3B certificate admission date
PTMILSDN  DIM       8          8     743  Linked Statistical Discharge Number
PTMIOGNO  DIM       8          8     751  Original Admission Number
PTMSSPAR  DIM      73         73     759  Spare Variable
.
.End of Record                       832
.
.
.         SPARE VARIABLES
.
SSAADMNO  FORM      8                   PATIENT ADMISSION NO.
SSASTAT   FORM      1                   ADMISSION STATUS
SSADATE   DIM       8                   PATIENT ADMISSION DATE (CCYYMMDD)
.
SAADMNO   FORM      8                   PATIENT ADMISSION NO.
SASTAT    FORM      1                   ADMISSION STATUS
SADATE    DIM       8                   PATIENT ADMISSION DATE (CCYYMMDD)
AADAY     DIM       2
AAMON     DIM       2
AAYEAR    DIM       2
AACENT    DIM       2
.
.  redefine form fields for key
.  ----------------------------
.Name     Type      Length  Description
.-------  ----      ------  ---------------------
AADMNO    FORM      8       PATIENT ADMISSION NO.
ASTAT     FORM      1       ADMISSION STATUS
PTMIPVIS  FORM      3       No of prev visits charged
PTMIDDIG  FORM      1       Discharged diagnosis printed?
.
