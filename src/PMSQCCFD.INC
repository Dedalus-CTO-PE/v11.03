. ************************************************************************
. *                                                                      *
. *  Include Name      :   PMSQCCFD.INC                                  *
. *                                                                      *
. *  Function          :   Queuing Health Concession Card Message File   *
. *                                                                      *
. *  File Type         :   SQL                                           *
. *                                                                      *
. *  File Name         :   pmsqccaf.dat                                  * 
. *                                                                      * 
. *  Keys              :   KEY20                                         *
. *                                                                      *
. *  Modifications     :                                                 *
. *                V9.03.00 04/08/2004  Steve Armstrong                  *
. *                         FD Created                                   *
. *                                                                      *
. ************************************************************************
.
.Data File Definition
.--------------------
PMSQCCA1   IFILE SQL, FIXED=80, KEY="U1-20"
.
.Name      Type    Length Physical Start   Description
.----      ----    ------ -------- -----   -----------
DPMQCMES   DIM     20        20        1   Message Id
.PMCDURNO  DIM      8         8       21   Patient U/R Number
.PMCDCTYP  DIM      3         3       29   Health Concession Card Type
.PMCDCNUM  DIM     20        20       32   Health Concession Card Number
.PMCDEXDT  DIM      8         8       52   Health Concession Card Expiry Date
.                                                (ccyymmdd)
.
PMQCSPAR   DIM     20        20       60   Spare Variable
.
.End of Record                        80
.
.
. Redefine form fields from key
. -----------------------------
PMQCMESI  FORM      20
