. 6.09 .001 23/11/2000 JH                                                    
. *----------------------------------------------------------------------
. * Include Name  :   PATIBLFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Lumpsum Invoice Breakdown Table    
. *
. * File Type     :   SQL
. *
. * File Name     :   patiblaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATIBLA1   IFILE    SQL, FIXED=58, KEY="U1-8,9-16,17-19"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTIBADMN  DIM       8      8        1     Admission Number                   
PTIBINVN  DIM       8      8        9     Invoice Number                     
PTIBBRCD  DIM       3      3        17    Breakdown Code (Cat FI)            
PTIBAMNT  FORM      12.2   8        20    Amount                             
PTIBGAMN  FORM      12.2   8        28    GST Amount                         
PTIBSPAR  DIM       22     22       36    Spare                              
.
.End of Record                      58   
.
