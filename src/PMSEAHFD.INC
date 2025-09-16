. ************************************************************************
. *                                                                      *
. *  Include Name      :   PMSEAHFD.INC                                  *
. *                                                                      *
. *  Function          :   Eclipse IHC Assessment Header Table           *
. *                                                                      *
. *  File Type         :   SQL                                           *
. *                                                                      *
. *  File Name         :   pmseahaf.dat                                  * 
. *                                                                      * 
. *  Keys              :   KEY38, KEY62                                  *
. *                                                                      *
. *  Modifications     :                                                 *
. *        V9.11.01  12/01/2009  Peter Vela      CAR 183976              *
. *                  Ported from 6.16                                    *
. *        V6.16.01  08/08/2008  Davin           CAR 175850              *
. *                  Added PMAHRPTC and adjusted indexes accordingly     *
. *        V6.16.00  21/05/2008  Davin           CAR 168954              *
. *                  Created FD                                          *
. *                                                                      *
. ************************************************************************
.
.Data File Definition
.--------------------
PMSEAHA1   IFILE SQL, FIXED=158, KEY="U1-3,4-23,24-35,36-38"
PMSEAHA2   IFILE SQL, FIXED=158, KEY="U88-111,1-3,4-23,24-35,36-38"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMAHFBID  DIM       3         3       1   Fund Brand ID (Participant Code)
PMAHARID  DIM       20        20      4   Account Reference ID
PMAHFRID  DIM       12        12     24   Fund Reference ID
PMAHRPTC  DIM       3         3      36   Report counter (right just.)
PMAHFSCD  DIM       4         4      39   Fund Status Code
PMAHFCID  DIM       8         8      43   Facility ID
PMAHCFAC  DIM       1         1      51   Claim Fund Assessment Code
PMAHTCAM  DIM       9         9      52   Total Charge Amount
PMAHTBAM  DIM       9         9      61   Total Benefit Amount
PMAHEXAM  DIM       9         9      70   Excess Amount
PMAHCPAM  DIM       9         9      79   CoPayment Amount
PMAHFTID  DIM       24        24     88   Claim Transaction ID
PMAHUDTE  DIM       8         8     112   Date Updated (ccyymmdd)
PMAHUTIM  DIM       8         8     120   Time Updated (hh:mm:ss)
PMAHSPAR  DIM       30        30    128   Spare Variable
.
.End of Record                      158
+
