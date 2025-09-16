. V5.01.001 27/12/1991 GKW Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   PATVKCFD.INC
. *
. * Function      :   File Def'n Include for Patient                        
. *                   Visit Card Information             
. *
. * File Type     :   SQL
. *
. * File Name     :   patvkcaf.dat
. * Audit Name    :   pataudvk.dat
. *
. * Modificatins  :   
. *       V5.14.01  09/06/2006  Steve Armstrong  CAR 108060
. *                 Fixed length of audit file to be 107 instead of 108
. *                 (despite the previous change which obviously
. *                 never happened)
. *       V5.03.01  13/10/1995
. *                 Fixed FIXED length of audit to be 107
. *                             Fixed FIXED length of audit to be 107
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
PATAUDVK   IFILE    SQL, FIXED=107, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTVKAUDD  DIM       8      8        1     Date of Change
PTVKAUDT  DIM       8      8        9     Time of Change
PTVKAUDP  DIM       2      2        17    Port
PTVKAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
PTVKAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
PTVKAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
PATVKCA1   IFILE    SQL, FIXED=82, KEY="U1-8"                                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DPTVKBIL  DIM       8      8        1     Visit number                       
PTVKCARD  DIM       20     20       9     Card number                        
PTVKCEXP  DIM       8      8        29    Card expiry date (CCYYMMDD)        
PTVKCXMP  DIM       3      3        37    Exemption code (Cat XM)            
PTVKFMLY  DIM       12     12       40    Family id                          
PTVKCOMP  DIM       3      3        52    Claim code (Cat CL)
PTVKSPAR  DIM       27     27       55    Spare variable
.
.End of Record                      82   
.
.Redefine Key Variables
.----------------------
PTVKBILL  FORM      8    
