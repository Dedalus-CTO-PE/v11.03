. ************************************************************************
. *                                                                      *
. *  Include Name      :   PMSOVRFD.INC                                  *
. *                                                                      *
. *  Function          :   Eclipse OPV Response File                     *
. *                                                                      *
. *  File Type         :   SQL                                           *
. *                                                                      *
. *  File Name         :   pmsovraf.dat                                  * 
. *                                                                      * 
. *  Keys              :   KEY26, KEY29                                  *
. *                                                                      *
. *  Modifications     :                                                 *
. *                                                                      *
. ************************************************************************
.
.Data File Definition
.--------------------
PMSOVRA1   IFILE SQL, FIXED=229, KEY="U1-8,9-16,17-24,25-26"
PMSOVRA2   IFILE SQL, FIXED=229, KEY="U27-29,9-16,17-24,1-8,25-26"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMORURNO  DIM       8         8       1   U/R Number
PMORDATE  DIM       8         8       9   Date of OPV (CCYYMMDD)
PMORTIME  DIM       8         8      17   Time of OPV (hh:mm:ss)
DPMORCNT  DIM       2         2      25   Counter (Right Justified)
PMORHOSP  DIM       3         3      27   Hospital Code (pathspaf)
PMORTRID  DIM       24        24     30   Transaction ID
PMORFNAM  DIM       40        40     54   Current Patient First Name
PMORMEDN  DIM       10        10     94   Current Medicare Card No.
PMORMEDR  DIM       1         1     104   Current Medicare Reference No.
PMORSTAT  DIM       4         4     105   Medicare Status Code
PMOREROR  DIM       100       100   109   Error Description
PMORSPAR  DIM       20        20    209   Spare Variable
.
.End of Record                      229
.
. Redefine form fields from key
. -----------------------------
PMORCNTR  FORM      2
