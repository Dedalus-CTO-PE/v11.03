. 9.08 .001 09/07/2007 JT                                                    
. *----------------------------------------------------------------------
. * Include Name  :   NZPIVBFD.INC
. *
. * Function      :   File Def'n Include for New Zealand Private                
. *                   NZ Private Pat.Invoice Breakdown   
. *
. * File Type     :   SQL
. *
. * File Name     :   nzpivbaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
NZPIVBA1   IFILE    SQL, FIXED=64, KEY="U1-8,9-16,17-19,20-22"                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
NZIVADMN  DIM       8      8        1     Admission Number                   
NZIVINVN  DIM       8      8        9     Invoice Number                     
NZIVSUNQ  DIM       3      3        17    Subsequence Proc.Unique Number     
NZIVBRCD  DIM       3      3        20    Breakdown Code (Cat FI)            
NZIVAMNT  FORM      12.2   8        23    Amount                             
NZIVGAMN  FORM      12.2   8        31    GST Amount                         
NZIVSPAR  DIM       25     25       39    Spare Variable                     
.
.End of Record                      64   
.
