. VF.00.001 29/10/1998 SB  Year 2000                                         
. *----------------------------------------------------------------------
. * Include Name  :   SINCCBFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Cost Centre Usage                  
. *
. * File Type     :   SQL
. *
. * File Name     :   sinccbaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINCCBA1   IFILE    SQL, FIXED=46, KEY="U1-5,6-11"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SICBCST   DIM       5      5        1     Cost Centre                        
SICBDAT   DIM       6      6        6     Date CCYYMM                        
SICBAMT   FORM      12.2   8        12    Amount (Requisitions + Imprest)    
SICBBUD   FORM      12.2   8        20    Budget                             
SICBSPAR  DIM       18     18       28    Spare                              
.
.End of Record                      46   
.
