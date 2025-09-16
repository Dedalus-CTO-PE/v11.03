.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OPRANEFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Theatre             *
.  *                    Aneasthetist Usage                              *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : opranaef.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 15                                          *
.  *                                                                    *
.  *     Modifications: 
.  **********************************************************************
.
OPRANAE1  IFILE     SQL, FIXED=30, KEY="U1-6,7-12,13-15"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPANDATE  DIM       6        6        1        Period date (CCYYMM)
OPANDOCT  DIM       6        6        7        Doctor Code
OPANTYPE  DIM       3        3        13       Type of Aneasthetic used (OA)
OPANNUMB  FORM      6        4        16       Number of times aneastetic used
OPANSPAR  DIM       10       10       20       Spare Variable
.
.End of Record                        30
