. V6.00.001 30/07/1993 Nez New File                                          
. *----------------------------------------------------------------------
. * Include Name  :   SINCOSFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Cost Variation Table                
. *
. * File Type     :   SQL
. *
. * File Name     :   sincosaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINCOSA1   IFILE    SQL, FIXED=72, KEY="U1-7,8-12,13-27,28-35"                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SICOCAT   DIM       7      7        1     Catalog                            
SICOSUP   DIM       5      5        8     Supplier                           
SICOSUT   DIM       15     15       13    Supply Unit                        
SICODAT   DIM       8      8        28    Date of Change                     
SICOOPR   FORM      12.2   8        36    Old Price                          
SICONPR   FORM      12.2   8        44    New Price                          
SICOSPA   DIM       20     20       52    Spare                              
.
.End of Record                      72   
.
