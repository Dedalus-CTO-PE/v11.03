. V5.08.001 31/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSBULFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Bulletin Table                     
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsbulaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSBULA1   IFILE    SQL, FIXED=84, KEY="U1-3"                                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCBULIN   DIM       3      3        1     Line Number                        
CCBUDAT   DIM       70     70       4     Data                               
CCBUSPA   DIM       10     10       74    Spare                              
.
.End of Record                      84   
.
