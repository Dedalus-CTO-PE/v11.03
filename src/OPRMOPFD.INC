. *****************************************************************************
. *                                                                           *
. * Include Name  : OPRMOPFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Theatre                            *
. *                 Usage operation codes                                     *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : oprmopaf.dat                                              *
. *                                                                           *
. * Keys          : KEY19 , KEYA , KEY4B                                      *
. *                                                                           *
. * Author        : Justin Coates 20/10/1993                                  *
. *                                                                           *
. * Modifications :                                                           *
. *                 V6.07.01 06/06/2000 J.Tan                                 *
. *                          Added GST Applicable and code                    *
. *                 V6.05.00 30/04/98 J.Tan                                   *
. *                          Mods amount to F12.2                             *
. *****************************************************************************
.
.Data File Definition
.--------------------
OPRMOPA1  IFILE     SQL, FIXED=50, KEY="U1-10,11-11,12-13"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  --------------------------------------
OPMOUNIQ  DIM       10         10      1  Unique Id
OPMOTEAM  DIM       1           1     11  Team Number
DOPMOCNT  DIM       2           2     12  Count of codes (billing order)
OPMOCODE  DIM       9           9     14  Code
OPMOBAMT  FORM     12.2         8     23  Amount (billing amount)
OPMOGSTA  DIM       1           1     31  GST applicable ? 
.                                         0/space=No,1=yes, 2=Neither
OPMOGSTC  DIM       6           6     32  GST Code
OPMOSPAR  DIM       12         12     38  Spare variable
.End of Record                        50 
.
OPMOCNT   FORM       2                    Count of codes
OPMOAMNT  FORM      6.2                   Amount (billing amount)
.
