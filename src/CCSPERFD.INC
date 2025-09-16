. V5.08.001 02/06/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSPERFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Patient Service Load Errors        
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsperaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSPERA1   IFILE    SQL, FIXED=168, KEY="U1-4,5-12"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCPERUN   DIM       4      4        1     Run Number                         
CCPEREC   DIM       8      8        5     Record Number                      
CCPEDES   DIM       50     50       13    Error Description                  
CCPEFKY   DIM       20     20       63    Feeder Key                         
CCPEENC   DIM       16     16       83    Encounter                          
CCPEURN   DIM       10     10       99    U/R Number/Code                    
CCPEDAT   DIM       8      8        109   Service Date                       
CCPETIM   DIM       5      5        117   Service Time                       
CCPEQTY   FORM      12.2   8        122   Quantity                           
CCPECHG   FORM      12.2   8        130   Charge                             
CCPECL1   DIM       4      4        138   Class 1                            
CCPECL2   DIM       4      4        142   Class 2                            
CCPECL3   DIM       4      4        146   Class 3                            
CCPECL4   DIM       4      4        150   Class 4                            
CCPECL5   DIM       4      4        154   Class 5                            
CCPESPA   DIM       10     10       158   Spare                              
.
.End of Record                      168  
.
