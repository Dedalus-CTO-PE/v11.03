.  **********************************************************************
.  *                                                                    *
.  *     Include Name : AAESTAAF.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Accident Emergency  *
.  *                    A&E Statistics                                  *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : aaestaaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 11                                          *
.  *                                                                    *
.  *     Modifications: V5.00 22.03.89 J.Clark     (IBA)                *
.  *                          Change includes heading                   *
.  *                    V5.01 20.04.89 K.Peak      (IBA)                *
.  *                          Changes made to keys  SRF  (RENO)         *
.  *                    V5.02 24.04.89 K.Peak      (IBA)                *
.  *                          Changed month to period                   *
.  *                                                                    *
.  **********************************************************************
.
.
AAESTAA1  IFILE   SQL, FIXED=48, KEY="U1-2,3-5,6-11"
.
.
.NAME       TYPE   LENGTH   PHYSICAL  START     DESCRIPTION
.----       ----   ------   --------  -----     -----------
AESCATA      DIM       2          2      1      CATEGORY
AESCODE      DIM       3          3      3      USER DEFINED CODE
AESDATE      DIM       6          6      6      CENTURY,YEAR/PERIOD
.
AESNUMB      FORM      6          4     12      NUMBER PER PERIOD
AESSPARE     DIM      32         32     16      *** SPARE ***
.
.End of Record                        48
