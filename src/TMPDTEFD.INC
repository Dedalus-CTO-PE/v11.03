. V10.14.01 21/03/2019 JT C-0857392 Changed Transaction number from DIM3 to DIM5
. V10.04.02 03/03/2014 JT C-297922 Added PP Service Doctor
. V10.04.01 07/02/2014 SA C-288084 Extended TMDTNAME to 50 chars.
. *----------------------------------------------------------------------
. * Include Name  :   TMPDTEFD.INC
. *
. * Function      :   File Def'n Include for Temporary Code for Temp Files      
. *                   Temporary Receipting Details       
. *
. * File Type     :   SQL
. *
. * File Name     :   tmpdteaf.dat
. *
. * Index Values  :   KEY17   KEY25   KEY29   KEY18   KEY25                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
TMPDTEA1   IFILE    SQL, FIXED=467, KEY="U9-20,21-25"
TMPDTEA2   IFILE    SQL, FIXED=467, KEY="U343-350,9-20,21-25"
TMPDTEA3   IFILE    SQL, FIXED=467, KEY="U29-40,9-20,21-25"
TMPDTEA4   IFILE    SQL, FIXED=467, KEY="U342-342,9-20,21-25"
TMPDTEA5   IFILE    SQL, FIXED=467, KEY="U49-56,9-20,21-25"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
TMDTTDAT  DIM       8      8        1     Transaction Date (CCYYMMDD)        
TMDTRECN  DIM       12     12       9     Receipt Number                     
TMDTTCNT  DIM       5      5        21    Transaction Number                 
TMDTREGI  DIM       3      3        26    Register                           
TMDTINVN  DIM       12     12       29    Invoice Number                     
TMDTVIST  DIM       8      8        41    Visit Number                       
TMDTURNO  DIM       8      8        49    U/R Number                         
TMDTNAME  DIM       50     50       57    Name                               
TMDTADD1  DIM       35     35       107   Address Line 1                     
TMDTADD2  DIM       35     35       142   Address Line 2                     
TMDTADD3  DIM       35     35       177   Address Line 3                     
TMDTADD4  DIM       35     35       212   Address Line 4                     
TMDTPOST  DIM       8      8        247   Post Code                          
TMDTSFLG  DIM       1      1        255   Scan Flag                          
TMDTREFR  DIM       17     17       256   Reference                          
TMDTINCA  DIM       14     14       273   Income Account                     
TMDTBNKA  DIM       14     14       287   Bank Account                       
TMDTAMNT  FORM      12.2   8        301   Amount                             
TMDTDISC  FORM      12.2   8        309   Discount                           
TMDTMHOS  DIM       3      3        317   Multi Hospital Id (pathspaf)       
TMDTMDHS  DIM       2      2        320   Multi Database Hosp Id (pathospf)  
TMDTGSTC  DIM       6      6        322   GST Code                           
TMDTGSTA  DIM       14     14       328   GST Account                        
TMDTALLO  DIM       1      1        342   Allocated 0=No 1=Yes               
TMDTRELD  DIM       8      8        343   Release Date (CCYYMMDD)            
TMDTRELT  DIM       8      8        351   Release Time (hh:mm:ss)            
TMDTPRAC  DIM       6      6        359   Practice                           
TMDTCDAT  DIM       8      8        365   Date Record Created (CCYYMMDD)     
TMDTCTIM  DIM       8      8        373   Time Record Created (hh:mm:ss)     
TMDTCUID  DIM       10     10       381   Web User Id Created (websecaf)     
TMDTUDAT  DIM       8      8        391   Date Record Updated (CCYYMMDD)     
TMDTUTIM  DIM       8      8        399   Time Record Updated (hh:mm:ss)     
TMDTUUID  DIM       10     10       407   Web User Id Updated (websecaf)     
TMDTDPTY  DIM       3      3        417   Deposit Type (Category DP)         
TMDTPRIN  DIM       1      1        420   Re-print Invoice (Y/N) 1-Yes 0-No  
TMDTPRNT  DIM       6      6        421   Printer                            
TMDTTAMT  FORM      12.2   8        427   Tendered Amount                    
TMDTSDOC  DIM       10     10       435   Private Practice Service Doctor    
TMDTSPAR  DIM       22     22       445   Spare Variable                     
.
.End of Record                      467  
.
