. *****************************************************************************
. *                                                                           *
. * Include Name  : PCPFRAFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Patient Care Plans                 *
. *                 Frequency Description Table                               *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : pcpfraaf.dat                                              *
. *                                                                           *
. * Keys          : KEY9 , KEY39                                              *
. *                                                                           *
. * I/O Include   : PCPFRAIO.INC                                              *
. *                                                                           *
. * Author        : Justin Coates 18/11/1991                                  *
. *                                                                           *
. * Modifications :                                                           *
. *      V9.02.00  30/12/2002 Tracey Nguyen srf 23497                         *
. *                Care Plans Port to V9                                      *
. *****************************************************************************
. * Modifications : 01/12/1993    Justin Coates  Quote 7841 SRF 123724        *
. *                 added PCFAONCE for once only codes                        *
. *****************************************************************************
.
.Data File Definition
.--------------------
PCPFRAA1  IFILE     SQL, FIXED=70, KEY="U1-9"
PCPFRAA2  IFILE     SQL, FIXED=70, KEY="U10-39,1-9"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  -----------
PCFACODE  DIM       9           9      1  Frequency Code
PCFADESC  DIM       30         30     10  Frequency Description
PCFAONCE  DIM       1           1     40  Once only code (Y/N)
PCFASPAR  DIM       29         29     41  Spare variable
.End of Record                        70
.
