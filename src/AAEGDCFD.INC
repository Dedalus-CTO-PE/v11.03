. *****************************************************************************
. *                                                                           *
. * Include Name  : AAEGDCFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Accident Emergency                 *
. *                 Diagnosis main codes                                      *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : aaegdcaf.dat                                              *
. *                                                                           *
. * Keys          : KEY2                                                      *
. *                                                                           *
. * I/O Include   : AAEGDCIO.INC                                              *
. *                                                                           *
. * Author        : LOFTY         03/08/1993                                  *
. *                                                                           *
. * Modifications :                                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
AAEGDCA1  IFILE     SQL, FIXED=50, KEY="U1-2"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  --------------------------------------
AEDCCODE  DIM       2           2      1  Diagnosis code
AEDCDESC  DIM       20         20      3  Description
AEDCSUBA  DIM       1           1     23  Are there sub-analysis codes Y/N
AEDCSPAR  DIM       26         26     24  Spare variable
.End of Record                        50
.
AEDCQCNT  FORM      2         * count for displayed items
AEDCQLIN  FORM      1         * which prompt for line 24 
AEDCQARR  DIM       3[34]     * array for ? mark routine
.
