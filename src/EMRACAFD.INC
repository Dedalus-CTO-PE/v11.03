. V11.01.02 21/07/2021  C-0905305 Updated table name length as based on specs   
. V11.01.02 24/05/2021 DAS C-0905305 Added SPAR variable                        
. V11.01.01 20/05/2021 DAS C-0905305 File Created                               
. *----------------------------------------------------------------------
. * Include Name  :   EMRACAFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   AECC Coefficients for Age Group            
. *
. * File Type     :   SQL
. *
. * File Name     :   emracaaf.dat
. *
. * Index Values  :   KEY38                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRACAA1   IFILE    SQL, FIXED=248, KEY="U1-30,31-38"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMAACODE  DIM       30     30       1     ECDG Code                          
EMAAFDAT  DIM       8      8        31    Effective Date From                
EMAATDAT  DIM       8      8        39    Effective Date To                  
EMAAAG04  FORM      3.6    6        47    Age 0 to 4                         
EMAAAG59  FORM      3.6    6        53    Age 5 to 9                         
EMAAAG14  FORM      3.6    6        59    Age 10 to 14                       
EMAAAG69  FORM      3.6    6        65    Age 15 to 69                       
EMAAAG74  FORM      3.6    6        71    Age 70 to 74                       
EMAAAG79  FORM      3.6    6        77    Age 75 to 79                       
EMAAAG84  FORM      3.6    6        83    Age 80 to 84                       
EMAAAG85  FORM      3.6    6        89    Age 85 and Over                    
EMAACDAT  DIM       8      8        95    Date Record Created                
EMAACTIM  DIM       8      8        103   Time Record Created                
EMAACUID  DIM       10     10       111   Record Created By                  
EMAAUDAT  DIM       8      8        121   Date Record Updated                
EMAAUTIM  DIM       8      8        129   Time Record Updated                
EMAAUUID  DIM       10     10       137   Record Updated By                  
EMAAAFLG  DIM       1      1        147   Active/Inactive flag               
.                                         0=Active
.                                         1=Inactive
EMAASPAR  DIM       100    100      148   Spare                              
.
.End of Record                      248  
.
