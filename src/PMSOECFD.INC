. ************************************************************************
. *                                                                      *
. *  Include Name      :   PMSOECFD.INC                                  *
. *                                                                      *
. *  Function          :   Eclipse Online Eligibility Check Table        *
. *                                                                      *
. *  File Type         :   SQL                                           *
. *                                                                      *
. *  File Name         :   pmsoecaf.dat                                  * 
. *                                                                      * 
. *  Keys              :   KEY11                                         *
. *                                                                      *
. *  Modifications     :                                                 *
. *       V10.04.01  26/02/2014  Steve Armstrong CAR 292257              *
. *                  Added PMOEELEG.                                     *
. ************************************************************************
. *        V9.11.01  31/03/2009  Steve Armstrong CAR 193566              *
. *                  Added second index and PMOEHOSP.                    *
. *        V9.11.00  19/02/2009  Davin           CAR 183976              *
. *                  Created FD                                          *
. *                                                                      *
. ************************************************************************
.
.Data File Definition
.--------------------
PMSOECA1   IFILE SQL, FIXED=242, KEY="U1-8,9-11"
PMSOECA2   IFILE SQL, FIXED=242, KEY="U12-13,212-214,1-8,9-11"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMOEVISN  DIM       8         8       1   Visit Number
PMOECNTR  DIM       3         3       9   Report Counter (right just.)
PMOESTAT  DIM       2         2      12   OEC Status Flag (right just.)
.                                           0 = Waiting
.                                           1 = Extracted
.                                           2 = Received
.                                           3 = SA Error
.                                           4 = Data Error
.                                           5 = Rejected Reported
.                                           6 = Complete Reported
.                                           7 = Health Fund Unavailable
PMOEURNO  DIM       8         8      14   U/R Number
PMOEARID  DIM       20        20     22   Account Reference ID
PMOETRID  DIM       24        24     42   Transaction ID
PMOERQDT  DIM       8         8      66   Date of Request (ccyymmdd)
PMOEETYP  DIM       2         2      74   Extraction Type
.                                           (Trigger source)
.
PMOEERRC  DIM       4         4      76   Error Code
PMOEERRD  DIM       100       100    80   Error Description
PMOECDTE  DIM       8         8     180   Date Created (ccyymmdd)
PMOECTIM  DIM       8         8     188   Time Created (hh:mm:ss)
PMOEUDTE  DIM       8         8     196   Date Updated (ccyymmdd)
PMOEUTIM  DIM       8         8     204   Time Updated (hh:mm:ss)
PMOEHOSP  DIM       3         3     212   Hospital Id
PMOEELEG  DIM       8         8     215   Eligibility Number
PMOESPAR  DIM       19        19    223   Spare Variable
.
.End of Record                      242
+
