. V9.02.001 20/03/2003 DS  Added Multiple Delivery Point Code                
. *----------------------------------------------------------------------
. * Include Name  :   SINPOAFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Purchase Order Header File         
. *
. * File Type     :   SQL
. *
. * File Name     :   sinpoaaf.dat
. * Audit Name    :   sinaudpa.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
SINAUDPA   IFILE    SQL, FIXED=293, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIPAAUDD  DIM       8      8        1     Date of Change
SIPAAUDT  DIM       8      8        9     Time of Change
SIPAAUDP  DIM       2      2        17    Port
SIPAAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
SIPAAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
SIPAAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
SINPOAA1   IFILE    SQL, FIXED=268, KEY="U1-7"                                  
SINPOAA2   IFILE    SQL, FIXED=268, KEY="U8-12,119-126,1-7"                     
SINPOAA3   IFILE    SQL, FIXED=268, KEY="U127-134,1-7"                          
SINPOAA4   IFILE    SQL, FIXED=268, KEY="U119-126,1-7"                          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIPAPON   DIM       7      7        1     Purchase Order Number              
SIPASUP   DIM       5      5        8     Supplier Code                      
SIPAORI   DIM       3      3        13    Originator                         
SIPAICN   DIM       30     30       16    Internal Contact                   
SIPASCN   DIM       30     30       46    Supplier Contact                   
SIPADEL   DIM       40     40       76    Delivery Point                     
SIPAMES   DIM       3      3        116   Message Code                       
SIPADIN   DIM       8      8        119   Date Input ccyymmdd                
SIPADPR   DIM       8      8        127   Date Printed                       
SIPADCN   DIM       8      8        135   Date Cancelled                     
SIPADCM   DIM       8      8        143   Date Completed                     
SIPACON   DIM       3      3        151   Comfirmation Code                  
SIPAIDP   DIM       40     40       154   Internal Delivery Point            
SIPAUR1   DIM       15     15       194   User Def Ref 1                     
SIPAUR2   DIM       15     15       209   User Def Ref 2                     
SIPAUD1   DIM       8      8        224   User Def Date 1                    
SIPAUD2   DIM       8      8        232   User Def Date 2                    
SIPAUC1   DIM       3      3        240   User Def Code 1                    
SIPAUC2   DIM       3      3        243   User Def Code 2                    
SIPAUY1   DIM       1      1        246   User Def Y/N 1                     
SIPAUY2   DIM       1      1        247   User Def Y/N 2                     
SIPACST   DIM       5      5        248   Default Cost Centre                
SIPAWAR   DIM       5      5        253   Default Warehouse                  
SIPAPNT   DIM       1      1        258   Delivery Point (Cat PNT SAR Only)  
SIPAMDP   DIM       3      3        259   Multiple Delivery Point Code       
SIPASPA   DIM       6      6        262   Spare                              
.
.End of Record                      268  
.
