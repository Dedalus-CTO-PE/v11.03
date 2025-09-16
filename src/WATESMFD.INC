. 9.04 .001 02/09/2005 JH  Created                                           
. *----------------------------------------------------------------------
. * Include Name  :   WATESMFD.INC
. *
. * Function      :   File Def'n Include for Waiting List                       
. *                   ESIS Merge Table                   
. *
. * File Type     :   SQL
. *
. * File Name     :   watesmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WATESMA1   IFILE    SQL, FIXED=75, KEY="U9-16,17-24,1-8"                        
WATESMA2   IFILE    SQL, FIXED=75, KEY="U1-8,9-16,17-24"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WTEMEDAT  DIM       8      8        1     Extract Sent Date (CCYYMMDD)       
WTEMCURN  DIM       8      8        9     Ceased UR                          
WTEMRURN  DIM       8      8        17    Retained UR                        
WTEMSPAR  DIM       50     50       25    Spare                              
.
.End of Record                      75   
.
