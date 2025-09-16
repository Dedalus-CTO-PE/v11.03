.  *****************************************************************************
.  *                                                                           *
.  *   Include Name : PATDTRFD.INC                                             *
.  *                                                                           *
.  *   Function     : File Definition include for Patient                      *
.  *                  Financial Transaction Details                            *
.  *                                                                           *
.  *   File Type    : SQL                                                      *
.  *                                                                           *
.  *   File Name    : patdtraf.dat                                             *
.  *                                                                           *
.  *   Modification :                                                          *
.  *        V11.01.01 18/02/2021 Tracey Nguyen       TSK 0888639               *
.  *                  Added PTDTTMNO - Theatre Team Number                     *
.  *                  IMPORTANT NOTICE:                                        *
.  *                  Split the existing patdtraf.PTDTPMBS record counter      *
.  *                  field in the file from the current 3 chars (combined 1   *
.  *                  char Team and 2 char MBS counter) to a total length of 4 *
.  *                  chars in 2 separate fields - a 1 char field for Team     *
.  *                  Number and a 3 char field for MBS Counter                *
.  *****************************************************************************
.  *        V10.14.01 27/10/2015 J.Tan Tan           TSK 0857392               *
.  *                  Added TRECTYPE=9 for ABF                                 *
.  *                  19/07/2019 J.Tan TSK 0867131                             *
.  *                  Added PTDTPCOD =3 for NZ Priv.Item record(Not validation)*
.  *        V10.07.01 27/10/2015 J.Tan CAR 303942                              *
.  *                  Added Payment Code                                       *
.  *        V10.04.02 24/01/2014 J.Tan CAR 296422                              *
.  *                  Mods to TCLAIM=2 for SX Win/Loss Calc.                   *
.  *        V10.04.01 20/01/14 J.Tan    CAR 249828                             *
.  *                  Added PMDTPMBS - MBS Team and Counter                    *
.  *        V10.03.01 07/11/13 J.Tan    CAR 283618                             *
.  *                  Mods for Community Billing                               *
.  *        V10.01.01 14/01/2010  Mike Laming   CAR 233146                     *
.  *                  Increase recd length to 485, Added PTDTCNID (Contract Id)*
.  *                  & PTDTLSD1 & PTDTLSD2 (Lumpsum Description 1 & 2)        *
.  *        V9.12.01  21/07/09 J.Tan    CAR 199603                             *
.  *                  Use PTDTSUNQ for Theatre banding                         *
.  *        V9.11.01  28/04/09 J.Tan    CAR 195596                             *
.  *                  Added PTDTADPT PTDTADRB                                  *
.  *        V9.08.05  23/08/07 J.Tan    CAR 140282                             *
.  *                  Changed 7th Index                                        *
.  *        V9.08.04  26/06/07 J.Tan    CAR 140282                             *
.  *                  Added 7th Index for NZ G/L Extract                       *
.  *        V9.08.03  07/05/07 J.Tan    CAR 140282                             *
.  *                  Added field - Batch Number for NZ Priv.Extract           *
.  *        V9.08.02  27/11/06 J.Tan    CAR 120001                             *
.  *                  Added fields for Contract/HF and Cont.Proc.code          *
.  *        V9.08.01  11/10/06 J.Tan    CAR 121178                             *
.  *                  Added flag for half day charge on discharged day         *
.  *        V9.04.02  03/08/05 J.Tan    CAR 62750                              *
.  *                  Removed redefined amount variables                       *
.  *        V9.04.01  26/11/2004 JT    CAR 55293                               *
.  *                  Added unique id                                          *
.  *        V9.03.03  21/05/2004  Pat Dirito   CAR 50035                       *
.  *                  Changed comment for PTDTEPSD to Mech. Vent               *
.  *        V9.03.02  07/01/2004  J.Tan                                        *
.  *                  Added index 5                                            *
.  *        V9.03.01  14/10/2003  J.Tan   CAR 44176                            *
.  *                  Added Credit Note status                                 *
.  *        V9.02.02  04/04/2003  Steve Armstrong (CAR 13395) Merlin           *
.  *                  Added PTDTTIME                                           *
.  *        V9.02.01  06/12/2001  Tonii                                        *
.  *                  Changed comment for PTDTEPSD                             *
.  *                  26/01/2000  Davin                                        *
.  *                  Added PTDTSGTA & PTDTGSTC (GST amount/GST code)          *
.  *                  24/02/99 J.Tan                                           *
.  *                  Added new fields for casemix                             *
.  *        V5.07.001 07/08/1998 Jim Stathopoulos  507 Changes                 *
.  *****************************************************************************
.
PATDTRA1   IFILE SQL, FIXED=485, KEY="U1-8,91-98,9-14"
PATDTRA2   IFILE SQL, FIXED=485, KEY="U145-145,175-182,1-8,9-14"
PATDTRA3   IFILE SQL, FIXED=485, KEY="U1-8,145-145,193-195,9-14"
PATDTRA4   IFILE SQL, FIXED=485, KEY="U1-8,91-98,145-145,9-14"
PATDTRA5   IFILE SQL, FIXED=485, KEY="U91-98,145-145,1-8,9-14"
PATDTRA6   IFILE SQL, FIXED=485, KEY="U1-8,91-98,145-145,193-195,9-14"
PATDTRA7   IFILE SQL, FIXED=485, KEY="U348-363,1-8,91-98,9-14"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
DTADMNO    DIM       8           8         1      ADMISSION NUMBER
DTTRANSN1  DIM       6           6         9      TRANSACTION NUMBER
TTYPEDEB   DIM       1           1        15      TYPE OF DEBT  H = HEALTH FUND
.                                                               G = GOVERNMENT
.                                                               I = INSURANCE
.                                                               P = PATIENT
TDCODE     DIM       8           8        16      CODE FOR HLTH FUND,GOVERNMENT,
.                                                 INSURANCE OR PATIENT
TPATAMTT   FORM   12.2           8        24      GROSS TOTAL AMOUNT
.                                            **** NZ Billing -Fixed Amt.
TPATAMTG   FORM   12.2           8        32      AMOUNT - GOVERNMENT PORTION
TPATAMTH   FORM   12.2           8        40      ORIG RATE BEFORE ANY DISC,ALLW
TPATAMTI   FORM   12.2           8        48      INDIVIDUAL DAILY RATE AMOUNT
.                                            **** NZ Billing -Fixed Fee Adjust.
TPATAMTP   FORM   12.2           8        56      AMOUNT - PATIENT PORTION
.                                            **** NZ Billing -Patient Co-payment
DTFCENT    DIM       2           2        64      CENTURY  ON/FROM
DTFYEAR    DIM       2           2        66      YEAR     ON/FROM
DTFMONTH   DIM       2           2        68      MONTH    ON/FROM
DTFDAY     DIM       2           2        70      DAY      ON/FROM
TTCENT     FORM      2           2        72      CENTURY )
TTYEAR     FORM      2           2        74      YEAR    )         ) ONLY FOR
TTMONTH    FORM      2           2        76      MONTH   )TO DATE  )ACCOM
TTDAY      FORM      2           2        78      DAY     )         ) RECORDS
TTYPE      DIM       2           2        80      TRANSACTION TYPE  PY=PAYMENTS
.                                                                   DB=CHARGE
.                                                                   xx=Journal
.
TITEMNO    DIM       9           9        82      ITEM NUMBER
TREF       DIM       8           8        91      REFERENCE (INV #)
TPAYTYPE   FORM      1           2        99      PAYMENT METHOD
.                                                 0 = NOT APPLICABLE
.                                                 1 = CASH
.                                                 2 = CHEQUE
.                                                 3 = CREDIT CARD
.                                                 4 = MERCHANT CARDS EG AMEX
.                                                 5 = MONEY ORDER
.                                                 6 = EFTPOS
.                                                 7 = BPAY
.                                                 8 = Virtual Terminal (HICAPS)
.                                                 9 = Medicare
.
.                                                 For Accommodation record:
.                                                 9= Half Day charge on Dischg.
.
TRECEIPT   DIM      12          12       101      RECEIPT NUMBER
TDDESC     DIM      30          30       113      DESCRIPTION
TINVPRT    FORM      1           2       143      0=PAT INVOICE NOT YET PRINTED
.                                                 1=PATIENT INVOICE PRINTED
.
DTRECTYP   DIM       1           1       145      RECORD TYPE 1 - ACCOM
.                                                             2 - THEATRE
.                                                             3 - MISCELLANEOUS
.                                                             4 - DOCTORS FEES
.                                                             5 - CASH RECEIPT
.                                                             6 - JOURNALS
.                                                             7 - DISCOUNT/ROUND
.                                                             8 - PROC FEES(NZ)
.                                                             9 - ABF
TNODAYS    FORM      4           3       146      NO OF DAYS (Accom Only)
TCLAIM     FORM      1           2       149      0 = NOT CLAIMED YET
.                                                 1 = CLAIMED
.                                            **** NZ Billing - (only nzprdtaf)
.                                                 2 = Not Incl.in Win/Loss calc.
TREBATE    FORM     12.2         8       151      ESTIMATED FUND REBATE
.                                            **** NZ Billing -Funder Contributn
.                                                         or -Funder to Pay
TDOCTA     DIM       6           6       159      TREATING DOCTOR
TSERVS     FORM      5           4       165      NUMBER OF SERVICES
TDOCTO     DIM       6           6       169      OPERATING DOCTOR
.
.          These next two variables are updated automatically by the
.          I/O include for each write or update
.
TCHGDTE    DIM       8           8       175      DATE THIS RECORD LAST CHANGED
TCHGTIM    DIM       8           8       183      TIME THIS RECORD LAST CHANGED
.
TSESSION   DIM       2           2       191      SESSION (Theatre Only)
TMISGRP    DIM       3           3       193      MISC.GROUP(Misc & Thtr Cat FI)
.                                                 Nursing Home :
.                                                 Account Code (Accom. Only)
.                                      ****  JH-Misc.Item/Doc.Chrg Group(Cat FN)
TDEPTYP    DIM       3           3       196      DEP TYPE(BLANK IF NOT DEPOSIT)
TDWARD     DIM       3           3       199      WARD OF ACCOMODATION RECORD
TCLMTYP    DIM       3           3       202      CLM TYPE WHEN PRINTING INVOICE
TADMTYP    DIM       3           3       205      ADM.TYPE WHEN PRINTING INVOICE
TBATCHN    DIM       8           8       208      BTC NO FOR MISC.ITMS,CASH,JOUR
.                                      ****  JH-Misc.Item/Doc.Chrg Group(Cat FI)
TNINVS     FORM      1           2       216      NUMBER OF INVS TO BE PRINTED
PTDTLSPT   FORM     12.2         8       218      LUMPSUM AMOUNT PATIENT PORTION
PTDTLSRB   FORM     12.2         8       226      LUMPSUM AMOUNT REBATE PORTION
PTDTDTYP   FORM      1           2       234      DAY TYPE (1=low outlier,
.                                                           2=inlier,3=outlier)
.                                                 Nursing Home: JRNL record only
.                                                 1 - Journal accommodation adj.
.                                            **** NZ Billing -0=All 1=PatientInv
.                                                             2=Funder Invoice
PTDTDES2   DIM       35          35      236      DESCRIPTION 2
PTDTEPSD   FORM      1           2       271      Mech. Vent. Billing Record?
.                                                 0=No 1=Yes
.                                            *** NZ Private billing 1=Pack Item
PTDTCCU    FORM      1           2       273      FLAG FOR ADDITIONAL CHARGES 
.                                                 for accommodation record only
.                                            **** NZ Billing - for Misc.item
.                                                 0=Inc in contract   
.                                                 1=Bill to Patient
.                                                 2=Extra to contract
.                                         1=Community billing - item from Regime
PTDTGSTA   FORM      1           2       275      Is GST applicable to this item
.                                                 0-No GST, 1-Yes, 2-Unknown GST
PTDTGSTC   DIM       6           6       277      GST Payable Code
PTDTGSTM   FORM    12.2          8       283      GST Amount
PTDTEFFD   DIM       8           8       291      Date item assigned to Fees Inv
PTDTGSTL   FORM    12.2          8       299      GST Lumpsum Amount
PTDTTIME   DIM       8           8       307      Time of ORD message (hh:mm:ss)
PTDTCRST   DIM       1           1       315      Credit Note Status
.                                                 0 or blank - No Credit Note
.                                                 1 - Fully Credited
.                                                 2 - Credit by Item
PTDTUNIQ   DIM      10          10       316      Unique id for theatre booking
PTDTBTYP   DIM       3           3       326      BED TYPE (CAT BT) (ACCOM ONLY)
PTDTCNTR   DIM       6           6       329      Contract/Health Fund
PTDTCPRC   DIM       9           9       335      Contract Proc.Code (patcmcaf)
PTDTCONT   DIM       1           1       344      Contribution 1=Yes 0=No
PTDTSUNQ   DIM       3           3       345      Subsequence Proc.Unique No
.                                                 for nzpspraf (NZ Priv)
.                                              or Banding (CAT TB)(Theatre Only)
PTDTBTCH   DIM      16          16       348      Batch Details (NZ Priv Exract)
.                                                 format (99999XXXCCYYMMDD)
.                                                 where 99999 = G/L Batch No.
.                                                       XXX   = Hospital Code
.                                                       CCYYMMDD = Extract.date
PTDTADPT   FORM    12.2          8       364      Additional Rate Pat.portion
.                                                 for Casepayment
PTDTADRB   FORM    12.2          8       372      Additional Rate Rebate portion
.                                                 for Casepayment
PTDTCNID   DIM       6           6       380      Contract Id.
PTDTLSD1   DIM      30          30       386      Lumpsum Description 1
PTDTLSD2   DIM      35          35       416      Lumpsum Description 2
PTDTTMNO   DIM       1           1       451      Pat.MBS Team(oprpmbaf)
PTDTPMBS   DIM       3           3       452      Pat.MBS Counter(oprpmbaf)
PTDTPCOD   DIM       3           3       455      Payment Code (Cat Py)
.                                            **** NZ Billing - for Mis.item rec
.                                                   3 = Not validating item code
TSPARE     DIM      27          27       458      Spare
.
.End of Record                           485      
.
STREF      DIM          8
.
.  redefine form fields from key
.  -----------------------------
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
TADMNO     FORM         8             1      ADMISSION NUMBER
TTRANSN1   FORM         6             9      TRANSACTION NUMBER PART 1
TFCENT     FORM         2            49      TRANSACTION/FROM CENTURY
TFYEAR     FORM         2            49      TRANSACTION/FROM YEAR
TFMONTH    FORM         2            51      TRANSACTION/FROM MONTH
TFDAY      FORM         2            53      TRANSACTION/FROM DAY
TRECTYPE   FORM         1           122      TRANSACTION TYPE
