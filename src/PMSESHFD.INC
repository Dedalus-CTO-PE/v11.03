. ************************************************************************
. *                                                                      *
. *  Include Name      :   PMSESHFD.INC                                  *
. *                                                                      *
. *  Function          :   Eclipse IHC Services Header Table             *
. *                                                                      *
. *  File Type         :   SQL                                           *
. *                                                                      *
. *  File Name         :   pmseshaf.dat                                  * 
. *                                                                      * 
. *  Keys              :   KEY52                                         *
. *                                                                      *
. *  Modifications     :                                                 *
. *        V9.11.01  12/01/2009  Peter Vela      CAR 183976              *
. *                  Ported from 6.16                                    *
. *        V6.16.01  08/08/2008  Davin           CAR 175850              *
. *                  Added PMSHRPTC and PMSHSRVC and adjusted index      *
. *                  accordingly                                         *
. *        V6.16.00  21/05/2008  Davin           CAR 168954              *
. *                  Created FD                                          *
. *                                                                      *
. ************************************************************************
.
.Data File Definition
.--------------------
PMSESHA1   IFILE SQL, FIXED=207, KEY="U1-3,4-23,24-35,36-38,39-49,50-52"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMSHFBID  DIM       3         3       1   Fund Brand ID (Participant Code)
PMSHARID  DIM       20        20      4   Account Reference ID
PMSHFRID  DIM       12        12     24   Fund Reference ID
PMSHRPTC  DIM       3         3      36   Report counter (right justified)
PMSHSCOD  DIM       11        11     39   Service Code
PMSHSRVC  DIM       3         3      50   Service counter (right justified)
PMSHSDSC  DIM       80        80     53   Service Description
PMSHNOSV  DIM       2         2     133   Number of Services
PMSHCAMT  DIM       9         9     135   Charge Amount
PMSHFBAM  DIM       9         9     144   Fund Benefit Amount
PMSHFDTE  DIM       8         8     153   From Date
PMSHTDTE  DIM       8         8     161   To Date
PMSHSDTE  DIM       8         8     169   Service Date
PMSHSPAR  DIM       30        30    177   Spare Variable
.
.End of Record                      207
+
