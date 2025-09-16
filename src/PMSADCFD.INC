. V9.09.001 26/10/2007 JH  Created                                           
. V9.09.002 13/12/2007 JH  Created for CAR 153381                            
. *----------------------------------------------------------------------
. * Include Name  :   PMSADCFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Adverse Outcome Codes              
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsadcaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSADCA1   IFILE    SQL, FIXED=256, KEY="U1-6"                                  
PMSADCA2   IFILE    SQL, FIXED=256, KEY="U7-36,1-6"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMACCODE  DIM       6      6        1     Outcome Code                       
PMACDESC  DIM       30     30       7     Description                        
PMACACHS  DIM       1      1        37    ACHS Indicator 1=Yes               
PMACDECI  DIM       1      1        38    Deceased Indicator 1=Yes           
PMACINFC  DIM       3      3        39    Infection Code (Category IY)       
PMACSHRD  DIM       100    100      42    Short Definition                   
PMACVLD1  DIM       1      1        142   Valid Grade 1 (1=Yes)              
PMACVLD2  DIM       1      1        143   Valid Grade 2 (1=Yes)              
PMACVLD3  DIM       1      1        144   Valid Grade 3 (1=Yes)              
PMACVLD4  DIM       1      1        145   Valid Grade 4 (1=Yes)              
PMACVLD5  DIM       1      1        146   Valid Grade 5 (1=Yes)              
PMACVLD6  DIM       1      1        147   Valid Grade 6 (1=Yes)              
PMACVLD7  DIM       1      1        148   Valid Grade 7 (1=Yes)              
PMACVLD8  DIM       1      1        149   Valid Grade 8 (1=Yes)              
PMACVLD9  DIM       1      1        150   Valid Grade 9 (1=Yes)              
PMACVL10  DIM       1      1        151   Valid Grade 10 (1=Yes)             
PMACVLNA  DIM       1      1        152   Valid Grade N/A (1=Yes)            
PMACINAC  DIM       1      1        153   Inactive (1=Yes)                   
PMACWEBC  DIM       10     10       154   WEB User ID Created (websecaf)     
PMACDATC  DIM       8      8        164   Date Created (ccyymmdd)            
PMACTIMC  DIM       8      8        172   Time Created (hh:mm:ss)            
PMACWEBU  DIM       10     10       180   WEB User ID Created (websecaf)     
PMACDATU  DIM       8      8        190   Date Updated (ccyymmdd)            
PMACTIMU  DIM       8      8        198   Time Updated (hh:mm:ss)            
PMACSPAR  DIM       50     50       206   Spare                              
.
.End of Record                      256  
.
