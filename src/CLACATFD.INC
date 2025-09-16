. *****************************************************************************
. *                                                                           *
. * Include Name  : CLACATFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Clinical Audits                    *
. *                 Site Category                                             *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : clacataf.dat                                              *
. *                                                                           *
. * Keys          : KEY8                                                      *
. *                                                                           *
. * I/O Include   : CLACATIO.INC                                              *
. *                                                                           *
. * Author        : Justin Coates 26/03/1992                                  *
. *                                                                           *
. * Modifications :                                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
CLACATA1  IFILE     SQL, FIXED=30, KEY="U1-6,7-8"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  --------------------------------------
CACTSITE  DIM       6           6      1  Site Code
DCACTUNI  DIM       2           2      7  Unique Counter (1-20)
CACTCODE  DIM       2           2      9  Coded fields category
CACTCHGE  DIM       2           2     11  Changeable codes category
CACTSPAR  DIM       17         17     13  Spare variable
.End of Record                        30
.
.Redefine form fields from key
.-----------------------------
. Name    Type      Length  Description
. ----    ----      ------  --------------------------------------
CACTUNIQ  FORM      2       Unique Counter
.
