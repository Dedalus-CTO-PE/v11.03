.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATLGAFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    LGA Codes                                       *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patlgaaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 4                                           *
.  *                                                                    *
.  *     Modifications: V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                                                                    *
.  **********************************************************************
.
PATLGAA1   IFILE SQL, FIXED=32, KEY="U1-4"
.
.NAME       TYPE   LENGTH   PHYSICAL  START     DESCRIPTION
.----       ----   ------   --------  -----     -----------
LGACODE     DIM       4           4      1      LGA CODE
LGADESC     DIM      20          20      5      LGA DESC
LGASPAR     DIM       7           7     25      SPARE VARIABLE
.
.End of Record
