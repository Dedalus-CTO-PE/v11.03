. V6.00.001 29/12/1992                                                       
. *----------------------------------------------------------------------
. * Include Name  :   AMSACMFD.INC
. *
. * Function      :   File Def'n Include for Asset Management
. *                   Comments Table                
. *
. * File Type     :   SQL
. *
. * File Name     :   amsacmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
AMSACMA1   IFILE    SQL, FIXED=106, KEY="U1-2,3-14,15-17"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
AMACREG   DIM       2      2        1     Register                           
AMACASS   DIM       12     12       3     Asset                              
AMACLIN   DIM       3      3        15    Line Number                        
AMACCOM   DIM       78     78       18    Line Details                       
AMACSPA   DIM       10     10       96                                       
.
.End of Record                      106  
.
