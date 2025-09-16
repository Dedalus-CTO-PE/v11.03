.  **********************************************************************
.  *                                                                    *
.  *     Include Name : LEGDTRFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Def'n Include for Accident & Emergency     *
.  *                    Debtor Transaction Details                      *
.  *                    Legacy Visists                                  *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : legdtref.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 22   KEY 32                                 *
.  *                    KEY 31 (3rd index)                              *
.  *                    KEY 24 (4th index)                              *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *      V9.03.00  30/04/2004  Ebon Clements    CAR 49209              *
.  *                Ported from 6.11                                    *
.  **********************************************************************
.
LEGDTRE1   IFILE    SQL, FIXED=178, KEY="U1-8,9-16,17-22"
LEGDTRE2   IFILE    SQL, FIXED=178, KEY="U96-96,143-143,144-151,1-8,9-16,17-22"
LEGDTRE3   IFILE    SQL, FIXED=178, KEY="U1-8,9-16,96-96,61-68,17-22"
LEGDTRE4   IFILE    SQL, FIXED=178, KEY="U168-168,9-16,96-96,1-8,17-22"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
DLATNUMB     DIM       8          8         1      AAE NUMBER
LATINVNO     DIM       8          8         9      (INVOICE #)
DLATTRAN    DIM       6          6        17      TRANSACTION NUMBER
.
LATDDESC     DIM      30         30        23      DESCRIPTION
LAEDTAMN    FORM   12.2          8        53      TOTAL AMOUNT
LATDDATE     DIM       8          8        61      DATE CCYYMMDD
.
LATITEMN    DIM       9          9        69      ITEM NUMBER
.
LATTYPE      DIM       2          2        78      TRANSACTION TYPE PY=PAYMENTS
.                                                                  DB=CHARGE
.                                                                  xx=JOURNALS
.
LATPAYTY   FORM      1           2       80      PAYMENT METHOD
.                                                0 = NOT APPLICABLE
.                                                1 = CASH
.                                                2 = CHEQUE
.                                                3 = CREDIT CARD
.                                                4 = MERCHANT CARDS EG AMEX
.                                                5 = MONEY ORDER

LATRECEP   DIM      12          12       82      RECEIPT NUMBER
.
LATINVPR   FORM      1           2       94      0=INVOICE NOT YET PRINTED
.                                                1=INVOICE PRINTED
.
DLATRECT   DIM       1           1       96      RECORD TYPE 1 - MISC ITEM
.                                                            2 - CASH RECEIPT
.                                                            3 - JOURNALS
.                                                            4 - DEPOSITS
.
.          These next two variables are updated automatically by the
.          I/O include for each write or update
.
LATCHGDT   DIM       8           8       97      DATE THIS RECORD LAST CHANGED
LATCHGTI   DIM       8           8      105      TIME THIS RECORD LAST CHANGED
.
LATMISGR   DIM       3           3      113      MISCELLANEOUS GROUP
LATDEPTY   DIM       3           3      116      DEPOSIT TPE(BLNK IF NOT DEP)
LATBATCH   DIM       8           8      119      BATCH NO FOR MISC.ITMS,CSH,JOUR
.
LAEDTPTP   FORM   12.2           8      127      PATIENT PORTION OF CHARGE
LAEDTRBP   FORM   12.2           8      135      REBATE PORTION OF CHARGE
LATDEPFL   DIM       1           1      143      DEPOSIT FLAG
LATEFFDT   DIM       8           8      144      DATE ITEM ASSIGNED TO FEES INV.
LAEDTGST   FORM      1           2      152      Is GST applicable to this item
.                                                0-No GST, 1-Yes, 2-Unknown GST
LAEDTGSC   DIM       6           6      154      GST Payable Code
LAEDTGSA   FORM    12.2          8      160      GST Amount
LAEDTSSA   DIM       1           1      168      Record sent to SAP (Y/N) ?
LATSPARE    DIM       9           9      169      SPARE
.
.End of Record                      178
.
.  redefine form fields from key
.  -----------------------------
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
LATNUMB      FORM         8                    AAE NUMBER
LATTRANS     FORM         6                    TRANSACTION NUMBER
LATRECTY    FORM         1                    TRANSACTION TYPE
.
LATPATAM    FORM         8.2                  TOTAL AMOUNT
LATPATPO    FORM         8.2                  PATIENT PORTION OF CHARGE
LATREBPO    FORM         8.2                  REBATE PORTION OF CHARGE
