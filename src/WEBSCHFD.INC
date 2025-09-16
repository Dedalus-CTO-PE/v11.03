. V11.02.01 05/04/2022 EC C-0911828 Added WBSCCDAT and WBSCCTIM                 
. V11.01.01 26/04/2021 EC C-0899288 Added WBSCHOSP and WBSCSITE                 
. V10.04.01 19/02/2014 AP C-275582 Added Index 5                                
. V10.02.01 31/03/2011 JP  Increased printer size CAR 239574                    
. V9.00.007 06/12/2001 bga Added Exclusion Flags for Pub Hol & Mon - Sun        
. *----------------------------------------------------------------------
. * Include Name  :   WEBSCHFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   Report Server Schedule Table       
. *
. * File Type     :   SQL
. *
. * File Name     :   webschaf.dat
. *
. * Index Values  :   KEY8    KEY25   KEY26   KEY16   KEY34                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBSCHA1   IFILE    SQL, FIXED=329, KEY="U1-8"
WEBSCHA2   IFILE    SQL, FIXED=329, KEY="U9-9,10-17,18-25,1-8"
WEBSCHA3   IFILE    SQL, FIXED=329, KEY="U143-152,10-17,1-8"
WEBSCHA4   IFILE    SQL, FIXED=329, KEY="U10-17,1-8"
WEBSCHA5   IFILE    SQL, FIXED=329, KEY="U135-142,10-17,143-152,1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBSCSCHD  DIM       8      8        1     Schedule Number                    
WBSCSTAT  DIM       1      1        9     Status                             
.                                         0-Current Execution                  
.                                         1-Awaiting Processing                
.                                         6-Process Aborted                    
.                                         7-Completed & No Output              
.                                         8-Completed & Spooled                
.                                         9-Completed & Printed                
WBSCSCDT  DIM       8      8        10    Schedule Date (Blank Immed. Exec)  
WBSCSCTM  DIM       8      8        18    Schedule Time (Blank Immed. Exec)  
WBSCACTV  DIM       9      9        26    Active Process ID                  
WBSCUNIX  DIM       50     50       35    Unix Command                       
WBSCDSRP  DIM       50     50       85    Description of report              
WBSCRPID  DIM       8      8        135   Report Program ID                  
WBSCUSER  DIM       10     10       143   Web User                           
WBSCRDTE  DIM       8      8        153   Request Date                       
WBSCRTIM  DIM       8      8        161   Request Time                       
WBSCSDAT  DIM       8      8        169   Started Date                       
WBSCSTIM  DIM       8      8        177   Started Time                       
WBSCSFLG  FORM      1      2        185   Start Flag :Set to 1 by Report Prog
WBSCOTYP  FORM      1      2        187   Output Type : 0=Text 1=HTML        
WBSCNREC  FORM      6      4        189   Expected No. of records            
WBSCRPRO  FORM      6      4        193   Records Processed                  
WBSCUTIM  DIM       8      8        197   Last Update Time                   
WBSCPRIN  DIM       6      6        205   Printer                            
WBSCSPOO  DIM       50     50       211   Spool File                         
WBSCNCOP  FORM      3      3        261   No of Copies                       
WBSCPREP  DIM       1      1        264   Print Report 0=No 1=Yes            
WBSCRDAT  DIM       12     12       265   Re-Schedule Encoded Date String    
WBSCREND  DIM       8      8        277   Re-Schedule End Date               
WBSCPERM  DIM       1      1        285   Save as Permanent Spool File 1=Yes 
WBSCEXCP  DIM       8      8        286   Exclusion Flags - Hols, Mon-Sun    
WBSCHOSP  DIM       3      3        294   Hospital ID (pathspaf)             
WBSCSITE  DIM       6      6        297   Outpatient Site (outsitaf)         
WBSCCDAT  DIM       8      8        303   Completed Date (CCYYMMDD)          
WBSCCTIM  DIM       8      8        311   Completed Time (HH:MM:SS)          
WBSCSPAR  DIM       10     10       319   Spare                              
.
.End of Record                      329  
.
