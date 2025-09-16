. *****************************************************************************
. *                                                                           *
. * Include Name  : AAEGTCFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Accident Emergency                 *
. *                 Treatment main codes                                      *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : aaegtcaf.dat                                              *
. *                                                                           *
. * Keys          : KEY4                                                      *
. *                                                                           *
. * I/O Include   : AAEGTCIO.INC                                              *
. *                                                                           *
. * Author        : LOFTY         03/08/1993                                  *
. *                                                                           *
. * Modifications :                                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
AAEGTCA1  IFILE     SQL, FIXED=50, KEY="U1-4"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  --------------------------------------
AETCCODE  DIM       4           4      1  Treatment code
AETCDESC  DIM       20         20      5  Description
AETCSUBA  DIM       1           1     25  Are there sub-analysis codes Y/N
AETCSPAR  DIM       24         24     26  Spare variable
.End of Record                        50
.
AETCQCNT  FORM      2         * count for displayed items
AETCQLIN  FORM      1         * which prompt for line 24 
AETCQARR  DIM       6[34]     * array for ? mark routine
.
