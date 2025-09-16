.  **********************************************************************
.  *                                                                    *
.  *     Include Name : LEGWCOFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    WORKERS COMPENSATION CLAIM DETAILS              *
.  *                    LEGACY VISITS                                   *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : legwcomf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 8                                           *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *     V9.03.01  30/04/2004  Ebon Clements     CAR 49209              *
.  *               Ported from 6.11                                     *
.  *                                                                    *
.  **********************************************************************
.
LEGWCOM1   IFILE SQL, FIXED=283, KEY="U1-8"
.
. NAME     TYPE   LENGTH   PHYSICAL   START LOC.  DESCRIPTION
. ----     ----   ------   --------   ----------  -----------
DLWCADMN    DIM       8           8          1     ADMISSION NUMBER
LWCENAME    DIM      30          30          9     EMPLOYER NAME
LWCEADD1    DIM      30          30         39     EMPLOYER ADDRESS LINE 1
LWCEADD2    DIM      30          30         69     EMPLOYER ADDRESS LINE 2
LWCEADD3    DIM      30          30         99     EMPLOYER ADDRESS LINE 3
LWCEPOST    DIM       4           4        129     EMPLOYER POSTCODE
LWCETELE    DIM      12          12        133     EMPLOYER TELEPHONE
LWCACDAT    DIM       8           8        145     DATE OF ACCIDENT (CCYYMMDD)
LWCACCPT    FORM      1           2        153     ACCEPTED BY INSURANCE COMPANY
.                                                 0 = NO
.                                                 1 = YES
LWCICODE    DIM       6           6        155     INSURANCE COMPANY CODE
LWCCLMNO    DIM      20          20        161     INSURANCE CLAIM NUMBER 
LWCCOMN1    DIM      40          40        181     COMMENTS
LWCCOMN2    DIM      40          40        221     COMMENTS
LWCSPARE    DIM      22          22        261     SPARE
.
.End of Record
.  redefine form fields for key
.  ----------------------------
.NAME     TYPE   LENGTH   START LOC.   DESCRIPTION
.----     ----   ------   ----------   -----------
LWCADMNO   FORM       8           1     ADMISSION NUMBER
