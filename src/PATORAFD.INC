. *****************************************************************************
. *                                                                           *
. * Include Name  : PATORAFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Patient                            *
. *                 Oracle Interface                                          *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : patoraaf.dat                                              *
. *                                                                           *
. * Keys          : KEY16                                                     *
. *                                                                           *
. * I/O Include   : PATORAIO.INC                                              *
. *                                                                           *
. * Author        : Justin Coates      10/05/1995                             *
. *                                                                           *
. * Modifications :                                                           *
. *****************************************************************************
.
.Data File Definition 
.--------------------
PATORAA1  IFILE     SQL, FIXED=17, KEY="U1-8,9-16"
.
.Name     Type      Length  Phys.  Start  Description
.-------  ----      ------  -----  -----  --------------------------------------
PTORDATE  DIM       8           8      1  Extraction Date
PTORFILE  DIM       8           8      9  File Name for extraction
.End of Record                        17
.
.

