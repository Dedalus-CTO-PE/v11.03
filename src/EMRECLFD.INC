. V11.02.01 15/03/2022 EC C-0907640 Created FD                                  
. *----------------------------------------------------------------------
. * Include Name  :   EMRECLFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   Expected Patient Comment Lines     
. *
. * File Type     :   SQL
. *
. * File Name     :   emreclaf.dat
. *
. * Index Values  :   KEY22                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRECLA1   IFILE    SQL, FIXED=153, KEY="U1-10,11-13,14-19,20-22"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMELUNIQ  DIM       10     10       1     Unique Counter                     
EMELTYPE  DIM       3      3        11    Comment Type                       
.                                         001 - ED Expected Patient Notes      
EMELNOTE  DIM       6      6        14    Note Number                        
EMELLINE  DIM       3      3        20    Line Number                        
EMELCMNT  DIM       100    100      23    Comment                            
EMELSPAR  DIM       30     30       123   Spare                              
.
.End of Record                      153  
.
