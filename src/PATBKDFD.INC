. V5.07.001 17/08/1998 Glenn 507 Changes
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATBKDFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Bank Deposit Summary                            *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patbnkd.dat                                     *
.  *                                                                    *
.  **********************************************************************
.
PATBNK1   IFILE SQL, FIXED=30, KEY="U1-8,9-11,12-12"
.
. NAME     TYPE      LENGTH    PHYSICAL   START LOC.   DESCRIPTION
. ----     ----      ------    --------   ----------   -----------
KDATE       DIM          8           8          1      DEPOSIT DATE (CCYYMMDD)
KRECTYP     DIM          3           3          9      RECEIPT TYPE (CAT RC)
DKPAYTYP    DIM          1           1         12      PAYMENT TYPE
.                                                      1 = CASH
.                                                      2 = CHEQUE
.                                                      3 = CREDIT CARD
PTBDAMOU    FORM       12.2          8         13      AMOUNT DEPOSITED 
PTBDSPAR    DIM          9           9         21      SPARE
.
.End of Record                                 30 
.
.            SPARE VARIABLES
.
SDATE        DIM          8
SDEPAMT      FORM       12.2 
.
.
.  redefine form fields for key
.  ----------------------------
KPAYTYP     FORM         1     
.
.
KDEPAMT     FORM       9.2 
