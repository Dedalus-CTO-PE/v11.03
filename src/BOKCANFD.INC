.  **********************************************************************
.  *                                                                    *
.  *     Include Name : BOKCANFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Booking             *
.  *                    Booking Cancellation Summary                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : bokcanaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY12                                           *
.  *                                                                    *
.  *     Modifications: V5.00 04.05.89 H.Donnard   (IBA)                *
.  *                          Change include heading                    *
.  *                                                                    *
.  **********************************************************************
.
.           INC       BOKCANIO.INC
.
BOKCANA1    IFILE   SQL, FIXED=48, KEY="U1-3,4-6,7-12"
.
.NAME       TYPE   LENGTH   PHYSICAL  START     DESCRIPTION
.----       ----   ------   --------  -----     -----------
BCTYPE      DIM       3           3      1      Booking Type (Category BK)
BCCANC      DIM       3           3      4      Removal Type (Category BC)
BCDATE      DIM       6           6      7      Century,Year,Period (CCYYMM)
.                                                (Removal Date)
BCCANCL     FORM      6           4     13      Number of Removal
BCSPARE     DIM      31          31     17      Spare
.End of Record                          48
