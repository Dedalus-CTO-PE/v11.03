. V10.13.01 25/07/2018 TNG C-0848506 Extended PRFSSDOC from 6 to 10 chars       
. V9.02 .001 17/11/2001 dc  created                                             
. *----------------------------------------------------------------------
. * Include Name  :   PRIFSLFD.INC
. *
. * Function      :   File Def'n Include for Private Practice                   
. *                   Financial Selection List for Letter
. *
. * File Type     :   SQL
. *
. * File Name     :   prifslaf.dat
. *
. * Index Values  :   KEY22                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PRIFSLA1   IFILE    SQL, FIXED=69, KEY="U1-4,5-12,13-14,15-22"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRFSSEID  DIM       4      4        1     Selection ID.                      
PRFSDEBT  DIM       8      8        5     Debtor Number                      
DPRFSSCA  DIM       2      2        13    Scan Flag                          
.                                         0 = Debtor                           
.                                         1 = U/R                              
DPRFSUNI  DIM       8      8        15    Unique Identifier                  
PRFSPRAC  DIM       6      6        23    Medical Practitioner               
PRFSSDOC  DIM       10     10       29    Service Doctor                     
PRFSPIND  DIM       3      3        39    Patient Indicator                  
PRFSOSMT  FORM      7.2    6        42    Outstanding Amount                 
PRFSSTAT  DIM       1      1        48    Delete Status Indicator            
PRFSSPAR  DIM       20     20       49    Spare Variable                     
.
.End of Record                      69   
.
.Redefine Key Variables
.----------------------
PRFSSCAN  FORM      2    
PRFSUNIQ  FORM      8    
