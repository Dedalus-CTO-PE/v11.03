. *****************************************************************************
. *                                                                           *
. *       Include Name : PATCMPFD.INC                                         *
. *                                                                           *
. *       Function     : File definition include for Patient                  *
. *                      Complex Mappings                                     *
. *                                                                           *
. *       File Type    : SQL                                                  *
. *                                                                           *
. *       File Name    : patcmpaf.dat                                         *
. *                                                                           *
. *       Keys         : KEY20                                                *
. *                                                                           *
. *       Modifications:                                                      *
. *                                                                           *
. *****************************************************************************
.
PATCMPA1  IFILE     SQL, FIXED=100, KEY="U1-2,3-11,12-20"
PATCMPA2  IFILE     SQL, FIXED=100, KEY="U3-11,12-20,1-2"
.
.Name     Type   Length  Physical  Start Loc.  Description
.----     ----   ------  --------  ----------  -----------
DPTCPCMF  DIM       2        2          1      Complex mapping format
.                                               1 - Obstetrics (Dis)
.                                               2 - Head injuries (Dis)
.                                               3 - Tendon injuries (Dis)
.                                               4 - Pacemakers (Opr)
.                                               5 - Social induction (Dis & Opr)
.                                               6 - Medical augment (Opr & Dis)
.                                               7 - 2-3 Maps (Opr)
.                                               8 - 2-3 Maps (Dis)
PTCP1PCD  DIM       9        9          3      1st primary code
PTCP2PCD  DIM       9        9         12      2nd primary code
PTCP1MCD  DIM       9        9         21      1st map code
PTCP2MCD  DIM       9        9         30      2nd map code
PTCP3MCD  DIM       9        9         39      3rd map code
PTCPSPR1  DIM      52       52         48      Spare variable
.
.End of Record                        100
.
PTCPCMFT  FORM      2                       * Complex mapping format
.
PTCPARY   DIM       9[20]                   * Complex mapping work array
PTCPCOD   DIM       9                       * Complex map code
+
.

