. V11.01.01 21/07/2021  C-0905305 Initial Table Construction                    
. *----------------------------------------------------------------------
. * Include Name  :   EMRACIFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   AECC Coefficients for Intercept    
. *
. * File Type     :   SQL
. *
. * File Name     :   emraciaf.dat
. *
. * Index Values  :   KEY38                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRACIA1   IFILE    SQL, FIXED=500, KEY="U1-30,31-38"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMRASUBV  DIM       30     30       1     ECDG Subcode                       
EMRAFDAT  DIM       8      8        31    Effective Date From (CCYYMMDD)     
EMRATDAT  DIM       8      8        39    Effective Date to (CCYYMMDD)       
EMRASUBD  DIM       256    256      47    ECDG Subcode Description           
EMRACODE  DIM       30     30       303   ECDG Code                          
EMRACINT  FORM      4.8    7        333   Coefficient for Intercept          
EMRACITS  FORM      4.8    7        340   Coefficient for Intcpt ECDG Subcat 
EMRADATC  DIM       8      8        347   Date Record Created                
EMRATIMC  DIM       8      8        355   Time Record Created                
EMRAUSRC  DIM       10     10       363   Record Created By                  
EMRADATU  DIM       8      8        373   Date Record Updated                
EMRATIMU  DIM       8      8        381   Time Record Updated                
EMRAUSRU  DIM       10     10       389   Record Updated By                  
EMRAAFLG  DIM       1      1        399   Active/Inactive Flag               
.                                         0=Active                             
.                                         1=Inactive                           
EMRASPAR  DIM       100    100      400   Spare                              
.
.End of Record                      500  
.
