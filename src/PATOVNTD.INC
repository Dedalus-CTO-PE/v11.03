. *----------------------------------------------------------------------
. * Include Name  :   PATOVNTD.INC
. *
. * Function      :   CGI variables for Overnight tables
. * Modifications :
. *                   V10.07.01 30/10/2015 J.Tan  CAR 290448
. *                             Added 'Charge on No Pay Day' to Additional fee
. *                   V10.01.01 09/12/2010 Ebon Clements CAR 233149
. *                             Added fees invoiced group
. *                   V9.12.01 07/09/2009 J.Tan   CAR 205303
. *                            Added Contract ID
. *                   V9.09.01 20/08/2007 J.Tan   CAR 144656
. *                            Mods for Non-Accumulative Inliers
. *----------------------------------------------------------------------
.
.  Modifications  :
.
.Lumpusum - pathlfaf
.
.Name     Type      Length   Description
.----     ----      ------   -----------
PTHLF001  DIM       3        Claim code
PTHLF002  DIM       6        Health Fund
PTHLF003  DIM       3        Table Type
PTHLF004  DIM       9        Casemix Code
PTHLF005  DIM       30       Description
PTHLF006  DIM       35       Description 2
PTHLF007  FORM      12.2     Lumpsum Rebate Portion
PTHLF008  FORM      12.2     Lumpsum Patient Portion
PTHLF009  FORM      1        Revenue breakdown  1=yes
PTHLF010  FORM      1        Invoice breakdown  1=yes
PTHLF011  FORM      1        Number of invoices
PTHLF012  FORM      5        Low outlier cutoff
PTHLF013  DIM       6        Contract ID
.
.Additional - patafeaf
.
.Name     Type      Length   Description
.----     ----      ------   -----------
PTAFE001  DIM       3        Claim code
PTAFE002  DIM       6        Health Fund
PTAFE003  DIM       3        Table Type
PTAFE004  DIM       9        Casemix Code
PTAFE009  DIM       3        Bed Type    
PTAFE005  DIM       30       Description
PTAFE006  DIM       35       Description 2
PTAFE007  FORM      12.2     Additonal Rebate Portion
PTAFE008  FORM      12.2     Additonal Patient Portion
PTAFE010  FORM      4        Ending Day
PTAFE011  DIM       1        Non-Accumulative Inliers
PTAFE012  DIM       6        Contract ID
PTAFE013  DIM       3        Fees Invoiced Group
PTAFE014  DIM       1        Charge on No Pay Day
.
.Low outliers - patldfaf
.
.Name     Type      Length   Description
.----     ----      ------   -----------
PTLDF001  DIM       3        Claim code
PTLDF002  DIM       6        Health Fund
PTLDF003  DIM       3        Table Type
PTLDF004  DIM       9        Casemix Code
PTLDF005  DIM       30       Description
PTLDF006  DIM       35       Description 2
PTLDF007  FORM      12.2     Lumpsum Rebate Portion
PTLDF008  FORM      12.2     Lumpsum Patient Portion
PTLDF009  FORM      4        Ending Day
PTLDF010  DIM       6        Contract ID
.
.Inliers/High outliers - pathdfaf
.
.Name     Type      Length   Description
.----     ----      ------   -----------
PTHDF001  DIM       3        Claim code
PTHDF002  DIM       6        Health Fund
PTHDF003  DIM       3        Table Type
PTHDF004  DIM       9        Casemix Code
PTHDF005  DIM       30       Description
PTHDF006  DIM       35       Description 2
PTHDF007  FORM      12.2     Lumpsum Rebate Portion
PTHDF008  FORM      12.2     Lumpsum Patient Portion
PTHDF009  FORM      4        Ending Day
PTHDF010  FORM      1        Day Type 1=Inlier 2=Outlier
PTHDF011  DIM       6        Contract ID
.
