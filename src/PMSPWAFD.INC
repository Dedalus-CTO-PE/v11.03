. V10.14.01 27/03/2019 JT C-0857392 Created Admitted Acute Price Weights table
. *----------------------------------------------------------------------
. * Include Name  :   PMSPWAFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   ABF Admitted Acute Price Weights   
. *
. * File Type     :   SQL
. *
. * File Name     :   pmspwaaf.dat
. *
. * Index Values  :   KEY10   KEY10                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSPWAA1   IFILE    SQL, FIXED=254, KEY="U1-6,7-10"
PMSPWAA2   IFILE    SQL, FIXED=254, KEY="U7-10,1-6"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMPWCNTR  DIM       6      6        1     Contract ID                        
PMPWDRGC  DIM       4      4        7     DRG Code                           
PMPWDRGD  DIM       80     80       11    DRG Description                    
PMPWSDPY  DIM       1      1        91    Same-Day Payment List              
.                                         1=Yes, 0 or blank=No                 
PMPWBICU  DIM       1      1        92    Bundle ICU                         
.                                         1=Yes, 0 or blank=No                 
PMPWALOS  FORM      6.2    5        93    ALOS                               
.                                         (excluding designated SD and unbundle
.                                         d ICU)                               
PMPWLOWB  FORM      4      3        98    Lower bound (Inlier Bounds)        
PMPWUPPB  FORM      4      3        101   Upper bound (Inlier Bounds)        
PMPWPSRV  FORM      3.2    4        104   Private Patient Service(Adjust.)%  
PMPWPAED  FORM      3.2    4        108   Paediatric (Adjustment)%           
PMPWSDAY  FORM      10.4   8        112   Same Day (Price Weight)            
PMPWSSOB  FORM      10.4   8        120   Short Stay Outlier Base (PW)       
PMPWSSOP  FORM      10.4   8        128   Short Stay Outlier Per Diem (PW)   
PMPWINLI  FORM      10.4   8        136   Inlier (Price Weight)              
PMPWLSOP  FORM      10.4   8        144   Long Stay Outlier Per Diem (PW)    
PMPWCDAT  DIM       8      8        152   Date record created                
PMPWCTIM  DIM       8      8        160   Time record created                
PMPWCUID  DIM       10     10       168   Record created by                  
PMPWUDAT  DIM       8      8        178   Date record updated                
PMPWUTIM  DIM       8      8        186   Time record updated                
PMPWUUID  DIM       10     10       194   Record updated by                  
PMPWSPAR  DIM       50     50       204   Spare variable                     
.
.End of Record                      254  
.
