.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATNOBFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Ward with no Beds                               *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patnobef.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 11, KEY 16                                  *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *         V9.02.00   03.12.2001  Glenn Saunders                      *
.  *                    Add third index for web navigation.             *
.  *         V5.01.01   14/10/89    Graeme Williams (I.B.A)             *
.  *                    Added Room Allocation                           *
.  *         V5.02      29.06.89    S.Barcham   (IBA)                   *
.  *                    Make plurarity part of the key                  *
.  *         V5.01      01.06.89    K.Peak      (IBA)                   *
.  *                    Change Admission to 8 characters                *
.  *         V5.00      31.03.89    J.Clark     (IBA)                   *
.  *                    Change include heading                          *
.  *                                                                    *
.  **********************************************************************
.
PATNOBE1   IFILE SQL, FIXED=23, KEY="U1-3,4-11,12-13"
PATNOBE2   IFILE SQL, FIXED=23, KEY="U1-3,14-16,4-11,12-13"
PATNOBE3   IFILE SQL, FIXED=23, KEY="U4-11,1-3,12-13"
.
. NAME     TYPE    LENGTH   PHYSICAL   START LOC.   DESCRIPTION
. ----     ----    ------   --------   ----------   -----------
NBWARD      DIM        3          3          1      WARD No THAT PATIENT IS IN
DNBADMNO    DIM        8          8          4      PATIENT ADMISSION NO.
DNBPLUR     DIM        2          2         12      PLURARITY
NBROOM      DIM        3          3         14      ROOM ALLOCATION
NBSPARE     DIM        6          6         17      SPARE
.
.End of Record                              23
.
.  redefine form fields for key
.  ----------------------------
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
NBADMNO     FORM         8            4      PATIENT ADMISSION NO.
NBPLUR      FORM         2            2      PLURARITY
