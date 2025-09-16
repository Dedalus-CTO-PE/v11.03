. V5.08.001 31/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSCALFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Calendar Table                     
. *
. * File Type     :   SQL
. *
. * File Name     :   ccscalaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSCALA1   IFILE    SQL, FIXED=60, KEY="U1-4,5-6"                               
CCSCALA2   IFILE    SQL, FIXED=60, KEY="U5-6,1-4"                               
CCSCALA3   IFILE    SQL, FIXED=60, KEY="U30-37,1-4,5-6"                         
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCCAYEAR  DIM       4      4        1     Year                               
CCCAPER   DIM       2      2        5     Period                             
CCCADES   DIM       15     15       7     Descriptiom                        
CCCAFDT   DIM       8      8        22    From Date                          
CCCATDT   DIM       8      8        30    To Date                            
CCCASTAT  FORM      1      2        38    Status 0-Cost Loaded               
.                                         Status 0=Free Period          
.                                                1=GL Costs Loaded      
.                                                2=Indirect Costs Re-all
CCCASPA   DIM       20     20       40    Spare                              
.
.End of Record                      60   
.
