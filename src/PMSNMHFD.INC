. V10.06.00 11/06/2015 DN C-303887 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   PMSNMHFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   NMDS Transmission File Batches     
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsnmhaf.dat
. *
. * Index Values  :   KEY17                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSNMHA1   IFILE    SQL, FIXED=219, KEY="U1-8,9-11,16-20,25-25"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMNHXDAT  DIM       8      8        1     Extract Date (CCYYMMDD)            
PMNHDHBC  DIM       3      3        9     DHB Code (Cat dh)                  
PMNHAGEN  DIM       4      4        12    Health Agency code (Cat HA)        
PMNHBTCH  DIM       5      5        16    Batch Number (NNNNN)               
PMNHPENV  DIM       4      4        21    Processing Environment             
.                                         PROD = Production                    
.                                         COMP = Test                          
PMNHSTAT  DIM       1      1        25    Processing Status                  
.                                         1=Sent                               
.                                         2=Ack File Loaded                    
.                                         3=Error Processing                   
.                                         4=Completed                          
.                                         5=File Failure                       
PMNHFDAT  DIM       8      8        26    Extracted From Date                
PMNHTDAT  DIM       8      8        34    Extracted To Date                  
PMNHFVER  DIM       6      6        42    NMDS File Version (Format ANNN.N)  
PMNHFNAM  DIM       12     12       48    NMDS File Name (DHBNNNNN.ndm)      
.                                         DHB is 1st 3 chars of HDP of dh code 
.                                         NNNNN is Batch no                    
PMNHRECS  DIM       5      5        60    No. of Records sent (incl. Header) 
PMNHPROC  DIM       5      5        65    Returned No. of records processed  
PMNHRDEL  DIM       5      5        70    Returned No. of records deleted    
PMNHRINS  DIM       5      5        75    Returned No. of records inserted   
PMNHRREJ  DIM       5      5        80    Returned No. of records rejected   
PMNHLDAT  DIM       8      8        85    Date file loaded at MOH            
PMNHUSRS  DIM       10     10       93    User last updated processing status
PMNHUDAT  DIM       8      8        103   Date last updated processing status
PMNHUTIM  DIM       8      8        111   Time last updated processing status
PMNHSPAR  DIM       100    100      119   Spare                              
.
.End of Record                      219  
.
