. *****************************************************************************
. *                                                                           *
. * Include Name  : WATPNPFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Waiting List                       *
. *                 Procedures Not Performed                                  *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : watpnpaf.dat                                              *
. *                                                                           *
. * Keys          : KEY8 , KEY27                                              *
. *                                                                           *
. * I/O Include   : WATPNPIO.INC                                              *
. *                                                                           *
. * Author        : Justin Coates 18/02/1993                                  *
. *                                                                           *
. * Modifications :                                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
WATPNPA1  IFILE     SQL, FIXED=120, KEY="U1-8"
WATPNPA2  IFILE     SQL, FIXED=120, KEY="U9-16,17-25,26-27,1-8"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  --------------------------------------
DWTNPBOO  DIM       8           8      1  Booking Number
WTNPURNO  DIM       8           8      9  U/R Number
WTNPCODE  DIM       9           9     17  Procedure Code
DWTNPCNT  DIM       2           2     26  Procedure Count
WTNPDRET  DIM       8           8     28  New Date-on-List
WTNPDCHG  DIM       8           8     36  Date procedure not performed
WTNPOUTC  DIM       3           3     44  Outcome of Offer      (Cat WO)
WTNPREAS  DIM       3           3     47  Reason not performed  (Cat WP)
WTNPCOMM  DIM       50         50     50  Comments on outcome of offer
WTNPNCNT  DIM       2           2    100  New records count (if applicable)
WTNPSPAR  DIM       18         18    102  Spare variable
.End of Record                       120
.
.Redefine form fields from key
.-----------------------------
. Name    Type      Length  Description
. ----    ----      ------  --------------------------------------
WTNPBOOK  FORM      8       Booking Number
WTNPCNT   FORM      2       Procedure Count
.
