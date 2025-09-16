. V11.03.02 23/05/2023 TTI C-0923703 Added Private Patient Service Adjustment % 
. V11.03.01 22/05/2023 TTI C-0923703 Changed Contract Id Description            
. V11.03.00 15/05/2023 TTI C-0923703 Created ABF Admitted MH Price Weights Table
. *----------------------------------------------------------------------
. * Include Name  :   PMSAMHFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   ABF Admitted MH Price Weights      
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsamhaf.dat
. *
. * Index Values  :   KEY16   KEY16                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSAMHA1   IFILE    SQL, FIXED=246, KEY="U1-6,7-16"
PMSAMHA2   IFILE    SQL, FIXED=246, KEY="U7-16,1-6"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMMHCNTR  DIM       6      6        1     Contract ID (pmscidaf)             
PMMHAMHC  DIM       10     10       7     AMHCC Code                         
PMMHAMHD  DIM       80     80       17    AMHCC Description                  
PMMHAVPL  FORM      6.2    5        97    Average Phase Length (Days)        
PMMHLOWB  FORM      4      3        102   Lower Bound (Inlier Bounds)        
PMMHUPPB  FORM      4      3        105   Upper bound (Inlier Bounds)        
PMMHSSOB  FORM      10.4   8        108   Short Stay Outlier Base (PW)       
PMMHSSOP  FORM      10.4   8        116   Short Stay Outlier Per Diem (PW)   
PMMHINLI  FORM      10.4   8        124   Inlier (Price Weight)              
PMMHLSOP  FORM      10.4   8        132   Long Stay Outlier Per Diem (PW)    
PMMHPPSA  FORM      3.2    4        140   Private Patient Service Adjustment%
PMMHCDAT  DIM       8      8        144   Date record created                
PMMHCTIM  DIM       8      8        152   Time record created                
PMMHCUID  DIM       10     10       160   Record created by                  
PMMHUDAT  DIM       8      8        170   Date record updated                
PMMHUTIM  DIM       8      8        178   Time record updated                
PMMHUUID  DIM       10     10       186   Record updated by                  
PMMHSPAR  DIM       50     50       196   Spare variable                     
.
.End of Record                      246  
.
