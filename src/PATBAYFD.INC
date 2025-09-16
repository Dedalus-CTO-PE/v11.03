.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATBAYFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Bay Sequence Codings                            *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patbaysf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 8                                           *
.  *                                                                    *
.  *     Modifications: V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                                                                    *
.  **********************************************************************
.
PATBAYS1   IFILE SQL, FIXED=32, KEY="U1-3,4-5"
PATBAYS2   IFILE SQL, FIXED=32, KEY="U4-5,1-3"
.
.NAME       TYPE   LENGTH   PHYSICAL  START     DESCRIPTION
.----       ----   ------   --------  -----     -----------
BAYCODE     DIM       3           3      1      BAY CODE
BAYUR       DIM       2           2      4      LAST TWO DIGITS OF U/R Number
BAYDESC     DIM      20          20      6      BAY DESCRIPTION
BAYSPAR     DIM       6           6     26      SPARE VARIABLE
.
.End of Record
.
.      Extra variables used in I/O include
.
SBAYCODE    DIM         3
SBAYUR      DIM         2
