. V10.13.01 25/07/2018 TNG C-0848506 Extended PRGSSDOC from 6 to 10 chars       
. V9.03 .001 10/02/2004 LV  Made Patient indicator a DIM 3.                     
. V9.02 .001 21/11/2001 dc  created                                             
. *----------------------------------------------------------------------
. * Include Name  :   PRIGSLFD.INC
. *
. * Function      :   File Def'n Include for Private Practice                   
. *                   General Selection List for Letters 
. *
. * File Type     :   SQL
. *
. * File Name     :   prigslaf.dat
. *
. * Index Values  :   KEY22                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PRIGSLA1   IFILE    SQL, FIXED=61, KEY="U1-4,5-12,13-14,15-22"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRGSSEID  DIM       4      4        1     Selection ID.                      
PRGSDEBT  DIM       8      8        5     Debtor Number                      
DPRGSSCA  DIM       2      2        13    Scan Flag                          
.                                         0 = Debtor                           
.                                         1 = U/R                              
DPRGSUNI  DIM       8      8        15    Unique Identifier                  
PRGSPRAC  DIM       6      6        23    Medical Practitioner               
PRGSSDOC  DIM       10     10       29    Service Doctor                     
PRGSPIND  DIM       3      3        39    Patient Indicator (Cat GI)         
PRGSSTAT  DIM       1      1        42    Delete Status Indicator            
PRGSSPAR  DIM       18     18       43    Spare Variable                     
.
.End of Record                      61   
.
.Redefine Key Variables
.----------------------
PRGSSCAN  FORM      2    
PRGSUNIQ  FORM      8    
