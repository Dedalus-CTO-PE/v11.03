. V5.07.001 11/08/1998 Glenn  507 Changes
. ***********************************************************************
. *                                                                     *
. *     Include Name  : PRIBULFD.INC                                    *
. *                                                                     *
. *     Function      : File Definition include for Private Practice    *
. *                     Bulk Billing Details                            *
. *                                                                     *
. *     File Type     : SQL                                             *
. *                                                                     *
. *     File Name     : pribulkf.dat                                    *
. *                                                                     *
. *     Mods          :                                                 *
. *     V10.13.01  27/07/2018  Richa Phogat  TSK 0848506                *
. *                Updated field length for PRBBDOCT from 6 to 10       *
. *                21/03/2000  J.Tan                                    *
. *                Added GST fields                                     *
. *                12/10/1999  J Habasque                               *
. *                Changed indexes to use 86-94, forms to 12.2          *
. *                                                                     *
. ***********************************************************************
.
.Data File Definition
.--------------------
PRIBULK1  IFILE     SQL, FIXED=134, KEY="U1-8,9-16,90-98,53-55"
PRIBULK2  IFILE     SQL, FIXED=134, KEY="U27-29,30-35,17-26,9-16,1-8,90-98,53-55"
PRIBULK3  IFILE     SQL, FIXED=134, KEY="U44-44,27-29,30-35,9-16,90-98,1-8,53-55"
PRIBULK4  IFILE     SQL, FIXED=134, KEY="U27-29,30-35,17-26,9-16,90-98,1-8,53-55"
PRIBULK5  IFILE     SQL, FIXED=134, KEY="U17-26,27-29,30-35,9-16,90-98,1-8,53-55"
PRIBULK6  IFILE     SQL, FIXED=134, KEY="U44-44,1-8,9-16,90-98,27-29,30-35,53-55"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
DPRBBCLM   DIM      8         8            1      Claim Number
PRBBINVN   DIM      8         8            9      Invoice Number
PRBBDOCT   DIM      10        10          17      Service Doctor
PRBBBULK   DIM      3         3           27      Bulk Bill Code (Cat GB)
PRBBCODE   DIM      6         6           30      Health Fund/Insurance Co./
.                                                 Govt Code
PRBBDATE   DIM      8         8           36      Date Claim Sent (CCYYMMDD)
DPRBBSTA   DIM      1         1           44      Claim Status
.                                                    0 = Input
.                                                    1 = Printed
.                                                    2 = Receipted
.                                                    3 = Rejected
.                                                    4 = Re-Submitted
.                                                    5 = Deleted
PRBBRDAT   DIM      8         8           45      Date Receipted (CCYYMMDD)
PRBBREGR   DIM      3         3           53      Register
PRBBAMOU   FORM    12.2       8           56      Amount Claimed
PRBBPAYD   FORM    12.2       8           64      Amount Paid
PRBBDSCO   FORM    12.2       8           72      Discount
PRBBMEDN   DIM      10       10           80      Medicare Assign Form Number
PRBBITMN   DIM      9         9           90      Item Number
PRBBGSTM   FORM    12.2       8           99      GST amount claimed
PRBBSPAR   DIM     27        27          107      Spare Variable
.
.End of Record                           134
.
.  redefine form fields from key
.  -----------------------------
.NAME       TYPE     LENGTH     START     DESCRIPTION
.----       ----     ------     -----     -----------
PRBBCLAM    FORM       8          1       Claim Number
PRBBSTAT    FORM       1         44       Claim Status
.
PRBBAMNT   FORM     8.2   
PRBBPAID   FORM     8.2  
PRBBDISC   FORM     8.2 
