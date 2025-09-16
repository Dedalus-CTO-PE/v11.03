. V10.13.01 25/07/2018 TNG C-0848506 Extended PRGLSDRF/PRGLSDTO from 6 to 10 cha
. V9.03.001 10/02/2004 LV  Changed Debtor number to be DIM 8.                   
. V9.02 .001 21/11/2001 dc  created                                             
. *----------------------------------------------------------------------
. * Include Name  :   PRIGLSFD.INC
. *
. * Function      :   File Def'n Include for Private Practice                   
. *                   General Letter Selection Criteria  
. *
. * File Type     :   SQL
. *
. * File Name     :   priglsaf.dat
. *
. * Index Values  :   KEY4                                                   
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PRIGLSA1   IFILE    SQL, FIXED=176, KEY="U1-4"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRGLSEID  DIM       4      4        1     Selection ID.                      
PRGLSEDC  DIM       35     35       5     Selection Description              
PRGLDBFR  DIM       8      8        40    UR or Debtor Number From           
PRGLDBTO  DIM       8      8        48    UR or Debtor Number To             
PRGLSNFR  DIM       20     20       56    Surname From                       
PRGLSNTO  DIM       20     20       76    Surname To                         
PRGLVDFR  DIM       8      8        96    Visit Date From (ccyymmdd)         
PRGLVDTO  DIM       8      8        104   Visit Date To (ccyymmdd)           
PRGLPPFR  DIM       6      6        112   Practice From                      
PRGLPPTO  DIM       6      6        118   Practice To                        
PRGLSDFR  DIM       10     10       124   Service Doctor From                
PRGLSDTO  DIM       10     10       134   Service Doctor To                  
PRGLCCFR  DIM       3      3        144   Claim Code From (category CL)      
PRGLCCTO  DIM       3      3        147   Claim Code To (category CL)        
PRGLLTYP  DIM       3      3        150   Letter Type                        
PRGLSCAN  DIM       1      1        153   Scan Flag                          
PRGLSPAR  DIM       22     22       154   Spare                              
.
.End of Record                      176  
.
