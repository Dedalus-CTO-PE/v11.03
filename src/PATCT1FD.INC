.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATCT1FD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Catchment Codes                                 *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patct1cf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 8, KEY 7, KEY 4                             *
.  *                                                                    *
.  *     Modifications: V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                    V5.01 12/01/94 I.Rutt                           *
.  *                          Changed address fields to original length *  
.  **********************************************************************
.
PATCT1C1   IFILE SQL, FIXED=32, KEY="U1-8"
PATCT1C2   IFILE SQL, FIXED=32, KEY="U9-11,1-8"
PATCT1C3   IFILE SQL, FIXED=32, KEY="U12-15,1-8"
.
.NAME       TYPE   LENGTH   PHYSICAL  START     DESCRIPTION
.----       ----   ------   --------  -----     -----------
CTCPOST     DIM       8           8      1      POSTCODE
CTCCODE     DIM       3           3      9      CATCHMENT CODE (Category CH)
CTCLGA      DIM       4           4     12      LGA CODE
CTCSPAR     DIM      16          16     16      SPARE VARIABLE
.
.End of Record
.
.      Extra variables used in I/O include
.
SCTCCODE    DIM         3
SCTCLGA     DIM         4
.
