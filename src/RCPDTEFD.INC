. V11.03.01 03/03/2023 TTI C-0917199 Added RCDTEADN - eAdmission Number        
. V10.14.01 20/03/2019 JT C-0857392 Changed Transaction count from DIM3 to DIM5 
. V10.08.01 23/08/2016 JT C-0819992 Added a new value to RCDTALLO = 2           
. V10.04.01 28/02/2014 JT C-297922 Added Private Practice Service Doctor        
. V10.01.01 18/02/2011 ML  Added RCDTSPUI RCDTSPDT & RCDTSPTM  CAR 233901       
. V10.00.01 18/05/2010 SA  Added RCDTBATN                                       
. V9.09.011 29/11/2007 JT  Added a new field for SX Extract                     
. V9.09.010 27/11/2007 PV  Increased size of Name to DIM 50 CAR 134035          
. V9.03.009 13/05/2004 JT  Added 6th index by Visit number                      
. V9.03.008 03/02/2004 LV  Added 5th Index with urnumber                        
. V9.03.007 09/01/2004 SB  Added index 3 & 4 and Deposit Type                   
. V9.03.006 08/01/2004 JH  Added scan flag description                          
. V9.03.005 08/01/2004 JH  Added index 2                                        
. V9.03.004 16/12/2003 LV  Added Address Fields                                 
. V9.03.003 04/12/2003 EC  Removed patdtraf transaction number                  
. V9.03.002 03/12/2003 DS  Changed sflg length to 1                             
. V9.03.001 02/12/2003 EC  Created FD                                           
. *----------------------------------------------------------------------
. * Include Name  :   RCPDTEFD.INC
. *
. * Function      :   File Def'n Include for Receipting                         
. *                   Receipt Details File               
. *
. * File Type     :   SQL
. *
. * File Name     :   rcpdteaf.dat
. *
. * Index Values  :   KEY17   KEY25   KEY29   KEY18   KEY25   KEY25          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
RCPDTEA1   IFILE    SQL, FIXED=502, KEY="U9-20,21-25"
RCPDTEA2   IFILE    SQL, FIXED=502, KEY="U343-350,9-20,21-25"
RCPDTEA3   IFILE    SQL, FIXED=502, KEY="U29-40,9-20,21-25"
RCPDTEA4   IFILE    SQL, FIXED=502, KEY="U342-342,9-20,21-25"
RCPDTEA5   IFILE    SQL, FIXED=502, KEY="U49-56,9-20,21-25"
RCPDTEA6   IFILE    SQL, FIXED=502, KEY="U41-48,9-20,21-25"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
RCDTTDAT  DIM       8      8        1     Transaction Date (CCYYMMDD)        
RCDTRECN  DIM       12     12       9     Receipt Number                     
RCDTTCNT  DIM       5      5        21    Transaction Count                  
RCDTREGI  DIM       3      3        26    Register                           
RCDTINVN  DIM       12     12       29    Invoice Number                     
RCDTVIST  DIM       8      8        41    Visit Number                       
RCDTURNO  DIM       8      8        49    U/R Number                         
RCDTNAME  DIM       50     50       57    Name                               
RCDTADD1  DIM       35     35       107   Address Line 1                     
RCDTADD2  DIM       35     35       142   Address Line 2                     
RCDTADD3  DIM       35     35       177   Address Line 3                     
RCDTADD4  DIM       35     35       212   Address Line 4                     
RCDTPOST  DIM       8      8        247   Post Code                          
RCDTSFLG  DIM       1      1        255   Scan Flag 0 = Debtor, 1 = PMI      
RCDTREFR  DIM       17     17       256   Reference                          
RCDTINCA  DIM       14     14       273   Income Account                     
RCDTBNKA  DIM       14     14       287   Bank Account                       
RCDTAMNT  FORM      12.2   8        301   Amount                             
RCDTDISC  FORM      12.2   8        309   Discount                           
RCDTMHOS  DIM       3      3        317   Multi Hospital Id (pathspaf)       
RCDTMDHS  DIM       2      2        320   Multi Database Hosp Id (pathospf)  
RCDTGSTC  DIM       6      6        322   GST Code                           
RCDTGSTA  DIM       14     14       328   GST Account                        
RCDTALLO  DIM       1      1        342   Allocated                          
.                                         0 = Normal Receipt                   
.                                         1 = Yes, a suspense receipt that has 
.                                         been allocated                       
.                                         2 = A suspense receipt that has not b
.                                         een allocated                        
RCDTRELD  DIM       8      8        343   Release Date (CCYYMMDD)            
RCDTRELT  DIM       8      8        351   Release Time (hh:mm:ss)            
RCDTPRAC  DIM       6      6        359   Practice                           
RCDTCDAT  DIM       8      8        365   Date Record Created (CCYYMMDD)     
RCDTCTIM  DIM       8      8        373   Time Record Created (hh:mm:ss)     
RCDTCUID  DIM       10     10       381   Web User Id Created (websecaf)     
RCDTUDAT  DIM       8      8        391   Date Record Updated (CCYYMMDD)     
RCDTUTIM  DIM       8      8        399   Time Record Updated (hh:mm:ss)     
RCDTUUID  DIM       10     10       407   Web User Id Updated (websecaf)     
RCDTDPTY  DIM       3      3        417   Deposit Type (Category DP)         
RCDTGLEX  DIM       1      1        420   SX G/L Extract 1=Yes 0/blank=No    
RCDTBATN  DIM       8      8        421   Batch Number (Eclipse only)        
RCDTRELU  DIM       10     10       429   User who Released Receipt Item     
RCDTSPUI  DIM       10     10       439   User who Allocated Suspense Record 
RCDTSPDT  DIM       8      8        449   Date Suspense Record Allocated     
RCDTSPTM  DIM       8      8        457   Time Suspense Record Allocated     
RCDTSDOC  DIM       10     10       465   Private Practice Service Doctor    
RCDTEADN  DIM       20     20       475   eAdmission Number                  
RCDTSPAR  DIM       7      7        495   Spare variable                     
.
.End of Record                      502  
.
