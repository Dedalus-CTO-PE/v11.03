. *****************************************************************************
. *                                                                           *
. * Include Name  : EMRGRCFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Emergency                          *
. *                 Region Codes                                              *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : emrgrcaf.dat                                              *
. *                                                                           *
. * Keys          : KEY2                                                      *
. *                                                                           *
. * I/O Include   : EMRGRCIO.INC                                              *
. *                                                                           *
. * Author        : LOFTY         03/08/1993                                  *
. *                                                                           *
. * Modifications :                                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
EMRGRCA1  IFILE     SQL, FIXED=50, KEY="U1-2"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  --------------------------------------
EMRCCODE  DIM       2           2      1  Region code
EMRCDESC  DIM       20         20      3  Description
EMRCFLAG  DIM       1           1     23  Foreign Body Flag
.                                          " " = not applicable
.                                          "F" = For Foreign Body Injury
.                                          "N" = Not For Foreign Body Injury
EMRCSPAR  DIM       26         26     24  Spare variable
.End of Record                        50
.
EMRCQCNT  FORM      2         * count for displayed items
EMRCQLIN  FORM      1         * which prompt for line 24 
EMRCQARR  DIM       2[34]     * array for ? mark routine
EMRCFRGN  DIM       1         * flag passed for display using Foreign Body Flag
.
