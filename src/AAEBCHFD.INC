. V5.01.001 27/12/1991 GKW Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   AAEBCHFD.INC
. *
. * Function      :   File Def'n Include for Accident & Emergency               
. *                   A&E Board Charging 
. *
. * File Type     :   SQL
. *
. * File Name     :   aaebchaf.dat
. * Audit Name    :   aaeaudbc.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
AAEAUDBC   IFILE    SQL, FIXED=105, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
AEBCAUDD  DIM       8      8        1     Date of Change
AEBCAUDT  DIM       8      8        9     Time of Change
AEBCAUDP  DIM       2      2        17    Port
AEBCAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
AEBCAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
AEBCAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
AAEBCHA1   IFILE    SQL, FIXED=87, KEY="U1-3,4-9,10-12,13-15"                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
AEBCCLM   DIM       3      3        1     Claim code (Cat CL)                
AEBCBRD   DIM       6      6        4     Board code (Health fund code)      
DAEBCAGE  DIM       3      3        10    Last age in age group range        
DAEBCNVI  DIM       3      3        13    Number of chargeable visits        
AEBCDESC  DIM       30     30       16    Rate description                   
AEBCPTPO  FORM     12.2    8        46    Patient portion of visit charge    
AEBCBDPO  FORM     12.2    8        54    Board portion of visit charge      
AEBCNINV  FORM      1      2        62    No of invoices (1 or 2)            
AEBCITEM  DIM       3      3        64    Miscellaneous group code (Cat FI)  
AEBCSPAR  DIM       20     20       67    Spare variable                     
.
.End of Record                      87   
.
.Redefine Key Variables
.----------------------
AEBCAGEG  FORM      3    
AEBCNVIS  FORM      3    
.
AEBCPPOR  FORM      8.2    4        46    Patient portion of visit charge    
AEBCBPOR  FORM      8.2    4        50    Board portion of visit charge      
