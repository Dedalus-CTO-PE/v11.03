. V5.08.001 31/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSCMDFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Patient Service Costs by Cost Type 
. *
. * File Type     :   SQL
. *
. * File Name     :   ccscmdaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSCMDA1   IFILE    SQL, FIXED=79, KEY="U1-2,3-10,11-14,15-16,17-24,25-28"      
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCMDHCD   DIM       2      2        1     Hospital                           
CCMDDPT   DIM       8      8        3     Department                         
CCMDYEAR  DIM       4      4        11    Year                               
CCMDPER   DIM       2      2        15    Period                             
CCMDPCD   DIM       8      8        17    Patient Service                    
CCMDCTY   DIM       4      4        25    Cost Type                          
CCMDCST   FORM      12.6   10       29    Calculated Cost per Unit           
CCMDFLX   FORM      12.6   10       39    Flexi Budget Cost Per Unit         
CCMDRVI   FORM      12.6   10       49    Relative Value Index               
CCMDSPA   DIM       20     20       59    Spare                              
.
.End of Record                      79   
.
CCMDIDX   INIT      " 79 UC1-2,3-10,11-14,15-16,17-24,25-28"      
