. V5.07.001 07/08/1998 Glenn  507 Changes
. V5.01.001 27/12/1991 GKW Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   PATBCHFD.INC
. *
. * Function      :   File Def'n Include for Patient                            
. *                   Inpatient Board Charging           
. *
. * File Type     :   SQL
. *
. * File Name     :   patbchaf.dat
. * Audit Name    :   pataudbc.dat
. * Mods          :
. *                   V9.04.01  19.08.2005      J.Tan          CAR 62750
. *                              Removed redefined amount variables
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
PATAUDBC   IFILE    SQL, FIXED=102, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTBCAUDD  DIM       8      8        1     Date of Change
PTBCAUDT  DIM       8      8        9     Time of Change
PTBCAUDP  DIM       2      2        17    Port
PTBCAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
PTBCAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
PTBCAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
PATBCHA1   IFILE    SQL, FIXED=76, KEY="U1-3,4-9,10-12,13-15"                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTBCCLM   DIM       3      3        1     Claim code (Cat CL)                
PTBCBRD   DIM       6      6        4     Board code (Health fund code)      
PTBCDEPT  DIM       3      3        10    Department (Cat A )                
DPTBCEND  DIM       3      3        13    Ending day in range                
PTBCDESC  DIM       30     30       16    Rate description                   
PTBCPPOR  FORM     12.2    8        46    Patient portion of daily charge    
PTBCBPOR  FORM     12.2    8        54    Board portion of daily charge      
PTBCNINV  FORM      1      2        62    No of invoices (1 or 2)            
PTBCSPAR  DIM       12     12       64    Spare variable                     
.
.End of Record                      76   
.
.Redefine Key Variables
.----------------------
PTBCENDD  FORM      3    
.
.
