. V5.01.002 16/01/1991 GKW Added U/R and second index
. V5.01.001 27/12/1991 GKW Created FD
. *----------------------------------------------------------------------
. * Include Name  :   PATKWCFD.INC
. *
. * Function      :   File Def'n Include for Patient       
. *                   Kiwicard Details      
. *
. * File Type     :   SQL
. *
. * File Name     :   patkwcYY.dat
. *                        where YY is the starting year (01/02 - 31/01)
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATKWCA1   IFILE    SQL, FIXED=55, KEY="U1-20,21-28"
PATKWCA2   IFILE    SQL, FIXED=55, KEY="U21-28,1-20"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTKWCARD  DIM       20     20       1     Card number
PTKWURNO  DIM       8      8        21    U/R number
PTKWDAYS  FORM      3      3        29    Days charged this year
PTKWVISI  FORM      3      3        32    Visits charged this year
PTKWSPAR  DIM       20     20       35    Spare variable
.
.End of Record                      55
.
