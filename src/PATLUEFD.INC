. *****************************************************************************
. *                                                                           *
. * Include Name  : PATLUEFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Patient                            *
. *                 Last U/R Entered                                          *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : patlueaf.dat                                              *
. *                                                                           *
. * Keys          : KEY4                                                      *
. *                                                                           *
. * I/O Include   : PATLUEIO.INC                                              *
. *                                                                           *
. * Author        : Justin Coates      25/10/1995                             *
. *                                                                           *
. * Modifications :                                                           *
. *****************************************************************************
.
.Data File Definition 
.--------------------
PATLUEA1  IFILE     SQL, FIXED=13, KEY="U1-4"
.
.Name     Type      Length  Phys.  Start  Description
.-------  ----      ------  -----  -----  --------------------------------------
PTLUOPER  DIM       4           4      1  Operator ID
PTLUURNO  DIM       8           8      5  Last U/R Entered
.End of Record                        13
.
