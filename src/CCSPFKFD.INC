. V5.08.001 02/06/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSPFKFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Patient Service Feeder Keys        
. *
. * File Type     :   SQL
. *
. * File Name     :   ccspfkaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSPFKA1   IFILE    SQL, FIXED=86, KEY="U1-20"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCPFFKY   DIM       20     20       1     Feeder Key                         
CCPFDES   DIM       35     35       21    Description                        
CCPFSUS   DIM       1      1        56    Suspension 0=No                    
CCPFSPA   DIM       29     29       57                                       
.
.End of Record                      86   
.
