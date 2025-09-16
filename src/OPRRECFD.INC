.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OPRRECFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Theatre             *
.  *                    OPERATION RECORDS                               *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : oprrecaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 14                                          *
.  *                                                                    *
.  *     Modifications: V5.01.01  20/12/89  E.Phan                      *
.  *                    Changed key & length.                           *
.  *                    02/10/90  J. Ceniza                             *
.  *                    Changed according to new specs.                 *
.  *                                                                    *
.  **********************************************************************
.Data File Definition
.--------------------
OPRRECA1  IFILE    SQL, FIXED=99, KEY="U1-10,11-11,12-14"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPORUNIQ  DIM       10       10       1        Unique id for theatre booking
OPORTEAM  DIM       1        1        11       Team Number 
OPORCLND  DIM       3        3        12       Line Number (1-999) 
OPORLINE  DIM       70       70       15       Data
OPORSPAR  DIM       14       14       85       Spare
.
.End of Record                        99
.
