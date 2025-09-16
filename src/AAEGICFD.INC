. *****************************************************************************
. *                                                                           *
. * Include Name  : AAEGICFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Accident Emergency                 *
. *                 Investigation main codes                                  *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : aaegicaf.dat                                              *
. *                                                                           *
. * Keys          : KEY4                                                      *
. *                                                                           *
. * I/O Include   : AAEGICIO.INC                                              *
. *                                                                           *
. * Author        : LOFTY         03/08/1993                                  *
. *                                                                           *
. * Modifications :                                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
AAEGICA1  IFILE     SQL, FIXED=50, KEY="U1-4"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  --------------------------------------
AEICCODE  DIM       4           4      1  Investigation code
AEICDESC  DIM       20         20      5  Description
AEICSUBA  DIM       1           1     25  Are there sub-analysis codes Y/N
AEICSPAR  DIM       24         24     26  Spare variable
.End of Record                        50
.
AEICQCNT  FORM      2         * count for displayed items
AEICQLIN  FORM      1         * which prompt for line 24 
AEICQARR  DIM       6[34]     * array for ? mark routine
.
