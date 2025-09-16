.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OPRNURFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Theatre             *
.  *                    NURSE                                           *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : oprnuraf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 6, KEY 66                                   *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *                                                                    *
.  **********************************************************************
.
OPRNURA1  IFILE     SQL, FIXED=100, KEY="U1-6"
OPRNURA2  IFILE     SQL, FIXED=100, KEY="U7-36,37-66,1-6"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPNRCODE  DIM       6        6        1        Nurse Code
OPNRSNAM  DIM       30       30       7        Surname
OPNRGNAM  DIM       30       30       37       Given Name
OPNRUSR1  DIM       3        3        67       User Defined 1 (Category Q1)
OPNRUSR2  DIM       3        3        70                    2 (Category Q2)
OPNRUSR3  DIM       3        3        73                    3 (Category Q3)
OPNRUSR4  DIM       3        3        76                    4 (Category Q4)
OPNRUSR5  DIM       3        3        79                    5 (Category Q5)
OPNRSTAT  FORM      1        2        82       Status
.                                                   0 = Active
.                                                   1 = Non-Active
OPNRSPAR  DIM       16       16       84       Spare
.
.End of Record                        100
.
