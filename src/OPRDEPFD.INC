.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OPRDEPFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Theatre             *
.  *                    Operating room Department statistics            *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : oprdepaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 9                                           *
.  *                                                                    *
.  *                                                                    *
.  *     Modifications:                                                 *
.  **********************************************************************
.
OPRDEPA1  IFILE     SQL, FIXED=28, KEY="U1-6,7-9"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPDEDATE  DIM       6        6        1        Period date (CCYYMM)
OPDEDEPT  DIM       3        3        7        Department code  (CAT A)
OPDENCAS  FORM      6        4        10       Number of cases              
OPDENOPR  FORM      6        4        14       Number of operations      
OPDESPAR  DIM       10       10       18       Spare Variable
.
.End of Record                        28
