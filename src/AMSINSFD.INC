. V6.00.001 29/12/1992                                                       
. *----------------------------------------------------------------------
. * Include Name  :   AMSINSFD.INC
. *
. * Function      :   File Def'n Include for Asset Management
. *                   Insurance Details            
. *
. * File Type     :   SQL
. *
. * File Name     :   amsinsaf.dat
. * Audit Name    :   amsaudin.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
AMSAUDIN   IFILE    SQL, FIXED=274, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
AMINAUDD  DIM       8      8        1     Date of Change
AMINAUDT  DIM       8      8        9     Time of Change
AMINAUDP  DIM       2      2        17    Port
AMINAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
AMINAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
AMINAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
AMSINSA1   IFILE    SQL, FIXED=248, KEY="U1-2,3-14"                             
AMSINSA2   IFILE    SQL, FIXED=248, KEY="U15-19,50-79,1-2,3-14"                 
AMSINSA3   IFILE    SQL, FIXED=248, KEY="U110-117,1-2,3-14"                     
AMSINSA4   IFILE    SQL, FIXED=248, KEY="U50-79,20-49,1-2,3-14"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
AMINREG   DIM       2      2        1     Register                           
AMINASS   DIM       12     12       3     Asset                              
AMINCOM   DIM       5      5        15    Insurance Company Code             
AMINCOD   DIM       30     30       20    Insurance Company Name (If No Code)
AMINREF   DIM       30     30       50    Policy Reference                   
AMINCON   DIM       30     30       80    Contact                            
AMINDAT   DIM       8      8        110   Renewal Date                       
AMINVAL   FORM      12.2   8        118   Insured Value                      
AMINAPR   FORM      12.2   8        126   Annual Premimum                    
AMINUA1   FORM      12.2   8        134   User Def Amt 1                     
AMINUA2   FORM      12.2   8        142   User Def Amt 2                     
AMINUR1   DIM       30     30       150   User Def Ref 1                     
AMINUR2   DIM       30     30       180   User Def Ref 2                     
AMINUD1   DIM       8      8        210   User Def Date 1                    
AMINUD2   DIM       8      8        218   User Def Date 2                    
AMINUY1   DIM       1      1        226   User Def Y/N 1                     
AMINUY2   DIM       1      1        227   User Def Y/N 2                     
AMINSPA   DIM       20     20       228   Spare                              
.
.End of Record                      248  
.
