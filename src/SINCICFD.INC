. V9.05.002 03/02/2006 SB  Extended Unit of Measure                          
. V9.05.001 01/02/2006 SB  Added index 4                                     
. V9.09.001 16/07/2007 SB  Added Contract Item and Contract Expiry Date      
. *----------------------------------------------------------------------
. * Include Name  :   SINCICFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Catalog Supplier Details           
. *
. * File Type     :   SQL
. *
. * File Name     :   sincicaf.dat
. * Audit Name    :   sinaudic.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
SINAUDIC   IFILE    SQL, FIXED=312, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIICAUDD  DIM       8      8        1     Date of Change
SIICAUDT  DIM       8      8        9     Time of Change
SIICAUDP  DIM       2      2        17    Port
SIICAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
SIICAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
SIICAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
SINCICA1   IFILE    SQL, FIXED=287, KEY="U1-7,8-12,13-27"                       
SINCICA2   IFILE    SQL, FIXED=287, KEY="U8-12,49-78,1-7,13-27"                 
SINCICA3   IFILE    SQL, FIXED=287, KEY="U8-12,1-7,13-27"                       
SINCICA4   IFILE    SQL, FIXED=287, KEY="U8-12,49-78,13-27,1-7"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIICCAT   DIM       7      7        1     Catalog                            
SIICSUP   DIM       5      5        8     Supplier Code                      
SIICSUT   DIM       15     15       13    Supply Unit                        
SIICCCT   FORM      12.4   9        28    Current Code (Includes GST)        
SIICLCT   FORM      10.4   8        37    Last Invoiced Cost (Includes GST)  
SIICLTM   FORM      6      4        45    Lead Time                          
SIICPNO   DIM       30     30       49    Part Number                        
SIICPD1   DIM       60     60       79    Part Desc Line 1                   
SIICPD2   DIM       60     60       139   Part Desc Line 2                   
SIICMAN   FORM      1      2        199   Manufacturer 0=No                  
SIICAPO   FORM      1      2        201   Allow Purchase Orders 0=No         
SIICUR1   DIM       15     15       203   EAN Number                         
SIICUR2   DIM       15     15       218   User Defined Reference 2           
SIICUD1   DIM       8      8        233   User Def Date 1                    
SIICUD2   DIM       8      8        241   User Def Date 2                    
SIICUC1   DIM       3      3        249   User Def Code 1 IC1                
SIICUC2   DIM       3      3        252   User Def Code 2 IC2                
SIICUY1   DIM       1      1        255   User Def Yes/No 0=No               
SIICUY2   DIM       1      1        256   User Def Yes/No 0=No               
SIICUOM   DIM       10     10       257   Unit of Measure                    
SIICCONT  DIM       1      1        267   Contract Item Y/N 0=No             
SIICCTEX  DIM       8      8        268   Contract Expiry Date (CCYYMMDD)    
SIICSPA   DIM       11     11       276   Spare Variable                     
.
.End of Record                      287  
.
