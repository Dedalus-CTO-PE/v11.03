. *****************************************************************************
. *                                                                           *
. * Include Name  : AAEGDLFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Accident Emergency                 *
. *                 Diagnosis sub-analysis codes                              *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : aaegdlaf.dat                                              *
. *                                                                           *
. * Keys          : KEY3                                                      *
. *                                                                           *
. * I/O Include   : AAEGDLIO.INC                                              *
. *                                                                           *
. * Author        : LOFTY         03/08/1993                                  *
. *                                                                           *
. * Modifications :                                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
AAEGDLA1  IFILE     SQL, FIXED=50, KEY="U1-2,3-3"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  --------------------------------------
AEDLMAIN  DIM       2           2      1  Diagnoisis code (from AAEGDCFD)
AEDLCODE  DIM       1           1      3  Diagnoisis sub-analysis code
AEDLDESC  DIM       20         20      4  Description
AEDLSPAR  DIM       26         26     24  Spare variable
.End of Record                        50
.
