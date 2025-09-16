. *----------------------------------------------------------------------
. * Include Name  :   FMSTDSFD.INC
. *
. * Function      :   File Def'n Include for Financial Management
. *                   Transaction Description Maintenance
. *
. * File Type     :   SQL
. *
. * File Name     :   fmstdsaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSTDSA1   IFILE    SQL, FIXED=40, KEY="U1-4"                                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMTDCODE  DIM       4      4        1     Transaction code                   
FMTDDESC  DIM       35     35       5     Transaction Description            
.
.End of Record                      40   
.
