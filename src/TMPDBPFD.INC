. V10.14.01 21/03/2019 JT C-0857392 Changed Transaction number from DIM3 to DIM5
. V9.03.000 14/01/2004 LV  Created new
. *----------------------------------------------------------------------
. * Include Name  :   TMPDBPFD.INC
. *
. * Function      :   File Def'n Include for Temporary Code for Temp Files      
. *                   Temporary Debtor Inv item payment  
. *
. * File Type     :   SQL
. *
. * File Name     :   tmpdbpaf.dat
. *
. * Index Values  :   KEY32   KEY32                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
TMPDBPA1   IFILE    SQL, FIXED=91, KEY="U1-12,13-17,18-29,30-32"
TMPDBPA2   IFILE    SQL, FIXED=91, KEY="U18-29,30-32,1-12,13-17"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
TMDBRECN  DIM       12     12       1     Receipt Number                     
TMDBTCNT  DIM       5      5        13    Transaction Number                 
TMDBINVN  DIM       12     12       18    Invoice Number                     
TMDBILNE  DIM       3      3        30    Invoice Line Number                
TMDBPAMT  FORM      12.2   8        33    Payment Amount                     
TMDBSPAR  DIM       50     50       41    Spare                              
.
.End of Record                      91   
.
