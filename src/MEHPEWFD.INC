. V9.12.000 26/05/2009 ML  New Table                                            
. *----------------------------------------------------------------------
. * Include Name  :   MEHPEWFD.INC
. *
. * Function      :   File Def'n Include for Mental Health                      
. *                   PRIMHD Acknowl. Errors/Warnings    
. *
. * File Type     :   SQL
. *
. * File Name     :   mehpewaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MEHPEWA1   IFILE    SQL, FIXED=40, KEY="U1-9,10-12"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MHPWUNIQ  DIM       9      9        1     Err/Warn Unique Identifier         
MHPWXCNT  DIM       3      3        10    Err/Warn Item Count                
MHPWTYPE  DIM       1      1        13    Err/Warn Type E=Error W=Warning    
MHPWERCD  DIM       9      9        14    Err/Warn Ref.Id. (format "anannnnn"
MHPWSPAR  DIM       17     17       23    Spare                              
.
.End of Record                      40   
.
