. 02/12/1998  Glenn Berry      5.07 changes
.  ***************************************************************************
.  *                                                                         *
.  *     Include Name : PATAA1FD.INC                                         *
.  *                                                                         *
.  *     Function     : File Definition include for Admission Audit          *
.  *                    File                                                 *
.  *                                                                         *
.  *     File Type    : ASCII                                                *
.  *                                                                         *
.  *     File Name    : pataa1af.txt                                         *
.  *                                                                         *
.  *     Modifications:                                                      *
.  *        V10.05.01 12/08/2014  Steve Armstrong  CAR 304812                *
.  *                  Extended SAINVPRT from FORM2 to FORM3                  *
.  *        V5.09.B01 26/02/2001  Jill Habasque                              *
.  *                  Mods for ABWGHT - changed to DIM 6                     *
.  ***************************************************************************
.  *                    V5.05.01  12/01/1998  Steve Armstrong  SRF 643034    *
.  *                              Added new patma1af variables               *
.  ***************************************************************************
.  *                    V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                    V5.01 04.06.89 K.Peak      (IBA)                *
.  *                          Change U/R & Admission to 8 characters    *
.  *                    V5.02 20.11.92 Whirlpool                        *
.  *                          DUDLEY CHANGES                            *
.  *                    V5.03.01   04/07/95 Whirlpool                   *
.  *                          Release 5.03 and other changes !!!        *
.  *                                                                    *
.  *                                                                    *
.  **********************************************************************
.  *                                                                    *
.  *                                                                    *
 IFGE     $$VER,7
PATAUAA1    SFILE   ASCII, FIXED=256
 XIF
 IFEQ     $$VER,6
PATAUAA1    FILE    ASCII, FIXED=256
 XIF
.
.NAME       TYPE     LENGTH     START     DESCRIPTION
.----       ----     ------     -----     -----------
.SECTOR     FORM         5         1      NEXT AVAILABLE SECTOR
.
.End of Record
.
.    SECTOR          :
.
.NAME       TYPE    LENGTH         START      DESCRIPTION
.----       ----    ------         -----      -----------
.ADD        DIM          2             1      AUDIT DAY
.AMM        DIM          2             3      AUDIT MONTH
.AYY        DIM          2             5      AUDIT YEAR
.ACC        DIM          2             7      audit century
.TIMEIS     DIM          8             9      AUDIT TIME  (HH:MM:SS)
.ACTION     DIM          1            17      ACTION
.                                             A == ADDED
.                                             B == BEFORE CHANGE
.                                             C == CHANGED TO
.OPERCODE   DIM          4            18      OPERATOR CODE
.
.
.SAADMNO    FORM         8            22      PATIENT ADMISSION NO.
SAURNO      DIM          8            30      PATIENT U.R NO.
.SADATE     DIM          8            38      patient admission date (ccyymmdd)
SATIME      DIM          8            44      PATIENT ADMISSION TIME
.SASTAT     FORM         1            52      ADMISSION STATUS
.                                             1 = PRE-ADMISSION
.                                             2 = CURRENT ADMISSION
.                                             3 = DISCHARGED
.                                             4 = ON LEAVE
.                                             5 = CANCELLED
SAPORT      DIM          2            53      CURRENT PORT USING THIS RECORD
SATRANNO    FORM         3            55      NEXT TRANSACTION NUMBER
SAINVPRT    FORM         3            58      NUMBER OF INVOICES PRINTED
SALACDTE    DIM          8            61      last accom date invd ccyymmdd
SACANCEL    DIM          3            69      REASON PRE-ADMMSS CANCELATION
SAWARD      DIM          3            72      PATIENT WARD NO.
SABED       DIM          3            75      PATIENT BED NO.
SADOCTR     DIM          6            78      DOCTOR REFERRED BY.
SADOCTA     DIM          6            84      DOCTOR ATTENDING PATIENT.
SADOCTL     DIM         30            90      LOCAL DOCTOR
SASRCE      DIM          3           120      PATIENT ADMISSIONS SOURCE
SATYPE      DIM          3           123      PATIENT ADMISSIONS TYPE
SACLSS      DIM          3           126      PATIENT ADMISSIONS CLASS
SACARE      DIM          3           129      PATIENT CARE CLASS
SAFUNDH     DIM          6           132      PATIENT HEALTH FUND
SAFNDTB     DIM          8           138      PATIENT FUND TABLE
SAFNDMM     DIM         10           146      PATIENT FUND MEMBERSHIP NO
SAELIG      FORM         1           156      PATIENT ELIGABILITY FOR GOV'T
.                                             REBATE. 1 = YES
.                                                     2 = NO
SAVISIT     FORM         1           157      PATIENT RELIGIOUS VISIT
.                                             1 = YES
.                                             2 = NO
SAALERG     FORM         1           158      PATIENT ALLERGIES (Y/N)
.                                             1 = YES
.                                             2 = NO
SAILLN      FORM         1           159      PRE-EXISTING ILLNESS
.                                             1 = YES
.                                             2 = NO
SADIAG1     DIM         50           160      PATIENTS ADMITTING DIAG 1
.
.                                    210
.
SADIAG2     DIM         50             1       "   "     "   "     "  2
SADISC      DIM          6            51      PATIENT DISCOUNT PERCENTAGE
SADOCTT     DIM          6            57      TREATING DOCTOR
SACLSSFT    DIM          3            63      ACCOUNT CLASSIFICATION
SAALLOW     DIM          2            66      PATIENT ALLOWANCE CODE
SAMBS       DIM          9            68      ADMITTING MBS CODE
SACLAIM     DIM          3            77      CLAIM VARIABLE (FORM CODES FILE)
SADIET      DIM          3            80      DIET CODE
SAPLOCCR    DIM          3            83      PLACE OF OCCURANCE (CATEGORY PO)
.
SASTAY      FORM         3            86      EXPECTED LENGTH OF STAY (DAYS)
SADYHOSP    FORM         3            89      NUMBER OF DAYS OF HOSPITALIZATION
.
SAMEMB      FORM         1            92      DIAMOND VALLEY MEMBERSHIP
.                                             1 = YES
.                                             2 = NO
SAMEMBNO    FORM         6            93      MEMBERSHIP NUMBER
SACOMM1     DIM         40            99      COMMENTS FIELD 1
SACOMM2     DIM         30           139      COMMENTS FIELD 2
SAPLUR      FORM         1           169      PLURATILY OF BABY (0=NORMAL)
.
SAPURGE     FORM         1           170      PURGE INDICATOR
.                                             OTHER = NO PURGE
.                                             1     = PARTIAL
.                                             2     = FULLY
.
SAUSR1      DIM          3           171      USER DEFINED FIELD 1 (CAT U1)
SAUSR2      DIM          3           174      USER DEFINED FIELD 2 (CAT U2)
SAUSR3      DIM          3           177      USER DEFINED FIELD 3 (CAT U3)
SAUSR4      DIM          3           180      USER DEFINED FIELD 4 (CAT U4)
SAUSR5      DIM          3           183      USER DEFINED FIELD 5 (CAT U5)
SAUSR6      DIM          3           186      USER DEFINED FIELD 6 (CAT U6)
SAUSR7      DIM          3           189      USER DEFINED FIELD 7 (CAT U7)
SADSCHI     FORM         1           192      DISCHARGE INVOICE INDICATOR
.
SARDRNAM    DIM         22           193      REFERRING DOCTOR - FREE FORMAT

