. *****************************************************************************
. *                                                                           *
. * Include Name  : MEHLERFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Mental Health                      *
. *                 Leave End Reasons                                         *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : mehleraf.dat                                              *
. *                                                                           *
. * Keys          : KEY24                                                     *
. *                                                                           *
. * I/O Include   : MEHLERIO.INC                                              *
. *                                                                           *
. * Author        : Peter Eddey    11/07/94                                   *
. *                                                                           *
. * Modifications :                                                           *
. *                                                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
MEHLERA1  IFILE     SQL, FIXED=50, KEY="U1-8,9-16,17-24"
.
.. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  -----------
DMHLRADM  DIM       8           8      1  Admission Number
MHLRDATE  DIM       8           8      9  Date of Leave Ended (ccyymmdd)
MHLRTIME  DIM       8           8     17  Time of Leave Ended (hh:mm:ss)
MHLRCODE  DIM       3           3     25  Leave end reason code (CAT LE)
MHLRSPAR  DIM       22         22     28  Spare variable
.
.End of Record                        50
.
.Redefine form fields from key
.-----------------------------
. Name    Type      Length  Start  Description
. ----    ----      ------  -----  -----------
MHLRADMN  FORM      8           1  Admission Number
.
