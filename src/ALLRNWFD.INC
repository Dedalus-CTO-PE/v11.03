. V10.08.01 28/04/2016 EC C-0813977 Added ALRNORES to ALRNNRHP                  
. V10.05.02 15/10/2014 EC C-291413 Added Completed status                       
. V10.05.01 16/09/2014 EC C-291413 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   ALLRNWFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Referral renewal Audit             
. *
. * File Type     :   SQL
. *
. * File Name     :   allrnwaf.dat
. *
. * Index Values  :   KEY24                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLRNWA1   IFILE    SQL, FIXED=278, KEY="U1-8,9-16,17-24"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALRNVISN  DIM       8      8        1     Referral/Visit Number              
ALRNRDAT  DIM       8      8        9     Date Renewed (CCYYMMDD)            
ALRNRTIM  DIM       8      8        17    Renewed Time (HH:MM:SS)            
ALRNRUID  DIM       10     10       25    Renewed By (websecaf)              
ALRNORTY  DIM       3      3        35    Original Type of Ref. (Cat RI)     
ALRNOXDT  DIM       8      8        38    Original Expiry Date (CCYYMMDD)    
ALRNORDT  DIM       8      8        46    Original Ref Renewal Date(CCYYMMDD)
ALRNNRTY  DIM       3      3        54    New Type of Ref. (Cat RI)          
ALRNNXDT  DIM       8      8        57    New Expiry Date (CCYYMMDD)         
ALRNNRDT  DIM       8      8        65    New Ref Renewal Date(CCYYMMDD)     
ALRNSTAT  DIM       1      1        73    Status                             
.                                         " " or 0 = Current                   
.                                         1 = Deleted                          
.                                         2 = Completed - OP Booking Attended  
ALRNRRDT  DIM       8      8        74    Reinstate Ref Date (CCYYMMDD)      
ALRNRRTM  DIM       8      8        82    Reinstate Ref Time (HH:MM:SS)      
ALRNRRID  DIM       10     10       90    Reinstate Ref User (websecaf)      
ALRNDDAT  DIM       8      8        100   Date Deleted (CCYYMMDD)            
ALRNDTIM  DIM       8      8        108   Time Deleted (HH:MM:SS)            
ALRNDUID  DIM       10     10       116   Deleted By (websecaf)              
ALRNCDAT  DIM       8      8        126   Date Record Created (CCYYMMDD)     
ALRNCTIM  DIM       8      8        134   Time Record Created (HH:MM:SS)     
ALRNCUID  DIM       10     10       142   WEB User ID Created (websecaf)     
ALRNUDAT  DIM       8      8        152   Update Date (CCYYMMDD)             
ALRNUTIM  DIM       8      8        160   Update Time (HH:MM:SS)             
ALRNUUID  DIM       10     10       168   WEB User ID Updated (websecaf)     
ALRNORES  DIM       10     10       178   Original Responsible HCP (pmshcpaf)
ALRNNRES  DIM       10     10       188   New Responsible HCP (pmshcpaf)     
ALRNORHC  DIM       10     10       198   Original Referring HCP (pmshcpaf)  
ALRNORHP  DIM       10     10       208   Original Referring HCP Practice    
ALRNNRHC  DIM       10     10       218   New Referring HCP (pmshcpaf)       
ALRNNRHP  DIM       10     10       228   New Referring HCP Practice         
ALRNSPAR  DIM       40     40       238   Spare                              
.
.End of Record                      278  
.
