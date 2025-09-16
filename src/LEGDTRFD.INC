.  **********************************************************************
.  *                                                                    *
.  *     Include Name : LEGDTRFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Legacy              *
.  *                    LEGACY PATIENT DEBTORS TRANSACTION DETAILS      *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : legdtraf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY22 KEY32 KEY31 KEY23 KEY24                   *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *       V9.03.00  03/05/2004  Davin         CAR 49209                *
.  *                 Created FD from 6.11 PATDTRFD                      *
.  *                                                                    *
.  **********************************************************************
.
LEGDTRA1   IFILE SQL, FIXED=366, KEY="U1-8,91-98,9-14"
LEGDTRA2   IFILE SQL, FIXED=366, KEY="U145-145,285-285,286-293,1-8,91-98,9-14"
LEGDTRA3   IFILE SQL, FIXED=366, KEY="U1-8,91-98,145-145,64-65,66-67,68-69,70-71,9-14"
LEGDTRA4   IFILE SQL, FIXED=366, KEY="U284-284,1-8,91-98,9-14"
LEGDTRA5   IFILE SQL, FIXED=366, KEY="U318-318,91-98,145-145,1-8,9-14"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
LDTADMNO   DIM       8           8         1      ADMISSION NUMBER
LDTRNSN1   DIM       6           6         9      TRANSACTION NUMBER
LTTYPDEB   DIM       1           1        15      TYPE OF DEBT  H = HEALTH FUND
.                                                               G = GOVERNMENT
.                                                               I = INSURANCE
.                                                               P = PATIENT
LTDCODE    DIM       8           8        16      CODE FOR HLTH FUND,GOVERNMENT,
.                                                 INSURANCE OR PATIENT
LPDTAMTT   FORM   12.2           8        24      GROSS TOTAL AMOUNT
LPDTAMTG   FORM   12.2           8        32      AMOUNT - GOVERNMENT PORTION
LPDTAMTH   FORM   12.2           8        40      ORIG RATE BEFORE ANY DISC,ALLW
LPDTAMTI   FORM   12.2           8        48      INDIVIDUAL DAILY RATE AMOUNT
LPDTAMTP   FORM   12.2           8        56      AMOUNT - PATIENT PORTION
LDTFCENT   DIM       2           2        64      CENTURY ON/FROM
LDTFYEAR   DIM       2           2        66      YEAR  ON/FROM
LDTFMNTH   DIM       2           2        68      MONTH ON/FROM
LDTFDAY    DIM       2           2        70      DAY   ON/FROM
LTTCENT    FORM      2           2        72      CENTURY )
LTTYEAR    FORM      2           2        74      YEAR    )         ) ONLY FOR
LTTMONTH   FORM      2           2        76      MONTH   )TO DATE  )ACCOM
LTTDAY     FORM      2           2        78      DAY     )         ) RECORDS
LTTYPE     DIM       2           2        80      TRANSACTION TYPE  PY=PAYMENTS
.                                                                   DB=CHARGE
.                                                                   xx=Journal
.
LTITEMNO   DIM       9           9        82      ITEM NUMBER
LTREF      DIM       8           8        91      REFERENCE (INV #)
LTPAYTYP   FORM      1           2        99      PAYMENT METHOD
.                                                 0 = NOT APPLICABLE
.                                                 1 = CASH
.                                                 2 = CHEQUE
.                                                 3 = CREDIT CARD
.                                                 4 = MERCHANT CARDS EG AMEX
.                                                 5 = MONEY ORDER
.                                                 6 = DIRECT DEPOSIT
LTRECEPT   DIM      12          12       101      RECEIPT NUMBER
LTDDESC    DIM      30          30       113      DESCRIPTION
LTINVPRT   FORM      1           2       143      0=PAT INVOICE NOT YET PRINTED
.                                                 1=PATIENT INVOICE PRINTED
.
LDTRCTYP   DIM       1           1       145      RECORD TYPE 1 - ACCOM
.                                                             2 - THEATRE
.                                                             3 - MISCELLANEOUS
.                                                             4 - GOVT SUBSIDY
.                                                             5 - CASH RECEIPT
.                                                             6 - JOURNALS
LTNODAYS   FORM      4           3       146      NO OF DAYS (Accom Only)
LTCLAIM    FORM      1           2       149      0 = NOT CLAIMED YET
.                                                 1 = CLAIMED
LPDTREBT   FORM     12.2         8       151      ESTIMATED FUND REBATE
LTDOCTA    DIM       6           6       159      TREATING DOCTOR
LTSERVS    FORM      5           4       165      NUMBER OF SERVICES
LTDOCTO    DIM       6           6       169      OPERATING DOCTOR
.
.          These next two variables are updated automatically by the
.          I/O include for each write or update
.
LTCHGDTE   DIM       8           8       175      DATE THIS RECORD LAST CHANGED
LTCHGTIM   DIM       8           8       183      TIME THIS RECORD LAST CHANGED
.
LTSESION   DIM       2           2       191      SESSION (Theatre Only)
LTMISGRP   DIM       3           3       193      MISC. GROUP (Misc & Thtr Only)
LTDEPTYP   DIM       3           3       196      DEP TYPE(BLANK IF NOT DEPOSIT)
LTDWARD    DIM       3           3       199      WARD OF ACCOMMODATION RECORD
LTCLMTYP   DIM       3           3       202      CLM TYPE WHEN PRINTING INVOICE
LTADMTYP   DIM       3           3       205      ADM.TYPE WHEN PRINTING INVOICE
LTBATCHN   DIM       8           8       208      BTC NO FOR MISC.ITMS,CASH,JOUR
.                                                 SERVICE TIME FOR MED SERVICES
LTNINVS    FORM      1           2       216      NUMBER OF INVS TO BE PRINTED
LPDTBTYP   DIM       3           3       218      BED TYPE (CAT BT) (ACCOM ONLY)
LPDTPTLS   FORM     12.2         8       221      LUMPSUM AMOUNT PATIENT PORTION
LPDTRBLS   FORM     12.2         8       229      LUMPSUM AMOUNT REBATE PORTION
LPDTDTYP   FORM      1           2       237      DAY TYPE (1=low outlier,
.                                                           2=inlier,3=outlier)
LPDTDES2   DIM       35          35      239      DESCRIPTION 2
LPDTEPSD   FORM      1           2       274      Spare variable
LPTDTCCU   FORM      1           2       276      FLAG FOR ADDITIONAL CHARGES 
.                                                 for accommodation record only
LPDTSURG   DIM       6           6       278      Surgeon (MBS Item only)
LDPDTAPA   DIM       1           1       284      Accounts Payable Flag
.                                                    0=Not Applicable
.                                                    1=Invoice Not Balanced
.                                                    2=Waiting to be sent (bal)
.                                                    3=Sent to Accounts Payable
LPDTDEPS   DIM       1           1       285      Deposit flag
LPDTEFFD   DIM       8           8       286      Date item assigned to Fees Inv
LPDTGSTA   FORM      1           2       294      Is GST applicable to this item
.                                                 0-No GST, 1-Yes, 2-Unknown GST
LPDTGSTC   DIM       6           6       296      GST Payable Code
LPDTGSTM   FORM    12.2          8       302      GST Amount
LPDTGSTL   FORM    12.2          8       310      GST Lumpsum Amount
LPDTSSAP   DIM       1           1       318      Record sent to SAP (Y/N) ?
LPDTMVBR   DIM       1           1       319      Mech. Vent. Billing Record?
.                                                 1=Yes
LTSPARE    DIM       46          46      320      SPARE
.
.End of Record                           366
.
LSTREF     DIM          8
.
.  redefine form fields from key
.  -----------------------------
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
LTADMNO    FORM         8                    ADMISSION NUMBER
LQTADMNO   FORM         8                    ADMISSION NUMBER
LTTRNSN1   FORM         6                    TRANSACTION NUMBER PART 1
LTFCENT    FORM         2                    TRANSACTION/FROM CENTURY
LTFYEAR    FORM         2                    TRANSACTION/FROM YEAR
LTFMONTH   FORM         2                    TRANSACTION/FROM MONTH
LTFDAY     FORM         2                    TRANSACTION/FROM DAY
LTRCTYPE   FORM         1                    TRANSACTION TYPE
LPTTAPAY   FORM         1                    Accounts Payable Flag
LTPTAMTT   FORM         8.2                  GROSS TOTAL AMOUNT
LTPTAMTG   FORM         8.2                  AMOUNT - GOVERNMENT PORTION
LTPTAMTH   FORM         8.2                  ORIG RATE BEFORE ANY DISC,ALLW
LTPTAMTI   FORM         8.2                  INDIVIDUAL DAILY RATE AMOUNT
LTPTAMTP   FORM         8.2                  AMOUNT - PATIENT PORTION
LTREBATE   FORM         8.2                  ESTIMATED FUND REBATE
LPDTLSPT   FORM         8.2                  LUMPSUM AMOUNT PATIENT PORTION
LPDTLSRB   FORM         8.2                  LUMPSUM AMOUNT REBATE PORTION
