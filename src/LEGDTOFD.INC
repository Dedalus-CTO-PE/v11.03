.  **********************************************************************
.  *                                                                    *
.  *     Include Name : LEGDTOFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Outpatients         *
.  *                    Debtors Transaction Details                     *
.  *                    Legacy Visits                                   *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : legdtrof.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY22  KEY23  KEY31 KEY24                       *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *      V9.03.00  03/05/2004  Ebon Clements  CAR 49209                *
.  *                Ported from 6.11                                    *
.  *                                                                    *
.  **********************************************************************
LEGDTRO1   IFILE  SQL, FIXED=194, KEY="U1-8,9-16,17-22"
LEGDTRO2   IFILE  SQL, FIXED=194, KEY="U96-96,97-104,1-8,17-22"
LEGDTRO3   IFILE  SQL, FIXED=194, KEY="U1-8,9-16,96-96,61-68,17-22"
LEGDTRO4   IFILE  SQL, FIXED=194, KEY="U171-171,9-16,96-96,1-8,17-22"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
DLOTNUMB    DIM       8          8         1      OUTPATIENT NUMBER
LOTINVNO    DIM       8          8         9      (INVOICE #)
DLOTTRAN    DIM       6          6        17      TRANSACTION NUMBER
.
LOTDDESC    DIM      30         30        23      DESCRIPTION
LOTDTTAM    FORM   12.2          8        53      TOTAL AMOUNT
LOTDDATE    DIM       8          8        61      DATE CCYYMMDD
LOTITEMN    DIM       9          9        69      ITEM NUMBER
LOTTYPE     DIM       2          2        78      TRANSACTION TYPE  PY=PAYMENTS
.                                                                   DB=CHARGES
.                                                                   xx=JOURNALS
LOTPAYTY    FORM      1           2       80      PAYMENT METHOD
.                                                0 = NOT APPLICABLE
.                                                1 = CASH
.                                                2 = CHEQUE
.                                                3 = CREDIT CARD
.                                                4 = MERCHANT CARDS EG AMEX
.                                                5 = MONEY ORDER
LOTRECEP   DIM      12          12       82      RECEIPT NUMBER
LOTINVPR   FORM      1           2       94      0=INVOICE NOT YET PRINTED
.                                                1=INVOICE PRINTED
DLOTRECT   DIM       1           1       96      RECORD TYPE 1 - MISC ITEM
.                                                            2 - CASH RECEIPT
.                                                            3 - JOURNALS
.                                                            4 - DEPOSITS
.          These next two variables are updated automatically by the
.          I/O include for each write or update
.
LOTCHGDT   DIM       8           8       97      DATE THIS RECORD LAST CHANGED
LOTCHGTI   DIM       8           8      105      TIME THIS RECORD LAST CHANGED
.
LOTMISGR   DIM       3           3      113      MISCELLANEOUS GROUP
LOTDEPTY   DIM       3           3      116      DEPOSIT TYPE(BLANK IF NOT DEP)
LOTBATCH   DIM       8           8      119      BTCH NO FOR MISC.ITMS,CASH,JOUR
LOTDTPPO   FORM   12.2           8      127      PATIENT PORTION OF CHARGE
LOTDTRPO   FORM   12.2           8      135      REBATE PORTION OF CHARGE
DLOTNINV   DIM       1           1      143      No. of invoices to be printed
LOTSERVS   FORM      2           2      144      Number of services
LOTDEPFL   DIM       1           1      146      Deposit flag
LOTEFFDT   DIM       8           8      147      Date item assigned to fees inv
LOTDTGST   FORM      1           2      155      Is GST Applicable?
LOTDTGSC   DIM       6           6      157      GST Payable code
LOTDTGSA   FORM   12.2           8      163      GST Amount 
LOTDTSSA   DIM       1           1      171      Record sent to SAP (Y/N) ?
LOTSPARE   DIM      22          22      172      SPARE
.
.End of record                          194
.
.  redefine form fields from key
.  -----------------------------
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
LOTNUMB     FORM         8             1      OUTPATIENT NUMBER
LOTTRANS    FORM         6            17      TRANSACTION NUMBER
LOTPATAM    FORM        8.2           53      TOTAL AMOUNT
LOTRECTY    FORM         1            88      TRANSACTION TYPE
LOTPATPO    FORM        8.2           123     PATIENT PORTION OF CHARGE
LOTREBPO    FORM        8.2           131     REBATE PORTION OF CHARGE
LOTNINVS    FORM         1            129     No. of invoices to be printed
+
.

