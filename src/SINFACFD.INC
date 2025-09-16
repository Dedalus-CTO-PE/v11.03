. V6.00.002 06/01/1994                                                       
. *----------------------------------------------------------------------
. * Include Name  :   SINFACFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Supply/Issue Factors               
. *
. * File Type     :   SQL
. *
. * File Name     :   sinfacaf.dat
. * Audit Name    :   sinaudfa.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
SINAUDFA   IFILE    SQL, FIXED=75, KEY="D1-8,9-16,17-18,19-19"                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIFAAUDD  DIM       8      8        1     Date of Change
SIFAAUDT  DIM       8      8        9     Time of Change
SIFAAUDP  DIM       2      2        17    Port
SIFAAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
SIFAAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
SIFAAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
SINFACA1   IFILE    SQL, FIXED=49, KEY="U1-15,16-30"                            
SINFACA2   IFILE    SQL, FIXED=49, KEY="U16-30,1-15"                            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIFAISSU  DIM       15     15       1     ISSUE UNIT                         
SIFASUPP  DIM       15     15       16    SUPPLY UNIT                        
SIFACTOR  FORM      4      3        31    RELATIONSHIP                       
SIFAFILL  DIM       15     15       34    **** SPARE ****                    
.
.End of Record                      49   
.
