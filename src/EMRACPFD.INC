. V11.01.02 21/07/2021  C-0905305 Changed length of table name                  
. V11.01.01 31/05/2021  C-0905305 Initial Table Creation                        
. *----------------------------------------------------------------------
. * Include Name  :   EMRACPFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   AECC Coefficients for Adm.Predictor
. *
. * File Type     :   SQL
. *
. * File Name     :   emracpaf.dat
. *
. * Index Values  :   KEY38                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRACPA1   IFILE    SQL, FIXED=242, KEY="U1-30,31-38"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMAPCODE  DIM       30     30       1     ECDG Code                          
EMAPFDAT  DIM       8      8        31    Date Effective From (CCYYMMDD)     
EMAPTDAT  DIM       8      8        39    Date Effective To (CCYYMMDD)       
EMAPAGE1  FORM      3.6    6        47    Age 0 to 14                        
EMAPAGE2  FORM      3.6    6        53    Age 80+                            
EMAPTCT1  FORM      3.6    6        59    Triage Category 1                  
EMAPTCT2  FORM      3.6    6        65    Triage Category 2                  
EMAPTCT3  FORM      3.6    6        71    Triage Category 3                  
EMAPTCT4  FORM      3.6    6        77    Triage Category 4                  
EMAPTCT5  FORM      3.6    6        83    Triage Category 5                  
EMAPCDAT  DIM       8      8        89    Date Record Created (CCYYMMDD)     
EMAPCTIM  DIM       8      8        97    Time Record Created (HH:MM:SS)     
EMAPCUID  DIM       10     10       105   WEB User ID Created (websecaf)     
EMAPUDAT  DIM       8      8        115   Update Date (CCYYMMDD)             
EMAPUTIM  DIM       8      8        123   Update Time (HH:MM:SS)             
EMAPUUID  DIM       10     10       131   WEB User ID Updated (websecaf)     
EMAPAFLG  DIM       1      1        141   Inactive Flag                      
.                                         0 = Active                           
.                                         1 = Inactive                         
EMAPSPAR  DIM       100    100      142   Spare                              
.
.End of Record                      242  
.
