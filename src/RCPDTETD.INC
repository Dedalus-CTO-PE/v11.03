. *----------------------------------------------------------------------
. * Include Name  :   RCPDTETD.INC
. *
. * Function      :   CGI variables for RCPDTEFD - rcpdteaf
. *
. * Modifications :
. *
. *V10.14.02 20/03/2019  J.Tan            TSK 0857392
. *          Changed RCPDE003 from DIM3 to DIM5
. *V10.04.01 03/03/2014 J.Tan                    CAR 297922
. *          Added RCPDE038
. *V10.03.01 24/07/2013 J.Tan                    CAR 288013
. *          Increase printer to DIM 6
. * V9.09.01 02/01/2008 J.Tan                    CAR 134035
. *          Changed Name to 50 Chars
. * V9.07.01 17/07.2006 Ebon Clements            CAR 103365
. *          Added Amount Tendered
. * V9.04.01 25/10/2005 J.Tan                    CAR 58658
. *          Added re-print option field
. * V9.03.01 16/12/2003 Lina Vo                  CAR 44073
. *          Added Name and Address Fields.
. * V9.03.00 26/11/2003 Ebon Clements            CAR 44095
. *          Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length Description
.----     ----      ------ -----------
RCPDE001  DIM       8      Transaction Date (CCYYMMDD)
RCPDE002  DIM       12     Receipt Number
RCPDE003  DIM       5      Transaction Count
RCPDE004  DIM       3      Register
RCPDE005  DIM       12     Invoice Number
RCPDE006  DIM       8      Visit Number
RCPDE007  DIM       8      U/R Number
RCPDE008  DIM       50     Name         
RCPDE009  DIM       35     Address Line 1
RCPDE010  DIM       35     Address Line 2
RCPDE011  DIM       35     Address Line 3
RCPDE012  DIM       35     Address Line 4
RCPDE013  DIM       8      Post Code
RCPDE014  DIM       1      Scan Flag
RCPDE015  DIM       17     Reference
RCPDE016  DIM       14     Income Account
RCPDE017  DIM       14     Bank Account
RCPDE018  DIM       15     Amount
RCPDE019  DIM       15     Discount
RCPDE020  DIM       3      Multi Hospital Id (pathspaf)
RCPDE021  DIM       2      Multi Database Hosp Id (pathospf)
RCPDE022  DIM       6      GST Code
RCPDE023  DIM       14     GST Account
RCPDE024  DIM       1      Allocated 0=No 1=Yes
RCPDE025  DIM       8      Release Date (CCYYMMDD)
RCPDE026  DIM       8      Release Time (hh:mm:ss)
RCPDE027  DIM       6      Practice
RCPDE028  DIM       8      Date Record Created (CCYYMMDD)
RCPDE029  DIM       8      Time Record Created (hh:mm:ss)
RCPDE030  DIM       10     Web User Id Created (websecaf)
RCPDE031  DIM       8      Date Record Updated (CCYYMMDD)
RCPDE032  DIM       8      Time Record Updated (hh:mm:ss)
RCPDE033  DIM       10     Web User Id Updated (websecaf)
RCPDE034  DIM       3      Deposit Type (Category DP)
RCPDE035  DIM       1      Print Invoice? (temp file only)
RCPDE036  DIM       6      Printer (temp file only)
RCPDE037  DIM       15     Amount Tendered
RCPDE038  DIM       10     Private Practice Service Doctor
.
