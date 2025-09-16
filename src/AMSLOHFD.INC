. V6.00.001 29/12/1992                                                       
. *----------------------------------------------------------------------
. * Include Name  :   AMSLOHFD.INC
. *
. * Function      :   File Def'n Include for Asset Management
. *                   Location History             
. *
. * File Type     :   SQL
. *
. * File Name     :   amslohaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
AMSLOHA1   IFILE    SQL, FIXED=169, KEY="U1-2,3-14,15-22"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
AMLHREG   DIM       2      2        1     Register                           
AMLHASS   DIM       12     12       3     Asset                              
AMLHDAT   DIM       8      8        15    Transfer Date                      
AMLHFBLD  DIM       3      3        23    From Building                      
AMLHFLOC  DIM       6      6        26    From Location                      
AMLHTBLD  DIM       3      3        32    To Building                        
AMLHTLOC  DIM       6      6        35    To Location                        
AMLHCOM   DIM       30     30       41    Comment                            
AMLHUA1   FORM      12.2   8        71    User Def Amt 1                     
AMLHUA2   FORM      12.2   8        79    User Def Amt 2                     
AMLHUR1   DIM       30     30       87    User Def Ref 1                     
AMLHUR2   DIM       30     30       117   User Def Ref 2                     
AMLHUY1   DIM       1      1        147   User Def Y/N 1                     
AMLHUY2   DIM       1      1        148   User Def Y/N 2                     
AMLHSPA   DIM       20     20       149   Spare                              
.
.End of Record                      169  
.
