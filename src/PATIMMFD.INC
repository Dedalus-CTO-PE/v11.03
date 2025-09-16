.  V5.01.000 24/02/1994 bez Created
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATIMMFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Immunisation Details                            *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patimmaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY19                                           *
.  *                                                                    *
.  **********************************************************************
.
.======================================================================== 
.Data File Definition
.======================================================================== 
.
PATIMMA1  IFILE     SQL, FIXED=60, KEY="U1-8,9-16,17-19"
.
.
. NAME    TYPE    LENGTH   PHYSICAL  START LOC.  DESCRIPTION
. ----    ----    ------   --------  ----------  -----------
PTIMURNO  DIM       8         8         1        Patient U/R number
PTIMDATE  DIM       8         8         9        Date CCYYMMDD
PTIMTYPE  DIM       3         3        17        Immunisation Type (IT)
PTIMPROV  DIM       6         6        20        Health Care Provider Code
PTIMPVTY  FORM      1         2        26        Health Care Provider Type
.                                                1 = Provider (patprvaf)
.                                                2 = Doctor   (patdo1af)
PTIMDUED  DIM       8         8        28        Due Date CCYYMMDD
PTIMSPAR  DIM      24        24        36        Spare Variable
.
.End of Record                         60 
.
.======================================================================== 
.Redefined Key fields
.======================================================================== 
.
.
