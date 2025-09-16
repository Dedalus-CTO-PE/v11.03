. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CEAPSCFD.INC
. *
. * Function      :   File Def'n Include for Casemix Expense Analysis           
. *                   Patient Service Master Table        
. *
. * File Type     :   SQL
. *
. * File Name     :   ceapscaf.dat
. * Audit Name    :   ceaaudps.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
CEAAUDPS   IFILE    SQL, FIXED=208, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CEPSAUDD  DIM       8      8        1     Date of Change
CEPSAUDT  DIM       8      8        9     Time of Change
CEPSAUDP  DIM       2      2        17    Port
CEPSAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
CEPSAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
CEPSAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
CEAPSCA1   IFILE    SQL, FIXED=182, KEY="U1-7"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CEPSPSC   DIM       7      7        1     Patient Service Code               
CEPSDES   DIM       35     35       8     Description                        
CEPSTYP   DIM       1      1        43    Income Component Number 1 to 9     
CEPSQTY   FORM      6.2    5        44    Default Quantity                   
CEPSQDES  DIM       5      5        49    Quantity Description               
CEPSST1   FORM      8.2    6        54    Standard Cost 1                    
CEPSST2   FORM      8.2    6        60    Standard Cost 2                    
CEPSST3   FORM      8.2    6        66    Standard Cost 3                    
CEPSST4   FORM      8.2    6        72    Standard Cost 4                    
CEPSST5   FORM      8.2    6        78    Standard Cost 5                    
CEPSUR1   DIM       30     30       84    User Def Ref 1                     
CEPSUR2   DIM       30     30       114   User Def Ref 2                     
CEPSUD1   DIM       8      8        144   User Def Date 1                    
CEPSUD2   DIM       8      8        152   User Def Date 2                    
CEPSACT   DIM       1      1        160   Actual Cost 0=No                   
CEPSDRG   DIM       1      1        161   Use DRG Weighting 0=No             
CEPSVSC   DIM       2      2        162   Vic Cost Weight Service Category   
CEPSUY1   DIM       1      1        164   User Def Y/N 1                     
CEPSUY2   DIM       1      1        165   User Def Y/N 2                     
CEPSSPA   DIM       16     16       166   Spare                              
.
.End of Record                      182  
.
