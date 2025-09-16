. V5.08.001 01/06/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSGNCFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Generic Patient Service Master
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsgncaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSGNCA1   IFILE    SQL, FIXED=96, KEY="U1-2,3-10"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCGNHCD   DIM       2      2        1     Hospital                           
CCGNGPC   DIM       8      8        3     Generic Patient Service Code       
CCGNDES   DIM       35     35       11    Description                        
CCGNSPA   DIM       50     50       46    Spare                              
.
.End of Record                      96   
.
