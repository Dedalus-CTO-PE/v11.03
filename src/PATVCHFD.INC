. V5.01.002 16/01/1991 GKW Added U/R number
. V5.01.001 27/12/1991 GKW Created FD
. *----------------------------------------------------------------------
. * Include Name  :   PATVCHFD.INC
. *
. * Function      :   File Def'n Include for Patient       
. *                   Visit Count Change Audit
. *
. * File Type     :   SQL
. *
. * File Name     :   patvchaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATVCHA1   IFILE    SQL, FIXED=79, KEY="U1-20,21-28,29-36,37-44,45-46,47-48"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTVCCARD  DIM       20     20       1     Card number
PTVCURNO  DIM       8      8        21    U/R number
PTVCDATE  DIM       8      8        29    Date of change (CCYYMMDD)
PTVCTIME  DIM       8      8        37    Time of change (HH:MM:SS)
PTVCPORT  DIM       2      2        45    Port of change
PTVCHOSP  DIM       2      2        47    Hospital id
PTVCOPER  DIM       4      4        49    Operator id
PTVCDCHG  FORM      4      3        53    Amount of change to number of days
PTVCVCHG  FORM      4      3        56    Amount of change to no. of visits
PTVCSPAR  DIM       20     20       59    Spare variable
.
.End of Record                      71
.
