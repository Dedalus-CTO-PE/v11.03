. *----------------------------------------------------------------------
. * Include Name  :   RCPBDTTD.INC
. *
. * Function      :   CGI variables for RCPBDTFD - rcpbdtaf
. *
. * Modifications :
. *
. *V10.07.01 16/11/2015  J.Tan         CAR 303942             
. *          Added Payment code rcpbt023
. * V9.12.01 20/07/2009  Mike Laming   CAR 187485             
. *          Changed RCBDPAYD (rcpbt008) & RCBDDRAW (rcpbt010) to 50 chars
. * V9.03.02 12/05/2004 Lina Vo                  CAR 49813
. *          Made Money Order Field (RCPBT015) obsolete          
. * V9.03.01 16/12/2003 Lina Vo                  CAR 44073
. *          Removed Name and Address Fields and put in RCPDTEFD.
. * V9.03.00 26/11/2003 Ebon Clements            CAR 44095
. *          Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length Description
.----     ----      ------ -----------
RCPBT001  DIM       8      Transaction Date (CCYYMMDD)
RCPBT002  DIM       12     Receipt Number
RCPBT003  DIM       3      Unique Number
RCPBT004  DIM       3      Multi Hospital Id (pathspaf)
RCPBT005  DIM       2      Multi Database Hosp Id (pathospf)
RCPBT006  DIM       1      Payment Type
RCPBT007  DIM       15     Payment Amount
RCPBT008  DIM       50     Payee Details
RCPBT009  DIM       12     Cheque Number/Money Order
RCPBT010  DIM       50     Drawer Details
RCPBT011  DIM       30     Bank
RCPBT012  DIM       30     Branch
RCPBT013  DIM       3      Card Type
RCPBT014  DIM       40     Statement Reference
RCPBT015  DIM       8      ..... Not used           
RCPBT016  DIM       1      EFT Type             
RCPBT017  DIM       8      Date Record Created (CCYYMMDD)
RCPBT018  DIM       8      Time Record Created (hh:mm:ss)
RCPBT019  DIM       10     Web User Id Created (websecaf)
RCPBT020  DIM       8      Date Record Updated (CCYYMMDD)
RCPBT021  DIM       8      Time Record Updated (hh:mm:ss)
RCPBT022  DIM       10     Web User Id Updated (websecaf)
RCPBT023  DIM       3      Payment code (cat Py)
