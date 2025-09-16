. V11.00.01 28/02/2020 TTI C-0880961 Added status code 2 - exclude from ACC     
. V10.14.01 13/02/2019 EC C-0862664 Added EMICMETH                              
. V9.00.02  19/04/2002 JH  Added Index 4                                        
. *----------------------------------------------------------------------
. * Include Name  :   EMRICDFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   Emergency Diagnosis Codes Table    
. *
. * File Type     :   SQL
. *
. * File Name     :   emricdaf.dat
. *
. * Index Values  :   KEY9    KEY79   KEY18   KEY18                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRICDA1   IFILE    SQL, FIXED=190, KEY="U1-9"
EMRICDA2   IFILE    SQL, FIXED=190, KEY="U10-79,1-9"
EMRICDA3   IFILE    SQL, FIXED=190, KEY="U80-88,1-9"
EMRICDA4   IFILE    SQL, FIXED=190, KEY="U91-99,1-9"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMIC9COD  DIM       9      9        1     EMR Code                           
EMICDESC  DIM       70     70       10    Description                        
EMIC10CD  DIM       9      9        80    ICD 10 Code                        
EMICACTV  FORM      1      2        89    Active Flag                        
.                                         0 = Active                           
.                                         1 = Inactive                         
.                                         2 = Active, exclude from ACC (NZ only
.                                         )                                    
EMICVEMD  DIM       9      9        91    VEMD Code                          
EMICKEYW  DIM       70     70       100   KEY Word                           
EMICMETH  DIM       1      1        170   Methamphetamine Related            
.                                         Blank or 0 = No, 1 = Yes             
EMICSPAR  DIM       19     19       171   Spare Variable                     
.
.End of Record                      190  
.
