. V10.13.02 10/12/2018 PVL C-0859743 Added OTEHRKEY - Report Retrieve Key       
. V10.13.01 18/09/2018 PVL C-0859743 Created File Definition                    
. *----------------------------------------------------------------------
. * Include Name  :   OUTEAHFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   Eclipse Bulk Billing Assess Header 
. *
. * File Type     :   SQL
. *
. * File Name     :   outeahaf.dat
. *
. * Index Values  :   KEY33   KEY57                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTEAHA1   IFILE    SQL, FIXED=250, KEY="U1-6,7-9,176-199"
OUTEAHA2   IFILE    SQL, FIXED=250, KEY="U136-159,1-6,7-9,176-199"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTEHCLID  DIM       6      6        1     Claim ID                           
OTEHRPTC  DIM       3      3        7     Report counter (right just.)       
OTEHCLBP  DIM       9      9        10    Claim Benefit Paid                 
OTEHCLCA  DIM       9      9        19    Claim Charge Amount                
OTEHSDAT  DIM       8      8        28    Date of Service                    
OTEHSNAM  DIM       40     40       36    Patient Family Name                
OTEHFNAM  DIM       40     40       76    Patient First Name                 
OTEHMECF  DIM       1      1        116   Medicare Card Flag                 
OTEHMNUM  DIM       10     10       117   Patient Medicare Card Num          
OTEHRNUM  DIM       1      1        127   Patient Reference Num              
OTEHSRVP  DIM       8      8        128   Servicing Provider Num             
OTEHCTID  DIM       24     24       136   Claim Transaction ID               
OTEHUDTE  DIM       8      8        160   Date Updated (ccyymmdd)            
OTEHUTIM  DIM       8      8        168   Time Updated (hh:mm:ss)            
OTEHRKEY  DIM       24     24       176   Report Retrieval Key               
OTEHSPAR  DIM       50     50       200   Spare Variable                     
.
.End of Record                      250  
.
