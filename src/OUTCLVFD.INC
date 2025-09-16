.  V10.07.01 26/10/2015 EC Added OP site to index 1. Removed index 2 CAR 268970
.  V10.06.01 12/03/2015 EC Added OP site and index 2 CAR 268970
.  V5.01.000 09/11/1993 bez Created
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OUTCLVFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Outpatients         *
.  *                    Clinic Leave Details                            *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : outclvaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY20                                           *
.  *                                                                    *
.  **********************************************************************
.
.======================================================================== 
.Data File Definition
.======================================================================== 
.
OUTCLVA1  IFILE     SQL, FIXED=64, KEY="U34-39,1-6,7-14"
FILCLVA1  INIT      "clvaf"
.
.
. NAME    TYPE    LENGTH   PHYSICAL  START LOC.  DESCRIPTION
. ----    ----    ------   --------  ----------  -----------
OTCVCLIN  DIM       6         6         1        Clinic Id
OTCVFDTE  DIM       8         8         7        From Date
OTCVTDTE  DIM       8         8         15       To Date        
OTCVREAS  DIM       3         3         23       Reason for Leave (CAT DH)
OTCVLAST  DIM       8         8         26       Date Last Modified 
OTCVSITE  DIM       6         6         34       Site Code
OTCVSPAR  DIM       24        24        40       SPARE VARIABLE
.
.End of Record                          64 
.
.
