. ************************************************************************
. *                                                                      *
. *  Include Name      :   PMSECAFD.INC                                  *
. *                                                                      *
. *  Function          :   Eclipse Claim Transaction Audit Table         *
. *                                                                      *
. *  File Type         :   SQL                                           *
. *                                                                      *
. *  File Name         :   pmsecaaf.dat                                  * 
. *                                                                      * 
. *  Keys              :   KEY26                                         *
. *                                                                      *
. *  Modifications     :                                                 *
. *                                                                      *
. *      15/04/2009  Steve Armstrong  CAR 195016                         *
. *                  Added second and third index.                       *
. *      20/11/2008  Peter Vela       CAR 183976                         *
. *                  Ported to 9.11. Added Hub Error Explanation text.   *
. *      09/10/2008  Steve Armstrong  CAR 180606                         *
. *                  Changed PMEATYPE from a FORM 2 to a DIM 2.          *
. *      30/06/2008  Steve Armstrong  CAR 172082                         *
. *                  Added PMEAEROR and PMEATYPE 6 & 7.                  *
. *      06/06/2008  Steve Armstrong  CAR 160463                         *
. *                  Created FD.                                         *
. ************************************************************************
.
.Data File Definition
.--------------------
PMSECAA1   IFILE SQL, FIXED=206, KEY="U1-8,9-16,17-24,35-36"
PMSECAA2   IFILE SQL, FIXED=206, KEY="U9-16,17-24,35-36,1-8"
PMSECAA3   IFILE SQL, FIXED=206, KEY="U1-8,25-32,9-16,17-24,35-36"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMEAINVN  DIM       8         8       1   Invoice Number
PMEADATE  DIM       8         8       9   Date of Transaction (ccyymmdd)
PMEATIME  DIM       8         8      17   Time of Transaction (hh:mm:ss)
PMEABATN  DIM       8         8      25   Batch Number
PMEASTAT  FORM      2         2      33   Status (see pmsectaf.pmecflag)
PMEATYPE  DIM       2         2      35   Type
.                                           0 = Not Applicable
.                                           1 = Status Request
.                                           2 = Status Request Response
.                                           3 = Report Request
.                                           4 = Report Request Response
.                                           5 = Viewed
.                                           6 = Data Error Response
.                                           7 = Transmission Error Response
PMEAOPER  DIM       10        10     37   Web User Id
PMEATRID  DIM       24        24     47   Transaction Id
PMEAEROR  DIM       4         4      71   Hub Error Code
PMEAEROT  DIM       100       100    75   Hub Error Explanaton Text
PMEASPAR  DIM       31        31     175  Spare Variable
.
.End of Record                       206
+
