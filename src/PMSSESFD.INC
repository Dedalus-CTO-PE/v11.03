. ************************************************************************
. *                                                                      *
. *  Include Name      :   PMSSESFD.INC                                  *
. *                                                                      *
. *  Function          :   Eclipse Eligibility Services Header Table     *
. *                                                                      *
. *  File Type         :   SQL                                           *
. *                                                                      *
. *  File Name         :   pmssesaf.dat                                  * 
. *                                                                      * 
. *  Keys              :   KEY37                                         *
. *                                                                      *
. *  Modifications     :                                                 *
. *        V9.11.00  23/01/2009  Davin           CAR xxxxxx              *
. *                  Created FD                                          *
. *                                                                      *
. ************************************************************************
.
.Data File Definition
.--------------------
PMSSESA1   IFILE SQL, FIXED=126, KEY="U1-20,21-23,24-34,35-37"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMESARID  DIM       20        20      1   Account Reference ID
PMESRPTC  DIM       3         3      21   Report counter (right just.)
PMESSCOD  DIM       11        11     24   Service Code
PMESSRVC  DIM       3         3      35   Service counter (right justified)
PMESSCTC  DIM       1         1      38   Service Code Type Code
PMESSVID  DIM       4         4      39   Service ID
PMESCAMT  DIM       9         9      43   Charge Amount
PMESSDTE  DIM       8         8      52   Service Date
PMESFBAM  DIM       9         9      60   Fund Benefit Amount
PMESITEM  DIM       5         5      69   Item Number
PMESMBAM  DIM       9         9      74   Medicare Benefit Amount
PMESMEXC  DIM       3         3      83   Medicare Explanation Code
PMESSFAC  DIM       1         1      86   Service Fund Assessment Code
PMESSFEE  DIM       9         9      87   Schedule Fee
PMESSPAR  DIM       30        30     96   Spare Variable
.
.End of Record                      126
+
