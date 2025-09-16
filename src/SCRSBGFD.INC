. V6.00.001 04/08/1991 BGA Generated                                         
. V6.00.002 26/08/0091 BGA Add Copy Index                                    
. *----------------------------------------------------------------------
. * Include Name  :   SCRSBGFD.INC
. *
. * Function      :   File Def'n Include for Common                      
. *                   Screen Background                  
. *
. * File Type     :   SQL
. *
. * File Name     :   scrsbgaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SCRSBGA1   IFILE    SQL, FIXED=193, KEY="U1-8,9-10,11-12"                       
SCRSBGA2   IFILE    SQL, FIXED=193, KEY="U1-8,9-10,11-12"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SCSBPID   DIM       8      8        1     Program id                         
SCSBSID   DIM       2      2        9     Screen id                          
SCSBLIN   DIM       2      2        11    Line Number                        
SCSBDAT   DIM       80     80       13    Data Display                       
SCSBATT   DIM       80     80       93    Attributes Display                 
SCSBSPA   DIM       20     20       173                                      
.
.End of Record                      193  
.
