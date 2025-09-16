. V5.01.001 27/12/1991 GKW Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   OUTBCHFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   Board Charging Table
. *
. * File Type     :   SQL
. *
. * File Name     :   outbchaf.dat
. * Audit Name    :   outaudbc.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
OUTAUDBC   IFILE    SQL, FIXED=108, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTBCAUDD  DIM       8      8        1     Date of Change
OTBCAUDT  DIM       8      8        9     Time of Change
OTBCAUDP  DIM       2      2        17    Port
OTBCAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
OTBCAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
OTBCAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
OUTBCHA1   IFILE    SQL, FIXED=82, KEY="U1-3,4-9,10-12,13-15,16-18"             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTBCCLM   DIM       3      3        1     Claim code (Cat CL)                
OTBCBRD   DIM       6      6        4     Board code (Health fund code)      
OTBCDEPT  DIM       3      3        10    Department (Cat A )                
DOTBCAGE  DIM       3      3        13    Last age in age group              
DOTBCNVI  DIM       3      3        16    Number of charged visits           
OTBCDESC  DIM       30     30       19    Rate description                   
DOTBCPPO  FORM     12.2    8        49    Patient portion of visit charge    
DOTBCBPO  FORM     12.2    8        57    Board portion of visit charge      
OTBCNINV  FORM      1      2        65    No of invoices (1 or 2)            
OTBCITEM  DIM       3      3        67    Miscellaneous group code (Cat FI)  
OTBCSPAR  DIM       12     12       70    Spare variable                     
.
.End of Record                      82   
.
.Redefine Key Variables
.----------------------
OTBCAGEG  FORM      3    
OTBCNVIS  FORM      3    
OTBCPPOR  FORM      8.2 
OTBCBPOR  FORM      8.2  
