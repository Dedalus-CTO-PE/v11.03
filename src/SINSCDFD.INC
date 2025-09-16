. *----------------------------------------------------------------------
. * Include Name  :   SINSCDFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Supplier Contract Details          
. *
. * File Type     :   SQL
. *
. * File Name     :   sinscdaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINSCDA1   IFILE    SQL, FIXED=302, KEY="U1-10,11-15,16-22,23-30,31-45"         
SINSCDA2   IFILE    SQL, FIXED=302, KEY="U16-22,23-30,11-15,1-10,31-45"         
SINSCDA3   IFILE    SQL, FIXED=302, KEY="U11-15,16-22,23-30,1-10,31-45"         
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SISDCON   DIM       10     10       1     Contract ID                        
SISDSUP   DIM       5      5        11    Supplier Code                      
SISDCAT   DIM       7      7        16    Catalog Code                       
SISDSDT   DIM       8      8        23    Price Effective From Date          
SISDSUT   DIM       15     15       31    Supply Unit                        
SISDUC1   FORM      12.4   9        46    Unit Cost (0 to Break 1)           
SISDUC2   FORM      12.4   9        55    Unit Cost (Break 1 to Break 2)     
SISDUC3   FORM      12.4   9        64    Unit Cost (Break 2 to Break 3)     
SISDUC4   FORM      12.4   9        73    Unit Cost ( > Break 3)             
SISDBQ1   FORM      12.2   8        82    Quantity Break 1                   
SISDBQ2   FORM      12.2   8        90    Quantity Break 2                   
SISDBQ3   FORM      12.2   8        98    Quantity Break 3                   
SISDMQT   FORM      12.2   8        106   Minimum Order Quantity             
SISDPO1   DIM       60     60       114   Purchase Order Ref 1               
SISDPO2   DIM       60     60       174   Purchase Order Ref 2               
SISDUR1   DIM       15     15       234   User Def Ref 1                     
SISDUR2   DIM       15     15       249   User Def Ref 2                     
SISDUD1   DIM       8      8        264   User Def Date 1                    
SISDUD2   DIM       8      8        272   User Def Date 2                    
SISDUY1   DIM       1      1        280   User Def Y/N 1                     
SISDUY2   DIM       1      1        281   User Def Y/N 2                     
SISDSPA   DIM       20     20       282   Spare                              
.
.End of Record                      302  
.
