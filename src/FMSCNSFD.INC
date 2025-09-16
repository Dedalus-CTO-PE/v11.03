. **************************************************************************
. *                                                                        *
. *  Include Name    :   FMSCNSFD.INC                                      *
. *                                                                        *
. *  Function        :   File Def'n Include for Financial Management       *
. *                      Consolidated Ledgers Table                        *
. *                                                                        *
. *  File Type       :   SQL                                               *
. *                                                                        *
. *  File Name       :   fmscnsaf.dat                                      *
. *                                                                        *
. *  Keys            :   KEY6                                              *
. *                                                                        *
. *  Modifications   :                                                     *
. **************************************************************************
.
FMSCNSA1   IFILE SQL, FIXED=17, KEY="U1-2,3-4,5-6"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMCNCLED  DIM       2      2        1     Consolidated Ledger Code  
FMCNREPT  DIM       2      2        3     Report Code
FMCNLEDG  DIM       2      2        5     Ledger Code
FMCNSPAR  DIM       10     10       7     Spare
.
.End of Record                      17 
