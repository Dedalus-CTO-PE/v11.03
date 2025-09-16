.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   HICERRFD.INC                                  *
.  *                                                                      *
.  *  Function          :   HIC Exception Report Errors                   *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   hicerraf.dat                                  * 
.  *                                                                      * 
.  *  Keys              :   KEY8                                          *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *                                                                      *
.  ************************************************************************
.
.Data File Definition
.--------------------
HICERRA1   IFILE SQL, FIXED=200, KEY="U1-5,6-8"
.
.Name     Type    Length Physical Start Description
.----     ----    ------ -------- ----- -----------
HCERBTCH  DIM       5       5       1   Batch Number (1-alpha 4-numeric)
HCERLCNT  DIM       3       3       6   Line Count
HCERPMCI  DIM       8       8       9   MCI (3 Alpha 5 Numeric)
HCERPYEE  DIM       10      10     17   Payee Provider Number
HCERPSRV  DIM       10      10     27   Service Provider Number
HCERCLMN  DIM       8       8      37   Claim Number
HCERVPOS  DIM       2       2      45   Voucher Position
HCERMEDI  DIM       10      10     47   Medicare Number
HCERFNAM  DIM       12      12     57   First Name
HCERITMN  DIM       5       5      69   Item Number
HCERIDAT  DIM       8       8      74   Service Date (ccyymmdd)
HCERBASS  FORM      12.2    8      82   Benefit Assigned
HCERBPAD  FORM      12.2    8      90   Benefit Paid
HCERECOD  DIM       3       3      98   Explanation Code (Cat HD)
HCERSURN  DIM       18      18    101   Surname
HCERDESC  DIM       50      50    119   Error Description
HCERSPAR  DIM       31      31    169   Spare Variable
.
. End of Record                   200
