. *----------------------------------------------------------------------
. * Include Name  :   SINPODFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Purchase Order Item Comments       
. *
. * File Type     :   SQL
. *
. * File Name     :   sinpodaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINPODA1   IFILE    SQL, FIXED=94, KEY="U1-7,8-10,11-13"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIPDPON   DIM       7      7        1     Purchase Order                     
SIPDITM   DIM       3      3        8     Item Number                        
SIPDLIN   DIM       3      3        11    Line Number                        
SIPDCOM   DIM       60     60       14    Comment                            
SIPDSPA   DIM       20     20       74    Spare                              
.
.End of Record                      94   
.
