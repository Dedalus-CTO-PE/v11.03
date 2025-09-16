.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OPRDECFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Theatre             *
.  *                    OPERATION USAGE                                 *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : oprdetcf.dat                                    *
.  *     Audit File   : oprauddc.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 11,KEY 19                                   *
.  *                                                                    *
.  *     Modifications: 08/10/90  J. Ceniza                             *
.  *                    modified according to new specs.                *
.  *                    01/05/96  Howellsy   5.04                       *
.  *                    Added 5 more implant codes.                     *
.  *                                                                    *
.  **********************************************************************
.
.Audit File Definition
.---------------------
OPRAUDDC  IFILE     SQL, FIXED=255, KEY="D1-8,9-16,17-18,19-19"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPDCAUDD  DIM       8         8       1        Date of change
OPDCAUDT  DIM       8         8       9        Time of change
OPDCAUDP  DIM       2         2       17       Port doing change
OPDCAUDR  DIM       1         1       19       Record type
.                                                 A = Added 
.                                                 B = Before image
.                                                 C = After image
.                                                 D = Deleted
OPDCAUDS  FORM      1         2       20      Record status
.                                                 1 = Not printed
.                                                 2 = Printed
OPDCAUDO  DIM       4         4       22      Operator id that did the change
.
.Data File Definition
.--------------------
OPRDETC1  IFILE     SQL, FIXED=230, KEY="U1-10,11-11"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPDCUNIQ  DIM       10       10       1        Uniqued id for theatre booking
OPDCTEAM  DIM       1        1        11       Team Number
.
OPDCOTM1  DIM       5        5        12       Operation Time 1 (HH:MM)
OPDCOTM2  DIM       5        5        17       Operation Time 2 (HH:MM)
OPDCOTM3  DIM       5        5        22       Operation Time 3 (HH:MM)
OPDCOTM4  DIM       5        5        27       Operation Time 4 (HH:MM)
.
.
OPDCICD1  DIM       9        9        32       ICD9-CM or MBS Code 1
OPDCICD2  DIM       9        9        41                           2
OPDCICD3  DIM       9        9        50                           3
OPDCICD4  DIM       9        9        59                           4
OPDCICD5  DIM       9        9        68                           5
OPDCICD6  DIM       9        9        77                           6
.
OPDCCONT  DIM       1        1        86       Count Correct (Y/N)
OPDCDURA  FORM      4        3        87       Duration of Operations
OPDCNOOP  FORM      3        3        90       Number of Operations
.
OPDCIMC1  DIM       6        6        93       Implant Code # 1 (OPREXPFD)
OPDCIMC2  DIM       6        6        99                    # 2 (OPREXPFD)
OPDCIMC3  DIM       6        6        105                   # 3 (OPREXPFD)
OPDCIMC4  DIM       6        6        111                   # 4 (OPREXPFD)
OPDCIMC5  DIM       6        6        117                   # 5 (OPREXPFD)
OPDCIMC6  DIM       6        6        123                   # 6 (OPREXPFD)
OPDCIMC7  DIM       6        6        129                   # 7 (OPREXPFD)
OPDCIMC8  DIM       6        6        135                   # 8 (OPREXPFD)
OPDCIMC9  DIM       6        6        141                   # 9 (OPREXPFD)
OPDCIM10  DIM       6        6        147                   #10 (OPREXPFD)
.
OPDCIMQ1  FORM      3        3        153      Implant Quantity # 1
OPDCIMQ2  FORM      3        3        156                       # 2
OPDCIMQ3  FORM      3        3        159                       # 3
OPDCIMQ4  FORM      3        3        162                       # 4
OPDCIMQ5  FORM      3        3        165                       # 5
OPDCIMQ6  FORM      3        3        168                       # 6
OPDCIMQ7  FORM      3        3        171                       # 7
OPDCIMQ8  FORM      3        3        174                       # 8
OPDCIMQ9  FORM      3        3        177                       # 9
OPDCIQ10  FORM      3        3        180                       #10
.
OPDCUSR1  DIM       3        3        183      User Defined 1 (Category Z1)
OPDCUSR2  DIM       3        3        186                   2 (Category Z2)
OPDCUSR3  DIM       3        3        189                   3 (Category Z3)
OPDCUSR4  DIM       3        3        192                   4 (Category Z4)
OPDCUSR5  DIM       3        3        195                   5 (Category Z5)
OPDCUSR6  DIM       3        3        198                   6 (Category Z6)
OPDCUSR7  DIM       3        3        201                   7 (Category Z7)
OPDCUSR8  DIM       3        3        204                   8 (Category Z8)
.
OPDCSPAR  DIM       23       23       207      Spare
.
.End of Record                        230
.
