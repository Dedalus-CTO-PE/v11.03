. V6.00.001 29/12/1992 BGA                                                   
. *----------------------------------------------------------------------
. * Include Name  :   AMSREGFD.INC
. *
. * Function      :   File Def'n Include for Asset Management
. *                   Register Details          
. *
. * File Type     :   SQL
. *
. * File Name     :   amsregaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
AMSREGA1   IFILE    SQL, FIXED=136, KEY="U1-2"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
AMREREG   DIM       2      2        1     Register                           
AMREDES   DIM       35     35       3     Description                        
AMREUR1   DIM       30     30       38    User Def Ref 1                     
AMREUR2   DIM       30     30       68    User Def Ref 2                     
AMREUD1   DIM       8      8        98    User Def Date 1                    
AMREUD2   DIM       8      8        106   User Def Date 2                    
AMREUY1   DIM       1      1        114   User Def Y/N 1                     
AMREUY2   DIM       1      1        115   User Def Y/N 2                     
AMRESPA   DIM       20     20       116   Spare                              
.
.End of Record                      136  
.
