. *****************************************************************************
. *                                                                           *
. * Include Name  : PATATTFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Patient                            *
. *                 Address Translation Table                                 *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : patattaf.dat                                              *
. *                                                                           *
. * Keys          : KEY6                                                      *
. *                                                                           *
. * I/O Include   : PATATTIO.INC                                              *
. *                                                                           *
. * Author        : Justin Coates 04/08/1992                                  *
. *                                                                           *
. * Modifications :                                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
PATATTA1  IFILE     SQL, FIXED=71, KEY="U1-6"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  --------------------------------------
PTATADDR  DIM       6           6      1  Address Code
PTATENGL  DIM       25         25      7  English Name
PTATHORI  DIM       30         30     32  Chinese Name
PTATSPAR  DIM       9           9     62  Spare variable
.End of Record                        71
.
