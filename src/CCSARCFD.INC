. V5.08.001 31/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSARCFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Masterfile Archive Codes           
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsarcaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSARCA1   IFILE    SQL, FIXED=122, KEY="U1-4"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCARARC   DIM       4      4        1     Archive Code                       
CCARDES   DIM       35     35       5     Description                        
CCARCMP   FORM      1      2        40    Compress 0=No                      
CCARDIR   DIM       40     40       42    Directory                          
CCARSPA   DIM       40     40       82    Spare                              
.
.End of Record                      122  
.
