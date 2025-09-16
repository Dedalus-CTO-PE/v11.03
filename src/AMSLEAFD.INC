. V6.00.001 29/12/1992                                                       
. *----------------------------------------------------------------------
. * Include Name  :   AMSLEAFD.INC
. *
. * Function      :   File Def'n Include for Asset Management
. *                   Leased Asset Details               
. *
. * File Type     :   SQL
. *
. * File Name     :   amsleaaf.dat
. * Audit Name    :   amsaudle.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
AMSAUDLE   IFILE    SQL, FIXED=288, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
AMLEAUDD  DIM       8      8        1     Date of Change
AMLEAUDT  DIM       8      8        9     Time of Change
AMLEAUDP  DIM       2      2        17    Port
AMLEAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
AMLEAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
AMLEAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
AMSLEAA1   IFILE    SQL, FIXED=262, KEY="U1-2,3-14"                             
AMSLEAA2   IFILE    SQL, FIXED=262, KEY="U15-19,50-79,1-2,3-14"                 
AMSLEAA3   IFILE    SQL, FIXED=262, KEY="U50-79,15-19,1-2,3-14"                 
AMSLEAA4   IFILE    SQL, FIXED=262, KEY="U110-117,1-2,3-14"                     
AMSLEAA5   IFILE    SQL, FIXED=262, KEY="U121-128,1-2,3-14"                     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
AMLEREG   DIM       2      2        1     Register                           
AMLEASS   DIM       12     12       3     Asset                              
AMLECOM   DIM       5      5        15    Lease Company                      
AMLECNM   DIM       30     30       20    Lease Company Name (If No Code)    
AMLEREF   DIM       30     30       50    Lease Reference                    
AMLECON   DIM       30     30       80    Lease Contact                      
AMLEDAT   DIM       8      8        110   Date Lease Commenced               
AMLEPER   FORM      4      3        118   Lease Period (Number of Months)    
AMLEEDT   DIM       8      8        121   Lease Payout Date                  
AMLEINS   FORM      12.2   8        129   Monthly Installment                
AMLEPMT   DIM       3      3        137   Payment Method (Category PM)       
AMLERES   FORM      12.2   8        140   Residual Value                     
AMLEUA1   FORM      12.2   8        148   User Def Amt 1                     
AMLEUA2   FORM      12.2   8        156   User Def Amt 2                     
AMLEUR1   DIM       30     30       164   User Def Ref 1                     
AMLEUR2   DIM       30     30       194   User Def Ref 2                     
AMLEUD1   DIM       8      8        224   User Def Date 1                    
AMLEUD2   DIM       8      8        232   User Def Date 2                    
AMLEUY1   DIM       1      1        240   User Def Y/N 1                     
AMLEUY2   DIM       1      1        241   User Def Y/N 2                     
AMLESPA   DIM       20     20       242   Spare                              
.
.End of Record                      262  
.
