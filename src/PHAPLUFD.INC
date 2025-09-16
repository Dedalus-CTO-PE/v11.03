. *********************************************************
. *                                                       *
. * Include Name :  PHAPLUFD.INC                          *
. *                                                       *
. * Function     :  File Def'n Include for Pharmacy       *
. *                 PLURALS Table                         *
. *                                                       *
. * File Type    :  SQL                                   *
. *                                                       *
. * File Name    :  phapluaf.dat                          *
. *                                                       *
. * Keys         :  KEY15                                 *
. *                                                       *
. * Modifications:  V5.00  16/02/89 M.HAYSE (I.B.A.)      *
. *                        Rewrite Include                *
. *                                                       *
. *********************************************************
.
PHAPLUA1  IFILE     SQL, FIXED=40, KEY="U1-15"
.
.NAME      TYPE   LENGTH   PHYSICAL   START   DESCRIPTION
.----      ----   ------   --------   -----   -----------
PLDISP    DIM       15        15          1   DISPENSING UNIT 
.
PLUNIT    DIM       17        17         16   PLURAL UNIT 
PLFILLER  DIM       7         7          33   **** SPARE **** 
.End of Record                          40
.
