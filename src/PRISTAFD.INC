. V5.07.001 07/08/1998 Glenn  507 Changes
.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   PRISTAFD.INC                                  *
.  *                                                                      *
.  *  Function          :   File Definition include for Private Practice  *
.  *                        Financial Statistics                          *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   pristatf.dat                                  *
.  *                                                                      *
.  *  Keys              :   KEY 16                                        *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *  V10.13.01 27/07/2018  Richa Phogat  TSK 0848506                     *
.  *            Updated field length for PRSTDOCT from 6 to 10            *
.  *  V10.02.01 20/10/11 J.Tan    CAR 252232                              *
.  *            Added Index 4                                             *
.  *  V9.04.01  15/08/05 Davin    CAR 62750                               *
.  *            Removed redefined amount variables                        *
.  ************************************************************************
.Data File Definition
.--------------------
PRISTAT1   IFILE SQL, FIXED=349, KEY="U1-4,5-10,11-20"
PRISTAT2   IFILE SQL, FIXED=349, KEY="U1-4,11-20,5-10"
PRISTAT3   IFILE SQL, FIXED=349, KEY="U5-10,11-20,1-4"
PRISTAT4   IFILE SQL, FIXED=349, KEY="U11-20,5-10,1-4"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRSTYEAR  DIM       4      4        1     Financial Year (CCYY)
PRSTPRAC  DIM       6      6        5     Medical Practice Code
PRSTDOCT  DIM       10     10       11    Doctor Code
.
PRSTOBAL  FORM      12.2   8        21    Opening Balance for Year
PRSTIP01  FORM      12.2   8        29    Period 01 Invoiced Amount
PRSTCP01  FORM      12.2   8        37              Cash Received
PRSTJP01  FORM      12.2   8        45              Journals
PRSTIP02  FORM      12.2   8        53    Period 02 Invoiced Amount
PRSTCP02  FORM      12.2   8        61              Cash Received
PRSTJP02  FORM      12.2   8        69              Journals
PRSTIP03  FORM      12.2   8        77    Period 03 Invoiced Amount
PRSTCP03  FORM      12.2   8        85              Cash Received
PRSTJP03  FORM      12.2   8        93              Journals
PRSTIP04  FORM      12.2   8        101   Period 04 Invoiced Amount
PRSTCP04  FORM      12.2   8        109             Cash Received
PRSTJP04  FORM      12.2   8        117             Journals
PRSTIP05  FORM      12.2   8        125   Period 05 Invoiced Amount
PRSTCP05  FORM      12.2   8        133             Cash Received
PRSTJP05  FORM      12.2   8        141             Journals
PRSTIP06  FORM      12.2   8        149   Period 06 Invoiced Amount
PRSTCP06  FORM      12.2   8        157             Cash Received
PRSTJP06  FORM      12.2   8        165             Journals
PRSTIP07  FORM      12.2   8        173   Period 07 Invoiced Amount
PRSTCP07  FORM      12.2   8        181             Cash Received
PRSTJP07  FORM      12.2   8        189             Journals
PRSTIP08  FORM      12.2   8        197   Period 08 Invoiced Amount
PRSTCP08  FORM      12.2   8        205             Cash Received
PRSTJP08  FORM      12.2   8        213             Journals
PRSTIP09  FORM      12.2   8        221   Period 09 Invoiced Amount
PRSTCP09  FORM      12.2   8        229             Cash Received
PRSTJP09  FORM      12.2   8        237             Journals
PRSTIP10  FORM      12.2   8        245   Period 10 Invoiced Amount
PRSTCP10  FORM      12.2   8        253             Cash Received
PRSTJP10  FORM      12.2   8        261             Journals
PRSTIP11  FORM      12.2   8        269   Period 11 Invoiced Amount
PRSTCP11  FORM      12.2   8        277             Cash Received
PRSTJP11  FORM      12.2   8        285             Journals
PRSTIP12  FORM      12.2   8        293   Period 12 Invoiced Amount
PRSTCP12  FORM      12.2   8        301             Cash Received
PRSTJP12  FORM      12.2   8        309             Journals 
PRSTIP13  FORM      12.2   8        317   Period 13 Invoiced Amount
PRSTCP13  FORM      12.2   8        325             Cash Received
PRSTJP13  FORM      12.2   8        333             Journals
.
PRSTSPAR  DIM       8      8        341   Spare Variable
.
.End of Record                      349
.
