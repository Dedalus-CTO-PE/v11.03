. ******************************************************************************
. *                                                                            *
. *  Include Name  :  PATSQLFD.INC                                             *
. *                                                                            *
. *  Function      :  File Definition Include for Calling SQL Programs         *
. *                   From Within Selected IBA Programs                        *
. *                                                                            *
. *  File Type     :  SQL                                                      *
. *                                                                            *
. *  File Name     :  patsqlaf.dat                                             *
. *                                                                            *
. *  Keys          :  KEY8                                                     *
. *                                                                            *
. *  Modifications :                                                           *
. *                                                                            *
. ******************************************************************************
.
.Data File Definition
.--------------------
PATSQLA1  IFILE  SQL, FIXED=99, KEY="U1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTSQPROG  DIM       8      8        1     IBA Program Name
PTSQPATH  DIM       60     60       9     SQL Path and Name
PTSQSPAR  DIM       30     30       69    Spare
.
.End of Record                      99
