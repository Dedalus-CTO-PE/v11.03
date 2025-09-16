.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   HICRCIFD.INC                                  *
.  *                                                                      *
.  *  Function          :   HIC Reconciliation Item Line Table            *
.  *                        (Type "E" segment)                            *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   hicrciaf.dat                                  * 
.  *                                                                      * 
.  *  Keys              :   KEY26, KEY18                                  *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *                                                                      *
.  ************************************************************************
.Data File Definition
.--------------------
HICRCIA1   IFILE SQL, FIXED=139, KEY="U1-5,6-7,8-16,17-24,25-26"
HICRCIA2   IFILE SQL, FIXED=139, KEY="U92-99,100-107,25-26"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HCRIBTCH  DIM       5         5       1   Batch Number
HCRIVPOS  DIM       2         2       6   Voucher Position
HCRIITMN  DIM       9         9       8   Item Number
HCRIIDAT  DIM       8         8      17   Item Date (ccyymmdd)
HCRIICNT  DIM       2         2      25   Item Count
HCRIMEDI  DIM       10        10     27   Medicare Number
HCRICARD  DIM       1         1      37   Medicare Card Flag
HCRISURN  DIM       18        18     38   Surname
HCRIFNAM  DIM       12        12     56   First Name
HCRIBENA  FORM      12.2      8      68   Benefit Assigned
HCRIBENP  FORM      12.2      8      76   Benefit Paid
HCRIBENR  FORM      12.2      8      84   Benefit Rejected
HCRICLMN  DIM       8         8      92   Claim Number (from PAS)
HCRIVISN  DIM       8         8     100   Visit Number (from PAS)
HCRIREJR  DIM       3         3     108   Rejection Reason (hicemsaf)
HCRIREJD  DIM       8         8     111   Rejection Date (ccyymmdd)
HCRISPAR  DIM       20        20    119   Spare Variable
.
.End of Record                      139
