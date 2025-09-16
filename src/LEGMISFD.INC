.  ****************************************************************************
.  *                                                                          *
.  *     Include Name : LEGMISFD.INC                                          *
.  *                                                                          *
.  *     Function     : File Definition include for Legacy                    *
.  *                    LEGACY PATIENT ADMISSIONS DETAILS                     *
.  *                                                                          *
.  *     File Type    : SQL                                                   *
.  *                                                                          *
.  *     File Name    : legmissf.dat                                          *
.  *                                                                          *
.  *     Keys         : KEY8, KEY9, KEY14, KEY20, KEY21                       *
.  *                                                                          *
.  *     Modifications:                                                       *
.  *       V9.10.01  23/05/2008  Mike Laming      CAR 169152                  *
.  *                 Added fields and increased length to 589 (same as V6.15) *
.  *       V9.08.01  18/01/2008  Steve Armstrong  CAR 159429                  *
.  *                 Added Index 6                                            *
.  *       V9.03.00  30/04/2004  Davin         CAR 49209                      *
.  *                 Created FD from 6.11 PATMISFD                            *
.  *                                                                          *
.  ****************************************************************************
.
LEGMISS1   IFILE SQL, FIXED=589, KEY="U1-8"
LEGMISS2   IFILE SQL, FIXED=589, KEY="U33-33,1-8"
LEGMISS3   IFILE SQL, FIXED=589, KEY="U17-24,1-8"
LEGMISS4   IFILE SQL, FIXED=589, KEY="U33-33,64-69,52-54,55-57,1-8"
LEGMISS5   IFILE SQL, FIXED=589, KEY="U33-33,52-54,17-24,1-8"
LEGMISS6   IFILE SQL, FIXED=589, KEY="U9-16,1-8"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
DLAADMNO   DIM       8           8         1      PATIENT ADMISSION NO.
LAURNO     DIM       8           8         9      PATIENT U.R NO.
LADATE     DIM       8           8        17      PATIENT ADMISS DATE (CCYYMMDD)
LATIME     DIM       8           8        25      PATIENT ADMISSION TIME
DLASTAT    DIM       1           1        33      ADMISSION STATUS
.                                                 1 = PRE-ADMISSION
.                                                 2 = CURRENT ADMISSION
.                                                 3 = DISCHARGED
.                                                 4 = ON LEAVE
.                                                 5 = CANCELLED
LAPORT     DIM       2           2        34      CURRENT PORT USING THIS RECORD
LATRANNO   FORM      3           3        36      NEXT TRANSACTION NUMBER
LAINVPRT   FORM      2           2        39      NUMBER OF INVOICES PRINTED 
LALACDTE   DIM       8           8        41      LAST ACCOM DATE INVD CCYYMMDD
LACANCEL   DIM       3           3        49      REASON PRE-ADMMSS CANCELATION
LAWARD     DIM       3           3        52      PATIENT WARD NO.
LABED      DIM       3           3        55      PATIENT BED NO.
LADOCTR    DIM       6           6        58      DOCTOR REFERRED BY.
LADOCTA    DIM       6           6        64      DOCTOR ATTENDING PATIENT.
LADOCTL    DIM      30          30        70      LOCAL DOCTOR
LASRCE     DIM       3           3       100      PATIENT ADMISSIONS SOURCE
LADTYPE    DIM       3           3       103      PATIENT ADMISSIONS TYPE
LACLSS     DIM       3           3       106      PATIENT ADMISSIONS CLASS
LACARE     DIM       3           3       109      PATIENT CARE CLASS
LAFUNDH    DIM       6           6       112      PATIENT HEALTH FUND
LAFNDTB    DIM       8           8       118      PATIENT FUND TABLE
LAFNDMM    DIM      10          10       126      PATIENT FUND MEMBERSHIP NO
LAELIG     FORM      1           2       136      PATIENT ELIGABILITY FOR GOV'T
.                                                 REBATE. 1 = YES
.                                                         2 = NO
LAVISIT    FORM      1           2       138      PATIENT RELIGIOUS VISIT
.                                                 1 = YES
.                                                 2 = NO
LAALERG    FORM      1           2       140      PATIENT ALLERGIES (Y/N)
.                                                 1 = YES
.                                                 2 = NO
LAILLN     FORM      1           2       142      PRE-EXISTING ILLNESS
.                                                 1 = YES
.                                                 2 = NO
LADIAG1    DIM      50          50       144      PATIENTS ADMITTING DIAG 1
LADIAG2    DIM      50          50       194       "   "     "   "     "  2
LADISC     FORM      6.2         5       244      PATIENT DISCOUNT PERCENTAGE
LADOCTT    DIM       6           6       249      Associated Doctor
LACLSSFT   DIM       3           3       255      ACCOUNT CLASSIFICATION
.
LAALLOW    DIM       2           2       258      PATIENT ALLOWANCE CODE
LAMBS      DIM       9           9       260      ADMITTING MBS CODE
LACLAIM    DIM       3           3       269      CLAIM CODE (CATE CL)
LADIET     DIM       3           3       272      DIET CODE
LAPLOCCR   DIM       3           3       275      PLACE OF OCCR (CATEGORY PO)
.
LASTAY     FORM      3           3       278      EXPECTED LENGTH OF STAY (DAYS)
LADYHOSP   FORM      3           3       281      No OF DAYS OF HOSPITALIZATION
.
LAMEMB     FORM      1           2       284      DIAMOND VALLEY MEMBERSHIP
.                                                 1 = YES
.                                                 2 = NO
LAMEMBNO   FORM      6           4       286      MEMBERSHIP NUMBER
LACOMM1    DIM      40          40       290      COMMENTS FIELD 1
LACOMM2    DIM      30          30       330      COMMENTS FIELD 2
LAPLUR     FORM      1           2       360      PLURATILY OF BABY (0=NORMAL)
LABWGHT    DIM       6           6       362      PATIENT WEIGHT
LAPURGE    FORM      1           2       368      PURGE INDICATOR
.                                                 OTHER = NO PURGE
.                                                 1     = PARTIAL
.                                                 2     = FULLY
.
LAUSR1     DIM       3           3       370      USER DEFINED FIELD 1 (CAT U1)
LAUSR2     DIM       3           3       373      USER DEFINED FIELD 2 (CAT U2)
LAUSR3     DIM       3           3       376      USER DEFINED FIELD 3 (CAT U3)
LAUSR4     DIM       3           3       379      USER DEFINED FIELD 4 (CAT U4)
LAUSR5     DIM       3           3       382      USER DEFINED FIELD 5 (CAT U5)
LAUSR6     DIM       3           3       385      USER DEFINED FIELD 6 (CAT U6)
LAUSR7     DIM       3           3       388      USER DEFINED FIELD 7 (CAT U7)
LPTMIU08   DIM       3           3       391      USER DEFINED FIELD 8 (CAT U8)
LPTMIU09   DIM       3           3       394      USER DEFINED FIELD 9 (CAT U9)
LPTMIU10   DIM       3           3       397      USER DEFINED FIELD 10(CAT V1)
LPTMIU11   DIM       3           3       400      USER DEFINED FIELD 11(CAT V2)
.
LADSCHI    FORM      1           2       403      DISCHARGE INVOICE INDICATOR
.                                                 0 = Discharge inv not printed
.                                                 1 = Have printed discharge inv
LARDRNAM   DIM      22          22       405      FREE FORMAT REFERRING DOCTOR
LAFNDYY    DIM       2           2       427      YRS OF FUND MEMBERSHIP (JR,DE)
LAFNDCG    DIM       6           6       429      FUND COVER CHANGE (CCYYMM)
LAOCCDTE   DIM       8           8       435      DATE OF OCCURRENCE (CCYYMMDD)
LACODDTE   DIM       8           8       443      DATE CODING COMPLETED
LARETDTE   DIM       8           8       451      EXPECTED RETURN DATE FROM LVE
LDAMUMAD   FORM      8           5       459      MOTHERS ADMSS NUMBER(IF BABY)
LPTMIPDR   DIM       9           9       464      PROVISIONAL DRG
LPTMIGST   DIM       1           1       473      Is GST app. to event 
.                                                 Y=Yes, N=No, U=Unknown
LPTMIEOC   DIM       8           8       475      EOC Link admission no. (ADT49)
LPTMISLO   DIM       3           3       482      Cat SG-Source of Ref-location
LPTMISCL   DIM       3           3       485      Cat SH-Source of Ref-clinical
LPTMISTR   DIM       3           3       488      Cat SI-Source of Ref-transport
LPTMICMX   DIM       1           1       491      Casemix payment (Y/N)
LPTMIDFA   DIM       8           8       492      Date Patient First Aware of
.                                                 Symptoms (CCYYMMDD)
LPTMIINT   DIM       1           1       500      Interpreter Required 
.                                                 0=No 1=Yes " "=Not Stated
LPTMIPRE   DIM       3           3       501      Preferred Language (Cat LA)
.                                           * new fields ************ *I-169152
LPTMIPSF   DIM       1           1       504      First Psych Admission Yes/No
LPTMIPSR   DIM       2           2       505      Year of Last Psych Admiss (yy)
LPTMIQAS   DIM       12          12      507      QAS Number
LPTMIHFS   DIM       40          40      519      Health Fund SurName
LPTMIHFG   DIM       28          28      559      Health Fund GivenName
LPTMIFUP   DIM       2           2       587      Health Fund UPI
.
.End of Record                           589
.
.             SPARE VARIABLES
.
LSSAADMN   FORM         8                   PATIENT ADMISSION NO.
LSSASTAT   FORM         1                   ADMISSION STATUS
LSSADATE   DIM          8                   PATIENT ADMISSION DATE (CCYYMMDD)
.
LSAADMNO   FORM         8                   PATIENT ADMISSION NO.
LSASTAT    FORM         1                   ADMISSION STATUS
LSADATE    DIM          8                   PATIENT ADMISSION DATE (CCYYMMDD)
LAADAY     DIM          2
LAAMON     DIM          2
LAAYEAR    DIM          2
LAACENT    DIM          2
.
.  redefine form fields for key
.  ----------------------------
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
LAADMNO    FORM         8             1      PATIENT ADMISSION NO.
LASTAT     FORM         1            33      ADMISSION STATUS
LAMUMADM   FORM         8           442      MOTHERS ADMSS NUMBER(IF BABY)
