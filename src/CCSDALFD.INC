. V5.08.001 31/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSDALFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Deptartment Cost Types             
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsdalaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSDALA1   IFILE    SQL, FIXED=39, KEY="U1-2,3-10,11-14"                        
CCSDALA2   IFILE    SQL, FIXED=39, KEY="U11-14,1-2,3-10"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCDAHCD   DIM       2      2        1     Hospital Code                      
CCDADPT   DIM       8      8        3     Department Code                    
CCDACTY   DIM       4      4        11    Cost Type                          
CCDAATY   DIM       4      4        15    Allocation Type                    
CCDASPA   DIM       20     20       19    Spare                              
.
.End of Record                      39   
.
