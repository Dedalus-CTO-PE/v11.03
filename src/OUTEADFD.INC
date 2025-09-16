. V10.13.02 10/12/2018 PVL C-0859743 Added OTEDRKEY - Report Retrieve Key       
. V10.13.01 18/09/2018 PVL C-0859743 Created File Definition                    
. *----------------------------------------------------------------------
. * Include Name  :   OUTEADFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   Eclipse Bulk Billing Service Detail
. *
. * File Type     :   SQL
. *
. * File Name     :   outeadaf.dat
. *
. * Index Values  :   KEY40   KEY64                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTEADA1   IFILE    SQL, FIXED=114, KEY="U1-6,7-9,10-13,14-16,60-83"
OUTEADA2   IFILE    SQL, FIXED=114, KEY="U36-59,1-6,7-9,10-13,14-16,60-83"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTEDCLID  DIM       6      6        1     Claim ID                           
OTEDRPTC  DIM       3      3        7     Report Counter                     
OTEDSRVI  DIM       4      4        10    Service ID                         
OTEDSRVC  DIM       3      3        14    Service counter (right just.)      
OTEDITMN  DIM       5      5        17    Item Number                        
OTEDSERB  DIM       9      9        22    Service Benefit Amount             
OTEDNOPA  DIM       2      2        31    Number of Patients Seen            
OTEDEXPC  DIM       3      3        33    Explanation Code                   
OTEDCTID  DIM       24     24       36    Claim Transaction ID               
OTEDRKEY  DIM       24     24       60    Report Retrieve Key                
OTEDSPAR  DIM       30     30       84    Spare Variable                     
.
.End of Record                      114  
.
