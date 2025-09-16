. *----------------------------------------------------------------------
. * Include Name  :   NZPPFETD.INC
. *
. * Function      :   CGI Variables for NZPPFEFD.INC - nzppfeaf
. *
. * File Name     :   nzppfeaf.dat
. *
. * V9.08.00  20/11/2006  Ebon Clements CAR 120001
. *           Added copy cgi vars
. * V9.08.00  26/10/2006  Ebon Clements CAR 120001
. *           Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length Description
.----     ----      ------ -----------
NZPFE001  DIM       3      Hospital Code (pathspaf)           
NZPFE002  DIM       3      Claim Code (Catg CL)               
NZPFE003  DIM       6      Contract (Health Fund)             
NZPFE004  DIM       8      Fund Table                         
NZPFE005  DIM       9      Contract Procedure Code
NZPFE006  DIM       8      Effective Date (CCYYMMDD)          
NZPFE007  DIM       1      Maximum Funder Contribution 1=Yes  
NZPFE008  DIM       17     Total Fixed fee or Max Funder Contribution
NZPFE009  DIM       17     Patient Co-Payment
NZPFE010  DIM       50     Description line 1                 
NZPFE011  DIM       50     Description line 2                 
NZPFE012  DIM       1      Revenue Breakdown (1=Yes)          
NZPFE013  DIM       1      Invoice Breakdown (1=Yes)          
.
CPPFE001  DIM       3      Hospital Code (pathspaf)
CPPFE002  DIM       3      Claim Code (Catg CL)
CPPFE003  DIM       6      Contract (Health Fund)
CPPFE004  DIM       8      Fund Table
CPPFE005  DIM       9      Contract Procedure Code
CPPFE006  DIM       8      Effective Date (CCYYMMDD)
