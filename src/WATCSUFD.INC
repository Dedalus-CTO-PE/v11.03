. *****************************************************************************
. *  System        : Waiting Lists                                            *
. *                                                                           *
. *  Include Name  : WATCSUFD.INC                                             *
. *                                                                           *
. *  Function      : File Def'n Include for Waiting List                      *
. *                  Codes Summary                                            *
. *                                                                           *
. *  File Type     : SQL                                                      *
. *                                                                           *
. *  File Name     : watcsuaf.dat                                             *
. *                                                                           *
. *  Keys          : KEY18                                                    *
. *                                                                           *
. *  I/O Include   : WATCSUIO.INC                                             *
. *                                                                           *
. *  Author        : Justin Coates 12/07/1991                                 *
. *                                                                           *
. *  Modifications :                                                         *
. *****************************************************************************
.
.Data File Definition
.--------------------
.
WATCSUA1  IFILE     SQL, FIXED=89, KEY="U1-6,7-9,10-12,13-15,16-18"
.
. Name    Type      Length  Physical  Start  Description
. ----    ----      ------  --------  -----  -----------
WTCSDATE  DIM       6           6         1  Period Code (CCYYMM)
WTCSUNIT  DIM       3           3         7  Unit/Clinic (Cat WU)
WTCSPRTY  DIM       3           3        10  Priority Code (Cat TP)
WTCSATYP  DIM       3           3        13  Admission Type (Cat A)
WTCSCLSS  DIM       3           3        16  Admission Classification (Cat P)
WTCSWLST  FORM      6           4        19  No. on waiting list at End of Per.
WTCSBOOK  FORM      6           4        23  No. booked at End of Per.
WTCSCURA  FORM      6           4        27  No. current admn. at End of Per.
WTCSADWL  FORM      6           4        31  No. added to WL during period
WTCSADCN  FORM      6           4        35  No. bookings cancelled during Per.
WTCSADMT  FORM      6           4        39  No. admitted from booking dur. Per.
WTCSBKED  FORM      6           4        43  No. booked during Period
WTCSDADM  FORM      6           4        47  No. booked & admitted during Per.
WTCSWLAD  FORM      6           4        51  No. added to W/L and admitt in Per.
WTCSWLBK  FORM      6           4        55  No. added to W/L and booked in Per.
WTCSSPAR  DIM       30         30        59  Spare variable
.End of Record                           89
................................................................................
