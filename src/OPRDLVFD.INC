.  V5.01.000 19/11/1993 bez Created
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OPRDLVFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Theatre             *
.  *                    Doctor Leave                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : oprdlvaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY14                                           *
.  *                                                                    *
.  **********************************************************************
.
.======================================================================== 
.Data File Definition
.======================================================================== 
.
OPRDLVA1  IFILE     SQL, FIXED=64, KEY="U1-6,7-14"
.
.
. NAME    TYPE    LENGTH   PHYSICAL  START LOC.  DESCRIPTION
. ----    ----    ------   --------  ----------  -----------
OPDVDOCT  DIM       6         6         1        Doctor Code
OPDVFDTE  DIM       8         8         7        From Date
OPDVTDTE  DIM       8         8         15       To Date        
OPDVREAS  DIM       3         3         23       Reason for Doctor Leave (DH)
OPDVLAST  DIM       8         8         26       Date Last Modified 
OPDVSPAR  DIM       30        30        34       SPARE VARIABLE
.
.End of Record                          64 
.
.
