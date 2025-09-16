. *----------------------------------------------------------------------
. * Include Name  :   FMSLEVFD.INC
. *
. * Function      :   File Def'n Include for Financial Management
. *                   Report Level Maintenance           
. *
. * File Type     :   SQL
. *
. * File Name     :   fmslevaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSLEVA1   IFILE    SQL, FIXED=44, KEY="U1-3"                                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMLVCODE  DIM       3      3        1     Level Code JR ZF DE. NO 000 Record 
FMLVDESC  DIM       20     20       4     Level Description                  
FMLVSPAR  DIM       20     20       24    Spare                              
.
.End of Record                      44   
.
