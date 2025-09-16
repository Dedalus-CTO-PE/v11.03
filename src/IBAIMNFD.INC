.  **********************************************************************
.  *                                                                    *
.  *     Include Name : IBAIMNFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Common              *
.  *                    Illegal Menu Selection Log                      *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : ibaimenf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 22, 18, 26                                  *
.  *                                                                    *
.  *                                                                    *
.  **********************************************************************
.
IBAIMEN1  IFILE     SQL, FIXED=50, KEY="U1-4,5-12,13-20,21-22"
IBAIMEN2  IFILE     SQL, FIXED=50, KEY="U5-12,13-20,21-22"
IBAIMEN3  IFILE     SQL, FIXED=50, KEY="U21-22,5-12,13-20"
IBAIMEN4  IFILE     SQL, FIXED=50, KEY="U23-30,5-12,13-20,21-22"
.
. NAME      TYPE    LENGTH  PHYSICAL  START LOC.  DECRIPTION
. ----      ----    ------  --------  ----------  ----------
IBIMUSER    DIM        4       4          1        User
IBIMDATE    DIM        8       8          5        Date
IBIMTIME    DIM        8       8         13        Time
IBIMPORT    DIM        2       2         21        Port
IBIMPROG    DIM        8       8         23        Program
IBIMSPAR    DIM       19      19         31        Spare Variables
.
.End of Record                           50
.
.
