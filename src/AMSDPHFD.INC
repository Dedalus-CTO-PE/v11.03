. V6.00.001 29/12/1992                                                       
. *----------------------------------------------------------------------
. * Include Name  :   AMSDPHFD.INC
. *
. * Function      :   File Def'n Include for Asset Management
. *                   Department History                 
. *
. * File Type     :   SQL
. *
. * File Name     :   amsdphaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
AMSDPHA1   IFILE    SQL, FIXED=157, KEY="U1-2,3-14,15-22"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
AMDHREG   DIM       2      2        1     Register                           
AMDHASS   DIM       12     12       3     Asset                              
AMDHDAT   DIM       8      8        15    Transfer Date                      
AMDHFDPT  DIM       3      3        23    From Department                    
AMDHTDPT  DIM       3      3        26    To Department                      
AMDHCOM   DIM       30     30       29    Comment                            
AMDHUA1   FORM      12.2   8        59    User Def Amt 1                     
AMDHUA2   FORM      12.2   8        67    User Def Amt 2                     
AMDHUR1   DIM       30     30       75    User Def Ref 1                     
AMDHUR2   DIM       30     30       105   User Def Ref 2                     
AMDHUY1   DIM       1      1        135   User Def Y/N 1                     
AMDHUY2   DIM       1      1        136   User Def Y/N 2                     
AMDHSPA   DIM       20     20       137   Spare                              
.
.End of Record                      157  
.
