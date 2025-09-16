. *****************************************************************************
. *                                                                           *
. * Include Name  : MEHLVSFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Mental Health                      *
. *                 Leave Summary Statistics                                  *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : mehlvsaf.dat                                              *
. *                                                                           *
. * Keys          : KEY9                                                      *
. *                                                                           *
. * I/O Include   : MEHLVSIO.INC                                              *
. *                                                                           *
. * Author        : ROD           02/12/1991  (The PHANTOM or DESERT STORM)   *
. *                                                                           *
. * Modifications : 28/03/1995  Helen Crick                                   *
. *                             Standardised FD                               *
. *****************************************************************************
.
.Data File Definition
.--------------------
MEHLVSA1  IFILE     SQL, FIXED=90, KEY="U1-6,7-9"
.
. Name    Type    Length  Phys.   Start       Description
. ----    ----    ------  ----    -----       -----------
MHLVDATE  DIM       6      6        1     (CCYYMM)
MHLVSTAT  DIM       3      3        7     of leave (Cat TL)
MHLVSTRT  FORM      6      4        10    pats on leave at start of period
mHLVLEAV  FORM      6      4        14    of times on leave during period
MHLVRETN  FORM      6      4        18    of returns from lve during period
MHLVDSCH  FORM      6      4        22    of discharges while on leave
MHLVDEAD  FORM      6      4        26    of deaths while on leave
MHLVLDAY  FORM      8      5        30    of leave days during period
MHLVRDAY  FORM      8      5        35    days on levae for returnees
MHLVSPAR  DIM       50     50       40    
.
.End of Record                      90
.
