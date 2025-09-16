. *****************************************************************************
. *                                                                           *
. * Include Name  : OUTOSFFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Outpatients                        *
. *                 Open Session                                              *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : outosfaf.dat                                              *
. *                                                                           *
. * Keys          : KEY34, KEY40                                              *
. *                                                                           *
. * I/O Include   : OUTOSFIO.INC                                              *
. *                                                                           *
. * Author        : Whirlpool    (Worlds Worst Surfer)     08/03/1993         *
. *                                                                           *
. * Modifications : 22/03/93  ROD IS A BIG POOF                               *
. *                 Added 2nd index                                           *
. *                 17/05/93  WHIRLPOOL                                       *
. *                 Added 3rd index                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
OUTOSFA1  IFILE     SQL, FIXED=91, KEY="U1-3,4-9,10-15,16-21,22-29,30-34"
OUTOSFA2  IFILE     SQL, FIXED=91, KEY="U1-3,35-40,10-15,16-21,22-29,30-34,4-9"
OUTOSFA3  IFILE     SQL, FIXED=91, KEY="U22-29,1-3,4-9,10-15,16-21,30-34"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  --------------------------------------
OTOSHOSP  DIM       3          3       1  Hospital
OTOSSITE  DIM       6          6       4  Site      
OTOSSESS  DIM       6          6      10  Clinic Session 
OTOSCLID  DIM       6          6      16  Clinic Id 
OTOSDATE  DIM       8          8      22  Session Date
OTOSTIME  DIM       5          5      30  Session Time
OTOSCTYP  DIM       6          6      35  Clinic Type
OTOSSPAR  DIM       50        50      41  Spare variable
.
.End of Record                        91
.
.
