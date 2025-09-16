.  *********************************************************************
.  *                                                                   *
.  *     Include Name : PATTMAFD.INC                                   *
.  *                                                                   *
.  *     Function     : File Definiton include for Patient             *
.  *                    Doctor Team Header                             *
.  *                                                                   *
.  *     File Type    : SQL                                            *
.  *                                                                   *
.  *     File Name    : pattmaaf.dat                                   *
.  *     Audit Name   : pataudta.dat                                   *
.  *                                                                   *
.  *     Keys         : KEY 6                                          *
.  *                    KEY 36                                         *
.  *                    KEY 39                                         *
.  *                    KEY 19 (Audit File)                            *
.  *                                                                   *
.  *     Programmer   : Peter Eddey 25/03/1991                         *
.  *                                                                   *
.  *     Modifications:                                                *
.  *                                                                   *
.  *********************************************************************
.
.Audit file
.
PATAUDTA    IFILE   SQL, FIXED=97, KEY="D1-8,9-16,17-18,19-19"
.
PTTAAUDD  DIM       8         8          1      Date of change
PTTAAUDT  DIM       8         8          9      Time of change  
PTTAAUDP  DIM       2         2          17     Port doing change
PTTAAUDR  DIM       1         1          19     Record Type
.                                                 A = Added record
.                                                 B = Before any changes
.                                                 C = After any changes
.                                                 D = Deleted record
PTTAAUDS FORM       1         2          20     Record Status
.                                                 1 = Not printed
.                                                 2 = Printed
PTTAAUDO DIM        4         4          22     Operator ID that did the change
.
.                                        26
.
.Data file
.
PATTMAA1    IFILE   SQL, FIXED=72, KEY="U1-6"
PATTMAA2    IFILE   SQL, FIXED=72, KEY="U7-36,1-6"
PATTMAA3    IFILE   SQL, FIXED=72, KEY="U37-39,7-36,1-6"
.
.
. NAME    TYPE    LENGTH   PHYSICAL  START LOC. DESCRIPTION
. ----    ----    ------   --------  ---------- -----------
PTTATEAM  DIM       6         6          1      Team code
PTTADESC  DIM       30        30         7      Team description        
PTTATYPE  DIM       3         3          37     Type of team (cat TE)
.                                               eg. surgical
PTTASTAT  FORM      1         2          40     Status
.                                                0 = active
.                                                1 = active
PTTASPAR  DIM       30        30         42     spare
.
.End of Record                           72
.
