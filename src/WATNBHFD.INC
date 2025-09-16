. V10.06.00 11/06/2015 DN C-303887 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   WATNBHFD.INC
. *
. * Function      :   File Def'n Include for Waiting List                       
. *                   NBRS Transmission File Batches     
. *
. * File Type     :   SQL
. *
. * File Name     :   watnbhaf.dat
. *
. * Index Values  :   KEY17                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WATNBHA1   IFILE    SQL, FIXED=219, KEY="U1-8,9-11,16-20,25-25"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WTNHXDAT  DIM       8      8        1     Extract Sent Date (CCYYMMDD)       
WTNHDHBC  DIM       3      3        9     DHB Code (Cat dh)                  
WTNHAGEN  DIM       4      4        12    Health Agency code (Cat HA)        
WTNHBTCH  DIM       5      5        16    Batch Number (NNNNN)               
WTNHPENV  DIM       4      4        21    Processing Environment             
.                                         PROD = Processing Environment        
.                                         CMPL = Compliance                    
WTNHSTAT  DIM       1      1        25    Processing Status                  
.                                         1=Sent                               
.                                         2=Ack File Loaded                    
.                                         3=Error Processing                   
.                                         4=Completed                          
.                                         5=File Failure                       
WTNHFDAT  DIM       8      8        26    File Preparation Date (CCYYMMDD)   
WTNHFTIM  DIM       4      4        34    File Preparation Time (HHMM)       
WTNHFVER  DIM       5      5        38    NBRS File Version (Format ANN.N)   
WTNHFNAM  DIM       12     12       43    NBRS File Name (DHBNNNNN.nbr)      
.                                         DHB is 1st 3 chars of HDP of dh code 
.                                         NNNNN is Batch no.                   
WTNHRECS  DIM       5      5        55    No. of Records sent (excl. Header) 
WTNHPROC  DIM       5      5        60    Returned No. of records processed  
WTNHRDEL  DIM       5      5        65    Returned No. of records deleted    
WTNHRINS  DIM       5      5        70    Returned No. of records inserted   
WTNHRERR  DIM       5      5        75    Returned No. of records in error   
WTNHRWRN  DIM       5      5        80    Returned No. of records warnings   
WTNHLDAT  DIM       8      8        85    Date file loaded at MOH            
WTNHUSRS  DIM       10     10       93    User last updated processing status
WTNHUDAT  DIM       8      8        103   Date last updated processing status
WTNHUTIM  DIM       8      8        111   Time last updated processing status
WTNHSPAR  DIM       100    100      119   Spare                              
.
.End of Record                      219  
.
