. V9.02.001 20/03/2003 DS  Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   SINDPCFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Delivery Point Codes               
. *
. * File Type     :   SQL
. *
. * File Name     :   sindpcaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINDPCA1   IFILE    SQL, FIXED=105, KEY="U1-3"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIDPCODE  DIM       3      3        1     Delivery Point                     
SIDPADD1  DIM       40     40       4     Address 1                          
SIDPADD2  DIM       40     40       44    Address 2                          
SIDPACTV  DIM       1      1        84    Active (1=Yes/0=No)                
SIDPSPAR  DIM       20     20       85    Spare                              
.
.End of Record                      105  
.
