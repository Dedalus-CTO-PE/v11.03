.  V5.01.000 22/02/1994 Robl Created
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATNADFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Need Assessment Details                         *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patnadaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 16,  KEY 30                                 *
.  *                                                                    *
.  **********************************************************************
.
.======================================================================== 
.Data File Definition
.======================================================================== 
.
PATNADA1  IFILE     SQL, FIXED=120, KEY="U1-8,9-16"
PATNADA2  IFILE     SQL, FIXED=120, KEY="U36-41,20-27,1-8,9-16"
.
.
. NAME    TYPE    LENGTH   PHYSICAL  START LOC.  DESCRIPTION
. ----    ----    ------   --------  ----------  -----------
PTNDURNO  DIM       8         8         1        U/R Number
PTNDRDAT  DIM       8         8         9        Date of resource need assesmt.
.                                                CCYYMMDD
PTNDSCOR  DIM       3         3        17        Score of Need Assessment (SN)
PTNDNRDT  DIM       8         8        20        Date of next review of score
PTNDPROV  DIM       6         6        28        Health Care Provider Code
PTNDPVTY  FORM      1         2        34        Health Care Provider Type
.                                                1 = Provider (patprvaf)
.                                                2 = Doctor   (patdo1af)
PTNDCODP  DIM       6         6        36        Primary Clinician Code
PTNDADAT  DIM       8         8        42        Date of Admission
PTNDCOM1  DIM      30        30        50        Comments Line 1
PTNDCOM2  DIM      30        30        80        Comments Line 2
PTNSPARE  DIM      10        10       110        SPARE VARIABLE
.
.End of Record                        120
.
.
.
