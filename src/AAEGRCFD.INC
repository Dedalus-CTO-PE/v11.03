. *****************************************************************************
. *                                                                           *
. * Include Name  : AAEGRCFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Accident Emergency                 *
. *                 Regions codes                                             *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : aaegrcaf.dat                                              *
. *                                                                           *
. * Keys          : KEY2                                                      *
. *                                                                           *
. * I/O Include   : AAEGRCIO.INC                                              *
. *                                                                           *
. * Author        : LOFTY         03/08/1993                                  *
. *                                                                           *
. * Modifications : 17/12/1997  Steve Armstrong   EMR Mods                    *
. *                 Added AERCFLAG 
. *****************************************************************************
.
.Data File Definition
.--------------------
AAEGRCA1  IFILE     SQL, FIXED=50, KEY="U1-2"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  --------------------------------------
AERCCODE  DIM       2           2      1  Region code
AERCDESC  DIM       20         20      3  Description
AERCFLAG  DIM       1           1     23  Foreign Body Flag
.                                          " " = not applicable
.                                          "F" = For Foreign Body Injury
.                                          "N" = Not For Foreign Body Injury
AERCSPAR  DIM       26         26     24  Spare variable
.End of Record                        50
.
AERCQCNT  FORM      2         * count for displayed items
AERCQLIN  FORM      1         * which prompt for line 24 
AERCQARR  DIM       2[34]     * array for ? mark routine
AERCFRGN  DIM       1         * flag passed for display using Foreign Body Flag
.
