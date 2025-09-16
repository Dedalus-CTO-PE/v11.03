. *----------------------------------------------------------------------
. * Include Name  :   HICCLMFD.INC
. *
. * Function      :   File Def'n Include for HIC CLAIMS                         
. *                   HIC Claims file                    
. *
. * File Type     :   SQL
. *
. * File Name     :   hicclmaf.dat
. *
. * Mods
. *                   V9.05.01 12/04/2006 JT     CAR 93982
. *                            Added new field for Batch No previously batched 
. *                   V9.04.04 01/08/2005 JT
. *                            Changed index 7 to include voucher no
. *                   V9.04.03 17/06/2005 JT
. *                            Added index 8
. *                   V9.04.02 13/05/2005  Steve Armstrong   CAR 61331
. *                            Added HCCLVPOS
. *                   V9.04.01 10/05/2005 JT
. *                            Added Total Adjustment
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HICCLMA1   IFILE    SQL, FIXED=293, KEY="U1-8"                                  
HICCLMA2   IFILE    SQL, FIXED=293, KEY="U16-23,1-8"                            
HICCLMA3   IFILE    SQL, FIXED=293, KEY="U26-33,1-8"                            
HICCLMA4   IFILE    SQL, FIXED=293, KEY="U52-61,68-75,1-8"                      
HICCLMA5   IFILE    SQL, FIXED=293, KEY="U86-91,92-97,68-75,1-8"                
HICCLMA6   IFILE    SQL, FIXED=293, KEY="U86-91,98-103,68-75,1-8"               
HICCLMA7   IFILE    SQL, FIXED=293, KEY="U11-15,241-242,1-8"                    
HICCLMA8   IFILE    SQL, FIXED=293, KEY="U9-10,68-75,1-8"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HCCLCLMN  DIM       8      8        1     Claim Number                       
HCCLSTAT  DIM       2      2        9     Claim Status (Right Justified)     
.                                         0 - Printed
.                                         1 - Batched
.                                         2 - Hold
.                                         3 - Resubmit
HCCLBTCH  DIM       5      5        11    Batch Number (1 Alpha 4 Numeric)   
HCCLVISN  DIM       8      8        16    Visit Number                       
HCCLVTYP  FORM      2      2        24    Visit Type                         
.                                         1 = A & E
.                                         2 = OUTPATIENT
.                                         3 = INPATIENT
HCCLURNO  DIM       8      8        26    U/R Number                         
HCCLPMCI  DIM       8      8        34    MCI (3 Alpha 5 Numeric)            
HCCLPYEE  DIM       10     10       42    Payee Provider Number              
HCCLPSRV  DIM       10     10       52    Service Provider Number            
HCCLMPRA  DIM       6      6        62    Medical Practice                   
HCCLDATE  DIM       8      8        68    Claim Date (ccyymmdd)              
HCCLADOC  DIM       10     10       76    Booking Doctor's Code (OBADOCT)    
HCCLSITE  DIM       6      6        86    Outpatient Site                    
HCCLCTYP  DIM       6      6        92    Clinic Type                        
HCCLCLID  DIM       6      6        98    Clinic ID                          
HCCLPIND  DIM       3      3        104   Patient Indicator (Catg GI)        
HCCLMITM  FORM      1      2        107   Multiple Items for this Claim 1-Yes
HCCLSENT  DIM       8      8        109   Date Claim Sent (CCYYMMDD)         
HCCLRECP  DIM       8      8        117   Date Receipted (CCYYMMDD)          
HCCLPBAT  DIM       8      8        125   Date Previously Batched (ccmmyydd) 
HCCLNBAT  DIM       8      8        133   Next Batch Number (Resubmission to)
HCCLCAMN  FORM      12.2   8        141   Total Amount Claimed               
HCCLRCVA  FORM      12.2   8        149   Total Amount Received              
HCCLREJA  FORM      12.2   8        157   Total Amount Rejected              
HCCLWOFF  FORM      12.2   8        165   Total Amount 'Write Off'           
HCCLTRIN  FORM      12.2   8        173   Total Amount 'Transfer to Invoice' 
HCCLADJM  FORM      12.2   8        181   Total Amount Adjustment            
HCCLCDAT  DIM       8      8        189   Date Record Created (ccyymmdd)     
HCCLCTIM  DIM       8      8        197   Time Record Created (hh:mm:ss)     
HCCLCUID  DIM       10     10       205   WEB User ID Created (websecaf)     
HCCLUDAT  DIM       8      8        215   Date Record Updated (ccyymmdd)     
HCCLUTIM  DIM       8      8        223   Time Record Updated (hh:mm:ss)     
HCCLUUID  DIM       10     10       231   WEB User ID Updated (websecaf)     
HCCLVPOS  DIM       2      2        241   Voucher Position                   
HCCLPNUM  DIM       5      5        243   Batch Number Previously Batched    
HCCLSPAR  DIM       45     45       248   Spare Variable                     
.
.End of Record                      293  
.
