.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OUTPHOFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Outpatients         *
.  *                    Public Holiday Table                            *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : outphoaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 11, KEY 41, KEY 11                          *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *                                                                    *
.  *                                                                    *
.  *     V10.07.01 12/10/2015 Ebon Clements       CAR 316629            *
.  *               Added hospital to index 1 and 2                      *
.  *     V10.06.01 12/03/2015 Ebon Clements       CAR 268970            *
.  *               Added hospital and index 3                           *
.  *     V9.03.01  10/09/2003 Sandra Barcham      43011                 *
.  *               No longer use prefix to open                         *
.  *                                                                    *
.  *                    V5.00 05/06/89 Graeme Williams                  *
.  *                          Wrote Include                             *
.  *                                                                    *
.  **********************************************************************
.
.    IO INC       OUTPHOIO
.
OUTPHOA1    IFILE    SQL, FIXED=50, KEY="U1-8,39-41"
OUTPHOA2    IFILE    SQL, FIXED=50, KEY="U9-38,1-8,39-41"
OUTPHOA3    IFILE    SQL, FIXED=50, KEY="U39-41,1-8"
.
.NAME       TYPE   LENGTH   PHYSICAL  START     DESCRIPTION
.----       ----   ------   --------  -----     -----------
OPHDATE      DIM        8         8      1      DATE (CCYYMMDD)
OPHDESC      DIM       30        30      9      PUBLIC HOLIDAY DESCRIPTION
OPHHOSP      DIM        3         3     39      Hospital (pathspaf)
OPHSPARE     DIM        8         8     42      ****  SPARE  ****
.
.End of record                        50
.
.
.  THE FOLLOWING ARE FOR KEYS IN OUTIOPHA
.
SOPHDATE     DIM          8         1      DATE (CCYYMMDD)
SOPHDESC     DIM         30         9      PUBLIC HOLIDAY DESCRIPTION
SOPHHOSP     DIM          3        39      Hospital (pathspaf)

.
