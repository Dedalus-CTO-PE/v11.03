. *****************************************************************************
. *                                                                           *
. * Include Name  : PCPIDPFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Patient Care Plans                 *
. *                 Intervention Dependency Table                             *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : pcpidpaf.dat                                              *
. *                                                                           *
. * Keys          : KEY9                                                      *
. *                                                                           *
. * I/O Include   : PCPIDPIO.INC                                              *
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
PCPIDPA1  IFILE     SQL, FIXED=36, KEY="U1-9"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  -----------
PCPICODE  DIM       9           9      1  Intervention Code
PCPITIME  FORM      4           3     10  Time (minutes/points)
PCPISTAF  DIM       3           3     13  Staff Classification (Cat SD)
PCPISPAR  DIM       20         20     16  Spare variable
.
.End of Record                        36
.
