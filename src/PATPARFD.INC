. ************************************************************************
. *                                                                      *
. *  Include Name      :   PATPARFD.INC                                  *
. *                                                                      *
. *  Function          :   Eclipse Participant Table                     *
. *                                                                      *
. *  File Type         :   SQL                                           *
. *                                                                      *
. *  File Name         :   patparaf.dat                                  * 
. *                                                                      * 
. *  Keys              :   KEY3, KEY43                                   *
. *                                                                      *
. *  Modifications     :                                                 *
. *                                                                      *
. *      06/06/2008  Steve Armstrong    CAR 163424                       *
. *                  Created FD.                                         *
. ************************************************************************
.Data File Definition
.--------------------
PATPARA1   IFILE SQL, FIXED=100, KEY="U1-3"
PATPARA2   IFILE SQL, FIXED=100, KEY="U5-44,1-3"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTPRCODE  DIM       3         3       1   Participant Code
PTPRTYPE  DIM       1         1       4   Participant Type
.                                           F = Health Fund
.                                           O = Other (eg DVA)
PTPRNAME  DIM       40        40      5   Participant Name
PTPRCNUM  DIM       19        19     45   Participant Contact Number
PTPRDUPD  DIM       8         8      64   Date Health Fund Updated (ccyymmdd)
PTPRSPAR  DIM       28        28     72   Spare Variable
.
.End of record                      100  
+
