. V10.01.01 12/11/2010 ML  Added PTRADBAG - (Catg dc)   CAR 233264
. V9.11.001 30/04/2009 JT  New FD for Reassign Debt Table                       
. *----------------------------------------------------------------------
. * Include Name  :   PATRASFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Reassign Debt Table                
. *
. * File Type     :   SQL
. *
. * File Name     :   patrasaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATRASA1   IFILE    SQL, FIXED=192, KEY="U1-8,9-10"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTRAINVN  DIM       8      8        1     Invoice Number                     
PTRACNTN  DIM       2      2        9     Count                              
PTRASYST  DIM       1      1        11    System                             
PTRAOUST  FORM      12.2   8        12    Outstanding Amount                 
PTRARMOV  DIM       3      3        20    Reason for Debt Movement (Catg 'dm') 
PTRAPPOR  FORM      12.2   8        23    Patient Portion                    
PTRAIBAL  DIM       8      8        31    Date Invoice Balanced              
PTRADELE  DIM       1      1        39    Deleted (Y/N)                      
PTRACDAT  DIM       8      8        40    Date Record Created (CCYYMMDD)     
PTRACTIM  DIM       8      8        48    Time Record Created (HH:MM:SS)     
PTRACUID  DIM       10     10       56    WEB User ID Created (websecaf)     
PTRAUDAT  DIM       8      8        66    Date Record Updated (CCYYMMDD)     
PTRAUTIM  DIM       8      8        74    Time Record Updated (HH:MM:SS)     
PTRAUUID  DIM       10     10       82    WEB User ID Updated (websecaf)     
PTRADBAG  DIM       3      3        92    Debt Collection Agency (Catg dc)   
PTRASPAR  DIM       97     97       95    Spare                              
.
.End of Record                      192  
.
