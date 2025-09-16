.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OPRORUFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Theatre             *
.  *                    Operating room usage                            *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : oproruaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 12                                          *
.  *                                                                    *
.  *     Modifications: V5.01 02/01/90 Graeme Williams                  *
.  *                          Completely re-designed file               *
.  *                                                                    *
.  **********************************************************************
.
OPRORUA1  IFILE     SQL, FIXED=80, KEY="U1-6,7-12"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPOUDATE  DIM       6        6        1        Period date (CCYYMM)
OPOUROOM  DIM       6        6        7        Operating room code
OPOUBCAS  FORM      6        4        13       Number of booked cases
OPOUBOPR  FORM      6        4        17       Number of booked operations
OPOUBTIM  FORM      7        5        21       Time used - booked (mins)
OPOUTCAS  FORM      6        4        26       Number of transfered cases
OPOUTOPR  FORM      6        4        30       Number of transfered operations
OPOUTTIM  FORM      7        5        34       Time used - transfered (mins)
OPOUECAS  FORM      6        4        39       Number of extra cases
OPOUEOPR  FORM      6        4        43       Number of extra operations
OPOUETIM  FORM      7        5        47       Time used - extra (mins)
OPOUAVAL  FORM      7        5        52       Total time theatre avail. (mins)
OPOUSPAR  DIM       23       23       57       Spare Variable
.
.End of Record                        80
