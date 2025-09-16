. ************************************************************************
. *                                                                      *
. *  Include Name      :   PMSOESFD.INC                                  *
. *                                                                      *
. *  Function          :   Eclipse Online Eligibility Services Table     *
. *                                                                      *
. *  File Type         :   SQL                                           *
. *                                                                      *
. *  File Name         :   pmsoesaf.dat                                  * 
. *                                                                      * 
. *  Keys              :   KEY14                                         *
. *                                                                      *
. *  Modifications     :                                                 *
. *        V9.11.00  19/02/2009  Davin           CAR xxxxxx              *
. *                  Created FD                                          *
. *                                                                      *
. ************************************************************************
.
.Data File Definition
.--------------------
PMSOESA1   IFILE SQL, FIXED=82, KEY="U1-8,9-11,12-14"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMOSVISN  DIM       8         8       1   Visit Number
PMOSCNTR  DIM       3         3       9   Report Counter (right just.)
PMOSSCNT  DIM       3         3      12   Service Counter (right just.)
PMOSRTYP  DIM       1         1      15   Service Record Type
.                                           3 - Theatre Fees
.                                           6 - Misc.charge (prosthesis)
PMOSITEM  DIM       9         9      16   Theatre/Item Code
PMOSQUAN  DIM       3         3      25   Quantity
PMOSPDTE  DIM       8         8      28   Date of Procedure
PMOSCDTE  DIM       8         8      36   Date Created (ccyymmdd)
PMOSCTIM  DIM       8         8      44   Time Created (hh:mm:ss)
PMOSSPAR  DIM       30        30     52   Spare Variable
.
.End of Record                       82
+
