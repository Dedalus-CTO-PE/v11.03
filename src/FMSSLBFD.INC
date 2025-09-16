. *************************************************************************
. *                                                                       *
. *  Include Name    :   FMSSLBFD.INC                                     *
. *                                                                       *
. *  Function        :   File Def'n Include for Financial Management      *
. *                      Subjective Budget Link Table                     * 
. *                                                                       *
. *  File Type       :   SQL                                              *
. *                                                                       *
. *  File Name       :   fmsoxxxx.dat                                     *
. *                      where xxxx=budget type                           *
. *                                                                       *
. *  Keys            :   KEY14                                            *
. *                                                                       *
. *  Modifications   :                                                    *
. *************************************************************************
.
.Data File Definition
.---------------------
FMSSLBA1   IFILE SQL, FIXED=50, KEY="U1-2,3-14"
FMSSLBA2   IFILE SQL, FIXED=50, KEY="U1-2,15-26,3-14"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMSLTLED  DIM       2      2        1     Ledger
FMSLTSUB  DIM       12     12       3     Posting Subjective
.                                         Will receive budget from
FMSLFSUB  DIM       12     12       15    Stat-Total Subjective
FMSLSPAR  DIM       23     23       27    Spare
.
.End of Record                      50 
.
