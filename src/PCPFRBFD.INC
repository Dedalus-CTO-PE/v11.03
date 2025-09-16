. *****************************************************************************
. *                                                                           *
. * Include Name  : PCPFRBFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Patient Care Plans                 *
. *                 Frequency/Shift Table                                     *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : pcpfrbaf.dat                                              *
. *                                                                           *
. * Keys          : KEY12                                                     *
. *                                                                           *
. * I/O Include   : PCPFRBIO.INC                                              *
. *                                                                           *
. * Author        : Justin Coates 18/11/1991                                  *
. *                                                                           *
. * Modifications :                                                           *
. *      V9.02.00  30/12/2002 Tracey Nguyen srf 23497                         *
. *                r5.10 Care Plans Port to V9                                *
. *****************************************************************************
.
.Data File Definition
.--------------------
PCPFRBA1  IFILE     SQL, FIXED=36, KEY="U1-9,10-12"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  -----------
PCFBCODE  DIM       9           9      1  Frequency Code
PCFBSHFT  DIM       3           3     10  Shift Code (Cat DS)
PCFBNUMB  FORM      3           3     13  No. of times code done this shift
PCFBSPAR  DIM       20         20     16  Spare variable
.
.End of Record                        36
.
