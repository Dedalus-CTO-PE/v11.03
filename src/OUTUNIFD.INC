.   ********************************************************************
.  *                                                                   *
.  *     Include Name : OUTUNIFD.INC                                   *
.  *                                                                   *
.  *     Function     : File Definiton include for Outpatients         *
.  *                    Clinic Units                                   *
.  *                                                                   *
.  *     File Type    : SQL                                            *
.  *                                                                   *
.  *     File Name    : outuniaf.dat                                   *
.  *     Audit Name   : outaudui.dat (Audit File)                      *
.  *                                                                   *
.  *     Keys         : KEY 18                                         *
.  *                    KEY 24                                         *
.  *                    KEY 19 (Audit File)                            *
.  *                                                                   *
.  *     Programmer   : Peter Eddey 12/04/1991                         *
.  *                                                                   *
.  *     Modifications: 28/03/1995   Helen Crick                       *
.  *                                 Standardised FD                   *
.  *                                                                   *
.  *********************************************************************
.
.Audit file ------
.
OUTAUDUI    IFILE   SQL, FIXED=106, KEY="D1-8,9-16,17-18,19-19"
.
OTUIAUDD  DIM       8         8          1      Date of change
OTUIAUDT  DIM       8         8          9      Time of change [
OTUIAUDP  DIM       2         2          17     Port doing change
OTUIAUDR  DIM       1         1          19     Record Type
.                                                 A = Added record
.                                                 B = Before any changes
.                                                 C = After any changes
.                                                 D = Deleted record
OTUIAUDS FORM       1         2          20     Record Status
.                                                 1 = Not printed
.                                                 2 = Printed
OTUIAUDO DIM        4         4          22     Operator ID that did the change
.
.                                        26
.
.Data  file ------
.
OUTUNIA1    IFILE   SQL, FIXED=81, KEY="U1-6,7-12,13-18"
OUTUNIA2    IFILE   SQL, FIXED=81, KEY="U1-6,13-18,7-12"
OUTUNIA3    IFILE   SQL, FIXED=81, KEY="U19-24,1-6,7-12,13-18"
.
.
. NAME    TYPE    LENGTH   PHYSICAL  START LOC. DESCRIOTION
. ----    ----    ------   --------  ---------- -----------
OTUISITE  DIM       6         6          1      Outpatient site ID
OTUITYPE  DIM       6         6          7      Clinic type
OTUICLIN  DIM       6         6          13     Clinic ID
OTUITEAM  DIM       6         6          19     Team code
OTUISDAT  DIM       8         8          25     Start date
OTUIEDAT  DIM       8         8          33     end date
OTUISPAR  DIM       40        40         41     spare
.
.End of Record                           81
.
