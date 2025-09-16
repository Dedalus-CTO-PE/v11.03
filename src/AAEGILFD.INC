. *****************************************************************************
. *                                                                           *
. * Include Name  : AAEGILFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Accident Emergency                 *
. *                 Investigation sub-analysis codes                          *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : aaegilaf.dat                                              *
. *                                                                           *
. * Keys          : KEY6                                                      *
. *                                                                           *
. * I/O Include   : AAEGILIO.INC                                              *
. *                                                                           *
. * Author        : LOFTY         03/08/1993                                  *
. *                                                                           *
. * Modifications :                                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
AAEGILA1  IFILE     SQL, FIXED=50, KEY="U1-4,5-6"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  --------------------------------------
AEILMAIN  DIM       4           4      1  Investigation code (from AAEGICFD)
AEILCODE  DIM       2           2      5  Investigation sub-analysis code
AEILDESC  DIM       20         20      7  Description
AEILSPAR  DIM       23         23     27  Spare variable
.End of Record                        50
.