SAFNDYY     DIM         2    2       215      YRS OF FUND MEMBERSHIP (JR,DE)
SAFNDCG     DIM         6    6       217      fund cover change (ccyymm)
SAOCCDTE    DIM         8    8       223      DATE OF OCCURANCE (CCYYMMDD)
SACODDTE    DIM         8    8       231      DATE CODING COMPLETED
SARETDTE    DIM         8    8       239      expected return date from lve
.                                             (ccyymmdd)
SAMUMADM    FORM        8    8       247      MOTHERS ADMSSION NUMBER (IF BABY)
.
                                     256
.
SDPTMIPV    DIM         3    3         1      No of prev. visits charged
SABWGHT     DIM         6    6         4      Baby's /Admission weight
SPTMSRFG    DIM         8    8        10      Referring GP.
SPTMSGPP    DIM         6    6        18      GP Practice Code
SPTMSFHA    DIM        20    20       24      GPFH Approval Number
SPTMSECR    DIM        20    20       44      ECR Approval Number
.
SPTMSMGI    DIM         3    3        64      Management Intent
SPTMIDIG    DIM         1    1        67      Discharged Diagnosis printed?
SPTMIGPT    DIM         2    2        68      GP Practice count
SPTMIDOF    DIM         3    3        70      District of Residence (Cat DA)
SPTMIREF    DIM         8    8        73      Date of Referral (EDI NZ)
SPTMIDFC    DIM         8    8        81      Date of 1st Consultation (EDI NZ)
SPTMIPHP    DIM         3    3        89      Principle Health Service Purchaser
SPTMIAGN    DIM         3    3        92      Health Agency (EDI NZ)
SPTMIESS    DIM         1    1        95      Event Summary suppress flag
SPTMIUS8    DIM         3    3        96      User defined field 8
SPTMIUS9    DIM         3    3        99      User defined field 9
SPTMIUS0    DIM         3    3       102      User defined field 10
SPTMSDRG    DIM         4    4       105      Provisional DRG
SPTMIOPE    DIM         4    4       109      Operator who pre-admitted
SPTMIXWD    DIM         3    3       113      Expected ward for pre-admission
SPTMIADC    DIM         6    6       116      Associated Doctor
SPTMIREG    DIM         6    6       122      Registrar
SPTMIUY1    FORM        1    1       128      User defined Y/N field 1
SPTMIUY2    FORM        1    1       129      User defined Y/N field 2
.
                                     130
