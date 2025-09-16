. *----------------------------------------------------------------------
. * Include Name  :   OBSTYPFD.INC
. *
. * Function      :   File Def'n Include for WEB
. *                   Observation Type
. *
. * File Type     :   SQL
. *
. * File Name     :   obstypaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OBSTYPA1   IFILE    SQL, FIXED=116, KEY="U1-3"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OBTYTYPE  DIM       3      3        1     Type
OBTYDESC  DIM       25     25       4     Description
OBTYTMAD  DIM       3      3        29    BSP Template for Add
OBTYTMUP  DIM       3      3        32    BSP Template for Update
OBTYACTV  DIM       1      1        32    Active
OBTYSPAR  DIM       80     80       36    Spare
.
.End of Record                      116  
.
