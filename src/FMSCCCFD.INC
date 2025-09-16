. **************************************************************************
. *                                                                        *
. *  Include Name    :   FMSCCCFD.INC                                      *
. *                                                                        *
. *  Function        :   File Def'n Include for Financial Management       *
. *                      Consolidated Cost Centre Table                    *
. *                                                                        *
. *  File Type       :   SQL                                               *
. *                                                                        *
. *  File Name       :   fmscccaf.dat                                      *
. *                                                                        *
. *  Keys            :   KEY26                                             *
. *                                                                        *
. *  Modifications   :                                                     *
. **************************************************************************
.
FMSCCCA1   IFILE SQL, FIXED=87, KEY="U1-2,3-14,15-26"
FMSCCCA2   IFILE SQL, FIXED=87, KEY="U1-2,15-26,3-14"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMCFLEDG  DIM       2      2        1     Ledger Number
FMCFCCOS  DIM       12     12       3     Consolidated Cost Centre
FMCFSCOS  DIM       12     12       15    Sub Cost Centre (blank for header)
.
FMCFDESC  DIM       35     35       27    Description   (only on header rec)
FMCFPPOS  DIM       5      5        62    Print position(only on header rec)
FMCFPRT   DIM       3      3        67    Print code    (only on header rec)
FMCFCRP   DIM       1      1        68    Credit Print 1=Yes
FMCFSPAR  DIM       16     16       70    Spare
.
.End of Record                      87
.
