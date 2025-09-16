. V5.08.001 31/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSCMAFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Costing Model Codes Master Table
. *
. * File Type     :   SQL
. *
. * File Name     :   ccscmaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSCMAA1   IFILE    SQL, FIXED=114, KEY="U1-4"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCMACOM   DIM       4      4        1     Model Code                         
CCMADES   DIM       35     35       5     Description                        
CCMAUR1   DIM       15     15       40    User Def Ref 1                     
CCMAUR2   DIM       15     15       55    User Def Ref 2                     
CCMAUD1   DIM       8      8        70    User Def Date 1                    
CCMAUD2   DIM       8      8        78    User Def Date 2                    
CCMAUC1   DIM       3      3        86    User Def Code 1                    
CCMAUC2   DIM       3      3        89    User Def Code 2                    
CCMAUY1   DIM       1      1        92    User Def Y/N 1                     
CCMAUY2   DIM       1      1        93    User Def Y/N 2                     
CCMASPA   DIM       20     20       94    Spare                              
.
.End of Record                      114  
.
