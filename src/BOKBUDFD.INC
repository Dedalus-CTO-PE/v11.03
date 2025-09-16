.  **********************************************************************
.  *                                                                    *
.  *     Include Name : BOKBUDFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Booking             *
.  *                    Booking Date Audit                              *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : bokbudaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 8, KEY 16                                   *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *                                                                    *
.  **********************************************************************
.
.Data File Definition
.--------------------
BOKBUDA1  IFILE     SQL, FIXED=50, KEY="U1-8"
BOKBUDA2  IFILE     SQL, FIXED=50, KEY="U9-16,1-8"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
DBKBUBOO  DIM       8        8        1        Booking number
BKBUDATE  DIM       8        8        9        Date booking made
BKBUTIME  DIM       8        8        17       Time booking made
BKBUOPER  DIM       4        4        25       Operator
BKBUPORT  DIM       2        2        29       Port
BKBUSPAR  DIM       19       19       31       Spare
.
.End of Record                        50
.
. Redefine form field keys
. ------------------------
BKBUBOOK  FORM      8
.
