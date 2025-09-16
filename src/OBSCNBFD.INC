. 6.05 .004 03/02/1999                                                       
. *----------------------------------------------------------------------
. * Include Name  :   OBSCNBFD.INC
. *
. * Function      :   File Def'n Include for WEB
. *                   Observation Clinical Note Text Area             
. *
. * File Type     :   SQL
. *
. * File Name     :   obscnbaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OBSCNBA1   IFILE    SQL, FIXED=143, KEY="U1-8,9-12,13-15"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OBCBVIS   DIM       8      8        1     Visit Number                       
OBCBCID   DIM       4      4        9     Clinical Note ID                   
OBCBLNO   DIM       3      3        13    Line No.                           
OBCBLDT   DIM       127    127      16    Line Details                       
.
.End of Record                      143  
.
