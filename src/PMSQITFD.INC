. ************************************************************************
. *                                                                      *
. *  Include Name      :   PMSQITFD.INC                                  *
. *                                                                      *
. *  Function          :   Queuing CMBS Billing Items                    *
. *                                                                      *
. *  File Type         :   SQL                                           *
. *                                                                      *
. *  File Name         :   pmsqitaf.dat                                  * 
. *                                                                      * 
. *  Keys              :   KEY20                                         *
. *                                                                      *
. *  Modifications     :                                                 *
. *      27/02/2008  Steve Armstrong  CAR 160815                         *
. *                  Fixed length of PMQISERV from 5 to 4.               *
. *                                                                      *
. ************************************************************************
.
.Data File Definition
.--------------------
PMSQITA1  IFILE SQL, FIXED=110, KEY="U1-20"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DPMQIMES  DIM       20       20       1   Message ID
PMQITRAN  DIM       6        6       21   Transaction Number
PMQIITEM  DIM       9        9       27   Item Code
PMQITDAT  DIM       8        8       36   Transaction Date (ccyymmdd)
PMQISERV  FORM      5        4       44   Number of Services
PMQITTYP  DIM       1        1       48   Transaction Type
.                                           A = Add record
.                                           D = Delete record
PMQIDOCT  DIM       10       10      49   Doctor Code
PMQISESS  DIM       2        2       59   Session
PMQIAMNT  FORM      12.2     8       61   Gross Total Amount
PMQIGSTC  DIM       6        6       69   GST Code
PMQIHFND  DIM       6        6       75   Health Fund
PMQISTIM  DIM       8        8       81   Operation Start Time
PMQISPAR  DIM       21       21      89   Spare Variable
.
.End of Record                      110
.
. Redefine FORM fields from key
. -----------------------------
PMQIMESI  FORM      20
