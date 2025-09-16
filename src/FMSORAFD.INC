. RF.13.001 20/06/2005 SB  Added Table                                       
. *----------------------------------------------------------------------
. * Include Name  :   FMSORAFD.INC
. *
. * Function      :   File Def'n Include for Financial Management System        
. *                   Oracle Financial Mapping Table     
. *
. * File Type     :   SQL
. *
. * File Name     :   fmsoraaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSORAA1   IFILE    SQL, FIXED=38, KEY="U1-2,3-14"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMORLEDG  DIM       2      2        1     Ledger Account                     
FMORACCT  DIM       12     12       3     Account Code                       
FMORINTR  DIM       3      3        15    Inter Company code                 
FMORSPAR  DIM       20     20       18    Spare Variable                     
.
.End of Record                      38   
.
