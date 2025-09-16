. *----------------------------------------------------------------------
. * Include Name  :   WATSEIFD.INC
. *
. * Function      :   File Def'n Include for Waiting List
. *                   Security Access to Individual Waiting List
. *
. * File Type     :   SQL
. *
. * File Name     :   watseiaf.dat
. *
. *----------------------------------------------------------------------
.Data File Definition
.--------------------
WATSEIA1   IFILE    SQL, FIXED=44, KEY="U1-6,7-9,10-13"
WATSEIA2   IFILE    SQL, FIXED=44, KEY="U10-13,1-6,7-9"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WTSICONS  DIM       6      6        1     Consultant
WTSILTYP  DIM       3      3        7     List type "WU"
WTSIUSER  DIM       4      4        10    User code 
WTSISPAR  DIM       30     30       14    Spare                              
.
.End of Record                      44
.
