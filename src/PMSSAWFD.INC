. V11.02.01 02/08/2022 JP C-0906597 Created                                     
. *----------------------------------------------------------------------
. * Include Name  :   PMSSAWFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   ABF Sub-Acute Price Weights        
. *
. * File Type     :   SQL
. *
. * File Name     :   pmssawaf.dat
. *
. * Index Values  :   KEY13   KEY13   KEY13                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSSAWA1   IFILE    SQL, FIXED=340, KEY="U1-6,7-9,10-11,12-13"
PMSSAWA2   IFILE    SQL, FIXED=340, KEY="U7-9,10-11,12-13,1-6"
PMSSAWA3   IFILE    SQL, FIXED=340, KEY="U12-13,7-9,10-11,1-6"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMSACNTR  DIM       6      6        1     Contract ID (pmscidaf)             
PMSACLCD  DIM       3      3        7     AN-SNAP Classification (pmssnpaf)  
PMSAASVR  DIM       2      2        10    AN-SNAP Version (pmssnpaf)         
PMSACCOD  DIM       2      2        12    Care type Cat CC UDF6              
.                                         2=Rehabilitation                     
.                                         3=Palliative Care                    
.                                         4=GEM                                
.                                         5=Psychogeriatric Care               
.                                         6=Maintenance                        
PMSAADSC  DIM       80     80       14    AN-SNAP Description                
PMSAEDSC  DIM       50     50       94    Episode Type Description           
PMSASDOV  DIM       1      1        144   Sameday 1=Yes                      
PMSAALOS  FORM      6.2    5        145   Average LOS                        
PMSALBIN  FORM      4      3        150   Lower Bound (Inlier Bounds)        
PMSAUBIN  FORM      4      3        153   Upper Bound (Inlier Bounds)        
PMSASDPW  FORM      10.4   8        156   Same Day (Price Weight)            
PMSASSOP  FORM      10.4   8        164   Short Stay Outlier Per Diem (PW)   
PMSAINPW  FORM      10.4   8        172   Inlier (Price Weight)              
PMSALSOP  FORM      10.4   8        180   Long Stay Outlier Per Diem (PW)    
PMSACDAT  DIM       8      8        188   Date Record Created (CCYYMMDD)     
PMSACTIM  DIM       8      8        196   Time Created (hh:mm:ss)            
PMSACUID  DIM       10     10       204   Created by (websecaf)              
PMSAUDAT  DIM       8      8        214   Updated Date (CCYYMMDD)            
PMSAUTIM  DIM       8      8        222   Updated Time (hh:mm:ss)            
PMSAUUID  DIM       10     10       230   Updated by (websecaf)              
PMSASPAR  DIM       100    100      240   Spare                              
.
.End of Record                      340  
.
