. V5.08.001 31/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSCMBFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Department Costs by Cost Type      
. *
. * File Type     :   SQL
. *
. * File Name     :   ccscmbaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSCMBA1   IFILE    SQL, FIXED=65, KEY="U1-2,3-10,11-14,15-16,17-20"            
CCSCMBA2   IFILE    SQL, FIXED=65, KEY="U1-2,3-10,17-20,11-14,15-16"            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCMBHCD   DIM       2      2        1     Hospital Code                      
CCMBDPT   DIM       8      8        3     Department                         
CCMBYEAR  DIM       4      4        11    Year                               
CCMBPER   DIM       2      2        15    Period                             
CCMBCTY   DIM       4      4        17    Cost Type                          
CCMBDIR   FORM      12.2   8        21    Direct Costs                       
CCMBIND   FORM      12.2   8        29    Indirect Costs                     
CCMBFLX   FORM      12.2   8        37    Flex Budget                        
CCMBSPA   DIM       20     20       45    Spare Variable
.
.End of Record                      65   
.
CCMBIDX   INIT   " 65 UC1-2,3-10,11-14,15-16,17-20 UC1-2,3-10,17-20,11-14,15-16"
