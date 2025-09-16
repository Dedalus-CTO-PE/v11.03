. *****************************************************************************
. *                                                                           *
. * Include Name  : AAEGTLFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Accident & Emergency               *
. *                 Treatment sub-analysis codes                              *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : aaegtlaf.dat                                              *
. *                                                                           *
. * Keys          : KEY6                                                      *
. *                                                                           *
. * I/O Include   : AAEGTLIO.INC                                              *
. *                                                                           *
. * Author        : LOFTY         03/08/1993                                  *
. *                                                                           *
. * Modifications :                                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
AAEGTLA1  IFILE     SQL, FIXED=50, KEY="U1-4,5-6"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  --------------------------------------
AETLMAIN  DIM       4           4      1  Treatment code (from AAEGICFD)
AETLCODE  DIM       2           2      5  Treatment sub-analysis code
AETLDESC  DIM       20         20      7  Description
AETLSPAR  DIM       23         23     27  Spare variable
.End of Record                        50
.
