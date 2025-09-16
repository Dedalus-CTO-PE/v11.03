. 9.08 .001 09/07/2007 JT                                                    
. *----------------------------------------------------------------------
. * Include Name  :   NZPRVBFD.INC
. *
. * Function      :   File Def'n Include for New Zealand Private                
. *                   NZ Private Pat.Revenue Breakdown   
. *
. * File Type     :   SQL
. *
. * File Name     :   nzprvbaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
NZPRVBA1   IFILE    SQL, FIXED=64, KEY="U1-8,9-16,17-19,20-22"                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
NZRVADMN  DIM       8      8        1     Admission Number                   
NZRVINVN  DIM       8      8        9     Invoice Number                     
NZRVSUNQ  DIM       3      3        17    Subsequence Unique Number          
NZRVBRCD  DIM       3      3        20    Breakdown Code (Cat FI)            
NZRVAMNT  FORM      12.2   8        23    Amount                             
NZRVGAMN  FORM      12.2   8        31    GST Amount                         
NZRVSPAR  DIM       25     25       39    Spare variable                     
.
.End of Record                      64   
.
