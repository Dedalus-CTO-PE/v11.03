. *************************************************************************
. *                                                                       *
. *  Include Name    :   FMSLBUFD.INC                                     *
. *                                                                       *
. *  Function        :   File Def'n Include for Financial Management      *
. *                      Budget Link Table                                *
. *                                                                       *
. *  File Type       :   SQL                                              *
. *                                                                       *
. *  File Name       :   fmslxxxx.dat                                     *
. *                      where xxxx=budget type                           *
. *                                                                       *
. *  Keys            :   KEY14                                            *
. *                                                                       *
. *  Modifications   :                                                    *
. *************************************************************************
.
FMSLBUA1   IFILE SQL, FIXED=50, KEY="U1-2,3-14"
FMSLBUA2   IFILE SQL, FIXED=50, KEY="U15-16,17-28,1-2,3-14"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMBLTLED  DIM       2      2        1     Ledger
FMBLTACC  DIM       12     12       3     Posting Account
.                                         Will receive budget from
FMBLFLED  DIM       2      2        15    Ledger
FMBLFACC  DIM       12     12       17    Stat-Total Account
FMBLSPAR  DIM       21     21       29    Spare
.
.End of Record                      50 
