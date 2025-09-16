. ************************************************************************
. *                                                                      *
. *  Include Name      :   PMSEEHFD.INC                                  *
. *                                                                      *
. *  Function          :   Eclipse Eligibility Header Table              *
. *                                                                      *
. *  File Type         :   SQL                                           *
. *                                                                      *
. *  File Name         :   pmseehaf.dat                                  * 
. *                                                                      * 
. *  Keys              :   KEY23                                         *
. *                                                                      *
. *  Modifications     :                                                 *
. *        V9.11.00  23/01/2009  Davin           CAR xxxxxx              *
. *                  Created FD                                          *
. *                                                                      *
. ************************************************************************
.
.Data File Definition
.--------------------
PMSEEHA1   IFILE SQL, FIXED=331, KEY="U1-20,21-23"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMHEARID  DIM       20        20      1   Account Reference ID
PMHERPTC  DIM       3         3      21   Report counter (right just.)
PMHECTID  DIM       24        24     24   Claim Transaction ID
PMHEBENL  DIM       1         1      48   Benefit Limitations Indicator
.                                         (1=yes)
PMHECFAC  DIM       1         1      49   Claim Fund Assessment Code
PMHECPAM  DIM       9         9      50   CoPayment Amount
PMHECPDR  DIM       4         4      59   CoPayment Days Remaining
PMHECPDI  DIM       1         1      63   CoPayment Description Indicator
.                                         (1=yes)
PMHECPFN  DIM       40        40     64   Current Patient First Name
PMHECPMN  DIM       10        10    104   Current Patient Medicare Number
PMHECPRN  DIM       1         1     114   Current Patient Reference Number
PMHEEXAM  DIM       9         9     115   Excess Amount
PMHEEADI  DIM       1         1     124   Excess Amount Description Indicator
.                                         (1=yes)
PMHEEXBA  DIM       9         9     125   Excess Bonus Amount
PMHEEXDI  DIM       1         1     134   Exclusion Description Indicator
.                                         (1=yes)
PMHEFSTA  DIM       1         1     135   Financial Status
PMHEFRID  DIM       12        12    136   Fund Reference ID
PMHEFSCD  DIM       4         4     148   Fund Status Code
PMHEMSCD  DIM       4         4     152   Medicare Status Code
PMHEPEAI  DIM       1         1     156   PEA Potential Indicator
PMHEPSCD  DIM       30        30    157   Process Status Code
PMHETNAM  DIM       80        80    187   Table Name
PMHETBDI  DIM       1         1     267   Table Description Indicator
.                                         (1=yes)
PMHETBSC  DIM       15        15    268   Table Scale
PMHEVCID  DIM       2         2     283   Voucher ID
PMHEUDTE  DIM       8         8     285   Date Updated (ccyymmdd)
PMHEUTIM  DIM       8         8     293   Time Updated (hh:mm:ss)
PMHESPAR  DIM       30        30    301   Spare Variable
.
.End of Record                      331
+
