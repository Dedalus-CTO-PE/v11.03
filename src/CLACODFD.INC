. *****************************************************************************
. *                                                                           *
. * Include Name  : CLACODFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Clinical Audits                    *
. *                 Codes Table                                               *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : clacodaf.dat                                              *
. *                                                                           *
. * Keys          : KEY5                                                      *
. *                                                                           *
. * I/O Include   : CLACODIO.INC                                              *
. *                                                                           *
. * Author        : Justin Coates 04/05/1992                                  *
. *                                                                           *
. * Modifications : V5.02.00 19.09.94 B.G.Ackland                             *
. *                          Correct Spare Variable Length and Start Positions*
. *****************************************************************************
.
.Data File Definition
.--------------------
CLACODA1  IFILE     SQL, FIXED=40, KEY="U1-2,3-5"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  --------------------------------------
CACDCATG  DIM       2           2      1  Category 
CACDCODE  DIM       3           3      3  Code
CACDDESC  DIM       20         20      6  Description
CACDSPAR  DIM       14         14     26  Spare variable
.
.End of Record                        40
.
