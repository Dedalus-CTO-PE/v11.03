. VF.01.001 09/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CEAVBMFD.INC
. *
. * Function      :   File Def'n Include for Casemix Expense Analysis           
. *                   VMO Doctor Type Mapping            
. *
. * File Type     :   SQL
. *
. * File Name     :   ceavbmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CEAVBMA1   IFILE    SQL, FIXED=39, KEY="U1-3,4-6,7-13"                          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CEVBDTY   DIM       3      3        1     Doctor Type                        
CEVBSPC   DIM       3      3        4     Service Provider                   
CEVBPSC   DIM       7      7        7     Patient Service                    
CEVBQTY   FORM      6.2    5        14    Quantity                           
CEVBSPA   DIM       20     20       19    Spare                              
.
.End of Record                      39   
.
