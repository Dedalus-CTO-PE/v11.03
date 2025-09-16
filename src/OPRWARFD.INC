.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OPRWARFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Theatre             *
.  *                    Operating room Ward statistics                  *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : oprwaraf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 9                                           *
.  *                                                                    *
.  *                                                                    *
.  *     Modifications:                                                 *
.  **********************************************************************
.
OPRWARA1  IFILE     SQL, FIXED=28, KEY="U1-6,7-9"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPWADATE  DIM       6        6        1        Period date (CCYYMM)
OPWAWARD  DIM       3        3        7        Ward code
OPWANCAS  FORM      6        4        10       Number of cases              
OPWANOPR  FORM      6        4        14       Number of operations      
OPWASPAR  DIM       10       10       18       Spare Variable
.
.End of Record                        28
