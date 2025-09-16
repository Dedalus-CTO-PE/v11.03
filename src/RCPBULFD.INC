. V5.07.001 07/08/1998 Jim Stathopoulos  507 Changes 
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : RCPBULFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Receipting          *
.  *                    Bulk Billing Details                            *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : rcpbulaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 15 , KEY 23, KEY 23                         *
.  *                                                                    *
.  *          V9.04.01  03/08/05 J.Tan    CAR 62750                     *
.  *                    Removed redefined amount variables              *
.  *                                                                    *
.  **********************************************************************
.
RCPBULA1    IFILE   SQL, FIXED=77, KEY="U1-6,7-12,13-15"
RCPBULA2    IFILE   SQL, FIXED=77, KEY="U1-6,7-12,36-38,39-46"
RCPBULA3    IFILE   SQL, FIXED=77, KEY="U39-46,1-6,7-12,13-15"
.
.NAME       TYPE     LENGTH  PHYSICAL    START     DESCRIPTION
.----       ----     ------  --------    -----     -----------
DRBCLAIM    DIM          6       6         1      CLAIM NUMBER
RBCODE      DIM          6       6         7      HEALTH/INS/GOVT CODE
DRBCNT      DIM          3       3        13      UNIQUE COUNTER
RBDATE      DIM          8       8        16      DATE CLAIM SENT
RBSTAT1     FORM         1       2        24      CLAIM STATUS
.                                                 0 = INPUT
.                                                 1 = PRINTED
.                                                 2 = RECEIPTED
RBTYPE      FORM         1       2        26      CLAIM TYPE
.                                                 1 = HEALTH FUND
.                                                 2 = INSURANCE
.                                                 3 = GOVERNMENT
RBRDATE     DIM          8       8        28      DATE RECEIPTED
RBREG       DIM          3       3        36      REGISTER
RBINV       DIM          8       8        39      INVOICE
RBAMT       FORM      12.2       8        47      AMOUNT
RBDISC      FORM      12.2       8        55      DISCOUNT
RBSTAT2     FORM         1       2        63      TRX STATUS
.                                                 0 = ENTERED
.                                                 1 = ACCEPTED
.                                                 2 = REJECTED
RBHOSP      DIM          2       2        65      HOSPITAL
RBSPARE     DIM         10      10        67      SPARE
.End of Record                            77
.
.     redefine form fields from key
.     -----------------------------
.NAME       TYPE     LENGTH    START     DESCRIPTION
.----       ----     ------    -----     -----------
RBCLAIM     FORM         6        1      CLAIM NUMBER
RBCNT       FORM         3       13      UNIQUE COUNTER
