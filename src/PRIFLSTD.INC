. *----------------------------------------------------------------------
. * Include Name  :   PRIFLSTD.INC
. *
. * Function      :   CGI Variables for PRIFLSTD - priflsaf 
. *
. * Mods          :   V9.02.01 16.10.2001  R Surve 
. *                            Created include
. *               :   V9.02.02 13.12.2001  DC & KS Include scan flag 
. *               :   V9.03.01 10.02.2003  Lina Vo   CAR 44132       
. *                            Changed debtor number to be DIM 8.
. *----------------------------------------------------------------------
.
.Name     Type      Length                  Description
.----     ----      ------                  -----------
PRFL0001  DIM       4                 Selection ID.
PRFL0002  DIM       35                Selection Description
PRFL0003  DIM       8                 Debtor Number From
PRFL0004  DIM       8                 Debtor Number To
PRFL0005  DIM       20                Surname From
PRFL0006  DIM       20                Surname To
PRFL0007  DIM       8                 Visit Date From (ccyymmdd)
PRFL0008  DIM       8                 Visit Date To (ccyymmdd)
PRFL0009  DIM       6                 Practice From
PRFL0010  DIM       6                 Practice To
PRFL0011  DIM       12                Service Doctor From
PRFL0012  DIM       12                Service Doctor To
PRFL0013  DIM       3                 Claim Code From (category CL)
PRFL0014  DIM       3                 Claim Code To (category CL)
PRFL0015  DIM       3                 Last Letter Sent From
PRFL0016  DIM       3                 Last Letter Sent To
PRFL0017  DIM       8                 Date Last Letter Sent From
PRFL0018  DIM       8                 Date Last Letter Sent To
PRFL0019  DIM       3                 Future Action Code From (cat. FA)
PRFL0020  DIM       3                 Future Action Code To (category FA)
PRFL0021  DIM       8                 Future Action Date From (ccyymmdd)
PRFL0022  DIM       8                 Future Action Date To (ccyymmdd)
PRFL0023  FORM      7.2               Minimum Balance Owing for Report
PRFL0024  DIM       8                 Invoice Date From (ccyymmdd)
PRFL0025  DIM       8                 Invoice Date To (ccyymmdd)
PRFL0026  DIM       3                 Letter Type
PRFL0027  DIM       1                 Scan Flag (0=Debtor,1=U/R) 
.
