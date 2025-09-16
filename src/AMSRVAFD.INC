. V6.00.001 09/01/1993                                                       
. *----------------------------------------------------------------------
. * Include Name  :   AMSRVAFD.INC
. *
. * Function      :   File Def'n Include for Asset Management
. *                   Revaluation Details          
. *
. * File Type     :   SQL
. *
. * File Name     :   amsrvaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
AMSRVAA1   IFILE    SQL, FIXED=207, KEY="U1-2,3-14,15-22"                       
AMSRVAA2   IFILE    SQL, FIXED=207, KEY="U1-2,3-14,23-26,15-22"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
AMRVREG   DIM       2      2        1     Register                           
AMRVASS   DIM       12     12       3     Asset                              
AMRVRDT   DIM       8      8        15    Revaluation Date                   
AMRVYEAR  DIM       4      4        23    Financial Year                     
AMRVPER   DIM       2      2        27    Period                             
AMRVRTY   DIM       3      3        29    Revaluation Type (Cat RT)          
AMRVREF   DIM       15     15       32    Reference                          
AMRVDES   DIM       30     30       47    Description                        
AMRVAMT   FORM      12.2   8        77    Revaluation Amount                 
AMRVAAD   FORM      12.2   8        85    Acc'm Dep'n Write Back             
AMRVRVR   FORM      12.2   8        93    Revaluation Reserve Adjustment     
AMRVPVR   FORM      12.2   8        101   Previous Revaluation Total         
AMRVUR1   DIM       30     30       109   User Def Ref 1                     
AMRVUR2   DIM       30     30       139   User Def Ref 2                     
AMRVUD1   DIM       8      8        169   User Def Date 1                    
AMRVUD2   DIM       8      8        177   User Def Date 2                    
AMRVUY1   DIM       1      1        185   User Def Y/N 1                     
AMRVUY2   DIM       1      1        186   User Def Y/N 2                     
AMRVSPA   DIM       20     20       187   Spare                              
.
.End of Record                      207  
.
