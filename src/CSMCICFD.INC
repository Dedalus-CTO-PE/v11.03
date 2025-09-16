. V6.00.001 09/04/1997 BGA New File                                          
. *----------------------------------------------------------------------
. * Include Name  :   CSMCICFD.INC
. *
. * Function      :   File Def'n Include for Corporate Supply
. *                   Corporate Catalog/Supplier Table   
. *
. * File Type     :   SQL
. *
. * File Name     :   csmcicaf.dat
. * Audit Name    :   csmaudic.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
CSMAUDIC   IFILE    SQL, FIXED=318, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CSICAUDD  DIM       8      8        1     Date of Change
CSICAUDT  DIM       8      8        9     Time of Change
CSICAUDP  DIM       2      2        17    Port
CSICAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
CSICAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
CSICAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
CSMCICA1   IFILE    SQL, FIXED=292, KEY="U1-7,8-12,13-27"                       
CSMCICA2   IFILE    SQL, FIXED=292, KEY="U8-12,50-79,1-7,13-27"                 
CSMCICA3   IFILE    SQL, FIXED=292, KEY="U8-12,1-7,13-27"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CSICCAT   DIM       7      7        1     Catalog                            
CSICSUP   DIM       5      5        8     Supplier                           
CSICSUT   DIM       15     15       13    Supply Unit                        
CSICCCT   FORM      12.4   9        28    Current Cost                       
CSICLCT   FORM      12.4   9        37    Last Invoiced Cost                 
CSICLTM   FORM      6      4        46    Lead Time for Delivery             
CSICPNO   DIM       30     30       50    Part Number                        
CSICPD1   DIM       60     60       80    Part Description 1                 
CSICPD2   DIM       60     60       140   Part Description 2                 
CSICMAN   FORM      1      2        200   Manufacturer 0=No                  
CSICAPO   FORM      1      2        202   Allow Orders 0=No                  
CSICUR1   DIM       25     25       204   User Def Ref 1                     
CSICUR2   DIM       25     25       229   User Def Ref 2                     
CSICUD1   DIM       8      8        254   User Def Date 1                    
CSICUD2   DIM       8      8        262   User Def Date 2                    
CSICUY1   DIM       1      1        270   User Def Y/N 1                     
CSICUY2   DIM       1      1        271   User Def Y/N 2                     
CSICSPA   DIM       20     20       272   Spare                              
.
.End of Record                      292  
.
