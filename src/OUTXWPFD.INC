. *****************************************************************************
. *                                                                           *
. * Include Name  : OUTXWPFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Outpatients                        *
. *                 Extra Screen Word Processor Details                       *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : outxwpaf.dat       (site specific file)                   *
. *                                                                           *
. * Keys          : KEY12                                                     *
. *                                                                           *
. * I/O Include   : OUTXWPIO.INC                                              *
. *                                                                           *
. * Author        : Justin Coates 04/02/1992                                  *
. *                                                                           *
. * Modifications :                                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
OUTXWPA1  IFILE     SQL, FIXED=93, KEY="U1-8,9-12"
FILXWPA1  INIT      "xwpaf"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  -------------------------------------
DOTXWOUT  DIM       8           8      1  Outpatient Number
DOTXWLIN  DIM       4           4      9  Line Number
OTXWDESC  DIM       70         70     13  Line Description
OTXWSPAR  DIM       10         10     83  Spare variable
.
.End of Record                        93
.
.Redefine form fields from key
.-----------------------------
. Name    Type      Length  Description
. ----    ----      ------  --------------------------
OTXWOUTN  FORM      8       Outpatient Number
OTXWLINE  FORM      4       Line Number
.
