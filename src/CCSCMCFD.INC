. V5.08.001 31/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSCMCFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Departmental Cost Summary          
. *
. * File Type     :   SQL
. *
. * File Name     :   ccscmcaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSCMCA1   IFILE    SQL, FIXED=61, KEY="U1-2,3-10,11-14,15-16"                  
CCSCMCA2   IFILE    SQL, FIXED=61, KEY="U1-2,11-14,15-16,3-10"                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCMCHCD   DIM       2      2        1     Hospital                           
CCMCDPT   DIM       8      8        3     Department                         
CCMCYEAR  DIM       4      4        11    Year                               
CCMCPER   DIM       2      2        15    Period                             
CCMCDIR   FORM      12.2   8        17    Direct Costs                       
CCMCIND   FORM      12.2   8        25    Indirect Costs                     
CCMCFLX   FORM      12.2   8        33    Flex Budget                        
CCMCSPA   DIM       20     20       41    Spare                              
.
.End of Record                      61   
.
CCMCIDX   INIT      " 61 UC1-2,3-10,11-14,15-16 UC1-2,11-14,15-16,3-10"
