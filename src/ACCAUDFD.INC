. V10.14.01 05/03/2019 RPH C-0869550 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   ACCAUDFD.INC
. *
. * Function      :   File Def'n Include for ACC Claim                          
. *                   ACC Claim                          
. *
. * File Type     :   SQL
. *
. * File Name     :   accaudaf.dat
. *
. * Index Values  :   KEY54                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ACCAUDA1   IFILE    SQL, FIXED=200, KEY="U1-20,21-28,29-36,37-44,45-54"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ACAUCLMN  DIM       20     20       1     ACC Claim Number                   
ACAUADMN  DIM       8      8        21    Accessed via Visit Number          
ACAUDATE  DIM       8      8        29    Date of Transaction (CCYYNNDD)     
ACAUTIME  DIM       8      8        37    Time of Transaction (HH:MM:SS)     
ACAUWUID  DIM       10     10       45    Web User Id (websecaf)             
ACAUAUTY  DIM       1      1        55    Audit Type                         
.                                         A=Add                                
.                                         C=Change ACC Number                  
.                                         D=Delete                             
.                                         S=Submitted                          
.                                         U=Update                             
.                                         V=View                               
ACAUTREC  DIM       1      1        56    ACC Type of Record                 
.                                         A=Accident/Injury Details            
.                                         D=Injury Diagnosis Details           
.                                         P=Form Printing                      
.                                         R=Referral Details                   
.                                         W=Work Capacity Details              
ACAUDIGC  DIM       10     10       57    ACC Diagnosis Code                 
ACAUDIGV  DIM       3      3        67    ACC Diagnosis Value SetID(pmsvstaf)
.                                         1-ICD9 2=ICD10 3=READ                
ACAUDIGS  DIM       1      1        70    ACC Diagnosis Side (L/R/NA)        
ACAURPTY  DIM       3      3        71    Referral Provider Type(Category IW)
ACAUSATC  DIM       6      6        74    Stationery Code (ibatmhaf)         
ACAUOACC  DIM       20     20       80    Old ACC Claim Number               
ACAUSPAR  DIM       100    100      100   Spare Variable                     
.
.End of Record                      200  
.
