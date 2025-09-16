. ************************************************************************
. *                                                                      *
. *  Include Name      :   PMSEEDFD.INC                                  *
. *                                                                      *
. *  Function          :   Eclipse Eligibility Claim Details             *
. *                                                                      *
. *  File Type         :   SQL                                           *
. *                                                                      *
. *  File Name         :   pmseedaf.dat                                  * 
. *                                                                      * 
. *  Keys              :   KEY30                                         *
. *                                                                      *
. *  Modifications     :                                                 *
. *        V9.11.00  23/01/2009  Davin           CAR xxxxxx              *
. *                  Created FD                                          *
. *                                                                      *
. ************************************************************************
.
.Data File Definition
.--------------------
PMSEEDA1   IFILE SQL, FIXED=165, KEY="U1-20,21-23,24-27,28-30"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMDEARID  DIM       20        20      1   Account Reference ID
PMDERPTC  DIM       3         3      21   Report counter (right just.)
PMDECFEC  DIM       4         4      24   Claim Fund Explanation Code
PMDEEXPC  DIM       3         3      28   Explanation Code Counter (rj)
PMDECFET  DIM       80        80     31   Claim Fund Explanation Text
PMDECTID  DIM       24        24    111   Claim Transaction ID
PMDESPAR  DIM       30        30    135   Spare Variable
.
.End of Record                      165
+
