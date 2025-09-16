. V5.08.001 02/06/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSPNOFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Patient Service Notes              
. *
. * File Type     :   SQL
. *
. * File Name     :   ccspnoaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSPNOA1   IFILE    SQL, FIXED=102, KEY="U1-2,3-10,11-18,19-21"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCPNHCD   DIM       2      2        1     Hospital                           
CCPNDPT   DIM       8      8        3     Department                         
CCPNPCD   DIM       8      8        11    Patient Service                    
CCPNLIN   DIM       3      3        19    Line Number                        
CCPNDAT   DIM       70     70       22    Data                               
CCPNSPA   DIM       10     10       92    Spare                              
.
.End of Record                      102  
.
