. V6.05.002 04/02/1999 KCN Create FD                                         
. V6.05.003 15/02/1999                                                       
. V6.05.004 15/02/1999                                                       
. V6.05.005 24/02/1999 KCN changed security levels to dim 2                  
. *----------------------------------------------------------------------
. * Include Name  :   OBSALTFD.INC
. *
. * Function      :   File Def'n Include for WEB
. *                   Observation Alert Code Table                   
. *
. * File Type     :   SQL
. *
. * File Name     :   obsaltaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OBSALTA1   IFILE    SQL, FIXED=184, KEY="U1-10"                                 
OBSALTA2   IFILE    SQL, FIXED=184, KEY="U11-45,1-10"                           
OBSALTA3   IFILE    SQL, FIXED=184, KEY="U46-48,11-45,1-10"                     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OBALCOD   DIM       10     10       1     Alert Code                         
OBALDSC   DIM       35     35       11    Description                        
OBALTYP   DIM       3      3        46    Alert Type                         
OBALISL   DIM       2      2        49    Insert Security Level              
OBALDSL   DIM       2      2        51    Default Security Level             
OBALDAL   DIM       1      1        53    Default Alert Level                
OBALDCD   DIM       20     20       54    Drug Code                          
OBALICD   DIM       10     10       74    Interaction Code                   
OBALLUS   DIM       10     10       84    Last Update User                   
OBALLDT   DIM       8      8        94    Last Update Date                   
OBALLTM   DIM       8      8        102   Last Update Time                   
OBALRF1   DIM       30     30       110   User Def Ref 1                     
OBALRF2   DIM       30     30       140   User Def Ref 2                     
OBALYN1   DIM       1      1        170   User Def Y/N 1                     
OBALYN2   DIM       1      1        171   User Def Y/N 2                     
OBALSPA   DIM       12     12       172   Spare                              
.
.End of Record                      184  
.
