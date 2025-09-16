. V6.05.001 04/02/1999 KCN Created FD                                        
. V6.05.002 10/02/1999 KCN                                                   
. V6.05.003 15/02/1999                                                       
. V6.05.004 24/02/1999 KCN changed security level to dim 2                   
. V6.05.005 04/03/1999                                                       
. *----------------------------------------------------------------------
. * Include Name  :   OBSPALFD.INC
. *
. * Function      :   File Def'n Include for WEB
. *                   Observation Patient Alerts Table               
. *
. * File Type     :   SQL
. *
. * File Name     :   obspalaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OBSPALA1   IFILE    SQL, FIXED=232, KEY="U1-8,9-12"                             
OBSPALA2   IFILE    SQL, FIXED=232, KEY="U1-8,41-41,13-20,9-12"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OBPAURN   DIM       8      8        1     U/R Number                         
OBPAUNI   DIM       4      4        9     Unique                             
OBPADTE   DIM       8      8        13    Date                               
OBPAUSR   DIM       10     10       21    Input by User                      
OBPAALT   DIM       10     10       31    Alert Code                         
OBPAALV   DIM       1      1        41    Alert Level                        
OBPASLV   DIM       2      2        42    Security Level                     
OBPAIAC   DIM       1      1        44    Inactive  0=No 1=Yes               
OBPAIDT   DIM       8      8        45    Inactive Date                      
OBPAIUS   DIM       10     10       53    Inactive User                      
OBPACM1   DIM       50     50       63    Reaction/Comment 1                 
OBPACM2   DIM       50     50       113   Reaction/Comment 2                 
OBPALUS   DIM       10     10       163   Last Update User                   
OBPALDT   DIM       8      8        173   Last Update Date                   
OBPALTM   DIM       8      8        181   Last Update Time                   
OBPARF1   DIM       20     20       189   User Def Ref 1                     
OBPARF2   DIM       20     20       209   User Def Ref 2                     
OBPAYN1   DIM       1      1        229   User Def Y/N 1                     
OBPAYN2   DIM       1      1        230   User Def Y/N 2                     
OBPASPA   DIM       1      1        231   Spare                              
.
.End of Record                      232  
.
