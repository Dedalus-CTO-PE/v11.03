. V6.00.001 30/12/1992                                                       
. V6.00.002 15/02/1994  Added index 2 
. *----------------------------------------------------------------------
. * Include Name  :   AMSLOCFD.INC
. *
. * Function      :   File Def'n Include for Asset Management
. *                   Location Table                
. *
. * File Type     :   SQL
. *
. * File Name     :   amslocaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
AMSLOCA1   IFILE    SQL, FIXED=143, KEY="U1-3,4-9"                              
AMSLOCA2   IFILE    SQL, FIXED=143, KEY="U4-9,1-3"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
AMLOBLD   DIM       3      3        1     Building (Cat. BL)                 
AMLOLOC   DIM       6      6        4     Location Code                      
AMLODES   DIM       35     35       10    Description                        
AMLOUR1   DIM       30     30       45    User Def Ref 1                     
AMLOUR2   DIM       30     30       75    User Def Ref 2                     
AMLOUD1   DIM       8      8        105   User Def Date 1                    
AMLOUD2   DIM       8      8        113   User Def Date 2                    
AMLOUY1   DIM       1      1        121   User Def Y/N 1                     
AMLOUY2   DIM       1      1        122   User Def Y/N 2                     
AMLOSPA   DIM       20     20       123   Spare                              
.
.End of Record                      143  
.
