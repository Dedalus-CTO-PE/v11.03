.  V5.01.000 17/02/1994 bez Created
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATPRVFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Health Care Providers                           *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patprvaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY6                                            *
.  *                                                                    *
.  **********************************************************************
.
.======================================================================== 
.Data File Definition
.======================================================================== 
.
PATPRVA1  IFILE     SQL, FIXED=70, KEY="U1-6"
.
. NAME    TYPE    LENGTH   PHYSICAL  START LOC.  DESCRIPTION
. ----    ----    ------   --------  ----------  -----------
PTPVCODE  DIM       6        6         1         Provider Code
PTPVDESC  DIM       40       40        7         Provider Description
PTPVSPAR  DIM       23       23        47        SPARE
.
.End of Record                         70
.
.
.
