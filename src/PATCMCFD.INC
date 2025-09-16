. V5.08.01 10/10/2000 CS  New File                                          
. *----------------------------------------------------------------------
. * Include Name  :   PATCMCFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Casemix Codes Table                
. *
. * File Type     :   SQL
. *
. * File Name     :   patcmcaf.dat
. * Audit Name    :   pataudca.dat
. *
. * Modifications :
. *           V9.02.01  22/05/2002  Dean Cramer     
. *                     Added second index for search                    
. *           V5.08.01  07/12/2000  Tonii  509 mods
. *                     Renamed PTCASPAR to PTCSPARE, variable was used 
. *                     another program
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
PATAUDCA   IFILE    SQL, FIXED=120, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTCAAUDD  DIM       8      8        1     Date of Change
PTCAAUDT  DIM       8      8        9     Time of Change
PTCAAUDP  DIM       2      2        17    Port
PTCAAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
PTCAAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
PTCAAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
PATCMCA1   IFILE    SQL, FIXED=95, KEY="U1-9"                                   
PATCMCA2   IFILE    SQL, FIXED=95, KEY="U10-39,40-69,1-9"                                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTCACODE  DIM       9      9        1     Casemix Code                       
PTCADES1  DIM       30     30       10    Description 1                      
PTCADES2  DIM       30     30       40    Description 2                      
PTCAELOS  FORM      4      3        70    Expected Length of Stay            
PTCAACTV  FORM      1      2        73    Active (1=Yes)                     
PTCSPARE  DIM       20     20       75    Spare Variable                     
.
.End of Record                      95   
.
