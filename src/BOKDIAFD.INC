. *****************************************************************************
. *                                                                           *
. * Include Name  : BOKDIAFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Booking                            *
. *                 Booking Diagnosis                                         *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : bokdiaaf.dat                                              *
. *                                                                           *
. * Keys          : KEY8                                                      *
. *                                                                           *
. * I/O Include   : BOKDIAIO.INC                                              *
. *                                                                           *
. * Author        : Justin Coates 11/10/1991                                  *
. *                                                                           *
. * Modifications :                                                           *
. *       V10.05.01 25/08/2015 Jill Parkinson CAR 299980                      *
. *                 Added description 4,5 and 6                               *
. *       V10.01.01 11/01/2011 Jill Parkinson CAR 234014                      *
. *                 Increased description lengths                             *
. *       V9.03.01  22/07/2003 Jill Habasque CAR 21760                        *
. *                 Added BKDIUNIQ - Unique id from theatre                   *
. *****************************************************************************
.
.Data File Definition
.--------------------
BOKDIAA1  IFILE     SQL, FIXED=638, KEY="U1-8,258-267"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  -----------
DBKDIBOO  DIM       8           8      1  Booking Number
BKDICODE  DIM       9           9      9  Diagnosis code
BKDIDES1  DIM       80         80     18  Diagnosis description 1
BKDIDES2  DIM       80         80     98  Diagnosis description 2
BKDICOMM  DIM       80         80    178  Booking comments
BKDIUNIQ  DIM       10         10    258  Unique theatre booking ID
BKDIDES3  DIM       80         80    268  Diagnosis description 3
BKDIDES4  DIM       80         80    348  Diagnosis description 4
BKDIDES5  DIM       80         80    428  Diagnosis description 5
BKDIDES6  DIM       80         80    508  Diagnosis description 6
BKDISPAR  DIM       50         50    588  Spare variable
.
.End of Record                       638
.
.Redefine form fields from key
.-----------------------------
. Name    Type      Length  Start  Description
. ----    ----      ------  -----  -----------
BKDIBOOK  FORM      8           1  Booking number
.
