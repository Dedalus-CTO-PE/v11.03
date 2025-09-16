. ************************************************************************
. *                                                                      *
. *  Include Name      :   PMSPRGFD.INC                                  *
. *                                                                      *
. *  Function          :   Program Codes Table                           *
. *                                                                      *
. *  File Type         :   SQL                                           *
. *                                                                      *
. *  File Name         :   pmsprgaf.dat                                  * 
. *                                                                      * 
. *  Keys              :   KEY8                                          *
. *                                                                      *
. *  Modifications     :                                                 *
. *                                                                      *
. *      V10.01.01  28/02/2011  Steve Armstrong  CAR 223805              *
. *                 Moved PMPGACTV to be part of table definition        *
. *      V10.00.01  10/08/2010  Steve Armstrong  CAR 223805              *
. *                 Added PMPGACTV as additional defined field           *
. ************************************************************************
.
.Data File Definition
.--------------------
PMSPRGA1   IFILE SQL, FIXED=70, KEY="U1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMPGCODE  DIM       8         8       1   Program Code
PMPGDESC  DIM       50        50      9   Program Description
PMPGACTV  DIM       1         1      59   Active/Inactive Flag
.                                             (Blank or 0 = Active)
.                                             (1 = Inactive)
PMPGSPAR  DIM       10        10     60   Spare Variable
.
.End of Record                       70
