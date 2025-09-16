.  **********************************************************************
.  *                                                                    *
.  *     Include Name : NZPRDTFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for SX Priv.Patient     *
.  *                    Financial Transaction Details                   *
.  *                    FFS and Win/Loss Journals                       *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : nzprdtaf.dat                                    *
.  *                                                                    *
.  *     Modification :                                                 *
.  **********************************************************************
.
NZPRDTA1   IFILE SQL, FIXED=424, KEY="U1-8,91-98,9-14"
NZPRDTA2   IFILE SQL, FIXED=424, KEY="U145-145,175-182,1-8,9-14"        
NZPRDTA3   IFILE SQL, FIXED=424, KEY="U1-8,145-145,193-195,9-14"        
NZPRDTA4   IFILE SQL, FIXED=424, KEY="U1-8,91-98,145-145,9-14"          
NZPRDTA5   IFILE SQL, FIXED=424, KEY="U91-98,145-145,1-8,9-14"          
NZPRDTA6   IFILE SQL, FIXED=424, KEY="U1-8,91-98,145-145,193-195,9-14"  
NZPRDTA7   IFILE SQL, FIXED=424, KEY="U348-363,1-8,91-98,9-14"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
.DTADMNO   DIM       8           8         1      ADMISSION NUMBER
.DTTRANSN1 DIM       6           6         9      TRANSACTION NUMBER
.TTYPEDEB  DIM       1           1        15      TYPE OF DEBT  H = HEALTH FUND
.                                                               G = GOVERNMENT
.                                                               I = INSURANCE
.                                                               P = PATIENT
.TDCODE    DIM       8           8        16      CODE FOR HLTH FUND,GOVERNMENT,
.                                                 INSURANCE OR PATIENT
.TPATAMTT  FORM   12.2           8        24      GROSS TOTAL AMOUNT
.                                            **** NZ Billing -Fixed Amt.
.TPATAMTG  FORM   12.2           8        32      AMOUNT - GOVERNMENT PORTION
.TPATAMTH  FORM   12.2           8        40      ORIG RATE BEFORE ANY DISC,ALLW
.TPATAMTI  FORM   12.2           8        48      INDIVIDUAL DAILY RATE AMOUNT
.                                            **** NZ Billing -Fixed Fee Adjust.
.TPATAMTP  FORM   12.2           8        56      AMOUNT - PATIENT PORTION
.                                            **** NZ Billing -Patient Co-payment
.DTFCENT   DIM       2           2        64      CENTURY  ON/FROM
.DTFYEAR   DIM       2           2        66      YEAR     ON/FROM
.DTFMONTH  DIM       2           2        68      MONTH    ON/FROM
.DTFDAY    DIM       2           2        70      DAY      ON/FROM
.TTCENT    FORM      2           2        72      CENTURY )
.TTYEAR    FORM      2           2        74      YEAR    )         ) ONLY FOR
.TTMONTH   FORM      2           2        76      MONTH   )TO DATE  )ACCOM
.TTDAY     FORM      2           2        78      DAY     )         ) RECORDS
.TTYPE     DIM       2           2        80      TRANSACTION TYPE  PY=PAYMENTS
.                                                                   DB=CHARGE
.                                                                   xx=Journal
.
.TITEMNO   DIM       9           9        82      ITEM NUMBER
.TREF      DIM       8           8        91      REFERENCE (INV #)
.TPAYTYPE  FORM      1           2        99      PAYMENT METHOD
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
.TRECEIPT  DIM      12          12       101      RECEIPT NUMBER
.TDDESC    DIM      30          30       113      DESCRIPTION
.TINVPRT   FORM      1           2       143      0=PAT INVOICE NOT YET PRINTED
.                                                 1=PATIENT INVOICE PRINTED
.
.DTRECTYP  DIM       1           1       145      RECORD TYPE 1 - ACCOM
.                                                             2 - THEATRE
.                                                             3 - MISCELLANEOUS
.                                                             4 - DOCTORS FEES
.                                                             5 - CASH RECEIPT
.                                                             6 - JOURNALS
.                                                             7 - DISCOUNT/ROUND
.                                                             8 - PROC FEES(NZ)
.TNODAYS   FORM      4           3       146      NO OF DAYS (Accom Only)
.TCLAIM    FORM      1           2       149      0 = NOT CLAIMED YET
.                                                 1 = CLAIMED
.                                            **** NZ Billing - (only nzprdtaf)
.                                                 2 = Not Incl.in Win/Loss calc.
.TREBATE   FORM     12.2         8       151      ESTIMATED FUND REBATE
.                                            **** NZ Billing -Funder Contributn
.                                                         or -Funder to Pay
.TDOCTA    DIM       6           6       159      TREATING DOCTOR
.TSERVS    FORM      5           4       165      NUMBER OF SERVICES
.TDOCTO    DIM       6           6       169      OPERATING DOCTOR
.
.          These next two variables are updated automatically by the
.          I/O include for each write or update
.
.TCHGDTE   DIM       8           8       175      DATE THIS RECORD LAST CHANGED
.TCHGTIM   DIM       8           8       183      TIME THIS RECORD LAST CHANGED
.
.TSESSION  DIM       2           2       191      SESSION (Theatre Only)
.TMISGRP   DIM       3           3       193      MISC.GROUP(Misc & Thtr Cat FI)
.                                                 Nursing Home :
.                                                 Account Code (Accom. Only)
.                                      ****  JH-Misc.Item/Doc.Chrg Group(Cat FN)
.TDEPTYP   DIM       3           3       196      DEP TYPE(BLANK IF NOT DEPOSIT)
.TDWARD    DIM       3           3       199      WARD OF ACCOMODATION RECORD
.TCLMTYP   DIM       3           3       202      CLM TYPE WHEN PRINTING INVOICE
.TADMTYP   DIM       3           3       205      ADM.TYPE WHEN PRINTING INVOICE
.TBATCHN   DIM       8           8       208      BTC NO FOR MISC.ITMS,CASH,JOUR
.                                      ****  JH-Misc.Item/Doc.Chrg Group(Cat FI)
.TNINVS    FORM      1           2       216      NUMBER OF INVS TO BE PRINTED
.PTDTLSPT  FORM     12.2         8       218      LUMPSUM AMOUNT PATIENT PORTION
.PTDTLSRB  FORM     12.2         8       226      LUMPSUM AMOUNT REBATE PORTION
.PTDTDTYP  FORM      1           2       234      DAY TYPE (1=low outlier,
.                                                           2=inlier,3=outlier)
.                                                 Nursing Home: JRNL record only
.                                                 1 - Journal accommodation adj.
.                                            **** NZ Billing -0=All 1=PatientInv
.                                                             2=Funder Invoice
.PTDTDES2  DIM       35          35      236      DESCRIPTION 2
.PTDTEPSD  FORM      1           2       271      Mech. Vent. Billing Record?
.                                                 0=No 1=Yes
.                                            *** NZ Private billing 1=Pack Item
.PTDTCCU   FORM      1           2       273      FLAG FOR ADDITIONAL CHARGES
.                                                 for accommodation record only
.                                            **** NZ Billing - for Misc.item
.                                                 0=Inc in contract
.                                                 1=Bill to Patient
.                                                 2=Extra to contract
.                                         1=Community billing - item from Regime
.PTDTGSTA  FORM      1           2       275      Is GST applicable to this item
.                                                 0-No GST, 1-Yes, 2-Unknown GST
.PTDTGSTC  DIM       6           6       277      GST Payable Code
.PTDTGSTM  FORM    12.2          8       283      GST Amount
.PTDTEFFD  DIM       8           8       291      Date item assigned to Fees Inv
.PTDTGSTL  FORM    12.2          8       299      GST Lumpsum Amount
.PTDTTIME  DIM       8           8       307      Time of ORD message (hh:mm:ss)
.PTDTCRST  DIM       1           1       315      Credit Note Status
.                                                 0 or blank - No Credit Note
.                                                 1 - Fully Credited
.                                                 2 - Credit by Item
.PTDTUNIQ  DIM      10          10       316      Unique id for theatre booking
.PTDTBTYP  DIM       3           3       326      BED TYPE (CAT BT) (ACCOM ONLY)
.PTDTCNTR  DIM       6           6       329      Contract/Health Fund
.PTDTCPRC  DIM       9           9       335      Contract Proc.Code (patcmcaf)
.PTDTCONT  DIM       1           1       344      Contribution 1=Yes 0=No
.PTDTSUNQ  DIM       3           3       345      Subsequence Proc.Unique No
.                                                 for nzpspraf (NZ Priv)
.                                              or Banding (CAT TB)(Theatre Only)
.PTDTBTCH  DIM      16          16       348      Batch Details (NZ Priv Exract)
.                                                 format (99999XXXCCYYMMDD)
.                                                 where 99999 = G/L Batch No.
.                                                       XXX   = Hospital Code
.                                                       CCYYMMDD = Extract.date
.TSPARE    DIM      60          60       364      Spare
.
.End of Record                           424

