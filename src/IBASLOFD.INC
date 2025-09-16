.  **********************************************************************
.  *                                                                    *
.  *     Include Name : IBASLOFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Common              *
.  *                    IBA Security Login                              *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : ibasloaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 5                                           *
.  *                                                                    *
.  *     Modifications: 
.  **********************************************************************
.
IBASLOA1  IFILE     SQL, FIXED=88, KEY="U1-5"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
IBSLUSER  DIM       5        5        1        User Id
IBSLPASS  DIM      20       20        6        User Password
IBSLIBAS  DIM       4        4        26       IBA Security Link
IBSLDESC  DIM      20       20        30       Description
IBSLDATE  DIM       8        8        50       Date (ccyymmdd)
IBSLSPAR  DIM      30       30        58       Spare Variable
.
.End of Record                        88
.
