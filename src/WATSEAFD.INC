. *----------------------------------------------------------------------
. * Include Name  :   WATSEAFD.INC
. *
. * Function      :   File Def'n Include for Waiting List
. *                   Security Access for All Waiting Lists
. *
. * File Type     :   SQL
. *
. * File Name     :   watseaaf.dat
. *
. *----------------------------------------------------------------------
.Data File Definition
.--------------------
WATSEAA1   IFILE    SQL, FIXED=35, KEY="U1-4"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WTSAUSER  DIM       4      4        1     User code 
WTSASPAR  DIM       30     30       5     Spare                              
.
.End of Record                     35
.
