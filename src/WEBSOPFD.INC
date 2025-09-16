. V6.04.001 09/12/1997                                                       
. *----------------------------------------------------------------------
. * Include Name  :   WEBSOPFD.INC
. *
. * Function      :   File Def'n Include for WEB               
. *                   Interface Web Server Options                 
. *
. * File Type     :   SQL
. *
. * File Name     :   websopaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBSOPA1   IFILE    SQL, FIXED=144, KEY="U1-8,9-10"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBSOPRG   DIM       8      8        1     Program ID                         
WBSOOPT   DIM       2      2        9     Option                             
WBSODES   DIM       35     35       11    Description                        
WBSOUR1   DIM       30     30       46    User Def Ref 1                     
WBSOUR2   DIM       30     30       76    User Def Ref 2                     
WBSOUD1   DIM       8      8        106   User Def Date 1                    
WBSOUD2   DIM       8      8        114   User Def Date 2                    
WBSOUY1   DIM       1      1        122   User Def Y/N 1                     
WBSOUY2   DIM       1      1        123   User Def Y/N 2                     
WBSOSPA   DIM       20     20       124   Spare                              
.
.End of Record                      144  
.
