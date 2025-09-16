. V9.09.001 30/01/2008 PV  Created Prosthetic Tracking Detail Tble CAR 155334
. V9.09.002 20/11/2008 PV  Added DTRN - patdtraf transaction number          
. *----------------------------------------------------------------------
. * Include Name  :   PMSPTDFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Prosthetic Tracking Detail Table   
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsptdaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSPTDA1   IFILE    SQL, FIXED=206, KEY="U1-8,9-16,17-24,25-30"                 
PMSPTDA2   IFILE    SQL, FIXED=206, KEY="U17-24,1-8,9-16,25-30"                 
PMSPTDA3   IFILE    SQL, FIXED=206, KEY="U40-47,17-24,1-8,9-16,25-30"           
PMSPTDA4   IFILE    SQL, FIXED=206, KEY="U17-24,25-30,1-8,9-16"                 
PMSPTDA5   IFILE    SQL, FIXED=206, KEY="U139-163,1-8,9-16,17-24,25-30"         
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMPETRDT  DIM       8      8        1     Date of Transaction ccyymmdd       
PMPETRTM  DIM       8      8        9     Time of Transaction hh:mm:ss       
PMPEVISN  DIM       8      8        17    Visit Number                       
PMPETRAN  DIM       6      6        25    Transaction Number                 
PMPEITEM  DIM       9      9        31    Item Code                          
PMPEURNO  DIM       8      8        40    U/R Number                         
PMPETRTY  DIM       1      1        48    Transaction Type                   
PMPEIDES  DIM       30     30       49    Item Description                   
PMPESERV  FORM      5      4        79    Number of Services                 
PMPETDAT  DIM       8      8        83    Transaction Date (Service Date)    
PMPEAMTT  FORM      12.2   8        91    Gross Total Amount                 
PMPEAMTP  FORM      12.2   8        99    Patient Portion                    
PMPERBAT  FORM      12.2   8        107   Rebate Portion                     
PMPEGSTC  DIM       6      6        115   GST Code                           
PMPEGSTM  FORM      12.2   8        121   GST Amount                         
PMPEWUSR  DIM       10     10       129   Web User ID                        
PMPEEXFN  DIM       25     25       139   PROS_RECON_ccyymmddhhmmss          
PMPEDTEX  DIM       8      8        164   Date Extracted ccyymmdd            
PMPETMEX  DIM       8      8        172   Time Extracted hh:mm:ss            
PMPEDTRN  DIM       6      6        180   patdtraf transaction number        
PMPESPAR  DIM       20     20       186   Spare Variable                     
.
.End of Record                      206  
.
