. V5.07.001 10/08/1998 Glenn  507 Changes
.  **********************************************************************
.  *                                                                    *
.  *     Include Name  : PRIAUDFD.INC                                   *
.  *                                                                    *
.  *     Function      : File Definition include for Private Practice   *
.  *                     Cash Deposit Audit                             * 
.  *                                                                    *
.  *     File Type     : SQL                                            *
.  *                                                                    *
.  *     File Name     : priaudaf.dat                                   *
.  *                                                                    *
.  *     Keys          : KEY 31                                         *
.  *                                                                    *
.  *     Modifications :                                                *
.  *                                                                    *
.  **********************************************************************
.
.Data File Definition
.--------------------
PRIAUDA1  IFILE     SQL, FIXED=169, KEY="U1-8,9-10,11-16,17-28,29-31"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
PRADDEBT   DIM       8         8           1      Debtor Number
DPRADSCN   DIM       2         2           9      Scan Flag
.                                                   0 = Debtor
.                                                   1 = PMI
PRADPRAC   DIM       6         6          11      Medical Practice
PRADRECP   DIM      12        12          17      Receipt Number
DPRADTCN   DIM       3         3          29      Transaction Count
.                                                   (For RCPTRNFD file)
PRADDATE   DIM       8         8          32      Deposit Date (CCYYMMDD)
PRADTIME   DIM       8         8          40      Deposit Time (HH:MM:SS)
PRADOPER   DIM       4         4          48      Operator Id
PRADPORT   FORM      2         2          52      Port
PRADAMOU   FORM   12.2         8          54      Amount Deposited
PRADMETH   FORM      1         2          62      Payment Method
.                                                    0 = Not Applicable
.                                                    1 = Cash
.                                                    2 = Cheque
.                                                    3 = Credit Card
.                                                    4 = Merchant Cards
PRADDRAW   DIM      30        30          64      Cheque Drawer
.                                                    or - Credit Card code
.                                                    or - Merchant Card code
PRADBANK   DIM      30        30          94      Cheque Bank Name
PRADBRNC   DIM      30        30         124      Cheque Branch Name
PRADSPAR   DIM      15        15         154
.
.End of Record                           169
.
.  redefine form fields from key
.  -----------------------------
.NAME       TYPE     LENGTH     START     DESCRIPTION
.----       ----     ------     -----     -----------
PRADSCAN    FORM        2         2       Scan Flag
PRADTCNT    FORM        3         3       Transaction Count
.
.
PRADAMNT  FORM   8.2
