. *----------------------------------------------------------------------
. * Include Name  :   PATSMDTD.INC
. *
. * Function      :   CGI variables for Sameday tables
. * Modification      V10.01.01 09/12/2010 Ebon Clements CAR 233149
. *                   Added fees invoiced group
. *                   V9.12.01 07/09/2009 J.Tan    CAR 205303
. *                   Added Contract ID
. *----------------------------------------------------------------------
.
.  Modifications  :
.
.Lumpusum - patlsdaf
.
.Name     Type      Length   Description
.----     ----      ------   -----------
PTLSD001  DIM       3        Claim code
PTLSD002  DIM       6        Health Fund
PTLSD003  DIM       3        Table Type
PTLSD004  DIM       9        Casemix Code
PTLSD005  DIM       30       Description
PTLSD006  DIM       35       Description 2
PTLSD007  FORM      12.2     Lumpsum Rebate Portion
PTLSD008  FORM      12.2     Lumpsum Patient Portion
PTLSD009  FORM      1        Revenue breakdown  1=yes
PTLSD010  FORM      1        Invoice breakdown  1=yes
PTLSD011  FORM      1        Number of invoices
PTLSD012  DIM       6        Contract ID
.
.Addition - patasdaf
.
.Name     Type      Length   Description
.----     ----      ------   -----------
PTASD001  DIM       3        Claim code
PTASD002  DIM       6        Health Fund
PTASD003  DIM       3        Table Type
PTASD004  DIM       9        Casemix Code
PTASD009  DIM       3        Bed Type    
PTASD005  DIM       30       Description
PTASD006  DIM       35       Description 2
PTASD007  FORM      12.2     Lumpsum Rebate Portion
PTASD008  FORM      12.2     Lumpsum Patient Portion
PTASD010  DIM       6        Contract ID
PTASD011  DIM       3        Fees Invoiced Group
.
