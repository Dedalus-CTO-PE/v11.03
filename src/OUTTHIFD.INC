. V10.15.01 08/10/2019 RPH C-0861253 New file for Outpatient Telehealth Informat
. *----------------------------------------------------------------------
. * Include Name  :   OUTTHIFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   Outpatient Telehealth Information  
. *
. * File Type     :   SQL
. *
. * File Name     :   outthiaf.dat
. *
. * Index Values  :   KEY8                                                   
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTTHIA1   IFILE    SQL, FIXED=1164, KEY="U1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTTHOUTN  DIM       8      8        1     Outpatient Number                  
OTTHSTAT  DIM       3      3        9     Telehealth Status (Category OM)    
OTTHRSIT  DIM       255    255      12    Telehealth Receiving Site Name     
OTTHRCOD  DIM       10     10       267   Telehealth Receiving Code          
OTTHRADD  DIM       512    512      277   Telehealth Receiving Address       
OTTHWURL  DIM       255    255      789   Telehealth Waiting Room URL        
OTTHE164  DIM       20     20       1044  Telehealth Receiving E164          
OTTHSPAR  DIM       100    100      1064  SPARE                              
.
.End of Record                      1164 
.
