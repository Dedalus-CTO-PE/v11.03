. ************************************************************************
. *                                                                      *
. *  Include Name      :   PATPCPFD.INC                                  *
. *                                                                      *
. *  Function          :   Eclipse Participant Capability Table          *
. *                                                                      *
. *  File Type         :   SQL                                           *
. *                                                                      *
. *  File Name         :   patpcpaf.dat                                  * 
. *                                                                      * 
. *  Keys              :   KEY9                                          *
. *                                                                      *
. *  Modifications     :                                                 *
. *                                                                      *
. *      06/06/2008  Steve Armstrong    CAR 163424                       *
. *                  Created FD.                                         *
. ************************************************************************
.Data File Definition
.--------------------
PATPCPA1   IFILE SQL, FIXED=110, KEY="U1-3,4-6,7-9"
PATPCPA2   IFILE SQL, FIXED=110, KEY="U4-6,1-3,7-9"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTPPCODE  DIM       3         3       1   Participant Code
PTPPCPID  DIM       3         3       4   Capability Id
PTPPSCID  DIM       3         3       7   Secondary Capability Id
PTPPCVID  DIM       1         1      10   Capability Version Id
PTPPCNAM  DIM       70        70     11   Capability Name
PTPPCROL  DIM       6         6      81   Capability Role Code
PTPPSPAR  DIM       23        23     87   Spare Variable
.
.End of record                      110  
+
