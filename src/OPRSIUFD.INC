.  V5.01.000  29/11/1993  bez  Created
.  ****************************************************************************
.  *                                                                          *
.  *  Include Name  : OPRSIUFD.INC                                            *
.  *                                                                          *
.  *  Function      : File Definition include for Theatre                     *
.  *                  SPECIAL ITEM USAGE                                      *
.  *                                                                          *
.  *  File Type     : SQL                                                     *
.  *                                                                          *
.  *  File Name     : oprsiuaf.dat                                            *
.  *                                                                          *
.  ****************************************************************************
.
.Data File Definition
.--------------------
OPRSIUA1  IFILE     SQL, FIXED=45, KEY="U1-6,7-14,15-24"
OPRSIUA2  IFILE     SQL, FIXED=45, KEY="U15-24,7-14,1-6"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPSIITEM  DIM       6        6        1        Item code
OPSIDATE  DIM       8        8        7        Date
OPSIUNIQ  DIM       10       10       15       Unique theatre id 
OPSISPAR  DIM       20       20       25       Spare
.
.End of Record                        45
.
