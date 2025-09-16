. 6.09 .002 07/05/2007 JT  Added batch number                                
. 6.09 .001 23/11/2000 JH
. *----------------------------------------------------------------------
. * Include Name  :   PATRBLFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Lumpsum Revenue Breakdown Table    
. *
. * File Type     :   SQL
. *
. * File Name     :   patrblaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATRBLA1   IFILE    SQL, FIXED=58, KEY="U1-8,9-16,17-19"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTRBADMN  DIM       8      8        1     Admission Number                   
PTRBINVN  DIM       8      8        9     Invoice Number                     
PTRBBRCD  DIM       3      3        17    Breakdown Code (Cat FI)            
PTRBAMNT  FORM      12.2   8        20    Amount                             
PTRBGAMN  FORM      12.2   8        28    GST Amount                         
PTRBBTCH  DIM       5      5        36    Batch No for NZ Private Extract    
PTRBSPAR  DIM       17     17       41    Spare                              
.
.End of Record                      58   
.
