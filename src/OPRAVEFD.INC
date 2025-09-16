.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OPRAVEFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Theatre             *
.  *                    OPERATION AVERAGE                               *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : opraveaf.dat                                    *
.  *     Audit Name   : opraudav.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 9, KEY19                                    *
.  *                                                                    *
.  *     Modifications: 21/12/1989 Monika Ohleiter                      *
.  *                               Added audits                         *
.  *                    07/05/1990 Paul Duncan                          *
.  *                               Added doctor code                    *
.  *                    21/09/1990 Steve Armstrong                      *
.  *                               Added Doctor/Op code index           *
.  *                    28/03/1995 Helen Crick                          *
.  *                               Standardised FD                      *
.  *                                                                    *
.  **********************************************************************
.Audit File Definition
.---------------------
OPRAUDAV  IFILE     SQL, FIXED=55, KEY="D1-8,9-16,17-18,19-19"     
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPAVAUDD  DIM       8       8         1        * Date of change
OPAVAUDT  DIM       8       8         9        * Time of change
OPAVAUDP  DIM       2       2         17       * Port doing change
OPAVAUDR  DIM       1       1         19       * Record type
.                                                A = Added record (ie. a write)
.                                                B = Before any changes
.                                                C = After any changes (ie. an
.                                                    update)
.                                                D = Deleted record (ie. a
.                                                    delete)
OPAVAUDS  FORM      1       2         20        * Record status
.                                                1 = Not printed
.                                                2 = Printed
OPAVAUDO  DIM       4       4         22        * Operator id that did the
.                                                 change
.
.Data File Definition
.--------------------
OPRAVEA1  IFILE     SQL, FIXED=30, KEY="U1-9,10-15"
OPRAVEA2  IFILE     SQL, FIXED=30, KEY="U10-15,1-9"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPAVCODE  DIM       9        9        1        Operation Code (ICD9-CM or MBS)
OPAVDOCT  DIM       6        6        10       Doctor Code
OPAVAVER  FORM      4        3        16       Average Time
OPAVSPAR  DIM       11       11       19       Spare
.
.End of Record                        30
.
