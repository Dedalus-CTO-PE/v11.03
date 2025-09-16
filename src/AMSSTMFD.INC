. V6.00.001 06/01/1993                                                       
. *----------------------------------------------------------------------
. * Include Name  :   AMSSTMFD.INC
. *
. * Function      :   File Def'n Include for Asset Management
. *                   Stocktake Table
. *
. * File Type     :   SQL
. *
. * File Name     :   amsstmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
AMSSTMA1   IFILE    SQL, FIXED=197, KEY="U1-5"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
AMSMSTK   DIM       5      5        1     Stocktake Number                   
AMSMDAT   DIM       8      8        6     Date Generated                     
AMSMTIM   DIM       5      5        14    Time Generated                     
AMSMOPR   DIM       4      4        19    Operator ID                        
AMSMFBLD  DIM       3      3        23    From Building                      
AMSMTBLD  DIM       3      3        26    To   Building                      
AMSMFLOC  DIM       6      6        29    From Location                      
AMSMTLOC  DIM       6      6        35    To   Location                      
AMSMFTYP  DIM       3      3        41    From Asset Type                    
AMSMTTYP  DIM       3      3        44    To   Asset Type                    
AMSMFDPT  DIM       3      3        47    From Department                    
AMSMTDPT  DIM       3      3        50    To   Department                    
AMSMFSDT  DIM       8      8        53    From Last Stocktake Date           
AMSMTSDT  DIM       8      8        61    To   Last Stocktake Date           
AMSMCOM   DIM       30     30       69    Comment/Reason                     
AMSMUR1   DIM       30     30       99    User Def Ref 1                     
AMSMUR2   DIM       30     30       129   User Def Ref 2                     
AMSMUD1   DIM       8      8        159   User Def Date 1                    
AMSMUD2   DIM       8      8        167   User Def Date 2                    
AMSMUY1   DIM       1      1        175   User Def Y/N 1                     
AMSMUY2   DIM       1      1        176   User Def Y/N 2                     
AMSMSPA   DIM       20     20       177   Spare                              
.
.End of Record                      197  
.
