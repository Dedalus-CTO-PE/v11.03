. V10.14.01 28/06/2019 JT - Added record type (PMFCRTYP)=9 for ABF
. V9.03.001 24/11/2003 JT                                                    
. *----------------------------------------------------------------------
. * Include Name  :   PMSFCIFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Credit Note details                
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsfciaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSFCIA1   IFILE    SQL, FIXED=349, KEY="U1-8,9-16,17-22,25-32"                 
PMSFCIA2   IFILE    SQL, FIXED=349, KEY="U1-8,9-16,187-187,17-22,25-32"         
PMSFCIA3   IFILE    SQL, FIXED=349, KEY="U25-32,1-8,9-16,187-187,17-22"         
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMFCVISN  DIM       8      8        1     Visit Number                       
PMFCINVN  DIM       8      8        9     Invoice number                     
PMFCTRAN  DIM       6      6        17    Transaction number                 
PMFCSYST  DIM       2      2        23    System                             
.                                         1 - Emergency
.                                         2 - Outpatients
.                                         3 - Inpatients
PMFCCRNO  DIM       8      8        25    Credit Note number                 
PMFCCRDA  DIM       8      8        33    Credit Note Date                   
PMFCAMTT  FORM      12.2   8        41    Gross total amount                 
PMFCAMTG  FORM      12.2   8        49    Government Portion                 
PMFCAMTH  FORM      12.2   8        57    Orig rate before any disc.allowance
PMFCAMTI  FORM      12.2   8        65    Individual daily rate amount       
PMFCAMTP  FORM      12.2   8        73    Patient portion amount             
PMFCRBAT  FORM      12.2   8        81    Estimate fund rebate               
PMFCCAMT  FORM      12.2   8        89    Credit amount (exclude GST)        
PMFCTDAT  DIM       8      8        97    Date of Transaction                
PMFCADAT  DIM       8      8        105   To date for Accommodation          
PMFCITEM  DIM       9      9        113   Item Number                        
PMFCDESC  DIM       30     30       122   Description                        
PMFCDES2  DIM       35     35       152   Description                        
PMFCRTYP  DIM       1      1        187   Record Type                        
.                                         1 - Accommodation
.                                         2 - Theatre
.                                         3 - Miscellaneous
.                                         4 - Doctor Fees
.                                         8 - Procedure (NZ Private Billing)
.                                         9 - ABF
PMFCNDAY  FORM      4      3        188   No of days (Accommodation only)    
PMFCCLAI  FORM      1      2        191   0 - Not Claimed yet, 1 - Claimed   
PMFCTDOC  DIM       6      6        193   Treating doctor                    
PMFCSERV  FORM      5      4        199   Number of Services                 
PMFCODOC  DIM       6      6        203   Operating Doctor                   
PMFCSESS  DIM       2      2        209   Session (Theatre Only)             
PMFCMGRP  DIM       3      3        211   Misc.Group (Misc&Theatre only-Cat FI)
PMFCWARD  DIM       3      3        214   Ward of Accommodation record       
PMFCCTYP  DIM       3      3        217   Claim Type when printing invoice (CL)
PMFCATYP  DIM       3      3        220   Adm.Type when printing invoice (Cat A)
PMFCBTCH  DIM       8      8        223   Batch No for Misc.Itms,Cash,Journal
PMFCNINV  FORM      1      2        231   Number of invoice to be printed    
PMFCPTLS  FORM      12.2   8        233   Lumpsum amount patient portion     
PMFCRBLS  FORM      12.2   8        241   Lumpsum amount rebate portion      
PMFCDTYP  FORM      1      2        249   1=Low outlier,2=Inlier,3=Outlier   
PMFCADDC  FORM      1      2        251   Flag for additional charge         
PMFCGSTA  FORM      1      2        253   Is GST Applicable to this item     
.                                         0-No GST,1-Yes,2-Unknown GST
PMFCGSTC  DIM       6      6        255   GST Payable code                   
PMFCGSTM  FORM      12.2   8        261   GST Amount                         
PMFCCGST  FORM      12.2   8        269   Credit GST amount                  
PMFCGSTL  FORM      12.2   8        277   GST Lumpsum amount                 
PMFCATFI  DIM       8      8        285   Date item assigned to Fees Invoice 
PMFCDUPD  DIM       8      8        293   Date record updated                
PMFCTUPD  DIM       8      8        301   Time record updated                
PMFCWUSR  DIM       10     10       309   WEB User ID                        
PMFCSPAR  DIM       30     30       319   Spare variable                     
.
.End of Record                      349  
.
