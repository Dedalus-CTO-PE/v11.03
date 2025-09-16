. *****************************************************************************
. *                                                                           *
. * Include Name  : MEHCJAFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Mental Health                      *
. *                 CJA Status History                                        *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : mehcjaaf.dat                                              *
. *                                                                           *
. * Keys          : KEY21                                                     *
. *                                                                           *
. * I/O Include   : MEHCJAIO.INC                                              *
. *                                                                           *
. * Author        : Steve Armstrong  08/01/1997                               *
. *                                                                           *
. * Modifications :                                                           *
. *                                                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
MEHCJAA1  IFILE     SQL, FIXED=45, KEY="U1-8,9-16,17-21"
MEHCJAA2  IFILE     SQL, FIXED=45, KEY="U9-16,17-21,1-8"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  -----------
DMHCJADM  DIM       8           8      1  Admission Number
MHCJDATE  DIM       8           8      9  Date of cja status change
MHCJTIME  DIM       5           5     17  Time of cja status change (HH:MM)
MHCJSTAT  DIM       3           3     22  New cja status code (Cat CJ)
MHCJSPAR  DIM       20         20     25  Spare variable
.End of Record                        45
.
.Redefine form fields from key
.-----------------------------
. Name    Type      Length  Start  Description
. ----    ----      ------  -----  -----------
MHCJADMN  FORM      8           1  Admission Number
.
