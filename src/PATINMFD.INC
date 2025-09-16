.  ********************************************************************
.  *                                                                  *
.  *      Include Name : PATINMFD.INC                                 *
.  *                                                                  *
.  *      Function     : File Definition include of Patient           *
.  *                     Patient Invoice Messages                     *
.  *                                                                  *
.  *      File Type    : SQL                                          *
.  *                                                                  *
.  *      File Name    : patinmaf.dat                                 *
.  *                                                                  *
.  *      Keys         : KEY4                                         *
.  *                                                                  *
.  *                                                                  *
.  ********************************************************************
.
.Data File Definition
.-------------------
PATINMA1  IFILE SQL, FIXED=150, KEY="U1-1,2-4"
.
. NAME    TYPE    LENGTH   PHYSICAL  START LOC.   DESCRIPTIONS
. ----    ----    ------   --------  ----------   ------------
DPTIMSYS  DIM       1            1        1       System
PTIMCLM   DIM       3            3        2       Claim Code (CL)
PTIMMES1  DIM      60           60        5       Message Line 1
PTIMMES2  DIM      60           60       65       Message Line 2
PTIMSPAR  DIM      25           25      125       Spare
.
.End of Record                          150
.
PTIMSYS   FORM      1
