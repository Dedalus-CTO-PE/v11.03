. C2.09.001 09/11/2000 SB  Added BAS Code                                    
. C2.00.002 02/03/2000 JH  Added Description Index                           
. *----------------------------------------------------------------------
. * Include Name  :   IBAGSTFD.INC
. *
. * Function      :   File Def'n Include for IBA Software                       
. *                   GST Master File                    
. *
. * File Type     :   SQL
. *
. * File Name     :   ibagstaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
IBAGSTA1   IFILE    SQL, FIXED=59, KEY="U1-6"                                   
IBAGSTA2   IFILE    SQL, FIXED=59, KEY="U7-36,1-6"                              
IBAGSTA3   IFILE    SQL, FIXED=59, KEY="U39-41,1-6"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
IBGSCODE  DIM       6      6        1     GST Code                           
IBGSDESC  DIM       30     30       7     Gst Code Description               
IBGSACTV  FORM      1      2        37    Active/Inactive (1-Inactive)       
IBGSBASC  DIM       3      3        39    BAS Code                           
IBGSSPAR  DIM       17     17       42    Spare Variable                     
.
.End of Record                      59   
.
