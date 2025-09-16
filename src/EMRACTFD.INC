. V11.01.02 21/07/2021  C-0905305 Update table based on specs                   
. V11.01.01 20/05/2021 THU C-0905305 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   EMRACTFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   AECC Coefficients for Transport Mode
. *
. * File Type     :   SQL
. *
. * File Name     :   emractaf.dat
. *
. * Index Values  :   KEY38                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRACTA1   IFILE    SQL, FIXED=260, KEY="U1-30,31-38"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMATCODE  DIM       30     30       1     ECDG Code                          
EMATFDAT  DIM       8      8        31    Date Effective From (CCYYMMDD)     
EMATTDAT  DIM       8      8        39    Date Effective To (CCYYMMDD)       
EMATADMF  FORM      3.6    6        47    Admitted Flag                      
EMATDSDC  FORM      3.6    6        53    Discharged Deceased                
EMATRABA  FORM      3.6    6        59    At own Risk After Being Attended   
EMATRTAH  FORM      3.6    6        65    Referral to Another Hospital       
EMATABAM  FORM      3.6    6        71    Arrival by Ambulance               
EMATTCT1  FORM      3.6    6        77    Triage Category 1                  
EMATTCT2  FORM      3.6    6        83    Triage Category 2                  
EMATTCT3  FORM      3.6    6        89    Triage Category 3                  
EMATTCT4  FORM      3.6    6        95    Triage Category 4                  
EMATTCT5  FORM      3.6    6        101   Triage Category 5                  
EMATCDAT  DIM       8      8        107   Date Record Created (CCYYMMDD)     
EMATCTIM  DIM       8      8        115   Time Record Created (HH:MM:SS)     
EMATCUID  DIM       10     10       123   WEB User ID Created (websecaf)     
EMATUDAT  DIM       8      8        133   Update Date (CCYYMMDD)             
EMATUTIM  DIM       8      8        141   Update Time (HH:MM:SS)             
EMATUUID  DIM       10     10       149   WEB User ID Updated (websecaf)     
EMATAFLG  DIM       1      1        159   Inactive Flag                      
.                                         0 = Active                           
.                                         1 = Inactive                         
EMATSPAR  DIM       100    100      160   Spare                              
.
.End of Record                      260  
.
