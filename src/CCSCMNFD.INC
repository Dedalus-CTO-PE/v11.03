. V5.08.001 31/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSCMNFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Cost Model Notes                   
. *
. * File Type     :   SQL
. *
. * File Name     :   ccscmnaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSCMNA1   IFILE    SQL, FIXED=106, KEY="U1-4,5-7"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCMNCOM   DIM       4      4        1     Cost Model                         
CCMNLIN   DIM       3      3        5     Line Number                        
CCMNDAT   DIM       78     78       8     Line Details                       
CCMNSPA   DIM       20     20       86    Spare                              
.
.End of Record                      106  
.
