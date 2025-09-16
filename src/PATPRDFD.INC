. V10.12.00 20/07/2018 DNG C-0851002 Created New                                
. *----------------------------------------------------------------------
. * Include Name  :   PATPRDFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Provisional DRG via CMBS Item Code 
. *
. * File Type     :   SQL
. *
. * File Name     :   patprdaf.dat
. *
. * Index Values  :   KEY13   KEY16                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATPRDA1   IFILE    SQL, FIXED=45, KEY="U1-9,10-13"
PATPRDA2   IFILE    SQL, FIXED=45, KEY="U1-9,14-16,10-13"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTPDCMBS  DIM       9      9        1     CMBS Item Code                     
PTPDPDRG  DIM       4      4        10    Provisional DRG                    
PTPDWGHT  DIM       3      3        14    Weighted Value                     
PTPDPSEX  DIM       1      1        17    Patient Sex                        
.                                          M = Male                            
.                                          F = Female                          
.                                          R = Other                           
.                                          U = Unknown                         
.                                          I = Intermediate                    
PTPDSDAY  DIM       1      1        18    Sameday Only Visit                 
.                                          Blank                               
.                                          0 = No                              
.                                          1 = Yes                             
PTPDAGEF  DIM       2      2        19    Valid Age Range From (years)       
PTPDAGET  DIM       3      3        21    Valid Age Range To (years)         
PTPDACTV  DIM       1      1        24    Active                             
.                                          0 = Active                          
.                                          1 = Inactive                        
PTPDSPAR  DIM       20     20       25    Spare Variable                     
.
.End of Record                      45   
.
