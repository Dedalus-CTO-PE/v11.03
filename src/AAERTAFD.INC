. *****************************************************************************
. *                                                                           *
. * Include Name  : AAERTAFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Accident and Emergency             *
. *                 RTA details                                               *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : aaertaaf.dat                                              *
. *                                                                           *
. * Keys          : KEY8                                                      *
. *                                                                           *
. * Author        : Justin Coates 04/08/1993                                  *
. *                                                                           *
. * Modifications :                                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
AAERTAA1  IFILE     SQL, FIXED=450, KEY="U1-8"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  --------------------------------------
DAERTEVN  DIM       8           8      1  Event Number
AERTDATE  DIM       8           8      9  Date of Accident
AERTTIME  DIM       5           5     17  Time of Accident
AERTLOCN  DIM       30         30     22  Place of Accident
AERTADRV  DIM       30         30     52  Car 1 - Driver
AERTAAD1  DIM       35         35     82  Car 1 - Address 1
AERTAAD2  DIM       35         35    117  Car 1 - Address 2
AERTAAD3  DIM       35         35    152  Car 1 - Address 3
AERTAAD4  DIM       35         35    187  Car 1 - Address 4
AERTAPST  DIM       8           8    222  Car 1 - Postcode
AERTAREG  DIM       8           8    230  Car 1 - Registration Number
.
AERTBDRV  DIM       30         30    238  Car 2 - Driver
AERTBAD1  DIM       35         35    268  Car 2 - Address 1
AERTBAD2  DIM       35         35    303  Car 2 - Address 2
AERTBAD3  DIM       35         35    338  Car 2 - Address 3
AERTBAD4  DIM       35         35    373  Car 2 - Address 4
AERTBPST  DIM       8           8    408  Car 2 - Postcode
AERTBREG  DIM       8           8    416  Car 2 - Registration Number
AERTSPAR  DIM       26         26    424  Spare variable
.End of Record                       450
.
.Redefine form fields from key
.
AERTEVNT  FORM      8 
.
