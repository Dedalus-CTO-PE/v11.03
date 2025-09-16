.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OPRDEBFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Theatre             *
.  *                    OPERATING TEAM                                  *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : oprdetbf.dat                                    *
.  *     Audit File   : oprauddb.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 11, KEY 19                                  *
.  *                                                                    *
.  *     Modifications: V5.01.01  20/12/89  E.Phan                      *
.  *                    Added OPDBREQN & OPDBOPER.                      *
.  *                                                                    *
.  *                    08/10/90  J.Ceniza                              *
.  *                    modified according to new specs.                *
.  **********************************************************************
.Audit File Definition
.---------------------
OPRAUDDB  IFILE     SQL, FIXED=229, KEY="D1-8,9-16,17-18,19-19"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPDBAUDD  DIM       8         8       1        Date of change
OPDBAUDT  DIM       8         8       9        Time of change
OPDBAUDP  DIM       2         2       17       Port doing change
OPDBAUDR  DIM       1         1       19       Record type
.                                                 A = Added 
.                                                 B = Before image
.                                                 C = After image
.                                                 D = Deleted
OPDBAUDS  FORM      1         2       20      Record status
.                                                 1 = Not printed
.                                                 2 = Printed
OPDBAUDO  DIM       4         4       22      Operator id that did the change
.                                       
.
.Data File Definition
.--------------------
OPRDETB1  IFILE     SQL, FIXED=204, KEY="U1-10,11-11"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPDBUNIQ  DIM       10       10       1        Unique id for theatre booking
OPDBTEAM  DIM       1        1        11       Team Number
.
OPDBTYD1  DIM       3        3        12       Doctor Type # 1 (Category OP)
OPDBTYD2  DIM       3        3        15                   # 2 (Category OP)
OPDBTYD3  DIM       3        3        18                   # 3 (Category OP)
OPDBTYD4  DIM       3        3        21                   # 4 (Category OP)
OPDBTYD5  DIM       3        3        24                   # 5 (Category OP)
OPDBTYD6  DIM       3        3        27                   # 6 (Category OP)
OPDBTYD7  DIM       3        3        30                   # 7 (Category OP)
OPDBTYD8  DIM       3        3        33                   # 8 (Category OP)
.
OPDBDCC1  DIM       6        6        36       Doctor Code # 1
OPDBDCC2  DIM       6        6        42                   # 2
OPDBDCC3  DIM       6        6        48                   # 3
OPDBDCC4  DIM       6        6        54                   # 4
OPDBDCC5  DIM       6        6        60                   # 5
OPDBDCC6  DIM       6        6        66                   # 6
OPDBDCC7  DIM       6        6        72                   # 7
OPDBDCC8  DIM       6        6        78                   # 8
.
OPDBLVD1  DIM       3        3        84      Supervision Level # 1 (Cat OS)
OPDBLVD2  DIM       3        3        87                        # 2 (Cat OS)
OPDBLVD3  DIM       3        3        90                        # 3 (Cat OS)
OPDBLVD4  DIM       3        3        93                        # 4 (Cat OS)
OPDBLVD5  DIM       3        3        96                        # 5 (Cat OS)
OPDBLVD6  DIM       3        3        99                        # 6 (Cat OS)
OPDBLVD7  DIM       3        3        102                       # 7 (Cat OS)
OPDBLVD8  DIM       3        3        105                       # 8 (Cat OS)
.
OPDBTYN1  DIM       3        3        108      Nurse Type # 1 (Category ON)
OPDBTYN2  DIM       3        3        111                 # 2 (Category ON)
OPDBTYN3  DIM       3        3        114                 # 3 (Category ON)
OPDBTYN4  DIM       3        3        117                 # 4 (Category ON)
OPDBTYN5  DIM       3        3        120                 # 5 (Category ON)
OPDBTYN6  DIM       3        3        123                 # 6 (Category ON)
.
OPDBNUC1  DIM       6        6        126      Nurse Code # 1
OPDBNUC2  DIM       6        6        132                 # 2
OPDBNUC3  DIM       6        6        138                 # 3
OPDBNUC4  DIM       6        6        144                 # 4
OPDBNUC5  DIM       6        6        150                 # 5
OPDBNUC6  DIM       6        6        156                 # 6
.
OPDBUSR1  DIM       3        3        162      User Defined 1 (Category Q6)
OPDBUSR2  DIM       3        3        165                   2 (Category Q7)
OPDBUSR3  DIM       3        3        168                   3 (Category Q8)
OPDBUSR4  DIM       3        3        171                   4 (Category Q9)
.
OPDBSPAR  DIM       30       30       174      Spare
.
.End of Record                        204
.
