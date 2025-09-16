.  ****************************************************************************
.  *                                                                          *
.  *  Include Name  : OPRORAFD.INC                                            *
.  *                                                                          *
.  *  Function      : File Definition include for Theatre                     *
.  *                    TIME OPERATING ROOM                                   *
.  *                                                                          *
.  *  File Type     : SQL                                                     *
.  *                                                                          *
.  *                                                                          *
.  *  File Name     : oproraaf.dat                                            *
.  *  Audit File    : opraudra.dat                                            *
.  *                                                                          *
.  *  Keys          : KEY 14,KEY 19                                           *
.  *                                                                          *
.  *  Author        : Bill Dew         15/01/1990                             *
.  *                                                                          *
.  *  Modifications : Audits added by Author.  I did it right the first time  *
.  *                : 09/10/90  J. Ceniza . Changed according to new specs.   *
.  *                                                                          *
.  ****************************************************************************
.Audit File Definition
.---------------------
OPRAUDRA  IFILE     SQL, FIXED=73, KEY="D1-8,9-16,17-18,19-19"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPRAAUDD  DIM       8         8       1        Date of change
OPRAAUDT  DIM       8         8       9        Time of change
OPRAAUDP  DIM       2         2       17       Port doing change
OPRAAUDR  DIM       1         1       19       Record type
.                                                 A = Added 
.                                                 B = Before image
.                                                 C = After image
.                                                 D = Deleted
OPRAAUDS  FORM      1         2       20      Record status
.                                                 1 = Not printed
.                                                 2 = Printed
OPRAAUDO  DIM       4         4       22      Operator id that did the change
.
.Data File Definition
.--------------------
OPRORAA1  IFILE     SQL, FIXED=48, KEY="U1-8,9-14"
OPRORAA2  IFILE     SQL, FIXED=48, KEY="U9-14,1-8"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPRADATE  DIM       8        8        1        Date (CCYYMMDD)
OPRAROOM  DIM       6        6        9        Operating room
OPRAVAIL  FORM      4        3        15       Time operating room available
.                                              (min)
OPRASPAR  DIM       30       30       18       Spare
.
.End of Record                        48
