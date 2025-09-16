.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OPROPRFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Theatre             *
.  *                    OPERATING ROOM                                  *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : opropraf.dat                                    *
.  *     Audit File   : opraudrm.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 6, KEY 46, KEY 19                           *
.  *                                                                    *
.  *     Modifications: V9.08.01 26/09/2006 Ebon Clements CAR 119988    *
.  *                             Added hospital                         *
.  *                    08/10/90  J.Ceniza                              *
.  *                    changed according to new specs                  *
.  *                                                                    *
.  **********************************************************************
.Audit File Definition
.---------------------
OPRAUDRM  IFILE     SQL, FIXED=197, KEY="D1-8,9-16,17-18,19-19"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPRMAUDD  DIM       8         8       1        Date of change
OPRMAUDT  DIM       8         8       9        Time of change
OPRMAUDP  DIM       2         2       17       Port doing change
OPRMAUDR  DIM       1         1       19       Record type
.                                                 A = Added 
.                                                 B = Before image
.                                                 C = After image
.                                                 D = Deleted
OPRMAUDS  FORM      1         2       20      Record status
.                                                 1 = Not printed
.                                                 2 = Printed
OPRMAUDO  DIM       4         4       22      Operator id that did the change
.
.Data File Definition
.--------------------
OPROPRA1  IFILE     SQL, FIXED=172, KEY="U1-6"
OPROPRA2  IFILE     SQL, FIXED=172, KEY="U7-46,1-6"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPRMROOM  DIM       6        6        1        Operating Room
OPRMDESC  DIM       40       40       7        Description
OPRMLOC   DIM       20       20       47       Location
OPRMUSR1  DIM       3        3        67       User Defined 1 (Category Y1)
OPRMUSR2  DIM       3        3        70                    2 (Category Y2)
OPRMUSR3  DIM       3        3        73                    3 (Category Y3)
OPRMUSR4  DIM       3        3        76                    4 (Category Y4)
OPRMUSR5  DIM       3        3        79                    5 (Category Y5)
OPRMSTAT  FORM      1        2        82       Status
.                                                   0 = Active
.                                                   1 = Non-Active
OPRMSUN   FORM      4        3        84       Time available Sunday  (mins)
OPRMMON   FORM      4        3        87       Time available Monday  (mins)
OPRMTUE   FORM      4        3        90       Time available Tuesday (mins)
OPRMWED   FORM      4        3        93       Time available Wednesday  (mins)
OPRMTHU   FORM      4        3        96       Time available Thursday  (mins)
OPRMFRI   FORM      4        3        99       Time available Friday  (mins)
OPRMSAT   FORM      4        3        102      Time available Saturday (mins)
OPRMGLDG  DIM       14       14       105      G/L code and Cost Centre
OPRMHOSP  DIM       3        3        119      Hospital Code (pathspaf)
OPRMSPAR  DIM       50       50       122      Spare
.
.End of Record                        172
.
